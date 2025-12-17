#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2456338378_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2456338378_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner2456338378
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2456338378_, RHO, CCP);
  // st `[.tskernel` = r
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
SEXP Rsh_Fir_user_function_inner2456338378_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2456338378 dynamic dispatch ([k, i])

  return Rsh_Fir_user_version_inner2456338378_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2456338378_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2456338378 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2456338378/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_k;  // k
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_k1_;  // k1
  SEXP Rsh_Fir_reg_k2_;  // k2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_k4_;  // k4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_k5_;  // k5
  SEXP Rsh_Fir_reg_k6_;  // k6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_k8_;  // k8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_m2_;  // m2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_m3_;  // m3
  SEXP Rsh_Fir_reg_m4_;  // m4
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_m5_;  // m5
  SEXP Rsh_Fir_reg_m6_;  // m6
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r10_;  // r10

  // Bind parameters
  Rsh_Fir_reg_k = PARAMS[0];
  Rsh_Fir_reg_i = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st k = k
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_k, RHO);
  (void)(Rsh_Fir_reg_k);
  // st i = i
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_i, RHO);
  (void)(Rsh_Fir_reg_i);
  // k1 = ld k
  Rsh_Fir_reg_k1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L0_:;
  // st y = dx7
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L21() else D5()
  // L21()
  goto L21_;

L1_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r8 = dyn __(dx10, r4)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r8_;
  goto L0_;

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx12
  return Rsh_Fir_reg_dx12_;

D0_:;
  // deopt 0 [k1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_k1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // k2 = force? k1
  Rsh_Fir_reg_k2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k1_);
  // checkMissing(k2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_k2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // c = `is.object`(k2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_k2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L5() else L6(k2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L5()
    goto L5_;
  } else {
  // L6(k2)
    Rsh_Fir_reg_k4_ = Rsh_Fir_reg_k2_;
    goto L6_;
  }

L4_:;
  // r1 = `+`(dx1, 1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // st m1 = r1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // k5 = ld k
  Rsh_Fir_reg_k5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

L5_:;
  // dr = tryDispatchBuiltin.1("$", k2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_k2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if dc then L7() else L6(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr)
    Rsh_Fir_reg_k4_ = Rsh_Fir_reg_dr;
    goto L6_;
  }

L6_:;
  // r = `$`(k4, <sym m>)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_k4_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L4(r)
  // L4(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1;
  goto L4_;

L7_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L4(dx)
  // L4(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

D1_:;
  // deopt 6 [k5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_k5_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // k6 = force? k5
  Rsh_Fir_reg_k6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k5_);
  // checkMissing(k6)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_k6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(k6)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_k6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c1 then L10() else L11(k6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L10()
    goto L10_;
  } else {
  // L11(k6)
    Rsh_Fir_reg_k8_ = Rsh_Fir_reg_k6_;
    goto L11_;
  }

L9_:;
  // c2 = `is.object`(dx3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c2 then L13() else L14(dx3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L13()
    goto L13_;
  } else {
  // L14(dx3)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    goto L14_;
  }

L10_:;
  // dr2 = tryDispatchBuiltin.1("$", k6)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_k6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if dc1 then L12() else L11(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L12()
    goto L12_;
  } else {
  // L11(dr2)
    Rsh_Fir_reg_k8_ = Rsh_Fir_reg_dr2_;
    goto L11_;
  }

L11_:;
  // r2 = `$`(k8, <sym coef>)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_k8_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L9(r2)
  // L9(r2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r2_;
  goto L9_;

L12_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L9(dx2)
  // L9(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L9_;

L13_:;
  // dr4 = tryDispatchBuiltin.1("[", dx3)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args15);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if dc2 then L15() else L14(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L15()
    goto L15_;
  } else {
  // L14(dr4)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dr4_;
    goto L14_;
  }

L14_:;
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L15_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;

L16_:;
  // m1 = ld m1
  Rsh_Fir_reg_m1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L18() else D2()
  // L18()
  goto L18_;

L17_:;
  // r3 = dyn base(<lang `:`(m1, 2)>, <lang `:`(1, m1)>)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(dx5, r3)
  // L1(dx5, r3)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 11 [dx5, m1]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_m1_;
  Rsh_Fir_deopt(11, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L18_:;
  // m2 = force? m1
  Rsh_Fir_reg_m2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m1_);
  // checkMissing(m2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_m2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // r5 = `:`(m2, 2)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_m2_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // m3 = ld m1
  Rsh_Fir_reg_m3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L19() else D3()
  // L19()
  goto L19_;

D3_:;
  // deopt 16 [dx5, 1, m3]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_m3_;
  Rsh_Fir_deopt(16, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L19_:;
  // m4 = force? m3
  Rsh_Fir_reg_m4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m3_);
  // checkMissing(m4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_m4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // r6 = `:`(1, m4)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_m4_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r7 = dyn c3(r5, r6)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L20() else D4()
  // L20()
  goto L20_;

D4_:;
  // deopt 20 [dx5, r7]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(20, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L1(dx5, r7)
  // L1(dx5, r7)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r7_;
  goto L1_;

D5_:;
  // deopt 23 [y]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L21_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(y1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c4 then L22() else L23(y1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L22()
    goto L22_;
  } else {
  // L23(y1)
    Rsh_Fir_reg_y3_ = Rsh_Fir_reg_y1_;
    goto L23_;
  }

L22_:;
  // dr6 = tryDispatchBuiltin.1("[", y1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args27);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if dc3 then L24() else L23(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L24()
    goto L24_;
  } else {
  // L23(dr6)
    Rsh_Fir_reg_y3_ = Rsh_Fir_reg_dr6_;
    goto L23_;
  }

L23_:;
  // i1 = ld i
  Rsh_Fir_reg_i1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L25() else D6()
  // L25()
  goto L25_;

L24_:;
  // dx11 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L2(dx11)
  // L2(dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L2_;

D6_:;
  // deopt 25 [y3, i1]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_i1_;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L25_:;
  // i2 = force? i1
  Rsh_Fir_reg_i2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i1_);
  // checkMissing(i2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_i2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // m5 = ld m1
  Rsh_Fir_reg_m5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L26() else D7()
  // L26()
  goto L26_;

D7_:;
  // deopt 26 [y3, i2, m5]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_m5_;
  Rsh_Fir_deopt(26, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L26_:;
  // m6 = force? m5
  Rsh_Fir_reg_m6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m5_);
  // checkMissing(m6)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_m6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // r9 = `+`(i2, m6)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_m6_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r10 = dyn __1(y3, r9)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r10)
  // L2(r10)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r10_;
  goto L2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
