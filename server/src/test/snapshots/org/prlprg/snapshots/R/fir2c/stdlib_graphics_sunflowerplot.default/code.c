#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3279863723_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3279863723_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3279863723_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_18(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_19(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_20(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_21(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_22(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_23(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_24(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_25(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_26(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_27(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_28(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_29(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_30(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_31(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_32(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_33(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_34(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_35(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_36(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3279863723_37(SEXP CCP, SEXP RHO);
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
  // r = clos inner3279863723
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3279863723_, RHO, CCP);
  // st `sunflowerplot.default` = r
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
SEXP Rsh_Fir_user_function_inner3279863723_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3279863723 dynamic dispatch ([x, y, number, log, digits, xlab, ylab, xlim, ylim, add, rotate, pch, cex, `cex.fact`, col, bg, size, `seg.col`, `seg.lwd`, `...`])

  return Rsh_Fir_user_version_inner3279863723_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3279863723_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3279863723 version 0 (*, *, *, *, *, *, *, *, *, *, *, *, *, *, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 20) Rsh_error("FIŘ arity mismatch for inner3279863723/0: expected 20, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_number;  // number
  SEXP Rsh_Fir_reg_log;  // log
  SEXP Rsh_Fir_reg_digits;  // digits
  SEXP Rsh_Fir_reg_xlab;  // xlab
  SEXP Rsh_Fir_reg_ylab;  // ylab
  SEXP Rsh_Fir_reg_xlim;  // xlim
  SEXP Rsh_Fir_reg_ylim;  // ylim
  SEXP Rsh_Fir_reg_add;  // add
  SEXP Rsh_Fir_reg_rotate;  // rotate
  SEXP Rsh_Fir_reg_pch;  // pch
  SEXP Rsh_Fir_reg_cex;  // cex
  SEXP Rsh_Fir_reg_cex_fact;  // cex_fact
  SEXP Rsh_Fir_reg_col;  // col
  SEXP Rsh_Fir_reg_bg;  // bg
  SEXP Rsh_Fir_reg_size;  // size
  SEXP Rsh_Fir_reg_seg_col;  // seg_col
  SEXP Rsh_Fir_reg_seg_lwd;  // seg_lwd
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_y_isMissing;  // y_isMissing
  SEXP Rsh_Fir_reg_y_orDefault;  // y_orDefault
  SEXP Rsh_Fir_reg_log_isMissing;  // log_isMissing
  SEXP Rsh_Fir_reg_log_orDefault;  // log_orDefault
  SEXP Rsh_Fir_reg_digits_isMissing;  // digits_isMissing
  SEXP Rsh_Fir_reg_digits_orDefault;  // digits_orDefault
  SEXP Rsh_Fir_reg_xlab_isMissing;  // xlab_isMissing
  SEXP Rsh_Fir_reg_xlab_orDefault;  // xlab_orDefault
  SEXP Rsh_Fir_reg_ylab_isMissing;  // ylab_isMissing
  SEXP Rsh_Fir_reg_ylab_orDefault;  // ylab_orDefault
  SEXP Rsh_Fir_reg_xlim_isMissing;  // xlim_isMissing
  SEXP Rsh_Fir_reg_xlim_orDefault;  // xlim_orDefault
  SEXP Rsh_Fir_reg_ylim_isMissing;  // ylim_isMissing
  SEXP Rsh_Fir_reg_ylim_orDefault;  // ylim_orDefault
  SEXP Rsh_Fir_reg_add_isMissing;  // add_isMissing
  SEXP Rsh_Fir_reg_add_orDefault;  // add_orDefault
  SEXP Rsh_Fir_reg_rotate_isMissing;  // rotate_isMissing
  SEXP Rsh_Fir_reg_rotate_orDefault;  // rotate_orDefault
  SEXP Rsh_Fir_reg_pch_isMissing;  // pch_isMissing
  SEXP Rsh_Fir_reg_pch_orDefault;  // pch_orDefault
  SEXP Rsh_Fir_reg_cex_isMissing;  // cex_isMissing
  SEXP Rsh_Fir_reg_cex_orDefault;  // cex_orDefault
  SEXP Rsh_Fir_reg_cex_fact_isMissing;  // cex_fact_isMissing
  SEXP Rsh_Fir_reg_cex_fact_orDefault;  // cex_fact_orDefault
  SEXP Rsh_Fir_reg_col_isMissing;  // col_isMissing
  SEXP Rsh_Fir_reg_col_orDefault;  // col_orDefault
  SEXP Rsh_Fir_reg_par;  // par
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_bg_isMissing;  // bg_isMissing
  SEXP Rsh_Fir_reg_bg_orDefault;  // bg_orDefault
  SEXP Rsh_Fir_reg_size_isMissing;  // size_isMissing
  SEXP Rsh_Fir_reg_size_orDefault;  // size_orDefault
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_seg_col_isMissing;  // seg_col_isMissing
  SEXP Rsh_Fir_reg_seg_col_orDefault;  // seg_col_orDefault
  SEXP Rsh_Fir_reg_seg_lwd_isMissing;  // seg_lwd_isMissing
  SEXP Rsh_Fir_reg_seg_lwd_orDefault;  // seg_lwd_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_deparse1_;  // deparse1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_substitute;  // substitute
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_missing1_;  // missing1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_deparse2_;  // deparse2
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_substitute1_;  // substitute1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_all;  // all
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_is_xyn;  // is_xyn
  SEXP Rsh_Fir_reg_is_xyn1_;  // is_xyn1
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_xy_coords;  // xy_coords
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_xlabel;  // xlabel
  SEXP Rsh_Fir_reg_xlabel1_;  // xlabel1
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_ylabel;  // ylabel
  SEXP Rsh_Fir_reg_ylabel1_;  // ylabel1
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_log1_;  // log1
  SEXP Rsh_Fir_reg_log2_;  // log2
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_add1_;  // add1
  SEXP Rsh_Fir_reg_add2_;  // add2
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_xlab1_;  // xlab1
  SEXP Rsh_Fir_reg_xlab2_;  // xlab2
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_xy;  // xy
  SEXP Rsh_Fir_reg_xy1_;  // xy1
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_xy3_;  // xy3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_ylab1_;  // ylab1
  SEXP Rsh_Fir_reg_ylab2_;  // ylab2
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_xy4_;  // xy4
  SEXP Rsh_Fir_reg_xy5_;  // xy5
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_xy7_;  // xy7
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_xlim1_;  // xlim1
  SEXP Rsh_Fir_reg_xlim2_;  // xlim2
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_xy8_;  // xy8
  SEXP Rsh_Fir_reg_xy9_;  // xy9
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_xy11_;  // xy11
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_xy12_;  // xy12
  SEXP Rsh_Fir_reg_xy13_;  // xy13
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_xy15_;  // xy15
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_is_finite;  // is_finite
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_range;  // range
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_ylim1_;  // ylim1
  SEXP Rsh_Fir_reg_ylim2_;  // ylim2
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_xy16_;  // xy16
  SEXP Rsh_Fir_reg_xy17_;  // xy17
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_xy19_;  // xy19
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_xy20_;  // xy20
  SEXP Rsh_Fir_reg_xy21_;  // xy21
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_xy23_;  // xy23
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_is_finite1_;  // is_finite1
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_range1_;  // range1
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_xy24_;  // xy24
  SEXP Rsh_Fir_reg_xy25_;  // xy25
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_xy27_;  // xy27
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_missing2_;  // missing2
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_xyTable;  // xyTable
  SEXP Rsh_Fir_reg_xy28_;  // xy28
  SEXP Rsh_Fir_reg_xy29_;  // xy29
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_digits1_;  // digits1
  SEXP Rsh_Fir_reg_digits2_;  // digits2
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_tt;  // tt
  SEXP Rsh_Fir_reg_tt1_;  // tt1
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_tt3_;  // tt3
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx40_;  // dx40
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_tt4_;  // tt4
  SEXP Rsh_Fir_reg_tt5_;  // tt5
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_tt7_;  // tt7
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx42_;  // dx42
  SEXP Rsh_Fir_reg_dx43_;  // dx43
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_tt8_;  // tt8
  SEXP Rsh_Fir_reg_tt9_;  // tt9
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_tt11_;  // tt11
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx44_;  // dx44
  SEXP Rsh_Fir_reg_dx45_;  // dx45
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_sym18_;  // sym18
  SEXP Rsh_Fir_reg_base18_;  // base18
  SEXP Rsh_Fir_reg_guard18_;  // guard18
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_number1_;  // number1
  SEXP Rsh_Fir_reg_number2_;  // number2
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_number3_;  // number3
  SEXP Rsh_Fir_reg_number4_;  // number4
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_xy30_;  // xy30
  SEXP Rsh_Fir_reg_xy31_;  // xy31
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_xy33_;  // xy33
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx47_;  // dx47
  SEXP Rsh_Fir_reg_dx48_;  // dx48
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_dx50_;  // dx50
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx51_;  // dx51
  SEXP Rsh_Fir_reg_dx52_;  // dx52
  SEXP Rsh_Fir_reg_np;  // np
  SEXP Rsh_Fir_reg_np1_;  // np1
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_xy34_;  // xy34
  SEXP Rsh_Fir_reg_xy35_;  // xy35
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_xy37_;  // xy37
  SEXP Rsh_Fir_reg_dr30_;  // dr30
  SEXP Rsh_Fir_reg_dc15_;  // dc15
  SEXP Rsh_Fir_reg_dx53_;  // dx53
  SEXP Rsh_Fir_reg_dx54_;  // dx54
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_dx56_;  // dx56
  SEXP Rsh_Fir_reg_dr32_;  // dr32
  SEXP Rsh_Fir_reg_dc16_;  // dc16
  SEXP Rsh_Fir_reg_dx57_;  // dx57
  SEXP Rsh_Fir_reg_dx58_;  // dx58
  SEXP Rsh_Fir_reg_np2_;  // np2
  SEXP Rsh_Fir_reg_np3_;  // np3
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_number5_;  // number5
  SEXP Rsh_Fir_reg_number6_;  // number6
  SEXP Rsh_Fir_reg_c41_;  // c41
  SEXP Rsh_Fir_reg_number8_;  // number8
  SEXP Rsh_Fir_reg_dr34_;  // dr34
  SEXP Rsh_Fir_reg_dc17_;  // dc17
  SEXP Rsh_Fir_reg_dx59_;  // dx59
  SEXP Rsh_Fir_reg_dx60_;  // dx60
  SEXP Rsh_Fir_reg_np4_;  // np4
  SEXP Rsh_Fir_reg_np5_;  // np5
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_sym19_;  // sym19
  SEXP Rsh_Fir_reg_base19_;  // base19
  SEXP Rsh_Fir_reg_guard19_;  // guard19
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_dev_hold;  // dev_hold
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_sym20_;  // sym20
  SEXP Rsh_Fir_reg_base20_;  // base20
  SEXP Rsh_Fir_reg_guard20_;  // guard20
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_on_exit;  // on_exit
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg_add3_;  // add3
  SEXP Rsh_Fir_reg_add4_;  // add4
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_plot;  // plot
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_y4_;  // y4
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_xlab3_;  // xlab3
  SEXP Rsh_Fir_reg_xlab4_;  // xlab4
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_ylab3_;  // ylab3
  SEXP Rsh_Fir_reg_ylab4_;  // ylab4
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_xlim3_;  // xlim3
  SEXP Rsh_Fir_reg_xlim4_;  // xlim4
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_ylim3_;  // ylim3
  SEXP Rsh_Fir_reg_ylim4_;  // ylim4
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_log3_;  // log3
  SEXP Rsh_Fir_reg_log4_;  // log4
  SEXP Rsh_Fir_reg_p19_;  // p19
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r117_;  // r117
  SEXP Rsh_Fir_reg_number9_;  // number9
  SEXP Rsh_Fir_reg_number10_;  // number10
  SEXP Rsh_Fir_reg_r119_;  // r119
  SEXP Rsh_Fir_reg_sym21_;  // sym21
  SEXP Rsh_Fir_reg_base21_;  // base21
  SEXP Rsh_Fir_reg_guard21_;  // guard21
  SEXP Rsh_Fir_reg_r120_;  // r120
  SEXP Rsh_Fir_reg_r121_;  // r121
  SEXP Rsh_Fir_reg_n_is1_;  // n_is1
  SEXP Rsh_Fir_reg_n_is2_;  // n_is2
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r122_;  // r122
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_points;  // points
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_x19_;  // x19
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_x21_;  // x21
  SEXP Rsh_Fir_reg_dr36_;  // dr36
  SEXP Rsh_Fir_reg_dc18_;  // dc18
  SEXP Rsh_Fir_reg_dx61_;  // dx61
  SEXP Rsh_Fir_reg_dx62_;  // dx62
  SEXP Rsh_Fir_reg_n_is3_;  // n_is3
  SEXP Rsh_Fir_reg_n_is4_;  // n_is4
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r123_;  // r123
  SEXP Rsh_Fir_reg_p20_;  // p20
  SEXP Rsh_Fir_reg_y5_;  // y5
  SEXP Rsh_Fir_reg_y6_;  // y6
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_y8_;  // y8
  SEXP Rsh_Fir_reg_dr38_;  // dr38
  SEXP Rsh_Fir_reg_dc19_;  // dc19
  SEXP Rsh_Fir_reg_dx63_;  // dx63
  SEXP Rsh_Fir_reg_dx64_;  // dx64
  SEXP Rsh_Fir_reg_n_is5_;  // n_is5
  SEXP Rsh_Fir_reg_n_is6_;  // n_is6
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r125_;  // r125
  SEXP Rsh_Fir_reg_p21_;  // p21
  SEXP Rsh_Fir_reg_pch1_;  // pch1
  SEXP Rsh_Fir_reg_pch2_;  // pch2
  SEXP Rsh_Fir_reg_p22_;  // p22
  SEXP Rsh_Fir_reg_col1_;  // col1
  SEXP Rsh_Fir_reg_col2_;  // col2
  SEXP Rsh_Fir_reg_p23_;  // p23
  SEXP Rsh_Fir_reg_bg1_;  // bg1
  SEXP Rsh_Fir_reg_bg2_;  // bg2
  SEXP Rsh_Fir_reg_p24_;  // p24
  SEXP Rsh_Fir_reg_cex1_;  // cex1
  SEXP Rsh_Fir_reg_cex2_;  // cex2
  SEXP Rsh_Fir_reg_p25_;  // p25
  SEXP Rsh_Fir_reg_r131_;  // r131
  SEXP Rsh_Fir_reg_sym22_;  // sym22
  SEXP Rsh_Fir_reg_base22_;  // base22
  SEXP Rsh_Fir_reg_guard22_;  // guard22
  SEXP Rsh_Fir_reg_r133_;  // r133
  SEXP Rsh_Fir_reg_r134_;  // r134
  SEXP Rsh_Fir_reg_n_is7_;  // n_is7
  SEXP Rsh_Fir_reg_n_is8_;  // n_is8
  SEXP Rsh_Fir_reg_r135_;  // r135
  SEXP Rsh_Fir_reg_any1_;  // any1
  SEXP Rsh_Fir_reg_r136_;  // r136
  SEXP Rsh_Fir_reg_c46_;  // c46
  SEXP Rsh_Fir_reg_points1_;  // points1
  SEXP Rsh_Fir_reg_x22_;  // x22
  SEXP Rsh_Fir_reg_x23_;  // x23
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_x25_;  // x25
  SEXP Rsh_Fir_reg_dr40_;  // dr40
  SEXP Rsh_Fir_reg_dc20_;  // dc20
  SEXP Rsh_Fir_reg_dx65_;  // dx65
  SEXP Rsh_Fir_reg_dx66_;  // dx66
  SEXP Rsh_Fir_reg_n_is9_;  // n_is9
  SEXP Rsh_Fir_reg_n_is10_;  // n_is10
  SEXP Rsh_Fir_reg_r137_;  // r137
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r138_;  // r138
  SEXP Rsh_Fir_reg_p26_;  // p26
  SEXP Rsh_Fir_reg_y9_;  // y9
  SEXP Rsh_Fir_reg_y10_;  // y10
  SEXP Rsh_Fir_reg_c48_;  // c48
  SEXP Rsh_Fir_reg_y12_;  // y12
  SEXP Rsh_Fir_reg_dr42_;  // dr42
  SEXP Rsh_Fir_reg_dc21_;  // dc21
  SEXP Rsh_Fir_reg_dx67_;  // dx67
  SEXP Rsh_Fir_reg_dx68_;  // dx68
  SEXP Rsh_Fir_reg_n_is11_;  // n_is11
  SEXP Rsh_Fir_reg_n_is12_;  // n_is12
  SEXP Rsh_Fir_reg_r140_;  // r140
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r141_;  // r141
  SEXP Rsh_Fir_reg_p27_;  // p27
  SEXP Rsh_Fir_reg_pch3_;  // pch3
  SEXP Rsh_Fir_reg_pch4_;  // pch4
  SEXP Rsh_Fir_reg_p28_;  // p28
  SEXP Rsh_Fir_reg_col3_;  // col3
  SEXP Rsh_Fir_reg_col4_;  // col4
  SEXP Rsh_Fir_reg_p29_;  // p29
  SEXP Rsh_Fir_reg_bg3_;  // bg3
  SEXP Rsh_Fir_reg_bg4_;  // bg4
  SEXP Rsh_Fir_reg_p30_;  // p30
  SEXP Rsh_Fir_reg_cex3_;  // cex3
  SEXP Rsh_Fir_reg_cex4_;  // cex4
  SEXP Rsh_Fir_reg_cex_fact1_;  // cex_fact1
  SEXP Rsh_Fir_reg_cex_fact2_;  // cex_fact2
  SEXP Rsh_Fir_reg_r146_;  // r146
  SEXP Rsh_Fir_reg_p31_;  // p31
  SEXP Rsh_Fir_reg_r148_;  // r148
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_r149_;  // r149
  SEXP Rsh_Fir_reg_c49_;  // c49
  SEXP Rsh_Fir_reg_r151_;  // r151
  SEXP Rsh_Fir_reg_dr44_;  // dr44
  SEXP Rsh_Fir_reg_dc22_;  // dc22
  SEXP Rsh_Fir_reg_dx69_;  // dx69
  SEXP Rsh_Fir_reg_dx70_;  // dx70
  SEXP Rsh_Fir_reg_number11_;  // number11
  SEXP Rsh_Fir_reg_number12_;  // number12
  SEXP Rsh_Fir_reg_r152_;  // r152
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r153_;  // r153
  SEXP Rsh_Fir_reg_par1_;  // par1
  SEXP Rsh_Fir_reg_r154_;  // r154
  SEXP Rsh_Fir_reg_par2_;  // par2
  SEXP Rsh_Fir_reg_r155_;  // r155
  SEXP Rsh_Fir_reg_size1_;  // size1
  SEXP Rsh_Fir_reg_size2_;  // size2
  SEXP Rsh_Fir_reg_sym23_;  // sym23
  SEXP Rsh_Fir_reg_base23_;  // base23
  SEXP Rsh_Fir_reg_guard23_;  // guard23
  SEXP Rsh_Fir_reg_r156_;  // r156
  SEXP Rsh_Fir_reg_size5_;  // size5
  SEXP Rsh_Fir_reg_r157_;  // r157
  SEXP Rsh_Fir_reg_pusr;  // pusr
  SEXP Rsh_Fir_reg_pusr1_;  // pusr1
  SEXP Rsh_Fir_reg_c50_;  // c50
  SEXP Rsh_Fir_reg_size7_;  // size7
  SEXP Rsh_Fir_reg_pusr3_;  // pusr3
  SEXP Rsh_Fir_reg_dr46_;  // dr46
  SEXP Rsh_Fir_reg_dc23_;  // dc23
  SEXP Rsh_Fir_reg_dx71_;  // dx71
  SEXP Rsh_Fir_reg_size9_;  // size9
  SEXP Rsh_Fir_reg_dx72_;  // dx72
  SEXP Rsh_Fir_reg___10_;  // __10
  SEXP Rsh_Fir_reg_r158_;  // r158
  SEXP Rsh_Fir_reg_pusr4_;  // pusr4
  SEXP Rsh_Fir_reg_pusr5_;  // pusr5
  SEXP Rsh_Fir_reg_c51_;  // c51
  SEXP Rsh_Fir_reg_size11_;  // size11
  SEXP Rsh_Fir_reg_dx74_;  // dx74
  SEXP Rsh_Fir_reg_pusr7_;  // pusr7
  SEXP Rsh_Fir_reg_dr48_;  // dr48
  SEXP Rsh_Fir_reg_dc24_;  // dc24
  SEXP Rsh_Fir_reg_dx76_;  // dx76
  SEXP Rsh_Fir_reg_size13_;  // size13
  SEXP Rsh_Fir_reg_dx77_;  // dx77
  SEXP Rsh_Fir_reg_dx78_;  // dx78
  SEXP Rsh_Fir_reg___11_;  // __11
  SEXP Rsh_Fir_reg_r159_;  // r159
  SEXP Rsh_Fir_reg_r160_;  // r160
  SEXP Rsh_Fir_reg_abs;  // abs
  SEXP Rsh_Fir_reg_r161_;  // r161
  SEXP Rsh_Fir_reg_r162_;  // r162
  SEXP Rsh_Fir_reg_ppin;  // ppin
  SEXP Rsh_Fir_reg_ppin1_;  // ppin1
  SEXP Rsh_Fir_reg_c52_;  // c52
  SEXP Rsh_Fir_reg_r164_;  // r164
  SEXP Rsh_Fir_reg_ppin3_;  // ppin3
  SEXP Rsh_Fir_reg_dr50_;  // dr50
  SEXP Rsh_Fir_reg_dc25_;  // dc25
  SEXP Rsh_Fir_reg_dx79_;  // dx79
  SEXP Rsh_Fir_reg_r166_;  // r166
  SEXP Rsh_Fir_reg_dx80_;  // dx80
  SEXP Rsh_Fir_reg___12_;  // __12
  SEXP Rsh_Fir_reg_r167_;  // r167
  SEXP Rsh_Fir_reg_r168_;  // r168
  SEXP Rsh_Fir_reg_size14_;  // size14
  SEXP Rsh_Fir_reg_size15_;  // size15
  SEXP Rsh_Fir_reg_sym24_;  // sym24
  SEXP Rsh_Fir_reg_base24_;  // base24
  SEXP Rsh_Fir_reg_guard24_;  // guard24
  SEXP Rsh_Fir_reg_r169_;  // r169
  SEXP Rsh_Fir_reg_size18_;  // size18
  SEXP Rsh_Fir_reg_r170_;  // r170
  SEXP Rsh_Fir_reg_pusr8_;  // pusr8
  SEXP Rsh_Fir_reg_pusr9_;  // pusr9
  SEXP Rsh_Fir_reg_c53_;  // c53
  SEXP Rsh_Fir_reg_size20_;  // size20
  SEXP Rsh_Fir_reg_pusr11_;  // pusr11
  SEXP Rsh_Fir_reg_dr52_;  // dr52
  SEXP Rsh_Fir_reg_dc26_;  // dc26
  SEXP Rsh_Fir_reg_dx81_;  // dx81
  SEXP Rsh_Fir_reg_size22_;  // size22
  SEXP Rsh_Fir_reg_dx82_;  // dx82
  SEXP Rsh_Fir_reg___13_;  // __13
  SEXP Rsh_Fir_reg_r171_;  // r171
  SEXP Rsh_Fir_reg_pusr12_;  // pusr12
  SEXP Rsh_Fir_reg_pusr13_;  // pusr13
  SEXP Rsh_Fir_reg_c54_;  // c54
  SEXP Rsh_Fir_reg_size24_;  // size24
  SEXP Rsh_Fir_reg_dx84_;  // dx84
  SEXP Rsh_Fir_reg_pusr15_;  // pusr15
  SEXP Rsh_Fir_reg_dr54_;  // dr54
  SEXP Rsh_Fir_reg_dc27_;  // dc27
  SEXP Rsh_Fir_reg_dx86_;  // dx86
  SEXP Rsh_Fir_reg_size26_;  // size26
  SEXP Rsh_Fir_reg_dx87_;  // dx87
  SEXP Rsh_Fir_reg_dx88_;  // dx88
  SEXP Rsh_Fir_reg___14_;  // __14
  SEXP Rsh_Fir_reg_r172_;  // r172
  SEXP Rsh_Fir_reg_r173_;  // r173
  SEXP Rsh_Fir_reg_abs1_;  // abs1
  SEXP Rsh_Fir_reg_r174_;  // r174
  SEXP Rsh_Fir_reg_r175_;  // r175
  SEXP Rsh_Fir_reg_ppin4_;  // ppin4
  SEXP Rsh_Fir_reg_ppin5_;  // ppin5
  SEXP Rsh_Fir_reg_c55_;  // c55
  SEXP Rsh_Fir_reg_r177_;  // r177
  SEXP Rsh_Fir_reg_ppin7_;  // ppin7
  SEXP Rsh_Fir_reg_dr56_;  // dr56
  SEXP Rsh_Fir_reg_dc28_;  // dc28
  SEXP Rsh_Fir_reg_dx89_;  // dx89
  SEXP Rsh_Fir_reg_r179_;  // r179
  SEXP Rsh_Fir_reg_dx90_;  // dx90
  SEXP Rsh_Fir_reg___15_;  // __15
  SEXP Rsh_Fir_reg_r180_;  // r180
  SEXP Rsh_Fir_reg_r181_;  // r181
  SEXP Rsh_Fir_reg_sym25_;  // sym25
  SEXP Rsh_Fir_reg_base25_;  // base25
  SEXP Rsh_Fir_reg_guard25_;  // guard25
  SEXP Rsh_Fir_reg_r182_;  // r182
  SEXP Rsh_Fir_reg_r183_;  // r183
  SEXP Rsh_Fir_reg_i_multi;  // i_multi
  SEXP Rsh_Fir_reg_i_multi1_;  // i_multi1
  SEXP Rsh_Fir_reg_number13_;  // number13
  SEXP Rsh_Fir_reg_number14_;  // number14
  SEXP Rsh_Fir_reg_c56_;  // c56
  SEXP Rsh_Fir_reg_number16_;  // number16
  SEXP Rsh_Fir_reg_dr58_;  // dr58
  SEXP Rsh_Fir_reg_dc29_;  // dc29
  SEXP Rsh_Fir_reg_dx91_;  // dx91
  SEXP Rsh_Fir_reg_dx92_;  // dx92
  SEXP Rsh_Fir_reg_number17_;  // number17
  SEXP Rsh_Fir_reg_number18_;  // number18
  SEXP Rsh_Fir_reg_r184_;  // r184
  SEXP Rsh_Fir_reg___16_;  // __16
  SEXP Rsh_Fir_reg_r185_;  // r185
  SEXP Rsh_Fir_reg_rep_int;  // rep_int
  SEXP Rsh_Fir_reg_r186_;  // r186
  SEXP Rsh_Fir_reg_numeric;  // numeric
  SEXP Rsh_Fir_reg_r187_;  // r187
  SEXP Rsh_Fir_reg_i_multi2_;  // i_multi2
  SEXP Rsh_Fir_reg_i_multi3_;  // i_multi3
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c57_;  // c57
  SEXP Rsh_Fir_reg_x26_;  // x26
  SEXP Rsh_Fir_reg_sym26_;  // sym26
  SEXP Rsh_Fir_reg_base26_;  // base26
  SEXP Rsh_Fir_reg_guard26_;  // guard26
  SEXP Rsh_Fir_reg_r188_;  // r188
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r189_;  // r189
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_number19_;  // number19
  SEXP Rsh_Fir_reg_number20_;  // number20
  SEXP Rsh_Fir_reg_c58_;  // c58
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_r191_;  // r191
  SEXP Rsh_Fir_reg_number22_;  // number22
  SEXP Rsh_Fir_reg_dr60_;  // dr60
  SEXP Rsh_Fir_reg_dc30_;  // dc30
  SEXP Rsh_Fir_reg_dx93_;  // dx93
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_r193_;  // r193
  SEXP Rsh_Fir_reg_dx94_;  // dx94
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg___17_;  // __17
  SEXP Rsh_Fir_reg_r194_;  // r194
  SEXP Rsh_Fir_reg_r195_;  // r195
  SEXP Rsh_Fir_reg_rotate1_;  // rotate1
  SEXP Rsh_Fir_reg_rotate2_;  // rotate2
  SEXP Rsh_Fir_reg_c59_;  // c59
  SEXP Rsh_Fir_reg___18_;  // __18
  SEXP Rsh_Fir_reg_r198_;  // r198
  SEXP Rsh_Fir_reg_r199_;  // r199
  SEXP Rsh_Fir_reg_r200_;  // r200
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_r201_;  // r201
  SEXP Rsh_Fir_reg_r202_;  // r202
  SEXP Rsh_Fir_reg_r203_;  // r203
  SEXP Rsh_Fir_reg_c60_;  // c60
  SEXP Rsh_Fir_reg_r204_;  // r204
  SEXP Rsh_Fir_reg_z2_;  // z2
  SEXP Rsh_Fir_reg_z3_;  // z3
  SEXP Rsh_Fir_reg_r205_;  // r205
  SEXP Rsh_Fir_reg_number23_;  // number23
  SEXP Rsh_Fir_reg_number24_;  // number24
  SEXP Rsh_Fir_reg_c61_;  // c61
  SEXP Rsh_Fir_reg_r207_;  // r207
  SEXP Rsh_Fir_reg_number26_;  // number26
  SEXP Rsh_Fir_reg_dr62_;  // dr62
  SEXP Rsh_Fir_reg_dc31_;  // dc31
  SEXP Rsh_Fir_reg_dx95_;  // dx95
  SEXP Rsh_Fir_reg_r209_;  // r209
  SEXP Rsh_Fir_reg_dx96_;  // dx96
  SEXP Rsh_Fir_reg_i_rep;  // i_rep
  SEXP Rsh_Fir_reg_i_rep1_;  // i_rep1
  SEXP Rsh_Fir_reg___19_;  // __19
  SEXP Rsh_Fir_reg_r210_;  // r210
  SEXP Rsh_Fir_reg_r211_;  // r211
  SEXP Rsh_Fir_reg_segments;  // segments
  SEXP Rsh_Fir_reg_x27_;  // x27
  SEXP Rsh_Fir_reg_x28_;  // x28
  SEXP Rsh_Fir_reg_c62_;  // c62
  SEXP Rsh_Fir_reg_x30_;  // x30
  SEXP Rsh_Fir_reg_dr64_;  // dr64
  SEXP Rsh_Fir_reg_dc32_;  // dc32
  SEXP Rsh_Fir_reg_dx97_;  // dx97
  SEXP Rsh_Fir_reg_dx98_;  // dx98
  SEXP Rsh_Fir_reg_i_rep2_;  // i_rep2
  SEXP Rsh_Fir_reg_i_rep3_;  // i_rep3
  SEXP Rsh_Fir_reg___20_;  // __20
  SEXP Rsh_Fir_reg_r212_;  // r212
  SEXP Rsh_Fir_reg_p32_;  // p32
  SEXP Rsh_Fir_reg_y13_;  // y13
  SEXP Rsh_Fir_reg_y14_;  // y14
  SEXP Rsh_Fir_reg_c63_;  // c63
  SEXP Rsh_Fir_reg_y16_;  // y16
  SEXP Rsh_Fir_reg_dr66_;  // dr66
  SEXP Rsh_Fir_reg_dc33_;  // dc33
  SEXP Rsh_Fir_reg_dx99_;  // dx99
  SEXP Rsh_Fir_reg_dx100_;  // dx100
  SEXP Rsh_Fir_reg_i_rep4_;  // i_rep4
  SEXP Rsh_Fir_reg_i_rep5_;  // i_rep5
  SEXP Rsh_Fir_reg___21_;  // __21
  SEXP Rsh_Fir_reg_r214_;  // r214
  SEXP Rsh_Fir_reg_p33_;  // p33
  SEXP Rsh_Fir_reg_x31_;  // x31
  SEXP Rsh_Fir_reg_x32_;  // x32
  SEXP Rsh_Fir_reg_c64_;  // c64
  SEXP Rsh_Fir_reg_x34_;  // x34
  SEXP Rsh_Fir_reg_dr68_;  // dr68
  SEXP Rsh_Fir_reg_dc34_;  // dc34
  SEXP Rsh_Fir_reg_dx101_;  // dx101
  SEXP Rsh_Fir_reg_dx102_;  // dx102
  SEXP Rsh_Fir_reg_i_rep6_;  // i_rep6
  SEXP Rsh_Fir_reg_i_rep7_;  // i_rep7
  SEXP Rsh_Fir_reg___22_;  // __22
  SEXP Rsh_Fir_reg_r216_;  // r216
  SEXP Rsh_Fir_reg_xr;  // xr
  SEXP Rsh_Fir_reg_xr1_;  // xr1
  SEXP Rsh_Fir_reg_sym27_;  // sym27
  SEXP Rsh_Fir_reg_base27_;  // base27
  SEXP Rsh_Fir_reg_guard27_;  // guard27
  SEXP Rsh_Fir_reg_r217_;  // r217
  SEXP Rsh_Fir_reg_dx105_;  // dx105
  SEXP Rsh_Fir_reg_xr4_;  // xr4
  SEXP Rsh_Fir_reg_r218_;  // r218
  SEXP Rsh_Fir_reg_deg;  // deg
  SEXP Rsh_Fir_reg_deg1_;  // deg1
  SEXP Rsh_Fir_reg_r219_;  // r219
  SEXP Rsh_Fir_reg_r220_;  // r220
  SEXP Rsh_Fir_reg_r221_;  // r221
  SEXP Rsh_Fir_reg_p34_;  // p34
  SEXP Rsh_Fir_reg_y17_;  // y17
  SEXP Rsh_Fir_reg_y18_;  // y18
  SEXP Rsh_Fir_reg_c65_;  // c65
  SEXP Rsh_Fir_reg_y20_;  // y20
  SEXP Rsh_Fir_reg_dr70_;  // dr70
  SEXP Rsh_Fir_reg_dc35_;  // dc35
  SEXP Rsh_Fir_reg_dx106_;  // dx106
  SEXP Rsh_Fir_reg_dx107_;  // dx107
  SEXP Rsh_Fir_reg_i_rep8_;  // i_rep8
  SEXP Rsh_Fir_reg_i_rep9_;  // i_rep9
  SEXP Rsh_Fir_reg___23_;  // __23
  SEXP Rsh_Fir_reg_r223_;  // r223
  SEXP Rsh_Fir_reg_yr;  // yr
  SEXP Rsh_Fir_reg_yr1_;  // yr1
  SEXP Rsh_Fir_reg_sym28_;  // sym28
  SEXP Rsh_Fir_reg_base28_;  // base28
  SEXP Rsh_Fir_reg_guard28_;  // guard28
  SEXP Rsh_Fir_reg_r224_;  // r224
  SEXP Rsh_Fir_reg_dx110_;  // dx110
  SEXP Rsh_Fir_reg_yr4_;  // yr4
  SEXP Rsh_Fir_reg_r225_;  // r225
  SEXP Rsh_Fir_reg_deg2_;  // deg2
  SEXP Rsh_Fir_reg_deg3_;  // deg3
  SEXP Rsh_Fir_reg_r226_;  // r226
  SEXP Rsh_Fir_reg_r227_;  // r227
  SEXP Rsh_Fir_reg_r228_;  // r228
  SEXP Rsh_Fir_reg_p35_;  // p35
  SEXP Rsh_Fir_reg_seg_col1_;  // seg_col1
  SEXP Rsh_Fir_reg_seg_col2_;  // seg_col2
  SEXP Rsh_Fir_reg_p36_;  // p36
  SEXP Rsh_Fir_reg_seg_lwd1_;  // seg_lwd1
  SEXP Rsh_Fir_reg_seg_lwd2_;  // seg_lwd2
  SEXP Rsh_Fir_reg_p37_;  // p37
  SEXP Rsh_Fir_reg_r232_;  // r232
  SEXP Rsh_Fir_reg_sym29_;  // sym29
  SEXP Rsh_Fir_reg_base29_;  // base29
  SEXP Rsh_Fir_reg_guard29_;  // guard29
  SEXP Rsh_Fir_reg_r234_;  // r234
  SEXP Rsh_Fir_reg_r235_;  // r235
  SEXP Rsh_Fir_reg_sym30_;  // sym30
  SEXP Rsh_Fir_reg_base30_;  // base30
  SEXP Rsh_Fir_reg_guard30_;  // guard30
  SEXP Rsh_Fir_reg_r236_;  // r236
  SEXP Rsh_Fir_reg_r237_;  // r237
  SEXP Rsh_Fir_reg_x35_;  // x35
  SEXP Rsh_Fir_reg_x36_;  // x36
  SEXP Rsh_Fir_reg_y21_;  // y21
  SEXP Rsh_Fir_reg_y22_;  // y22
  SEXP Rsh_Fir_reg_number27_;  // number27
  SEXP Rsh_Fir_reg_number28_;  // number28
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r238_;  // r238
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r239_;  // r239

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];
  Rsh_Fir_reg_number = PARAMS[2];
  Rsh_Fir_reg_log = PARAMS[3];
  Rsh_Fir_reg_digits = PARAMS[4];
  Rsh_Fir_reg_xlab = PARAMS[5];
  Rsh_Fir_reg_ylab = PARAMS[6];
  Rsh_Fir_reg_xlim = PARAMS[7];
  Rsh_Fir_reg_ylim = PARAMS[8];
  Rsh_Fir_reg_add = PARAMS[9];
  Rsh_Fir_reg_rotate = PARAMS[10];
  Rsh_Fir_reg_pch = PARAMS[11];
  Rsh_Fir_reg_cex = PARAMS[12];
  Rsh_Fir_reg_cex_fact = PARAMS[13];
  Rsh_Fir_reg_col = PARAMS[14];
  Rsh_Fir_reg_bg = PARAMS[15];
  Rsh_Fir_reg_size = PARAMS[16];
  Rsh_Fir_reg_seg_col = PARAMS[17];
  Rsh_Fir_reg_seg_lwd = PARAMS[18];
  Rsh_Fir_reg_ddd = PARAMS[19];

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
  // st number = number
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_number, RHO);
  (void)(Rsh_Fir_reg_number);
  // log_isMissing = missing.0(log)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_log;
  Rsh_Fir_reg_log_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if log_isMissing then L1("") else L1(log)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_log_isMissing)) {
  // L1("")
    Rsh_Fir_reg_log_orDefault = Rsh_const(CCP, 5);
    goto L1_;
  } else {
  // L1(log)
    Rsh_Fir_reg_log_orDefault = Rsh_Fir_reg_log;
    goto L1_;
  }

