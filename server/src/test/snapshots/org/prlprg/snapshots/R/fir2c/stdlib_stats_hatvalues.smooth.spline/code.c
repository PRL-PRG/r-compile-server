#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2058661841_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2058661841_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2058661841
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2058661841_, RHO, CCP);
  // st `hatvalues.smooth.spline` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner2058661841_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2058661841 dynamic dispatch ([model, `...`])

  return Rsh_Fir_user_version_inner2058661841_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2058661841_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2058661841 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2058661841/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_model;  // model
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_model1_;  // model1
  SEXP Rsh_Fir_reg_model2_;  // model2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_model4_;  // model4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_model5_;  // model5
  SEXP Rsh_Fir_reg_model6_;  // model6
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_model8_;  // model8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_hat;  // hat
  SEXP Rsh_Fir_reg_hat1_;  // hat1
  SEXP Rsh_Fir_reg__Machine;  // _Machine
  SEXP Rsh_Fir_reg__Machine1_;  // _Machine1
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_hat3_;  // hat3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg__Machine3_;  // _Machine3
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_hat5_;  // hat5
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_hat6_;  // hat6
  SEXP Rsh_Fir_reg_hat7_;  // hat7
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_hat9_;  // hat9
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_hat12_;  // hat12
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_dat;  // dat
  SEXP Rsh_Fir_reg_dat1_;  // dat1
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_hat14_;  // hat14
  SEXP Rsh_Fir_reg_dat3_;  // dat3
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_hat16_;  // hat16
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_model9_;  // model9
  SEXP Rsh_Fir_reg_model10_;  // model10
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_hat18_;  // hat18
  SEXP Rsh_Fir_reg_model12_;  // model12
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_hat20_;  // hat20
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r38_;  // r38

  // Bind parameters
  Rsh_Fir_reg_model = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st model = model
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_model, RHO);
  (void)(Rsh_Fir_reg_model);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `is.list`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf `is.list` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L0_:;
  // r4 = `!`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L14() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L14()
    goto L14_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // model5 = ld model
  Rsh_Fir_reg_model5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L18() else D4()
  // L18()
  goto L18_;

L3_:;
  // st hat = dx5
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // hat6 = ld hat
  Rsh_Fir_reg_hat6_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L32() else D7()
  // L32()
  goto L32_;

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx9
  return Rsh_Fir_reg_dx9_;

L5_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r38 = dyn __(hat12, r34)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_hat12_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L4(r38)
  // L4(r38)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r38_;
  goto L4_;

L6_:;
  // model1 = ld model
  Rsh_Fir_reg_model1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L7_:;
  // r = dyn base(<lang `<-`(dat, `$`(model, data))>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [model1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_model1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // model2 = force? model1
  Rsh_Fir_reg_model2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_model1_);
  // checkMissing(model2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_model2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // c = `is.object`(model2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_model2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c then L10() else L11(model2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L10()
    goto L10_;
  } else {
  // L11(model2)
    Rsh_Fir_reg_model4_ = Rsh_Fir_reg_model2_;
    goto L11_;
  }

L9_:;
  // st dat = dx1
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r3 = dyn is_list(dx1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L13() else D1()
  // L13()
  goto L13_;

L10_:;
  // dr = tryDispatchBuiltin.1("$", model2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_model2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args8);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if dc then L12() else L11(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L12()
    goto L12_;
  } else {
  // L11(dr)
    Rsh_Fir_reg_model4_ = Rsh_Fir_reg_dr;
    goto L11_;
  }

L11_:;
  // r2 = `$`(model4, <sym data>)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_model4_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L9(r2)
  // L9(r2)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r2_;
  goto L9_;

L12_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L9(dx)
  // L9(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L9_;

D1_:;
  // deopt 7 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r3_;
  goto L0_;

L14_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L15() else D2()
  // L15()
  goto L15_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // r5 = dyn stop("need result of smooth.spline(keep.data = TRUE)")
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L16() else D3()
  // L16()
  goto L16_;

D3_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L2()
  // L2()
  goto L2_;

D4_:;
  // deopt 15 [model5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_model5_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L18_:;
  // model6 = force? model5
  Rsh_Fir_reg_model6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_model5_);
  // checkMissing(model6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_model6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(model6)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_model6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c2 then L20() else L21(model6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L20()
    goto L20_;
  } else {
  // L21(model6)
    Rsh_Fir_reg_model8_ = Rsh_Fir_reg_model6_;
    goto L21_;
  }

L19_:;
  // st hat = dx3
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // l = ld hat
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c3 = `is.object`(l)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c3 then L23() else L24(1.0, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L23()
    goto L23_;
  } else {
  // L24(1.0, l)
    Rsh_Fir_reg_r9_ = Rsh_const(CCP, 12);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L24_;
  }

