#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_which_min;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_which_max;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_presidents;
  SEXP Rsh_Fir_reg_presidents1_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_presidents3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_presidents4_;
  SEXP Rsh_Fir_reg_presidents5_;
  SEXP Rsh_Fir_reg_range;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_which_min1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_presidents8_;
  SEXP Rsh_Fir_reg_presidents9_;
  SEXP Rsh_Fir_reg_which_max1_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_rpois;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_sample_int;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_which_max2_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_which_min2_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r47_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2501545716
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st `which.min` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L0_:;
  // st x = r2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // which_min = ldf `which.min`
  Rsh_Fir_reg_which_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

L7_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r3 = dyn c(<int 1, 2, 3, 4>, <int 0, 1, 2, 3, 4, 5>, 11.0)
  SEXP Rsh_Fir_array_args1[3];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L8_:;
  // r1 = dyn base(<lang `:`(1.0, 4.0)>, <lang `:`(0.0, 5.0)>, 11.0)
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D0_:;
  // deopt 11 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D1_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L10_:;
  // p = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn which_min(p)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which_min, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

D2_:;
  // deopt 16 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L11_:;
  // sym1 = ldf `which.max`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf `which.max` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L1_:;
  // presidents = ld presidents
  Rsh_Fir_reg_presidents = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

L12_:;
  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

L13_:;
  // r6 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

D3_:;
  // deopt 19 [x2]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 23 [presidents]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_presidents;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // which_max = ldf `which.max` in base
  Rsh_Fir_reg_which_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r8 = dyn which_max(x3)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which_max, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

L16_:;
  // presidents1 = force? presidents
  Rsh_Fir_reg_presidents1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_presidents);
  // checkMissing(presidents1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_presidents1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(presidents1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_presidents1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args10);
  // if c1 then L17() else L18(presidents1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L17()
    goto L17_;
  } else {
  // L18(presidents1)
    Rsh_Fir_reg_presidents3_ = Rsh_Fir_reg_presidents1_;
    goto L18_;
  }

D4_:;
  // deopt 22 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L2_:;
  // sym2 = ldf range
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base2 = ldf range in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard2 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L15_:;
  // goto L1()
  // L1()
  goto L1_;

L17_:;
  // dr = tryDispatchBuiltin.1("[", presidents1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_presidents1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args12);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if dc then L19() else L18(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L19()
    goto L19_;
  } else {
  // L18(dr)
    Rsh_Fir_reg_presidents3_ = Rsh_Fir_reg_dr;
    goto L18_;
  }

L18_:;
  // r9 = `:`(1.0, 30.0)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args14);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r10 = dyn __(presidents3, r9)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_presidents3_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2()
  // L2()
  goto L2_;

L3_:;
  // which_min1 = ldf `which.min`
  Rsh_Fir_reg_which_min1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L24() else D8()
  // L24()
  goto L24_;

L19_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L2()
  // L2()
  goto L2_;

L20_:;
  // presidents4 = ld presidents
  Rsh_Fir_reg_presidents4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L22() else D6()
  // L22()
  goto L22_;

L21_:;
  // r11 = dyn base2[, `na.rm`](<sym presidents>, TRUE)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3()
  // L3()
  goto L3_;

D6_:;
  // deopt 32 [presidents4]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_presidents4_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // presidents5 = force? presidents4
  Rsh_Fir_reg_presidents5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_presidents4_);
  // checkMissing(presidents5)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_presidents5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // range = ldf range in base
  Rsh_Fir_reg_range = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r13 = dyn range(presidents5, TRUE)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_presidents5_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_range, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L23() else D7()
  // L23()
  goto L23_;

L24_:;
  // p1 = prom<V +>{
  //   presidents6 = ld presidents;
  //   presidents7 = force? presidents6;
  //   checkMissing(presidents7);
  //   return presidents7;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r15 = dyn which_min1(p1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which_min1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L25() else D9()
  // L25()
  goto L25_;

D7_:;
  // deopt 37 [r13]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 41 [r15]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L3()
  // L3()
  goto L3_;

L25_:;
  // sym3 = ldf `which.max`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base3 = ldf `which.max` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard3 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L4_:;
  // rpois = ldf rpois
  Rsh_Fir_reg_rpois = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L30() else D12()
  // L30()
  goto L30_;

L26_:;
  // presidents8 = ld presidents
  Rsh_Fir_reg_presidents8_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L28() else D10()
  // L28()
  goto L28_;

