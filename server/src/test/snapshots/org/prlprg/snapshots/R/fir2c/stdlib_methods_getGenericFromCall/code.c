#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3300994742_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3300994742_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3300994742_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3300994742_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3300994742_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner3300994742
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3300994742_, RHO, CCP);
  // st getGenericFromCall = r
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
SEXP Rsh_Fir_user_function_inner3300994742_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3300994742 dynamic dispatch ([call, methodEnv])

  return Rsh_Fir_user_version_inner3300994742_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3300994742_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3300994742 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3300994742/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_call;  // call
  SEXP Rsh_Fir_reg_methodEnv;  // methodEnv
  SEXP Rsh_Fir_reg_methodEnv1_;  // methodEnv1
  SEXP Rsh_Fir_reg_methodEnv2_;  // methodEnv2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_methodEnv4_;  // methodEnv4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_generic;  // generic
  SEXP Rsh_Fir_reg_generic1_;  // generic1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_call1_;  // call1
  SEXP Rsh_Fir_reg_call2_;  // call2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_call4_;  // call4
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_getGeneric;  // getGeneric
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_call5_;  // call5
  SEXP Rsh_Fir_reg_call6_;  // call6
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_call8_;  // call8
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_methodEnv5_;  // methodEnv5
  SEXP Rsh_Fir_reg_methodEnv6_;  // methodEnv6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_call9_;  // call9
  SEXP Rsh_Fir_reg_call10_;  // call10
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_call12_;  // call12
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_environment;  // environment
  SEXP Rsh_Fir_reg_fdef;  // fdef
  SEXP Rsh_Fir_reg_fdef1_;  // fdef1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_generic2_;  // generic2
  SEXP Rsh_Fir_reg_generic3_;  // generic3

  // Bind parameters
  Rsh_Fir_reg_call = PARAMS[0];
  Rsh_Fir_reg_methodEnv = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st call = call
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_call, RHO);
  (void)(Rsh_Fir_reg_call);
  // st methodEnv = methodEnv
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_methodEnv, RHO);
  (void)(Rsh_Fir_reg_methodEnv);
  // methodEnv1 = ld methodEnv
  Rsh_Fir_reg_methodEnv1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L0_:;
  // c2 = `as.logical`(r2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c2 then L15() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L15()
    goto L15_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L6()
  // L6()
  goto L6_;

L2_:;
  // c5 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c5 then L22() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L22()
    goto L22_;
  } else {
  // L4()
    goto L4_;
  }

L3_:;
  // c4 = `is.symbol`(dx3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(390, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // goto L2(c4)
  // L2(c4)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_c4_;
  goto L2_;

L4_:;
  // call9 = ld call
  Rsh_Fir_reg_call9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L26() else D5()
  // L26()
  goto L26_;

L5_:;
  // st fdef = r13
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // environment = ldf environment
  Rsh_Fir_reg_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L30() else D6()
  // L30()
  goto L30_;

L6_:;
  // generic2 = ld generic
  Rsh_Fir_reg_generic2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L37() else D8()
  // L37()
  goto L37_;

D0_:;
  // deopt 0 [methodEnv1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_methodEnv1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // methodEnv2 = force? methodEnv1
  Rsh_Fir_reg_methodEnv2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methodEnv1_);
  // checkMissing(methodEnv2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_methodEnv2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // c = `is.object`(methodEnv2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_methodEnv2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L9() else L10(methodEnv2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L9()
    goto L9_;
  } else {
  // L10(methodEnv2)
    Rsh_Fir_reg_methodEnv4_ = Rsh_Fir_reg_methodEnv2_;
    goto L10_;
  }

L8_:;
  // st generic = dx1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L9_:;
  // dr = tryDispatchBuiltin.1("$", methodEnv2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_methodEnv2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args6);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if dc then L11() else L10(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L11()
    goto L11_;
  } else {
  // L10(dr)
    Rsh_Fir_reg_methodEnv4_ = Rsh_Fir_reg_dr;
    goto L10_;
  }

L10_:;
  // r = `$`(methodEnv4, <sym .Generic>)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_methodEnv4_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L8(r)
  // L8(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1;
  goto L8_;

