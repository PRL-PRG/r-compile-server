#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3937076614_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3937076614_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3937076614_(SEXP CCP, SEXP RHO);
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
  // r = clos inner3937076614
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3937076614_, RHO, CCP);
  // st `extractAIC.lm` = r
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
SEXP Rsh_Fir_user_function_inner3937076614_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3937076614 dynamic dispatch ([fit, scale, k, `...`])

  return Rsh_Fir_user_version_inner3937076614_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3937076614_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3937076614 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3937076614/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_fit;  // fit
  SEXP Rsh_Fir_reg_scale;  // scale
  SEXP Rsh_Fir_reg_k;  // k
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_scale_isMissing;  // scale_isMissing
  SEXP Rsh_Fir_reg_scale_orDefault;  // scale_orDefault
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
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_fit5_;  // fit5
  SEXP Rsh_Fir_reg_fit6_;  // fit6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_fit8_;  // fit8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_deviance_lm;  // deviance_lm
  SEXP Rsh_Fir_reg_fit9_;  // fit9
  SEXP Rsh_Fir_reg_fit10_;  // fit10
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_scale1_;  // scale1
  SEXP Rsh_Fir_reg_scale2_;  // scale2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_RSS;  // RSS
  SEXP Rsh_Fir_reg_RSS1_;  // RSS1
  SEXP Rsh_Fir_reg_scale3_;  // scale3
  SEXP Rsh_Fir_reg_scale4_;  // scale4
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_n8_;  // n8
  SEXP Rsh_Fir_reg_n9_;  // n9
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_n12_;  // n12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_RSS2_;  // RSS2
  SEXP Rsh_Fir_reg_RSS3_;  // RSS3
  SEXP Rsh_Fir_reg_n13_;  // n13
  SEXP Rsh_Fir_reg_n14_;  // n14
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_edf;  // edf
  SEXP Rsh_Fir_reg_edf1_;  // edf1
  SEXP Rsh_Fir_reg_dev;  // dev
  SEXP Rsh_Fir_reg_dev1_;  // dev1
  SEXP Rsh_Fir_reg_k1_;  // k1
  SEXP Rsh_Fir_reg_k2_;  // k2
  SEXP Rsh_Fir_reg_edf2_;  // edf2
  SEXP Rsh_Fir_reg_edf3_;  // edf3
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r21_;  // r21

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
  // scale_isMissing = missing.0(scale)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_scale;
  Rsh_Fir_reg_scale_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if scale_isMissing then L0(0.0) else L0(scale)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_scale_isMissing)) {
  // L0(0.0)
    Rsh_Fir_reg_scale_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(scale)
    Rsh_Fir_reg_scale_orDefault = Rsh_Fir_reg_scale;
    goto L0_;
  }

L0_:;
  // st scale = scale_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_scale_orDefault, RHO);
  (void)(Rsh_Fir_reg_scale_orDefault);
  // k_isMissing = missing.0(k)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_k;
  Rsh_Fir_reg_k_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if k_isMissing then L1(2.0) else L1(k)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_k_isMissing)) {
  // L1(2.0)
    Rsh_Fir_reg_k_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(k)
    Rsh_Fir_reg_k_orDefault = Rsh_Fir_reg_k;
    goto L1_;
  }

L1_:;
  // st k = k_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_k_orDefault, RHO);
  (void)(Rsh_Fir_reg_k_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L2_:;
  // st n = r1
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L15() else D2()
  // L15()
  goto L15_;

L3_:;
  // n8 = ld n
  Rsh_Fir_reg_n8_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L29() else D10()
  // L29()
  goto L29_;

L4_:;
  // st dev = r11
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard2 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L5_:;
  // r16 = `*`(n12, r13)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_n12_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // goto L4(r16)
  // L4(r16)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r16_;
  goto L4_;

L6_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r18
  return Rsh_Fir_reg_r18_;

L7_:;
  // fit1 = ld fit
  Rsh_Fir_reg_fit1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L8_:;
  // r = dyn base(<lang `$`(fit, residuals)>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 2 [fit1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_fit1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L9_:;
  // fit2 = force? fit1
  Rsh_Fir_reg_fit2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit1_);
  // checkMissing(fit2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_fit2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // c = `is.object`(fit2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_fit2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c then L11() else L12(fit2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L11()
    goto L11_;
  } else {
  // L12(fit2)
    Rsh_Fir_reg_fit4_ = Rsh_Fir_reg_fit2_;
    goto L12_;
  }

