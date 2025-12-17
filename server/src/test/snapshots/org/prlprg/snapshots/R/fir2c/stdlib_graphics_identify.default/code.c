#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2747511849_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2747511849_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2747511849_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2747511849_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2747511849_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2747511849_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2747511849_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner2747511849
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2747511849_, RHO, CCP);
  // st `identify.default` = r
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
SEXP Rsh_Fir_user_function_inner2747511849_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2747511849 dynamic dispatch ([x, y, labels, pos, n, plot, atpen, offset, tolerance, order, `...`])

  return Rsh_Fir_user_version_inner2747511849_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2747511849_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2747511849 version 0 (*, *, *, *, *, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 11) Rsh_error("FIŘ arity mismatch for inner2747511849/0: expected 11, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_labels;  // labels
  SEXP Rsh_Fir_reg_pos;  // pos
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_plot;  // plot
  SEXP Rsh_Fir_reg_atpen;  // atpen
  SEXP Rsh_Fir_reg_offset;  // offset
  SEXP Rsh_Fir_reg_tolerance;  // tolerance
  SEXP Rsh_Fir_reg_order;  // order
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
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_pos_isMissing;  // pos_isMissing
  SEXP Rsh_Fir_reg_pos_orDefault;  // pos_orDefault
  SEXP Rsh_Fir_reg_n_isMissing;  // n_isMissing
  SEXP Rsh_Fir_reg_n_orDefault;  // n_orDefault
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_plot_isMissing;  // plot_isMissing
  SEXP Rsh_Fir_reg_plot_orDefault;  // plot_orDefault
  SEXP Rsh_Fir_reg_atpen_isMissing;  // atpen_isMissing
  SEXP Rsh_Fir_reg_atpen_orDefault;  // atpen_orDefault
  SEXP Rsh_Fir_reg_offset_isMissing;  // offset_isMissing
  SEXP Rsh_Fir_reg_offset_orDefault;  // offset_orDefault
  SEXP Rsh_Fir_reg_tolerance_isMissing;  // tolerance_isMissing
  SEXP Rsh_Fir_reg_tolerance_orDefault;  // tolerance_orDefault
  SEXP Rsh_Fir_reg_order_isMissing;  // order_isMissing
  SEXP Rsh_Fir_reg_order_orDefault;  // order_orDefault
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_par;  // par
  SEXP Rsh_Fir_reg_extras;  // extras
  SEXP Rsh_Fir_reg_extras1_;  // extras1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_on_exit;  // on_exit
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_xy_coords;  // xy_coords
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_xy;  // xy
  SEXP Rsh_Fir_reg_xy1_;  // xy1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_xy3_;  // xy3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_xy4_;  // xy4
  SEXP Rsh_Fir_reg_xy5_;  // xy5
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_xy7_;  // xy7
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_pos1_;  // pos1
  SEXP Rsh_Fir_reg_pos2_;  // pos2
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_order1_;  // order1
  SEXP Rsh_Fir_reg_order2_;  // order2
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_numeric;  // numeric
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_numeric1_;  // numeric1
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_list1_;  // list1
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_pos3_;  // pos3
  SEXP Rsh_Fir_reg_pos4_;  // pos4
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_numeric2_;  // numeric2
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_order3_;  // order3
  SEXP Rsh_Fir_reg_order4_;  // order4
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_numeric3_;  // numeric3
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_result;  // result
  SEXP Rsh_Fir_reg_result1_;  // result1
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_C_identify;  // C_identify
  SEXP Rsh_Fir_reg_C_identify1_;  // C_identify1
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_y4_;  // y4
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_labels1_;  // labels1
  SEXP Rsh_Fir_reg_labels2_;  // labels2
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_plot1_;  // plot1
  SEXP Rsh_Fir_reg_plot2_;  // plot2
  SEXP Rsh_Fir_reg_offset1_;  // offset1
  SEXP Rsh_Fir_reg_offset2_;  // offset2
  SEXP Rsh_Fir_reg_tolerance1_;  // tolerance1
  SEXP Rsh_Fir_reg_tolerance2_;  // tolerance2
  SEXP Rsh_Fir_reg_atpen1_;  // atpen1
  SEXP Rsh_Fir_reg_atpen2_;  // atpen2
  SEXP Rsh_Fir_reg__External2_;  // _External2
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_z3_;  // z3
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_seq_int;  // seq_int
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_z4_;  // z4
  SEXP Rsh_Fir_reg_z5_;  // z5
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_z7_;  // z7
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_pos5_;  // pos5
  SEXP Rsh_Fir_reg_pos6_;  // pos6
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_order5_;  // order5
  SEXP Rsh_Fir_reg_order6_;  // order6
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg_list2_;  // list2
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_pos7_;  // pos7
  SEXP Rsh_Fir_reg_pos8_;  // pos8
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_z8_;  // z8
  SEXP Rsh_Fir_reg_z9_;  // z9
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_z11_;  // z11
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_z12_;  // z12
  SEXP Rsh_Fir_reg_z13_;  // z13
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_z15_;  // z15
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_order7_;  // order7
  SEXP Rsh_Fir_reg_order8_;  // order8
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_z16_;  // z16
  SEXP Rsh_Fir_reg_z17_;  // z17
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_z19_;  // z19
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_z20_;  // z20
  SEXP Rsh_Fir_reg_z21_;  // z21
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_dx40_;  // dx40
  SEXP Rsh_Fir_reg_z23_;  // z23
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx42_;  // dx42
  SEXP Rsh_Fir_reg_dx43_;  // dx43
  SEXP Rsh_Fir_reg_dx44_;  // dx44
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_dx46_;  // dx46
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx48_;  // dx48
  SEXP Rsh_Fir_reg_dx49_;  // dx49
  SEXP Rsh_Fir_reg_dx50_;  // dx50
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_result2_;  // result2
  SEXP Rsh_Fir_reg_result3_;  // result3

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];
  Rsh_Fir_reg_labels = PARAMS[2];
  Rsh_Fir_reg_pos = PARAMS[3];
  Rsh_Fir_reg_n = PARAMS[4];
  Rsh_Fir_reg_plot = PARAMS[5];
  Rsh_Fir_reg_atpen = PARAMS[6];
  Rsh_Fir_reg_offset = PARAMS[7];
  Rsh_Fir_reg_tolerance = PARAMS[8];
  Rsh_Fir_reg_order = PARAMS[9];
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
  //   r2 = seq_along(x2);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym x>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2747511849_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_labels_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st labels = labels_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_labels_orDefault, RHO);
  (void)(Rsh_Fir_reg_labels_orDefault);
  // pos_isMissing = missing.0(pos)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_pos;
  Rsh_Fir_reg_pos_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if pos_isMissing then L3(FALSE) else L3(pos)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_pos_isMissing)) {
  // L3(FALSE)
    Rsh_Fir_reg_pos_orDefault = Rsh_const(CCP, 6);
    goto L3_;
  } else {
  // L3(pos)
    Rsh_Fir_reg_pos_orDefault = Rsh_Fir_reg_pos;
    goto L3_;
  }

