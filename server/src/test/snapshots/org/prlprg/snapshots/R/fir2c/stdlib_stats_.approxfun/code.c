#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3653040030_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3653040030_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner3653040030
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3653040030_, RHO, CCP);
  // st `.approxfun` = r
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
SEXP Rsh_Fir_user_function_inner3653040030_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3653040030 dynamic dispatch ([x, y, v, method, yleft, yright, f, `na.rm`])

  return Rsh_Fir_user_version_inner3653040030_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3653040030_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3653040030 version 0 (*, *, *, *, *, *, *, * -+> V)

  if (NPARAMS != 8) Rsh_error("FIŘ arity mismatch for inner3653040030/0: expected 8, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_v;  // v
  SEXP Rsh_Fir_reg_method;  // method
  SEXP Rsh_Fir_reg_yleft;  // yleft
  SEXP Rsh_Fir_reg_yright;  // yright
  SEXP Rsh_Fir_reg_f;  // f
  SEXP Rsh_Fir_reg_na_rm;  // na_rm
  SEXP Rsh_Fir_reg_na_rm_isMissing;  // na_rm_isMissing
  SEXP Rsh_Fir_reg_na_rm_orDefault;  // na_rm_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_C_Approx;  // C_Approx
  SEXP Rsh_Fir_reg_C_Approx1_;  // C_Approx1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_v1_;  // v1
  SEXP Rsh_Fir_reg_v2_;  // v2
  SEXP Rsh_Fir_reg_method1_;  // method1
  SEXP Rsh_Fir_reg_method2_;  // method2
  SEXP Rsh_Fir_reg_yleft1_;  // yleft1
  SEXP Rsh_Fir_reg_yleft2_;  // yleft2
  SEXP Rsh_Fir_reg_yright1_;  // yright1
  SEXP Rsh_Fir_reg_yright2_;  // yright2
  SEXP Rsh_Fir_reg_f1_;  // f1
  SEXP Rsh_Fir_reg_f2_;  // f2
  SEXP Rsh_Fir_reg_na_rm1_;  // na_rm1
  SEXP Rsh_Fir_reg_na_rm2_;  // na_rm2
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];
  Rsh_Fir_reg_v = PARAMS[2];
  Rsh_Fir_reg_method = PARAMS[3];
  Rsh_Fir_reg_yleft = PARAMS[4];
  Rsh_Fir_reg_yright = PARAMS[5];
  Rsh_Fir_reg_f = PARAMS[6];
  Rsh_Fir_reg_na_rm = PARAMS[7];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st y = y
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_y, RHO);
  (void)(Rsh_Fir_reg_y);
  // st v = v
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_v, RHO);
  (void)(Rsh_Fir_reg_v);
  // st method = method
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_method, RHO);
  (void)(Rsh_Fir_reg_method);
  // st yleft = yleft
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_yleft, RHO);
  (void)(Rsh_Fir_reg_yleft);
  // st yright = yright
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_yright, RHO);
  (void)(Rsh_Fir_reg_yright);
  // st f = f
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_f, RHO);
  (void)(Rsh_Fir_reg_f);
  // na_rm_isMissing = missing.0(na_rm)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_na_rm;
  Rsh_Fir_reg_na_rm_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if na_rm_isMissing then L0(TRUE) else L0(na_rm)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_na_rm_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_na_rm_orDefault = Rsh_const(CCP, 8);
    goto L0_;
  } else {
  // L0(na_rm)
    Rsh_Fir_reg_na_rm_orDefault = Rsh_Fir_reg_na_rm;
    goto L0_;
  }

L0_:;
  // st `na.rm` = na_rm_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_na_rm_orDefault, RHO);
  (void)(Rsh_Fir_reg_na_rm_orDefault);
  // sym = ldf `.Call`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base = ldf `.Call` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L2_:;
  // C_Approx = ld C_Approx
  Rsh_Fir_reg_C_Approx = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r = dyn base(<sym C_Approx>, <sym x>, <sym y>, <sym v>, <sym method>, <sym yleft>, <sym yright>, <sym f>, <sym na.rm>)
  SEXP Rsh_Fir_array_args2[9];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[4] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[5] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[6] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[7] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[8] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names[9];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_array_arg_names[5] = R_MissingArg;
  Rsh_Fir_array_arg_names[6] = R_MissingArg;
  Rsh_Fir_array_arg_names[7] = R_MissingArg;
  Rsh_Fir_array_arg_names[8] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 9, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 1 [C_Approx]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_C_Approx;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // C_Approx1 = force? C_Approx
  Rsh_Fir_reg_C_Approx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_Approx);
  // checkMissing(C_Approx1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_C_Approx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 2 [C_Approx1, x1]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_C_Approx1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

