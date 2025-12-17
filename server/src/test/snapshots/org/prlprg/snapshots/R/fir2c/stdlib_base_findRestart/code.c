#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1861488063_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1861488063_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1861488063_(SEXP CCP, SEXP RHO);
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
  // r = clos inner1861488063
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1861488063_, RHO, CCP);
  // st findRestart = r
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
SEXP Rsh_Fir_user_function_inner1861488063_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1861488063 dynamic dispatch ([name, cond])

  return Rsh_Fir_user_version_inner1861488063_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1861488063_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1861488063 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1861488063/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_name;  // name
  SEXP Rsh_Fir_reg_cond;  // cond
  SEXP Rsh_Fir_reg_cond_isMissing;  // cond_isMissing
  SEXP Rsh_Fir_reg_cond_orDefault;  // cond_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg__getRestart;  // _getRestart
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_name1_;  // name1
  SEXP Rsh_Fir_reg_name2_;  // name2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_name4_;  // name4
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_name6_;  // name6
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_cond1_;  // cond1
  SEXP Rsh_Fir_reg_cond2_;  // cond2
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_c48_;  // c48
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_cond3_;  // cond3
  SEXP Rsh_Fir_reg_cond4_;  // cond4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c49_;  // c49
  SEXP Rsh_Fir_reg_c50_;  // c50
  SEXP Rsh_Fir_reg_c53_;  // c53
  SEXP Rsh_Fir_reg_c54_;  // c54
  SEXP Rsh_Fir_reg_c56_;  // c56
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg_r34_;  // r34

  // Bind parameters
  Rsh_Fir_reg_name = PARAMS[0];
  Rsh_Fir_reg_cond = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st name = name
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_name, RHO);
  (void)(Rsh_Fir_reg_name);
  // cond_isMissing = missing.0(cond)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_cond;
  Rsh_Fir_reg_cond_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if cond_isMissing then L0(NULL) else L0(cond)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_cond_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_cond_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(cond)
    Rsh_Fir_reg_cond_orDefault = Rsh_Fir_reg_cond;
    goto L0_;
  }

L0_:;
  // st cond = cond_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_cond_orDefault, RHO);
  (void)(Rsh_Fir_reg_cond_orDefault);
  // st i = 1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_const(CCP, 4), RHO);
  (void)(Rsh_const(CCP, 4));
  // goto L12()
  // L12()
  goto L12_;

L1_:;
  // st r = r1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L2_:;
  // c1 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L20() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L20()
    goto L20_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // name1 = ld name
  Rsh_Fir_reg_name1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L23() else D3()
  // L23()
  goto L23_;

L5_:;
  // r14 = `==`(name6, dx1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_name6_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c3 then L28() else L6(c3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L28()
    goto L28_;
  } else {
  // L6(c3)
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c3_;
    goto L6_;
  }

L6_:;
  // c56 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c56_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c56 then L50() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c56_)) {
  // L50()
    goto L50_;
  } else {
  // L11()
    goto L11_;
  }

L7_:;
  // c10 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c10 then L8(c8, c10) else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L8(c8, c10)
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c8_;
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c10_;
    goto L8_;
  } else {
  // L32()
    goto L32_;
  }

L8_:;
  // c35 = `as.logical`(c12)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c35 then L10(c11, c35) else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L10(c11, c35)
    Rsh_Fir_reg_c36_ = Rsh_Fir_reg_c11_;
    Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c35_;
    goto L10_;
  } else {
  // L41()
    goto L41_;
  }

L9_:;
  // c31 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c32 = `||`(c20, c31)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_c31_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L8(c19, c32)
  // L8(c19, c32)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c19_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c32_;
  goto L8_;

L10_:;
  // c53 = `as.logical`(c37)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c37_;
  Rsh_Fir_reg_c53_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c54 = `&&`(c36, c53)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c36_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_c53_;
  Rsh_Fir_reg_c54_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L6(c54)
  // L6(c54)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c54_;
  goto L6_;

L11_:;
  // i2 = ld i
  Rsh_Fir_reg_i2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L54() else D10()
  // L54()
  goto L54_;

L12_:;
  // sym = ldf `.Internal`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf `.Internal` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L13_:;
  // i = ld i
  Rsh_Fir_reg_i = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