L20_:;
  // dr2 = tryDispatchBuiltin.1("$", model6)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_model6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if dc1 then L22() else L21(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L22()
    goto L22_;
  } else {
  // L21(dr2)
    Rsh_Fir_reg_model8_ = Rsh_Fir_reg_dr2_;
    goto L21_;
  }

L21_:;
  // r7 = `$`(model8, <sym lev>)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_model8_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L19(r7)
  // L19(r7)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r7_;
  goto L19_;

L22_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L19(dx2)
  // L19(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L19_;

L23_:;
  // dr4 = tryDispatchBuiltin.0("[<-", l, 1.0)
  SEXP Rsh_Fir_array_args20[3];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args20);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if dc2 then L25() else L24(1.0, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L25()
    goto L25_;
  } else {
  // L24(1.0, dr4)
    Rsh_Fir_reg_r9_ = Rsh_const(CCP, 12);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr4_;
    goto L24_;
  }

L24_:;
  // hat = ld hat
  Rsh_Fir_reg_hat = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L26() else D5()
  // L26()
  goto L26_;

L25_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L3(dx4)
  // L3(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L3_;

D5_:;
  // deopt 22 [r9, l2, 1.0, hat]
  SEXP Rsh_Fir_array_deopt_stack4[4];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_deopt_stack4[3] = Rsh_Fir_reg_hat;
  Rsh_Fir_deopt(22, 4, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L26_:;
  // hat1 = force? hat
  Rsh_Fir_reg_hat1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_hat);
  // checkMissing(hat1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_hat1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // _Machine = ld `.Machine`
  Rsh_Fir_reg__Machine = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L27() else D6()
  // L27()
  goto L27_;

D6_:;
  // deopt 25 [r9, l2, 1.0, hat1, 1.0, 10.0, _Machine]
  SEXP Rsh_Fir_array_deopt_stack5[7];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_deopt_stack5[3] = Rsh_Fir_reg_hat1_;
  Rsh_Fir_array_deopt_stack5[4] = Rsh_const(CCP, 12);
  Rsh_Fir_array_deopt_stack5[5] = Rsh_const(CCP, 16);
  Rsh_Fir_array_deopt_stack5[6] = Rsh_Fir_reg__Machine;
  Rsh_Fir_deopt(25, 7, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L27_:;
  // _Machine1 = force? _Machine
  Rsh_Fir_reg__Machine1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Machine);
  // checkMissing(_Machine1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg__Machine1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(_Machine1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c4 then L29() else L30(r9, l2, 1.0, hat1, 1.0, 10.0, _Machine1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L29()
    goto L29_;
  } else {
  // L30(r9, l2, 1.0, hat1, 1.0, 10.0, _Machine1)
    Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r9_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    Rsh_Fir_reg_r17_ = Rsh_const(CCP, 12);
    Rsh_Fir_reg_hat3_ = Rsh_Fir_reg_hat1_;
    Rsh_Fir_reg_r18_ = Rsh_const(CCP, 12);
    Rsh_Fir_reg_r19_ = Rsh_const(CCP, 16);
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg__Machine1_;
    goto L30_;
  }

L28_:;
  // r29 = `*`(r27, dx7)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // r30 = `-`(r26, r29)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // r31 = `>`(hat5, r30)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_hat5_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r32 = dyn ___(l6, r25, r31)
  SEXP Rsh_Fir_array_args29[3];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args29[2] = Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(r32)
  // L3(r32)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r32_;
  goto L3_;

L29_:;
  // dr6 = tryDispatchBuiltin.1("$", _Machine1)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc3 then L31() else L30(r9, l2, 1.0, hat1, 1.0, 10.0, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L31()
    goto L31_;
  } else {
  // L30(r9, l2, 1.0, hat1, 1.0, 10.0, dr6)
    Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r9_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    Rsh_Fir_reg_r17_ = Rsh_const(CCP, 12);
    Rsh_Fir_reg_hat3_ = Rsh_Fir_reg_hat1_;
    Rsh_Fir_reg_r18_ = Rsh_const(CCP, 12);
    Rsh_Fir_reg_r19_ = Rsh_const(CCP, 16);
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg_dr6_;
    goto L30_;
  }

L30_:;
  // r28 = `$`(_Machine3, <sym double.eps>)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg__Machine3_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L28(r16, l4, r17, hat3, r18, r19, r28)
  // L28(r16, l4, r17, hat3, r18, r19, r28)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_hat5_ = Rsh_Fir_reg_hat3_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r28_;
  goto L28_;

L31_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L28(r9, l2, 1.0, hat1, 1.0, 10.0, dx6)
  // L28(r9, l2, 1.0, hat1, 1.0, 10.0, dx6)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_r25_ = Rsh_const(CCP, 12);
  Rsh_Fir_reg_hat5_ = Rsh_Fir_reg_hat1_;
  Rsh_Fir_reg_r26_ = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r27_ = Rsh_const(CCP, 16);
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L28_;

