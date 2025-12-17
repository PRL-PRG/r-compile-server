#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3247170067_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3247170067_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3247170067_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3247170067_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3247170067_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3247170067_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3247170067_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3247170067_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3247170067_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3247170067_7(SEXP CCP, SEXP RHO);
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
  // r = clos inner3247170067
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3247170067_, RHO, CCP);
  // st grepv = r
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
SEXP Rsh_Fir_user_function_inner3247170067_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3247170067 dynamic dispatch ([pattern, x, `ignore.case`, perl, value, fixed, useBytes, invert])

  return Rsh_Fir_user_version_inner3247170067_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3247170067_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3247170067 version 0 (*, *, *, *, *, *, *, * -+> V)

  if (NPARAMS != 8) Rsh_error("FIŘ arity mismatch for inner3247170067/0: expected 8, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_pattern;  // pattern
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_ignore_case;  // ignore_case
  SEXP Rsh_Fir_reg_perl;  // perl
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_fixed;  // fixed
  SEXP Rsh_Fir_reg_useBytes;  // useBytes
  SEXP Rsh_Fir_reg_invert;  // invert
  SEXP Rsh_Fir_reg_ignore_case_isMissing;  // ignore_case_isMissing
  SEXP Rsh_Fir_reg_ignore_case_orDefault;  // ignore_case_orDefault
  SEXP Rsh_Fir_reg_perl_isMissing;  // perl_isMissing
  SEXP Rsh_Fir_reg_perl_orDefault;  // perl_orDefault
  SEXP Rsh_Fir_reg_value_isMissing;  // value_isMissing
  SEXP Rsh_Fir_reg_value_orDefault;  // value_orDefault
  SEXP Rsh_Fir_reg_fixed_isMissing;  // fixed_isMissing
  SEXP Rsh_Fir_reg_fixed_orDefault;  // fixed_orDefault
  SEXP Rsh_Fir_reg_useBytes_isMissing;  // useBytes_isMissing
  SEXP Rsh_Fir_reg_useBytes_orDefault;  // useBytes_orDefault
  SEXP Rsh_Fir_reg_invert_isMissing;  // invert_isMissing
  SEXP Rsh_Fir_reg_invert_orDefault;  // invert_orDefault
  SEXP Rsh_Fir_reg_grep;  // grep
  SEXP Rsh_Fir_reg_pattern1_;  // pattern1
  SEXP Rsh_Fir_reg_pattern2_;  // pattern2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_ignore_case1_;  // ignore_case1
  SEXP Rsh_Fir_reg_ignore_case2_;  // ignore_case2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_perl1_;  // perl1
  SEXP Rsh_Fir_reg_perl2_;  // perl2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_fixed1_;  // fixed1
  SEXP Rsh_Fir_reg_fixed2_;  // fixed2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_useBytes1_;  // useBytes1
  SEXP Rsh_Fir_reg_useBytes2_;  // useBytes2
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_invert1_;  // invert1
  SEXP Rsh_Fir_reg_invert2_;  // invert2
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r8_;  // r8

  // Bind parameters
  Rsh_Fir_reg_pattern = PARAMS[0];
  Rsh_Fir_reg_x = PARAMS[1];
  Rsh_Fir_reg_ignore_case = PARAMS[2];
  Rsh_Fir_reg_perl = PARAMS[3];
  Rsh_Fir_reg_value = PARAMS[4];
  Rsh_Fir_reg_fixed = PARAMS[5];
  Rsh_Fir_reg_useBytes = PARAMS[6];
  Rsh_Fir_reg_invert = PARAMS[7];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st pattern = pattern
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_pattern, RHO);
  (void)(Rsh_Fir_reg_pattern);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // ignore_case_isMissing = missing.0(ignore_case)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_ignore_case;
  Rsh_Fir_reg_ignore_case_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if ignore_case_isMissing then L0(FALSE) else L0(ignore_case)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ignore_case_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_ignore_case_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(ignore_case)
    Rsh_Fir_reg_ignore_case_orDefault = Rsh_Fir_reg_ignore_case;
    goto L0_;
  }