L10_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r3 = dyn length(dx1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L14() else D1()
  // L14()
  goto L14_;

L11_:;
  // dr = tryDispatchBuiltin.1("$", fit2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_fit2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args9);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if dc then L13() else L12(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L13()
    goto L13_;
  } else {
  // L12(dr)
    Rsh_Fir_reg_fit4_ = Rsh_Fir_reg_dr;
    goto L12_;
  }

L12_:;
  // r2 = `$`(fit4, <sym residuals>)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_fit4_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L10(r2)
  // L10(r2)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r2_;
  goto L10_;

L13_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L10(dx)
  // L10(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L10_;

D1_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r3_;
  goto L2_;

D2_:;
  // deopt 8 [n]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L15_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // fit5 = ld fit
  Rsh_Fir_reg_fit5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L16() else D3()
  // L16()
  goto L16_;

D3_:;
  // deopt 9 [n1, fit5]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_fit5_;
  Rsh_Fir_deopt(9, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L16_:;
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
  // if c1 then L18() else L19(n1, fit6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L18()
    goto L18_;
  } else {
  // L19(n1, fit6)
    Rsh_Fir_reg_n3_ = Rsh_Fir_reg_n1_;
    Rsh_Fir_reg_fit8_ = Rsh_Fir_reg_fit6_;
    goto L19_;
  }

L17_:;
  // r5 = `-`(n5, dx3)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // st edf = r5
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // deviance_lm = ldf `deviance.lm`
  Rsh_Fir_reg_deviance_lm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L21() else D4()
  // L21()
  goto L21_;

L18_:;
  // dr2 = tryDispatchBuiltin.1("$", fit6)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_fit6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if dc1 then L20() else L19(n1, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L20()
    goto L20_;
  } else {
  // L19(n1, dr2)
    Rsh_Fir_reg_n3_ = Rsh_Fir_reg_n1_;
    Rsh_Fir_reg_fit8_ = Rsh_Fir_reg_dr2_;
    goto L19_;
  }

L19_:;
  // r4 = `$`(fit8, <sym df.residual>)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_fit8_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L17(n3, r4)
  // L17(n3, r4)
  Rsh_Fir_reg_n5_ = Rsh_Fir_reg_n3_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r4_;
  goto L17_;

L20_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L17(n1, dx2)
  // L17(n1, dx2)
  Rsh_Fir_reg_n5_ = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L17_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p = prom<V +>{
  //   fit9 = ld fit;
  //   fit10 = force? fit9;
  //   checkMissing(fit10);
  //   return fit10;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3937076614_, CCP, RHO);
  // r7 = dyn deviance_lm(p)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deviance_lm, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L22() else D5()
  // L22()
  goto L22_;

D5_:;
  // deopt 17 [r7]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L22_:;
  // st RSS = r7
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // scale1 = ld scale
  Rsh_Fir_reg_scale1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L23() else D6()
  // L23()
  goto L23_;

D6_:;
  // deopt 19 [scale1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_scale1_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L23_:;
  // scale2 = force? scale1
  Rsh_Fir_reg_scale2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scale1_);
  // checkMissing(scale2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_scale2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // r8 = `>`(scale2, 0.0)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_scale2_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c2 then L24() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L24()
    goto L24_;
  } else {
  // L3()
    goto L3_;
  }

L24_:;
  // RSS = ld RSS
  Rsh_Fir_reg_RSS = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L25() else D7()
  // L25()
  goto L25_;

D7_:;
  // deopt 23 [RSS]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_RSS;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L25_:;
  // RSS1 = force? RSS
  Rsh_Fir_reg_RSS1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_RSS);
  // checkMissing(RSS1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_RSS1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // scale3 = ld scale
  Rsh_Fir_reg_scale3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L26() else D8()
  // L26()
  goto L26_;

D8_:;
  // deopt 24 [RSS1, scale3]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_RSS1_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_scale3_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L26_:;
  // scale4 = force? scale3
  Rsh_Fir_reg_scale4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scale3_);
  // checkMissing(scale4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_scale4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // r9 = `/`(RSS1, scale4)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_RSS1_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_scale4_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L27() else D9()
  // L27()
  goto L27_;

