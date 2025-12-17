#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4098042725_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4098042725_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4098042725_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner2121022756_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2121022756_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2121022756_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2121022756_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2121022756_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2121022756_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2121022756_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2121022756_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2121022756_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2121022756_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2121022756_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3624283997_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3624283997_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner4098042725
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4098042725_, RHO, CCP);
  // st splinefunH0 = r
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
SEXP Rsh_Fir_user_function_inner4098042725_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4098042725 dynamic dispatch ([x0, y0, m, dx])

  return Rsh_Fir_user_version_inner4098042725_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4098042725_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4098042725 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner4098042725/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x0_;  // x0
  SEXP Rsh_Fir_reg_y0_;  // y0
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx_isMissing;  // dx_isMissing
  SEXP Rsh_Fir_reg_dx_orDefault;  // dx_orDefault
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r8_;  // r8

  // Bind parameters
  Rsh_Fir_reg_x0_ = PARAMS[0];
  Rsh_Fir_reg_y0_ = PARAMS[1];
  Rsh_Fir_reg_m = PARAMS[2];
  Rsh_Fir_reg_dx = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x0 = x0
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x0_, RHO);
  (void)(Rsh_Fir_reg_x0_);
  // st y0 = y0
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_y0_, RHO);
  (void)(Rsh_Fir_reg_y0_);
  // st m = m
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_m, RHO);
  (void)(Rsh_Fir_reg_m);
  // dx_isMissing = missing.0(dx)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_dx;
  Rsh_Fir_reg_dx_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if dx_isMissing then L0() else L1(dx)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dx_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(dx)
    Rsh_Fir_reg_dx_orDefault = Rsh_Fir_reg_dx;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   x1 = ld x0;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   c = `is.object`(x2);
  //   if c then L3() else L4(x2);
  // L0(dx2):
  //   x5 = ld x0;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   c1 = `is.object`(x6);
  //   if c1 then L6() else L7(dx2, x6);
  // L3():
  //   dr = tryDispatchBuiltin.1("[", x2);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L5() else L4(dr);
  // L4(x4):
  //   __ = ldf `[` in base;
  //   r = dyn __(x4, -1);
  //   goto L0(r);
  // L1(dx7, dx8):
  //   r6 = `-`(dx7, dx8);
  //   return r6;
  // L5():
  //   dx1 = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx1);
  // L6():
  //   dr2 = tryDispatchBuiltin.1("[", x6);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L8() else L7(dx2, dr2);
  // L7(dx4, x8):
  //   sym = ldf length;
  //   base = ldf length in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L9() else L10();
  // L2(dx11, x11, r2):
  //   r4 = `-`(<missing>, r2);
  //   __1 = ldf `[` in base;
  //   r5 = dyn __1(x11, r4);
  //   goto L1(dx11, r5);
  // L8():
  //   dx6 = getTryDispatchBuiltinValue(dr2);
  //   goto L1(dx2, dx6);
  // L9():
  //   x12 = ld x0;
  //   x13 = force? x12;
  //   checkMissing(x13);
  //   length = ldf length in base;
  //   r3 = dyn length(x13);
  //   goto L2(dx4, x8, r3);
  // L10():
  //   r1 = dyn base(<sym x0>);
  //   goto L2(dx4, x8, r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4098042725_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_dx_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st dx = dx_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx_orDefault, RHO);
  (void)(Rsh_Fir_reg_dx_orDefault);
  // r8 = clos inner2121022756
  Rsh_Fir_reg_r8_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2121022756_, RHO, CCP);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_inner4098042725_(SEXP CCP, SEXP RHO) {
  // x1 = ld x0
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L3() else L4(x2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L3()
    goto L3_;
  } else {
  // L4(x2)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_x2_;
    goto L4_;
  }

L0_:;
  // x5 = ld x0
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(x6)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c1 then L6() else L7(dx2, x6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L6()
    goto L6_;
  } else {
  // L7(dx2, x6)
    Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx2_;
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_x6_;
    goto L7_;
  }

L1_:;
  // r6 = `-`(dx7, dx8)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // return r6
  return Rsh_Fir_reg_r6_;

L2_:;
  // r4 = `-`(<missing>, r2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r5 = dyn __1(x11, r4)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(dx11, r5)
  // L1(dx11, r5)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r5_;
  goto L1_;

L3_:;
  // dr = tryDispatchBuiltin.1("[", x2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args8);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if dc then L5() else L4(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L5()
    goto L5_;
  } else {
  // L4(dr)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_dr;
    goto L4_;
  }

L4_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r = dyn __(x4, -1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_dx2_ = Rsh_Fir_reg_r1;
  goto L0_;

L5_:;
  // dx1 = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L0(dx1)
  // L0(dx1)
  Rsh_Fir_reg_dx2_ = Rsh_Fir_reg_dx1_;
  goto L0_;

L6_:;
  // dr2 = tryDispatchBuiltin.1("[", x6)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args12);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if dc1 then L8() else L7(dx2, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L8()
    goto L8_;
  } else {
  // L7(dx2, dr2)
    Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx2_;
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_dr2_;
    goto L7_;
  }

L7_:;
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L8_:;
  // dx6 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L1(dx2, dx6)
  // L1(dx2, dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx2_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx6_;
  goto L1_;

L9_:;
  // x12 = ld x0
  Rsh_Fir_reg_x12_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x13 = force? x12
  Rsh_Fir_reg_x13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x12_);
  // checkMissing(x13)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_x13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r3 = dyn length(x13)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(dx4, x8, r3)
  // L2(dx4, x8, r3)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx4_;
  Rsh_Fir_reg_x11_ = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L2_;

L10_:;
  // r1 = dyn base(<sym x0>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(dx4, x8, r1)
  // L2(dx4, x8, r1)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx4_;
  Rsh_Fir_reg_x11_ = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L2_;
}
SEXP Rsh_Fir_user_function_inner2121022756_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2121022756 dynamic dispatch ([x, deriv, extrapol])

  return Rsh_Fir_user_version_inner2121022756_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2121022756_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2121022756 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2121022756/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_deriv;  // deriv
  SEXP Rsh_Fir_reg_extrapol;  // extrapol
  SEXP Rsh_Fir_reg_deriv_isMissing;  // deriv_isMissing
  SEXP Rsh_Fir_reg_deriv_orDefault;  // deriv_orDefault
  SEXP Rsh_Fir_reg_extrapol_isMissing;  // extrapol_isMissing
  SEXP Rsh_Fir_reg_extrapol_orDefault;  // extrapol_orDefault
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_match_arg;  // match_arg
  SEXP Rsh_Fir_reg_extrapol1_;  // extrapol1
  SEXP Rsh_Fir_reg_extrapol2_;  // extrapol2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_1;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_deriv1_;  // deriv1
  SEXP Rsh_Fir_reg_deriv2_;  // deriv2
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r8_1;  // r8
  SEXP Rsh_Fir_reg_deriv3_;  // deriv3
  SEXP Rsh_Fir_reg_deriv4_;  // deriv4
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c1_1;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_deriv5_;  // deriv5
  SEXP Rsh_Fir_reg_deriv6_;  // deriv6
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_findInterval;  // findInterval
  SEXP Rsh_Fir_reg_x1_1;  // x1
  SEXP Rsh_Fir_reg_x2_1;  // x2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_1;  // x4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_extrapol3_;  // extrapol3
  SEXP Rsh_Fir_reg_extrapol4_;  // extrapol4
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_deriv7_;  // deriv7
  SEXP Rsh_Fir_reg_deriv8_;  // deriv8
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_deriv9_;  // deriv9
  SEXP Rsh_Fir_reg_deriv10_;  // deriv10
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_deriv11_;  // deriv11
  SEXP Rsh_Fir_reg_deriv12_;  // deriv12
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_extrapol5_;  // extrapol5
  SEXP Rsh_Fir_reg_extrapol6_;  // extrapol6
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_x5_1;  // x5
  SEXP Rsh_Fir_reg_x6_1;  // x6
  SEXP Rsh_Fir_reg_length1;  // length
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_1;  // x8
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_iL;  // iL
  SEXP Rsh_Fir_reg_iL1_;  // iL1
  SEXP Rsh_Fir_reg_any1_;  // any1
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_deriv13_;  // deriv13
  SEXP Rsh_Fir_reg_deriv14_;  // deriv14
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_y0_1;  // y0
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_dr1;  // dr
  SEXP Rsh_Fir_reg_dc1;  // dc
  SEXP Rsh_Fir_reg_dx1;  // dx
  SEXP Rsh_Fir_reg_dx1_1;  // dx1
  SEXP Rsh_Fir_reg___1;  // __
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_m1;  // m
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_m3_;  // m3
  SEXP Rsh_Fir_reg_dr2_1;  // dr2
  SEXP Rsh_Fir_reg_dc1_1;  // dc1
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_1;  // dx6
  SEXP Rsh_Fir_reg_dx7_1;  // dx7
  SEXP Rsh_Fir_reg___1_1;  // __1
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_1;  // dx11
  SEXP Rsh_Fir_reg_x12_1;  // x12
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_iL2_;  // iL2
  SEXP Rsh_Fir_reg_iL3_;  // iL3
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_x13_1;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_deriv15_;  // deriv15
  SEXP Rsh_Fir_reg_deriv16_;  // deriv16
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_m4_;  // m4
  SEXP Rsh_Fir_reg_m5_;  // m5
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_m7_;  // m7
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_iL4_;  // iL4
  SEXP Rsh_Fir_reg_iL5_;  // iL5
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_iR;  // iR
  SEXP Rsh_Fir_reg_iR1_;  // iR1
  SEXP Rsh_Fir_reg_any2_;  // any2
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_deriv17_;  // deriv17
  SEXP Rsh_Fir_reg_deriv18_;  // deriv18
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_y4_;  // y4
  SEXP Rsh_Fir_reg_y5_;  // y5
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_y7_;  // y7
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_m8_;  // m8
  SEXP Rsh_Fir_reg_m9_;  // m9
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg_m11_;  // m11
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg_dx42_;  // dx42
  SEXP Rsh_Fir_reg_dx43_;  // dx43
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_dx46_;  // dx46
  SEXP Rsh_Fir_reg_dx47_;  // dx47
  SEXP Rsh_Fir_reg_x20_;  // x20
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx50_;  // dx50
  SEXP Rsh_Fir_reg_dx51_;  // dx51
  SEXP Rsh_Fir_reg_dx52_;  // dx52
  SEXP Rsh_Fir_reg_dx53_;  // dx53
  SEXP Rsh_Fir_reg_iR2_;  // iR2
  SEXP Rsh_Fir_reg_iR3_;  // iR3
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_x21_;  // x21
  SEXP Rsh_Fir_reg_x22_;  // x22
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_dx57_;  // dx57
  SEXP Rsh_Fir_reg_dx58_;  // dx58
  SEXP Rsh_Fir_reg_dx59_;  // dx59
  SEXP Rsh_Fir_reg_x24_;  // x24
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx63_;  // dx63
  SEXP Rsh_Fir_reg_dx64_;  // dx64
  SEXP Rsh_Fir_reg_dx65_;  // dx65
  SEXP Rsh_Fir_reg_dx66_;  // dx66
  SEXP Rsh_Fir_reg_dx67_;  // dx67
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_deriv19_;  // deriv19
  SEXP Rsh_Fir_reg_deriv20_;  // deriv20
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_m12_;  // m12
  SEXP Rsh_Fir_reg_m13_;  // m13
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_m15_;  // m15
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx68_;  // dx68
  SEXP Rsh_Fir_reg_dx69_;  // dx69
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c41_;  // c41
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx70_;  // dx70
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_dx71_;  // dx71
  SEXP Rsh_Fir_reg_iR4_;  // iR4
  SEXP Rsh_Fir_reg_iR5_;  // iR5
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_iXtra;  // iXtra
  SEXP Rsh_Fir_reg_iXtra1_;  // iXtra1
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_interp;  // interp
  SEXP Rsh_Fir_reg_x25_;  // x25
  SEXP Rsh_Fir_reg_x26_;  // x26
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_x28_;  // x28
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx72_;  // dx72
  SEXP Rsh_Fir_reg_dx73_;  // dx73
  SEXP Rsh_Fir_reg_ini;  // ini
  SEXP Rsh_Fir_reg_ini1_;  // ini1
  SEXP Rsh_Fir_reg___10_;  // __10
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx74_;  // dx74
  SEXP Rsh_Fir_reg_dx75_;  // dx75
  SEXP Rsh_Fir_reg_ini2_;  // ini2
  SEXP Rsh_Fir_reg_ini3_;  // ini3
  SEXP Rsh_Fir_reg___11_;  // __11
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx76_;  // dx76
  SEXP Rsh_Fir_reg_dx77_;  // dx77
  SEXP Rsh_Fir_reg_ini4_;  // ini4
  SEXP Rsh_Fir_reg_ini5_;  // ini5
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_interp1_;  // interp1
  SEXP Rsh_Fir_reg_x29_;  // x29
  SEXP Rsh_Fir_reg_x30_;  // x30
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r94_;  // r94

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_deriv = PARAMS[1];
  Rsh_Fir_reg_extrapol = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // deriv_isMissing = missing.0(deriv)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_deriv;
  Rsh_Fir_reg_deriv_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args19);
  // if deriv_isMissing then L0(0.0) else L0(deriv)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_deriv_isMissing)) {
  // L0(0.0)
    Rsh_Fir_reg_deriv_orDefault = Rsh_const(CCP, 11);
    goto L0_;
  } else {
  // L0(deriv)
    Rsh_Fir_reg_deriv_orDefault = Rsh_Fir_reg_deriv;
    goto L0_;
  }

