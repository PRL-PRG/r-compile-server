#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2112527838_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2112527838_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2112527838_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2112527838_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2112527838_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2112527838_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2112527838_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2112527838_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2112527838_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2112527838_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2112527838_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2112527838_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2112527838_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2112527838_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2112527838_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2112527838_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2112527838_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2112527838_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2112527838_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2112527838_17(SEXP CCP, SEXP RHO);
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
  // r = clos inner2112527838
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2112527838_, RHO, CCP);
  // st `text.default` = r
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
SEXP Rsh_Fir_user_function_inner2112527838_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2112527838 dynamic dispatch ([x, y, labels, adj, pos, offset, vfont, cex, col, font, `...`])

  return Rsh_Fir_user_version_inner2112527838_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2112527838_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2112527838 version 0 (*, *, *, *, *, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 11) Rsh_error("FIŘ arity mismatch for inner2112527838/0: expected 11, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_labels;  // labels
  SEXP Rsh_Fir_reg_adj;  // adj
  SEXP Rsh_Fir_reg_pos;  // pos
  SEXP Rsh_Fir_reg_offset;  // offset
  SEXP Rsh_Fir_reg_vfont;  // vfont
  SEXP Rsh_Fir_reg_cex;  // cex
  SEXP Rsh_Fir_reg_col;  // col
  SEXP Rsh_Fir_reg_font;  // font
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_y_isMissing;  // y_isMissing
  SEXP Rsh_Fir_reg_y_orDefault;  // y_orDefault
  SEXP Rsh_Fir_reg_labels_isMissing;  // labels_isMissing
  SEXP Rsh_Fir_reg_labels_orDefault;  // labels_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_adj_isMissing;  // adj_isMissing
  SEXP Rsh_Fir_reg_adj_orDefault;  // adj_orDefault
  SEXP Rsh_Fir_reg_pos_isMissing;  // pos_isMissing
  SEXP Rsh_Fir_reg_pos_orDefault;  // pos_orDefault
  SEXP Rsh_Fir_reg_offset_isMissing;  // offset_isMissing
  SEXP Rsh_Fir_reg_offset_orDefault;  // offset_orDefault
  SEXP Rsh_Fir_reg_vfont_isMissing;  // vfont_isMissing
  SEXP Rsh_Fir_reg_vfont_orDefault;  // vfont_orDefault
  SEXP Rsh_Fir_reg_cex_isMissing;  // cex_isMissing
  SEXP Rsh_Fir_reg_cex_orDefault;  // cex_orDefault
  SEXP Rsh_Fir_reg_col_isMissing;  // col_isMissing
  SEXP Rsh_Fir_reg_col_orDefault;  // col_orDefault
  SEXP Rsh_Fir_reg_font_isMissing;  // font_isMissing
  SEXP Rsh_Fir_reg_font_orDefault;  // font_orDefault
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_y4_;  // y4
  SEXP Rsh_Fir_reg_is_expression;  // is_expression
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_y5_;  // y5
  SEXP Rsh_Fir_reg_y6_;  // y6
  SEXP Rsh_Fir_reg_xy_coords;  // xy_coords
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_y7_;  // y7
  SEXP Rsh_Fir_reg_y8_;  // y8
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_as_graphicsAnnot;  // as_graphicsAnnot
  SEXP Rsh_Fir_reg_labels1_;  // labels1
  SEXP Rsh_Fir_reg_labels2_;  // labels2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_vfont1_;  // vfont1
  SEXP Rsh_Fir_reg_vfont2_;  // vfont2
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_pmatch;  // pmatch
  SEXP Rsh_Fir_reg_vfont3_;  // vfont3
  SEXP Rsh_Fir_reg_vfont4_;  // vfont4
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_vfont6_;  // vfont6
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_Hershey;  // Hershey
  SEXP Rsh_Fir_reg_Hershey1_;  // Hershey1
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_Hershey3_;  // Hershey3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_pmatch1_;  // pmatch1
  SEXP Rsh_Fir_reg_vfont7_;  // vfont7
  SEXP Rsh_Fir_reg_vfont8_;  // vfont8
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_vfont10_;  // vfont10
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_Hershey4_;  // Hershey4
  SEXP Rsh_Fir_reg_Hershey5_;  // Hershey5
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_Hershey7_;  // Hershey7
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg__External_graphics;  // _External_graphics
  SEXP Rsh_Fir_reg_C_text;  // C_text
  SEXP Rsh_Fir_reg_C_text1_;  // C_text1
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_labels3_;  // labels3
  SEXP Rsh_Fir_reg_labels4_;  // labels4
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_adj1_;  // adj1
  SEXP Rsh_Fir_reg_adj2_;  // adj2
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_pos1_;  // pos1
  SEXP Rsh_Fir_reg_pos2_;  // pos2
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_offset1_;  // offset1
  SEXP Rsh_Fir_reg_offset2_;  // offset2
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_vfont11_;  // vfont11
  SEXP Rsh_Fir_reg_vfont12_;  // vfont12
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_cex1_;  // cex1
  SEXP Rsh_Fir_reg_cex2_;  // cex2
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_col1_;  // col1
  SEXP Rsh_Fir_reg_col2_;  // col2
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_font1_;  // font1
  SEXP Rsh_Fir_reg_font2_;  // font2
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r52_;  // r52

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];
  Rsh_Fir_reg_labels = PARAMS[2];
  Rsh_Fir_reg_adj = PARAMS[3];
  Rsh_Fir_reg_pos = PARAMS[4];
  Rsh_Fir_reg_offset = PARAMS[5];
  Rsh_Fir_reg_vfont = PARAMS[6];
  Rsh_Fir_reg_cex = PARAMS[7];
  Rsh_Fir_reg_col = PARAMS[8];
  Rsh_Fir_reg_font = PARAMS[9];
  Rsh_Fir_reg_ddd = PARAMS[10];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // y_isMissing = missing.0(y)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_y;
  Rsh_Fir_reg_y_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if y_isMissing then L0(NULL) else L0(y)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_y_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_y_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(y)
    Rsh_Fir_reg_y_orDefault = Rsh_Fir_reg_y;
    goto L0_;
  }

