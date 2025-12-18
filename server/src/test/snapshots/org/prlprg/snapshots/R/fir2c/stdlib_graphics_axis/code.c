#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2989570553_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2989570553_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2989570553_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2989570553_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2989570553_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner2989570553
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2989570553_, RHO, CCP);
  // st Axis = r
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
SEXP Rsh_Fir_user_function_inner2989570553_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2989570553 dynamic dispatch ([x, at, `...`, side, labels])

  return Rsh_Fir_user_version_inner2989570553_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2989570553_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2989570553 version 0 (*, *, dots, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner2989570553/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_at;  // at
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_side;  // side
  SEXP Rsh_Fir_reg_labels;  // labels
  SEXP Rsh_Fir_reg_x_isMissing;  // x_isMissing
  SEXP Rsh_Fir_reg_x_orDefault;  // x_orDefault
  SEXP Rsh_Fir_reg_at_isMissing;  // at_isMissing
  SEXP Rsh_Fir_reg_at_orDefault;  // at_orDefault
  SEXP Rsh_Fir_reg_labels_isMissing;  // labels_isMissing
  SEXP Rsh_Fir_reg_labels_orDefault;  // labels_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_UseMethod;  // UseMethod
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_at1_;  // at1
  SEXP Rsh_Fir_reg_at2_;  // at2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_UseMethod1_;  // UseMethod1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_axis;  // axis
  SEXP Rsh_Fir_reg_side1_;  // side1
  SEXP Rsh_Fir_reg_side2_;  // side2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_at3_;  // at3
  SEXP Rsh_Fir_reg_at4_;  // at4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_labels1_;  // labels1
  SEXP Rsh_Fir_reg_labels2_;  // labels2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r15_;  // r15

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_at = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];
  Rsh_Fir_reg_side = PARAMS[3];
  Rsh_Fir_reg_labels = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // x_isMissing = missing.0(x)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_x;
  Rsh_Fir_reg_x_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if x_isMissing then L0(NULL) else L0(x)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_x_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_x_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(x)
    Rsh_Fir_reg_x_orDefault = Rsh_Fir_reg_x;
    goto L0_;
  }

L0_:;
  // st x = x_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x_orDefault, RHO);
  (void)(Rsh_Fir_reg_x_orDefault);
  // at_isMissing = missing.0(at)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_at;
  Rsh_Fir_reg_at_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if at_isMissing then L1(NULL) else L1(at)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_at_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_at_orDefault = Rsh_const(CCP, 1);
    goto L1_;
  } else {
  // L1(at)
    Rsh_Fir_reg_at_orDefault = Rsh_Fir_reg_at;
    goto L1_;
  }

L1_:;
  // st at = at_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_at_orDefault, RHO);
  (void)(Rsh_Fir_reg_at_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // st side = side
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_side, RHO);
  (void)(Rsh_Fir_reg_side);
  // labels_isMissing = missing.0(labels)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_labels;
  Rsh_Fir_reg_labels_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if labels_isMissing then L2(NULL) else L2(labels)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_labels_isMissing)) {
  // L2(NULL)
    Rsh_Fir_reg_labels_orDefault = Rsh_const(CCP, 1);
    goto L2_;
  } else {
  // L2(labels)
    Rsh_Fir_reg_labels_orDefault = Rsh_Fir_reg_labels;
    goto L2_;
  }

L2_:;
  // st labels = labels_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_labels_orDefault, RHO);
  (void)(Rsh_Fir_reg_labels_orDefault);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L3_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c1 then L12() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L12()
    goto L12_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard2 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_;

L6_:;
  // r8 = `!`(r7)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c3 then L19() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L19()
    goto L19_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // axis = ldf axis
  Rsh_Fir_reg_axis = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L23() else D2()
  // L23()
  goto L23_;

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r10
  return Rsh_Fir_reg_r10_;

L9_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L10_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L3_;

D0_:;
  // deopt 1 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L11_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // c = `==`(x2, NULL)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L3(c)
  // L3(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L3_;

L12_:;
  // sym1 = ldf UseMethod
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf UseMethod in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard1 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L13_:;
  // UseMethod = ldf UseMethod in base
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r5 = dyn UseMethod("Axis", <sym x>)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L5(r5)
  // L5(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L5_;

L14_:;
  // r3 = dyn base1("Axis", <sym x>)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L5(r3)
  // L5(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L5_;

L16_:;
  // at1 = ld at
  Rsh_Fir_reg_at1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L18() else D1()
  // L18()
  goto L18_;

L17_:;
  // r6 = dyn base2(<sym at>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L6(r6)
  // L6(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L6_;

D1_:;
  // deopt 9 [at1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_at1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L18_:;
  // at2 = force? at1
  Rsh_Fir_reg_at2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_at1_);
  // checkMissing(at2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_at2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // c2 = `==`(at2, NULL)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_at2_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L6(c2)
  // L6(c2)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_c2_;
  goto L6_;

L19_:;
  // sym3 = ldf UseMethod
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf UseMethod in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard3 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L20_:;
  // UseMethod1 = ldf UseMethod in base
  Rsh_Fir_reg_UseMethod1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r11 = dyn UseMethod1("Axis", <sym at>)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod1_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L8(r11)
  // L8(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L8_;

L21_:;
  // r9 = dyn base3("Axis", <sym at>)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L8(r9)
  // L8(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L8_;

D2_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p = prom<V +>{
  //   side1 = ld side;
  //   side2 = force? side1;
  //   checkMissing(side2);
  //   return side2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2989570553_, CCP, RHO);
  // p1 = prom<V +>{
  //   at3 = ld at;
  //   at4 = force? at3;
  //   checkMissing(at4);
  //   return at4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2989570553_1, CCP, RHO);
  // p2 = prom<V +>{
  //   labels1 = ld labels;
  //   labels2 = force? labels1;
  //   checkMissing(labels2);
  //   return labels2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2989570553_2, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // r15 = dyn axis[side, at, labels, `...`](p, p1, p2, ddd1)
  SEXP Rsh_Fir_array_args24[4];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args24[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args24[3] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names6[3] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_axis, 4, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L24() else D3()
  // L24()
  goto L24_;

D3_:;
  // deopt 25 [r15]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L24_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_inner2989570553_(SEXP CCP, SEXP RHO) {
  // side1 = ld side
  Rsh_Fir_reg_side1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // side2 = force? side1
  Rsh_Fir_reg_side2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_side1_);
  // checkMissing(side2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_side2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return side2
  return Rsh_Fir_reg_side2_;
}
SEXP Rsh_Fir_user_promise_inner2989570553_1(SEXP CCP, SEXP RHO) {
  // at3 = ld at
  Rsh_Fir_reg_at3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // at4 = force? at3
  Rsh_Fir_reg_at4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_at3_);
  // checkMissing(at4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_at4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return at4
  return Rsh_Fir_reg_at4_;
}
SEXP Rsh_Fir_user_promise_inner2989570553_2(SEXP CCP, SEXP RHO) {
  // labels1 = ld labels
  Rsh_Fir_reg_labels1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // labels2 = force? labels1
  Rsh_Fir_reg_labels2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels1_);
  // checkMissing(labels2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_labels2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return labels2
  return Rsh_Fir_reg_labels2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