L0_:;
  // st `ignore.case` = ignore_case_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ignore_case_orDefault, RHO);
  (void)(Rsh_Fir_reg_ignore_case_orDefault);
  // perl_isMissing = missing.0(perl)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_perl;
  Rsh_Fir_reg_perl_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if perl_isMissing then L1(FALSE) else L1(perl)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_perl_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_perl_orDefault = Rsh_const(CCP, 3);
    goto L1_;
  } else {
  // L1(perl)
    Rsh_Fir_reg_perl_orDefault = Rsh_Fir_reg_perl;
    goto L1_;
  }

L1_:;
  // st perl = perl_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_perl_orDefault, RHO);
  (void)(Rsh_Fir_reg_perl_orDefault);
  // value_isMissing = missing.0(value)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_value;
  Rsh_Fir_reg_value_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if value_isMissing then L2(TRUE) else L2(value)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_value_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_value_orDefault = Rsh_const(CCP, 6);
    goto L2_;
  } else {
  // L2(value)
    Rsh_Fir_reg_value_orDefault = Rsh_Fir_reg_value;
    goto L2_;
  }

L2_:;
  // st value = value_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_value_orDefault, RHO);
  (void)(Rsh_Fir_reg_value_orDefault);
  // fixed_isMissing = missing.0(fixed)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_fixed;
  Rsh_Fir_reg_fixed_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if fixed_isMissing then L3(FALSE) else L3(fixed)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_fixed_isMissing)) {
  // L3(FALSE)
    Rsh_Fir_reg_fixed_orDefault = Rsh_const(CCP, 3);
    goto L3_;
  } else {
  // L3(fixed)
    Rsh_Fir_reg_fixed_orDefault = Rsh_Fir_reg_fixed;
    goto L3_;
  }

L3_:;
  // st fixed = fixed_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_fixed_orDefault, RHO);
  (void)(Rsh_Fir_reg_fixed_orDefault);
  // useBytes_isMissing = missing.0(useBytes)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_useBytes;
  Rsh_Fir_reg_useBytes_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if useBytes_isMissing then L4(FALSE) else L4(useBytes)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_useBytes_isMissing)) {
  // L4(FALSE)
    Rsh_Fir_reg_useBytes_orDefault = Rsh_const(CCP, 3);
    goto L4_;
  } else {
  // L4(useBytes)
    Rsh_Fir_reg_useBytes_orDefault = Rsh_Fir_reg_useBytes;
    goto L4_;
  }

L4_:;
  // st useBytes = useBytes_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_useBytes_orDefault, RHO);
  (void)(Rsh_Fir_reg_useBytes_orDefault);
  // invert_isMissing = missing.0(invert)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_invert;
  Rsh_Fir_reg_invert_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if invert_isMissing then L5(FALSE) else L5(invert)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_invert_isMissing)) {
  // L5(FALSE)
    Rsh_Fir_reg_invert_orDefault = Rsh_const(CCP, 3);
    goto L5_;
  } else {
  // L5(invert)
    Rsh_Fir_reg_invert_orDefault = Rsh_Fir_reg_invert;
    goto L5_;
  }

