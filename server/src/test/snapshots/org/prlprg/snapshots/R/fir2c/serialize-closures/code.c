#include <runtime.h>
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST);
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
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST) {
  // FIR main dynamic dispatch from R ([])
  if (TYPEOF(PARAMS_LIST) != VECSXP) { Rf_PrintValue(PARAMS_LIST); Rsh_error("FIŘ expected a list for params"); }
  int NPARAMS = Rf_length(PARAMS_LIST);
  SEXP const *PARAMS = STDVEC_DATAPTR(PARAMS_LIST);
  return Rsh_Fir_user_function_main(CCP, RHO, NPARAMS, PARAMS, NULL);
}
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_commandArgs;
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg__args;
  SEXP Rsh_Fir_reg__args1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg__args3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg__args4_;
  SEXP Rsh_Fir_reg__args5_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg__args7_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_source;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_dir_create;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_ls;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_i7_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_get;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_is_function;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_get1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_print;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_saveRDS;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_saveRDS1_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_i10_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // commandArgs = ldf commandArgs
  Rsh_Fir_reg_commandArgs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // r = dyn commandArgs[trailingOnly](TRUE)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r = Rsh_Fir_call_dynamic(Rsh_Fir_reg_commandArgs, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 4 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // st `.args` = r
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // _args = ld `.args`
  Rsh_Fir_reg__args = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

D2_:;
  // deopt 6 [_args]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg__args;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L9_:;
  // _args1 = force? _args
  Rsh_Fir_reg__args1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__args);
  // checkMissing(_args1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg__args1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // c = `is.object`(_args1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg__args1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args2);
  // if c then L10() else L11(_args1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L10()
    goto L10_;
  } else {
  // L11(_args1)
    Rsh_Fir_reg__args3_ = Rsh_Fir_reg__args1_;
    goto L11_;
  }

L0_:;
  // st `.source` = dx1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // _args4 = ld `.args`
  Rsh_Fir_reg__args4_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

L10_:;
  // dr = tryDispatchBuiltin.1("[", _args1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg__args1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if dc then L12() else L11(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L12()
    goto L12_;
  } else {
  // L11(dr)
    Rsh_Fir_reg__args3_ = Rsh_Fir_reg_dr;
    goto L11_;
  }

L11_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r1 = dyn __(_args3, 1.0)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg__args3_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1_;
  goto L0_;

D3_:;
  // deopt 12 [_args4]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg__args4_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L12_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L13_:;
  // _args5 = force? _args4
  Rsh_Fir_reg__args5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__args4_);
  // checkMissing(_args5)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg__args5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(_args5)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg__args5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args8);
  // if c1 then L14() else L15(_args5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L14()
    goto L14_;
  } else {
  // L15(_args5)
    Rsh_Fir_reg__args7_ = Rsh_Fir_reg__args5_;
    goto L15_;
  }

L1_:;
  // st `.target` = dx3
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // source = ldf source
  Rsh_Fir_reg_source = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L17() else D4()
  // L17()
  goto L17_;

L14_:;
  // dr2 = tryDispatchBuiltin.1("[", _args5)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg__args5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args9);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if dc1 then L16() else L15(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L16()
    goto L16_;
  } else {
  // L15(dr2)
    Rsh_Fir_reg__args7_ = Rsh_Fir_reg_dr2_;
    goto L15_;
  }

L15_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn __1(_args7, 2.0)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg__args7_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r2_;
  goto L1_;

D4_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L1(dx2)
  // L1(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L1_;

L17_:;
  // p = prom<V +>{
  //   _source = ld `.source`;
  //   _source1 = force? _source;
  //   checkMissing(_source1);
  //   return _source1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r4 = dyn source[, chdir, `keep.source`](p, TRUE, TRUE)
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_source, 3, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names3, RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

D5_:;
  // deopt 25 [r4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L18_:;
  // dir_create = ldf `dir.create`
  Rsh_Fir_reg_dir_create = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

D6_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p1 = prom<V +>{
  //   _target = ld `.target`;
  //   _target1 = force? _target;
  //   checkMissing(_target1);
  //   return _target1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r6 = dyn dir_create(p1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dir_create, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names4, RHO);
  // check L20() else D7()
  // L20()
  goto L20_;

D7_:;
  // deopt 29 [r6]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L20_:;
  // ls = ldf ls
  Rsh_Fir_reg_ls = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L21() else D8()
  // L21()
  goto L21_;

D8_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // r7 = dyn ls()
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ls, 0, NULL, NULL, RHO);
  // check L22() else D9()
  // L22()
  goto L22_;