L3_:;
  // st pos = pos_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_pos_orDefault, RHO);
  (void)(Rsh_Fir_reg_pos_orDefault);
  // n_isMissing = missing.0(n)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_n;
  Rsh_Fir_reg_n_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if n_isMissing then L4() else L5(n)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_n_isMissing)) {
  // L4()
    goto L4_;
  } else {
  // L5(n)
    Rsh_Fir_reg_n_orDefault = Rsh_Fir_reg_n;
    goto L5_;
  }

L4_:;
  // p1 = prom<V +>{
  //   sym1 = ldf length;
  //   base1 = ldf length in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r5):
  //   return r5;
  // L1():
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   length = ldf length in base;
  //   r6 = dyn length(x4);
  //   goto L0(r6);
  // L2():
  //   r4 = dyn base1(<sym x>);
  //   goto L0(r4);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2747511849_1, CCP, RHO);
  // goto L5(p1)
  // L5(p1)
  Rsh_Fir_reg_n_orDefault = Rsh_Fir_reg_p1_;
  goto L5_;

L5_:;
  // st n = n_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_n_orDefault, RHO);
  (void)(Rsh_Fir_reg_n_orDefault);
  // plot_isMissing = missing.0(plot)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_plot;
  Rsh_Fir_reg_plot_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args12);
  // if plot_isMissing then L6(TRUE) else L6(plot)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_plot_isMissing)) {
  // L6(TRUE)
    Rsh_Fir_reg_plot_orDefault = Rsh_const(CCP, 10);
    goto L6_;
  } else {
  // L6(plot)
    Rsh_Fir_reg_plot_orDefault = Rsh_Fir_reg_plot;
    goto L6_;
  }

L6_:;
  // st plot = plot_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_plot_orDefault, RHO);
  (void)(Rsh_Fir_reg_plot_orDefault);
  // atpen_isMissing = missing.0(atpen)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_atpen;
  Rsh_Fir_reg_atpen_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args13);
  // if atpen_isMissing then L7(FALSE) else L7(atpen)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_atpen_isMissing)) {
  // L7(FALSE)
    Rsh_Fir_reg_atpen_orDefault = Rsh_const(CCP, 6);
    goto L7_;
  } else {
  // L7(atpen)
    Rsh_Fir_reg_atpen_orDefault = Rsh_Fir_reg_atpen;
    goto L7_;
  }

L7_:;
  // st atpen = atpen_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_atpen_orDefault, RHO);
  (void)(Rsh_Fir_reg_atpen_orDefault);
  // offset_isMissing = missing.0(offset)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_offset;
  Rsh_Fir_reg_offset_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args14);
  // if offset_isMissing then L8(0.5) else L8(offset)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_offset_isMissing)) {
  // L8(0.5)
    Rsh_Fir_reg_offset_orDefault = Rsh_const(CCP, 13);
    goto L8_;
  } else {
  // L8(offset)
    Rsh_Fir_reg_offset_orDefault = Rsh_Fir_reg_offset;
    goto L8_;
  }

L8_:;
  // st offset = offset_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_offset_orDefault, RHO);
  (void)(Rsh_Fir_reg_offset_orDefault);
  // tolerance_isMissing = missing.0(tolerance)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_tolerance;
  Rsh_Fir_reg_tolerance_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args15);
  // if tolerance_isMissing then L9(0.25) else L9(tolerance)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_tolerance_isMissing)) {
  // L9(0.25)
    Rsh_Fir_reg_tolerance_orDefault = Rsh_const(CCP, 15);
    goto L9_;
  } else {
  // L9(tolerance)
    Rsh_Fir_reg_tolerance_orDefault = Rsh_Fir_reg_tolerance;
    goto L9_;
  }

L9_:;
  // st tolerance = tolerance_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_tolerance_orDefault, RHO);
  (void)(Rsh_Fir_reg_tolerance_orDefault);
  // order_isMissing = missing.0(order)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_order;
  Rsh_Fir_reg_order_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args16);
  // if order_isMissing then L10(FALSE) else L10(order)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_order_isMissing)) {
  // L10(FALSE)
    Rsh_Fir_reg_order_orDefault = Rsh_const(CCP, 6);
    goto L10_;
  } else {
  // L10(order)
    Rsh_Fir_reg_order_orDefault = Rsh_Fir_reg_order;
    goto L10_;
  }

L10_:;
  // st order = order_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_order_orDefault, RHO);
  (void)(Rsh_Fir_reg_order_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard2 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L11_:;
  // c = `as.logical`(r9)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c then L53() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L53()
    goto L53_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // st extras = r11
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r13 = dyn length1(r11)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L52() else D2()
  // L52()
  goto L52_;

L13_:;
  // goto L15()
  // L15()
  goto L15_;

L14_:;
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // xy_coords = ldf `xy.coords`
  Rsh_Fir_reg_xy_coords = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L59() else D5()
  // L59()
  goto L59_;

L16_:;
  // r28 = `==`(r26, 0.0)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c3 then L75() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L75()
    goto L75_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // sym7 = ldf `.External2`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base7 = ldf `.External2` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard7 then L111() else L112()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L111()
    goto L111_;
  } else {
  // L112()
    goto L112_;
  }

L18_:;
  // c10 = `as.logical`(c6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c10 then L80() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L80()
    goto L80_;
  } else {
  // L19()
    goto L19_;
  }