D7_:;
  // deopt 33 [hat6]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_hat6_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L32_:;
  // hat7 = force? hat6
  Rsh_Fir_reg_hat7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_hat6_);
  // checkMissing(hat7)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_hat7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(hat7)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_hat7_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c5 then L33() else L34(hat7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L33()
    goto L33_;
  } else {
  // L34(hat7)
    Rsh_Fir_reg_hat9_ = Rsh_Fir_reg_hat7_;
    goto L34_;
  }

L33_:;
  // dr8 = tryDispatchBuiltin.1("[", hat7)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_hat7_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args36);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if dc4 then L35() else L34(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L35()
    goto L35_;
  } else {
  // L34(dr8)
    Rsh_Fir_reg_hat9_ = Rsh_Fir_reg_dr8_;
    goto L34_;
  }

L34_:;
  // sym1 = ldf match
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base1 = ldf match in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard1 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L35_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L4(dx8)
  // L4(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L4_;

L36_:;
  // dat = ld dat
  Rsh_Fir_reg_dat = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L38() else D8()
  // L38()
  goto L38_;

L37_:;
  // r33 = dyn base1(<lang `$`(dat, x)>, <lang `$`(model, x)>)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L5(hat9, r33)
  // L5(hat9, r33)
  Rsh_Fir_reg_hat12_ = Rsh_Fir_reg_hat9_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L5_;

D8_:;
  // deopt 37 [hat9, dat]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_hat9_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_dat;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L38_:;
  // dat1 = force? dat
  Rsh_Fir_reg_dat1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dat);
  // checkMissing(dat1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dat1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(dat1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dat1_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c6 then L40() else L41(hat9, dat1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L40()
    goto L40_;
  } else {
  // L41(hat9, dat1)
    Rsh_Fir_reg_hat14_ = Rsh_Fir_reg_hat9_;
    Rsh_Fir_reg_dat3_ = Rsh_Fir_reg_dat1_;
    goto L41_;
  }

L39_:;
  // model9 = ld model
  Rsh_Fir_reg_model9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L43() else D9()
  // L43()
  goto L43_;

L40_:;
  // dr10 = tryDispatchBuiltin.1("$", dat1)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_dat1_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args43);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc5 then L42() else L41(hat9, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L42()
    goto L42_;
  } else {
  // L41(hat9, dr10)
    Rsh_Fir_reg_hat14_ = Rsh_Fir_reg_hat9_;
    Rsh_Fir_reg_dat3_ = Rsh_Fir_reg_dr10_;
    goto L41_;
  }

L41_:;
  // r35 = `$`(dat3, <sym x>)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dat3_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L39(hat14, r35)
  // L39(hat14, r35)
  Rsh_Fir_reg_hat16_ = Rsh_Fir_reg_hat14_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r35_;
  goto L39_;

L42_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L39(hat9, dx10)
  // L39(hat9, dx10)
  Rsh_Fir_reg_hat16_ = Rsh_Fir_reg_hat9_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L39_;

D9_:;
  // deopt 40 [hat16, model9]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_hat16_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_model9_;
  Rsh_Fir_deopt(40, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L43_:;
  // model10 = force? model9
  Rsh_Fir_reg_model10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_model9_);
  // checkMissing(model10)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_model10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(model10)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_model10_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if c7 then L45() else L46(hat16, model10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L45()
    goto L45_;
  } else {
  // L46(hat16, model10)
    Rsh_Fir_reg_hat18_ = Rsh_Fir_reg_hat16_;
    Rsh_Fir_reg_model12_ = Rsh_Fir_reg_model10_;
    goto L46_;
  }

L44_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r37 = dyn match(dx11, dx13, NA_INT, NULL)
  SEXP Rsh_Fir_array_args49[4];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args49[2] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args49[3] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L48() else D10()
  // L48()
  goto L48_;

L45_:;
  // dr12 = tryDispatchBuiltin.1("$", model10)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_model10_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args50);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if dc6 then L47() else L46(hat16, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L47()
    goto L47_;
  } else {
  // L46(hat16, dr12)
    Rsh_Fir_reg_hat18_ = Rsh_Fir_reg_hat16_;
    Rsh_Fir_reg_model12_ = Rsh_Fir_reg_dr12_;
    goto L46_;
  }

L46_:;
  // r36 = `$`(model12, <sym x>)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_model12_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L44(hat18, r36)
  // L44(hat18, r36)
  Rsh_Fir_reg_hat20_ = Rsh_Fir_reg_hat18_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r36_;
  goto L44_;

L47_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L44(hat16, dx12)
  // L44(hat16, dx12)
  Rsh_Fir_reg_hat20_ = Rsh_Fir_reg_hat16_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L44_;

D10_:;
  // deopt 46 [hat20, r37]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_hat20_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L48_:;
  // goto L5(hat20, r37)
  // L5(hat20, r37)
  Rsh_Fir_reg_hat12_ = Rsh_Fir_reg_hat20_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r37_;
  goto L5_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