L0_:;
  // st deriv = deriv_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_deriv_orDefault, RHO);
  (void)(Rsh_Fir_reg_deriv_orDefault);
  // extrapol_isMissing = missing.0(extrapol)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_extrapol;
  Rsh_Fir_reg_extrapol_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args20);
  // if extrapol_isMissing then L1() else L2(extrapol)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_extrapol_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(extrapol)
    Rsh_Fir_reg_extrapol_orDefault = Rsh_Fir_reg_extrapol;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("linear", "cubic");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("linear", "cubic");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2121022756_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_extrapol_orDefault = Rsh_Fir_reg_p1;
  goto L2_;

L2_:;
  // st extrapol = extrapol_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_extrapol_orDefault, RHO);
  (void)(Rsh_Fir_reg_extrapol_orDefault);
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L40() else D0()
  // L40()
  goto L40_;

L3_:;
  // st deriv = r7
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // deriv3 = ld deriv
  Rsh_Fir_reg_deriv3_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L46() else D4()
  // L46()
  goto L46_;

L4_:;
  // c7 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c7 then L50() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L50()
    goto L50_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // findInterval = ldf findInterval
  Rsh_Fir_reg_findInterval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L54() else D8()
  // L54()
  goto L54_;

L7_:;
  // deriv9 = ld deriv
  Rsh_Fir_reg_deriv9_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L59() else D11()
  // L59()
  goto L59_;

L8_:;
  // extrapol5 = ld extrapol
  Rsh_Fir_reg_extrapol5_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L65() else D13()
  // L65()
  goto L65_;

L9_:;
  // deriv11 = ld deriv
  Rsh_Fir_reg_deriv11_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L62() else D12()
  // L62()
  goto L62_;

L10_:;
  // r25 = clos inner3624283997
  Rsh_Fir_reg_r25_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3624283997_, RHO, CCP);
  // st interp = r25
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // goto L8()
  // L8()
  goto L8_;

L11_:;
  // c23 = `as.logical`(c13)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c23 then L77() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L77()
    goto L77_;
  } else {
  // L14()
    goto L14_;
  }

L12_:;
  // c20 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // c21 = `&&`(c16, c20)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L11(c21)
  // L11(c21)
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c21_;
  goto L11_;

L13_:;
  // st n = r34
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // r36 = `==`(i6, r34)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // st iR = r36
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r36_, RHO);
  (void)(Rsh_Fir_reg_r36_);
  // r37 = `||`(r33, r36)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // st iXtra = r37
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r38 = dyn any(r37)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L75() else D18()
  // L75()
  goto L75_;

L14_:;
  // interp1 = ldf interp
  Rsh_Fir_reg_interp1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L166() else D51()
  // L166()
  goto L166_;

L15_:;
  // c24 = `as.logical`(r40)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c24 then L83() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L83()
    goto L83_;
  } else {
  // L16()
    goto L16_;
  }

L16_:;
  // goto L26()
  // L26()
  goto L26_;

L17_:;
  // deriv15 = ld deriv
  Rsh_Fir_reg_deriv15_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L104() else D28()
  // L104()
  goto L104_;

L18_:;
  // m = ld m
  Rsh_Fir_reg_m1 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L90() else D24()
  // L90()
  goto L90_;

L19_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L94() else D25()
  // L94()
  goto L94_;

L20_:;
  // x13 = ld x0
  Rsh_Fir_reg_x13_1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L99() else D27()
  // L99()
  goto L99_;

L21_:;
  // r47 = `-`(dx30, dx31)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dx30_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_dx31_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // r48 = `*`(dx29, r47)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dx29_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // r49 = `+`(dx28, r48)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dx28_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L22(r49)
  // L22(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L22_;

L22_:;
  // l = ld r
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // c32 = `is.object`(l)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c32 then L111() else L112(r50, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L111()
    goto L111_;
  } else {
  // L112(r50, l)
    Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r50_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L112_;
  }

L23_:;
  // goto L22(0.0)
  // L22(0.0)
  Rsh_Fir_reg_r50_ = Rsh_const(CCP, 11);
  goto L22_;

L24_:;
  // goto L22(dx33)
  // L22(dx33)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_dx33_;
  goto L22_;

L25_:;
  // st r = dx35
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_dx35_, RHO);
  (void)(Rsh_Fir_reg_dx35_);
  // goto L26()
  // L26()
  goto L26_;

L26_:;
  // sym5 = ldf any
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base5 = ldf any in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard5 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

L27_:;
  // c33 = `as.logical`(r60)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if c33 then L120() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L120()
    goto L120_;
  } else {
  // L28()
    goto L28_;
  }

L28_:;
  // goto L38()
  // L38()
  goto L38_;

L29_:;
  // deriv19 = ld deriv
  Rsh_Fir_reg_deriv19_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L144() else D42()
  // L144()
  goto L144_;

L30_:;
  // m8 = ld m
  Rsh_Fir_reg_m8_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L128() else D36()
  // L128()
  goto L128_;

L31_:;
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L133() else D38()
  // L133()
  goto L133_;

L32_:;
  // x21 = ld x0
  Rsh_Fir_reg_x21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L138() else D40()
  // L138()
  goto L138_;

L33_:;
  // r67 = `-`(dx66, dx67)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dx66_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_dx67_;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // r68 = `*`(dx65, r67)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dx65_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // r69 = `+`(dx64, r68)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dx64_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // goto L34(r69)
  // L34(r69)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r69_;
  goto L34_;

L34_:;
  // l3 = ld r
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // c41 = `is.object`(l3)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c41 then L152() else L153(r70, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c41_)) {
  // L152()
    goto L152_;
  } else {
  // L153(r70, l3)
    Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r70_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L153_;
  }

L35_:;
  // goto L34(0.0)
  // L34(0.0)
  Rsh_Fir_reg_r70_ = Rsh_const(CCP, 11);
  goto L34_;

L36_:;
  // goto L34(dx69)
  // L34(dx69)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_dx69_;
  goto L34_;

L37_:;
  // st r = dx71
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_dx71_, RHO);
  (void)(Rsh_Fir_reg_dx71_);
  // goto L38()
  // L38()
  goto L38_;

L38_:;
  // iXtra = ld iXtra
  Rsh_Fir_reg_iXtra = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L157() else D46()
  // L157()
  goto L157_;

L39_:;
  // st r = dx77
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_dx77_, RHO);
  (void)(Rsh_Fir_reg_dx77_);
  // r90 = ld r
  Rsh_Fir_reg_r90_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L164() else D50()
  // L164()
  goto L164_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p1 = prom<V +>{
  //   extrapol1 = ld extrapol;
  //   extrapol2 = force? extrapol1;
  //   checkMissing(extrapol2);
  //   return extrapol2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2121022756_1, CCP, RHO);
  // r5 = dyn match_arg(p1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L41() else D1()
  // L41()
  goto L41_;

D1_:;
  // deopt 3 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L41_:;
  // st extrapol = r5
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r5_1, RHO);
  (void)(Rsh_Fir_reg_r5_1);
  // sym1 = ldf `as.integer`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base1 = ldf `as.integer` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard1 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L42_:;
  // deriv1 = ld deriv
  Rsh_Fir_reg_deriv1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L44() else D2()
  // L44()
  goto L44_;

L43_:;
  // r6 = dyn base1(<sym deriv>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_1;
  goto L3_;

D2_:;
  // deopt 7 [deriv1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_deriv1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L44_:;
  // deriv2 = force? deriv1
  Rsh_Fir_reg_deriv2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deriv1_);
  // checkMissing(deriv2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_deriv2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r8 = dyn as_integer(deriv2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_deriv2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L45() else D3()
  // L45()
  goto L45_;

D3_:;
  // deopt 10 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L45_:;
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_1;
  goto L3_;

D4_:;
  // deopt 12 [deriv3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_deriv3_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L46_:;
  // deriv4 = force? deriv3
  Rsh_Fir_reg_deriv4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deriv3_);
  // checkMissing(deriv4)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_deriv4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // r9 = `<`(deriv4, 0.0)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_deriv4_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if c1 then L4(c1) else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L4(c1)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1_1;
    goto L4_;
  } else {
  // L47()
    goto L47_;
  }

L47_:;
  // deriv5 = ld deriv
  Rsh_Fir_reg_deriv5_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L48() else D5()
  // L48()
  goto L48_;

D5_:;
  // deopt 16 [c1, deriv5]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_deriv5_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L48_:;
  // deriv6 = force? deriv5
  Rsh_Fir_reg_deriv6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deriv5_);
  // checkMissing(deriv6)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_deriv6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // r10 = `>`(deriv6, 3.0)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_deriv6_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // c5 = `||`(c1, c4)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L4(c5)
  // L4(c5)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c5_;
  goto L4_;

L50_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L51() else D6()
  // L51()
  goto L51_;

D6_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L51_:;
  // r11 = dyn stop("'deriv' must be between 0 and 3")
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L52() else D7()
  // L52()
  goto L52_;

D7_:;
  // deopt 24 [r11]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L52_:;
  // goto L6()
  // L6()
  goto L6_;

D8_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // p2 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2121022756_2, CCP, RHO);
  // p3 = prom<V +>{
  //   x3 = ld x0;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2121022756_3, CCP, RHO);
  // p4 = prom<V +>{
  //   extrapol3 = ld extrapol;
  //   extrapol4 = force? extrapol3;
  //   checkMissing(extrapol4);
  //   r15 = `==`(extrapol4, "cubic");
  //   visible.0();
  //   return r15;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2121022756_4, CCP, RHO);
  // r17 = dyn findInterval[, , `all.inside`](p2, p3, p4)
  SEXP Rsh_Fir_array_args60[3];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args60[2] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_findInterval, 3, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L55() else D9()
  // L55()
  goto L55_;

D9_:;
  // deopt 33 [r17]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L55_:;
  // st i = r17
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // deriv7 = ld deriv
  Rsh_Fir_reg_deriv7_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L56() else D10()
  // L56()
  goto L56_;

D10_:;
  // deopt 35 [deriv7]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_deriv7_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L56_:;
  // deriv8 = force? deriv7
  Rsh_Fir_reg_deriv8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deriv7_);
  // checkMissing(deriv8)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_deriv8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // r18 = `==`(deriv8, 0.0)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_deriv8_;
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // c8 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if c8 then L57() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L57()
    goto L57_;
  } else {
  // L7()
    goto L7_;
  }

L57_:;
  // r19 = clos inner3624283997
  Rsh_Fir_reg_r19_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3624283997_, RHO, CCP);
  // st interp = r19
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // goto L8()
  // L8()
  goto L8_;

D11_:;
  // deopt 42 [deriv9]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_deriv9_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L59_:;
  // deriv10 = force? deriv9
  Rsh_Fir_reg_deriv10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deriv9_);
  // checkMissing(deriv10)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_deriv10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // r21 = `==`(deriv10, 1.0)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_deriv10_;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if c9 then L60() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L60()
    goto L60_;
  } else {
  // L9()
    goto L9_;
  }

L60_:;
  // r22 = clos inner3624283997
  Rsh_Fir_reg_r22_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3624283997_, RHO, CCP);
  // st interp = r22
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // goto L8()
  // L8()
  goto L8_;

D12_:;
  // deopt 49 [deriv11]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_deriv11_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L62_:;
  // deriv12 = force? deriv11
  Rsh_Fir_reg_deriv12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deriv11_);
  // checkMissing(deriv12)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_deriv12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // r23 = `==`(deriv12, 2.0)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_deriv12_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if c10 then L63() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L63()
    goto L63_;
  } else {
  // L10()
    goto L10_;
  }

L63_:;
  // r24 = clos inner3624283997
  Rsh_Fir_reg_r24_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3624283997_, RHO, CCP);
  // st interp = r24
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // goto L8()
  // L8()
  goto L8_;

D13_:;
  // deopt 59 [extrapol5]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_extrapol5_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L65_:;
  // extrapol6 = force? extrapol5
  Rsh_Fir_reg_extrapol6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_extrapol5_);
  // checkMissing(extrapol6)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_extrapol6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // r26 = `==`(extrapol6, "linear")
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_extrapol6_;
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // c11 = `as.logical`(r26)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if c11 then L66() else L11(c11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L66()
    goto L66_;
  } else {
  // L11(c11)
    Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c11_;
    goto L11_;
  }

L66_:;
  // sym2 = ldf any
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base2 = ldf any in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard2 then L67() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L67()
    goto L67_;
  } else {
  // L68()
    goto L68_;
  }

L67_:;
  // i = ld i
  Rsh_Fir_reg_i = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L69() else D14()
  // L69()
  goto L69_;

L68_:;
  // r27 = dyn base2(<lang `<-`(iXtra, `|`(`(`(`<-`(iL, `(`(`==`(i, 0.0)))), `(`(`<-`(iR, `(`(`==`(i, `(`(`<-`(n, length(x0)))))))))>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L12(c11, r27)
  // L12(c11, r27)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L12_;

D14_:;
  // deopt 65 [c11, i]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_i;
  Rsh_Fir_deopt(65, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L69_:;
  // i1 = force? i
  Rsh_Fir_reg_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i);
  // checkMissing(i1)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_i1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // r29 = `==`(i1, 0.0)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // st iL = r29
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // i2 = ld i
  Rsh_Fir_reg_i2_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L70() else D15()
  // L70()
  goto L70_;

D15_:;
  // deopt 69 [c11, r29, i2]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(69, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L70_:;
  // i3 = force? i2
  Rsh_Fir_reg_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i2_);
  // checkMissing(i3)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_i3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args78);
  // if guard3 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L71_:;
  // x5 = ld x0
  Rsh_Fir_reg_x5_1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L73() else D16()
  // L73()
  goto L73_;

