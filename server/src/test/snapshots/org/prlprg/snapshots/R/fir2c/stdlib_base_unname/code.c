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
SEXP Rsh_Fir_user_function_inner3490908838_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3490908838_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3490908838_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_require1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_rt;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_factor;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_table;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_z;
  SEXP Rsh_Fir_reg_z1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_z3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_barplot;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r26_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3490908838
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3490908838_, RHO, CCP);
  // st unname = r
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
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // sym1 = ldf require
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf require in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L3_:;
  // require = ldf require
  Rsh_Fir_reg_require = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

L4_:;
  // r1 = dyn base(<sym graphics>)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D0_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // rt = ldf rt
  Rsh_Fir_reg_rt = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L11() else D4()
  // L11()
  goto L11_;

L5_:;
  // p = prom<V +>{
  //   graphics = ld graphics;
  //   graphics1 = force? graphics;
  //   checkMissing(graphics1);
  //   return graphics1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r4 = dyn require(p)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_require, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L6() else D1()
  // L6()
  goto L6_;

L7_:;
  // require1 = ldf require
  Rsh_Fir_reg_require1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

L8_:;
  // r5 = dyn base1(<sym stats>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 16 [750.0, 100.0]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_deopt_stack1[1] = Rsh_const(CCP, 6);
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L0()
  // L0()
  goto L0_;

L9_:;
  // p1 = prom<V +>{
  //   stats = ld stats;
  //   stats1 = force? stats;
  //   checkMissing(stats1);
  //   return stats1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r8 = dyn require1(p1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_require1_, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L10() else D3()
  // L10()
  goto L10_;

L11_:;
  // r9 = dyn rt[, df](1500.0, 3.0)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rt, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L12() else D5()
  // L12()
  goto L12_;

D3_:;
  // deopt 12 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 20 [750.0, 100.0, r9]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_deopt_stack3[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(20, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L1()
  // L1()
  goto L1_;

L12_:;
  // r10 = `*`(100.0, r9)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args9);
  // r11 = `+`(750.0, r10)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args10);
  // st col3 = r11
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // factor = ldf factor
  Rsh_Fir_reg_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L13() else D6()
  // L13()
  goto L13_;

D6_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p4 = prom<V +>{
  //   cut = ldf cut;
  //   p2 = prom<V +>{
  //     col3 = ld col3;
  //     col4 = force? col3;
  //     checkMissing(col4);
  //     return col4;
  //   };
  //   p3 = prom<V +>{
  //     r13 = `:`(0.0, 155.0);
  //     r14 = `*`(5.0, r13);
  //     r15 = `+`(360.0, r14);
  //     return r15;
  //   };
  //   r17 = dyn cut[, breaks](p2, p3);
  //   return r17;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r19 = dyn factor(p4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L14() else D7()
  // L14()
  goto L14_;

D7_:;
  // deopt 27 [r19]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L14_:;
  // st breaks = r19
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // table = ldf table
  Rsh_Fir_reg_table = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L15() else D8()
  // L15()
  goto L15_;

D8_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p5 = prom<V +>{
  //   breaks = ld breaks;
  //   breaks1 = force? breaks;
  //   checkMissing(breaks1);
  //   return breaks1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r21 = dyn table(p5)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_table, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L16() else D9()
  // L16()
  goto L16_;

D9_:;
  // deopt 32 [r21]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // st z = r21
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L17() else D10()
  // L17()
  goto L17_;

D10_:;
  // deopt 34 [z]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // c = `is.object`(z1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args20);
  // if c then L18() else L19(z1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L18()
    goto L18_;
  } else {
  // L19(z1)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_z1_;
    goto L19_;
  }

L2_:;
  // barplot = ldf barplot
  Rsh_Fir_reg_barplot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L21() else D11()
  // L21()
  goto L21_;

L18_:;
  // dr = tryDispatchBuiltin.1("[", z1)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc then L20() else L19(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L20()
    goto L20_;
  } else {
  // L19(dr)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_dr;
    goto L19_;
  }

L19_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r22 = dyn __(z3, <int 1, 2, 3, 4, 5>)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_z3_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L2()
  // L2()
  goto L2_;

D11_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L2()
  // L2()
  goto L2_;

L21_:;
  // p7 = prom<V +>{
  //   unname = ldf unname;
  //   p6 = prom<V +>{
  //     z4 = ld z;
  //     z5 = force? z4;
  //     checkMissing(z5);
  //     return z5;
  //   };
  //   r24 = dyn unname(p6);
  //   return r24;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r26 = dyn barplot[, axes](p7, FALSE)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_barplot, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L22() else D12()
  // L22()
  goto L22_;