D9_:;
  // deopt 26 [r9, n6]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_n6_;
  Rsh_Fir_deopt(26, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L27_:;
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // checkMissing(n7)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_n7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // r10 = `-`(r9, n7)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_n7_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L4(r10)
  // L4(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L4_;

D10_:;
  // deopt 29 [n8]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_n8_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L29_:;
  // n9 = force? n8
  Rsh_Fir_reg_n9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n8_);
  // checkMissing(n9)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_n9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // sym1 = ldf log
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base1 = ldf log in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard1 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L30_:;
  // RSS2 = ld RSS
  Rsh_Fir_reg_RSS2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L32() else D11()
  // L32()
  goto L32_;

L31_:;
  // r12 = dyn base1(<lang `/`(RSS, n)>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L5(n9, r12)
  // L5(n9, r12)
  Rsh_Fir_reg_n12_ = Rsh_Fir_reg_n9_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L5_;

D11_:;
  // deopt 31 [n9, RSS2]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_n9_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_RSS2_;
  Rsh_Fir_deopt(31, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L32_:;
  // RSS3 = force? RSS2
  Rsh_Fir_reg_RSS3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_RSS2_);
  // checkMissing(RSS3)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_RSS3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // n13 = ld n
  Rsh_Fir_reg_n13_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L33() else D12()
  // L33()
  goto L33_;

D12_:;
  // deopt 32 [n9, RSS3, n13]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_n9_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_RSS3_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_n13_;
  Rsh_Fir_deopt(32, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L33_:;
  // n14 = force? n13
  Rsh_Fir_reg_n14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n13_);
  // checkMissing(n14)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_n14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // r14 = `/`(RSS3, n14)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_RSS3_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_n14_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // r15 = log(r14, 2.718281828459045)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(163, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L5(n9, r15)
  // L5(n9, r15)
  Rsh_Fir_reg_n12_ = Rsh_Fir_reg_n9_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r15_;
  goto L5_;

L34_:;
  // edf = ld edf
  Rsh_Fir_reg_edf = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L36() else D13()
  // L36()
  goto L36_;

L35_:;
  // r17 = dyn base2(<sym edf>, <lang `+`(dev, `*`(k, edf))>)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L6(r17)
  // L6(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L6_;

D13_:;
  // deopt 40 [edf]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_edf;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L36_:;
  // edf1 = force? edf
  Rsh_Fir_reg_edf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_edf);
  // checkMissing(edf1)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_edf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // dev = ld dev
  Rsh_Fir_reg_dev = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L37() else D14()
  // L37()
  goto L37_;

D14_:;
  // deopt 42 [dev]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_dev;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L37_:;
  // dev1 = force? dev
  Rsh_Fir_reg_dev1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dev);
  // checkMissing(dev1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dev1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // k1 = ld k
  Rsh_Fir_reg_k1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L38() else D15()
  // L38()
  goto L38_;

D15_:;
  // deopt 43 [dev1, k1]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_dev1_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_k1_;
  Rsh_Fir_deopt(43, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L38_:;
  // k2 = force? k1
  Rsh_Fir_reg_k2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k1_);
  // checkMissing(k2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_k2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // edf2 = ld edf
  Rsh_Fir_reg_edf2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L39() else D16()
  // L39()
  goto L39_;

D16_:;
  // deopt 44 [dev1, k2, edf2]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_dev1_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_k2_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_edf2_;
  Rsh_Fir_deopt(44, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L39_:;
  // edf3 = force? edf2
  Rsh_Fir_reg_edf3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_edf2_);
  // checkMissing(edf3)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_edf3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // r19 = `*`(k2, edf3)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_k2_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_edf3_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // r20 = `+`(dev1, r19)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dev1_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r21 = dyn c3(edf1, r20)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_edf1_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L40() else D17()
  // L40()
  goto L40_;

D17_:;
  // deopt 49 [r21]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L6(r21)
  // L6(r21)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r21_;
  goto L6_;
}
SEXP Rsh_Fir_user_promise_inner3937076614_(SEXP CCP, SEXP RHO) {
  // fit9 = ld fit
  Rsh_Fir_reg_fit9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // fit10 = force? fit9
  Rsh_Fir_reg_fit10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit9_);
  // checkMissing(fit10)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_fit10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return fit10
  return Rsh_Fir_reg_fit10_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
