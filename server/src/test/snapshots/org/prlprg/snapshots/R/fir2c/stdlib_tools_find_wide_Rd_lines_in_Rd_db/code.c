#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3159632791_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3159632791_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3159632791_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3159632791_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3159632791_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3159632791_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3159632791_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3159632791_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner3159632791
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3159632791_, RHO, CCP);
  // st find_wide_Rd_lines_in_Rd_db = r
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
SEXP Rsh_Fir_user_function_inner3159632791_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3159632791 dynamic dispatch ([x, limit, installed])

  return Rsh_Fir_user_version_inner3159632791_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3159632791_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3159632791 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3159632791/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_limit;  // limit
  SEXP Rsh_Fir_reg_installed;  // installed
  SEXP Rsh_Fir_reg_limit_isMissing;  // limit_isMissing
  SEXP Rsh_Fir_reg_limit_orDefault;  // limit_orDefault
  SEXP Rsh_Fir_reg_installed_isMissing;  // installed_isMissing
  SEXP Rsh_Fir_reg_installed_orDefault;  // installed_orDefault
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_find_wide_Rd_lines_in_Rd_object;  // find_wide_Rd_lines_in_Rd_object
  SEXP Rsh_Fir_reg_find_wide_Rd_lines_in_Rd_object1_;  // find_wide_Rd_lines_in_Rd_object1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_limit1_;  // limit1
  SEXP Rsh_Fir_reg_limit2_;  // limit2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_installed1_;  // installed1
  SEXP Rsh_Fir_reg_installed2_;  // installed2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_Filter;  // Filter
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r7_;  // r7

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_limit = PARAMS[1];
  Rsh_Fir_reg_installed = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // limit_isMissing = missing.0(limit)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_limit;
  Rsh_Fir_reg_limit_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if limit_isMissing then L0(NULL) else L0(limit)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_limit_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_limit_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(limit)
    Rsh_Fir_reg_limit_orDefault = Rsh_Fir_reg_limit;
    goto L0_;
  }

L0_:;
  // st limit = limit_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_limit_orDefault, RHO);
  (void)(Rsh_Fir_reg_limit_orDefault);
  // installed_isMissing = missing.0(installed)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_installed;
  Rsh_Fir_reg_installed_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if installed_isMissing then L1(FALSE) else L1(installed)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_installed_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_installed_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(installed)
    Rsh_Fir_reg_installed_orDefault = Rsh_Fir_reg_installed;
    goto L1_;
  }

L1_:;
  // st installed = installed_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_installed_orDefault, RHO);
  (void)(Rsh_Fir_reg_installed_orDefault);
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3159632791_, CCP, RHO);
  // p1 = prom<V +>{
  //   find_wide_Rd_lines_in_Rd_object = ld find_wide_Rd_lines_in_Rd_object;
  //   find_wide_Rd_lines_in_Rd_object1 = force? find_wide_Rd_lines_in_Rd_object;
  //   checkMissing(find_wide_Rd_lines_in_Rd_object1);
  //   return find_wide_Rd_lines_in_Rd_object1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3159632791_1, CCP, RHO);
  // p2 = prom<V +>{
  //   limit1 = ld limit;
  //   limit2 = force? limit1;
  //   checkMissing(limit2);
  //   return limit2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3159632791_2, CCP, RHO);
  // p3 = prom<V +>{
  //   installed1 = ld installed;
  //   installed2 = force? installed1;
  //   checkMissing(installed2);
  //   return installed2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3159632791_3, CCP, RHO);
  // r4 = dyn lapply(p, p1, p2, p3)
  SEXP Rsh_Fir_array_args6[4];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args6[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args6[3] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 4, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 6 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // st y = r4
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // Filter = ldf Filter
  Rsh_Fir_reg_Filter = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L4() else D2()
  // L4()
  goto L4_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p4 = prom<V +>{
  //   length = ld length;
  //   length1 = force? length;
  //   checkMissing(length1);
  //   return length1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3159632791_4, CCP, RHO);
  // p5 = prom<V +>{
  //   y = ld y;
  //   y1 = force? y;
  //   checkMissing(y1);
  //   return y1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3159632791_5, CCP, RHO);
  // r7 = dyn Filter(p4, p5)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Filter, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L5() else D3()
  // L5()
  goto L5_;

D3_:;
  // deopt 12 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_inner3159632791_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner3159632791_1(SEXP CCP, SEXP RHO) {
  // find_wide_Rd_lines_in_Rd_object = ld find_wide_Rd_lines_in_Rd_object
  Rsh_Fir_reg_find_wide_Rd_lines_in_Rd_object = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // find_wide_Rd_lines_in_Rd_object1 = force? find_wide_Rd_lines_in_Rd_object
  Rsh_Fir_reg_find_wide_Rd_lines_in_Rd_object1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_find_wide_Rd_lines_in_Rd_object);
  // checkMissing(find_wide_Rd_lines_in_Rd_object1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_find_wide_Rd_lines_in_Rd_object1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return find_wide_Rd_lines_in_Rd_object1
  return Rsh_Fir_reg_find_wide_Rd_lines_in_Rd_object1_;
}
SEXP Rsh_Fir_user_promise_inner3159632791_2(SEXP CCP, SEXP RHO) {
  // limit1 = ld limit
  Rsh_Fir_reg_limit1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // limit2 = force? limit1
  Rsh_Fir_reg_limit2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_limit1_);
  // checkMissing(limit2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_limit2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return limit2
  return Rsh_Fir_reg_limit2_;
}
SEXP Rsh_Fir_user_promise_inner3159632791_3(SEXP CCP, SEXP RHO) {
  // installed1 = ld installed
  Rsh_Fir_reg_installed1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // installed2 = force? installed1
  Rsh_Fir_reg_installed2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_installed1_);
  // checkMissing(installed2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_installed2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return installed2
  return Rsh_Fir_reg_installed2_;
}
SEXP Rsh_Fir_user_promise_inner3159632791_4(SEXP CCP, SEXP RHO) {
  // length = ld length
  Rsh_Fir_reg_length = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // length1 = force? length
  Rsh_Fir_reg_length1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length);
  // checkMissing(length1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_length1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return length1
  return Rsh_Fir_reg_length1_;
}
SEXP Rsh_Fir_user_promise_inner3159632791_5(SEXP CCP, SEXP RHO) {
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return y1
  return Rsh_Fir_reg_y1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