L5_:;
  // st invert = invert_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_invert_orDefault, RHO);
  (void)(Rsh_Fir_reg_invert_orDefault);
  // grep = ldf grep
  Rsh_Fir_reg_grep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p = prom<V +>{
  //   pattern1 = ld pattern;
  //   pattern2 = force? pattern1;
  //   checkMissing(pattern2);
  //   return pattern2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3247170067_, CCP, RHO);
  // p1 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3247170067_1, CCP, RHO);
  // p2 = prom<V +>{
  //   ignore_case1 = ld `ignore.case`;
  //   ignore_case2 = force? ignore_case1;
  //   checkMissing(ignore_case2);
  //   return ignore_case2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3247170067_2, CCP, RHO);
  // p3 = prom<V +>{
  //   perl1 = ld perl;
  //   perl2 = force? perl1;
  //   checkMissing(perl2);
  //   return perl2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3247170067_3, CCP, RHO);
  // p4 = prom<V +>{
  //   value1 = ld value;
  //   value2 = force? value1;
  //   checkMissing(value2);
  //   return value2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3247170067_4, CCP, RHO);
  // p5 = prom<V +>{
  //   fixed1 = ld fixed;
  //   fixed2 = force? fixed1;
  //   checkMissing(fixed2);
  //   return fixed2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3247170067_5, CCP, RHO);
  // p6 = prom<V +>{
  //   useBytes1 = ld useBytes;
  //   useBytes2 = force? useBytes1;
  //   checkMissing(useBytes2);
  //   return useBytes2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3247170067_6, CCP, RHO);
  // p7 = prom<V +>{
  //   invert1 = ld invert;
  //   invert2 = force? invert1;
  //   checkMissing(invert2);
  //   return invert2;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3247170067_7, CCP, RHO);
  // r8 = dyn grep(p, p1, p2, p3, p4, p5, p6, p7)
  SEXP Rsh_Fir_array_args14[8];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args14[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args14[3] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args14[4] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args14[5] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args14[6] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args14[7] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names[8];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_array_arg_names[5] = R_MissingArg;
  Rsh_Fir_array_arg_names[6] = R_MissingArg;
  Rsh_Fir_array_arg_names[7] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep, 8, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 10 [r8]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_inner3247170067_(SEXP CCP, SEXP RHO) {
  // pattern1 = ld pattern
  Rsh_Fir_reg_pattern1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // pattern2 = force? pattern1
  Rsh_Fir_reg_pattern2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern1_);
  // checkMissing(pattern2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_pattern2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return pattern2
  return Rsh_Fir_reg_pattern2_;
}
SEXP Rsh_Fir_user_promise_inner3247170067_1(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner3247170067_2(SEXP CCP, SEXP RHO) {
  // ignore_case1 = ld `ignore.case`
  Rsh_Fir_reg_ignore_case1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // ignore_case2 = force? ignore_case1
  Rsh_Fir_reg_ignore_case2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignore_case1_);
  // checkMissing(ignore_case2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_ignore_case2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return ignore_case2
  return Rsh_Fir_reg_ignore_case2_;
}
SEXP Rsh_Fir_user_promise_inner3247170067_3(SEXP CCP, SEXP RHO) {
  // perl1 = ld perl
  Rsh_Fir_reg_perl1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // perl2 = force? perl1
  Rsh_Fir_reg_perl2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_perl1_);
  // checkMissing(perl2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_perl2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return perl2
  return Rsh_Fir_reg_perl2_;
}
SEXP Rsh_Fir_user_promise_inner3247170067_4(SEXP CCP, SEXP RHO) {
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return value2
  return Rsh_Fir_reg_value2_;
}
SEXP Rsh_Fir_user_promise_inner3247170067_5(SEXP CCP, SEXP RHO) {
  // fixed1 = ld fixed
  Rsh_Fir_reg_fixed1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // fixed2 = force? fixed1
  Rsh_Fir_reg_fixed2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fixed1_);
  // checkMissing(fixed2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_fixed2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return fixed2
  return Rsh_Fir_reg_fixed2_;
}
SEXP Rsh_Fir_user_promise_inner3247170067_6(SEXP CCP, SEXP RHO) {
  // useBytes1 = ld useBytes
  Rsh_Fir_reg_useBytes1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // useBytes2 = force? useBytes1
  Rsh_Fir_reg_useBytes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_useBytes1_);
  // checkMissing(useBytes2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_useBytes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return useBytes2
  return Rsh_Fir_reg_useBytes2_;
}
SEXP Rsh_Fir_user_promise_inner3247170067_7(SEXP CCP, SEXP RHO) {
  // invert1 = ld invert
  Rsh_Fir_reg_invert1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // invert2 = force? invert1
  Rsh_Fir_reg_invert2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_invert1_);
  // checkMissing(invert2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_invert2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return invert2
  return Rsh_Fir_reg_invert2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
