#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2547802578_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2547802578_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2547802578_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2547802578_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2547802578_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2547802578_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2547802578_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2547802578_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2547802578_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2547802578_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2547802578_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2547802578_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2547802578_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3175346480_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3175346480_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2547802578
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2547802578_, RHO, CCP);
  // st `all.equal.POSIXt` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner2547802578_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2547802578 dynamic dispatch ([target, current, `...`, tolerance, scale, `check.tzone`])

  return Rsh_Fir_user_version_inner2547802578_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2547802578_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2547802578 version 0 (*, *, dots, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner2547802578/0: expected 6, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_target;
  SEXP Rsh_Fir_reg_current;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_tolerance;
  SEXP Rsh_Fir_reg_scale;
  SEXP Rsh_Fir_reg_check_tzone;
  SEXP Rsh_Fir_reg_tolerance_isMissing;
  SEXP Rsh_Fir_reg_tolerance_orDefault;
  SEXP Rsh_Fir_reg_check_tzone_isMissing;
  SEXP Rsh_Fir_reg_check_tzone_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_target1_;
  SEXP Rsh_Fir_reg_target2_;
  SEXP Rsh_Fir_reg_inherits;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_current1_;
  SEXP Rsh_Fir_reg_current2_;
  SEXP Rsh_Fir_reg_inherits1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_as_POSIXct;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_as_POSIXct1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_check_tzone1_;
  SEXP Rsh_Fir_reg_check_tzone2_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_tz;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_tz1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_isTRUE;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_sprintf;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_attr__;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_attr__1_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_all_equal_numeric;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_isTRUE1_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_msg;
  SEXP Rsh_Fir_reg_msg1_;
  SEXP Rsh_Fir_reg_val2_;
  SEXP Rsh_Fir_reg_val3_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_msg2_;
  SEXP Rsh_Fir_reg_msg3_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_msg4_;
  SEXP Rsh_Fir_reg_msg5_;

  // Bind parameters
  Rsh_Fir_reg_target = PARAMS[0];
  Rsh_Fir_reg_current = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];
  Rsh_Fir_reg_tolerance = PARAMS[3];
  Rsh_Fir_reg_scale = PARAMS[4];
  Rsh_Fir_reg_check_tzone = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st target = target
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_target, RHO);
  (void)(Rsh_Fir_reg_target);
  // st current = current
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_current, RHO);
  (void)(Rsh_Fir_reg_current);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // tolerance_isMissing = missing.0(tolerance)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_tolerance;
  Rsh_Fir_reg_tolerance_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if tolerance_isMissing then L0(0.001) else L0(tolerance)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_tolerance_isMissing)) {
  // L0(0.001)
    Rsh_Fir_reg_tolerance_orDefault = Rsh_const(CCP, 4);
    goto L0_;
  } else {
  // L0(tolerance)
    Rsh_Fir_reg_tolerance_orDefault = Rsh_Fir_reg_tolerance;
    goto L0_;
  }

L0_:;
  // st tolerance = tolerance_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_tolerance_orDefault, RHO);
  (void)(Rsh_Fir_reg_tolerance_orDefault);
  // st scale = scale
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_scale, RHO);
  (void)(Rsh_Fir_reg_scale);
  // check_tzone_isMissing = missing.0(check_tzone)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_check_tzone;
  Rsh_Fir_reg_check_tzone_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if check_tzone_isMissing then L1(TRUE) else L1(check_tzone)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_check_tzone_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_check_tzone_orDefault = Rsh_const(CCP, 7);
    goto L1_;
  } else {
  // L1(check_tzone)
    Rsh_Fir_reg_check_tzone_orDefault = Rsh_Fir_reg_check_tzone;
    goto L1_;
  }

L1_:;
  // st `check.tzone` = check_tzone_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_check_tzone_orDefault, RHO);
  (void)(Rsh_Fir_reg_check_tzone_orDefault);
  // sym = ldf inherits
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf inherits in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L2_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args3);
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args4);
  // if c then L21() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L21()
    goto L21_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // sym1 = ldf inherits
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf inherits in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L5_:;
  // r9 = `!`(r7)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args6);
  // c1 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args7);
  // if c1 then L28() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L28()
    goto L28_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // as_POSIXct = ldf `as.POSIXct`
  Rsh_Fir_reg_as_POSIXct = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L31() else D4()
  // L31()
  goto L31_;