L0_:;
  // st y = y_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_y_orDefault, RHO);
  (void)(Rsh_Fir_reg_y_orDefault);
  // labels_isMissing = missing.0(labels)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_labels;
  Rsh_Fir_reg_labels_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if labels_isMissing then L1() else L2(labels)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_labels_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(labels)
    Rsh_Fir_reg_labels_orDefault = Rsh_Fir_reg_labels;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   sym = ldf seq_along;
  //   base = ldf seq_along in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   c = `is.object`(x2);
  //   if c then L4() else L5(x2);
  // L2():
  //   r = dyn base(<lang `$`(x, x)>);
  //   goto L0(r);
  // L3(dx1):
  //   r3 = seq_along(dx1);
  //   goto L0(r3);
  // L4():
  //   dr = tryDispatchBuiltin.1("$", x2);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L6() else L5(dr);
  // L5(x4):
  //   r2 = `$`(x4, <sym x>);
  //   goto L3(r2);
  // L6():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L3(dx);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2112527838_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_labels_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st labels = labels_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_labels_orDefault, RHO);
  (void)(Rsh_Fir_reg_labels_orDefault);
  // adj_isMissing = missing.0(adj)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_adj;
  Rsh_Fir_reg_adj_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args11);
  // if adj_isMissing then L3(NULL) else L3(adj)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_adj_isMissing)) {
  // L3(NULL)
    Rsh_Fir_reg_adj_orDefault = Rsh_const(CCP, 2);
    goto L3_;
  } else {
  // L3(adj)
    Rsh_Fir_reg_adj_orDefault = Rsh_Fir_reg_adj;
    goto L3_;
  }

L3_:;
  // st adj = adj_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_adj_orDefault, RHO);
  (void)(Rsh_Fir_reg_adj_orDefault);
  // pos_isMissing = missing.0(pos)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_pos;
  Rsh_Fir_reg_pos_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args12);
  // if pos_isMissing then L4(NULL) else L4(pos)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_pos_isMissing)) {
  // L4(NULL)
    Rsh_Fir_reg_pos_orDefault = Rsh_const(CCP, 2);
    goto L4_;
  } else {
  // L4(pos)
    Rsh_Fir_reg_pos_orDefault = Rsh_Fir_reg_pos;
    goto L4_;
  }