L72_:;
  // r32 = dyn base3(<sym x0>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L13(c11, r29, i3, r32)
  // L13(c11, r29, i3, r32)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i3_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r32_;
  goto L13_;

D16_:;
  // deopt 72 [c11, r29, i3, x5]
  SEXP Rsh_Fir_array_deopt_stack13[4];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_i3_;
  Rsh_Fir_array_deopt_stack13[3] = Rsh_Fir_reg_x5_1;
  Rsh_Fir_deopt(72, 4, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L73_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_1);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_x6_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r35 = dyn length(x6)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_x6_1;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L74() else D17()
  // L74()
  goto L74_;

D17_:;
  // deopt 75 [c11, r29, i3, r35]
  SEXP Rsh_Fir_array_deopt_stack14[4];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_i3_;
  Rsh_Fir_array_deopt_stack14[3] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(75, 4, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L13(c11, r29, i3, r35)
  // L13(c11, r29, i3, r35)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i3_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L13_;

D18_:;
  // deopt 82 [c19, r38]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(82, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L75_:;
  // goto L12(c19, r38)
  // L12(c19, r38)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c19_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r38_;
  goto L12_;

L77_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L78() else D19()
  // L78()
  goto L78_;

D19_:;
  // deopt 84 [x7]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L78_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_x8_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // st r = x8
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_x8_1, RHO);
  (void)(Rsh_Fir_reg_x8_1);
  // sym4 = ldf any
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base4 = ldf any in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args83);
  // if guard4 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L79_:;
  // iL = ld iL
  Rsh_Fir_reg_iL = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L81() else D20()
  // L81()
  goto L81_;

L80_:;
  // r39 = dyn base4(<sym iL>)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L15(r39)
  // L15(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L15_;

D20_:;
  // deopt 89 [iL]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_iL;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L81_:;
  // iL1 = force? iL
  Rsh_Fir_reg_iL1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iL);
  // checkMissing(iL1)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_iL1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r41 = dyn any1(iL1)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_iL1_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L82() else D21()
  // L82()
  goto L82_;

D21_:;
  // deopt 92 [r41]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L82_:;
  // goto L15(r41)
  // L15(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L15_;

L83_:;
  // deriv13 = ld deriv
  Rsh_Fir_reg_deriv13_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L84() else D22()
  // L84()
  goto L84_;

D22_:;
  // deopt 93 [deriv13]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_deriv13_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L84_:;
  // deriv14 = force? deriv13
  Rsh_Fir_reg_deriv14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deriv13_);
  // checkMissing(deriv14)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_deriv14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // r42 = `==`(deriv14, 0.0)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_deriv14_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // c25 = `as.logical`(r42)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // if c25 then L85() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L85()
    goto L85_;
  } else {
  // L17()
    goto L17_;
  }

L85_:;
  // y0 = ld y0
  Rsh_Fir_reg_y0_1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L86() else D23()
  // L86()
  goto L86_;

D23_:;
  // deopt 97 [y0]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_y0_1;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L86_:;
  // y1 = force? y0
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y0_1);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // c26 = `is.object`(y1)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if c26 then L87() else L88(y1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L87()
    goto L87_;
  } else {
  // L88(y1)
    Rsh_Fir_reg_y3_ = Rsh_Fir_reg_y1_;
    goto L88_;
  }

L87_:;
  // dr = tryDispatchBuiltin.1("[", y1)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args92);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if dc then L89() else L88(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L89()
    goto L89_;
  } else {
  // L88(dr)
    Rsh_Fir_reg_y3_ = Rsh_Fir_reg_dr1;
    goto L88_;
  }

L88_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r43 = dyn __(y3, 1)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L18(r43)
  // L18(r43)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r43_;
  goto L18_;

L89_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // goto L18(dx)
  // L18(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L18_;

D24_:;
  // deopt 101 [dx1, m]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_dx1_1;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_m1;
  Rsh_Fir_deopt(101, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L90_:;
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m1);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // c27 = `is.object`(m1)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_m1_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if c27 then L91() else L92(dx1, m1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L91()
    goto L91_;
  } else {
  // L92(dx1, m1)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_1;
    Rsh_Fir_reg_m3_ = Rsh_Fir_reg_m1_;
    goto L92_;
  }

L91_:;
  // dr2 = tryDispatchBuiltin.1("[", m1)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_m1_;
  Rsh_Fir_reg_dr2_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args98);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dc1_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if dc1 then L93() else L92(dx1, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_1)) {
  // L93()
    goto L93_;
  } else {
  // L92(dx1, dr2)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_1;
    Rsh_Fir_reg_m3_ = Rsh_Fir_reg_dr2_1;
    goto L92_;
  }

L92_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r44 = dyn __1(m3, 1)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_m3_;
  Rsh_Fir_array_args100[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_1, 2, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L19(dx3, r44)
  // L19(dx3, r44)
  Rsh_Fir_reg_dx6_1 = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dx7_1 = Rsh_Fir_reg_r44_;
  goto L19_;

L93_:;
  // dx5 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // goto L19(dx1, dx5)
  // L19(dx1, dx5)
  Rsh_Fir_reg_dx6_1 = Rsh_Fir_reg_dx1_1;
  Rsh_Fir_reg_dx7_1 = Rsh_Fir_reg_dx5_;
  goto L19_;

D25_:;
  // deopt 105 [dx6, dx7, x9]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_dx6_1;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_dx7_1;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(105, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L94_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // c28 = `is.object`(x10)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // if c28 then L95() else L96(dx6, dx7, x10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L95()
    goto L95_;
  } else {
  // L96(dx6, dx7, x10)
    Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx6_1;
    Rsh_Fir_reg_dx11_1 = Rsh_Fir_reg_dx7_1;
    Rsh_Fir_reg_x12_1 = Rsh_Fir_reg_x10_;
    goto L96_;
  }

L95_:;
  // dr4 = tryDispatchBuiltin.1("[", x10)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args104);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if dc2 then L97() else L96(dx6, dx7, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L97()
    goto L97_;
  } else {
  // L96(dx6, dx7, dr4)
    Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx6_1;
    Rsh_Fir_reg_dx11_1 = Rsh_Fir_reg_dx7_1;
    Rsh_Fir_reg_x12_1 = Rsh_Fir_reg_dr4_;
    goto L96_;
  }

L96_:;
  // iL2 = ld iL
  Rsh_Fir_reg_iL2_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L98() else D26()
  // L98()
  goto L98_;

L97_:;
  // dx14 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // goto L20(dx6, dx7, dx14)
  // L20(dx6, dx7, dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx6_1;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx7_1;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx14_;
  goto L20_;

D26_:;
  // deopt 107 [dx10, dx11, x12, iL2]
  SEXP Rsh_Fir_array_deopt_stack23[4];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_dx11_1;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_x12_1;
  Rsh_Fir_array_deopt_stack23[3] = Rsh_Fir_reg_iL2_;
  Rsh_Fir_deopt(107, 4, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L98_:;
  // iL3 = force? iL2
  Rsh_Fir_reg_iL3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iL2_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r45 = dyn __2(x12, iL3)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_x12_1;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_iL3_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L20(dx10, dx11, r45)
  // L20(dx10, dx11, r45)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx10_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx11_1;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r45_;
  goto L20_;

D27_:;
  // deopt 109 [dx15, dx16, dx17, x13]
  SEXP Rsh_Fir_array_deopt_stack24[4];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_array_deopt_stack24[3] = Rsh_Fir_reg_x13_1;
  Rsh_Fir_deopt(109, 4, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L99_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_1);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // c29 = `is.object`(x14)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // if c29 then L100() else L101(dx15, dx16, dx17, x14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L100()
    goto L100_;
  } else {
  // L101(dx15, dx16, dx17, x14)
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx15_;
    Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx16_;
    Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx17_;
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_x14_;
    goto L101_;
  }

L100_:;
  // dr6 = tryDispatchBuiltin.1("[", x14)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args110);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // if dc3 then L102() else L101(dx15, dx16, dx17, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L102()
    goto L102_;
  } else {
  // L101(dx15, dx16, dx17, dr6)
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx15_;
    Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx16_;
    Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx17_;
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_dr6_;
    goto L101_;
  }

L101_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r46 = dyn __3(x16, 1)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_args112[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L21(dx21, dx22, dx23, r46)
  // L21(dx21, dx22, dx23, r46)
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx21_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx22_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_dx23_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r46_;
  goto L21_;

L102_:;
  // dx27 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // goto L21(dx15, dx16, dx17, dx27)
  // L21(dx15, dx16, dx17, dx27)
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx16_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx27_;
  goto L21_;

D28_:;
  // deopt 117 [deriv15]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_deriv15_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L104_:;
  // deriv16 = force? deriv15
  Rsh_Fir_reg_deriv16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deriv15_);
  // checkMissing(deriv16)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_deriv16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // r51 = `==`(deriv16, 1.0)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_deriv16_;
  Rsh_Fir_array_args115[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // c30 = `as.logical`(r51)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // if c30 then L105() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L105()
    goto L105_;
  } else {
  // L23()
    goto L23_;
  }

L105_:;
  // m4 = ld m
  Rsh_Fir_reg_m4_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L106() else D29()
  // L106()
  goto L106_;

D29_:;
  // deopt 121 [m4]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_m4_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L106_:;
  // m5 = force? m4
  Rsh_Fir_reg_m5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m4_);
  // checkMissing(m5)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_m5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(m5)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_m5_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // if c31 then L107() else L108(m5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L107()
    goto L107_;
  } else {
  // L108(m5)
    Rsh_Fir_reg_m7_ = Rsh_Fir_reg_m5_;
    goto L108_;
  }

L107_:;
  // dr8 = tryDispatchBuiltin.1("[", m5)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_m5_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args119);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // if dc4 then L109() else L108(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L109()
    goto L109_;
  } else {
  // L108(dr8)
    Rsh_Fir_reg_m7_ = Rsh_Fir_reg_dr8_;
    goto L108_;
  }

L108_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r52 = dyn __4(m7, 1)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_m7_;
  Rsh_Fir_array_args121[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L24(r52)
  // L24(r52)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_r52_;
  goto L24_;

L109_:;
  // dx32 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx32_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // goto L24(dx32)
  // L24(dx32)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx32_;
  goto L24_;

L111_:;
  // dr10 = tryDispatchBuiltin.0("[<-", l, r50)
  SEXP Rsh_Fir_array_args123[3];
  Rsh_Fir_array_args123[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args123[2] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args123);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // if dc5 then L113() else L112(r50, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L113()
    goto L113_;
  } else {
  // L112(r50, dr10)
    Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r50_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr10_;
    goto L112_;
  }

L112_:;
  // iL4 = ld iL
  Rsh_Fir_reg_iL4_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L114() else D30()
  // L114()
  goto L114_;

L113_:;
  // dx34 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // goto L25(r50, dx34)
  // L25(r50, dx34)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx34_;
  goto L25_;

D30_:;
  // deopt 129 [r54, l2, r50, iL4]
  SEXP Rsh_Fir_array_deopt_stack27[4];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_deopt_stack27[3] = Rsh_Fir_reg_iL4_;
  Rsh_Fir_deopt(129, 4, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L114_:;
  // iL5 = force? iL4
  Rsh_Fir_reg_iL5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iL4_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r57 = dyn ___(l2, r50, iL5)
  SEXP Rsh_Fir_array_args126[3];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_args126[2] = Rsh_Fir_reg_iL5_;
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L25(r54, r57)
  // L25(r54, r57)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_r57_;
  goto L25_;

L116_:;
  // iR = ld iR
  Rsh_Fir_reg_iR = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L118() else D31()
  // L118()
  goto L118_;

L117_:;
  // r59 = dyn base5(<sym iR>)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L27(r59)
  // L27(r59)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L27_;

D31_:;
  // deopt 137 [iR]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_iR;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L118_:;
  // iR1 = force? iR
  Rsh_Fir_reg_iR1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iR);
  // checkMissing(iR1)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_iR1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // any2 = ldf any in base
  Rsh_Fir_reg_any2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r61 = dyn any2(iR1)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_iR1_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any2_, 1, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L119() else D32()
  // L119()
  goto L119_;

D32_:;
  // deopt 140 [r61]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L119_:;
  // goto L27(r61)
  // L27(r61)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r61_;
  goto L27_;

L120_:;
  // deriv17 = ld deriv
  Rsh_Fir_reg_deriv17_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L121() else D33()
  // L121()
  goto L121_;

D33_:;
  // deopt 141 [deriv17]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_deriv17_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L121_:;
  // deriv18 = force? deriv17
  Rsh_Fir_reg_deriv18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deriv17_);
  // checkMissing(deriv18)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_deriv18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // r62 = `==`(deriv18, 0.0)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_deriv18_;
  Rsh_Fir_array_args131[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // c34 = `as.logical`(r62)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // if c34 then L122() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L122()
    goto L122_;
  } else {
  // L29()
    goto L29_;
  }

L122_:;
  // y4 = ld y0
  Rsh_Fir_reg_y4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L123() else D34()
  // L123()
  goto L123_;

D34_:;
  // deopt 145 [y4]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_y4_;
  Rsh_Fir_deopt(145, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L123_:;
  // y5 = force? y4
  Rsh_Fir_reg_y5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y4_);
  // checkMissing(y5)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_y5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // c35 = `is.object`(y5)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_y5_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if c35 then L124() else L125(y5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L124()
    goto L124_;
  } else {
  // L125(y5)
    Rsh_Fir_reg_y7_ = Rsh_Fir_reg_y5_;
    goto L125_;
  }

