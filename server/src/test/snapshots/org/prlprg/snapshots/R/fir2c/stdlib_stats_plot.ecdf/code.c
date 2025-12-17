#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2238593217_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2238593217_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2238593217_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2238593217_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2238593217_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2238593217_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2238593217_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2238593217_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner2238593217
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2238593217_, RHO, CCP);
  // st `plot.ecdf` = r
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
SEXP Rsh_Fir_user_function_inner2238593217_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2238593217 dynamic dispatch ([x, `...`, ylab, verticals, `col.01line`, pch])

  return Rsh_Fir_user_version_inner2238593217_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2238593217_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2238593217 version 0 (*, dots, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner2238593217/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_ylab;  // ylab
  SEXP Rsh_Fir_reg_verticals;  // verticals
  SEXP Rsh_Fir_reg_col_01line;  // col_01line
  SEXP Rsh_Fir_reg_pch;  // pch
  SEXP Rsh_Fir_reg_ylab_isMissing;  // ylab_isMissing
  SEXP Rsh_Fir_reg_ylab_orDefault;  // ylab_orDefault
  SEXP Rsh_Fir_reg_verticals_isMissing;  // verticals_isMissing
  SEXP Rsh_Fir_reg_verticals_orDefault;  // verticals_orDefault
  SEXP Rsh_Fir_reg_col_01line_isMissing;  // col_01line_isMissing
  SEXP Rsh_Fir_reg_col_01line_orDefault;  // col_01line_orDefault
  SEXP Rsh_Fir_reg_pch_isMissing;  // pch_isMissing
  SEXP Rsh_Fir_reg_pch_orDefault;  // pch_orDefault
  SEXP Rsh_Fir_reg_plot_stepfun;  // plot_stepfun
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_ylab1_;  // ylab1
  SEXP Rsh_Fir_reg_ylab2_;  // ylab2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_verticals1_;  // verticals1
  SEXP Rsh_Fir_reg_verticals2_;  // verticals2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_pch1_;  // pch1
  SEXP Rsh_Fir_reg_pch2_;  // pch2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_abline;  // abline
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_col_01line1_;  // col_01line1
  SEXP Rsh_Fir_reg_col_01line2_;  // col_01line2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r10_;  // r10

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];
  Rsh_Fir_reg_ylab = PARAMS[2];
  Rsh_Fir_reg_verticals = PARAMS[3];
  Rsh_Fir_reg_col_01line = PARAMS[4];
  Rsh_Fir_reg_pch = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // ylab_isMissing = missing.0(ylab)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_ylab;
  Rsh_Fir_reg_ylab_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if ylab_isMissing then L0("Fn(x)") else L0(ylab)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ylab_isMissing)) {
  // L0("Fn(x)")
    Rsh_Fir_reg_ylab_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(ylab)
    Rsh_Fir_reg_ylab_orDefault = Rsh_Fir_reg_ylab;
    goto L0_;
  }

L0_:;
  // st ylab = ylab_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ylab_orDefault, RHO);
  (void)(Rsh_Fir_reg_ylab_orDefault);
  // verticals_isMissing = missing.0(verticals)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_verticals;
  Rsh_Fir_reg_verticals_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if verticals_isMissing then L1(FALSE) else L1(verticals)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_verticals_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_verticals_orDefault = Rsh_const(CCP, 5);
    goto L1_;
  } else {
  // L1(verticals)
    Rsh_Fir_reg_verticals_orDefault = Rsh_Fir_reg_verticals;
    goto L1_;
  }

L1_:;
  // st verticals = verticals_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_verticals_orDefault, RHO);
  (void)(Rsh_Fir_reg_verticals_orDefault);
  // col_01line_isMissing = missing.0(col_01line)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_col_01line;
  Rsh_Fir_reg_col_01line_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if col_01line_isMissing then L2("gray70") else L2(col_01line)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_col_01line_isMissing)) {
  // L2("gray70")
    Rsh_Fir_reg_col_01line_orDefault = Rsh_const(CCP, 7);
    goto L2_;
  } else {
  // L2(col_01line)
    Rsh_Fir_reg_col_01line_orDefault = Rsh_Fir_reg_col_01line;
    goto L2_;
  }

