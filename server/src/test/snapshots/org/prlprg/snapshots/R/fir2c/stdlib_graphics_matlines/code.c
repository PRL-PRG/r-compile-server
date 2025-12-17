#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2782963986_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2782963986_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2782963986_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2782963986_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2782963986_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2782963986_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2782963986_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2782963986_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2782963986_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2782963986_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2782963986_8(SEXP CCP, SEXP RHO);
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
  // r = clos inner2782963986
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2782963986_, RHO, CCP);
  // st matlines = r
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
SEXP Rsh_Fir_user_function_inner2782963986_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2782963986 dynamic dispatch ([x, y, type, lty, lwd, pch, col, `...`])

  return Rsh_Fir_user_version_inner2782963986_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2782963986_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2782963986 version 0 (*, *, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 8) Rsh_error("FIŘ arity mismatch for inner2782963986/0: expected 8, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_type;  // type
  SEXP Rsh_Fir_reg_lty;  // lty
  SEXP Rsh_Fir_reg_lwd;  // lwd
  SEXP Rsh_Fir_reg_pch;  // pch
  SEXP Rsh_Fir_reg_col;  // col
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_type_isMissing;  // type_isMissing
  SEXP Rsh_Fir_reg_type_orDefault;  // type_orDefault
  SEXP Rsh_Fir_reg_lty_isMissing;  // lty_isMissing
  SEXP Rsh_Fir_reg_lty_orDefault;  // lty_orDefault
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_lwd_isMissing;  // lwd_isMissing
  SEXP Rsh_Fir_reg_lwd_orDefault;  // lwd_orDefault
  SEXP Rsh_Fir_reg_pch_isMissing;  // pch_isMissing
  SEXP Rsh_Fir_reg_pch_orDefault;  // pch_orDefault
  SEXP Rsh_Fir_reg_col_isMissing;  // col_isMissing
  SEXP Rsh_Fir_reg_col_orDefault;  // col_orDefault
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_matplot;  // matplot
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_type1_;  // type1
  SEXP Rsh_Fir_reg_type2_;  // type2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_lty1_;  // lty1
  SEXP Rsh_Fir_reg_lty2_;  // lty2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_lwd1_;  // lwd1
  SEXP Rsh_Fir_reg_lwd2_;  // lwd2
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_pch1_;  // pch1
  SEXP Rsh_Fir_reg_pch2_;  // pch2
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_col1_;  // col1
  SEXP Rsh_Fir_reg_col2_;  // col2
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r9_;  // r9

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];
  Rsh_Fir_reg_type = PARAMS[2];
  Rsh_Fir_reg_lty = PARAMS[3];
  Rsh_Fir_reg_lwd = PARAMS[4];
  Rsh_Fir_reg_pch = PARAMS[5];
  Rsh_Fir_reg_col = PARAMS[6];
  Rsh_Fir_reg_ddd = PARAMS[7];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st y = y
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_y, RHO);
  (void)(Rsh_Fir_reg_y);
  // type_isMissing = missing.0(type)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_type;
  Rsh_Fir_reg_type_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if type_isMissing then L0("l") else L0(type)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_type_isMissing)) {
  // L0("l")
    Rsh_Fir_reg_type_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(type)
    Rsh_Fir_reg_type_orDefault = Rsh_Fir_reg_type;
    goto L0_;
  }

L0_:;
  // st type = type_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_type_orDefault, RHO);
  (void)(Rsh_Fir_reg_type_orDefault);
  // lty_isMissing = missing.0(lty)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_lty;
  Rsh_Fir_reg_lty_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if lty_isMissing then L1() else L2(lty)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lty_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(lty)
    Rsh_Fir_reg_lty_orDefault = Rsh_Fir_reg_lty;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   return <int 1, 2, 3, 4, 5>;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2782963986_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_lty_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st lty = lty_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_lty_orDefault, RHO);
  (void)(Rsh_Fir_reg_lty_orDefault);
  // lwd_isMissing = missing.0(lwd)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_lwd;
  Rsh_Fir_reg_lwd_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if lwd_isMissing then L3(1.0) else L3(lwd)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lwd_isMissing)) {
  // L3(1.0)
    Rsh_Fir_reg_lwd_orDefault = Rsh_const(CCP, 7);
    goto L3_;
  } else {
  // L3(lwd)
    Rsh_Fir_reg_lwd_orDefault = Rsh_Fir_reg_lwd;
    goto L3_;
  }

L3_:;
  // st lwd = lwd_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_lwd_orDefault, RHO);
  (void)(Rsh_Fir_reg_lwd_orDefault);
  // pch_isMissing = missing.0(pch)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_pch;
  Rsh_Fir_reg_pch_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if pch_isMissing then L4(NULL) else L4(pch)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_pch_isMissing)) {
  // L4(NULL)
    Rsh_Fir_reg_pch_orDefault = Rsh_const(CCP, 9);
    goto L4_;
  } else {
  // L4(pch)
    Rsh_Fir_reg_pch_orDefault = Rsh_Fir_reg_pch;
    goto L4_;
  }

