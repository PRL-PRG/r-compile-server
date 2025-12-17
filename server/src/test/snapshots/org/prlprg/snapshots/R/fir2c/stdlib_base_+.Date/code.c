#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4284372013_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4284372013_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4284372013_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4284372013_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4284372013_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r1_;  // r1

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4284372013
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4284372013_, RHO, CCP);
  // l = ld `.Date`
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 0), RHO);
  // ___ = ldf `+<-`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 3 [r, l, r]
  SEXP Rsh_Fir_array_deopt_stack[3];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r;
  Rsh_Fir_array_deopt_stack[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack[2] = Rsh_Fir_reg_r;
  Rsh_Fir_deopt(3, 3, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn ___(l, NULL, r)
  SEXP Rsh_Fir_array_args[3];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args[2] = Rsh_Fir_reg_r;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 5 [r, r1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L1_:;
  // st `.Date` = r1
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner4284372013_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4284372013 dynamic dispatch ([e1, e2])

  return Rsh_Fir_user_version_inner4284372013_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4284372013_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4284372013 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner4284372013/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_e1_;  // e1
  SEXP Rsh_Fir_reg_e2_;  // e2
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_nargs;  // nargs
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_e3_;  // e3
  SEXP Rsh_Fir_reg_e4_;  // e4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_e5_;  // e5
  SEXP Rsh_Fir_reg_e6_;  // e6
  SEXP Rsh_Fir_reg_inherits;  // inherits
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_e7_;  // e7
  SEXP Rsh_Fir_reg_e8_;  // e8
  SEXP Rsh_Fir_reg_inherits1_;  // inherits1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_e9_;  // e9
  SEXP Rsh_Fir_reg_e10_;  // e10
  SEXP Rsh_Fir_reg_inherits2_;  // inherits2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_coerceTimeUnit;  // coerceTimeUnit
  SEXP Rsh_Fir_reg_e11_;  // e11
  SEXP Rsh_Fir_reg_e12_;  // e12
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_e13_;  // e13
  SEXP Rsh_Fir_reg_e14_;  // e14
  SEXP Rsh_Fir_reg_inherits3_;  // inherits3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_coerceTimeUnit1_;  // coerceTimeUnit1
  SEXP Rsh_Fir_reg_e15_;  // e15
  SEXP Rsh_Fir_reg_e16_;  // e16
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg__Date;  // _Date
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_e17_;  // e17
  SEXP Rsh_Fir_reg_e18_;  // e18
  SEXP Rsh_Fir_reg_unclass;  // unclass
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_e19_;  // e19
  SEXP Rsh_Fir_reg_e20_;  // e20
  SEXP Rsh_Fir_reg_unclass1_;  // unclass1
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r38_;  // r38

  // Bind parameters
  Rsh_Fir_reg_e1_ = PARAMS[0];
  Rsh_Fir_reg_e2_ = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st e1 = e1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_e1_, RHO);
  (void)(Rsh_Fir_reg_e1_);
  // st e2 = e2
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_e2_, RHO);
  (void)(Rsh_Fir_reg_e2_);
  // r = clos inner2501545716
  Rsh_Fir_reg_r1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st coerceTimeUnit = r
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // sym = ldf nargs
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf nargs in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L0_:;
  // r4 = `==`(r2, 1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L17() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L17()
    goto L17_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // sym1 = ldf inherits
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf inherits in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L3_:;
  // c1 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c1 then L25() else L4(c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L25()
    goto L25_;
  } else {
  // L4(c1)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c1_;
    goto L4_;
  }

L4_:;
  // c10 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c10 then L31() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L31()
    goto L31_;
  } else {
  // L6()
    goto L6_;
  }

L5_:;
  // c7 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c8 = `&&`(c6, c7)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L4(c8)
  // L4(c8)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c8_;
  goto L4_;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // sym3 = ldf inherits
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base3 = ldf inherits in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard3 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L8_:;
  // c11 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c11 then L39() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L39()
    goto L39_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // sym4 = ldf inherits
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base4 = ldf inherits in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard4 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L11_:;
  // c12 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c12 then L47() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L47()
    goto L47_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // _Date = ldf `.Date`
  Rsh_Fir_reg__Date = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L51() else D16()
  // L51()
  goto L51_;

L14_:;
  // nargs = ldf nargs in base
  Rsh_Fir_reg_nargs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r3 = dyn nargs()
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nargs, 0, NULL, NULL, CCP, RHO);
  // check L16() else D0()
  // L16()
  goto L16_;

L15_:;
  // r1 = dyn base()
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_1;
  goto L0_;

D0_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L17_:;
  // e3 = ld e1
  Rsh_Fir_reg_e3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L18() else D1()
  // L18()
  goto L18_;

D1_:;
  // deopt 9 [e3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_e3_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L18_:;
  // e4 = force? e3
  Rsh_Fir_reg_e4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e3_);
  // checkMissing(e4)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_e4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return e4
  return Rsh_Fir_reg_e4_;

L21_:;
  // e5 = ld e1
  Rsh_Fir_reg_e5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L23() else D2()
  // L23()
  goto L23_;