L8_:;
  // goto L11()
  // L11()
  goto L11_;

L9_:;
  // goto L10(NULL)
  // L10(NULL)
  Rsh_Fir_reg_r28_ = Rsh_const(CCP, 11);
  goto L10_;

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // l = ld current
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L48() else D17()
  // L48()
  goto L48_;

L12_:;
  // goto L14()
  // L14()
  goto L14_;

L13_:;
  // st msg = r40
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard3 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L15_:;
  // c7 = `as.logical`(r44)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args9);
  // if c7 then L66() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L66()
    goto L66_;
  } else {
  // L16()
    goto L16_;
  }

L16_:;
  // msg4 = ld msg
  Rsh_Fir_reg_msg4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L68() else D29()
  // L68()
  goto L68_;

L17_:;
  // target1 = ld target
  Rsh_Fir_reg_target1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L19() else D0()
  // L19()
  goto L19_;

L18_:;
  // r = dyn base(<sym target>, "POSIXt")
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 2 [target1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_target1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L19_:;
  // target2 = force? target1
  Rsh_Fir_reg_target2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target1_);
  // checkMissing(target2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_target2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r2 = dyn inherits(target2, "POSIXt", FALSE)
  SEXP Rsh_Fir_array_args12[3];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_target2_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L20() else D1()
  // L20()
  goto L20_;

D1_:;
  // deopt 7 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L2_;

L21_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return "'target' is not a POSIXt"
  return Rsh_const(CCP, 17);

L24_:;
  // current1 = ld current
  Rsh_Fir_reg_current1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L26() else D2()
  // L26()
  goto L26_;

L25_:;
  // r6 = dyn base1(<sym current>, "POSIXt")
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L5(r6)
  // L5(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L5_;

D2_:;
  // deopt 16 [current1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_current1_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L26_:;
  // current2 = force? current1
  Rsh_Fir_reg_current2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current1_);
  // checkMissing(current2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_current2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // inherits1 = ldf inherits in base
  Rsh_Fir_reg_inherits1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r8 = dyn inherits1(current2, "POSIXt", FALSE)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_current2_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits1_, 3, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L27() else D3()
  // L27()
  goto L27_;

D3_:;
  // deopt 21 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L5_;

L28_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return "'current' is not a POSIXt"
  return Rsh_const(CCP, 18);

D4_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // p = prom<V +>{
  //   target3 = ld target;
  //   target4 = force? target3;
  //   checkMissing(target4);
  //   return target4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2547802578_, 0, NULL, CCP, RHO);
  // r13 = dyn as_POSIXct(p)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_POSIXct, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L32() else D5()
  // L32()
  goto L32_;

D5_:;
  // deopt 31 [r13]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L32_:;
  // st target = r13
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // as_POSIXct1 = ldf `as.POSIXct`
  Rsh_Fir_reg_as_POSIXct1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L33() else D6()
  // L33()
  goto L33_;

D6_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // p1 = prom<V +>{
  //   current3 = ld current;
  //   current4 = force? current3;
  //   checkMissing(current4);
  //   return current4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2547802578_1, 0, NULL, CCP, RHO);
  // r15 = dyn as_POSIXct1(p1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_POSIXct1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L34() else D7()
  // L34()
  goto L34_;

D7_:;
  // deopt 36 [r15]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L34_:;
  // st current = r15
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // st msg = NULL
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_const(CCP, 11), RHO);
  (void)(Rsh_const(CCP, 11));
  // check_tzone1 = ld `check.tzone`
  Rsh_Fir_reg_check_tzone1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L35() else D8()
  // L35()
  goto L35_;

D8_:;
  // deopt 41 [check_tzone1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_check_tzone1_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L35_:;
  // check_tzone2 = force? check_tzone1
  Rsh_Fir_reg_check_tzone2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_check_tzone1_);
  // checkMissing(check_tzone2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_check_tzone2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // c2 = `as.logical`(check_tzone2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_check_tzone2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args21);
  // if c2 then L36() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L36()
    goto L36_;
  } else {
  // L8()
    goto L8_;
  }