L14_:;
  // r = dyn base(<lang .getRestart(i)>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 5 [i]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_i;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L15_:;
  // i1 = force? i
  Rsh_Fir_reg_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i);
  // checkMissing(i1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_i1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // _getRestart = ldf `.getRestart` in base
  Rsh_Fir_reg__getRestart = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r2 = dyn _getRestart(i1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__getRestart, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

D1_:;
  // deopt 8 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

L17_:;
  // r5 = ld r
  Rsh_Fir_reg_r5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L19() else D2()
  // L19()
  goto L19_;

L18_:;
  // r3 = dyn base1(<sym r>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D2_:;
  // deopt 11 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L19_:;
  // r6 = force? r5
  Rsh_Fir_reg_r6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r5_);
  // checkMissing(r6)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // c = `==`(r6, NULL)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L2(c)
  // L2(c)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_c;
  goto L2_;

L20_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 2);

D3_:;
  // deopt 17 [name1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_name1_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L23_:;
  // name2 = force? name1
  Rsh_Fir_reg_name2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name1_);
  // checkMissing(name2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_name2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // r9 = ld r
  Rsh_Fir_reg_r9_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L24() else D4()
  // L24()
  goto L24_;

D4_:;
  // deopt 18 [name2, r9]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_name2_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(18, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L24_:;
  // r10 = force? r9
  Rsh_Fir_reg_r10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r9_);
  // checkMissing(r10)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(r10)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c2 then L25() else L26(name2, r10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L25()
    goto L25_;
  } else {
  // L26(name2, r10)
    Rsh_Fir_reg_name4_ = Rsh_Fir_reg_name2_;
    Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r10_;
    goto L26_;
  }

L25_:;
  // dr = tryDispatchBuiltin.1("[[", r10)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if dc then L27() else L26(name2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L27()
    goto L27_;
  } else {
  // L26(name2, dr)
    Rsh_Fir_reg_name4_ = Rsh_Fir_reg_name2_;
    Rsh_Fir_reg_r12_ = Rsh_Fir_reg_dr;
    goto L26_;
  }

L26_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r13 = dyn __(r12, 1)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L5(name4, r13)
  // L5(name4, r13)
  Rsh_Fir_reg_name6_ = Rsh_Fir_reg_name4_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r13_;
  goto L5_;

L27_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L5(name2, dx)
  // L5(name2, dx)
  Rsh_Fir_reg_name6_ = Rsh_Fir_reg_name2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L5_;

L28_:;
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard2 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L29_:;
  // cond1 = ld cond
  Rsh_Fir_reg_cond1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L31() else D5()
  // L31()
  goto L31_;

L30_:;
  // r15 = dyn base2(<sym cond>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L7(c3, r15)
  // L7(c3, r15)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L7_;

D5_:;
  // deopt 25 [c3, cond1]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_cond1_;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L31_:;
  // cond2 = force? cond1
  Rsh_Fir_reg_cond2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cond1_);
  // checkMissing(cond2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_cond2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // c9 = `==`(cond2, NULL)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_cond2_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L7(c3, c9)
  // L7(c3, c9)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_c9_;
  goto L7_;

L32_:;
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard3 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L33_:;
  // r19 = ld r
  Rsh_Fir_reg_r19_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L35() else D6()
  // L35()
  goto L35_;

L34_:;
  // r17 = dyn base3(<lang `$`(r, test)>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L9(c8, c10, r17)
  // L9(c8, c10, r17)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L9_;

D6_:;
  // deopt 29 [c8, c10, r19]
  SEXP Rsh_Fir_array_deopt_stack6[3];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(29, 3, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L35_:;
  // r20 = force? r19
  Rsh_Fir_reg_r20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r19_);
  // checkMissing(r20)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c21 = `is.object`(r20)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c21 then L37() else L38(c8, c10, r20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L37()
    goto L37_;
  } else {
  // L38(c8, c10, r20)
    Rsh_Fir_reg_c24_ = Rsh_Fir_reg_c8_;
    Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c10_;
    Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r20_;
    goto L38_;
  }

L36_:;
  // c30 = `==`(dx3, NULL)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L9(c28, c29, c30)
  // L9(c28, c29, c30)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c28_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c29_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_c30_;
  goto L9_;

