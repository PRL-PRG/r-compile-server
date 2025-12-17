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
SEXP Rsh_Fir_user_function_inner4092219310_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4092219310_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4092219310_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4092219310_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4092219310_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4092219310_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4092219310_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_cmdscale;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_loc;
  SEXP Rsh_Fir_reg_loc1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_range;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_loc4_;
  SEXP Rsh_Fir_reg_loc5_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_range1_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_plot;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_abline;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_text;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r31_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4092219310
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4092219310_, RHO, CCP);
  // st `plot.window` = r
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
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L0_:;
  // cmdscale = ldf cmdscale
  Rsh_Fir_reg_cmdscale = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

L5_:;
  // require = ldf require
  Rsh_Fir_reg_require = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L6_:;
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
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
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
  // check L8() else D1()
  // L8()
  goto L8_;

L9_:;
  // p1 = prom<V +>{
  //   eurodist = ld eurodist;
  //   eurodist1 = force? eurodist;
  //   checkMissing(eurodist1);
  //   return eurodist1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r6 = dyn cmdscale(p1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cmdscale, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L10() else D3()
  // L10()
  goto L10_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 11 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L0()
  // L0()
  goto L0_;

L10_:;
  // st loc = r6
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // sym1 = ldf range
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf range in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L1_:;
  // st rx = r8
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // sym2 = ldf range
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base2 = ldf range in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard2 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L11_:;
  // loc = ld loc
  Rsh_Fir_reg_loc = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L13() else D4()
  // L13()
  goto L13_;

L12_:;
  // r7 = dyn base1(<lang `<-`(x, `[`(loc, , 1.0))>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L1_;

D4_:;
  // deopt 15 [loc]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_loc;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L3_:;
  // st ry = r12
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // plot = ldf plot
  Rsh_Fir_reg_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L25() else D8()
  // L25()
  goto L25_;

L13_:;
  // loc1 = force? loc
  Rsh_Fir_reg_loc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_loc);
  // checkMissing(loc1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_loc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // c = `is.object`(loc1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_loc1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args10);
  // if c then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L18_:;
  // loc4 = ld loc
  Rsh_Fir_reg_loc4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L20() else D6()
  // L20()
  goto L20_;

L19_:;
  // r11 = dyn base2(<lang `<-`(y, `-`(`[`(loc, , 2.0)))>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(r11)
  // L3(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L3_;

D6_:;
  // deopt 27 [loc4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_loc4_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // st x = dx1
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // range = ldf range in base
  Rsh_Fir_reg_range = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r10 = dyn range(dx1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_range, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

L14_:;
  // dr = tryDispatchBuiltin.1("[", loc1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_loc1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args13);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if dc then L16() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L16()
    goto L16_;
  } else {
  // L15()
    goto L15_;
  }

L15_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r9 = dyn __(loc1, <missing>, 1.0)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_loc1_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L2(r9)
  // L2(r9)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r9_;
  goto L2_;

L20_:;
  // loc5 = force? loc4
  Rsh_Fir_reg_loc5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_loc4_);
  // checkMissing(loc5)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_loc5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(loc5)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_loc5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args17);
  // if c1 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L25_:;
  // p2 = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   y = ld y;
  //   y1 = force? y;
  //   checkMissing(y1);
  //   return y1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r18 = dyn plot[, , type, asp, xlab, ylab](p2, p3, "n", 1.0, "", "")
  SEXP Rsh_Fir_array_args20[6];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args20[3] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args20[4] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args20[5] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names7[6];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names7[3] = Rsh_const(CCP, 21);
  Rsh_Fir_array_arg_names7[4] = Rsh_const(CCP, 22);
  Rsh_Fir_array_arg_names7[5] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 6, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L26() else D9()
  // L26()
  goto L26_;

D5_:;
  // deopt 23 [r10]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 50 [r18]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L4_:;
  // r14 = `-`(<missing>, dx3)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args21);
  // st y = r14
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // range1 = ldf range in base
  Rsh_Fir_reg_range1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r15 = dyn range1(r14)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_range1_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L24() else D7()
  // L24()
  goto L24_;

L16_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L2(dx)
  // L2(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L2_;

L17_:;
  // goto L1(r10)
  // L1(r10)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r10_;
  goto L1_;