L22_:;
  // r7 = dyn base1(<sym e1>, "Date")
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L3_;

D2_:;
  // deopt 16 [e5]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_e5_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L23_:;
  // e6 = force? e5
  Rsh_Fir_reg_e6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e5_);
  // checkMissing(e6)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_e6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r9 = dyn inherits(e6, "Date", FALSE)
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_e6_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L24() else D3()
  // L24()
  goto L24_;

D3_:;
  // deopt 21 [r9]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L3(r9)
  // L3(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L3_;

L25_:;
  // sym2 = ldf inherits
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf inherits in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard2 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L26_:;
  // e7 = ld e2
  Rsh_Fir_reg_e7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L28() else D4()
  // L28()
  goto L28_;

L27_:;
  // r10 = dyn base2(<sym e2>, "Date")
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L5(c1, r10)
  // L5(c1, r10)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L5_;

D4_:;
  // deopt 24 [c1, e7]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_e7_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L28_:;
  // e8 = force? e7
  Rsh_Fir_reg_e8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e7_);
  // checkMissing(e8)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_e8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // inherits1 = ldf inherits in base
  Rsh_Fir_reg_inherits1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r12 = dyn inherits1(e8, "Date", FALSE)
  SEXP Rsh_Fir_array_args20[3];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_e8_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits1_, 3, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L29() else D5()
  // L29()
  goto L29_;

D5_:;
  // deopt 29 [c1, r12]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L5(c1, r12)
  // L5(c1, r12)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L5_;

L31_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L32() else D6()
  // L32()
  goto L32_;

D6_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // r13 = dyn stop("binary + is not defined for \"Date\" objects")
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L33() else D7()
  // L33()
  goto L33_;

D7_:;
  // deopt 34 [r13]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L7()
  // L7()
  goto L7_;

L35_:;
  // e9 = ld e1
  Rsh_Fir_reg_e9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L37() else D8()
  // L37()
  goto L37_;

L36_:;
  // r15 = dyn base3(<sym e1>, "difftime")
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L8(r15)
  // L8(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L8_;

D8_:;
  // deopt 39 [e9]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_e9_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L37_:;
  // e10 = force? e9
  Rsh_Fir_reg_e10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e9_);
  // checkMissing(e10)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_e10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // inherits2 = ldf inherits in base
  Rsh_Fir_reg_inherits2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r17 = dyn inherits2(e10, "difftime", FALSE)
  SEXP Rsh_Fir_array_args24[3];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_e10_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits2_, 3, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L38() else D9()
  // L38()
  goto L38_;

D9_:;
  // deopt 44 [r17]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L8(r17)
  // L8(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L8_;

L39_:;
  // coerceTimeUnit = ldf coerceTimeUnit
  Rsh_Fir_reg_coerceTimeUnit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L40() else D10()
  // L40()
  goto L40_;

D10_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p = prom<V +>{
  //   e11 = ld e1;
  //   e12 = force? e11;
  //   checkMissing(e12);
  //   return e12;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4284372013_, CCP, RHO);
  // r19 = dyn coerceTimeUnit(p)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_coerceTimeUnit, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L41() else D11()
  // L41()
  goto L41_;

D11_:;
  // deopt 48 [r19]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L41_:;
  // st e1 = r19
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // goto L10()
  // L10()
  goto L10_;

L43_:;
  // e13 = ld e2
  Rsh_Fir_reg_e13_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L45() else D12()
  // L45()
  goto L45_;

L44_:;
  // r21 = dyn base4(<sym e2>, "difftime")
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L11(r21)
  // L11(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L11_;

D12_:;
  // deopt 54 [e13]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_e13_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L45_:;
  // e14 = force? e13
  Rsh_Fir_reg_e14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e13_);
  // checkMissing(e14)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_e14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // inherits3 = ldf inherits in base
  Rsh_Fir_reg_inherits3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r23 = dyn inherits3(e14, "difftime", FALSE)
  SEXP Rsh_Fir_array_args29[3];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_e14_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits3_, 3, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L46() else D13()
  // L46()
  goto L46_;

D13_:;
  // deopt 59 [r23]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L46_:;
  // goto L11(r23)
  // L11(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L11_;

L47_:;
  // coerceTimeUnit1 = ldf coerceTimeUnit
  Rsh_Fir_reg_coerceTimeUnit1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L48() else D14()
  // L48()
  goto L48_;

