#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3928273020_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3928273020_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3928273020_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3928273020_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3928273020_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3928273020_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3928273020_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3928273020_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3928273020_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3928273020_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_require;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_autoload;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_search;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_ls;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg__Autoloaded;
  SEXP Rsh_Fir_reg__Autoloaded1_;
  SEXP Rsh_Fir_reg_sort;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_interpSpline;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_search1_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_detach;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_search2_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_interpSpline1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_search3_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_detach1_;
  SEXP Rsh_Fir_reg_r25_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3928273020
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3928273020_, RHO, CCP);
  // st autoload = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf require
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf require in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // autoload = ldf autoload
  Rsh_Fir_reg_autoload = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

L1_:;
  // require = ldf require
  Rsh_Fir_reg_require = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r1 = dyn base(<sym stats>)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D0_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   stats = ld stats;
  //   stats1 = force? stats;
  //   checkMissing(stats1);
  //   return stats1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r4 = dyn require(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_require, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

L5_:;
  // r5 = dyn autoload("interpSpline", "splines")
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_autoload, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0()
  // L0()
  goto L0_;

L6_:;
  // search = ldf search
  Rsh_Fir_reg_search = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // r6 = dyn search()
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_search, 0, NULL, NULL, CCP, RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

D5_:;
  // deopt 15 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // ls = ldf ls
  Rsh_Fir_reg_ls = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

D6_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // r7 = dyn ls("Autoloads")
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ls, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

D7_:;
  // deopt 19 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // _Autoloaded = ld `.Autoloaded`
  Rsh_Fir_reg__Autoloaded = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

D8_:;
  // deopt 20 [_Autoloaded]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg__Autoloaded;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L11_:;
  // _Autoloaded1 = force? _Autoloaded
  Rsh_Fir_reg__Autoloaded1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Autoloaded);
  // checkMissing(_Autoloaded1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg__Autoloaded1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // sort = ldf sort
  Rsh_Fir_reg_sort = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L12() else D9()
  // L12()
  goto L12_;

D9_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p1 = prom<V +>{
  //   __ = ldf `::`;
  //   r8 = dyn __("stats", "rnorm");
  //   checkFun.0(r8);
  //   r9 = r8 as cls;
  //   r10 = dyn r9(12.0);
  //   return r10;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r12 = dyn sort(p1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L13() else D10()
  // L13()
  goto L13_;

D10_:;
  // deopt 25 [r12]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L13_:;
  // st x = r12
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L14() else D11()
  // L14()
  goto L14_;

D11_:;
  // deopt 27 [x]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L14_:;
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // r13 = `^`(x1, 2.0)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args12);
  // st y = r13
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // interpSpline = ldf interpSpline
  Rsh_Fir_reg_interpSpline = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L15() else D12()
  // L15()
  goto L15_;

D12_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p2 = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   return x3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   y = ld y;
  //   y1 = force? y;
  //   checkMissing(y1);
  //   return y1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r16 = dyn interpSpline(p2, p3)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_interpSpline, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L16() else D13()
  // L16()
  goto L16_;

D13_:;
  // deopt 36 [r16]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L16_:;
  // st is = r16
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // search1 = ldf search
  Rsh_Fir_reg_search1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L17() else D14()
  // L17()
  goto L17_;

D14_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // r17 = dyn search1()
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_search1_, 0, NULL, NULL, CCP, RHO);
  // check L18() else D15()
  // L18()
  goto L18_;

D15_:;
  // deopt 40 [r17]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L18_:;
  // detach = ldf detach
  Rsh_Fir_reg_detach = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L19() else D16()
  // L19()
  goto L19_;

D16_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // r18 = dyn detach("package:splines")
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_detach, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L20() else D17()
  // L20()
  goto L20_;

D17_:;
  // deopt 44 [r18]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L20_:;
  // search2 = ldf search
  Rsh_Fir_reg_search2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L21() else D18()
  // L21()
  goto L21_;

D18_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // r19 = dyn search2()
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_search2_, 0, NULL, NULL, CCP, RHO);
  // check L22() else D19()
  // L22()
  goto L22_;