L124_:;
  // dr12 = tryDispatchBuiltin.1("[", y5)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_y5_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args135);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // if dc6 then L126() else L125(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L126()
    goto L126_;
  } else {
  // L125(dr12)
    Rsh_Fir_reg_y7_ = Rsh_Fir_reg_dr12_;
    goto L125_;
  }

L125_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L127() else D35()
  // L127()
  goto L127_;

L126_:;
  // dx36 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // goto L30(dx36)
  // L30(dx36)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx36_;
  goto L30_;

D35_:;
  // deopt 147 [y7, n]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_y7_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(147, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L127_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r63 = dyn __5(y7, n1)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_y7_;
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L30(r63)
  // L30(r63)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_r63_;
  goto L30_;

D36_:;
  // deopt 149 [dx37, m8]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_dx37_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_m8_;
  Rsh_Fir_deopt(149, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L128_:;
  // m9 = force? m8
  Rsh_Fir_reg_m9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m8_);
  // checkMissing(m9)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_m9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // c36 = `is.object`(m9)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_m9_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // if c36 then L129() else L130(dx37, m9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L129()
    goto L129_;
  } else {
  // L130(dx37, m9)
    Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx37_;
    Rsh_Fir_reg_m11_ = Rsh_Fir_reg_m9_;
    goto L130_;
  }

L129_:;
  // dr14 = tryDispatchBuiltin.1("[", m9)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_m9_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args141);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // if dc7 then L131() else L130(dx37, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L131()
    goto L131_;
  } else {
  // L130(dx37, dr14)
    Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx37_;
    Rsh_Fir_reg_m11_ = Rsh_Fir_reg_dr14_;
    goto L130_;
  }

L130_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L132() else D37()
  // L132()
  goto L132_;

L131_:;
  // dx41 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx41_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // goto L31(dx37, dx41)
  // L31(dx37, dx41)
  Rsh_Fir_reg_dx42_ = Rsh_Fir_reg_dx37_;
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx41_;
  goto L31_;

D37_:;
  // deopt 151 [dx39, m11, n2]
  SEXP Rsh_Fir_array_deopt_stack34[3];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_dx39_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_m11_;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(151, 3, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L132_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r64 = dyn __6(m11, n3)
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_m11_;
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L31(dx39, r64)
  // L31(dx39, r64)
  Rsh_Fir_reg_dx42_ = Rsh_Fir_reg_dx39_;
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_r64_;
  goto L31_;

D38_:;
  // deopt 153 [dx42, dx43, x17]
  SEXP Rsh_Fir_array_deopt_stack35[3];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_dx42_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_dx43_;
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_x17_;
  Rsh_Fir_deopt(153, 3, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L133_:;
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty()));
  // c37 = `is.object`(x18)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // if c37 then L134() else L135(dx42, dx43, x18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L134()
    goto L134_;
  } else {
  // L135(dx42, dx43, x18)
    Rsh_Fir_reg_dx46_ = Rsh_Fir_reg_dx42_;
    Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_dx43_;
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_x18_;
    goto L135_;
  }

L134_:;
  // dr16 = tryDispatchBuiltin.1("[", x18)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args147);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // if dc8 then L136() else L135(dx42, dx43, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L136()
    goto L136_;
  } else {
  // L135(dx42, dx43, dr16)
    Rsh_Fir_reg_dx46_ = Rsh_Fir_reg_dx42_;
    Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_dx43_;
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_dr16_;
    goto L135_;
  }

L135_:;
  // iR2 = ld iR
  Rsh_Fir_reg_iR2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L137() else D39()
  // L137()
  goto L137_;

L136_:;
  // dx50 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx50_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty());
  // goto L32(dx42, dx43, dx50)
  // L32(dx42, dx43, dx50)
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_dx42_;
  Rsh_Fir_reg_dx52_ = Rsh_Fir_reg_dx43_;
  Rsh_Fir_reg_dx53_ = Rsh_Fir_reg_dx50_;
  goto L32_;

D39_:;
  // deopt 155 [dx46, dx47, x20, iR2]
  SEXP Rsh_Fir_array_deopt_stack36[4];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_dx46_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_dx47_;
  Rsh_Fir_array_deopt_stack36[2] = Rsh_Fir_reg_x20_;
  Rsh_Fir_array_deopt_stack36[3] = Rsh_Fir_reg_iR2_;
  Rsh_Fir_deopt(155, 4, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L137_:;
  // iR3 = force? iR2
  Rsh_Fir_reg_iR3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iR2_);
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r65 = dyn __7(x20, iR3)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_array_args150[1] = Rsh_Fir_reg_iR3_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L32(dx46, dx47, r65)
  // L32(dx46, dx47, r65)
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_dx46_;
  Rsh_Fir_reg_dx52_ = Rsh_Fir_reg_dx47_;
  Rsh_Fir_reg_dx53_ = Rsh_Fir_reg_r65_;
  goto L32_;

D40_:;
  // deopt 157 [dx51, dx52, dx53, x21]
  SEXP Rsh_Fir_array_deopt_stack37[4];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_dx51_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_dx52_;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_dx53_;
  Rsh_Fir_array_deopt_stack37[3] = Rsh_Fir_reg_x21_;
  Rsh_Fir_deopt(157, 4, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L138_:;
  // x22 = force? x21
  Rsh_Fir_reg_x22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x21_);
  // checkMissing(x22)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_x22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty()));
  // c38 = `is.object`(x22)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty());
  // if c38 then L139() else L140(dx51, dx52, dx53, x22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L139()
    goto L139_;
  } else {
  // L140(dx51, dx52, dx53, x22)
    Rsh_Fir_reg_dx57_ = Rsh_Fir_reg_dx51_;
    Rsh_Fir_reg_dx58_ = Rsh_Fir_reg_dx52_;
    Rsh_Fir_reg_dx59_ = Rsh_Fir_reg_dx53_;
    Rsh_Fir_reg_x24_ = Rsh_Fir_reg_x22_;
    goto L140_;
  }

L139_:;
  // dr18 = tryDispatchBuiltin.1("[", x22)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args153[1] = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args153);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // if dc9 then L141() else L140(dx51, dx52, dx53, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L141()
    goto L141_;
  } else {
  // L140(dx51, dx52, dx53, dr18)
    Rsh_Fir_reg_dx57_ = Rsh_Fir_reg_dx51_;
    Rsh_Fir_reg_dx58_ = Rsh_Fir_reg_dx52_;
    Rsh_Fir_reg_dx59_ = Rsh_Fir_reg_dx53_;
    Rsh_Fir_reg_x24_ = Rsh_Fir_reg_dr18_;
    goto L140_;
  }

L140_:;
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L142() else D41()
  // L142()
  goto L142_;

L141_:;
  // dx63 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx63_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty());
  // goto L33(dx51, dx52, dx53, dx63)
  // L33(dx51, dx52, dx53, dx63)
  Rsh_Fir_reg_dx64_ = Rsh_Fir_reg_dx51_;
  Rsh_Fir_reg_dx65_ = Rsh_Fir_reg_dx52_;
  Rsh_Fir_reg_dx66_ = Rsh_Fir_reg_dx53_;
  Rsh_Fir_reg_dx67_ = Rsh_Fir_reg_dx63_;
  goto L33_;

D41_:;
  // deopt 159 [dx57, dx58, dx59, x24, n4]
  SEXP Rsh_Fir_array_deopt_stack38[5];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_dx57_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_dx58_;
  Rsh_Fir_array_deopt_stack38[2] = Rsh_Fir_reg_dx59_;
  Rsh_Fir_array_deopt_stack38[3] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_deopt_stack38[4] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(159, 5, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L142_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r66 = dyn __8(x24, n5)
  SEXP Rsh_Fir_array_args156[2];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_args156[1] = Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args156, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L33(dx57, dx58, dx59, r66)
  // L33(dx57, dx58, dx59, r66)
  Rsh_Fir_reg_dx64_ = Rsh_Fir_reg_dx57_;
  Rsh_Fir_reg_dx65_ = Rsh_Fir_reg_dx58_;
  Rsh_Fir_reg_dx66_ = Rsh_Fir_reg_dx59_;
  Rsh_Fir_reg_dx67_ = Rsh_Fir_reg_r66_;
  goto L33_;

D42_:;
  // deopt 165 [deriv19]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_deriv19_;
  Rsh_Fir_deopt(165, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L144_:;
  // deriv20 = force? deriv19
  Rsh_Fir_reg_deriv20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deriv19_);
  // checkMissing(deriv20)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_deriv20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty()));
  // r71 = `==`(deriv20, 1.0)
  SEXP Rsh_Fir_array_args158[2];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_deriv20_;
  Rsh_Fir_array_args158[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty());
  // c39 = `as.logical`(r71)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty());
  // if c39 then L145() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L145()
    goto L145_;
  } else {
  // L35()
    goto L35_;
  }

L145_:;
  // m12 = ld m
  Rsh_Fir_reg_m12_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L146() else D43()
  // L146()
  goto L146_;

D43_:;
  // deopt 169 [m12]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_m12_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L146_:;
  // m13 = force? m12
  Rsh_Fir_reg_m13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m12_);
  // checkMissing(m13)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_m13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty()));
  // c40 = `is.object`(m13)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_m13_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty());
  // if c40 then L147() else L148(m13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L147()
    goto L147_;
  } else {
  // L148(m13)
    Rsh_Fir_reg_m15_ = Rsh_Fir_reg_m13_;
    goto L148_;
  }

L147_:;
  // dr20 = tryDispatchBuiltin.1("[", m13)
  SEXP Rsh_Fir_array_args162[2];
  Rsh_Fir_array_args162[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args162[1] = Rsh_Fir_reg_m13_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args162);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // if dc10 then L149() else L148(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L149()
    goto L149_;
  } else {
  // L148(dr20)
    Rsh_Fir_reg_m15_ = Rsh_Fir_reg_dr20_;
    goto L148_;
  }

L148_:;
  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L150() else D44()
  // L150()
  goto L150_;

L149_:;
  // dx68 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx68_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty());
  // goto L36(dx68)
  // L36(dx68)
  Rsh_Fir_reg_dx69_ = Rsh_Fir_reg_dx68_;
  goto L36_;

D44_:;
  // deopt 171 [m15, n6]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_m15_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_n6_;
  Rsh_Fir_deopt(171, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L150_:;
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r72 = dyn __9(m15, n7)
  SEXP Rsh_Fir_array_args165[2];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_m15_;
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_n7_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L36(r72)
  // L36(r72)
  Rsh_Fir_reg_dx69_ = Rsh_Fir_reg_r72_;
  goto L36_;

L152_:;
  // dr22 = tryDispatchBuiltin.0("[<-", l3, r70)
  SEXP Rsh_Fir_array_args166[3];
  Rsh_Fir_array_args166[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args166[2] = Rsh_Fir_reg_r70_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args166);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty());
  // if dc11 then L154() else L153(r70, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L154()
    goto L154_;
  } else {
  // L153(r70, dr22)
    Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r70_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr22_;
    goto L153_;
  }

L153_:;
  // iR4 = ld iR
  Rsh_Fir_reg_iR4_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L155() else D45()
  // L155()
  goto L155_;

L154_:;
  // dx70 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx70_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty());
  // goto L37(r70, dx70)
  // L37(r70, dx70)
  Rsh_Fir_reg_r76_ = Rsh_Fir_reg_r70_;
  Rsh_Fir_reg_dx71_ = Rsh_Fir_reg_dx70_;
  goto L37_;

D45_:;
  // deopt 177 [r74, l5, r70, iR4]
  SEXP Rsh_Fir_array_deopt_stack42[4];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_r70_;
  Rsh_Fir_array_deopt_stack42[3] = Rsh_Fir_reg_iR4_;
  Rsh_Fir_deopt(177, 4, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L155_:;
  // iR5 = force? iR4
  Rsh_Fir_reg_iR5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iR4_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r77 = dyn ___1(l5, r70, iR5)
  SEXP Rsh_Fir_array_args169[3];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args169[1] = Rsh_Fir_reg_r70_;
  Rsh_Fir_array_args169[2] = Rsh_Fir_reg_iR5_;
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args169, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L37(r74, r77)
  // L37(r74, r77)
  Rsh_Fir_reg_r76_ = Rsh_Fir_reg_r74_;
  Rsh_Fir_reg_dx71_ = Rsh_Fir_reg_r77_;
  goto L37_;

D46_:;
  // deopt 183 [iXtra]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_iXtra;
  Rsh_Fir_deopt(183, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L157_:;
  // iXtra1 = force? iXtra
  Rsh_Fir_reg_iXtra1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iXtra);
  // checkMissing(iXtra1)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_iXtra1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty()));
  // r79 = `!`(iXtra1)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_iXtra1_;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty());
  // st ini = r79
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_r79_, RHO);
  (void)(Rsh_Fir_reg_r79_);
  // interp = ldf interp
  Rsh_Fir_reg_interp = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L158() else D47()
  // L158()
  goto L158_;

D47_:;
  // deopt 188 []
  Rsh_Fir_deopt(188, 0, NULL, CCP, RHO);
  return R_NilValue;