L21_:;
  // dr2 = tryDispatchBuiltin.1("[", loc5)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_loc5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args24);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if dc1 then L23() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L23()
    goto L23_;
  } else {
  // L22()
    goto L22_;
  }

L22_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r13 = dyn __1(loc5, <missing>, 2.0)
  SEXP Rsh_Fir_array_args26[3];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_loc5_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args26[2] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 3, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L4(r13)
  // L4(r13)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r13_;
  goto L4_;

L26_:;
  // abline = ldf abline
  Rsh_Fir_reg_abline = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L27() else D10()
  // L27()
  goto L27_;

D7_:;
  // deopt 36 [r15]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L4(dx2)
  // L4(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L4_;

L24_:;
  // goto L3(r15)
  // L3(r15)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r15_;
  goto L3_;

L27_:;
  // p5 = prom<V +>{
  //   pretty = ldf pretty;
  //   p4 = prom<V +>{
  //     rx = ld rx;
  //     rx1 = force? rx;
  //     checkMissing(rx1);
  //     return rx1;
  //   };
  //   r20 = dyn pretty(p4, 10.0);
  //   return r20;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   pretty1 = ldf pretty;
  //   p6 = prom<V +>{
  //     ry = ld ry;
  //     ry1 = force? ry;
  //     checkMissing(ry1);
  //     return ry1;
  //   };
  //   r23 = dyn pretty1(p6, 10.0);
  //   return r23;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r25 = dyn abline[h, v, col](p5, p7, "lightgray")
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_arg_names12[2] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abline, 3, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L28() else D11()
  // L28()
  goto L28_;

D11_:;
  // deopt 59 [r25]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L28_:;
  // text = ldf text
  Rsh_Fir_reg_text = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L29() else D12()
  // L29()
  goto L29_;

