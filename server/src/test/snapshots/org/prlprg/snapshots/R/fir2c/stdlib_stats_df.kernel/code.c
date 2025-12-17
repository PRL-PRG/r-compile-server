#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2649136551_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2649136551_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner2649136551
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2649136551_, RHO, CCP);
  // st `df.kernel` = r
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
SEXP Rsh_Fir_user_function_inner2649136551_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2649136551 dynamic dispatch ([k])

  return Rsh_Fir_user_version_inner2649136551_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2649136551_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2649136551 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2649136551/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_k;  // k
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_k1_;  // k1
  SEXP Rsh_Fir_reg_k2_;  // k2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_k4_;  // k4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_k5_;  // k5
  SEXP Rsh_Fir_reg_k6_;  // k6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_k9_;  // k9
  SEXP Rsh_Fir_reg_k10_;  // k10
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_k12_;  // k12
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_k13_;  // k13
  SEXP Rsh_Fir_reg_k14_;  // k14
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_k17_;  // k17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_k18_;  // k18
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_k20_;  // k20
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28

  // Bind parameters
  Rsh_Fir_reg_k = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st k = k
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_k, RHO);
  (void)(Rsh_Fir_reg_k);
  // sym = ldf sum
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf sum in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // r28 = `/`(r3, r4)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r28
  return Rsh_Fir_reg_r28_;

L1_:;
  // r26 = `^`(dx1, 2.0)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r27 = dyn sum(r26)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

L2_:;
  // k1 = ld k
  Rsh_Fir_reg_k1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r2 = dyn base(<lang `^`(`[`(k, `:`(`-`(`$`(k, m)), `$`(k, m))), 2.0)>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(2.0, r2)
  // L0(2.0, r2)
  Rsh_Fir_reg_r3_ = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r2_;
  goto L0_;

D0_:;
  // deopt 3 [2.0, k1]
  SEXP Rsh_Fir_array_deopt_stack[2];
  Rsh_Fir_array_deopt_stack[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_deopt_stack[1] = Rsh_Fir_reg_k1_;
  Rsh_Fir_deopt(3, 2, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // k2 = force? k1
  Rsh_Fir_reg_k2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k1_);
  // checkMissing(k2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_k2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // c = `is.object`(k2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_k2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c then L5() else L6(2.0, k2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L5()
    goto L5_;
  } else {
  // L6(2.0, k2)
    Rsh_Fir_reg_r6_ = Rsh_const(CCP, 3);
    Rsh_Fir_reg_k4_ = Rsh_Fir_reg_k2_;
    goto L6_;
  }

L5_:;
  // dr = tryDispatchBuiltin.1("[", k2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_k2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args7);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if dc then L7() else L6(2.0, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L7()
    goto L7_;
  } else {
  // L6(2.0, dr)
    Rsh_Fir_reg_r6_ = Rsh_const(CCP, 3);
    Rsh_Fir_reg_k4_ = Rsh_Fir_reg_dr;
    goto L6_;
  }

L6_:;
  // k5 = ld k
  Rsh_Fir_reg_k5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

L7_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L1(2.0, dx)
  // L1(2.0, dx)
  Rsh_Fir_reg_r8_ = Rsh_const(CCP, 3);
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

D1_:;
  // deopt 5 [r6, k4, k5]
  SEXP Rsh_Fir_array_deopt_stack1[3];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_k4_;
  Rsh_Fir_array_deopt_stack1[2] = Rsh_Fir_reg_k5_;
  Rsh_Fir_deopt(5, 3, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // k6 = force? k5
  Rsh_Fir_reg_k6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k5_);
  // checkMissing(k6)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_k6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(k6)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_k6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c1 then L10() else L11(r6, k4, k6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L10()
    goto L10_;
  } else {
  // L11(r6, k4, k6)
    Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r6_;
    Rsh_Fir_reg_k9_ = Rsh_Fir_reg_k4_;
    Rsh_Fir_reg_k10_ = Rsh_Fir_reg_k6_;
    goto L11_;
  }

L9_:;
  // r14 = `-`(<missing>, dx3)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // k13 = ld k
  Rsh_Fir_reg_k13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

L10_:;
  // dr2 = tryDispatchBuiltin.1("$", k6)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_k6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args13);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if dc1 then L12() else L11(r6, k4, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L12()
    goto L12_;
  } else {
  // L11(r6, k4, dr2)
    Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r6_;
    Rsh_Fir_reg_k9_ = Rsh_Fir_reg_k4_;
    Rsh_Fir_reg_k10_ = Rsh_Fir_reg_dr2_;
    goto L11_;
  }

L11_:;
  // r13 = `$`(k10, <sym m>)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_k10_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L9(r10, k9, r13)
  // L9(r10, k9, r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_k12_ = Rsh_Fir_reg_k9_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r13_;
  goto L9_;

L12_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L9(r6, k4, dx2)
  // L9(r6, k4, dx2)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_k12_ = Rsh_Fir_reg_k4_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L9_;

D2_:;
  // deopt 8 [r12, k12, r14, k13]
  SEXP Rsh_Fir_array_deopt_stack2[4];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_k12_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_deopt_stack2[3] = Rsh_Fir_reg_k13_;
  Rsh_Fir_deopt(8, 4, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L13_:;
  // k14 = force? k13
  Rsh_Fir_reg_k14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k13_);
  // checkMissing(k14)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_k14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(k14)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_k14_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c2 then L15() else L16(r12, k12, r14, k14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L15()
    goto L15_;
  } else {
  // L16(r12, k12, r14, k14)
    Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r12_;
    Rsh_Fir_reg_k17_ = Rsh_Fir_reg_k12_;
    Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r14_;
    Rsh_Fir_reg_k18_ = Rsh_Fir_reg_k14_;
    goto L16_;
  }

L14_:;
  // r24 = `:`(r22, dx5)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r25 = dyn __(k20, r24)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_k20_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r21, r25)
  // L1(r21, r25)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r25_;
  goto L1_;

L15_:;
  // dr4 = tryDispatchBuiltin.1("$", k14)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_k14_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc2 then L17() else L16(r12, k12, r14, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L17()
    goto L17_;
  } else {
  // L16(r12, k12, r14, dr4)
    Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r12_;
    Rsh_Fir_reg_k17_ = Rsh_Fir_reg_k12_;
    Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r14_;
    Rsh_Fir_reg_k18_ = Rsh_Fir_reg_dr4_;
    goto L16_;
  }

L16_:;
  // r23 = `$`(k18, <sym m>)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_k18_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L14(r17, k17, r18, r23)
  // L14(r17, k17, r18, r23)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_k20_ = Rsh_Fir_reg_k17_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r23_;
  goto L14_;

L17_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L14(r12, k12, r14, dx4)
  // L14(r12, k12, r14, dx4)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_k20_ = Rsh_Fir_reg_k12_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L14_;

D3_:;
  // deopt 16 [r8, r27]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L18_:;
  // goto L0(r8, r27)
  // L0(r8, r27)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r27_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