D9_:;
  // deopt 32 [r7]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L22_:;
  // s = toForSeq(r7)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args18);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 15);
  // goto L2(i)
  // L2(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L2_;

L2_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args19);
  // c2 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if c2 then L23() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L23()
    goto L23_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args21[4];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args21[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args21[3] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args21);
  // st `.name` = x
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym = ldf `is.function`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base = ldf `is.function` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L23_:;
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return i2
  return Rsh_Fir_reg_i2_;

L3_:;
  // c3 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args23);
  // if c3 then L29() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L29()
    goto L29_;
  } else {
  // L4()
    goto L4_;
  }

L24_:;
  // get = ldf get
  Rsh_Fir_reg_get = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L26() else D10()
  // L26()
  goto L26_;

L25_:;
  // r8 = dyn base(<lang get(.name)>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names5, RHO);
  // goto L3(i2, r8)
  // L3(i2, r8)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L3_;

D10_:;
  // deopt 36 [i2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L5(i7)
  // L5(i7)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i7_;
  goto L5_;

L5_:;
  // goto L2(i10)
  // L2(i10)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i10_;
  goto L2_;

L26_:;
  // p2 = prom<V +>{
  //   _name = ld `.name`;
  //   _name1 = force? _name;
  //   checkMissing(_name1);
  //   return _name1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r11 = dyn get(p2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names6, RHO);
  // check L27() else D11()
  // L27()
  goto L27_;

L29_:;
  // get1 = ldf get
  Rsh_Fir_reg_get1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L30() else D13()
  // L30()
  goto L30_;

D11_:;
  // deopt 38 [i2, r11]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 42 [i7]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L27_:;
  // is_function = ldf `is.function` in base
  Rsh_Fir_reg_is_function = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r12 = dyn is_function(r11)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_function, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names7, RHO);
  // check L28() else D12()
  // L28()
  goto L28_;

L30_:;
  // p3 = prom<V +>{
  //   _name2 = ld `.name`;
  //   _name3 = force? _name2;
  //   checkMissing(_name3);
  //   return _name3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r14 = dyn get1(p3)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get1_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names8, RHO);
  // check L31() else D14()
  // L31()
  goto L31_;

D12_:;
  // deopt 40 [i2, r12]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(40, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 44 [i7, r14]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(44, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L3(i2, r12)
  // L3(i2, r12)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r12_;
  goto L3_;

L31_:;
  // st `.func` = r14
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // print = ldf print
  Rsh_Fir_reg_print = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L32() else D15()
  // L32()
  goto L32_;

D15_:;
  // deopt 47 [i7]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L32_:;
  // p4 = prom<V +>{
  //   sym1 = ldf attributes;
  //   base1 = ldf attributes in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r16):
  //   return r16;
  // L1():
  //   _func = ld `.func`;
  //   _func1 = force? _func;
  //   checkMissing(_func1);
  //   attributes = ldf attributes in base;
  //   r17 = dyn attributes(_func1);
  //   goto L0(r17);
  // L2():
  //   r15 = dyn base1(<sym .func>);
  //   goto L0(r15);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r19 = dyn print(p4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names11, RHO);
  // check L33() else D16()
  // L33()
  goto L33_;

D16_:;
  // deopt 49 [i7, r19]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(49, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L33_:;
  // saveRDS = ldf saveRDS
  Rsh_Fir_reg_saveRDS = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L34() else D17()
  // L34()
  goto L34_;

D17_:;
  // deopt 51 [i7]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L34_:;
  // p5 = prom<V +>{
  //   _func2 = ld `.func`;
  //   _func3 = force? _func2;
  //   checkMissing(_func3);
  //   return _func3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   file_path = ldf `file.path`;
  //   p6 = prom<V +>{
  //     _target2 = ld `.target`;
  //     _target3 = force? _target2;
  //     checkMissing(_target3);
  //     return _target3;
  //   };
  //   p8 = prom<V +>{
  //     paste0 = ldf paste0;
  //     p7 = prom<V +>{
  //       _name4 = ld `.name`;
  //       _name5 = force? _name4;
  //       checkMissing(_name5);
  //       return _name5;
  //     };
  //     r23 = dyn paste0(p7, ".ast.rds");
  //     return r23;
  //   };
  //   r25 = dyn file_path(p6, p8);
  //   return r25;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r27 = dyn saveRDS[, compress, file](p5, FALSE, p9)
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_arg_names14[2] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_saveRDS, 3, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names14, RHO);
  // check L35() else D18()
  // L35()
  goto L35_;