D14_:;
  // deopt 61 []
  Rsh_Fir_deopt(61, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // p1 = prom<V +>{
  //   e15 = ld e2;
  //   e16 = force? e15;
  //   checkMissing(e16);
  //   return e16;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4284372013_1, CCP, RHO);
  // r25 = dyn coerceTimeUnit1(p1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_coerceTimeUnit1_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L49() else D15()
  // L49()
  goto L49_;

D15_:;
  // deopt 63 [r25]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L49_:;
  // st e2 = r25
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // goto L13()
  // L13()
  goto L13_;

D16_:;
  // deopt 68 []
  Rsh_Fir_deopt(68, 0, NULL, CCP, RHO);
  return R_NilValue;

L51_:;
  // p2 = prom<V +>{
  //   sym5 = ldf unclass;
  //   base5 = ldf unclass in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L2() else L3();
  // L0(r28):
  //   sym6 = ldf unclass;
  //   base6 = ldf unclass in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L4() else L5();
  // L2():
  //   e17 = ld e1;
  //   e18 = force? e17;
  //   checkMissing(e18);
  //   unclass = ldf unclass in base;
  //   r29 = dyn unclass(e18);
  //   goto L0(r29);
  // L3():
  //   r27 = dyn base5(<sym e1>);
  //   goto L0(r27);
  // L1(r33, r34):
  //   r36 = `+`(r33, r34);
  //   return r36;
  // L4():
  //   e19 = ld e2;
  //   e20 = force? e19;
  //   checkMissing(e20);
  //   unclass1 = ldf unclass in base;
  //   r35 = dyn unclass1(e20);
  //   goto L1(r28, r35);
  // L5():
  //   r32 = dyn base6(<sym e2>);
  //   goto L1(r28, r32);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4284372013_2, CCP, RHO);
  // r38 = dyn _Date(p2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__Date, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L52() else D17()
  // L52()
  goto L52_;

D17_:;
  // deopt 70 [r38]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L52_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r38
  return Rsh_Fir_reg_r38_;
}
SEXP Rsh_Fir_user_promise_inner4284372013_(SEXP CCP, SEXP RHO) {
  // e11 = ld e1
  Rsh_Fir_reg_e11_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // e12 = force? e11
  Rsh_Fir_reg_e12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e11_);
  // checkMissing(e12)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_e12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return e12
  return Rsh_Fir_reg_e12_;
}
SEXP Rsh_Fir_user_promise_inner4284372013_1(SEXP CCP, SEXP RHO) {
  // e15 = ld e2
  Rsh_Fir_reg_e15_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // e16 = force? e15
  Rsh_Fir_reg_e16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e15_);
  // checkMissing(e16)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_e16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return e16
  return Rsh_Fir_reg_e16_;
}
SEXP Rsh_Fir_user_promise_inner4284372013_2(SEXP CCP, SEXP RHO) {
  // sym5 = ldf unclass
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base5 = ldf unclass in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard5 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // sym6 = ldf unclass
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base6 = ldf unclass in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard6 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L1_:;
  // r36 = `+`(r33, r34)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // return r36
  return Rsh_Fir_reg_r36_;

L2_:;
  // e17 = ld e1
  Rsh_Fir_reg_e17_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // e18 = force? e17
  Rsh_Fir_reg_e18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e17_);
  // checkMissing(e18)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_e18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // unclass = ldf unclass in base
  Rsh_Fir_reg_unclass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r29 = dyn unclass(e18)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_e18_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L0_;

L3_:;
  // r27 = dyn base5(<sym e1>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L0_;

L4_:;
  // e19 = ld e2
  Rsh_Fir_reg_e19_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // e20 = force? e19
  Rsh_Fir_reg_e20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e19_);
  // checkMissing(e20)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_e20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // unclass1 = ldf unclass in base
  Rsh_Fir_reg_unclass1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r35 = dyn unclass1(e20)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_e20_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass1_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L1(r28, r35)
  // L1(r28, r35)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L1_;

L5_:;
  // r32 = dyn base6(<sym e2>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L1(r28, r32)
  // L1(r28, r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r32_;
  goto L1_;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_as_vector;  // as_vector
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_r1_2;  // r1
  SEXP Rsh_Fir_reg_round;  // round
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r4_1;  // r4

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // as_vector = ldf `as.vector`
  Rsh_Fir_reg_as_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   sym = ldf round;
  //   base = ldf round in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   round = ldf round in base;
  //   r2 = dyn round(<lang switch(attr(x, "units"), secs=`/`(x, 86400.0), mins=`/`(x, 1440.0), hours=`/`(x, 24.0), days=x, weeks=`*`(7.0, x))>);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<lang switch(attr(x, "units"), secs=`/`(x, 86400.0), mins=`/`(x, 1440.0), hours=`/`(x, 24.0), days=x, weeks=`*`(7.0, x))>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_, CCP, RHO);
  // r4 = dyn as_vector(p)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_vector, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 3 [r4]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_1;
}
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO) {
  // sym = ldf round
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base = ldf round in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
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
  return Rsh_Fir_reg_r1_2;

L1_:;
  // round = ldf round in base
  Rsh_Fir_reg_round = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r2 = dyn round(<lang switch(attr(x, "units"), secs=`/`(x, 86400.0), mins=`/`(x, 1440.0), hours=`/`(x, 24.0), days=x, weeks=`*`(7.0, x))>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_round, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_2 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base(<lang switch(attr(x, "units"), secs=`/`(x, 86400.0), mins=`/`(x, 1440.0), hours=`/`(x, 24.0), days=x, weeks=`*`(7.0, x))>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_2 = Rsh_Fir_reg_r2;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