L4_:;
  // st pos = pos_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_pos_orDefault, RHO);
  (void)(Rsh_Fir_reg_pos_orDefault);
  // offset_isMissing = missing.0(offset)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_offset;
  Rsh_Fir_reg_offset_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args13);
  // if offset_isMissing then L5(0.5) else L5(offset)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_offset_isMissing)) {
  // L5(0.5)
    Rsh_Fir_reg_offset_orDefault = Rsh_const(CCP, 10);
    goto L5_;
  } else {
  // L5(offset)
    Rsh_Fir_reg_offset_orDefault = Rsh_Fir_reg_offset;
    goto L5_;
  }

L5_:;
  // st offset = offset_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_offset_orDefault, RHO);
  (void)(Rsh_Fir_reg_offset_orDefault);
  // vfont_isMissing = missing.0(vfont)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_vfont;
  Rsh_Fir_reg_vfont_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args14);
  // if vfont_isMissing then L6(NULL) else L6(vfont)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_vfont_isMissing)) {
  // L6(NULL)
    Rsh_Fir_reg_vfont_orDefault = Rsh_const(CCP, 2);
    goto L6_;
  } else {
  // L6(vfont)
    Rsh_Fir_reg_vfont_orDefault = Rsh_Fir_reg_vfont;
    goto L6_;
  }

L6_:;
  // st vfont = vfont_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_vfont_orDefault, RHO);
  (void)(Rsh_Fir_reg_vfont_orDefault);
  // cex_isMissing = missing.0(cex)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_cex;
  Rsh_Fir_reg_cex_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args15);
  // if cex_isMissing then L7(1.0) else L7(cex)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_cex_isMissing)) {
  // L7(1.0)
    Rsh_Fir_reg_cex_orDefault = Rsh_const(CCP, 13);
    goto L7_;
  } else {
  // L7(cex)
    Rsh_Fir_reg_cex_orDefault = Rsh_Fir_reg_cex;
    goto L7_;
  }

L7_:;
  // st cex = cex_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_cex_orDefault, RHO);
  (void)(Rsh_Fir_reg_cex_orDefault);
  // col_isMissing = missing.0(col)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_col;
  Rsh_Fir_reg_col_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args16);
  // if col_isMissing then L8(NULL) else L8(col)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_col_isMissing)) {
  // L8(NULL)
    Rsh_Fir_reg_col_orDefault = Rsh_const(CCP, 2);
    goto L8_;
  } else {
  // L8(col)
    Rsh_Fir_reg_col_orDefault = Rsh_Fir_reg_col;
    goto L8_;
  }

L8_:;
  // st col = col_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_col_orDefault, RHO);
  (void)(Rsh_Fir_reg_col_orDefault);
  // font_isMissing = missing.0(font)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_font;
  Rsh_Fir_reg_font_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args17);
  // if font_isMissing then L9(NULL) else L9(font)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_font_isMissing)) {
  // L9(NULL)
    Rsh_Fir_reg_font_orDefault = Rsh_const(CCP, 2);
    goto L9_;
  } else {
  // L9(font)
    Rsh_Fir_reg_font_orDefault = Rsh_Fir_reg_font;
    goto L9_;
  }

L9_:;
  // st font = font_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_font_orDefault, RHO);
  (void)(Rsh_Fir_reg_font_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard1 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L10_:;
  // r8 = `!`(r6)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c1 then L25() else L11(c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L25()
    goto L25_;
  } else {
  // L11(c1)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c1_;
    goto L11_;
  }

L11_:;
  // c26 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c26 then L36() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L36()
    goto L36_;
  } else {
  // L15()
    goto L15_;
  }

L12_:;
  // c8 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c8 then L13(c6, c8) else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L13(c6, c8)
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c6_;
    Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c8_;
    goto L13_;
  } else {
  // L29()
    goto L29_;
  }

L13_:;
  // c23 = `as.logical`(c10)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // c24 = `&&`(c9, c23)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L11(c24)
  // L11(c24)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c24_;
  goto L11_;

L14_:;
  // c19 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // c20 = `||`(c18, c19)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_c19_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L13(c17, c20)
  // L13(c17, c20)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c20_;
  goto L13_;

L15_:;
  // goto L16()
  // L16()
  goto L16_;

L16_:;
  // xy_coords = ldf `xy.coords`
  Rsh_Fir_reg_xy_coords = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L39() else D4()
  // L39()
  goto L39_;