D2_:;
  // deopt 3 [C_Approx1, x2, y1]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_C_Approx1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_y1_;
  Rsh_Fir_deopt(3, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L6_:;
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // v1 = ld v
  Rsh_Fir_reg_v1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

D3_:;
  // deopt 4 [C_Approx1, x2, y2, v1]
  SEXP Rsh_Fir_array_deopt_stack3[4];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_C_Approx1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_y2_;
  Rsh_Fir_array_deopt_stack3[3] = Rsh_Fir_reg_v1_;
  Rsh_Fir_deopt(4, 4, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // v2 = force? v1
  Rsh_Fir_reg_v2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v1_);
  // checkMissing(v2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_v2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // method1 = ld method
  Rsh_Fir_reg_method1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L8() else D4()
  // L8()
  goto L8_;

D4_:;
  // deopt 5 [C_Approx1, x2, y2, v2, method1]
  SEXP Rsh_Fir_array_deopt_stack4[5];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_C_Approx1_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_y2_;
  Rsh_Fir_array_deopt_stack4[3] = Rsh_Fir_reg_v2_;
  Rsh_Fir_array_deopt_stack4[4] = Rsh_Fir_reg_method1_;
  Rsh_Fir_deopt(5, 5, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L8_:;
  // method2 = force? method1
  Rsh_Fir_reg_method2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method1_);
  // checkMissing(method2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_method2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // yleft1 = ld yleft
  Rsh_Fir_reg_yleft1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L9() else D5()
  // L9()
  goto L9_;

D5_:;
  // deopt 6 [C_Approx1, x2, y2, v2, method2, yleft1]
  SEXP Rsh_Fir_array_deopt_stack5[6];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_C_Approx1_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_y2_;
  Rsh_Fir_array_deopt_stack5[3] = Rsh_Fir_reg_v2_;
  Rsh_Fir_array_deopt_stack5[4] = Rsh_Fir_reg_method2_;
  Rsh_Fir_array_deopt_stack5[5] = Rsh_Fir_reg_yleft1_;
  Rsh_Fir_deopt(6, 6, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L9_:;
  // yleft2 = force? yleft1
  Rsh_Fir_reg_yleft2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yleft1_);
  // checkMissing(yleft2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_yleft2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // yright1 = ld yright
  Rsh_Fir_reg_yright1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L10() else D6()
  // L10()
  goto L10_;

D6_:;
  // deopt 7 [C_Approx1, x2, y2, v2, method2, yleft2, yright1]
  SEXP Rsh_Fir_array_deopt_stack6[7];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_C_Approx1_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_y2_;
  Rsh_Fir_array_deopt_stack6[3] = Rsh_Fir_reg_v2_;
  Rsh_Fir_array_deopt_stack6[4] = Rsh_Fir_reg_method2_;
  Rsh_Fir_array_deopt_stack6[5] = Rsh_Fir_reg_yleft2_;
  Rsh_Fir_array_deopt_stack6[6] = Rsh_Fir_reg_yright1_;
  Rsh_Fir_deopt(7, 7, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L10_:;
  // yright2 = force? yright1
  Rsh_Fir_reg_yright2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yright1_);
  // checkMissing(yright2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_yright2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // f1 = ld f
  Rsh_Fir_reg_f1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L11() else D7()
  // L11()
  goto L11_;

D7_:;
  // deopt 8 [C_Approx1, x2, y2, v2, method2, yleft2, yright2, f1]
  SEXP Rsh_Fir_array_deopt_stack7[8];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_C_Approx1_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_y2_;
  Rsh_Fir_array_deopt_stack7[3] = Rsh_Fir_reg_v2_;
  Rsh_Fir_array_deopt_stack7[4] = Rsh_Fir_reg_method2_;
  Rsh_Fir_array_deopt_stack7[5] = Rsh_Fir_reg_yleft2_;
  Rsh_Fir_array_deopt_stack7[6] = Rsh_Fir_reg_yright2_;
  Rsh_Fir_array_deopt_stack7[7] = Rsh_Fir_reg_f1_;
  Rsh_Fir_deopt(8, 8, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L11_:;
  // f2 = force? f1
  Rsh_Fir_reg_f2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f1_);
  // checkMissing(f2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_f2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // na_rm1 = ld `na.rm`
  Rsh_Fir_reg_na_rm1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L12() else D8()
  // L12()
  goto L12_;

D8_:;
  // deopt 9 [C_Approx1, x2, y2, v2, method2, yleft2, yright2, f2, na_rm1]
  SEXP Rsh_Fir_array_deopt_stack8[9];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_C_Approx1_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_y2_;
  Rsh_Fir_array_deopt_stack8[3] = Rsh_Fir_reg_v2_;
  Rsh_Fir_array_deopt_stack8[4] = Rsh_Fir_reg_method2_;
  Rsh_Fir_array_deopt_stack8[5] = Rsh_Fir_reg_yleft2_;
  Rsh_Fir_array_deopt_stack8[6] = Rsh_Fir_reg_yright2_;
  Rsh_Fir_array_deopt_stack8[7] = Rsh_Fir_reg_f2_;
  Rsh_Fir_array_deopt_stack8[8] = Rsh_Fir_reg_na_rm1_;
  Rsh_Fir_deopt(9, 9, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L12_:;
  // na_rm2 = force? na_rm1
  Rsh_Fir_reg_na_rm2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_rm1_);
  // checkMissing(na_rm2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_na_rm2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // vargs = dots[x2, y2, v2, method2, yleft2, yright2, f2, na_rm2]
  SEXP Rsh_Fir_array_vector_values[8];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_y2_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_v2_;
  Rsh_Fir_array_vector_values[3] = Rsh_Fir_reg_method2_;
  Rsh_Fir_array_vector_values[4] = Rsh_Fir_reg_yleft2_;
  Rsh_Fir_array_vector_values[5] = Rsh_Fir_reg_yright2_;
  Rsh_Fir_array_vector_values[6] = Rsh_Fir_reg_f2_;
  Rsh_Fir_array_vector_values[7] = Rsh_Fir_reg_na_rm2_;
  SEXP Rsh_Fir_array_vector_names[8];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_array_vector_names[3] = R_MissingArg;
  Rsh_Fir_array_vector_names[4] = R_MissingArg;
  Rsh_Fir_array_vector_names[5] = R_MissingArg;
  Rsh_Fir_array_vector_names[6] = R_MissingArg;
  Rsh_Fir_array_vector_names[7] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 8, Rsh_Fir_array_vector_values, NULL);
  // r2 = `.Call`(C_Approx1, vargs, <missing>)
  SEXP Rsh_Fir_array_args12[3];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_C_Approx1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