L158_:;
  // p5 = prom<V +>{
  //   x25 = ld x;
  //   x26 = force? x25;
  //   checkMissing(x26);
  //   c42 = `is.object`(x26);
  //   if c42 then L1() else L2(x26);
  // L0(dx73):
  //   return dx73;
  // L1():
  //   dr24 = tryDispatchBuiltin.1("[", x26);
  //   dc12 = getTryDispatchBuiltinDispatched(dr24);
  //   if dc12 then L3() else L2(dr24);
  // L2(x28):
  //   ini = ld ini;
  //   ini1 = force? ini;
  //   __10 = ldf `[` in base;
  //   r80 = dyn __10(x28, ini1);
  //   goto L0(r80);
  // L3():
  //   dx72 = getTryDispatchBuiltinValue(dr24);
  //   goto L0(dx72);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2121022756_5, CCP, RHO);
  // p6 = prom<V +>{
  //   i7 = ld i;
  //   i8 = force? i7;
  //   checkMissing(i8);
  //   c43 = `is.object`(i8);
  //   if c43 then L1() else L2(i8);
  // L0(dx75):
  //   return dx75;
  // L1():
  //   dr26 = tryDispatchBuiltin.1("[", i8);
  //   dc13 = getTryDispatchBuiltinDispatched(dr26);
  //   if dc13 then L3() else L2(dr26);
  // L2(i10):
  //   ini2 = ld ini;
  //   ini3 = force? ini2;
  //   __11 = ldf `[` in base;
  //   r82 = dyn __11(i10, ini3);
  //   goto L0(r82);
  // L3():
  //   dx74 = getTryDispatchBuiltinValue(dr26);
  //   goto L0(dx74);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2121022756_6, CCP, RHO);
  // r84 = dyn interp(p5, p6)
  SEXP Rsh_Fir_array_args184[2];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args184[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_interp, 2, Rsh_Fir_array_args184, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L159() else D48()
  // L159()
  goto L159_;

D48_:;
  // deopt 191 [r84]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_deopt(191, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L159_:;
  // l6 = ld r
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // c44 = `is.object`(l6)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty());
  // if c44 then L160() else L161(r84, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c44_)) {
  // L160()
    goto L160_;
  } else {
  // L161(r84, l6)
    Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r84_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L161_;
  }

L160_:;
  // dr28 = tryDispatchBuiltin.0("[<-", l6, r84)
  SEXP Rsh_Fir_array_args186[3];
  Rsh_Fir_array_args186[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args186[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args186[2] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args186);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty());
  // if dc14 then L162() else L161(r84, dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L162()
    goto L162_;
  } else {
  // L161(r84, dr28)
    Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r84_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr28_;
    goto L161_;
  }

L161_:;
  // ini4 = ld ini
  Rsh_Fir_reg_ini4_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L163() else D49()
  // L163()
  goto L163_;

L162_:;
  // dx76 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx76_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty());
  // goto L39(dx76)
  // L39(dx76)
  Rsh_Fir_reg_dx77_ = Rsh_Fir_reg_dx76_;
  goto L39_;

D49_:;
  // deopt 193 [r86, l8, r84, ini4]
  SEXP Rsh_Fir_array_deopt_stack45[4];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack45[2] = Rsh_Fir_reg_r84_;
  Rsh_Fir_array_deopt_stack45[3] = Rsh_Fir_reg_ini4_;
  Rsh_Fir_deopt(193, 4, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L163_:;
  // ini5 = force? ini4
  Rsh_Fir_reg_ini5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ini4_);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r89 = dyn ___2(l8, r84, ini5)
  SEXP Rsh_Fir_array_args189[3];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args189[1] = Rsh_Fir_reg_r84_;
  Rsh_Fir_array_args189[2] = Rsh_Fir_reg_ini5_;
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args189, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L39(r89)
  // L39(r89)
  Rsh_Fir_reg_dx77_ = Rsh_Fir_reg_r89_;
  goto L39_;

D50_:;
  // deopt 197 [r90]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_deopt(197, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L164_:;
  // r91 = force? r90
  Rsh_Fir_reg_r91_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r90_);
  // checkMissing(r91)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_r91_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r91
  return Rsh_Fir_reg_r91_;

D51_:;
  // deopt 200 []
  Rsh_Fir_deopt(200, 0, NULL, CCP, RHO);
  return R_NilValue;

L166_:;
  // p7 = prom<V +>{
  //   x29 = ld x;
  //   x30 = force? x29;
  //   checkMissing(x30);
  //   return x30;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2121022756_7, CCP, RHO);
  // p8 = prom<V +>{
  //   i11 = ld i;
  //   i12 = force? i11;
  //   checkMissing(i12);
  //   return i12;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2121022756_8, CCP, RHO);
  // r94 = dyn interp1(p7, p8)
  SEXP Rsh_Fir_array_args193[2];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args193[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_interp1_, 2, Rsh_Fir_array_args193, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L167() else D52()
  // L167()
  goto L167_;

D52_:;
  // deopt 203 [r94]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_deopt(203, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L167_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r94
  return Rsh_Fir_reg_r94_;
}
SEXP Rsh_Fir_user_promise_inner2121022756_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_1;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r2 = dyn c("linear", "cubic")
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base("linear", "cubic")
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2121022756_1(SEXP CCP, SEXP RHO) {
  // extrapol1 = ld extrapol
  Rsh_Fir_reg_extrapol1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // extrapol2 = force? extrapol1
  Rsh_Fir_reg_extrapol2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_extrapol1_);
  // checkMissing(extrapol2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_extrapol2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return extrapol2
  return Rsh_Fir_reg_extrapol2_;
}
SEXP Rsh_Fir_user_promise_inner2121022756_2(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_1;
}
SEXP Rsh_Fir_user_promise_inner2121022756_3(SEXP CCP, SEXP RHO) {
  // x3 = ld x0
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_x4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_1;
}
SEXP Rsh_Fir_user_promise_inner2121022756_4(SEXP CCP, SEXP RHO) {
  // extrapol3 = ld extrapol
  Rsh_Fir_reg_extrapol3_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // extrapol4 = force? extrapol3
  Rsh_Fir_reg_extrapol4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_extrapol3_);
  // checkMissing(extrapol4)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_extrapol4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // r15 = `==`(extrapol4, "cubic")
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_extrapol4_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // visible.0()
  (void)(Rsh_Fir_intrinsic_visible_v0(CCP, RHO, 0, NULL));
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_inner2121022756_5(SEXP CCP, SEXP RHO) {
  // x25 = ld x
  Rsh_Fir_reg_x25_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // x26 = force? x25
  Rsh_Fir_reg_x26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x25_);
  // checkMissing(x26)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_x26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty()));
  // c42 = `is.object`(x26)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // if c42 then L1() else L2(x26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x26)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_x26_;
    goto L2_;
  }

L0_:;
  // return dx73
  return Rsh_Fir_reg_dx73_;

L1_:;
  // dr24 = tryDispatchBuiltin.1("[", x26)
  SEXP Rsh_Fir_array_args174[2];
  Rsh_Fir_array_args174[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args174[1] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args174);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty());
  // if dc12 then L3() else L2(dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr24)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_dr24_;
    goto L2_;
  }

L2_:;
  // ini = ld ini
  Rsh_Fir_reg_ini = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // ini1 = force? ini
  Rsh_Fir_reg_ini1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ini);
  // __10 = ldf `[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r80 = dyn __10(x28, ini1)
  SEXP Rsh_Fir_array_args176[2];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_array_args176[1] = Rsh_Fir_reg_ini1_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 2, Rsh_Fir_array_args176, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L0(r80)
  // L0(r80)
  Rsh_Fir_reg_dx73_ = Rsh_Fir_reg_r80_;
  goto L0_;

L3_:;
  // dx72 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx72_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // goto L0(dx72)
  // L0(dx72)
  Rsh_Fir_reg_dx73_ = Rsh_Fir_reg_dx72_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2121022756_6(SEXP CCP, SEXP RHO) {
  // i7 = ld i
  Rsh_Fir_reg_i7_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // i8 = force? i7
  Rsh_Fir_reg_i8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i7_);
  // checkMissing(i8)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_i8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty()));
  // c43 = `is.object`(i8)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty());
  // if c43 then L1() else L2(i8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L1()
    goto L1_;
  } else {
  // L2(i8)
    Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i8_;
    goto L2_;
  }

L0_:;
  // return dx75
  return Rsh_Fir_reg_dx75_;

L1_:;
  // dr26 = tryDispatchBuiltin.1("[", i8)
  SEXP Rsh_Fir_array_args180[2];
  Rsh_Fir_array_args180[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args180[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args180);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty());
  // if dc13 then L3() else L2(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr26)
    Rsh_Fir_reg_i10_ = Rsh_Fir_reg_dr26_;
    goto L2_;
  }

L2_:;
  // ini2 = ld ini
  Rsh_Fir_reg_ini2_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // ini3 = force? ini2
  Rsh_Fir_reg_ini3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ini2_);
  // __11 = ldf `[` in base
  Rsh_Fir_reg___11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r82 = dyn __11(i10, ini3)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_ini3_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___11_, 2, Rsh_Fir_array_args182, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L0(r82)
  // L0(r82)
  Rsh_Fir_reg_dx75_ = Rsh_Fir_reg_r82_;
  goto L0_;

