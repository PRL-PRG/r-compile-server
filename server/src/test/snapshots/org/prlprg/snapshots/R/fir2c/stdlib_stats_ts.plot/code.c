#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1536256705_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1536256705_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1536256705_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1536256705_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1536256705_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1536256705_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1536256705_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1536256705_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1536256705_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_ts_plot;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r15_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1536256705
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1536256705_, RHO, CCP);
  // st `ts.plot` = r
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
  // ts_plot = ldf `ts.plot`
  Rsh_Fir_reg_ts_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
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
  // r1 = dyn base(<sym graphics>)
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
  //   graphics = ld graphics;
  //   graphics1 = force? graphics;
  //   checkMissing(graphics1);
  //   return graphics1;
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
  // p1 = prom<V +>{
  //   ldeaths = ld ldeaths;
  //   ldeaths1 = force? ldeaths;
  //   checkMissing(ldeaths1);
  //   return ldeaths1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   mdeaths = ld mdeaths;
  //   mdeaths1 = force? mdeaths;
  //   checkMissing(mdeaths1);
  //   return mdeaths1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   fdeaths = ld fdeaths;
  //   fdeaths1 = force? fdeaths;
  //   checkMissing(fdeaths1);
  //   return fdeaths1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   sym1 = ldf list;
  //   base1 = ldf list in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L2() else L3();
  // L0(r9):
  //   return r9;
  // L2():
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L4() else L5();
  // L3():
  //   r8 = dyn base1[xlab, ylab, lty]("year", "deaths", <lang c(`:`(1.0, 3.0))>);
  //   goto L0(r8);
  // L1(r11):
  //   list = ldf list in base;
  //   r13 = dyn list("year", "deaths", r11);
  //   goto L0(r13);
  // L4():
  //   c = ldf c in base;
  //   r12 = dyn c(<int 1, 2, 3>);
  //   goto L1(r12);
  // L5():
  //   r10 = dyn base2(<lang `:`(1.0, 3.0)>);
  //   goto L1(r10);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r15 = dyn ts_plot[, , , gpars](p1, p2, p3, p4)
  SEXP Rsh_Fir_array_args13[4];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args13[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args13[3] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ts_plot, 4, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names6, CCP, RHO);
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
  // deopt 15 [r15]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0()
  // L0()
  goto L0_;

L6_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_graphics;
  SEXP Rsh_Fir_reg_graphics1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // graphics = ld graphics
  Rsh_Fir_reg_graphics = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // graphics1 = force? graphics
  Rsh_Fir_reg_graphics1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_graphics);
  // checkMissing(graphics1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_graphics1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return graphics1
  return Rsh_Fir_reg_graphics1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ldeaths;
  SEXP Rsh_Fir_reg_ldeaths1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ldeaths = ld ldeaths
  Rsh_Fir_reg_ldeaths = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // ldeaths1 = force? ldeaths
  Rsh_Fir_reg_ldeaths1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ldeaths);
  // checkMissing(ldeaths1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_ldeaths1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return ldeaths1
  return Rsh_Fir_reg_ldeaths1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_mdeaths;
  SEXP Rsh_Fir_reg_mdeaths1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // mdeaths = ld mdeaths
  Rsh_Fir_reg_mdeaths = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // mdeaths1 = force? mdeaths
  Rsh_Fir_reg_mdeaths1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mdeaths);
  // checkMissing(mdeaths1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_mdeaths1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return mdeaths1
  return Rsh_Fir_reg_mdeaths1_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fdeaths;
  SEXP Rsh_Fir_reg_fdeaths1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fdeaths = ld fdeaths
  Rsh_Fir_reg_fdeaths = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // fdeaths1 = force? fdeaths
  Rsh_Fir_reg_fdeaths1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdeaths);
  // checkMissing(fdeaths1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_fdeaths1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return fdeaths1
  return Rsh_Fir_reg_fdeaths1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard1 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r9
  return Rsh_Fir_reg_r9_;

L2_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard2 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r8 = dyn base1[xlab, ylab, lty]("year", "deaths", <lang c(`:`(1.0, 3.0))>)
  SEXP Rsh_Fir_array_args9[3];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 3, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L0_;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r13 = dyn list("year", "deaths", r11)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args10[2] = Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r13_;
  goto L0_;

L4_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r12 = dyn c(<int 1, 2, 3>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r12)
  // L1(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L1_;

