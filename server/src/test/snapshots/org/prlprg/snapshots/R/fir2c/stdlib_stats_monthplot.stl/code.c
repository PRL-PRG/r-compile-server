#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner501855257_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner501855257_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner501855257_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner501855257_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner501855257_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner501855257_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner501855257
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner501855257_, RHO, CCP);
  // st `monthplot.stl` = r
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
SEXP Rsh_Fir_user_function_inner501855257_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner501855257 dynamic dispatch ([x, labels, ylab, choice, `...`])

  return Rsh_Fir_user_version_inner501855257_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner501855257_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner501855257 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner501855257/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_labels;  // labels
  SEXP Rsh_Fir_reg_ylab;  // ylab
  SEXP Rsh_Fir_reg_choice;  // choice
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_labels_isMissing;  // labels_isMissing
  SEXP Rsh_Fir_reg_labels_orDefault;  // labels_orDefault
  SEXP Rsh_Fir_reg_ylab_isMissing;  // ylab_isMissing
  SEXP Rsh_Fir_reg_ylab_orDefault;  // ylab_orDefault
  SEXP Rsh_Fir_reg_choice1_;  // choice1
  SEXP Rsh_Fir_reg_choice2_;  // choice2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_choice_isMissing;  // choice_isMissing
  SEXP Rsh_Fir_reg_choice_orDefault;  // choice_orDefault
  SEXP Rsh_Fir_reg_monthplot;  // monthplot
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_choice3_;  // choice3
  SEXP Rsh_Fir_reg_choice4_;  // choice4
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_labels1_;  // labels1
  SEXP Rsh_Fir_reg_labels2_;  // labels2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_ylab1_;  // ylab1
  SEXP Rsh_Fir_reg_ylab2_;  // ylab2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r6_;  // r6

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_labels = PARAMS[1];
  Rsh_Fir_reg_ylab = PARAMS[2];
  Rsh_Fir_reg_choice = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // labels_isMissing = missing.0(labels)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_labels;
  Rsh_Fir_reg_labels_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if labels_isMissing then L0(NULL) else L0(labels)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_labels_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_labels_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(labels)
    Rsh_Fir_reg_labels_orDefault = Rsh_Fir_reg_labels;
    goto L0_;
  }

L0_:;
  // st labels = labels_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_labels_orDefault, RHO);
  (void)(Rsh_Fir_reg_labels_orDefault);
  // ylab_isMissing = missing.0(ylab)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_ylab;
  Rsh_Fir_reg_ylab_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if ylab_isMissing then L1() else L2(ylab)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ylab_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(ylab)
    Rsh_Fir_reg_ylab_orDefault = Rsh_Fir_reg_ylab;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   choice1 = ld choice;
  //   choice2 = force? choice1;
  //   checkMissing(choice2);
  //   return choice2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner501855257_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_ylab_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st ylab = ylab_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ylab_orDefault, RHO);
  (void)(Rsh_Fir_reg_ylab_orDefault);
  // choice_isMissing = missing.0(choice)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_choice;
  Rsh_Fir_reg_choice_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if choice_isMissing then L3("seasonal") else L3(choice)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_choice_isMissing)) {
  // L3("seasonal")
    Rsh_Fir_reg_choice_orDefault = Rsh_const(CCP, 6);
    goto L3_;
  } else {
  // L3(choice)
    Rsh_Fir_reg_choice_orDefault = Rsh_Fir_reg_choice;
    goto L3_;
  }

L3_:;
  // st choice = choice_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_choice_orDefault, RHO);
  (void)(Rsh_Fir_reg_choice_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // monthplot = ldf monthplot
  Rsh_Fir_reg_monthplot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p1 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   c = `is.object`(x2);
  //   if c then L2() else L3(x2);
  // L1(dx1):
  //   c1 = `is.object`(dx1);
  //   if c1 then L5() else L6();
  // L2():
  //   dr = tryDispatchBuiltin.1("$", x2);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L4() else L3(dr);
  // L3(x4):
  //   r1 = `$`(x4, <sym time.series>);
  //   goto L1(r1);
  // L0(dx5):
  //   return dx5;
  // L4():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L1(dx);
  // L5():
  //   dr2 = tryDispatchBuiltin.1("[", dx1);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L7() else L6();
  // L6():
  //   choice3 = ld choice;
  //   choice4 = force? choice3;
  //   __ = ldf `[` in base;
  //   r2 = dyn __(dx1, <missing>, choice4);
  //   goto L0(r2);
  // L7():
  //   dx4 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner501855257_1, CCP, RHO);
  // p2 = prom<V +>{
  //   labels1 = ld labels;
  //   labels2 = force? labels1;
  //   checkMissing(labels2);
  //   return labels2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner501855257_2, CCP, RHO);
  // p3 = prom<V +>{
  //   ylab1 = ld ylab;
  //   ylab2 = force? ylab1;
  //   checkMissing(ylab2);
  //   return ylab2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner501855257_3, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // r6 = dyn monthplot[, labels, ylab, `...`](p1, p2, p3, ddd1)
  SEXP Rsh_Fir_array_args17[4];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args17[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args17[3] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names1[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names1[3] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_monthplot, 4, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 8 [r6]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_inner501855257_(SEXP CCP, SEXP RHO) {
  // choice1 = ld choice
  Rsh_Fir_reg_choice1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // choice2 = force? choice1
  Rsh_Fir_reg_choice2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_choice1_);
  // checkMissing(choice2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_choice2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return choice2
  return Rsh_Fir_reg_choice2_;
}
SEXP Rsh_Fir_user_promise_inner501855257_1(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c then L2() else L3(x2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L2()
    goto L2_;
  } else {
  // L3(x2)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_x2_;
    goto L3_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // c1 = `is.object`(dx1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c1 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L2_:;
  // dr = tryDispatchBuiltin.1("$", x2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args7);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if dc then L4() else L3(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_dr;
    goto L3_;
  }

L3_:;
  // r1 = `$`(x4, <sym time.series>)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L1(r1)
  // L1(r1)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1_;
  goto L1_;

L4_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

L5_:;
  // dr2 = tryDispatchBuiltin.1("[", dx1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if dc1 then L7() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L7()
    goto L7_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // choice3 = ld choice
  Rsh_Fir_reg_choice3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // choice4 = force? choice3
  Rsh_Fir_reg_choice4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_choice3_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r2 = dyn __(dx1, <missing>, choice4)
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args13[2] = Rsh_Fir_reg_choice4_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r2_;
  goto L0_;

L7_:;
  // dx4 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner501855257_2(SEXP CCP, SEXP RHO) {
  // labels1 = ld labels
  Rsh_Fir_reg_labels1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // labels2 = force? labels1
  Rsh_Fir_reg_labels2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels1_);
  // checkMissing(labels2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_labels2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return labels2
  return Rsh_Fir_reg_labels2_;
}
SEXP Rsh_Fir_user_promise_inner501855257_3(SEXP CCP, SEXP RHO) {
  // ylab1 = ld ylab
  Rsh_Fir_reg_ylab1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // ylab2 = force? ylab1
  Rsh_Fir_reg_ylab2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ylab1_);
  // checkMissing(ylab2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_ylab2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return ylab2
  return Rsh_Fir_reg_ylab2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