L1_:;
  // st log = log_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_log_orDefault, RHO);
  (void)(Rsh_Fir_reg_log_orDefault);
  // digits_isMissing = missing.0(digits)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_digits;
  Rsh_Fir_reg_digits_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if digits_isMissing then L2(6) else L2(digits)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_digits_isMissing)) {
  // L2(6)
    Rsh_Fir_reg_digits_orDefault = Rsh_const(CCP, 7);
    goto L2_;
  } else {
  // L2(digits)
    Rsh_Fir_reg_digits_orDefault = Rsh_Fir_reg_digits;
    goto L2_;
  }

L2_:;
  // st digits = digits_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_digits_orDefault, RHO);
  (void)(Rsh_Fir_reg_digits_orDefault);
  // xlab_isMissing = missing.0(xlab)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_xlab;
  Rsh_Fir_reg_xlab_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if xlab_isMissing then L3(NULL) else L3(xlab)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_xlab_isMissing)) {
  // L3(NULL)
    Rsh_Fir_reg_xlab_orDefault = Rsh_const(CCP, 2);
    goto L3_;
  } else {
  // L3(xlab)
    Rsh_Fir_reg_xlab_orDefault = Rsh_Fir_reg_xlab;
    goto L3_;
  }

L3_:;
  // st xlab = xlab_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_xlab_orDefault, RHO);
  (void)(Rsh_Fir_reg_xlab_orDefault);
  // ylab_isMissing = missing.0(ylab)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_ylab;
  Rsh_Fir_reg_ylab_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if ylab_isMissing then L4(NULL) else L4(ylab)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ylab_isMissing)) {
  // L4(NULL)
    Rsh_Fir_reg_ylab_orDefault = Rsh_const(CCP, 2);
    goto L4_;
  } else {
  // L4(ylab)
    Rsh_Fir_reg_ylab_orDefault = Rsh_Fir_reg_ylab;
    goto L4_;
  }

L4_:;
  // st ylab = ylab_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_ylab_orDefault, RHO);
  (void)(Rsh_Fir_reg_ylab_orDefault);
  // xlim_isMissing = missing.0(xlim)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_xlim;
  Rsh_Fir_reg_xlim_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if xlim_isMissing then L5(NULL) else L5(xlim)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_xlim_isMissing)) {
  // L5(NULL)
    Rsh_Fir_reg_xlim_orDefault = Rsh_const(CCP, 2);
    goto L5_;
  } else {
  // L5(xlim)
    Rsh_Fir_reg_xlim_orDefault = Rsh_Fir_reg_xlim;
    goto L5_;
  }

L5_:;
  // st xlim = xlim_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_xlim_orDefault, RHO);
  (void)(Rsh_Fir_reg_xlim_orDefault);
  // ylim_isMissing = missing.0(ylim)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_ylim;
  Rsh_Fir_reg_ylim_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if ylim_isMissing then L6(NULL) else L6(ylim)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ylim_isMissing)) {
  // L6(NULL)
    Rsh_Fir_reg_ylim_orDefault = Rsh_const(CCP, 2);
    goto L6_;
  } else {
  // L6(ylim)
    Rsh_Fir_reg_ylim_orDefault = Rsh_Fir_reg_ylim;
    goto L6_;
  }

L6_:;
  // st ylim = ylim_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_ylim_orDefault, RHO);
  (void)(Rsh_Fir_reg_ylim_orDefault);
  // add_isMissing = missing.0(add)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_add;
  Rsh_Fir_reg_add_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if add_isMissing then L7(FALSE) else L7(add)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_add_isMissing)) {
  // L7(FALSE)
    Rsh_Fir_reg_add_orDefault = Rsh_const(CCP, 13);
    goto L7_;
  } else {
  // L7(add)
    Rsh_Fir_reg_add_orDefault = Rsh_Fir_reg_add;
    goto L7_;
  }

L7_:;
  // st add = add_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_add_orDefault, RHO);
  (void)(Rsh_Fir_reg_add_orDefault);
  // rotate_isMissing = missing.0(rotate)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_rotate;
  Rsh_Fir_reg_rotate_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if rotate_isMissing then L8(FALSE) else L8(rotate)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_rotate_isMissing)) {
  // L8(FALSE)
    Rsh_Fir_reg_rotate_orDefault = Rsh_const(CCP, 13);
    goto L8_;
  } else {
  // L8(rotate)
    Rsh_Fir_reg_rotate_orDefault = Rsh_Fir_reg_rotate;
    goto L8_;
  }

L8_:;
  // st rotate = rotate_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_rotate_orDefault, RHO);
  (void)(Rsh_Fir_reg_rotate_orDefault);
  // pch_isMissing = missing.0(pch)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_pch;
  Rsh_Fir_reg_pch_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if pch_isMissing then L9(16.0) else L9(pch)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_pch_isMissing)) {
  // L9(16.0)
    Rsh_Fir_reg_pch_orDefault = Rsh_const(CCP, 16);
    goto L9_;
  } else {
  // L9(pch)
    Rsh_Fir_reg_pch_orDefault = Rsh_Fir_reg_pch;
    goto L9_;
  }

L9_:;
  // st pch = pch_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_pch_orDefault, RHO);
  (void)(Rsh_Fir_reg_pch_orDefault);
  // cex_isMissing = missing.0(cex)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_cex;
  Rsh_Fir_reg_cex_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args10);
  // if cex_isMissing then L10(0.8) else L10(cex)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_cex_isMissing)) {
  // L10(0.8)
    Rsh_Fir_reg_cex_orDefault = Rsh_const(CCP, 18);
    goto L10_;
  } else {
  // L10(cex)
    Rsh_Fir_reg_cex_orDefault = Rsh_Fir_reg_cex;
    goto L10_;
  }

L10_:;
  // st cex = cex_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_cex_orDefault, RHO);
  (void)(Rsh_Fir_reg_cex_orDefault);
  // cex_fact_isMissing = missing.0(cex_fact)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_cex_fact;
  Rsh_Fir_reg_cex_fact_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args11);
  // if cex_fact_isMissing then L11(1.5) else L11(cex_fact)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_cex_fact_isMissing)) {
  // L11(1.5)
    Rsh_Fir_reg_cex_fact_orDefault = Rsh_const(CCP, 20);
    goto L11_;
  } else {
  // L11(cex_fact)
    Rsh_Fir_reg_cex_fact_orDefault = Rsh_Fir_reg_cex_fact;
    goto L11_;
  }

L11_:;
  // st `cex.fact` = cex_fact_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_cex_fact_orDefault, RHO);
  (void)(Rsh_Fir_reg_cex_fact_orDefault);
  // col_isMissing = missing.0(col)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_col;
  Rsh_Fir_reg_col_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args12);
  // if col_isMissing then L12() else L13(col)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_col_isMissing)) {
  // L12()
    goto L12_;
  } else {
  // L13(col)
    Rsh_Fir_reg_col_orDefault = Rsh_Fir_reg_col;
    goto L13_;
  }

L12_:;
  // p = prom<V +>{
  //   par = ldf par;
  //   r = dyn par("col");
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_, CCP, RHO);
  // goto L13(p)
  // L13(p)
  Rsh_Fir_reg_col_orDefault = Rsh_Fir_reg_p;
  goto L13_;

L13_:;
  // st col = col_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_col_orDefault, RHO);
  (void)(Rsh_Fir_reg_col_orDefault);
  // bg_isMissing = missing.0(bg)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_bg;
  Rsh_Fir_reg_bg_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args14);
  // if bg_isMissing then L14(NA_LGL) else L14(bg)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_bg_isMissing)) {
  // L14(NA_LGL)
    Rsh_Fir_reg_bg_orDefault = Rsh_const(CCP, 25);
    goto L14_;
  } else {
  // L14(bg)
    Rsh_Fir_reg_bg_orDefault = Rsh_Fir_reg_bg;
    goto L14_;
  }

L14_:;
  // st bg = bg_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_bg_orDefault, RHO);
  (void)(Rsh_Fir_reg_bg_orDefault);
  // size_isMissing = missing.0(size)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_size;
  Rsh_Fir_reg_size_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args15);
  // if size_isMissing then L15() else L16(size)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_size_isMissing)) {
  // L15()
    goto L15_;
  } else {
  // L16(size)
    Rsh_Fir_reg_size_orDefault = Rsh_Fir_reg_size;
    goto L16_;
  }

L15_:;
  // p1 = prom<V +>{
  //   return 0.125;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_1, CCP, RHO);
  // goto L16(p1)
  // L16(p1)
  Rsh_Fir_reg_size_orDefault = Rsh_Fir_reg_p1_;
  goto L16_;

L16_:;
  // st size = size_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_size_orDefault, RHO);
  (void)(Rsh_Fir_reg_size_orDefault);
  // seg_col_isMissing = missing.0(seg_col)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_seg_col;
  Rsh_Fir_reg_seg_col_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args16);
  // if seg_col_isMissing then L17(2.0) else L17(seg_col)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_seg_col_isMissing)) {
  // L17(2.0)
    Rsh_Fir_reg_seg_col_orDefault = Rsh_const(CCP, 29);
    goto L17_;
  } else {
  // L17(seg_col)
    Rsh_Fir_reg_seg_col_orDefault = Rsh_Fir_reg_seg_col;
    goto L17_;
  }

L17_:;
  // st `seg.col` = seg_col_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_seg_col_orDefault, RHO);
  (void)(Rsh_Fir_reg_seg_col_orDefault);
  // seg_lwd_isMissing = missing.0(seg_lwd)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_seg_lwd;
  Rsh_Fir_reg_seg_lwd_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args17);
  // if seg_lwd_isMissing then L18(1.5) else L18(seg_lwd)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_seg_lwd_isMissing)) {
  // L18(1.5)
    Rsh_Fir_reg_seg_lwd_orDefault = Rsh_const(CCP, 20);
    goto L18_;
  } else {
  // L18(seg_lwd)
    Rsh_Fir_reg_seg_lwd_orDefault = Rsh_Fir_reg_seg_lwd;
    goto L18_;
  }

L18_:;
  // st `seg.lwd` = seg_lwd_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_seg_lwd_orDefault, RHO);
  (void)(Rsh_Fir_reg_seg_lwd_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L19_:;
  // r6 = `!`(r4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c then L92() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L92()
    goto L92_;
  } else {
  // L20()
    goto L20_;
  }

L20_:;
  // goto L21(NULL)
  // L21(NULL)
  Rsh_Fir_reg_r12_ = Rsh_const(CCP, 2);
  goto L21_;

L21_:;
  // st xlabel = r12
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // sym2 = ldf missing
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base2 = ldf missing in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard2 then L96() else L97()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L96()
    goto L96_;
  } else {
  // L97()
    goto L97_;
  }

L22_:;
  // r16 = `!`(r14)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c1 then L98() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L98()
    goto L98_;
  } else {
  // L23()
    goto L23_;
  }

L23_:;
  // goto L24(NULL)
  // L24(NULL)
  Rsh_Fir_reg_r22_ = Rsh_const(CCP, 2);
  goto L24_;

L24_:;
  // st ylabel = r22
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // sym4 = ldf `is.list`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base4 = ldf `is.list` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard4 then L102() else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L102()
    goto L102_;
  } else {
  // L103()
    goto L103_;
  }

L25_:;
  // c2 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c2 then L106() else L26(c2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L106()
    goto L106_;
  } else {
  // L26(c2)
    Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c2_;
    goto L26_;
  }

L26_:;
  // st `is.xyn` = c4
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_c4_, RHO);
  (void)(Rsh_Fir_reg_c4_);
  // is_xyn = ld `is.xyn`
  Rsh_Fir_reg_is_xyn = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L113() else D9()
  // L113()
  goto L113_;

L27_:;
  // c9 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // c10 = `&&`(c7, c9)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L26(c10)
  // L26(c10)
  Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c10_;
  goto L26_;

L28_:;
  // xy_coords = ldf `xy.coords`
  Rsh_Fir_reg_xy_coords = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L122() else D12()
  // L122()
  goto L122_;

L29_:;
  // st xy = x11
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_x11_, RHO);
  (void)(Rsh_Fir_reg_x11_);
  // add1 = ld add
  Rsh_Fir_reg_add1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L124() else D14()
  // L124()
  goto L124_;

L30_:;
  // goto L49()
  // L49()
  goto L49_;

L31_:;
  // c16 = `as.logical`(r47)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c16 then L129() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L129()
    goto L129_;
  } else {
  // L32()
    goto L32_;
  }

L32_:;
  // goto L33()
  // L33()
  goto L33_;

L33_:;
  // sym9 = ldf `is.null`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base9 = ldf `is.null` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard9 then L136() else L137()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L136()
    goto L136_;
  } else {
  // L137()
    goto L137_;
  }

L34_:;
  // c19 = `as.logical`(r50)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c19 then L139() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L139()
    goto L139_;
  } else {
  // L35()
    goto L35_;
  }

L35_:;
  // goto L36()
  // L36()
  goto L36_;

L36_:;
  // sym10 = ldf `is.null`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base10 = ldf `is.null` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard10 then L146() else L147()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L146()
    goto L146_;
  } else {
  // L147()
    goto L147_;
  }

L37_:;
  // c22 = `as.logical`(r53)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c22 then L149() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L149()
    goto L149_;
  } else {
  // L38()
    goto L38_;
  }

L38_:;
  // goto L42()
  // L42()
  goto L42_;

L39_:;
  // st xlim = r55
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r55_, RHO);
  (void)(Rsh_Fir_reg_r55_);
  // goto L42()
  // L42()
  goto L42_;

L40_:;
  // range = ldf range in base
  Rsh_Fir_reg_range = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r62 = dyn range(dx13)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_range, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L168() else D23()
  // L168()
  goto L168_;

L41_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r61 = dyn __(dx16, r58)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L40(r61)
  // L40(r61)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r61_;
  goto L40_;

L42_:;
  // sym13 = ldf `is.null`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base13 = ldf `is.null` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard13 then L170() else L171()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L170()
    goto L170_;
  } else {
  // L171()
    goto L171_;
  }

L43_:;
  // c27 = `as.logical`(r65)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if c27 then L173() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L173()
    goto L173_;
  } else {
  // L44()
    goto L44_;
  }

L44_:;
  // goto L48(NULL)
  // L48(NULL)
  Rsh_Fir_reg_r75_ = Rsh_const(CCP, 2);
  goto L48_;

L45_:;
  // st ylim = r67
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r67_, RHO);
  (void)(Rsh_Fir_reg_r67_);
  // goto L48(r67)
  // L48(r67)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r67_;
  goto L48_;

L46_:;
  // range1 = ldf range in base
  Rsh_Fir_reg_range1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r74 = dyn range1(dx28)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dx28_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_range1_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L192() else D28()
  // L192()
  goto L192_;

L47_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r73 = dyn __1(dx31, r70)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dx31_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L46(r73)
  // L46(r73)
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_r73_;
  goto L46_;

L48_:;
  // goto L49()
  // L49()
  goto L49_;

L49_:;
  // sym16 = ldf length
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base16 = ldf length in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard16 then L195() else L196()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L195()
    goto L195_;
  } else {
  // L196()
    goto L196_;
  }

L50_:;
  // st n = r78
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r78_, RHO);
  (void)(Rsh_Fir_reg_r78_);
  // sym17 = ldf missing
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base17 = ldf missing in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard17 then L203() else L204()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L203()
    goto L203_;
  } else {
  // L204()
    goto L204_;
  }

L51_:;
  // c32 = `as.logical`(r82)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c32 then L205() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L205()
    goto L205_;
  } else {
  // L52()
    goto L52_;
  }

L52_:;
  // sym18 = ldf length
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base18 = ldf length in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard18 then L224() else L225()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L224()
    goto L224_;
  } else {
  // L225()
    goto L225_;
  }

L53_:;
  // sym19 = ldf length
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base19 = ldf length in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard19 then L257() else L258()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L257()
    goto L257_;
  } else {
  // L258()
    goto L258_;
  }

L54_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L228() else D38()
  // L228()
  goto L228_;

L55_:;
  // goto L56()
  // L56()
  goto L56_;

L56_:;
  // number3 = ld number
  Rsh_Fir_reg_number3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L233() else D41()
  // L233()
  goto L233_;

L57_:;
  // st x = dx52
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx52_, RHO);
  (void)(Rsh_Fir_reg_dx52_);
  // xy34 = ld xy
  Rsh_Fir_reg_xy34_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L243() else D44()
  // L243()
  goto L243_;

L58_:;
  // st y = dx58
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx58_, RHO);
  (void)(Rsh_Fir_reg_dx58_);
  // number5 = ld number
  Rsh_Fir_reg_number5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L252() else D46()
  // L252()
  goto L252_;

L59_:;
  // st number = dx60
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx60_, RHO);
  (void)(Rsh_Fir_reg_dx60_);
  // goto L53()
  // L53()
  goto L53_;

L60_:;
  // st n = r103
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r103_, RHO);
  (void)(Rsh_Fir_reg_r103_);
  // dev_hold = ldf `dev.hold`
  Rsh_Fir_reg_dev_hold = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L261() else D50()
  // L261()
  goto L261_;

L61_:;
  // add3 = ld add
  Rsh_Fir_reg_add3_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L265() else D52()
  // L265()
  goto L265_;

L62_:;
  // goto L63()
  // L63()
  goto L63_;

L63_:;
  // number9 = ld number
  Rsh_Fir_reg_number9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L270() else D55()
  // L270()
  goto L270_;

L64_:;
  // c43 = `as.logical`(r121)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r121_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c43 then L275() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L275()
    goto L275_;
  } else {
  // L65()
    goto L65_;
  }

L65_:;
  // goto L66()
  // L66()
  goto L66_;

L66_:;
  // sym22 = ldf any
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base22 = ldf any in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard22 then L279() else L280()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L279()
    goto L279_;
  } else {
  // L280()
    goto L280_;
  }

L67_:;
  // c46 = `as.logical`(r134)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r134_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if c46 then L283() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L283()
    goto L283_;
  } else {
  // L68()
    goto L68_;
  }

L68_:;
  // goto L87()
  // L87()
  goto L87_;

L69_:;
  // st `i.multi` = dx70
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_dx70_, RHO);
  (void)(Rsh_Fir_reg_dx70_);
  // par1 = ldf par
  Rsh_Fir_reg_par1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L291() else D66()
  // L291()
  goto L291_;

L70_:;
  // r162 = `*`(size5, r157)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_size5_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_r157_;
  Rsh_Fir_reg_r162_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // ppin = ld ppin
  Rsh_Fir_reg_ppin = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L307() else D74()
  // L307()
  goto L307_;

L71_:;
  // pusr4 = ld pusr
  Rsh_Fir_reg_pusr4_ = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // check L302() else D72()
  // L302()
  goto L302_;

L72_:;
  // r160 = `-`(dx77, dx78)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dx77_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_dx78_;
  Rsh_Fir_reg_r160_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // abs = ldf abs in base
  Rsh_Fir_reg_abs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // r161 = dyn abs(r160)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r160_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r161_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L306() else D73()
  // L306()
  goto L306_;

L73_:;
  // r168 = `/`(r166, dx80)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r166_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_dx80_;
  Rsh_Fir_reg_r168_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // st xr = r168
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r168_, RHO);
  (void)(Rsh_Fir_reg_r168_);
  // size14 = ld size
  Rsh_Fir_reg_size14_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L311() else D75()
  // L311()
  goto L311_;

L74_:;
  // r175 = `*`(size18, r170)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_size18_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_r170_;
  Rsh_Fir_reg_r175_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // ppin4 = ld ppin
  Rsh_Fir_reg_ppin4_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L323() else D79()
  // L323()
  goto L323_;

L75_:;
  // pusr12 = ld pusr
  Rsh_Fir_reg_pusr12_ = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // check L318() else D77()
  // L318()
  goto L318_;

L76_:;
  // r173 = `-`(dx87, dx88)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dx87_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_dx88_;
  Rsh_Fir_reg_r173_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // abs1 = ldf abs in base
  Rsh_Fir_reg_abs1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // r174 = dyn abs1(r173)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r173_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r174_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs1_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L322() else D78()
  // L322()
  goto L322_;

L77_:;
  // r181 = `/`(r179, dx90)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r179_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_dx90_;
  Rsh_Fir_reg_r181_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // st yr = r181
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_r181_, RHO);
  (void)(Rsh_Fir_reg_r181_);
  // sym25 = ldf `rep.int`
  Rsh_Fir_reg_sym25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // base25 = ldf `rep.int` in base
  Rsh_Fir_reg_base25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // guard25 = `==`.4(sym25, base25)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym25_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base25_;
  Rsh_Fir_reg_guard25_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard25 then L327() else L328()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard25_)) {
  // L327()
    goto L327_;
  } else {
  // L328()
    goto L328_;
  }

L78_:;
  // st `i.rep` = r183
  Rsh_Fir_store(Rsh_const(CCP, 54), Rsh_Fir_reg_r183_, RHO);
  (void)(Rsh_Fir_reg_r183_);
  // numeric = ldf numeric
  Rsh_Fir_reg_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L336() else D84()
  // L336()
  goto L336_;

L79_:;
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r186 = dyn rep_int(i_multi1, dx92)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_i_multi1_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_dx92_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r186_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L335() else D83()
  // L335()
  goto L335_;

L80_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args57);
  // c57 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if c57 then L339() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c57_)) {
  // L339()
    goto L339_;
  } else {
  // L85()
    goto L85_;
  }

L81_:;
  // st z = r189
  Rsh_Fir_store(Rsh_const(CCP, 57), Rsh_Fir_reg_r189_, RHO);
  (void)(Rsh_Fir_reg_r189_);
  // goto L80(i7)
  // L80(i7)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i7_;
  goto L80_;

L82_:;
  // r195 = `:`(r193, dx94)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r193_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_dx94_;
  Rsh_Fir_reg_r195_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // rotate1 = ld rotate
  Rsh_Fir_reg_rotate1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L348() else D90()
  // L348()
  goto L348_;

L83_:;
  // goto L84(i11, r195, 0.0)
  // L84(i11, r195, 0.0)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r201_ = Rsh_Fir_reg_r195_;
  Rsh_Fir_reg_r202_ = Rsh_const(CCP, 58);
  goto L84_;

