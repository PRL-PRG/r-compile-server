#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1404317226_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1404317226_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1404317226_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1404317226_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1404317226_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1404317226_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1404317226_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner1404317226
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1404317226_, RHO, CCP);
  // st `de.restore` = r
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
SEXP Rsh_Fir_user_function_inner1404317226_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1404317226 dynamic dispatch ([inlist, ncols, coltypes, argnames, args])

  return Rsh_Fir_user_version_inner1404317226_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1404317226_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1404317226 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner1404317226/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_inlist;  // inlist
  SEXP Rsh_Fir_reg_ncols;  // ncols
  SEXP Rsh_Fir_reg_coltypes;  // coltypes
  SEXP Rsh_Fir_reg_argnames;  // argnames
  SEXP Rsh_Fir_reg_args;  // args
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_ncols1_;  // ncols1
  SEXP Rsh_Fir_reg_ncols2_;  // ncols2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_vector;  // vector
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_vector1_;  // vector1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_inlist1_;  // inlist1
  SEXP Rsh_Fir_reg_inlist2_;  // inlist2
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_coltypes1_;  // coltypes1
  SEXP Rsh_Fir_reg_coltypes2_;  // coltypes2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_coltypes4_;  // coltypes4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_inlist3_;  // inlist3
  SEXP Rsh_Fir_reg_inlist4_;  // inlist4
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_inlist6_;  // inlist6
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_j;  // j
  SEXP Rsh_Fir_reg_j1_;  // j1
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_matrix;  // matrix
  SEXP Rsh_Fir_reg_tlen;  // tlen
  SEXP Rsh_Fir_reg_tlen1_;  // tlen1
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_ncols3_;  // ncols3
  SEXP Rsh_Fir_reg_ncols4_;  // ncols4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_ncols6_;  // ncols6
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_i24_;  // i24
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_ncol;  // ncol
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_vector2_;  // vector2
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_i27_;  // i27
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_ncols7_;  // ncols7
  SEXP Rsh_Fir_reg_ncols8_;  // ncols8
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_i29_;  // i29
  SEXP Rsh_Fir_reg_ncols10_;  // ncols10
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_i31_;  // i31
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_i32_;  // i32
  SEXP Rsh_Fir_reg_i33_;  // i33
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_i34_;  // i34
  SEXP Rsh_Fir_reg_i35_;  // i35
  SEXP Rsh_Fir_reg_i36_;  // i36
  SEXP Rsh_Fir_reg_i37_;  // i37
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_tlen2_;  // tlen2
  SEXP Rsh_Fir_reg_tlen3_;  // tlen3
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_i46_;  // i46
  SEXP Rsh_Fir_reg_i47_;  // i47
  SEXP Rsh_Fir_reg_tlen6_;  // tlen6
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_inlist7_;  // inlist7
  SEXP Rsh_Fir_reg_inlist8_;  // inlist8
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_i50_;  // i50
  SEXP Rsh_Fir_reg_i51_;  // i51
  SEXP Rsh_Fir_reg_tlen8_;  // tlen8
  SEXP Rsh_Fir_reg_inlist10_;  // inlist10
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_i54_;  // i54
  SEXP Rsh_Fir_reg_i55_;  // i55
  SEXP Rsh_Fir_reg_tlen10_;  // tlen10
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_j2_;  // j2
  SEXP Rsh_Fir_reg_j3_;  // j3
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_inlist11_;  // inlist11
  SEXP Rsh_Fir_reg_inlist12_;  // inlist12
  SEXP Rsh_Fir_reg_inlist13_;  // inlist13
  SEXP Rsh_Fir_reg_inlist14_;  // inlist14
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_i66_;  // i66
  SEXP Rsh_Fir_reg_i67_;  // i67
  SEXP Rsh_Fir_reg_inlist16_;  // inlist16
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_i70_;  // i70
  SEXP Rsh_Fir_reg_i71_;  // i71
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_j4_;  // j4
  SEXP Rsh_Fir_reg_j5_;  // j5
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_i74_;  // i74
  SEXP Rsh_Fir_reg_i75_;  // i75
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_i78_;  // i78
  SEXP Rsh_Fir_reg_i79_;  // i79
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_ind1_;  // ind1
  SEXP Rsh_Fir_reg_ind2_;  // ind2
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_lnames;  // lnames
  SEXP Rsh_Fir_reg_lnames1_;  // lnames1
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_i82_;  // i82
  SEXP Rsh_Fir_reg_i83_;  // i83
  SEXP Rsh_Fir_reg_lnames3_;  // lnames3
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_i86_;  // i86
  SEXP Rsh_Fir_reg_i87_;  // i87
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_j6_;  // j6
  SEXP Rsh_Fir_reg_j7_;  // j7
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_i90_;  // i90
  SEXP Rsh_Fir_reg_i91_;  // i91
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_i94_;  // i94
  SEXP Rsh_Fir_reg_i95_;  // i95
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_ind3_;  // ind3
  SEXP Rsh_Fir_reg_ind4_;  // ind4
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_j8_;  // j8
  SEXP Rsh_Fir_reg_j9_;  // j9
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_nrow;  // nrow
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_nrow1_;  // nrow1
  SEXP Rsh_Fir_reg_args1_;  // args1
  SEXP Rsh_Fir_reg_args2_;  // args2
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_args4_;  // args4
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_i96_;  // i96
  SEXP Rsh_Fir_reg_i97_;  // i97
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_i102_;  // i102
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_args5_;  // args5
  SEXP Rsh_Fir_reg_args6_;  // args6
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_i104_;  // i104
  SEXP Rsh_Fir_reg_args8_;  // args8
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_i106_;  // i106
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_i107_;  // i107
  SEXP Rsh_Fir_reg_i108_;  // i108
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_dimnames;  // dimnames
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_i110_;  // i110
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_i112_;  // i112
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_i113_;  // i113
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_i116_;  // i116
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_cnames;  // cnames
  SEXP Rsh_Fir_reg_cnames1_;  // cnames1
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_i121_;  // i121
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_rn;  // rn
  SEXP Rsh_Fir_reg_rn1_;  // rn1
  SEXP Rsh_Fir_reg_cnames2_;  // cnames2
  SEXP Rsh_Fir_reg_cnames3_;  // cnames3
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_dimnames__;  // dimnames__
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_i122_;  // i122
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_i124_;  // i124
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_i126_;  // i126
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_i127_;  // i127
  SEXP Rsh_Fir_reg_i128_;  // i128
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_argnames1_;  // argnames1
  SEXP Rsh_Fir_reg_argnames2_;  // argnames2
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_i130_;  // i130
  SEXP Rsh_Fir_reg_argnames4_;  // argnames4
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_i132_;  // i132
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_i133_;  // i133
  SEXP Rsh_Fir_reg_i134_;  // i134
  SEXP Rsh_Fir_reg___10_;  // __10
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_i136_;  // i136
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx40_;  // dx40
  SEXP Rsh_Fir_reg_i138_;  // i138
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg_dx42_;  // dx42
  SEXP Rsh_Fir_reg_i139_;  // i139
  SEXP Rsh_Fir_reg_i140_;  // i140
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_i141_;  // i141
  SEXP Rsh_Fir_reg_coltypes5_;  // coltypes5
  SEXP Rsh_Fir_reg_coltypes6_;  // coltypes6
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_i143_;  // i143
  SEXP Rsh_Fir_reg_coltypes8_;  // coltypes8
  SEXP Rsh_Fir_reg_dr30_;  // dr30
  SEXP Rsh_Fir_reg_dc15_;  // dc15
  SEXP Rsh_Fir_reg_dx44_;  // dx44
  SEXP Rsh_Fir_reg_i145_;  // i145
  SEXP Rsh_Fir_reg_dx45_;  // dx45
  SEXP Rsh_Fir_reg_i146_;  // i146
  SEXP Rsh_Fir_reg_i147_;  // i147
  SEXP Rsh_Fir_reg___11_;  // __11
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_i152_;  // i152
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_ncols11_;  // ncols11
  SEXP Rsh_Fir_reg_ncols12_;  // ncols12
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_i154_;  // i154
  SEXP Rsh_Fir_reg_ncols14_;  // ncols14
  SEXP Rsh_Fir_reg_dr32_;  // dr32
  SEXP Rsh_Fir_reg_dc16_;  // dc16
  SEXP Rsh_Fir_reg_dx46_;  // dx46
  SEXP Rsh_Fir_reg_i156_;  // i156
  SEXP Rsh_Fir_reg_dx47_;  // dx47
  SEXP Rsh_Fir_reg_i157_;  // i157
  SEXP Rsh_Fir_reg_i158_;  // i158
  SEXP Rsh_Fir_reg___12_;  // __12
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_vector3_;  // vector3
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_i161_;  // i161
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_ncols15_;  // ncols15
  SEXP Rsh_Fir_reg_ncols16_;  // ncols16
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_i163_;  // i163
  SEXP Rsh_Fir_reg_ncols18_;  // ncols18
  SEXP Rsh_Fir_reg_dr34_;  // dr34
  SEXP Rsh_Fir_reg_dc17_;  // dc17
  SEXP Rsh_Fir_reg_dx48_;  // dx48
  SEXP Rsh_Fir_reg_i165_;  // i165
  SEXP Rsh_Fir_reg_dx49_;  // dx49
  SEXP Rsh_Fir_reg_i166_;  // i166
  SEXP Rsh_Fir_reg_i167_;  // i167
  SEXP Rsh_Fir_reg___13_;  // __13
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_vector4_;  // vector4
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_i170_;  // i170
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_ncols19_;  // ncols19
  SEXP Rsh_Fir_reg_ncols20_;  // ncols20
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_i172_;  // i172
  SEXP Rsh_Fir_reg_ncols22_;  // ncols22
  SEXP Rsh_Fir_reg_dr36_;  // dr36
  SEXP Rsh_Fir_reg_dc18_;  // dc18
  SEXP Rsh_Fir_reg_dx50_;  // dx50
  SEXP Rsh_Fir_reg_i174_;  // i174
  SEXP Rsh_Fir_reg_dx51_;  // dx51
  SEXP Rsh_Fir_reg_i175_;  // i175
  SEXP Rsh_Fir_reg_i176_;  // i176
  SEXP Rsh_Fir_reg___14_;  // __14
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_s2_;  // s2
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_i177_;  // i177
  SEXP Rsh_Fir_reg_i178_;  // i178
  SEXP Rsh_Fir_reg_i179_;  // i179
  SEXP Rsh_Fir_reg_i180_;  // i180
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_inlist17_;  // inlist17
  SEXP Rsh_Fir_reg_inlist18_;  // inlist18
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_i187_;  // i187
  SEXP Rsh_Fir_reg_i188_;  // i188
  SEXP Rsh_Fir_reg_inlist20_;  // inlist20
  SEXP Rsh_Fir_reg_dr38_;  // dr38
  SEXP Rsh_Fir_reg_dc19_;  // dc19
  SEXP Rsh_Fir_reg_dx52_;  // dx52
  SEXP Rsh_Fir_reg_i191_;  // i191
  SEXP Rsh_Fir_reg_i192_;  // i192
  SEXP Rsh_Fir_reg_dx53_;  // dx53
  SEXP Rsh_Fir_reg_j10_;  // j10
  SEXP Rsh_Fir_reg_j11_;  // j11
  SEXP Rsh_Fir_reg___15_;  // __15
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_l16_;  // l16
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_i195_;  // i195
  SEXP Rsh_Fir_reg_i196_;  // i196
  SEXP Rsh_Fir_reg_dx55_;  // dx55
  SEXP Rsh_Fir_reg_l18_;  // l18
  SEXP Rsh_Fir_reg_dr40_;  // dr40
  SEXP Rsh_Fir_reg_dc20_;  // dc20
  SEXP Rsh_Fir_reg_dx57_;  // dx57
  SEXP Rsh_Fir_reg_i199_;  // i199
  SEXP Rsh_Fir_reg_i200_;  // i200
  SEXP Rsh_Fir_reg_dx59_;  // dx59
  SEXP Rsh_Fir_reg_ind5_;  // ind5
  SEXP Rsh_Fir_reg_ind6_;  // ind6
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_lnames4_;  // lnames4
  SEXP Rsh_Fir_reg_lnames5_;  // lnames5
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_i203_;  // i203
  SEXP Rsh_Fir_reg_i204_;  // i204
  SEXP Rsh_Fir_reg_lnames7_;  // lnames7
  SEXP Rsh_Fir_reg_dr42_;  // dr42
  SEXP Rsh_Fir_reg_dc21_;  // dc21
  SEXP Rsh_Fir_reg_dx60_;  // dx60
  SEXP Rsh_Fir_reg_i207_;  // i207
  SEXP Rsh_Fir_reg_i208_;  // i208
  SEXP Rsh_Fir_reg_dx61_;  // dx61
  SEXP Rsh_Fir_reg_j12_;  // j12
  SEXP Rsh_Fir_reg_j13_;  // j13
  SEXP Rsh_Fir_reg___16_;  // __16
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_l19_;  // l19
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_i211_;  // i211
  SEXP Rsh_Fir_reg_i212_;  // i212
  SEXP Rsh_Fir_reg_dx63_;  // dx63
  SEXP Rsh_Fir_reg_l21_;  // l21
  SEXP Rsh_Fir_reg_dr44_;  // dr44
  SEXP Rsh_Fir_reg_dc22_;  // dc22
  SEXP Rsh_Fir_reg_dx65_;  // dx65
  SEXP Rsh_Fir_reg_i215_;  // i215
  SEXP Rsh_Fir_reg_i216_;  // i216
  SEXP Rsh_Fir_reg_dx67_;  // dx67
  SEXP Rsh_Fir_reg_ind7_;  // ind7
  SEXP Rsh_Fir_reg_ind8_;  // ind8
  SEXP Rsh_Fir_reg____3_;  // ___3
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_j14_;  // j14
  SEXP Rsh_Fir_reg_j15_;  // j15
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_i219_;  // i219
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_cnames4_;  // cnames4
  SEXP Rsh_Fir_reg_cnames5_;  // cnames5
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_any1_;  // any1
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_cnames6_;  // cnames6
  SEXP Rsh_Fir_reg_cnames7_;  // cnames7
  SEXP Rsh_Fir_reg_l22_;  // l22
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_i222_;  // i222
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_l23_;  // l23
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_i224_;  // i224
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_l25_;  // l25
  SEXP Rsh_Fir_reg_dr46_;  // dr46
  SEXP Rsh_Fir_reg_dc23_;  // dc23
  SEXP Rsh_Fir_reg_dx68_;  // dx68
  SEXP Rsh_Fir_reg_i226_;  // i226
  SEXP Rsh_Fir_reg_dx69_;  // dx69
  SEXP Rsh_Fir_reg_i227_;  // i227
  SEXP Rsh_Fir_reg_i228_;  // i228
  SEXP Rsh_Fir_reg_____2_;  // ____2
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_argnames5_;  // argnames5
  SEXP Rsh_Fir_reg_argnames6_;  // argnames6
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_i230_;  // i230
  SEXP Rsh_Fir_reg_argnames8_;  // argnames8
  SEXP Rsh_Fir_reg_dr48_;  // dr48
  SEXP Rsh_Fir_reg_dc24_;  // dc24
  SEXP Rsh_Fir_reg_dx70_;  // dx70
  SEXP Rsh_Fir_reg_i232_;  // i232
  SEXP Rsh_Fir_reg_dx71_;  // dx71
  SEXP Rsh_Fir_reg_i233_;  // i233
  SEXP Rsh_Fir_reg_i234_;  // i234
  SEXP Rsh_Fir_reg___17_;  // __17
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_l26_;  // l26
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_i236_;  // i236
  SEXP Rsh_Fir_reg_dx73_;  // dx73
  SEXP Rsh_Fir_reg_l28_;  // l28
  SEXP Rsh_Fir_reg_dr50_;  // dr50
  SEXP Rsh_Fir_reg_dc25_;  // dc25
  SEXP Rsh_Fir_reg_dx75_;  // dx75
  SEXP Rsh_Fir_reg_i238_;  // i238
  SEXP Rsh_Fir_reg_dx76_;  // dx76
  SEXP Rsh_Fir_reg_dx77_;  // dx77
  SEXP Rsh_Fir_reg_i239_;  // i239
  SEXP Rsh_Fir_reg_i240_;  // i240
  SEXP Rsh_Fir_reg____4_;  // ___4
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_inlist21_;  // inlist21
  SEXP Rsh_Fir_reg_inlist22_;  // inlist22
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_i242_;  // i242
  SEXP Rsh_Fir_reg_inlist24_;  // inlist24
  SEXP Rsh_Fir_reg_dr52_;  // dr52
  SEXP Rsh_Fir_reg_dc26_;  // dc26
  SEXP Rsh_Fir_reg_dx78_;  // dx78
  SEXP Rsh_Fir_reg_i244_;  // i244
  SEXP Rsh_Fir_reg_dx79_;  // dx79
  SEXP Rsh_Fir_reg_j16_;  // j16
  SEXP Rsh_Fir_reg_j17_;  // j17
  SEXP Rsh_Fir_reg___18_;  // __18
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_l29_;  // l29
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_i246_;  // i246
  SEXP Rsh_Fir_reg_dx81_;  // dx81
  SEXP Rsh_Fir_reg_l31_;  // l31
  SEXP Rsh_Fir_reg_dr54_;  // dr54
  SEXP Rsh_Fir_reg_dc27_;  // dc27
  SEXP Rsh_Fir_reg_dx83_;  // dx83
  SEXP Rsh_Fir_reg_i248_;  // i248
  SEXP Rsh_Fir_reg_dx85_;  // dx85
  SEXP Rsh_Fir_reg_i249_;  // i249
  SEXP Rsh_Fir_reg_i250_;  // i250
  SEXP Rsh_Fir_reg_____3_;  // ____3
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_j18_;  // j18
  SEXP Rsh_Fir_reg_j19_;  // j19
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_argnames9_;  // argnames9
  SEXP Rsh_Fir_reg_argnames10_;  // argnames10
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_i252_;  // i252
  SEXP Rsh_Fir_reg_argnames12_;  // argnames12
  SEXP Rsh_Fir_reg_dr56_;  // dr56
  SEXP Rsh_Fir_reg_dc28_;  // dc28
  SEXP Rsh_Fir_reg_dx86_;  // dx86
  SEXP Rsh_Fir_reg_i254_;  // i254
  SEXP Rsh_Fir_reg_dx87_;  // dx87
  SEXP Rsh_Fir_reg_i255_;  // i255
  SEXP Rsh_Fir_reg_i256_;  // i256
  SEXP Rsh_Fir_reg___19_;  // __19
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_l32_;  // l32
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_i258_;  // i258
  SEXP Rsh_Fir_reg_dx89_;  // dx89
  SEXP Rsh_Fir_reg_l34_;  // l34
  SEXP Rsh_Fir_reg_dr58_;  // dr58
  SEXP Rsh_Fir_reg_dc29_;  // dc29
  SEXP Rsh_Fir_reg_dx91_;  // dx91
  SEXP Rsh_Fir_reg_i260_;  // i260
  SEXP Rsh_Fir_reg_dx92_;  // dx92
  SEXP Rsh_Fir_reg_dx93_;  // dx93
  SEXP Rsh_Fir_reg_i261_;  // i261
  SEXP Rsh_Fir_reg_i262_;  // i262
  SEXP Rsh_Fir_reg____5_;  // ___5
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_rnames;  // rnames
  SEXP Rsh_Fir_reg_rnames1_;  // rnames1
  SEXP Rsh_Fir_reg_l35_;  // l35
  SEXP Rsh_Fir_reg_names__1_;  // names__1
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_rlist;  // rlist
  SEXP Rsh_Fir_reg_rlist1_;  // rlist1

  // Bind parameters
  Rsh_Fir_reg_inlist = PARAMS[0];
  Rsh_Fir_reg_ncols = PARAMS[1];
  Rsh_Fir_reg_coltypes = PARAMS[2];
  Rsh_Fir_reg_argnames = PARAMS[3];
  Rsh_Fir_reg_args = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st inlist = inlist
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_inlist, RHO);
  (void)(Rsh_Fir_reg_inlist);
  // st ncols = ncols
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ncols, RHO);
  (void)(Rsh_Fir_reg_ncols);
  // st coltypes = coltypes
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_coltypes, RHO);
  (void)(Rsh_Fir_reg_coltypes);
  // st argnames = argnames
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_argnames, RHO);
  (void)(Rsh_Fir_reg_argnames);
  // st args = args
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_args, RHO);
  (void)(Rsh_Fir_reg_args);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L0_:;
  // st p = r1
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf vector
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf vector in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L67() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L67()
    goto L67_;
  } else {
  // L68()
    goto L68_;
  }

