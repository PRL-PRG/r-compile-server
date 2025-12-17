#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3717258737_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3717258737_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3717258737_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3717258737_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_grepRaw;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_grepRaw1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_grepRaw2_;
  SEXP Rsh_Fir_reg_r3_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3717258737
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3717258737_, RHO, CCP);
  // st grepRaw = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // grepRaw = ldf grepRaw
  Rsh_Fir_reg_grepRaw = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn grepRaw("no match", "textText")
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepRaw, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // grepRaw1 = ldf grepRaw
  Rsh_Fir_reg_grepRaw1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r2 = dyn grepRaw1("adf", "adadfadfdfadadf")
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepRaw1_, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 12 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // grepRaw2 = ldf grepRaw
  Rsh_Fir_reg_grepRaw2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // r3 = dyn grepRaw2[, , all, fixed]("adf", "adadfadfdfadadf", TRUE, TRUE)
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names2[3] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepRaw2_, 4, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 21 [r3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_function_inner3717258737_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3717258737 dynamic dispatch ([pattern, x, offset, `ignore.case`, value, fixed, all, invert])

  return Rsh_Fir_user_version_inner3717258737_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3717258737_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3717258737 version 0 (*, *, *, *, *, *, *, * -+> V)

  if (NPARAMS != 8) Rsh_error("FIŘ arity mismatch for inner3717258737/0: expected 8, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_pattern;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_offset;
  SEXP Rsh_Fir_reg_ignore_case;
  SEXP Rsh_Fir_reg_value;
  SEXP Rsh_Fir_reg_fixed;
  SEXP Rsh_Fir_reg_all;
  SEXP Rsh_Fir_reg_invert;
  SEXP Rsh_Fir_reg_offset_isMissing;
  SEXP Rsh_Fir_reg_offset_orDefault;
  SEXP Rsh_Fir_reg_ignore_case_isMissing;
  SEXP Rsh_Fir_reg_ignore_case_orDefault;
  SEXP Rsh_Fir_reg_value_isMissing;
  SEXP Rsh_Fir_reg_value_orDefault;
  SEXP Rsh_Fir_reg_fixed_isMissing;
  SEXP Rsh_Fir_reg_fixed_orDefault;
  SEXP Rsh_Fir_reg_all_isMissing;
  SEXP Rsh_Fir_reg_all_orDefault;
  SEXP Rsh_Fir_reg_invert_isMissing;
  SEXP Rsh_Fir_reg_invert_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_pattern1_;
  SEXP Rsh_Fir_reg_pattern2_;
  SEXP Rsh_Fir_reg_is_raw;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_charToRaw;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_is_raw1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_charToRaw1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_pattern5_;
  SEXP Rsh_Fir_reg_pattern6_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_offset1_;
  SEXP Rsh_Fir_reg_offset2_;
  SEXP Rsh_Fir_reg_ignore_case1_;
  SEXP Rsh_Fir_reg_ignore_case2_;
  SEXP Rsh_Fir_reg_fixed1_;
  SEXP Rsh_Fir_reg_fixed2_;
  SEXP Rsh_Fir_reg_value1_;
  SEXP Rsh_Fir_reg_value2_;
  SEXP Rsh_Fir_reg_all1_;
  SEXP Rsh_Fir_reg_all2_;
  SEXP Rsh_Fir_reg_invert1_;
  SEXP Rsh_Fir_reg_invert2_;
  SEXP Rsh_Fir_reg_grepRaw1;
  SEXP Rsh_Fir_reg_r22_;

  // Bind parameters
  Rsh_Fir_reg_pattern = PARAMS[0];
  Rsh_Fir_reg_x = PARAMS[1];
  Rsh_Fir_reg_offset = PARAMS[2];
  Rsh_Fir_reg_ignore_case = PARAMS[3];
  Rsh_Fir_reg_value = PARAMS[4];
  Rsh_Fir_reg_fixed = PARAMS[5];
  Rsh_Fir_reg_all = PARAMS[6];
  Rsh_Fir_reg_invert = PARAMS[7];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st pattern = pattern
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_pattern, RHO);
  (void)(Rsh_Fir_reg_pattern);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // offset_isMissing = missing.0(offset)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_offset;
  Rsh_Fir_reg_offset_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if offset_isMissing then L0(1) else L0(offset)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_offset_isMissing)) {
  // L0(1)
    Rsh_Fir_reg_offset_orDefault = Rsh_const(CCP, 10);
    goto L0_;
  } else {
  // L0(offset)
    Rsh_Fir_reg_offset_orDefault = Rsh_Fir_reg_offset;
    goto L0_;
  }