L19_:;
  // sym6 = ldf list
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base6 = ldf list in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard6 then L85() else L86()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L85()
    goto L85_;
  } else {
  // L86()
    goto L86_;
  }

L21_:;
  // st result = r35
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // pos3 = ld pos
  Rsh_Fir_reg_pos3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L90() else D18()
  // L90()
  goto L90_;

L22_:;
  // goto L23()
  // L23()
  goto L23_;

L23_:;
  // order3 = ld order
  Rsh_Fir_reg_order3_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L99() else D21()
  // L99()
  goto L99_;

L24_:;
  // goto L25()
  // L25()
  goto L25_;

L25_:;
  // result = ld result
  Rsh_Fir_reg_result = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L108() else D24()
  // L108()
  goto L108_;

L27_:;
  // st z = r54
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // sym9 = ldf `seq.int`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base9 = ldf `seq.int` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard9 then L126() else L127()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L126()
    goto L126_;
  } else {
  // L127()
    goto L127_;
  }

L28_:;
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L120() else D30()
  // L120()
  goto L120_;

L29_:;
  // c16 = `is.object`(r60)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c16 then L133() else L134(r60)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L133()
    goto L133_;
  } else {
  // L134(r60)
    Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r60_;
    goto L134_;
  }

L30_:;
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r62 = dyn seq_int(dx9)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L132() else D37()
  // L132()
  goto L132_;

L31_:;
  // st i = dx11
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // pos5 = ld pos
  Rsh_Fir_reg_pos5_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L140() else D39()
  // L140()
  goto L140_;

L32_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r70 = dyn __2(r68, dx13)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L31(r70)
  // L31(r70)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r70_;
  goto L31_;

L33_:;
  // c24 = `as.logical`(c20)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c24 then L144() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L144()
    goto L144_;
  } else {
  // L34()
    goto L34_;
  }

L34_:;
  // sym10 = ldf list
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base10 = ldf list in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard10 then L147() else L148()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L147()
    goto L147_;
  } else {
  // L148()
    goto L148_;
  }

L35_:;
  // st result = r74
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r74_, RHO);
  (void)(Rsh_Fir_reg_r74_);
  // pos7 = ld pos
  Rsh_Fir_reg_pos7_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L151() else D44()
  // L151()
  goto L151_;

L36_:;
  // goto L40()
  // L40()
  goto L40_;

L37_:;
  // c27 = `is.object`(dx15)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c27 then L157() else L158(dx15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L157()
    goto L157_;
  } else {
  // L158(dx15)
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
    goto L158_;
  }

L38_:;
  // l6 = ld result
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // c29 = `is.object`(l6)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c29 then L165() else L166(dx19, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L165()
    goto L165_;
  } else {
  // L166(dx19, l6)
    Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx19_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L166_;
  }

L39_:;
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r78 = dyn __5(dx24, dx25)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dx24_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_dx25_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L38(r78)
  // L38(r78)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r78_;
  goto L38_;

L40_:;
  // order7 = ld order
  Rsh_Fir_reg_order7_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L169() else D47()
  // L169()
  goto L169_;

L41_:;
  // goto L45()
  // L45()
  goto L45_;

L42_:;
  // c32 = `is.object`(dx34)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dx34_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c32 then L175() else L176(dx34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L175()
    goto L175_;
  } else {
  // L176(dx34)
    Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_dx34_;
    goto L176_;
  }

L43_:;
  // l9 = ld result
  Rsh_Fir_reg_l9_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // c34 = `is.object`(l9)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c34 then L183() else L184(dx38, l9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L183()
    goto L183_;
  } else {
  // L184(dx38, l9)
    Rsh_Fir_reg_dx46_ = Rsh_Fir_reg_dx38_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    goto L184_;
  }

L44_:;
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r82 = dyn __8(dx43, dx44)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dx43_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_dx44_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L43(r82)
  // L43(r82)
  Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_r82_;
  goto L43_;

L45_:;
  // result2 = ld result
  Rsh_Fir_reg_result2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L187() else D50()
  // L187()
  goto L187_;

L46_:;
  // sym3 = ldf list
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base3 = ldf list in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard3 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L47_:;
  // r8 = dyn base2(<lang `<-`(extras, list(...))>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L11(r8)
  // L11(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L11_;

L48_:;
  // list = ldf list
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L50() else D0()
  // L50()
  goto L50_;

L49_:;
  // r10 = dyn base3(<sym ...>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L12(r10)
  // L12(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L12_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L50_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // r12 = dyn list[`...`](ddd1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L51() else D1()
  // L51()
  goto L51_;

D1_:;
  // deopt 6 [r12]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L12(r12)
  // L12(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L12_;

D2_:;
  // deopt 9 [r13]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L52_:;
  // goto L11(r13)
  // L11(r13)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r13_;
  goto L11_;

L53_:;
  // par = ldf par
  Rsh_Fir_reg_par = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L54() else D3()
  // L54()
  goto L54_;

D3_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // p2 = prom<V +>{
  //   extras = ld extras;
  //   extras1 = force? extras;
  //   checkMissing(extras1);
  //   return extras1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2747511849_2, CCP, RHO);
  // r15 = dyn par(p2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L55() else D4()
  // L55()
  goto L55_;

D4_:;
  // deopt 13 [r15]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L55_:;
  // st opar = r15
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // sym4 = ldf `on.exit`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base4 = ldf `on.exit` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard4 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L56_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r18 = dyn on_exit(<lang par(opar)>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L14(r18)
  // L14(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L14_;

L57_:;
  // r16 = dyn base4(<lang par(opar)>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L14(r16)
  // L14(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L14_;

