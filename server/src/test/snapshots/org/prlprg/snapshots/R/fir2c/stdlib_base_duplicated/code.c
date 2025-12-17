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
SEXP Rsh_Fir_user_function_inner3117001256_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3117001256_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_duplicated;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_duplicated1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_duplicated2_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_duplicated3_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_anyDuplicated;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_stopifnot1_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_anyDuplicated3_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_anyDuplicated4_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r59_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3117001256
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3117001256_, RHO, CCP);
  // st duplicated = r
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
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L0_:;
  // st x = r2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

L4_:;
  // r3 = `:`(9.0, 20.0)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args1);
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r4 = dyn c(r3, <int 1, 2, 3, 4, 5>, <int 3, 4, 5, 6, 7>, <int 0, 1, 2, 3, 4, 5, 6, 7, 8>)
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 4, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r1 = dyn base(<lang `:`(9.0, 20.0)>, <lang `:`(1.0, 5.0)>, <lang `:`(3.0, 7.0)>, <lang `:`(0.0, 8.0)>)
  SEXP Rsh_Fir_array_args3[4];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args3[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D0_:;
  // deopt 16 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D1_:;
  // deopt 18 [x]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r4_;
  goto L0_;

L7_:;
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(x1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args5);
  // if c1 then L8() else L9(x1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L8()
    goto L8_;
  } else {
  // L9(x1)
    Rsh_Fir_reg_x3_ = Rsh_Fir_reg_x1_;
    goto L9_;
  }

L1_:;
  // st xu = dx1
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // x6 = ld x
  Rsh_Fir_reg_x6_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L13() else D4()
  // L13()
  goto L13_;

L8_:;
  // dr = tryDispatchBuiltin.1("[", x1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_x1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args6);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if dc then L10() else L9(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L10()
    goto L10_;
  } else {
  // L9(dr)
    Rsh_Fir_reg_x3_ = Rsh_Fir_reg_dr;
    goto L9_;
  }

L9_:;
  // duplicated = ldf duplicated
  Rsh_Fir_reg_duplicated = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

D2_:;
  // deopt 21 [x3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 27 [x6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

L11_:;
  // p = prom<V +>{
  //   x4 = ld x;
  //   x5 = force? x4;
  //   checkMissing(x5);
  //   return x5;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r6 = dyn duplicated(p)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_duplicated, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

L13_:;
  // x7 = force? x6
  Rsh_Fir_reg_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x6_);
  // checkMissing(x7)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(x7)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args12);
  // if c2 then L14() else L15(x7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L14()
    goto L14_;
  } else {
  // L15(x7)
    Rsh_Fir_reg_x9_ = Rsh_Fir_reg_x7_;
    goto L15_;
  }

D3_:;
  // deopt 23 [x3, r6]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(23, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L2_:;
  // st xu2 = dx3
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L19() else D7()
  // L19()
  goto L19_;

L12_:;
  // r7 = `!`(r6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args13);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r8 = dyn __(x3, r7)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r8)
  // L1(r8)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r8_;
  goto L1_;

L14_:;
  // dr2 = tryDispatchBuiltin.1("[", x7)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_x7_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args15);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if dc1 then L16() else L15(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L16()
    goto L16_;
  } else {
  // L15(dr2)
    Rsh_Fir_reg_x9_ = Rsh_Fir_reg_dr2_;
    goto L15_;
  }

L15_:;
  // duplicated1 = ldf duplicated
  Rsh_Fir_reg_duplicated1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

D5_:;
  // deopt 30 [x9]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L2(dx2)
  // L2(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L2_;

L17_:;
  // p1 = prom<V +>{
  //   x10 = ld x;
  //   x11 = force? x10;
  //   checkMissing(x11);
  //   return x11;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r10 = dyn duplicated1[, fromLast](p1, TRUE)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_duplicated1_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L18() else D6()
  // L18()
  goto L18_;