D12_:;
  // deopt 44 [r26]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L22_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r26
  return Rsh_Fir_reg_r26_;
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
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_graphics1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return graphics1
  return Rsh_Fir_reg_graphics1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_stats;
  SEXP Rsh_Fir_reg_stats1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // stats = ld stats
  Rsh_Fir_reg_stats = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // stats1 = force? stats
  Rsh_Fir_reg_stats1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stats);
  // checkMissing(stats1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_stats1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return stats1
  return Rsh_Fir_reg_stats1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cut;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // cut = ldf cut
  Rsh_Fir_reg_cut = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // p2 = prom<V +>{
  //   col3 = ld col3;
  //   col4 = force? col3;
  //   checkMissing(col4);
  //   return col4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   r13 = `:`(0.0, 155.0);
  //   r14 = `*`(5.0, r13);
  //   r15 = `+`(360.0, r14);
  //   return r15;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r17 = dyn cut[, breaks](p2, p3)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cut, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names5, CCP, RHO);
  // return r17
  return Rsh_Fir_reg_r17_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_col3_;
  SEXP Rsh_Fir_reg_col4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // col3 = ld col3
  Rsh_Fir_reg_col3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // col4 = force? col3
  Rsh_Fir_reg_col4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col3_);
  // checkMissing(col4)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_col4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return col4
  return Rsh_Fir_reg_col4_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r13 = `:`(0.0, 155.0)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args12);
  // r14 = `*`(5.0, r13)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args13);
  // r15 = `+`(360.0, r14)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args14);
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_breaks;
  SEXP Rsh_Fir_reg_breaks1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // breaks = ld breaks
  Rsh_Fir_reg_breaks = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // breaks1 = force? breaks
  Rsh_Fir_reg_breaks1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_breaks);
  // checkMissing(breaks1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_breaks1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return breaks1
  return Rsh_Fir_reg_breaks1_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_unname;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r24_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // unname = ldf unname
  Rsh_Fir_reg_unname = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p6 = prom<V +>{
  //   z4 = ld z;
  //   z5 = force? z4;
  //   checkMissing(z5);
  //   return z5;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r24 = dyn unname(p6)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unname, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names9, CCP, RHO);
  // return r24
  return Rsh_Fir_reg_r24_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_z4_;
  SEXP Rsh_Fir_reg_z5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // z4 = ld z
  Rsh_Fir_reg_z4_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // z5 = force? z4
  Rsh_Fir_reg_z5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z4_);
  // checkMissing(z5)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_z5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return z5
  return Rsh_Fir_reg_z5_;
}
SEXP Rsh_Fir_user_function_inner3490908838_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3490908838 dynamic dispatch ([obj, force])

  return Rsh_Fir_user_version_inner3490908838_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3490908838_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3490908838 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3490908838/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_obj;
  SEXP Rsh_Fir_reg_force;
  SEXP Rsh_Fir_reg_force_isMissing;
  SEXP Rsh_Fir_reg_force_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_obj1_;
  SEXP Rsh_Fir_reg_obj2_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_obj3_;
  SEXP Rsh_Fir_reg_obj4_;
  SEXP Rsh_Fir_reg_dimnames;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_force1_;
  SEXP Rsh_Fir_reg_force2_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_is_data_frame;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_dimnames__;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_obj7_;
  SEXP Rsh_Fir_reg_obj8_;

  // Bind parameters
  Rsh_Fir_reg_obj = PARAMS[0];
  Rsh_Fir_reg_force = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st obj = obj
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_obj, RHO);
  (void)(Rsh_Fir_reg_obj);
  // force_isMissing = missing.0(force)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_force;
  Rsh_Fir_reg_force_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args28);
  // if force_isMissing then L0(FALSE) else L0(force)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_force_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_force_orDefault = Rsh_const(CCP, 24);
    goto L0_;
  } else {
  // L0(force)
    Rsh_Fir_reg_force_orDefault = Rsh_Fir_reg_force;
    goto L0_;
  }

L0_:;
  // st force = force_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_force_orDefault, RHO);
  (void)(Rsh_Fir_reg_force_orDefault);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L1_:;
  // r5 = `!`(r1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args30);
  // c1 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args31);
  // if c1 then L17() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L17()
    goto L17_;
  } else {
  // L3()
    goto L3_;
  }

L11_:;
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard1 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L12_:;
  // r = dyn base(<lang names(obj)>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L1_;

L2_:;
  // c = `==`(r3, NULL)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args34);
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_c1;
  goto L1_;

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard2 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L13_:;
  // obj1 = ld obj
  Rsh_Fir_reg_obj1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

L14_:;
  // r2 = dyn base1(<sym obj>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L2_;

L17_:;
  // l = ld obj
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L18() else D2()
  // L18()
  goto L18_;

D0_:;
  // deopt 3 [obj1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_obj1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 12 [NULL, l, NULL]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_const(CCP, 31);
  Rsh_Fir_deopt(12, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L5_:;
  // r13 = `!`(r9)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args37);
  // c3 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args38);
  // if c3 then L27() else L7(c3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L27()
    goto L27_;
  } else {
  // L7(c3)
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c3_;
    goto L7_;
  }

L15_:;
  // obj2 = force? obj1
  Rsh_Fir_reg_obj2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj1_);
  // checkMissing(obj2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_obj2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r4 = dyn names(obj2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_obj2_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