L0_:;
  // st offset = offset_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_offset_orDefault, RHO);
  (void)(Rsh_Fir_reg_offset_orDefault);
  // ignore_case_isMissing = missing.0(ignore_case)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_ignore_case;
  Rsh_Fir_reg_ignore_case_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if ignore_case_isMissing then L1(FALSE) else L1(ignore_case)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ignore_case_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_ignore_case_orDefault = Rsh_const(CCP, 12);
    goto L1_;
  } else {
  // L1(ignore_case)
    Rsh_Fir_reg_ignore_case_orDefault = Rsh_Fir_reg_ignore_case;
    goto L1_;
  }

L1_:;
  // st `ignore.case` = ignore_case_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_ignore_case_orDefault, RHO);
  (void)(Rsh_Fir_reg_ignore_case_orDefault);
  // value_isMissing = missing.0(value)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_value;
  Rsh_Fir_reg_value_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if value_isMissing then L2(FALSE) else L2(value)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_value_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_value_orDefault = Rsh_const(CCP, 12);
    goto L2_;
  } else {
  // L2(value)
    Rsh_Fir_reg_value_orDefault = Rsh_Fir_reg_value;
    goto L2_;
  }

L2_:;
  // st value = value_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_value_orDefault, RHO);
  (void)(Rsh_Fir_reg_value_orDefault);
  // fixed_isMissing = missing.0(fixed)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_fixed;
  Rsh_Fir_reg_fixed_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if fixed_isMissing then L3(FALSE) else L3(fixed)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_fixed_isMissing)) {
  // L3(FALSE)
    Rsh_Fir_reg_fixed_orDefault = Rsh_const(CCP, 12);
    goto L3_;
  } else {
  // L3(fixed)
    Rsh_Fir_reg_fixed_orDefault = Rsh_Fir_reg_fixed;
    goto L3_;
  }

L3_:;
  // st fixed = fixed_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_fixed_orDefault, RHO);
  (void)(Rsh_Fir_reg_fixed_orDefault);
  // all_isMissing = missing.0(all)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_all;
  Rsh_Fir_reg_all_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if all_isMissing then L4(FALSE) else L4(all)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_all_isMissing)) {
  // L4(FALSE)
    Rsh_Fir_reg_all_orDefault = Rsh_const(CCP, 12);
    goto L4_;
  } else {
  // L4(all)
    Rsh_Fir_reg_all_orDefault = Rsh_Fir_reg_all;
    goto L4_;
  }

L4_:;
  // st all = all_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_all_orDefault, RHO);
  (void)(Rsh_Fir_reg_all_orDefault);
  // invert_isMissing = missing.0(invert)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_invert;
  Rsh_Fir_reg_invert_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if invert_isMissing then L5(FALSE) else L5(invert)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_invert_isMissing)) {
  // L5(FALSE)
    Rsh_Fir_reg_invert_orDefault = Rsh_const(CCP, 12);
    goto L5_;
  } else {
  // L5(invert)
    Rsh_Fir_reg_invert_orDefault = Rsh_Fir_reg_invert;
    goto L5_;
  }

L5_:;
  // st invert = invert_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_invert_orDefault, RHO);
  (void)(Rsh_Fir_reg_invert_orDefault);
  // sym = ldf `is.raw`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base = ldf `is.raw` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L6_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args10);
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args11);
  // if c then L17() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L17()
    goto L17_;
  } else {
  // L7()
    goto L7_;
  }

L13_:;
  // pattern1 = ld pattern
  Rsh_Fir_reg_pattern1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