D19_:;
  // deopt 47 [r19]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L22_:;
  // interpSpline1 = ldf interpSpline
  Rsh_Fir_reg_interpSpline1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L23() else D20()
  // L23()
  goto L23_;

D20_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p4 = prom<V +>{
  //   x4 = ld x;
  //   x5 = force? x4;
  //   checkMissing(x5);
  //   return x5;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   y2 = ld y;
  //   y3 = force? y2;
  //   checkMissing(y3);
  //   x6 = ld x;
  //   x7 = force? x6;
  //   checkMissing(x7);
  //   r21 = `+`(y3, x7);
  //   return r21;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r23 = dyn interpSpline1(p4, p5)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_interpSpline1_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L24() else D21()
  // L24()
  goto L24_;

D21_:;
  // deopt 52 [r23]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L24_:;
  // st is2 = r23
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // search3 = ldf search
  Rsh_Fir_reg_search3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L25() else D22()
  // L25()
  goto L25_;

D22_:;
  // deopt 55 []
  Rsh_Fir_deopt(55, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // r24 = dyn search3()
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_search3_, 0, NULL, NULL, CCP, RHO);
  // check L26() else D23()
  // L26()
  goto L26_;

D23_:;
  // deopt 56 [r24]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L26_:;
  // detach1 = ldf detach
  Rsh_Fir_reg_detach1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L27() else D24()
  // L27()
  goto L27_;

D24_:;
  // deopt 58 []
  Rsh_Fir_deopt(58, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // r25 = dyn detach1("package:splines")
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_detach1_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L28() else D25()
  // L28()
  goto L28_;

D25_:;
  // deopt 60 [r25]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L28_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r25
  return Rsh_Fir_reg_r25_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_stats;
  SEXP Rsh_Fir_reg_stats1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // stats = ld stats
  Rsh_Fir_reg_stats = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // stats1 = force? stats
  Rsh_Fir_reg_stats1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stats);
  // checkMissing(stats1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_stats1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return stats1
  return Rsh_Fir_reg_stats1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // r8 = dyn __("stats", "rnorm")
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // checkFun.0(r8)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r8_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args8));
  // r9 = r8 as cls
  Rsh_Fir_reg_r9_ = Rsh_Fir_cast(Rsh_Fir_reg_r8_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r10 = dyn r9(12.0)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r9_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return x3
  return Rsh_Fir_reg_x3_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_y1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return y1
  return Rsh_Fir_reg_y1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return x5
  return Rsh_Fir_reg_x5_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_reg_y3_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_r21_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // y2 = ld y
  Rsh_Fir_reg_y2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // y3 = force? y2
  Rsh_Fir_reg_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y2_);
  // checkMissing(y3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_y3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // x6 = ld x
  Rsh_Fir_reg_x6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // x7 = force? x6
  Rsh_Fir_reg_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x6_);
  // checkMissing(x7)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // r21 = `+`(y3, x7)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_x7_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args20);
  // return r21
  return Rsh_Fir_reg_r21_;
}
SEXP Rsh_Fir_user_function_inner3928273020_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3928273020 dynamic dispatch ([name, package, reset, `...`])

  return Rsh_Fir_user_version_inner3928273020_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3928273020_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3928273020 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3928273020/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_name;
  SEXP Rsh_Fir_reg_package;
  SEXP Rsh_Fir_reg_reset;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_reset_isMissing;
  SEXP Rsh_Fir_reg_reset_orDefault;
  SEXP Rsh_Fir_reg_reset1_;
  SEXP Rsh_Fir_reg_reset2_;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_exists;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_match_call;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_as_name;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_eval;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_as_name1_;
  SEXP Rsh_Fir_reg_r21_1;
  SEXP Rsh_Fir_reg_newcall;
  SEXP Rsh_Fir_reg_newcall1_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_as_call;
  SEXP Rsh_Fir_reg_r23_1;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_r25_1;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_package1_;
  SEXP Rsh_Fir_reg_package2_;
  SEXP Rsh_Fir_reg__Autoloaded1;
  SEXP Rsh_Fir_reg__Autoloaded1_1;
  SEXP Rsh_Fir_reg_match;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_assign;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_do_call;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_invisible;
  SEXP Rsh_Fir_reg_r50_;

  // Bind parameters
  Rsh_Fir_reg_name = PARAMS[0];
  Rsh_Fir_reg_package = PARAMS[1];
  Rsh_Fir_reg_reset = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st name = name
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_name, RHO);
  (void)(Rsh_Fir_reg_name);
  // st package = package
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_package, RHO);
  (void)(Rsh_Fir_reg_package);
  // reset_isMissing = missing.0(reset)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_reset;
  Rsh_Fir_reg_reset_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args23);
  // if reset_isMissing then L0(FALSE) else L0(reset)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_reset_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_reset_orDefault = Rsh_const(CCP, 24);
    goto L0_;
  } else {
  // L0(reset)
    Rsh_Fir_reg_reset_orDefault = Rsh_Fir_reg_reset;
    goto L0_;
  }