L18_:;
  // r6 = dyn names__(l, NULL, NULL)
  SEXP Rsh_Fir_array_args41[3];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args41[2] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L19() else D3()
  // L19()
  goto L19_;

L21_:;
  // sym3 = ldf dimnames
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base3 = ldf dimnames in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard3 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L22_:;
  // r8 = dyn base2(<lang dimnames(obj)>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r8_1;
  goto L5_;

D1_:;
  // deopt 6 [r4]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 14 [NULL, r6]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L6_:;
  // c2 = `==`(r11, NULL)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args44);
  // goto L5(c2)
  // L5(c2)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_c2_;
  goto L5_;

L7_:;
  // c18 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args45);
  // if c18 then L34() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L34()
    goto L34_;
  } else {
  // L9()
    goto L9_;
  }

L16_:;
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_1;
  goto L2_;

L19_:;
  // st obj = r6
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // goto L4()
  // L4()
  goto L4_;

L23_:;
  // obj3 = ld obj
  Rsh_Fir_reg_obj3_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L25() else D4()
  // L25()
  goto L25_;

L24_:;
  // r10 = dyn base3(<sym obj>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L6(r10)
  // L6(r10)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r10_1;
  goto L6_;

L27_:;
  // force1 = ld force
  Rsh_Fir_reg_force1_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L28() else D6()
  // L28()
  goto L28_;

D4_:;
  // deopt 21 [obj3]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_obj3_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 27 [c3, force1]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_force1_;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // obj7 = ld obj
  Rsh_Fir_reg_obj7_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L38() else D11()
  // L38()
  goto L38_;

L25_:;
  // obj4 = force? obj3
  Rsh_Fir_reg_obj4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj3_);
  // checkMissing(obj4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_obj4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r12 = dyn dimnames(obj4)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_obj4_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L26() else D5()
  // L26()
  goto L26_;

L28_:;
  // force2 = force? force1
  Rsh_Fir_reg_force2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_force1_);
  // checkMissing(force2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_force2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c6 = `as.logical`(force2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_force2_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args50);
  // if c6 then L8(c3, c6) else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L8(c3, c6)
    Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c3_;
    Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c6_;
    goto L8_;
  } else {
  // L29()
    goto L29_;
  }

L34_:;
  // l1 = ld obj
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L35() else D9()
  // L35()
  goto L35_;

D5_:;
  // deopt 24 [r12]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 39 [NULL, l1, NULL]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_const(CCP, 31);
  Rsh_Fir_deopt(39, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 45 [obj7]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_obj7_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L8_:;
  // c15 = `as.logical`(c8)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args51);
  // c16 = `&&`(c7, c15)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args52);
  // goto L7(c16)
  // L7(c16)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c16_;
  goto L7_;

L26_:;
  // goto L6(r12)
  // L6(r12)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r12_;
  goto L6_;

L29_:;
  // is_data_frame = ldf `is.data.frame`
  Rsh_Fir_reg_is_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L30() else D7()
  // L30()
  goto L30_;

L35_:;
  // r17 = dyn dimnames__(l1, NULL, NULL)
  SEXP Rsh_Fir_array_args53[3];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args53[2] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L36() else D10()
  // L36()
  goto L36_;

L38_:;
  // obj8 = force? obj7
  Rsh_Fir_reg_obj8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj7_);
  // checkMissing(obj8)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_obj8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return obj8
  return Rsh_Fir_reg_obj8_;

D7_:;
  // deopt 30 [c3, c6]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 41 [NULL, r17]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r17_1;
  Rsh_Fir_deopt(41, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L30_:;
  // p = prom<V +>{
  //   obj5 = ld obj;
  //   obj6 = force? obj5;
  //   checkMissing(obj6);
  //   return obj6;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3490908838_, 0, NULL, CCP, RHO);
  // r15 = dyn is_data_frame(p)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_data_frame, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L31() else D8()
  // L31()
  goto L31_;

L36_:;
  // st obj = r17
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r17_1, RHO);
  (void)(Rsh_Fir_reg_r17_1);
  // goto L10()
  // L10()
  goto L10_;

D8_:;
  // deopt 32 [c3, c6, r15]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_deopt(32, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L31_:;
  // r16 = `!`(r15)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args57);
  // c11 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args58);
  // c12 = `||`(c6, c11)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args59);
  // goto L8(c3, c12)
  // L8(c3, c12)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c12_;
  goto L8_;
}
SEXP Rsh_Fir_user_promise_inner3490908838_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_obj5_;
  SEXP Rsh_Fir_reg_obj6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3490908838/0: expected 0, got %d", NCAPTURES);

  // obj5 = ld obj
  Rsh_Fir_reg_obj5_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // obj6 = force? obj5
  Rsh_Fir_reg_obj6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj5_);
  // checkMissing(obj6)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_obj6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return obj6
  return Rsh_Fir_reg_obj6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