L37_:;
  // dr2 = tryDispatchBuiltin.1("$", r20)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc1 then L39() else L38(c8, c10, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L39()
    goto L39_;
  } else {
  // L38(c8, c10, dr2)
    Rsh_Fir_reg_c24_ = Rsh_Fir_reg_c8_;
    Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c10_;
    Rsh_Fir_reg_r22_ = Rsh_Fir_reg_dr2_;
    goto L38_;
  }

L38_:;
  // r23 = `$`(r22, <sym test>)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L36(c24, c25, r23)
  // L36(c24, c25, r23)
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c25_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r23_;
  goto L36_;

L39_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L36(c8, c10, dx2)
  // L36(c8, c10, dx2)
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L36_;

L41_:;
  // r24 = ld r
  Rsh_Fir_reg_r24_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L42() else D7()
  // L42()
  goto L42_;

D7_:;
  // deopt 34 [c11, c35, r24]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_c35_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(34, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L42_:;
  // r25 = force? r24
  Rsh_Fir_reg_r25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r24_);
  // checkMissing(r25)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c40 = `is.object`(r25)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c40 then L44() else L45(c11, c35, r25)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L44()
    goto L44_;
  } else {
  // L45(c11, c35, r25)
    Rsh_Fir_reg_c43_ = Rsh_Fir_reg_c11_;
    Rsh_Fir_reg_c44_ = Rsh_Fir_reg_c35_;
    Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r25_;
    goto L45_;
  }

L43_:;
  // checkFun.0(dx5)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dx5_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args41));
  // dx6 = dx5 as cls
  Rsh_Fir_reg_dx6_ = Rsh_Fir_cast(Rsh_Fir_reg_dx5_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p = prom<V +>{
  //   cond3 = ld cond;
  //   cond4 = force? cond3;
  //   checkMissing(cond4);
  //   return cond4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1861488063_, CCP, RHO);
  // r30 = dyn dx6(p)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dx6_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L47() else D8()
  // L47()
  goto L47_;

L44_:;
  // dr4 = tryDispatchBuiltin.1("$", r25)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args44);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if dc2 then L46() else L45(c11, c35, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L46()
    goto L46_;
  } else {
  // L45(c11, c35, dr4)
    Rsh_Fir_reg_c43_ = Rsh_Fir_reg_c11_;
    Rsh_Fir_reg_c44_ = Rsh_Fir_reg_c35_;
    Rsh_Fir_reg_r27_ = Rsh_Fir_reg_dr4_;
    goto L45_;
  }

L45_:;
  // r28 = `$`(r27, <sym test>)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L43(c43, c44, r28)
  // L43(c43, c44, r28)
  Rsh_Fir_reg_c47_ = Rsh_Fir_reg_c43_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_reg_c44_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r28_;
  goto L43_;

L46_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L43(c11, c35, dx4)
  // L43(c11, c35, dx4)
  Rsh_Fir_reg_c47_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_reg_c35_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L43_;

D8_:;
  // deopt 39 [c47, c48, r30]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c47_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_c48_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(39, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L47_:;
  // c49 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // c50 = `||`(c48, c49)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_c48_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_c49_;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L10(c47, c50)
  // L10(c47, c50)
  Rsh_Fir_reg_c36_ = Rsh_Fir_reg_c47_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c50_;
  goto L10_;

L50_:;
  // r31 = ld r
  Rsh_Fir_reg_r31_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L51() else D9()
  // L51()
  goto L51_;

D9_:;
  // deopt 42 [r31]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L51_:;
  // r32 = force? r31
  Rsh_Fir_reg_r32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r31_);
  // checkMissing(r32)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r32
  return Rsh_Fir_reg_r32_;

D10_:;
  // deopt 45 [i2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L54_:;
  // i3 = force? i2
  Rsh_Fir_reg_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i2_);
  // checkMissing(i3)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_i3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // r34 = `+`(i3, 1)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_i3_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // st i = r34
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // goto L12()
  // L12()
  goto L12_;
}
SEXP Rsh_Fir_user_promise_inner1861488063_(SEXP CCP, SEXP RHO) {
  // cond3 = ld cond
  Rsh_Fir_reg_cond3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // cond4 = force? cond3
  Rsh_Fir_reg_cond4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cond3_);
  // checkMissing(cond4)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_cond4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return cond4
  return Rsh_Fir_reg_cond4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
