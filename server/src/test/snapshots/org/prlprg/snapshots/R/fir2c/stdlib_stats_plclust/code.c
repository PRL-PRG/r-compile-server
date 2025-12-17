#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2521727330_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2521727330_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner2521727330
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2521727330_, RHO, CCP);
  // st plclust = r
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
SEXP Rsh_Fir_user_function_inner2521727330_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2521727330 dynamic dispatch ([tree, hang, unit, level, hmin, square, labels, `plot.`, axes, `frame.plot`, ann, main, sub, xlab, ylab])

  return Rsh_Fir_user_version_inner2521727330_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2521727330_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2521727330 version 0 (*, *, *, *, *, *, *, *, *, *, *, *, *, *, * -+> V)

  if (NPARAMS != 15) Rsh_error("FIŘ arity mismatch for inner2521727330/0: expected 15, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_tree;  // tree
  SEXP Rsh_Fir_reg_hang;  // hang
  SEXP Rsh_Fir_reg_unit;  // unit
  SEXP Rsh_Fir_reg_level;  // level
  SEXP Rsh_Fir_reg_hmin;  // hmin
  SEXP Rsh_Fir_reg_square;  // square
  SEXP Rsh_Fir_reg_labels;  // labels
  SEXP Rsh_Fir_reg_plot_;  // plot_
  SEXP Rsh_Fir_reg_axes;  // axes
  SEXP Rsh_Fir_reg_frame_plot;  // frame_plot
  SEXP Rsh_Fir_reg_ann;  // ann
  SEXP Rsh_Fir_reg_main;  // main
  SEXP Rsh_Fir_reg_sub;  // sub
  SEXP Rsh_Fir_reg_xlab;  // xlab
  SEXP Rsh_Fir_reg_ylab;  // ylab
  SEXP Rsh_Fir_reg_hang_isMissing;  // hang_isMissing
  SEXP Rsh_Fir_reg_hang_orDefault;  // hang_orDefault
  SEXP Rsh_Fir_reg_unit_isMissing;  // unit_isMissing
  SEXP Rsh_Fir_reg_unit_orDefault;  // unit_orDefault
  SEXP Rsh_Fir_reg_level_isMissing;  // level_isMissing
  SEXP Rsh_Fir_reg_level_orDefault;  // level_orDefault
  SEXP Rsh_Fir_reg_hmin_isMissing;  // hmin_isMissing
  SEXP Rsh_Fir_reg_hmin_orDefault;  // hmin_orDefault
  SEXP Rsh_Fir_reg_square_isMissing;  // square_isMissing
  SEXP Rsh_Fir_reg_square_orDefault;  // square_orDefault
  SEXP Rsh_Fir_reg_labels_isMissing;  // labels_isMissing
  SEXP Rsh_Fir_reg_labels_orDefault;  // labels_orDefault
  SEXP Rsh_Fir_reg_plot__isMissing;  // plot__isMissing
  SEXP Rsh_Fir_reg_plot__orDefault;  // plot__orDefault
  SEXP Rsh_Fir_reg_axes_isMissing;  // axes_isMissing
  SEXP Rsh_Fir_reg_axes_orDefault;  // axes_orDefault
  SEXP Rsh_Fir_reg_frame_plot_isMissing;  // frame_plot_isMissing
  SEXP Rsh_Fir_reg_frame_plot_orDefault;  // frame_plot_orDefault
  SEXP Rsh_Fir_reg_ann_isMissing;  // ann_isMissing
  SEXP Rsh_Fir_reg_ann_orDefault;  // ann_orDefault
  SEXP Rsh_Fir_reg_main_isMissing;  // main_isMissing
  SEXP Rsh_Fir_reg_main_orDefault;  // main_orDefault
  SEXP Rsh_Fir_reg_sub_isMissing;  // sub_isMissing
  SEXP Rsh_Fir_reg_sub_orDefault;  // sub_orDefault
  SEXP Rsh_Fir_reg_xlab_isMissing;  // xlab_isMissing
  SEXP Rsh_Fir_reg_xlab_orDefault;  // xlab_orDefault
  SEXP Rsh_Fir_reg_ylab_isMissing;  // ylab_isMissing
  SEXP Rsh_Fir_reg_ylab_orDefault;  // ylab_orDefault
  SEXP Rsh_Fir_reg__Defunct;  // _Defunct
  SEXP Rsh_Fir_reg_r1;  // r

  // Bind parameters
  Rsh_Fir_reg_tree = PARAMS[0];
  Rsh_Fir_reg_hang = PARAMS[1];
  Rsh_Fir_reg_unit = PARAMS[2];
  Rsh_Fir_reg_level = PARAMS[3];
  Rsh_Fir_reg_hmin = PARAMS[4];
  Rsh_Fir_reg_square = PARAMS[5];
  Rsh_Fir_reg_labels = PARAMS[6];
  Rsh_Fir_reg_plot_ = PARAMS[7];
  Rsh_Fir_reg_axes = PARAMS[8];
  Rsh_Fir_reg_frame_plot = PARAMS[9];
  Rsh_Fir_reg_ann = PARAMS[10];
  Rsh_Fir_reg_main = PARAMS[11];
  Rsh_Fir_reg_sub = PARAMS[12];
  Rsh_Fir_reg_xlab = PARAMS[13];
  Rsh_Fir_reg_ylab = PARAMS[14];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st tree = tree
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_tree, RHO);
  (void)(Rsh_Fir_reg_tree);
  // hang_isMissing = missing.0(hang)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_hang;
  Rsh_Fir_reg_hang_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if hang_isMissing then L0(0.1) else L0(hang)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_hang_isMissing)) {
  // L0(0.1)
    Rsh_Fir_reg_hang_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(hang)
    Rsh_Fir_reg_hang_orDefault = Rsh_Fir_reg_hang;
    goto L0_;
  }

