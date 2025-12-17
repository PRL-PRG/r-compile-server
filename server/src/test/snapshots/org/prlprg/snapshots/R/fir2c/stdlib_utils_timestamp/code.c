#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3614610176_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3614610176_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3614610176_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3614610176_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3614610176_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3614610176_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3614610176_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner3614610176
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3614610176_, RHO, CCP);
  // st timestamp = r
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
SEXP Rsh_Fir_user_function_inner3614610176_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3614610176 dynamic dispatch ([stamp, prefix, suffix, quiet])

  return Rsh_Fir_user_version_inner3614610176_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3614610176_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3614610176 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner3614610176/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_stamp;  // stamp
  SEXP Rsh_Fir_reg_prefix;  // prefix
  SEXP Rsh_Fir_reg_suffix;  // suffix
  SEXP Rsh_Fir_reg_quiet;  // quiet
  SEXP Rsh_Fir_reg_stamp_isMissing;  // stamp_isMissing
  SEXP Rsh_Fir_reg_stamp_orDefault;  // stamp_orDefault
  SEXP Rsh_Fir_reg_date;  // date
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_prefix_isMissing;  // prefix_isMissing
  SEXP Rsh_Fir_reg_prefix_orDefault;  // prefix_orDefault
  SEXP Rsh_Fir_reg_suffix_isMissing;  // suffix_isMissing
  SEXP Rsh_Fir_reg_suffix_orDefault;  // suffix_orDefault
  SEXP Rsh_Fir_reg_quiet_isMissing;  // quiet_isMissing
  SEXP Rsh_Fir_reg_quiet_orDefault;  // quiet_orDefault
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_prefix1_;  // prefix1
  SEXP Rsh_Fir_reg_prefix2_;  // prefix2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_stamp1_;  // stamp1
  SEXP Rsh_Fir_reg_stamp2_;  // stamp2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_suffix1_;  // suffix1
  SEXP Rsh_Fir_reg_suffix2_;  // suffix2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_C_addhistory;  // C_addhistory
  SEXP Rsh_Fir_reg_C_addhistory1_;  // C_addhistory1
  SEXP Rsh_Fir_reg_stamp3_;  // stamp3
  SEXP Rsh_Fir_reg_stamp4_;  // stamp4
  SEXP Rsh_Fir_reg__External2_;  // _External2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_quiet1_;  // quiet1
  SEXP Rsh_Fir_reg_quiet2_;  // quiet2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_cat;  // cat
  SEXP Rsh_Fir_reg_stamp5_;  // stamp5
  SEXP Rsh_Fir_reg_stamp6_;  // stamp6
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_stamp7_;  // stamp7
  SEXP Rsh_Fir_reg_stamp8_;  // stamp8
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r15_;  // r15

  // Bind parameters
  Rsh_Fir_reg_stamp = PARAMS[0];
  Rsh_Fir_reg_prefix = PARAMS[1];
  Rsh_Fir_reg_suffix = PARAMS[2];
  Rsh_Fir_reg_quiet = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // stamp_isMissing = missing.0(stamp)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_stamp;
  Rsh_Fir_reg_stamp_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if stamp_isMissing then L0() else L1(stamp)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_stamp_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(stamp)
    Rsh_Fir_reg_stamp_orDefault = Rsh_Fir_reg_stamp;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   date = ldf date;
  //   r = dyn date();
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3614610176_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_stamp_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st stamp = stamp_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_stamp_orDefault, RHO);
  (void)(Rsh_Fir_reg_stamp_orDefault);
  // prefix_isMissing = missing.0(prefix)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_prefix;
  Rsh_Fir_reg_prefix_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if prefix_isMissing then L2("##------ ") else L2(prefix)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_prefix_isMissing)) {
  // L2("##------ ")
    Rsh_Fir_reg_prefix_orDefault = Rsh_const(CCP, 3);
    goto L2_;
  } else {
  // L2(prefix)
    Rsh_Fir_reg_prefix_orDefault = Rsh_Fir_reg_prefix;
    goto L2_;
  }

L2_:;
  // st prefix = prefix_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_prefix_orDefault, RHO);
  (void)(Rsh_Fir_reg_prefix_orDefault);
  // suffix_isMissing = missing.0(suffix)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_suffix;
  Rsh_Fir_reg_suffix_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if suffix_isMissing then L3(" ------##") else L3(suffix)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_suffix_isMissing)) {
  // L3(" ------##")
    Rsh_Fir_reg_suffix_orDefault = Rsh_const(CCP, 5);
    goto L3_;
  } else {
  // L3(suffix)
    Rsh_Fir_reg_suffix_orDefault = Rsh_Fir_reg_suffix;
    goto L3_;
  }

L3_:;
  // st suffix = suffix_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_suffix_orDefault, RHO);
  (void)(Rsh_Fir_reg_suffix_orDefault);
  // quiet_isMissing = missing.0(quiet)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_quiet;
  Rsh_Fir_reg_quiet_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if quiet_isMissing then L4(FALSE) else L4(quiet)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_quiet_isMissing)) {
  // L4(FALSE)
    Rsh_Fir_reg_quiet_orDefault = Rsh_const(CCP, 7);
    goto L4_;
  } else {
  // L4(quiet)
    Rsh_Fir_reg_quiet_orDefault = Rsh_Fir_reg_quiet;
    goto L4_;
  }