L17_:;
  // r22 = `!`(r21)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // c28 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c28 then L46() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L46()
    goto L46_;
  } else {
  // L18()
    goto L18_;
  }

L18_:;
  // goto L20()
  // L20()
  goto L20_;

L19_:;
  // st vfont = r24
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // goto L20()
  // L20()
  goto L20_;

L20_:;
  // sym6 = ldf `.External.graphics`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base6 = ldf `.External.graphics` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard6 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L21_:;
  // sym7 = ldf invisible
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base7 = ldf invisible in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard7 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L22_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r51
  return Rsh_Fir_reg_r51_;

L23_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r7 = dyn missing(<sym y>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L10(r7)
  // L10(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L10_;

L24_:;
  // r5 = dyn base1(<sym y>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L10(r5)
  // L10(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L10_;

L25_:;
  // sym2 = ldf `is.character`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base2 = ldf `is.character` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard2 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L26_:;
  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L28() else D0()
  // L28()
  goto L28_;

L27_:;
  // r9 = dyn base2(<sym y>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L12(c1, r9)
  // L12(c1, r9)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L12_;

D0_:;
  // deopt 5 [c1, y1]
  SEXP Rsh_Fir_array_deopt_stack[2];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack[1] = Rsh_Fir_reg_y1_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L28_:;
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // c7 = `is.character`(y2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_y2_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L12(c1, c7)
  // L12(c1, c7)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_c7_;
  goto L12_;

L29_:;
  // sym3 = ldf `is.expression`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base3 = ldf `is.expression` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard3 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L30_:;
  // y3 = ld y
  Rsh_Fir_reg_y3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L32() else D1()
  // L32()
  goto L32_;

L31_:;
  // r11 = dyn base3(<sym y>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L14(c6, c8, r11)
  // L14(c6, c8, r11)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L14_;

D1_:;
  // deopt 10 [c6, c8, y3]
  SEXP Rsh_Fir_array_deopt_stack1[3];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack1[2] = Rsh_Fir_reg_y3_;
  Rsh_Fir_deopt(10, 3, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L32_:;
  // y4 = force? y3
  Rsh_Fir_reg_y4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y3_);
  // checkMissing(y4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_y4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // is_expression = ldf `is.expression` in base
  Rsh_Fir_reg_is_expression = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r13 = dyn is_expression(y4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_y4_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_expression, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L33() else D2()
  // L33()
  goto L33_;

D2_:;
  // deopt 13 [c6, c8, r13]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(13, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L14(c6, c8, r13)
  // L14(c6, c8, r13)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L14_;

L36_:;
  // y5 = ld y
  Rsh_Fir_reg_y5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L37() else D3()
  // L37()
  goto L37_;

D3_:;
  // deopt 16 [y5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_y5_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L37_:;
  // y6 = force? y5
  Rsh_Fir_reg_y6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y5_);
  // checkMissing(y6)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_y6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // st labels = y6
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_y6_, RHO);
  (void)(Rsh_Fir_reg_y6_);
  // st y = NULL
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_const(CCP, 2), RHO);
  (void)(Rsh_const(CCP, 2));
  // goto L16()
  // L16()
  goto L16_;

D4_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // p1 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2112527838_1, CCP, RHO);
  // p2 = prom<V +>{
  //   y7 = ld y;
  //   y8 = force? y7;
  //   checkMissing(y8);
  //   return y8;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2112527838_2, CCP, RHO);
  // r17 = dyn xy_coords[, , recycle, setLab](p1, p2, TRUE, FALSE)
  SEXP Rsh_Fir_array_args44[4];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args44[2] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args44[3] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_arg_names6[3] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_xy_coords, 4, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L40() else D5()
  // L40()
  goto L40_;

D5_:;
  // deopt 32 [r17]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L40_:;
  // st x = r17
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // as_graphicsAnnot = ldf `as.graphicsAnnot`
  Rsh_Fir_reg_as_graphicsAnnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L41() else D6()
  // L41()
  goto L41_;