L84_:;
  // r203 = `+`(r201, r202)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r201_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_r202_;
  Rsh_Fir_reg_r203_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // c60 = ldf c in base
  Rsh_Fir_reg_c60_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // r204 = dyn c60(z1, r203)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_z1_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_r203_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r204_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c60_, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L354() else D94()
  // L354()
  goto L354_;

L85_:;
  // x26 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args62[4];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args62[2] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args62[3] = Rsh_const(CCP, 60);
  Rsh_Fir_reg_x26_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // st i = x26
  Rsh_Fir_store(Rsh_const(CCP, 61), Rsh_Fir_reg_x26_, RHO);
  (void)(Rsh_Fir_reg_x26_);
  // sym26 = ldf c
  Rsh_Fir_reg_sym26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // base26 = ldf c in base
  Rsh_Fir_reg_base26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // guard26 = `==`.4(sym26, base26)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_sym26_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_base26_;
  Rsh_Fir_reg_guard26_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args63);
  // if guard26 then L340() else L341()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard26_)) {
  // L340()
    goto L340_;
  } else {
  // L341()
    goto L341_;
  }

L86_:;
  // r211 = `/`(r209, dx96)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r209_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_dx96_;
  Rsh_Fir_reg_r211_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // st deg = r211
  Rsh_Fir_store(Rsh_const(CCP, 62), Rsh_Fir_reg_r211_, RHO);
  (void)(Rsh_Fir_reg_r211_);
  // segments = ldf segments
  Rsh_Fir_reg_segments = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // check L361() else D98()
  // L361()
  goto L361_;

L87_:;
  // sym29 = ldf invisible
  Rsh_Fir_reg_sym29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 64), RHO);
  // base29 = ldf invisible in base
  Rsh_Fir_reg_base29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // guard29 = `==`.4(sym29, base29)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sym29_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_base29_;
  Rsh_Fir_reg_guard29_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args65);
  // if guard29 then L364() else L365()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard29_)) {
  // L364()
    goto L364_;
  } else {
  // L365()
    goto L365_;
  }

L88_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r235
  return Rsh_Fir_reg_r235_;

L89_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // r239 = dyn invisible(r237)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r237_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r239_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L372() else D104()
  // L372()
  goto L372_;

L90_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r5 = dyn missing(<sym x>)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L19(r5)
  // L19(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L19_;

L91_:;
  // r3 = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L19(r3)
  // L19(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L19_;

L92_:;
  // deparse1 = ldf deparse1
  Rsh_Fir_reg_deparse1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L93() else D0()
  // L93()
  goto L93_;

D0_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L93_:;
  // p2 = prom<V +>{
  //   sym1 = ldf substitute;
  //   base1 = ldf substitute in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r8):
  //   return r8;
  // L1():
  //   substitute = ldf substitute in base;
  //   r9 = dyn substitute(<sym x>);
  //   goto L0(r9);
  // L2():
  //   r7 = dyn base1(<sym x>);
  //   goto L0(r7);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_2, CCP, RHO);
  // r11 = dyn deparse1(p2)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse1_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L94() else D1()
  // L94()
  goto L94_;

D1_:;
  // deopt 7 [r11]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L94_:;
  // goto L21(r11)
  // L21(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L21_;

L96_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r15 = dyn missing1(<sym y>)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L22(r15)
  // L22(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L22_;

L97_:;
  // r13 = dyn base2(<sym y>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L22(r13)
  // L22(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L22_;

L98_:;
  // deparse2 = ldf deparse1
  Rsh_Fir_reg_deparse2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L99() else D2()
  // L99()
  goto L99_;

D2_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L99_:;
  // p3 = prom<V +>{
  //   sym3 = ldf substitute;
  //   base3 = ldf substitute in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r18):
  //   return r18;
  // L1():
  //   substitute1 = ldf substitute in base;
  //   r19 = dyn substitute1(<sym y>);
  //   goto L0(r19);
  // L2():
  //   r17 = dyn base3(<sym y>);
  //   goto L0(r17);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_3, CCP, RHO);
  // r21 = dyn deparse2(p3)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse2_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L100() else D3()
  // L100()
  goto L100_;

D3_:;
  // deopt 18 [r21]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L100_:;
  // goto L24(r21)
  // L24(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L24_;

L102_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L104() else D4()
  // L104()
  goto L104_;

L103_:;
  // r23 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L25(r23)
  // L25(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L25_;

D4_:;
  // deopt 24 [x1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L104_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r25 = dyn is_list(x2)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L105() else D5()
  // L105()
  goto L105_;

D5_:;
  // deopt 27 [r25]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L105_:;
  // goto L25(r25)
  // L25(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L25_;

L106_:;
  // sym5 = ldf all
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // base5 = ldf all in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard5 then L107() else L108()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L107()
    goto L107_;
  } else {
  // L108()
    goto L108_;
  }

L107_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 68), RHO);
  // check L109() else D6()
  // L109()
  goto L109_;

L108_:;
  // r26 = dyn base5(<lang `%in%`(c("x", "y", "number"), names(x))>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L27(c2, r26)
  // L27(c2, r26)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L27_;

D6_:;
  // deopt 31 [c2]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L109_:;
  // p4 = prom<V +>{
  //   sym6 = ldf c;
  //   base6 = ldf c in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r29):
  //   return r29;
  // L1():
  //   c8 = ldf c in base;
  //   r30 = dyn c8("x", "y", "number");
  //   goto L0(r30);
  // L2():
  //   r28 = dyn base6("x", "y", "number");
  //   goto L0(r28);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_4, CCP, RHO);
  // p5 = prom<V +>{
  //   sym7 = ldf names;
  //   base7 = ldf names in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r33):
  //   return r33;
  // L1():
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   names = ldf names in base;
  //   r34 = dyn names(x4);
  //   goto L0(r34);
  // L2():
  //   r32 = dyn base7(<sym x>);
  //   goto L0(r32);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_5, CCP, RHO);
  // r36 = dyn _in_(p4, p5)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L110() else D7()
  // L110()
  goto L110_;

D7_:;
  // deopt 34 [c2, r36]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L110_:;
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r37 = dyn all(r36)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L111() else D8()
  // L111()
  goto L111_;

D8_:;
  // deopt 36 [c2, r37]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(36, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L111_:;
  // goto L27(c2, r37)
  // L27(c2, r37)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r37_;
  goto L27_;

D9_:;
  // deopt 39 [is_xyn]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_is_xyn;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L113_:;
  // is_xyn1 = force? is_xyn
  Rsh_Fir_reg_is_xyn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_is_xyn);
  // checkMissing(is_xyn1)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_is_xyn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // c12 = `as.logical`(is_xyn1)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_is_xyn1_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if c12 then L114() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L114()
    goto L114_;
  } else {
  // L28()
    goto L28_;
  }

L114_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L115() else D10()
  // L115()
  goto L115_;

D10_:;
  // deopt 41 [x5]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L115_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(x6)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // if c13 then L117() else L118(x6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L117()
    goto L117_;
  } else {
  // L118(x6)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_x6_;
    goto L118_;
  }

L116_:;
  // st number = dx1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L120() else D11()
  // L120()
  goto L120_;

L117_:;
  // dr = tryDispatchBuiltin.1("$", x6)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args97);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // if dc then L119() else L118(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L119()
    goto L119_;
  } else {
  // L118(dr)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_dr;
    goto L118_;
  }

L118_:;
  // r38 = `$`(x8, <sym number>)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // goto L116(r38)
  // L116(r38)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r38_;
  goto L116_;

L119_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // goto L116(dx)
  // L116(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L116_;

D11_:;
  // deopt 45 [x9]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L120_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // goto L29(x10)
  // L29(x10)
  Rsh_Fir_reg_x11_ = Rsh_Fir_reg_x10_;
  goto L29_;

D12_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

L122_:;
  // p6 = prom<V +>{
  //   x12 = ld x;
  //   x13 = force? x12;
  //   checkMissing(x13);
  //   return x13;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_6, CCP, RHO);
  // p7 = prom<V +>{
  //   y1 = ld y;
  //   y2 = force? y1;
  //   checkMissing(y2);
  //   return y2;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_7, CCP, RHO);
  // p8 = prom<V +>{
  //   xlabel = ld xlabel;
  //   xlabel1 = force? xlabel;
  //   checkMissing(xlabel1);
  //   return xlabel1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_8, CCP, RHO);
  // p9 = prom<V +>{
  //   ylabel = ld ylabel;
  //   ylabel1 = force? ylabel;
  //   checkMissing(ylabel1);
  //   return ylabel1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_9, CCP, RHO);
  // p10 = prom<V +>{
  //   log1 = ld log;
  //   log2 = force? log1;
  //   checkMissing(log2);
  //   return log2;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_10, CCP, RHO);
  // r44 = dyn xy_coords(p6, p7, p8, p9, p10)
  SEXP Rsh_Fir_array_args107[5];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args107[2] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args107[3] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args107[4] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names29[5];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_array_arg_names29[3] = R_MissingArg;
  Rsh_Fir_array_arg_names29[4] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_xy_coords, 5, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L123() else D13()
  // L123()
  goto L123_;

D13_:;
  // deopt 54 [r44]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L123_:;
  // goto L29(r44)
  // L29(r44)
  Rsh_Fir_reg_x11_ = Rsh_Fir_reg_r44_;
  goto L29_;

D14_:;
  // deopt 56 [add1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_add1_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L124_:;
  // add2 = force? add1
  Rsh_Fir_reg_add2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_add1_);
  // checkMissing(add2)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_add2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // r45 = `!`(add2)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_add2_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // c14 = `as.logical`(r45)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // if c14 then L125() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L125()
    goto L125_;
  } else {
  // L30()
    goto L30_;
  }

L125_:;
  // sym8 = ldf `is.null`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base8 = ldf `is.null` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args111);
  // if guard8 then L126() else L127()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L126()
    goto L126_;
  } else {
  // L127()
    goto L127_;
  }

L126_:;
  // xlab1 = ld xlab
  Rsh_Fir_reg_xlab1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L128() else D15()
  // L128()
  goto L128_;

L127_:;
  // r46 = dyn base8(<sym xlab>)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L31(r46)
  // L31(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L31_;

D15_:;
  // deopt 60 [xlab1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_xlab1_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L128_:;
  // xlab2 = force? xlab1
  Rsh_Fir_reg_xlab2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xlab1_);
  // checkMissing(xlab2)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_xlab2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // c15 = `==`(xlab2, NULL)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_xlab2_;
  Rsh_Fir_array_args114[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // goto L31(c15)
  // L31(c15)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_c15_;
  goto L31_;

L129_:;
  // xy = ld xy
  Rsh_Fir_reg_xy = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L130() else D16()
  // L130()
  goto L130_;

D16_:;
  // deopt 63 [xy]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_xy;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L130_:;
  // xy1 = force? xy
  Rsh_Fir_reg_xy1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xy);
  // checkMissing(xy1)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_xy1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(xy1)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_xy1_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // if c17 then L132() else L133(xy1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L132()
    goto L132_;
  } else {
  // L133(xy1)
    Rsh_Fir_reg_xy3_ = Rsh_Fir_reg_xy1_;
    goto L133_;
  }

L131_:;
  // st xlab = dx3
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L33()
  // L33()
  goto L33_;

L132_:;
  // dr2 = tryDispatchBuiltin.1("$", xy1)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_xy1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args117);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // if dc1 then L134() else L133(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L134()
    goto L134_;
  } else {
  // L133(dr2)
    Rsh_Fir_reg_xy3_ = Rsh_Fir_reg_dr2_;
    goto L133_;
  }

L133_:;
  // r48 = `$`(xy3, <sym xlab>)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_xy3_;
  Rsh_Fir_array_args119[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // goto L131(r48)
  // L131(r48)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r48_;
  goto L131_;

L134_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // goto L131(dx2)
  // L131(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L131_;

L136_:;
  // ylab1 = ld ylab
  Rsh_Fir_reg_ylab1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L138() else D17()
  // L138()
  goto L138_;

L137_:;
  // r49 = dyn base9(<sym ylab>)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L34(r49)
  // L34(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L34_;

D17_:;
  // deopt 70 [ylab1]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_ylab1_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L138_:;
  // ylab2 = force? ylab1
  Rsh_Fir_reg_ylab2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ylab1_);
  // checkMissing(ylab2)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_ylab2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // c18 = `==`(ylab2, NULL)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_ylab2_;
  Rsh_Fir_array_args123[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // goto L34(c18)
  // L34(c18)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_c18_;
  goto L34_;

L139_:;
  // xy4 = ld xy
  Rsh_Fir_reg_xy4_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L140() else D18()
  // L140()
  goto L140_;

D18_:;
  // deopt 73 [xy4]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_xy4_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L140_:;
  // xy5 = force? xy4
  Rsh_Fir_reg_xy5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xy4_);
  // checkMissing(xy5)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_xy5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(xy5)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_xy5_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // if c20 then L142() else L143(xy5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L142()
    goto L142_;
  } else {
  // L143(xy5)
    Rsh_Fir_reg_xy7_ = Rsh_Fir_reg_xy5_;
    goto L143_;
  }

L141_:;
  // st ylab = dx6
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx6_, RHO);
  (void)(Rsh_Fir_reg_dx6_);
  // goto L36()
  // L36()
  goto L36_;

L142_:;
  // dr4 = tryDispatchBuiltin.1("$", xy5)
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_xy5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args126);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // if dc2 then L144() else L143(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L144()
    goto L144_;
  } else {
  // L143(dr4)
    Rsh_Fir_reg_xy7_ = Rsh_Fir_reg_dr4_;
    goto L143_;
  }

L143_:;
  // r51 = `$`(xy7, <sym ylab>)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_xy7_;
  Rsh_Fir_array_args128[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // goto L141(r51)
  // L141(r51)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r51_;
  goto L141_;

L144_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // goto L141(dx5)
  // L141(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L141_;

L146_:;
  // xlim1 = ld xlim
  Rsh_Fir_reg_xlim1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L148() else D19()
  // L148()
  goto L148_;

L147_:;
  // r52 = dyn base10(<sym xlim>)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L37(r52)
  // L37(r52)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L37_;

D19_:;
  // deopt 80 [xlim1]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_xlim1_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L148_:;
  // xlim2 = force? xlim1
  Rsh_Fir_reg_xlim2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xlim1_);
  // checkMissing(xlim2)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_xlim2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // c21 = `==`(xlim2, NULL)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_xlim2_;
  Rsh_Fir_array_args132[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // goto L37(c21)
  // L37(c21)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_c21_;
  goto L37_;

L149_:;
  // sym11 = ldf range
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base11 = ldf range in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args133);
  // if guard11 then L150() else L151()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L150()
    goto L150_;
  } else {
  // L151()
    goto L151_;
  }

L150_:;
  // xy8 = ld xy
  Rsh_Fir_reg_xy8_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L152() else D20()
  // L152()
  goto L152_;

L151_:;
  // r54 = dyn base11(<lang `[`(`$`(xy, x), is.finite(`$`(xy, x)))>)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_const(CCP, 75);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L39(r54)
  // L39(r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L39_;

D20_:;
  // deopt 85 [xy8]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_xy8_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L152_:;
  // xy9 = force? xy8
  Rsh_Fir_reg_xy9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xy8_);
  // checkMissing(xy9)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_xy9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // c23 = `is.object`(xy9)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_xy9_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // if c23 then L154() else L155(xy9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L154()
    goto L154_;
  } else {
  // L155(xy9)
    Rsh_Fir_reg_xy11_ = Rsh_Fir_reg_xy9_;
    goto L155_;
  }

L153_:;
  // c24 = `is.object`(dx9)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // if c24 then L157() else L158(dx9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L157()
    goto L157_;
  } else {
  // L158(dx9)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx9_;
    goto L158_;
  }

L154_:;
  // dr6 = tryDispatchBuiltin.1("$", xy9)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_xy9_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args138);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // if dc3 then L156() else L155(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L156()
    goto L156_;
  } else {
  // L155(dr6)
    Rsh_Fir_reg_xy11_ = Rsh_Fir_reg_dr6_;
    goto L155_;
  }

L155_:;
  // r56 = `$`(xy11, <sym x>)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_xy11_;
  Rsh_Fir_array_args140[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // goto L153(r56)
  // L153(r56)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r56_;
  goto L153_;

L156_:;
  // dx8 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // goto L153(dx8)
  // L153(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L153_;

L157_:;
  // dr8 = tryDispatchBuiltin.1("[", dx9)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args142);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // if dc4 then L159() else L158(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L159()
    goto L159_;
  } else {
  // L158(dr8)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dr8_;
    goto L158_;
  }

L158_:;
  // sym12 = ldf `is.finite`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 77), RHO);
  // base12 = ldf `is.finite` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 77), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args144);
  // if guard12 then L160() else L161()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L160()
    goto L160_;
  } else {
  // L161()
    goto L161_;
  }

L159_:;
  // dx12 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // goto L40(dx12)
  // L40(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L40_;

L160_:;
  // xy12 = ld xy
  Rsh_Fir_reg_xy12_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L162() else D21()
  // L162()
  goto L162_;

L161_:;
  // r57 = dyn base12(<lang `$`(xy, x)>)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_const(CCP, 78);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L41(dx11, r57)
  // L41(dx11, r57)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L41_;

D21_:;
  // deopt 90 [dx11, xy12]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_xy12_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L162_:;
  // xy13 = force? xy12
  Rsh_Fir_reg_xy13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xy12_);
  // checkMissing(xy13)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_xy13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(xy13)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_xy13_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // if c25 then L164() else L165(dx11, xy13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L164()
    goto L164_;
  } else {
  // L165(dx11, xy13)
    Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx11_;
    Rsh_Fir_reg_xy15_ = Rsh_Fir_reg_xy13_;
    goto L165_;
  }

L163_:;
  // is_finite = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 77), RHO);
  // r60 = dyn is_finite(dx22)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_dx22_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite, 1, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L167() else D22()
  // L167()
  goto L167_;

L164_:;
  // dr10 = tryDispatchBuiltin.1("$", xy13)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args150[1] = Rsh_Fir_reg_xy13_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args150);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty());
  // if dc5 then L166() else L165(dx11, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L166()
    goto L166_;
  } else {
  // L165(dx11, dr10)
    Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx11_;
    Rsh_Fir_reg_xy15_ = Rsh_Fir_reg_dr10_;
    goto L165_;
  }

L165_:;
  // r59 = `$`(xy15, <sym x>)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_xy15_;
  Rsh_Fir_array_args152[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty());
  // goto L163(dx18, r59)
  // L163(dx18, r59)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx18_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_r59_;
  goto L163_;

L166_:;
  // dx20 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // goto L163(dx11, dx20)
  // L163(dx11, dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx20_;
  goto L163_;

D22_:;
  // deopt 94 [dx21, r60]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(94, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L167_:;
  // goto L41(dx21, r60)
  // L41(dx21, r60)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx21_;
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r60_;
  goto L41_;

D23_:;
  // deopt 97 [r62]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L168_:;
  // goto L39(r62)
  // L39(r62)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r62_;
  goto L39_;

L170_:;
  // ylim1 = ld ylim
  Rsh_Fir_reg_ylim1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L172() else D24()
  // L172()
  goto L172_;

L171_:;
  // r64 = dyn base13(<sym ylim>)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args154, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L43(r64)
  // L43(r64)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r64_;
  goto L43_;

D24_:;
  // deopt 102 [ylim1]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_ylim1_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L172_:;
  // ylim2 = force? ylim1
  Rsh_Fir_reg_ylim2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ylim1_);
  // checkMissing(ylim2)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_ylim2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty()));
  // c26 = `==`(ylim2, NULL)
  SEXP Rsh_Fir_array_args156[2];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_ylim2_;
  Rsh_Fir_array_args156[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty());
  // goto L43(c26)
  // L43(c26)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_c26_;
  goto L43_;

L173_:;
  // sym14 = ldf range
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base14 = ldf range in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args157[2];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args157[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args157);
  // if guard14 then L174() else L175()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L174()
    goto L174_;
  } else {
  // L175()
    goto L175_;
  }

L174_:;
  // xy16 = ld xy
  Rsh_Fir_reg_xy16_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L176() else D25()
  // L176()
  goto L176_;

L175_:;
  // r66 = dyn base14(<lang `[`(`$`(xy, y), is.finite(`$`(xy, y)))>)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_const(CCP, 79);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L45(r66)
  // L45(r66)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r66_;
  goto L45_;

D25_:;
  // deopt 107 [xy16]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_xy16_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L176_:;
  // xy17 = force? xy16
  Rsh_Fir_reg_xy17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xy16_);
  // checkMissing(xy17)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_xy17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // c28 = `is.object`(xy17)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_xy17_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty());
  // if c28 then L178() else L179(xy17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L178()
    goto L178_;
  } else {
  // L179(xy17)
    Rsh_Fir_reg_xy19_ = Rsh_Fir_reg_xy17_;
    goto L179_;
  }

L177_:;
  // c29 = `is.object`(dx24)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_dx24_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty());
  // if c29 then L181() else L182(dx24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L181()
    goto L181_;
  } else {
  // L182(dx24)
    Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx24_;
    goto L182_;
  }

L178_:;
  // dr12 = tryDispatchBuiltin.1("$", xy17)
  SEXP Rsh_Fir_array_args162[2];
  Rsh_Fir_array_args162[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args162[1] = Rsh_Fir_reg_xy17_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args162);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // if dc6 then L180() else L179(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L180()
    goto L180_;
  } else {
  // L179(dr12)
    Rsh_Fir_reg_xy19_ = Rsh_Fir_reg_dr12_;
    goto L179_;
  }

L179_:;
  // r68 = `$`(xy19, <sym y>)
  SEXP Rsh_Fir_array_args164[2];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_xy19_;
  Rsh_Fir_array_args164[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty());
  // goto L177(r68)
  // L177(r68)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_r68_;
  goto L177_;

L180_:;
  // dx23 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty());
  // goto L177(dx23)
  // L177(dx23)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx23_;
  goto L177_;

L181_:;
  // dr14 = tryDispatchBuiltin.1("[", dx24)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_dx24_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args166);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty());
  // if dc7 then L183() else L182(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L183()
    goto L183_;
  } else {
  // L182(dr14)
    Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dr14_;
    goto L182_;
  }

L182_:;
  // sym15 = ldf `is.finite`
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 77), RHO);
  // base15 = ldf `is.finite` in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 77), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args168[2];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args168[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args168);
  // if guard15 then L184() else L185()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L184()
    goto L184_;
  } else {
  // L185()
    goto L185_;
  }

L183_:;
  // dx27 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // goto L46(dx27)
  // L46(dx27)
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx27_;
  goto L46_;

L184_:;
  // xy20 = ld xy
  Rsh_Fir_reg_xy20_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L186() else D26()
  // L186()
  goto L186_;

L185_:;
  // r69 = dyn base15(<lang `$`(xy, y)>)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_const(CCP, 80);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args170, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L47(dx26, r69)
  // L47(dx26, r69)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx26_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r69_;
  goto L47_;

D26_:;
  // deopt 112 [dx26, xy20]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_dx26_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_xy20_;
  Rsh_Fir_deopt(112, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L186_:;
  // xy21 = force? xy20
  Rsh_Fir_reg_xy21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xy20_);
  // checkMissing(xy21)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_xy21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(xy21)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_xy21_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty());
  // if c30 then L188() else L189(dx26, xy21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L188()
    goto L188_;
  } else {
  // L189(dx26, xy21)
    Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx26_;
    Rsh_Fir_reg_xy23_ = Rsh_Fir_reg_xy21_;
    goto L189_;
  }

L187_:;
  // is_finite1 = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 77), RHO);
  // r72 = dyn is_finite1(dx37)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_dx37_;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite1_, 1, Rsh_Fir_array_args173, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L191() else D27()
  // L191()
  goto L191_;

L188_:;
  // dr16 = tryDispatchBuiltin.1("$", xy21)
  SEXP Rsh_Fir_array_args174[2];
  Rsh_Fir_array_args174[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args174[1] = Rsh_Fir_reg_xy21_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args174);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty());
  // if dc8 then L190() else L189(dx26, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L190()
    goto L190_;
  } else {
  // L189(dx26, dr16)
    Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx26_;
    Rsh_Fir_reg_xy23_ = Rsh_Fir_reg_dr16_;
    goto L189_;
  }

L189_:;
  // r71 = `$`(xy23, <sym y>)
  SEXP Rsh_Fir_array_args176[2];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_xy23_;
  Rsh_Fir_array_args176[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty());
  // goto L187(dx33, r71)
  // L187(dx33, r71)
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_dx33_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_r71_;
  goto L187_;

L190_:;
  // dx35 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // goto L187(dx26, dx35)
  // L187(dx26, dx35)
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_dx26_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx35_;
  goto L187_;

D27_:;
  // deopt 116 [dx36, r72]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_dx36_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(116, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L191_:;
  // goto L47(dx36, r72)
  // L47(dx36, r72)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx36_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r72_;
  goto L47_;

D28_:;
  // deopt 119 [r74]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L192_:;
  // goto L45(r74)
  // L45(r74)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r74_;
  goto L45_;

L195_:;
  // xy24 = ld xy
  Rsh_Fir_reg_xy24_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L197() else D29()
  // L197()
  goto L197_;

L196_:;
  // r77 = dyn base16(<lang `$`(xy, x)>)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_const(CCP, 78);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args178, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L50(r77)
  // L50(r77)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r77_;
  goto L50_;

D29_:;
  // deopt 127 [xy24]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_xy24_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L197_:;
  // xy25 = force? xy24
  Rsh_Fir_reg_xy25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xy24_);
  // checkMissing(xy25)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_xy25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(xy25)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_xy25_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty());
  // if c31 then L199() else L200(xy25)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L199()
    goto L199_;
  } else {
  // L200(xy25)
    Rsh_Fir_reg_xy27_ = Rsh_Fir_reg_xy25_;
    goto L200_;
  }

L198_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r80 = dyn length(dx39)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_dx39_;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args181, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L202() else D30()
  // L202()
  goto L202_;

L199_:;
  // dr18 = tryDispatchBuiltin.1("$", xy25)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_xy25_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args182);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty());
  // if dc9 then L201() else L200(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L201()
    goto L201_;
  } else {
  // L200(dr18)
    Rsh_Fir_reg_xy27_ = Rsh_Fir_reg_dr18_;
    goto L200_;
  }

L200_:;
  // r79 = `$`(xy27, <sym x>)
  SEXP Rsh_Fir_array_args184[2];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_xy27_;
  Rsh_Fir_array_args184[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty());
  // goto L198(r79)
  // L198(r79)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_r79_;
  goto L198_;

L201_:;
  // dx38 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty());
  // goto L198(dx38)
  // L198(dx38)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx38_;
  goto L198_;

D30_:;
  // deopt 131 [r80]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L202_:;
  // goto L50(r80)
  // L50(r80)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r80_;
  goto L50_;

L203_:;
  // missing2 = ldf missing in base
  Rsh_Fir_reg_missing2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r83 = dyn missing2(<sym number>)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing2_, 1, Rsh_Fir_array_args186, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L51(r83)
  // L51(r83)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r83_;
  goto L51_;

L204_:;
  // r81 = dyn base17(<sym number>)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args187, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L51(r81)
  // L51(r81)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r81_;
  goto L51_;

L205_:;
  // xyTable = ldf xyTable
  Rsh_Fir_reg_xyTable = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 81), RHO);
  // check L206() else D31()
  // L206()
  goto L206_;

D31_:;
  // deopt 137 []
  Rsh_Fir_deopt(137, 0, NULL, CCP, RHO);
  return R_NilValue;

L206_:;
  // p11 = prom<V +>{
  //   xy28 = ld xy;
  //   xy29 = force? xy28;
  //   checkMissing(xy29);
  //   return xy29;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_11, CCP, RHO);
  // p12 = prom<V +>{
  //   digits1 = ld digits;
  //   digits2 = force? digits1;
  //   checkMissing(digits2);
  //   return digits2;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_12, CCP, RHO);
  // r86 = dyn xyTable[, digits](p11, p12)
  SEXP Rsh_Fir_array_args190[2];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args190[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_xyTable, 2, Rsh_Fir_array_args190, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L207() else D32()
  // L207()
  goto L207_;

D32_:;
  // deopt 141 [r86]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L207_:;
  // st tt = r86
  Rsh_Fir_store(Rsh_const(CCP, 82), Rsh_Fir_reg_r86_, RHO);
  (void)(Rsh_Fir_reg_r86_);
  // tt = ld tt
  Rsh_Fir_reg_tt = Rsh_Fir_load(Rsh_const(CCP, 82), RHO);
  // check L208() else D33()
  // L208()
  goto L208_;

D33_:;
  // deopt 143 [tt]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_tt;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L208_:;
  // tt1 = force? tt
  Rsh_Fir_reg_tt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tt);
  // checkMissing(tt1)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_tt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args191, Rsh_Fir_param_types_empty()));
  // c33 = `is.object`(tt1)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_tt1_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty());
  // if c33 then L210() else L211(tt1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L210()
    goto L210_;
  } else {
  // L211(tt1)
    Rsh_Fir_reg_tt3_ = Rsh_Fir_reg_tt1_;
    goto L211_;
  }

L209_:;
  // st x = dx41
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx41_, RHO);
  (void)(Rsh_Fir_reg_dx41_);
  // tt4 = ld tt
  Rsh_Fir_reg_tt4_ = Rsh_Fir_load(Rsh_const(CCP, 82), RHO);
  // check L213() else D34()
  // L213()
  goto L213_;

L210_:;
  // dr20 = tryDispatchBuiltin.1("$", tt1)
  SEXP Rsh_Fir_array_args193[2];
  Rsh_Fir_array_args193[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args193[1] = Rsh_Fir_reg_tt1_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args193);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args194, Rsh_Fir_param_types_empty());
  // if dc10 then L212() else L211(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L212()
    goto L212_;
  } else {
  // L211(dr20)
    Rsh_Fir_reg_tt3_ = Rsh_Fir_reg_dr20_;
    goto L211_;
  }

L211_:;
  // r87 = `$`(tt3, <sym x>)
  SEXP Rsh_Fir_array_args195[2];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_tt3_;
  Rsh_Fir_array_args195[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty());
  // goto L209(r87)
  // L209(r87)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_r87_;
  goto L209_;

L212_:;
  // dx40 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx40_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty());
  // goto L209(dx40)
  // L209(dx40)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx40_;
  goto L209_;