D12_:;
  // deopt 61 []
  Rsh_Fir_deopt(61, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // p8 = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   return x3;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   y2 = ld y;
  //   y3 = force? y2;
  //   checkMissing(y3);
  //   return y3;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   labels = ldf labels;
  //   p10 = prom<V +>{
  //     eurodist2 = ld eurodist;
  //     eurodist3 = force? eurodist2;
  //     checkMissing(eurodist3);
  //     return eurodist3;
  //   };
  //   r29 = dyn labels(p10);
  //   return r29;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r31 = dyn text[, , , cex](p8, p9, p11, 0.8)
  SEXP Rsh_Fir_array_args37[4];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args37[2] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args37[3] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names14[4];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_text, 4, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L30() else D13()
  // L30()
  goto L30_;

D13_:;
  // deopt 67 [r31]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L30_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r31
  return Rsh_Fir_reg_r31_;
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
  SEXP Rsh_Fir_reg_eurodist;
  SEXP Rsh_Fir_reg_eurodist1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // eurodist = ld eurodist
  Rsh_Fir_reg_eurodist = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // eurodist1 = force? eurodist
  Rsh_Fir_reg_eurodist1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eurodist);
  // checkMissing(eurodist1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_eurodist1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return eurodist1
  return Rsh_Fir_reg_eurodist1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_y1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return y1
  return Rsh_Fir_reg_y1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_pretty;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r20_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // pretty = ldf pretty
  Rsh_Fir_reg_pretty = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // p4 = prom<V +>{
  //   rx = ld rx;
  //   rx1 = force? rx;
  //   checkMissing(rx1);
  //   return rx1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r20 = dyn pretty(p4, 10.0)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pretty, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names10, CCP, RHO);
  // return r20
  return Rsh_Fir_reg_r20_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_rx;
  SEXP Rsh_Fir_reg_rx1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // rx = ld rx
  Rsh_Fir_reg_rx = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // rx1 = force? rx
  Rsh_Fir_reg_rx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rx);
  // checkMissing(rx1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_rx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return rx1
  return Rsh_Fir_reg_rx1_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_pretty1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // pretty1 = ldf pretty
  Rsh_Fir_reg_pretty1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // p6 = prom<V +>{
  //   ry = ld ry;
  //   ry1 = force? ry;
  //   checkMissing(ry1);
  //   return ry1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r23 = dyn pretty1(p6, 10.0)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pretty1_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names11, CCP, RHO);
  // return r23
  return Rsh_Fir_reg_r23_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ry;
  SEXP Rsh_Fir_reg_ry1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ry = ld ry
  Rsh_Fir_reg_ry = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // ry1 = force? ry
  Rsh_Fir_reg_ry1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ry);
  // checkMissing(ry1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_ry1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return ry1
  return Rsh_Fir_reg_ry1_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return x3
  return Rsh_Fir_reg_x3_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_reg_y3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // y2 = ld y
  Rsh_Fir_reg_y2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // y3 = force? y2
  Rsh_Fir_reg_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y2_);
  // checkMissing(y3)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_y3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return y3
  return Rsh_Fir_reg_y3_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_labels;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r29_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // labels = ldf labels
  Rsh_Fir_reg_labels = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // p10 = prom<V +>{
  //   eurodist2 = ld eurodist;
  //   eurodist3 = force? eurodist2;
  //   checkMissing(eurodist3);
  //   return eurodist3;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r29 = dyn labels(p10)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_labels, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names13, CCP, RHO);
  // return r29
  return Rsh_Fir_reg_r29_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_eurodist2_;
  SEXP Rsh_Fir_reg_eurodist3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // eurodist2 = ld eurodist
  Rsh_Fir_reg_eurodist2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // eurodist3 = force? eurodist2
  Rsh_Fir_reg_eurodist3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eurodist2_);
  // checkMissing(eurodist3)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_eurodist3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return eurodist3
  return Rsh_Fir_reg_eurodist3_;
}
SEXP Rsh_Fir_user_function_inner4092219310_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4092219310 dynamic dispatch ([xlim, ylim, log, asp, `...`])

  return Rsh_Fir_user_version_inner4092219310_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4092219310_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4092219310 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner4092219310/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_xlim;
  SEXP Rsh_Fir_reg_ylim;
  SEXP Rsh_Fir_reg_log;
  SEXP Rsh_Fir_reg_asp;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_log_isMissing;
  SEXP Rsh_Fir_reg_log_orDefault;
  SEXP Rsh_Fir_reg_asp_isMissing;
  SEXP Rsh_Fir_reg_asp_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg__External_graphics;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_invisible;
  SEXP Rsh_Fir_reg_r10_1;

  // Bind parameters
  Rsh_Fir_reg_xlim = PARAMS[0];
  Rsh_Fir_reg_ylim = PARAMS[1];
  Rsh_Fir_reg_log = PARAMS[2];
  Rsh_Fir_reg_asp = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st xlim = xlim
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_xlim, RHO);
  (void)(Rsh_Fir_reg_xlim);
  // st ylim = ylim
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_ylim, RHO);
  (void)(Rsh_Fir_reg_ylim);
  // log_isMissing = missing.0(log)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_log;
  Rsh_Fir_reg_log_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args38);
  // if log_isMissing then L0("") else L0(log)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_log_isMissing)) {
  // L0("")
    Rsh_Fir_reg_log_orDefault = Rsh_const(CCP, 19);
    goto L0_;
  } else {
  // L0(log)
    Rsh_Fir_reg_log_orDefault = Rsh_Fir_reg_log;
    goto L0_;
  }

L0_:;
  // st log = log_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_log_orDefault, RHO);
  (void)(Rsh_Fir_reg_log_orDefault);
  // asp_isMissing = missing.0(asp)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_asp;
  Rsh_Fir_reg_asp_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args39);
  // if asp_isMissing then L1(NA_LGL) else L1(asp)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_asp_isMissing)) {
  // L1(NA_LGL)
    Rsh_Fir_reg_asp_orDefault = Rsh_const(CCP, 39);
    goto L1_;
  } else {
  // L1(asp)
    Rsh_Fir_reg_asp_orDefault = Rsh_Fir_reg_asp;
    goto L1_;
  }

