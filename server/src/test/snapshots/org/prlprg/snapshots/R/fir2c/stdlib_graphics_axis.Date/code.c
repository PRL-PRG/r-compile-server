#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2605558301_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2605558301_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2605558301_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2605558301_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2605558301_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2605558301_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2605558301_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2605558301_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2605558301_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2605558301_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2605558301_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2605558301_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2605558301_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2605558301_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2605558301_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2605558301_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2605558301_14(SEXP CCP, SEXP RHO);
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
  // r = clos inner2605558301
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2605558301_, RHO, CCP);
  // st `axis.Date` = r
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
SEXP Rsh_Fir_user_function_inner2605558301_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2605558301 dynamic dispatch ([side, x, at, format, labels, `...`])

  return Rsh_Fir_user_version_inner2605558301_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2605558301_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2605558301 version 0 (*, *, *, *, *, dots -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner2605558301/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_side;  // side
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_at;  // at
  SEXP Rsh_Fir_reg_format;  // format
  SEXP Rsh_Fir_reg_labels;  // labels
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_labels_isMissing;  // labels_isMissing
  SEXP Rsh_Fir_reg_labels_orDefault;  // labels_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_at1_;  // at1
  SEXP Rsh_Fir_reg_at2_;  // at2
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_sort;  // sort
  SEXP Rsh_Fir_reg_par;  // par
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_side1_;  // side1
  SEXP Rsh_Fir_reg_side2_;  // side2
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_range;  // range
  SEXP Rsh_Fir_reg_range1_;  // range1
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_range3_;  // range3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_range4_;  // range4
  SEXP Rsh_Fir_reg_range5_;  // range5
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_range7_;  // range7
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_range8_;  // range8
  SEXP Rsh_Fir_reg_range9_;  // range9
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_has_at;  // has_at
  SEXP Rsh_Fir_reg_has_at1_;  // has_at1
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_at3_;  // at3
  SEXP Rsh_Fir_reg_at4_;  // at4
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_class__1_;  // class__1
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_as_Date;  // as_Date
  SEXP Rsh_Fir_reg_at5_;  // at5
  SEXP Rsh_Fir_reg_at6_;  // at6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_at7_;  // at7
  SEXP Rsh_Fir_reg_at8_;  // at8
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_at10_;  // at10
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_at13_;  // at13
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_at14_;  // at14
  SEXP Rsh_Fir_reg_at15_;  // at15
  SEXP Rsh_Fir_reg_is_finite;  // is_finite
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_missing1_;  // missing1
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_missing2_;  // missing2
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_extendDateTimeFormat;  // extendDateTimeFormat
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_extendDateTimeFormat1_;  // extendDateTimeFormat1
  SEXP Rsh_Fir_reg_rangeDate;  // rangeDate
  SEXP Rsh_Fir_reg_rangeDate1_;  // rangeDate1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_z2_;  // z2
  SEXP Rsh_Fir_reg_z3_;  // z3
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_rangeDate2_;  // rangeDate2
  SEXP Rsh_Fir_reg_rangeDate3_;  // rangeDate3
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_par1_;  // par1
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_side3_;  // side3
  SEXP Rsh_Fir_reg_side4_;  // side4
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_missing3_;  // missing3
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_z4_;  // z4
  SEXP Rsh_Fir_reg_z5_;  // z5
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_z6_;  // z6
  SEXP Rsh_Fir_reg_z7_;  // z7
  SEXP Rsh_Fir_reg_range10_;  // range10
  SEXP Rsh_Fir_reg_range11_;  // range11
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_z9_;  // z9
  SEXP Rsh_Fir_reg_range13_;  // range13
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_z11_;  // z11
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_z12_;  // z12
  SEXP Rsh_Fir_reg_z13_;  // z13
  SEXP Rsh_Fir_reg_range14_;  // range14
  SEXP Rsh_Fir_reg_range15_;  // range15
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_z15_;  // z15
  SEXP Rsh_Fir_reg_range17_;  // range17
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_z17_;  // z17
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_z18_;  // z18
  SEXP Rsh_Fir_reg_z19_;  // z19
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_z21_;  // z21
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_keep;  // keep
  SEXP Rsh_Fir_reg_keep1_;  // keep1
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_labels1_;  // labels1
  SEXP Rsh_Fir_reg_labels2_;  // labels2
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_labels3_;  // labels3
  SEXP Rsh_Fir_reg_labels4_;  // labels4
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_labels6_;  // labels6
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_keep2_;  // keep2
  SEXP Rsh_Fir_reg_keep3_;  // keep3
  SEXP Rsh_Fir_reg___10_;  // __10
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_isTRUE;  // isTRUE
  SEXP Rsh_Fir_reg_labels7_;  // labels7
  SEXP Rsh_Fir_reg_labels8_;  // labels8
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_format1_;  // format1
  SEXP Rsh_Fir_reg_z22_;  // z22
  SEXP Rsh_Fir_reg_z23_;  // z23
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_format2_;  // format2
  SEXP Rsh_Fir_reg_format3_;  // format3
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_isFALSE;  // isFALSE
  SEXP Rsh_Fir_reg_labels9_;  // labels9
  SEXP Rsh_Fir_reg_labels10_;  // labels10
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_rep;  // rep
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_axis;  // axis
  SEXP Rsh_Fir_reg_side5_;  // side5
  SEXP Rsh_Fir_reg_side6_;  // side6
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_z24_;  // z24
  SEXP Rsh_Fir_reg_z25_;  // z25
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_labels11_;  // labels11
  SEXP Rsh_Fir_reg_labels12_;  // labels12
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r108_;  // r108

  // Bind parameters
  Rsh_Fir_reg_side = PARAMS[0];
  Rsh_Fir_reg_x = PARAMS[1];
  Rsh_Fir_reg_at = PARAMS[2];
  Rsh_Fir_reg_format = PARAMS[3];
  Rsh_Fir_reg_labels = PARAMS[4];
  Rsh_Fir_reg_ddd = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st side = side
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_side, RHO);
  (void)(Rsh_Fir_reg_side);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st at = at
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_at, RHO);
  (void)(Rsh_Fir_reg_at);
  // st format = format
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_format, RHO);
  (void)(Rsh_Fir_reg_format);
  // labels_isMissing = missing.0(labels)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_labels;
  Rsh_Fir_reg_labels_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if labels_isMissing then L0(TRUE) else L0(labels)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_labels_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_labels_orDefault = Rsh_const(CCP, 5);
    goto L0_;
  } else {
  // L0(labels)
    Rsh_Fir_reg_labels_orDefault = Rsh_Fir_reg_labels;
    goto L0_;
  }