D34_:;
  // deopt 147 [tt4]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_tt4_;
  Rsh_Fir_deopt(147, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L213_:;
  // tt5 = force? tt4
  Rsh_Fir_reg_tt5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tt4_);
  // checkMissing(tt5)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_tt5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty()));
  // c34 = `is.object`(tt5)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_tt5_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty());
  // if c34 then L215() else L216(tt5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L215()
    goto L215_;
  } else {
  // L216(tt5)
    Rsh_Fir_reg_tt7_ = Rsh_Fir_reg_tt5_;
    goto L216_;
  }

L214_:;
  // st y = dx43
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx43_, RHO);
  (void)(Rsh_Fir_reg_dx43_);
  // tt8 = ld tt
  Rsh_Fir_reg_tt8_ = Rsh_Fir_load(Rsh_const(CCP, 82), RHO);
  // check L218() else D35()
  // L218()
  goto L218_;

L215_:;
  // dr22 = tryDispatchBuiltin.1("$", tt5)
  SEXP Rsh_Fir_array_args199[2];
  Rsh_Fir_array_args199[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args199[1] = Rsh_Fir_reg_tt5_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args199);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty());
  // if dc11 then L217() else L216(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L217()
    goto L217_;
  } else {
  // L216(dr22)
    Rsh_Fir_reg_tt7_ = Rsh_Fir_reg_dr22_;
    goto L216_;
  }

L216_:;
  // r88 = `$`(tt7, <sym y>)
  SEXP Rsh_Fir_array_args201[2];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_tt7_;
  Rsh_Fir_array_args201[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty());
  // goto L214(r88)
  // L214(r88)
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_r88_;
  goto L214_;

L217_:;
  // dx42 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty());
  // goto L214(dx42)
  // L214(dx42)
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx42_;
  goto L214_;

D35_:;
  // deopt 151 [tt8]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_tt8_;
  Rsh_Fir_deopt(151, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L218_:;
  // tt9 = force? tt8
  Rsh_Fir_reg_tt9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tt8_);
  // checkMissing(tt9)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_tt9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args203, Rsh_Fir_param_types_empty()));
  // c35 = `is.object`(tt9)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_tt9_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty());
  // if c35 then L220() else L221(tt9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L220()
    goto L220_;
  } else {
  // L221(tt9)
    Rsh_Fir_reg_tt11_ = Rsh_Fir_reg_tt9_;
    goto L221_;
  }

L219_:;
  // st number = dx45
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx45_, RHO);
  (void)(Rsh_Fir_reg_dx45_);
  // goto L53()
  // L53()
  goto L53_;

L220_:;
  // dr24 = tryDispatchBuiltin.1("$", tt9)
  SEXP Rsh_Fir_array_args205[2];
  Rsh_Fir_array_args205[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args205[1] = Rsh_Fir_reg_tt9_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args205);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty());
  // if dc12 then L222() else L221(dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L222()
    goto L222_;
  } else {
  // L221(dr24)
    Rsh_Fir_reg_tt11_ = Rsh_Fir_reg_dr24_;
    goto L221_;
  }

L221_:;
  // r89 = `$`(tt11, <sym number>)
  SEXP Rsh_Fir_array_args207[2];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_tt11_;
  Rsh_Fir_array_args207[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args207, Rsh_Fir_param_types_empty());
  // goto L219(r89)
  // L219(r89)
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_r89_;
  goto L219_;

L222_:;
  // dx44 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx44_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty());
  // goto L219(dx44)
  // L219(dx44)
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_dx44_;
  goto L219_;

L224_:;
  // number1 = ld number
  Rsh_Fir_reg_number1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L226() else D36()
  // L226()
  goto L226_;

L225_:;
  // r90 = dyn base18(<sym number>)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args209, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L54(r90)
  // L54(r90)
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r90_;
  goto L54_;

D36_:;
  // deopt 157 [number1]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_number1_;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L226_:;
  // number2 = force? number1
  Rsh_Fir_reg_number2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_number1_);
  // checkMissing(number2)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_number2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args210, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r92 = dyn length1(number2)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_number2_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args211, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L227() else D37()
  // L227()
  goto L227_;

D37_:;
  // deopt 160 [r92]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_deopt(160, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L227_:;
  // goto L54(r92)
  // L54(r92)
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r92_;
  goto L54_;

D38_:;
  // deopt 160 [r91, n]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(160, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L228_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args212, Rsh_Fir_param_types_empty()));
  // r93 = `!=`(r91, n1)
  SEXP Rsh_Fir_array_args213[2];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_array_args213[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args213, Rsh_Fir_param_types_empty());
  // c36 = `as.logical`(r93)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty());
  // if c36 then L229() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L229()
    goto L229_;
  } else {
  // L55()
    goto L55_;
  }

L229_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 83), RHO);
  // check L230() else D39()
  // L230()
  goto L230_;

D39_:;
  // deopt 164 []
  Rsh_Fir_deopt(164, 0, NULL, CCP, RHO);
  return R_NilValue;

L230_:;
  // r94 = dyn stop("'number' must have same length as 'x' and 'y'")
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_const(CCP, 84);
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args215, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L231() else D40()
  // L231()
  goto L231_;

D40_:;
  // deopt 166 [r94]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_deopt(166, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L231_:;
  // goto L56()
  // L56()
  goto L56_;

D41_:;
  // deopt 169 [number3]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_number3_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L233_:;
  // number4 = force? number3
  Rsh_Fir_reg_number4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_number3_);
  // checkMissing(number4)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_number4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args216, Rsh_Fir_param_types_empty()));
  // r96 = `>`(number4, 0.0)
  SEXP Rsh_Fir_array_args217[2];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_number4_;
  Rsh_Fir_array_args217[1] = Rsh_const(CCP, 58);
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args217, Rsh_Fir_param_types_empty());
  // st np = r96
  Rsh_Fir_store(Rsh_const(CCP, 85), Rsh_Fir_reg_r96_, RHO);
  (void)(Rsh_Fir_reg_r96_);
  // xy30 = ld xy
  Rsh_Fir_reg_xy30_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L234() else D42()
  // L234()
  goto L234_;

D42_:;
  // deopt 174 [xy30]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_xy30_;
  Rsh_Fir_deopt(174, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L234_:;
  // xy31 = force? xy30
  Rsh_Fir_reg_xy31_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xy30_);
  // checkMissing(xy31)
  SEXP Rsh_Fir_array_args218[1];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_xy31_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args218, Rsh_Fir_param_types_empty()));
  // c37 = `is.object`(xy31)
  SEXP Rsh_Fir_array_args219[1];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_xy31_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args219, Rsh_Fir_param_types_empty());
  // if c37 then L236() else L237(xy31)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L236()
    goto L236_;
  } else {
  // L237(xy31)
    Rsh_Fir_reg_xy33_ = Rsh_Fir_reg_xy31_;
    goto L237_;
  }

L235_:;
  // c38 = `is.object`(dx48)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_dx48_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args220, Rsh_Fir_param_types_empty());
  // if c38 then L239() else L240(dx48)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L239()
    goto L239_;
  } else {
  // L240(dx48)
    Rsh_Fir_reg_dx50_ = Rsh_Fir_reg_dx48_;
    goto L240_;
  }

L236_:;
  // dr26 = tryDispatchBuiltin.1("$", xy31)
  SEXP Rsh_Fir_array_args221[2];
  Rsh_Fir_array_args221[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args221[1] = Rsh_Fir_reg_xy31_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args221);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args222, Rsh_Fir_param_types_empty());
  // if dc13 then L238() else L237(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L238()
    goto L238_;
  } else {
  // L237(dr26)
    Rsh_Fir_reg_xy33_ = Rsh_Fir_reg_dr26_;
    goto L237_;
  }

L237_:;
  // r97 = `$`(xy33, <sym x>)
  SEXP Rsh_Fir_array_args223[2];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_xy33_;
  Rsh_Fir_array_args223[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty());
  // goto L235(r97)
  // L235(r97)
  Rsh_Fir_reg_dx48_ = Rsh_Fir_reg_r97_;
  goto L235_;

L238_:;
  // dx47 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args224[1];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx47_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args224, Rsh_Fir_param_types_empty());
  // goto L235(dx47)
  // L235(dx47)
  Rsh_Fir_reg_dx48_ = Rsh_Fir_reg_dx47_;
  goto L235_;

L239_:;
  // dr28 = tryDispatchBuiltin.1("[", dx48)
  SEXP Rsh_Fir_array_args225[2];
  Rsh_Fir_array_args225[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args225[1] = Rsh_Fir_reg_dx48_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args225);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty());
  // if dc14 then L241() else L240(dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L241()
    goto L241_;
  } else {
  // L240(dr28)
    Rsh_Fir_reg_dx50_ = Rsh_Fir_reg_dr28_;
    goto L240_;
  }

L240_:;
  // np = ld np
  Rsh_Fir_reg_np = Rsh_Fir_load(Rsh_const(CCP, 85), RHO);
  // check L242() else D43()
  // L242()
  goto L242_;

L241_:;
  // dx51 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx51_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args227, Rsh_Fir_param_types_empty());
  // goto L57(dx51)
  // L57(dx51)
  Rsh_Fir_reg_dx52_ = Rsh_Fir_reg_dx51_;
  goto L57_;

D43_:;
  // deopt 177 [dx50, np]
  SEXP Rsh_Fir_array_deopt_stack38[2];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_dx50_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_np;
  Rsh_Fir_deopt(177, 2, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L242_:;
  // np1 = force? np
  Rsh_Fir_reg_np1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_np);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r98 = dyn __2(dx50, np1)
  SEXP Rsh_Fir_array_args228[2];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_dx50_;
  Rsh_Fir_array_args228[1] = Rsh_Fir_reg_np1_;
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args228, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L57(r98)
  // L57(r98)
  Rsh_Fir_reg_dx52_ = Rsh_Fir_reg_r98_;
  goto L57_;

D44_:;
  // deopt 181 [xy34]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_xy34_;
  Rsh_Fir_deopt(181, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L243_:;
  // xy35 = force? xy34
  Rsh_Fir_reg_xy35_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xy34_);
  // checkMissing(xy35)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_xy35_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args229, Rsh_Fir_param_types_empty()));
  // c39 = `is.object`(xy35)
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_xy35_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args230, Rsh_Fir_param_types_empty());
  // if c39 then L245() else L246(xy35)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L245()
    goto L245_;
  } else {
  // L246(xy35)
    Rsh_Fir_reg_xy37_ = Rsh_Fir_reg_xy35_;
    goto L246_;
  }

L244_:;
  // c40 = `is.object`(dx54)
  SEXP Rsh_Fir_array_args231[1];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_dx54_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args231, Rsh_Fir_param_types_empty());
  // if c40 then L248() else L249(dx54)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L248()
    goto L248_;
  } else {
  // L249(dx54)
    Rsh_Fir_reg_dx56_ = Rsh_Fir_reg_dx54_;
    goto L249_;
  }

L245_:;
  // dr30 = tryDispatchBuiltin.1("$", xy35)
  SEXP Rsh_Fir_array_args232[2];
  Rsh_Fir_array_args232[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args232[1] = Rsh_Fir_reg_xy35_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args232);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty());
  // if dc15 then L247() else L246(dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L247()
    goto L247_;
  } else {
  // L246(dr30)
    Rsh_Fir_reg_xy37_ = Rsh_Fir_reg_dr30_;
    goto L246_;
  }

L246_:;
  // r99 = `$`(xy37, <sym y>)
  SEXP Rsh_Fir_array_args234[2];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_xy37_;
  Rsh_Fir_array_args234[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args234, Rsh_Fir_param_types_empty());
  // goto L244(r99)
  // L244(r99)
  Rsh_Fir_reg_dx54_ = Rsh_Fir_reg_r99_;
  goto L244_;

L247_:;
  // dx53 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args235[1];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx53_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args235, Rsh_Fir_param_types_empty());
  // goto L244(dx53)
  // L244(dx53)
  Rsh_Fir_reg_dx54_ = Rsh_Fir_reg_dx53_;
  goto L244_;

L248_:;
  // dr32 = tryDispatchBuiltin.1("[", dx54)
  SEXP Rsh_Fir_array_args236[2];
  Rsh_Fir_array_args236[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args236[1] = Rsh_Fir_reg_dx54_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args236);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args237[1];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args237, Rsh_Fir_param_types_empty());
  // if dc16 then L250() else L249(dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L250()
    goto L250_;
  } else {
  // L249(dr32)
    Rsh_Fir_reg_dx56_ = Rsh_Fir_reg_dr32_;
    goto L249_;
  }

L249_:;
  // np2 = ld np
  Rsh_Fir_reg_np2_ = Rsh_Fir_load(Rsh_const(CCP, 85), RHO);
  // check L251() else D45()
  // L251()
  goto L251_;

L250_:;
  // dx57 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx57_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args238, Rsh_Fir_param_types_empty());
  // goto L58(dx57)
  // L58(dx57)
  Rsh_Fir_reg_dx58_ = Rsh_Fir_reg_dx57_;
  goto L58_;

D45_:;
  // deopt 184 [dx56, np2]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_dx56_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_np2_;
  Rsh_Fir_deopt(184, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L251_:;
  // np3 = force? np2
  Rsh_Fir_reg_np3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_np2_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r100 = dyn __3(dx56, np3)
  SEXP Rsh_Fir_array_args239[2];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_dx56_;
  Rsh_Fir_array_args239[1] = Rsh_Fir_reg_np3_;
  SEXP Rsh_Fir_array_arg_names49[2];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args239, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L58(r100)
  // L58(r100)
  Rsh_Fir_reg_dx58_ = Rsh_Fir_reg_r100_;
  goto L58_;

D46_:;
  // deopt 188 [number5]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_number5_;
  Rsh_Fir_deopt(188, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L252_:;
  // number6 = force? number5
  Rsh_Fir_reg_number6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_number5_);
  // checkMissing(number6)
  SEXP Rsh_Fir_array_args240[1];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_number6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args240, Rsh_Fir_param_types_empty()));
  // c41 = `is.object`(number6)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_number6_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args241, Rsh_Fir_param_types_empty());
  // if c41 then L253() else L254(number6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c41_)) {
  // L253()
    goto L253_;
  } else {
  // L254(number6)
    Rsh_Fir_reg_number8_ = Rsh_Fir_reg_number6_;
    goto L254_;
  }

L253_:;
  // dr34 = tryDispatchBuiltin.1("[", number6)
  SEXP Rsh_Fir_array_args242[2];
  Rsh_Fir_array_args242[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args242[1] = Rsh_Fir_reg_number6_;
  Rsh_Fir_reg_dr34_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args242);
  // dc17 = getTryDispatchBuiltinDispatched(dr34)
  SEXP Rsh_Fir_array_args243[1];
  Rsh_Fir_array_args243[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dc17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args243, Rsh_Fir_param_types_empty());
  // if dc17 then L255() else L254(dr34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc17_)) {
  // L255()
    goto L255_;
  } else {
  // L254(dr34)
    Rsh_Fir_reg_number8_ = Rsh_Fir_reg_dr34_;
    goto L254_;
  }

L254_:;
  // np4 = ld np
  Rsh_Fir_reg_np4_ = Rsh_Fir_load(Rsh_const(CCP, 85), RHO);
  // check L256() else D47()
  // L256()
  goto L256_;

L255_:;
  // dx59 = getTryDispatchBuiltinValue(dr34)
  SEXP Rsh_Fir_array_args244[1];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dx59_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args244, Rsh_Fir_param_types_empty());
  // goto L59(dx59)
  // L59(dx59)
  Rsh_Fir_reg_dx60_ = Rsh_Fir_reg_dx59_;
  goto L59_;

D47_:;
  // deopt 190 [number8, np4]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_number8_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_np4_;
  Rsh_Fir_deopt(190, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L256_:;
  // np5 = force? np4
  Rsh_Fir_reg_np5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_np4_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r101 = dyn __4(number8, np5)
  SEXP Rsh_Fir_array_args245[2];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_number8_;
  Rsh_Fir_array_args245[1] = Rsh_Fir_reg_np5_;
  SEXP Rsh_Fir_array_arg_names50[2];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args245, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L59(r101)
  // L59(r101)
  Rsh_Fir_reg_dx60_ = Rsh_Fir_reg_r101_;
  goto L59_;

L257_:;
  // x14 = ld x
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L259() else D48()
  // L259()
  goto L259_;

L258_:;
  // r102 = dyn base19(<sym x>)
  SEXP Rsh_Fir_array_args246[1];
  Rsh_Fir_array_args246[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args246, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L60(r102)
  // L60(r102)
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r102_;
  goto L60_;

D48_:;
  // deopt 196 [x14]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_deopt(196, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L259_:;
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args247[1];
  Rsh_Fir_array_args247[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args247, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r104 = dyn length2(x15)
  SEXP Rsh_Fir_array_args248[1];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args248, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L260() else D49()
  // L260()
  goto L260_;

D49_:;
  // deopt 199 [r104]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r104_;
  Rsh_Fir_deopt(199, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L260_:;
  // goto L60(r104)
  // L60(r104)
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r104_;
  goto L60_;

D50_:;
  // deopt 202 []
  Rsh_Fir_deopt(202, 0, NULL, CCP, RHO);
  return R_NilValue;

L261_:;
  // r105 = dyn dev_hold()
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dev_hold, 0, NULL, NULL, CCP, RHO);
  // check L262() else D51()
  // L262()
  goto L262_;

D51_:;
  // deopt 203 [r105]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r105_;
  Rsh_Fir_deopt(203, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L262_:;
  // sym20 = ldf `on.exit`
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 86), RHO);
  // base20 = ldf `on.exit` in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 86), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args249[2];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args249[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args249);
  // if guard20 then L263() else L264()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L263()
    goto L263_;
  } else {
  // L264()
    goto L264_;
  }

L263_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 86), RHO);
  // r108 = dyn on_exit(<lang dev.flush()>)
  SEXP Rsh_Fir_array_args250[1];
  Rsh_Fir_array_args250[0] = Rsh_const(CCP, 87);
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args250, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L61()
  // L61()
  goto L61_;

L264_:;
  // r106 = dyn base20(<lang dev.flush()>)
  SEXP Rsh_Fir_array_args251[1];
  Rsh_Fir_array_args251[0] = Rsh_const(CCP, 87);
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 1, Rsh_Fir_array_args251, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L61()
  // L61()
  goto L61_;

D52_:;
  // deopt 207 [add3]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_add3_;
  Rsh_Fir_deopt(207, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L265_:;
  // add4 = force? add3
  Rsh_Fir_reg_add4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_add3_);
  // checkMissing(add4)
  SEXP Rsh_Fir_array_args252[1];
  Rsh_Fir_array_args252[0] = Rsh_Fir_reg_add4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args252, Rsh_Fir_param_types_empty()));
  // r109 = `!`(add4)
  SEXP Rsh_Fir_array_args253[1];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_add4_;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args253, Rsh_Fir_param_types_empty());
  // c42 = `as.logical`(r109)
  SEXP Rsh_Fir_array_args254[1];
  Rsh_Fir_array_args254[0] = Rsh_Fir_reg_r109_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args254, Rsh_Fir_param_types_empty());
  // if c42 then L266() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L266()
    goto L266_;
  } else {
  // L62()
    goto L62_;
  }

L266_:;
  // plot = ldf plot
  Rsh_Fir_reg_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 88), RHO);
  // check L267() else D53()
  // L267()
  goto L267_;

D53_:;
  // deopt 211 []
  Rsh_Fir_deopt(211, 0, NULL, CCP, RHO);
  return R_NilValue;

L267_:;
  // p13 = prom<V +>{
  //   x16 = ld x;
  //   x17 = force? x16;
  //   checkMissing(x17);
  //   return x17;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_13, CCP, RHO);
  // p14 = prom<V +>{
  //   y3 = ld y;
  //   y4 = force? y3;
  //   checkMissing(y4);
  //   return y4;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_14, CCP, RHO);
  // p15 = prom<V +>{
  //   xlab3 = ld xlab;
  //   xlab4 = force? xlab3;
  //   checkMissing(xlab4);
  //   return xlab4;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_15, CCP, RHO);
  // p16 = prom<V +>{
  //   ylab3 = ld ylab;
  //   ylab4 = force? ylab3;
  //   checkMissing(ylab4);
  //   return ylab4;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_16, CCP, RHO);
  // p17 = prom<V +>{
  //   xlim3 = ld xlim;
  //   xlim4 = force? xlim3;
  //   checkMissing(xlim4);
  //   return xlim4;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_17, CCP, RHO);
  // p18 = prom<V +>{
  //   ylim3 = ld ylim;
  //   ylim4 = force? ylim3;
  //   checkMissing(ylim4);
  //   return ylim4;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_18, CCP, RHO);
  // p19 = prom<V +>{
  //   log3 = ld log;
  //   log4 = force? log3;
  //   checkMissing(log4);
  //   return log4;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_19, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // r117 = dyn plot[, , xlab, ylab, xlim, ylim, log, type, `...`](p13, p14, p15, p16, p17, p18, p19, "n", ddd1)
  SEXP Rsh_Fir_array_args262[9];
  Rsh_Fir_array_args262[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args262[1] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args262[2] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args262[3] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args262[4] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args262[5] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args262[6] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_args262[7] = Rsh_const(CCP, 89);
  Rsh_Fir_array_args262[8] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names55[9];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_array_arg_names55[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names55[3] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names55[4] = Rsh_const(CCP, 11);
  Rsh_Fir_array_arg_names55[5] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names55[6] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names55[7] = Rsh_const(CCP, 90);
  Rsh_Fir_array_arg_names55[8] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 9, Rsh_Fir_array_args262, Rsh_Fir_array_arg_names55, CCP, RHO);
  // check L268() else D54()
  // L268()
  goto L268_;

D54_:;
  // deopt 227 [r117]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r117_;
  Rsh_Fir_deopt(227, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L268_:;
  // goto L63()
  // L63()
  goto L63_;

D55_:;
  // deopt 230 [number9]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_number9_;
  Rsh_Fir_deopt(230, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L270_:;
  // number10 = force? number9
  Rsh_Fir_reg_number10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_number9_);
  // checkMissing(number10)
  SEXP Rsh_Fir_array_args263[1];
  Rsh_Fir_array_args263[0] = Rsh_Fir_reg_number10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args263, Rsh_Fir_param_types_empty()));
  // r119 = `==`(number10, 1.0)
  SEXP Rsh_Fir_array_args264[2];
  Rsh_Fir_array_args264[0] = Rsh_Fir_reg_number10_;
  Rsh_Fir_array_args264[1] = Rsh_const(CCP, 91);
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args264, Rsh_Fir_param_types_empty());
  // st `n.is1` = r119
  Rsh_Fir_store(Rsh_const(CCP, 92), Rsh_Fir_reg_r119_, RHO);
  (void)(Rsh_Fir_reg_r119_);
  // sym21 = ldf any
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base21 = ldf any in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args265[2];
  Rsh_Fir_array_args265[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args265[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args265);
  // if guard21 then L271() else L272()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L271()
    goto L271_;
  } else {
  // L272()
    goto L272_;
  }

L271_:;
  // n_is1 = ld `n.is1`
  Rsh_Fir_reg_n_is1_ = Rsh_Fir_load(Rsh_const(CCP, 92), RHO);
  // check L273() else D56()
  // L273()
  goto L273_;

L272_:;
  // r120 = dyn base21(<sym n.is1>)
  SEXP Rsh_Fir_array_args266[1];
  Rsh_Fir_array_args266[0] = Rsh_const(CCP, 92);
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r120_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 1, Rsh_Fir_array_args266, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L64(r120)
  // L64(r120)
  Rsh_Fir_reg_r121_ = Rsh_Fir_reg_r120_;
  goto L64_;

D56_:;
  // deopt 237 [n_is1]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_n_is1_;
  Rsh_Fir_deopt(237, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L273_:;
  // n_is2 = force? n_is1
  Rsh_Fir_reg_n_is2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_is1_);
  // checkMissing(n_is2)
  SEXP Rsh_Fir_array_args267[1];
  Rsh_Fir_array_args267[0] = Rsh_Fir_reg_n_is2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args267, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r122 = dyn any(n_is2)
  SEXP Rsh_Fir_array_args268[1];
  Rsh_Fir_array_args268[0] = Rsh_Fir_reg_n_is2_;
  SEXP Rsh_Fir_array_arg_names57[1];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args268, Rsh_Fir_array_arg_names57, CCP, RHO);
  // check L274() else D57()
  // L274()
  goto L274_;

D57_:;
  // deopt 240 [r122]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r122_;
  Rsh_Fir_deopt(240, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L274_:;
  // goto L64(r122)
  // L64(r122)
  Rsh_Fir_reg_r121_ = Rsh_Fir_reg_r122_;
  goto L64_;

L275_:;
  // points = ldf points
  Rsh_Fir_reg_points = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 93), RHO);
  // check L276() else D58()
  // L276()
  goto L276_;

D58_:;
  // deopt 242 []
  Rsh_Fir_deopt(242, 0, NULL, CCP, RHO);
  return R_NilValue;

L276_:;
  // p20 = prom<V +>{
  //   x18 = ld x;
  //   x19 = force? x18;
  //   checkMissing(x19);
  //   c44 = `is.object`(x19);
  //   if c44 then L1() else L2(x19);
  // L0(dx62):
  //   return dx62;
  // L1():
  //   dr36 = tryDispatchBuiltin.1("[", x19);
  //   dc18 = getTryDispatchBuiltinDispatched(dr36);
  //   if dc18 then L3() else L2(dr36);
  // L2(x21):
  //   n_is3 = ld `n.is1`;
  //   n_is4 = force? n_is3;
  //   __5 = ldf `[` in base;
  //   r123 = dyn __5(x21, n_is4);
  //   goto L0(r123);
  // L3():
  //   dx61 = getTryDispatchBuiltinValue(dr36);
  //   goto L0(dx61);
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_20, CCP, RHO);
  // p21 = prom<V +>{
  //   y5 = ld y;
  //   y6 = force? y5;
  //   checkMissing(y6);
  //   c45 = `is.object`(y6);
  //   if c45 then L1() else L2(y6);
  // L0(dx64):
  //   return dx64;
  // L1():
  //   dr38 = tryDispatchBuiltin.1("[", y6);
  //   dc19 = getTryDispatchBuiltinDispatched(dr38);
  //   if dc19 then L3() else L2(dr38);
  // L2(y8):
  //   n_is5 = ld `n.is1`;
  //   n_is6 = force? n_is5;
  //   __6 = ldf `[` in base;
  //   r125 = dyn __6(y8, n_is6);
  //   goto L0(r125);
  // L3():
  //   dx63 = getTryDispatchBuiltinValue(dr38);
  //   goto L0(dx63);
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_21, CCP, RHO);
  // p22 = prom<V +>{
  //   pch1 = ld pch;
  //   pch2 = force? pch1;
  //   checkMissing(pch2);
  //   return pch2;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_22, CCP, RHO);
  // p23 = prom<V +>{
  //   col1 = ld col;
  //   col2 = force? col1;
  //   checkMissing(col2);
  //   return col2;
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_23, CCP, RHO);
  // p24 = prom<V +>{
  //   bg1 = ld bg;
  //   bg2 = force? bg1;
  //   checkMissing(bg2);
  //   return bg2;
  // }
  Rsh_Fir_reg_p24_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_24, CCP, RHO);
  // p25 = prom<V +>{
  //   cex1 = ld cex;
  //   cex2 = force? cex1;
  //   checkMissing(cex2);
  //   return cex2;
  // }
  Rsh_Fir_reg_p25_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_25, CCP, RHO);
  // r131 = dyn points[, , pch, col, bg, cex](p20, p21, p22, p23, p24, p25)
  SEXP Rsh_Fir_array_args285[6];
  Rsh_Fir_array_args285[0] = Rsh_Fir_reg_p20_;
  Rsh_Fir_array_args285[1] = Rsh_Fir_reg_p21_;
  Rsh_Fir_array_args285[2] = Rsh_Fir_reg_p22_;
  Rsh_Fir_array_args285[3] = Rsh_Fir_reg_p23_;
  Rsh_Fir_array_args285[4] = Rsh_Fir_reg_p24_;
  Rsh_Fir_array_args285[5] = Rsh_Fir_reg_p25_;
  SEXP Rsh_Fir_array_arg_names60[6];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_array_arg_names60[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_arg_names60[3] = Rsh_const(CCP, 24);
  Rsh_Fir_array_arg_names60[4] = Rsh_const(CCP, 26);
  Rsh_Fir_array_arg_names60[5] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r131_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_points, 6, Rsh_Fir_array_args285, Rsh_Fir_array_arg_names60, CCP, RHO);
  // check L277() else D59()
  // L277()
  goto L277_;

D59_:;
  // deopt 253 [r131]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r131_;
  Rsh_Fir_deopt(253, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L277_:;
  // goto L66()
  // L66()
  goto L66_;

L279_:;
  // n_is7 = ld `n.is1`
  Rsh_Fir_reg_n_is7_ = Rsh_Fir_load(Rsh_const(CCP, 92), RHO);
  // check L281() else D60()
  // L281()
  goto L281_;

L280_:;
  // r133 = dyn base22(<lang `!`(n.is1)>)
  SEXP Rsh_Fir_array_args286[1];
  Rsh_Fir_array_args286[0] = Rsh_const(CCP, 94);
  SEXP Rsh_Fir_array_arg_names61[1];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_reg_r133_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 1, Rsh_Fir_array_args286, Rsh_Fir_array_arg_names61, CCP, RHO);
  // goto L67(r133)
  // L67(r133)
  Rsh_Fir_reg_r134_ = Rsh_Fir_reg_r133_;
  goto L67_;

D60_:;
  // deopt 258 [n_is7]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_n_is7_;
  Rsh_Fir_deopt(258, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L281_:;
  // n_is8 = force? n_is7
  Rsh_Fir_reg_n_is8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_is7_);
  // checkMissing(n_is8)
  SEXP Rsh_Fir_array_args287[1];
  Rsh_Fir_array_args287[0] = Rsh_Fir_reg_n_is8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args287, Rsh_Fir_param_types_empty()));
  // r135 = `!`(n_is8)
  SEXP Rsh_Fir_array_args288[1];
  Rsh_Fir_array_args288[0] = Rsh_Fir_reg_n_is8_;
  Rsh_Fir_reg_r135_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args288, Rsh_Fir_param_types_empty());
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r136 = dyn any1(r135)
  SEXP Rsh_Fir_array_args289[1];
  Rsh_Fir_array_args289[0] = Rsh_Fir_reg_r135_;
  SEXP Rsh_Fir_array_arg_names62[1];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_reg_r136_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args289, Rsh_Fir_array_arg_names62, CCP, RHO);
  // check L282() else D61()
  // L282()
  goto L282_;

