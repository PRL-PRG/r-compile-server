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
  // st `extractAIC.coxph` = r
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
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_fit1_;  // fit1
  SEXP Rsh_Fir_reg_fit2_;  // fit2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_fit4_;  // fit4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_fit5_;  // fit5
  SEXP Rsh_Fir_reg_fit6_;  // fit6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_fit8_;  // fit8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_fit9_;  // fit9
  SEXP Rsh_Fir_reg_fit10_;  // fit10
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_fit12_;  // fit12
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_edf;  // edf
  SEXP Rsh_Fir_reg_edf1_;  // edf1
  SEXP Rsh_Fir_reg_loglik;  // loglik
  SEXP Rsh_Fir_reg_loglik1_;  // loglik1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_k1_;  // k1
  SEXP Rsh_Fir_reg_k2_;  // k2
  SEXP Rsh_Fir_reg_edf2_;  // edf2
  SEXP Rsh_Fir_reg_edf3_;  // edf3
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c4_;  // c4
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
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L1_:;
  // st edf = r1
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // fit5 = ld fit
  Rsh_Fir_reg_fit5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L17() else D3()
  // L17()
  goto L17_;

L2_:;
  // r6 = `!`(r3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r7 = dyn sum(r6)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

L3_:;
  // st loglik = dx7
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard3 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L4_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r13 = dyn __(dx10, r10)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L3(r13)
  // L3(r13)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r13_;
  goto L3_;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r15
  return Rsh_Fir_reg_r15_;

L6_:;
  // sym1 = ldf `is.na`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf `is.na` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L7_:;
  // r = dyn base(<lang `!`(is.na(`$`(fit, coefficients)))>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

L8_:;
  // fit1 = ld fit
  Rsh_Fir_reg_fit1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

L9_:;
  // r2 = dyn base1(<lang `$`(fit, coefficients)>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L2_;

D0_:;
  // deopt 4 [fit1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_fit1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // fit2 = force? fit1
  Rsh_Fir_reg_fit2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit1_);
  // checkMissing(fit2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_fit2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // c = `is.object`(fit2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_fit2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c then L12() else L13(fit2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L12()
    goto L12_;
  } else {
  // L13(fit2)
    Rsh_Fir_reg_fit4_ = Rsh_Fir_reg_fit2_;
    goto L13_;
  }

L11_:;
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r5 = dyn is_na(dx1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

L12_:;
  // dr = tryDispatchBuiltin.1("$", fit2)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_fit2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args12);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if dc then L14() else L13(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L14()
    goto L14_;
  } else {
  // L13(dr)
    Rsh_Fir_reg_fit4_ = Rsh_Fir_reg_dr;
    goto L13_;
  }

L13_:;
  // r4 = `$`(fit4, <sym coefficients>)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_fit4_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L11(r4)
  // L11(r4)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r4_;
  goto L11_;

L14_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L11(dx)
  // L11(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L11_;

D1_:;
  // deopt 8 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r5_;
  goto L2_;

D2_:;
  // deopt 11 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L1(r7)
  // L1(r7)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r7_;
  goto L1_;

D3_:;
  // deopt 13 [fit5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_fit5_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L17_:;
  // fit6 = force? fit5
  Rsh_Fir_reg_fit6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit5_);
  // checkMissing(fit6)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_fit6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(fit6)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_fit6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c1 then L19() else L20(fit6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L19()
    goto L19_;
  } else {
  // L20(fit6)
    Rsh_Fir_reg_fit8_ = Rsh_Fir_reg_fit6_;
    goto L20_;
  }

L18_:;
  // c2 = `is.object`(dx3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c2 then L22() else L23(dx3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L22()
    goto L22_;
  } else {
  // L23(dx3)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    goto L23_;
  }

L19_:;
  // dr2 = tryDispatchBuiltin.1("$", fit6)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_fit6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args19);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc1 then L21() else L20(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L21()
    goto L21_;
  } else {
  // L20(dr2)
    Rsh_Fir_reg_fit8_ = Rsh_Fir_reg_dr2_;
    goto L20_;
  }

L20_:;
  // r8 = `$`(fit8, <sym loglik>)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_fit8_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L18(r8)
  // L18(r8)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r8_;
  goto L18_;