L0_:;
  // st reset = reset_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_reset_orDefault, RHO);
  (void)(Rsh_Fir_reg_reset_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // reset1 = ld reset
  Rsh_Fir_reg_reset1_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L12() else D0()
  // L12()
  goto L12_;

D0_:;
  // deopt 0 [reset1]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_reset1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L12_:;
  // reset2 = force? reset1
  Rsh_Fir_reg_reset2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_reset1_);
  // checkMissing(reset2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_reset2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // r = `!`(reset2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_reset2_;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args25);
  // c = `as.logical`(r)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args26);
  // if c then L13() else L1(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L13()
    goto L13_;
  } else {
  // L1(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c;
    goto L1_;
  }

L1_:;
  // c6 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args27);
  // if c6 then L17() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L17()
    goto L17_;
  } else {
  // L2()
    goto L2_;
  }

L13_:;
  // exists = ldf exists
  Rsh_Fir_reg_exists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L14() else D1()
  // L14()
  goto L14_;

D1_:;
  // deopt 4 [c]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_c;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L2_:;
  // goto L3()
  // L3()
  goto L3_;

L3_:;
  // match_call = ldf `match.call`
  Rsh_Fir_reg_match_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L21() else D5()
  // L21()
  goto L21_;

L14_:;
  // p = prom<V +>{
  //   name1 = ld name;
  //   name2 = force? name1;
  //   checkMissing(name2);
  //   return name2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3928273020_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   _GlobalEnv = ld `.GlobalEnv`;
  //   _GlobalEnv1 = force? _GlobalEnv;
  //   checkMissing(_GlobalEnv1);
  //   return _GlobalEnv1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3928273020_1, 0, NULL, CCP, RHO);
  // r3 = dyn exists[, envir, inherits](p, p1, FALSE)
  SEXP Rsh_Fir_array_args30[3];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args30[2] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_arg_names11[2] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_exists, 3, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L15() else D2()
  // L15()
  goto L15_;

L17_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

D2_:;
  // deopt 10 [c, r3]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(10, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // c3 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args31);
  // c4 = `&&`(c, c3)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args32);
  // goto L1(c4)
  // L1(c4)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c4_;
  goto L1_;

L18_:;
  // r4 = dyn stop("an object with that name already exists")
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L19() else D4()
  // L19()
  goto L19_;

L21_:;
  // r6 = dyn match_call()
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_call, 0, NULL, NULL, CCP, RHO);
  // check L22() else D6()
  // L22()
  goto L22_;

D4_:;
  // deopt 15 [r4]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 20 [r6]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L3()
  // L3()
  goto L3_;

L22_:;
  // st m = r6
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_r6_1, RHO);
  (void)(Rsh_Fir_reg_r6_1);
  // as_name = ldf `as.name`
  Rsh_Fir_reg_as_name = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L23() else D7()
  // L23()
  goto L23_;

D7_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // r7 = dyn as_name("list")
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_name, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L24() else D8()
  // L24()
  goto L24_;

D8_:;
  // deopt 25 [r7]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L24_:;
  // l = ld m
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // c7 = `is.object`(l)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args35);
  // if c7 then L25() else L26(r7, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L25()
    goto L25_;
  } else {
  // L26(r7, l)
    Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r7_1;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L26_;
  }

L4_:;
  // st m = dx1
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L28() else D9()
  // L28()
  goto L28_;