L5_:;
  // r10 = dyn base2(<lang `:`(1.0, 3.0)>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r10)
  // L1(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L1_;
}
SEXP Rsh_Fir_user_function_inner1536256705_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1536256705 dynamic dispatch ([`...`, gpars])

  return Rsh_Fir_user_version_inner1536256705_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1536256705_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1536256705 version 0 (dots, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1536256705/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_gpars;
  SEXP Rsh_Fir_reg_gpars_isMissing;
  SEXP Rsh_Fir_reg_gpars_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_list1_;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg__in_;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_m;
  SEXP Rsh_Fir_reg_m1_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_gpars1_;
  SEXP Rsh_Fir_reg_gpars2_;
  SEXP Rsh_Fir_reg_dots2_;
  SEXP Rsh_Fir_reg_dots3_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_dots5_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_m2_;
  SEXP Rsh_Fir_reg_m3_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_dots6_;
  SEXP Rsh_Fir_reg_dots7_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_dots9_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_m4_;
  SEXP Rsh_Fir_reg_m5_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_do_call;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_gpars3_;
  SEXP Rsh_Fir_reg_gpars4_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_gpars6_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_NCOL;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_deparse1_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_do_call1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r52_;

  // Bind parameters
  Rsh_Fir_reg_ddd = PARAMS[0];
  Rsh_Fir_reg_gpars = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // gpars_isMissing = missing.0(gpars)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_gpars;
  Rsh_Fir_reg_gpars_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args14);
  // if gpars_isMissing then L0() else L1(gpars)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_gpars_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(gpars)
    Rsh_Fir_reg_gpars_orDefault = Rsh_Fir_reg_gpars;
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
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1536256705_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_gpars_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st gpars = gpars_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_gpars_orDefault, RHO);
  (void)(Rsh_Fir_reg_gpars_orDefault);
  // sym1 = ldf list
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard1 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L2_:;
  // st dots = r5
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard2 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L15_:;
  // list1 = ldf list
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L17() else D0()
  // L17()
  goto L17_;

L16_:;
  // r4 = dyn base1(<sym ...>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_1;
  goto L2_;

D0_:;
  // deopt 2 []
  Rsh_Fir_deopt(2, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // st pars = r8
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r8_1, RHO);
  (void)(Rsh_Fir_reg_r8_1);
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L22() else D3()
  // L22()
  goto L22_;

L17_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // r6 = dyn list1[`...`](ddd1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L18() else D1()
  // L18()
  goto L18_;

L19_:;
  // c = ldf c in base
  Rsh_Fir_reg_c1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r9 = dyn c("xlab", "ylab", "xlim", "ylim", "col", "lty", "lwd", "type", "main", "sub", "log")
  SEXP Rsh_Fir_array_args20[11];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args20[3] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args20[4] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args20[5] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args20[6] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args20[7] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args20[8] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args20[9] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args20[10] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names9[11];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_array_arg_names9[4] = R_MissingArg;
  Rsh_Fir_array_arg_names9[5] = R_MissingArg;
  Rsh_Fir_array_arg_names9[6] = R_MissingArg;
  Rsh_Fir_array_arg_names9[7] = R_MissingArg;
  Rsh_Fir_array_arg_names9[8] = R_MissingArg;
  Rsh_Fir_array_arg_names9[9] = R_MissingArg;
  Rsh_Fir_array_arg_names9[10] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1, 11, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L21() else D2()
  // L21()
  goto L21_;

