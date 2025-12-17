#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner598434145_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner598434145_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner598434145_(SEXP CCP, SEXP RHO);
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
  // r = clos inner598434145
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner598434145_, RHO, CCP);
  // st piechart = r
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
SEXP Rsh_Fir_user_function_inner598434145_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner598434145 dynamic dispatch ([x, labels, edges, radius, density, angle, col, main, `...`])

  return Rsh_Fir_user_version_inner598434145_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner598434145_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner598434145 version 0 (*, *, *, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 9) Rsh_error("FIŘ arity mismatch for inner598434145/0: expected 9, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_labels;  // labels
  SEXP Rsh_Fir_reg_edges;  // edges
  SEXP Rsh_Fir_reg_radius;  // radius
  SEXP Rsh_Fir_reg_density;  // density
  SEXP Rsh_Fir_reg_angle;  // angle
  SEXP Rsh_Fir_reg_col;  // col
  SEXP Rsh_Fir_reg_main;  // main
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_labels_isMissing;  // labels_isMissing
  SEXP Rsh_Fir_reg_labels_orDefault;  // labels_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_edges_isMissing;  // edges_isMissing
  SEXP Rsh_Fir_reg_edges_orDefault;  // edges_orDefault
  SEXP Rsh_Fir_reg_radius_isMissing;  // radius_isMissing
  SEXP Rsh_Fir_reg_radius_orDefault;  // radius_orDefault
  SEXP Rsh_Fir_reg_density_isMissing;  // density_isMissing
  SEXP Rsh_Fir_reg_density_orDefault;  // density_orDefault
  SEXP Rsh_Fir_reg_angle_isMissing;  // angle_isMissing
  SEXP Rsh_Fir_reg_angle_orDefault;  // angle_orDefault
  SEXP Rsh_Fir_reg_col_isMissing;  // col_isMissing
  SEXP Rsh_Fir_reg_col_orDefault;  // col_orDefault
  SEXP Rsh_Fir_reg_main_isMissing;  // main_isMissing
  SEXP Rsh_Fir_reg_main_orDefault;  // main_orDefault
  SEXP Rsh_Fir_reg__Defunct;  // _Defunct
  SEXP Rsh_Fir_reg_r4_;  // r4

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_labels = PARAMS[1];
  Rsh_Fir_reg_edges = PARAMS[2];
  Rsh_Fir_reg_radius = PARAMS[3];
  Rsh_Fir_reg_density = PARAMS[4];
  Rsh_Fir_reg_angle = PARAMS[5];
  Rsh_Fir_reg_col = PARAMS[6];
  Rsh_Fir_reg_main = PARAMS[7];
  Rsh_Fir_reg_ddd = PARAMS[8];

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
  // if labels_isMissing then L0() else L1(labels)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_labels_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(labels)
    Rsh_Fir_reg_labels_orDefault = Rsh_Fir_reg_labels;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf names;
  //   base = ldf names in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   names = ldf names in base;
  //   r2 = dyn names(x2);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym x>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner598434145_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_labels_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st labels = labels_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_labels_orDefault, RHO);
  (void)(Rsh_Fir_reg_labels_orDefault);
  // edges_isMissing = missing.0(edges)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_edges;
  Rsh_Fir_reg_edges_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if edges_isMissing then L2(200.0) else L2(edges)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_edges_isMissing)) {
  // L2(200.0)
    Rsh_Fir_reg_edges_orDefault = Rsh_const(CCP, 4);
    goto L2_;
  } else {
  // L2(edges)
    Rsh_Fir_reg_edges_orDefault = Rsh_Fir_reg_edges;
    goto L2_;
  }

L2_:;
  // st edges = edges_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_edges_orDefault, RHO);
  (void)(Rsh_Fir_reg_edges_orDefault);
  // radius_isMissing = missing.0(radius)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_radius;
  Rsh_Fir_reg_radius_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if radius_isMissing then L3(0.8) else L3(radius)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_radius_isMissing)) {
  // L3(0.8)
    Rsh_Fir_reg_radius_orDefault = Rsh_const(CCP, 6);
    goto L3_;
  } else {
  // L3(radius)
    Rsh_Fir_reg_radius_orDefault = Rsh_Fir_reg_radius;
    goto L3_;
  }

L3_:;
  // st radius = radius_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_radius_orDefault, RHO);
  (void)(Rsh_Fir_reg_radius_orDefault);
  // density_isMissing = missing.0(density)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_density;
  Rsh_Fir_reg_density_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if density_isMissing then L4(NULL) else L4(density)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_density_isMissing)) {
  // L4(NULL)
    Rsh_Fir_reg_density_orDefault = Rsh_const(CCP, 8);
    goto L4_;
  } else {
  // L4(density)
    Rsh_Fir_reg_density_orDefault = Rsh_Fir_reg_density;
    goto L4_;
  }

L4_:;
  // st density = density_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_density_orDefault, RHO);
  (void)(Rsh_Fir_reg_density_orDefault);
  // angle_isMissing = missing.0(angle)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_angle;
  Rsh_Fir_reg_angle_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if angle_isMissing then L5(45.0) else L5(angle)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_angle_isMissing)) {
  // L5(45.0)
    Rsh_Fir_reg_angle_orDefault = Rsh_const(CCP, 10);
    goto L5_;
  } else {
  // L5(angle)
    Rsh_Fir_reg_angle_orDefault = Rsh_Fir_reg_angle;
    goto L5_;
  }

L5_:;
  // st angle = angle_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_angle_orDefault, RHO);
  (void)(Rsh_Fir_reg_angle_orDefault);
  // col_isMissing = missing.0(col)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_col;
  Rsh_Fir_reg_col_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if col_isMissing then L6(NULL) else L6(col)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_col_isMissing)) {
  // L6(NULL)
    Rsh_Fir_reg_col_orDefault = Rsh_const(CCP, 8);
    goto L6_;
  } else {
  // L6(col)
    Rsh_Fir_reg_col_orDefault = Rsh_Fir_reg_col;
    goto L6_;
  }

L6_:;
  // st col = col_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_col_orDefault, RHO);
  (void)(Rsh_Fir_reg_col_orDefault);
  // main_isMissing = missing.0(main)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_main;
  Rsh_Fir_reg_main_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args10);
  // if main_isMissing then L7(NULL) else L7(main)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_main_isMissing)) {
  // L7(NULL)
    Rsh_Fir_reg_main_orDefault = Rsh_const(CCP, 8);
    goto L7_;
  } else {
  // L7(main)
    Rsh_Fir_reg_main_orDefault = Rsh_Fir_reg_main;
    goto L7_;
  }

L7_:;
  // st main = main_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_main_orDefault, RHO);
  (void)(Rsh_Fir_reg_main_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // _Defunct = ldf `.Defunct`
  Rsh_Fir_reg__Defunct = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // r4 = dyn _Defunct("pie")
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__Defunct, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 3 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner598434145_(SEXP CCP, SEXP RHO) {
  // sym = ldf names
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf names in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn names(x2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