L0_:;
  // st labels = labels_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_labels_orDefault, RHO);
  (void)(Rsh_Fir_reg_labels_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L1_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L38() else L2(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L38()
    goto L38_;
  } else {
  // L2(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c;
    goto L2_;
  }

L2_:;
  // st `has.at` = c2
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_c2_, RHO);
  (void)(Rsh_Fir_reg_c2_);
  // sort = ldf sort
  Rsh_Fir_reg_sort = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L43() else D1()
  // L43()
  goto L43_;

L3_:;
  // r6 = `!`(r5)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c8 = `&&`(c5, c7)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L2(c8)
  // L2(c8)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c8_;
  goto L2_;

L4_:;
  // l = ld range
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // c13 = `is.object`(l)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c13 then L51() else L52(r19, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L51()
    goto L51_;
  } else {
  // L52(r19, l)
    Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r19_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L52_;
  }

L5_:;
  // r21 = ceiling(dx3)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(168, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L4(r21)
  // L4(r21)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r21_;
  goto L4_;

L6_:;
  // st range = dx5
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // sym3 = ldf floor
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base3 = ldf floor in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard3 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L7_:;
  // l3 = ld range
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // c15 = `is.object`(l3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c15 then L60() else L61(r28, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L60()
    goto L60_;
  } else {
  // L61(r28, l3)
    Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r28_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L61_;
  }

L8_:;
  // r30 = floor(dx7)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(167, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L7(r30)
  // L7(r30)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r30_;
  goto L7_;

L9_:;
  // st range = dx9
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // range8 = ld range
  Rsh_Fir_reg_range8_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L63() else D5()
  // L63()
  goto L63_;

L10_:;
  // ___2 = ldf `:::`
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L99() else D22()
  // L99()
  goto L99_;

L11_:;
  // c17 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c17 then L72() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L72()
    goto L72_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // as_Date = ldf `as.Date`
  Rsh_Fir_reg_as_Date = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L76() else D13()
  // L76()
  goto L76_;

L13_:;
  // at7 = ld at
  Rsh_Fir_reg_at7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L78() else D15()
  // L78()
  goto L78_;

L14_:;
  // st z = dx11
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // sym6 = ldf missing
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base6 = ldf missing in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard6 then L86() else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L86()
    goto L86_;
  } else {
  // L87()
    goto L87_;
  }

L15_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r47 = dyn __4(at13, r45)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_at13_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L14(r47)
  // L14(r47)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r47_;
  goto L14_;

L16_:;
  // c19 = `as.logical`(r49)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c19 then L88() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L88()
    goto L88_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // goto L21(NULL)
  // L21(NULL)
  Rsh_Fir_reg_r62_ = Rsh_const(CCP, 17);
  goto L21_;

L18_:;
  // r54 = `!`(r52)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // c20 = `as.logical`(r54)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c20 then L91() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L91()
    goto L91_;
  } else {
  // L19()
    goto L19_;
  }

L19_:;
  // extendDateTimeFormat1 = ldf extendDateTimeFormat
  Rsh_Fir_reg_extendDateTimeFormat1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L95() else D20()
  // L95()
  goto L95_;

L20_:;
  // st format = r58
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r58_, RHO);
  (void)(Rsh_Fir_reg_r58_);
  // goto L21(r58)
  // L21(r58)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r58_;
  goto L21_;

L21_:;
  // goto L22()
  // L22()
  goto L22_;

L22_:;
  // z6 = ld z
  Rsh_Fir_reg_z6_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L110() else D27()
  // L110()
  goto L110_;

L23_:;
  // c22 = `as.logical`(r76)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c22 then L104() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L104()
    goto L104_;
  } else {
  // L24()
    goto L24_;
  }

L24_:;
  // goto L22()
  // L22()
  goto L22_;

L25_:;
  // st format = r79
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r79_, RHO);
  (void)(Rsh_Fir_reg_r79_);
  // goto L22()
  // L22()
  goto L22_;

L26_:;
  // r82 = `>=`(z11, dx15)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_z11_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // z12 = ld z
  Rsh_Fir_reg_z12_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L115() else D29()
  // L115()
  goto L115_;

L27_:;
  // r88 = `<=`(z17, dx17)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_z17_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // r89 = `&&`(r86, r88)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_r88_;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // st keep = r89
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r89_, RHO);
  (void)(Rsh_Fir_reg_r89_);
  // z18 = ld z
  Rsh_Fir_reg_z18_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L120() else D31()
  // L120()
  goto L120_;

L28_:;
  // st z = dx19
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // sym10 = ldf `is.logical`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base10 = ldf `is.logical` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard10 then L125() else L126()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L125()
    goto L125_;
  } else {
  // L126()
    goto L126_;
  }

L29_:;
  // r93 = `!`(r92)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // c27 = `as.logical`(r93)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c27 then L128() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L128()
    goto L128_;
  } else {
  // L30()
    goto L30_;
  }

L30_:;
  // isTRUE = ldf isTRUE
  Rsh_Fir_reg_isTRUE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L135() else D36()
  // L135()
  goto L135_;

L31_:;
  // st labels = dx21
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // goto L32()
  // L32()
  goto L32_;

L32_:;
  // axis = ldf axis
  Rsh_Fir_reg_axis = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L147() else D42()
  // L147()
  goto L147_;

L33_:;
  // isFALSE = ldf isFALSE
  Rsh_Fir_reg_isFALSE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L141() else D40()
  // L141()
  goto L141_;

L34_:;
  // goto L32()
  // L32()
  goto L32_;

L35_:;
  // st labels = r103
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r103_, RHO);
  (void)(Rsh_Fir_reg_r103_);
  // goto L32()
  // L32()
  goto L32_;