D5_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L59_:;
  // p3 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2747511849_3, CCP, RHO);
  // p4 = prom<V +>{
  //   y1 = ld y;
  //   y2 = force? y1;
  //   checkMissing(y2);
  //   return y2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2747511849_4, CCP, RHO);
  // r22 = dyn xy_coords[, , setLab](p3, p4, FALSE)
  SEXP Rsh_Fir_array_args48[3];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args48[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_xy_coords, 3, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L60() else D6()
  // L60()
  goto L60_;

D6_:;
  // deopt 26 [r22]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L60_:;
  // st xy = r22
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // xy = ld xy
  Rsh_Fir_reg_xy = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L61() else D7()
  // L61()
  goto L61_;

D7_:;
  // deopt 28 [xy]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_xy;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L61_:;
  // xy1 = force? xy
  Rsh_Fir_reg_xy1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xy);
  // checkMissing(xy1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_xy1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(xy1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_xy1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if c1 then L63() else L64(xy1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L63()
    goto L63_;
  } else {
  // L64(xy1)
    Rsh_Fir_reg_xy3_ = Rsh_Fir_reg_xy1_;
    goto L64_;
  }

L62_:;
  // st x = dx1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // xy4 = ld xy
  Rsh_Fir_reg_xy4_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L66() else D8()
  // L66()
  goto L66_;

L63_:;
  // dr = tryDispatchBuiltin.1("$", xy1)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_xy1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args51);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc then L65() else L64(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L65()
    goto L65_;
  } else {
  // L64(dr)
    Rsh_Fir_reg_xy3_ = Rsh_Fir_reg_dr;
    goto L64_;
  }

L64_:;
  // r23 = `$`(xy3, <sym x>)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_xy3_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L62(r23)
  // L62(r23)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r23_;
  goto L62_;

L65_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L62(dx)
  // L62(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L62_;

D8_:;
  // deopt 32 [xy4]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_xy4_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L66_:;
  // xy5 = force? xy4
  Rsh_Fir_reg_xy5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xy4_);
  // checkMissing(xy5)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_xy5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(xy5)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_xy5_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if c2 then L68() else L69(xy5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L68()
    goto L68_;
  } else {
  // L69(xy5)
    Rsh_Fir_reg_xy7_ = Rsh_Fir_reg_xy5_;
    goto L69_;
  }

L67_:;
  // st y = dx3
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard5 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L68_:;
  // dr2 = tryDispatchBuiltin.1("$", xy5)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_xy5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args58);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if dc1 then L70() else L69(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L70()
    goto L70_;
  } else {
  // L69(dr2)
    Rsh_Fir_reg_xy7_ = Rsh_Fir_reg_dr2_;
    goto L69_;
  }

L69_:;
  // r24 = `$`(xy7, <sym y>)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_xy7_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L67(r24)
  // L67(r24)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r24_;
  goto L67_;

L70_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L67(dx2)
  // L67(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L67_;

L71_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L73() else D9()
  // L73()
  goto L73_;

L72_:;
  // r25 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L16(r25)
  // L16(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L16_;

D9_:;
  // deopt 38 [x7]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L73_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r27 = dyn length2(x8)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L74() else D10()
  // L74()
  goto L74_;

D10_:;
  // deopt 41 [r27]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L16(r27)
  // L16(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L16_;

L75_:;
  // pos1 = ld pos
  Rsh_Fir_reg_pos1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L76() else D11()
  // L76()
  goto L76_;

D11_:;
  // deopt 44 [pos1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_pos1_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L76_:;
  // pos2 = force? pos1
  Rsh_Fir_reg_pos2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos1_);
  // checkMissing(pos2)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_pos2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // r29 = `!`(pos2)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_pos2_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if c4 then L77() else L18(c4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L77()
    goto L77_;
  } else {
  // L18(c4)
    Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c4_;
    goto L18_;
  }

L77_:;
  // order1 = ld order
  Rsh_Fir_reg_order1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L78() else D12()
  // L78()
  goto L78_;

D12_:;
  // deopt 47 [c4, order1]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_order1_;
  Rsh_Fir_deopt(47, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L78_:;
  // order2 = force? order1
  Rsh_Fir_reg_order2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order1_);
  // checkMissing(order2)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_order2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // r30 = `!`(order2)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_order2_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // c8 = `&&`(c4, c7)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // goto L18(c8)
  // L18(c8)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c8_;
  goto L18_;

L80_:;
  // numeric = ldf numeric
  Rsh_Fir_reg_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L81() else D13()
  // L81()
  goto L81_;

D13_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L81_:;
  // r31 = dyn numeric()
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric, 0, NULL, NULL, CCP, RHO);
  // check L82() else D14()
  // L82()
  goto L82_;

D14_:;
  // deopt 53 [r31]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L82_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r31
  return Rsh_Fir_reg_r31_;

L85_:;
  // numeric1 = ldf numeric
  Rsh_Fir_reg_numeric1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L87() else D15()
  // L87()
  goto L87_;

L86_:;
  // r34 = dyn base6[ind](<lang numeric()>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L21(r34)
  // L21(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L21_;

D15_:;
  // deopt 58 []
  Rsh_Fir_deopt(58, 0, NULL, CCP, RHO);
  return R_NilValue;

L87_:;
  // r36 = dyn numeric1()
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric1_, 0, NULL, NULL, CCP, RHO);
  // check L88() else D16()
  // L88()
  goto L88_;

D16_:;
  // deopt 59 [r36]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L88_:;
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r37 = dyn list1(r36)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L89() else D17()
  // L89()
  goto L89_;

D17_:;
  // deopt 62 [r37]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L89_:;
  // goto L21(r37)
  // L21(r37)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r37_;
  goto L21_;

D18_:;
  // deopt 64 [pos3]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_pos3_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L90_:;
  // pos4 = force? pos3
  Rsh_Fir_reg_pos4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos3_);
  // checkMissing(pos4)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_pos4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // c11 = `as.logical`(pos4)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_pos4_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if c11 then L91() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L91()
    goto L91_;
  } else {
  // L22()
    goto L22_;
  }

L91_:;
  // numeric2 = ldf numeric
  Rsh_Fir_reg_numeric2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L92() else D19()
  // L92()
  goto L92_;

D19_:;
  // deopt 67 []
  Rsh_Fir_deopt(67, 0, NULL, CCP, RHO);
  return R_NilValue;

L92_:;
  // r38 = dyn numeric2()
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric2_, 0, NULL, NULL, CCP, RHO);
  // check L93() else D20()
  // L93()
  goto L93_;