L0_:;
  // st hang = hang_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_hang_orDefault, RHO);
  (void)(Rsh_Fir_reg_hang_orDefault);
  // unit_isMissing = missing.0(unit)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_unit;
  Rsh_Fir_reg_unit_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if unit_isMissing then L1(FALSE) else L1(unit)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_unit_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_unit_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(unit)
    Rsh_Fir_reg_unit_orDefault = Rsh_Fir_reg_unit;
    goto L1_;
  }

L1_:;
  // st unit = unit_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_unit_orDefault, RHO);
  (void)(Rsh_Fir_reg_unit_orDefault);
  // level_isMissing = missing.0(level)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_level;
  Rsh_Fir_reg_level_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if level_isMissing then L2(FALSE) else L2(level)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_level_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_level_orDefault = Rsh_const(CCP, 4);
    goto L2_;
  } else {
  // L2(level)
    Rsh_Fir_reg_level_orDefault = Rsh_Fir_reg_level;
    goto L2_;
  }

L2_:;
  // st level = level_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_level_orDefault, RHO);
  (void)(Rsh_Fir_reg_level_orDefault);
  // hmin_isMissing = missing.0(hmin)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_hmin;
  Rsh_Fir_reg_hmin_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if hmin_isMissing then L3(0.0) else L3(hmin)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_hmin_isMissing)) {
  // L3(0.0)
    Rsh_Fir_reg_hmin_orDefault = Rsh_const(CCP, 7);
    goto L3_;
  } else {
  // L3(hmin)
    Rsh_Fir_reg_hmin_orDefault = Rsh_Fir_reg_hmin;
    goto L3_;
  }

L3_:;
  // st hmin = hmin_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_hmin_orDefault, RHO);
  (void)(Rsh_Fir_reg_hmin_orDefault);
  // square_isMissing = missing.0(square)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_square;
  Rsh_Fir_reg_square_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if square_isMissing then L4(TRUE) else L4(square)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_square_isMissing)) {
  // L4(TRUE)
    Rsh_Fir_reg_square_orDefault = Rsh_const(CCP, 9);
    goto L4_;
  } else {
  // L4(square)
    Rsh_Fir_reg_square_orDefault = Rsh_Fir_reg_square;
    goto L4_;
  }

L4_:;
  // st square = square_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_square_orDefault, RHO);
  (void)(Rsh_Fir_reg_square_orDefault);
  // labels_isMissing = missing.0(labels)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_labels;
  Rsh_Fir_reg_labels_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if labels_isMissing then L5(NULL) else L5(labels)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_labels_isMissing)) {
  // L5(NULL)
    Rsh_Fir_reg_labels_orDefault = Rsh_const(CCP, 11);
    goto L5_;
  } else {
  // L5(labels)
    Rsh_Fir_reg_labels_orDefault = Rsh_Fir_reg_labels;
    goto L5_;
  }

L5_:;
  // st labels = labels_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_labels_orDefault, RHO);
  (void)(Rsh_Fir_reg_labels_orDefault);
  // plot__isMissing = missing.0(plot_)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_plot_;
  Rsh_Fir_reg_plot__isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if plot__isMissing then L6(TRUE) else L6(plot_)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_plot__isMissing)) {
  // L6(TRUE)
    Rsh_Fir_reg_plot__orDefault = Rsh_const(CCP, 9);
    goto L6_;
  } else {
  // L6(plot_)
    Rsh_Fir_reg_plot__orDefault = Rsh_Fir_reg_plot_;
    goto L6_;
  }