L1_:;
  // st rlist = r4
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym2 = ldf vector
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf vector in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard2 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L2_:;
  // st rnames = r7
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // st j = 1
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_const(CCP, 11), RHO);
  (void)(Rsh_const(CCP, 11));
  // sym3 = ldf names
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base3 = ldf names in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard3 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L3_:;
  // st lnames = r10
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // p4 = ld p
  Rsh_Fir_reg_p4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L79() else D8()
  // L79()
  goto L79_;

L4_:;
  // goto L62()
  // L62()
  goto L62_;

L5_:;
  // s = toForSeq(r13)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 15);
  // goto L6(i)
  // L6(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L6_;

L6_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args6);
  // c1 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if c1 then L84() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L84()
    goto L84_;
  } else {
  // L61()
    goto L61_;
  }

L7_:;
  // r16 = `==`(dx1, 2.0)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c3 then L90() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L90()
    goto L90_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // coltypes5 = ld coltypes
  Rsh_Fir_reg_coltypes5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L193() else D55()
  // L193()
  goto L193_;

L9_:;
  // st tlen = r18
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L99() else D15()
  // L99()
  goto L99_;

L10_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r20 = dyn length1(dx3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L98() else D14()
  // L98()
  goto L98_;

L11_:;
  // st cnames = r26
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // sym7 = ldf seq_len
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base7 = ldf seq_len in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard7 then L106() else L107()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L106()
    goto L106_;
  } else {
  // L107()
    goto L107_;
  }

L12_:;
  // s1 = toForSeq(r31)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // l1 = length(s1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // i34 = 0
  Rsh_Fir_reg_i34_ = Rsh_const(CCP, 15);
  // goto L14(i27, i34)
  // L14(i27, i34)
  Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i34_;
  goto L14_;

L13_:;
  // r33 = seq_len(dx7)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L12(i31, r33)
  // L12(i31, r33)
  Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i31_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r33_;
  goto L12_;

L14_:;
  // i37 = `+`.1(i36, 1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_i36_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_i37_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args15);
  // c7 = `<`.1(l1, i37)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_i37_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if c7 then L113() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L113()
    goto L113_;
  } else {
  // L23()
    goto L23_;
  }

L15_:;
  // r38 = `!=`(tlen6, r35)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_tlen6_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c9 then L123() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L123()
    goto L123_;
  } else {
  // L17()
    goto L17_;
  }

L16_:;
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r37 = dyn length2(dx9)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L122() else D25()
  // L122()
  goto L122_;

L17_:;
  // inlist13 = ld inlist
  Rsh_Fir_reg_inlist13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L129() else D29()
  // L129()
  goto L129_;

L19_:;
  // l2 = ld x
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // c11 = `is.object`(l2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c11 then L134() else L135(i70, i71, dx11, l2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L134()
    goto L134_;
  } else {
  // L135(i70, i71, dx11, l2)
    Rsh_Fir_reg_i74_ = Rsh_Fir_reg_i70_;
    Rsh_Fir_reg_i75_ = Rsh_Fir_reg_i71_;
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    goto L135_;
  }

L20_:;
  // st x = dx17
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // lnames = ld lnames
  Rsh_Fir_reg_lnames = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L138() else D32()
  // L138()
  goto L138_;

L21_:;
  // l5 = ld cnames
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // c13 = `is.object`(l5)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c13 then L143() else L144(i86, i87, dx19, l5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L143()
    goto L143_;
  } else {
  // L144(i86, i87, dx19, l5)
    Rsh_Fir_reg_i90_ = Rsh_Fir_reg_i86_;
    Rsh_Fir_reg_i91_ = Rsh_Fir_reg_i87_;
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx19_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    goto L144_;
  }

L22_:;
  // st cnames = dx25
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx25_, RHO);
  (void)(Rsh_Fir_reg_dx25_);
  // j8 = ld j
  Rsh_Fir_reg_j8_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L147() else D35()
  // L147()
  goto L147_;

L23_:;
  // x3 = `[[`(s1, i37, NULL, TRUE)
  SEXP Rsh_Fir_array_args22[4];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_i37_;
  Rsh_Fir_array_args22[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args22[3] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_x3_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // st ind1 = x3
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_x3_, RHO);
  (void)(Rsh_Fir_reg_x3_);
  // tlen2 = ld tlen
  Rsh_Fir_reg_tlen2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L114() else D22()
  // L114()
  goto L114_;

L24_:;
  // st rn = NULL
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_const(CCP, 22), RHO);
  (void)(Rsh_const(CCP, 22));
  // goto L28(i35)
  // L28(i35)
  Rsh_Fir_reg_i113_ = Rsh_Fir_reg_i35_;
  goto L28_;

L25_:;
  // c17 = `is.object`(r54)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c17 then L161() else L162(i102, r54)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L161()
    goto L161_;
  } else {
  // L162(i102, r54)
    Rsh_Fir_reg_i110_ = Rsh_Fir_reg_i102_;
    Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r54_;
    goto L162_;
  }

L26_:;
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r56 = dyn dimnames(dx29)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dx29_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L160() else D42()
  // L160()
  goto L160_;

L27_:;
  // st rn = dx31
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_dx31_, RHO);
  (void)(Rsh_Fir_reg_dx31_);
  // goto L28(i112)
  // L28(i112)
  Rsh_Fir_reg_i113_ = Rsh_Fir_reg_i112_;
  goto L28_;

L28_:;
  // sym10 = ldf any
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base10 = ldf any in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard10 then L165() else L166()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L165()
    goto L165_;
  } else {
  // L166()
    goto L166_;
  }

L29_:;
  // c18 = `as.logical`(r61)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c18 then L169() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L169()
    goto L169_;
  } else {
  // L30()
    goto L30_;
  }

L30_:;
  // goto L32(i116)
  // L32(i116)
  Rsh_Fir_reg_i122_ = Rsh_Fir_reg_i116_;
  goto L32_;

L31_:;
  // l8 = ld x
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L175() else D48()
  // L175()
  goto L175_;

L32_:;
  // x6 = ld x
  Rsh_Fir_reg_x6_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L178() else D50()
  // L178()
  goto L178_;

L33_:;
  // st rlist = dx34
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx34_, RHO);
  (void)(Rsh_Fir_reg_dx34_);
  // argnames1 = ld argnames
  Rsh_Fir_reg_argnames1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L183() else D52()
  // L183()
  goto L183_;

L34_:;
  // l12 = ld rnames
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // c21 = `is.object`(l12)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c21 then L188() else L189(i132, dx36, l12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L188()
    goto L188_;
  } else {
  // L189(i132, dx36, l12)
    Rsh_Fir_reg_i136_ = Rsh_Fir_reg_i132_;
    Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_dx36_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l12_;
    goto L189_;
  }

L35_:;
  // st rnames = dx42
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx42_, RHO);
  (void)(Rsh_Fir_reg_dx42_);
  // goto L36(i138)
  // L36(i138)
  Rsh_Fir_reg_i141_ = Rsh_Fir_reg_i138_;
  goto L36_;

L36_:;
  // goto L6(i141)
  // L6(i141)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i141_;
  goto L6_;

L37_:;
  // r73 = `==`(dx45, 3.0)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dx45_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // c23 = `as.logical`(r73)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c23 then L198() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L198()
    goto L198_;
  } else {
  // L38()
    goto L38_;
  }

L38_:;
  // inlist21 = ld inlist
  Rsh_Fir_reg_inlist21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L266() else D82()
  // L266()
  goto L266_;

L39_:;
  // st x = r75
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r75_, RHO);
  (void)(Rsh_Fir_reg_r75_);
  // sym13 = ldf vector
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base13 = ldf vector in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard13 then L207() else L208()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L207()
    goto L207_;
  } else {
  // L208()
    goto L208_;
  }

L40_:;
  // vector3 = ldf vector in base
  Rsh_Fir_reg_vector3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r77 = dyn vector3("list", dx47)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_dx47_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector3_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L206() else D59()
  // L206()
  goto L206_;

L41_:;
  // st cnames = r79
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r79_, RHO);
  (void)(Rsh_Fir_reg_r79_);
  // sym14 = ldf seq_len
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base14 = ldf seq_len in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard14 then L215() else L216()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L215()
    goto L215_;
  } else {
  // L216()
    goto L216_;
  }

L42_:;
  // vector4 = ldf vector in base
  Rsh_Fir_reg_vector4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r81 = dyn vector4("character", dx49)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_dx49_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector4_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L214() else D62()
  // L214()
  goto L214_;

L43_:;
  // s2 = toForSeq(r83)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_reg_s2_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // l15 = length(s2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_s2_;
  Rsh_Fir_reg_l15_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // i177 = 0
  Rsh_Fir_reg_i177_ = Rsh_const(CCP, 15);
  // goto L45(i170, i177)
  // L45(i170, i177)
  Rsh_Fir_reg_i178_ = Rsh_Fir_reg_i170_;
  Rsh_Fir_reg_i179_ = Rsh_Fir_reg_i177_;
  goto L45_;

L44_:;
  // r85 = seq_len(dx51)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dx51_;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L43(i174, r85)
  // L43(i174, r85)
  Rsh_Fir_reg_i170_ = Rsh_Fir_reg_i174_;
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r85_;
  goto L43_;

L45_:;
  // i180 = `+`.1(i179, 1)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_i179_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_i180_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args37);
  // c27 = `<`.1(l15, i180)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_i180_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if c27 then L222() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L222()
    goto L222_;
  } else {
  // L50()
    goto L50_;
  }

L46_:;
  // l16 = ld x
  Rsh_Fir_reg_l16_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // c29 = `is.object`(l16)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_l16_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if c29 then L228() else L229(i191, i192, dx53, l16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L228()
    goto L228_;
  } else {
  // L229(i191, i192, dx53, l16)
    Rsh_Fir_reg_i195_ = Rsh_Fir_reg_i191_;
    Rsh_Fir_reg_i196_ = Rsh_Fir_reg_i192_;
    Rsh_Fir_reg_dx55_ = Rsh_Fir_reg_dx53_;
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_l16_;
    goto L229_;
  }

L47_:;
  // st x = dx59
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx59_, RHO);
  (void)(Rsh_Fir_reg_dx59_);
  // lnames4 = ld lnames
  Rsh_Fir_reg_lnames4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L232() else D68()
  // L232()
  goto L232_;

L48_:;
  // l19 = ld cnames
  Rsh_Fir_reg_l19_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // c31 = `is.object`(l19)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_l19_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c31 then L237() else L238(i207, i208, dx61, l19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L237()
    goto L237_;
  } else {
  // L238(i207, i208, dx61, l19)
    Rsh_Fir_reg_i211_ = Rsh_Fir_reg_i207_;
    Rsh_Fir_reg_i212_ = Rsh_Fir_reg_i208_;
    Rsh_Fir_reg_dx63_ = Rsh_Fir_reg_dx61_;
    Rsh_Fir_reg_l21_ = Rsh_Fir_reg_l19_;
    goto L238_;
  }

L49_:;
  // st cnames = dx67
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx67_, RHO);
  (void)(Rsh_Fir_reg_dx67_);
  // j14 = ld j
  Rsh_Fir_reg_j14_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L241() else D71()
  // L241()
  goto L241_;

L50_:;
  // x12 = `[[`(s2, i180, NULL, TRUE)
  SEXP Rsh_Fir_array_args41[4];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_s2_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_i180_;
  Rsh_Fir_array_args41[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args41[3] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_x12_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // st ind1 = x12
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_x12_, RHO);
  (void)(Rsh_Fir_reg_x12_);
  // inlist17 = ld inlist
  Rsh_Fir_reg_inlist17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L223() else D65()
  // L223()
  goto L223_;

L51_:;
  // c32 = `as.logical`(r92)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c32 then L246() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L246()
    goto L246_;
  } else {
  // L52()
    goto L52_;
  }

L52_:;
  // goto L53(i219)
  // L53(i219)
  Rsh_Fir_reg_i222_ = Rsh_Fir_reg_i219_;
  goto L53_;

L53_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L251() else D77()
  // L251()
  goto L251_;

L54_:;
  // st rlist = dx69
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx69_, RHO);
  (void)(Rsh_Fir_reg_dx69_);
  // argnames5 = ld argnames
  Rsh_Fir_reg_argnames5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L256() else D79()
  // L256()
  goto L256_;

L55_:;
  // l26 = ld rnames
  Rsh_Fir_reg_l26_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // c35 = `is.object`(l26)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_l26_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if c35 then L261() else L262(i232, dx71, l26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L261()
    goto L261_;
  } else {
  // L262(i232, dx71, l26)
    Rsh_Fir_reg_i236_ = Rsh_Fir_reg_i232_;
    Rsh_Fir_reg_dx73_ = Rsh_Fir_reg_dx71_;
    Rsh_Fir_reg_l28_ = Rsh_Fir_reg_l26_;
    goto L262_;
  }

L56_:;
  // st rnames = dx77
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx77_, RHO);
  (void)(Rsh_Fir_reg_dx77_);
  // goto L36(i238)
  // L36(i238)
  Rsh_Fir_reg_i141_ = Rsh_Fir_reg_i238_;
  goto L36_;

L57_:;
  // l29 = ld rlist
  Rsh_Fir_reg_l29_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c37 = `is.object`(l29)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_l29_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c37 then L271() else L272(i244, dx79, l29)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L271()
    goto L271_;
  } else {
  // L272(i244, dx79, l29)
    Rsh_Fir_reg_i246_ = Rsh_Fir_reg_i244_;
    Rsh_Fir_reg_dx81_ = Rsh_Fir_reg_dx79_;
    Rsh_Fir_reg_l31_ = Rsh_Fir_reg_l29_;
    goto L272_;
  }

L58_:;
  // st rlist = dx85
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx85_, RHO);
  (void)(Rsh_Fir_reg_dx85_);
  // j18 = ld j
  Rsh_Fir_reg_j18_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L275() else D85()
  // L275()
  goto L275_;

L59_:;
  // l32 = ld rnames
  Rsh_Fir_reg_l32_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // c39 = `is.object`(l32)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_l32_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if c39 then L281() else L282(i254, dx87, l32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L281()
    goto L281_;
  } else {
  // L282(i254, dx87, l32)
    Rsh_Fir_reg_i258_ = Rsh_Fir_reg_i254_;
    Rsh_Fir_reg_dx89_ = Rsh_Fir_reg_dx87_;
    Rsh_Fir_reg_l34_ = Rsh_Fir_reg_l32_;
    goto L282_;
  }

L60_:;
  // st rnames = dx93
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx93_, RHO);
  (void)(Rsh_Fir_reg_dx93_);
  // goto L36(i260)
  // L36(i260)
  Rsh_Fir_reg_i141_ = Rsh_Fir_reg_i260_;
  goto L36_;

L61_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args46[4];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args46[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args46[3] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // coltypes1 = ld coltypes
  Rsh_Fir_reg_coltypes1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L85() else D10()
  // L85()
  goto L85_;

L62_:;
  // rnames = ld rnames
  Rsh_Fir_reg_rnames = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L286() else D89()
  // L286()
  goto L286_;

L63_:;
  // ncols1 = ld ncols
  Rsh_Fir_reg_ncols1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L65() else D0()
  // L65()
  goto L65_;

L64_:;
  // r = dyn base(<sym ncols>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [ncols1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_ncols1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L65_:;
  // ncols2 = force? ncols1
  Rsh_Fir_reg_ncols2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncols1_);
  // checkMissing(ncols2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_ncols2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn length(ncols2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_ncols2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L66() else D1()
  // L66()
  goto L66_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L67_:;
  // p = ld p
  Rsh_Fir_reg_p = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L69() else D2()
  // L69()
  goto L69_;

L68_:;
  // r3 = dyn base1[, length]("list", <sym p>)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 10 [p]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_p;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L69_:;
  // p1 = force? p
  Rsh_Fir_reg_p1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p);
  // checkMissing(p1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_p1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // vector = ldf vector in base
  Rsh_Fir_reg_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r5 = dyn vector("list", p1)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L70() else D3()
  // L70()
  goto L70_;

D3_:;
  // deopt 13 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L70_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L71_:;
  // p2 = ld p
  Rsh_Fir_reg_p2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L73() else D4()
  // L73()
  goto L73_;

L72_:;
  // r6 = dyn base2[, length]("character", <sym p>)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L2_;

D4_:;
  // deopt 18 [p2]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L73_:;
  // p3 = force? p2
  Rsh_Fir_reg_p3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p2_);
  // checkMissing(p3)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // vector1 = ldf vector in base
  Rsh_Fir_reg_vector1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r8 = dyn vector1("character", p3)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector1_, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L74() else D5()
  // L74()
  goto L74_;

D5_:;
  // deopt 21 [r8]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L2_;