L3_:;
  // dx74 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx74_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty());
  // goto L0(dx74)
  // L0(dx74)
  Rsh_Fir_reg_dx75_ = Rsh_Fir_reg_dx74_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2121022756_7(SEXP CCP, SEXP RHO) {
  // x29 = ld x
  Rsh_Fir_reg_x29_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // x30 = force? x29
  Rsh_Fir_reg_x30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x29_);
  // checkMissing(x30)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_x30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args191, Rsh_Fir_param_types_empty()));
  // return x30
  return Rsh_Fir_reg_x30_;
}
SEXP Rsh_Fir_user_promise_inner2121022756_8(SEXP CCP, SEXP RHO) {
  // i11 = ld i
  Rsh_Fir_reg_i11_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // i12 = force? i11
  Rsh_Fir_reg_i12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i11_);
  // checkMissing(i12)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_i12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty()));
  // return i12
  return Rsh_Fir_reg_i12_;
}
SEXP Rsh_Fir_user_function_inner3624283997_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3624283997 dynamic dispatch ([x, i])

  return Rsh_Fir_user_version_inner3624283997_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3624283997_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3624283997 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3624283997/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x1;  // x
  SEXP Rsh_Fir_reg_i1;  // i
  SEXP Rsh_Fir_reg_dx2;  // dx
  SEXP Rsh_Fir_reg_dx1_2;  // dx1
  SEXP Rsh_Fir_reg_c2;  // c
  SEXP Rsh_Fir_reg_dx3_1;  // dx3
  SEXP Rsh_Fir_reg_dr2;  // dr
  SEXP Rsh_Fir_reg_dc2;  // dc
  SEXP Rsh_Fir_reg_dx4_1;  // dx4
  SEXP Rsh_Fir_reg_dx5_1;  // dx5
  SEXP Rsh_Fir_reg_i1_1;  // i1
  SEXP Rsh_Fir_reg_i2_1;  // i2
  SEXP Rsh_Fir_reg___2;  // __
  SEXP Rsh_Fir_reg_r3;  // r
  SEXP Rsh_Fir_reg_x1_2;  // x1
  SEXP Rsh_Fir_reg_x2_2;  // x2
  SEXP Rsh_Fir_reg_x3_1;  // x3
  SEXP Rsh_Fir_reg_x4_2;  // x4
  SEXP Rsh_Fir_reg_c1_2;  // c1
  SEXP Rsh_Fir_reg_x7_1;  // x7
  SEXP Rsh_Fir_reg_x8_2;  // x8
  SEXP Rsh_Fir_reg_dr2_2;  // dr2
  SEXP Rsh_Fir_reg_dc1_2;  // dc1
  SEXP Rsh_Fir_reg_dx6_2;  // dx6
  SEXP Rsh_Fir_reg_x10_1;  // x10
  SEXP Rsh_Fir_reg_dx7_2;  // dx7
  SEXP Rsh_Fir_reg_i3_1;  // i3
  SEXP Rsh_Fir_reg_i4_;  // i4
  SEXP Rsh_Fir_reg___1_2;  // __1
  SEXP Rsh_Fir_reg_r1_2;  // r1
  SEXP Rsh_Fir_reg_r2_2;  // r2
  SEXP Rsh_Fir_reg_h;  // h
  SEXP Rsh_Fir_reg_h1_;  // h1
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_t;  // t
  SEXP Rsh_Fir_reg_t1_;  // t1
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_t2_;  // t2
  SEXP Rsh_Fir_reg_t3_;  // t3
  SEXP Rsh_Fir_reg_t4_;  // t4
  SEXP Rsh_Fir_reg_t5_;  // t5
  SEXP Rsh_Fir_reg_r5_2;  // r5
  SEXP Rsh_Fir_reg_t6_;  // t6
  SEXP Rsh_Fir_reg_t7_;  // t7
  SEXP Rsh_Fir_reg_r6_2;  // r6
  SEXP Rsh_Fir_reg_r7_1;  // r7
  SEXP Rsh_Fir_reg_r8_2;  // r8
  SEXP Rsh_Fir_reg_h2_;  // h2
  SEXP Rsh_Fir_reg_h3_;  // h3
  SEXP Rsh_Fir_reg_r9_1;  // r9
  SEXP Rsh_Fir_reg_t8_;  // t8
  SEXP Rsh_Fir_reg_t9_;  // t9
  SEXP Rsh_Fir_reg_t10_;  // t10
  SEXP Rsh_Fir_reg_t11_;  // t11
  SEXP Rsh_Fir_reg_r10_1;  // r10
  SEXP Rsh_Fir_reg_tt1_;  // tt1
  SEXP Rsh_Fir_reg_tt2_;  // tt2
  SEXP Rsh_Fir_reg_t12_;  // t12
  SEXP Rsh_Fir_reg_t13_;  // t13
  SEXP Rsh_Fir_reg_r11_1;  // r11
  SEXP Rsh_Fir_reg_tt3_;  // tt3
  SEXP Rsh_Fir_reg_tt4_;  // tt4
  SEXP Rsh_Fir_reg_t14_;  // t14
  SEXP Rsh_Fir_reg_t15_;  // t15
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_y0_2;  // y0
  SEXP Rsh_Fir_reg_y1_1;  // y1
  SEXP Rsh_Fir_reg_c2_1;  // c2
  SEXP Rsh_Fir_reg_y3_1;  // y3
  SEXP Rsh_Fir_reg_dr4_1;  // dr4
  SEXP Rsh_Fir_reg_dc2_1;  // dc2
  SEXP Rsh_Fir_reg_dx8_1;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_i5_;  // i5
  SEXP Rsh_Fir_reg_i6_1;  // i6
  SEXP Rsh_Fir_reg___2_1;  // __2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_h4_;  // h4
  SEXP Rsh_Fir_reg_h5_;  // h5
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_h6_;  // h6
  SEXP Rsh_Fir_reg_h7_;  // h7
  SEXP Rsh_Fir_reg_m2;  // m
  SEXP Rsh_Fir_reg_m1_1;  // m1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_h9_;  // h9
  SEXP Rsh_Fir_reg_m3_1;  // m3
  SEXP Rsh_Fir_reg_dr6_1;  // dr6
  SEXP Rsh_Fir_reg_dc3_1;  // dc3
  SEXP Rsh_Fir_reg_dx10_1;  // dx10
  SEXP Rsh_Fir_reg_r18_1;  // r18
  SEXP Rsh_Fir_reg_h11_;  // h11
  SEXP Rsh_Fir_reg_dx11_2;  // dx11
  SEXP Rsh_Fir_reg_i7_1;  // i7
  SEXP Rsh_Fir_reg_i8_1;  // i8
  SEXP Rsh_Fir_reg___3_1;  // __3
  SEXP Rsh_Fir_reg_r19_1;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_h12_;  // h12
  SEXP Rsh_Fir_reg_h13_;  // h13
  SEXP Rsh_Fir_reg_r21_1;  // r21
  SEXP Rsh_Fir_reg_r22_1;  // r22
  SEXP Rsh_Fir_reg_y4_1;  // y4
  SEXP Rsh_Fir_reg_y5_1;  // y5
  SEXP Rsh_Fir_reg_c4_1;  // c4
  SEXP Rsh_Fir_reg_r24_1;  // r24
  SEXP Rsh_Fir_reg_y7_1;  // y7
  SEXP Rsh_Fir_reg_dr8_1;  // dr8
  SEXP Rsh_Fir_reg_dc4_1;  // dc4
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_r26_1;  // r26
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_1;  // i10
  SEXP Rsh_Fir_reg_r27_1;  // r27
  SEXP Rsh_Fir_reg___4_1;  // __4
  SEXP Rsh_Fir_reg_r28_1;  // r28
  SEXP Rsh_Fir_reg_h14_;  // h14
  SEXP Rsh_Fir_reg_h15_;  // h15
  SEXP Rsh_Fir_reg_r29_1;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_h16_;  // h16
  SEXP Rsh_Fir_reg_h17_;  // h17
  SEXP Rsh_Fir_reg_m4_1;  // m4
  SEXP Rsh_Fir_reg_m5_1;  // m5
  SEXP Rsh_Fir_reg_c5_1;  // c5
  SEXP Rsh_Fir_reg_r32_1;  // r32
  SEXP Rsh_Fir_reg_h19_;  // h19
  SEXP Rsh_Fir_reg_m7_1;  // m7
  SEXP Rsh_Fir_reg_dr10_1;  // dr10
  SEXP Rsh_Fir_reg_dc5_1;  // dc5
  SEXP Rsh_Fir_reg_dx14_1;  // dx14
  SEXP Rsh_Fir_reg_r34_1;  // r34
  SEXP Rsh_Fir_reg_h21_;  // h21
  SEXP Rsh_Fir_reg_dx15_1;  // dx15
  SEXP Rsh_Fir_reg_i11_1;  // i11
  SEXP Rsh_Fir_reg_i12_1;  // i12
  SEXP Rsh_Fir_reg_r35_1;  // r35
  SEXP Rsh_Fir_reg___5_1;  // __5
  SEXP Rsh_Fir_reg_r36_1;  // r36
  SEXP Rsh_Fir_reg_r37_1;  // r37
  SEXP Rsh_Fir_reg_h22_;  // h22
  SEXP Rsh_Fir_reg_h23_;  // h23
  SEXP Rsh_Fir_reg_r38_1;  // r38
  SEXP Rsh_Fir_reg_r39_1;  // r39

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_i1 = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // st i = i
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_i1, RHO);
  (void)(Rsh_Fir_reg_i1);
  // dx = ld dx
  Rsh_Fir_reg_dx2 = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L0_:;
  // st h = dx5
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_dx5_1, RHO);
  (void)(Rsh_Fir_reg_dx5_1);
  // x1 = ld x
  Rsh_Fir_reg_x1_2 = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

L1_:;
  // r2 = `-`(x10, dx7)
  SEXP Rsh_Fir_array_args194[2];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_x10_1;
  Rsh_Fir_array_args194[1] = Rsh_Fir_reg_dx7_2;
  Rsh_Fir_reg_r2_2 = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args194, Rsh_Fir_param_types_empty());
  // h = ld h
  Rsh_Fir_reg_h = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

L2_:;
  // h4 = ld h00
  Rsh_Fir_reg_h4_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L34() else D19()
  // L34()
  goto L34_;

L3_:;
  // r20 = `*`(h11, dx11)
  SEXP Rsh_Fir_array_args195[2];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_h11_;
  Rsh_Fir_array_args195[1] = Rsh_Fir_reg_dx11_2;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty());
  // h12 = ld h10
  Rsh_Fir_reg_h12_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // check L41() else D23()
  // L41()
  goto L41_;

L4_:;
  // h14 = ld h01
  Rsh_Fir_reg_h14_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L47() else D26()
  // L47()
  goto L47_;

L5_:;
  // r37 = `*`(h21, dx15)
  SEXP Rsh_Fir_array_args196[2];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_h21_;
  Rsh_Fir_array_args196[1] = Rsh_Fir_reg_dx15_1;
  Rsh_Fir_reg_r37_1 = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty());
  // h22 = ld h11
  Rsh_Fir_reg_h22_ = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // check L54() else D30()
  // L54()
  goto L54_;

D0_:;
  // deopt 0 [dx]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_dx2;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L6_:;
  // dx1 = force? dx
  Rsh_Fir_reg_dx1_2 = Rsh_Fir_maybe_force(Rsh_Fir_reg_dx2);
  // checkMissing(dx1)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_dx1_2;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty()));
  // c = `is.object`(dx1)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_dx1_2;
  Rsh_Fir_reg_c2 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty());
  // if c then L7() else L8(dx1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2)) {
  // L7()
    goto L7_;
  } else {
  // L8(dx1)
    Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_dx1_2;
    goto L8_;
  }

L7_:;
  // dr = tryDispatchBuiltin.1("[", dx1)
  SEXP Rsh_Fir_array_args199[2];
  Rsh_Fir_array_args199[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args199[1] = Rsh_Fir_reg_dx1_2;
  Rsh_Fir_reg_dr2 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args199);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_dr2;
  Rsh_Fir_reg_dc2 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty());
  // if dc then L9() else L8(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2)) {
  // L9()
    goto L9_;
  } else {
  // L8(dr)
    Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_dr2;
    goto L8_;
  }

L8_:;
  // i1 = ld i
  Rsh_Fir_reg_i1_1 = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

L9_:;
  // dx4 = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_dr2;
  Rsh_Fir_reg_dx4_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_1 = Rsh_Fir_reg_dx4_1;
  goto L0_;

D1_:;
  // deopt 2 [dx3, i1]
  SEXP Rsh_Fir_array_deopt_stack49[2];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_dx3_1;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_i1_1;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L10_:;
  // i2 = force? i1
  Rsh_Fir_reg_i2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_i1_1);
  // __ = ldf `[` in base
  Rsh_Fir_reg___2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r = dyn __(dx3, i2)
  SEXP Rsh_Fir_array_args202[2];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_dx3_1;
  Rsh_Fir_array_args202[1] = Rsh_Fir_reg_i2_1;
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r3 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2, 2, Rsh_Fir_array_args202, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_dx5_1 = Rsh_Fir_reg_r3;
  goto L0_;

D2_:;
  // deopt 6 [x1]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_x1_2;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L11_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_2 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_2);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_x2_2;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args203, Rsh_Fir_param_types_empty()));
  // x3 = ld x0
  Rsh_Fir_reg_x3_1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

D3_:;
  // deopt 7 [x2, x3]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_x2_2;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_x3_1;
  Rsh_Fir_deopt(7, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L12_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_2 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_1);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_x4_2;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(x4)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_x4_2;
  Rsh_Fir_reg_c1_2 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args205, Rsh_Fir_param_types_empty());
  // if c1 then L13() else L14(x2, x4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_2)) {
  // L13()
    goto L13_;
  } else {
  // L14(x2, x4)
    Rsh_Fir_reg_x7_1 = Rsh_Fir_reg_x2_2;
    Rsh_Fir_reg_x8_2 = Rsh_Fir_reg_x4_2;
    goto L14_;
  }

L13_:;
  // dr2 = tryDispatchBuiltin.1("[", x4)
  SEXP Rsh_Fir_array_args206[2];
  Rsh_Fir_array_args206[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args206[1] = Rsh_Fir_reg_x4_2;
  Rsh_Fir_reg_dr2_2 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args206);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_dr2_2;
  Rsh_Fir_reg_dc1_2 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args207, Rsh_Fir_param_types_empty());
  // if dc1 then L15() else L14(x2, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_2)) {
  // L15()
    goto L15_;
  } else {
  // L14(x2, dr2)
    Rsh_Fir_reg_x7_1 = Rsh_Fir_reg_x2_2;
    Rsh_Fir_reg_x8_2 = Rsh_Fir_reg_dr2_2;
    goto L14_;
  }

L14_:;
  // i3 = ld i
  Rsh_Fir_reg_i3_1 = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

L15_:;
  // dx6 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_dr2_2;
  Rsh_Fir_reg_dx6_2 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty());
  // goto L1(x2, dx6)
  // L1(x2, dx6)
  Rsh_Fir_reg_x10_1 = Rsh_Fir_reg_x2_2;
  Rsh_Fir_reg_dx7_2 = Rsh_Fir_reg_dx6_2;
  goto L1_;

D4_:;
  // deopt 9 [x7, x8, i3]
  SEXP Rsh_Fir_array_deopt_stack52[3];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_x7_1;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_x8_2;
  Rsh_Fir_array_deopt_stack52[2] = Rsh_Fir_reg_i3_1;
  Rsh_Fir_deopt(9, 3, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L16_:;
  // i4 = force? i3
  Rsh_Fir_reg_i4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i3_1);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r1 = dyn __1(x8, i4)
  SEXP Rsh_Fir_array_args209[2];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_x8_2;
  Rsh_Fir_array_args209[1] = Rsh_Fir_reg_i4_;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r1_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_2, 2, Rsh_Fir_array_args209, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L1(x7, r1)
  // L1(x7, r1)
  Rsh_Fir_reg_x10_1 = Rsh_Fir_reg_x7_1;
  Rsh_Fir_reg_dx7_2 = Rsh_Fir_reg_r1_2;
  goto L1_;

D5_:;
  // deopt 12 [r2, h]
  SEXP Rsh_Fir_array_deopt_stack53[2];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r2_2;
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_h;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L17_:;
  // h1 = force? h
  Rsh_Fir_reg_h1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h);
  // checkMissing(h1)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_h1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args210, Rsh_Fir_param_types_empty()));
  // r3 = `/`(r2, h1)
  SEXP Rsh_Fir_array_args211[2];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_r2_2;
  Rsh_Fir_array_args211[1] = Rsh_Fir_reg_h1_;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty());
  // st t = r3
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r3_1, RHO);
  (void)(Rsh_Fir_reg_r3_1);
  // t = ld t
  Rsh_Fir_reg_t = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L18() else D6()
  // L18()
  goto L18_;

D6_:;
  // deopt 16 [t]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_t;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L18_:;
  // t1 = force? t
  Rsh_Fir_reg_t1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_t);
  // checkMissing(t1)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_t1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args212, Rsh_Fir_param_types_empty()));
  // r4 = `-`(t1, 1.0)
  SEXP Rsh_Fir_array_args213[2];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_t1_;
  Rsh_Fir_array_args213[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args213, Rsh_Fir_param_types_empty());
  // st t1 = r4
  Rsh_Fir_store(Rsh_const(CCP, 45), Rsh_Fir_reg_r4_1, RHO);
  (void)(Rsh_Fir_reg_r4_1);
  // t2 = ld t
  Rsh_Fir_reg_t2_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L19() else D7()
  // L19()
  goto L19_;

D7_:;
  // deopt 21 [t2]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_t2_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L19_:;
  // t3 = force? t2
  Rsh_Fir_reg_t3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_t2_);
  // checkMissing(t3)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_t3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty()));
  // t4 = ld t
  Rsh_Fir_reg_t4_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L20() else D8()
  // L20()
  goto L20_;

