#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3784084085_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3784084085_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner3784084085
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3784084085_, RHO, CCP);
  // st `makepredictcall.default` = r
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
SEXP Rsh_Fir_user_function_inner3784084085_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3784084085 dynamic dispatch ([var, call])

  return Rsh_Fir_user_version_inner3784084085_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3784084085_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3784084085 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3784084085/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_var;  // var
  SEXP Rsh_Fir_reg_call;  // call
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_call1_;  // call1
  SEXP Rsh_Fir_reg_call2_;  // call2
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_call3_;  // call3
  SEXP Rsh_Fir_reg_call4_;  // call4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_var1_;  // var1
  SEXP Rsh_Fir_reg_var2_;  // var2
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_z3_;  // z3
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_z5_;  // z5
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_var3_;  // var3
  SEXP Rsh_Fir_reg_var4_;  // var4
  SEXP Rsh_Fir_reg_attr1_;  // attr1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_z7_;  // z7
  SEXP Rsh_Fir_reg_z8_;  // z8
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_z10_;  // z10
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_z12_;  // z12
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_call5_;  // call5
  SEXP Rsh_Fir_reg_call6_;  // call6

  // Bind parameters
  Rsh_Fir_reg_var = PARAMS[0];
  Rsh_Fir_reg_call = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st var = var
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_var, RHO);
  (void)(Rsh_Fir_reg_var);
  // st call = call
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_call, RHO);
  (void)(Rsh_Fir_reg_call);
  // sym = ldf `as.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf `as.character` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L0_:;
  // c = `is.object`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L16() else L17(r1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L16()
    goto L16_;
  } else {
  // L17(r1)
    Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r1_;
    goto L17_;
  }

L1_:;
  // r6 = `!=`(dx1, "scale")
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c1 then L19() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L19()
    goto L19_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L4_:;
  // r14 = `!`(r10)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c3 then L29() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L29()
    goto L29_;
  } else {
  // L6()
    goto L6_;
  }

L5_:;
  // st z = r12
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // c2 = `==`(r12, NULL)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L4(c2)
  // L4(c2)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_c2_;
  goto L4_;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard3 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L8_:;
  // r21 = `!`(r17)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c6 then L42() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L42()
    goto L42_;
  } else {
  // L10()
    goto L10_;
  }

L9_:;
  // st z = r19
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // c5 = `==`(r19, NULL)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L8(c5)
  // L8(c5)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_c5_;
  goto L8_;

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // call5 = ld call
  Rsh_Fir_reg_call5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L49() else D9()
  // L49()
  goto L49_;

L12_:;
  // call1 = ld call
  Rsh_Fir_reg_call1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

L13_:;
  // r = dyn base(<sym call>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [call1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_call1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L14_:;
  // call2 = force? call1
  Rsh_Fir_reg_call2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call1_);
  // checkMissing(call2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_call2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r2 = dyn as_character(call2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_call2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L16_:;
  // dr = tryDispatchBuiltin.1("[", r1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args15);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if dc then L18() else L17(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L18()
    goto L18_;
  } else {
  // L17(dr)
    Rsh_Fir_reg_r4_ = Rsh_Fir_reg_dr;
    goto L17_;
  }

L17_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r5 = dyn __(r4, 1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r5_;
  goto L1_;

L18_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

L19_:;
  // call3 = ld call
  Rsh_Fir_reg_call3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

D2_:;
  // deopt 11 [call3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_call3_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L20_:;
  // call4 = force? call3
  Rsh_Fir_reg_call4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call3_);
  // checkMissing(call4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_call4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return call4
  return Rsh_Fir_reg_call4_;

L23_:;
  // sym2 = ldf attr
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base2 = ldf attr in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard2 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L24_:;
  // r9 = dyn base1(<lang `<-`(z, attr(var, "scaled:center"))>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L4(r9)
  // L4(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L4_;

L25_:;
  // var1 = ld var
  Rsh_Fir_reg_var1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L27() else D3()
  // L27()
  goto L27_;

L26_:;
  // r11 = dyn base2(<sym var>, "scaled:center")
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L5(r11)
  // L5(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L5_;

D3_:;
  // deopt 19 [var1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_var1_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L27_:;
  // var2 = force? var1
  Rsh_Fir_reg_var2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_var1_);
  // checkMissing(var2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_var2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r13 = dyn attr(var2, "scaled:center")
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_var2_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L28() else D4()
  // L28()
  goto L28_;

