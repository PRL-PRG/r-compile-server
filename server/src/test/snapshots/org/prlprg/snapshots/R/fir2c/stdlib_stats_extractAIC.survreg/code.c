#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3097143473_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3097143473_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner3097143473
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3097143473_, RHO, CCP);
  // st `extractAIC.survreg` = r
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
SEXP Rsh_Fir_user_function_inner3097143473_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3097143473 dynamic dispatch ([fit, scale, k, `...`])

  return Rsh_Fir_user_version_inner3097143473_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3097143473_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3097143473 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3097143473/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_fit;  // fit
  SEXP Rsh_Fir_reg_scale;  // scale
  SEXP Rsh_Fir_reg_k;  // k
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_k_isMissing;  // k_isMissing
  SEXP Rsh_Fir_reg_k_orDefault;  // k_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_fit1_;  // fit1
  SEXP Rsh_Fir_reg_fit2_;  // fit2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_fit4_;  // fit4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_edf;  // edf
  SEXP Rsh_Fir_reg_edf1_;  // edf1
  SEXP Rsh_Fir_reg_fit5_;  // fit5
  SEXP Rsh_Fir_reg_fit6_;  // fit6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_fit8_;  // fit8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_k1_;  // k1
  SEXP Rsh_Fir_reg_k2_;  // k2
  SEXP Rsh_Fir_reg_edf2_;  // edf2
  SEXP Rsh_Fir_reg_edf3_;  // edf3
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r19_;  // r19

  // Bind parameters
  Rsh_Fir_reg_fit = PARAMS[0];
  Rsh_Fir_reg_scale = PARAMS[1];
  Rsh_Fir_reg_k = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st fit = fit
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_fit, RHO);
  (void)(Rsh_Fir_reg_fit);
  // st scale = scale
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_scale, RHO);
  (void)(Rsh_Fir_reg_scale);
  // k_isMissing = missing.0(k)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_k;
  Rsh_Fir_reg_k_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if k_isMissing then L0(2.0) else L0(k)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_k_isMissing)) {
  // L0(2.0)
    Rsh_Fir_reg_k_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(k)
    Rsh_Fir_reg_k_orDefault = Rsh_Fir_reg_k;
    goto L0_;
  }

L0_:;
  // st k = k_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_k_orDefault, RHO);
  (void)(Rsh_Fir_reg_k_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf sum
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf sum in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L1_:;
  // st edf = r1
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_;

L3_:;
  // r16 = `*`(r14, dx7)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // k1 = ld k
  Rsh_Fir_reg_k1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L23() else D4()
  // L23()
  goto L23_;

L4_:;
  // fit1 = ld fit
  Rsh_Fir_reg_fit1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r = dyn base(<lang `$`(fit, df)>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 2 [fit1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_fit1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L6_:;
  // fit2 = force? fit1
  Rsh_Fir_reg_fit2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit1_);
  // checkMissing(fit2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_fit2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // c = `is.object`(fit2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_fit2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c then L8() else L9(fit2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L8()
    goto L8_;
  } else {
  // L9(fit2)
    Rsh_Fir_reg_fit4_ = Rsh_Fir_reg_fit2_;
    goto L9_;
  }

L7_:;
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r3 = dyn sum(dx1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L11() else D1()
  // L11()
  goto L11_;

L8_:;
  // dr = tryDispatchBuiltin.1("$", fit2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_fit2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args8);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if dc then L10() else L9(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L10()
    goto L10_;
  } else {
  // L9(dr)
    Rsh_Fir_reg_fit4_ = Rsh_Fir_reg_dr;
    goto L9_;
  }

L9_:;
  // r2 = `$`(fit4, <sym df>)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_fit4_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L7(r2)
  // L7(r2)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r2_;
  goto L7_;

L10_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L7(dx)
  // L7(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L7_;

D1_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r3_;
  goto L1_;

L12_:;
  // edf = ld edf
  Rsh_Fir_reg_edf = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

L13_:;
  // r4 = dyn base1(<sym edf>, <lang `+`(`*`(`-`(2.0), `[`(`$`(fit, loglik), 2)), `*`(k, edf))>)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L2_;

D2_:;
  // deopt 10 [edf]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_edf;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // edf1 = force? edf
  Rsh_Fir_reg_edf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_edf);
  // checkMissing(edf1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_edf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // fit5 = ld fit
  Rsh_Fir_reg_fit5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

D3_:;
  // deopt 13 [-2.0, fit5]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_fit5_;
  Rsh_Fir_deopt(13, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // fit6 = force? fit5
  Rsh_Fir_reg_fit6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit5_);
  // checkMissing(fit6)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_fit6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(fit6)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_fit6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c1 then L17() else L18(-2.0, fit6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L17()
    goto L17_;
  } else {
  // L18(-2.0, fit6)
    Rsh_Fir_reg_r7_ = Rsh_const(CCP, 13);
    Rsh_Fir_reg_fit8_ = Rsh_Fir_reg_fit6_;
    goto L18_;
  }

L16_:;
  // c2 = `is.object`(dx3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c2 then L20() else L21(r9, dx3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L20()
    goto L20_;
  } else {
  // L21(r9, dx3)
    Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r9_;
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    goto L21_;
  }

L17_:;
  // dr2 = tryDispatchBuiltin.1("$", fit6)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_fit6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if dc1 then L19() else L18(-2.0, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L19()
    goto L19_;
  } else {
  // L18(-2.0, dr2)
    Rsh_Fir_reg_r7_ = Rsh_const(CCP, 13);
    Rsh_Fir_reg_fit8_ = Rsh_Fir_reg_dr2_;
    goto L18_;
  }

L18_:;
  // r10 = `$`(fit8, <sym loglik>)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_fit8_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L16(r7, r10)
  // L16(r7, r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r10_;
  goto L16_;

L19_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L16(-2.0, dx2)
  // L16(-2.0, dx2)
  Rsh_Fir_reg_r9_ = Rsh_const(CCP, 13);
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L16_;

L20_:;
  // dr4 = tryDispatchBuiltin.1("[", dx3)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc2 then L22() else L21(r9, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L22()
    goto L22_;
  } else {
  // L21(r9, dr4)
    Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r9_;
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dr4_;
    goto L21_;
  }

L21_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r15 = dyn __(dx5, 2)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(r12, r15)
  // L3(r12, r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r15_;
  goto L3_;

L22_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L3(r9, dx6)
  // L3(r9, dx6)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L3_;

D4_:;
  // deopt 19 [r16, k1]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_k1_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L23_:;
  // k2 = force? k1
  Rsh_Fir_reg_k2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k1_);
  // checkMissing(k2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_k2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // edf2 = ld edf
  Rsh_Fir_reg_edf2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L24() else D5()
  // L24()
  goto L24_;

D5_:;
  // deopt 20 [r16, k2, edf2]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_k2_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_edf2_;
  Rsh_Fir_deopt(20, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L24_:;
  // edf3 = force? edf2
  Rsh_Fir_reg_edf3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_edf2_);
  // checkMissing(edf3)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_edf3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // r17 = `*`(k2, edf3)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_k2_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_edf3_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // r18 = `+`(r16, r17)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r19 = dyn c3(edf1, r18)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_edf1_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L25() else D6()
  // L25()
  goto L25_;

D6_:;
  // deopt 25 [r19]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L2(r19)
  // L2(r19)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r19_;
  goto L2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
