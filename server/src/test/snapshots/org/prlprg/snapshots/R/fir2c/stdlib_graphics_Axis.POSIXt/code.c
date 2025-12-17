#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner794228160_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner794228160_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner794228160_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner794228160_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner794228160_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner794228160_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner794228160
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner794228160_, RHO, CCP);
  // st `Axis.POSIXt` = r
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
SEXP Rsh_Fir_user_function_inner794228160_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner794228160 dynamic dispatch ([x, at, `...`, side, labels])

  return Rsh_Fir_user_version_inner794228160_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner794228160_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner794228160 version 0 (*, *, dots, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner794228160/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_at;  // at
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_side;  // side
  SEXP Rsh_Fir_reg_labels;  // labels
  SEXP Rsh_Fir_reg_x_isMissing;  // x_isMissing
  SEXP Rsh_Fir_reg_x_orDefault;  // x_orDefault
  SEXP Rsh_Fir_reg_at_isMissing;  // at_isMissing
  SEXP Rsh_Fir_reg_at_orDefault;  // at_orDefault
  SEXP Rsh_Fir_reg_labels_isMissing;  // labels_isMissing
  SEXP Rsh_Fir_reg_labels_orDefault;  // labels_orDefault
  SEXP Rsh_Fir_reg_axis_POSIXct;  // axis_POSIXct
  SEXP Rsh_Fir_reg_side1_;  // side1
  SEXP Rsh_Fir_reg_side2_;  // side2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_at1_;  // at1
  SEXP Rsh_Fir_reg_at2_;  // at2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_labels1_;  // labels1
  SEXP Rsh_Fir_reg_labels2_;  // labels2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r4_;  // r4

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_at = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];
  Rsh_Fir_reg_side = PARAMS[3];
  Rsh_Fir_reg_labels = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // x_isMissing = missing.0(x)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_x;
  Rsh_Fir_reg_x_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if x_isMissing then L0(NULL) else L0(x)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_x_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_x_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(x)
    Rsh_Fir_reg_x_orDefault = Rsh_Fir_reg_x;
    goto L0_;
  }

L0_:;
  // st x = x_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x_orDefault, RHO);
  (void)(Rsh_Fir_reg_x_orDefault);
  // at_isMissing = missing.0(at)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_at;
  Rsh_Fir_reg_at_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if at_isMissing then L1(NULL) else L1(at)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_at_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_at_orDefault = Rsh_const(CCP, 1);
    goto L1_;
  } else {
  // L1(at)
    Rsh_Fir_reg_at_orDefault = Rsh_Fir_reg_at;
    goto L1_;
  }

L1_:;
  // st at = at_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_at_orDefault, RHO);
  (void)(Rsh_Fir_reg_at_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // st side = side
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_side, RHO);
  (void)(Rsh_Fir_reg_side);
  // labels_isMissing = missing.0(labels)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_labels;
  Rsh_Fir_reg_labels_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if labels_isMissing then L2(TRUE) else L2(labels)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_labels_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_labels_orDefault = Rsh_const(CCP, 6);
    goto L2_;
  } else {
  // L2(labels)
    Rsh_Fir_reg_labels_orDefault = Rsh_Fir_reg_labels;
    goto L2_;
  }

L2_:;
  // st labels = labels_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_labels_orDefault, RHO);
  (void)(Rsh_Fir_reg_labels_orDefault);
  // axis_POSIXct = ldf `axis.POSIXct`
  Rsh_Fir_reg_axis_POSIXct = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   side1 = ld side;
  //   side2 = force? side1;
  //   checkMissing(side2);
  //   return side2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner794228160_, CCP, RHO);
  // p1 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner794228160_1, CCP, RHO);
  // p2 = prom<V +>{
  //   at1 = ld at;
  //   at2 = force? at1;
  //   checkMissing(at2);
  //   return at2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner794228160_2, CCP, RHO);
  // p3 = prom<V +>{
  //   labels1 = ld labels;
  //   labels2 = force? labels1;
  //   checkMissing(labels2);
  //   return labels2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner794228160_3, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // r4 = dyn axis_POSIXct[side, x, at, labels, `...`](p, p1, p2, p3, ddd1)
  SEXP Rsh_Fir_array_args7[5];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args7[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args7[3] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args7[4] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names[5];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names[3] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names[4] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_axis_POSIXct, 5, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 11 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner794228160_(SEXP CCP, SEXP RHO) {
  // side1 = ld side
  Rsh_Fir_reg_side1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // side2 = force? side1
  Rsh_Fir_reg_side2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_side1_);
  // checkMissing(side2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_side2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return side2
  return Rsh_Fir_reg_side2_;
}
SEXP Rsh_Fir_user_promise_inner794228160_1(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner794228160_2(SEXP CCP, SEXP RHO) {
  // at1 = ld at
  Rsh_Fir_reg_at1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // at2 = force? at1
  Rsh_Fir_reg_at2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_at1_);
  // checkMissing(at2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_at2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return at2
  return Rsh_Fir_reg_at2_;
}
SEXP Rsh_Fir_user_promise_inner794228160_3(SEXP CCP, SEXP RHO) {
  // labels1 = ld labels
  Rsh_Fir_reg_labels1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // labels2 = force? labels1
  Rsh_Fir_reg_labels2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels1_);
  // checkMissing(labels2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_labels2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return labels2
  return Rsh_Fir_reg_labels2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