D6_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p3 = prom<V +>{
  //   labels1 = ld labels;
  //   labels2 = force? labels1;
  //   checkMissing(labels2);
  //   return labels2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2112527838_3, CCP, RHO);
  // r19 = dyn as_graphicsAnnot(p3)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_graphicsAnnot, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L42() else D7()
  // L42()
  goto L42_;

D7_:;
  // deopt 37 [r19]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L42_:;
  // st labels = r19
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // sym4 = ldf `is.null`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base4 = ldf `is.null` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard4 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L43_:;
  // vfont1 = ld vfont
  Rsh_Fir_reg_vfont1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L45() else D8()
  // L45()
  goto L45_;

L44_:;
  // r20 = dyn base4(<sym vfont>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L17(r20)
  // L17(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L17_;

D8_:;
  // deopt 40 [vfont1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_vfont1_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L45_:;
  // vfont2 = force? vfont1
  Rsh_Fir_reg_vfont2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vfont1_);
  // checkMissing(vfont2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_vfont2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c27 = `==`(vfont2, NULL)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_vfont2_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L17(c27)
  // L17(c27)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_c27_;
  goto L17_;

L46_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard5 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L47_:;
  // pmatch = ldf pmatch
  Rsh_Fir_reg_pmatch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L49() else D9()
  // L49()
  goto L49_;

L48_:;
  // r23 = dyn base5[typeface, fontindex](<lang pmatch(`[`(vfont, 1), `$`(Hershey, typeface))>, <lang pmatch(`[`(vfont, 2), `$`(Hershey, fontindex))>)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L19(r23)
  // L19(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L19_;

D9_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // p4 = prom<V +>{
  //   vfont3 = ld vfont;
  //   vfont4 = force? vfont3;
  //   checkMissing(vfont4);
  //   c29 = `is.object`(vfont4);
  //   if c29 then L1() else L2(vfont4);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[", vfont4);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(vfont6):
  //   __ = ldf `[` in base;
  //   r25 = dyn __(vfont6, 1);
  //   goto L0(r25);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2112527838_4, CCP, RHO);
  // p5 = prom<V +>{
  //   Hershey = ld Hershey;
  //   Hershey1 = force? Hershey;
  //   checkMissing(Hershey1);
  //   c30 = `is.object`(Hershey1);
  //   if c30 then L1() else L2(Hershey1);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("$", Hershey1);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(Hershey3):
  //   r27 = `$`(Hershey3, <sym typeface>);
  //   goto L0(r27);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2112527838_5, CCP, RHO);
  // r29 = dyn pmatch(p4, p5)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmatch, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L50() else D10()
  // L50()
  goto L50_;

D10_:;
  // deopt 50 [r29]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L50_:;
  // pmatch1 = ldf pmatch
  Rsh_Fir_reg_pmatch1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L51() else D11()
  // L51()
  goto L51_;

D11_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L51_:;
  // p6 = prom<V +>{
  //   vfont7 = ld vfont;
  //   vfont8 = force? vfont7;
  //   checkMissing(vfont8);
  //   c31 = `is.object`(vfont8);
  //   if c31 then L1() else L2(vfont8);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[", vfont8);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(vfont10):
  //   __1 = ldf `[` in base;
  //   r30 = dyn __1(vfont10, 2);
  //   goto L0(r30);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2112527838_6, CCP, RHO);
  // p7 = prom<V +>{
  //   Hershey4 = ld Hershey;
  //   Hershey5 = force? Hershey4;
  //   checkMissing(Hershey5);
  //   c32 = `is.object`(Hershey5);
  //   if c32 then L1() else L2(Hershey5);
  // L0(dx9):
  //   return dx9;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("$", Hershey5);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(Hershey7):
  //   r32 = `$`(Hershey7, <sym fontindex>);
  //   goto L0(r32);
  // L3():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx8);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2112527838_7, CCP, RHO);
  // r34 = dyn pmatch1(p6, p7)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmatch1_, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L52() else D12()
  // L52()
  goto L52_;

D12_:;
  // deopt 56 [r34]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L52_:;
  // c33 = ldf c in base
  Rsh_Fir_reg_c33_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r35 = dyn c33(r29, r34)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c33_, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L53() else D13()
  // L53()
  goto L53_;

D13_:;
  // deopt 59 [r35]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L53_:;
  // goto L19(r35)
  // L19(r35)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r35_;
  goto L19_;

L55_:;
  // _External_graphics = ldf `.External.graphics`
  Rsh_Fir_reg__External_graphics = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L57() else D14()
  // L57()
  goto L57_;