L75_:;
  // inlist1 = ld inlist
  Rsh_Fir_reg_inlist1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L77() else D6()
  // L77()
  goto L77_;

L76_:;
  // r9 = dyn base3(<sym inlist>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L3(r9)
  // L3(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L3_;

D6_:;
  // deopt 28 [inlist1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_inlist1_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L77_:;
  // inlist2 = force? inlist1
  Rsh_Fir_reg_inlist2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inlist1_);
  // checkMissing(inlist2)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_inlist2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r11 = dyn names(inlist2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_inlist2_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L78() else D7()
  // L78()
  goto L78_;

D7_:;
  // deopt 31 [r11]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L78_:;
  // goto L3(r11)
  // L3(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L3_;

D8_:;
  // deopt 33 [p4]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L79_:;
  // p5 = force? p4
  Rsh_Fir_reg_p5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p4_);
  // checkMissing(p5)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_p5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(p5)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if c then L80() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L80()
    goto L80_;
  } else {
  // L4()
    goto L4_;
  }

L80_:;
  // sym4 = ldf seq_len
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base4 = ldf seq_len in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
  // if guard4 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L81_:;
  // p6 = ld p
  Rsh_Fir_reg_p6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L83() else D9()
  // L83()
  goto L83_;

L82_:;
  // r12 = dyn base4(<sym p>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L5(r12)
  // L5(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L5_;

D9_:;
  // deopt 36 [p6]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L83_:;
  // p7 = force? p6
  Rsh_Fir_reg_p7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p6_);
  // checkMissing(p7)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // r14 = seq_len(p7)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L5(r14)
  // L5(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L5_;

L84_:;
  // goto L62()
  // L62()
  goto L62_;

D10_:;
  // deopt 39 [i2, coltypes1]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_coltypes1_;
  Rsh_Fir_deopt(39, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L85_:;
  // coltypes2 = force? coltypes1
  Rsh_Fir_reg_coltypes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coltypes1_);
  // checkMissing(coltypes2)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_coltypes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(coltypes2)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_coltypes2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if c2 then L86() else L87(i2, coltypes2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L86()
    goto L86_;
  } else {
  // L87(i2, coltypes2)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_coltypes4_ = Rsh_Fir_reg_coltypes2_;
    goto L87_;
  }

L86_:;
  // dr = tryDispatchBuiltin.1("[", coltypes2)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_coltypes2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args67);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc then L88() else L87(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L88()
    goto L88_;
  } else {
  // L87(i2, dr)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_coltypes4_ = Rsh_Fir_reg_dr;
    goto L87_;
  }

L87_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L89() else D11()
  // L89()
  goto L89_;

L88_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L7(i2, dx)
  // L7(i2, dx)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L7_;

D11_:;
  // deopt 41 [i6, coltypes4, i9]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_coltypes4_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(41, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L89_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r15 = dyn __(coltypes4, i10)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_coltypes4_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L7(i6, r15)
  // L7(i6, r15)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r15_;
  goto L7_;

L90_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args71);
  // if guard5 then L91() else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L91()
    goto L91_;
  } else {
  // L92()
    goto L92_;
  }

L91_:;
  // inlist3 = ld inlist
  Rsh_Fir_reg_inlist3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L93() else D12()
  // L93()
  goto L93_;

L92_:;
  // r17 = dyn base5(<lang `[[`(inlist, j)>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L9(i8, r17)
  // L9(i8, r17)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L9_;

D12_:;
  // deopt 48 [i8, inlist3]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_inlist3_;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L93_:;
  // inlist4 = force? inlist3
  Rsh_Fir_reg_inlist4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inlist3_);
  // checkMissing(inlist4)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_inlist4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(inlist4)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_inlist4_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if c4 then L94() else L95(i8, inlist4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L94()
    goto L94_;
  } else {
  // L95(i8, inlist4)
    Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_inlist6_ = Rsh_Fir_reg_inlist4_;
    goto L95_;
  }

L94_:;
  // dr2 = tryDispatchBuiltin.1("[[", inlist4)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_inlist4_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args75);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if dc1 then L96() else L95(i8, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L96()
    goto L96_;
  } else {
  // L95(i8, dr2)
    Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_inlist6_ = Rsh_Fir_reg_dr2_;
    goto L95_;
  }

L95_:;
  // j = ld j
  Rsh_Fir_reg_j = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L97() else D13()
  // L97()
  goto L97_;

L96_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L10(i8, dx2)
  // L10(i8, dx2)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L10_;

D13_:;
  // deopt 50 [i17, inlist6, j]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_inlist6_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_j;
  Rsh_Fir_deopt(50, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L97_:;
  // j1 = force? j
  Rsh_Fir_reg_j1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r19 = dyn __1(inlist6, j1)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_inlist6_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_j1_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L10(i17, r19)
  // L10(i17, r19)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r19_;
  goto L10_;

D14_:;
  // deopt 54 [i19, r20]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(54, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L98_:;
  // goto L9(i19, r20)
  // L9(i19, r20)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r20_;
  goto L9_;

D15_:;
  // deopt 57 [i15]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L99_:;
  // p8 = prom<V +>{
  //   tlen = ld tlen;
  //   tlen1 = force? tlen;
  //   checkMissing(tlen1);
  //   return tlen1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1404317226_, CCP, RHO);
  // p9 = prom<V +>{
  //   ncols3 = ld ncols;
  //   ncols4 = force? ncols3;
  //   checkMissing(ncols4);
  //   c5 = `is.object`(ncols4);
  //   if c5 then L1() else L2(ncols4);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[", ncols4);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(ncols6):
  //   i20 = ld i;
  //   i21 = force? i20;
  //   __2 = ldf `[` in base;
  //   r22 = dyn __2(ncols6, i21);
  //   goto L0(r22);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1404317226_1, CCP, RHO);
  // r24 = dyn matrix[, nrow, ncol](0.0, p8, p9)
  SEXP Rsh_Fir_array_args86[3];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args86[2] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_arg_names18[2] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L100() else D16()
  // L100()
  goto L100_;

D16_:;
  // deopt 63 [i15, r24]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(63, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L100_:;
  // st x = r24
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // sym6 = ldf vector
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base6 = ldf vector in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args87);
  // if guard6 then L101() else L102()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L101()
    goto L101_;
  } else {
  // L102()
    goto L102_;
  }

L101_:;
  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L103() else D17()
  // L103()
  goto L103_;

L102_:;
  // r25 = dyn base6("character", <lang ncol(x)>)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L11(i15, r25)
  // L11(i15, r25)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L11_;

D17_:;
  // deopt 69 [i15]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L103_:;
  // p10 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1404317226_2, CCP, RHO);
  // r28 = dyn ncol(p10)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L104() else D18()
  // L104()
  goto L104_;

D18_:;
  // deopt 71 [i15, r28]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(71, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L104_:;
  // vector2 = ldf vector in base
  Rsh_Fir_reg_vector2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r29 = dyn vector2("character", r28)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector2_, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L105() else D19()
  // L105()
  goto L105_;

D19_:;
  // deopt 73 [i15, r29]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(73, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L105_:;
  // goto L11(i15, r29)
  // L11(i15, r29)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r29_;
  goto L11_;

L106_:;
  // ncols7 = ld ncols
  Rsh_Fir_reg_ncols7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L108() else D20()
  // L108()
  goto L108_;

L107_:;
  // r30 = dyn base7(<lang `[`(ncols, i)>)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L12(i24, r30)
  // L12(i24, r30)
  Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i24_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L12_;

D20_:;
  // deopt 76 [i24, ncols7]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i24_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_ncols7_;
  Rsh_Fir_deopt(76, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L108_:;
  // ncols8 = force? ncols7
  Rsh_Fir_reg_ncols8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncols7_);
  // checkMissing(ncols8)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_ncols8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(ncols8)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_ncols8_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if c6 then L109() else L110(i24, ncols8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L109()
    goto L109_;
  } else {
  // L110(i24, ncols8)
    Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i24_;
    Rsh_Fir_reg_ncols10_ = Rsh_Fir_reg_ncols8_;
    goto L110_;
  }

L109_:;
  // dr6 = tryDispatchBuiltin.1("[", ncols8)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_ncols8_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args95);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // if dc3 then L111() else L110(i24, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L111()
    goto L111_;
  } else {
  // L110(i24, dr6)
    Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i24_;
    Rsh_Fir_reg_ncols10_ = Rsh_Fir_reg_dr6_;
    goto L110_;
  }

L110_:;
  // i32 = ld i
  Rsh_Fir_reg_i32_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L112() else D21()
  // L112()
  goto L112_;

L111_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L13(i24, dx6)
  // L13(i24, dx6)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i24_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L13_;

D21_:;
  // deopt 78 [i29, ncols10, i32]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i29_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_ncols10_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_i32_;
  Rsh_Fir_deopt(78, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L112_:;
  // i33 = force? i32
  Rsh_Fir_reg_i33_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i32_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r32 = dyn __3(ncols10, i33)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_ncols10_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_i33_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L13(i29, r32)
  // L13(i29, r32)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r32_;
  goto L13_;

L113_:;
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L148() else D36()
  // L148()
  goto L148_;

D22_:;
  // deopt 82 [i35, i37, tlen2]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_i37_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_tlen2_;
  Rsh_Fir_deopt(82, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L114_:;
  // tlen3 = force? tlen2
  Rsh_Fir_reg_tlen3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tlen2_);
  // checkMissing(tlen3)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_tlen3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // sym8 = ldf length
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base8 = ldf length in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args100);
  // if guard8 then L115() else L116()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L115()
    goto L115_;
  } else {
  // L116()
    goto L116_;
  }

L115_:;
  // inlist7 = ld inlist
  Rsh_Fir_reg_inlist7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L117() else D23()
  // L117()
  goto L117_;

L116_:;
  // r34 = dyn base8(<lang `[[`(inlist, j)>)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L15(i35, i37, tlen3, r34)
  // L15(i35, i37, tlen3, r34)
  Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i35_;
  Rsh_Fir_reg_i47_ = Rsh_Fir_reg_i37_;
  Rsh_Fir_reg_tlen6_ = Rsh_Fir_reg_tlen3_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L15_;

D23_:;
  // deopt 85 [i35, i37, tlen3, inlist7]
  SEXP Rsh_Fir_array_deopt_stack23[4];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_i37_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_tlen3_;
  Rsh_Fir_array_deopt_stack23[3] = Rsh_Fir_reg_inlist7_;
  Rsh_Fir_deopt(85, 4, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L117_:;
  // inlist8 = force? inlist7
  Rsh_Fir_reg_inlist8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inlist7_);
  // checkMissing(inlist8)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_inlist8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(inlist8)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_inlist8_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // if c8 then L118() else L119(i35, i37, tlen3, inlist8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L118()
    goto L118_;
  } else {
  // L119(i35, i37, tlen3, inlist8)
    Rsh_Fir_reg_i50_ = Rsh_Fir_reg_i35_;
    Rsh_Fir_reg_i51_ = Rsh_Fir_reg_i37_;
    Rsh_Fir_reg_tlen8_ = Rsh_Fir_reg_tlen3_;
    Rsh_Fir_reg_inlist10_ = Rsh_Fir_reg_inlist8_;
    goto L119_;
  }

L118_:;
  // dr8 = tryDispatchBuiltin.1("[[", inlist8)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_inlist8_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args104);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if dc4 then L120() else L119(i35, i37, tlen3, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L120()
    goto L120_;
  } else {
  // L119(i35, i37, tlen3, dr8)
    Rsh_Fir_reg_i50_ = Rsh_Fir_reg_i35_;
    Rsh_Fir_reg_i51_ = Rsh_Fir_reg_i37_;
    Rsh_Fir_reg_tlen8_ = Rsh_Fir_reg_tlen3_;
    Rsh_Fir_reg_inlist10_ = Rsh_Fir_reg_dr8_;
    goto L119_;
  }

L119_:;
  // j2 = ld j
  Rsh_Fir_reg_j2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L121() else D24()
  // L121()
  goto L121_;

L120_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // goto L16(i35, i37, tlen3, dx8)
  // L16(i35, i37, tlen3, dx8)
  Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i35_;
  Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i37_;
  Rsh_Fir_reg_tlen10_ = Rsh_Fir_reg_tlen3_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L16_;

D24_:;
  // deopt 87 [i50, i51, tlen8, inlist10, j2]
  SEXP Rsh_Fir_array_deopt_stack24[5];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i50_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_i51_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_tlen8_;
  Rsh_Fir_array_deopt_stack24[3] = Rsh_Fir_reg_inlist10_;
  Rsh_Fir_array_deopt_stack24[4] = Rsh_Fir_reg_j2_;
  Rsh_Fir_deopt(87, 5, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L121_:;
  // j3 = force? j2
  Rsh_Fir_reg_j3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j2_);
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r36 = dyn __4(inlist10, j3)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_inlist10_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_j3_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L16(i50, i51, tlen8, r36)
  // L16(i50, i51, tlen8, r36)
  Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i50_;
  Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i51_;
  Rsh_Fir_reg_tlen10_ = Rsh_Fir_reg_tlen8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r36_;
  goto L16_;

D25_:;
  // deopt 91 [i54, i55, tlen10, r37]
  SEXP Rsh_Fir_array_deopt_stack25[4];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i54_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_i55_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_tlen10_;
  Rsh_Fir_array_deopt_stack25[3] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(91, 4, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L122_:;
  // goto L15(i54, i55, tlen10, r37)
  // L15(i54, i55, tlen10, r37)
  Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i54_;
  Rsh_Fir_reg_i47_ = Rsh_Fir_reg_i55_;
  Rsh_Fir_reg_tlen6_ = Rsh_Fir_reg_tlen10_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r37_;
  goto L15_;

L123_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L124() else D26()
  // L124()
  goto L124_;

D26_:;
  // deopt 94 [i46, i47]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i46_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_i47_;
  Rsh_Fir_deopt(94, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L124_:;
  // r39 = dyn warning("could not restore type information")
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L125() else D27()
  // L125()
  goto L125_;

D27_:;
  // deopt 96 [i46, i47, r39]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i46_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_i47_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(96, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L125_:;
  // inlist11 = ld inlist
  Rsh_Fir_reg_inlist11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L126() else D28()
  // L126()
  goto L126_;

D28_:;
  // deopt 97 [i46, i47, inlist11]
  SEXP Rsh_Fir_array_deopt_stack28[3];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i46_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_i47_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_inlist11_;
  Rsh_Fir_deopt(97, 3, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L126_:;
  // inlist12 = force? inlist11
  Rsh_Fir_reg_inlist12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inlist11_);
  // checkMissing(inlist12)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_inlist12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return inlist12
  return Rsh_Fir_reg_inlist12_;

D29_:;
  // deopt 102 [i46, i47, inlist13]
  SEXP Rsh_Fir_array_deopt_stack29[3];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i46_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_i47_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_inlist13_;
  Rsh_Fir_deopt(102, 3, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L129_:;
  // inlist14 = force? inlist13
  Rsh_Fir_reg_inlist14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inlist13_);
  // checkMissing(inlist14)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_inlist14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(inlist14)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_inlist14_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // if c10 then L130() else L131(i46, i47, inlist14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L130()
    goto L130_;
  } else {
  // L131(i46, i47, inlist14)
    Rsh_Fir_reg_i66_ = Rsh_Fir_reg_i46_;
    Rsh_Fir_reg_i67_ = Rsh_Fir_reg_i47_;
    Rsh_Fir_reg_inlist16_ = Rsh_Fir_reg_inlist14_;
    goto L131_;
  }

L130_:;
  // dr10 = tryDispatchBuiltin.1("[[", inlist14)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_inlist14_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args112);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // if dc5 then L132() else L131(i46, i47, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L132()
    goto L132_;
  } else {
  // L131(i46, i47, dr10)
    Rsh_Fir_reg_i66_ = Rsh_Fir_reg_i46_;
    Rsh_Fir_reg_i67_ = Rsh_Fir_reg_i47_;
    Rsh_Fir_reg_inlist16_ = Rsh_Fir_reg_dr10_;
    goto L131_;
  }

L131_:;
  // j4 = ld j
  Rsh_Fir_reg_j4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L133() else D30()
  // L133()
  goto L133_;

L132_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // goto L19(i46, i47, dx10)
  // L19(i46, i47, dx10)
  Rsh_Fir_reg_i70_ = Rsh_Fir_reg_i46_;
  Rsh_Fir_reg_i71_ = Rsh_Fir_reg_i47_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L19_;

D30_:;
  // deopt 104 [i66, i67, inlist16, j4]
  SEXP Rsh_Fir_array_deopt_stack30[4];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i66_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_i67_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_inlist16_;
  Rsh_Fir_array_deopt_stack30[3] = Rsh_Fir_reg_j4_;
  Rsh_Fir_deopt(104, 4, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L133_:;
  // j5 = force? j4
  Rsh_Fir_reg_j5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j4_);
  // __5 = ldf `[[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r42 = dyn __5(inlist16, j5)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_inlist16_;
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_j5_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L19(i66, i67, r42)
  // L19(i66, i67, r42)
  Rsh_Fir_reg_i70_ = Rsh_Fir_reg_i66_;
  Rsh_Fir_reg_i71_ = Rsh_Fir_reg_i67_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r42_;
  goto L19_;

L134_:;
  // dr12 = tryDispatchBuiltin.0("[<-", l2, dx11)
  SEXP Rsh_Fir_array_args116[3];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args116[2] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args116);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // if dc6 then L136() else L135(i70, i71, dx11, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L136()
    goto L136_;
  } else {
  // L135(i70, i71, dx11, dr12)
    Rsh_Fir_reg_i74_ = Rsh_Fir_reg_i70_;
    Rsh_Fir_reg_i75_ = Rsh_Fir_reg_i71_;
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_dr12_;
    goto L135_;
  }

L135_:;
  // ind1 = ld ind1
  Rsh_Fir_reg_ind1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L137() else D31()
  // L137()
  goto L137_;

L136_:;
  // dx15 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // goto L20(i70, i71, dx15)
  // L20(i70, i71, dx15)
  Rsh_Fir_reg_i78_ = Rsh_Fir_reg_i70_;
  Rsh_Fir_reg_i79_ = Rsh_Fir_reg_i71_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
  goto L20_;

