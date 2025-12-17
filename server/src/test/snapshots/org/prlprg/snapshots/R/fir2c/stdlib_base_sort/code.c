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
SEXP Rsh_Fir_user_function_inner855828621_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner855828621_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  SEXP Rsh_Fir_reg_swiss;
  SEXP Rsh_Fir_reg_swiss1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_swiss3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_sort;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_sort1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_sort2_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_sort3_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_is_unsorted;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_is_unsorted1_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r34_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner855828621
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner855828621_, RHO, CCP);
  // st sort = r
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
  // swiss = ld swiss
  Rsh_Fir_reg_swiss = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

L3_:;
  // require = ldf require
  Rsh_Fir_reg_require = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L5() else D0()
  // L5()
  goto L5_;

L4_:;
  // r1 = dyn base(<sym stats>)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
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
  // deopt 8 [swiss]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_swiss;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
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
  // check L6() else D1()
  // L6()
  goto L6_;

L7_:;
  // swiss1 = force? swiss
  Rsh_Fir_reg_swiss1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_swiss);
  // checkMissing(swiss1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_swiss1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // c = `is.object`(swiss1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_swiss1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args5);
  // if c then L9() else L10(swiss1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L9()
    goto L9_;
  } else {
  // L10(swiss1)
    Rsh_Fir_reg_swiss3_ = Rsh_Fir_reg_swiss1_;
    goto L10_;
  }

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L0()
  // L0()
  goto L0_;

L8_:;
  // c1 = `is.object`(dx1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args6);
  // if c1 then L12() else L13(dx1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L12()
    goto L12_;
  } else {
  // L13(dx1)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    goto L13_;
  }

L9_:;
  // dr = tryDispatchBuiltin.1("$", swiss1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_swiss1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args7);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if dc then L11() else L10(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L11()
    goto L11_;
  } else {
  // L10(dr)
    Rsh_Fir_reg_swiss3_ = Rsh_Fir_reg_dr;
    goto L10_;
  }

L10_:;
  // r5 = `$`(swiss3, <sym Education>)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_swiss3_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args9);
  // goto L8(r5)
  // L8(r5)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r5_;
  goto L8_;

L1_:;
  // st x = dx5
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

L11_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L8(dx)
  // L8(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L8_;

L12_:;
  // dr2 = tryDispatchBuiltin.1("[", dx1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if dc1 then L14() else L13(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L14()
    goto L14_;
  } else {
  // L13(dr2)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dr2_;
    goto L13_;
  }

L13_:;
  // r6 = `:`(1.0, 25.0)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args13);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r7 = dyn __(dx3, r6)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r7_;
  goto L1_;

D3_:;
  // deopt 17 [x]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // dx4 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L1(dx4)
  // L1(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L1_;

L15_:;
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // sort = ldf sort
  Rsh_Fir_reg_sort = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

D4_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p1 = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   return x3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r9 = dyn sort(p1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

D5_:;
  // deopt 22 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L17_:;
  // sort1 = ldf sort
  Rsh_Fir_reg_sort1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L18() else D6()
  // L18()
  goto L18_;

D6_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p2 = prom<V +>{
  //   x4 = ld x;
  //   x5 = force? x4;
  //   checkMissing(x5);
  //   return x5;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r12):
  //   return r12;
  // L1():
  //   c2 = ldf c in base;
  //   r13 = dyn c2(10.0, 15.0);
  //   goto L0(r13);
  // L2():
  //   r11 = dyn base1(10.0, 15.0);
  //   goto L0(r11);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r15 = dyn sort1[, partial](p2, p3)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort1_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L19() else D7()
  // L19()
  goto L19_;

D7_:;
  // deopt 28 [r15]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L19_:;
  // sort2 = ldf sort
  Rsh_Fir_reg_sort2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L20() else D8()
  // L20()
  goto L20_;

D8_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p4 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r17):
  //   return r17;
  // L1():
  //   r18 = `:`(2.0, 12.0);
  //   c3 = ldf c in base;
  //   r19 = dyn c3(<int 10, 9, 8, 7, 6, 5, 4, 3>, r18);
  //   goto L0(r19);
  // L2():
  //   r16 = dyn base2(<lang `:`(10.0, 3.0)>, <lang `:`(2.0, 12.0)>);
  //   goto L0(r16);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r21 = dyn sort2[, method, `index.return`](p4, "shell", TRUE)
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_arg_names9[2] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort2_, 3, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L21() else D9()
  // L21()
  goto L21_;

D9_:;
  // deopt 36 [r21]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L21_:;
  // sort3 = ldf sort
  Rsh_Fir_reg_sort3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L22() else D10()
  // L22()
  goto L22_;

D10_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p5 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r23):
  //   return r23;
  // L1():
  //   r24 = `:`(2.0, 12.0);
  //   c4 = ldf c in base;
  //   r25 = dyn c4(<int 10, 9, 8, 7, 6, 5, 4, 3>, r24);
  //   goto L0(r25);
  // L2():
  //   r22 = dyn base3(<lang `:`(10.0, 3.0)>, <lang `:`(2.0, 12.0)>);
  //   goto L0(r22);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r27 = dyn sort3[, method, `index.return`](p5, "quick", TRUE)
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args33[2] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_arg_names12[2] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort3_, 3, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L23() else D11()
  // L23()
  goto L23_;