L25_:;
  // dr = tryDispatchBuiltin.0("[[<-", l, r7)
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args36[2] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args36);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if dc then L27() else L26(r7, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L27()
    goto L27_;
  } else {
  // L26(r7, dr)
    Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r7_1;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L26_;
  }

L26_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r12 = dyn ____(l2, r7, 1)
  SEXP Rsh_Fir_array_args38[3];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L4(r12)
  // L4(r12)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r12_1;
  goto L4_;

D9_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L4(dx)
  // L4(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

L28_:;
  // p2 = prom<V +>{
  //   m = ld m;
  //   m1 = force? m;
  //   checkMissing(m1);
  //   return m1;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3928273020_2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r14 = dyn parent_frame();
  //   return r14;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3928273020_3, 0, NULL, CCP, RHO);
  // r16 = dyn eval(p2, p3)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L29() else D10()
  // L29()
  goto L29_;

D10_:;
  // deopt 35 [r16]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r16_1;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L29_:;
  // st newcall = r16
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_r16_1, RHO);
  (void)(Rsh_Fir_reg_r16_1);
  // sym = ldf `as.call`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base = ldf `as.call` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L5_:;
  // st newcall = r18
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_r18_1, RHO);
  (void)(Rsh_Fir_reg_r18_1);
  // l3 = ld newcall
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // c9 = `is.object`(l3)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args43);
  // if c9 then L40() else L41(NULL, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L40()
    goto L40_;
  } else {
  // L41(NULL, l3)
    Rsh_Fir_reg_r25_1 = Rsh_const(CCP, 44);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L41_;
  }

L30_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard1 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L31_:;
  // r17 = dyn base(<lang c(as.name("autoloader"), newcall)>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L5(r17)
  // L5(r17)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r17_1;
  goto L5_;

L6_:;
  // as_call = ldf `as.call` in base
  Rsh_Fir_reg_as_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r23 = dyn as_call(r20)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r23_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_call, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L38() else D15()
  // L38()
  goto L38_;

L32_:;
  // as_name1 = ldf `as.name`
  Rsh_Fir_reg_as_name1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L34() else D11()
  // L34()
  goto L34_;

L33_:;
  // r19 = dyn base1(<lang as.name("autoloader")>, <sym newcall>)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L6(r19)
  // L6(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_1;
  goto L6_;

L39_:;
  // st newcall = dx3
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym2 = ldf `is.na`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base2 = ldf `is.na` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard2 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L40_:;
  // dr2 = tryDispatchBuiltin.0("$<-", l3, NULL)
  SEXP Rsh_Fir_array_args49[3];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args49[2] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args49);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if dc1 then L42() else L41(NULL, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L42()
    goto L42_;
  } else {
  // L41(NULL, dr2)
    Rsh_Fir_reg_r25_1 = Rsh_const(CCP, 44);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr2_;
    goto L41_;
  }

L41_:;
  // r28 = `$<-`(l5, <sym reset>, NULL)
  SEXP Rsh_Fir_array_args51[3];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args51[2] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(21, RHO, 3, Rsh_Fir_array_args51);
  // goto L39(r28)
  // L39(r28)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r28_;
  goto L39_;

D11_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 50 [r23]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r23_1;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L7_:;
  // c10 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args52);
  // if c10 then L51() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L51()
    goto L51_;
  } else {
  // L9()
    goto L9_;
  }

L34_:;
  // r21 = dyn as_name1("autoloader")
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_name1_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L35() else D12()
  // L35()
  goto L35_;

L38_:;
  // goto L5(r23)
  // L5(r23)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r23_1;
  goto L5_;

L42_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L39(dx2)
  // L39(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L39_;

L43_:;
  // sym3 = ldf match
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // base3 = ldf match in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard3 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L44_:;
  // r29 = dyn base2(<lang match(package, .Autoloaded)>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L7(r29)
  // L7(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L7_;

D12_:;
  // deopt 44 [r21]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r21_1;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L8_:;
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r34 = dyn is_na(r32)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L50() else D19()
  // L50()
  goto L50_;

L9_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // do_call = ldf `do.call`
  Rsh_Fir_reg_do_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // check L55() else D22()
  // L55()
  goto L55_;