D8_:;
  // deopt 22 [t3, t4]
  SEXP Rsh_Fir_array_deopt_stack56[2];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_t3_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_t4_;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L20_:;
  // t5 = force? t4
  Rsh_Fir_reg_t5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_t4_);
  // checkMissing(t5)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_t5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty()));
  // r5 = `*`(t3, t5)
  SEXP Rsh_Fir_array_args216[2];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_t3_;
  Rsh_Fir_array_args216[1] = Rsh_Fir_reg_t5_;
  Rsh_Fir_reg_r5_2 = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args216, Rsh_Fir_param_types_empty());
  // t6 = ld t
  Rsh_Fir_reg_t6_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L21() else D9()
  // L21()
  goto L21_;

D9_:;
  // deopt 26 [r5, 3.0, 2.0, t6]
  SEXP Rsh_Fir_array_deopt_stack57[4];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_r5_2;
  Rsh_Fir_array_deopt_stack57[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_deopt_stack57[2] = Rsh_const(CCP, 32);
  Rsh_Fir_array_deopt_stack57[3] = Rsh_Fir_reg_t6_;
  Rsh_Fir_deopt(26, 4, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L21_:;
  // t7 = force? t6
  Rsh_Fir_reg_t7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_t6_);
  // checkMissing(t7)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_t7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args217, Rsh_Fir_param_types_empty()));
  // r6 = `*`(2.0, t7)
  SEXP Rsh_Fir_array_args218[2];
  Rsh_Fir_array_args218[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args218[1] = Rsh_Fir_reg_t7_;
  Rsh_Fir_reg_r6_2 = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args218, Rsh_Fir_param_types_empty());
  // r7 = `-`(3.0, r6)
  SEXP Rsh_Fir_array_args219[2];
  Rsh_Fir_array_args219[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args219[1] = Rsh_Fir_reg_r6_2;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args219, Rsh_Fir_param_types_empty());
  // r8 = `*`(r5, r7)
  SEXP Rsh_Fir_array_args220[2];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_r5_2;
  Rsh_Fir_array_args220[1] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_reg_r8_2 = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args220, Rsh_Fir_param_types_empty());
  // st h01 = r8
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_r8_2, RHO);
  (void)(Rsh_Fir_reg_r8_2);
  // h2 = ld h01
  Rsh_Fir_reg_h2_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L22() else D10()
  // L22()
  goto L22_;

D10_:;
  // deopt 33 [1.0, h2]
  SEXP Rsh_Fir_array_deopt_stack58[2];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_deopt_stack58[1] = Rsh_Fir_reg_h2_;
  Rsh_Fir_deopt(33, 2, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L22_:;
  // h3 = force? h2
  Rsh_Fir_reg_h3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h2_);
  // checkMissing(h3)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_h3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args221, Rsh_Fir_param_types_empty()));
  // r9 = `-`(1.0, h3)
  SEXP Rsh_Fir_array_args222[2];
  Rsh_Fir_array_args222[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args222[1] = Rsh_Fir_reg_h3_;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args222, Rsh_Fir_param_types_empty());
  // st h00 = r9
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_r9_1, RHO);
  (void)(Rsh_Fir_reg_r9_1);
  // t8 = ld t
  Rsh_Fir_reg_t8_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L23() else D11()
  // L23()
  goto L23_;

D11_:;
  // deopt 37 [t8]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_t8_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L23_:;
  // t9 = force? t8
  Rsh_Fir_reg_t9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_t8_);
  // checkMissing(t9)
  SEXP Rsh_Fir_array_args223[1];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_t9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty()));
  // t10 = ld t1
  Rsh_Fir_reg_t10_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L24() else D12()
  // L24()
  goto L24_;

D12_:;
  // deopt 38 [t9, t10]
  SEXP Rsh_Fir_array_deopt_stack60[2];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_t9_;
  Rsh_Fir_array_deopt_stack60[1] = Rsh_Fir_reg_t10_;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L24_:;
  // t11 = force? t10
  Rsh_Fir_reg_t11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_t10_);
  // checkMissing(t11)
  SEXP Rsh_Fir_array_args224[1];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_t11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args224, Rsh_Fir_param_types_empty()));
  // r10 = `*`(t9, t11)
  SEXP Rsh_Fir_array_args225[2];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_t9_;
  Rsh_Fir_array_args225[1] = Rsh_Fir_reg_t11_;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args225, Rsh_Fir_param_types_empty());
  // st tt1 = r10
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_r10_1, RHO);
  (void)(Rsh_Fir_reg_r10_1);
  // tt1 = ld tt1
  Rsh_Fir_reg_tt1_ = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L25() else D13()
  // L25()
  goto L25_;

D13_:;
  // deopt 42 [tt1]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_tt1_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L25_:;
  // tt2 = force? tt1
  Rsh_Fir_reg_tt2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tt1_);
  // checkMissing(tt2)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_tt2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty()));
  // t12 = ld t1
  Rsh_Fir_reg_t12_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L26() else D14()
  // L26()
  goto L26_;

D14_:;
  // deopt 43 [tt2, t12]
  SEXP Rsh_Fir_array_deopt_stack62[2];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_tt2_;
  Rsh_Fir_array_deopt_stack62[1] = Rsh_Fir_reg_t12_;
  Rsh_Fir_deopt(43, 2, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L26_:;
  // t13 = force? t12
  Rsh_Fir_reg_t13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_t12_);
  // checkMissing(t13)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_t13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args227, Rsh_Fir_param_types_empty()));
  // r11 = `*`(tt2, t13)
  SEXP Rsh_Fir_array_args228[2];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_tt2_;
  Rsh_Fir_array_args228[1] = Rsh_Fir_reg_t13_;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args228, Rsh_Fir_param_types_empty());
  // st h10 = r11
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_r11_1, RHO);
  (void)(Rsh_Fir_reg_r11_1);
  // tt3 = ld tt1
  Rsh_Fir_reg_tt3_ = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L27() else D15()
  // L27()
  goto L27_;

D15_:;
  // deopt 47 [tt3]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_tt3_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L27_:;
  // tt4 = force? tt3
  Rsh_Fir_reg_tt4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tt3_);
  // checkMissing(tt4)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_tt4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args229, Rsh_Fir_param_types_empty()));
  // t14 = ld t
  Rsh_Fir_reg_t14_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L28() else D16()
  // L28()
  goto L28_;

D16_:;
  // deopt 48 [tt4, t14]
  SEXP Rsh_Fir_array_deopt_stack64[2];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_tt4_;
  Rsh_Fir_array_deopt_stack64[1] = Rsh_Fir_reg_t14_;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L28_:;
  // t15 = force? t14
  Rsh_Fir_reg_t15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_t14_);
  // checkMissing(t15)
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_t15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args230, Rsh_Fir_param_types_empty()));
  // r12 = `*`(tt4, t15)
  SEXP Rsh_Fir_array_args231[2];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_tt4_;
  Rsh_Fir_array_args231[1] = Rsh_Fir_reg_t15_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args231, Rsh_Fir_param_types_empty());
  // st h11 = r12
  Rsh_Fir_store(Rsh_const(CCP, 43), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // y0 = ld y0
  Rsh_Fir_reg_y0_2 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L29() else D17()
  // L29()
  goto L29_;

D17_:;
  // deopt 52 [y0]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_y0_2;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L29_:;
  // y1 = force? y0
  Rsh_Fir_reg_y1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_y0_2);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args232[1];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_y1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args232, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(y1)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_y1_1;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty());
  // if c2 then L30() else L31(y1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L30()
    goto L30_;
  } else {
  // L31(y1)
    Rsh_Fir_reg_y3_1 = Rsh_Fir_reg_y1_1;
    goto L31_;
  }

L30_:;
  // dr4 = tryDispatchBuiltin.1("[", y1)
  SEXP Rsh_Fir_array_args234[2];
  Rsh_Fir_array_args234[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args234[1] = Rsh_Fir_reg_y1_1;
  Rsh_Fir_reg_dr4_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args234);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args235[1];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_dr4_1;
  Rsh_Fir_reg_dc2_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args235, Rsh_Fir_param_types_empty());
  // if dc2 then L32() else L31(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_1)) {
  // L32()
    goto L32_;
  } else {
  // L31(dr4)
    Rsh_Fir_reg_y3_1 = Rsh_Fir_reg_dr4_1;
    goto L31_;
  }

L31_:;
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L33() else D18()
  // L33()
  goto L33_;

L32_:;
  // dx8 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args236[1];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_dr4_1;
  Rsh_Fir_reg_dx8_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args236, Rsh_Fir_param_types_empty());
  // goto L2(dx8)
  // L2(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_1;
  goto L2_;

D18_:;
  // deopt 54 [y3, i5]
  SEXP Rsh_Fir_array_deopt_stack66[2];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_y3_1;
  Rsh_Fir_array_deopt_stack66[1] = Rsh_Fir_reg_i5_;
  Rsh_Fir_deopt(54, 2, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L33_:;
  // i6 = force? i5
  Rsh_Fir_reg_i6_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r13 = dyn __2(y3, i6)
  SEXP Rsh_Fir_array_args237[2];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_y3_1;
  Rsh_Fir_array_args237[1] = Rsh_Fir_reg_i6_1;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_1, 2, Rsh_Fir_array_args237, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L2(r13)
  // L2(r13)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r13_;
  goto L2_;

D19_:;
  // deopt 56 [dx9, h4]
  SEXP Rsh_Fir_array_deopt_stack67[2];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_deopt_stack67[1] = Rsh_Fir_reg_h4_;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L34_:;
  // h5 = force? h4
  Rsh_Fir_reg_h5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h4_);
  // checkMissing(h5)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_h5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args238, Rsh_Fir_param_types_empty()));
  // r14 = `*`(dx9, h5)
  SEXP Rsh_Fir_array_args239[2];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args239[1] = Rsh_Fir_reg_h5_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args239, Rsh_Fir_param_types_empty());
  // h6 = ld h
  Rsh_Fir_reg_h6_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L35() else D20()
  // L35()
  goto L35_;

D20_:;
  // deopt 58 [r14, h6]
  SEXP Rsh_Fir_array_deopt_stack68[2];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_deopt_stack68[1] = Rsh_Fir_reg_h6_;
  Rsh_Fir_deopt(58, 2, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L35_:;
  // h7 = force? h6
  Rsh_Fir_reg_h7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h6_);
  // checkMissing(h7)
  SEXP Rsh_Fir_array_args240[1];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_h7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args240, Rsh_Fir_param_types_empty()));
  // m = ld m
  Rsh_Fir_reg_m2 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L36() else D21()
  // L36()
  goto L36_;

D21_:;
  // deopt 59 [r14, h7, m]
  SEXP Rsh_Fir_array_deopt_stack69[3];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_deopt_stack69[1] = Rsh_Fir_reg_h7_;
  Rsh_Fir_array_deopt_stack69[2] = Rsh_Fir_reg_m2;
  Rsh_Fir_deopt(59, 3, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L36_:;
  // m1 = force? m
  Rsh_Fir_reg_m1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_m2);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_m1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args241, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(m1)
  SEXP Rsh_Fir_array_args242[1];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_m1_1;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args242, Rsh_Fir_param_types_empty());
  // if c3 then L37() else L38(r14, h7, m1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L37()
    goto L37_;
  } else {
  // L38(r14, h7, m1)
    Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r14_;
    Rsh_Fir_reg_h9_ = Rsh_Fir_reg_h7_;
    Rsh_Fir_reg_m3_1 = Rsh_Fir_reg_m1_1;
    goto L38_;
  }

L37_:;
  // dr6 = tryDispatchBuiltin.1("[", m1)
  SEXP Rsh_Fir_array_args243[2];
  Rsh_Fir_array_args243[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args243[1] = Rsh_Fir_reg_m1_1;
  Rsh_Fir_reg_dr6_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args243);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args244[1];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_dr6_1;
  Rsh_Fir_reg_dc3_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args244, Rsh_Fir_param_types_empty());
  // if dc3 then L39() else L38(r14, h7, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_1)) {
  // L39()
    goto L39_;
  } else {
  // L38(r14, h7, dr6)
    Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r14_;
    Rsh_Fir_reg_h9_ = Rsh_Fir_reg_h7_;
    Rsh_Fir_reg_m3_1 = Rsh_Fir_reg_dr6_1;
    goto L38_;
  }

L38_:;
  // i7 = ld i
  Rsh_Fir_reg_i7_1 = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L40() else D22()
  // L40()
  goto L40_;

L39_:;
  // dx10 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args245[1];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_dr6_1;
  Rsh_Fir_reg_dx10_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args245, Rsh_Fir_param_types_empty());
  // goto L3(r14, h7, dx10)
  // L3(r14, h7, dx10)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_h11_ = Rsh_Fir_reg_h7_;
  Rsh_Fir_reg_dx11_2 = Rsh_Fir_reg_dx10_1;
  goto L3_;

D22_:;
  // deopt 61 [r16, h9, m3, i7]
  SEXP Rsh_Fir_array_deopt_stack70[4];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack70[1] = Rsh_Fir_reg_h9_;
  Rsh_Fir_array_deopt_stack70[2] = Rsh_Fir_reg_m3_1;
  Rsh_Fir_array_deopt_stack70[3] = Rsh_Fir_reg_i7_1;
  Rsh_Fir_deopt(61, 4, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L40_:;
  // i8 = force? i7
  Rsh_Fir_reg_i8_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_i7_1);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r19 = dyn __3(m3, i8)
  SEXP Rsh_Fir_array_args246[2];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_m3_1;
  Rsh_Fir_array_args246[1] = Rsh_Fir_reg_i8_1;
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_1, 2, Rsh_Fir_array_args246, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L3(r16, h9, r19)
  // L3(r16, h9, r19)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_h11_ = Rsh_Fir_reg_h9_;
  Rsh_Fir_reg_dx11_2 = Rsh_Fir_reg_r19_1;
  goto L3_;