L20_:;
  // r7 = dyn base2("xlab", "ylab", "xlim", "ylim", "col", "lty", "lwd", "type", "main", "sub", "log")
  SEXP Rsh_Fir_array_args21[11];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args21[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args21[3] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args21[4] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args21[5] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args21[6] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args21[7] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args21[8] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args21[9] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args21[10] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names10[11];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_array_arg_names10[4] = R_MissingArg;
  Rsh_Fir_array_arg_names10[5] = R_MissingArg;
  Rsh_Fir_array_arg_names10[6] = R_MissingArg;
  Rsh_Fir_array_arg_names10[7] = R_MissingArg;
  Rsh_Fir_array_arg_names10[8] = R_MissingArg;
  Rsh_Fir_array_arg_names10[9] = R_MissingArg;
  Rsh_Fir_array_arg_names10[10] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 11, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r7_;
  goto L3_;

D1_:;
  // deopt 4 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 20 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L2_;

L21_:;
  // goto L3(r9)
  // L3(r9)
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r9_1;
  goto L3_;

L22_:;
  // p1 = prom<V +>{
  //   sym3 = ldf names;
  //   base3 = ldf names in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r11):
  //   return r11;
  // L1():
  //   dots = ld dots;
  //   dots1 = force? dots;
  //   checkMissing(dots1);
  //   names = ldf names in base;
  //   r12 = dyn names(dots1);
  //   goto L0(r12);
  // L2():
  //   r10 = dyn base3(<sym dots>);
  //   goto L0(r10);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1536256705_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   pars = ld pars;
  //   pars1 = force? pars;
  //   checkMissing(pars1);
  //   return pars1;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1536256705_2, 0, NULL, CCP, RHO);
  // r15 = dyn _in_(p1, p2)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L23() else D4()
  // L23()
  goto L23_;

D4_:;
  // deopt 26 [r15]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L23_:;
  // st m = r15
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r15_1, RHO);
  (void)(Rsh_Fir_reg_r15_1);
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard4 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L4_:;
  // c1 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args29);
  // if c1 then L28() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L28()
    goto L28_;
  } else {
  // L5()
    goto L5_;
  }

L24_:;
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L26() else D5()
  // L26()
  goto L26_;

L25_:;
  // r16 = dyn base4(<sym m>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L4(r16)
  // L4(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L4_;

D5_:;
  // deopt 30 [m]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_m;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // do_call = ldf `do.call`
  Rsh_Fir_reg_do_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L44() else D13()
  // L44()
  goto L44_;

L26_:;
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r18 = dyn length(m1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_m1_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L27() else D6()
  // L27()
  goto L27_;

L28_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard5 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

D6_:;
  // deopt 33 [r18]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 56 []
  Rsh_Fir_deopt(56, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // st gpars = r20
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // dots6 = ld dots
  Rsh_Fir_reg_dots6_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L38() else D11()
  // L38()
  goto L38_;

L27_:;
  // goto L4(r18)
  // L4(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L4_;

L29_:;
  // gpars1 = ld gpars
  Rsh_Fir_reg_gpars1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L31() else D7()
  // L31()
  goto L31_;

L30_:;
  // r19 = dyn base5(<sym gpars>, <lang `[`(dots, m)>)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L6(r19)
  // L6(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L6_;

L44_:;
  // p3 = prom<V +>{
  //   dots10 = ld dots;
  //   dots11 = force? dots10;
  //   checkMissing(dots11);
  //   return dots11;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1536256705_3, 0, NULL, CCP, RHO);
  // r26 = dyn do_call("ts.union", p3)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_do_call, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L45() else D14()
  // L45()
  goto L45_;

D7_:;
  // deopt 36 [gpars1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_gpars1_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 46 [dots6]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_dots6_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 59 [r26]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L31_:;
  // gpars2 = force? gpars1
  Rsh_Fir_reg_gpars2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_gpars1_);
  // checkMissing(gpars2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_gpars2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // dots2 = ld dots
  Rsh_Fir_reg_dots2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L32() else D8()
  // L32()
  goto L32_;

L38_:;
  // dots7 = force? dots6
  Rsh_Fir_reg_dots7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dots6_);
  // checkMissing(dots7)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dots7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(dots7)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dots7_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args39);
  // if c4 then L39() else L40(dots7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L39()
    goto L39_;
  } else {
  // L40(dots7)
    Rsh_Fir_reg_dots9_ = Rsh_Fir_reg_dots7_;
    goto L40_;
  }

L45_:;
  // st sers = r26
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // sym6 = ldf `is.null`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base6 = ldf `is.null` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard6 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

D8_:;
  // deopt 38 [dots2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_dots2_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L8_:;
  // st dots = dx3
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L9()
  // L9()
  goto L9_;

L10_:;
  // c7 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args41);
  // if c7 then L53() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L53()
    goto L53_;
  } else {
  // L11()
    goto L11_;
  }

L32_:;
  // dots3 = force? dots2
  Rsh_Fir_reg_dots3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dots2_);
  // checkMissing(dots3)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dots3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(dots3)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dots3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args43);
  // if c2 then L33() else L34(dots3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L33()
    goto L33_;
  } else {
  // L34(dots3)
    Rsh_Fir_reg_dots5_ = Rsh_Fir_reg_dots3_;
    goto L34_;
  }