L19_:;
  // p3 = prom<V +>{
  //   sym1 = ldf identical;
  //   base1 = ldf identical in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r14):
  //   return r14;
  // L1():
  //   xu = ld xu;
  //   xu1 = force? xu;
  //   checkMissing(xu1);
  //   unique = ldf unique;
  //   p2 = prom<V +>{
  //     x12 = ld x;
  //     x13 = force? x12;
  //     checkMissing(x13);
  //     return x13;
  //   };
  //   r16 = dyn unique(p2);
  //   identical = ldf identical in base;
  //   r17 = dyn identical(xu1, r16, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r17);
  // L2():
  //   r13 = dyn base1(<sym xu>, <lang unique(x)>);
  //   goto L0(r13);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   sym2 = ldf identical;
  //   base2 = ldf identical in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r20):
  //   return r20;
  // L1():
  //   xu2 = ld xu2;
  //   xu3 = force? xu2;
  //   checkMissing(xu3);
  //   unique1 = ldf unique;
  //   p4 = prom<V +>{
  //     x14 = ld x;
  //     x15 = force? x14;
  //     checkMissing(x15);
  //     return x15;
  //   };
  //   r22 = dyn unique1[, fromLast](p4, TRUE);
  //   identical1 = ldf identical in base;
  //   r23 = dyn identical1(xu3, r22, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r23);
  // L2():
  //   r19 = dyn base2(<sym xu2>, <lang unique(x, fromLast=TRUE)>);
  //   goto L0(r19);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r25 = dyn stopifnot(p3, p5)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L20() else D8()
  // L20()
  goto L20_;

D6_:;
  // deopt 34 [x9, r10]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 42 [r25]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L18_:;
  // r11 = `!`(r10)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args33);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r12 = dyn __1(x9, r11)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L2(r12)
  // L2(r12)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r12_;
  goto L2_;

L20_:;
  // duplicated2 = ldf duplicated
  Rsh_Fir_reg_duplicated2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L21() else D9()
  // L21()
  goto L21_;

D9_:;
  // deopt 44 []
  Rsh_Fir_deopt(44, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p6 = prom<V +>{
  //   iris = ld iris;
  //   iris1 = force? iris;
  //   checkMissing(iris1);
  //   return iris1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r27 = dyn duplicated2(p6)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_duplicated2_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L22() else D10()
  // L22()
  goto L22_;

D10_:;
  // deopt 46 [r27]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L22_:;
  // c3 = `is.object`(r27)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args37);
  // if c3 then L23() else L24(r27)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L23()
    goto L23_;
  } else {
  // L24(r27)
    Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r27_;
    goto L24_;
  }

L3_:;
  // duplicated3 = ldf duplicated
  Rsh_Fir_reg_duplicated3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L26() else D11()
  // L26()
  goto L26_;

L23_:;
  // dr4 = tryDispatchBuiltin.1("[", r27)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc2 then L25() else L24(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L25()
    goto L25_;
  } else {
  // L24(dr4)
    Rsh_Fir_reg_r29_ = Rsh_Fir_reg_dr4_;
    goto L24_;
  }

L24_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r30 = dyn __2(r29, <int 140, 141, 142, 143>)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L3()
  // L3()
  goto L3_;

D11_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L3()
  // L3()
  goto L3_;

L26_:;
  // p7 = prom<V +>{
  //   iris3 = ld iris3;
  //   iris4 = force? iris3;
  //   checkMissing(iris4);
  //   return iris4;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r33):
  //   return r33;
  // L1():
  //   c4 = ldf c in base;
  //   r34 = dyn c4(1.0, 3.0);
  //   goto L0(r34);
  // L2():
  //   r32 = dyn base3(1.0, 3.0);
  //   goto L0(r32);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r36 = dyn duplicated3[, MARGIN](p7, p8)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_duplicated3_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L27() else D12()
  // L27()
  goto L27_;

D12_:;
  // deopt 55 [r36]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L27_:;
  // anyDuplicated = ldf anyDuplicated
  Rsh_Fir_reg_anyDuplicated = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L28() else D13()
  // L28()
  goto L28_;

D13_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // p9 = prom<V +>{
  //   iris5 = ld iris;
  //   iris6 = force? iris5;
  //   checkMissing(iris6);
  //   return iris6;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r38 = dyn anyDuplicated(p9)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyDuplicated, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L29() else D14()
  // L29()
  goto L29_;

D14_:;
  // deopt 59 [r38]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L29_:;
  // stopifnot1 = ldf stopifnot
  Rsh_Fir_reg_stopifnot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L30() else D15()
  // L30()
  goto L30_;