D20_:;
  // deopt 68 [r38]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L93_:;
  // l = ld result
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // c12 = `is.object`(l)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if c12 then L95() else L96(r38, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L95()
    goto L95_;
  } else {
  // L96(r38, l)
    Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r38_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L96_;
  }

L94_:;
  // st result = dx5
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // goto L23()
  // L23()
  goto L23_;

L95_:;
  // dr4 = tryDispatchBuiltin.0("$<-", l, r38)
  SEXP Rsh_Fir_array_args77[3];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args77[2] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args77);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if dc2 then L97() else L96(r38, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L97()
    goto L97_;
  } else {
  // L96(r38, dr4)
    Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r38_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr4_;
    goto L96_;
  }

L96_:;
  // r43 = `$<-`(l2, <sym pos>, r38)
  SEXP Rsh_Fir_array_args79[3];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args79[2] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // goto L94(r40, r43)
  // L94(r40, r43)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r43_;
  goto L94_;

L97_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L94(r38, dx4)
  // L94(r38, dx4)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L94_;

D21_:;
  // deopt 74 [order3]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_order3_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L99_:;
  // order4 = force? order3
  Rsh_Fir_reg_order4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order3_);
  // checkMissing(order4)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_order4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // c13 = `as.logical`(order4)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_order4_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // if c13 then L100() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L100()
    goto L100_;
  } else {
  // L24()
    goto L24_;
  }

L100_:;
  // numeric3 = ldf numeric
  Rsh_Fir_reg_numeric3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L101() else D22()
  // L101()
  goto L101_;

D22_:;
  // deopt 77 []
  Rsh_Fir_deopt(77, 0, NULL, CCP, RHO);
  return R_NilValue;

L101_:;
  // r45 = dyn numeric3()
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric3_, 0, NULL, NULL, CCP, RHO);
  // check L102() else D23()
  // L102()
  goto L102_;

D23_:;
  // deopt 78 [r45]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L102_:;
  // l3 = ld result
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // c14 = `is.object`(l3)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if c14 then L104() else L105(r45, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L104()
    goto L104_;
  } else {
  // L105(r45, l3)
    Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r45_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L105_;
  }

L103_:;
  // st result = dx7
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L25()
  // L25()
  goto L25_;

L104_:;
  // dr6 = tryDispatchBuiltin.0("$<-", l3, r45)
  SEXP Rsh_Fir_array_args84[3];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args84[2] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args84);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if dc3 then L106() else L105(r45, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L106()
    goto L106_;
  } else {
  // L105(r45, dr6)
    Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r45_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr6_;
    goto L105_;
  }

L105_:;
  // r50 = `$<-`(l5, <sym order>, r45)
  SEXP Rsh_Fir_array_args86[3];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args86[2] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // goto L103(r47, r50)
  // L103(r47, r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r50_;
  goto L103_;

L106_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L103(r45, dx6)
  // L103(r45, dx6)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L103_;

D24_:;
  // deopt 84 [result]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_result;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L108_:;
  // result1 = force? result
  Rsh_Fir_reg_result1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result);
  // checkMissing(result1)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_result1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return result1
  return Rsh_Fir_reg_result1_;

L111_:;
  // C_identify = ld C_identify
  Rsh_Fir_reg_C_identify = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // check L113() else D25()
  // L113()
  goto L113_;

L112_:;
  // r53 = dyn base7(<sym C_identify>, <sym x>, <sym y>, <lang as.character(labels)>, <sym n>, <sym plot>, <sym offset>, <sym tolerance>, <sym atpen>)
  SEXP Rsh_Fir_array_args89[9];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args89[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args89[3] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args89[4] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args89[5] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args89[6] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args89[7] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args89[8] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names19[9];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_array_arg_names19[3] = R_MissingArg;
  Rsh_Fir_array_arg_names19[4] = R_MissingArg;
  Rsh_Fir_array_arg_names19[5] = R_MissingArg;
  Rsh_Fir_array_arg_names19[6] = R_MissingArg;
  Rsh_Fir_array_arg_names19[7] = R_MissingArg;
  Rsh_Fir_array_arg_names19[8] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 9, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L27(r53)
  // L27(r53)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L27_;

D25_:;
  // deopt 91 [C_identify]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_C_identify;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L113_:;
  // C_identify1 = force? C_identify
  Rsh_Fir_reg_C_identify1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_identify);
  // checkMissing(C_identify1)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_C_identify1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L114() else D26()
  // L114()
  goto L114_;

D26_:;
  // deopt 93 [x9]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L114_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // y3 = ld y
  Rsh_Fir_reg_y3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L115() else D27()
  // L115()
  goto L115_;

D27_:;
  // deopt 95 [y3]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L115_:;
  // y4 = force? y3
  Rsh_Fir_reg_y4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y3_);
  // checkMissing(y4)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_y4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // sym8 = ldf `as.character`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base8 = ldf `as.character` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args93);
  // if guard8 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

L116_:;
  // labels1 = ld labels
  Rsh_Fir_reg_labels1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L118() else D28()
  // L118()
  goto L118_;

L117_:;
  // r55 = dyn base8(<sym labels>)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L28(r55)
  // L28(r55)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r55_;
  goto L28_;

D28_:;
  // deopt 99 [labels1]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_labels1_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L118_:;
  // labels2 = force? labels1
  Rsh_Fir_reg_labels2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels1_);
  // checkMissing(labels2)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_labels2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r57 = dyn as_character(labels2)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_labels2_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L119() else D29()
  // L119()
  goto L119_;

D29_:;
  // deopt 102 [r57]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L119_:;
  // goto L28(r57)
  // L28(r57)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r57_;
  goto L28_;

D30_:;
  // deopt 103 [n1]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L120_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // plot1 = ld plot
  Rsh_Fir_reg_plot1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L121() else D31()
  // L121()
  goto L121_;

D31_:;
  // deopt 105 [plot1]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_plot1_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L121_:;
  // plot2 = force? plot1
  Rsh_Fir_reg_plot2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_plot1_);
  // checkMissing(plot2)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_plot2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // offset1 = ld offset
  Rsh_Fir_reg_offset1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L122() else D32()
  // L122()
  goto L122_;