L36_:;
  // r16 = clos inner3175346480
  Rsh_Fir_reg_r16_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3175346480_, RHO, CCP);
  // st tz = r16
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // tz = ldf tz
  Rsh_Fir_reg_tz = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L37() else D9()
  // L37()
  goto L37_;

D9_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L37_:;
  // p2 = prom<V +>{
  //   target5 = ld target;
  //   target6 = force? target5;
  //   checkMissing(target6);
  //   return target6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2547802578_2, 0, NULL, CCP, RHO);
  // r18 = dyn tz(p2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tz, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L38() else D10()
  // L38()
  goto L38_;

D10_:;
  // deopt 49 [r18]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L38_:;
  // st tzt = r18
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // tz1 = ldf tz
  Rsh_Fir_reg_tz1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L39() else D11()
  // L39()
  goto L39_;

D11_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // p3 = prom<V +>{
  //   current5 = ld current;
  //   current6 = force? current5;
  //   checkMissing(current6);
  //   return current6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2547802578_3, 0, NULL, CCP, RHO);
  // r20 = dyn tz1(p3)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tz1_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L40() else D12()
  // L40()
  goto L40_;

D12_:;
  // deopt 54 [r20]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L40_:;
  // st tzc = r20
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // isTRUE = ldf isTRUE
  Rsh_Fir_reg_isTRUE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L41() else D13()
  // L41()
  goto L41_;

D13_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p4 = prom<V +>{
  //   tzt = ld tzt;
  //   tzt1 = force? tzt;
  //   checkMissing(tzt1);
  //   tzc = ld tzc;
  //   tzc1 = force? tzc;
  //   checkMissing(tzc1);
  //   r21 = `==`(tzt1, tzc1);
  //   return r21;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2547802578_4, 0, NULL, CCP, RHO);
  // r23 = dyn isTRUE(p4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isTRUE, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L42() else D14()
  // L42()
  goto L42_;

D14_:;
  // deopt 59 [r23]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L42_:;
  // r24 = `!`(r23)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args30);
  // c3 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args31);
  // if c3 then L43() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L43()
    goto L43_;
  } else {
  // L9()
    goto L9_;
  }

L43_:;
  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L44() else D15()
  // L44()
  goto L44_;