L36_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r2 = dyn missing(<sym at>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

L37_:;
  // r = dyn base(<sym at>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

L38_:;
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard1 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L39_:;
  // at1 = ld at
  Rsh_Fir_reg_at1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L41() else D0()
  // L41()
  goto L41_;

L40_:;
  // r4 = dyn base1(<sym at>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(c, r4)
  // L3(c, r4)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L3_;

D0_:;
  // deopt 5 [c, at1]
  SEXP Rsh_Fir_array_deopt_stack[2];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack[1] = Rsh_Fir_reg_at1_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L41_:;
  // at2 = force? at1
  Rsh_Fir_reg_at2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_at1_);
  // checkMissing(at2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_at2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // c6 = `==`(at2, NULL)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_at2_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L3(c, c6)
  // L3(c, c6)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_c6_;
  goto L3_;

D1_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L43_:;
  // p = prom<V +>{
  //   par = ldf par;
  //   r7 = dyn par("usr");
  //   c10 = `is.object`(r7);
  //   if c10 then L3() else L4(r7);
  // L0(dx1):
  //   return dx1;
  // L3():
  //   dr = tryDispatchBuiltin.1("[", r7);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L5() else L4(dr);
  // L4(r9):
  //   side1 = ld side;
  //   side2 = force? side1;
  //   checkMissing(side2);
  //   __ = ldf `%%` in base;
  //   r10 = dyn __(side2, 2.0);
  //   c11 = `as.logical`(r10);
  //   if c11 then L6() else L1();
  // L1():
  //   goto L2(r9, <int 3, 4>);
  // L2(r13, r14):
  //   __1 = ldf `[` in base;
  //   r15 = dyn __1(r13, r14);
  //   goto L0(r15);
  // L5():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // L6():
  //   goto L2(r9, <int 1, 2>);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605558301_, CCP, RHO);
  // r17 = dyn sort(p)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L44() else D2()
  // L44()
  goto L44_;

D2_:;
  // deopt 14 [r17]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L44_:;
  // st range = r17
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // sym2 = ldf ceiling
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base2 = ldf ceiling in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard2 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L45_:;
  // range = ld range
  Rsh_Fir_reg_range = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L47() else D3()
  // L47()
  goto L47_;

L46_:;
  // r18 = dyn base2(<lang `[`(range, 1)>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L4(r18)
  // L4(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L4_;

D3_:;
  // deopt 17 [range]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_range;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L47_:;
  // range1 = force? range
  Rsh_Fir_reg_range1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_range);
  // checkMissing(range1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_range1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(range1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_range1_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c12 then L48() else L49(range1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L48()
    goto L48_;
  } else {
  // L49(range1)
    Rsh_Fir_reg_range3_ = Rsh_Fir_reg_range1_;
    goto L49_;
  }

L48_:;
  // dr2 = tryDispatchBuiltin.1("[", range1)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_range1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args45);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if dc1 then L50() else L49(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L50()
    goto L50_;
  } else {
  // L49(dr2)
    Rsh_Fir_reg_range3_ = Rsh_Fir_reg_dr2_;
    goto L49_;
  }

L49_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r20 = dyn __2(range3, 1)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_range3_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L5(r20)
  // L5(r20)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r20_;
  goto L5_;

L50_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L5(dx2)
  // L5(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L5_;

L51_:;
  // dr4 = tryDispatchBuiltin.0("[<-", l, r19)
  SEXP Rsh_Fir_array_args49[3];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args49[2] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args49);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if dc2 then L53() else L52(r19, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L53()
    goto L53_;
  } else {
  // L52(r19, dr4)
    Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r19_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr4_;
    goto L52_;
  }

L52_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r26 = dyn ___(l2, r19, 1)
  SEXP Rsh_Fir_array_args51[3];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args51[2] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6(r26)
  // L6(r26)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r26_;
  goto L6_;

L53_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L6(dx4)
  // L6(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L6_;

L54_:;
  // range4 = ld range
  Rsh_Fir_reg_range4_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L56() else D4()
  // L56()
  goto L56_;

L55_:;
  // r27 = dyn base3(<lang `[`(range, 2)>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L7(r27)
  // L7(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L7_;

D4_:;
  // deopt 29 [range4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_range4_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L56_:;
  // range5 = force? range4
  Rsh_Fir_reg_range5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_range4_);
  // checkMissing(range5)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_range5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(range5)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_range5_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if c14 then L57() else L58(range5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L57()
    goto L57_;
  } else {
  // L58(range5)
    Rsh_Fir_reg_range7_ = Rsh_Fir_reg_range5_;
    goto L58_;
  }

L57_:;
  // dr6 = tryDispatchBuiltin.1("[", range5)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_range5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args56);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if dc3 then L59() else L58(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L59()
    goto L59_;
  } else {
  // L58(dr6)
    Rsh_Fir_reg_range7_ = Rsh_Fir_reg_dr6_;
    goto L58_;
  }

L58_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r29 = dyn __3(range7, 2)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_range7_;
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L8(r29)
  // L8(r29)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r29_;
  goto L8_;

L59_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L8(dx6)
  // L8(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L8_;

L60_:;
  // dr8 = tryDispatchBuiltin.0("[<-", l3, r28)
  SEXP Rsh_Fir_array_args60[3];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args60[2] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args60);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if dc4 then L62() else L61(r28, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L62()
    goto L62_;
  } else {
  // L61(r28, dr8)
    Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r28_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr8_;
    goto L61_;
  }

L61_:;
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r35 = dyn ___1(l5, r28, 2)
  SEXP Rsh_Fir_array_args62[3];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args62[2] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L9(r35)
  // L9(r35)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r35_;
  goto L9_;

L62_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L9(dx8)
  // L9(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L9_;

D5_:;
  // deopt 40 [range8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_range8_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L63_:;
  // range9 = force? range8
  Rsh_Fir_reg_range9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_range8_);
  // checkMissing(range9)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_range9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // st rangeDate = range9
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_range9_, RHO);
  (void)(Rsh_Fir_reg_range9_);
  // l6 = ld rangeDate
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L64() else D6()
  // L64()
  goto L64_;