L35_:;
  // newcall = ld newcall
  Rsh_Fir_reg_newcall = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L36() else D13()
  // L36()
  goto L36_;

L45_:;
  // package1 = ld package
  Rsh_Fir_reg_package1_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L47() else D16()
  // L47()
  goto L47_;

L46_:;
  // r31 = dyn base3(<sym package>, <sym .Autoloaded>)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L8(r31)
  // L8(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L8_;

L51_:;
  // assign = ldf assign
  Rsh_Fir_reg_assign = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L52() else D20()
  // L52()
  goto L52_;

D13_:;
  // deopt 45 [newcall]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_newcall;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 61 [package1]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_package1_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 70 [r34]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 72 []
  Rsh_Fir_deopt(72, 0, NULL, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 81 []
  Rsh_Fir_deopt(81, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // newcall1 = force? newcall
  Rsh_Fir_reg_newcall1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newcall);
  // checkMissing(newcall1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_newcall1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // c8 = ldf c in base
  Rsh_Fir_reg_c8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r22 = dyn c8(r21, newcall1)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r21_1;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_newcall1_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c8_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L37() else D14()
  // L37()
  goto L37_;

L47_:;
  // package2 = force? package1
  Rsh_Fir_reg_package2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package1_);
  // checkMissing(package2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_package2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // _Autoloaded = ld `.Autoloaded`
  Rsh_Fir_reg__Autoloaded1 = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L48() else D17()
  // L48()
  goto L48_;

L50_:;
  // goto L7(r34)
  // L7(r34)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r34_;
  goto L7_;

L52_:;
  // p4 = prom<V +>{
  //   sym4 = ldf c;
  //   base4 = ldf c in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r36):
  //   return r36;
  // L1():
  //   package3 = ld package;
  //   package4 = force? package3;
  //   checkMissing(package4);
  //   _Autoloaded2 = ld `.Autoloaded`;
  //   _Autoloaded3 = force? _Autoloaded2;
  //   checkMissing(_Autoloaded3);
  //   c11 = ldf c in base;
  //   r37 = dyn c11(package4, _Autoloaded3);
  //   goto L0(r37);
  // L2():
  //   r35 = dyn base4(<sym package>, <sym .Autoloaded>);
  //   goto L0(r35);
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3928273020_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   _AutoloadEnv = ld `.AutoloadEnv`;
  //   _AutoloadEnv1 = force? _AutoloadEnv;
  //   checkMissing(_AutoloadEnv1);
  //   return _AutoloadEnv1;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3928273020_5, 0, NULL, CCP, RHO);
  // r40 = dyn assign[, , envir](".Autoloaded", p4, p5)
  SEXP Rsh_Fir_array_args68[3];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args68[2] = Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assign, 3, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L53() else D21()
  // L53()
  goto L53_;

L55_:;
  // p6 = prom<V +>{
  //   delayedAssign = ld delayedAssign;
  //   delayedAssign1 = force? delayedAssign;
  //   checkMissing(delayedAssign1);
  //   return delayedAssign1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3928273020_6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   sym5 = ldf list;
  //   base5 = ldf list in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r44):
  //   return r44;
  // L1():
  //   name3 = ld name;
  //   name4 = force? name3;
  //   checkMissing(name4);
  //   newcall2 = ld newcall;
  //   newcall3 = force? newcall2;
  //   checkMissing(newcall3);
  //   _GlobalEnv2 = ld `.GlobalEnv`;
  //   _GlobalEnv3 = force? _GlobalEnv2;
  //   checkMissing(_GlobalEnv3);
  //   _AutoloadEnv2 = ld `.AutoloadEnv`;
  //   _AutoloadEnv3 = force? _AutoloadEnv2;
  //   checkMissing(_AutoloadEnv3);
  //   list = ldf list in base;
  //   r45 = dyn list(name4, newcall3, _GlobalEnv3, _AutoloadEnv3);
  //   goto L0(r45);
  // L2():
  //   r43 = dyn base5(<sym name>, <sym newcall>, <sym .GlobalEnv>, <sym .AutoloadEnv>);
  //   goto L0(r43);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3928273020_7, 0, NULL, CCP, RHO);
  // r47 = dyn do_call(p6, p7)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_do_call, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L56() else D23()
  // L56()
  goto L56_;