L4_:;
  // st quiet = quiet_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_quiet_orDefault, RHO);
  (void)(Rsh_Fir_reg_quiet_orDefault);
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L5_:;
  // quiet1 = ld quiet
  Rsh_Fir_reg_quiet1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // sym1 = ldf invisible
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf invisible in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
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

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r14
  return Rsh_Fir_reg_r14_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p1 = prom<V +>{
  //   prefix1 = ld prefix;
  //   prefix2 = force? prefix1;
  //   checkMissing(prefix2);
  //   return prefix2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3614610176_1, CCP, RHO);
  // p2 = prom<V +>{
  //   stamp1 = ld stamp;
  //   stamp2 = force? stamp1;
  //   checkMissing(stamp2);
  //   return stamp2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3614610176_2, CCP, RHO);
  // p3 = prom<V +>{
  //   suffix1 = ld suffix;
  //   suffix2 = force? suffix1;
  //   checkMissing(suffix2);
  //   return suffix2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3614610176_3, CCP, RHO);
  // r5 = dyn paste0(p1, p2, p3)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args8[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 5 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // st stamp = r5
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym = ldf `.External2`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base = ldf `.External2` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L11_:;
  // C_addhistory = ld C_addhistory
  Rsh_Fir_reg_C_addhistory = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

L12_:;
  // r6 = dyn base(<sym C_addhistory>, <sym stamp>)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L5()
  // L5()
  goto L5_;

D2_:;
  // deopt 9 [C_addhistory]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_addhistory;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L13_:;
  // C_addhistory1 = force? C_addhistory
  Rsh_Fir_reg_C_addhistory1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_addhistory);
  // checkMissing(C_addhistory1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_C_addhistory1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // stamp3 = ld stamp
  Rsh_Fir_reg_stamp3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

D3_:;
  // deopt 11 [stamp3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_stamp3_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // stamp4 = force? stamp3
  Rsh_Fir_reg_stamp4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stamp3_);
  // checkMissing(stamp4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_stamp4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // _External2 = ldf `.External2` in base
  Rsh_Fir_reg__External2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r8 = dyn _External2(C_addhistory1, stamp4)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_C_addhistory1_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_stamp4_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External2_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

D4_:;
  // deopt 14 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L5()
  // L5()
  goto L5_;

D5_:;
  // deopt 15 [quiet1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_quiet1_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L16_:;
  // quiet2 = force? quiet1
  Rsh_Fir_reg_quiet2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quiet1_);
  // checkMissing(quiet2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_quiet2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // r9 = `!`(quiet2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_quiet2_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r9)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c then L17() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L17()
    goto L17_;
  } else {
  // L6()
    goto L6_;
  }

L17_:;
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L18() else D6()
  // L18()
  goto L18_;

D6_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p4 = prom<V +>{
  //   stamp5 = ld stamp;
  //   stamp6 = force? stamp5;
  //   checkMissing(stamp6);
  //   return stamp6;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3614610176_4, CCP, RHO);
  // r11 = dyn cat[, sep](p4, "\n")
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L19() else D7()
  // L19()
  goto L19_;

D7_:;
  // deopt 23 [r11]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L7()
  // L7()
  goto L7_;

L21_:;
  // stamp7 = ld stamp
  Rsh_Fir_reg_stamp7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L23() else D8()
  // L23()
  goto L23_;

L22_:;
  // r13 = dyn base1(<sym stamp>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L8(r13)
  // L8(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L8_;

D8_:;
  // deopt 28 [stamp7]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_stamp7_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L23_:;
  // stamp8 = force? stamp7
  Rsh_Fir_reg_stamp8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stamp7_);
  // checkMissing(stamp8)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_stamp8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r15 = dyn invisible(stamp8)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_stamp8_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L24() else D9()
  // L24()
  goto L24_;

D9_:;
  // deopt 31 [r15]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L8(r15)
  // L8(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L8_;
}
SEXP Rsh_Fir_user_promise_inner3614610176_(SEXP CCP, SEXP RHO) {
  // date = ldf date
  Rsh_Fir_reg_date = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // r = dyn date()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_date, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner3614610176_1(SEXP CCP, SEXP RHO) {
  // prefix1 = ld prefix
  Rsh_Fir_reg_prefix1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // prefix2 = force? prefix1
  Rsh_Fir_reg_prefix2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prefix1_);
  // checkMissing(prefix2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_prefix2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return prefix2
  return Rsh_Fir_reg_prefix2_;
}
SEXP Rsh_Fir_user_promise_inner3614610176_2(SEXP CCP, SEXP RHO) {
  // stamp1 = ld stamp
  Rsh_Fir_reg_stamp1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // stamp2 = force? stamp1
  Rsh_Fir_reg_stamp2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stamp1_);
  // checkMissing(stamp2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_stamp2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return stamp2
  return Rsh_Fir_reg_stamp2_;
}
SEXP Rsh_Fir_user_promise_inner3614610176_3(SEXP CCP, SEXP RHO) {
  // suffix1 = ld suffix
  Rsh_Fir_reg_suffix1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // suffix2 = force? suffix1
  Rsh_Fir_reg_suffix2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_suffix1_);
  // checkMissing(suffix2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_suffix2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return suffix2
  return Rsh_Fir_reg_suffix2_;
}
SEXP Rsh_Fir_user_promise_inner3614610176_4(SEXP CCP, SEXP RHO) {
  // stamp5 = ld stamp
  Rsh_Fir_reg_stamp5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // stamp6 = force? stamp5
  Rsh_Fir_reg_stamp6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stamp5_);
  // checkMissing(stamp6)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_stamp6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return stamp6
  return Rsh_Fir_reg_stamp6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