L39_:;
  // dr2 = tryDispatchBuiltin.1("[", dots7)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_dots7_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args44);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if dc1 then L41() else L40(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L41()
    goto L41_;
  } else {
  // L40(dr2)
    Rsh_Fir_reg_dots9_ = Rsh_Fir_reg_dr2_;
    goto L40_;
  }

L40_:;
  // m4 = ld m
  Rsh_Fir_reg_m4_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L42() else D12()
  // L42()
  goto L42_;

L46_:;
  // gpars3 = ld gpars
  Rsh_Fir_reg_gpars3_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L48() else D15()
  // L48()
  goto L48_;

L47_:;
  // r27 = dyn base6(<lang `$`(gpars, ylab)>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L10(r27)
  // L10(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L10_;

D12_:;
  // deopt 48 [dots9, m4]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_dots9_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_m4_;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 62 [gpars3]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_gpars3_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L7_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r22 = dyn c3(gpars2, dx1)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_gpars2_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L37() else D10()
  // L37()
  goto L37_;

L11_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // do_call1 = ldf `do.call`
  Rsh_Fir_reg_do_call1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L65() else D20()
  // L65()
  goto L65_;

L33_:;
  // dr = tryDispatchBuiltin.1("[", dots3)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_dots3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args48);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc then L35() else L34(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L35()
    goto L35_;
  } else {
  // L34(dr)
    Rsh_Fir_reg_dots5_ = Rsh_Fir_reg_dr;
    goto L34_;
  }

L34_:;
  // m2 = ld m
  Rsh_Fir_reg_m2_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L36() else D9()
  // L36()
  goto L36_;

L41_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L8(dx2)
  // L8(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L8_;

L42_:;
  // m5 = force? m4
  Rsh_Fir_reg_m5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m4_);
  // checkMissing(m5)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_m5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // r23 = `!`(m5)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_m5_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args52);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r24 = dyn __1(dots9, r23)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dots9_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L8(r24)
  // L8(r24)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r24_;
  goto L8_;

L48_:;
  // gpars4 = force? gpars3
  Rsh_Fir_reg_gpars4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_gpars3_);
  // checkMissing(gpars4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_gpars4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(gpars4)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_gpars4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args55);
  // if c5 then L50() else L51(gpars4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L50()
    goto L50_;
  } else {
  // L51(gpars4)
    Rsh_Fir_reg_gpars6_ = Rsh_Fir_reg_gpars4_;
    goto L51_;
  }

L53_:;
  // NCOL = ldf NCOL
  Rsh_Fir_reg_NCOL = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L54() else D16()
  // L54()
  goto L54_;