L56_:;
  // r37 = dyn base6(<sym C_text>, <sym x>, <sym labels>, <sym adj>, <sym pos>, <sym offset>, <sym vfont>, <sym cex>, <sym col>, <sym font>, <sym ...>)
  SEXP Rsh_Fir_array_args80[11];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args80[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args80[3] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args80[4] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args80[5] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args80[6] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args80[7] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args80[8] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args80[9] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args80[10] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names15[11];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_array_arg_names15[4] = R_MissingArg;
  Rsh_Fir_array_arg_names15[5] = R_MissingArg;
  Rsh_Fir_array_arg_names15[6] = R_MissingArg;
  Rsh_Fir_array_arg_names15[7] = R_MissingArg;
  Rsh_Fir_array_arg_names15[8] = R_MissingArg;
  Rsh_Fir_array_arg_names15[9] = R_MissingArg;
  Rsh_Fir_array_arg_names15[10] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 11, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L21()
  // L21()
  goto L21_;

D14_:;
  // deopt 65 []
  Rsh_Fir_deopt(65, 0, NULL, CCP, RHO);
  return R_NilValue;

L57_:;
  // p8 = prom<V +>{
  //   C_text = ld C_text;
  //   C_text1 = force? C_text;
  //   checkMissing(C_text1);
  //   return C_text1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2112527838_8, CCP, RHO);
  // p9 = prom<V +>{
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   return x8;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2112527838_9, CCP, RHO);
  // p10 = prom<V +>{
  //   labels3 = ld labels;
  //   labels4 = force? labels3;
  //   checkMissing(labels4);
  //   return labels4;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2112527838_10, CCP, RHO);
  // p11 = prom<V +>{
  //   adj1 = ld adj;
  //   adj2 = force? adj1;
  //   checkMissing(adj2);
  //   return adj2;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2112527838_11, CCP, RHO);
  // p12 = prom<V +>{
  //   pos1 = ld pos;
  //   pos2 = force? pos1;
  //   checkMissing(pos2);
  //   return pos2;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2112527838_12, CCP, RHO);
  // p13 = prom<V +>{
  //   offset1 = ld offset;
  //   offset2 = force? offset1;
  //   checkMissing(offset2);
  //   return offset2;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2112527838_13, CCP, RHO);
  // p14 = prom<V +>{
  //   vfont11 = ld vfont;
  //   vfont12 = force? vfont11;
  //   checkMissing(vfont12);
  //   return vfont12;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2112527838_14, CCP, RHO);
  // p15 = prom<V +>{
  //   cex1 = ld cex;
  //   cex2 = force? cex1;
  //   checkMissing(cex2);
  //   return cex2;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2112527838_15, CCP, RHO);
  // p16 = prom<V +>{
  //   col1 = ld col;
  //   col2 = force? col1;
  //   checkMissing(col2);
  //   return col2;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2112527838_16, CCP, RHO);
  // p17 = prom<V +>{
  //   font1 = ld font;
  //   font2 = force? font1;
  //   checkMissing(font2);
  //   return font2;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2112527838_17, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // r49 = dyn _External_graphics[, , , , , , , , , , `...`](p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, ddd1)
  SEXP Rsh_Fir_array_args91[11];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args91[2] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args91[3] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args91[4] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args91[5] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args91[6] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args91[7] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args91[8] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args91[9] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args91[10] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names16[11];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_array_arg_names16[4] = R_MissingArg;
  Rsh_Fir_array_arg_names16[5] = R_MissingArg;
  Rsh_Fir_array_arg_names16[6] = R_MissingArg;
  Rsh_Fir_array_arg_names16[7] = R_MissingArg;
  Rsh_Fir_array_arg_names16[8] = R_MissingArg;
  Rsh_Fir_array_arg_names16[9] = R_MissingArg;
  Rsh_Fir_array_arg_names16[10] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External_graphics, 11, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L58() else D15()
  // L58()
  goto L58_;

D15_:;
  // deopt 77 [r49]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L21()
  // L21()
  goto L21_;

L59_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r52 = dyn invisible()
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 0, NULL, NULL, CCP, RHO);
  // check L61() else D16()
  // L61()
  goto L61_;