L27_:;
  // r16 = dyn base3(<sym presidents>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L4()
  // L4()
  goto L4_;

D10_:;
  // deopt 44 [presidents8]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_presidents8_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // presidents9 = force? presidents8
  Rsh_Fir_reg_presidents9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_presidents8_);
  // checkMissing(presidents9)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_presidents9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // which_max1 = ldf `which.max` in base
  Rsh_Fir_reg_which_max1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r18 = dyn which_max1(presidents9)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_presidents9_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which_max1_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L29() else D11()
  // L29()
  goto L29_;

L30_:;
  // r19 = dyn rpois[, lambda](10000.0, 10.0)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rpois, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L31() else D13()
  // L31()
  goto L31_;

D11_:;
  // deopt 47 [r18]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 53 [r19]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L4()
  // L4()
  goto L4_;

L31_:;
  // st x = r19
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // c2 = `is.object`(l)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args27);
  // if c2 then L32() else L33(NA_LGL, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L32()
    goto L32_;
  } else {
  // L33(NA_LGL, l)
    Rsh_Fir_reg_r21_ = Rsh_const(CCP, 21);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L33_;
  }

L5_:;
  // st x = dx3
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym4 = ldf `which.max`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base4 = ldf `which.max` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard4 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L32_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l, NA_LGL)
  SEXP Rsh_Fir_array_args29[3];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args29);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if dc1 then L34() else L33(NA_LGL, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L34()
    goto L34_;
  } else {
  // L33(NA_LGL, dr2)
    Rsh_Fir_reg_r21_ = Rsh_const(CCP, 21);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L33_;
  }

L33_:;
  // sample_int = ldf `sample.int`
  Rsh_Fir_reg_sample_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L35() else D14()
  // L35()
  goto L35_;