L11_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L8(dx)
  // L8(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L8_;

L12_:;
  // generic = ld generic
  Rsh_Fir_reg_generic = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L14() else D1()
  // L14()
  goto L14_;

L13_:;
  // r1 = dyn base(<sym generic>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D1_:;
  // deopt 5 [generic]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_generic;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L14_:;
  // generic1 = force? generic
  Rsh_Fir_reg_generic1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_generic);
  // checkMissing(generic1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_generic1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // c1 = `==`(generic1, NULL)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_generic1_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L0(c1)
  // L0(c1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_c1_;
  goto L0_;

L15_:;
  // sym1 = ldf `is.name`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf `is.name` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard1 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L16_:;
  // call1 = ld call
  Rsh_Fir_reg_call1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L18() else D2()
  // L18()
  goto L18_;

L17_:;
  // r3 = dyn base1(<lang `[[`(call, 1)>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D2_:;
  // deopt 9 [call1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_call1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L18_:;
  // call2 = force? call1
  Rsh_Fir_reg_call2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call1_);
  // checkMissing(call2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_call2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(call2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_call2_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c3 then L19() else L20(call2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L19()
    goto L19_;
  } else {
  // L20(call2)
    Rsh_Fir_reg_call4_ = Rsh_Fir_reg_call2_;
    goto L20_;
  }

L19_:;
  // dr2 = tryDispatchBuiltin.1("[[", call2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_call2_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if dc1 then L21() else L20(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L21()
    goto L21_;
  } else {
  // L20(dr2)
    Rsh_Fir_reg_call4_ = Rsh_Fir_reg_dr2_;
    goto L20_;
  }

L20_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r5 = dyn __(call4, 1)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_call4_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r5_;
  goto L3_;

L21_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L3(dx2)
  // L3(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L3_;

L22_:;
  // getGeneric = ldf getGeneric
  Rsh_Fir_reg_getGeneric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L23() else D3()
  // L23()
  goto L23_;

D3_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p = prom<V +>{
  //   sym2 = ldf `as.character`;
  //   base2 = ldf `as.character` in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L2() else L3();
  // L0(r7):
  //   return r7;
  // L2():
  //   call5 = ld call;
  //   call6 = force? call5;
  //   checkMissing(call6);
  //   c6 = `is.object`(call6);
  //   if c6 then L4() else L5(call6);
  // L3():
  //   r6 = dyn base2(<lang `[[`(call, 1)>);
  //   goto L0(r6);
  // L1(dx5):
  //   as_character = ldf `as.character` in base;
  //   r9 = dyn as_character(dx5);
  //   goto L0(r9);
  // L4():
  //   dr4 = tryDispatchBuiltin.1("[[", call6);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L6() else L5(dr4);
  // L5(call8):
  //   __1 = ldf `[[` in base;
  //   r8 = dyn __1(call8, 1);
  //   goto L1(r8);
  // L6():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L1(dx4);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3300994742_, CCP, RHO);
  // p1 = prom<V +>{
  //   methodEnv5 = ld methodEnv;
  //   methodEnv6 = force? methodEnv5;
  //   checkMissing(methodEnv6);
  //   return methodEnv6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3300994742_1, CCP, RHO);
  // r12 = dyn getGeneric[, mustFind, where](p, TRUE, p1)
  SEXP Rsh_Fir_array_args31[3];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args31[2] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getGeneric, 3, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L24() else D4()
  // L24()
  goto L24_;

D4_:;
  // deopt 22 [r12]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L5(r12)
  // L5(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L5_;

D5_:;
  // deopt 23 [call9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_call9_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L26_:;
  // call10 = force? call9
  Rsh_Fir_reg_call10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call9_);
  // checkMissing(call10)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_call10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(call10)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_call10_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c7 then L27() else L28(call10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L27()
    goto L27_;
  } else {
  // L28(call10)
    Rsh_Fir_reg_call12_ = Rsh_Fir_reg_call10_;
    goto L28_;
  }