D11_:;
  // deopt 44 [r27]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L23_:;
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard4 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L2_:;
  // st x = r29
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // is_unsorted = ldf `is.unsorted`
  Rsh_Fir_reg_is_unsorted = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L27() else D13()
  // L27()
  goto L27_;

L24_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r30 = dyn c5(<int 1, 2, 3>, <int 3, 4, 5>, 10.0)
  SEXP Rsh_Fir_array_args35[3];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args35[2] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 3, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L26() else D12()
  // L26()
  goto L26_;

L25_:;
  // r28 = dyn base4(<lang `:`(1.0, 3.0)>, <lang `:`(3.0, 5.0)>, 10.0)
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args36[2] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 3, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L2(r28)
  // L2(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L2_;

D12_:;
  // deopt 53 [r30]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 56 []
  Rsh_Fir_deopt(56, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L2(r30)
  // L2(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L2_;

L27_:;
  // p6 = prom<V +>{
  //   x6 = ld x;
  //   x7 = force? x6;
  //   checkMissing(x7);
  //   return x7;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r32 = dyn is_unsorted(p6)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_unsorted, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L28() else D14()
  // L28()
  goto L28_;

D14_:;
  // deopt 58 [r32]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L28_:;
  // is_unsorted1 = ldf `is.unsorted`
  Rsh_Fir_reg_is_unsorted1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L29() else D15()
  // L29()
  goto L29_;

D15_:;
  // deopt 60 []
  Rsh_Fir_deopt(60, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // p7 = prom<V +>{
  //   x8 = ld x;
  //   x9 = force? x8;
  //   checkMissing(x9);
  //   return x9;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r34 = dyn is_unsorted1[, strictly](p7, TRUE)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_unsorted1_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L30() else D16()
  // L30()
  goto L30_;

D16_:;
  // deopt 64 [r34]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L30_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r34
  return Rsh_Fir_reg_r34_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_stats;
  SEXP Rsh_Fir_reg_stats1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // stats = ld stats
  Rsh_Fir_reg_stats = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
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
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return x3
  return Rsh_Fir_reg_x3_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return x5
  return Rsh_Fir_reg_x5_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
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
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r13 = dyn c2(10.0, 15.0)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L0_;

L2_:;
  // r11 = dyn base1(10.0, 15.0)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
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
  // r18 = `:`(2.0, 12.0)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args25);
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r19 = dyn c3(<int 10, 9, 8, 7, 6, 5, 4, 3>, r18)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r19_;
  goto L0_;

L2_:;
  // r16 = dyn base2(<lang `:`(10.0, 3.0)>, <lang `:`(2.0, 12.0)>)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r25_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r23
  return Rsh_Fir_reg_r23_;

L1_:;
  // r24 = `:`(2.0, 12.0)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args30);
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r25 = dyn c4(<int 10, 9, 8, 7, 6, 5, 4, 3>, r24)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r25_;
  goto L0_;

L2_:;
  // r22 = dyn base3(<lang `:`(10.0, 3.0)>, <lang `:`(2.0, 12.0)>)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_x7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x6 = ld x
  Rsh_Fir_reg_x6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // x7 = force? x6
  Rsh_Fir_reg_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x6_);
  // checkMissing(x7)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // return x7
  return Rsh_Fir_reg_x7_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_x9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return x9
  return Rsh_Fir_reg_x9_;
}
SEXP Rsh_Fir_user_function_inner855828621_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner855828621 dynamic dispatch ([x, decreasing, `...`])

  return Rsh_Fir_user_version_inner855828621_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner855828621_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner855828621 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner855828621/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_decreasing;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_decreasing_isMissing;
  SEXP Rsh_Fir_reg_decreasing_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_decreasing1_;
  SEXP Rsh_Fir_reg_decreasing2_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_decreasing3_;
  SEXP Rsh_Fir_reg_decreasing4_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_UseMethod;
  SEXP Rsh_Fir_reg_r11_1;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_decreasing = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // decreasing_isMissing = missing.0(decreasing)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_decreasing;
  Rsh_Fir_reg_decreasing_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args41);
  // if decreasing_isMissing then L0(FALSE) else L0(decreasing)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_decreasing_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_decreasing_orDefault = Rsh_const(CCP, 31);
    goto L0_;
  } else {
  // L0(decreasing)
    Rsh_Fir_reg_decreasing_orDefault = Rsh_Fir_reg_decreasing;
    goto L0_;
  }