D15_:;
  // deopt 62 []
  Rsh_Fir_deopt(62, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // p5 = prom<V +>{
  //   tzt2 = ld tzt;
  //   tzt3 = force? tzt2;
  //   checkMissing(tzt3);
  //   return tzt3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2547802578_5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   tzc2 = ld tzc;
  //   tzc3 = force? tzc2;
  //   checkMissing(tzc3);
  //   return tzc3;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2547802578_6, 0, NULL, CCP, RHO);
  // r27 = dyn sprintf("'tzone' attributes are inconsistent ('%s' and '%s')", p5, p6)
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args34[2] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 3, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L45() else D16()
  // L45()
  goto L45_;

D16_:;
  // deopt 66 [r27]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L45_:;
  // st msg = r27
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // goto L10(r27)
  // L10(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L10_;

D17_:;
  // deopt 75 [NULL, l, NULL]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_const(CCP, 11);
  Rsh_Fir_deopt(75, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L48_:;
  // r30 = dyn attr__(l, NULL, "tzone", NULL)
  SEXP Rsh_Fir_array_args35[4];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args35[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args35[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names10[4];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L49() else D18()
  // L49()
  goto L49_;

D18_:;
  // deopt 78 [NULL, r30]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(78, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L49_:;
  // st current = r30
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // l1 = ld target
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L50() else D19()
  // L50()
  goto L50_;

D19_:;
  // deopt 81 [NULL, l1, NULL]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_const(CCP, 11);
  Rsh_Fir_deopt(81, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L50_:;
  // r31 = dyn attr__1(l1, NULL, "tzone", NULL)
  SEXP Rsh_Fir_array_args36[4];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args36[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args36[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names11[4];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L51() else D20()
  // L51()
  goto L51_;

D20_:;
  // deopt 84 [NULL, r31]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(84, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L51_:;
  // st target = r31
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // all_equal_numeric = ldf `all.equal.numeric`
  Rsh_Fir_reg_all_equal_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L52() else D21()
  // L52()
  goto L52_;

D21_:;
  // deopt 87 []
  Rsh_Fir_deopt(87, 0, NULL, CCP, RHO);
  return R_NilValue;

L52_:;
  // p7 = prom<V +>{
  //   target7 = ld target;
  //   target8 = force? target7;
  //   checkMissing(target8);
  //   return target8;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2547802578_7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   current7 = ld current;
  //   current8 = force? current7;
  //   checkMissing(current8);
  //   return current8;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2547802578_8, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // p9 = prom<V +>{
  //   tolerance1 = ld tolerance;
  //   tolerance2 = force? tolerance1;
  //   checkMissing(tolerance2);
  //   return tolerance2;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2547802578_9, 0, NULL, CCP, RHO);
  // r35 = dyn all_equal_numeric[, , `...`, tolerance, scale](p7, p8, ddd1, p9, 1.0)
  SEXP Rsh_Fir_array_args40[5];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args40[2] = Rsh_Fir_reg_ddd1_;
  Rsh_Fir_array_args40[3] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args40[4] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names12[5];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names12[3] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names12[4] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all_equal_numeric, 5, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L53() else D22()
  // L53()
  goto L53_;

D22_:;
  // deopt 95 [r35]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L53_:;
  // st val = r35
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // isTRUE1 = ldf isTRUE
  Rsh_Fir_reg_isTRUE1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L54() else D23()
  // L54()
  goto L54_;

D23_:;
  // deopt 98 []
  Rsh_Fir_deopt(98, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // p10 = prom<V +>{
  //   val = ld val;
  //   val1 = force? val;
  //   checkMissing(val1);
  //   return val1;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2547802578_10, 0, NULL, CCP, RHO);
  // r37 = dyn isTRUE1(p10)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isTRUE1_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L55() else D24()
  // L55()
  goto L55_;

D24_:;
  // deopt 100 [r37]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L55_:;
  // r38 = `!`(r37)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args43);
  // c4 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args44);
  // if c4 then L56() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L56()
    goto L56_;
  } else {
  // L12()
    goto L12_;
  }

L56_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard2 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L57_:;
  // msg = ld msg
  Rsh_Fir_reg_msg = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L59() else D25()
  // L59()
  goto L59_;

L58_:;
  // r39 = dyn base2(<sym msg>, <sym val>)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L13(r39)
  // L13(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L13_;

D25_:;
  // deopt 104 [msg]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_msg;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L59_:;
  // msg1 = force? msg
  Rsh_Fir_reg_msg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg);
  // checkMissing(msg1)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_msg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // val2 = ld val
  Rsh_Fir_reg_val2_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L60() else D26()
  // L60()
  goto L60_;

D26_:;
  // deopt 106 [val2]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_val2_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L60_:;
  // val3 = force? val2
  Rsh_Fir_reg_val3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val2_);
  // checkMissing(val3)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_val3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r41 = dyn c5(msg1, val3)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_msg1_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_val3_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L61() else D27()
  // L61()
  goto L61_;

D27_:;
  // deopt 109 [r41]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L13(r41)
  // L13(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L13_;

L63_:;
  // msg2 = ld msg
  Rsh_Fir_reg_msg2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L65() else D28()
  // L65()
  goto L65_;

L64_:;
  // r43 = dyn base3(<sym msg>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L15(r43)
  // L15(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L15_;

D28_:;
  // deopt 114 [msg2]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_msg2_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L65_:;
  // msg3 = force? msg2
  Rsh_Fir_reg_msg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg2_);
  // checkMissing(msg3)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_msg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // c6 = `==`(msg3, NULL)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_msg3_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args52);
  // goto L15(c6)
  // L15(c6)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_c6_;
  goto L15_;

L66_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return TRUE
  return Rsh_const(CCP, 7);

D29_:;
  // deopt 119 [msg4]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_msg4_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L68_:;
  // msg5 = force? msg4
  Rsh_Fir_reg_msg5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg4_);
  // checkMissing(msg5)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_msg5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return msg5
  return Rsh_Fir_reg_msg5_;
}
SEXP Rsh_Fir_user_promise_inner2547802578_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_target3_;
  SEXP Rsh_Fir_reg_target4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2547802578/0: expected 0, got %d", NCAPTURES);

  // target3 = ld target
  Rsh_Fir_reg_target3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // target4 = force? target3
  Rsh_Fir_reg_target4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target3_);
  // checkMissing(target4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_target4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return target4
  return Rsh_Fir_reg_target4_;
}
SEXP Rsh_Fir_user_promise_inner2547802578_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_current3_;
  SEXP Rsh_Fir_reg_current4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2547802578/0: expected 0, got %d", NCAPTURES);

  // current3 = ld current
  Rsh_Fir_reg_current3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // current4 = force? current3
  Rsh_Fir_reg_current4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current3_);
  // checkMissing(current4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_current4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return current4
  return Rsh_Fir_reg_current4_;
}
SEXP Rsh_Fir_user_promise_inner2547802578_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_target5_;
  SEXP Rsh_Fir_reg_target6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2547802578/0: expected 0, got %d", NCAPTURES);

  // target5 = ld target
  Rsh_Fir_reg_target5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // target6 = force? target5
  Rsh_Fir_reg_target6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target5_);
  // checkMissing(target6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_target6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return target6
  return Rsh_Fir_reg_target6_;
}
SEXP Rsh_Fir_user_promise_inner2547802578_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_current5_;
  SEXP Rsh_Fir_reg_current6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2547802578/0: expected 0, got %d", NCAPTURES);

  // current5 = ld current
  Rsh_Fir_reg_current5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // current6 = force? current5
  Rsh_Fir_reg_current6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current5_);
  // checkMissing(current6)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_current6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return current6
  return Rsh_Fir_reg_current6_;
}
SEXP Rsh_Fir_user_promise_inner2547802578_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tzt;
  SEXP Rsh_Fir_reg_tzt1_;
  SEXP Rsh_Fir_reg_tzc;
  SEXP Rsh_Fir_reg_tzc1_;
  SEXP Rsh_Fir_reg_r21_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2547802578/0: expected 0, got %d", NCAPTURES);

  // tzt = ld tzt
  Rsh_Fir_reg_tzt = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // tzt1 = force? tzt
  Rsh_Fir_reg_tzt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tzt);
  // checkMissing(tzt1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_tzt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // tzc = ld tzc
  Rsh_Fir_reg_tzc = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // tzc1 = force? tzc
  Rsh_Fir_reg_tzc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tzc);
  // checkMissing(tzc1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_tzc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // r21 = `==`(tzt1, tzc1)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_tzt1_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_tzc1_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args28);
  // return r21
  return Rsh_Fir_reg_r21_;
}
SEXP Rsh_Fir_user_promise_inner2547802578_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tzt2_;
  SEXP Rsh_Fir_reg_tzt3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2547802578/0: expected 0, got %d", NCAPTURES);

  // tzt2 = ld tzt
  Rsh_Fir_reg_tzt2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // tzt3 = force? tzt2
  Rsh_Fir_reg_tzt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tzt2_);
  // checkMissing(tzt3)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_tzt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return tzt3
  return Rsh_Fir_reg_tzt3_;
}
SEXP Rsh_Fir_user_promise_inner2547802578_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tzc2_;
  SEXP Rsh_Fir_reg_tzc3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2547802578/0: expected 0, got %d", NCAPTURES);

  // tzc2 = ld tzc
  Rsh_Fir_reg_tzc2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // tzc3 = force? tzc2
  Rsh_Fir_reg_tzc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tzc2_);
  // checkMissing(tzc3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_tzc3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return tzc3
  return Rsh_Fir_reg_tzc3_;
}
SEXP Rsh_Fir_user_promise_inner2547802578_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_target7_;
  SEXP Rsh_Fir_reg_target8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2547802578/0: expected 0, got %d", NCAPTURES);

  // target7 = ld target
  Rsh_Fir_reg_target7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // target8 = force? target7
  Rsh_Fir_reg_target8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_target7_);
  // checkMissing(target8)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_target8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // return target8
  return Rsh_Fir_reg_target8_;
}
SEXP Rsh_Fir_user_promise_inner2547802578_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_current7_;
  SEXP Rsh_Fir_reg_current8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2547802578/0: expected 0, got %d", NCAPTURES);

  // current7 = ld current
  Rsh_Fir_reg_current7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // current8 = force? current7
  Rsh_Fir_reg_current8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_current7_);
  // checkMissing(current8)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_current8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return current8
  return Rsh_Fir_reg_current8_;
}
SEXP Rsh_Fir_user_promise_inner2547802578_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tolerance1_;
  SEXP Rsh_Fir_reg_tolerance2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2547802578/0: expected 0, got %d", NCAPTURES);

  // tolerance1 = ld tolerance
  Rsh_Fir_reg_tolerance1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // tolerance2 = force? tolerance1
  Rsh_Fir_reg_tolerance2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tolerance1_);
  // checkMissing(tolerance2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_tolerance2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return tolerance2
  return Rsh_Fir_reg_tolerance2_;
}
SEXP Rsh_Fir_user_promise_inner2547802578_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_val;
  SEXP Rsh_Fir_reg_val1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2547802578/0: expected 0, got %d", NCAPTURES);

  // val = ld val
  Rsh_Fir_reg_val = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // val1 = force? val
  Rsh_Fir_reg_val1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val);
  // checkMissing(val1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_val1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return val1
  return Rsh_Fir_reg_val1_;
}
SEXP Rsh_Fir_user_function_inner3175346480_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3175346480 dynamic dispatch ([dt])

  return Rsh_Fir_user_version_inner3175346480_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3175346480_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3175346480 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3175346480/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_dt;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r2;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_dt1_;
  SEXP Rsh_Fir_reg_dt2_;
  SEXP Rsh_Fir_reg_attr;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_tz1;
  SEXP Rsh_Fir_reg_tz1_1;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_tz3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r5_;

  // Bind parameters
  Rsh_Fir_reg_dt = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st dt = dt
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_dt, RHO);
  (void)(Rsh_Fir_reg_dt);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L0_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args55);
  // if c1 then L10() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L10()
    goto L10_;
  } else {
  // L2()
    goto L2_;
  }