L27_:;
  // dr6 = tryDispatchBuiltin.1("[[", call10)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_call10_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args34);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if dc3 then L29() else L28(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L29()
    goto L29_;
  } else {
  // L28(dr6)
    Rsh_Fir_reg_call12_ = Rsh_Fir_reg_dr6_;
    goto L28_;
  }

L28_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r14 = dyn __2(call12, 1)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_call12_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(r14)
  // L5(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L5_;

L29_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L5(dx6)
  // L5(dx6)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_dx6_;
  goto L5_;

D6_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // p2 = prom<V +>{
  //   fdef = ld fdef;
  //   fdef1 = force? fdef;
  //   checkMissing(fdef1);
  //   return fdef1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3300994742_2, CCP, RHO);
  // r16 = dyn environment(p2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L31() else D7()
  // L31()
  goto L31_;

D7_:;
  // deopt 32 [r16]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L31_:;
  // c8 = `is.object`(r16)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c8 then L33() else L34(r16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L33()
    goto L33_;
  } else {
  // L34(r16)
    Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r16_;
    goto L34_;
  }

L32_:;
  // st generic = dx8
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx8_, RHO);
  (void)(Rsh_Fir_reg_dx8_);
  // goto L6()
  // L6()
  goto L6_;

L33_:;
  // dr8 = tryDispatchBuiltin.1("$", r16)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args41);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if dc4 then L35() else L34(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L35()
    goto L35_;
  } else {
  // L34(dr8)
    Rsh_Fir_reg_r18_ = Rsh_Fir_reg_dr8_;
    goto L34_;
  }

L34_:;
  // r19 = `$`(r18, <sym .Generic>)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L32(r19)
  // L32(r19)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r19_;
  goto L32_;

L35_:;
  // dx7 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L32(dx7)
  // L32(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L32_;

D8_:;
  // deopt 37 [generic2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_generic2_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L37_:;
  // generic3 = force? generic2
  Rsh_Fir_reg_generic3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_generic2_);
  // checkMissing(generic3)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_generic3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return generic3
  return Rsh_Fir_reg_generic3_;
}
SEXP Rsh_Fir_user_promise_inner3300994742_(SEXP CCP, SEXP RHO) {
  // sym2 = ldf `as.character`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base2 = ldf `as.character` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard2 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r7
  return Rsh_Fir_reg_r7_;

L1_:;
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r9 = dyn as_character(dx5)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r9_;
  goto L0_;

L2_:;
  // call5 = ld call
  Rsh_Fir_reg_call5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // call6 = force? call5
  Rsh_Fir_reg_call6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call5_);
  // checkMissing(call6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_call6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(call6)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_call6_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c6 then L4() else L5(call6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L4()
    goto L4_;
  } else {
  // L5(call6)
    Rsh_Fir_reg_call8_ = Rsh_Fir_reg_call6_;
    goto L5_;
  }

L3_:;
  // r6 = dyn base2(<lang `[[`(call, 1)>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L0_;

L4_:;
  // dr4 = tryDispatchBuiltin.1("[[", call6)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_call6_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args26);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if dc2 then L6() else L5(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr4)
    Rsh_Fir_reg_call8_ = Rsh_Fir_reg_dr4_;
    goto L5_;
  }

L5_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r8 = dyn __1(call8, 1)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_call8_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r8)
  // L1(r8)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r8_;
  goto L1_;

L6_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L1(dx4)
  // L1(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3300994742_1(SEXP CCP, SEXP RHO) {
  // methodEnv5 = ld methodEnv
  Rsh_Fir_reg_methodEnv5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // methodEnv6 = force? methodEnv5
  Rsh_Fir_reg_methodEnv6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methodEnv5_);
  // checkMissing(methodEnv6)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_methodEnv6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return methodEnv6
  return Rsh_Fir_reg_methodEnv6_;
}
SEXP Rsh_Fir_user_promise_inner3300994742_2(SEXP CCP, SEXP RHO) {
  // fdef = ld fdef
  Rsh_Fir_reg_fdef = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // fdef1 = force? fdef
  Rsh_Fir_reg_fdef1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fdef);
  // checkMissing(fdef1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_fdef1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return fdef1
  return Rsh_Fir_reg_fdef1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