D6_:;
  // deopt 46 ["Date", l6, "Date"]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_const(CCP, 41);
  Rsh_Fir_deopt(46, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L64_:;
  // r36 = dyn class__(l6, NULL, "Date")
  SEXP Rsh_Fir_array_args65[3];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args65[2] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L65() else D7()
  // L65()
  goto L65_;

D7_:;
  // deopt 48 ["Date", r36]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L65_:;
  // st rangeDate = r36
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r36_, RHO);
  (void)(Rsh_Fir_reg_r36_);
  // has_at = ld `has.at`
  Rsh_Fir_reg_has_at = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L66() else D8()
  // L66()
  goto L66_;

D8_:;
  // deopt 50 [has_at]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_has_at;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L66_:;
  // has_at1 = force? has_at
  Rsh_Fir_reg_has_at1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_has_at);
  // checkMissing(has_at1)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_has_at1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // c16 = `as.logical`(has_at1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_has_at1_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if c16 then L67() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L67()
    goto L67_;
  } else {
  // L10()
    goto L10_;
  }

L67_:;
  // sym4 = ldf `is.numeric`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base4 = ldf `is.numeric` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args68);
  // if guard4 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L68_:;
  // at3 = ld at
  Rsh_Fir_reg_at3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L70() else D9()
  // L70()
  goto L70_;

L69_:;
  // r37 = dyn base4(<sym at>)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L11(r37)
  // L11(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L11_;

D9_:;
  // deopt 54 [at3]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_at3_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L70_:;
  // at4 = force? at3
  Rsh_Fir_reg_at4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_at3_);
  // checkMissing(at4)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_at4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r39 = dyn is_numeric(at4)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_at4_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L71() else D10()
  // L71()
  goto L71_;

D10_:;
  // deopt 57 [r39]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L71_:;
  // goto L11(r39)
  // L11(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L11_;

L72_:;
  // l7 = ld at
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // class__1 = ldf `class<-`
  Rsh_Fir_reg_class__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L73() else D11()
  // L73()
  goto L73_;

D11_:;
  // deopt 61 ["Date", l7, "Date"]
  SEXP Rsh_Fir_array_deopt_stack10[3];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_const(CCP, 41);
  Rsh_Fir_deopt(61, 3, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L73_:;
  // r40 = dyn class__1(l7, NULL, "Date")
  SEXP Rsh_Fir_array_args72[3];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args72[2] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__1_, 3, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L74() else D12()
  // L74()
  goto L74_;

D12_:;
  // deopt 63 ["Date", r40]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(63, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L74_:;
  // st at = r40
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // goto L13()
  // L13()
  goto L13_;

D13_:;
  // deopt 66 []
  Rsh_Fir_deopt(66, 0, NULL, CCP, RHO);
  return R_NilValue;

L76_:;
  // p1 = prom<V +>{
  //   at5 = ld at;
  //   at6 = force? at5;
  //   checkMissing(at6);
  //   return at6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605558301_1, CCP, RHO);
  // r43 = dyn as_Date(p1)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_Date, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L77() else D14()
  // L77()
  goto L77_;

D14_:;
  // deopt 68 [r43]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L77_:;
  // st at = r43
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // goto L13()
  // L13()
  goto L13_;

D15_:;
  // deopt 70 [at7]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_at7_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L78_:;
  // at8 = force? at7
  Rsh_Fir_reg_at8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_at7_);
  // checkMissing(at8)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_at8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // c18 = `is.object`(at8)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_at8_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if c18 then L79() else L80(at8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L79()
    goto L79_;
  } else {
  // L80(at8)
    Rsh_Fir_reg_at10_ = Rsh_Fir_reg_at8_;
    goto L80_;
  }

L79_:;
  // dr10 = tryDispatchBuiltin.1("[", at8)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_at8_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args77);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if dc5 then L81() else L80(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L81()
    goto L81_;
  } else {
  // L80(dr10)
    Rsh_Fir_reg_at10_ = Rsh_Fir_reg_dr10_;
    goto L80_;
  }

L80_:;
  // sym5 = ldf `is.finite`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base5 = ldf `is.finite` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args79);
  // if guard5 then L82() else L83()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L82()
    goto L82_;
  } else {
  // L83()
    goto L83_;
  }

L81_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L14(dx10)
  // L14(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L14_;

L82_:;
  // at14 = ld at
  Rsh_Fir_reg_at14_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L84() else D16()
  // L84()
  goto L84_;

L83_:;
  // r44 = dyn base5(<sym at>)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L15(at10, r44)
  // L15(at10, r44)
  Rsh_Fir_reg_at13_ = Rsh_Fir_reg_at10_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L15_;

D16_:;
  // deopt 74 [at10, at14]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_at10_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_at14_;
  Rsh_Fir_deopt(74, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L84_:;
  // at15 = force? at14
  Rsh_Fir_reg_at15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_at14_);
  // checkMissing(at15)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_at15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // is_finite = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r46 = dyn is_finite(at15)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_at15_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L85() else D17()
  // L85()
  goto L85_;

D17_:;
  // deopt 77 [at10, r46]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_at10_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(77, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L85_:;
  // goto L15(at10, r46)
  // L15(at10, r46)
  Rsh_Fir_reg_at13_ = Rsh_Fir_reg_at10_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r46_;
  goto L15_;

L86_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r50 = dyn missing1(<sym format>)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L16(r50)
  // L16(r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L16_;

L87_:;
  // r48 = dyn base6(<sym format>)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L16(r48)
  // L16(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L16_;

L88_:;
  // sym7 = ldf missing
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base7 = ldf missing in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args86);
  // if guard7 then L89() else L90()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L89()
    goto L89_;
  } else {
  // L90()
    goto L90_;
  }

L89_:;
  // missing2 = ldf missing in base
  Rsh_Fir_reg_missing2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r53 = dyn missing2(<sym x>)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing2_, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L18(r53)
  // L18(r53)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r53_;
  goto L18_;

L90_:;
  // r51 = dyn base7(<sym x>)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L18(r51)
  // L18(r51)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L18_;

L91_:;
  // extendDateTimeFormat = ldf extendDateTimeFormat
  Rsh_Fir_reg_extendDateTimeFormat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L92() else D18()
  // L92()
  goto L92_;