D23_:;
  // deopt 64 [r18, r20, h12]
  SEXP Rsh_Fir_array_deopt_stack71[3];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_r18_1;
  Rsh_Fir_array_deopt_stack71[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_deopt_stack71[2] = Rsh_Fir_reg_h12_;
  Rsh_Fir_deopt(64, 3, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L41_:;
  // h13 = force? h12
  Rsh_Fir_reg_h13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h12_);
  // checkMissing(h13)
  SEXP Rsh_Fir_array_args247[1];
  Rsh_Fir_array_args247[0] = Rsh_Fir_reg_h13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args247, Rsh_Fir_param_types_empty()));
  // r21 = `*`(r20, h13)
  SEXP Rsh_Fir_array_args248[2];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_args248[1] = Rsh_Fir_reg_h13_;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args248, Rsh_Fir_param_types_empty());
  // r22 = `+`(r18, r21)
  SEXP Rsh_Fir_array_args249[2];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_r18_1;
  Rsh_Fir_array_args249[1] = Rsh_Fir_reg_r21_1;
  Rsh_Fir_reg_r22_1 = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args249, Rsh_Fir_param_types_empty());
  // y4 = ld y0
  Rsh_Fir_reg_y4_1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L42() else D24()
  // L42()
  goto L42_;

D24_:;
  // deopt 67 [r22, y4]
  SEXP Rsh_Fir_array_deopt_stack72[2];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_r22_1;
  Rsh_Fir_array_deopt_stack72[1] = Rsh_Fir_reg_y4_1;
  Rsh_Fir_deopt(67, 2, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L42_:;
  // y5 = force? y4
  Rsh_Fir_reg_y5_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_y4_1);
  // checkMissing(y5)
  SEXP Rsh_Fir_array_args250[1];
  Rsh_Fir_array_args250[0] = Rsh_Fir_reg_y5_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args250, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(y5)
  SEXP Rsh_Fir_array_args251[1];
  Rsh_Fir_array_args251[0] = Rsh_Fir_reg_y5_1;
  Rsh_Fir_reg_c4_1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args251, Rsh_Fir_param_types_empty());
  // if c4 then L43() else L44(r22, y5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_1)) {
  // L43()
    goto L43_;
  } else {
  // L44(r22, y5)
    Rsh_Fir_reg_r24_1 = Rsh_Fir_reg_r22_1;
    Rsh_Fir_reg_y7_1 = Rsh_Fir_reg_y5_1;
    goto L44_;
  }

L43_:;
  // dr8 = tryDispatchBuiltin.1("[", y5)
  SEXP Rsh_Fir_array_args252[2];
  Rsh_Fir_array_args252[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args252[1] = Rsh_Fir_reg_y5_1;
  Rsh_Fir_reg_dr8_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args252);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args253[1];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_dr8_1;
  Rsh_Fir_reg_dc4_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args253, Rsh_Fir_param_types_empty());
  // if dc4 then L45() else L44(r22, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_1)) {
  // L45()
    goto L45_;
  } else {
  // L44(r22, dr8)
    Rsh_Fir_reg_r24_1 = Rsh_Fir_reg_r22_1;
    Rsh_Fir_reg_y7_1 = Rsh_Fir_reg_dr8_1;
    goto L44_;
  }

L44_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L46() else D25()
  // L46()
  goto L46_;

L45_:;
  // dx12 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args254[1];
  Rsh_Fir_array_args254[0] = Rsh_Fir_reg_dr8_1;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args254, Rsh_Fir_param_types_empty());
  // goto L4(r22, dx12)
  // L4(r22, dx12)
  Rsh_Fir_reg_r26_1 = Rsh_Fir_reg_r22_1;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L4_;

D25_:;
  // deopt 69 [r24, y7, i9]
  SEXP Rsh_Fir_array_deopt_stack73[3];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_r24_1;
  Rsh_Fir_array_deopt_stack73[1] = Rsh_Fir_reg_y7_1;
  Rsh_Fir_array_deopt_stack73[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(69, 3, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L46_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // checkMissing(i10)
  SEXP Rsh_Fir_array_args255[1];
  Rsh_Fir_array_args255[0] = Rsh_Fir_reg_i10_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args255, Rsh_Fir_param_types_empty()));
  // r27 = `+`(i10, 1.0)
  SEXP Rsh_Fir_array_args256[2];
  Rsh_Fir_array_args256[0] = Rsh_Fir_reg_i10_1;
  Rsh_Fir_array_args256[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r27_1 = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args256, Rsh_Fir_param_types_empty());
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r28 = dyn __4(y7, r27)
  SEXP Rsh_Fir_array_args257[2];
  Rsh_Fir_array_args257[0] = Rsh_Fir_reg_y7_1;
  Rsh_Fir_array_args257[1] = Rsh_Fir_reg_r27_1;
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r28_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_1, 2, Rsh_Fir_array_args257, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L4(r24, r28)
  // L4(r24, r28)
  Rsh_Fir_reg_r26_1 = Rsh_Fir_reg_r24_1;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r28_1;
  goto L4_;

D26_:;
  // deopt 73 [r26, dx13, h14]
  SEXP Rsh_Fir_array_deopt_stack74[3];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_r26_1;
  Rsh_Fir_array_deopt_stack74[1] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_deopt_stack74[2] = Rsh_Fir_reg_h14_;
  Rsh_Fir_deopt(73, 3, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L47_:;
  // h15 = force? h14
  Rsh_Fir_reg_h15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h14_);
  // checkMissing(h15)
  SEXP Rsh_Fir_array_args258[1];
  Rsh_Fir_array_args258[0] = Rsh_Fir_reg_h15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args258, Rsh_Fir_param_types_empty()));
  // r29 = `*`(dx13, h15)
  SEXP Rsh_Fir_array_args259[2];
  Rsh_Fir_array_args259[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args259[1] = Rsh_Fir_reg_h15_;
  Rsh_Fir_reg_r29_1 = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args259, Rsh_Fir_param_types_empty());
  // r30 = `+`(r26, r29)
  SEXP Rsh_Fir_array_args260[2];
  Rsh_Fir_array_args260[0] = Rsh_Fir_reg_r26_1;
  Rsh_Fir_array_args260[1] = Rsh_Fir_reg_r29_1;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args260, Rsh_Fir_param_types_empty());
  // h16 = ld h
  Rsh_Fir_reg_h16_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L48() else D27()
  // L48()
  goto L48_;

D27_:;
  // deopt 76 [r30, h16]
  SEXP Rsh_Fir_array_deopt_stack75[2];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_deopt_stack75[1] = Rsh_Fir_reg_h16_;
  Rsh_Fir_deopt(76, 2, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L48_:;
  // h17 = force? h16
  Rsh_Fir_reg_h17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h16_);
  // checkMissing(h17)
  SEXP Rsh_Fir_array_args261[1];
  Rsh_Fir_array_args261[0] = Rsh_Fir_reg_h17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args261, Rsh_Fir_param_types_empty()));
  // m4 = ld m
  Rsh_Fir_reg_m4_1 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L49() else D28()
  // L49()
  goto L49_;

D28_:;
  // deopt 77 [r30, h17, m4]
  SEXP Rsh_Fir_array_deopt_stack76[3];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_deopt_stack76[1] = Rsh_Fir_reg_h17_;
  Rsh_Fir_array_deopt_stack76[2] = Rsh_Fir_reg_m4_1;
  Rsh_Fir_deopt(77, 3, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

L49_:;
  // m5 = force? m4
  Rsh_Fir_reg_m5_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_m4_1);
  // checkMissing(m5)
  SEXP Rsh_Fir_array_args262[1];
  Rsh_Fir_array_args262[0] = Rsh_Fir_reg_m5_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args262, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(m5)
  SEXP Rsh_Fir_array_args263[1];
  Rsh_Fir_array_args263[0] = Rsh_Fir_reg_m5_1;
  Rsh_Fir_reg_c5_1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args263, Rsh_Fir_param_types_empty());
  // if c5 then L50() else L51(r30, h17, m5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_1)) {
  // L50()
    goto L50_;
  } else {
  // L51(r30, h17, m5)
    Rsh_Fir_reg_r32_1 = Rsh_Fir_reg_r30_;
    Rsh_Fir_reg_h19_ = Rsh_Fir_reg_h17_;
    Rsh_Fir_reg_m7_1 = Rsh_Fir_reg_m5_1;
    goto L51_;
  }

L50_:;
  // dr10 = tryDispatchBuiltin.1("[", m5)
  SEXP Rsh_Fir_array_args264[2];
  Rsh_Fir_array_args264[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args264[1] = Rsh_Fir_reg_m5_1;
  Rsh_Fir_reg_dr10_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args264);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args265[1];
  Rsh_Fir_array_args265[0] = Rsh_Fir_reg_dr10_1;
  Rsh_Fir_reg_dc5_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args265, Rsh_Fir_param_types_empty());
  // if dc5 then L52() else L51(r30, h17, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_1)) {
  // L52()
    goto L52_;
  } else {
  // L51(r30, h17, dr10)
    Rsh_Fir_reg_r32_1 = Rsh_Fir_reg_r30_;
    Rsh_Fir_reg_h19_ = Rsh_Fir_reg_h17_;
    Rsh_Fir_reg_m7_1 = Rsh_Fir_reg_dr10_1;
    goto L51_;
  }

L51_:;
  // i11 = ld i
  Rsh_Fir_reg_i11_1 = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L53() else D29()
  // L53()
  goto L53_;

L52_:;
  // dx14 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args266[1];
  Rsh_Fir_array_args266[0] = Rsh_Fir_reg_dr10_1;
  Rsh_Fir_reg_dx14_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args266, Rsh_Fir_param_types_empty());
  // goto L5(r30, h17, dx14)
  // L5(r30, h17, dx14)
  Rsh_Fir_reg_r34_1 = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_h21_ = Rsh_Fir_reg_h17_;
  Rsh_Fir_reg_dx15_1 = Rsh_Fir_reg_dx14_1;
  goto L5_;

D29_:;
  // deopt 79 [r32, h19, m7, i11]
  SEXP Rsh_Fir_array_deopt_stack77[4];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_r32_1;
  Rsh_Fir_array_deopt_stack77[1] = Rsh_Fir_reg_h19_;
  Rsh_Fir_array_deopt_stack77[2] = Rsh_Fir_reg_m7_1;
  Rsh_Fir_array_deopt_stack77[3] = Rsh_Fir_reg_i11_1;
  Rsh_Fir_deopt(79, 4, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

L53_:;
  // i12 = force? i11
  Rsh_Fir_reg_i12_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_i11_1);
  // checkMissing(i12)
  SEXP Rsh_Fir_array_args267[1];
  Rsh_Fir_array_args267[0] = Rsh_Fir_reg_i12_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args267, Rsh_Fir_param_types_empty()));
  // r35 = `+`(i12, 1.0)
  SEXP Rsh_Fir_array_args268[2];
  Rsh_Fir_array_args268[0] = Rsh_Fir_reg_i12_1;
  Rsh_Fir_array_args268[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r35_1 = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args268, Rsh_Fir_param_types_empty());
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r36 = dyn __5(m7, r35)
  SEXP Rsh_Fir_array_args269[2];
  Rsh_Fir_array_args269[0] = Rsh_Fir_reg_m7_1;
  Rsh_Fir_array_args269[1] = Rsh_Fir_reg_r35_1;
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r36_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_1, 2, Rsh_Fir_array_args269, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L5(r32, h19, r36)
  // L5(r32, h19, r36)
  Rsh_Fir_reg_r34_1 = Rsh_Fir_reg_r32_1;
  Rsh_Fir_reg_h21_ = Rsh_Fir_reg_h19_;
  Rsh_Fir_reg_dx15_1 = Rsh_Fir_reg_r36_1;
  goto L5_;

D30_:;
  // deopt 84 [r34, r37, h22]
  SEXP Rsh_Fir_array_deopt_stack78[3];
  Rsh_Fir_array_deopt_stack78[0] = Rsh_Fir_reg_r34_1;
  Rsh_Fir_array_deopt_stack78[1] = Rsh_Fir_reg_r37_1;
  Rsh_Fir_array_deopt_stack78[2] = Rsh_Fir_reg_h22_;
  Rsh_Fir_deopt(84, 3, Rsh_Fir_array_deopt_stack78, CCP, RHO);
  return R_NilValue;

L54_:;
  // h23 = force? h22
  Rsh_Fir_reg_h23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h22_);
  // checkMissing(h23)
  SEXP Rsh_Fir_array_args270[1];
  Rsh_Fir_array_args270[0] = Rsh_Fir_reg_h23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args270, Rsh_Fir_param_types_empty()));
  // r38 = `*`(r37, h23)
  SEXP Rsh_Fir_array_args271[2];
  Rsh_Fir_array_args271[0] = Rsh_Fir_reg_r37_1;
  Rsh_Fir_array_args271[1] = Rsh_Fir_reg_h23_;
  Rsh_Fir_reg_r38_1 = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args271, Rsh_Fir_param_types_empty());
  // r39 = `+`(r34, r38)
  SEXP Rsh_Fir_array_args272[2];
  Rsh_Fir_array_args272[0] = Rsh_Fir_reg_r34_1;
  Rsh_Fir_array_args272[1] = Rsh_Fir_reg_r38_1;
  Rsh_Fir_reg_r39_1 = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args272, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r39
  return Rsh_Fir_reg_r39_1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