L60_:;
  // r50 = dyn base7()
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 0, NULL, NULL, CCP, RHO);
  // goto L22(r50)
  // L22(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L22_;

D16_:;
  // deopt 81 [r52]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L22(r52)
  // L22(r52)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r52_;
  goto L22_;
}
SEXP Rsh_Fir_user_promise_inner2112527838_(SEXP CCP, SEXP RHO) {
  // sym = ldf seq_along
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf seq_along in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
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
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L4() else L5(x2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L4()
    goto L4_;
  } else {
  // L5(x2)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_x2_;
    goto L5_;
  }

L2_:;
  // r = dyn base(<lang `$`(x, x)>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

L3_:;
  // r3 = seq_along(dx1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r3_;
  goto L0_;

L4_:;
  // dr = tryDispatchBuiltin.1("$", x2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args7);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if dc then L6() else L5(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_dr;
    goto L5_;
  }

L5_:;
  // r2 = `$`(x4, <sym x>)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r2_;
  goto L3_;

L6_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L3(dx)
  // L3(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner2112527838_1(SEXP CCP, SEXP RHO) {
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner2112527838_2(SEXP CCP, SEXP RHO) {
  // y7 = ld y
  Rsh_Fir_reg_y7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // y8 = force? y7
  Rsh_Fir_reg_y8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y7_);
  // checkMissing(y8)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_y8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return y8
  return Rsh_Fir_reg_y8_;
}
SEXP Rsh_Fir_user_promise_inner2112527838_3(SEXP CCP, SEXP RHO) {
  // labels1 = ld labels
  Rsh_Fir_reg_labels1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // labels2 = force? labels1
  Rsh_Fir_reg_labels2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels1_);
  // checkMissing(labels2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_labels2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return labels2
  return Rsh_Fir_reg_labels2_;
}
SEXP Rsh_Fir_user_promise_inner2112527838_4(SEXP CCP, SEXP RHO) {
  // vfont3 = ld vfont
  Rsh_Fir_reg_vfont3_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // vfont4 = force? vfont3
  Rsh_Fir_reg_vfont4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vfont3_);
  // checkMissing(vfont4)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_vfont4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // c29 = `is.object`(vfont4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_vfont4_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if c29 then L1() else L2(vfont4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L1()
    goto L1_;
  } else {
  // L2(vfont4)
    Rsh_Fir_reg_vfont6_ = Rsh_Fir_reg_vfont4_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[", vfont4)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_vfont4_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args55);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_vfont6_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r25 = dyn __(vfont6, 1)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_vfont6_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r25_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2112527838_5(SEXP CCP, SEXP RHO) {
  // Hershey = ld Hershey
  Rsh_Fir_reg_Hershey = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // Hershey1 = force? Hershey
  Rsh_Fir_reg_Hershey1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Hershey);
  // checkMissing(Hershey1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_Hershey1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(Hershey1)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_Hershey1_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if c30 then L1() else L2(Hershey1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L1()
    goto L1_;
  } else {
  // L2(Hershey1)
    Rsh_Fir_reg_Hershey3_ = Rsh_Fir_reg_Hershey1_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("$", Hershey1)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_Hershey1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args61);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_Hershey3_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // r27 = `$`(Hershey3, <sym typeface>)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_Hershey3_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r27_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2112527838_6(SEXP CCP, SEXP RHO) {
  // vfont7 = ld vfont
  Rsh_Fir_reg_vfont7_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // vfont8 = force? vfont7
  Rsh_Fir_reg_vfont8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vfont7_);
  // checkMissing(vfont8)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_vfont8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(vfont8)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_vfont8_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if c31 then L1() else L2(vfont8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L1()
    goto L1_;
  } else {
  // L2(vfont8)
    Rsh_Fir_reg_vfont10_ = Rsh_Fir_reg_vfont8_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[", vfont8)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_vfont8_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args68);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_vfont10_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r30 = dyn __1(vfont10, 2)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_vfont10_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r30)
  // L0(r30)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r30_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2112527838_7(SEXP CCP, SEXP RHO) {
  // Hershey4 = ld Hershey
  Rsh_Fir_reg_Hershey4_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // Hershey5 = force? Hershey4
  Rsh_Fir_reg_Hershey5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Hershey4_);
  // checkMissing(Hershey5)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_Hershey5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // c32 = `is.object`(Hershey5)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_Hershey5_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if c32 then L1() else L2(Hershey5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L1()
    goto L1_;
  } else {
  // L2(Hershey5)
    Rsh_Fir_reg_Hershey7_ = Rsh_Fir_reg_Hershey5_;
    goto L2_;
  }