D9_:;
  // deopt 40 [dots5, m2]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_dots5_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_m2_;
  Rsh_Fir_deopt(40, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 44 [r22]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 67 []
  Rsh_Fir_deopt(67, 0, NULL, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 84 []
  Rsh_Fir_deopt(84, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L7(dx)
  // L7(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L7_;

L36_:;
  // m3 = force? m2
  Rsh_Fir_reg_m3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m2_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r21 = dyn __(dots5, m3)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dots5_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_m3_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L7(r21)
  // L7(r21)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r21_;
  goto L7_;

L37_:;
  // goto L6(r22)
  // L6(r22)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r22_;
  goto L6_;

L49_:;
  // c6 = `==`(dx6, NULL)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dx6_;
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args58);
  // goto L10(c6)
  // L10(c6)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_c6_;
  goto L10_;

L50_:;
  // dr4 = tryDispatchBuiltin.1("$", gpars4)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_gpars4_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args59);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc2 then L52() else L51(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L52()
    goto L52_;
  } else {
  // L51(dr4)
    Rsh_Fir_reg_gpars6_ = Rsh_Fir_reg_dr4_;
    goto L51_;
  }

L51_:;
  // r29 = `$`(gpars6, <sym ylab>)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_gpars6_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args61);
  // goto L49(r29)
  // L49(r29)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r29_;
  goto L49_;

L54_:;
  // p4 = prom<V +>{
  //   sers = ld sers;
  //   sers1 = force? sers;
  //   checkMissing(sers1);
  //   return sers1;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1536256705_4, 0, NULL, CCP, RHO);
  // r31 = dyn NCOL(p4)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NCOL, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L55() else D17()
  // L55()
  goto L55_;

L65_:;
  // p6 = prom<V +>{
  //   sym8 = ldf c;
  //   base8 = ldf c in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L2() else L3();
  // L0(r46):
  //   return r46;
  // L2():
  //   sym9 = ldf list;
  //   base9 = ldf list in base;
  //   guard9 = `==`.4(sym9, base9);
  //   if guard9 then L4() else L5();
  // L3():
  //   r45 = dyn base8(<lang list(sers, plot.type="single")>, <sym gpars>);
  //   goto L0(r45);
  // L1(r48):
  //   gpars7 = ld gpars;
  //   gpars8 = force? gpars7;
  //   checkMissing(gpars8);
  //   c10 = ldf c in base;
  //   r50 = dyn c10(r48, gpars8);
  //   goto L0(r50);
  // L4():
  //   sers2 = ld sers;
  //   sers3 = force? sers2;
  //   checkMissing(sers3);
  //   list2 = ldf list in base;
  //   r49 = dyn list2(sers3, "single");
  //   goto L1(r49);
  // L5():
  //   r47 = dyn base9[, `plot.type`](<sym sers>, "single");
  //   goto L1(r47);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1536256705_5, 0, NULL, CCP, RHO);
  // r52 = dyn do_call1("plot.ts", p6)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_do_call1_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L66() else D21()
  // L66()
  goto L66_;

D17_:;
  // deopt 69 [r31]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 87 [r52]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L52_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L49(dx5)
  // L49(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L49_;

L55_:;
  // r32 = `>`(r31, 1.0)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 50);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args74);
  // c8 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args75);
  // if c8 then L56() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L56()
    goto L56_;
  } else {
  // L12()
    goto L12_;
  }

L66_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r52
  return Rsh_Fir_reg_r52_;

L12_:;
  // deparse1 = ldf deparse1
  Rsh_Fir_reg_deparse1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // check L58() else D18()
  // L58()
  goto L58_;

L13_:;
  // l = ld gpars
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // c9 = `is.object`(l)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args76);
  // if c9 then L61() else L62(r33, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L61()
    goto L61_;
  } else {
  // L62(r33, l)
    Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r33_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L62_;
  }

L56_:;
  // goto L13("")
  // L13("")
  Rsh_Fir_reg_r33_ = Rsh_const(CCP, 52);
  goto L13_;

D18_:;
  // deopt 75 []
  Rsh_Fir_deopt(75, 0, NULL, CCP, RHO);
  return R_NilValue;

L58_:;
  // p5 = prom<V +>{
  //   sym7 = ldf substitute;
  //   base7 = ldf substitute in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r35):
  //   return r35;
  // L1():
  //   substitute = ldf substitute in base;
  //   r36 = dyn substitute(<sym ...>);
  //   goto L0(r36);
  // L2():
  //   r34 = dyn base7(<sym ...>);
  //   goto L0(r34);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1536256705_6, 0, NULL, CCP, RHO);
  // r38 = dyn deparse1(p5)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse1_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L59() else D19()
  // L59()
  goto L59_;

L60_:;
  // st gpars = dx8
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_dx8_, RHO);
  (void)(Rsh_Fir_reg_dx8_);
  // goto L14()
  // L14()
  goto L14_;

L61_:;
  // dr6 = tryDispatchBuiltin.0("$<-", l, r33)
  SEXP Rsh_Fir_array_args81[3];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args81[2] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args81);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // if dc3 then L63() else L62(r33, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L63()
    goto L63_;
  } else {
  // L62(r33, dr6)
    Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r33_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr6_;
    goto L62_;
  }

L62_:;
  // r43 = `$<-`(l2, <sym ylab>, r33)
  SEXP Rsh_Fir_array_args83[3];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args83[2] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(21, RHO, 3, Rsh_Fir_array_args83);
  // goto L60(r40, r43)
  // L60(r40, r43)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r43_;
  goto L60_;

D19_:;
  // deopt 77 [r38]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L13(r38)
  // L13(r38)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r38_;
  goto L13_;