D15_:;
  // deopt 61 []
  Rsh_Fir_deopt(61, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // p11 = prom<V +>{
  //   sym4 = ldf identical;
  //   base4 = ldf identical in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r40):
  //   return r40;
  // L1():
  //   anyDuplicated1 = ldf anyDuplicated;
  //   p10 = prom<V +>{
  //     iris7 = ld iris;
  //     iris8 = force? iris7;
  //     checkMissing(iris8);
  //     return iris8;
  //   };
  //   r42 = dyn anyDuplicated1(p10);
  //   identical2 = ldf identical in base;
  //   r43 = dyn identical2(r42, 143, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r43);
  // L2():
  //   r39 = dyn base4(<lang anyDuplicated(iris)>, 143);
  //   goto L0(r39);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   sym5 = ldf identical;
  //   base5 = ldf identical in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r46):
  //   return r46;
  // L1():
  //   anyDuplicated2 = ldf anyDuplicated;
  //   p12 = prom<V +>{
  //     iris9 = ld iris3;
  //     iris10 = force? iris9;
  //     checkMissing(iris10);
  //     return iris10;
  //   };
  //   p13 = prom<V +>{
  //     sym6 = ldf c;
  //     base6 = ldf c in base;
  //     guard6 = `==`.4(sym6, base6);
  //     if guard6 then L1() else L2();
  //   L0(r49):
  //     return r49;
  //   L1():
  //     c5 = ldf c in base;
  //     r50 = dyn c5(1.0, 3.0);
  //     goto L0(r50);
  //   L2():
  //     r48 = dyn base6(1.0, 3.0);
  //     goto L0(r48);
  //   };
  //   r52 = dyn anyDuplicated2[, MARGIN](p12, p13);
  //   identical3 = ldf identical in base;
  //   r53 = dyn identical3(r52, 143, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r53);
  // L2():
  //   r45 = dyn base5(<lang anyDuplicated(iris3, MARGIN=c(1.0, 3.0))>, 143);
  //   goto L0(r45);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r55 = dyn stopifnot1(p11, p14)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot1_, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L31() else D16()
  // L31()
  goto L31_;

D16_:;
  // deopt 64 [r55]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L31_:;
  // anyDuplicated3 = ldf anyDuplicated
  Rsh_Fir_reg_anyDuplicated3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L32() else D17()
  // L32()
  goto L32_;

D17_:;
  // deopt 66 []
  Rsh_Fir_deopt(66, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p15 = prom<V +>{
  //   x16 = ld x;
  //   x17 = force? x16;
  //   checkMissing(x17);
  //   return x17;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // r57 = dyn anyDuplicated3(p15)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyDuplicated3_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L33() else D18()
  // L33()
  goto L33_;

D18_:;
  // deopt 68 [r57]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L33_:;
  // anyDuplicated4 = ldf anyDuplicated
  Rsh_Fir_reg_anyDuplicated4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L34() else D19()
  // L34()
  goto L34_;

D19_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p16 = prom<V +>{
  //   x18 = ld x;
  //   x19 = force? x18;
  //   checkMissing(x19);
  //   return x19;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main16, 0, NULL, CCP, RHO);
  // r59 = dyn anyDuplicated4[, fromLast](p16, TRUE)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyDuplicated4_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L35() else D20()
  // L35()
  goto L35_;

D20_:;
  // deopt 74 [r59]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L35_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r59
  return Rsh_Fir_reg_r59_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return x5
  return Rsh_Fir_reg_x5_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_x11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return x11
  return Rsh_Fir_reg_x11_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_xu;
  SEXP Rsh_Fir_reg_xu1_;
  SEXP Rsh_Fir_reg_unique;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf identical
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base1 = ldf identical in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
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
  // return r14
  return Rsh_Fir_reg_r14_;

L1_:;
  // xu = ld xu
  Rsh_Fir_reg_xu = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // xu1 = force? xu
  Rsh_Fir_reg_xu1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xu);
  // checkMissing(xu1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_xu1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // p2 = prom<V +>{
  //   x12 = ld x;
  //   x13 = force? x12;
  //   checkMissing(x13);
  //   return x13;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r16 = dyn unique(p2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names5, CCP, RHO);
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r17 = dyn identical(xu1, r16, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args24[9];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_xu1_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args24[3] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args24[4] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args24[5] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args24[6] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args24[7] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args24[8] = Rsh_const(CCP, 21);
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
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r17_;
  goto L0_;

L2_:;
  // r13 = dyn base1(<sym xu>, <lang unique(x)>)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_x13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x12 = ld x
  Rsh_Fir_reg_x12_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x13 = force? x12
  Rsh_Fir_reg_x13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x12_);
  // checkMissing(x13)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_x13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return x13
  return Rsh_Fir_reg_x13_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_xu2_;
  SEXP Rsh_Fir_reg_xu3_;
  SEXP Rsh_Fir_reg_unique1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_identical1_;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf identical
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base2 = ldf identical in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
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
  // xu2 = ld xu2
  Rsh_Fir_reg_xu2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // xu3 = force? xu2
  Rsh_Fir_reg_xu3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xu2_);
  // checkMissing(xu3)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_xu3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // unique1 = ldf unique
  Rsh_Fir_reg_unique1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // p4 = prom<V +>{
  //   x14 = ld x;
  //   x15 = force? x14;
  //   checkMissing(x15);
  //   return x15;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r22 = dyn unique1[, fromLast](p4, TRUE)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique1_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names8, CCP, RHO);
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r23 = dyn identical1(xu3, r22, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args30[9];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_xu3_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args30[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args30[3] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args30[4] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args30[5] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args30[6] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args30[7] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args30[8] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names9[9];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_array_arg_names9[4] = R_MissingArg;
  Rsh_Fir_array_arg_names9[5] = R_MissingArg;
  Rsh_Fir_array_arg_names9[6] = R_MissingArg;
  Rsh_Fir_array_arg_names9[7] = R_MissingArg;
  Rsh_Fir_array_arg_names9[8] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r23_;
  goto L0_;

L2_:;
  // r19 = dyn base2(<sym xu2>, <lang unique(x, fromLast=TRUE)>)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_x15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x14 = ld x
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return x15
  return Rsh_Fir_reg_x15_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_iris;
  SEXP Rsh_Fir_reg_iris1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // iris = ld iris
  Rsh_Fir_reg_iris = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // iris1 = force? iris
  Rsh_Fir_reg_iris1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iris);
  // checkMissing(iris1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_iris1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return iris1
  return Rsh_Fir_reg_iris1_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_iris3_;
  SEXP Rsh_Fir_reg_iris4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // iris3 = ld iris3
  Rsh_Fir_reg_iris3_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // iris4 = force? iris3
  Rsh_Fir_reg_iris4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iris3_);
  // checkMissing(iris4)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_iris4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return iris4
  return Rsh_Fir_reg_iris4_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r34_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r33
  return Rsh_Fir_reg_r33_;

L1_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r34 = dyn c4(1.0, 3.0)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L0_;

L2_:;
  // r32 = dyn base3(1.0, 3.0)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r32)
  // L0(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_iris5_;
  SEXP Rsh_Fir_reg_iris6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // iris5 = ld iris
  Rsh_Fir_reg_iris5_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // iris6 = force? iris5
  Rsh_Fir_reg_iris6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iris5_);
  // checkMissing(iris6)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_iris6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return iris6
  return Rsh_Fir_reg_iris6_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_anyDuplicated1_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_identical2_;
  SEXP Rsh_Fir_reg_r43_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf identical
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base4 = ldf identical in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r40
  return Rsh_Fir_reg_r40_;

L1_:;
  // anyDuplicated1 = ldf anyDuplicated
  Rsh_Fir_reg_anyDuplicated1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // p10 = prom<V +>{
  //   iris7 = ld iris;
  //   iris8 = force? iris7;
  //   checkMissing(iris8);
  //   return iris8;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r42 = dyn anyDuplicated1(p10)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyDuplicated1_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names19, CCP, RHO);
  // identical2 = ldf identical in base
  Rsh_Fir_reg_identical2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r43 = dyn identical2(r42, 143, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args52[9];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args52[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args52[3] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args52[4] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args52[5] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args52[6] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args52[7] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args52[8] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names20[9];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_array_arg_names20[3] = R_MissingArg;
  Rsh_Fir_array_arg_names20[4] = R_MissingArg;
  Rsh_Fir_array_arg_names20[5] = R_MissingArg;
  Rsh_Fir_array_arg_names20[6] = R_MissingArg;
  Rsh_Fir_array_arg_names20[7] = R_MissingArg;
  Rsh_Fir_array_arg_names20[8] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical2_, 9, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r43)
  // L0(r43)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r43_;
  goto L0_;

L2_:;
  // r39 = dyn base4(<lang anyDuplicated(iris)>, 143)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r39)
  // L0(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_iris7_;
  SEXP Rsh_Fir_reg_iris8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // iris7 = ld iris
  Rsh_Fir_reg_iris7_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // iris8 = force? iris7
  Rsh_Fir_reg_iris8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iris7_);
  // checkMissing(iris8)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_iris8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // return iris8
  return Rsh_Fir_reg_iris8_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_anyDuplicated2_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_identical3_;
  SEXP Rsh_Fir_reg_r53_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym5 = ldf identical
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base5 = ldf identical in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r46
  return Rsh_Fir_reg_r46_;

L1_:;
  // anyDuplicated2 = ldf anyDuplicated
  Rsh_Fir_reg_anyDuplicated2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // p12 = prom<V +>{
  //   iris9 = ld iris3;
  //   iris10 = force? iris9;
  //   checkMissing(iris10);
  //   return iris10;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   sym6 = ldf c;
  //   base6 = ldf c in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r49):
  //   return r49;
  // L1():
  //   c5 = ldf c in base;
  //   r50 = dyn c5(1.0, 3.0);
  //   goto L0(r50);
  // L2():
  //   r48 = dyn base6(1.0, 3.0);
  //   goto L0(r48);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // r52 = dyn anyDuplicated2[, MARGIN](p12, p13)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyDuplicated2_, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names24, CCP, RHO);
  // identical3 = ldf identical in base
  Rsh_Fir_reg_identical3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r53 = dyn identical3(r52, 143, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args60[9];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args60[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args60[3] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args60[4] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args60[5] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args60[6] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args60[7] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args60[8] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names25[9];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_array_arg_names25[3] = R_MissingArg;
  Rsh_Fir_array_arg_names25[4] = R_MissingArg;
  Rsh_Fir_array_arg_names25[5] = R_MissingArg;
  Rsh_Fir_array_arg_names25[6] = R_MissingArg;
  Rsh_Fir_array_arg_names25[7] = R_MissingArg;
  Rsh_Fir_array_arg_names25[8] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical3_, 9, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r53)
  // L0(r53)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r53_;
  goto L0_;

L2_:;
  // r45 = dyn base5(<lang anyDuplicated(iris3, MARGIN=c(1.0, 3.0))>, 143)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r45)
  // L0(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_iris9_;
  SEXP Rsh_Fir_reg_iris10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // iris9 = ld iris3
  Rsh_Fir_reg_iris9_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // iris10 = force? iris9
  Rsh_Fir_reg_iris10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iris9_);
  // checkMissing(iris10)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_iris10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return iris10
  return Rsh_Fir_reg_iris10_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r50_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r49
  return Rsh_Fir_reg_r49_;

L1_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r50 = dyn c5(1.0, 3.0)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r50)
  // L0(r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L0_;