L14_:;
  // r = dyn base(<sym pattern>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L6(r)
  // L6(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L6_;

D0_:;
  // deopt 2 [pattern1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_pattern1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // sym2 = ldf `is.raw`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base2 = ldf `is.raw` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard2 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L15_:;
  // pattern2 = force? pattern1
  Rsh_Fir_reg_pattern2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern1_);
  // checkMissing(pattern2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_pattern2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // is_raw = ldf `is.raw` in base
  Rsh_Fir_reg_is_raw = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r2 = dyn is_raw(pattern2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_pattern2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_raw, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

L17_:;
  // charToRaw = ldf charToRaw
  Rsh_Fir_reg_charToRaw = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L18() else D2()
  // L18()
  goto L18_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // r13 = `!`(r11)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args16);
  // c1 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args17);
  // if c1 then L25() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L25()
    goto L25_;
  } else {
  // L10()
    goto L10_;
  }

L16_:;
  // goto L6(r2)
  // L6(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L6_;

L18_:;
  // p = prom<V +>{
  //   sym1 = ldf `as.character`;
  //   base1 = ldf `as.character` in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r5):
  //   return r5;
  // L1():
  //   pattern3 = ld pattern;
  //   pattern4 = force? pattern3;
  //   checkMissing(pattern4);
  //   as_character = ldf `as.character` in base;
  //   r6 = dyn as_character(pattern4);
  //   goto L0(r6);
  // L2():
  //   r4 = dyn base1(<sym pattern>);
  //   goto L0(r4);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3717258737_, 0, NULL, CCP, RHO);
  // r8 = dyn charToRaw(p)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_charToRaw, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L19() else D3()
  // L19()
  goto L19_;

L21_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L23() else D4()
  // L23()
  goto L23_;

L22_:;
  // r10 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L9(r10)
  // L9(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L9_;

D3_:;
  // deopt 10 [r8]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 16 [x1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // sym4 = ldf `.Internal`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base4 = ldf `.Internal` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard4 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L19_:;
  // st pattern = r8
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // goto L8()
  // L8()
  goto L8_;

L23_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // is_raw1 = ldf `is.raw` in base
  Rsh_Fir_reg_is_raw1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r12 = dyn is_raw1(x2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_raw1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L24() else D5()
  // L24()
  goto L24_;

L25_:;
  // charToRaw1 = ldf charToRaw
  Rsh_Fir_reg_charToRaw1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L26() else D6()
  // L26()
  goto L26_;

D5_:;
  // deopt 19 [r12]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r21
  return Rsh_Fir_reg_r21_;

L24_:;
  // goto L9(r12)
  // L9(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L9_;

L26_:;
  // p1 = prom<V +>{
  //   sym3 = ldf `as.character`;
  //   base3 = ldf `as.character` in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r15):
  //   return r15;
  // L1():
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   as_character1 = ldf `as.character` in base;
  //   r16 = dyn as_character1(x4);
  //   goto L0(r16);
  // L2():
  //   r14 = dyn base3(<sym x>);
  //   goto L0(r14);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3717258737_1, 0, NULL, CCP, RHO);
  // r18 = dyn charToRaw1(p1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_charToRaw1_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L27() else D7()
  // L27()
  goto L27_;

L29_:;
  // pattern5 = ld pattern
  Rsh_Fir_reg_pattern5_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L31() else D8()
  // L31()
  goto L31_;

L30_:;
  // r20 = dyn base4(<lang grepRaw(pattern, x, offset, ignore.case, fixed, value, all, invert)>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L12(r20)
  // L12(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L12_;

D7_:;
  // deopt 24 [r18]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 30 [pattern5]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_pattern5_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L27_:;
  // st x = r18
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // goto L11()
  // L11()
  goto L11_;

L31_:;
  // pattern6 = force? pattern5
  Rsh_Fir_reg_pattern6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern5_);
  // checkMissing(pattern6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_pattern6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L32() else D9()
  // L32()
  goto L32_;

D9_:;
  // deopt 32 [x5]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L32_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // offset1 = ld offset
  Rsh_Fir_reg_offset1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L33() else D10()
  // L33()
  goto L33_;