D32_:;
  // deopt 107 [offset1]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_offset1_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L122_:;
  // offset2 = force? offset1
  Rsh_Fir_reg_offset2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_offset1_);
  // checkMissing(offset2)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_offset2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // tolerance1 = ld tolerance
  Rsh_Fir_reg_tolerance1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L123() else D33()
  // L123()
  goto L123_;

D33_:;
  // deopt 109 [tolerance1]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_tolerance1_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L123_:;
  // tolerance2 = force? tolerance1
  Rsh_Fir_reg_tolerance2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tolerance1_);
  // checkMissing(tolerance2)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_tolerance2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // atpen1 = ld atpen
  Rsh_Fir_reg_atpen1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L124() else D34()
  // L124()
  goto L124_;

D34_:;
  // deopt 111 [atpen1]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_atpen1_;
  Rsh_Fir_deopt(111, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L124_:;
  // atpen2 = force? atpen1
  Rsh_Fir_reg_atpen2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_atpen1_);
  // checkMissing(atpen2)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_atpen2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // _External2 = ldf `.External2` in base
  Rsh_Fir_reg__External2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r58 = dyn _External2(C_identify1, x10, y4, r56, n2, plot2, offset2, tolerance2, atpen2)
  SEXP Rsh_Fir_array_args102[9];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_C_identify1_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_array_args102[2] = Rsh_Fir_reg_y4_;
  Rsh_Fir_array_args102[3] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_args102[4] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_args102[5] = Rsh_Fir_reg_plot2_;
  Rsh_Fir_array_args102[6] = Rsh_Fir_reg_offset2_;
  Rsh_Fir_array_args102[7] = Rsh_Fir_reg_tolerance2_;
  Rsh_Fir_array_args102[8] = Rsh_Fir_reg_atpen2_;
  SEXP Rsh_Fir_array_arg_names22[9];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_array_arg_names22[4] = R_MissingArg;
  Rsh_Fir_array_arg_names22[5] = R_MissingArg;
  Rsh_Fir_array_arg_names22[6] = R_MissingArg;
  Rsh_Fir_array_arg_names22[7] = R_MissingArg;
  Rsh_Fir_array_arg_names22[8] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External2_, 9, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L125() else D35()
  // L125()
  goto L125_;

D35_:;
  // deopt 114 [r58]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L125_:;
  // goto L27(r58)
  // L27(r58)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r58_;
  goto L27_;

L126_:;
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L128() else D36()
  // L128()
  goto L128_;

L127_:;
  // r59 = dyn base9(<lang `[[`(z, 1)>)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L29(r59)
  // L29(r59)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L29_;

D36_:;
  // deopt 118 [z]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L128_:;
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(z1)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if c15 then L129() else L130(z1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L129()
    goto L129_;
  } else {
  // L130(z1)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_z1_;
    goto L130_;
  }

L129_:;
  // dr8 = tryDispatchBuiltin.1("[[", z1)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args106);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // if dc4 then L131() else L130(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L131()
    goto L131_;
  } else {
  // L130(dr8)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_dr8_;
    goto L130_;
  }

L130_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r61 = dyn __(z3, 1)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_z3_;
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L30(r61)
  // L30(r61)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r61_;
  goto L30_;

L131_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // goto L30(dx8)
  // L30(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L30_;

D37_:;
  // deopt 124 [r62]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L132_:;
  // goto L29(r62)
  // L29(r62)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r62_;
  goto L29_;

L133_:;
  // dr10 = tryDispatchBuiltin.1("[", r60)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args110);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // if dc5 then L135() else L134(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L135()
    goto L135_;
  } else {
  // L134(dr10)
    Rsh_Fir_reg_r64_ = Rsh_Fir_reg_dr10_;
    goto L134_;
  }

L134_:;
  // z4 = ld z
  Rsh_Fir_reg_z4_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L136() else D38()
  // L136()
  goto L136_;

L135_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // goto L31(dx10)
  // L31(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L31_;

D38_:;
  // deopt 125 [r64, z4]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_z4_;
  Rsh_Fir_deopt(125, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L136_:;
  // z5 = force? z4
  Rsh_Fir_reg_z5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z4_);
  // checkMissing(z5)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_z5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(z5)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_z5_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if c17 then L137() else L138(r64, z5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L137()
    goto L137_;
  } else {
  // L138(r64, z5)
    Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r64_;
    Rsh_Fir_reg_z7_ = Rsh_Fir_reg_z5_;
    goto L138_;
  }

L137_:;
  // dr12 = tryDispatchBuiltin.1("[[", z5)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_z5_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args115);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // if dc6 then L139() else L138(r64, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L139()
    goto L139_;
  } else {
  // L138(r64, dr12)
    Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r64_;
    Rsh_Fir_reg_z7_ = Rsh_Fir_reg_dr12_;
    goto L138_;
  }

L138_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r69 = dyn __1(z7, 1)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_z7_;
  Rsh_Fir_array_args117[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L32(r66, r69)
  // L32(r66, r69)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r69_;
  goto L32_;

L139_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // goto L32(r64, dx12)
  // L32(r64, dx12)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L32_;

D39_:;
  // deopt 132 [pos5]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_pos5_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L140_:;
  // pos6 = force? pos5
  Rsh_Fir_reg_pos6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos5_);
  // checkMissing(pos6)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_pos6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // r71 = `!`(pos6)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_pos6_;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // c18 = `as.logical`(r71)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if c18 then L141() else L33(c18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L141()
    goto L141_;
  } else {
  // L33(c18)
    Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c18_;
    goto L33_;
  }

L141_:;
  // order5 = ld order
  Rsh_Fir_reg_order5_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L142() else D40()
  // L142()
  goto L142_;

D40_:;
  // deopt 135 [c18, order5]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_order5_;
  Rsh_Fir_deopt(135, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L142_:;
  // order6 = force? order5
  Rsh_Fir_reg_order6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order5_);
  // checkMissing(order6)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_order6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // r72 = `!`(order6)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_order6_;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // c21 = `as.logical`(r72)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // c22 = `&&`(c18, c21)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // goto L33(c22)
  // L33(c22)
  Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c22_;
  goto L33_;

L144_:;
  // i = ld i
  Rsh_Fir_reg_i = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L145() else D41()
  // L145()
  goto L145_;