L63_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // goto L60(r33, dx7)
  // L60(r33, dx7)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L60_;
}
SEXP Rsh_Fir_user_promise_inner1536256705_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_list1;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1536256705/0: expected 0, got %d", NCAPTURES);

  // sym = ldf list
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
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
  Rsh_Fir_reg_list1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn list()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1, 0, NULL, NULL, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 0, NULL, NULL, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1536256705_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_dots;
  SEXP Rsh_Fir_reg_dots1_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r12_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1536256705/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf names
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base3 = ldf names in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r11
  return Rsh_Fir_reg_r11_1;

L1_:;
  // dots = ld dots
  Rsh_Fir_reg_dots = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // dots1 = force? dots
  Rsh_Fir_reg_dots1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dots);
  // checkMissing(dots1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dots1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r12 = dyn names(dots1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dots1_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r12_1;
  goto L0_;

L2_:;
  // r10 = dyn base3(<sym dots>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r10_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1536256705_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_pars;
  SEXP Rsh_Fir_reg_pars1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1536256705/0: expected 0, got %d", NCAPTURES);

  // pars = ld pars
  Rsh_Fir_reg_pars = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // pars1 = force? pars
  Rsh_Fir_reg_pars1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pars);
  // checkMissing(pars1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_pars1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return pars1
  return Rsh_Fir_reg_pars1_;
}
SEXP Rsh_Fir_user_promise_inner1536256705_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dots10_;
  SEXP Rsh_Fir_reg_dots11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1536256705/0: expected 0, got %d", NCAPTURES);

  // dots10 = ld dots
  Rsh_Fir_reg_dots10_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // dots11 = force? dots10
  Rsh_Fir_reg_dots11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dots10_);
  // checkMissing(dots11)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dots11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return dots11
  return Rsh_Fir_reg_dots11_;
}
SEXP Rsh_Fir_user_promise_inner1536256705_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sers;
  SEXP Rsh_Fir_reg_sers1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1536256705/0: expected 0, got %d", NCAPTURES);

  // sers = ld sers
  Rsh_Fir_reg_sers = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // sers1 = force? sers
  Rsh_Fir_reg_sers1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sers);
  // checkMissing(sers1)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sers1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return sers1
  return Rsh_Fir_reg_sers1_;
}
SEXP Rsh_Fir_user_promise_inner1536256705_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_sers2_;
  SEXP Rsh_Fir_reg_sers3_;
  SEXP Rsh_Fir_reg_list2_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_gpars7_;
  SEXP Rsh_Fir_reg_gpars8_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_r50_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1536256705/0: expected 0, got %d", NCAPTURES);

  // sym8 = ldf c
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base8 = ldf c in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args64);
  // if guard8 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r46
  return Rsh_Fir_reg_r46_;

L2_:;
  // sym9 = ldf list
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base9 = ldf list in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args65);
  // if guard9 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r45 = dyn base8(<lang list(sers, plot.type="single")>, <sym gpars>)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r45)
  // L0(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L0_;

L1_:;
  // gpars7 = ld gpars
  Rsh_Fir_reg_gpars7_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // gpars8 = force? gpars7
  Rsh_Fir_reg_gpars8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_gpars7_);
  // checkMissing(gpars8)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_gpars8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // c10 = ldf c in base
  Rsh_Fir_reg_c10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r50 = dyn c10(r48, gpars8)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_gpars8_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c10_, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(r50)
  // L0(r50)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r50_;
  goto L0_;

L4_:;
  // sers2 = ld sers
  Rsh_Fir_reg_sers2_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // sers3 = force? sers2
  Rsh_Fir_reg_sers3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sers2_);
  // checkMissing(sers3)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_sers3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // list2 = ldf list in base
  Rsh_Fir_reg_list2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r49 = dyn list2(sers3, "single")
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sers3_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2_, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L1(r49)
  // L1(r49)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r49_;
  goto L1_;

L5_:;
  // r47 = dyn base9[, `plot.type`](<sym sers>, "single")
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = Rsh_const(CCP, 48);
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L1(r47)
  // L1(r47)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner1536256705_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_substitute;
  SEXP Rsh_Fir_reg_r36_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1536256705/0: expected 0, got %d", NCAPTURES);

  // sym7 = ldf substitute
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // base7 = ldf substitute in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args77);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r35
  return Rsh_Fir_reg_r35_;

L1_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r36 = dyn substitute(<sym ...>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0(r36)
  // L0(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L0_;

L2_:;
  // r34 = dyn base7(<sym ...>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