D31_:;
  // deopt 109 [i74, i75, dx13, l4, dx11, ind1]
  SEXP Rsh_Fir_array_deopt_stack31[6];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i74_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_i75_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_deopt_stack31[3] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack31[4] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_deopt_stack31[5] = Rsh_Fir_reg_ind1_;
  Rsh_Fir_deopt(109, 6, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L137_:;
  // ind2 = force? ind1
  Rsh_Fir_reg_ind2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind1_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r43 = dyn ___(l2, <missing>, ind2, dx11)
  SEXP Rsh_Fir_array_args119[4];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args119[1] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args119[2] = Rsh_Fir_reg_ind2_;
  Rsh_Fir_array_args119[3] = Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_array_arg_names28[4];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_array_arg_names28[3] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L20(i74, i75, r43)
  // L20(i74, i75, r43)
  Rsh_Fir_reg_i78_ = Rsh_Fir_reg_i74_;
  Rsh_Fir_reg_i79_ = Rsh_Fir_reg_i75_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r43_;
  goto L20_;

D32_:;
  // deopt 114 [i78, i79, lnames]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i78_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_i79_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_lnames;
  Rsh_Fir_deopt(114, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L138_:;
  // lnames1 = force? lnames
  Rsh_Fir_reg_lnames1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lnames);
  // checkMissing(lnames1)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_lnames1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(lnames1)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_lnames1_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if c12 then L139() else L140(i78, i79, lnames1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L139()
    goto L139_;
  } else {
  // L140(i78, i79, lnames1)
    Rsh_Fir_reg_i82_ = Rsh_Fir_reg_i78_;
    Rsh_Fir_reg_i83_ = Rsh_Fir_reg_i79_;
    Rsh_Fir_reg_lnames3_ = Rsh_Fir_reg_lnames1_;
    goto L140_;
  }

L139_:;
  // dr14 = tryDispatchBuiltin.1("[", lnames1)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_lnames1_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args122);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // if dc7 then L141() else L140(i78, i79, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L141()
    goto L141_;
  } else {
  // L140(i78, i79, dr14)
    Rsh_Fir_reg_i82_ = Rsh_Fir_reg_i78_;
    Rsh_Fir_reg_i83_ = Rsh_Fir_reg_i79_;
    Rsh_Fir_reg_lnames3_ = Rsh_Fir_reg_dr14_;
    goto L140_;
  }

L140_:;
  // j6 = ld j
  Rsh_Fir_reg_j6_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L142() else D33()
  // L142()
  goto L142_;

L141_:;
  // dx18 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // goto L21(i78, i79, dx18)
  // L21(i78, i79, dx18)
  Rsh_Fir_reg_i86_ = Rsh_Fir_reg_i78_;
  Rsh_Fir_reg_i87_ = Rsh_Fir_reg_i79_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L21_;

D33_:;
  // deopt 116 [i82, i83, lnames3, j6]
  SEXP Rsh_Fir_array_deopt_stack33[4];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i82_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_i83_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_lnames3_;
  Rsh_Fir_array_deopt_stack33[3] = Rsh_Fir_reg_j6_;
  Rsh_Fir_deopt(116, 4, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L142_:;
  // j7 = force? j6
  Rsh_Fir_reg_j7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j6_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r44 = dyn __6(lnames3, j7)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_lnames3_;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_j7_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L21(i82, i83, r44)
  // L21(i82, i83, r44)
  Rsh_Fir_reg_i86_ = Rsh_Fir_reg_i82_;
  Rsh_Fir_reg_i87_ = Rsh_Fir_reg_i83_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r44_;
  goto L21_;

L143_:;
  // dr16 = tryDispatchBuiltin.0("[<-", l5, dx19)
  SEXP Rsh_Fir_array_args126[3];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args126[2] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args126);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // if dc8 then L145() else L144(i86, i87, dx19, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L145()
    goto L145_;
  } else {
  // L144(i86, i87, dx19, dr16)
    Rsh_Fir_reg_i90_ = Rsh_Fir_reg_i86_;
    Rsh_Fir_reg_i91_ = Rsh_Fir_reg_i87_;
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx19_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr16_;
    goto L144_;
  }

L144_:;
  // ind3 = ld ind1
  Rsh_Fir_reg_ind3_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L146() else D34()
  // L146()
  goto L146_;

L145_:;
  // dx23 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // goto L22(i86, i87, dx23)
  // L22(i86, i87, dx23)
  Rsh_Fir_reg_i94_ = Rsh_Fir_reg_i86_;
  Rsh_Fir_reg_i95_ = Rsh_Fir_reg_i87_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx23_;
  goto L22_;

D34_:;
  // deopt 120 [i90, i91, dx21, l7, dx19, ind3]
  SEXP Rsh_Fir_array_deopt_stack34[6];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_i90_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_i91_;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_deopt_stack34[3] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack34[4] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_array_deopt_stack34[5] = Rsh_Fir_reg_ind3_;
  Rsh_Fir_deopt(120, 6, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L146_:;
  // ind4 = force? ind3
  Rsh_Fir_reg_ind4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind3_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r45 = dyn ___1(l7, dx19, ind4)
  SEXP Rsh_Fir_array_args129[3];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_array_args129[2] = Rsh_Fir_reg_ind4_;
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L22(i90, i91, r45)
  // L22(i90, i91, r45)
  Rsh_Fir_reg_i94_ = Rsh_Fir_reg_i90_;
  Rsh_Fir_reg_i95_ = Rsh_Fir_reg_i91_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r45_;
  goto L22_;

D35_:;
  // deopt 124 [i94, i95, j8]
  SEXP Rsh_Fir_array_deopt_stack35[3];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i94_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_i95_;
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_j8_;
  Rsh_Fir_deopt(124, 3, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L147_:;
  // j9 = force? j8
  Rsh_Fir_reg_j9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j8_);
  // checkMissing(j9)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_j9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // r46 = `+`(j9, 1)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_j9_;
  Rsh_Fir_array_args131[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // st j = r46
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // goto L14(i94, i95)
  // L14(i94, i95)
  Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i94_;
  Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i95_;
  goto L14_;

D36_:;
  // deopt 133 [i35]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L148_:;
  // p11 = prom<V +>{
  //   x4 = ld x;
  //   x5 = force? x4;
  //   checkMissing(x5);
  //   return x5;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1404317226_3, CCP, RHO);
  // r48 = dyn nrow(p11)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args133, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L149() else D37()
  // L149()
  goto L149_;

D37_:;
  // deopt 135 [i35, r48]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(135, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L149_:;
  // nrow1 = ldf nrow
  Rsh_Fir_reg_nrow1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L150() else D38()
  // L150()
  goto L150_;

D38_:;
  // deopt 136 [i35, r48]
  SEXP Rsh_Fir_array_deopt_stack38[2];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(136, 2, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L150_:;
  // p12 = prom<V +>{
  //   args1 = ld args;
  //   args2 = force? args1;
  //   checkMissing(args2);
  //   c14 = `is.object`(args2);
  //   if c14 then L1() else L2(args2);
  // L0(dx27):
  //   return dx27;
  // L1():
  //   dr18 = tryDispatchBuiltin.1("[[", args2);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L3() else L2(dr18);
  // L2(args4):
  //   i96 = ld i;
  //   i97 = force? i96;
  //   __7 = ldf `[[` in base;
  //   r49 = dyn __7(args4, i97);
  //   goto L0(r49);
  // L3():
  //   dx26 = getTryDispatchBuiltinValue(dr18);
  //   goto L0(dx26);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1404317226_4, CCP, RHO);
  // r51 = dyn nrow1(p12)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow1_, 1, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L151() else D39()
  // L151()
  goto L151_;

D39_:;
  // deopt 138 [i35, r48, r51]
  SEXP Rsh_Fir_array_deopt_stack39[3];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_deopt_stack39[2] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(138, 3, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L151_:;
  // r52 = `==`(r48, r51)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // c15 = `as.logical`(r52)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // if c15 then L152() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L152()
    goto L152_;
  } else {
  // L24()
    goto L24_;
  }

L152_:;
  // sym9 = ldf dimnames
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base9 = ldf dimnames in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args143);
  // if guard9 then L153() else L154()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L153()
    goto L153_;
  } else {
  // L154()
    goto L154_;
  }

L153_:;
  // args5 = ld args
  Rsh_Fir_reg_args5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L155() else D40()
  // L155()
  goto L155_;

L154_:;
  // r53 = dyn base9(<lang `[[`(args, i)>)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L25(i35, r53)
  // L25(i35, r53)
  Rsh_Fir_reg_i102_ = Rsh_Fir_reg_i35_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L25_;

D40_:;
  // deopt 142 [i35, args5]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_args5_;
  Rsh_Fir_deopt(142, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L155_:;
  // args6 = force? args5
  Rsh_Fir_reg_args6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args5_);
  // checkMissing(args6)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_args6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(args6)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_args6_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // if c16 then L156() else L157(i35, args6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L156()
    goto L156_;
  } else {
  // L157(i35, args6)
    Rsh_Fir_reg_i104_ = Rsh_Fir_reg_i35_;
    Rsh_Fir_reg_args8_ = Rsh_Fir_reg_args6_;
    goto L157_;
  }

L156_:;
  // dr20 = tryDispatchBuiltin.1("[[", args6)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_args6_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args147);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // if dc10 then L158() else L157(i35, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L158()
    goto L158_;
  } else {
  // L157(i35, dr20)
    Rsh_Fir_reg_i104_ = Rsh_Fir_reg_i35_;
    Rsh_Fir_reg_args8_ = Rsh_Fir_reg_dr20_;
    goto L157_;
  }

L157_:;
  // i107 = ld i
  Rsh_Fir_reg_i107_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L159() else D41()
  // L159()
  goto L159_;

L158_:;
  // dx28 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty());
  // goto L26(i35, dx28)
  // L26(i35, dx28)
  Rsh_Fir_reg_i106_ = Rsh_Fir_reg_i35_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L26_;

D41_:;
  // deopt 144 [i104, args8, i107]
  SEXP Rsh_Fir_array_deopt_stack41[3];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_i104_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_args8_;
  Rsh_Fir_array_deopt_stack41[2] = Rsh_Fir_reg_i107_;
  Rsh_Fir_deopt(144, 3, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L159_:;
  // i108 = force? i107
  Rsh_Fir_reg_i108_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i107_);
  // __8 = ldf `[[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r55 = dyn __8(args8, i108)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_args8_;
  Rsh_Fir_array_args150[1] = Rsh_Fir_reg_i108_;
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L26(i104, r55)
  // L26(i104, r55)
  Rsh_Fir_reg_i106_ = Rsh_Fir_reg_i104_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r55_;
  goto L26_;

D42_:;
  // deopt 148 [i106, r56]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_i106_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(148, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L160_:;
  // goto L25(i106, r56)
  // L25(i106, r56)
  Rsh_Fir_reg_i102_ = Rsh_Fir_reg_i106_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r56_;
  goto L25_;

L161_:;
  // dr22 = tryDispatchBuiltin.1("[[", r54)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args151);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty());
  // if dc11 then L163() else L162(i102, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L163()
    goto L163_;
  } else {
  // L162(i102, dr22)
    Rsh_Fir_reg_i110_ = Rsh_Fir_reg_i102_;
    Rsh_Fir_reg_r58_ = Rsh_Fir_reg_dr22_;
    goto L162_;
  }

L162_:;
  // __9 = ldf `[[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r59 = dyn __9(r58, 1)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_args153[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L27(i110, r59)
  // L27(i110, r59)
  Rsh_Fir_reg_i112_ = Rsh_Fir_reg_i110_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r59_;
  goto L27_;

L163_:;
  // dx30 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // goto L27(i102, dx30)
  // L27(i102, dx30)
  Rsh_Fir_reg_i112_ = Rsh_Fir_reg_i102_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L27_;

L165_:;
  // cnames = ld cnames
  Rsh_Fir_reg_cnames = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L167() else D43()
  // L167()
  goto L167_;

L166_:;
  // r60 = dyn base10(<lang `!=`(cnames, "")>)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L29(i113, r60)
  // L29(i113, r60)
  Rsh_Fir_reg_i116_ = Rsh_Fir_reg_i113_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r60_;
  goto L29_;

D43_:;
  // deopt 158 [i113, cnames]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_i113_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_cnames;
  Rsh_Fir_deopt(158, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L167_:;
  // cnames1 = force? cnames
  Rsh_Fir_reg_cnames1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cnames);
  // checkMissing(cnames1)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_cnames1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // r62 = `!=`(cnames1, "")
  SEXP Rsh_Fir_array_args157[2];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_cnames1_;
  Rsh_Fir_array_args157[1] = Rsh_const(CCP, 50);
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r63 = dyn any(r62)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L168() else D44()
  // L168()
  goto L168_;

D44_:;
  // deopt 163 [i113, r63]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_i113_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(163, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L168_:;
  // goto L29(i113, r63)
  // L29(i113, r63)
  Rsh_Fir_reg_i116_ = Rsh_Fir_reg_i113_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r63_;
  goto L29_;

L169_:;
  // sym11 = ldf list
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // base11 = ldf list in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args159[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args159);
  // if guard11 then L170() else L171()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L170()
    goto L170_;
  } else {
  // L171()
    goto L171_;
  }

L170_:;
  // rn = ld rn
  Rsh_Fir_reg_rn = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L172() else D45()
  // L172()
  goto L172_;

L171_:;
  // r64 = dyn base11(<sym rn>, <sym cnames>)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args160[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L31(i116, r64)
  // L31(i116, r64)
  Rsh_Fir_reg_i121_ = Rsh_Fir_reg_i116_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r64_;
  goto L31_;

D45_:;
  // deopt 166 [i116, rn]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_i116_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_rn;
  Rsh_Fir_deopt(166, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L172_:;
  // rn1 = force? rn
  Rsh_Fir_reg_rn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rn);
  // checkMissing(rn1)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_rn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty()));
  // cnames2 = ld cnames
  Rsh_Fir_reg_cnames2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L173() else D46()
  // L173()
  goto L173_;

D46_:;
  // deopt 168 [i116, cnames2]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_i116_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_cnames2_;
  Rsh_Fir_deopt(168, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L173_:;
  // cnames3 = force? cnames2
  Rsh_Fir_reg_cnames3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cnames2_);
  // checkMissing(cnames3)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_cnames3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r66 = dyn list(rn1, cnames3)
  SEXP Rsh_Fir_array_args163[2];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_rn1_;
  Rsh_Fir_array_args163[1] = Rsh_Fir_reg_cnames3_;
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args163, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L174() else D47()
  // L174()
  goto L174_;

D47_:;
  // deopt 171 [i116, r66]
  SEXP Rsh_Fir_array_deopt_stack47[2];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_i116_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(171, 2, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L174_:;
  // goto L31(i116, r66)
  // L31(i116, r66)
  Rsh_Fir_reg_i121_ = Rsh_Fir_reg_i116_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r66_;
  goto L31_;

D48_:;
  // deopt 173 [i121, r65, l8, r65]
  SEXP Rsh_Fir_array_deopt_stack48[4];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_i121_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_deopt_stack48[2] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack48[3] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(173, 4, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L175_:;
  // r67 = dyn dimnames__(l8, NULL, r65)
  SEXP Rsh_Fir_array_args164[3];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args164[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args164[2] = Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_array_arg_names41[3];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_array_arg_names41[2] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L176() else D49()
  // L176()
  goto L176_;

D49_:;
  // deopt 175 [i121, r65, r67]
  SEXP Rsh_Fir_array_deopt_stack49[3];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_i121_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_deopt_stack49[2] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(175, 3, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L176_:;
  // st x = r67
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r67_, RHO);
  (void)(Rsh_Fir_reg_r67_);
  // goto L32(i121)
  // L32(i121)
  Rsh_Fir_reg_i122_ = Rsh_Fir_reg_i121_;
  goto L32_;

D50_:;
  // deopt 179 [i122, x6]
  SEXP Rsh_Fir_array_deopt_stack50[2];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_i122_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_deopt(179, 2, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L178_:;
  // x7 = force? x6
  Rsh_Fir_reg_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x6_);
  // checkMissing(x7)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty()));
  // l9 = ld rlist
  Rsh_Fir_reg_l9_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c19 = `is.object`(l9)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty());
  // if c19 then L179() else L180(i122, x7, l9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L179()
    goto L179_;
  } else {
  // L180(i122, x7, l9)
    Rsh_Fir_reg_i124_ = Rsh_Fir_reg_i122_;
    Rsh_Fir_reg_x9_ = Rsh_Fir_reg_x7_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    goto L180_;
  }

L179_:;
  // dr24 = tryDispatchBuiltin.0("[[<-", l9, x7)
  SEXP Rsh_Fir_array_args167[3];
  Rsh_Fir_array_args167[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args167[2] = Rsh_Fir_reg_x7_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args167);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty());
  // if dc12 then L181() else L180(i122, x7, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L181()
    goto L181_;
  } else {
  // L180(i122, x7, dr24)
    Rsh_Fir_reg_i124_ = Rsh_Fir_reg_i122_;
    Rsh_Fir_reg_x9_ = Rsh_Fir_reg_x7_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_dr24_;
    goto L180_;
  }

L180_:;
  // i127 = ld i
  Rsh_Fir_reg_i127_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L182() else D51()
  // L182()
  goto L182_;

L181_:;
  // dx33 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // goto L33(i122, dx33)
  // L33(i122, dx33)
  Rsh_Fir_reg_i126_ = Rsh_Fir_reg_i122_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_dx33_;
  goto L33_;

D51_:;
  // deopt 182 [i124, x9, l11, x7, i127]
  SEXP Rsh_Fir_array_deopt_stack51[5];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_i124_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_x9_;
  Rsh_Fir_array_deopt_stack51[2] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack51[3] = Rsh_Fir_reg_x7_;
  Rsh_Fir_array_deopt_stack51[4] = Rsh_Fir_reg_i127_;
  Rsh_Fir_deopt(182, 5, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L182_:;
  // i128 = force? i127
  Rsh_Fir_reg_i128_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i127_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r69 = dyn ____(l11, x7, i128)
  SEXP Rsh_Fir_array_args170[3];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args170[1] = Rsh_Fir_reg_x7_;
  Rsh_Fir_array_args170[2] = Rsh_Fir_reg_i128_;
  SEXP Rsh_Fir_array_arg_names42[3];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_array_arg_names42[2] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args170, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L33(i124, r69)
  // L33(i124, r69)
  Rsh_Fir_reg_i126_ = Rsh_Fir_reg_i124_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_r69_;
  goto L33_;

D52_:;
  // deopt 186 [i126, argnames1]
  SEXP Rsh_Fir_array_deopt_stack52[2];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_i126_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_argnames1_;
  Rsh_Fir_deopt(186, 2, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L183_:;
  // argnames2 = force? argnames1
  Rsh_Fir_reg_argnames2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_argnames1_);
  // checkMissing(argnames2)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_argnames2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(argnames2)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_argnames2_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty());
  // if c20 then L184() else L185(i126, argnames2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L184()
    goto L184_;
  } else {
  // L185(i126, argnames2)
    Rsh_Fir_reg_i130_ = Rsh_Fir_reg_i126_;
    Rsh_Fir_reg_argnames4_ = Rsh_Fir_reg_argnames2_;
    goto L185_;
  }