D61_:;
  // deopt 262 [r136]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r136_;
  Rsh_Fir_deopt(262, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L282_:;
  // goto L67(r136)
  // L67(r136)
  Rsh_Fir_reg_r134_ = Rsh_Fir_reg_r136_;
  goto L67_;

L283_:;
  // points1 = ldf points
  Rsh_Fir_reg_points1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 93), RHO);
  // check L284() else D62()
  // L284()
  goto L284_;

D62_:;
  // deopt 264 []
  Rsh_Fir_deopt(264, 0, NULL, CCP, RHO);
  return R_NilValue;

L284_:;
  // p26 = prom<V +>{
  //   x22 = ld x;
  //   x23 = force? x22;
  //   checkMissing(x23);
  //   c47 = `is.object`(x23);
  //   if c47 then L1() else L2(x23);
  // L0(dx66):
  //   return dx66;
  // L1():
  //   dr40 = tryDispatchBuiltin.1("[", x23);
  //   dc20 = getTryDispatchBuiltinDispatched(dr40);
  //   if dc20 then L3() else L2(dr40);
  // L2(x25):
  //   n_is9 = ld `n.is1`;
  //   n_is10 = force? n_is9;
  //   checkMissing(n_is10);
  //   r137 = `!`(n_is10);
  //   __7 = ldf `[` in base;
  //   r138 = dyn __7(x25, r137);
  //   goto L0(r138);
  // L3():
  //   dx65 = getTryDispatchBuiltinValue(dr40);
  //   goto L0(dx65);
  // }
  Rsh_Fir_reg_p26_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_26, CCP, RHO);
  // p27 = prom<V +>{
  //   y9 = ld y;
  //   y10 = force? y9;
  //   checkMissing(y10);
  //   c48 = `is.object`(y10);
  //   if c48 then L1() else L2(y10);
  // L0(dx68):
  //   return dx68;
  // L1():
  //   dr42 = tryDispatchBuiltin.1("[", y10);
  //   dc21 = getTryDispatchBuiltinDispatched(dr42);
  //   if dc21 then L3() else L2(dr42);
  // L2(y12):
  //   n_is11 = ld `n.is1`;
  //   n_is12 = force? n_is11;
  //   checkMissing(n_is12);
  //   r140 = `!`(n_is12);
  //   __8 = ldf `[` in base;
  //   r141 = dyn __8(y12, r140);
  //   goto L0(r141);
  // L3():
  //   dx67 = getTryDispatchBuiltinValue(dr42);
  //   goto L0(dx67);
  // }
  Rsh_Fir_reg_p27_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_27, CCP, RHO);
  // p28 = prom<V +>{
  //   pch3 = ld pch;
  //   pch4 = force? pch3;
  //   checkMissing(pch4);
  //   return pch4;
  // }
  Rsh_Fir_reg_p28_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_28, CCP, RHO);
  // p29 = prom<V +>{
  //   col3 = ld col;
  //   col4 = force? col3;
  //   checkMissing(col4);
  //   return col4;
  // }
  Rsh_Fir_reg_p29_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_29, CCP, RHO);
  // p30 = prom<V +>{
  //   bg3 = ld bg;
  //   bg4 = force? bg3;
  //   checkMissing(bg4);
  //   return bg4;
  // }
  Rsh_Fir_reg_p30_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_30, CCP, RHO);
  // p31 = prom<V +>{
  //   cex3 = ld cex;
  //   cex4 = force? cex3;
  //   checkMissing(cex4);
  //   cex_fact1 = ld `cex.fact`;
  //   cex_fact2 = force? cex_fact1;
  //   checkMissing(cex_fact2);
  //   r146 = `/`(cex4, cex_fact2);
  //   return r146;
  // }
  Rsh_Fir_reg_p31_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_31, CCP, RHO);
  // r148 = dyn points1[, , pch, col, bg, cex](p26, p27, p28, p29, p30, p31)
  SEXP Rsh_Fir_array_args312[6];
  Rsh_Fir_array_args312[0] = Rsh_Fir_reg_p26_;
  Rsh_Fir_array_args312[1] = Rsh_Fir_reg_p27_;
  Rsh_Fir_array_args312[2] = Rsh_Fir_reg_p28_;
  Rsh_Fir_array_args312[3] = Rsh_Fir_reg_p29_;
  Rsh_Fir_array_args312[4] = Rsh_Fir_reg_p30_;
  Rsh_Fir_array_args312[5] = Rsh_Fir_reg_p31_;
  SEXP Rsh_Fir_array_arg_names65[6];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_array_arg_names65[1] = R_MissingArg;
  Rsh_Fir_array_arg_names65[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_arg_names65[3] = Rsh_const(CCP, 24);
  Rsh_Fir_array_arg_names65[4] = Rsh_const(CCP, 26);
  Rsh_Fir_array_arg_names65[5] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r148_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_points1_, 6, Rsh_Fir_array_args312, Rsh_Fir_array_arg_names65, CCP, RHO);
  // check L285() else D63()
  // L285()
  goto L285_;

D63_:;
  // deopt 275 [r148]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_r148_;
  Rsh_Fir_deopt(275, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L285_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L286() else D64()
  // L286()
  goto L286_;

D64_:;
  // deopt 277 [1, n2]
  SEXP Rsh_Fir_array_deopt_stack55[2];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(277, 2, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L286_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args313[1];
  Rsh_Fir_array_args313[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args313, Rsh_Fir_param_types_empty()));
  // r149 = `:`(1, n3)
  SEXP Rsh_Fir_array_args314[2];
  Rsh_Fir_array_args314[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args314[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_reg_r149_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args314, Rsh_Fir_param_types_empty());
  // c49 = `is.object`(r149)
  SEXP Rsh_Fir_array_args315[1];
  Rsh_Fir_array_args315[0] = Rsh_Fir_reg_r149_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args315, Rsh_Fir_param_types_empty());
  // if c49 then L287() else L288(r149)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c49_)) {
  // L287()
    goto L287_;
  } else {
  // L288(r149)
    Rsh_Fir_reg_r151_ = Rsh_Fir_reg_r149_;
    goto L288_;
  }

L287_:;
  // dr44 = tryDispatchBuiltin.1("[", r149)
  SEXP Rsh_Fir_array_args316[2];
  Rsh_Fir_array_args316[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args316[1] = Rsh_Fir_reg_r149_;
  Rsh_Fir_reg_dr44_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args316);
  // dc22 = getTryDispatchBuiltinDispatched(dr44)
  SEXP Rsh_Fir_array_args317[1];
  Rsh_Fir_array_args317[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dc22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args317, Rsh_Fir_param_types_empty());
  // if dc22 then L289() else L288(dr44)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc22_)) {
  // L289()
    goto L289_;
  } else {
  // L288(dr44)
    Rsh_Fir_reg_r151_ = Rsh_Fir_reg_dr44_;
    goto L288_;
  }

L288_:;
  // number11 = ld number
  Rsh_Fir_reg_number11_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L290() else D65()
  // L290()
  goto L290_;

L289_:;
  // dx69 = getTryDispatchBuiltinValue(dr44)
  SEXP Rsh_Fir_array_args318[1];
  Rsh_Fir_array_args318[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dx69_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args318, Rsh_Fir_param_types_empty());
  // goto L69(dx69)
  // L69(dx69)
  Rsh_Fir_reg_dx70_ = Rsh_Fir_reg_dx69_;
  goto L69_;

D65_:;
  // deopt 280 [r151, number11]
  SEXP Rsh_Fir_array_deopt_stack56[2];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_r151_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_number11_;
  Rsh_Fir_deopt(280, 2, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L290_:;
  // number12 = force? number11
  Rsh_Fir_reg_number12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_number11_);
  // checkMissing(number12)
  SEXP Rsh_Fir_array_args319[1];
  Rsh_Fir_array_args319[0] = Rsh_Fir_reg_number12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args319, Rsh_Fir_param_types_empty()));
  // r152 = `>`(number12, 1.0)
  SEXP Rsh_Fir_array_args320[2];
  Rsh_Fir_array_args320[0] = Rsh_Fir_reg_number12_;
  Rsh_Fir_array_args320[1] = Rsh_const(CCP, 91);
  Rsh_Fir_reg_r152_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args320, Rsh_Fir_param_types_empty());
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r153 = dyn __9(r151, r152)
  SEXP Rsh_Fir_array_args321[2];
  Rsh_Fir_array_args321[0] = Rsh_Fir_reg_r151_;
  Rsh_Fir_array_args321[1] = Rsh_Fir_reg_r152_;
  SEXP Rsh_Fir_array_arg_names66[2];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_array_arg_names66[1] = R_MissingArg;
  Rsh_Fir_reg_r153_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args321, Rsh_Fir_array_arg_names66, CCP, RHO);
  // goto L69(r153)
  // L69(r153)
  Rsh_Fir_reg_dx70_ = Rsh_Fir_reg_r153_;
  goto L69_;

D66_:;
  // deopt 287 []
  Rsh_Fir_deopt(287, 0, NULL, CCP, RHO);
  return R_NilValue;

L291_:;
  // r154 = dyn par1("pin")
  SEXP Rsh_Fir_array_args322[1];
  Rsh_Fir_array_args322[0] = Rsh_const(CCP, 95);
  SEXP Rsh_Fir_array_arg_names67[1];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_reg_r154_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par1_, 1, Rsh_Fir_array_args322, Rsh_Fir_array_arg_names67, CCP, RHO);
  // check L292() else D67()
  // L292()
  goto L292_;

D67_:;
  // deopt 289 [r154]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_r154_;
  Rsh_Fir_deopt(289, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L292_:;
  // st ppin = r154
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_r154_, RHO);
  (void)(Rsh_Fir_reg_r154_);
  // par2 = ldf par
  Rsh_Fir_reg_par2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L293() else D68()
  // L293()
  goto L293_;

D68_:;
  // deopt 292 []
  Rsh_Fir_deopt(292, 0, NULL, CCP, RHO);
  return R_NilValue;

L293_:;
  // r155 = dyn par2("usr")
  SEXP Rsh_Fir_array_args323[1];
  Rsh_Fir_array_args323[0] = Rsh_const(CCP, 96);
  SEXP Rsh_Fir_array_arg_names68[1];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_reg_r155_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par2_, 1, Rsh_Fir_array_args323, Rsh_Fir_array_arg_names68, CCP, RHO);
  // check L294() else D69()
  // L294()
  goto L294_;

D69_:;
  // deopt 294 [r155]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r155_;
  Rsh_Fir_deopt(294, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L294_:;
  // st pusr = r155
  Rsh_Fir_store(Rsh_const(CCP, 49), Rsh_Fir_reg_r155_, RHO);
  (void)(Rsh_Fir_reg_r155_);
  // size1 = ld size
  Rsh_Fir_reg_size1_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L295() else D70()
  // L295()
  goto L295_;

D70_:;
  // deopt 296 [size1]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_size1_;
  Rsh_Fir_deopt(296, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L295_:;
  // size2 = force? size1
  Rsh_Fir_reg_size2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size1_);
  // checkMissing(size2)
  SEXP Rsh_Fir_array_args324[1];
  Rsh_Fir_array_args324[0] = Rsh_Fir_reg_size2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args324, Rsh_Fir_param_types_empty()));
  // sym23 = ldf abs
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // base23 = ldf abs in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args325[2];
  Rsh_Fir_array_args325[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args325[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args325);
  // if guard23 then L296() else L297()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L296()
    goto L296_;
  } else {
  // L297()
    goto L297_;
  }

L296_:;
  // pusr = ld pusr
  Rsh_Fir_reg_pusr = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // check L298() else D71()
  // L298()
  goto L298_;

L297_:;
  // r156 = dyn base23(<lang `-`(`[`(pusr, 2), `[`(pusr, 1))>)
  SEXP Rsh_Fir_array_args326[1];
  Rsh_Fir_array_args326[0] = Rsh_const(CCP, 97);
  SEXP Rsh_Fir_array_arg_names69[1];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_reg_r156_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 1, Rsh_Fir_array_args326, Rsh_Fir_array_arg_names69, CCP, RHO);
  // goto L70(size2, r156)
  // L70(size2, r156)
  Rsh_Fir_reg_size5_ = Rsh_Fir_reg_size2_;
  Rsh_Fir_reg_r157_ = Rsh_Fir_reg_r156_;
  goto L70_;

D71_:;
  // deopt 299 [size2, pusr]
  SEXP Rsh_Fir_array_deopt_stack60[2];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_size2_;
  Rsh_Fir_array_deopt_stack60[1] = Rsh_Fir_reg_pusr;
  Rsh_Fir_deopt(299, 2, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L298_:;
  // pusr1 = force? pusr
  Rsh_Fir_reg_pusr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pusr);
  // checkMissing(pusr1)
  SEXP Rsh_Fir_array_args327[1];
  Rsh_Fir_array_args327[0] = Rsh_Fir_reg_pusr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args327, Rsh_Fir_param_types_empty()));
  // c50 = `is.object`(pusr1)
  SEXP Rsh_Fir_array_args328[1];
  Rsh_Fir_array_args328[0] = Rsh_Fir_reg_pusr1_;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args328, Rsh_Fir_param_types_empty());
  // if c50 then L299() else L300(size2, pusr1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c50_)) {
  // L299()
    goto L299_;
  } else {
  // L300(size2, pusr1)
    Rsh_Fir_reg_size7_ = Rsh_Fir_reg_size2_;
    Rsh_Fir_reg_pusr3_ = Rsh_Fir_reg_pusr1_;
    goto L300_;
  }

L299_:;
  // dr46 = tryDispatchBuiltin.1("[", pusr1)
  SEXP Rsh_Fir_array_args329[2];
  Rsh_Fir_array_args329[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args329[1] = Rsh_Fir_reg_pusr1_;
  Rsh_Fir_reg_dr46_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args329);
  // dc23 = getTryDispatchBuiltinDispatched(dr46)
  SEXP Rsh_Fir_array_args330[1];
  Rsh_Fir_array_args330[0] = Rsh_Fir_reg_dr46_;
  Rsh_Fir_reg_dc23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args330, Rsh_Fir_param_types_empty());
  // if dc23 then L301() else L300(size2, dr46)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc23_)) {
  // L301()
    goto L301_;
  } else {
  // L300(size2, dr46)
    Rsh_Fir_reg_size7_ = Rsh_Fir_reg_size2_;
    Rsh_Fir_reg_pusr3_ = Rsh_Fir_reg_dr46_;
    goto L300_;
  }

L300_:;
  // __10 = ldf `[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r158 = dyn __10(pusr3, 2)
  SEXP Rsh_Fir_array_args331[2];
  Rsh_Fir_array_args331[0] = Rsh_Fir_reg_pusr3_;
  Rsh_Fir_array_args331[1] = Rsh_const(CCP, 98);
  SEXP Rsh_Fir_array_arg_names70[2];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_array_arg_names70[1] = R_MissingArg;
  Rsh_Fir_reg_r158_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 2, Rsh_Fir_array_args331, Rsh_Fir_array_arg_names70, CCP, RHO);
  // goto L71(size7, r158)
  // L71(size7, r158)
  Rsh_Fir_reg_size9_ = Rsh_Fir_reg_size7_;
  Rsh_Fir_reg_dx72_ = Rsh_Fir_reg_r158_;
  goto L71_;

L301_:;
  // dx71 = getTryDispatchBuiltinValue(dr46)
  SEXP Rsh_Fir_array_args332[1];
  Rsh_Fir_array_args332[0] = Rsh_Fir_reg_dr46_;
  Rsh_Fir_reg_dx71_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args332, Rsh_Fir_param_types_empty());
  // goto L71(size2, dx71)
  // L71(size2, dx71)
  Rsh_Fir_reg_size9_ = Rsh_Fir_reg_size2_;
  Rsh_Fir_reg_dx72_ = Rsh_Fir_reg_dx71_;
  goto L71_;

D72_:;
  // deopt 303 [size9, dx72, pusr4]
  SEXP Rsh_Fir_array_deopt_stack61[3];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_size9_;
  Rsh_Fir_array_deopt_stack61[1] = Rsh_Fir_reg_dx72_;
  Rsh_Fir_array_deopt_stack61[2] = Rsh_Fir_reg_pusr4_;
  Rsh_Fir_deopt(303, 3, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L302_:;
  // pusr5 = force? pusr4
  Rsh_Fir_reg_pusr5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pusr4_);
  // checkMissing(pusr5)
  SEXP Rsh_Fir_array_args333[1];
  Rsh_Fir_array_args333[0] = Rsh_Fir_reg_pusr5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args333, Rsh_Fir_param_types_empty()));
  // c51 = `is.object`(pusr5)
  SEXP Rsh_Fir_array_args334[1];
  Rsh_Fir_array_args334[0] = Rsh_Fir_reg_pusr5_;
  Rsh_Fir_reg_c51_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args334, Rsh_Fir_param_types_empty());
  // if c51 then L303() else L304(size9, dx72, pusr5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c51_)) {
  // L303()
    goto L303_;
  } else {
  // L304(size9, dx72, pusr5)
    Rsh_Fir_reg_size11_ = Rsh_Fir_reg_size9_;
    Rsh_Fir_reg_dx74_ = Rsh_Fir_reg_dx72_;
    Rsh_Fir_reg_pusr7_ = Rsh_Fir_reg_pusr5_;
    goto L304_;
  }

L303_:;
  // dr48 = tryDispatchBuiltin.1("[", pusr5)
  SEXP Rsh_Fir_array_args335[2];
  Rsh_Fir_array_args335[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args335[1] = Rsh_Fir_reg_pusr5_;
  Rsh_Fir_reg_dr48_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args335);
  // dc24 = getTryDispatchBuiltinDispatched(dr48)
  SEXP Rsh_Fir_array_args336[1];
  Rsh_Fir_array_args336[0] = Rsh_Fir_reg_dr48_;
  Rsh_Fir_reg_dc24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args336, Rsh_Fir_param_types_empty());
  // if dc24 then L305() else L304(size9, dx72, dr48)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc24_)) {
  // L305()
    goto L305_;
  } else {
  // L304(size9, dx72, dr48)
    Rsh_Fir_reg_size11_ = Rsh_Fir_reg_size9_;
    Rsh_Fir_reg_dx74_ = Rsh_Fir_reg_dx72_;
    Rsh_Fir_reg_pusr7_ = Rsh_Fir_reg_dr48_;
    goto L304_;
  }

L304_:;
  // __11 = ldf `[` in base
  Rsh_Fir_reg___11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r159 = dyn __11(pusr7, 1)
  SEXP Rsh_Fir_array_args337[2];
  Rsh_Fir_array_args337[0] = Rsh_Fir_reg_pusr7_;
  Rsh_Fir_array_args337[1] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names71[2];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_array_arg_names71[1] = R_MissingArg;
  Rsh_Fir_reg_r159_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___11_, 2, Rsh_Fir_array_args337, Rsh_Fir_array_arg_names71, CCP, RHO);
  // goto L72(size11, dx74, r159)
  // L72(size11, dx74, r159)
  Rsh_Fir_reg_size13_ = Rsh_Fir_reg_size11_;
  Rsh_Fir_reg_dx77_ = Rsh_Fir_reg_dx74_;
  Rsh_Fir_reg_dx78_ = Rsh_Fir_reg_r159_;
  goto L72_;

L305_:;
  // dx76 = getTryDispatchBuiltinValue(dr48)
  SEXP Rsh_Fir_array_args338[1];
  Rsh_Fir_array_args338[0] = Rsh_Fir_reg_dr48_;
  Rsh_Fir_reg_dx76_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args338, Rsh_Fir_param_types_empty());
  // goto L72(size9, dx72, dx76)
  // L72(size9, dx72, dx76)
  Rsh_Fir_reg_size13_ = Rsh_Fir_reg_size9_;
  Rsh_Fir_reg_dx77_ = Rsh_Fir_reg_dx72_;
  Rsh_Fir_reg_dx78_ = Rsh_Fir_reg_dx76_;
  goto L72_;

D73_:;
  // deopt 310 [size13, r161]
  SEXP Rsh_Fir_array_deopt_stack62[2];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_size13_;
  Rsh_Fir_array_deopt_stack62[1] = Rsh_Fir_reg_r161_;
  Rsh_Fir_deopt(310, 2, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L306_:;
  // goto L70(size13, r161)
  // L70(size13, r161)
  Rsh_Fir_reg_size5_ = Rsh_Fir_reg_size13_;
  Rsh_Fir_reg_r157_ = Rsh_Fir_reg_r161_;
  goto L70_;

D74_:;
  // deopt 311 [r162, ppin]
  SEXP Rsh_Fir_array_deopt_stack63[2];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_r162_;
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_ppin;
  Rsh_Fir_deopt(311, 2, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L307_:;
  // ppin1 = force? ppin
  Rsh_Fir_reg_ppin1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ppin);
  // checkMissing(ppin1)
  SEXP Rsh_Fir_array_args339[1];
  Rsh_Fir_array_args339[0] = Rsh_Fir_reg_ppin1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args339, Rsh_Fir_param_types_empty()));
  // c52 = `is.object`(ppin1)
  SEXP Rsh_Fir_array_args340[1];
  Rsh_Fir_array_args340[0] = Rsh_Fir_reg_ppin1_;
  Rsh_Fir_reg_c52_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args340, Rsh_Fir_param_types_empty());
  // if c52 then L308() else L309(r162, ppin1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c52_)) {
  // L308()
    goto L308_;
  } else {
  // L309(r162, ppin1)
    Rsh_Fir_reg_r164_ = Rsh_Fir_reg_r162_;
    Rsh_Fir_reg_ppin3_ = Rsh_Fir_reg_ppin1_;
    goto L309_;
  }

L308_:;
  // dr50 = tryDispatchBuiltin.1("[", ppin1)
  SEXP Rsh_Fir_array_args341[2];
  Rsh_Fir_array_args341[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args341[1] = Rsh_Fir_reg_ppin1_;
  Rsh_Fir_reg_dr50_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args341);
  // dc25 = getTryDispatchBuiltinDispatched(dr50)
  SEXP Rsh_Fir_array_args342[1];
  Rsh_Fir_array_args342[0] = Rsh_Fir_reg_dr50_;
  Rsh_Fir_reg_dc25_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args342, Rsh_Fir_param_types_empty());
  // if dc25 then L310() else L309(r162, dr50)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc25_)) {
  // L310()
    goto L310_;
  } else {
  // L309(r162, dr50)
    Rsh_Fir_reg_r164_ = Rsh_Fir_reg_r162_;
    Rsh_Fir_reg_ppin3_ = Rsh_Fir_reg_dr50_;
    goto L309_;
  }

L309_:;
  // __12 = ldf `[` in base
  Rsh_Fir_reg___12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r167 = dyn __12(ppin3, 1)
  SEXP Rsh_Fir_array_args343[2];
  Rsh_Fir_array_args343[0] = Rsh_Fir_reg_ppin3_;
  Rsh_Fir_array_args343[1] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names72[2];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_array_arg_names72[1] = R_MissingArg;
  Rsh_Fir_reg_r167_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___12_, 2, Rsh_Fir_array_args343, Rsh_Fir_array_arg_names72, CCP, RHO);
  // goto L73(r164, r167)
  // L73(r164, r167)
  Rsh_Fir_reg_r166_ = Rsh_Fir_reg_r164_;
  Rsh_Fir_reg_dx80_ = Rsh_Fir_reg_r167_;
  goto L73_;

L310_:;
  // dx79 = getTryDispatchBuiltinValue(dr50)
  SEXP Rsh_Fir_array_args344[1];
  Rsh_Fir_array_args344[0] = Rsh_Fir_reg_dr50_;
  Rsh_Fir_reg_dx79_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args344, Rsh_Fir_param_types_empty());
  // goto L73(r162, dx79)
  // L73(r162, dx79)
  Rsh_Fir_reg_r166_ = Rsh_Fir_reg_r162_;
  Rsh_Fir_reg_dx80_ = Rsh_Fir_reg_dx79_;
  goto L73_;

D75_:;
  // deopt 318 [size14]
  SEXP Rsh_Fir_array_deopt_stack64[1];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_size14_;
  Rsh_Fir_deopt(318, 1, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L311_:;
  // size15 = force? size14
  Rsh_Fir_reg_size15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_size14_);
  // checkMissing(size15)
  SEXP Rsh_Fir_array_args345[1];
  Rsh_Fir_array_args345[0] = Rsh_Fir_reg_size15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args345, Rsh_Fir_param_types_empty()));
  // sym24 = ldf abs
  Rsh_Fir_reg_sym24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // base24 = ldf abs in base
  Rsh_Fir_reg_base24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // guard24 = `==`.4(sym24, base24)
  SEXP Rsh_Fir_array_args346[2];
  Rsh_Fir_array_args346[0] = Rsh_Fir_reg_sym24_;
  Rsh_Fir_array_args346[1] = Rsh_Fir_reg_base24_;
  Rsh_Fir_reg_guard24_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args346);
  // if guard24 then L312() else L313()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard24_)) {
  // L312()
    goto L312_;
  } else {
  // L313()
    goto L313_;
  }

L312_:;
  // pusr8 = ld pusr
  Rsh_Fir_reg_pusr8_ = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // check L314() else D76()
  // L314()
  goto L314_;

L313_:;
  // r169 = dyn base24(<lang `-`(`[`(pusr, 4), `[`(pusr, 3))>)
  SEXP Rsh_Fir_array_args347[1];
  Rsh_Fir_array_args347[0] = Rsh_const(CCP, 99);
  SEXP Rsh_Fir_array_arg_names73[1];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_reg_r169_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base24_, 1, Rsh_Fir_array_args347, Rsh_Fir_array_arg_names73, CCP, RHO);
  // goto L74(size15, r169)
  // L74(size15, r169)
  Rsh_Fir_reg_size18_ = Rsh_Fir_reg_size15_;
  Rsh_Fir_reg_r170_ = Rsh_Fir_reg_r169_;
  goto L74_;

D76_:;
  // deopt 321 [size15, pusr8]
  SEXP Rsh_Fir_array_deopt_stack65[2];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_size15_;
  Rsh_Fir_array_deopt_stack65[1] = Rsh_Fir_reg_pusr8_;
  Rsh_Fir_deopt(321, 2, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L314_:;
  // pusr9 = force? pusr8
  Rsh_Fir_reg_pusr9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pusr8_);
  // checkMissing(pusr9)
  SEXP Rsh_Fir_array_args348[1];
  Rsh_Fir_array_args348[0] = Rsh_Fir_reg_pusr9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args348, Rsh_Fir_param_types_empty()));
  // c53 = `is.object`(pusr9)
  SEXP Rsh_Fir_array_args349[1];
  Rsh_Fir_array_args349[0] = Rsh_Fir_reg_pusr9_;
  Rsh_Fir_reg_c53_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args349, Rsh_Fir_param_types_empty());
  // if c53 then L315() else L316(size15, pusr9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c53_)) {
  // L315()
    goto L315_;
  } else {
  // L316(size15, pusr9)
    Rsh_Fir_reg_size20_ = Rsh_Fir_reg_size15_;
    Rsh_Fir_reg_pusr11_ = Rsh_Fir_reg_pusr9_;
    goto L316_;
  }

L315_:;
  // dr52 = tryDispatchBuiltin.1("[", pusr9)
  SEXP Rsh_Fir_array_args350[2];
  Rsh_Fir_array_args350[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args350[1] = Rsh_Fir_reg_pusr9_;
  Rsh_Fir_reg_dr52_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args350);
  // dc26 = getTryDispatchBuiltinDispatched(dr52)
  SEXP Rsh_Fir_array_args351[1];
  Rsh_Fir_array_args351[0] = Rsh_Fir_reg_dr52_;
  Rsh_Fir_reg_dc26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args351, Rsh_Fir_param_types_empty());
  // if dc26 then L317() else L316(size15, dr52)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc26_)) {
  // L317()
    goto L317_;
  } else {
  // L316(size15, dr52)
    Rsh_Fir_reg_size20_ = Rsh_Fir_reg_size15_;
    Rsh_Fir_reg_pusr11_ = Rsh_Fir_reg_dr52_;
    goto L316_;
  }

L316_:;
  // __13 = ldf `[` in base
  Rsh_Fir_reg___13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r171 = dyn __13(pusr11, 4)
  SEXP Rsh_Fir_array_args352[2];
  Rsh_Fir_array_args352[0] = Rsh_Fir_reg_pusr11_;
  Rsh_Fir_array_args352[1] = Rsh_const(CCP, 100);
  SEXP Rsh_Fir_array_arg_names74[2];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_array_arg_names74[1] = R_MissingArg;
  Rsh_Fir_reg_r171_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___13_, 2, Rsh_Fir_array_args352, Rsh_Fir_array_arg_names74, CCP, RHO);
  // goto L75(size20, r171)
  // L75(size20, r171)
  Rsh_Fir_reg_size22_ = Rsh_Fir_reg_size20_;
  Rsh_Fir_reg_dx82_ = Rsh_Fir_reg_r171_;
  goto L75_;

L317_:;
  // dx81 = getTryDispatchBuiltinValue(dr52)
  SEXP Rsh_Fir_array_args353[1];
  Rsh_Fir_array_args353[0] = Rsh_Fir_reg_dr52_;
  Rsh_Fir_reg_dx81_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args353, Rsh_Fir_param_types_empty());
  // goto L75(size15, dx81)
  // L75(size15, dx81)
  Rsh_Fir_reg_size22_ = Rsh_Fir_reg_size15_;
  Rsh_Fir_reg_dx82_ = Rsh_Fir_reg_dx81_;
  goto L75_;

D77_:;
  // deopt 325 [size22, dx82, pusr12]
  SEXP Rsh_Fir_array_deopt_stack66[3];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_size22_;
  Rsh_Fir_array_deopt_stack66[1] = Rsh_Fir_reg_dx82_;
  Rsh_Fir_array_deopt_stack66[2] = Rsh_Fir_reg_pusr12_;
  Rsh_Fir_deopt(325, 3, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L318_:;
  // pusr13 = force? pusr12
  Rsh_Fir_reg_pusr13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pusr12_);
  // checkMissing(pusr13)
  SEXP Rsh_Fir_array_args354[1];
  Rsh_Fir_array_args354[0] = Rsh_Fir_reg_pusr13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args354, Rsh_Fir_param_types_empty()));
  // c54 = `is.object`(pusr13)
  SEXP Rsh_Fir_array_args355[1];
  Rsh_Fir_array_args355[0] = Rsh_Fir_reg_pusr13_;
  Rsh_Fir_reg_c54_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args355, Rsh_Fir_param_types_empty());
  // if c54 then L319() else L320(size22, dx82, pusr13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c54_)) {
  // L319()
    goto L319_;
  } else {
  // L320(size22, dx82, pusr13)
    Rsh_Fir_reg_size24_ = Rsh_Fir_reg_size22_;
    Rsh_Fir_reg_dx84_ = Rsh_Fir_reg_dx82_;
    Rsh_Fir_reg_pusr15_ = Rsh_Fir_reg_pusr13_;
    goto L320_;
  }