D18_:;
  // deopt 88 []
  Rsh_Fir_deopt(88, 0, NULL, CCP, RHO);
  return R_NilValue;

L92_:;
  // p2 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605558301_2, CCP, RHO);
  // p3 = prom<V +>{
  //   z = ld z;
  //   z1 = force? z;
  //   checkMissing(z1);
  //   return z1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605558301_3, CCP, RHO);
  // r57 = dyn extendDateTimeFormat(p2, p3)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_extendDateTimeFormat, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L93() else D19()
  // L93()
  goto L93_;

D19_:;
  // deopt 91 [r57]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L93_:;
  // goto L20(r57)
  // L20(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L20_;

D20_:;
  // deopt 93 []
  Rsh_Fir_deopt(93, 0, NULL, CCP, RHO);
  return R_NilValue;

L95_:;
  // p4 = prom<V +>{
  //   rangeDate = ld rangeDate;
  //   rangeDate1 = force? rangeDate;
  //   checkMissing(rangeDate1);
  //   return rangeDate1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605558301_4, CCP, RHO);
  // p5 = prom<V +>{
  //   z2 = ld z;
  //   z3 = force? z2;
  //   checkMissing(z3);
  //   return z3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605558301_5, CCP, RHO);
  // r61 = dyn extendDateTimeFormat1(p4, p5)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_extendDateTimeFormat1_, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L96() else D21()
  // L96()
  goto L96_;

D21_:;
  // deopt 96 [r61]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L96_:;
  // goto L20(r61)
  // L20(r61)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r61_;
  goto L20_;

D22_:;
  // deopt 101 []
  Rsh_Fir_deopt(101, 0, NULL, CCP, RHO);
  return R_NilValue;

L99_:;
  // r64 = dyn ___2("grDevices", "prettyDate")
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L100() else D23()
  // L100()
  goto L100_;

D23_:;
  // deopt 104 [r64]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L100_:;
  // checkFun.0(r64)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r64_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args96));
  // r65 = r64 as cls
  Rsh_Fir_reg_r65_ = Rsh_Fir_cast(Rsh_Fir_reg_r64_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p6 = prom<V +>{
  //   rangeDate2 = ld rangeDate;
  //   rangeDate3 = force? rangeDate2;
  //   checkMissing(rangeDate3);
  //   return rangeDate3;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605558301_6, CCP, RHO);
  // p7 = prom<V +>{
  //   par1 = ldf par;
  //   r67 = dyn par1("lab");
  //   c21 = `is.object`(r67);
  //   if c21 then L1() else L2(r67);
  // L0(dx13):
  //   return dx13;
  // L1():
  //   dr12 = tryDispatchBuiltin.1("[", r67);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L3() else L2(dr12);
  // L2(r69):
  //   side3 = ld side;
  //   side4 = force? side3;
  //   checkMissing(side4);
  //   __5 = ldf `%%` in base;
  //   r70 = dyn __5(side4, 2.0);
  //   r71 = `-`(2.0, r70);
  //   __6 = ldf `[` in base;
  //   r72 = dyn __6(r69, r71);
  //   goto L0(r72);
  // L3():
  //   dx12 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx12);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605558301_7, CCP, RHO);
  // r74 = dyn r65[, n](p6, p7)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r65_, 2, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L101() else D24()
  // L101()
  goto L101_;

D24_:;
  // deopt 109 [r74]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L101_:;
  // st z = r74
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r74_, RHO);
  (void)(Rsh_Fir_reg_r74_);
  // sym8 = ldf missing
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base8 = ldf missing in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args108);
  // if guard8 then L102() else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L102()
    goto L102_;
  } else {
  // L103()
    goto L103_;
  }

L102_:;
  // missing3 = ldf missing in base
  Rsh_Fir_reg_missing3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r77 = dyn missing3(<sym format>)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing3_, 1, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L23(r77)
  // L23(r77)
  Rsh_Fir_reg_r76_ = Rsh_Fir_reg_r77_;
  goto L23_;

L103_:;
  // r75 = dyn base8(<sym format>)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L23(r75)
  // L23(r75)
  Rsh_Fir_reg_r76_ = Rsh_Fir_reg_r75_;
  goto L23_;

L104_:;
  // sym9 = ldf attr
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base9 = ldf attr in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args111);
  // if guard9 then L105() else L106()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L105()
    goto L105_;
  } else {
  // L106()
    goto L106_;
  }

L105_:;
  // z4 = ld z
  Rsh_Fir_reg_z4_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L107() else D25()
  // L107()
  goto L107_;

L106_:;
  // r78 = dyn base9(<sym z>, "format")
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args112[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L25(r78)
  // L25(r78)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r78_;
  goto L25_;

D25_:;
  // deopt 116 [z4]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_z4_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L107_:;
  // z5 = force? z4
  Rsh_Fir_reg_z5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z4_);
  // checkMissing(z5)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_z5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r80 = dyn attr(z5, "format")
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_z5_;
  Rsh_Fir_array_args114[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L108() else D26()
  // L108()
  goto L108_;

D26_:;
  // deopt 120 [r80]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L108_:;
  // goto L25(r80)
  // L25(r80)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r80_;
  goto L25_;

D27_:;
  // deopt 124 [z6]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_z6_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L110_:;
  // z7 = force? z6
  Rsh_Fir_reg_z7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z6_);
  // checkMissing(z7)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_z7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // range10 = ld range
  Rsh_Fir_reg_range10_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L111() else D28()
  // L111()
  goto L111_;

D28_:;
  // deopt 125 [z7, range10]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_z7_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_range10_;
  Rsh_Fir_deopt(125, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L111_:;
  // range11 = force? range10
  Rsh_Fir_reg_range11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_range10_);
  // checkMissing(range11)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_range11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // c23 = `is.object`(range11)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_range11_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // if c23 then L112() else L113(z7, range11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L112()
    goto L112_;
  } else {
  // L113(z7, range11)
    Rsh_Fir_reg_z9_ = Rsh_Fir_reg_z7_;
    Rsh_Fir_reg_range13_ = Rsh_Fir_reg_range11_;
    goto L113_;
  }

