#include <runtime.h>
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST) {
  // FIR main dynamic dispatch from R ([])
  if (!TYPEOF(PARAMS_LIST) == VECSXP) Rsh_error("FIŘ expected a list for params");
  int NPARAMS = Rf_length(PARAMS_LIST);
  SEXP const *PARAMS = STDVEC_DATAPTR(PARAMS_LIST);
  return Rsh_Fir_user_function_main(CCP, RHO, NPARAMS, PARAMS, NULL);
}
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_reg_y3_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_c19_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = TRUE
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_const(CCP, 0), RHO);
  (void)(Rsh_const(CCP, 0));
  // st y = FALSE
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_const(CCP, 2), RHO);
  (void)(Rsh_const(CCP, 2));
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

D0_:;
  // deopt 6 [x]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(x1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args1);
  // if c then L4() else L0(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L4()
    goto L4_;
  } else {
  // L0(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c;
    goto L0_;
  }

L0_:;
  // c6 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args2);
  // if c6 then L7() else L1(c6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L7()
    goto L7_;
  } else {
  // L1(c6)
    Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c6_;
    goto L1_;
  }

L4_:;
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 8 [c, y]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(8, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return c8
  return Rsh_Fir_reg_c8_;

L5_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // c3 = `as.logical`(y1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args4);
  // c4 = `&&`(c, c3)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args5);
  // goto L0(c4)
  // L0(c4)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c4_;
  goto L0_;

L7_:;
  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 11 [c6, x2]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_deopt(11, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // c9 = `as.logical`(x3)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args7);
  // if c9 then L9() else L2(c6, c9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L9()
    goto L9_;
  } else {
  // L2(c6, c9)
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c6_;
    Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c9_;
    goto L2_;
  }

L2_:;
  // c18 = `as.logical`(c13)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args8);
  // c19 = `&&`(c12, c18)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args9);
  // goto L1(c19)
  // L1(c19)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c19_;
  goto L1_;

L9_:;
  // y2 = ld y
  Rsh_Fir_reg_y2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L10() else D3()
  // L10()
  goto L10_;

D3_:;
  // deopt 13 [c6, c9, y2]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_y2_;
  Rsh_Fir_deopt(13, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // y3 = force? y2
  Rsh_Fir_reg_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y2_);
  // checkMissing(y3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_y3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // c14 = `as.logical`(y3)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args11);
  // c15 = `&&`(c9, c14)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args12);
  // goto L2(c6, c15)
  // L2(c6, c15)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c15_;
  goto L2_;
}