L2_:;
  // r48 = dyn base6(1.0, 3.0)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r48)
  // L0(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_x17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x16 = ld x
  Rsh_Fir_reg_x16_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x17 = force? x16
  Rsh_Fir_reg_x17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x16_);
  // checkMissing(x17)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_x17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // return x17
  return Rsh_Fir_reg_x17_;
}
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_x19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x18 = ld x
  Rsh_Fir_reg_x18_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x19 = force? x18
  Rsh_Fir_reg_x19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x18_);
  // checkMissing(x19)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_x19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return x19
  return Rsh_Fir_reg_x19_;
}
SEXP Rsh_Fir_user_function_inner3117001256_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3117001256 dynamic dispatch ([x, incomparables, `...`])

  return Rsh_Fir_user_version_inner3117001256_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3117001256_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3117001256 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3117001256/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_incomparables;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_incomparables_isMissing;
  SEXP Rsh_Fir_reg_incomparables_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_UseMethod;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_incomparables = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // incomparables_isMissing = missing.0(incomparables)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_incomparables;
  Rsh_Fir_reg_incomparables_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args67);
  // if incomparables_isMissing then L0(FALSE) else L0(incomparables)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_incomparables_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_incomparables_orDefault = Rsh_const(CCP, 21);
    goto L0_;
  } else {
  // L0(incomparables)
    Rsh_Fir_reg_incomparables_orDefault = Rsh_Fir_reg_incomparables;
    goto L0_;
  }

L0_:;
  // st incomparables = incomparables_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_incomparables_orDefault, RHO);
  (void)(Rsh_Fir_reg_incomparables_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args68);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_1;

L2_:;
  // UseMethod = ldf UseMethod in base
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r2 = dyn UseMethod("duplicated")
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L1_;

L3_:;
  // r = dyn base("duplicated")
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
