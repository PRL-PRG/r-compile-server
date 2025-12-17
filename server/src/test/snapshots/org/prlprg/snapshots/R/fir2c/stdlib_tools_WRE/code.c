#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2708337952_(SEXP CCP, SEXP RHO);
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
  // r = clos inner2708337952
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // st WRE = r
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
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2708337952 dynamic dispatch ([])

  return Rsh_Fir_user_version_inner2708337952_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2708337952 version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for inner2708337952/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_apidata;  // apidata
  SEXP Rsh_Fir_reg_apidata1_;  // apidata1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_apidata3_;  // apidata3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_apidata4_;  // apidata4
  SEXP Rsh_Fir_reg_apidata5_;  // apidata5
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_apidata7_;  // apidata7
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_system_file;  // system_file
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_apidata8_;  // apidata8
  SEXP Rsh_Fir_reg_apidata9_;  // apidata9
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_apidata11_;  // apidata11
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_readLines;  // readLines
  SEXP Rsh_Fir_reg_apidata12_;  // apidata12
  SEXP Rsh_Fir_reg_apidata13_;  // apidata13
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_apidata15_;  // apidata15
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_apidata16_;  // apidata16
  SEXP Rsh_Fir_reg_apidata17_;  // apidata17
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_apidata19_;  // apidata19
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_r30_;  // r30

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L0_:;
  // c2 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c2 then L15() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L15()
    goto L15_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L7()
  // L7()
  goto L7_;

L2_:;
  // c5 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c5 then L23() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L23()
    goto L23_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L6()
  // L6()
  goto L6_;

L4_:;
  // goto L5(NULL)
  // L5(NULL)
  Rsh_Fir_reg_r19_ = Rsh_const(CCP, 2);
  goto L5_;

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // readLines = ldf readLines
  Rsh_Fir_reg_readLines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L42() else D5()
  // L42()
  goto L42_;

L7_:;
  // apidata16 = ld apidata
  Rsh_Fir_reg_apidata16_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L49() else D7()
  // L49()
  goto L49_;

L8_:;
  // apidata = ld apidata
  Rsh_Fir_reg_apidata = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

L9_:;
  // r = dyn base(<lang `$`(apidata, wrelines)>)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 1 [apidata]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_apidata;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // apidata1 = force? apidata
  Rsh_Fir_reg_apidata1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_apidata);
  // checkMissing(apidata1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_apidata1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // c = `is.object`(apidata1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_apidata1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c then L12() else L13(apidata1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L12()
    goto L12_;
  } else {
  // L13(apidata1)
    Rsh_Fir_reg_apidata3_ = Rsh_Fir_reg_apidata1_;
    goto L13_;
  }

L11_:;
  // c1 = `==`(dx1, NULL)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L0(c1)
  // L0(c1)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c1_;
  goto L0_;

L12_:;
  // dr = tryDispatchBuiltin.1("$", apidata1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_apidata1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args7);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if dc then L14() else L13(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L14()
    goto L14_;
  } else {
  // L13(dr)
    Rsh_Fir_reg_apidata3_ = Rsh_Fir_reg_dr;
    goto L13_;
  }

L13_:;
  // r2 = `$`(apidata3, <sym wrelines>)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_apidata3_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L11(r2)
  // L11(r2)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r2_;
  goto L11_;

L14_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L11(dx)
  // L11(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L11_;

L15_:;
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard1 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L16_:;
  // apidata4 = ld apidata
  Rsh_Fir_reg_apidata4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L18() else D1()
  // L18()
  goto L18_;

L17_:;
  // r3 = dyn base1(<lang `$`(apidata, wreloc)>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D1_:;
  // deopt 6 [apidata4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_apidata4_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L18_:;
  // apidata5 = force? apidata4
  Rsh_Fir_reg_apidata5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_apidata4_);
  // checkMissing(apidata5)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_apidata5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(apidata5)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_apidata5_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c3 then L20() else L21(apidata5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L20()
    goto L20_;
  } else {
  // L21(apidata5)
    Rsh_Fir_reg_apidata7_ = Rsh_Fir_reg_apidata5_;
    goto L21_;
  }

L19_:;
  // c4 = `==`(dx3, NULL)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L2(c4)
  // L2(c4)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_c4_;
  goto L2_;