D10_:;
  // deopt 34 [offset1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_offset1_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L33_:;
  // offset2 = force? offset1
  Rsh_Fir_reg_offset2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_offset1_);
  // checkMissing(offset2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_offset2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // ignore_case1 = ld `ignore.case`
  Rsh_Fir_reg_ignore_case1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L34() else D11()
  // L34()
  goto L34_;

D11_:;
  // deopt 36 [ignore_case1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_ignore_case1_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L34_:;
  // ignore_case2 = force? ignore_case1
  Rsh_Fir_reg_ignore_case2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignore_case1_);
  // checkMissing(ignore_case2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_ignore_case2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // fixed1 = ld fixed
  Rsh_Fir_reg_fixed1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L35() else D12()
  // L35()
  goto L35_;

D12_:;
  // deopt 38 [fixed1]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_fixed1_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L35_:;
  // fixed2 = force? fixed1
  Rsh_Fir_reg_fixed2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fixed1_);
  // checkMissing(fixed2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_fixed2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L36() else D13()
  // L36()
  goto L36_;

D13_:;
  // deopt 40 [value1]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L36_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // all1 = ld all
  Rsh_Fir_reg_all1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L37() else D14()
  // L37()
  goto L37_;

D14_:;
  // deopt 42 [all1]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_all1_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L37_:;
  // all2 = force? all1
  Rsh_Fir_reg_all2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all1_);
  // checkMissing(all2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_all2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // invert1 = ld invert
  Rsh_Fir_reg_invert1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L38() else D15()
  // L38()
  goto L38_;

D15_:;
  // deopt 44 [invert1]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_invert1_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L38_:;
  // invert2 = force? invert1
  Rsh_Fir_reg_invert2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_invert1_);
  // checkMissing(invert2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_invert2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // grepRaw = ldf grepRaw in base
  Rsh_Fir_reg_grepRaw1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r22 = dyn grepRaw(pattern6, x6, offset2, ignore_case2, fixed2, value2, all2, invert2)
  SEXP Rsh_Fir_array_args41[8];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_pattern6_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args41[2] = Rsh_Fir_reg_offset2_;
  Rsh_Fir_array_args41[3] = Rsh_Fir_reg_ignore_case2_;
  Rsh_Fir_array_args41[4] = Rsh_Fir_reg_fixed2_;
  Rsh_Fir_array_args41[5] = Rsh_Fir_reg_value2_;
  Rsh_Fir_array_args41[6] = Rsh_Fir_reg_all2_;
  Rsh_Fir_array_args41[7] = Rsh_Fir_reg_invert2_;
  SEXP Rsh_Fir_array_arg_names14[8];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_array_arg_names14[4] = R_MissingArg;
  Rsh_Fir_array_arg_names14[5] = R_MissingArg;
  Rsh_Fir_array_arg_names14[6] = R_MissingArg;
  Rsh_Fir_array_arg_names14[7] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepRaw1, 8, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L39() else D16()
  // L39()
  goto L39_;

D16_:;
  // deopt 47 [r22]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L12(r22)
  // L12(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L12_;
}
SEXP Rsh_Fir_user_promise_inner3717258737_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_pattern3_;
  SEXP Rsh_Fir_reg_pattern4_;
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3717258737/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf `as.character`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base1 = ldf `as.character` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r5
  return Rsh_Fir_reg_r5_;

L1_:;
  // pattern3 = ld pattern
  Rsh_Fir_reg_pattern3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // pattern4 = force? pattern3
  Rsh_Fir_reg_pattern4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern3_);
  // checkMissing(pattern4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_pattern4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r6 = dyn as_character(pattern4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_pattern4_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L0_;

L2_:;
  // r4 = dyn base1(<sym pattern>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3717258737_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_as_character1_;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3717258737/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf `as.character`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base3 = ldf `as.character` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r15
  return Rsh_Fir_reg_r15_;

L1_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // as_character1 = ldf `as.character` in base
  Rsh_Fir_reg_as_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r16 = dyn as_character1(x4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character1_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L0_;

L2_:;
  // r14 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