L6_:;
  // st `plot.` = plot__orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_plot__orDefault, RHO);
  (void)(Rsh_Fir_reg_plot__orDefault);
  // axes_isMissing = missing.0(axes)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_axes;
  Rsh_Fir_reg_axes_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if axes_isMissing then L7(TRUE) else L7(axes)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_axes_isMissing)) {
  // L7(TRUE)
    Rsh_Fir_reg_axes_orDefault = Rsh_const(CCP, 9);
    goto L7_;
  } else {
  // L7(axes)
    Rsh_Fir_reg_axes_orDefault = Rsh_Fir_reg_axes;
    goto L7_;
  }

L7_:;
  // st axes = axes_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_axes_orDefault, RHO);
  (void)(Rsh_Fir_reg_axes_orDefault);
  // frame_plot_isMissing = missing.0(frame_plot)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_frame_plot;
  Rsh_Fir_reg_frame_plot_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if frame_plot_isMissing then L8(FALSE) else L8(frame_plot)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_frame_plot_isMissing)) {
  // L8(FALSE)
    Rsh_Fir_reg_frame_plot_orDefault = Rsh_const(CCP, 4);
    goto L8_;
  } else {
  // L8(frame_plot)
    Rsh_Fir_reg_frame_plot_orDefault = Rsh_Fir_reg_frame_plot;
    goto L8_;
  }

L8_:;
  // st `frame.plot` = frame_plot_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_frame_plot_orDefault, RHO);
  (void)(Rsh_Fir_reg_frame_plot_orDefault);
  // ann_isMissing = missing.0(ann)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_ann;
  Rsh_Fir_reg_ann_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if ann_isMissing then L9(TRUE) else L9(ann)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ann_isMissing)) {
  // L9(TRUE)
    Rsh_Fir_reg_ann_orDefault = Rsh_const(CCP, 9);
    goto L9_;
  } else {
  // L9(ann)
    Rsh_Fir_reg_ann_orDefault = Rsh_Fir_reg_ann;
    goto L9_;
  }

L9_:;
  // st ann = ann_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_ann_orDefault, RHO);
  (void)(Rsh_Fir_reg_ann_orDefault);
  // main_isMissing = missing.0(main)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_main;
  Rsh_Fir_reg_main_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args10);
  // if main_isMissing then L10("") else L10(main)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_main_isMissing)) {
  // L10("")
    Rsh_Fir_reg_main_orDefault = Rsh_const(CCP, 17);
    goto L10_;
  } else {
  // L10(main)
    Rsh_Fir_reg_main_orDefault = Rsh_Fir_reg_main;
    goto L10_;
  }

L10_:;
  // st main = main_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_main_orDefault, RHO);
  (void)(Rsh_Fir_reg_main_orDefault);
  // sub_isMissing = missing.0(sub)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sub;
  Rsh_Fir_reg_sub_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args11);
  // if sub_isMissing then L11(NULL) else L11(sub)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_sub_isMissing)) {
  // L11(NULL)
    Rsh_Fir_reg_sub_orDefault = Rsh_const(CCP, 11);
    goto L11_;
  } else {
  // L11(sub)
    Rsh_Fir_reg_sub_orDefault = Rsh_Fir_reg_sub;
    goto L11_;
  }

L11_:;
  // st sub = sub_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_sub_orDefault, RHO);
  (void)(Rsh_Fir_reg_sub_orDefault);
  // xlab_isMissing = missing.0(xlab)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_xlab;
  Rsh_Fir_reg_xlab_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args12);
  // if xlab_isMissing then L12(NULL) else L12(xlab)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_xlab_isMissing)) {
  // L12(NULL)
    Rsh_Fir_reg_xlab_orDefault = Rsh_const(CCP, 11);
    goto L12_;
  } else {
  // L12(xlab)
    Rsh_Fir_reg_xlab_orDefault = Rsh_Fir_reg_xlab;
    goto L12_;
  }

L12_:;
  // st xlab = xlab_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_xlab_orDefault, RHO);
  (void)(Rsh_Fir_reg_xlab_orDefault);
  // ylab_isMissing = missing.0(ylab)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_ylab;
  Rsh_Fir_reg_ylab_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args13);
  // if ylab_isMissing then L13("Height") else L13(ylab)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ylab_isMissing)) {
  // L13("Height")
    Rsh_Fir_reg_ylab_orDefault = Rsh_const(CCP, 21);
    goto L13_;
  } else {
  // L13(ylab)
    Rsh_Fir_reg_ylab_orDefault = Rsh_Fir_reg_ylab;
    goto L13_;
  }

L13_:;
  // st ylab = ylab_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_ylab_orDefault, RHO);
  (void)(Rsh_Fir_reg_ylab_orDefault);
  // _Defunct = ldf `.Defunct`
  Rsh_Fir_reg__Defunct = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L14() else D0()
  // L14()
  goto L14_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // r = dyn _Defunct("plot")
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__Defunct, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L15() else D1()
  // L15()
  goto L15_;

D1_:;
  // deopt 3 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L15_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