L21_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L18(dx2)
  // L18(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L18_;

L22_:;
  // dr4 = tryDispatchBuiltin.1("[", dx3)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if dc2 then L24() else L23(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L24()
    goto L24_;
  } else {
  // L23(dr4)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dr4_;
    goto L23_;
  }

L23_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard2 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L24_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L3(dx6)
  // L3(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L3_;

L25_:;
  // fit9 = ld fit
  Rsh_Fir_reg_fit9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L27() else D4()
  // L27()
  goto L27_;

L26_:;
  // r9 = dyn base2(<lang `$`(fit, loglik)>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L4(dx5, r9)
  // L4(dx5, r9)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L4_;

D4_:;
  // deopt 18 [dx5, fit9]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_fit9_;
  Rsh_Fir_deopt(18, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L27_:;
  // fit10 = force? fit9
  Rsh_Fir_reg_fit10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fit9_);
  // checkMissing(fit10)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_fit10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(fit10)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_fit10_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c3 then L29() else L30(dx5, fit10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L29()
    goto L29_;
  } else {
  // L30(dx5, fit10)
    Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx5_;
    Rsh_Fir_reg_fit12_ = Rsh_Fir_reg_fit10_;
    goto L30_;
  }

L28_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r12 = dyn length(dx16)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L32() else D5()
  // L32()
  goto L32_;

L29_:;
  // dr6 = tryDispatchBuiltin.1("$", fit10)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_fit10_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args31);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if dc3 then L31() else L30(dx5, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L31()
    goto L31_;
  } else {
  // L30(dx5, dr6)
    Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx5_;
    Rsh_Fir_reg_fit12_ = Rsh_Fir_reg_dr6_;
    goto L30_;
  }

L30_:;
  // r11 = `$`(fit12, <sym loglik>)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_fit12_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L28(dx12, r11)
  // L28(dx12, r11)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx12_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_r11_;
  goto L28_;

L31_:;
  // dx14 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L28(dx5, dx14)
  // L28(dx5, dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx14_;
  goto L28_;

D5_:;
  // deopt 22 [dx15, r12]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L4(dx15, r12)
  // L4(dx15, r12)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r12_;
  goto L4_;

L33_:;
  // edf = ld edf
  Rsh_Fir_reg_edf = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L35() else D6()
  // L35()
  goto L35_;

L34_:;
  // r14 = dyn base3(<sym edf>, <lang `+`(`*`(`-`(2.0), loglik), `*`(k, edf))>)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(r14)
  // L5(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L5_;

D6_:;
  // deopt 27 [edf]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_edf;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L35_:;
  // edf1 = force? edf
  Rsh_Fir_reg_edf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_edf);
  // checkMissing(edf1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_edf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // loglik = ld loglik
  Rsh_Fir_reg_loglik = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L36() else D7()
  // L36()
  goto L36_;

D7_:;
  // deopt 30 [-2.0, loglik]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_loglik;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L36_:;
  // loglik1 = force? loglik
  Rsh_Fir_reg_loglik1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_loglik);
  // checkMissing(loglik1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_loglik1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // r16 = `*`(-2.0, loglik1)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_loglik1_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // k1 = ld k
  Rsh_Fir_reg_k1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L37() else D8()
  // L37()
  goto L37_;

D8_:;
  // deopt 32 [r16, k1]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_k1_;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L37_:;
  // k2 = force? k1
  Rsh_Fir_reg_k2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k1_);
  // checkMissing(k2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_k2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // edf2 = ld edf
  Rsh_Fir_reg_edf2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L38() else D9()
  // L38()
  goto L38_;

D9_:;
  // deopt 33 [r16, k2, edf2]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_k2_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_edf2_;
  Rsh_Fir_deopt(33, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L38_:;
  // edf3 = force? edf2
  Rsh_Fir_reg_edf3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_edf2_);
  // checkMissing(edf3)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_edf3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // r17 = `*`(k2, edf3)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_k2_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_edf3_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // r18 = `+`(r16, r17)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r19 = dyn c4(edf1, r18)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_edf1_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L39() else D10()
  // L39()
  goto L39_;

D10_:;
  // deopt 38 [r19]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L5(r19)
  // L5(r19)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r19_;
  goto L5_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