D41_:;
  // deopt 139 [i]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_i;
  Rsh_Fir_deopt(139, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L145_:;
  // i1 = force? i
  Rsh_Fir_reg_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i);
  // checkMissing(i1)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_i1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return i1
  return Rsh_Fir_reg_i1_;

L147_:;
  // i2 = ld i
  Rsh_Fir_reg_i2_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L149() else D42()
  // L149()
  goto L149_;

L148_:;
  // r73 = dyn base10[ind](<sym i>)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L35(r73)
  // L35(r73)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r73_;
  goto L35_;

D42_:;
  // deopt 143 [i2]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L149_:;
  // i3 = force? i2
  Rsh_Fir_reg_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i2_);
  // checkMissing(i3)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_i3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // list2 = ldf list in base
  Rsh_Fir_reg_list2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r75 = dyn list2(i3)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_i3_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2_, 1, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L150() else D43()
  // L150()
  goto L150_;

D43_:;
  // deopt 147 [r75]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(147, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L150_:;
  // goto L35(r75)
  // L35(r75)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r75_;
  goto L35_;

D44_:;
  // deopt 149 [pos7]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_pos7_;
  Rsh_Fir_deopt(149, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L151_:;
  // pos8 = force? pos7
  Rsh_Fir_reg_pos8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos7_);
  // checkMissing(pos8)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_pos8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // c25 = `as.logical`(pos8)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_pos8_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // if c25 then L152() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L152()
    goto L152_;
  } else {
  // L36()
    goto L36_;
  }

L152_:;
  // z8 = ld z
  Rsh_Fir_reg_z8_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L153() else D45()
  // L153()
  goto L153_;

D45_:;
  // deopt 151 [z8]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_z8_;
  Rsh_Fir_deopt(151, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L153_:;
  // z9 = force? z8
  Rsh_Fir_reg_z9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z8_);
  // checkMissing(z9)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_z9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty()));
  // c26 = `is.object`(z9)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_z9_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // if c26 then L154() else L155(z9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L154()
    goto L154_;
  } else {
  // L155(z9)
    Rsh_Fir_reg_z11_ = Rsh_Fir_reg_z9_;
    goto L155_;
  }

L154_:;
  // dr14 = tryDispatchBuiltin.1("[[", z9)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_z9_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args134);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // if dc7 then L156() else L155(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L156()
    goto L156_;
  } else {
  // L155(dr14)
    Rsh_Fir_reg_z11_ = Rsh_Fir_reg_dr14_;
    goto L155_;
  }

L155_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r76 = dyn __3(z11, 2)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_z11_;
  Rsh_Fir_array_args136[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args136, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L37(r76)
  // L37(r76)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r76_;
  goto L37_;

L156_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // goto L37(dx14)
  // L37(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L37_;

L157_:;
  // dr16 = tryDispatchBuiltin.1("[", dx15)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args138);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // if dc8 then L159() else L158(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L159()
    goto L159_;
  } else {
  // L158(dr16)
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dr16_;
    goto L158_;
  }

L158_:;
  // z12 = ld z
  Rsh_Fir_reg_z12_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L160() else D46()
  // L160()
  goto L160_;

L159_:;
  // dx18 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // goto L38(dx18)
  // L38(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L38_;

D46_:;
  // deopt 156 [dx17, z12]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_z12_;
  Rsh_Fir_deopt(156, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L160_:;
  // z13 = force? z12
  Rsh_Fir_reg_z13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z12_);
  // checkMissing(z13)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_z13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // c28 = `is.object`(z13)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_z13_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // if c28 then L161() else L162(dx17, z13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L161()
    goto L161_;
  } else {
  // L162(dx17, z13)
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx17_;
    Rsh_Fir_reg_z15_ = Rsh_Fir_reg_z13_;
    goto L162_;
  }

L161_:;
  // dr18 = tryDispatchBuiltin.1("[[", z13)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_z13_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args143);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // if dc9 then L163() else L162(dx17, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L163()
    goto L163_;
  } else {
  // L162(dx17, dr18)
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx17_;
    Rsh_Fir_reg_z15_ = Rsh_Fir_reg_dr18_;
    goto L162_;
  }

L162_:;
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r77 = dyn __4(z15, 1)
  SEXP Rsh_Fir_array_args145[2];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_z15_;
  Rsh_Fir_array_args145[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L39(dx21, r77)
  // L39(dx21, r77)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx21_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r77_;
  goto L39_;

L163_:;
  // dx23 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // goto L39(dx17, dx23)
  // L39(dx17, dx23)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx23_;
  goto L39_;

L164_:;
  // st result = dx31
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_dx31_, RHO);
  (void)(Rsh_Fir_reg_dx31_);
  // goto L40()
  // L40()
  goto L40_;

L165_:;
  // dr20 = tryDispatchBuiltin.0("$<-", l6, dx19)
  SEXP Rsh_Fir_array_args147[3];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args147[2] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args147);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // if dc10 then L167() else L166(dx19, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L167()
    goto L167_;
  } else {
  // L166(dx19, dr20)
    Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx19_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr20_;
    goto L166_;
  }

L166_:;
  // r79 = `$<-`(l8, <sym pos>, dx19)
  SEXP Rsh_Fir_array_args149[3];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args149[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args149[2] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty());
  // goto L164(dx27, r79)
  // L164(dx27, r79)
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_dx27_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r79_;
  goto L164_;

L167_:;
  // dx29 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty());
  // goto L164(dx19, dx29)
  // L164(dx19, dx29)
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_dx19_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx29_;
  goto L164_;

D47_:;
  // deopt 167 [order7]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_order7_;
  Rsh_Fir_deopt(167, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L169_:;
  // order8 = force? order7
  Rsh_Fir_reg_order8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_order7_);
  // checkMissing(order8)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_order8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty()));
  // c30 = `as.logical`(order8)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_order8_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty());
  // if c30 then L170() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L170()
    goto L170_;
  } else {
  // L41()
    goto L41_;
  }

L170_:;
  // z16 = ld z
  Rsh_Fir_reg_z16_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L171() else D48()
  // L171()
  goto L171_;