D14_:;
  // deopt 59 [r21, l2, NA_LGL]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_const(CCP, 21);
  Rsh_Fir_deopt(59, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L6_:;
  // which_min2 = ldf `which.min`
  Rsh_Fir_reg_which_min2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L41() else D18()
  // L41()
  goto L41_;

L34_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L5(dx2)
  // L5(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L5_;

L35_:;
  // r24 = dyn sample_int(50.0, 20.0)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sample_int, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L36() else D15()
  // L36()
  goto L36_;

L37_:;
  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L39() else D16()
  // L39()
  goto L39_;

L38_:;
  // r26 = dyn base4(<lang `>=`(x, 20.0)>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L6()
  // L6()
  goto L6_;

D15_:;
  // deopt 62 [r21, l2, NA_LGL, r24]
  SEXP Rsh_Fir_array_deopt_stack12[4];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_const(CCP, 21);
  Rsh_Fir_array_deopt_stack12[3] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(62, 4, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 67 [x4]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 74 []
  Rsh_Fir_deopt(74, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r25 = dyn ___(l2, NA_LGL, r24)
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args34[2] = Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L5(r25)
  // L5(r25)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r25_;
  goto L5_;

L39_:;
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // r28 = `>=`(x5, 20.0)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(78, RHO, 2, Rsh_Fir_array_args36);
  // which_max2 = ldf `which.max` in base
  Rsh_Fir_reg_which_max2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r29 = dyn which_max2(r28)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which_max2_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L40() else D17()
  // L40()
  goto L40_;

L41_:;
  // p2 = prom<V +>{
  //   sym5 = ldf list;
  //   base5 = ldf list in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r31):
  //   return r31;
  // L1():
  //   list = ldf list in base;
  //   r32 = dyn list(7.0, 3.141592653589793);
  //   goto L0(r32);
  // L2():
  //   r30 = dyn base5[A, pi](7.0, <sym pi>);
  //   goto L0(r30);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r34 = dyn which_min2(p2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which_min2_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L42() else D19()
  // L42()
  goto L42_;

D17_:;
  // deopt 72 [r29]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 76 [r34]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L6()
  // L6()
  goto L6_;

L42_:;
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L43() else D20()
  // L43()
  goto L43_;

D20_:;
  // deopt 78 []
  Rsh_Fir_deopt(78, 0, NULL, CCP, RHO);
  return R_NilValue;

L43_:;
  // p4 = prom<V +>{
  //   sym6 = ldf identical;
  //   base6 = ldf identical in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L2() else L3();
  // L0(r36):
  //   return r36;
  // L2():
  //   which_min3 = ldf `which.min`;
  //   p3 = prom<V +>{
  //     sym7 = ldf list;
  //     base7 = ldf list in base;
  //     guard7 = `==`.4(sym7, base7);
  //     if guard7 then L1() else L2();
  //   L0(r38):
  //     return r38;
  //   L1():
  //     list1 = ldf list in base;
  //     r39 = dyn list1(7.0, 3.141592653589793);
  //     goto L0(r39);
  //   L2():
  //     r37 = dyn base7[A, pi](7.0, <sym pi>);
  //     goto L0(r37);
  //   };
  //   r41 = dyn which_min3(p3);
  //   sym8 = ldf c;
  //   base8 = ldf c in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L4() else L5();
  // L3():
  //   r35 = dyn base6(<lang which.min(list(A=7.0, pi=pi))>, <lang c(pi=2)>);
  //   goto L0(r35);
  // L1(r43):
  //   identical = ldf identical in base;
  //   r45 = dyn identical(r41, r43, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r45);
  // L4():
  //   c3 = ldf c in base;
  //   r44 = dyn c3(2);
  //   goto L1(r44);
  // L5():
  //   r42 = dyn base8[pi](2);
  //   goto L1(r42);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r47 = dyn stopifnot(p4)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L44() else D21()
  // L44()
  goto L44_;

D21_:;
  // deopt 80 [r47]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L44_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r47
  return Rsh_Fir_reg_r47_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_presidents6_;
  SEXP Rsh_Fir_reg_presidents7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // presidents6 = ld presidents
  Rsh_Fir_reg_presidents6_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // presidents7 = force? presidents6
  Rsh_Fir_reg_presidents7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_presidents6_);
  // checkMissing(presidents7)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_presidents7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return presidents7
  return Rsh_Fir_reg_presidents7_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r32_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym5 = ldf list
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base5 = ldf list in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r31
  return Rsh_Fir_reg_r31_;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r32 = dyn list(7.0, 3.141592653589793)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r32)
  // L0(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L0_;

L2_:;
  // r30 = dyn base5[A, pi](7.0, <sym pi>)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_arg_names17[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r30)
  // L0(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_which_min3_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r45_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf identical
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base6 = ldf identical in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard6 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r36
  return Rsh_Fir_reg_r36_;

L2_:;
  // which_min3 = ldf `which.min`
  Rsh_Fir_reg_which_min3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p3 = prom<V +>{
  //   sym7 = ldf list;
  //   base7 = ldf list in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r38):
  //   return r38;
  // L1():
  //   list1 = ldf list in base;
  //   r39 = dyn list1(7.0, 3.141592653589793);
  //   goto L0(r39);
  // L2():
  //   r37 = dyn base7[A, pi](7.0, <sym pi>);
  //   goto L0(r37);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r41 = dyn which_min3(p3)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which_min3_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names21, CCP, RHO);
  // sym8 = ldf c
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base8 = ldf c in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard8 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r35 = dyn base6(<lang which.min(list(A=7.0, pi=pi))>, <lang c(pi=2)>)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r35)
  // L0(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L0_;

L1_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r45 = dyn identical(r41, r43, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args49[9];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_args49[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args49[3] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args49[4] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args49[5] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args49[6] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args49[7] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args49[8] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names23[9];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_array_arg_names23[3] = R_MissingArg;
  Rsh_Fir_array_arg_names23[4] = R_MissingArg;
  Rsh_Fir_array_arg_names23[5] = R_MissingArg;
  Rsh_Fir_array_arg_names23[6] = R_MissingArg;
  Rsh_Fir_array_arg_names23[7] = R_MissingArg;
  Rsh_Fir_array_arg_names23[8] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r45)
  // L0(r45)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r45_;
  goto L0_;

L4_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r44 = dyn c3(2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L1(r44)
  // L1(r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L1_;

L5_:;
  // r42 = dyn base8[pi](2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L1(r42)
  // L1(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_list1_;
  SEXP Rsh_Fir_reg_r39_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym7 = ldf list
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base7 = ldf list in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r38
  return Rsh_Fir_reg_r38_;

L1_:;
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r39 = dyn list1(7.0, 3.141592653589793)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r39)
  // L0(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L0_;

L2_:;
  // r37 = dyn base7[A, pi](7.0, <sym pi>)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_arg_names20[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r37)
  // L0(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_reg_which_min1;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
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
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r = dyn base(<lang which.min(x)>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L3_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // which_min = ldf `which.min` in base
  Rsh_Fir_reg_which_min1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r2 = dyn which_min(x2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which_min1, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