L1_:;
  // st asp = asp_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_asp_orDefault, RHO);
  (void)(Rsh_Fir_reg_asp_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `.External.graphics`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base = ldf `.External.graphics` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L2_:;
  // sym1 = ldf invisible
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base1 = ldf invisible in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard1 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L4_:;
  // _External_graphics = ldf `.External.graphics`
  Rsh_Fir_reg__External_graphics = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r = dyn base(<sym C_plot_window>, <sym xlim>, <sym ylim>, <sym log>, <sym asp>, <sym ...>)
  SEXP Rsh_Fir_array_args42[6];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args42[2] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args42[3] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args42[4] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args42[5] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names15[6];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_array_arg_names15[4] = R_MissingArg;
  Rsh_Fir_array_arg_names15[5] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 6, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L2()
  // L2()
  goto L2_;

D0_:;
  // deopt 2 []
  Rsh_Fir_deopt(2, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r9
  return Rsh_Fir_reg_r9_1;

L6_:;
  // p = prom<V +>{
  //   C_plot_window = ld C_plot_window;
  //   C_plot_window1 = force? C_plot_window;
  //   checkMissing(C_plot_window1);
  //   return C_plot_window1;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4092219310_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   xlim1 = ld xlim;
  //   xlim2 = force? xlim1;
  //   checkMissing(xlim2);
  //   return xlim2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4092219310_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   ylim1 = ld ylim;
  //   ylim2 = force? ylim1;
  //   checkMissing(ylim2);
  //   return ylim2;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4092219310_2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   log1 = ld log;
  //   log2 = force? log1;
  //   checkMissing(log2);
  //   return log2;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4092219310_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   asp1 = ld asp;
  //   asp2 = force? asp1;
  //   checkMissing(asp2);
  //   return asp2;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4092219310_4, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // r7 = dyn _External_graphics[, , , , , `...`](p, p1, p2, p3, p4, ddd1)
  SEXP Rsh_Fir_array_args48[6];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args48[2] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args48[3] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args48[4] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args48[5] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names16[6];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_array_arg_names16[4] = R_MissingArg;
  Rsh_Fir_array_arg_names16[5] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External_graphics, 6, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

L8_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r10 = dyn invisible()
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 0, NULL, NULL, CCP, RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

L9_:;
  // r8 = dyn base1()
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 0, NULL, NULL, CCP, RHO);
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r8_1;
  goto L3_;

D1_:;
  // deopt 9 [r7]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 13 [r10]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L2()
  // L2()
  goto L2_;

L10_:;
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r10_1;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner4092219310_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_C_plot_window;
  SEXP Rsh_Fir_reg_C_plot_window1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4092219310/0: expected 0, got %d", NCAPTURES);

  // C_plot_window = ld C_plot_window
  Rsh_Fir_reg_C_plot_window = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // C_plot_window1 = force? C_plot_window
  Rsh_Fir_reg_C_plot_window1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_plot_window);
  // checkMissing(C_plot_window1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_C_plot_window1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return C_plot_window1
  return Rsh_Fir_reg_C_plot_window1_;
}
SEXP Rsh_Fir_user_promise_inner4092219310_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xlim1_;
  SEXP Rsh_Fir_reg_xlim2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4092219310/0: expected 0, got %d", NCAPTURES);

  // xlim1 = ld xlim
  Rsh_Fir_reg_xlim1_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // xlim2 = force? xlim1
  Rsh_Fir_reg_xlim2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xlim1_);
  // checkMissing(xlim2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_xlim2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return xlim2
  return Rsh_Fir_reg_xlim2_;
}
SEXP Rsh_Fir_user_promise_inner4092219310_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ylim1_;
  SEXP Rsh_Fir_reg_ylim2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4092219310/0: expected 0, got %d", NCAPTURES);

  // ylim1 = ld ylim
  Rsh_Fir_reg_ylim1_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // ylim2 = force? ylim1
  Rsh_Fir_reg_ylim2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ylim1_);
  // checkMissing(ylim2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_ylim2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return ylim2
  return Rsh_Fir_reg_ylim2_;
}
SEXP Rsh_Fir_user_promise_inner4092219310_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_log1_;
  SEXP Rsh_Fir_reg_log2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4092219310/0: expected 0, got %d", NCAPTURES);

  // log1 = ld log
  Rsh_Fir_reg_log1_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // log2 = force? log1
  Rsh_Fir_reg_log2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log1_);
  // checkMissing(log2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_log2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return log2
  return Rsh_Fir_reg_log2_;
}
SEXP Rsh_Fir_user_promise_inner4092219310_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_asp1_;
  SEXP Rsh_Fir_reg_asp2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4092219310/0: expected 0, got %d", NCAPTURES);

  // asp1 = ld asp
  Rsh_Fir_reg_asp1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // asp2 = force? asp1
  Rsh_Fir_reg_asp2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_asp1_);
  // checkMissing(asp2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_asp2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return asp2
  return Rsh_Fir_reg_asp2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