D48_:;
  // deopt 169 [z16]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_z16_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L171_:;
  // z17 = force? z16
  Rsh_Fir_reg_z17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z16_);
  // checkMissing(z17)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_z17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(z17)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_z17_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // if c31 then L172() else L173(z17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L172()
    goto L172_;
  } else {
  // L173(z17)
    Rsh_Fir_reg_z19_ = Rsh_Fir_reg_z17_;
    goto L173_;
  }

L172_:;
  // dr22 = tryDispatchBuiltin.1("[[", z17)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args155[1] = Rsh_Fir_reg_z17_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args155);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty());
  // if dc11 then L174() else L173(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L174()
    goto L174_;
  } else {
  // L173(dr22)
    Rsh_Fir_reg_z19_ = Rsh_Fir_reg_dr22_;
    goto L173_;
  }

L173_:;
  // __6 = ldf `[[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r80 = dyn __6(z19, 3)
  SEXP Rsh_Fir_array_args157[2];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_z19_;
  Rsh_Fir_array_args157[1] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L42(r80)
  // L42(r80)
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_r80_;
  goto L42_;

L174_:;
  // dx33 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty());
  // goto L42(dx33)
  // L42(dx33)
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_dx33_;
  goto L42_;

L175_:;
  // dr24 = tryDispatchBuiltin.1("[", dx34)
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args159[1] = Rsh_Fir_reg_dx34_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args159);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty());
  // if dc12 then L177() else L176(dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L177()
    goto L177_;
  } else {
  // L176(dr24)
    Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_dr24_;
    goto L176_;
  }

L176_:;
  // z20 = ld z
  Rsh_Fir_reg_z20_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L178() else D49()
  // L178()
  goto L178_;

L177_:;
  // dx37 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty());
  // goto L43(dx37)
  // L43(dx37)
  Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_dx37_;
  goto L43_;

D49_:;
  // deopt 174 [dx36, z20]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_dx36_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_z20_;
  Rsh_Fir_deopt(174, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L178_:;
  // z21 = force? z20
  Rsh_Fir_reg_z21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z20_);
  // checkMissing(z21)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_z21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty()));
  // c33 = `is.object`(z21)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_z21_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // if c33 then L179() else L180(dx36, z21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L179()
    goto L179_;
  } else {
  // L180(dx36, z21)
    Rsh_Fir_reg_dx40_ = Rsh_Fir_reg_dx36_;
    Rsh_Fir_reg_z23_ = Rsh_Fir_reg_z21_;
    goto L180_;
  }

L179_:;
  // dr26 = tryDispatchBuiltin.1("[[", z21)
  SEXP Rsh_Fir_array_args164[2];
  Rsh_Fir_array_args164[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args164[1] = Rsh_Fir_reg_z21_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args164);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty());
  // if dc13 then L181() else L180(dx36, dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L181()
    goto L181_;
  } else {
  // L180(dx36, dr26)
    Rsh_Fir_reg_dx40_ = Rsh_Fir_reg_dx36_;
    Rsh_Fir_reg_z23_ = Rsh_Fir_reg_dr26_;
    goto L180_;
  }

L180_:;
  // __7 = ldf `[[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r81 = dyn __7(z23, 1)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_z23_;
  Rsh_Fir_array_args166[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args166, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L44(dx40, r81)
  // L44(dx40, r81)
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx40_;
  Rsh_Fir_reg_dx44_ = Rsh_Fir_reg_r81_;
  goto L44_;

L181_:;
  // dx42 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty());
  // goto L44(dx36, dx42)
  // L44(dx36, dx42)
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx36_;
  Rsh_Fir_reg_dx44_ = Rsh_Fir_reg_dx42_;
  goto L44_;

L182_:;
  // st result = dx50
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_dx50_, RHO);
  (void)(Rsh_Fir_reg_dx50_);
  // goto L45()
  // L45()
  goto L45_;

L183_:;
  // dr28 = tryDispatchBuiltin.0("$<-", l9, dx38)
  SEXP Rsh_Fir_array_args168[3];
  Rsh_Fir_array_args168[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args168[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args168[2] = Rsh_Fir_reg_dx38_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args168);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // if dc14 then L185() else L184(dx38, dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L185()
    goto L185_;
  } else {
  // L184(dx38, dr28)
    Rsh_Fir_reg_dx46_ = Rsh_Fir_reg_dx38_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_dr28_;
    goto L184_;
  }

L184_:;
  // r83 = `$<-`(l11, <sym order>, dx38)
  SEXP Rsh_Fir_array_args170[3];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args170[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args170[2] = Rsh_Fir_reg_dx38_;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty());
  // goto L182(dx46, r83)
  // L182(dx46, r83)
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_dx46_;
  Rsh_Fir_reg_dx50_ = Rsh_Fir_reg_r83_;
  goto L182_;

L185_:;
  // dx48 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx48_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty());
  // goto L182(dx38, dx48)
  // L182(dx38, dx48)
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_dx38_;
  Rsh_Fir_reg_dx50_ = Rsh_Fir_reg_dx48_;
  goto L182_;

D50_:;
  // deopt 185 [result2]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_result2_;
  Rsh_Fir_deopt(185, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L187_:;
  // result3 = force? result2
  Rsh_Fir_reg_result3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result2_);
  // checkMissing(result3)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_result3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return result3
  return Rsh_Fir_reg_result3_;
}
SEXP Rsh_Fir_user_promise_inner2747511849_(SEXP CCP, SEXP RHO) {
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
  // r2 = seq_along(x2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2747511849_1(SEXP CCP, SEXP RHO) {
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r5
  return Rsh_Fir_reg_r5_;

L1_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r6 = dyn length(x4)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L0_;

L2_:;
  // r4 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2747511849_2(SEXP CCP, SEXP RHO) {
  // extras = ld extras
  Rsh_Fir_reg_extras = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // extras1 = force? extras
  Rsh_Fir_reg_extras1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_extras);
  // checkMissing(extras1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_extras1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return extras1
  return Rsh_Fir_reg_extras1_;
}
SEXP Rsh_Fir_user_promise_inner2747511849_3(SEXP CCP, SEXP RHO) {
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner2747511849_4(SEXP CCP, SEXP RHO) {
  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return y2
  return Rsh_Fir_reg_y2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