D14_:;
  // deopt 48 [r22]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 63 [_Autoloaded]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg__Autoloaded1;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 77 [r40]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 84 [r47]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L6(r22)
  // L6(r22)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r22_;
  goto L6_;

L48_:;
  // _Autoloaded1 = force? _Autoloaded
  Rsh_Fir_reg__Autoloaded1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg__Autoloaded1);
  // checkMissing(_Autoloaded1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg__Autoloaded1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r33 = dyn match(package2, _Autoloaded1, NA_INT, NULL)
  SEXP Rsh_Fir_array_args79[4];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_package2_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg__Autoloaded1_1;
  Rsh_Fir_array_args79[2] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args79[3] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names30[4];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_array_arg_names30[3] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L49() else D18()
  // L49()
  goto L49_;

L53_:;
  // goto L10()
  // L10()
  goto L10_;

L56_:;
  // sym6 = ldf invisible
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base6 = ldf invisible in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args80);
  // if guard6 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

D18_:;
  // deopt 68 [r33]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r49
  return Rsh_Fir_reg_r49_;

L49_:;
  // goto L8(r33)
  // L8(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L8_;

L57_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r50 = dyn invisible()
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 0, NULL, NULL, CCP, RHO);
  // check L59() else D24()
  // L59()
  goto L59_;

L58_:;
  // r48 = dyn base6()
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 0, NULL, NULL, CCP, RHO);
  // goto L11(r48)
  // L11(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L11_;

D24_:;
  // deopt 88 [r50]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L11(r50)
  // L11(r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L11_;
}
SEXP Rsh_Fir_user_promise_inner3928273020_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_name1_;
  SEXP Rsh_Fir_reg_name2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3928273020/0: expected 0, got %d", NCAPTURES);

  // name1 = ld name
  Rsh_Fir_reg_name1_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // name2 = force? name1
  Rsh_Fir_reg_name2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name1_);
  // checkMissing(name2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_name2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return name2
  return Rsh_Fir_reg_name2_;
}
SEXP Rsh_Fir_user_promise_inner3928273020_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__GlobalEnv;
  SEXP Rsh_Fir_reg__GlobalEnv1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3928273020/0: expected 0, got %d", NCAPTURES);

  // _GlobalEnv = ld `.GlobalEnv`
  Rsh_Fir_reg__GlobalEnv = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // _GlobalEnv1 = force? _GlobalEnv
  Rsh_Fir_reg__GlobalEnv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__GlobalEnv);
  // checkMissing(_GlobalEnv1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg__GlobalEnv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return _GlobalEnv1
  return Rsh_Fir_reg__GlobalEnv1_;
}
SEXP Rsh_Fir_user_promise_inner3928273020_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_m;
  SEXP Rsh_Fir_reg_m1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3928273020/0: expected 0, got %d", NCAPTURES);

  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return m1
  return Rsh_Fir_reg_m1_;
}
SEXP Rsh_Fir_user_promise_inner3928273020_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_parent_frame;
  SEXP Rsh_Fir_reg_r14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3928273020/0: expected 0, got %d", NCAPTURES);

  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // r14 = dyn parent_frame()
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_inner3928273020_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_package3_;
  SEXP Rsh_Fir_reg_package4_;
  SEXP Rsh_Fir_reg__Autoloaded2_;
  SEXP Rsh_Fir_reg__Autoloaded3_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_r37_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3928273020/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r36
  return Rsh_Fir_reg_r36_;

L1_:;
  // package3 = ld package
  Rsh_Fir_reg_package3_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // package4 = force? package3
  Rsh_Fir_reg_package4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package3_);
  // checkMissing(package4)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_package4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // _Autoloaded2 = ld `.Autoloaded`
  Rsh_Fir_reg__Autoloaded2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // _Autoloaded3 = force? _Autoloaded2
  Rsh_Fir_reg__Autoloaded3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Autoloaded2_);
  // checkMissing(_Autoloaded3)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg__Autoloaded3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // c11 = ldf c in base
  Rsh_Fir_reg_c11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r37 = dyn c11(package4, _Autoloaded3)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_package4_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg__Autoloaded3_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c11_, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(r37)
  // L0(r37)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L0_;