L319_:;
  // dr54 = tryDispatchBuiltin.1("[", pusr13)
  SEXP Rsh_Fir_array_args356[2];
  Rsh_Fir_array_args356[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args356[1] = Rsh_Fir_reg_pusr13_;
  Rsh_Fir_reg_dr54_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args356);
  // dc27 = getTryDispatchBuiltinDispatched(dr54)
  SEXP Rsh_Fir_array_args357[1];
  Rsh_Fir_array_args357[0] = Rsh_Fir_reg_dr54_;
  Rsh_Fir_reg_dc27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args357, Rsh_Fir_param_types_empty());
  // if dc27 then L321() else L320(size22, dx82, dr54)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc27_)) {
  // L321()
    goto L321_;
  } else {
  // L320(size22, dx82, dr54)
    Rsh_Fir_reg_size24_ = Rsh_Fir_reg_size22_;
    Rsh_Fir_reg_dx84_ = Rsh_Fir_reg_dx82_;
    Rsh_Fir_reg_pusr15_ = Rsh_Fir_reg_dr54_;
    goto L320_;
  }

L320_:;
  // __14 = ldf `[` in base
  Rsh_Fir_reg___14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r172 = dyn __14(pusr15, 3)
  SEXP Rsh_Fir_array_args358[2];
  Rsh_Fir_array_args358[0] = Rsh_Fir_reg_pusr15_;
  Rsh_Fir_array_args358[1] = Rsh_const(CCP, 101);
  SEXP Rsh_Fir_array_arg_names75[2];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_array_arg_names75[1] = R_MissingArg;
  Rsh_Fir_reg_r172_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___14_, 2, Rsh_Fir_array_args358, Rsh_Fir_array_arg_names75, CCP, RHO);
  // goto L76(size24, dx84, r172)
  // L76(size24, dx84, r172)
  Rsh_Fir_reg_size26_ = Rsh_Fir_reg_size24_;
  Rsh_Fir_reg_dx87_ = Rsh_Fir_reg_dx84_;
  Rsh_Fir_reg_dx88_ = Rsh_Fir_reg_r172_;
  goto L76_;

L321_:;
  // dx86 = getTryDispatchBuiltinValue(dr54)
  SEXP Rsh_Fir_array_args359[1];
  Rsh_Fir_array_args359[0] = Rsh_Fir_reg_dr54_;
  Rsh_Fir_reg_dx86_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args359, Rsh_Fir_param_types_empty());
  // goto L76(size22, dx82, dx86)
  // L76(size22, dx82, dx86)
  Rsh_Fir_reg_size26_ = Rsh_Fir_reg_size22_;
  Rsh_Fir_reg_dx87_ = Rsh_Fir_reg_dx82_;
  Rsh_Fir_reg_dx88_ = Rsh_Fir_reg_dx86_;
  goto L76_;

D78_:;
  // deopt 332 [size26, r174]
  SEXP Rsh_Fir_array_deopt_stack67[2];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_size26_;
  Rsh_Fir_array_deopt_stack67[1] = Rsh_Fir_reg_r174_;
  Rsh_Fir_deopt(332, 2, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L322_:;
  // goto L74(size26, r174)
  // L74(size26, r174)
  Rsh_Fir_reg_size18_ = Rsh_Fir_reg_size26_;
  Rsh_Fir_reg_r170_ = Rsh_Fir_reg_r174_;
  goto L74_;

D79_:;
  // deopt 333 [r175, ppin4]
  SEXP Rsh_Fir_array_deopt_stack68[2];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_r175_;
  Rsh_Fir_array_deopt_stack68[1] = Rsh_Fir_reg_ppin4_;
  Rsh_Fir_deopt(333, 2, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L323_:;
  // ppin5 = force? ppin4
  Rsh_Fir_reg_ppin5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ppin4_);
  // checkMissing(ppin5)
  SEXP Rsh_Fir_array_args360[1];
  Rsh_Fir_array_args360[0] = Rsh_Fir_reg_ppin5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args360, Rsh_Fir_param_types_empty()));
  // c55 = `is.object`(ppin5)
  SEXP Rsh_Fir_array_args361[1];
  Rsh_Fir_array_args361[0] = Rsh_Fir_reg_ppin5_;
  Rsh_Fir_reg_c55_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args361, Rsh_Fir_param_types_empty());
  // if c55 then L324() else L325(r175, ppin5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c55_)) {
  // L324()
    goto L324_;
  } else {
  // L325(r175, ppin5)
    Rsh_Fir_reg_r177_ = Rsh_Fir_reg_r175_;
    Rsh_Fir_reg_ppin7_ = Rsh_Fir_reg_ppin5_;
    goto L325_;
  }

L324_:;
  // dr56 = tryDispatchBuiltin.1("[", ppin5)
  SEXP Rsh_Fir_array_args362[2];
  Rsh_Fir_array_args362[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args362[1] = Rsh_Fir_reg_ppin5_;
  Rsh_Fir_reg_dr56_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args362);
  // dc28 = getTryDispatchBuiltinDispatched(dr56)
  SEXP Rsh_Fir_array_args363[1];
  Rsh_Fir_array_args363[0] = Rsh_Fir_reg_dr56_;
  Rsh_Fir_reg_dc28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args363, Rsh_Fir_param_types_empty());
  // if dc28 then L326() else L325(r175, dr56)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc28_)) {
  // L326()
    goto L326_;
  } else {
  // L325(r175, dr56)
    Rsh_Fir_reg_r177_ = Rsh_Fir_reg_r175_;
    Rsh_Fir_reg_ppin7_ = Rsh_Fir_reg_dr56_;
    goto L325_;
  }

L325_:;
  // __15 = ldf `[` in base
  Rsh_Fir_reg___15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r180 = dyn __15(ppin7, 2)
  SEXP Rsh_Fir_array_args364[2];
  Rsh_Fir_array_args364[0] = Rsh_Fir_reg_ppin7_;
  Rsh_Fir_array_args364[1] = Rsh_const(CCP, 98);
  SEXP Rsh_Fir_array_arg_names76[2];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_array_arg_names76[1] = R_MissingArg;
  Rsh_Fir_reg_r180_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___15_, 2, Rsh_Fir_array_args364, Rsh_Fir_array_arg_names76, CCP, RHO);
  // goto L77(r177, r180)
  // L77(r177, r180)
  Rsh_Fir_reg_r179_ = Rsh_Fir_reg_r177_;
  Rsh_Fir_reg_dx90_ = Rsh_Fir_reg_r180_;
  goto L77_;

L326_:;
  // dx89 = getTryDispatchBuiltinValue(dr56)
  SEXP Rsh_Fir_array_args365[1];
  Rsh_Fir_array_args365[0] = Rsh_Fir_reg_dr56_;
  Rsh_Fir_reg_dx89_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args365, Rsh_Fir_param_types_empty());
  // goto L77(r175, dx89)
  // L77(r175, dx89)
  Rsh_Fir_reg_r179_ = Rsh_Fir_reg_r175_;
  Rsh_Fir_reg_dx90_ = Rsh_Fir_reg_dx89_;
  goto L77_;

L327_:;
  // i_multi = ld `i.multi`
  Rsh_Fir_reg_i_multi = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // check L329() else D80()
  // L329()
  goto L329_;

L328_:;
  // r182 = dyn base25(<sym i.multi>, <lang `[`(number, `>`(number, 1.0))>)
  SEXP Rsh_Fir_array_args366[2];
  Rsh_Fir_array_args366[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args366[1] = Rsh_const(CCP, 102);
  SEXP Rsh_Fir_array_arg_names77[2];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_array_arg_names77[1] = R_MissingArg;
  Rsh_Fir_reg_r182_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base25_, 2, Rsh_Fir_array_args366, Rsh_Fir_array_arg_names77, CCP, RHO);
  // goto L78(r182)
  // L78(r182)
  Rsh_Fir_reg_r183_ = Rsh_Fir_reg_r182_;
  goto L78_;

D80_:;
  // deopt 342 [i_multi]
  SEXP Rsh_Fir_array_deopt_stack69[1];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_i_multi;
  Rsh_Fir_deopt(342, 1, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L329_:;
  // i_multi1 = force? i_multi
  Rsh_Fir_reg_i_multi1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i_multi);
  // checkMissing(i_multi1)
  SEXP Rsh_Fir_array_args367[1];
  Rsh_Fir_array_args367[0] = Rsh_Fir_reg_i_multi1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args367, Rsh_Fir_param_types_empty()));
  // number13 = ld number
  Rsh_Fir_reg_number13_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L330() else D81()
  // L330()
  goto L330_;

D81_:;
  // deopt 344 [number13]
  SEXP Rsh_Fir_array_deopt_stack70[1];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_number13_;
  Rsh_Fir_deopt(344, 1, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L330_:;
  // number14 = force? number13
  Rsh_Fir_reg_number14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_number13_);
  // checkMissing(number14)
  SEXP Rsh_Fir_array_args368[1];
  Rsh_Fir_array_args368[0] = Rsh_Fir_reg_number14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args368, Rsh_Fir_param_types_empty()));
  // c56 = `is.object`(number14)
  SEXP Rsh_Fir_array_args369[1];
  Rsh_Fir_array_args369[0] = Rsh_Fir_reg_number14_;
  Rsh_Fir_reg_c56_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args369, Rsh_Fir_param_types_empty());
  // if c56 then L331() else L332(number14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c56_)) {
  // L331()
    goto L331_;
  } else {
  // L332(number14)
    Rsh_Fir_reg_number16_ = Rsh_Fir_reg_number14_;
    goto L332_;
  }

L331_:;
  // dr58 = tryDispatchBuiltin.1("[", number14)
  SEXP Rsh_Fir_array_args370[2];
  Rsh_Fir_array_args370[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args370[1] = Rsh_Fir_reg_number14_;
  Rsh_Fir_reg_dr58_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args370);
  // dc29 = getTryDispatchBuiltinDispatched(dr58)
  SEXP Rsh_Fir_array_args371[1];
  Rsh_Fir_array_args371[0] = Rsh_Fir_reg_dr58_;
  Rsh_Fir_reg_dc29_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args371, Rsh_Fir_param_types_empty());
  // if dc29 then L333() else L332(dr58)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc29_)) {
  // L333()
    goto L333_;
  } else {
  // L332(dr58)
    Rsh_Fir_reg_number16_ = Rsh_Fir_reg_dr58_;
    goto L332_;
  }

L332_:;
  // number17 = ld number
  Rsh_Fir_reg_number17_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L334() else D82()
  // L334()
  goto L334_;

L333_:;
  // dx91 = getTryDispatchBuiltinValue(dr58)
  SEXP Rsh_Fir_array_args372[1];
  Rsh_Fir_array_args372[0] = Rsh_Fir_reg_dr58_;
  Rsh_Fir_reg_dx91_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args372, Rsh_Fir_param_types_empty());
  // goto L79(dx91)
  // L79(dx91)
  Rsh_Fir_reg_dx92_ = Rsh_Fir_reg_dx91_;
  goto L79_;

D82_:;
  // deopt 346 [number16, number17]
  SEXP Rsh_Fir_array_deopt_stack71[2];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_number16_;
  Rsh_Fir_array_deopt_stack71[1] = Rsh_Fir_reg_number17_;
  Rsh_Fir_deopt(346, 2, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L334_:;
  // number18 = force? number17
  Rsh_Fir_reg_number18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_number17_);
  // checkMissing(number18)
  SEXP Rsh_Fir_array_args373[1];
  Rsh_Fir_array_args373[0] = Rsh_Fir_reg_number18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args373, Rsh_Fir_param_types_empty()));
  // r184 = `>`(number18, 1.0)
  SEXP Rsh_Fir_array_args374[2];
  Rsh_Fir_array_args374[0] = Rsh_Fir_reg_number18_;
  Rsh_Fir_array_args374[1] = Rsh_const(CCP, 91);
  Rsh_Fir_reg_r184_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args374, Rsh_Fir_param_types_empty());
  // __16 = ldf `[` in base
  Rsh_Fir_reg___16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r185 = dyn __16(number16, r184)
  SEXP Rsh_Fir_array_args375[2];
  Rsh_Fir_array_args375[0] = Rsh_Fir_reg_number16_;
  Rsh_Fir_array_args375[1] = Rsh_Fir_reg_r184_;
  SEXP Rsh_Fir_array_arg_names78[2];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_array_arg_names78[1] = R_MissingArg;
  Rsh_Fir_reg_r185_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___16_, 2, Rsh_Fir_array_args375, Rsh_Fir_array_arg_names78, CCP, RHO);
  // goto L79(r185)
  // L79(r185)
  Rsh_Fir_reg_dx92_ = Rsh_Fir_reg_r185_;
  goto L79_;

D83_:;
  // deopt 352 [r186]
  SEXP Rsh_Fir_array_deopt_stack72[1];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_r186_;
  Rsh_Fir_deopt(352, 1, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L335_:;
  // goto L78(r186)
  // L78(r186)
  Rsh_Fir_reg_r183_ = Rsh_Fir_reg_r186_;
  goto L78_;

D84_:;
  // deopt 355 []
  Rsh_Fir_deopt(355, 0, NULL, CCP, RHO);
  return R_NilValue;

L336_:;
  // r187 = dyn numeric()
  Rsh_Fir_reg_r187_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric, 0, NULL, NULL, CCP, RHO);
  // check L337() else D85()
  // L337()
  goto L337_;

D85_:;
  // deopt 356 [r187]
  SEXP Rsh_Fir_array_deopt_stack73[1];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_r187_;
  Rsh_Fir_deopt(356, 1, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L337_:;
  // st z = r187
  Rsh_Fir_store(Rsh_const(CCP, 57), Rsh_Fir_reg_r187_, RHO);
  (void)(Rsh_Fir_reg_r187_);
  // i_multi2 = ld `i.multi`
  Rsh_Fir_reg_i_multi2_ = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // check L338() else D86()
  // L338()
  goto L338_;

D86_:;
  // deopt 358 [i_multi2]
  SEXP Rsh_Fir_array_deopt_stack74[1];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_i_multi2_;
  Rsh_Fir_deopt(358, 1, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L338_:;
  // i_multi3 = force? i_multi2
  Rsh_Fir_reg_i_multi3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i_multi2_);
  // checkMissing(i_multi3)
  SEXP Rsh_Fir_array_args376[1];
  Rsh_Fir_array_args376[0] = Rsh_Fir_reg_i_multi3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args376, Rsh_Fir_param_types_empty()));
  // s = toForSeq(i_multi3)
  SEXP Rsh_Fir_array_args377[1];
  Rsh_Fir_array_args377[0] = Rsh_Fir_reg_i_multi3_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args377, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args378[1];
  Rsh_Fir_array_args378[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args378, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 103);
  // goto L80(i)
  // L80(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L80_;

L339_:;
  // z2 = ld z
  Rsh_Fir_reg_z2_ = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // check L355() else D95()
  // L355()
  goto L355_;

L340_:;
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // check L342() else D87()
  // L342()
  goto L342_;

L341_:;
  // r188 = dyn base26(<sym z>, <lang `+`(`:`(1, `[`(number, i)), if(rotate, `::`(stats, runif)(1.0), 0.0))>)
  SEXP Rsh_Fir_array_args379[2];
  Rsh_Fir_array_args379[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args379[1] = Rsh_const(CCP, 104);
  SEXP Rsh_Fir_array_arg_names79[2];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_array_arg_names79[1] = R_MissingArg;
  Rsh_Fir_reg_r188_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base26_, 2, Rsh_Fir_array_args379, Rsh_Fir_array_arg_names79, CCP, RHO);
  // goto L81(i2, r188)
  // L81(i2, r188)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r189_ = Rsh_Fir_reg_r188_;
  goto L81_;

D87_:;
  // deopt 362 [i2, z]
  SEXP Rsh_Fir_array_deopt_stack75[2];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack75[1] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(362, 2, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L342_:;
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args380[1];
  Rsh_Fir_array_args380[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args380, Rsh_Fir_param_types_empty()));
  // number19 = ld number
  Rsh_Fir_reg_number19_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L343() else D88()
  // L343()
  goto L343_;

D88_:;
  // deopt 365 [i2, 1, number19]
  SEXP Rsh_Fir_array_deopt_stack76[3];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack76[1] = Rsh_const(CCP, 56);
  Rsh_Fir_array_deopt_stack76[2] = Rsh_Fir_reg_number19_;
  Rsh_Fir_deopt(365, 3, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

L343_:;
  // number20 = force? number19
  Rsh_Fir_reg_number20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_number19_);
  // checkMissing(number20)
  SEXP Rsh_Fir_array_args381[1];
  Rsh_Fir_array_args381[0] = Rsh_Fir_reg_number20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args381, Rsh_Fir_param_types_empty()));
  // c58 = `is.object`(number20)
  SEXP Rsh_Fir_array_args382[1];
  Rsh_Fir_array_args382[0] = Rsh_Fir_reg_number20_;
  Rsh_Fir_reg_c58_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args382, Rsh_Fir_param_types_empty());
  // if c58 then L344() else L345(i2, 1, number20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c58_)) {
  // L344()
    goto L344_;
  } else {
  // L345(i2, 1, number20)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r191_ = Rsh_const(CCP, 56);
    Rsh_Fir_reg_number22_ = Rsh_Fir_reg_number20_;
    goto L345_;
  }

L344_:;
  // dr60 = tryDispatchBuiltin.1("[", number20)
  SEXP Rsh_Fir_array_args383[2];
  Rsh_Fir_array_args383[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args383[1] = Rsh_Fir_reg_number20_;
  Rsh_Fir_reg_dr60_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args383);
  // dc30 = getTryDispatchBuiltinDispatched(dr60)
  SEXP Rsh_Fir_array_args384[1];
  Rsh_Fir_array_args384[0] = Rsh_Fir_reg_dr60_;
  Rsh_Fir_reg_dc30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args384, Rsh_Fir_param_types_empty());
  // if dc30 then L346() else L345(i2, 1, dr60)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc30_)) {
  // L346()
    goto L346_;
  } else {
  // L345(i2, 1, dr60)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r191_ = Rsh_const(CCP, 56);
    Rsh_Fir_reg_number22_ = Rsh_Fir_reg_dr60_;
    goto L345_;
  }

L345_:;
  // i12 = ld i
  Rsh_Fir_reg_i12_ = Rsh_Fir_load(Rsh_const(CCP, 61), RHO);
  // check L347() else D89()
  // L347()
  goto L347_;

L346_:;
  // dx93 = getTryDispatchBuiltinValue(dr60)
  SEXP Rsh_Fir_array_args385[1];
  Rsh_Fir_array_args385[0] = Rsh_Fir_reg_dr60_;
  Rsh_Fir_reg_dx93_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args385, Rsh_Fir_param_types_empty());
  // goto L82(i2, 1, dx93)
  // L82(i2, 1, dx93)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r193_ = Rsh_const(CCP, 56);
  Rsh_Fir_reg_dx94_ = Rsh_Fir_reg_dx93_;
  goto L82_;

D89_:;
  // deopt 367 [i9, r191, number22, i12]
  SEXP Rsh_Fir_array_deopt_stack77[4];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack77[1] = Rsh_Fir_reg_r191_;
  Rsh_Fir_array_deopt_stack77[2] = Rsh_Fir_reg_number22_;
  Rsh_Fir_array_deopt_stack77[3] = Rsh_Fir_reg_i12_;
  Rsh_Fir_deopt(367, 4, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

L347_:;
  // i13 = force? i12
  Rsh_Fir_reg_i13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i12_);
  // __17 = ldf `[` in base
  Rsh_Fir_reg___17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r194 = dyn __17(number22, i13)
  SEXP Rsh_Fir_array_args386[2];
  Rsh_Fir_array_args386[0] = Rsh_Fir_reg_number22_;
  Rsh_Fir_array_args386[1] = Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_array_arg_names80[2];
  Rsh_Fir_array_arg_names80[0] = R_MissingArg;
  Rsh_Fir_array_arg_names80[1] = R_MissingArg;
  Rsh_Fir_reg_r194_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___17_, 2, Rsh_Fir_array_args386, Rsh_Fir_array_arg_names80, CCP, RHO);
  // goto L82(i9, r191, r194)
  // L82(i9, r191, r194)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_r193_ = Rsh_Fir_reg_r191_;
  Rsh_Fir_reg_dx94_ = Rsh_Fir_reg_r194_;
  goto L82_;

D90_:;
  // deopt 370 [i11, r195, rotate1]
  SEXP Rsh_Fir_array_deopt_stack78[3];
  Rsh_Fir_array_deopt_stack78[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack78[1] = Rsh_Fir_reg_r195_;
  Rsh_Fir_array_deopt_stack78[2] = Rsh_Fir_reg_rotate1_;
  Rsh_Fir_deopt(370, 3, Rsh_Fir_array_deopt_stack78, CCP, RHO);
  return R_NilValue;

L348_:;
  // rotate2 = force? rotate1
  Rsh_Fir_reg_rotate2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rotate1_);
  // checkMissing(rotate2)
  SEXP Rsh_Fir_array_args387[1];
  Rsh_Fir_array_args387[0] = Rsh_Fir_reg_rotate2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args387, Rsh_Fir_param_types_empty()));
  // c59 = `as.logical`(rotate2)
  SEXP Rsh_Fir_array_args388[1];
  Rsh_Fir_array_args388[0] = Rsh_Fir_reg_rotate2_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args388, Rsh_Fir_param_types_empty());
  // if c59 then L349() else L83()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c59_)) {
  // L349()
    goto L349_;
  } else {
  // L83()
    goto L83_;
  }

L349_:;
  // __18 = ldf `::`
  Rsh_Fir_reg___18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 105), RHO);
  // check L350() else D91()
  // L350()
  goto L350_;

D91_:;
  // deopt 373 [i11, r195]
  SEXP Rsh_Fir_array_deopt_stack79[2];
  Rsh_Fir_array_deopt_stack79[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack79[1] = Rsh_Fir_reg_r195_;
  Rsh_Fir_deopt(373, 2, Rsh_Fir_array_deopt_stack79, CCP, RHO);
  return R_NilValue;

L350_:;
  // r198 = dyn __18("stats", "runif")
  SEXP Rsh_Fir_array_args389[2];
  Rsh_Fir_array_args389[0] = Rsh_const(CCP, 106);
  Rsh_Fir_array_args389[1] = Rsh_const(CCP, 107);
  SEXP Rsh_Fir_array_arg_names81[2];
  Rsh_Fir_array_arg_names81[0] = R_MissingArg;
  Rsh_Fir_array_arg_names81[1] = R_MissingArg;
  Rsh_Fir_reg_r198_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___18_, 2, Rsh_Fir_array_args389, Rsh_Fir_array_arg_names81, CCP, RHO);
  // check L351() else D92()
  // L351()
  goto L351_;

D92_:;
  // deopt 376 [i11, r195, r198]
  SEXP Rsh_Fir_array_deopt_stack80[3];
  Rsh_Fir_array_deopt_stack80[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack80[1] = Rsh_Fir_reg_r195_;
  Rsh_Fir_array_deopt_stack80[2] = Rsh_Fir_reg_r198_;
  Rsh_Fir_deopt(376, 3, Rsh_Fir_array_deopt_stack80, CCP, RHO);
  return R_NilValue;

L351_:;
  // checkFun.0(r198)
  SEXP Rsh_Fir_array_args390[1];
  Rsh_Fir_array_args390[0] = Rsh_Fir_reg_r198_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args390));
  // r199 = r198 as cls
  Rsh_Fir_reg_r199_ = Rsh_Fir_cast(Rsh_Fir_reg_r198_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r200 = dyn r199(1.0)
  SEXP Rsh_Fir_array_args391[1];
  Rsh_Fir_array_args391[0] = Rsh_const(CCP, 91);
  SEXP Rsh_Fir_array_arg_names82[1];
  Rsh_Fir_array_arg_names82[0] = R_MissingArg;
  Rsh_Fir_reg_r200_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r199_, 1, Rsh_Fir_array_args391, Rsh_Fir_array_arg_names82, CCP, RHO);
  // check L352() else D93()
  // L352()
  goto L352_;

D93_:;
  // deopt 379 [i11, r195, r200]
  SEXP Rsh_Fir_array_deopt_stack81[3];
  Rsh_Fir_array_deopt_stack81[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack81[1] = Rsh_Fir_reg_r195_;
  Rsh_Fir_array_deopt_stack81[2] = Rsh_Fir_reg_r200_;
  Rsh_Fir_deopt(379, 3, Rsh_Fir_array_deopt_stack81, CCP, RHO);
  return R_NilValue;

L352_:;
  // goto L84(i11, r195, r200)
  // L84(i11, r195, r200)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r201_ = Rsh_Fir_reg_r195_;
  Rsh_Fir_reg_r202_ = Rsh_Fir_reg_r200_;
  goto L84_;

D94_:;
  // deopt 384 [i16, r204]
  SEXP Rsh_Fir_array_deopt_stack82[2];
  Rsh_Fir_array_deopt_stack82[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_deopt_stack82[1] = Rsh_Fir_reg_r204_;
  Rsh_Fir_deopt(384, 2, Rsh_Fir_array_deopt_stack82, CCP, RHO);
  return R_NilValue;

L354_:;
  // goto L81(i16, r204)
  // L81(i16, r204)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_r189_ = Rsh_Fir_reg_r204_;
  goto L81_;

D95_:;
  // deopt 390 [6.283185307179586, z2]
  SEXP Rsh_Fir_array_deopt_stack83[2];
  Rsh_Fir_array_deopt_stack83[0] = Rsh_const(CCP, 108);
  Rsh_Fir_array_deopt_stack83[1] = Rsh_Fir_reg_z2_;
  Rsh_Fir_deopt(390, 2, Rsh_Fir_array_deopt_stack83, CCP, RHO);
  return R_NilValue;

L355_:;
  // z3 = force? z2
  Rsh_Fir_reg_z3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z2_);
  // checkMissing(z3)
  SEXP Rsh_Fir_array_args392[1];
  Rsh_Fir_array_args392[0] = Rsh_Fir_reg_z3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args392, Rsh_Fir_param_types_empty()));
  // r205 = `*`(6.283185307179586, z3)
  SEXP Rsh_Fir_array_args393[2];
  Rsh_Fir_array_args393[0] = Rsh_const(CCP, 108);
  Rsh_Fir_array_args393[1] = Rsh_Fir_reg_z3_;
  Rsh_Fir_reg_r205_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args393, Rsh_Fir_param_types_empty());
  // number23 = ld number
  Rsh_Fir_reg_number23_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L356() else D96()
  // L356()
  goto L356_;

D96_:;
  // deopt 392 [r205, number23]
  SEXP Rsh_Fir_array_deopt_stack84[2];
  Rsh_Fir_array_deopt_stack84[0] = Rsh_Fir_reg_r205_;
  Rsh_Fir_array_deopt_stack84[1] = Rsh_Fir_reg_number23_;
  Rsh_Fir_deopt(392, 2, Rsh_Fir_array_deopt_stack84, CCP, RHO);
  return R_NilValue;

L356_:;
  // number24 = force? number23
  Rsh_Fir_reg_number24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_number23_);
  // checkMissing(number24)
  SEXP Rsh_Fir_array_args394[1];
  Rsh_Fir_array_args394[0] = Rsh_Fir_reg_number24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args394, Rsh_Fir_param_types_empty()));
  // c61 = `is.object`(number24)
  SEXP Rsh_Fir_array_args395[1];
  Rsh_Fir_array_args395[0] = Rsh_Fir_reg_number24_;
  Rsh_Fir_reg_c61_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args395, Rsh_Fir_param_types_empty());
  // if c61 then L357() else L358(r205, number24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c61_)) {
  // L357()
    goto L357_;
  } else {
  // L358(r205, number24)
    Rsh_Fir_reg_r207_ = Rsh_Fir_reg_r205_;
    Rsh_Fir_reg_number26_ = Rsh_Fir_reg_number24_;
    goto L358_;
  }

L357_:;
  // dr62 = tryDispatchBuiltin.1("[", number24)
  SEXP Rsh_Fir_array_args396[2];
  Rsh_Fir_array_args396[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args396[1] = Rsh_Fir_reg_number24_;
  Rsh_Fir_reg_dr62_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args396);
  // dc31 = getTryDispatchBuiltinDispatched(dr62)
  SEXP Rsh_Fir_array_args397[1];
  Rsh_Fir_array_args397[0] = Rsh_Fir_reg_dr62_;
  Rsh_Fir_reg_dc31_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args397, Rsh_Fir_param_types_empty());
  // if dc31 then L359() else L358(r205, dr62)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc31_)) {
  // L359()
    goto L359_;
  } else {
  // L358(r205, dr62)
    Rsh_Fir_reg_r207_ = Rsh_Fir_reg_r205_;
    Rsh_Fir_reg_number26_ = Rsh_Fir_reg_dr62_;
    goto L358_;
  }

L358_:;
  // i_rep = ld `i.rep`
  Rsh_Fir_reg_i_rep = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // check L360() else D97()
  // L360()
  goto L360_;

L359_:;
  // dx95 = getTryDispatchBuiltinValue(dr62)
  SEXP Rsh_Fir_array_args398[1];
  Rsh_Fir_array_args398[0] = Rsh_Fir_reg_dr62_;
  Rsh_Fir_reg_dx95_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args398, Rsh_Fir_param_types_empty());
  // goto L86(r205, dx95)
  // L86(r205, dx95)
  Rsh_Fir_reg_r209_ = Rsh_Fir_reg_r205_;
  Rsh_Fir_reg_dx96_ = Rsh_Fir_reg_dx95_;
  goto L86_;