L112_:;
  // dr14 = tryDispatchBuiltin.1("[", range11)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_range11_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args118);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // if dc7 then L114() else L113(z7, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L114()
    goto L114_;
  } else {
  // L113(z7, dr14)
    Rsh_Fir_reg_z9_ = Rsh_Fir_reg_z7_;
    Rsh_Fir_reg_range13_ = Rsh_Fir_reg_dr14_;
    goto L113_;
  }

L113_:;
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r81 = dyn __7(range13, 1)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_range13_;
  Rsh_Fir_array_args120[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L26(z9, r81)
  // L26(z9, r81)
  Rsh_Fir_reg_z11_ = Rsh_Fir_reg_z9_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r81_;
  goto L26_;

L114_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // goto L26(z7, dx14)
  // L26(z7, dx14)
  Rsh_Fir_reg_z11_ = Rsh_Fir_reg_z7_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L26_;

D29_:;
  // deopt 130 [r82, z12]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_z12_;
  Rsh_Fir_deopt(130, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L115_:;
  // z13 = force? z12
  Rsh_Fir_reg_z13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z12_);
  // checkMissing(z13)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_z13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // range14 = ld range
  Rsh_Fir_reg_range14_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L116() else D30()
  // L116()
  goto L116_;

D30_:;
  // deopt 131 [r82, z13, range14]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_z13_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_range14_;
  Rsh_Fir_deopt(131, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L116_:;
  // range15 = force? range14
  Rsh_Fir_reg_range15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_range14_);
  // checkMissing(range15)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_range15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // c24 = `is.object`(range15)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_range15_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // if c24 then L117() else L118(r82, z13, range15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L117()
    goto L117_;
  } else {
  // L118(r82, z13, range15)
    Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r82_;
    Rsh_Fir_reg_z15_ = Rsh_Fir_reg_z13_;
    Rsh_Fir_reg_range17_ = Rsh_Fir_reg_range15_;
    goto L118_;
  }

L117_:;
  // dr16 = tryDispatchBuiltin.1("[", range15)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_range15_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args125);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // if dc8 then L119() else L118(r82, z13, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L119()
    goto L119_;
  } else {
  // L118(r82, z13, dr16)
    Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r82_;
    Rsh_Fir_reg_z15_ = Rsh_Fir_reg_z13_;
    Rsh_Fir_reg_range17_ = Rsh_Fir_reg_dr16_;
    goto L118_;
  }

L118_:;
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r87 = dyn __8(range17, 2)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_range17_;
  Rsh_Fir_array_args127[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L27(r84, z15, r87)
  // L27(r84, z15, r87)
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_z17_ = Rsh_Fir_reg_z15_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r87_;
  goto L27_;

L119_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // goto L27(r82, z13, dx16)
  // L27(r82, z13, dx16)
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_z17_ = Rsh_Fir_reg_z13_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L27_;

D31_:;
  // deopt 139 [z18]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_z18_;
  Rsh_Fir_deopt(139, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L120_:;
  // z19 = force? z18
  Rsh_Fir_reg_z19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z18_);
  // checkMissing(z19)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_z19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(z19)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_z19_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // if c25 then L121() else L122(z19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L121()
    goto L121_;
  } else {
  // L122(z19)
    Rsh_Fir_reg_z21_ = Rsh_Fir_reg_z19_;
    goto L122_;
  }

L121_:;
  // dr18 = tryDispatchBuiltin.1("[", z19)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_z19_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args131);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // if dc9 then L123() else L122(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L123()
    goto L123_;
  } else {
  // L122(dr18)
    Rsh_Fir_reg_z21_ = Rsh_Fir_reg_dr18_;
    goto L122_;
  }

L122_:;
  // keep = ld keep
  Rsh_Fir_reg_keep = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L124() else D32()
  // L124()
  goto L124_;

L123_:;
  // dx18 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // goto L28(dx18)
  // L28(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L28_;

D32_:;
  // deopt 141 [z21, keep]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_z21_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_keep;
  Rsh_Fir_deopt(141, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L124_:;
  // keep1 = force? keep
  Rsh_Fir_reg_keep1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep);
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r90 = dyn __9(z21, keep1)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_z21_;
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_keep1_;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L28(r90)
  // L28(r90)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r90_;
  goto L28_;

L125_:;
  // labels1 = ld labels
  Rsh_Fir_reg_labels1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L127() else D33()
  // L127()
  goto L127_;

L126_:;
  // r91 = dyn base10(<sym labels>)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L29(r91)
  // L29(r91)
  Rsh_Fir_reg_r92_ = Rsh_Fir_reg_r91_;
  goto L29_;

D33_:;
  // deopt 146 [labels1]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_labels1_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L127_:;
  // labels2 = force? labels1
  Rsh_Fir_reg_labels2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels1_);
  // checkMissing(labels2)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_labels2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // c26 = `is.logical`(labels2)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_labels2_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(385, CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // goto L29(c26)
  // L29(c26)
  Rsh_Fir_reg_r92_ = Rsh_Fir_reg_c26_;
  goto L29_;

L128_:;
  // labels3 = ld labels
  Rsh_Fir_reg_labels3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L129() else D34()
  // L129()
  goto L129_;

D34_:;
  // deopt 150 [labels3]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_labels3_;
  Rsh_Fir_deopt(150, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L129_:;
  // labels4 = force? labels3
  Rsh_Fir_reg_labels4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels3_);
  // checkMissing(labels4)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_labels4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty()));
  // c28 = `is.object`(labels4)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_labels4_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // if c28 then L130() else L131(labels4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L130()
    goto L130_;
  } else {
  // L131(labels4)
    Rsh_Fir_reg_labels6_ = Rsh_Fir_reg_labels4_;
    goto L131_;
  }

L130_:;
  // dr20 = tryDispatchBuiltin.1("[", labels4)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args140[1] = Rsh_Fir_reg_labels4_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args140);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // if dc10 then L132() else L131(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L132()
    goto L132_;
  } else {
  // L131(dr20)
    Rsh_Fir_reg_labels6_ = Rsh_Fir_reg_dr20_;
    goto L131_;
  }