L2_:;
  // st `col.01line` = col_01line_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_col_01line_orDefault, RHO);
  (void)(Rsh_Fir_reg_col_01line_orDefault);
  // pch_isMissing = missing.0(pch)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_pch;
  Rsh_Fir_reg_pch_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if pch_isMissing then L3(19.0) else L3(pch)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_pch_isMissing)) {
  // L3(19.0)
    Rsh_Fir_reg_pch_orDefault = Rsh_const(CCP, 9);
    goto L3_;
  } else {
  // L3(pch)
    Rsh_Fir_reg_pch_orDefault = Rsh_Fir_reg_pch;
    goto L3_;
  }

L3_:;
  // st pch = pch_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_pch_orDefault, RHO);
  (void)(Rsh_Fir_reg_pch_orDefault);
  // plot_stepfun = ldf `plot.stepfun`
  Rsh_Fir_reg_plot_stepfun = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2238593217_, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // p1 = prom<V +>{
  //   ylab1 = ld ylab;
  //   ylab2 = force? ylab1;
  //   checkMissing(ylab2);
  //   return ylab2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2238593217_1, CCP, RHO);
  // p2 = prom<V +>{
  //   verticals1 = ld verticals;
  //   verticals2 = force? verticals1;
  //   checkMissing(verticals2);
  //   return verticals2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2238593217_2, CCP, RHO);
  // p3 = prom<V +>{
  //   pch1 = ld pch;
  //   pch2 = force? pch1;
  //   checkMissing(pch2);
  //   return pch2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2238593217_3, CCP, RHO);
  // r4 = dyn plot_stepfun[, `...`, ylab, verticals, pch](p, ddd1, p1, p2, p3)
  SEXP Rsh_Fir_array_args8[5];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_ddd1_;
  Rsh_Fir_array_args8[2] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args8[3] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args8[4] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names[5];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names[3] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names[4] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot_stepfun, 5, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 10 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // abline = ldf abline
  Rsh_Fir_reg_abline = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

D2_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p4 = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r6):
  //   return r6;
  // L1():
  //   c = ldf c in base;
  //   r7 = dyn c(0.0, 1.0);
  //   goto L0(r7);
  // L2():
  //   r5 = dyn base(0.0, 1.0);
  //   goto L0(r5);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2238593217_4, CCP, RHO);
  // p5 = prom<V +>{
  //   col_01line1 = ld `col.01line`;
  //   col_01line2 = force? col_01line1;
  //   checkMissing(col_01line2);
  //   return col_01line2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2238593217_5, CCP, RHO);
  // r10 = dyn abline[h, col, lty](p4, p5, 2.0)
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abline, 3, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

D3_:;
  // deopt 19 [r10]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_inner2238593217_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner2238593217_1(SEXP CCP, SEXP RHO) {
  // ylab1 = ld ylab
  Rsh_Fir_reg_ylab1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // ylab2 = force? ylab1
  Rsh_Fir_reg_ylab2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ylab1_);
  // checkMissing(ylab2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_ylab2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return ylab2
  return Rsh_Fir_reg_ylab2_;
}
SEXP Rsh_Fir_user_promise_inner2238593217_2(SEXP CCP, SEXP RHO) {
  // verticals1 = ld verticals
  Rsh_Fir_reg_verticals1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // verticals2 = force? verticals1
  Rsh_Fir_reg_verticals2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_verticals1_);
  // checkMissing(verticals2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_verticals2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return verticals2
  return Rsh_Fir_reg_verticals2_;
}
SEXP Rsh_Fir_user_promise_inner2238593217_3(SEXP CCP, SEXP RHO) {
  // pch1 = ld pch
  Rsh_Fir_reg_pch1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // pch2 = force? pch1
  Rsh_Fir_reg_pch2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pch1_);
  // checkMissing(pch2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_pch2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return pch2
  return Rsh_Fir_reg_pch2_;
}
SEXP Rsh_Fir_user_promise_inner2238593217_4(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r6
  return Rsh_Fir_reg_r6_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r7 = dyn c(0.0, 1.0)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L0_;

L2_:;
  // r5 = dyn base(0.0, 1.0)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2238593217_5(SEXP CCP, SEXP RHO) {
  // col_01line1 = ld `col.01line`
  Rsh_Fir_reg_col_01line1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // col_01line2 = force? col_01line1
  Rsh_Fir_reg_col_01line2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_01line1_);
  // checkMissing(col_01line2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_col_01line2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return col_01line2
  return Rsh_Fir_reg_col_01line2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