D97_:;
  // deopt 394 [r207, number26, i_rep]
  SEXP Rsh_Fir_array_deopt_stack85[3];
  Rsh_Fir_array_deopt_stack85[0] = Rsh_Fir_reg_r207_;
  Rsh_Fir_array_deopt_stack85[1] = Rsh_Fir_reg_number26_;
  Rsh_Fir_array_deopt_stack85[2] = Rsh_Fir_reg_i_rep;
  Rsh_Fir_deopt(394, 3, Rsh_Fir_array_deopt_stack85, CCP, RHO);
  return R_NilValue;

L360_:;
  // i_rep1 = force? i_rep
  Rsh_Fir_reg_i_rep1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i_rep);
  // __19 = ldf `[` in base
  Rsh_Fir_reg___19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r210 = dyn __19(number26, i_rep1)
  SEXP Rsh_Fir_array_args399[2];
  Rsh_Fir_array_args399[0] = Rsh_Fir_reg_number26_;
  Rsh_Fir_array_args399[1] = Rsh_Fir_reg_i_rep1_;
  SEXP Rsh_Fir_array_arg_names83[2];
  Rsh_Fir_array_arg_names83[0] = R_MissingArg;
  Rsh_Fir_array_arg_names83[1] = R_MissingArg;
  Rsh_Fir_reg_r210_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___19_, 2, Rsh_Fir_array_args399, Rsh_Fir_array_arg_names83, CCP, RHO);
  // goto L86(r207, r210)
  // L86(r207, r210)
  Rsh_Fir_reg_r209_ = Rsh_Fir_reg_r207_;
  Rsh_Fir_reg_dx96_ = Rsh_Fir_reg_r210_;
  goto L86_;

D98_:;
  // deopt 400 []
  Rsh_Fir_deopt(400, 0, NULL, CCP, RHO);
  return R_NilValue;

L361_:;
  // p32 = prom<V +>{
  //   x27 = ld x;
  //   x28 = force? x27;
  //   checkMissing(x28);
  //   c62 = `is.object`(x28);
  //   if c62 then L1() else L2(x28);
  // L0(dx98):
  //   return dx98;
  // L1():
  //   dr64 = tryDispatchBuiltin.1("[", x28);
  //   dc32 = getTryDispatchBuiltinDispatched(dr64);
  //   if dc32 then L3() else L2(dr64);
  // L2(x30):
  //   i_rep2 = ld `i.rep`;
  //   i_rep3 = force? i_rep2;
  //   __20 = ldf `[` in base;
  //   r212 = dyn __20(x30, i_rep3);
  //   goto L0(r212);
  // L3():
  //   dx97 = getTryDispatchBuiltinValue(dr64);
  //   goto L0(dx97);
  // }
  Rsh_Fir_reg_p32_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_32, CCP, RHO);
  // p33 = prom<V +>{
  //   y13 = ld y;
  //   y14 = force? y13;
  //   checkMissing(y14);
  //   c63 = `is.object`(y14);
  //   if c63 then L1() else L2(y14);
  // L0(dx100):
  //   return dx100;
  // L1():
  //   dr66 = tryDispatchBuiltin.1("[", y14);
  //   dc33 = getTryDispatchBuiltinDispatched(dr66);
  //   if dc33 then L3() else L2(dr66);
  // L2(y16):
  //   i_rep4 = ld `i.rep`;
  //   i_rep5 = force? i_rep4;
  //   __21 = ldf `[` in base;
  //   r214 = dyn __21(y16, i_rep5);
  //   goto L0(r214);
  // L3():
  //   dx99 = getTryDispatchBuiltinValue(dr66);
  //   goto L0(dx99);
  // }
  Rsh_Fir_reg_p33_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_33, CCP, RHO);
  // p34 = prom<V +>{
  //   x31 = ld x;
  //   x32 = force? x31;
  //   checkMissing(x32);
  //   c64 = `is.object`(x32);
  //   if c64 then L2() else L3(x32);
  // L0(dx102):
  //   xr = ld xr;
  //   xr1 = force? xr;
  //   checkMissing(xr1);
  //   sym27 = ldf sin;
  //   base27 = ldf sin in base;
  //   guard27 = `==`.4(sym27, base27);
  //   if guard27 then L5() else L6();
  // L2():
  //   dr68 = tryDispatchBuiltin.1("[", x32);
  //   dc34 = getTryDispatchBuiltinDispatched(dr68);
  //   if dc34 then L4() else L3(dr68);
  // L3(x34):
  //   i_rep6 = ld `i.rep`;
  //   i_rep7 = force? i_rep6;
  //   __22 = ldf `[` in base;
  //   r216 = dyn __22(x34, i_rep7);
  //   goto L0(r216);
  // L1(dx105, xr4, r218):
  //   r220 = `*`(xr4, r218);
  //   r221 = `+`(dx105, r220);
  //   return r221;
  // L4():
  //   dx101 = getTryDispatchBuiltinValue(dr68);
  //   goto L0(dx101);
  // L5():
  //   deg = ld deg;
  //   deg1 = force? deg;
  //   checkMissing(deg1);
  //   r219 = sin(deg1);
  //   goto L1(dx102, xr1, r219);
  // L6():
  //   r217 = dyn base27(<sym deg>);
  //   goto L1(dx102, xr1, r217);
  // }
  Rsh_Fir_reg_p34_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_34, CCP, RHO);
  // p35 = prom<V +>{
  //   y17 = ld y;
  //   y18 = force? y17;
  //   checkMissing(y18);
  //   c65 = `is.object`(y18);
  //   if c65 then L2() else L3(y18);
  // L0(dx107):
  //   yr = ld yr;
  //   yr1 = force? yr;
  //   checkMissing(yr1);
  //   sym28 = ldf cos;
  //   base28 = ldf cos in base;
  //   guard28 = `==`.4(sym28, base28);
  //   if guard28 then L5() else L6();
  // L2():
  //   dr70 = tryDispatchBuiltin.1("[", y18);
  //   dc35 = getTryDispatchBuiltinDispatched(dr70);
  //   if dc35 then L4() else L3(dr70);
  // L3(y20):
  //   i_rep8 = ld `i.rep`;
  //   i_rep9 = force? i_rep8;
  //   __23 = ldf `[` in base;
  //   r223 = dyn __23(y20, i_rep9);
  //   goto L0(r223);
  // L1(dx110, yr4, r225):
  //   r227 = `*`(yr4, r225);
  //   r228 = `+`(dx110, r227);
  //   return r228;
  // L4():
  //   dx106 = getTryDispatchBuiltinValue(dr70);
  //   goto L0(dx106);
  // L5():
  //   deg2 = ld deg;
  //   deg3 = force? deg2;
  //   checkMissing(deg3);
  //   r226 = cos(deg3);
  //   goto L1(dx107, yr1, r226);
  // L6():
  //   r224 = dyn base28(<sym deg>);
  //   goto L1(dx107, yr1, r224);
  // }
  Rsh_Fir_reg_p35_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_35, CCP, RHO);
  // p36 = prom<V +>{
  //   seg_col1 = ld `seg.col`;
  //   seg_col2 = force? seg_col1;
  //   checkMissing(seg_col2);
  //   return seg_col2;
  // }
  Rsh_Fir_reg_p36_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_36, CCP, RHO);
  // p37 = prom<V +>{
  //   seg_lwd1 = ld `seg.lwd`;
  //   seg_lwd2 = force? seg_lwd1;
  //   checkMissing(seg_lwd2);
  //   return seg_lwd2;
  // }
  Rsh_Fir_reg_p37_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3279863723_37, CCP, RHO);
  // r232 = dyn segments[, , , , col, lwd](p32, p33, p34, p35, p36, p37)
  SEXP Rsh_Fir_array_args440[6];
  Rsh_Fir_array_args440[0] = Rsh_Fir_reg_p32_;
  Rsh_Fir_array_args440[1] = Rsh_Fir_reg_p33_;
  Rsh_Fir_array_args440[2] = Rsh_Fir_reg_p34_;
  Rsh_Fir_array_args440[3] = Rsh_Fir_reg_p35_;
  Rsh_Fir_array_args440[4] = Rsh_Fir_reg_p36_;
  Rsh_Fir_array_args440[5] = Rsh_Fir_reg_p37_;
  SEXP Rsh_Fir_array_arg_names90[6];
  Rsh_Fir_array_arg_names90[0] = R_MissingArg;
  Rsh_Fir_array_arg_names90[1] = R_MissingArg;
  Rsh_Fir_array_arg_names90[2] = R_MissingArg;
  Rsh_Fir_array_arg_names90[3] = R_MissingArg;
  Rsh_Fir_array_arg_names90[4] = Rsh_const(CCP, 24);
  Rsh_Fir_array_arg_names90[5] = Rsh_const(CCP, 111);
  Rsh_Fir_reg_r232_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_segments, 6, Rsh_Fir_array_args440, Rsh_Fir_array_arg_names90, CCP, RHO);
  // check L362() else D99()
  // L362()
  goto L362_;

D99_:;
  // deopt 409 [r232]
  SEXP Rsh_Fir_array_deopt_stack86[1];
  Rsh_Fir_array_deopt_stack86[0] = Rsh_Fir_reg_r232_;
  Rsh_Fir_deopt(409, 1, Rsh_Fir_array_deopt_stack86, CCP, RHO);
  return R_NilValue;

L362_:;
  // goto L87()
  // L87()
  goto L87_;

L364_:;
  // sym30 = ldf list
  Rsh_Fir_reg_sym30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 112), RHO);
  // base30 = ldf list in base
  Rsh_Fir_reg_base30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 112), RHO);
  // guard30 = `==`.4(sym30, base30)
  SEXP Rsh_Fir_array_args441[2];
  Rsh_Fir_array_args441[0] = Rsh_Fir_reg_sym30_;
  Rsh_Fir_array_args441[1] = Rsh_Fir_reg_base30_;
  Rsh_Fir_reg_guard30_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args441);
  // if guard30 then L366() else L367()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard30_)) {
  // L366()
    goto L366_;
  } else {
  // L367()
    goto L367_;
  }

L365_:;
  // r234 = dyn base29(<lang list(x=x, y=y, number=number)>)
  SEXP Rsh_Fir_array_args442[1];
  Rsh_Fir_array_args442[0] = Rsh_const(CCP, 113);
  SEXP Rsh_Fir_array_arg_names91[1];
  Rsh_Fir_array_arg_names91[0] = R_MissingArg;
  Rsh_Fir_reg_r234_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base29_, 1, Rsh_Fir_array_args442, Rsh_Fir_array_arg_names91, CCP, RHO);
  // goto L88(r234)
  // L88(r234)
  Rsh_Fir_reg_r235_ = Rsh_Fir_reg_r234_;
  goto L88_;

L366_:;
  // x35 = ld x
  Rsh_Fir_reg_x35_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L368() else D100()
  // L368()
  goto L368_;

L367_:;
  // r236 = dyn base30[x, y, number](<sym x>, <sym y>, <sym number>)
  SEXP Rsh_Fir_array_args443[3];
  Rsh_Fir_array_args443[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args443[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args443[2] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names92[3];
  Rsh_Fir_array_arg_names92[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_arg_names92[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names92[2] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r236_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base30_, 3, Rsh_Fir_array_args443, Rsh_Fir_array_arg_names92, CCP, RHO);
  // goto L89(r236)
  // L89(r236)
  Rsh_Fir_reg_r237_ = Rsh_Fir_reg_r236_;
  goto L89_;

D100_:;
  // deopt 416 [x35]
  SEXP Rsh_Fir_array_deopt_stack87[1];
  Rsh_Fir_array_deopt_stack87[0] = Rsh_Fir_reg_x35_;
  Rsh_Fir_deopt(416, 1, Rsh_Fir_array_deopt_stack87, CCP, RHO);
  return R_NilValue;

L368_:;
  // x36 = force? x35
  Rsh_Fir_reg_x36_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x35_);
  // checkMissing(x36)
  SEXP Rsh_Fir_array_args444[1];
  Rsh_Fir_array_args444[0] = Rsh_Fir_reg_x36_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args444, Rsh_Fir_param_types_empty()));
  // y21 = ld y
  Rsh_Fir_reg_y21_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L369() else D101()
  // L369()
  goto L369_;

D101_:;
  // deopt 419 [y21]
  SEXP Rsh_Fir_array_deopt_stack88[1];
  Rsh_Fir_array_deopt_stack88[0] = Rsh_Fir_reg_y21_;
  Rsh_Fir_deopt(419, 1, Rsh_Fir_array_deopt_stack88, CCP, RHO);
  return R_NilValue;

L369_:;
  // y22 = force? y21
  Rsh_Fir_reg_y22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y21_);
  // checkMissing(y22)
  SEXP Rsh_Fir_array_args445[1];
  Rsh_Fir_array_args445[0] = Rsh_Fir_reg_y22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args445, Rsh_Fir_param_types_empty()));
  // number27 = ld number
  Rsh_Fir_reg_number27_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L370() else D102()
  // L370()
  goto L370_;

D102_:;
  // deopt 422 [number27]
  SEXP Rsh_Fir_array_deopt_stack89[1];
  Rsh_Fir_array_deopt_stack89[0] = Rsh_Fir_reg_number27_;
  Rsh_Fir_deopt(422, 1, Rsh_Fir_array_deopt_stack89, CCP, RHO);
  return R_NilValue;

L370_:;
  // number28 = force? number27
  Rsh_Fir_reg_number28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_number27_);
  // checkMissing(number28)
  SEXP Rsh_Fir_array_args446[1];
  Rsh_Fir_array_args446[0] = Rsh_Fir_reg_number28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args446, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 112), RHO);
  // r238 = dyn list(x36, y22, number28)
  SEXP Rsh_Fir_array_args447[3];
  Rsh_Fir_array_args447[0] = Rsh_Fir_reg_x36_;
  Rsh_Fir_array_args447[1] = Rsh_Fir_reg_y22_;
  Rsh_Fir_array_args447[2] = Rsh_Fir_reg_number28_;
  SEXP Rsh_Fir_array_arg_names93[3];
  Rsh_Fir_array_arg_names93[0] = R_MissingArg;
  Rsh_Fir_array_arg_names93[1] = R_MissingArg;
  Rsh_Fir_array_arg_names93[2] = R_MissingArg;
  Rsh_Fir_reg_r238_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 3, Rsh_Fir_array_args447, Rsh_Fir_array_arg_names93, CCP, RHO);
  // check L371() else D103()
  // L371()
  goto L371_;

D103_:;
  // deopt 426 [r238]
  SEXP Rsh_Fir_array_deopt_stack90[1];
  Rsh_Fir_array_deopt_stack90[0] = Rsh_Fir_reg_r238_;
  Rsh_Fir_deopt(426, 1, Rsh_Fir_array_deopt_stack90, CCP, RHO);
  return R_NilValue;

L371_:;
  // goto L89(r238)
  // L89(r238)
  Rsh_Fir_reg_r237_ = Rsh_Fir_reg_r238_;
  goto L89_;

D104_:;
  // deopt 428 [r239]
  SEXP Rsh_Fir_array_deopt_stack91[1];
  Rsh_Fir_array_deopt_stack91[0] = Rsh_Fir_reg_r239_;
  Rsh_Fir_deopt(428, 1, Rsh_Fir_array_deopt_stack91, CCP, RHO);
  return R_NilValue;

L372_:;
  // goto L88(r239)
  // L88(r239)
  Rsh_Fir_reg_r235_ = Rsh_Fir_reg_r239_;
  goto L88_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_(SEXP CCP, SEXP RHO) {
  // par = ldf par
  Rsh_Fir_reg_par = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // r = dyn par("col")
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner3279863723_1(SEXP CCP, SEXP RHO) {
  // return 0.125
  return Rsh_const(CCP, 27);
}
SEXP Rsh_Fir_user_promise_inner3279863723_2(SEXP CCP, SEXP RHO) {
  // sym1 = ldf substitute
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base1 = ldf substitute in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args69);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r8
  return Rsh_Fir_reg_r8_;

L1_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r9 = dyn substitute(<sym x>)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L0_;

L2_:;
  // r7 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_3(SEXP CCP, SEXP RHO) {
  // sym3 = ldf substitute
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base3 = ldf substitute in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r18
  return Rsh_Fir_reg_r18_;

L1_:;
  // substitute1 = ldf substitute in base
  Rsh_Fir_reg_substitute1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r19 = dyn substitute1(<sym y>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute1_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L0_;

L2_:;
  // r17 = dyn base3(<sym y>)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_4(SEXP CCP, SEXP RHO) {
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args84);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r29
  return Rsh_Fir_reg_r29_;

L1_:;
  // c8 = ldf c in base
  Rsh_Fir_reg_c8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // r30 = dyn c8("x", "y", "number")
  SEXP Rsh_Fir_array_args85[3];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args85[2] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c8_, 3, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r30)
  // L0(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L0_;

L2_:;
  // r28 = dyn base6("x", "y", "number")
  SEXP Rsh_Fir_array_args86[3];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args86[2] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 3, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(r28)
  // L0(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_5(SEXP CCP, SEXP RHO) {
  // sym7 = ldf names
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 73), RHO);
  // base7 = ldf names in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 73), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args87);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r33
  return Rsh_Fir_reg_r33_;

L1_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 73), RHO);
  // r34 = dyn names(x4)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L0_;

L2_:;
  // r32 = dyn base7(<sym x>)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r32)
  // L0(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_6(SEXP CCP, SEXP RHO) {
  // x12 = ld x
  Rsh_Fir_reg_x12_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x13 = force? x12
  Rsh_Fir_reg_x13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x12_);
  // checkMissing(x13)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_x13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // return x13
  return Rsh_Fir_reg_x13_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_7(SEXP CCP, SEXP RHO) {
  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // return y2
  return Rsh_Fir_reg_y2_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_8(SEXP CCP, SEXP RHO) {
  // xlabel = ld xlabel
  Rsh_Fir_reg_xlabel = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // xlabel1 = force? xlabel
  Rsh_Fir_reg_xlabel1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xlabel);
  // checkMissing(xlabel1)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_xlabel1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // return xlabel1
  return Rsh_Fir_reg_xlabel1_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_9(SEXP CCP, SEXP RHO) {
  // ylabel = ld ylabel
  Rsh_Fir_reg_ylabel = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // ylabel1 = force? ylabel
  Rsh_Fir_reg_ylabel1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ylabel);
  // checkMissing(ylabel1)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_ylabel1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // return ylabel1
  return Rsh_Fir_reg_ylabel1_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_10(SEXP CCP, SEXP RHO) {
  // log1 = ld log
  Rsh_Fir_reg_log1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // log2 = force? log1
  Rsh_Fir_reg_log2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log1_);
  // checkMissing(log2)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_log2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // return log2
  return Rsh_Fir_reg_log2_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_11(SEXP CCP, SEXP RHO) {
  // xy28 = ld xy
  Rsh_Fir_reg_xy28_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // xy29 = force? xy28
  Rsh_Fir_reg_xy29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xy28_);
  // checkMissing(xy29)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_xy29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty()));
  // return xy29
  return Rsh_Fir_reg_xy29_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_12(SEXP CCP, SEXP RHO) {
  // digits1 = ld digits
  Rsh_Fir_reg_digits1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // digits2 = force? digits1
  Rsh_Fir_reg_digits2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits1_);
  // checkMissing(digits2)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_digits2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty()));
  // return digits2
  return Rsh_Fir_reg_digits2_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_13(SEXP CCP, SEXP RHO) {
  // x16 = ld x
  Rsh_Fir_reg_x16_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x17 = force? x16
  Rsh_Fir_reg_x17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x16_);
  // checkMissing(x17)
  SEXP Rsh_Fir_array_args255[1];
  Rsh_Fir_array_args255[0] = Rsh_Fir_reg_x17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args255, Rsh_Fir_param_types_empty()));
  // return x17
  return Rsh_Fir_reg_x17_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_14(SEXP CCP, SEXP RHO) {
  // y3 = ld y
  Rsh_Fir_reg_y3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // y4 = force? y3
  Rsh_Fir_reg_y4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y3_);
  // checkMissing(y4)
  SEXP Rsh_Fir_array_args256[1];
  Rsh_Fir_array_args256[0] = Rsh_Fir_reg_y4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args256, Rsh_Fir_param_types_empty()));
  // return y4
  return Rsh_Fir_reg_y4_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_15(SEXP CCP, SEXP RHO) {
  // xlab3 = ld xlab
  Rsh_Fir_reg_xlab3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // xlab4 = force? xlab3
  Rsh_Fir_reg_xlab4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xlab3_);
  // checkMissing(xlab4)
  SEXP Rsh_Fir_array_args257[1];
  Rsh_Fir_array_args257[0] = Rsh_Fir_reg_xlab4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args257, Rsh_Fir_param_types_empty()));
  // return xlab4
  return Rsh_Fir_reg_xlab4_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_16(SEXP CCP, SEXP RHO) {
  // ylab3 = ld ylab
  Rsh_Fir_reg_ylab3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // ylab4 = force? ylab3
  Rsh_Fir_reg_ylab4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ylab3_);
  // checkMissing(ylab4)
  SEXP Rsh_Fir_array_args258[1];
  Rsh_Fir_array_args258[0] = Rsh_Fir_reg_ylab4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args258, Rsh_Fir_param_types_empty()));
  // return ylab4
  return Rsh_Fir_reg_ylab4_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_17(SEXP CCP, SEXP RHO) {
  // xlim3 = ld xlim
  Rsh_Fir_reg_xlim3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // xlim4 = force? xlim3
  Rsh_Fir_reg_xlim4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xlim3_);
  // checkMissing(xlim4)
  SEXP Rsh_Fir_array_args259[1];
  Rsh_Fir_array_args259[0] = Rsh_Fir_reg_xlim4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args259, Rsh_Fir_param_types_empty()));
  // return xlim4
  return Rsh_Fir_reg_xlim4_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_18(SEXP CCP, SEXP RHO) {
  // ylim3 = ld ylim
  Rsh_Fir_reg_ylim3_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // ylim4 = force? ylim3
  Rsh_Fir_reg_ylim4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ylim3_);
  // checkMissing(ylim4)
  SEXP Rsh_Fir_array_args260[1];
  Rsh_Fir_array_args260[0] = Rsh_Fir_reg_ylim4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args260, Rsh_Fir_param_types_empty()));
  // return ylim4
  return Rsh_Fir_reg_ylim4_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_19(SEXP CCP, SEXP RHO) {
  // log3 = ld log
  Rsh_Fir_reg_log3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // log4 = force? log3
  Rsh_Fir_reg_log4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log3_);
  // checkMissing(log4)
  SEXP Rsh_Fir_array_args261[1];
  Rsh_Fir_array_args261[0] = Rsh_Fir_reg_log4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args261, Rsh_Fir_param_types_empty()));
  // return log4
  return Rsh_Fir_reg_log4_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_20(SEXP CCP, SEXP RHO) {
  // x18 = ld x
  Rsh_Fir_reg_x18_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x19 = force? x18
  Rsh_Fir_reg_x19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x18_);
  // checkMissing(x19)
  SEXP Rsh_Fir_array_args269[1];
  Rsh_Fir_array_args269[0] = Rsh_Fir_reg_x19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args269, Rsh_Fir_param_types_empty()));
  // c44 = `is.object`(x19)
  SEXP Rsh_Fir_array_args270[1];
  Rsh_Fir_array_args270[0] = Rsh_Fir_reg_x19_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args270, Rsh_Fir_param_types_empty());
  // if c44 then L1() else L2(x19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c44_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x19)
    Rsh_Fir_reg_x21_ = Rsh_Fir_reg_x19_;
    goto L2_;
  }

L0_:;
  // return dx62
  return Rsh_Fir_reg_dx62_;

L1_:;
  // dr36 = tryDispatchBuiltin.1("[", x19)
  SEXP Rsh_Fir_array_args271[2];
  Rsh_Fir_array_args271[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args271[1] = Rsh_Fir_reg_x19_;
  Rsh_Fir_reg_dr36_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args271);
  // dc18 = getTryDispatchBuiltinDispatched(dr36)
  SEXP Rsh_Fir_array_args272[1];
  Rsh_Fir_array_args272[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dc18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args272, Rsh_Fir_param_types_empty());
  // if dc18 then L3() else L2(dr36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc18_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr36)
    Rsh_Fir_reg_x21_ = Rsh_Fir_reg_dr36_;
    goto L2_;
  }

L2_:;
  // n_is3 = ld `n.is1`
  Rsh_Fir_reg_n_is3_ = Rsh_Fir_load(Rsh_const(CCP, 92), RHO);
  // n_is4 = force? n_is3
  Rsh_Fir_reg_n_is4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_is3_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r123 = dyn __5(x21, n_is4)
  SEXP Rsh_Fir_array_args273[2];
  Rsh_Fir_array_args273[0] = Rsh_Fir_reg_x21_;
  Rsh_Fir_array_args273[1] = Rsh_Fir_reg_n_is4_;
  SEXP Rsh_Fir_array_arg_names58[2];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_array_arg_names58[1] = R_MissingArg;
  Rsh_Fir_reg_r123_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args273, Rsh_Fir_array_arg_names58, CCP, RHO);
  // goto L0(r123)
  // L0(r123)
  Rsh_Fir_reg_dx62_ = Rsh_Fir_reg_r123_;
  goto L0_;

L3_:;
  // dx61 = getTryDispatchBuiltinValue(dr36)
  SEXP Rsh_Fir_array_args274[1];
  Rsh_Fir_array_args274[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dx61_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args274, Rsh_Fir_param_types_empty());
  // goto L0(dx61)
  // L0(dx61)
  Rsh_Fir_reg_dx62_ = Rsh_Fir_reg_dx61_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_21(SEXP CCP, SEXP RHO) {
  // y5 = ld y
  Rsh_Fir_reg_y5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // y6 = force? y5
  Rsh_Fir_reg_y6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y5_);
  // checkMissing(y6)
  SEXP Rsh_Fir_array_args275[1];
  Rsh_Fir_array_args275[0] = Rsh_Fir_reg_y6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args275, Rsh_Fir_param_types_empty()));
  // c45 = `is.object`(y6)
  SEXP Rsh_Fir_array_args276[1];
  Rsh_Fir_array_args276[0] = Rsh_Fir_reg_y6_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args276, Rsh_Fir_param_types_empty());
  // if c45 then L1() else L2(y6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L1()
    goto L1_;
  } else {
  // L2(y6)
    Rsh_Fir_reg_y8_ = Rsh_Fir_reg_y6_;
    goto L2_;
  }

L0_:;
  // return dx64
  return Rsh_Fir_reg_dx64_;

L1_:;
  // dr38 = tryDispatchBuiltin.1("[", y6)
  SEXP Rsh_Fir_array_args277[2];
  Rsh_Fir_array_args277[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args277[1] = Rsh_Fir_reg_y6_;
  Rsh_Fir_reg_dr38_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args277);
  // dc19 = getTryDispatchBuiltinDispatched(dr38)
  SEXP Rsh_Fir_array_args278[1];
  Rsh_Fir_array_args278[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dc19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args278, Rsh_Fir_param_types_empty());
  // if dc19 then L3() else L2(dr38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc19_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr38)
    Rsh_Fir_reg_y8_ = Rsh_Fir_reg_dr38_;
    goto L2_;
  }

L2_:;
  // n_is5 = ld `n.is1`
  Rsh_Fir_reg_n_is5_ = Rsh_Fir_load(Rsh_const(CCP, 92), RHO);
  // n_is6 = force? n_is5
  Rsh_Fir_reg_n_is6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_is5_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r125 = dyn __6(y8, n_is6)
  SEXP Rsh_Fir_array_args279[2];
  Rsh_Fir_array_args279[0] = Rsh_Fir_reg_y8_;
  Rsh_Fir_array_args279[1] = Rsh_Fir_reg_n_is6_;
  SEXP Rsh_Fir_array_arg_names59[2];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_array_arg_names59[1] = R_MissingArg;
  Rsh_Fir_reg_r125_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args279, Rsh_Fir_array_arg_names59, CCP, RHO);
  // goto L0(r125)
  // L0(r125)
  Rsh_Fir_reg_dx64_ = Rsh_Fir_reg_r125_;
  goto L0_;

L3_:;
  // dx63 = getTryDispatchBuiltinValue(dr38)
  SEXP Rsh_Fir_array_args280[1];
  Rsh_Fir_array_args280[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dx63_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args280, Rsh_Fir_param_types_empty());
  // goto L0(dx63)
  // L0(dx63)
  Rsh_Fir_reg_dx64_ = Rsh_Fir_reg_dx63_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_22(SEXP CCP, SEXP RHO) {
  // pch1 = ld pch
  Rsh_Fir_reg_pch1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // pch2 = force? pch1
  Rsh_Fir_reg_pch2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pch1_);
  // checkMissing(pch2)
  SEXP Rsh_Fir_array_args281[1];
  Rsh_Fir_array_args281[0] = Rsh_Fir_reg_pch2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args281, Rsh_Fir_param_types_empty()));
  // return pch2
  return Rsh_Fir_reg_pch2_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_23(SEXP CCP, SEXP RHO) {
  // col1 = ld col
  Rsh_Fir_reg_col1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // col2 = force? col1
  Rsh_Fir_reg_col2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col1_);
  // checkMissing(col2)
  SEXP Rsh_Fir_array_args282[1];
  Rsh_Fir_array_args282[0] = Rsh_Fir_reg_col2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args282, Rsh_Fir_param_types_empty()));
  // return col2
  return Rsh_Fir_reg_col2_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_24(SEXP CCP, SEXP RHO) {
  // bg1 = ld bg
  Rsh_Fir_reg_bg1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // bg2 = force? bg1
  Rsh_Fir_reg_bg2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bg1_);
  // checkMissing(bg2)
  SEXP Rsh_Fir_array_args283[1];
  Rsh_Fir_array_args283[0] = Rsh_Fir_reg_bg2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args283, Rsh_Fir_param_types_empty()));
  // return bg2
  return Rsh_Fir_reg_bg2_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_25(SEXP CCP, SEXP RHO) {
  // cex1 = ld cex
  Rsh_Fir_reg_cex1_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // cex2 = force? cex1
  Rsh_Fir_reg_cex2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cex1_);
  // checkMissing(cex2)
  SEXP Rsh_Fir_array_args284[1];
  Rsh_Fir_array_args284[0] = Rsh_Fir_reg_cex2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args284, Rsh_Fir_param_types_empty()));
  // return cex2
  return Rsh_Fir_reg_cex2_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_26(SEXP CCP, SEXP RHO) {
  // x22 = ld x
  Rsh_Fir_reg_x22_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x23 = force? x22
  Rsh_Fir_reg_x23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x22_);
  // checkMissing(x23)
  SEXP Rsh_Fir_array_args290[1];
  Rsh_Fir_array_args290[0] = Rsh_Fir_reg_x23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args290, Rsh_Fir_param_types_empty()));
  // c47 = `is.object`(x23)
  SEXP Rsh_Fir_array_args291[1];
  Rsh_Fir_array_args291[0] = Rsh_Fir_reg_x23_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args291, Rsh_Fir_param_types_empty());
  // if c47 then L1() else L2(x23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x23)
    Rsh_Fir_reg_x25_ = Rsh_Fir_reg_x23_;
    goto L2_;
  }