L131_:;
  // keep2 = ld keep
  Rsh_Fir_reg_keep2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L133() else D35()
  // L133()
  goto L133_;

L132_:;
  // dx20 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // goto L31(dx20)
  // L31(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L31_;

D35_:;
  // deopt 152 [labels6, keep2]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_labels6_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_keep2_;
  Rsh_Fir_deopt(152, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L133_:;
  // keep3 = force? keep2
  Rsh_Fir_reg_keep3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep2_);
  // __10 = ldf `[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r94 = dyn __10(labels6, keep3)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_labels6_;
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_keep3_;
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 2, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L31(r94)
  // L31(r94)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r94_;
  goto L31_;

D36_:;
  // deopt 157 []
  Rsh_Fir_deopt(157, 0, NULL, CCP, RHO);
  return R_NilValue;

L135_:;
  // p8 = prom<V +>{
  //   labels7 = ld labels;
  //   labels8 = force? labels7;
  //   checkMissing(labels8);
  //   return labels8;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605558301_8, CCP, RHO);
  // r96 = dyn isTRUE(p8)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isTRUE, 1, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L136() else D37()
  // L136()
  goto L136_;

D37_:;
  // deopt 159 [r96]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_deopt(159, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L136_:;
  // c29 = `as.logical`(r96)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // if c29 then L137() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L137()
    goto L137_;
  } else {
  // L33()
    goto L33_;
  }

L137_:;
  // format1 = ldf format
  Rsh_Fir_reg_format1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L138() else D38()
  // L138()
  goto L138_;

D38_:;
  // deopt 161 []
  Rsh_Fir_deopt(161, 0, NULL, CCP, RHO);
  return R_NilValue;

L138_:;
  // p9 = prom<V +>{
  //   z22 = ld z;
  //   z23 = force? z22;
  //   checkMissing(z23);
  //   return z23;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605558301_9, CCP, RHO);
  // p10 = prom<V +>{
  //   format2 = ld format;
  //   format3 = force? format2;
  //   checkMissing(format3);
  //   return format3;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605558301_10, CCP, RHO);
  // r99 = dyn format1[, format](p9, p10)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names42[2];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format1_, 2, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L139() else D39()
  // L139()
  goto L139_;

D39_:;
  // deopt 165 [r99]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r99_;
  Rsh_Fir_deopt(165, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L139_:;
  // st labels = r99
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r99_, RHO);
  (void)(Rsh_Fir_reg_r99_);
  // goto L32()
  // L32()
  goto L32_;

D40_:;
  // deopt 168 []
  Rsh_Fir_deopt(168, 0, NULL, CCP, RHO);
  return R_NilValue;

L141_:;
  // p11 = prom<V +>{
  //   labels9 = ld labels;
  //   labels10 = force? labels9;
  //   checkMissing(labels10);
  //   return labels10;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605558301_11, CCP, RHO);
  // r101 = dyn isFALSE(p11)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isFALSE, 1, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L142() else D41()
  // L142()
  goto L142_;

D41_:;
  // deopt 170 [r101]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_deopt(170, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L142_:;
  // c30 = `as.logical`(r101)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty());
  // if c30 then L143() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L143()
    goto L143_;
  } else {
  // L34()
    goto L34_;
  }

L143_:;
  // sym11 = ldf rep
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // base11 = ldf rep in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args153[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args153);
  // if guard11 then L144() else L145()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L144()
    goto L144_;
  } else {
  // L145()
    goto L145_;
  }

L144_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // r104 = dyn rep("", <lang length(z)>)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args154[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args154, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L35(r104)
  // L35(r104)
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r104_;
  goto L35_;

L145_:;
  // r102 = dyn base11("", <lang length(z)>)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args155[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L35(r102)
  // L35(r102)
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r102_;
  goto L35_;

D42_:;
  // deopt 178 []
  Rsh_Fir_deopt(178, 0, NULL, CCP, RHO);
  return R_NilValue;

L147_:;
  // p12 = prom<V +>{
  //   side5 = ld side;
  //   side6 = force? side5;
  //   checkMissing(side6);
  //   return side6;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605558301_12, CCP, RHO);
  // p13 = prom<V +>{
  //   z24 = ld z;
  //   z25 = force? z24;
  //   checkMissing(z25);
  //   return z25;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605558301_13, CCP, RHO);
  // p14 = prom<V +>{
  //   labels11 = ld labels;
  //   labels12 = force? labels11;
  //   checkMissing(labels12);
  //   return labels12;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2605558301_14, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // r108 = dyn axis[, at, labels, `...`](p12, p13, p14, ddd1)
  SEXP Rsh_Fir_array_args159[4];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args159[1] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args159[2] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args159[3] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names46[4];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names46[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names46[3] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_axis, 4, Rsh_Fir_array_args159, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L148() else D43()
  // L148()
  goto L148_;

D43_:;
  // deopt 185 [r108]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_deopt(185, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L148_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r108
  return Rsh_Fir_reg_r108_;
}
SEXP Rsh_Fir_user_promise_inner2605558301_(SEXP CCP, SEXP RHO) {
  // par = ldf par
  Rsh_Fir_reg_par = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // r7 = dyn par("usr")
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names4, CCP, RHO);
  // c10 = `is.object`(r7)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c10 then L3() else L4(r7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L3()
    goto L3_;
  } else {
  // L4(r7)
    Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r7_;
    goto L4_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // goto L2(r9, <int 3, 4>)
  // L2(r9, <int 3, 4>)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r14_ = Rsh_const(CCP, 27);
  goto L2_;

L2_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r15 = dyn __1(r13, r14)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r15_;
  goto L0_;

L3_:;
  // dr = tryDispatchBuiltin.1("[", r7)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args34);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if dc then L5() else L4(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L5()
    goto L5_;
  } else {
  // L4(dr)
    Rsh_Fir_reg_r9_ = Rsh_Fir_reg_dr;
    goto L4_;
  }

L4_:;
  // side1 = ld side
  Rsh_Fir_reg_side1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // side2 = force? side1
  Rsh_Fir_reg_side2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_side1_);
  // checkMissing(side2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_side2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // __ = ldf `%%` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r10 = dyn __(side2, 2.0)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_side2_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names6, CCP, RHO);
  // c11 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c11 then L6() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L6()
    goto L6_;
  } else {
  // L1()
    goto L1_;
  }