L184_:;
  // dr26 = tryDispatchBuiltin.1("[", argnames2)
  SEXP Rsh_Fir_array_args173[2];
  Rsh_Fir_array_args173[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args173[1] = Rsh_Fir_reg_argnames2_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args173);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty());
  // if dc13 then L186() else L185(i126, dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L186()
    goto L186_;
  } else {
  // L185(i126, dr26)
    Rsh_Fir_reg_i130_ = Rsh_Fir_reg_i126_;
    Rsh_Fir_reg_argnames4_ = Rsh_Fir_reg_dr26_;
    goto L185_;
  }

L185_:;
  // i133 = ld i
  Rsh_Fir_reg_i133_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L187() else D53()
  // L187()
  goto L187_;

L186_:;
  // dx35 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty());
  // goto L34(i126, dx35)
  // L34(i126, dx35)
  Rsh_Fir_reg_i132_ = Rsh_Fir_reg_i126_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_dx35_;
  goto L34_;

D53_:;
  // deopt 188 [i130, argnames4, i133]
  SEXP Rsh_Fir_array_deopt_stack53[3];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_i130_;
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_argnames4_;
  Rsh_Fir_array_deopt_stack53[2] = Rsh_Fir_reg_i133_;
  Rsh_Fir_deopt(188, 3, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L187_:;
  // i134 = force? i133
  Rsh_Fir_reg_i134_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i133_);
  // __10 = ldf `[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r70 = dyn __10(argnames4, i134)
  SEXP Rsh_Fir_array_args176[2];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_argnames4_;
  Rsh_Fir_array_args176[1] = Rsh_Fir_reg_i134_;
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 2, Rsh_Fir_array_args176, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L34(i130, r70)
  // L34(i130, r70)
  Rsh_Fir_reg_i132_ = Rsh_Fir_reg_i130_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_r70_;
  goto L34_;

L188_:;
  // dr28 = tryDispatchBuiltin.0("[<-", l12, dx36)
  SEXP Rsh_Fir_array_args177[3];
  Rsh_Fir_array_args177[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args177[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args177[2] = Rsh_Fir_reg_dx36_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args177);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty());
  // if dc14 then L190() else L189(i132, dx36, dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L190()
    goto L190_;
  } else {
  // L189(i132, dx36, dr28)
    Rsh_Fir_reg_i136_ = Rsh_Fir_reg_i132_;
    Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_dx36_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_dr28_;
    goto L189_;
  }

L189_:;
  // i139 = ld i
  Rsh_Fir_reg_i139_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L191() else D54()
  // L191()
  goto L191_;

L190_:;
  // dx40 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx40_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty());
  // goto L35(i132, dx36, dx40)
  // L35(i132, dx36, dx40)
  Rsh_Fir_reg_i138_ = Rsh_Fir_reg_i132_;
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx36_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_reg_dx40_;
  goto L35_;

D54_:;
  // deopt 192 [i136, dx38, l14, dx36, i139]
  SEXP Rsh_Fir_array_deopt_stack54[5];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_i136_;
  Rsh_Fir_array_deopt_stack54[1] = Rsh_Fir_reg_dx38_;
  Rsh_Fir_array_deopt_stack54[2] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack54[3] = Rsh_Fir_reg_dx36_;
  Rsh_Fir_array_deopt_stack54[4] = Rsh_Fir_reg_i139_;
  Rsh_Fir_deopt(192, 5, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L191_:;
  // i140 = force? i139
  Rsh_Fir_reg_i140_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i139_);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r71 = dyn ___2(l14, dx36, i140)
  SEXP Rsh_Fir_array_args180[3];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args180[1] = Rsh_Fir_reg_dx36_;
  Rsh_Fir_array_args180[2] = Rsh_Fir_reg_i140_;
  SEXP Rsh_Fir_array_arg_names44[3];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_array_arg_names44[2] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args180, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L35(i136, dx38, r71)
  // L35(i136, dx38, r71)
  Rsh_Fir_reg_i138_ = Rsh_Fir_reg_i136_;
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx38_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_reg_r71_;
  goto L35_;

D55_:;
  // deopt 196 [i8, coltypes5]
  SEXP Rsh_Fir_array_deopt_stack55[2];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_coltypes5_;
  Rsh_Fir_deopt(196, 2, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L193_:;
  // coltypes6 = force? coltypes5
  Rsh_Fir_reg_coltypes6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coltypes5_);
  // checkMissing(coltypes6)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_coltypes6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(coltypes6)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_coltypes6_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty());
  // if c22 then L194() else L195(i8, coltypes6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L194()
    goto L194_;
  } else {
  // L195(i8, coltypes6)
    Rsh_Fir_reg_i143_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_coltypes8_ = Rsh_Fir_reg_coltypes6_;
    goto L195_;
  }

L194_:;
  // dr30 = tryDispatchBuiltin.1("[", coltypes6)
  SEXP Rsh_Fir_array_args183[2];
  Rsh_Fir_array_args183[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args183[1] = Rsh_Fir_reg_coltypes6_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args183);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty());
  // if dc15 then L196() else L195(i8, dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L196()
    goto L196_;
  } else {
  // L195(i8, dr30)
    Rsh_Fir_reg_i143_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_coltypes8_ = Rsh_Fir_reg_dr30_;
    goto L195_;
  }

L195_:;
  // i146 = ld i
  Rsh_Fir_reg_i146_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L197() else D56()
  // L197()
  goto L197_;

L196_:;
  // dx44 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx44_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty());
  // goto L37(i8, dx44)
  // L37(i8, dx44)
  Rsh_Fir_reg_i145_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_dx44_;
  goto L37_;

D56_:;
  // deopt 198 [i143, coltypes8, i146]
  SEXP Rsh_Fir_array_deopt_stack56[3];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_i143_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_coltypes8_;
  Rsh_Fir_array_deopt_stack56[2] = Rsh_Fir_reg_i146_;
  Rsh_Fir_deopt(198, 3, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L197_:;
  // i147 = force? i146
  Rsh_Fir_reg_i147_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i146_);
  // __11 = ldf `[` in base
  Rsh_Fir_reg___11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r72 = dyn __11(coltypes8, i147)
  SEXP Rsh_Fir_array_args186[2];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_coltypes8_;
  Rsh_Fir_array_args186[1] = Rsh_Fir_reg_i147_;
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___11_, 2, Rsh_Fir_array_args186, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L37(i143, r72)
  // L37(i143, r72)
  Rsh_Fir_reg_i145_ = Rsh_Fir_reg_i143_;
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_r72_;
  goto L37_;

L198_:;
  // sym12 = ldf vector
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base12 = ldf vector in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args187[2];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args187[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args187);
  // if guard12 then L199() else L200()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L199()
    goto L199_;
  } else {
  // L200()
    goto L200_;
  }

L199_:;
  // ncols11 = ld ncols
  Rsh_Fir_reg_ncols11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L201() else D57()
  // L201()
  goto L201_;

L200_:;
  // r74 = dyn base12[, length]("list", <lang `[`(ncols, i)>)
  SEXP Rsh_Fir_array_args188[2];
  Rsh_Fir_array_args188[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args188[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names46[2];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 2, Rsh_Fir_array_args188, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L39(i145, r74)
  // L39(i145, r74)
  Rsh_Fir_reg_i152_ = Rsh_Fir_reg_i145_;
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r74_;
  goto L39_;

D57_:;
  // deopt 206 [i145, ncols11]
  SEXP Rsh_Fir_array_deopt_stack57[2];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_i145_;
  Rsh_Fir_array_deopt_stack57[1] = Rsh_Fir_reg_ncols11_;
  Rsh_Fir_deopt(206, 2, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L201_:;
  // ncols12 = force? ncols11
  Rsh_Fir_reg_ncols12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncols11_);
  // checkMissing(ncols12)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_ncols12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty()));
  // c24 = `is.object`(ncols12)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_ncols12_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty());
  // if c24 then L202() else L203(i145, ncols12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L202()
    goto L202_;
  } else {
  // L203(i145, ncols12)
    Rsh_Fir_reg_i154_ = Rsh_Fir_reg_i145_;
    Rsh_Fir_reg_ncols14_ = Rsh_Fir_reg_ncols12_;
    goto L203_;
  }

L202_:;
  // dr32 = tryDispatchBuiltin.1("[", ncols12)
  SEXP Rsh_Fir_array_args191[2];
  Rsh_Fir_array_args191[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args191[1] = Rsh_Fir_reg_ncols12_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args191);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty());
  // if dc16 then L204() else L203(i145, dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L204()
    goto L204_;
  } else {
  // L203(i145, dr32)
    Rsh_Fir_reg_i154_ = Rsh_Fir_reg_i145_;
    Rsh_Fir_reg_ncols14_ = Rsh_Fir_reg_dr32_;
    goto L203_;
  }

L203_:;
  // i157 = ld i
  Rsh_Fir_reg_i157_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L205() else D58()
  // L205()
  goto L205_;

L204_:;
  // dx46 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx46_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty());
  // goto L40(i145, dx46)
  // L40(i145, dx46)
  Rsh_Fir_reg_i156_ = Rsh_Fir_reg_i145_;
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_dx46_;
  goto L40_;

D58_:;
  // deopt 208 [i154, ncols14, i157]
  SEXP Rsh_Fir_array_deopt_stack58[3];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_i154_;
  Rsh_Fir_array_deopt_stack58[1] = Rsh_Fir_reg_ncols14_;
  Rsh_Fir_array_deopt_stack58[2] = Rsh_Fir_reg_i157_;
  Rsh_Fir_deopt(208, 3, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L205_:;
  // i158 = force? i157
  Rsh_Fir_reg_i158_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i157_);
  // __12 = ldf `[` in base
  Rsh_Fir_reg___12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r76 = dyn __12(ncols14, i158)
  SEXP Rsh_Fir_array_args194[2];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_ncols14_;
  Rsh_Fir_array_args194[1] = Rsh_Fir_reg_i158_;
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___12_, 2, Rsh_Fir_array_args194, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L40(i154, r76)
  // L40(i154, r76)
  Rsh_Fir_reg_i156_ = Rsh_Fir_reg_i154_;
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_r76_;
  goto L40_;

D59_:;
  // deopt 212 [i156, r77]
  SEXP Rsh_Fir_array_deopt_stack59[2];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_i156_;
  Rsh_Fir_array_deopt_stack59[1] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(212, 2, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L206_:;
  // goto L39(i156, r77)
  // L39(i156, r77)
  Rsh_Fir_reg_i152_ = Rsh_Fir_reg_i156_;
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r77_;
  goto L39_;

L207_:;
  // ncols15 = ld ncols
  Rsh_Fir_reg_ncols15_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L209() else D60()
  // L209()
  goto L209_;

L208_:;
  // r78 = dyn base13("character", <lang `[`(ncols, i)>)
  SEXP Rsh_Fir_array_args195[2];
  Rsh_Fir_array_args195[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args195[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 2, Rsh_Fir_array_args195, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L41(i152, r78)
  // L41(i152, r78)
  Rsh_Fir_reg_i161_ = Rsh_Fir_reg_i152_;
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r78_;
  goto L41_;

D60_:;
  // deopt 217 [i152, ncols15]
  SEXP Rsh_Fir_array_deopt_stack60[2];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_i152_;
  Rsh_Fir_array_deopt_stack60[1] = Rsh_Fir_reg_ncols15_;
  Rsh_Fir_deopt(217, 2, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L209_:;
  // ncols16 = force? ncols15
  Rsh_Fir_reg_ncols16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncols15_);
  // checkMissing(ncols16)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_ncols16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(ncols16)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_ncols16_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty());
  // if c25 then L210() else L211(i152, ncols16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L210()
    goto L210_;
  } else {
  // L211(i152, ncols16)
    Rsh_Fir_reg_i163_ = Rsh_Fir_reg_i152_;
    Rsh_Fir_reg_ncols18_ = Rsh_Fir_reg_ncols16_;
    goto L211_;
  }

L210_:;
  // dr34 = tryDispatchBuiltin.1("[", ncols16)
  SEXP Rsh_Fir_array_args198[2];
  Rsh_Fir_array_args198[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args198[1] = Rsh_Fir_reg_ncols16_;
  Rsh_Fir_reg_dr34_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args198);
  // dc17 = getTryDispatchBuiltinDispatched(dr34)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dc17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args199, Rsh_Fir_param_types_empty());
  // if dc17 then L212() else L211(i152, dr34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc17_)) {
  // L212()
    goto L212_;
  } else {
  // L211(i152, dr34)
    Rsh_Fir_reg_i163_ = Rsh_Fir_reg_i152_;
    Rsh_Fir_reg_ncols18_ = Rsh_Fir_reg_dr34_;
    goto L211_;
  }

L211_:;
  // i166 = ld i
  Rsh_Fir_reg_i166_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L213() else D61()
  // L213()
  goto L213_;

L212_:;
  // dx48 = getTryDispatchBuiltinValue(dr34)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dx48_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty());
  // goto L42(i152, dx48)
  // L42(i152, dx48)
  Rsh_Fir_reg_i165_ = Rsh_Fir_reg_i152_;
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_dx48_;
  goto L42_;

D61_:;
  // deopt 219 [i163, ncols18, i166]
  SEXP Rsh_Fir_array_deopt_stack61[3];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_i163_;
  Rsh_Fir_array_deopt_stack61[1] = Rsh_Fir_reg_ncols18_;
  Rsh_Fir_array_deopt_stack61[2] = Rsh_Fir_reg_i166_;
  Rsh_Fir_deopt(219, 3, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L213_:;
  // i167 = force? i166
  Rsh_Fir_reg_i167_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i166_);
  // __13 = ldf `[` in base
  Rsh_Fir_reg___13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r80 = dyn __13(ncols18, i167)
  SEXP Rsh_Fir_array_args201[2];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_ncols18_;
  Rsh_Fir_array_args201[1] = Rsh_Fir_reg_i167_;
  SEXP Rsh_Fir_array_arg_names49[2];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___13_, 2, Rsh_Fir_array_args201, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L42(i163, r80)
  // L42(i163, r80)
  Rsh_Fir_reg_i165_ = Rsh_Fir_reg_i163_;
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_r80_;
  goto L42_;

D62_:;
  // deopt 223 [i165, r81]
  SEXP Rsh_Fir_array_deopt_stack62[2];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_i165_;
  Rsh_Fir_array_deopt_stack62[1] = Rsh_Fir_reg_r81_;
  Rsh_Fir_deopt(223, 2, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L214_:;
  // goto L41(i165, r81)
  // L41(i165, r81)
  Rsh_Fir_reg_i161_ = Rsh_Fir_reg_i165_;
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r81_;
  goto L41_;

L215_:;
  // ncols19 = ld ncols
  Rsh_Fir_reg_ncols19_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L217() else D63()
  // L217()
  goto L217_;

L216_:;
  // r82 = dyn base14(<lang `[`(ncols, i)>)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args202, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L43(i161, r82)
  // L43(i161, r82)
  Rsh_Fir_reg_i170_ = Rsh_Fir_reg_i161_;
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r82_;
  goto L43_;

D63_:;
  // deopt 226 [i161, ncols19]
  SEXP Rsh_Fir_array_deopt_stack63[2];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_i161_;
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_ncols19_;
  Rsh_Fir_deopt(226, 2, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L217_:;
  // ncols20 = force? ncols19
  Rsh_Fir_reg_ncols20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncols19_);
  // checkMissing(ncols20)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_ncols20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args203, Rsh_Fir_param_types_empty()));
  // c26 = `is.object`(ncols20)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_ncols20_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty());
  // if c26 then L218() else L219(i161, ncols20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L218()
    goto L218_;
  } else {
  // L219(i161, ncols20)
    Rsh_Fir_reg_i172_ = Rsh_Fir_reg_i161_;
    Rsh_Fir_reg_ncols22_ = Rsh_Fir_reg_ncols20_;
    goto L219_;
  }

L218_:;
  // dr36 = tryDispatchBuiltin.1("[", ncols20)
  SEXP Rsh_Fir_array_args205[2];
  Rsh_Fir_array_args205[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args205[1] = Rsh_Fir_reg_ncols20_;
  Rsh_Fir_reg_dr36_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args205);
  // dc18 = getTryDispatchBuiltinDispatched(dr36)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dc18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty());
  // if dc18 then L220() else L219(i161, dr36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc18_)) {
  // L220()
    goto L220_;
  } else {
  // L219(i161, dr36)
    Rsh_Fir_reg_i172_ = Rsh_Fir_reg_i161_;
    Rsh_Fir_reg_ncols22_ = Rsh_Fir_reg_dr36_;
    goto L219_;
  }

L219_:;
  // i175 = ld i
  Rsh_Fir_reg_i175_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L221() else D64()
  // L221()
  goto L221_;

L220_:;
  // dx50 = getTryDispatchBuiltinValue(dr36)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dx50_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args207, Rsh_Fir_param_types_empty());
  // goto L44(i161, dx50)
  // L44(i161, dx50)
  Rsh_Fir_reg_i174_ = Rsh_Fir_reg_i161_;
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_dx50_;
  goto L44_;

D64_:;
  // deopt 228 [i172, ncols22, i175]
  SEXP Rsh_Fir_array_deopt_stack64[3];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_i172_;
  Rsh_Fir_array_deopt_stack64[1] = Rsh_Fir_reg_ncols22_;
  Rsh_Fir_array_deopt_stack64[2] = Rsh_Fir_reg_i175_;
  Rsh_Fir_deopt(228, 3, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L221_:;
  // i176 = force? i175
  Rsh_Fir_reg_i176_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i175_);
  // __14 = ldf `[` in base
  Rsh_Fir_reg___14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r84 = dyn __14(ncols22, i176)
  SEXP Rsh_Fir_array_args208[2];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_ncols22_;
  Rsh_Fir_array_args208[1] = Rsh_Fir_reg_i176_;
  SEXP Rsh_Fir_array_arg_names51[2];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___14_, 2, Rsh_Fir_array_args208, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L44(i172, r84)
  // L44(i172, r84)
  Rsh_Fir_reg_i174_ = Rsh_Fir_reg_i172_;
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_r84_;
  goto L44_;

L222_:;
  // sym15 = ldf any
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base15 = ldf any in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args209[2];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args209[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args209);
  // if guard15 then L242() else L243()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L242()
    goto L242_;
  } else {
  // L243()
    goto L243_;
  }

