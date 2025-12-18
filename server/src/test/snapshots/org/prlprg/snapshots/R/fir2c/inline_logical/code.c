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
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_reg_y3_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_y4_;
  SEXP Rsh_Fir_reg_y5_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_y6_;
  SEXP Rsh_Fir_reg_y7_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_y8_;
  SEXP Rsh_Fir_reg_y9_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_y10_;
  SEXP Rsh_Fir_reg_y11_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_y12_;
  SEXP Rsh_Fir_reg_y13_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_reg_y14_;
  SEXP Rsh_Fir_reg_y15_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r11_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = TRUE
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_const(CCP, 0), RHO);
  (void)(Rsh_const(CCP, 0));
  // st y = NA_LGL
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_const(CCP, 2), RHO);
  (void)(Rsh_const(CCP, 2));
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r = dyn base(<lang `==`(x, y)>, <lang `!=`(x, y)>, <lang `<`(x, y)>, <lang `<=`(x, y)>, <lang `>`(x, y)>, <lang `>=`(x, y)>, <lang `&`(x, y)>, <lang `|`(x, y)>, <lang `!`(x)>)
  SEXP Rsh_Fir_array_args1[9];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args1[3] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args1[4] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args1[5] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args1[6] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args1[7] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args1[8] = Rsh_const(CCP, 13);
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
  Rsh_Fir_reg_r = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 9, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r;
  goto L0_;

D0_:;
  // deopt 8 [x]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 9 [x1, y]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(9, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // r2 = `==`(x1, y1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args4);
  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 12 [x2]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // y2 = ld y
  Rsh_Fir_reg_y2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 13 [x3, y2]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_y2_;
  Rsh_Fir_deopt(13, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L6_:;
  // y3 = force? y2
  Rsh_Fir_reg_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y2_);
  // checkMissing(y3)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_y3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // r3 = `!=`(x3, y3)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_y3_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args7);
  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 16 [x4]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L7_:;
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // y4 = ld y
  Rsh_Fir_reg_y4_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

D5_:;
  // deopt 17 [x5, y4]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_y4_;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L8_:;
  // y5 = force? y4
  Rsh_Fir_reg_y5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y4_);
  // checkMissing(y5)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_y5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // r4 = `<`(x5, y5)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_y5_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args10);
  // x6 = ld x
  Rsh_Fir_reg_x6_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

D6_:;
  // deopt 20 [x6]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L9_:;
  // x7 = force? x6
  Rsh_Fir_reg_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x6_);
  // checkMissing(x7)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // y6 = ld y
  Rsh_Fir_reg_y6_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

D7_:;
  // deopt 21 [x7, y6]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_y6_;
  Rsh_Fir_deopt(21, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L10_:;
  // y7 = force? y6
  Rsh_Fir_reg_y7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y6_);
  // checkMissing(y7)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_y7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // r5 = `<=`(x7, y7)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_y7_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(77, RHO, 2, Rsh_Fir_array_args13);
  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

D8_:;
  // deopt 24 [x8]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L11_:;
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // y8 = ld y
  Rsh_Fir_reg_y8_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L12() else D9()
  // L12()
  goto L12_;

D9_:;
  // deopt 25 [x9, y8]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_y8_;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L12_:;
  // y9 = force? y8
  Rsh_Fir_reg_y9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y8_);
  // checkMissing(y9)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_y9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // r6 = `>`(x9, y9)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_y9_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args16);
  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L13() else D10()
  // L13()
  goto L13_;

D10_:;
  // deopt 28 [x10]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L13_:;
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // y10 = ld y
  Rsh_Fir_reg_y10_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L14() else D11()
  // L14()
  goto L14_;

D11_:;
  // deopt 29 [x11, y10]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_y10_;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L14_:;
  // y11 = force? y10
  Rsh_Fir_reg_y11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y10_);
  // checkMissing(y11)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_y11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // r7 = `>=`(x11, y11)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_y11_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(78, RHO, 2, Rsh_Fir_array_args19);
  // x12 = ld x
  Rsh_Fir_reg_x12_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L15() else D12()
  // L15()
  goto L15_;

D12_:;
  // deopt 32 [x12]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L15_:;
  // x13 = force? x12
  Rsh_Fir_reg_x13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x12_);
  // checkMissing(x13)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_x13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // y12 = ld y
  Rsh_Fir_reg_y12_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L16() else D13()
  // L16()
  goto L16_;

D13_:;
  // deopt 33 [x13, y12]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_y12_;
  Rsh_Fir_deopt(33, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L16_:;
  // y13 = force? y12
  Rsh_Fir_reg_y13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y12_);
  // checkMissing(y13)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_y13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // r8 = `&&`(x13, y13)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_y13_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args22);
  // x14 = ld x
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L17() else D14()
  // L17()
  goto L17_;

D14_:;
  // deopt 36 [x14]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L17_:;
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // y14 = ld y
  Rsh_Fir_reg_y14_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L18() else D15()
  // L18()
  goto L18_;

D15_:;
  // deopt 37 [x15, y14]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_x15_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_y14_;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L18_:;
  // y15 = force? y14
  Rsh_Fir_reg_y15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y14_);
  // checkMissing(y15)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_y15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // r9 = `||`(x15, y15)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_x15_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_y15_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args25);
  // x16 = ld x
  Rsh_Fir_reg_x16_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L19() else D16()
  // L19()
  goto L19_;

D16_:;
  // deopt 40 [x16]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L19_:;
  // x17 = force? x16
  Rsh_Fir_reg_x17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x16_);
  // checkMissing(x17)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_x17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // r10 = `!`(x17)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args27);
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r11 = dyn list(r2, r3, r4, r5, r6, r7, r8, r9, r10)
  SEXP Rsh_Fir_array_args28[9];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args28[2] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args28[3] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_args28[4] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args28[5] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args28[6] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args28[7] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args28[8] = Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_array_arg_names1[9];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_array_arg_names1[5] = R_MissingArg;
  Rsh_Fir_array_arg_names1[6] = R_MissingArg;
  Rsh_Fir_array_arg_names1[7] = R_MissingArg;
  Rsh_Fir_array_arg_names1[8] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 9, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names1, RHO);
  // check L20() else D17()
  // L20()
  goto L20_;

D17_:;
  // deopt 44 [r11]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r11_;
  goto L0_;
}