L20_:;
  // dr2 = tryDispatchBuiltin.1("$", apidata5)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_apidata5_;
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
    Rsh_Fir_reg_apidata7_ = Rsh_Fir_reg_dr2_;
    goto L21_;
  }

L21_:;
  // r5 = `$`(apidata7, <sym wreloc>)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_apidata7_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L19(r5)
  // L19(r5)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r5_;
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
  // system_file = ldf `system.file`
  Rsh_Fir_reg_system_file = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L24() else D2()
  // L24()
  goto L24_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // r6 = dyn system_file[package, ]("tools", "wre.txt")
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_system_file, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L25() else D3()
  // L25()
  goto L25_;

D3_:;
  // deopt 15 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L25_:;
  // l = ld apidata
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c6 = `is.object`(l)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c6 then L27() else L28(r6, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L27()
    goto L27_;
  } else {
  // L28(r6, l)
    Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r6_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L28_;
  }

L26_:;
  // st apidata = dx5
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // apidata8 = ld apidata
  Rsh_Fir_reg_apidata8_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L30() else D4()
  // L30()
  goto L30_;

L27_:;
  // dr4 = tryDispatchBuiltin.0("$<-", l, r6)
  SEXP Rsh_Fir_array_args22[3];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args22[2] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args22);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if dc2 then L29() else L28(r6, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L29()
    goto L29_;
  } else {
  // L28(r6, dr4)
    Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r6_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr4_;
    goto L28_;
  }

L28_:;
  // r11 = `$<-`(l2, <sym wreloc>, r6)
  SEXP Rsh_Fir_array_args24[3];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args24[2] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L26(r11)
  // L26(r11)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r11_;
  goto L26_;

L29_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L26(dx4)
  // L26(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L26_;

D4_:;
  // deopt 19 [apidata8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_apidata8_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L30_:;
  // apidata9 = force? apidata8
  Rsh_Fir_reg_apidata9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_apidata8_);
  // checkMissing(apidata9)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_apidata9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(apidata9)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_apidata9_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c7 then L32() else L33(apidata9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L32()
    goto L32_;
  } else {
  // L33(apidata9)
    Rsh_Fir_reg_apidata11_ = Rsh_Fir_reg_apidata9_;
    goto L33_;
  }

L31_:;
  // r13 = `==`(dx7, "")
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // c8 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c8 then L35() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L35()
    goto L35_;
  } else {
  // L4()
    goto L4_;
  }

L32_:;
  // dr6 = tryDispatchBuiltin.1("$", apidata9)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_apidata9_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc3 then L34() else L33(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L34()
    goto L34_;
  } else {
  // L33(dr6)
    Rsh_Fir_reg_apidata11_ = Rsh_Fir_reg_dr6_;
    goto L33_;
  }

L33_:;
  // r12 = `$`(apidata11, <sym wreloc>)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_apidata11_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L31(r12)
  // L31(r12)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r12_;
  goto L31_;

L34_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L31(dx6)
  // L31(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L31_;

L35_:;
  // l3 = ld apidata
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c9 = `is.object`(l3)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c9 then L37() else L38("https://svn.r-project.org/R/trunk/doc/manual/R-exts.texi", l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L37()
    goto L37_;
  } else {
  // L38("https://svn.r-project.org/R/trunk/doc/manual/R-exts.texi", l3)
    Rsh_Fir_reg_r15_ = Rsh_const(CCP, 16);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L38_;
  }

L36_:;
  // st apidata = dx9
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // goto L5(r17)
  // L5(r17)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r17_;
  goto L5_;

L37_:;
  // dr8 = tryDispatchBuiltin.0("$<-", l3, "https://svn.r-project.org/R/trunk/doc/manual/R-exts.texi")
  SEXP Rsh_Fir_array_args35[3];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args35[2] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args35);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc4 then L39() else L38("https://svn.r-project.org/R/trunk/doc/manual/R-exts.texi", dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L39()
    goto L39_;
  } else {
  // L38("https://svn.r-project.org/R/trunk/doc/manual/R-exts.texi", dr8)
    Rsh_Fir_reg_r15_ = Rsh_const(CCP, 16);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr8_;
    goto L38_;
  }