D65_:;
  // deopt 232 [i178, i180, inlist17]
  SEXP Rsh_Fir_array_deopt_stack65[3];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_i178_;
  Rsh_Fir_array_deopt_stack65[1] = Rsh_Fir_reg_i180_;
  Rsh_Fir_array_deopt_stack65[2] = Rsh_Fir_reg_inlist17_;
  Rsh_Fir_deopt(232, 3, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L223_:;
  // inlist18 = force? inlist17
  Rsh_Fir_reg_inlist18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inlist17_);
  // checkMissing(inlist18)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_inlist18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args210, Rsh_Fir_param_types_empty()));
  // c28 = `is.object`(inlist18)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_inlist18_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty());
  // if c28 then L224() else L225(i178, i180, inlist18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L224()
    goto L224_;
  } else {
  // L225(i178, i180, inlist18)
    Rsh_Fir_reg_i187_ = Rsh_Fir_reg_i178_;
    Rsh_Fir_reg_i188_ = Rsh_Fir_reg_i180_;
    Rsh_Fir_reg_inlist20_ = Rsh_Fir_reg_inlist18_;
    goto L225_;
  }

L224_:;
  // dr38 = tryDispatchBuiltin.1("[[", inlist18)
  SEXP Rsh_Fir_array_args212[2];
  Rsh_Fir_array_args212[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args212[1] = Rsh_Fir_reg_inlist18_;
  Rsh_Fir_reg_dr38_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args212);
  // dc19 = getTryDispatchBuiltinDispatched(dr38)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dc19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args213, Rsh_Fir_param_types_empty());
  // if dc19 then L226() else L225(i178, i180, dr38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc19_)) {
  // L226()
    goto L226_;
  } else {
  // L225(i178, i180, dr38)
    Rsh_Fir_reg_i187_ = Rsh_Fir_reg_i178_;
    Rsh_Fir_reg_i188_ = Rsh_Fir_reg_i180_;
    Rsh_Fir_reg_inlist20_ = Rsh_Fir_reg_dr38_;
    goto L225_;
  }

L225_:;
  // j10 = ld j
  Rsh_Fir_reg_j10_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L227() else D66()
  // L227()
  goto L227_;

L226_:;
  // dx52 = getTryDispatchBuiltinValue(dr38)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dx52_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty());
  // goto L46(i178, i180, dx52)
  // L46(i178, i180, dx52)
  Rsh_Fir_reg_i191_ = Rsh_Fir_reg_i178_;
  Rsh_Fir_reg_i192_ = Rsh_Fir_reg_i180_;
  Rsh_Fir_reg_dx53_ = Rsh_Fir_reg_dx52_;
  goto L46_;

D66_:;
  // deopt 234 [i187, i188, inlist20, j10]
  SEXP Rsh_Fir_array_deopt_stack66[4];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_i187_;
  Rsh_Fir_array_deopt_stack66[1] = Rsh_Fir_reg_i188_;
  Rsh_Fir_array_deopt_stack66[2] = Rsh_Fir_reg_inlist20_;
  Rsh_Fir_array_deopt_stack66[3] = Rsh_Fir_reg_j10_;
  Rsh_Fir_deopt(234, 4, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L227_:;
  // j11 = force? j10
  Rsh_Fir_reg_j11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j10_);
  // __15 = ldf `[[` in base
  Rsh_Fir_reg___15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r86 = dyn __15(inlist20, j11)
  SEXP Rsh_Fir_array_args215[2];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_inlist20_;
  Rsh_Fir_array_args215[1] = Rsh_Fir_reg_j11_;
  SEXP Rsh_Fir_array_arg_names52[2];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___15_, 2, Rsh_Fir_array_args215, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L46(i187, i188, r86)
  // L46(i187, i188, r86)
  Rsh_Fir_reg_i191_ = Rsh_Fir_reg_i187_;
  Rsh_Fir_reg_i192_ = Rsh_Fir_reg_i188_;
  Rsh_Fir_reg_dx53_ = Rsh_Fir_reg_r86_;
  goto L46_;

L228_:;
  // dr40 = tryDispatchBuiltin.0("[[<-", l16, dx53)
  SEXP Rsh_Fir_array_args216[3];
  Rsh_Fir_array_args216[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args216[1] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_args216[2] = Rsh_Fir_reg_dx53_;
  Rsh_Fir_reg_dr40_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args216);
  // dc20 = getTryDispatchBuiltinDispatched(dr40)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dc20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args217, Rsh_Fir_param_types_empty());
  // if dc20 then L230() else L229(i191, i192, dx53, dr40)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc20_)) {
  // L230()
    goto L230_;
  } else {
  // L229(i191, i192, dx53, dr40)
    Rsh_Fir_reg_i195_ = Rsh_Fir_reg_i191_;
    Rsh_Fir_reg_i196_ = Rsh_Fir_reg_i192_;
    Rsh_Fir_reg_dx55_ = Rsh_Fir_reg_dx53_;
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_dr40_;
    goto L229_;
  }

L229_:;
  // ind5 = ld ind1
  Rsh_Fir_reg_ind5_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L231() else D67()
  // L231()
  goto L231_;

L230_:;
  // dx57 = getTryDispatchBuiltinValue(dr40)
  SEXP Rsh_Fir_array_args218[1];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dx57_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args218, Rsh_Fir_param_types_empty());
  // goto L47(i191, i192, dx57)
  // L47(i191, i192, dx57)
  Rsh_Fir_reg_i199_ = Rsh_Fir_reg_i191_;
  Rsh_Fir_reg_i200_ = Rsh_Fir_reg_i192_;
  Rsh_Fir_reg_dx59_ = Rsh_Fir_reg_dx57_;
  goto L47_;

D67_:;
  // deopt 238 [i195, i196, dx55, l18, dx53, ind5]
  SEXP Rsh_Fir_array_deopt_stack67[6];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_i195_;
  Rsh_Fir_array_deopt_stack67[1] = Rsh_Fir_reg_i196_;
  Rsh_Fir_array_deopt_stack67[2] = Rsh_Fir_reg_dx55_;
  Rsh_Fir_array_deopt_stack67[3] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_deopt_stack67[4] = Rsh_Fir_reg_dx53_;
  Rsh_Fir_array_deopt_stack67[5] = Rsh_Fir_reg_ind5_;
  Rsh_Fir_deopt(238, 6, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L231_:;
  // ind6 = force? ind5
  Rsh_Fir_reg_ind6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind5_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r87 = dyn ____1(l18, dx53, ind6)
  SEXP Rsh_Fir_array_args219[3];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_args219[1] = Rsh_Fir_reg_dx53_;
  Rsh_Fir_array_args219[2] = Rsh_Fir_reg_ind6_;
  SEXP Rsh_Fir_array_arg_names53[3];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_array_arg_names53[2] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args219, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L47(i195, i196, r87)
  // L47(i195, i196, r87)
  Rsh_Fir_reg_i199_ = Rsh_Fir_reg_i195_;
  Rsh_Fir_reg_i200_ = Rsh_Fir_reg_i196_;
  Rsh_Fir_reg_dx59_ = Rsh_Fir_reg_r87_;
  goto L47_;

D68_:;
  // deopt 242 [i199, i200, lnames4]
  SEXP Rsh_Fir_array_deopt_stack68[3];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_i199_;
  Rsh_Fir_array_deopt_stack68[1] = Rsh_Fir_reg_i200_;
  Rsh_Fir_array_deopt_stack68[2] = Rsh_Fir_reg_lnames4_;
  Rsh_Fir_deopt(242, 3, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L232_:;
  // lnames5 = force? lnames4
  Rsh_Fir_reg_lnames5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lnames4_);
  // checkMissing(lnames5)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_lnames5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args220, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(lnames5)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_lnames5_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args221, Rsh_Fir_param_types_empty());
  // if c30 then L233() else L234(i199, i200, lnames5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L233()
    goto L233_;
  } else {
  // L234(i199, i200, lnames5)
    Rsh_Fir_reg_i203_ = Rsh_Fir_reg_i199_;
    Rsh_Fir_reg_i204_ = Rsh_Fir_reg_i200_;
    Rsh_Fir_reg_lnames7_ = Rsh_Fir_reg_lnames5_;
    goto L234_;
  }

L233_:;
  // dr42 = tryDispatchBuiltin.1("[", lnames5)
  SEXP Rsh_Fir_array_args222[2];
  Rsh_Fir_array_args222[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args222[1] = Rsh_Fir_reg_lnames5_;
  Rsh_Fir_reg_dr42_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args222);
  // dc21 = getTryDispatchBuiltinDispatched(dr42)
  SEXP Rsh_Fir_array_args223[1];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dc21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty());
  // if dc21 then L235() else L234(i199, i200, dr42)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc21_)) {
  // L235()
    goto L235_;
  } else {
  // L234(i199, i200, dr42)
    Rsh_Fir_reg_i203_ = Rsh_Fir_reg_i199_;
    Rsh_Fir_reg_i204_ = Rsh_Fir_reg_i200_;
    Rsh_Fir_reg_lnames7_ = Rsh_Fir_reg_dr42_;
    goto L234_;
  }

L234_:;
  // j12 = ld j
  Rsh_Fir_reg_j12_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L236() else D69()
  // L236()
  goto L236_;

L235_:;
  // dx60 = getTryDispatchBuiltinValue(dr42)
  SEXP Rsh_Fir_array_args224[1];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dx60_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args224, Rsh_Fir_param_types_empty());
  // goto L48(i199, i200, dx60)
  // L48(i199, i200, dx60)
  Rsh_Fir_reg_i207_ = Rsh_Fir_reg_i199_;
  Rsh_Fir_reg_i208_ = Rsh_Fir_reg_i200_;
  Rsh_Fir_reg_dx61_ = Rsh_Fir_reg_dx60_;
  goto L48_;

D69_:;
  // deopt 244 [i203, i204, lnames7, j12]
  SEXP Rsh_Fir_array_deopt_stack69[4];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_i203_;
  Rsh_Fir_array_deopt_stack69[1] = Rsh_Fir_reg_i204_;
  Rsh_Fir_array_deopt_stack69[2] = Rsh_Fir_reg_lnames7_;
  Rsh_Fir_array_deopt_stack69[3] = Rsh_Fir_reg_j12_;
  Rsh_Fir_deopt(244, 4, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L236_:;
  // j13 = force? j12
  Rsh_Fir_reg_j13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j12_);
  // __16 = ldf `[` in base
  Rsh_Fir_reg___16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r88 = dyn __16(lnames7, j13)
  SEXP Rsh_Fir_array_args225[2];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_lnames7_;
  Rsh_Fir_array_args225[1] = Rsh_Fir_reg_j13_;
  SEXP Rsh_Fir_array_arg_names54[2];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___16_, 2, Rsh_Fir_array_args225, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L48(i203, i204, r88)
  // L48(i203, i204, r88)
  Rsh_Fir_reg_i207_ = Rsh_Fir_reg_i203_;
  Rsh_Fir_reg_i208_ = Rsh_Fir_reg_i204_;
  Rsh_Fir_reg_dx61_ = Rsh_Fir_reg_r88_;
  goto L48_;

L237_:;
  // dr44 = tryDispatchBuiltin.0("[<-", l19, dx61)
  SEXP Rsh_Fir_array_args226[3];
  Rsh_Fir_array_args226[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args226[1] = Rsh_Fir_reg_l19_;
  Rsh_Fir_array_args226[2] = Rsh_Fir_reg_dx61_;
  Rsh_Fir_reg_dr44_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args226);
  // dc22 = getTryDispatchBuiltinDispatched(dr44)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dc22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args227, Rsh_Fir_param_types_empty());
  // if dc22 then L239() else L238(i207, i208, dx61, dr44)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc22_)) {
  // L239()
    goto L239_;
  } else {
  // L238(i207, i208, dx61, dr44)
    Rsh_Fir_reg_i211_ = Rsh_Fir_reg_i207_;
    Rsh_Fir_reg_i212_ = Rsh_Fir_reg_i208_;
    Rsh_Fir_reg_dx63_ = Rsh_Fir_reg_dx61_;
    Rsh_Fir_reg_l21_ = Rsh_Fir_reg_dr44_;
    goto L238_;
  }

L238_:;
  // ind7 = ld ind1
  Rsh_Fir_reg_ind7_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L240() else D70()
  // L240()
  goto L240_;

L239_:;
  // dx65 = getTryDispatchBuiltinValue(dr44)
  SEXP Rsh_Fir_array_args228[1];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dx65_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args228, Rsh_Fir_param_types_empty());
  // goto L49(i207, i208, dx65)
  // L49(i207, i208, dx65)
  Rsh_Fir_reg_i215_ = Rsh_Fir_reg_i207_;
  Rsh_Fir_reg_i216_ = Rsh_Fir_reg_i208_;
  Rsh_Fir_reg_dx67_ = Rsh_Fir_reg_dx65_;
  goto L49_;

D70_:;
  // deopt 248 [i211, i212, dx63, l21, dx61, ind7]
  SEXP Rsh_Fir_array_deopt_stack70[6];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_i211_;
  Rsh_Fir_array_deopt_stack70[1] = Rsh_Fir_reg_i212_;
  Rsh_Fir_array_deopt_stack70[2] = Rsh_Fir_reg_dx63_;
  Rsh_Fir_array_deopt_stack70[3] = Rsh_Fir_reg_l21_;
  Rsh_Fir_array_deopt_stack70[4] = Rsh_Fir_reg_dx61_;
  Rsh_Fir_array_deopt_stack70[5] = Rsh_Fir_reg_ind7_;
  Rsh_Fir_deopt(248, 6, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L240_:;
  // ind8 = force? ind7
  Rsh_Fir_reg_ind8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind7_);
  // ___3 = ldf `[<-` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r89 = dyn ___3(l21, dx61, ind8)
  SEXP Rsh_Fir_array_args229[3];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_l21_;
  Rsh_Fir_array_args229[1] = Rsh_Fir_reg_dx61_;
  Rsh_Fir_array_args229[2] = Rsh_Fir_reg_ind8_;
  SEXP Rsh_Fir_array_arg_names55[3];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_array_arg_names55[2] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 3, Rsh_Fir_array_args229, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L49(i211, i212, r89)
  // L49(i211, i212, r89)
  Rsh_Fir_reg_i215_ = Rsh_Fir_reg_i211_;
  Rsh_Fir_reg_i216_ = Rsh_Fir_reg_i212_;
  Rsh_Fir_reg_dx67_ = Rsh_Fir_reg_r89_;
  goto L49_;

D71_:;
  // deopt 252 [i215, i216, j14]
  SEXP Rsh_Fir_array_deopt_stack71[3];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_i215_;
  Rsh_Fir_array_deopt_stack71[1] = Rsh_Fir_reg_i216_;
  Rsh_Fir_array_deopt_stack71[2] = Rsh_Fir_reg_j14_;
  Rsh_Fir_deopt(252, 3, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L241_:;
  // j15 = force? j14
  Rsh_Fir_reg_j15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j14_);
  // checkMissing(j15)
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_j15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args230, Rsh_Fir_param_types_empty()));
  // r90 = `+`(j15, 1)
  SEXP Rsh_Fir_array_args231[2];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_j15_;
  Rsh_Fir_array_args231[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args231, Rsh_Fir_param_types_empty());
  // st j = r90
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r90_, RHO);
  (void)(Rsh_Fir_reg_r90_);
  // goto L45(i215, i216)
  // L45(i215, i216)
  Rsh_Fir_reg_i178_ = Rsh_Fir_reg_i215_;
  Rsh_Fir_reg_i179_ = Rsh_Fir_reg_i216_;
  goto L45_;

L242_:;
  // cnames4 = ld cnames
  Rsh_Fir_reg_cnames4_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L244() else D72()
  // L244()
  goto L244_;

L243_:;
  // r91 = dyn base15(<lang `!=`(cnames, "")>)
  SEXP Rsh_Fir_array_args232[1];
  Rsh_Fir_array_args232[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args232, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L51(i178, r91)
  // L51(i178, r91)
  Rsh_Fir_reg_i219_ = Rsh_Fir_reg_i178_;
  Rsh_Fir_reg_r92_ = Rsh_Fir_reg_r91_;
  goto L51_;

D72_:;
  // deopt 262 [i178, cnames4]
  SEXP Rsh_Fir_array_deopt_stack72[2];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_i178_;
  Rsh_Fir_array_deopt_stack72[1] = Rsh_Fir_reg_cnames4_;
  Rsh_Fir_deopt(262, 2, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L244_:;
  // cnames5 = force? cnames4
  Rsh_Fir_reg_cnames5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cnames4_);
  // checkMissing(cnames5)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_cnames5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty()));
  // r93 = `!=`(cnames5, "")
  SEXP Rsh_Fir_array_args234[2];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_cnames5_;
  Rsh_Fir_array_args234[1] = Rsh_const(CCP, 50);
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args234, Rsh_Fir_param_types_empty());
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r94 = dyn any1(r93)
  SEXP Rsh_Fir_array_args235[1];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_array_arg_names57[1];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args235, Rsh_Fir_array_arg_names57, CCP, RHO);
  // check L245() else D73()
  // L245()
  goto L245_;

D73_:;
  // deopt 267 [i178, r94]
  SEXP Rsh_Fir_array_deopt_stack73[2];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_i178_;
  Rsh_Fir_array_deopt_stack73[1] = Rsh_Fir_reg_r94_;
  Rsh_Fir_deopt(267, 2, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L245_:;
  // goto L51(i178, r94)
  // L51(i178, r94)
  Rsh_Fir_reg_i219_ = Rsh_Fir_reg_i178_;
  Rsh_Fir_reg_r92_ = Rsh_Fir_reg_r94_;
  goto L51_;

L246_:;
  // cnames6 = ld cnames
  Rsh_Fir_reg_cnames6_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L247() else D74()
  // L247()
  goto L247_;

D74_:;
  // deopt 268 [i219, cnames6]
  SEXP Rsh_Fir_array_deopt_stack74[2];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_i219_;
  Rsh_Fir_array_deopt_stack74[1] = Rsh_Fir_reg_cnames6_;
  Rsh_Fir_deopt(268, 2, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L247_:;
  // cnames7 = force? cnames6
  Rsh_Fir_reg_cnames7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cnames6_);
  // checkMissing(cnames7)
  SEXP Rsh_Fir_array_args236[1];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_cnames7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args236, Rsh_Fir_param_types_empty()));
  // l22 = ld x
  Rsh_Fir_reg_l22_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L248() else D75()
  // L248()
  goto L248_;