L5_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L6_:;
  // goto L2(r9, <int 1, 2>)
  // L2(r9, <int 1, 2>)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r14_ = Rsh_const(CCP, 31);
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner2605558301_1(SEXP CCP, SEXP RHO) {
  // at5 = ld at
  Rsh_Fir_reg_at5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // at6 = force? at5
  Rsh_Fir_reg_at6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_at5_);
  // checkMissing(at6)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_at6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // return at6
  return Rsh_Fir_reg_at6_;
}
SEXP Rsh_Fir_user_promise_inner2605558301_2(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner2605558301_3(SEXP CCP, SEXP RHO) {
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // return z1
  return Rsh_Fir_reg_z1_;
}
SEXP Rsh_Fir_user_promise_inner2605558301_4(SEXP CCP, SEXP RHO) {
  // rangeDate = ld rangeDate
  Rsh_Fir_reg_rangeDate = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // rangeDate1 = force? rangeDate
  Rsh_Fir_reg_rangeDate1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rangeDate);
  // checkMissing(rangeDate1)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_rangeDate1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // return rangeDate1
  return Rsh_Fir_reg_rangeDate1_;
}
SEXP Rsh_Fir_user_promise_inner2605558301_5(SEXP CCP, SEXP RHO) {
  // z2 = ld z
  Rsh_Fir_reg_z2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // z3 = force? z2
  Rsh_Fir_reg_z3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z2_);
  // checkMissing(z3)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_z3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // return z3
  return Rsh_Fir_reg_z3_;
}
SEXP Rsh_Fir_user_promise_inner2605558301_6(SEXP CCP, SEXP RHO) {
  // rangeDate2 = ld rangeDate
  Rsh_Fir_reg_rangeDate2_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // rangeDate3 = force? rangeDate2
  Rsh_Fir_reg_rangeDate3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rangeDate2_);
  // checkMissing(rangeDate3)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_rangeDate3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // return rangeDate3
  return Rsh_Fir_reg_rangeDate3_;
}
SEXP Rsh_Fir_user_promise_inner2605558301_7(SEXP CCP, SEXP RHO) {
  // par1 = ldf par
  Rsh_Fir_reg_par1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // r67 = dyn par1("lab")
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par1_, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names28, CCP, RHO);
  // c21 = `is.object`(r67)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if c21 then L1() else L2(r67)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L1()
    goto L1_;
  } else {
  // L2(r67)
    Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r67_;
    goto L2_;
  }

L0_:;
  // return dx13
  return Rsh_Fir_reg_dx13_;

L1_:;
  // dr12 = tryDispatchBuiltin.1("[", r67)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args100);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if dc6 then L3() else L2(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr12)
    Rsh_Fir_reg_r69_ = Rsh_Fir_reg_dr12_;
    goto L2_;
  }

L2_:;
  // side3 = ld side
  Rsh_Fir_reg_side3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // side4 = force? side3
  Rsh_Fir_reg_side4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_side3_);
  // checkMissing(side4)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_side4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // __5 = ldf `%%` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r70 = dyn __5(side4, 2.0)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_side4_;
  Rsh_Fir_array_args103[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names29, CCP, RHO);
  // r71 = `-`(2.0, r70)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_r70_;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r72 = dyn __6(r69, r71)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L0(r72)
  // L0(r72)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r72_;
  goto L0_;

L3_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // goto L0(dx12)
  // L0(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2605558301_8(SEXP CCP, SEXP RHO) {
  // labels7 = ld labels
  Rsh_Fir_reg_labels7_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // labels8 = force? labels7
  Rsh_Fir_reg_labels8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels7_);
  // checkMissing(labels8)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_labels8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty()));
  // return labels8
  return Rsh_Fir_reg_labels8_;
}
SEXP Rsh_Fir_user_promise_inner2605558301_9(SEXP CCP, SEXP RHO) {
  // z22 = ld z
  Rsh_Fir_reg_z22_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // z23 = force? z22
  Rsh_Fir_reg_z23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z22_);
  // checkMissing(z23)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_z23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty()));
  // return z23
  return Rsh_Fir_reg_z23_;
}
SEXP Rsh_Fir_user_promise_inner2605558301_10(SEXP CCP, SEXP RHO) {
  // format2 = ld format
  Rsh_Fir_reg_format2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // format3 = force? format2
  Rsh_Fir_reg_format3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_format2_);
  // checkMissing(format3)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_format3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // return format3
  return Rsh_Fir_reg_format3_;
}
SEXP Rsh_Fir_user_promise_inner2605558301_11(SEXP CCP, SEXP RHO) {
  // labels9 = ld labels
  Rsh_Fir_reg_labels9_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // labels10 = force? labels9
  Rsh_Fir_reg_labels10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels9_);
  // checkMissing(labels10)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_labels10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // return labels10
  return Rsh_Fir_reg_labels10_;
}
SEXP Rsh_Fir_user_promise_inner2605558301_12(SEXP CCP, SEXP RHO) {
  // side5 = ld side
  Rsh_Fir_reg_side5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // side6 = force? side5
  Rsh_Fir_reg_side6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_side5_);
  // checkMissing(side6)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_side6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // return side6
  return Rsh_Fir_reg_side6_;
}
SEXP Rsh_Fir_user_promise_inner2605558301_13(SEXP CCP, SEXP RHO) {
  // z24 = ld z
  Rsh_Fir_reg_z24_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // z25 = force? z24
  Rsh_Fir_reg_z25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z24_);
  // checkMissing(z25)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_z25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty()));
  // return z25
  return Rsh_Fir_reg_z25_;
}
SEXP Rsh_Fir_user_promise_inner2605558301_14(SEXP CCP, SEXP RHO) {
  // labels11 = ld labels
  Rsh_Fir_reg_labels11_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // labels12 = force? labels11
  Rsh_Fir_reg_labels12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels11_);
  // checkMissing(labels12)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_labels12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // return labels12
  return Rsh_Fir_reg_labels12_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