L4_:;
  // st pch = pch_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_pch_orDefault, RHO);
  (void)(Rsh_Fir_reg_pch_orDefault);
  // col_isMissing = missing.0(col)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_col;
  Rsh_Fir_reg_col_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if col_isMissing then L5() else L6(col)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_col_isMissing)) {
  // L5()
    goto L5_;
  } else {
  // L6(col)
    Rsh_Fir_reg_col_orDefault = Rsh_Fir_reg_col;
    goto L6_;
  }

L5_:;
  // p1 = prom<V +>{
  //   return <int 1, 2, 3, 4, 5, 6>;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2782963986_1, CCP, RHO);
  // goto L6(p1)
  // L6(p1)
  Rsh_Fir_reg_col_orDefault = Rsh_Fir_reg_p1_;
  goto L6_;

L6_:;
  // st col = col_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_col_orDefault, RHO);
  (void)(Rsh_Fir_reg_col_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // matplot = ldf matplot
  Rsh_Fir_reg_matplot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p2 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2782963986_2, CCP, RHO);
  // p3 = prom<V +>{
  //   y1 = ld y;
  //   y2 = force? y1;
  //   checkMissing(y2);
  //   return y2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2782963986_3, CCP, RHO);
  // p4 = prom<V +>{
  //   type1 = ld type;
  //   type2 = force? type1;
  //   checkMissing(type2);
  //   return type2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2782963986_4, CCP, RHO);
  // p5 = prom<V +>{
  //   lty1 = ld lty;
  //   lty2 = force? lty1;
  //   checkMissing(lty2);
  //   return lty2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2782963986_5, CCP, RHO);
  // p6 = prom<V +>{
  //   lwd1 = ld lwd;
  //   lwd2 = force? lwd1;
  //   checkMissing(lwd2);
  //   return lwd2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2782963986_6, CCP, RHO);
  // p7 = prom<V +>{
  //   pch1 = ld pch;
  //   pch2 = force? pch1;
  //   checkMissing(pch2);
  //   return pch2;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2782963986_7, CCP, RHO);
  // p8 = prom<V +>{
  //   col1 = ld col;
  //   col2 = force? col1;
  //   checkMissing(col2);
  //   return col2;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2782963986_8, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // r9 = dyn matplot[x, y, type, lty, lwd, pch, col, add, `...`](p2, p3, p4, p5, p6, p7, p8, TRUE, ddd1)
  SEXP Rsh_Fir_array_args12[9];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args12[2] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args12[3] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args12[4] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args12[5] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args12[6] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args12[7] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args12[8] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names[9];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names[3] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names[4] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names[5] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names[6] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names[7] = Rsh_const(CCP, 16);
  Rsh_Fir_array_arg_names[8] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matplot, 9, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 19 [r9]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r9
  return Rsh_Fir_reg_r9_;
}
SEXP Rsh_Fir_user_promise_inner2782963986_(SEXP CCP, SEXP RHO) {
  // return <int 1, 2, 3, 4, 5>
  return Rsh_const(CCP, 5);
}
SEXP Rsh_Fir_user_promise_inner2782963986_1(SEXP CCP, SEXP RHO) {
  // return <int 1, 2, 3, 4, 5, 6>
  return Rsh_const(CCP, 11);
}
SEXP Rsh_Fir_user_promise_inner2782963986_2(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner2782963986_3(SEXP CCP, SEXP RHO) {
  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return y2
  return Rsh_Fir_reg_y2_;
}
SEXP Rsh_Fir_user_promise_inner2782963986_4(SEXP CCP, SEXP RHO) {
  // type1 = ld type
  Rsh_Fir_reg_type1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // type2 = force? type1
  Rsh_Fir_reg_type2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type1_);
  // checkMissing(type2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_type2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return type2
  return Rsh_Fir_reg_type2_;
}
SEXP Rsh_Fir_user_promise_inner2782963986_5(SEXP CCP, SEXP RHO) {
  // lty1 = ld lty
  Rsh_Fir_reg_lty1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // lty2 = force? lty1
  Rsh_Fir_reg_lty2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lty1_);
  // checkMissing(lty2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_lty2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return lty2
  return Rsh_Fir_reg_lty2_;
}
SEXP Rsh_Fir_user_promise_inner2782963986_6(SEXP CCP, SEXP RHO) {
  // lwd1 = ld lwd
  Rsh_Fir_reg_lwd1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // lwd2 = force? lwd1
  Rsh_Fir_reg_lwd2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lwd1_);
  // checkMissing(lwd2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_lwd2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return lwd2
  return Rsh_Fir_reg_lwd2_;
}
SEXP Rsh_Fir_user_promise_inner2782963986_7(SEXP CCP, SEXP RHO) {
  // pch1 = ld pch
  Rsh_Fir_reg_pch1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // pch2 = force? pch1
  Rsh_Fir_reg_pch2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pch1_);
  // checkMissing(pch2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_pch2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return pch2
  return Rsh_Fir_reg_pch2_;
}
SEXP Rsh_Fir_user_promise_inner2782963986_8(SEXP CCP, SEXP RHO) {
  // col1 = ld col
  Rsh_Fir_reg_col1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // col2 = force? col1
  Rsh_Fir_reg_col2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col1_);
  // checkMissing(col2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_col2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return col2
  return Rsh_Fir_reg_col2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