D75_:;
  // deopt 271 [i219, cnames7, l22, cnames7]
  SEXP Rsh_Fir_array_deopt_stack75[4];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_i219_;
  Rsh_Fir_array_deopt_stack75[1] = Rsh_Fir_reg_cnames7_;
  Rsh_Fir_array_deopt_stack75[2] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_deopt_stack75[3] = Rsh_Fir_reg_cnames7_;
  Rsh_Fir_deopt(271, 4, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L248_:;
  // r95 = dyn names__(l22, NULL, cnames7)
  SEXP Rsh_Fir_array_args237[3];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_args237[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args237[2] = Rsh_Fir_reg_cnames7_;
  SEXP Rsh_Fir_array_arg_names58[3];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_array_arg_names58[1] = R_MissingArg;
  Rsh_Fir_array_arg_names58[2] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args237, Rsh_Fir_array_arg_names58, CCP, RHO);
  // check L249() else D76()
  // L249()
  goto L249_;

D76_:;
  // deopt 273 [i219, cnames7, r95]
  SEXP Rsh_Fir_array_deopt_stack76[3];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_i219_;
  Rsh_Fir_array_deopt_stack76[1] = Rsh_Fir_reg_cnames7_;
  Rsh_Fir_array_deopt_stack76[2] = Rsh_Fir_reg_r95_;
  Rsh_Fir_deopt(273, 3, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

L249_:;
  // st x = r95
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r95_, RHO);
  (void)(Rsh_Fir_reg_r95_);
  // goto L53(i219)
  // L53(i219)
  Rsh_Fir_reg_i222_ = Rsh_Fir_reg_i219_;
  goto L53_;

D77_:;
  // deopt 277 [i222, x13]
  SEXP Rsh_Fir_array_deopt_stack77[2];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_i222_;
  Rsh_Fir_array_deopt_stack77[1] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(277, 2, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

L251_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args238, Rsh_Fir_param_types_empty()));
  // l23 = ld rlist
  Rsh_Fir_reg_l23_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c33 = `is.object`(l23)
  SEXP Rsh_Fir_array_args239[1];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_l23_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args239, Rsh_Fir_param_types_empty());
  // if c33 then L252() else L253(i222, x14, l23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L252()
    goto L252_;
  } else {
  // L253(i222, x14, l23)
    Rsh_Fir_reg_i224_ = Rsh_Fir_reg_i222_;
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_x14_;
    Rsh_Fir_reg_l25_ = Rsh_Fir_reg_l23_;
    goto L253_;
  }

L252_:;
  // dr46 = tryDispatchBuiltin.0("[[<-", l23, x14)
  SEXP Rsh_Fir_array_args240[3];
  Rsh_Fir_array_args240[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args240[1] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_args240[2] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_dr46_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args240);
  // dc23 = getTryDispatchBuiltinDispatched(dr46)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_dr46_;
  Rsh_Fir_reg_dc23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args241, Rsh_Fir_param_types_empty());
  // if dc23 then L254() else L253(i222, x14, dr46)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc23_)) {
  // L254()
    goto L254_;
  } else {
  // L253(i222, x14, dr46)
    Rsh_Fir_reg_i224_ = Rsh_Fir_reg_i222_;
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_x14_;
    Rsh_Fir_reg_l25_ = Rsh_Fir_reg_dr46_;
    goto L253_;
  }

L253_:;
  // i227 = ld i
  Rsh_Fir_reg_i227_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L255() else D78()
  // L255()
  goto L255_;

L254_:;
  // dx68 = getTryDispatchBuiltinValue(dr46)
  SEXP Rsh_Fir_array_args242[1];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_dr46_;
  Rsh_Fir_reg_dx68_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args242, Rsh_Fir_param_types_empty());
  // goto L54(i222, dx68)
  // L54(i222, dx68)
  Rsh_Fir_reg_i226_ = Rsh_Fir_reg_i222_;
  Rsh_Fir_reg_dx69_ = Rsh_Fir_reg_dx68_;
  goto L54_;

D78_:;
  // deopt 280 [i224, x16, l25, x14, i227]
  SEXP Rsh_Fir_array_deopt_stack78[5];
  Rsh_Fir_array_deopt_stack78[0] = Rsh_Fir_reg_i224_;
  Rsh_Fir_array_deopt_stack78[1] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_deopt_stack78[2] = Rsh_Fir_reg_l25_;
  Rsh_Fir_array_deopt_stack78[3] = Rsh_Fir_reg_x14_;
  Rsh_Fir_array_deopt_stack78[4] = Rsh_Fir_reg_i227_;
  Rsh_Fir_deopt(280, 5, Rsh_Fir_array_deopt_stack78, CCP, RHO);
  return R_NilValue;

L255_:;
  // i228 = force? i227
  Rsh_Fir_reg_i228_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i227_);
  // ____2 = ldf `[[<-` in base
  Rsh_Fir_reg_____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r96 = dyn ____2(l25, x14, i228)
  SEXP Rsh_Fir_array_args243[3];
  Rsh_Fir_array_args243[0] = Rsh_Fir_reg_l25_;
  Rsh_Fir_array_args243[1] = Rsh_Fir_reg_x14_;
  Rsh_Fir_array_args243[2] = Rsh_Fir_reg_i228_;
  SEXP Rsh_Fir_array_arg_names59[3];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_array_arg_names59[1] = R_MissingArg;
  Rsh_Fir_array_arg_names59[2] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____2_, 3, Rsh_Fir_array_args243, Rsh_Fir_array_arg_names59, CCP, RHO);
  // goto L54(i224, r96)
  // L54(i224, r96)
  Rsh_Fir_reg_i226_ = Rsh_Fir_reg_i224_;
  Rsh_Fir_reg_dx69_ = Rsh_Fir_reg_r96_;
  goto L54_;

D79_:;
  // deopt 284 [i226, argnames5]
  SEXP Rsh_Fir_array_deopt_stack79[2];
  Rsh_Fir_array_deopt_stack79[0] = Rsh_Fir_reg_i226_;
  Rsh_Fir_array_deopt_stack79[1] = Rsh_Fir_reg_argnames5_;
  Rsh_Fir_deopt(284, 2, Rsh_Fir_array_deopt_stack79, CCP, RHO);
  return R_NilValue;

L256_:;
  // argnames6 = force? argnames5
  Rsh_Fir_reg_argnames6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_argnames5_);
  // checkMissing(argnames6)
  SEXP Rsh_Fir_array_args244[1];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_argnames6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args244, Rsh_Fir_param_types_empty()));
  // c34 = `is.object`(argnames6)
  SEXP Rsh_Fir_array_args245[1];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_argnames6_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args245, Rsh_Fir_param_types_empty());
  // if c34 then L257() else L258(i226, argnames6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L257()
    goto L257_;
  } else {
  // L258(i226, argnames6)
    Rsh_Fir_reg_i230_ = Rsh_Fir_reg_i226_;
    Rsh_Fir_reg_argnames8_ = Rsh_Fir_reg_argnames6_;
    goto L258_;
  }

L257_:;
  // dr48 = tryDispatchBuiltin.1("[", argnames6)
  SEXP Rsh_Fir_array_args246[2];
  Rsh_Fir_array_args246[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args246[1] = Rsh_Fir_reg_argnames6_;
  Rsh_Fir_reg_dr48_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args246);
  // dc24 = getTryDispatchBuiltinDispatched(dr48)
  SEXP Rsh_Fir_array_args247[1];
  Rsh_Fir_array_args247[0] = Rsh_Fir_reg_dr48_;
  Rsh_Fir_reg_dc24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args247, Rsh_Fir_param_types_empty());
  // if dc24 then L259() else L258(i226, dr48)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc24_)) {
  // L259()
    goto L259_;
  } else {
  // L258(i226, dr48)
    Rsh_Fir_reg_i230_ = Rsh_Fir_reg_i226_;
    Rsh_Fir_reg_argnames8_ = Rsh_Fir_reg_dr48_;
    goto L258_;
  }

L258_:;
  // i233 = ld i
  Rsh_Fir_reg_i233_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L260() else D80()
  // L260()
  goto L260_;

L259_:;
  // dx70 = getTryDispatchBuiltinValue(dr48)
  SEXP Rsh_Fir_array_args248[1];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_dr48_;
  Rsh_Fir_reg_dx70_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args248, Rsh_Fir_param_types_empty());
  // goto L55(i226, dx70)
  // L55(i226, dx70)
  Rsh_Fir_reg_i232_ = Rsh_Fir_reg_i226_;
  Rsh_Fir_reg_dx71_ = Rsh_Fir_reg_dx70_;
  goto L55_;

D80_:;
  // deopt 286 [i230, argnames8, i233]
  SEXP Rsh_Fir_array_deopt_stack80[3];
  Rsh_Fir_array_deopt_stack80[0] = Rsh_Fir_reg_i230_;
  Rsh_Fir_array_deopt_stack80[1] = Rsh_Fir_reg_argnames8_;
  Rsh_Fir_array_deopt_stack80[2] = Rsh_Fir_reg_i233_;
  Rsh_Fir_deopt(286, 3, Rsh_Fir_array_deopt_stack80, CCP, RHO);
  return R_NilValue;

L260_:;
  // i234 = force? i233
  Rsh_Fir_reg_i234_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i233_);
  // __17 = ldf `[` in base
  Rsh_Fir_reg___17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r97 = dyn __17(argnames8, i234)
  SEXP Rsh_Fir_array_args249[2];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_argnames8_;
  Rsh_Fir_array_args249[1] = Rsh_Fir_reg_i234_;
  SEXP Rsh_Fir_array_arg_names60[2];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___17_, 2, Rsh_Fir_array_args249, Rsh_Fir_array_arg_names60, CCP, RHO);
  // goto L55(i230, r97)
  // L55(i230, r97)
  Rsh_Fir_reg_i232_ = Rsh_Fir_reg_i230_;
  Rsh_Fir_reg_dx71_ = Rsh_Fir_reg_r97_;
  goto L55_;

L261_:;
  // dr50 = tryDispatchBuiltin.0("[<-", l26, dx71)
  SEXP Rsh_Fir_array_args250[3];
  Rsh_Fir_array_args250[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args250[1] = Rsh_Fir_reg_l26_;
  Rsh_Fir_array_args250[2] = Rsh_Fir_reg_dx71_;
  Rsh_Fir_reg_dr50_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args250);
  // dc25 = getTryDispatchBuiltinDispatched(dr50)
  SEXP Rsh_Fir_array_args251[1];
  Rsh_Fir_array_args251[0] = Rsh_Fir_reg_dr50_;
  Rsh_Fir_reg_dc25_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args251, Rsh_Fir_param_types_empty());
  // if dc25 then L263() else L262(i232, dx71, dr50)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc25_)) {
  // L263()
    goto L263_;
  } else {
  // L262(i232, dx71, dr50)
    Rsh_Fir_reg_i236_ = Rsh_Fir_reg_i232_;
    Rsh_Fir_reg_dx73_ = Rsh_Fir_reg_dx71_;
    Rsh_Fir_reg_l28_ = Rsh_Fir_reg_dr50_;
    goto L262_;
  }

L262_:;
  // i239 = ld i
  Rsh_Fir_reg_i239_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L264() else D81()
  // L264()
  goto L264_;

L263_:;
  // dx75 = getTryDispatchBuiltinValue(dr50)
  SEXP Rsh_Fir_array_args252[1];
  Rsh_Fir_array_args252[0] = Rsh_Fir_reg_dr50_;
  Rsh_Fir_reg_dx75_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args252, Rsh_Fir_param_types_empty());
  // goto L56(i232, dx71, dx75)
  // L56(i232, dx71, dx75)
  Rsh_Fir_reg_i238_ = Rsh_Fir_reg_i232_;
  Rsh_Fir_reg_dx76_ = Rsh_Fir_reg_dx71_;
  Rsh_Fir_reg_dx77_ = Rsh_Fir_reg_dx75_;
  goto L56_;

D81_:;
  // deopt 290 [i236, dx73, l28, dx71, i239]
  SEXP Rsh_Fir_array_deopt_stack81[5];
  Rsh_Fir_array_deopt_stack81[0] = Rsh_Fir_reg_i236_;
  Rsh_Fir_array_deopt_stack81[1] = Rsh_Fir_reg_dx73_;
  Rsh_Fir_array_deopt_stack81[2] = Rsh_Fir_reg_l28_;
  Rsh_Fir_array_deopt_stack81[3] = Rsh_Fir_reg_dx71_;
  Rsh_Fir_array_deopt_stack81[4] = Rsh_Fir_reg_i239_;
  Rsh_Fir_deopt(290, 5, Rsh_Fir_array_deopt_stack81, CCP, RHO);
  return R_NilValue;

L264_:;
  // i240 = force? i239
  Rsh_Fir_reg_i240_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i239_);
  // ___4 = ldf `[<-` in base
  Rsh_Fir_reg____4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r98 = dyn ___4(l28, dx71, i240)
  SEXP Rsh_Fir_array_args253[3];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_l28_;
  Rsh_Fir_array_args253[1] = Rsh_Fir_reg_dx71_;
  Rsh_Fir_array_args253[2] = Rsh_Fir_reg_i240_;
  SEXP Rsh_Fir_array_arg_names61[3];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_array_arg_names61[1] = R_MissingArg;
  Rsh_Fir_array_arg_names61[2] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____4_, 3, Rsh_Fir_array_args253, Rsh_Fir_array_arg_names61, CCP, RHO);
  // goto L56(i236, dx73, r98)
  // L56(i236, dx73, r98)
  Rsh_Fir_reg_i238_ = Rsh_Fir_reg_i236_;
  Rsh_Fir_reg_dx76_ = Rsh_Fir_reg_dx73_;
  Rsh_Fir_reg_dx77_ = Rsh_Fir_reg_r98_;
  goto L56_;

D82_:;
  // deopt 294 [i145, inlist21]
  SEXP Rsh_Fir_array_deopt_stack82[2];
  Rsh_Fir_array_deopt_stack82[0] = Rsh_Fir_reg_i145_;
  Rsh_Fir_array_deopt_stack82[1] = Rsh_Fir_reg_inlist21_;
  Rsh_Fir_deopt(294, 2, Rsh_Fir_array_deopt_stack82, CCP, RHO);
  return R_NilValue;

L266_:;
  // inlist22 = force? inlist21
  Rsh_Fir_reg_inlist22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inlist21_);
  // checkMissing(inlist22)
  SEXP Rsh_Fir_array_args254[1];
  Rsh_Fir_array_args254[0] = Rsh_Fir_reg_inlist22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args254, Rsh_Fir_param_types_empty()));
  // c36 = `is.object`(inlist22)
  SEXP Rsh_Fir_array_args255[1];
  Rsh_Fir_array_args255[0] = Rsh_Fir_reg_inlist22_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args255, Rsh_Fir_param_types_empty());
  // if c36 then L267() else L268(i145, inlist22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L267()
    goto L267_;
  } else {
  // L268(i145, inlist22)
    Rsh_Fir_reg_i242_ = Rsh_Fir_reg_i145_;
    Rsh_Fir_reg_inlist24_ = Rsh_Fir_reg_inlist22_;
    goto L268_;
  }

L267_:;
  // dr52 = tryDispatchBuiltin.1("[[", inlist22)
  SEXP Rsh_Fir_array_args256[2];
  Rsh_Fir_array_args256[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args256[1] = Rsh_Fir_reg_inlist22_;
  Rsh_Fir_reg_dr52_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args256);
  // dc26 = getTryDispatchBuiltinDispatched(dr52)
  SEXP Rsh_Fir_array_args257[1];
  Rsh_Fir_array_args257[0] = Rsh_Fir_reg_dr52_;
  Rsh_Fir_reg_dc26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args257, Rsh_Fir_param_types_empty());
  // if dc26 then L269() else L268(i145, dr52)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc26_)) {
  // L269()
    goto L269_;
  } else {
  // L268(i145, dr52)
    Rsh_Fir_reg_i242_ = Rsh_Fir_reg_i145_;
    Rsh_Fir_reg_inlist24_ = Rsh_Fir_reg_dr52_;
    goto L268_;
  }

L268_:;
  // j16 = ld j
  Rsh_Fir_reg_j16_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L270() else D83()
  // L270()
  goto L270_;

L269_:;
  // dx78 = getTryDispatchBuiltinValue(dr52)
  SEXP Rsh_Fir_array_args258[1];
  Rsh_Fir_array_args258[0] = Rsh_Fir_reg_dr52_;
  Rsh_Fir_reg_dx78_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args258, Rsh_Fir_param_types_empty());
  // goto L57(i145, dx78)
  // L57(i145, dx78)
  Rsh_Fir_reg_i244_ = Rsh_Fir_reg_i145_;
  Rsh_Fir_reg_dx79_ = Rsh_Fir_reg_dx78_;
  goto L57_;

D83_:;
  // deopt 296 [i242, inlist24, j16]
  SEXP Rsh_Fir_array_deopt_stack83[3];
  Rsh_Fir_array_deopt_stack83[0] = Rsh_Fir_reg_i242_;
  Rsh_Fir_array_deopt_stack83[1] = Rsh_Fir_reg_inlist24_;
  Rsh_Fir_array_deopt_stack83[2] = Rsh_Fir_reg_j16_;
  Rsh_Fir_deopt(296, 3, Rsh_Fir_array_deopt_stack83, CCP, RHO);
  return R_NilValue;

L270_:;
  // j17 = force? j16
  Rsh_Fir_reg_j17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j16_);
  // __18 = ldf `[[` in base
  Rsh_Fir_reg___18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r99 = dyn __18(inlist24, j17)
  SEXP Rsh_Fir_array_args259[2];
  Rsh_Fir_array_args259[0] = Rsh_Fir_reg_inlist24_;
  Rsh_Fir_array_args259[1] = Rsh_Fir_reg_j17_;
  SEXP Rsh_Fir_array_arg_names62[2];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_array_arg_names62[1] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___18_, 2, Rsh_Fir_array_args259, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L57(i242, r99)
  // L57(i242, r99)
  Rsh_Fir_reg_i244_ = Rsh_Fir_reg_i242_;
  Rsh_Fir_reg_dx79_ = Rsh_Fir_reg_r99_;
  goto L57_;

L271_:;
  // dr54 = tryDispatchBuiltin.0("[[<-", l29, dx79)
  SEXP Rsh_Fir_array_args260[3];
  Rsh_Fir_array_args260[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args260[1] = Rsh_Fir_reg_l29_;
  Rsh_Fir_array_args260[2] = Rsh_Fir_reg_dx79_;
  Rsh_Fir_reg_dr54_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args260);
  // dc27 = getTryDispatchBuiltinDispatched(dr54)
  SEXP Rsh_Fir_array_args261[1];
  Rsh_Fir_array_args261[0] = Rsh_Fir_reg_dr54_;
  Rsh_Fir_reg_dc27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args261, Rsh_Fir_param_types_empty());
  // if dc27 then L273() else L272(i244, dx79, dr54)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc27_)) {
  // L273()
    goto L273_;
  } else {
  // L272(i244, dx79, dr54)
    Rsh_Fir_reg_i246_ = Rsh_Fir_reg_i244_;
    Rsh_Fir_reg_dx81_ = Rsh_Fir_reg_dx79_;
    Rsh_Fir_reg_l31_ = Rsh_Fir_reg_dr54_;
    goto L272_;
  }