D18_:;
  // deopt 57 [i7, r27]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(57, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L35_:;
  // saveRDS1 = ldf saveRDS
  Rsh_Fir_reg_saveRDS1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L36() else D19()
  // L36()
  goto L36_;

D19_:;
  // deopt 59 [i7]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L36_:;
  // p11 = prom<V +>{
  //   __2 = ldf `::`;
  //   r28 = dyn __2("compiler", "cmpfun");
  //   checkFun.0(r28);
  //   r29 = r28 as cls;
  //   p10 = prom<V +>{
  //     _func4 = ld `.func`;
  //     _func5 = force? _func4;
  //     checkMissing(_func5);
  //     return _func5;
  //   };
  //   r31 = dyn r29(p10);
  //   return r31;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   file_path1 = ldf `file.path`;
  //   p12 = prom<V +>{
  //     _target4 = ld `.target`;
  //     _target5 = force? _target4;
  //     checkMissing(_target5);
  //     return _target5;
  //   };
  //   p14 = prom<V +>{
  //     paste1 = ldf paste0;
  //     p13 = prom<V +>{
  //       _name6 = ld `.name`;
  //       _name7 = force? _name6;
  //       checkMissing(_name7);
  //       return _name7;
  //     };
  //     r35 = dyn paste1(p13, ".bc.rds");
  //     return r35;
  //   };
  //   r37 = dyn file_path1(p12, p14);
  //   return r37;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r39 = dyn saveRDS1[, compress, file](p11, FALSE, p15)
  SEXP Rsh_Fir_array_args49[3];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args49[2] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_arg_names19[2] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_saveRDS1_, 3, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names19, RHO);
  // check L37() else D20()
  // L37()
  goto L37_;

D20_:;
  // deopt 65 [i7, r39]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(65, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L5(i7)
  // L5(i7)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i7_;
  goto L5_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__source;
  SEXP Rsh_Fir_reg__source1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // _source = ld `.source`
  Rsh_Fir_reg__source = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // _source1 = force? _source
  Rsh_Fir_reg__source1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__source);
  // checkMissing(_source1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg__source1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return _source1
  return Rsh_Fir_reg__source1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__target;
  SEXP Rsh_Fir_reg__target1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // _target = ld `.target`
  Rsh_Fir_reg__target = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // _target1 = force? _target
  Rsh_Fir_reg__target1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__target);
  // checkMissing(_target1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg__target1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return _target1
  return Rsh_Fir_reg__target1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__name;
  SEXP Rsh_Fir_reg__name1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // _name = ld `.name`
  Rsh_Fir_reg__name = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // _name1 = force? _name
  Rsh_Fir_reg__name1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__name);
  // checkMissing(_name1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg__name1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return _name1
  return Rsh_Fir_reg__name1_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__name2_;
  SEXP Rsh_Fir_reg__name3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // _name2 = ld `.name`
  Rsh_Fir_reg__name2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // _name3 = force? _name2
  Rsh_Fir_reg__name3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__name2_);
  // checkMissing(_name3)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg__name3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return _name3
  return Rsh_Fir_reg__name3_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg__func;
  SEXP Rsh_Fir_reg__func1_;
  SEXP Rsh_Fir_reg_attributes;
  SEXP Rsh_Fir_reg_r17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf attributes
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base1 = ldf attributes in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r16
  return Rsh_Fir_reg_r16_;