L0_:;
  // return dx66
  return Rsh_Fir_reg_dx66_;

L1_:;
  // dr40 = tryDispatchBuiltin.1("[", x23)
  SEXP Rsh_Fir_array_args292[2];
  Rsh_Fir_array_args292[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args292[1] = Rsh_Fir_reg_x23_;
  Rsh_Fir_reg_dr40_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args292);
  // dc20 = getTryDispatchBuiltinDispatched(dr40)
  SEXP Rsh_Fir_array_args293[1];
  Rsh_Fir_array_args293[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dc20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args293, Rsh_Fir_param_types_empty());
  // if dc20 then L3() else L2(dr40)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc20_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr40)
    Rsh_Fir_reg_x25_ = Rsh_Fir_reg_dr40_;
    goto L2_;
  }

L2_:;
  // n_is9 = ld `n.is1`
  Rsh_Fir_reg_n_is9_ = Rsh_Fir_load(Rsh_const(CCP, 92), RHO);
  // n_is10 = force? n_is9
  Rsh_Fir_reg_n_is10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_is9_);
  // checkMissing(n_is10)
  SEXP Rsh_Fir_array_args294[1];
  Rsh_Fir_array_args294[0] = Rsh_Fir_reg_n_is10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args294, Rsh_Fir_param_types_empty()));
  // r137 = `!`(n_is10)
  SEXP Rsh_Fir_array_args295[1];
  Rsh_Fir_array_args295[0] = Rsh_Fir_reg_n_is10_;
  Rsh_Fir_reg_r137_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args295, Rsh_Fir_param_types_empty());
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r138 = dyn __7(x25, r137)
  SEXP Rsh_Fir_array_args296[2];
  Rsh_Fir_array_args296[0] = Rsh_Fir_reg_x25_;
  Rsh_Fir_array_args296[1] = Rsh_Fir_reg_r137_;
  SEXP Rsh_Fir_array_arg_names63[2];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_array_arg_names63[1] = R_MissingArg;
  Rsh_Fir_reg_r138_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args296, Rsh_Fir_array_arg_names63, CCP, RHO);
  // goto L0(r138)
  // L0(r138)
  Rsh_Fir_reg_dx66_ = Rsh_Fir_reg_r138_;
  goto L0_;

L3_:;
  // dx65 = getTryDispatchBuiltinValue(dr40)
  SEXP Rsh_Fir_array_args297[1];
  Rsh_Fir_array_args297[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dx65_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args297, Rsh_Fir_param_types_empty());
  // goto L0(dx65)
  // L0(dx65)
  Rsh_Fir_reg_dx66_ = Rsh_Fir_reg_dx65_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_27(SEXP CCP, SEXP RHO) {
  // y9 = ld y
  Rsh_Fir_reg_y9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // y10 = force? y9
  Rsh_Fir_reg_y10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y9_);
  // checkMissing(y10)
  SEXP Rsh_Fir_array_args298[1];
  Rsh_Fir_array_args298[0] = Rsh_Fir_reg_y10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args298, Rsh_Fir_param_types_empty()));
  // c48 = `is.object`(y10)
  SEXP Rsh_Fir_array_args299[1];
  Rsh_Fir_array_args299[0] = Rsh_Fir_reg_y10_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args299, Rsh_Fir_param_types_empty());
  // if c48 then L1() else L2(y10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c48_)) {
  // L1()
    goto L1_;
  } else {
  // L2(y10)
    Rsh_Fir_reg_y12_ = Rsh_Fir_reg_y10_;
    goto L2_;
  }

L0_:;
  // return dx68
  return Rsh_Fir_reg_dx68_;

L1_:;
  // dr42 = tryDispatchBuiltin.1("[", y10)
  SEXP Rsh_Fir_array_args300[2];
  Rsh_Fir_array_args300[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args300[1] = Rsh_Fir_reg_y10_;
  Rsh_Fir_reg_dr42_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args300);
  // dc21 = getTryDispatchBuiltinDispatched(dr42)
  SEXP Rsh_Fir_array_args301[1];
  Rsh_Fir_array_args301[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dc21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args301, Rsh_Fir_param_types_empty());
  // if dc21 then L3() else L2(dr42)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc21_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr42)
    Rsh_Fir_reg_y12_ = Rsh_Fir_reg_dr42_;
    goto L2_;
  }

L2_:;
  // n_is11 = ld `n.is1`
  Rsh_Fir_reg_n_is11_ = Rsh_Fir_load(Rsh_const(CCP, 92), RHO);
  // n_is12 = force? n_is11
  Rsh_Fir_reg_n_is12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_is11_);
  // checkMissing(n_is12)
  SEXP Rsh_Fir_array_args302[1];
  Rsh_Fir_array_args302[0] = Rsh_Fir_reg_n_is12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args302, Rsh_Fir_param_types_empty()));
  // r140 = `!`(n_is12)
  SEXP Rsh_Fir_array_args303[1];
  Rsh_Fir_array_args303[0] = Rsh_Fir_reg_n_is12_;
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args303, Rsh_Fir_param_types_empty());
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r141 = dyn __8(y12, r140)
  SEXP Rsh_Fir_array_args304[2];
  Rsh_Fir_array_args304[0] = Rsh_Fir_reg_y12_;
  Rsh_Fir_array_args304[1] = Rsh_Fir_reg_r140_;
  SEXP Rsh_Fir_array_arg_names64[2];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_reg_r141_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args304, Rsh_Fir_array_arg_names64, CCP, RHO);
  // goto L0(r141)
  // L0(r141)
  Rsh_Fir_reg_dx68_ = Rsh_Fir_reg_r141_;
  goto L0_;

L3_:;
  // dx67 = getTryDispatchBuiltinValue(dr42)
  SEXP Rsh_Fir_array_args305[1];
  Rsh_Fir_array_args305[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dx67_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args305, Rsh_Fir_param_types_empty());
  // goto L0(dx67)
  // L0(dx67)
  Rsh_Fir_reg_dx68_ = Rsh_Fir_reg_dx67_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_28(SEXP CCP, SEXP RHO) {
  // pch3 = ld pch
  Rsh_Fir_reg_pch3_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // pch4 = force? pch3
  Rsh_Fir_reg_pch4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pch3_);
  // checkMissing(pch4)
  SEXP Rsh_Fir_array_args306[1];
  Rsh_Fir_array_args306[0] = Rsh_Fir_reg_pch4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args306, Rsh_Fir_param_types_empty()));
  // return pch4
  return Rsh_Fir_reg_pch4_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_29(SEXP CCP, SEXP RHO) {
  // col3 = ld col
  Rsh_Fir_reg_col3_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // col4 = force? col3
  Rsh_Fir_reg_col4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col3_);
  // checkMissing(col4)
  SEXP Rsh_Fir_array_args307[1];
  Rsh_Fir_array_args307[0] = Rsh_Fir_reg_col4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args307, Rsh_Fir_param_types_empty()));
  // return col4
  return Rsh_Fir_reg_col4_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_30(SEXP CCP, SEXP RHO) {
  // bg3 = ld bg
  Rsh_Fir_reg_bg3_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // bg4 = force? bg3
  Rsh_Fir_reg_bg4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bg3_);
  // checkMissing(bg4)
  SEXP Rsh_Fir_array_args308[1];
  Rsh_Fir_array_args308[0] = Rsh_Fir_reg_bg4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args308, Rsh_Fir_param_types_empty()));
  // return bg4
  return Rsh_Fir_reg_bg4_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_31(SEXP CCP, SEXP RHO) {
  // cex3 = ld cex
  Rsh_Fir_reg_cex3_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // cex4 = force? cex3
  Rsh_Fir_reg_cex4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cex3_);
  // checkMissing(cex4)
  SEXP Rsh_Fir_array_args309[1];
  Rsh_Fir_array_args309[0] = Rsh_Fir_reg_cex4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args309, Rsh_Fir_param_types_empty()));
  // cex_fact1 = ld `cex.fact`
  Rsh_Fir_reg_cex_fact1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // cex_fact2 = force? cex_fact1
  Rsh_Fir_reg_cex_fact2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cex_fact1_);
  // checkMissing(cex_fact2)
  SEXP Rsh_Fir_array_args310[1];
  Rsh_Fir_array_args310[0] = Rsh_Fir_reg_cex_fact2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args310, Rsh_Fir_param_types_empty()));
  // r146 = `/`(cex4, cex_fact2)
  SEXP Rsh_Fir_array_args311[2];
  Rsh_Fir_array_args311[0] = Rsh_Fir_reg_cex4_;
  Rsh_Fir_array_args311[1] = Rsh_Fir_reg_cex_fact2_;
  Rsh_Fir_reg_r146_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args311, Rsh_Fir_param_types_empty());
  // return r146
  return Rsh_Fir_reg_r146_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_32(SEXP CCP, SEXP RHO) {
  // x27 = ld x
  Rsh_Fir_reg_x27_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x28 = force? x27
  Rsh_Fir_reg_x28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x27_);
  // checkMissing(x28)
  SEXP Rsh_Fir_array_args400[1];
  Rsh_Fir_array_args400[0] = Rsh_Fir_reg_x28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args400, Rsh_Fir_param_types_empty()));
  // c62 = `is.object`(x28)
  SEXP Rsh_Fir_array_args401[1];
  Rsh_Fir_array_args401[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_reg_c62_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args401, Rsh_Fir_param_types_empty());
  // if c62 then L1() else L2(x28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c62_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x28)
    Rsh_Fir_reg_x30_ = Rsh_Fir_reg_x28_;
    goto L2_;
  }

L0_:;
  // return dx98
  return Rsh_Fir_reg_dx98_;

L1_:;
  // dr64 = tryDispatchBuiltin.1("[", x28)
  SEXP Rsh_Fir_array_args402[2];
  Rsh_Fir_array_args402[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args402[1] = Rsh_Fir_reg_x28_;
  Rsh_Fir_reg_dr64_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args402);
  // dc32 = getTryDispatchBuiltinDispatched(dr64)
  SEXP Rsh_Fir_array_args403[1];
  Rsh_Fir_array_args403[0] = Rsh_Fir_reg_dr64_;
  Rsh_Fir_reg_dc32_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args403, Rsh_Fir_param_types_empty());
  // if dc32 then L3() else L2(dr64)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc32_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr64)
    Rsh_Fir_reg_x30_ = Rsh_Fir_reg_dr64_;
    goto L2_;
  }

L2_:;
  // i_rep2 = ld `i.rep`
  Rsh_Fir_reg_i_rep2_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // i_rep3 = force? i_rep2
  Rsh_Fir_reg_i_rep3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i_rep2_);
  // __20 = ldf `[` in base
  Rsh_Fir_reg___20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r212 = dyn __20(x30, i_rep3)
  SEXP Rsh_Fir_array_args404[2];
  Rsh_Fir_array_args404[0] = Rsh_Fir_reg_x30_;
  Rsh_Fir_array_args404[1] = Rsh_Fir_reg_i_rep3_;
  SEXP Rsh_Fir_array_arg_names84[2];
  Rsh_Fir_array_arg_names84[0] = R_MissingArg;
  Rsh_Fir_array_arg_names84[1] = R_MissingArg;
  Rsh_Fir_reg_r212_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___20_, 2, Rsh_Fir_array_args404, Rsh_Fir_array_arg_names84, CCP, RHO);
  // goto L0(r212)
  // L0(r212)
  Rsh_Fir_reg_dx98_ = Rsh_Fir_reg_r212_;
  goto L0_;

L3_:;
  // dx97 = getTryDispatchBuiltinValue(dr64)
  SEXP Rsh_Fir_array_args405[1];
  Rsh_Fir_array_args405[0] = Rsh_Fir_reg_dr64_;
  Rsh_Fir_reg_dx97_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args405, Rsh_Fir_param_types_empty());
  // goto L0(dx97)
  // L0(dx97)
  Rsh_Fir_reg_dx98_ = Rsh_Fir_reg_dx97_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_33(SEXP CCP, SEXP RHO) {
  // y13 = ld y
  Rsh_Fir_reg_y13_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // y14 = force? y13
  Rsh_Fir_reg_y14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y13_);
  // checkMissing(y14)
  SEXP Rsh_Fir_array_args406[1];
  Rsh_Fir_array_args406[0] = Rsh_Fir_reg_y14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args406, Rsh_Fir_param_types_empty()));
  // c63 = `is.object`(y14)
  SEXP Rsh_Fir_array_args407[1];
  Rsh_Fir_array_args407[0] = Rsh_Fir_reg_y14_;
  Rsh_Fir_reg_c63_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args407, Rsh_Fir_param_types_empty());
  // if c63 then L1() else L2(y14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c63_)) {
  // L1()
    goto L1_;
  } else {
  // L2(y14)
    Rsh_Fir_reg_y16_ = Rsh_Fir_reg_y14_;
    goto L2_;
  }

L0_:;
  // return dx100
  return Rsh_Fir_reg_dx100_;

L1_:;
  // dr66 = tryDispatchBuiltin.1("[", y14)
  SEXP Rsh_Fir_array_args408[2];
  Rsh_Fir_array_args408[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args408[1] = Rsh_Fir_reg_y14_;
  Rsh_Fir_reg_dr66_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args408);
  // dc33 = getTryDispatchBuiltinDispatched(dr66)
  SEXP Rsh_Fir_array_args409[1];
  Rsh_Fir_array_args409[0] = Rsh_Fir_reg_dr66_;
  Rsh_Fir_reg_dc33_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args409, Rsh_Fir_param_types_empty());
  // if dc33 then L3() else L2(dr66)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc33_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr66)
    Rsh_Fir_reg_y16_ = Rsh_Fir_reg_dr66_;
    goto L2_;
  }

L2_:;
  // i_rep4 = ld `i.rep`
  Rsh_Fir_reg_i_rep4_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // i_rep5 = force? i_rep4
  Rsh_Fir_reg_i_rep5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i_rep4_);
  // __21 = ldf `[` in base
  Rsh_Fir_reg___21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r214 = dyn __21(y16, i_rep5)
  SEXP Rsh_Fir_array_args410[2];
  Rsh_Fir_array_args410[0] = Rsh_Fir_reg_y16_;
  Rsh_Fir_array_args410[1] = Rsh_Fir_reg_i_rep5_;
  SEXP Rsh_Fir_array_arg_names85[2];
  Rsh_Fir_array_arg_names85[0] = R_MissingArg;
  Rsh_Fir_array_arg_names85[1] = R_MissingArg;
  Rsh_Fir_reg_r214_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___21_, 2, Rsh_Fir_array_args410, Rsh_Fir_array_arg_names85, CCP, RHO);
  // goto L0(r214)
  // L0(r214)
  Rsh_Fir_reg_dx100_ = Rsh_Fir_reg_r214_;
  goto L0_;

L3_:;
  // dx99 = getTryDispatchBuiltinValue(dr66)
  SEXP Rsh_Fir_array_args411[1];
  Rsh_Fir_array_args411[0] = Rsh_Fir_reg_dr66_;
  Rsh_Fir_reg_dx99_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args411, Rsh_Fir_param_types_empty());
  // goto L0(dx99)
  // L0(dx99)
  Rsh_Fir_reg_dx100_ = Rsh_Fir_reg_dx99_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_34(SEXP CCP, SEXP RHO) {
  // x31 = ld x
  Rsh_Fir_reg_x31_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x32 = force? x31
  Rsh_Fir_reg_x32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x31_);
  // checkMissing(x32)
  SEXP Rsh_Fir_array_args412[1];
  Rsh_Fir_array_args412[0] = Rsh_Fir_reg_x32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args412, Rsh_Fir_param_types_empty()));
  // c64 = `is.object`(x32)
  SEXP Rsh_Fir_array_args413[1];
  Rsh_Fir_array_args413[0] = Rsh_Fir_reg_x32_;
  Rsh_Fir_reg_c64_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args413, Rsh_Fir_param_types_empty());
  // if c64 then L2() else L3(x32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c64_)) {
  // L2()
    goto L2_;
  } else {
  // L3(x32)
    Rsh_Fir_reg_x34_ = Rsh_Fir_reg_x32_;
    goto L3_;
  }

L0_:;
  // xr = ld xr
  Rsh_Fir_reg_xr = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // xr1 = force? xr
  Rsh_Fir_reg_xr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xr);
  // checkMissing(xr1)
  SEXP Rsh_Fir_array_args414[1];
  Rsh_Fir_array_args414[0] = Rsh_Fir_reg_xr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args414, Rsh_Fir_param_types_empty()));
  // sym27 = ldf sin
  Rsh_Fir_reg_sym27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 109), RHO);
  // base27 = ldf sin in base
  Rsh_Fir_reg_base27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 109), RHO);
  // guard27 = `==`.4(sym27, base27)
  SEXP Rsh_Fir_array_args415[2];
  Rsh_Fir_array_args415[0] = Rsh_Fir_reg_sym27_;
  Rsh_Fir_array_args415[1] = Rsh_Fir_reg_base27_;
  Rsh_Fir_reg_guard27_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args415);
  // if guard27 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard27_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L1_:;
  // r220 = `*`(xr4, r218)
  SEXP Rsh_Fir_array_args416[2];
  Rsh_Fir_array_args416[0] = Rsh_Fir_reg_xr4_;
  Rsh_Fir_array_args416[1] = Rsh_Fir_reg_r218_;
  Rsh_Fir_reg_r220_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args416, Rsh_Fir_param_types_empty());
  // r221 = `+`(dx105, r220)
  SEXP Rsh_Fir_array_args417[2];
  Rsh_Fir_array_args417[0] = Rsh_Fir_reg_dx105_;
  Rsh_Fir_array_args417[1] = Rsh_Fir_reg_r220_;
  Rsh_Fir_reg_r221_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args417, Rsh_Fir_param_types_empty());
  // return r221
  return Rsh_Fir_reg_r221_;

L2_:;
  // dr68 = tryDispatchBuiltin.1("[", x32)
  SEXP Rsh_Fir_array_args418[2];
  Rsh_Fir_array_args418[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args418[1] = Rsh_Fir_reg_x32_;
  Rsh_Fir_reg_dr68_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args418);
  // dc34 = getTryDispatchBuiltinDispatched(dr68)
  SEXP Rsh_Fir_array_args419[1];
  Rsh_Fir_array_args419[0] = Rsh_Fir_reg_dr68_;
  Rsh_Fir_reg_dc34_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args419, Rsh_Fir_param_types_empty());
  // if dc34 then L4() else L3(dr68)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc34_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr68)
    Rsh_Fir_reg_x34_ = Rsh_Fir_reg_dr68_;
    goto L3_;
  }

L3_:;
  // i_rep6 = ld `i.rep`
  Rsh_Fir_reg_i_rep6_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // i_rep7 = force? i_rep6
  Rsh_Fir_reg_i_rep7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i_rep6_);
  // __22 = ldf `[` in base
  Rsh_Fir_reg___22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r216 = dyn __22(x34, i_rep7)
  SEXP Rsh_Fir_array_args420[2];
  Rsh_Fir_array_args420[0] = Rsh_Fir_reg_x34_;
  Rsh_Fir_array_args420[1] = Rsh_Fir_reg_i_rep7_;
  SEXP Rsh_Fir_array_arg_names86[2];
  Rsh_Fir_array_arg_names86[0] = R_MissingArg;
  Rsh_Fir_array_arg_names86[1] = R_MissingArg;
  Rsh_Fir_reg_r216_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___22_, 2, Rsh_Fir_array_args420, Rsh_Fir_array_arg_names86, CCP, RHO);
  // goto L0(r216)
  // L0(r216)
  Rsh_Fir_reg_dx102_ = Rsh_Fir_reg_r216_;
  goto L0_;

L4_:;
  // dx101 = getTryDispatchBuiltinValue(dr68)
  SEXP Rsh_Fir_array_args421[1];
  Rsh_Fir_array_args421[0] = Rsh_Fir_reg_dr68_;
  Rsh_Fir_reg_dx101_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args421, Rsh_Fir_param_types_empty());
  // goto L0(dx101)
  // L0(dx101)
  Rsh_Fir_reg_dx102_ = Rsh_Fir_reg_dx101_;
  goto L0_;

L5_:;
  // deg = ld deg
  Rsh_Fir_reg_deg = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // deg1 = force? deg
  Rsh_Fir_reg_deg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deg);
  // checkMissing(deg1)
  SEXP Rsh_Fir_array_args422[1];
  Rsh_Fir_array_args422[0] = Rsh_Fir_reg_deg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args422, Rsh_Fir_param_types_empty()));
  // r219 = sin(deg1)
  SEXP Rsh_Fir_array_args423[1];
  Rsh_Fir_array_args423[0] = Rsh_Fir_reg_deg1_;
  Rsh_Fir_reg_r219_ = Rsh_Fir_call_builtin(176, CCP, RHO, 1, Rsh_Fir_array_args423, Rsh_Fir_param_types_empty());
  // goto L1(dx102, xr1, r219)
  // L1(dx102, xr1, r219)
  Rsh_Fir_reg_dx105_ = Rsh_Fir_reg_dx102_;
  Rsh_Fir_reg_xr4_ = Rsh_Fir_reg_xr1_;
  Rsh_Fir_reg_r218_ = Rsh_Fir_reg_r219_;
  goto L1_;

L6_:;
  // r217 = dyn base27(<sym deg>)
  SEXP Rsh_Fir_array_args424[1];
  Rsh_Fir_array_args424[0] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names87[1];
  Rsh_Fir_array_arg_names87[0] = R_MissingArg;
  Rsh_Fir_reg_r217_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base27_, 1, Rsh_Fir_array_args424, Rsh_Fir_array_arg_names87, CCP, RHO);
  // goto L1(dx102, xr1, r217)
  // L1(dx102, xr1, r217)
  Rsh_Fir_reg_dx105_ = Rsh_Fir_reg_dx102_;
  Rsh_Fir_reg_xr4_ = Rsh_Fir_reg_xr1_;
  Rsh_Fir_reg_r218_ = Rsh_Fir_reg_r217_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_35(SEXP CCP, SEXP RHO) {
  // y17 = ld y
  Rsh_Fir_reg_y17_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // y18 = force? y17
  Rsh_Fir_reg_y18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y17_);
  // checkMissing(y18)
  SEXP Rsh_Fir_array_args425[1];
  Rsh_Fir_array_args425[0] = Rsh_Fir_reg_y18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args425, Rsh_Fir_param_types_empty()));
  // c65 = `is.object`(y18)
  SEXP Rsh_Fir_array_args426[1];
  Rsh_Fir_array_args426[0] = Rsh_Fir_reg_y18_;
  Rsh_Fir_reg_c65_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args426, Rsh_Fir_param_types_empty());
  // if c65 then L2() else L3(y18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c65_)) {
  // L2()
    goto L2_;
  } else {
  // L3(y18)
    Rsh_Fir_reg_y20_ = Rsh_Fir_reg_y18_;
    goto L3_;
  }

L0_:;
  // yr = ld yr
  Rsh_Fir_reg_yr = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // yr1 = force? yr
  Rsh_Fir_reg_yr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yr);
  // checkMissing(yr1)
  SEXP Rsh_Fir_array_args427[1];
  Rsh_Fir_array_args427[0] = Rsh_Fir_reg_yr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args427, Rsh_Fir_param_types_empty()));
  // sym28 = ldf cos
  Rsh_Fir_reg_sym28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 110), RHO);
  // base28 = ldf cos in base
  Rsh_Fir_reg_base28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 110), RHO);
  // guard28 = `==`.4(sym28, base28)
  SEXP Rsh_Fir_array_args428[2];
  Rsh_Fir_array_args428[0] = Rsh_Fir_reg_sym28_;
  Rsh_Fir_array_args428[1] = Rsh_Fir_reg_base28_;
  Rsh_Fir_reg_guard28_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args428);
  // if guard28 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard28_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L1_:;
  // r227 = `*`(yr4, r225)
  SEXP Rsh_Fir_array_args429[2];
  Rsh_Fir_array_args429[0] = Rsh_Fir_reg_yr4_;
  Rsh_Fir_array_args429[1] = Rsh_Fir_reg_r225_;
  Rsh_Fir_reg_r227_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args429, Rsh_Fir_param_types_empty());
  // r228 = `+`(dx110, r227)
  SEXP Rsh_Fir_array_args430[2];
  Rsh_Fir_array_args430[0] = Rsh_Fir_reg_dx110_;
  Rsh_Fir_array_args430[1] = Rsh_Fir_reg_r227_;
  Rsh_Fir_reg_r228_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args430, Rsh_Fir_param_types_empty());
  // return r228
  return Rsh_Fir_reg_r228_;

L2_:;
  // dr70 = tryDispatchBuiltin.1("[", y18)
  SEXP Rsh_Fir_array_args431[2];
  Rsh_Fir_array_args431[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args431[1] = Rsh_Fir_reg_y18_;
  Rsh_Fir_reg_dr70_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args431);
  // dc35 = getTryDispatchBuiltinDispatched(dr70)
  SEXP Rsh_Fir_array_args432[1];
  Rsh_Fir_array_args432[0] = Rsh_Fir_reg_dr70_;
  Rsh_Fir_reg_dc35_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args432, Rsh_Fir_param_types_empty());
  // if dc35 then L4() else L3(dr70)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc35_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr70)
    Rsh_Fir_reg_y20_ = Rsh_Fir_reg_dr70_;
    goto L3_;
  }

L3_:;
  // i_rep8 = ld `i.rep`
  Rsh_Fir_reg_i_rep8_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // i_rep9 = force? i_rep8
  Rsh_Fir_reg_i_rep9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i_rep8_);
  // __23 = ldf `[` in base
  Rsh_Fir_reg___23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r223 = dyn __23(y20, i_rep9)
  SEXP Rsh_Fir_array_args433[2];
  Rsh_Fir_array_args433[0] = Rsh_Fir_reg_y20_;
  Rsh_Fir_array_args433[1] = Rsh_Fir_reg_i_rep9_;
  SEXP Rsh_Fir_array_arg_names88[2];
  Rsh_Fir_array_arg_names88[0] = R_MissingArg;
  Rsh_Fir_array_arg_names88[1] = R_MissingArg;
  Rsh_Fir_reg_r223_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___23_, 2, Rsh_Fir_array_args433, Rsh_Fir_array_arg_names88, CCP, RHO);
  // goto L0(r223)
  // L0(r223)
  Rsh_Fir_reg_dx107_ = Rsh_Fir_reg_r223_;
  goto L0_;

L4_:;
  // dx106 = getTryDispatchBuiltinValue(dr70)
  SEXP Rsh_Fir_array_args434[1];
  Rsh_Fir_array_args434[0] = Rsh_Fir_reg_dr70_;
  Rsh_Fir_reg_dx106_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args434, Rsh_Fir_param_types_empty());
  // goto L0(dx106)
  // L0(dx106)
  Rsh_Fir_reg_dx107_ = Rsh_Fir_reg_dx106_;
  goto L0_;

L5_:;
  // deg2 = ld deg
  Rsh_Fir_reg_deg2_ = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // deg3 = force? deg2
  Rsh_Fir_reg_deg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deg2_);
  // checkMissing(deg3)
  SEXP Rsh_Fir_array_args435[1];
  Rsh_Fir_array_args435[0] = Rsh_Fir_reg_deg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args435, Rsh_Fir_param_types_empty()));
  // r226 = cos(deg3)
  SEXP Rsh_Fir_array_args436[1];
  Rsh_Fir_array_args436[0] = Rsh_Fir_reg_deg3_;
  Rsh_Fir_reg_r226_ = Rsh_Fir_call_builtin(175, CCP, RHO, 1, Rsh_Fir_array_args436, Rsh_Fir_param_types_empty());
  // goto L1(dx107, yr1, r226)
  // L1(dx107, yr1, r226)
  Rsh_Fir_reg_dx110_ = Rsh_Fir_reg_dx107_;
  Rsh_Fir_reg_yr4_ = Rsh_Fir_reg_yr1_;
  Rsh_Fir_reg_r225_ = Rsh_Fir_reg_r226_;
  goto L1_;

L6_:;
  // r224 = dyn base28(<sym deg>)
  SEXP Rsh_Fir_array_args437[1];
  Rsh_Fir_array_args437[0] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names89[1];
  Rsh_Fir_array_arg_names89[0] = R_MissingArg;
  Rsh_Fir_reg_r224_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base28_, 1, Rsh_Fir_array_args437, Rsh_Fir_array_arg_names89, CCP, RHO);
  // goto L1(dx107, yr1, r224)
  // L1(dx107, yr1, r224)
  Rsh_Fir_reg_dx110_ = Rsh_Fir_reg_dx107_;
  Rsh_Fir_reg_yr4_ = Rsh_Fir_reg_yr1_;
  Rsh_Fir_reg_r225_ = Rsh_Fir_reg_r224_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_36(SEXP CCP, SEXP RHO) {
  // seg_col1 = ld `seg.col`
  Rsh_Fir_reg_seg_col1_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // seg_col2 = force? seg_col1
  Rsh_Fir_reg_seg_col2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_seg_col1_);
  // checkMissing(seg_col2)
  SEXP Rsh_Fir_array_args438[1];
  Rsh_Fir_array_args438[0] = Rsh_Fir_reg_seg_col2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args438, Rsh_Fir_param_types_empty()));
  // return seg_col2
  return Rsh_Fir_reg_seg_col2_;
}
SEXP Rsh_Fir_user_promise_inner3279863723_37(SEXP CCP, SEXP RHO) {
  // seg_lwd1 = ld `seg.lwd`
  Rsh_Fir_reg_seg_lwd1_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // seg_lwd2 = force? seg_lwd1
  Rsh_Fir_reg_seg_lwd2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_seg_lwd1_);
  // checkMissing(seg_lwd2)
  SEXP Rsh_Fir_array_args439[1];
  Rsh_Fir_array_args439[0] = Rsh_Fir_reg_seg_lwd2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args439, Rsh_Fir_param_types_empty()));
  // return seg_lwd2
  return Rsh_Fir_reg_seg_lwd2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