L272_:;
  // i249 = ld i
  Rsh_Fir_reg_i249_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L274() else D84()
  // L274()
  goto L274_;

L273_:;
  // dx83 = getTryDispatchBuiltinValue(dr54)
  SEXP Rsh_Fir_array_args262[1];
  Rsh_Fir_array_args262[0] = Rsh_Fir_reg_dr54_;
  Rsh_Fir_reg_dx83_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args262, Rsh_Fir_param_types_empty());
  // goto L58(i244, dx83)
  // L58(i244, dx83)
  Rsh_Fir_reg_i248_ = Rsh_Fir_reg_i244_;
  Rsh_Fir_reg_dx85_ = Rsh_Fir_reg_dx83_;
  goto L58_;

D84_:;
  // deopt 300 [i246, dx81, l31, dx79, i249]
  SEXP Rsh_Fir_array_deopt_stack84[5];
  Rsh_Fir_array_deopt_stack84[0] = Rsh_Fir_reg_i246_;
  Rsh_Fir_array_deopt_stack84[1] = Rsh_Fir_reg_dx81_;
  Rsh_Fir_array_deopt_stack84[2] = Rsh_Fir_reg_l31_;
  Rsh_Fir_array_deopt_stack84[3] = Rsh_Fir_reg_dx79_;
  Rsh_Fir_array_deopt_stack84[4] = Rsh_Fir_reg_i249_;
  Rsh_Fir_deopt(300, 5, Rsh_Fir_array_deopt_stack84, CCP, RHO);
  return R_NilValue;

L274_:;
  // i250 = force? i249
  Rsh_Fir_reg_i250_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i249_);
  // ____3 = ldf `[[<-` in base
  Rsh_Fir_reg_____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r100 = dyn ____3(l31, dx79, i250)
  SEXP Rsh_Fir_array_args263[3];
  Rsh_Fir_array_args263[0] = Rsh_Fir_reg_l31_;
  Rsh_Fir_array_args263[1] = Rsh_Fir_reg_dx79_;
  Rsh_Fir_array_args263[2] = Rsh_Fir_reg_i250_;
  SEXP Rsh_Fir_array_arg_names63[3];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_array_arg_names63[1] = R_MissingArg;
  Rsh_Fir_array_arg_names63[2] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____3_, 3, Rsh_Fir_array_args263, Rsh_Fir_array_arg_names63, CCP, RHO);
  // goto L58(i246, r100)
  // L58(i246, r100)
  Rsh_Fir_reg_i248_ = Rsh_Fir_reg_i246_;
  Rsh_Fir_reg_dx85_ = Rsh_Fir_reg_r100_;
  goto L58_;

D85_:;
  // deopt 304 [i248, j18]
  SEXP Rsh_Fir_array_deopt_stack85[2];
  Rsh_Fir_array_deopt_stack85[0] = Rsh_Fir_reg_i248_;
  Rsh_Fir_array_deopt_stack85[1] = Rsh_Fir_reg_j18_;
  Rsh_Fir_deopt(304, 2, Rsh_Fir_array_deopt_stack85, CCP, RHO);
  return R_NilValue;

L275_:;
  // j19 = force? j18
  Rsh_Fir_reg_j19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j18_);
  // checkMissing(j19)
  SEXP Rsh_Fir_array_args264[1];
  Rsh_Fir_array_args264[0] = Rsh_Fir_reg_j19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args264, Rsh_Fir_param_types_empty()));
  // r101 = `+`(j19, 1.0)
  SEXP Rsh_Fir_array_args265[2];
  Rsh_Fir_array_args265[0] = Rsh_Fir_reg_j19_;
  Rsh_Fir_array_args265[1] = Rsh_const(CCP, 55);
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args265, Rsh_Fir_param_types_empty());
  // st j = r101
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r101_, RHO);
  (void)(Rsh_Fir_reg_r101_);
  // argnames9 = ld argnames
  Rsh_Fir_reg_argnames9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L276() else D86()
  // L276()
  goto L276_;

D86_:;
  // deopt 309 [i248, argnames9]
  SEXP Rsh_Fir_array_deopt_stack86[2];
  Rsh_Fir_array_deopt_stack86[0] = Rsh_Fir_reg_i248_;
  Rsh_Fir_array_deopt_stack86[1] = Rsh_Fir_reg_argnames9_;
  Rsh_Fir_deopt(309, 2, Rsh_Fir_array_deopt_stack86, CCP, RHO);
  return R_NilValue;

L276_:;
  // argnames10 = force? argnames9
  Rsh_Fir_reg_argnames10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_argnames9_);
  // checkMissing(argnames10)
  SEXP Rsh_Fir_array_args266[1];
  Rsh_Fir_array_args266[0] = Rsh_Fir_reg_argnames10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args266, Rsh_Fir_param_types_empty()));
  // c38 = `is.object`(argnames10)
  SEXP Rsh_Fir_array_args267[1];
  Rsh_Fir_array_args267[0] = Rsh_Fir_reg_argnames10_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args267, Rsh_Fir_param_types_empty());
  // if c38 then L277() else L278(i248, argnames10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L277()
    goto L277_;
  } else {
  // L278(i248, argnames10)
    Rsh_Fir_reg_i252_ = Rsh_Fir_reg_i248_;
    Rsh_Fir_reg_argnames12_ = Rsh_Fir_reg_argnames10_;
    goto L278_;
  }

L277_:;
  // dr56 = tryDispatchBuiltin.1("[", argnames10)
  SEXP Rsh_Fir_array_args268[2];
  Rsh_Fir_array_args268[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args268[1] = Rsh_Fir_reg_argnames10_;
  Rsh_Fir_reg_dr56_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args268);
  // dc28 = getTryDispatchBuiltinDispatched(dr56)
  SEXP Rsh_Fir_array_args269[1];
  Rsh_Fir_array_args269[0] = Rsh_Fir_reg_dr56_;
  Rsh_Fir_reg_dc28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args269, Rsh_Fir_param_types_empty());
  // if dc28 then L279() else L278(i248, dr56)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc28_)) {
  // L279()
    goto L279_;
  } else {
  // L278(i248, dr56)
    Rsh_Fir_reg_i252_ = Rsh_Fir_reg_i248_;
    Rsh_Fir_reg_argnames12_ = Rsh_Fir_reg_dr56_;
    goto L278_;
  }

L278_:;
  // i255 = ld i
  Rsh_Fir_reg_i255_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L280() else D87()
  // L280()
  goto L280_;

L279_:;
  // dx86 = getTryDispatchBuiltinValue(dr56)
  SEXP Rsh_Fir_array_args270[1];
  Rsh_Fir_array_args270[0] = Rsh_Fir_reg_dr56_;
  Rsh_Fir_reg_dx86_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args270, Rsh_Fir_param_types_empty());
  // goto L59(i248, dx86)
  // L59(i248, dx86)
  Rsh_Fir_reg_i254_ = Rsh_Fir_reg_i248_;
  Rsh_Fir_reg_dx87_ = Rsh_Fir_reg_dx86_;
  goto L59_;

D87_:;
  // deopt 311 [i252, argnames12, i255]
  SEXP Rsh_Fir_array_deopt_stack87[3];
  Rsh_Fir_array_deopt_stack87[0] = Rsh_Fir_reg_i252_;
  Rsh_Fir_array_deopt_stack87[1] = Rsh_Fir_reg_argnames12_;
  Rsh_Fir_array_deopt_stack87[2] = Rsh_Fir_reg_i255_;
  Rsh_Fir_deopt(311, 3, Rsh_Fir_array_deopt_stack87, CCP, RHO);
  return R_NilValue;

L280_:;
  // i256 = force? i255
  Rsh_Fir_reg_i256_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i255_);
  // __19 = ldf `[` in base
  Rsh_Fir_reg___19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r102 = dyn __19(argnames12, i256)
  SEXP Rsh_Fir_array_args271[2];
  Rsh_Fir_array_args271[0] = Rsh_Fir_reg_argnames12_;
  Rsh_Fir_array_args271[1] = Rsh_Fir_reg_i256_;
  SEXP Rsh_Fir_array_arg_names64[2];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___19_, 2, Rsh_Fir_array_args271, Rsh_Fir_array_arg_names64, CCP, RHO);
  // goto L59(i252, r102)
  // L59(i252, r102)
  Rsh_Fir_reg_i254_ = Rsh_Fir_reg_i252_;
  Rsh_Fir_reg_dx87_ = Rsh_Fir_reg_r102_;
  goto L59_;

L281_:;
  // dr58 = tryDispatchBuiltin.0("[<-", l32, dx87)
  SEXP Rsh_Fir_array_args272[3];
  Rsh_Fir_array_args272[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args272[1] = Rsh_Fir_reg_l32_;
  Rsh_Fir_array_args272[2] = Rsh_Fir_reg_dx87_;
  Rsh_Fir_reg_dr58_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args272);
  // dc29 = getTryDispatchBuiltinDispatched(dr58)
  SEXP Rsh_Fir_array_args273[1];
  Rsh_Fir_array_args273[0] = Rsh_Fir_reg_dr58_;
  Rsh_Fir_reg_dc29_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args273, Rsh_Fir_param_types_empty());
  // if dc29 then L283() else L282(i254, dx87, dr58)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc29_)) {
  // L283()
    goto L283_;
  } else {
  // L282(i254, dx87, dr58)
    Rsh_Fir_reg_i258_ = Rsh_Fir_reg_i254_;
    Rsh_Fir_reg_dx89_ = Rsh_Fir_reg_dx87_;
    Rsh_Fir_reg_l34_ = Rsh_Fir_reg_dr58_;
    goto L282_;
  }

L282_:;
  // i261 = ld i
  Rsh_Fir_reg_i261_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L284() else D88()
  // L284()
  goto L284_;

L283_:;
  // dx91 = getTryDispatchBuiltinValue(dr58)
  SEXP Rsh_Fir_array_args274[1];
  Rsh_Fir_array_args274[0] = Rsh_Fir_reg_dr58_;
  Rsh_Fir_reg_dx91_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args274, Rsh_Fir_param_types_empty());
  // goto L60(i254, dx87, dx91)
  // L60(i254, dx87, dx91)
  Rsh_Fir_reg_i260_ = Rsh_Fir_reg_i254_;
  Rsh_Fir_reg_dx92_ = Rsh_Fir_reg_dx87_;
  Rsh_Fir_reg_dx93_ = Rsh_Fir_reg_dx91_;
  goto L60_;

D88_:;
  // deopt 315 [i258, dx89, l34, dx87, i261]
  SEXP Rsh_Fir_array_deopt_stack88[5];
  Rsh_Fir_array_deopt_stack88[0] = Rsh_Fir_reg_i258_;
  Rsh_Fir_array_deopt_stack88[1] = Rsh_Fir_reg_dx89_;
  Rsh_Fir_array_deopt_stack88[2] = Rsh_Fir_reg_l34_;
  Rsh_Fir_array_deopt_stack88[3] = Rsh_Fir_reg_dx87_;
  Rsh_Fir_array_deopt_stack88[4] = Rsh_Fir_reg_i261_;
  Rsh_Fir_deopt(315, 5, Rsh_Fir_array_deopt_stack88, CCP, RHO);
  return R_NilValue;

L284_:;
  // i262 = force? i261
  Rsh_Fir_reg_i262_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i261_);
  // ___5 = ldf `[<-` in base
  Rsh_Fir_reg____5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r103 = dyn ___5(l34, dx87, i262)
  SEXP Rsh_Fir_array_args275[3];
  Rsh_Fir_array_args275[0] = Rsh_Fir_reg_l34_;
  Rsh_Fir_array_args275[1] = Rsh_Fir_reg_dx87_;
  Rsh_Fir_array_args275[2] = Rsh_Fir_reg_i262_;
  SEXP Rsh_Fir_array_arg_names65[3];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_array_arg_names65[1] = R_MissingArg;
  Rsh_Fir_array_arg_names65[2] = R_MissingArg;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____5_, 3, Rsh_Fir_array_args275, Rsh_Fir_array_arg_names65, CCP, RHO);
  // goto L60(i258, dx89, r103)
  // L60(i258, dx89, r103)
  Rsh_Fir_reg_i260_ = Rsh_Fir_reg_i258_;
  Rsh_Fir_reg_dx92_ = Rsh_Fir_reg_dx89_;
  Rsh_Fir_reg_dx93_ = Rsh_Fir_reg_r103_;
  goto L60_;

D89_:;
  // deopt 324 [rnames]
  SEXP Rsh_Fir_array_deopt_stack89[1];
  Rsh_Fir_array_deopt_stack89[0] = Rsh_Fir_reg_rnames;
  Rsh_Fir_deopt(324, 1, Rsh_Fir_array_deopt_stack89, CCP, RHO);
  return R_NilValue;

L286_:;
  // rnames1 = force? rnames
  Rsh_Fir_reg_rnames1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rnames);
  // checkMissing(rnames1)
  SEXP Rsh_Fir_array_args276[1];
  Rsh_Fir_array_args276[0] = Rsh_Fir_reg_rnames1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args276, Rsh_Fir_param_types_empty()));
  // l35 = ld rlist
  Rsh_Fir_reg_l35_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // names__1 = ldf `names<-`
  Rsh_Fir_reg_names__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L287() else D90()
  // L287()
  goto L287_;

D90_:;
  // deopt 327 [rnames1, l35, rnames1]
  SEXP Rsh_Fir_array_deopt_stack90[3];
  Rsh_Fir_array_deopt_stack90[0] = Rsh_Fir_reg_rnames1_;
  Rsh_Fir_array_deopt_stack90[1] = Rsh_Fir_reg_l35_;
  Rsh_Fir_array_deopt_stack90[2] = Rsh_Fir_reg_rnames1_;
  Rsh_Fir_deopt(327, 3, Rsh_Fir_array_deopt_stack90, CCP, RHO);
  return R_NilValue;

L287_:;
  // r104 = dyn names__1(l35, NULL, rnames1)
  SEXP Rsh_Fir_array_args277[3];
  Rsh_Fir_array_args277[0] = Rsh_Fir_reg_l35_;
  Rsh_Fir_array_args277[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args277[2] = Rsh_Fir_reg_rnames1_;
  SEXP Rsh_Fir_array_arg_names66[3];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_array_arg_names66[1] = R_MissingArg;
  Rsh_Fir_array_arg_names66[2] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__1_, 3, Rsh_Fir_array_args277, Rsh_Fir_array_arg_names66, CCP, RHO);
  // check L288() else D91()
  // L288()
  goto L288_;

D91_:;
  // deopt 329 [rnames1, r104]
  SEXP Rsh_Fir_array_deopt_stack91[2];
  Rsh_Fir_array_deopt_stack91[0] = Rsh_Fir_reg_rnames1_;
  Rsh_Fir_array_deopt_stack91[1] = Rsh_Fir_reg_r104_;
  Rsh_Fir_deopt(329, 2, Rsh_Fir_array_deopt_stack91, CCP, RHO);
  return R_NilValue;

L288_:;
  // st rlist = r104
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r104_, RHO);
  (void)(Rsh_Fir_reg_r104_);
  // rlist = ld rlist
  Rsh_Fir_reg_rlist = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L289() else D92()
  // L289()
  goto L289_;

D92_:;
  // deopt 331 [rlist]
  SEXP Rsh_Fir_array_deopt_stack92[1];
  Rsh_Fir_array_deopt_stack92[0] = Rsh_Fir_reg_rlist;
  Rsh_Fir_deopt(331, 1, Rsh_Fir_array_deopt_stack92, CCP, RHO);
  return R_NilValue;

L289_:;
  // rlist1 = force? rlist
  Rsh_Fir_reg_rlist1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rlist);
  // checkMissing(rlist1)
  SEXP Rsh_Fir_array_args278[1];
  Rsh_Fir_array_args278[0] = Rsh_Fir_reg_rlist1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args278, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return rlist1
  return Rsh_Fir_reg_rlist1_;
}
SEXP Rsh_Fir_user_promise_inner1404317226_(SEXP CCP, SEXP RHO) {
  // tlen = ld tlen
  Rsh_Fir_reg_tlen = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // tlen1 = force? tlen
  Rsh_Fir_reg_tlen1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tlen);
  // checkMissing(tlen1)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_tlen1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // return tlen1
  return Rsh_Fir_reg_tlen1_;
}
SEXP Rsh_Fir_user_promise_inner1404317226_1(SEXP CCP, SEXP RHO) {
  // ncols3 = ld ncols
  Rsh_Fir_reg_ncols3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // ncols4 = force? ncols3
  Rsh_Fir_reg_ncols4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ncols3_);
  // checkMissing(ncols4)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_ncols4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(ncols4)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_ncols4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if c5 then L1() else L2(ncols4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L1()
    goto L1_;
  } else {
  // L2(ncols4)
    Rsh_Fir_reg_ncols6_ = Rsh_Fir_reg_ncols4_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[", ncols4)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_ncols4_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args82);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_ncols6_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // i20 = ld i
  Rsh_Fir_reg_i20_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // i21 = force? i20
  Rsh_Fir_reg_i21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i20_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r22 = dyn __2(ncols6, i21)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_ncols6_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_i21_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r22_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1404317226_2(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner1404317226_3(SEXP CCP, SEXP RHO) {
  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty()));
  // return x5
  return Rsh_Fir_reg_x5_;
}
SEXP Rsh_Fir_user_promise_inner1404317226_4(SEXP CCP, SEXP RHO) {
  // args1 = ld args
  Rsh_Fir_reg_args1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // args2 = force? args1
  Rsh_Fir_reg_args2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args1_);
  // checkMissing(args2)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_args2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(args2)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_args2_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // if c14 then L1() else L2(args2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L1()
    goto L1_;
  } else {
  // L2(args2)
    Rsh_Fir_reg_args4_ = Rsh_Fir_reg_args2_;
    goto L2_;
  }

L0_:;
  // return dx27
  return Rsh_Fir_reg_dx27_;

L1_:;
  // dr18 = tryDispatchBuiltin.1("[[", args2)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_args2_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args136);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // if dc9 then L3() else L2(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr18)
    Rsh_Fir_reg_args4_ = Rsh_Fir_reg_dr18_;
    goto L2_;
  }

L2_:;
  // i96 = ld i
  Rsh_Fir_reg_i96_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // i97 = force? i96
  Rsh_Fir_reg_i97_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i96_);
  // __7 = ldf `[[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r49 = dyn __7(args4, i97)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_args4_;
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_i97_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L0(r49)
  // L0(r49)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r49_;
  goto L0_;

L3_:;
  // dx26 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // goto L0(dx26)
  // L0(dx26)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