L1_:;
  // _func = ld `.func`
  Rsh_Fir_reg__func = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // _func1 = force? _func
  Rsh_Fir_reg__func1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__func);
  // checkMissing(_func1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg__func1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // attributes = ldf attributes in base
  Rsh_Fir_reg_attributes = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r17 = dyn attributes(_func1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg__func1_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names9, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L0_;

L2_:;
  // r15 = dyn base1(<sym .func>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names10, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__func2_;
  SEXP Rsh_Fir_reg__func3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // _func2 = ld `.func`
  Rsh_Fir_reg__func2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // _func3 = force? _func2
  Rsh_Fir_reg__func3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__func2_);
  // checkMissing(_func3)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg__func3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return _func3
  return Rsh_Fir_reg__func3_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file_path;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r25_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // file_path = ldf `file.path`
  Rsh_Fir_reg_file_path = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // p6 = prom<V +>{
  //   _target2 = ld `.target`;
  //   _target3 = force? _target2;
  //   checkMissing(_target3);
  //   return _target3;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   paste0 = ldf paste0;
  //   p7 = prom<V +>{
  //     _name4 = ld `.name`;
  //     _name5 = force? _name4;
  //     checkMissing(_name5);
  //     return _name5;
  //   };
  //   r23 = dyn paste0(p7, ".ast.rds");
  //   return r23;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r25 = dyn file_path(p6, p8)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names13, RHO);
  // return r25
  return Rsh_Fir_reg_r25_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__target2_;
  SEXP Rsh_Fir_reg__target3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // _target2 = ld `.target`
  Rsh_Fir_reg__target2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // _target3 = force? _target2
  Rsh_Fir_reg__target3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__target2_);
  // checkMissing(_target3)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg__target3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return _target3
  return Rsh_Fir_reg__target3_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paste0_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // p7 = prom<V +>{
  //   _name4 = ld `.name`;
  //   _name5 = force? _name4;
  //   checkMissing(_name5);
  //   return _name5;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r23 = dyn paste0(p7, ".ast.rds")
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names12, RHO);
  // return r23
  return Rsh_Fir_reg_r23_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__name4_;
  SEXP Rsh_Fir_reg__name5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // _name4 = ld `.name`
  Rsh_Fir_reg__name4_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // _name5 = force? _name4
  Rsh_Fir_reg__name5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__name4_);
  // checkMissing(_name5)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg__name5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // return _name5
  return Rsh_Fir_reg__name5_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r31_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __2 = ldf `::`
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // r28 = dyn __2("compiler", "cmpfun")
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names15, RHO);
  // checkFun.0(r28)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r28_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args42));
  // r29 = r28 as cls
  Rsh_Fir_reg_r29_ = Rsh_Fir_cast(Rsh_Fir_reg_r28_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p10 = prom<V +>{
  //   _func4 = ld `.func`;
  //   _func5 = force? _func4;
  //   checkMissing(_func5);
  //   return _func5;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r31 = dyn r29(p10)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r29_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names16, RHO);
  // return r31
  return Rsh_Fir_reg_r31_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__func4_;
  SEXP Rsh_Fir_reg__func5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // _func4 = ld `.func`
  Rsh_Fir_reg__func4_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // _func5 = force? _func4
  Rsh_Fir_reg__func5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__func4_);
  // checkMissing(_func5)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg__func5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return _func5
  return Rsh_Fir_reg__func5_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file_path1_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r37_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // file_path1 = ldf `file.path`
  Rsh_Fir_reg_file_path1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // p12 = prom<V +>{
  //   _target4 = ld `.target`;
  //   _target5 = force? _target4;
  //   checkMissing(_target5);
  //   return _target5;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   paste1 = ldf paste0;
  //   p13 = prom<V +>{
  //     _name6 = ld `.name`;
  //     _name7 = force? _name6;
  //     checkMissing(_name7);
  //     return _name7;
  //   };
  //   r35 = dyn paste1(p13, ".bc.rds");
  //   return r35;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // r37 = dyn file_path1(p12, p14)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path1_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names18, RHO);
  // return r37
  return Rsh_Fir_reg_r37_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__target4_;
  SEXP Rsh_Fir_reg__target5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // _target4 = ld `.target`
  Rsh_Fir_reg__target4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // _target5 = force? _target4
  Rsh_Fir_reg__target5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__target4_);
  // checkMissing(_target5)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg__target5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return _target5
  return Rsh_Fir_reg__target5_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paste1_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r35_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // paste1 = ldf paste0
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // p13 = prom<V +>{
  //   _name6 = ld `.name`;
  //   _name7 = force? _name6;
  //   checkMissing(_name7);
  //   return _name7;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // r35 = dyn paste1(p13, ".bc.rds")
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names17, RHO);
  // return r35
  return Rsh_Fir_reg_r35_;
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__name6_;
  SEXP Rsh_Fir_reg__name7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // _name6 = ld `.name`
  Rsh_Fir_reg__name6_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // _name7 = force? _name6
  Rsh_Fir_reg__name7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__name6_);
  // checkMissing(_name7)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg__name7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return _name7
  return Rsh_Fir_reg__name7_;
}