L0_:;
  // st decreasing = decreasing_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_decreasing_orDefault, RHO);
  (void)(Rsh_Fir_reg_decreasing_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `is.logical`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base = ldf `is.logical` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L1_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args43);
  // c1 = `as.logical`(r2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args44);
  // if c1 then L2(c1) else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L2(c1)
    Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c1_1;
    goto L2_;
  } else {
  // L10()
    goto L10_;
  }

L7_:;
  // decreasing1 = ld decreasing
  Rsh_Fir_reg_decreasing1_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L8_:;
  // r = dyn base(<sym decreasing>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 1 [decreasing1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_decreasing1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L2_:;
  // c10 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_c2_1;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args46);
  // if c10 then L16() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L16()
    goto L16_;
  } else {
  // L4()
    goto L4_;
  }

L9_:;
  // decreasing2 = force? decreasing1
  Rsh_Fir_reg_decreasing2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_decreasing1_);
  // checkMissing(decreasing2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_decreasing2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c = `is.logical`(decreasing2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_decreasing2_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(385, RHO, 1, Rsh_Fir_array_args48);
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_c1;
  goto L1_;

L10_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard1 then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L3_:;
  // r6 = `!=`(r4, 1)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args50);
  // c7 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args51);
  // c8 = `||`(c6, c7)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args52);
  // goto L2(c8)
  // L2(c8)
  Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c8_;
  goto L2_;

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // sym2 = ldf UseMethod
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base2 = ldf UseMethod in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard2 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L11_:;
  // decreasing3 = ld decreasing
  Rsh_Fir_reg_decreasing3_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L13() else D1()
  // L13()
  goto L13_;

L12_:;
  // r3 = dyn base1(<sym decreasing>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L3(c1, r3)
  // L3(c1, r3)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_1;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_;
  goto L3_;

L16_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L17() else D3()
  // L17()
  goto L17_;

D1_:;
  // deopt 7 [c1, decreasing3]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_decreasing3_;
  Rsh_Fir_deopt(7, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r10
  return Rsh_Fir_reg_r10_;

L13_:;
  // decreasing4 = force? decreasing3
  Rsh_Fir_reg_decreasing4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_decreasing3_);
  // checkMissing(decreasing4)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_decreasing4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r5 = dyn length(decreasing4)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_decreasing4_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

L17_:;
  // r7 = dyn stop("'decreasing' must be a length-1 logical vector.\nDid you intend to set 'partial'?")
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L18() else D4()
  // L18()
  goto L18_;

L20_:;
  // UseMethod = ldf UseMethod in base
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r11 = dyn UseMethod("sort")
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L6(r11)
  // L6(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_1;
  goto L6_;

L21_:;
  // r9 = dyn base2("sort")
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L6(r9)
  // L6(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_1;
  goto L6_;

D2_:;
  // deopt 10 [c1, r5]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(10, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 17 [r7]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L3(c1, r5)
  // L3(c1, r5)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_1;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r5_1;
  goto L3_;

L18_:;
  // goto L5()
  // L5()
  goto L5_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