L1_:;
  // st tz = r3
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r3_1, RHO);
  (void)(Rsh_Fir_reg_r3_1);
  // c = `==`(r3, NULL)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args56);
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_c1;
  goto L0_;

L2_:;
  // tz = ld tz
  Rsh_Fir_reg_tz1 = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_;

L4_:;
  // sym1 = ldf attr
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base1 = ldf attr in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard1 then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L5_:;
  // r = dyn base(<lang `<-`(tz, attr(dt, "tzone"))>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2;
  goto L0_;

L6_:;
  // dt1 = ld dt
  Rsh_Fir_reg_dt1_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L7_:;
  // r2 = dyn base1(<sym dt>, "tzone")
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r2_1;
  goto L1_;

D0_:;
  // deopt 3 [dt1]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_dt1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L8_:;
  // dt2 = force? dt1
  Rsh_Fir_reg_dt2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dt1_);
  // checkMissing(dt2)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dt2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r4 = dyn attr(dt2, "tzone")
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dt2_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r4_;
  goto L1_;

L10_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ""
  return Rsh_const(CCP, 33);

D2_:;
  // deopt 12 [tz]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_tz1;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L12_:;
  // tz1 = force? tz
  Rsh_Fir_reg_tz1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_tz1);
  // checkMissing(tz1)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_tz1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(tz1)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_tz1_1;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args63);
  // if c2 then L13() else L14(tz1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L13()
    goto L13_;
  } else {
  // L14(tz1)
    Rsh_Fir_reg_tz3_ = Rsh_Fir_reg_tz1_1;
    goto L14_;
  }

L13_:;
  // dr = tryDispatchBuiltin.1("[", tz1)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_tz1_1;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args64);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if dc then L15() else L14(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L15()
    goto L15_;
  } else {
  // L14(dr)
    Rsh_Fir_reg_tz3_ = Rsh_Fir_reg_dr;
    goto L14_;
  }

L14_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r5 = dyn __(tz3, 1)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_tz3_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r5_;
  goto L3_;

L15_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // goto L3(dx)
  // L3(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