L0_:;
  // return dx9
  return Rsh_Fir_reg_dx9_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("$", Hershey5)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_Hershey5_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args74);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_Hershey7_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // r32 = `$`(Hershey7, <sym fontindex>)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_Hershey7_;
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L0(r32)
  // L0(r32)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r32_;
  goto L0_;

L3_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2112527838_8(SEXP CCP, SEXP RHO) {
  // C_text = ld C_text
  Rsh_Fir_reg_C_text = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // C_text1 = force? C_text
  Rsh_Fir_reg_C_text1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_text);
  // checkMissing(C_text1)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_C_text1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // return C_text1
  return Rsh_Fir_reg_C_text1_;
}
SEXP Rsh_Fir_user_promise_inner2112527838_9(SEXP CCP, SEXP RHO) {
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // return x8
  return Rsh_Fir_reg_x8_;
}
SEXP Rsh_Fir_user_promise_inner2112527838_10(SEXP CCP, SEXP RHO) {
  // labels3 = ld labels
  Rsh_Fir_reg_labels3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // labels4 = force? labels3
  Rsh_Fir_reg_labels4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels3_);
  // checkMissing(labels4)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_labels4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // return labels4
  return Rsh_Fir_reg_labels4_;
}
SEXP Rsh_Fir_user_promise_inner2112527838_11(SEXP CCP, SEXP RHO) {
  // adj1 = ld adj
  Rsh_Fir_reg_adj1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // adj2 = force? adj1
  Rsh_Fir_reg_adj2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_adj1_);
  // checkMissing(adj2)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_adj2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // return adj2
  return Rsh_Fir_reg_adj2_;
}
SEXP Rsh_Fir_user_promise_inner2112527838_12(SEXP CCP, SEXP RHO) {
  // pos1 = ld pos
  Rsh_Fir_reg_pos1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // pos2 = force? pos1
  Rsh_Fir_reg_pos2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos1_);
  // checkMissing(pos2)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_pos2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // return pos2
  return Rsh_Fir_reg_pos2_;
}
SEXP Rsh_Fir_user_promise_inner2112527838_13(SEXP CCP, SEXP RHO) {
  // offset1 = ld offset
  Rsh_Fir_reg_offset1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // offset2 = force? offset1
  Rsh_Fir_reg_offset2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_offset1_);
  // checkMissing(offset2)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_offset2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // return offset2
  return Rsh_Fir_reg_offset2_;
}
SEXP Rsh_Fir_user_promise_inner2112527838_14(SEXP CCP, SEXP RHO) {
  // vfont11 = ld vfont
  Rsh_Fir_reg_vfont11_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // vfont12 = force? vfont11
  Rsh_Fir_reg_vfont12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vfont11_);
  // checkMissing(vfont12)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_vfont12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // return vfont12
  return Rsh_Fir_reg_vfont12_;
}
SEXP Rsh_Fir_user_promise_inner2112527838_15(SEXP CCP, SEXP RHO) {
  // cex1 = ld cex
  Rsh_Fir_reg_cex1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // cex2 = force? cex1
  Rsh_Fir_reg_cex2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cex1_);
  // checkMissing(cex2)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_cex2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // return cex2
  return Rsh_Fir_reg_cex2_;
}
SEXP Rsh_Fir_user_promise_inner2112527838_16(SEXP CCP, SEXP RHO) {
  // col1 = ld col
  Rsh_Fir_reg_col1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // col2 = force? col1
  Rsh_Fir_reg_col2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col1_);
  // checkMissing(col2)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_col2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // return col2
  return Rsh_Fir_reg_col2_;
}
SEXP Rsh_Fir_user_promise_inner2112527838_17(SEXP CCP, SEXP RHO) {
  // font1 = ld font
  Rsh_Fir_reg_font1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // font2 = force? font1
  Rsh_Fir_reg_font2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_font1_);
  // checkMissing(font2)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_font2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // return font2
  return Rsh_Fir_reg_font2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