L38_:;
  // r18 = `$<-`(l5, <sym wreloc>, "https://svn.r-project.org/R/trunk/doc/manual/R-exts.texi")
  SEXP Rsh_Fir_array_args37[3];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args37[2] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L36(r15, r18)
  // L36(r15, r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r18_;
  goto L36_;

L39_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L36("https://svn.r-project.org/R/trunk/doc/manual/R-exts.texi", dx8)
  // L36("https://svn.r-project.org/R/trunk/doc/manual/R-exts.texi", dx8)
  Rsh_Fir_reg_r17_ = Rsh_const(CCP, 16);
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L36_;

D5_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // p = prom<V +>{
  //   apidata12 = ld apidata;
  //   apidata13 = force? apidata12;
  //   checkMissing(apidata13);
  //   c10 = `is.object`(apidata13);
  //   if c10 then L1() else L2(apidata13);
  // L0(dx11):
  //   return dx11;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("$", apidata13);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(apidata15):
  //   r21 = `$`(apidata15, <sym wreloc>);
  //   goto L0(r21);
  // L3():
  //   dx10 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx10);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_, CCP, RHO);
  // r23 = dyn readLines(p)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readLines, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L43() else D6()
  // L43()
  goto L43_;

D6_:;
  // deopt 36 [r23]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L43_:;
  // l6 = ld apidata
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c11 = `is.object`(l6)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if c11 then L45() else L46(r23, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L45()
    goto L45_;
  } else {
  // L46(r23, l6)
    Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r23_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L46_;
  }

L44_:;
  // st apidata = dx13
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // goto L7()
  // L7()
  goto L7_;

L45_:;
  // dr12 = tryDispatchBuiltin.0("$<-", l6, r23)
  SEXP Rsh_Fir_array_args47[3];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args47[2] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args47);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if dc6 then L47() else L46(r23, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L47()
    goto L47_;
  } else {
  // L46(r23, dr12)
    Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r23_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr12_;
    goto L46_;
  }

L46_:;
  // r28 = `$<-`(l8, <sym wrelines>, r23)
  SEXP Rsh_Fir_array_args49[3];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args49[2] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L44(r25, r28)
  // L44(r25, r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r28_;
  goto L44_;

L47_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L44(r23, dx12)
  // L44(r23, dx12)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L44_;

D7_:;
  // deopt 42 [apidata16]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_apidata16_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L49_:;
  // apidata17 = force? apidata16
  Rsh_Fir_reg_apidata17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_apidata16_);
  // checkMissing(apidata17)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_apidata17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(apidata17)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_apidata17_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if c12 then L51() else L52(apidata17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L51()
    goto L51_;
  } else {
  // L52(apidata17)
    Rsh_Fir_reg_apidata19_ = Rsh_Fir_reg_apidata17_;
    goto L52_;
  }

L50_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx15
  return Rsh_Fir_reg_dx15_;

L51_:;
  // dr14 = tryDispatchBuiltin.1("$", apidata17)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_apidata17_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args53);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if dc7 then L53() else L52(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L53()
    goto L53_;
  } else {
  // L52(dr14)
    Rsh_Fir_reg_apidata19_ = Rsh_Fir_reg_dr14_;
    goto L52_;
  }

L52_:;
  // r30 = `$`(apidata19, <sym wrelines>)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_apidata19_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L50(r30)
  // L50(r30)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r30_;
  goto L50_;

L53_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L50(dx14)
  // L50(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L50_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_(SEXP CCP, SEXP RHO) {
  // apidata12 = ld apidata
  Rsh_Fir_reg_apidata12_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // apidata13 = force? apidata12
  Rsh_Fir_reg_apidata13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_apidata12_);
  // checkMissing(apidata13)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_apidata13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(apidata13)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_apidata13_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c10 then L1() else L2(apidata13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L1()
    goto L1_;
  } else {
  // L2(apidata13)
    Rsh_Fir_reg_apidata15_ = Rsh_Fir_reg_apidata13_;
    goto L2_;
  }

L0_:;
  // return dx11
  return Rsh_Fir_reg_dx11_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("$", apidata13)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_apidata13_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args41);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_apidata15_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // r21 = `$`(apidata15, <sym wreloc>)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_apidata15_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L0(r21)
  // L0(r21)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r21_;
  goto L0_;

L3_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L0(dx10)
  // L0(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