L2_:;
  // r35 = dyn base4(<sym package>, <sym .Autoloaded>)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r35)
  // L0(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3928273020_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__AutoloadEnv;
  SEXP Rsh_Fir_reg__AutoloadEnv1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3928273020/0: expected 0, got %d", NCAPTURES);

  // _AutoloadEnv = ld `.AutoloadEnv`
  Rsh_Fir_reg__AutoloadEnv = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // _AutoloadEnv1 = force? _AutoloadEnv
  Rsh_Fir_reg__AutoloadEnv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__AutoloadEnv);
  // checkMissing(_AutoloadEnv1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg__AutoloadEnv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // return _AutoloadEnv1
  return Rsh_Fir_reg__AutoloadEnv1_;
}
SEXP Rsh_Fir_user_promise_inner3928273020_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_delayedAssign;
  SEXP Rsh_Fir_reg_delayedAssign1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3928273020/0: expected 0, got %d", NCAPTURES);

  // delayedAssign = ld delayedAssign
  Rsh_Fir_reg_delayedAssign = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // delayedAssign1 = force? delayedAssign
  Rsh_Fir_reg_delayedAssign1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_delayedAssign);
  // checkMissing(delayedAssign1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_delayedAssign1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // return delayedAssign1
  return Rsh_Fir_reg_delayedAssign1_;
}
SEXP Rsh_Fir_user_promise_inner3928273020_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_name3_;
  SEXP Rsh_Fir_reg_name4_;
  SEXP Rsh_Fir_reg_newcall2_;
  SEXP Rsh_Fir_reg_newcall3_;
  SEXP Rsh_Fir_reg__GlobalEnv2_;
  SEXP Rsh_Fir_reg__GlobalEnv3_;
  SEXP Rsh_Fir_reg__AutoloadEnv2_;
  SEXP Rsh_Fir_reg__AutoloadEnv3_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r45_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3928273020/0: expected 0, got %d", NCAPTURES);

  // sym5 = ldf list
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // base5 = ldf list in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r44
  return Rsh_Fir_reg_r44_;

L1_:;
  // name3 = ld name
  Rsh_Fir_reg_name3_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // name4 = force? name3
  Rsh_Fir_reg_name4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name3_);
  // checkMissing(name4)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_name4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // newcall2 = ld newcall
  Rsh_Fir_reg_newcall2_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // newcall3 = force? newcall2
  Rsh_Fir_reg_newcall3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newcall2_);
  // checkMissing(newcall3)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_newcall3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // _GlobalEnv2 = ld `.GlobalEnv`
  Rsh_Fir_reg__GlobalEnv2_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // _GlobalEnv3 = force? _GlobalEnv2
  Rsh_Fir_reg__GlobalEnv3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__GlobalEnv2_);
  // checkMissing(_GlobalEnv3)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg__GlobalEnv3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // _AutoloadEnv2 = ld `.AutoloadEnv`
  Rsh_Fir_reg__AutoloadEnv2_ = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // _AutoloadEnv3 = force? _AutoloadEnv2
  Rsh_Fir_reg__AutoloadEnv3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__AutoloadEnv2_);
  // checkMissing(_AutoloadEnv3)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg__AutoloadEnv3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r45 = dyn list(name4, newcall3, _GlobalEnv3, _AutoloadEnv3)
  SEXP Rsh_Fir_array_args75[4];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_name4_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_newcall3_;
  Rsh_Fir_array_args75[2] = Rsh_Fir_reg__GlobalEnv3_;
  Rsh_Fir_array_args75[3] = Rsh_Fir_reg__AutoloadEnv3_;
  SEXP Rsh_Fir_array_arg_names27[4];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_array_arg_names27[3] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 4, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L0(r45)
  // L0(r45)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r45_;
  goto L0_;

L2_:;
  // r43 = dyn base5(<sym name>, <sym newcall>, <sym .GlobalEnv>, <sym .AutoloadEnv>)
  SEXP Rsh_Fir_array_args76[4];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args76[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args76[3] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names28[4];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_array_arg_names28[3] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 4, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0(r43)
  // L0(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