D4_:;
  // deopt 23 [r13]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L5(r13)
  // L5(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L5_;

L29_:;
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L30() else D5()
  // L30()
  goto L30_;

D5_:;
  // deopt 27 [z]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L30_:;
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // l = ld call
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // c4 = `is.object`(l)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c4 then L32() else L33(z1, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L32()
    goto L32_;
  } else {
  // L33(z1, l)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_z1_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L33_;
  }

L31_:;
  // st call = dx3
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L7()
  // L7()
  goto L7_;

L32_:;
  // dr2 = tryDispatchBuiltin.0("$<-", l, z1)
  SEXP Rsh_Fir_array_args27[3];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args27[2] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args27);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if dc1 then L34() else L33(z1, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L34()
    goto L34_;
  } else {
  // L33(z1, dr2)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_z1_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L33_;
  }

L33_:;
  // r15 = `$<-`(l2, <sym center>, z1)
  SEXP Rsh_Fir_array_args29[3];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args29[2] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L31(z3, r15)
  // L31(z3, r15)
  Rsh_Fir_reg_z5_ = Rsh_Fir_reg_z3_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r15_;
  goto L31_;

L34_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L31(z1, dx2)
  // L31(z1, dx2)
  Rsh_Fir_reg_z5_ = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L31_;

L36_:;
  // sym4 = ldf attr
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base4 = ldf attr in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard4 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L37_:;
  // r16 = dyn base3(<lang `<-`(z, attr(var, "scaled:scale"))>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L8(r16)
  // L8(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L8_;

L38_:;
  // var3 = ld var
  Rsh_Fir_reg_var3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L40() else D6()
  // L40()
  goto L40_;

L39_:;
  // r18 = dyn base4(<sym var>, "scaled:scale")
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L9(r18)
  // L9(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L9_;

D6_:;
  // deopt 37 [var3]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_var3_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L40_:;
  // var4 = force? var3
  Rsh_Fir_reg_var4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_var3_);
  // checkMissing(var4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_var4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r20 = dyn attr1(var4, "scaled:scale")
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_var4_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L41() else D7()
  // L41()
  goto L41_;

D7_:;
  // deopt 41 [r20]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L41_:;
  // goto L9(r20)
  // L9(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L9_;

L42_:;
  // z7 = ld z
  Rsh_Fir_reg_z7_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L43() else D8()
  // L43()
  goto L43_;

D8_:;
  // deopt 45 [z7]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_z7_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L43_:;
  // z8 = force? z7
  Rsh_Fir_reg_z8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z7_);
  // checkMissing(z8)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_z8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // l3 = ld call
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // c7 = `is.object`(l3)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if c7 then L45() else L46(z8, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L45()
    goto L45_;
  } else {
  // L46(z8, l3)
    Rsh_Fir_reg_z10_ = Rsh_Fir_reg_z8_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L46_;
  }

L44_:;
  // st call = dx5
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // goto L11()
  // L11()
  goto L11_;

L45_:;
  // dr4 = tryDispatchBuiltin.0("$<-", l3, z8)
  SEXP Rsh_Fir_array_args38[3];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args38[2] = Rsh_Fir_reg_z8_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args38);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc2 then L47() else L46(z8, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L47()
    goto L47_;
  } else {
  // L46(z8, dr4)
    Rsh_Fir_reg_z10_ = Rsh_Fir_reg_z8_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr4_;
    goto L46_;
  }

L46_:;
  // r22 = `$<-`(l5, <sym scale>, z8)
  SEXP Rsh_Fir_array_args40[3];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_z8_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // goto L44(z10, r22)
  // L44(z10, r22)
  Rsh_Fir_reg_z12_ = Rsh_Fir_reg_z10_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r22_;
  goto L44_;

L47_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L44(z8, dx4)
  // L44(z8, dx4)
  Rsh_Fir_reg_z12_ = Rsh_Fir_reg_z8_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L44_;

D9_:;
  // deopt 52 [call5]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_call5_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L49_:;
  // call6 = force? call5
  Rsh_Fir_reg_call6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call5_);
  // checkMissing(call6)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_call6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return call6
  return Rsh_Fir_reg_call6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
