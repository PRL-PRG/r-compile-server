#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1719482137_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1719482137_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1719482137_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1719482137_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1719482137_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1719482137_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1719482137_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1719482137_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1719482137_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1719482137_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1719482137_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1719482137_9(SEXP CCP, SEXP RHO);
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
  // r = clos inner1719482137
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1719482137_, RHO, CCP);
  // st `proj.lm` = r
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
SEXP Rsh_Fir_user_function_inner1719482137_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1719482137 dynamic dispatch ([object, onedf, `unweighted.scale`, `...`])

  return Rsh_Fir_user_version_inner1719482137_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1719482137_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1719482137 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner1719482137/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_onedf;  // onedf
  SEXP Rsh_Fir_reg_unweighted_scale;  // unweighted_scale
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_onedf_isMissing;  // onedf_isMissing
  SEXP Rsh_Fir_reg_onedf_orDefault;  // onedf_orDefault
  SEXP Rsh_Fir_reg_unweighted_scale_isMissing;  // unweighted_scale_isMissing
  SEXP Rsh_Fir_reg_unweighted_scale_orDefault;  // unweighted_scale_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_inherits;  // inherits
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_object3_;  // object3
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_rank;  // rank
  SEXP Rsh_Fir_reg_rank1_;  // rank1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_proj_default;  // proj_default
  SEXP Rsh_Fir_reg_object7_;  // object7
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_rank2_;  // rank2
  SEXP Rsh_Fir_reg_rank3_;  // rank3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_onedf1_;  // onedf1
  SEXP Rsh_Fir_reg_onedf2_;  // onedf2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_rank4_;  // rank4
  SEXP Rsh_Fir_reg_rank5_;  // rank5
  SEXP Rsh_Fir_reg_rep_int;  // rep_int
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_prj;  // prj
  SEXP Rsh_Fir_reg_prj1_;  // prj1
  SEXP Rsh_Fir_reg_prj2_;  // prj2
  SEXP Rsh_Fir_reg_object9_;  // object9
  SEXP Rsh_Fir_reg_object10_;  // object10
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_object12_;  // object12
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_object13_;  // object13
  SEXP Rsh_Fir_reg_object14_;  // object14
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_object16_;  // object16
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_object17_;  // object17
  SEXP Rsh_Fir_reg_object18_;  // object18
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_object20_;  // object20
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg_dx40_;  // dx40
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_unique;  // unique
  SEXP Rsh_Fir_reg_asgn;  // asgn
  SEXP Rsh_Fir_reg_asgn1_;  // asgn1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_object21_;  // object21
  SEXP Rsh_Fir_reg_object22_;  // object22
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_object24_;  // object24
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx42_;  // dx42
  SEXP Rsh_Fir_reg_dx43_;  // dx43
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx44_;  // dx44
  SEXP Rsh_Fir_reg_dx45_;  // dx45
  SEXP Rsh_Fir_reg_uasgn;  // uasgn
  SEXP Rsh_Fir_reg_uasgn1_;  // uasgn1
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_uasgn2_;  // uasgn2
  SEXP Rsh_Fir_reg_uasgn3_;  // uasgn3
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_nterms;  // nterms
  SEXP Rsh_Fir_reg_nterms1_;  // nterms1
  SEXP Rsh_Fir_reg_vector;  // vector
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_matrix;  // matrix
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_object25_;  // object25
  SEXP Rsh_Fir_reg_object26_;  // object26
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_object28_;  // object28
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx46_;  // dx46
  SEXP Rsh_Fir_reg_dx47_;  // dx47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_nterms2_;  // nterms2
  SEXP Rsh_Fir_reg_nterms3_;  // nterms3
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_rownames;  // rownames
  SEXP Rsh_Fir_reg_object29_;  // object29
  SEXP Rsh_Fir_reg_object30_;  // object30
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_object32_;  // object32
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx48_;  // dx48
  SEXP Rsh_Fir_reg_dx49_;  // dx49
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_nmeffect;  // nmeffect
  SEXP Rsh_Fir_reg_nmeffect1_;  // nmeffect1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_dimnames__;  // dimnames__
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_uasgn4_;  // uasgn4
  SEXP Rsh_Fir_reg_uasgn5_;  // uasgn5
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_asgn2_;  // asgn2
  SEXP Rsh_Fir_reg_asgn3_;  // asgn3
  SEXP Rsh_Fir_reg_uasgn6_;  // uasgn6
  SEXP Rsh_Fir_reg_uasgn7_;  // uasgn7
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_asgn5_;  // asgn5
  SEXP Rsh_Fir_reg_uasgn9_;  // uasgn9
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx50_;  // dx50
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_asgn7_;  // asgn7
  SEXP Rsh_Fir_reg_dx51_;  // dx51
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_select;  // select
  SEXP Rsh_Fir_reg_select1_;  // select1
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx52_;  // dx52
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_dx53_;  // dx53
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_prj3_;  // prj3
  SEXP Rsh_Fir_reg_prj4_;  // prj4
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_prj6_;  // prj6
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx54_;  // dx54
  SEXP Rsh_Fir_reg_i23_;  // i23
  SEXP Rsh_Fir_reg_dx55_;  // dx55
  SEXP Rsh_Fir_reg_select2_;  // select2
  SEXP Rsh_Fir_reg_select3_;  // select3
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_i26_;  // i26
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_df;  // df
  SEXP Rsh_Fir_reg_df1_;  // df1
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_i28_;  // i28
  SEXP Rsh_Fir_reg_df3_;  // df3
  SEXP Rsh_Fir_reg_dr30_;  // dr30
  SEXP Rsh_Fir_reg_dc15_;  // dc15
  SEXP Rsh_Fir_reg_dx56_;  // dx56
  SEXP Rsh_Fir_reg_i30_;  // i30
  SEXP Rsh_Fir_reg_dx57_;  // dx57
  SEXP Rsh_Fir_reg_i31_;  // i31
  SEXP Rsh_Fir_reg_i32_;  // i32
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_rep_int1_;  // rep_int1
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_i34_;  // i34
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_dr32_;  // dr32
  SEXP Rsh_Fir_reg_dc16_;  // dc16
  SEXP Rsh_Fir_reg_dx58_;  // dx58
  SEXP Rsh_Fir_reg_i36_;  // i36
  SEXP Rsh_Fir_reg_dx59_;  // dx59
  SEXP Rsh_Fir_reg_i37_;  // i37
  SEXP Rsh_Fir_reg_i38_;  // i38
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_object33_;  // object33
  SEXP Rsh_Fir_reg_object34_;  // object34
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_object36_;  // object36
  SEXP Rsh_Fir_reg_dr34_;  // dr34
  SEXP Rsh_Fir_reg_dc17_;  // dc17
  SEXP Rsh_Fir_reg_dx60_;  // dx60
  SEXP Rsh_Fir_reg_dx61_;  // dx61
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_unweighted_scale1_;  // unweighted_scale1
  SEXP Rsh_Fir_reg_unweighted_scale2_;  // unweighted_scale2
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_result;  // result
  SEXP Rsh_Fir_reg_result1_;  // result1
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_result4_;  // result4
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_wt;  // wt
  SEXP Rsh_Fir_reg_wt1_;  // wt1
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_wt2_;  // wt2
  SEXP Rsh_Fir_reg_wt3_;  // wt3
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_unweighted_scale3_;  // unweighted_scale3
  SEXP Rsh_Fir_reg_unweighted_scale4_;  // unweighted_scale4
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_object37_;  // object37
  SEXP Rsh_Fir_reg_object38_;  // object38
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_object40_;  // object40
  SEXP Rsh_Fir_reg_dr36_;  // dr36
  SEXP Rsh_Fir_reg_dc18_;  // dc18
  SEXP Rsh_Fir_reg_dx62_;  // dx62
  SEXP Rsh_Fir_reg_dx63_;  // dx63
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_use_wt;  // use_wt
  SEXP Rsh_Fir_reg_use_wt1_;  // use_wt1
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_object41_;  // object41
  SEXP Rsh_Fir_reg_object42_;  // object42
  SEXP Rsh_Fir_reg_c41_;  // c41
  SEXP Rsh_Fir_reg_object44_;  // object44
  SEXP Rsh_Fir_reg_dr38_;  // dr38
  SEXP Rsh_Fir_reg_dc19_;  // dc19
  SEXP Rsh_Fir_reg_dx64_;  // dx64
  SEXP Rsh_Fir_reg_dx65_;  // dx65
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_dx68_;  // dx68
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_wt4_;  // wt4
  SEXP Rsh_Fir_reg_wt5_;  // wt5
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_object45_;  // object45
  SEXP Rsh_Fir_reg_object46_;  // object46
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_object48_;  // object48
  SEXP Rsh_Fir_reg_dr40_;  // dr40
  SEXP Rsh_Fir_reg_dc20_;  // dc20
  SEXP Rsh_Fir_reg_dx69_;  // dx69
  SEXP Rsh_Fir_reg_dx70_;  // dx70
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg_result5_;  // result5
  SEXP Rsh_Fir_reg_result6_;  // result6
  SEXP Rsh_Fir_reg_is_matrix;  // is_matrix
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_matrix1_;  // matrix1
  SEXP Rsh_Fir_reg_res;  // res
  SEXP Rsh_Fir_reg_res1_;  // res1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r111_;  // r111
  SEXP Rsh_Fir_reg_r112_;  // r112
  SEXP Rsh_Fir_reg_res2_;  // res2
  SEXP Rsh_Fir_reg_res3_;  // res3
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r113_;  // r113
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r115_;  // r115
  SEXP Rsh_Fir_reg_r116_;  // r116
  SEXP Rsh_Fir_reg_sym18_;  // sym18
  SEXP Rsh_Fir_reg_base18_;  // base18
  SEXP Rsh_Fir_reg_guard18_;  // guard18
  SEXP Rsh_Fir_reg_r117_;  // r117
  SEXP Rsh_Fir_reg_r118_;  // r118
  SEXP Rsh_Fir_reg_res4_;  // res4
  SEXP Rsh_Fir_reg_res5_;  // res5
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r119_;  // r119
  SEXP Rsh_Fir_reg_list1_;  // list1
  SEXP Rsh_Fir_reg_r120_;  // r120
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r122_;  // r122
  SEXP Rsh_Fir_reg_sym19_;  // sym19
  SEXP Rsh_Fir_reg_base19_;  // base19
  SEXP Rsh_Fir_reg_guard19_;  // guard19
  SEXP Rsh_Fir_reg_r124_;  // r124
  SEXP Rsh_Fir_reg_r125_;  // r125
  SEXP Rsh_Fir_reg_result7_;  // result7
  SEXP Rsh_Fir_reg_result8_;  // result8
  SEXP Rsh_Fir_reg_dimnames;  // dimnames
  SEXP Rsh_Fir_reg_r126_;  // r126
  SEXP Rsh_Fir_reg_sym20_;  // sym20
  SEXP Rsh_Fir_reg_base20_;  // base20
  SEXP Rsh_Fir_reg_guard20_;  // guard20
  SEXP Rsh_Fir_reg_r127_;  // r127
  SEXP Rsh_Fir_reg_r128_;  // r128
  SEXP Rsh_Fir_reg_result9_;  // result9
  SEXP Rsh_Fir_reg_result10_;  // result10
  SEXP Rsh_Fir_reg_dim;  // dim
  SEXP Rsh_Fir_reg_r129_;  // r129
  SEXP Rsh_Fir_reg_setNames;  // setNames
  SEXP Rsh_Fir_reg_sym21_;  // sym21
  SEXP Rsh_Fir_reg_base21_;  // base21
  SEXP Rsh_Fir_reg_guard21_;  // guard21
  SEXP Rsh_Fir_reg_r130_;  // r130
  SEXP Rsh_Fir_reg_r131_;  // r131
  SEXP Rsh_Fir_reg_result11_;  // result11
  SEXP Rsh_Fir_reg_result12_;  // result12
  SEXP Rsh_Fir_reg_res6_;  // res6
  SEXP Rsh_Fir_reg_res7_;  // res7
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_r132_;  // r132
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r134_;  // r134
  SEXP Rsh_Fir_reg_d;  // d
  SEXP Rsh_Fir_reg_d1_;  // d1
  SEXP Rsh_Fir_reg_sym22_;  // sym22
  SEXP Rsh_Fir_reg_base22_;  // base22
  SEXP Rsh_Fir_reg_guard22_;  // guard22
  SEXP Rsh_Fir_reg_r135_;  // r135
  SEXP Rsh_Fir_reg_d4_;  // d4
  SEXP Rsh_Fir_reg_r136_;  // r136
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_r137_;  // r137
  SEXP Rsh_Fir_reg_r138_;  // r138
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_dim__;  // dim__
  SEXP Rsh_Fir_reg_r139_;  // r139
  SEXP Rsh_Fir_reg_sym23_;  // sym23
  SEXP Rsh_Fir_reg_base23_;  // base23
  SEXP Rsh_Fir_reg_guard23_;  // guard23
  SEXP Rsh_Fir_reg_r140_;  // r140
  SEXP Rsh_Fir_reg_r141_;  // r141
  SEXP Rsh_Fir_reg_sym24_;  // sym24
  SEXP Rsh_Fir_reg_base24_;  // base24
  SEXP Rsh_Fir_reg_guard24_;  // guard24
  SEXP Rsh_Fir_reg_r142_;  // r142
  SEXP Rsh_Fir_reg_r143_;  // r143
  SEXP Rsh_Fir_reg_res8_;  // res8
  SEXP Rsh_Fir_reg_res9_;  // res9
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r144_;  // r144
  SEXP Rsh_Fir_reg_sym25_;  // sym25
  SEXP Rsh_Fir_reg_base25_;  // base25
  SEXP Rsh_Fir_reg_guard25_;  // guard25
  SEXP Rsh_Fir_reg_r145_;  // r145
  SEXP Rsh_Fir_reg_r146_;  // r146
  SEXP Rsh_Fir_reg_dn;  // dn
  SEXP Rsh_Fir_reg_dn1_;  // dn1
  SEXP Rsh_Fir_reg_c46_;  // c46
  SEXP Rsh_Fir_reg_dn3_;  // dn3
  SEXP Rsh_Fir_reg_dr42_;  // dr42
  SEXP Rsh_Fir_reg_dc21_;  // dc21
  SEXP Rsh_Fir_reg_dx71_;  // dx71
  SEXP Rsh_Fir_reg_dx72_;  // dx72
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r147_;  // r147
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_r148_;  // r148
  SEXP Rsh_Fir_reg_list2_;  // list2
  SEXP Rsh_Fir_reg_r149_;  // r149
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_dimnames__1_;  // dimnames__1
  SEXP Rsh_Fir_reg_r150_;  // r150
  SEXP Rsh_Fir_reg_sym26_;  // sym26
  SEXP Rsh_Fir_reg_base26_;  // base26
  SEXP Rsh_Fir_reg_guard26_;  // guard26
  SEXP Rsh_Fir_reg_r151_;  // r151
  SEXP Rsh_Fir_reg_r152_;  // r152
  SEXP Rsh_Fir_reg_df4_;  // df4
  SEXP Rsh_Fir_reg_df5_;  // df5
  SEXP Rsh_Fir_reg_object49_;  // object49
  SEXP Rsh_Fir_reg_object50_;  // object50
  SEXP Rsh_Fir_reg_c48_;  // c48
  SEXP Rsh_Fir_reg_object52_;  // object52
  SEXP Rsh_Fir_reg_dr44_;  // dr44
  SEXP Rsh_Fir_reg_dc22_;  // dc22
  SEXP Rsh_Fir_reg_dx73_;  // dx73
  SEXP Rsh_Fir_reg_dx74_;  // dx74
  SEXP Rsh_Fir_reg_r153_;  // r153
  SEXP Rsh_Fir_reg_c49_;  // c49
  SEXP Rsh_Fir_reg_r154_;  // r154
  SEXP Rsh_Fir_reg_colnames;  // colnames
  SEXP Rsh_Fir_reg_result13_;  // result13
  SEXP Rsh_Fir_reg_result14_;  // result14
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r157_;  // r157
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r158_;  // r158
  SEXP Rsh_Fir_reg_df6_;  // df6
  SEXP Rsh_Fir_reg_df7_;  // df7
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r159_;  // r159
  SEXP Rsh_Fir_reg_object53_;  // object53
  SEXP Rsh_Fir_reg_object54_;  // object54
  SEXP Rsh_Fir_reg_c50_;  // c50
  SEXP Rsh_Fir_reg_object56_;  // object56
  SEXP Rsh_Fir_reg_dr46_;  // dr46
  SEXP Rsh_Fir_reg_dc23_;  // dc23
  SEXP Rsh_Fir_reg_dx75_;  // dx75
  SEXP Rsh_Fir_reg_dx76_;  // dx76
  SEXP Rsh_Fir_reg_r160_;  // r160
  SEXP Rsh_Fir_reg_c51_;  // c51
  SEXP Rsh_Fir_reg_dx78_;  // dx78
  SEXP Rsh_Fir_reg_dr48_;  // dr48
  SEXP Rsh_Fir_reg_dc24_;  // dc24
  SEXP Rsh_Fir_reg_dx79_;  // dx79
  SEXP Rsh_Fir_reg_dx80_;  // dx80
  SEXP Rsh_Fir_reg_r161_;  // r161
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_attr__1_;  // attr__1
  SEXP Rsh_Fir_reg_r162_;  // r162
  SEXP Rsh_Fir_reg_onedf3_;  // onedf3
  SEXP Rsh_Fir_reg_onedf4_;  // onedf4
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_attr__2_;  // attr__2
  SEXP Rsh_Fir_reg_r163_;  // r163
  SEXP Rsh_Fir_reg_sym27_;  // sym27
  SEXP Rsh_Fir_reg_base27_;  // base27
  SEXP Rsh_Fir_reg_guard27_;  // guard27
  SEXP Rsh_Fir_reg_r164_;  // r164
  SEXP Rsh_Fir_reg_r165_;  // r165
  SEXP Rsh_Fir_reg_wt6_;  // wt6
  SEXP Rsh_Fir_reg_wt7_;  // wt7
  SEXP Rsh_Fir_reg_c52_;  // c52
  SEXP Rsh_Fir_reg_r166_;  // r166
  SEXP Rsh_Fir_reg_c53_;  // c53
  SEXP Rsh_Fir_reg_unweighted_scale5_;  // unweighted_scale5
  SEXP Rsh_Fir_reg_unweighted_scale6_;  // unweighted_scale6
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_attr__3_;  // attr__3
  SEXP Rsh_Fir_reg_r167_;  // r167
  SEXP Rsh_Fir_reg_result15_;  // result15
  SEXP Rsh_Fir_reg_result16_;  // result16

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_onedf = PARAMS[1];
  Rsh_Fir_reg_unweighted_scale = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // onedf_isMissing = missing.0(onedf)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_onedf;
  Rsh_Fir_reg_onedf_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if onedf_isMissing then L0(FALSE) else L0(onedf)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_onedf_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_onedf_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(onedf)
    Rsh_Fir_reg_onedf_orDefault = Rsh_Fir_reg_onedf;
    goto L0_;
  }

L0_:;
  // st onedf = onedf_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_onedf_orDefault, RHO);
  (void)(Rsh_Fir_reg_onedf_orDefault);
  // unweighted_scale_isMissing = missing.0(unweighted_scale)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_unweighted_scale;
  Rsh_Fir_reg_unweighted_scale_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if unweighted_scale_isMissing then L1(FALSE) else L1(unweighted_scale)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_unweighted_scale_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_unweighted_scale_orDefault = Rsh_const(CCP, 2);
    goto L1_;
  } else {
  // L1(unweighted_scale)
    Rsh_Fir_reg_unweighted_scale_orDefault = Rsh_Fir_reg_unweighted_scale;
    goto L1_;
  }

L1_:;
  // st `unweighted.scale` = unweighted_scale_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_unweighted_scale_orDefault, RHO);
  (void)(Rsh_Fir_reg_unweighted_scale_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf inherits
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf inherits in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L2_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L59() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L59()
    goto L59_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // object3 = ld object
  Rsh_Fir_reg_object3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L63() else D4()
  // L63()
  goto L63_;

L5_:;
  // st result = NULL
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_const(CCP, 7), RHO);
  (void)(Rsh_const(CCP, 7));
  // st df = NULL
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_const(CCP, 7), RHO);
  (void)(Rsh_const(CCP, 7));
  // goto L28()
  // L28()
  goto L28_;

L6_:;
  // st prj = dx3
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // onedf1 = ld onedf
  Rsh_Fir_reg_onedf1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L76() else D9()
  // L76()
  goto L76_;

L7_:;
  // object9 = ld object
  Rsh_Fir_reg_object9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L84() else D13()
  // L84()
  goto L84_;

L8_:;
  // st df = r14
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // prj = ld prj
  Rsh_Fir_reg_prj = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L82() else D12()
  // L82()
  goto L82_;

L9_:;
  // goto L28()
  // L28()
  goto L28_;

L10_:;
  // st asgn = dx9
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L109() else D16()
  // L109()
  goto L109_;

L11_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r26 = dyn __2(dx30, dx31)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dx30_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_dx31_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L10(r26)
  // L10(r26)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r26_;
  goto L10_;

L12_:;
  // c13 = `is.object`(r30)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c13 then L122() else L123(r30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L122()
    goto L122_;
  } else {
  // L123(r30)
    Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r30_;
    goto L123_;
  }

L13_:;
  // c12 = ldf c in base
  Rsh_Fir_reg_c12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r35 = dyn c12("(Intercept)", r32)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c12_, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L121() else D20()
  // L121()
  goto L121_;

L14_:;
  // st nmeffect = dx45
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_dx45_, RHO);
  (void)(Rsh_Fir_reg_dx45_);
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard4 then L126() else L127()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L126()
    goto L126_;
  } else {
  // L127()
    goto L127_;
  }

L15_:;
  // st nterms = r41
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r41_, RHO);
  (void)(Rsh_Fir_reg_r41_);
  // sym5 = ldf vector
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base5 = ldf vector in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard5 then L130() else L131()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L130()
    goto L130_;
  } else {
  // L131()
    goto L131_;
  }

L16_:;
  // st df = r44
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L134() else D26()
  // L134()
  goto L134_;

L17_:;
  // l = ld result
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L142() else D32()
  // L142()
  goto L142_;

L18_:;
  // s = toForSeq(r61)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // l1 = length(s)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 22);
  // goto L19(i)
  // L19(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L19_;

L19_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // c16 = `<`.1(l1, i2)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if c16 then L147() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L147()
    goto L147_;
  } else {
  // L27()
    goto L27_;
  }

L20_:;
  // r64 = `==`(asgn7, dx51)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_asgn7_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_dx51_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // st select = r64
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r64_, RHO);
  (void)(Rsh_Fir_reg_r64_);
  // sym9 = ldf sum
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base9 = ldf sum in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard9 then L154() else L155()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L154()
    goto L154_;
  } else {
  // L155()
    goto L155_;
  }

L21_:;
  // l2 = ld df
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c18 = `is.object`(l2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c18 then L158() else L159(i13, r66, l2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L158()
    goto L158_;
  } else {
  // L159(i13, r66, l2)
    Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i13_;
    Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r66_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    goto L159_;
  }

L22_:;
  // st df = dx53
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx53_, RHO);
  (void)(Rsh_Fir_reg_dx53_);
  // prj3 = ld prj
  Rsh_Fir_reg_prj3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L162() else D41()
  // L162()
  goto L162_;

L23_:;
  // sym10 = ldf `rep.int`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base10 = ldf `rep.int` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard10 then L167() else L168()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L167()
    goto L167_;
  } else {
  // L168()
    goto L168_;
  }

L24_:;
  // ___1 = ldf `%*%` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r78 = dyn ___1(dx55, r75)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dx55_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L175() else D46()
  // L175()
  goto L175_;

L25_:;
  // rep_int1 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r77 = dyn rep_int1(1.0, dx57)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_dx57_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int1_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L174() else D45()
  // L174()
  goto L174_;

L26_:;
  // st result = dx59
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx59_, RHO);
  (void)(Rsh_Fir_reg_dx59_);
  // goto L19(i36)
  // L19(i36)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i36_;
  goto L19_;

L27_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args19[4];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args19[3] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // asgn2 = ld asgn
  Rsh_Fir_reg_asgn2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L148() else D35()
  // L148()
  goto L148_;

L28_:;
  // sym11 = ldf `is.null`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base11 = ldf `is.null` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard11 then L181() else L182()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L181()
    goto L181_;
  } else {
  // L182()
    goto L182_;
  }

L29_:;
  // r87 = `!`(r85)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // c24 = `as.logical`(r87)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c24 then L188() else L30(c24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L188()
    goto L188_;
  } else {
  // L30(c24)
    Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c24_;
    goto L30_;
  }

L30_:;
  // c30 = `as.logical`(c26)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c30 then L191() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L191()
    goto L191_;
  } else {
  // L31()
    goto L31_;
  }

L31_:;
  // goto L33()
  // L33()
  goto L33_;

L32_:;
  // r91 = `/`(result4, r89)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_result4_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_r89_;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // st result = r91
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r91_, RHO);
  (void)(Rsh_Fir_reg_r91_);
  // goto L33()
  // L33()
  goto L33_;

L33_:;
  // sym13 = ldf `is.null`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base13 = ldf `is.null` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard13 then L197() else L198()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L197()
    goto L197_;
  } else {
  // L198()
    goto L198_;
  }

L34_:;
  // r95 = `!`(r94)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // c32 = `as.logical`(r95)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c32 then L200() else L35(c32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L200()
    goto L200_;
  } else {
  // L35(c32)
    Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c32_;
    goto L35_;
  }

L35_:;
  // st `use.wt` = c34
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_c34_, RHO);
  (void)(Rsh_Fir_reg_c34_);
  // object37 = ld object
  Rsh_Fir_reg_object37_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L203() else D54()
  // L203()
  goto L203_;

L36_:;
  // goto L51()
  // L51()
  goto L51_;

L37_:;
  // object45 = ld object
  Rsh_Fir_reg_object45_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L220() else D58()
  // L220()
  goto L220_;

L38_:;
  // r103 = `*`(dx68, r101)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dx68_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_r101_;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L39(r103)
  // L39(r103)
  Rsh_Fir_reg_r104_ = Rsh_Fir_reg_r103_;
  goto L39_;

L39_:;
  // st res = r104
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r104_, RHO);
  (void)(Rsh_Fir_reg_r104_);
  // sym15 = ldf `is.matrix`
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base15 = ldf `is.matrix` in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard15 then L225() else L226()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L225()
    goto L225_;
  } else {
  // L226()
    goto L226_;
  }

L40_:;
  // r109 = `!`(r107)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r107_;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // c43 = `as.logical`(r109)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r109_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c43 then L229() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L229()
    goto L229_;
  } else {
  // L41()
    goto L41_;
  }

L41_:;
  // sym19 = ldf dimnames
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base19 = ldf dimnames in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard19 then L233() else L234()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L233()
    goto L233_;
  } else {
  // L234()
    goto L234_;
  }

L42_:;
  // sym26 = ldf c
  Rsh_Fir_reg_sym26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base26 = ldf c in base
  Rsh_Fir_reg_base26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard26 = `==`.4(sym26, base26)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym26_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base26_;
  Rsh_Fir_reg_guard26_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard26 then L265() else L266()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard26_)) {
  // L265()
    goto L265_;
  } else {
  // L266()
    goto L266_;
  }

L43_:;
  // st dn = r125
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r125_, RHO);
  (void)(Rsh_Fir_reg_r125_);
  // sym20 = ldf dim
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base20 = ldf dim in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard20 then L237() else L238()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L237()
    goto L237_;
  } else {
  // L238()
    goto L238_;
  }

L44_:;
  // st d = r128
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_r128_, RHO);
  (void)(Rsh_Fir_reg_r128_);
  // setNames = ldf setNames
  Rsh_Fir_reg_setNames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L241() else D67()
  // L241()
  goto L241_;

L45_:;
  // r138 = `+`(d4, r136)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_d4_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_r136_;
  Rsh_Fir_reg_r138_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // l8 = ld result
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // dim__ = ldf `dim<-`
  Rsh_Fir_reg_dim__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L247() else D71()
  // L247()
  goto L247_;

L46_:;
  // l9 = ld result
  Rsh_Fir_reg_l9_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // dimnames__1 = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L263() else D78()
  // L263()
  goto L263_;

L47_:;
  // sym25 = ldf c
  Rsh_Fir_reg_sym25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base25 = ldf c in base
  Rsh_Fir_reg_base25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard25 = `==`.4(sym25, base25)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym25_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base25_;
  Rsh_Fir_reg_guard25_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard25 then L255() else L256()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard25_)) {
  // L255()
    goto L255_;
  } else {
  // L256()
    goto L256_;
  }

L48_:;
  // list2 = ldf list in base
  Rsh_Fir_reg_list2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r149 = dyn list2(r143, r146)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r143_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_r146_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r149_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L262() else D77()
  // L262()
  goto L262_;

L49_:;
  // c47 = ldf c in base
  Rsh_Fir_reg_c47_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r148 = dyn c47(dx72, "Residuals")
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dx72_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r148_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c47_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L261() else D76()
  // L261()
  goto L261_;

L50_:;
  // st df = r152
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r152_, RHO);
  (void)(Rsh_Fir_reg_r152_);
  // goto L51()
  // L51()
  goto L51_;

L51_:;
  // colnames = ldf colnames
  Rsh_Fir_reg_colnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L275() else D83()
  // L275()
  goto L275_;

L52_:;
  // r166 = `!`(r165)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r165_;
  Rsh_Fir_reg_r166_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // c53 = `as.logical`(r166)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r166_;
  Rsh_Fir_reg_c53_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c53 then L299() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c53_)) {
  // L299()
    goto L299_;
  } else {
  // L53()
    goto L53_;
  }

L53_:;
  // goto L54()
  // L54()
  goto L54_;

L54_:;
  // result15 = ld result
  Rsh_Fir_reg_result15_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L304() else D100()
  // L304()
  goto L304_;

L55_:;
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L57() else D0()
  // L57()
  goto L57_;

L56_:;
  // r = dyn base(<sym object>, "mlm")
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 2 [object1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L57_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn inherits(object2, "mlm", FALSE)
  SEXP Rsh_Fir_array_args43[3];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args43[2] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L58() else D1()
  // L58()
  goto L58_;

D1_:;
  // deopt 7 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L2_;

L59_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L60() else D2()
  // L60()
  goto L60_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L60_:;
  // r3 = dyn stop("'proj' is not implemented for multiple responses")
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L61() else D3()
  // L61()
  goto L61_;

D3_:;
  // deopt 11 [r3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L4()
  // L4()
  goto L4_;

D4_:;
  // deopt 14 [object3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_object3_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L63_:;
  // object4 = force? object3
  Rsh_Fir_reg_object4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object3_);
  // checkMissing(object4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_object4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(object4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if c1 then L65() else L66(object4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L65()
    goto L65_;
  } else {
  // L66(object4)
    Rsh_Fir_reg_object6_ = Rsh_Fir_reg_object4_;
    goto L66_;
  }

L64_:;
  // st rank = dx1
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // rank = ld rank
  Rsh_Fir_reg_rank = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // check L68() else D5()
  // L68()
  goto L68_;

L65_:;
  // dr = tryDispatchBuiltin.1("$", object4)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_object4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args47);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if dc then L67() else L66(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L67()
    goto L67_;
  } else {
  // L66(dr)
    Rsh_Fir_reg_object6_ = Rsh_Fir_reg_dr;
    goto L66_;
  }

L66_:;
  // r5 = `$`(object6, <sym rank>)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_object6_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L64(r5)
  // L64(r5)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r5_;
  goto L64_;

L67_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L64(dx)
  // L64(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L64_;

D5_:;
  // deopt 18 [rank]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_rank;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L68_:;
  // rank1 = force? rank
  Rsh_Fir_reg_rank1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rank);
  // checkMissing(rank1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_rank1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // r6 = `>`(rank1, 0.0)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_rank1_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if c2 then L69() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L69()
    goto L69_;
  } else {
  // L5()
    goto L5_;
  }

L69_:;
  // proj_default = ldf `proj.default`
  Rsh_Fir_reg_proj_default = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // check L70() else D6()
  // L70()
  goto L70_;

D6_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L70_:;
  // p = prom<V +>{
  //   object7 = ld object;
  //   object8 = force? object7;
  //   checkMissing(object8);
  //   return object8;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1719482137_, CCP, RHO);
  // r8 = dyn proj_default[, onedf](p, TRUE)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_proj_default, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L71() else D7()
  // L71()
  goto L71_;

D7_:;
  // deopt 27 [r8]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L71_:;
  // c3 = `is.object`(r8)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if c3 then L72() else L73(r8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L72()
    goto L72_;
  } else {
  // L73(r8)
    Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r8_;
    goto L73_;
  }

L72_:;
  // dr2 = tryDispatchBuiltin.1("[", r8)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args57);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if dc1 then L74() else L73(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L74()
    goto L74_;
  } else {
  // L73(dr2)
    Rsh_Fir_reg_r10_ = Rsh_Fir_reg_dr2_;
    goto L73_;
  }

L73_:;
  // rank2 = ld rank
  Rsh_Fir_reg_rank2_ = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // check L75() else D8()
  // L75()
  goto L75_;

L74_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L6(dx2)
  // L6(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L6_;

D8_:;
  // deopt 30 [r10, 1, rank2]
  SEXP Rsh_Fir_array_deopt_stack6[3];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_rank2_;
  Rsh_Fir_deopt(30, 3, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L75_:;
  // rank3 = force? rank2
  Rsh_Fir_reg_rank3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rank2_);
  // checkMissing(rank3)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_rank3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // r11 = `:`(1, rank3)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_rank3_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r12 = dyn __(r8, <missing>, r11, FALSE)
  SEXP Rsh_Fir_array_args62[4];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args62[2] = Rsh_Fir_reg_r11_;
  Rsh_Fir_array_args62[3] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names10[4];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 4, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6(r12)
  // L6(r12)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r12_;
  goto L6_;

D9_:;
  // deopt 38 [onedf1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_onedf1_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L76_:;
  // onedf2 = force? onedf1
  Rsh_Fir_reg_onedf2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_onedf1_);
  // checkMissing(onedf2)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_onedf2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c4 = `as.logical`(onedf2)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_onedf2_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if c4 then L77() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L77()
    goto L77_;
  } else {
  // L7()
    goto L7_;
  }

L77_:;
  // sym1 = ldf `rep.int`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base1 = ldf `rep.int` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args65);
  // if guard1 then L78() else L79()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L78()
    goto L78_;
  } else {
  // L79()
    goto L79_;
  }

L78_:;
  // rank4 = ld rank
  Rsh_Fir_reg_rank4_ = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // check L80() else D10()
  // L80()
  goto L80_;

L79_:;
  // r13 = dyn base1(1.0, <sym rank>)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L8(r13)
  // L8(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L8_;

D10_:;
  // deopt 43 [rank4]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_rank4_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L80_:;
  // rank5 = force? rank4
  Rsh_Fir_reg_rank5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rank4_);
  // checkMissing(rank5)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_rank5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r15 = dyn rep_int(1.0, rank5)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_rank5_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L81() else D11()
  // L81()
  goto L81_;

D11_:;
  // deopt 46 [r15]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L81_:;
  // goto L8(r15)
  // L8(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L8_;

D12_:;
  // deopt 48 [prj]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_prj;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L82_:;
  // prj1 = force? prj
  Rsh_Fir_reg_prj1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prj);
  // checkMissing(prj1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_prj1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // st result = prj1
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_prj1_, RHO);
  (void)(Rsh_Fir_reg_prj1_);
  // goto L9(prj1)
  // L9(prj1)
  Rsh_Fir_reg_prj2_ = Rsh_Fir_reg_prj1_;
  goto L9_;

D13_:;
  // deopt 51 [object9]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_object9_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L84_:;
  // object10 = force? object9
  Rsh_Fir_reg_object10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object9_);
  // checkMissing(object10)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_object10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(object10)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if c5 then L86() else L87(object10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L86()
    goto L86_;
  } else {
  // L87(object10)
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_object10_;
    goto L87_;
  }

L85_:;
  // c6 = `is.object`(dx5)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if c6 then L89() else L90(dx5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L89()
    goto L89_;
  } else {
  // L90(dx5)
    Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx5_;
    goto L90_;
  }

L86_:;
  // dr4 = tryDispatchBuiltin.1("$", object10)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args73);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc2 then L88() else L87(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L88()
    goto L88_;
  } else {
  // L87(dr4)
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_dr4_;
    goto L87_;
  }

L87_:;
  // r16 = `$`(object12, <sym assign>)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_object12_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 53);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L85(r16)
  // L85(r16)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r16_;
  goto L85_;

L88_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L85(dx4)
  // L85(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L85_;

L89_:;
  // dr6 = tryDispatchBuiltin.1("[", dx5)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args77);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if dc3 then L91() else L90(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L91()
    goto L91_;
  } else {
  // L90(dr6)
    Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dr6_;
    goto L90_;
  }

L90_:;
  // object13 = ld object
  Rsh_Fir_reg_object13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L92() else D14()
  // L92()
  goto L92_;

L91_:;
  // dx8 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // goto L10(dx8)
  // L10(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L10_;

D14_:;
  // deopt 54 [dx7, object13]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_object13_;
  Rsh_Fir_deopt(54, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L92_:;
  // object14 = force? object13
  Rsh_Fir_reg_object14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object13_);
  // checkMissing(object14)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_object14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(object14)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_object14_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if c7 then L94() else L95(dx7, object14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L94()
    goto L94_;
  } else {
  // L95(dx7, object14)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_object16_ = Rsh_Fir_reg_object14_;
    goto L95_;
  }

L93_:;
  // c8 = `is.object`(dx15)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // if c8 then L98() else L99(dx14, dx15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L98()
    goto L98_;
  } else {
  // L99(dx14, dx15)
    Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx14_;
    Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx15_;
    goto L99_;
  }

L94_:;
  // dr8 = tryDispatchBuiltin.1("$", object14)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_object14_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args83);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if dc4 then L96() else L95(dx7, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L96()
    goto L96_;
  } else {
  // L95(dx7, dr8)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_object16_ = Rsh_Fir_reg_dr8_;
    goto L95_;
  }

L95_:;
  // r17 = `$`(object16, <sym qr>)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_object16_;
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 54);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // goto L93(dx11, r17)
  // L93(dx11, r17)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r17_;
  goto L93_;

L96_:;
  // dx13 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // goto L93(dx7, dx13)
  // L93(dx7, dx13)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx13_;
  goto L93_;

L97_:;
  // c9 = `is.object`(dx23)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if c9 then L101() else L102(dx22, dx23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L101()
    goto L101_;
  } else {
  // L102(dx22, dx23)
    Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx22_;
    Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx23_;
    goto L102_;
  }

L98_:;
  // dr10 = tryDispatchBuiltin.1("$", dx15)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args88);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // if dc5 then L100() else L99(dx14, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L100()
    goto L100_;
  } else {
  // L99(dx14, dr10)
    Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx14_;
    Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dr10_;
    goto L99_;
  }

L99_:;
  // r18 = `$`(dx19, <sym pivot>)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 55);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // goto L97(dx18, r18)
  // L97(dx18, r18)
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx18_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r18_;
  goto L97_;

L100_:;
  // dx21 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // goto L97(dx14, dx21)
  // L97(dx14, dx21)
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx14_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx21_;
  goto L97_;

L101_:;
  // dr12 = tryDispatchBuiltin.1("[", dx23)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args92);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if dc6 then L103() else L102(dx22, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L103()
    goto L103_;
  } else {
  // L102(dx22, dr12)
    Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx22_;
    Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dr12_;
    goto L102_;
  }

L102_:;
  // object17 = ld object
  Rsh_Fir_reg_object17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L104() else D15()
  // L104()
  goto L104_;

L103_:;
  // dx29 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // goto L11(dx22, dx29)
  // L11(dx22, dx29)
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_dx22_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx29_;
  goto L11_;

D15_:;
  // deopt 59 [dx26, dx27, 1, object17]
  SEXP Rsh_Fir_array_deopt_stack13[4];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_dx26_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_deopt_stack13[3] = Rsh_Fir_reg_object17_;
  Rsh_Fir_deopt(59, 4, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L104_:;
  // object18 = force? object17
  Rsh_Fir_reg_object18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object17_);
  // checkMissing(object18)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_object18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(object18)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_object18_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // if c10 then L106() else L107(dx26, dx27, 1, object18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L106()
    goto L106_;
  } else {
  // L107(dx26, dx27, 1, object18)
    Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_dx26_;
    Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx27_;
    Rsh_Fir_reg_r20_ = Rsh_const(CCP, 23);
    Rsh_Fir_reg_object20_ = Rsh_Fir_reg_object18_;
    goto L107_;
  }

L105_:;
  // r24 = `:`(r22, dx41)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_dx41_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r25 = dyn __1(dx40, r24)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dx40_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L11(dx39, r25)
  // L11(dx39, r25)
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_dx39_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r25_;
  goto L11_;

L106_:;
  // dr14 = tryDispatchBuiltin.1("$", object18)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_object18_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args99);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // if dc7 then L108() else L107(dx26, dx27, 1, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L108()
    goto L108_;
  } else {
  // L107(dx26, dx27, 1, dr14)
    Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_dx26_;
    Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx27_;
    Rsh_Fir_reg_r20_ = Rsh_const(CCP, 23);
    Rsh_Fir_reg_object20_ = Rsh_Fir_reg_dr14_;
    goto L107_;
  }

L107_:;
  // r23 = `$`(object20, <sym rank>)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_object20_;
  Rsh_Fir_array_args101[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // goto L105(dx34, dx35, r20, r23)
  // L105(dx34, dx35, r20, r23)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx34_;
  Rsh_Fir_reg_dx40_ = Rsh_Fir_reg_dx35_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_r23_;
  goto L105_;

L108_:;
  // dx38 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // goto L105(dx26, dx27, 1, dx38)
  // L105(dx26, dx27, 1, dx38)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx26_;
  Rsh_Fir_reg_dx40_ = Rsh_Fir_reg_dx27_;
  Rsh_Fir_reg_r22_ = Rsh_const(CCP, 23);
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx38_;
  goto L105_;

D16_:;
  // deopt 67 []
  Rsh_Fir_deopt(67, 0, NULL, CCP, RHO);
  return R_NilValue;

L109_:;
  // p1 = prom<V +>{
  //   asgn = ld asgn;
  //   asgn1 = force? asgn;
  //   checkMissing(asgn1);
  //   return asgn1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1719482137_1, CCP, RHO);
  // r28 = dyn unique(p1)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L110() else D17()
  // L110()
  goto L110_;

D17_:;
  // deopt 69 [r28]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L110_:;
  // st uasgn = r28
  Rsh_Fir_store(Rsh_const(CCP, 56), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args105);
  // if guard2 then L111() else L112()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L111()
    goto L111_;
  } else {
  // L112()
    goto L112_;
  }

L111_:;
  // sym3 = ldf attr
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // base3 = ldf attr in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args106);
  // if guard3 then L113() else L114()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L113()
    goto L113_;
  } else {
  // L114()
    goto L114_;
  }

L112_:;
  // r29 = dyn base2("(Intercept)", <lang attr(`$`(object, terms), "term.labels")>)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L12(r29)
  // L12(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L12_;

L113_:;
  // object21 = ld object
  Rsh_Fir_reg_object21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L115() else D18()
  // L115()
  goto L115_;

L114_:;
  // r31 = dyn base3(<lang `$`(object, terms)>, "term.labels")
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L13(r31)
  // L13(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L13_;

D18_:;
  // deopt 76 [object21]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_object21_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L115_:;
  // object22 = force? object21
  Rsh_Fir_reg_object22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object21_);
  // checkMissing(object22)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_object22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(object22)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_object22_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // if c11 then L117() else L118(object22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L117()
    goto L117_;
  } else {
  // L118(object22)
    Rsh_Fir_reg_object24_ = Rsh_Fir_reg_object22_;
    goto L118_;
  }

L116_:;
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r34 = dyn attr(dx43, "term.labels")
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dx43_;
  Rsh_Fir_array_args111[1] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L120() else D19()
  // L120()
  goto L120_;

L117_:;
  // dr16 = tryDispatchBuiltin.1("$", object22)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_object22_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args112);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // if dc8 then L119() else L118(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L119()
    goto L119_;
  } else {
  // L118(dr16)
    Rsh_Fir_reg_object24_ = Rsh_Fir_reg_dr16_;
    goto L118_;
  }

L118_:;
  // r33 = `$`(object24, <sym terms>)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_object24_;
  Rsh_Fir_array_args114[1] = Rsh_const(CCP, 61);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // goto L116(r33)
  // L116(r33)
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_r33_;
  goto L116_;

L119_:;
  // dx42 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // goto L116(dx42)
  // L116(dx42)
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx42_;
  goto L116_;

D19_:;
  // deopt 81 [r34]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L120_:;
  // goto L13(r34)
  // L13(r34)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r34_;
  goto L13_;

D20_:;
  // deopt 83 [r35]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L121_:;
  // goto L12(r35)
  // L12(r35)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r35_;
  goto L12_;

L122_:;
  // dr18 = tryDispatchBuiltin.1("[", r30)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args116);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // if dc9 then L124() else L123(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L124()
    goto L124_;
  } else {
  // L123(dr18)
    Rsh_Fir_reg_r37_ = Rsh_Fir_reg_dr18_;
    goto L123_;
  }

L123_:;
  // uasgn = ld uasgn
  Rsh_Fir_reg_uasgn = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // check L125() else D21()
  // L125()
  goto L125_;

L124_:;
  // dx44 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx44_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // goto L14(dx44)
  // L14(dx44)
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_dx44_;
  goto L14_;

D21_:;
  // deopt 85 [r37, 1.0, uasgn]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_uasgn;
  Rsh_Fir_deopt(85, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L125_:;
  // uasgn1 = force? uasgn
  Rsh_Fir_reg_uasgn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_uasgn);
  // checkMissing(uasgn1)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_uasgn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // r38 = `+`(1.0, uasgn1)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_uasgn1_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r39 = dyn __3(r37, r38)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L14(r39)
  // L14(r39)
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_r39_;
  goto L14_;

L126_:;
  // uasgn2 = ld uasgn
  Rsh_Fir_reg_uasgn2_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // check L128() else D22()
  // L128()
  goto L128_;

L127_:;
  // r40 = dyn base4(<sym uasgn>)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L15(r40)
  // L15(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L15_;

D22_:;
  // deopt 92 [uasgn2]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_uasgn2_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L128_:;
  // uasgn3 = force? uasgn2
  Rsh_Fir_reg_uasgn3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_uasgn2_);
  // checkMissing(uasgn3)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_uasgn3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r42 = dyn length(uasgn3)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_uasgn3_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L129() else D23()
  // L129()
  goto L129_;

D23_:;
  // deopt 95 [r42]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L129_:;
  // goto L15(r42)
  // L15(r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L15_;

L130_:;
  // nterms = ld nterms
  Rsh_Fir_reg_nterms = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L132() else D24()
  // L132()
  goto L132_;

L131_:;
  // r43 = dyn base5("numeric", <sym nterms>)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args125[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L16(r43)
  // L16(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L16_;

D24_:;
  // deopt 100 [nterms]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_nterms;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L132_:;
  // nterms1 = force? nterms
  Rsh_Fir_reg_nterms1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nterms);
  // checkMissing(nterms1)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_nterms1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // vector = ldf vector in base
  Rsh_Fir_reg_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r45 = dyn vector("numeric", nterms1)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_nterms1_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector, 2, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L133() else D25()
  // L133()
  goto L133_;

D25_:;
  // deopt 103 [r45]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L133_:;
  // goto L16(r45)
  // L16(r45)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r45_;
  goto L16_;

D26_:;
  // deopt 106 []
  Rsh_Fir_deopt(106, 0, NULL, CCP, RHO);
  return R_NilValue;

L134_:;
  // p2 = prom<V +>{
  //   sym6 = ldf length;
  //   base6 = ldf length in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r47):
  //   return r47;
  // L1():
  //   object25 = ld object;
  //   object26 = force? object25;
  //   checkMissing(object26);
  //   c14 = `is.object`(object26);
  //   if c14 then L4() else L5(object26);
  // L2():
  //   r46 = dyn base6(<lang `$`(object, residuals)>);
  //   goto L0(r46);
  // L3(dx47):
  //   length1 = ldf length in base;
  //   r49 = dyn length1(dx47);
  //   goto L0(r49);
  // L4():
  //   dr20 = tryDispatchBuiltin.1("$", object26);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L6() else L5(dr20);
  // L5(object28):
  //   r48 = `$`(object28, <sym residuals>);
  //   goto L3(r48);
  // L6():
  //   dx46 = getTryDispatchBuiltinValue(dr20);
  //   goto L3(dx46);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1719482137_2, CCP, RHO);
  // p3 = prom<V +>{
  //   nterms2 = ld nterms;
  //   nterms3 = force? nterms2;
  //   checkMissing(nterms3);
  //   return nterms3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1719482137_3, CCP, RHO);
  // r52 = dyn matrix(0.0, p2, p3)
  SEXP Rsh_Fir_array_args138[3];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args138[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L135() else D27()
  // L135()
  goto L135_;

D27_:;
  // deopt 110 [r52]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L135_:;
  // st result = r52
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r52_, RHO);
  (void)(Rsh_Fir_reg_r52_);
  // sym7 = ldf list
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base7 = ldf list in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args139[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args139);
  // if guard7 then L136() else L137()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L136()
    goto L136_;
  } else {
  // L137()
    goto L137_;
  }

L136_:;
  // rownames = ldf rownames
  Rsh_Fir_reg_rownames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L138() else D28()
  // L138()
  goto L138_;

L137_:;
  // r53 = dyn base7(<lang rownames(`$`(object, fitted.values))>, <sym nmeffect>)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args140[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L17(r53)
  // L17(r53)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L17_;

D28_:;
  // deopt 115 []
  Rsh_Fir_deopt(115, 0, NULL, CCP, RHO);
  return R_NilValue;

L138_:;
  // p4 = prom<V +>{
  //   object29 = ld object;
  //   object30 = force? object29;
  //   checkMissing(object30);
  //   c15 = `is.object`(object30);
  //   if c15 then L1() else L2(object30);
  // L0(dx49):
  //   return dx49;
  // L1():
  //   dr22 = tryDispatchBuiltin.1("$", object30);
  //   dc11 = getTryDispatchBuiltinDispatched(dr22);
  //   if dc11 then L3() else L2(dr22);
  // L2(object32):
  //   r55 = `$`(object32, <sym fitted.values>);
  //   goto L0(r55);
  // L3():
  //   dx48 = getTryDispatchBuiltinValue(dr22);
  //   goto L0(dx48);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1719482137_4, CCP, RHO);
  // r57 = dyn rownames(p4)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rownames, 1, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L139() else D29()
  // L139()
  goto L139_;

D29_:;
  // deopt 117 [r57]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L139_:;
  // nmeffect = ld nmeffect
  Rsh_Fir_reg_nmeffect = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L140() else D30()
  // L140()
  goto L140_;

D30_:;
  // deopt 118 [nmeffect]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_nmeffect;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L140_:;
  // nmeffect1 = force? nmeffect
  Rsh_Fir_reg_nmeffect1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nmeffect);
  // checkMissing(nmeffect1)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_nmeffect1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r58 = dyn list(r57, nmeffect1)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_nmeffect1_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L141() else D31()
  // L141()
  goto L141_;

D31_:;
  // deopt 121 [r58]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L141_:;
  // goto L17(r58)
  // L17(r58)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r58_;
  goto L17_;

D32_:;
  // deopt 123 [r54, l, r54]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(123, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L142_:;
  // r59 = dyn dimnames__(l, NULL, r54)
  SEXP Rsh_Fir_array_args150[3];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args150[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args150[2] = Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L143() else D33()
  // L143()
  goto L143_;

D33_:;
  // deopt 125 [r54, r59]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(125, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L143_:;
  // st result = r59
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r59_, RHO);
  (void)(Rsh_Fir_reg_r59_);
  // sym8 = ldf seq_along
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 68), RHO);
  // base8 = ldf seq_along in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 68), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args151);
  // if guard8 then L144() else L145()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L144()
    goto L144_;
  } else {
  // L145()
    goto L145_;
  }

L144_:;
  // uasgn4 = ld uasgn
  Rsh_Fir_reg_uasgn4_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // check L146() else D34()
  // L146()
  goto L146_;

L145_:;
  // r60 = dyn base8(<sym uasgn>)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L18(r60)
  // L18(r60)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r60_;
  goto L18_;

D34_:;
  // deopt 128 [uasgn4]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_uasgn4_;
  Rsh_Fir_deopt(128, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L146_:;
  // uasgn5 = force? uasgn4
  Rsh_Fir_reg_uasgn5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_uasgn4_);
  // checkMissing(uasgn5)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_uasgn5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty()));
  // r62 = seq_along(uasgn5)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_uasgn5_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // goto L18(r62)
  // L18(r62)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r62_;
  goto L18_;

L147_:;
  // goto L9(i2)
  // L9(i2)
  Rsh_Fir_reg_prj2_ = Rsh_Fir_reg_i2_;
  goto L9_;

D35_:;
  // deopt 131 [i2, asgn2]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_asgn2_;
  Rsh_Fir_deopt(131, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L148_:;
  // asgn3 = force? asgn2
  Rsh_Fir_reg_asgn3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_asgn2_);
  // checkMissing(asgn3)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_asgn3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty()));
  // uasgn6 = ld uasgn
  Rsh_Fir_reg_uasgn6_ = Rsh_Fir_load(Rsh_const(CCP, 56), RHO);
  // check L149() else D36()
  // L149()
  goto L149_;

D36_:;
  // deopt 132 [i2, asgn3, uasgn6]
  SEXP Rsh_Fir_array_deopt_stack31[3];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_asgn3_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_uasgn6_;
  Rsh_Fir_deopt(132, 3, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L149_:;
  // uasgn7 = force? uasgn6
  Rsh_Fir_reg_uasgn7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_uasgn6_);
  // checkMissing(uasgn7)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_uasgn7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(uasgn7)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_uasgn7_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // if c17 then L150() else L151(i2, asgn3, uasgn7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L150()
    goto L150_;
  } else {
  // L151(i2, asgn3, uasgn7)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_asgn5_ = Rsh_Fir_reg_asgn3_;
    Rsh_Fir_reg_uasgn9_ = Rsh_Fir_reg_uasgn7_;
    goto L151_;
  }

L150_:;
  // dr24 = tryDispatchBuiltin.1("[", uasgn7)
  SEXP Rsh_Fir_array_args158[2];
  Rsh_Fir_array_args158[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args158[1] = Rsh_Fir_reg_uasgn7_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args158);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty());
  // if dc12 then L152() else L151(i2, asgn3, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L152()
    goto L152_;
  } else {
  // L151(i2, asgn3, dr24)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_asgn5_ = Rsh_Fir_reg_asgn3_;
    Rsh_Fir_reg_uasgn9_ = Rsh_Fir_reg_dr24_;
    goto L151_;
  }

L151_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L153() else D37()
  // L153()
  goto L153_;

L152_:;
  // dx50 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx50_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty());
  // goto L20(i2, asgn3, dx50)
  // L20(i2, asgn3, dx50)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_asgn7_ = Rsh_Fir_reg_asgn3_;
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_dx50_;
  goto L20_;

D37_:;
  // deopt 134 [i6, asgn5, uasgn9, i9]
  SEXP Rsh_Fir_array_deopt_stack32[4];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_asgn5_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_uasgn9_;
  Rsh_Fir_array_deopt_stack32[3] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(134, 4, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L153_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r63 = dyn __4(uasgn9, i10)
  SEXP Rsh_Fir_array_args161[2];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_uasgn9_;
  Rsh_Fir_array_args161[1] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args161, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L20(i6, asgn5, r63)
  // L20(i6, asgn5, r63)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_asgn7_ = Rsh_Fir_reg_asgn5_;
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_r63_;
  goto L20_;

L154_:;
  // select = ld select
  Rsh_Fir_reg_select = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L156() else D38()
  // L156()
  goto L156_;

L155_:;
  // r65 = dyn base9(<sym select>)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args162, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L21(i8, r65)
  // L21(i8, r65)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r65_;
  goto L21_;

D38_:;
  // deopt 141 [i8, select]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_select;
  Rsh_Fir_deopt(141, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L156_:;
  // select1 = force? select
  Rsh_Fir_reg_select1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_select);
  // checkMissing(select1)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_select1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty()));
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r67 = dyn sum(select1)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_select1_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L157() else D39()
  // L157()
  goto L157_;

D39_:;
  // deopt 144 [i8, r67]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(144, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L157_:;
  // goto L21(i8, r67)
  // L21(i8, r67)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r67_;
  goto L21_;

L158_:;
  // dr26 = tryDispatchBuiltin.0("[<-", l2, r66)
  SEXP Rsh_Fir_array_args165[3];
  Rsh_Fir_array_args165[0] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args165[2] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args165);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty());
  // if dc13 then L160() else L159(i13, r66, dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L160()
    goto L160_;
  } else {
  // L159(i13, r66, dr26)
    Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i13_;
    Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r66_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_dr26_;
    goto L159_;
  }

L159_:;
  // i18 = ld i
  Rsh_Fir_reg_i18_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L161() else D40()
  // L161()
  goto L161_;

L160_:;
  // dx52 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx52_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty());
  // goto L22(i13, dx52)
  // L22(i13, dx52)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_dx53_ = Rsh_Fir_reg_dx52_;
  goto L22_;

D40_:;
  // deopt 146 [i15, r69, l4, r66, i18]
  SEXP Rsh_Fir_array_deopt_stack35[5];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack35[3] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_deopt_stack35[4] = Rsh_Fir_reg_i18_;
  Rsh_Fir_deopt(146, 5, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L161_:;
  // i19 = force? i18
  Rsh_Fir_reg_i19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i18_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 70), RHO);
  // r72 = dyn ___(l4, r66, i19)
  SEXP Rsh_Fir_array_args168[3];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args168[1] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_args168[2] = Rsh_Fir_reg_i19_;
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args168, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L22(i15, r72)
  // L22(i15, r72)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_dx53_ = Rsh_Fir_reg_r72_;
  goto L22_;

D41_:;
  // deopt 151 [i17, prj3]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_prj3_;
  Rsh_Fir_deopt(151, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L162_:;
  // prj4 = force? prj3
  Rsh_Fir_reg_prj4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prj3_);
  // checkMissing(prj4)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_prj4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(prj4)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_prj4_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty());
  // if c19 then L163() else L164(i17, prj4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L163()
    goto L163_;
  } else {
  // L164(i17, prj4)
    Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i17_;
    Rsh_Fir_reg_prj6_ = Rsh_Fir_reg_prj4_;
    goto L164_;
  }

L163_:;
  // dr28 = tryDispatchBuiltin.1("[", prj4)
  SEXP Rsh_Fir_array_args171[2];
  Rsh_Fir_array_args171[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args171[1] = Rsh_Fir_reg_prj4_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args171);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty());
  // if dc14 then L165() else L164(i17, dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L165()
    goto L165_;
  } else {
  // L164(i17, dr28)
    Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i17_;
    Rsh_Fir_reg_prj6_ = Rsh_Fir_reg_dr28_;
    goto L164_;
  }

L164_:;
  // select2 = ld select
  Rsh_Fir_reg_select2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L166() else D42()
  // L166()
  goto L166_;

L165_:;
  // dx54 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx54_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // goto L23(i17, dx54)
  // L23(i17, dx54)
  Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_dx55_ = Rsh_Fir_reg_dx54_;
  goto L23_;

D42_:;
  // deopt 154 [i21, prj6, select2]
  SEXP Rsh_Fir_array_deopt_stack37[3];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_prj6_;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_select2_;
  Rsh_Fir_deopt(154, 3, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L166_:;
  // select3 = force? select2
  Rsh_Fir_reg_select3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_select2_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r73 = dyn __5(prj4, <missing>, select3, FALSE)
  SEXP Rsh_Fir_array_args174[4];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_prj4_;
  Rsh_Fir_array_args174[1] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args174[2] = Rsh_Fir_reg_select3_;
  Rsh_Fir_array_args174[3] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names35[4];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_array_arg_names35[3] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 4, Rsh_Fir_array_args174, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L23(i21, r73)
  // L23(i21, r73)
  Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i21_;
  Rsh_Fir_reg_dx55_ = Rsh_Fir_reg_r73_;
  goto L23_;

L167_:;
  // df = ld df
  Rsh_Fir_reg_df = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L169() else D43()
  // L169()
  goto L169_;

L168_:;
  // r74 = dyn base10(1.0, <lang `[`(df, i)>)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args175[1] = Rsh_const(CCP, 71);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args175, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L24(i23, r74)
  // L24(i23, r74)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i23_;
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r74_;
  goto L24_;

D43_:;
  // deopt 163 [i23, df]
  SEXP Rsh_Fir_array_deopt_stack38[2];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_df;
  Rsh_Fir_deopt(163, 2, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L169_:;
  // df1 = force? df
  Rsh_Fir_reg_df1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df);
  // checkMissing(df1)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_df1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(df1)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_df1_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // if c20 then L170() else L171(i23, df1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L170()
    goto L170_;
  } else {
  // L171(i23, df1)
    Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i23_;
    Rsh_Fir_reg_df3_ = Rsh_Fir_reg_df1_;
    goto L171_;
  }

L170_:;
  // dr30 = tryDispatchBuiltin.1("[", df1)
  SEXP Rsh_Fir_array_args178[2];
  Rsh_Fir_array_args178[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args178[1] = Rsh_Fir_reg_df1_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args178);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty());
  // if dc15 then L172() else L171(i23, dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L172()
    goto L172_;
  } else {
  // L171(i23, dr30)
    Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i23_;
    Rsh_Fir_reg_df3_ = Rsh_Fir_reg_dr30_;
    goto L171_;
  }

L171_:;
  // i31 = ld i
  Rsh_Fir_reg_i31_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L173() else D44()
  // L173()
  goto L173_;

L172_:;
  // dx56 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx56_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty());
  // goto L25(i23, dx56)
  // L25(i23, dx56)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i23_;
  Rsh_Fir_reg_dx57_ = Rsh_Fir_reg_dx56_;
  goto L25_;

D44_:;
  // deopt 165 [i28, df3, i31]
  SEXP Rsh_Fir_array_deopt_stack39[3];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_i28_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_df3_;
  Rsh_Fir_array_deopt_stack39[2] = Rsh_Fir_reg_i31_;
  Rsh_Fir_deopt(165, 3, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L173_:;
  // i32 = force? i31
  Rsh_Fir_reg_i32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i31_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r76 = dyn __6(df3, i32)
  SEXP Rsh_Fir_array_args181[2];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_df3_;
  Rsh_Fir_array_args181[1] = Rsh_Fir_reg_i32_;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args181, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L25(i28, r76)
  // L25(i28, r76)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i28_;
  Rsh_Fir_reg_dx57_ = Rsh_Fir_reg_r76_;
  goto L25_;

D45_:;
  // deopt 169 [i30, r77]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_i30_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(169, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L174_:;
  // goto L24(i30, r77)
  // L24(i30, r77)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i30_;
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r77_;
  goto L24_;

D46_:;
  // deopt 171 [i26, r78]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_i26_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(171, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L175_:;
  // l5 = ld result
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // c21 = `is.object`(l5)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty());
  // if c21 then L176() else L177(i26, r78, l5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L176()
    goto L176_;
  } else {
  // L177(i26, r78, l5)
    Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i26_;
    Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r78_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    goto L177_;
  }

L176_:;
  // dr32 = tryDispatchBuiltin.0("[<-", l5, r78)
  SEXP Rsh_Fir_array_args183[3];
  Rsh_Fir_array_args183[0] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args183[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args183[2] = Rsh_Fir_reg_r78_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args183);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty());
  // if dc16 then L178() else L177(i26, r78, dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L178()
    goto L178_;
  } else {
  // L177(i26, r78, dr32)
    Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i26_;
    Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r78_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr32_;
    goto L177_;
  }

L177_:;
  // i37 = ld i
  Rsh_Fir_reg_i37_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L179() else D47()
  // L179()
  goto L179_;

L178_:;
  // dx58 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx58_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty());
  // goto L26(i26, dx58)
  // L26(i26, dx58)
  Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i26_;
  Rsh_Fir_reg_dx59_ = Rsh_Fir_reg_dx58_;
  goto L26_;

D47_:;
  // deopt 174 [i34, r80, l7, r78, i37]
  SEXP Rsh_Fir_array_deopt_stack42[5];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_i34_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_r80_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack42[3] = Rsh_Fir_reg_r78_;
  Rsh_Fir_array_deopt_stack42[4] = Rsh_Fir_reg_i37_;
  Rsh_Fir_deopt(174, 5, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L179_:;
  // i38 = force? i37
  Rsh_Fir_reg_i38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i37_);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 70), RHO);
  // r83 = dyn ___2(l5, <missing>, i38, r78)
  SEXP Rsh_Fir_array_args186[4];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args186[1] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args186[2] = Rsh_Fir_reg_i38_;
  Rsh_Fir_array_args186[3] = Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_array_arg_names38[4];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_array_arg_names38[3] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 4, Rsh_Fir_array_args186, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L26(i34, r83)
  // L26(i34, r83)
  Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i34_;
  Rsh_Fir_reg_dx59_ = Rsh_Fir_reg_r83_;
  goto L26_;

L181_:;
  // object33 = ld object
  Rsh_Fir_reg_object33_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L183() else D48()
  // L183()
  goto L183_;

L182_:;
  // r84 = dyn base11(<lang `<-`(wt, `$`(object, weights))>)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args187, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L29(r84)
  // L29(r84)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r84_;
  goto L29_;

D48_:;
  // deopt 189 [object33]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_object33_;
  Rsh_Fir_deopt(189, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L183_:;
  // object34 = force? object33
  Rsh_Fir_reg_object34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object33_);
  // checkMissing(object34)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_object34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(object34)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_object34_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty());
  // if c22 then L185() else L186(object34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L185()
    goto L185_;
  } else {
  // L186(object34)
    Rsh_Fir_reg_object36_ = Rsh_Fir_reg_object34_;
    goto L186_;
  }

L184_:;
  // st wt = dx61
  Rsh_Fir_store(Rsh_const(CCP, 73), Rsh_Fir_reg_dx61_, RHO);
  (void)(Rsh_Fir_reg_dx61_);
  // c23 = `==`(dx61, NULL)
  SEXP Rsh_Fir_array_args190[2];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_dx61_;
  Rsh_Fir_array_args190[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty());
  // goto L29(c23)
  // L29(c23)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_c23_;
  goto L29_;

L185_:;
  // dr34 = tryDispatchBuiltin.1("$", object34)
  SEXP Rsh_Fir_array_args191[2];
  Rsh_Fir_array_args191[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args191[1] = Rsh_Fir_reg_object34_;
  Rsh_Fir_reg_dr34_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args191);
  // dc17 = getTryDispatchBuiltinDispatched(dr34)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dc17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty());
  // if dc17 then L187() else L186(dr34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc17_)) {
  // L187()
    goto L187_;
  } else {
  // L186(dr34)
    Rsh_Fir_reg_object36_ = Rsh_Fir_reg_dr34_;
    goto L186_;
  }

L186_:;
  // r86 = `$`(object36, <sym weights>)
  SEXP Rsh_Fir_array_args193[2];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_object36_;
  Rsh_Fir_array_args193[1] = Rsh_const(CCP, 74);
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty());
  // goto L184(r86)
  // L184(r86)
  Rsh_Fir_reg_dx61_ = Rsh_Fir_reg_r86_;
  goto L184_;

L187_:;
  // dx60 = getTryDispatchBuiltinValue(dr34)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dx60_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args194, Rsh_Fir_param_types_empty());
  // goto L184(dx60)
  // L184(dx60)
  Rsh_Fir_reg_dx61_ = Rsh_Fir_reg_dx60_;
  goto L184_;

L188_:;
  // unweighted_scale1 = ld `unweighted.scale`
  Rsh_Fir_reg_unweighted_scale1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L189() else D49()
  // L189()
  goto L189_;

D49_:;
  // deopt 195 [c24, unweighted_scale1]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_c24_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_unweighted_scale1_;
  Rsh_Fir_deopt(195, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L189_:;
  // unweighted_scale2 = force? unweighted_scale1
  Rsh_Fir_reg_unweighted_scale2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_unweighted_scale1_);
  // checkMissing(unweighted_scale2)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_unweighted_scale2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty()));
  // c27 = `as.logical`(unweighted_scale2)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_unweighted_scale2_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty());
  // c28 = `&&`(c24, c27)
  SEXP Rsh_Fir_array_args197[2];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_c24_;
  Rsh_Fir_array_args197[1] = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty());
  // goto L30(c28)
  // L30(c28)
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c28_;
  goto L30_;

L191_:;
  // result = ld result
  Rsh_Fir_reg_result = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L192() else D50()
  // L192()
  goto L192_;

D50_:;
  // deopt 198 [result]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_result;
  Rsh_Fir_deopt(198, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L192_:;
  // result1 = force? result
  Rsh_Fir_reg_result1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result);
  // checkMissing(result1)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_result1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty()));
  // sym12 = ldf sqrt
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 75), RHO);
  // base12 = ldf sqrt in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 75), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args199[2];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args199[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args199);
  // if guard12 then L193() else L194()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L193()
    goto L193_;
  } else {
  // L194()
    goto L194_;
  }

L193_:;
  // wt = ld wt
  Rsh_Fir_reg_wt = Rsh_Fir_load(Rsh_const(CCP, 73), RHO);
  // check L195() else D51()
  // L195()
  goto L195_;

L194_:;
  // r88 = dyn base12(<sym wt>)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_const(CCP, 73);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args200, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L32(result1, r88)
  // L32(result1, r88)
  Rsh_Fir_reg_result4_ = Rsh_Fir_reg_result1_;
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r88_;
  goto L32_;

D51_:;
  // deopt 200 [result1, wt]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_result1_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_wt;
  Rsh_Fir_deopt(200, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L195_:;
  // wt1 = force? wt
  Rsh_Fir_reg_wt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wt);
  // checkMissing(wt1)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_wt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty()));
  // r90 = sqrt(wt1)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_wt1_;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_builtin(169, CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty());
  // goto L32(result1, r90)
  // L32(result1, r90)
  Rsh_Fir_reg_result4_ = Rsh_Fir_reg_result1_;
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r90_;
  goto L32_;

L197_:;
  // wt2 = ld wt
  Rsh_Fir_reg_wt2_ = Rsh_Fir_load(Rsh_const(CCP, 73), RHO);
  // check L199() else D52()
  // L199()
  goto L199_;

L198_:;
  // r93 = dyn base13(<sym wt>)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_const(CCP, 73);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args203, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L34(r93)
  // L34(r93)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r93_;
  goto L34_;

D52_:;
  // deopt 208 [wt2]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_wt2_;
  Rsh_Fir_deopt(208, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L199_:;
  // wt3 = force? wt2
  Rsh_Fir_reg_wt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wt2_);
  // checkMissing(wt3)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_wt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty()));
  // c31 = `==`(wt3, NULL)
  SEXP Rsh_Fir_array_args205[2];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_wt3_;
  Rsh_Fir_array_args205[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args205, Rsh_Fir_param_types_empty());
  // goto L34(c31)
  // L34(c31)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_c31_;
  goto L34_;

L200_:;
  // unweighted_scale3 = ld `unweighted.scale`
  Rsh_Fir_reg_unweighted_scale3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L201() else D53()
  // L201()
  goto L201_;

D53_:;
  // deopt 212 [c32, unweighted_scale3]
  SEXP Rsh_Fir_array_deopt_stack48[2];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_unweighted_scale3_;
  Rsh_Fir_deopt(212, 2, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L201_:;
  // unweighted_scale4 = force? unweighted_scale3
  Rsh_Fir_reg_unweighted_scale4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_unweighted_scale3_);
  // checkMissing(unweighted_scale4)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_unweighted_scale4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty()));
  // r96 = `!`(unweighted_scale4)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_unweighted_scale4_;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args207, Rsh_Fir_param_types_empty());
  // c35 = `as.logical`(r96)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty());
  // c36 = `&&`(c32, c35)
  SEXP Rsh_Fir_array_args209[2];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_array_args209[1] = Rsh_Fir_reg_c35_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty());
  // goto L35(c36)
  // L35(c36)
  Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c36_;
  goto L35_;

D54_:;
  // deopt 217 [object37]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_object37_;
  Rsh_Fir_deopt(217, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L203_:;
  // object38 = force? object37
  Rsh_Fir_reg_object38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object37_);
  // checkMissing(object38)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_object38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args210, Rsh_Fir_param_types_empty()));
  // c38 = `is.object`(object38)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_object38_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty());
  // if c38 then L205() else L206(object38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L205()
    goto L205_;
  } else {
  // L206(object38)
    Rsh_Fir_reg_object40_ = Rsh_Fir_reg_object38_;
    goto L206_;
  }

L204_:;
  // r98 = `>`(dx63, 0.0)
  SEXP Rsh_Fir_array_args212[2];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_dx63_;
  Rsh_Fir_array_args212[1] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args212, Rsh_Fir_param_types_empty());
  // c39 = `as.logical`(r98)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_r98_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args213, Rsh_Fir_param_types_empty());
  // if c39 then L208() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L208()
    goto L208_;
  } else {
  // L36()
    goto L36_;
  }

L205_:;
  // dr36 = tryDispatchBuiltin.1("$", object38)
  SEXP Rsh_Fir_array_args214[2];
  Rsh_Fir_array_args214[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args214[1] = Rsh_Fir_reg_object38_;
  Rsh_Fir_reg_dr36_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args214);
  // dc18 = getTryDispatchBuiltinDispatched(dr36)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dc18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty());
  // if dc18 then L207() else L206(dr36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc18_)) {
  // L207()
    goto L207_;
  } else {
  // L206(dr36)
    Rsh_Fir_reg_object40_ = Rsh_Fir_reg_dr36_;
    goto L206_;
  }

L206_:;
  // r97 = `$`(object40, <sym df.residual>)
  SEXP Rsh_Fir_array_args216[2];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_object40_;
  Rsh_Fir_array_args216[1] = Rsh_const(CCP, 76);
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args216, Rsh_Fir_param_types_empty());
  // goto L204(r97)
  // L204(r97)
  Rsh_Fir_reg_dx63_ = Rsh_Fir_reg_r97_;
  goto L204_;

L207_:;
  // dx62 = getTryDispatchBuiltinValue(dr36)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dx62_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args217, Rsh_Fir_param_types_empty());
  // goto L204(dx62)
  // L204(dx62)
  Rsh_Fir_reg_dx63_ = Rsh_Fir_reg_dx62_;
  goto L204_;

L208_:;
  // use_wt = ld `use.wt`
  Rsh_Fir_reg_use_wt = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L209() else D55()
  // L209()
  goto L209_;

D55_:;
  // deopt 222 [use_wt]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_use_wt;
  Rsh_Fir_deopt(222, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L209_:;
  // use_wt1 = force? use_wt
  Rsh_Fir_reg_use_wt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_use_wt);
  // checkMissing(use_wt1)
  SEXP Rsh_Fir_array_args218[1];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_use_wt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args218, Rsh_Fir_param_types_empty()));
  // c40 = `as.logical`(use_wt1)
  SEXP Rsh_Fir_array_args219[1];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_use_wt1_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args219, Rsh_Fir_param_types_empty());
  // if c40 then L210() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L210()
    goto L210_;
  } else {
  // L37()
    goto L37_;
  }

L210_:;
  // object41 = ld object
  Rsh_Fir_reg_object41_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L211() else D56()
  // L211()
  goto L211_;

D56_:;
  // deopt 224 [object41]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_object41_;
  Rsh_Fir_deopt(224, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L211_:;
  // object42 = force? object41
  Rsh_Fir_reg_object42_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object41_);
  // checkMissing(object42)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_object42_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args220, Rsh_Fir_param_types_empty()));
  // c41 = `is.object`(object42)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_object42_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args221, Rsh_Fir_param_types_empty());
  // if c41 then L213() else L214(object42)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c41_)) {
  // L213()
    goto L213_;
  } else {
  // L214(object42)
    Rsh_Fir_reg_object44_ = Rsh_Fir_reg_object42_;
    goto L214_;
  }

L212_:;
  // sym14 = ldf sqrt
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 75), RHO);
  // base14 = ldf sqrt in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 75), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args222[2];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args222[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args222);
  // if guard14 then L216() else L217()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L216()
    goto L216_;
  } else {
  // L217()
    goto L217_;
  }

L213_:;
  // dr38 = tryDispatchBuiltin.1("$", object42)
  SEXP Rsh_Fir_array_args223[2];
  Rsh_Fir_array_args223[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args223[1] = Rsh_Fir_reg_object42_;
  Rsh_Fir_reg_dr38_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args223);
  // dc19 = getTryDispatchBuiltinDispatched(dr38)
  SEXP Rsh_Fir_array_args224[1];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dc19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args224, Rsh_Fir_param_types_empty());
  // if dc19 then L215() else L214(dr38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc19_)) {
  // L215()
    goto L215_;
  } else {
  // L214(dr38)
    Rsh_Fir_reg_object44_ = Rsh_Fir_reg_dr38_;
    goto L214_;
  }

L214_:;
  // r99 = `$`(object44, <sym residuals>)
  SEXP Rsh_Fir_array_args225[2];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_object44_;
  Rsh_Fir_array_args225[1] = Rsh_const(CCP, 64);
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args225, Rsh_Fir_param_types_empty());
  // goto L212(r99)
  // L212(r99)
  Rsh_Fir_reg_dx65_ = Rsh_Fir_reg_r99_;
  goto L212_;

L215_:;
  // dx64 = getTryDispatchBuiltinValue(dr38)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dx64_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty());
  // goto L212(dx64)
  // L212(dx64)
  Rsh_Fir_reg_dx65_ = Rsh_Fir_reg_dx64_;
  goto L212_;

L216_:;
  // wt4 = ld wt
  Rsh_Fir_reg_wt4_ = Rsh_Fir_load(Rsh_const(CCP, 73), RHO);
  // check L218() else D57()
  // L218()
  goto L218_;

L217_:;
  // r100 = dyn base14(<sym wt>)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_const(CCP, 73);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args227, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L38(dx65, r100)
  // L38(dx65, r100)
  Rsh_Fir_reg_dx68_ = Rsh_Fir_reg_dx65_;
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r100_;
  goto L38_;

D57_:;
  // deopt 227 [dx65, wt4]
  SEXP Rsh_Fir_array_deopt_stack52[2];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_dx65_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_wt4_;
  Rsh_Fir_deopt(227, 2, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L218_:;
  // wt5 = force? wt4
  Rsh_Fir_reg_wt5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wt4_);
  // checkMissing(wt5)
  SEXP Rsh_Fir_array_args228[1];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_wt5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args228, Rsh_Fir_param_types_empty()));
  // r102 = sqrt(wt5)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_wt5_;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_builtin(169, CCP, RHO, 1, Rsh_Fir_array_args229, Rsh_Fir_param_types_empty());
  // goto L38(dx65, r102)
  // L38(dx65, r102)
  Rsh_Fir_reg_dx68_ = Rsh_Fir_reg_dx65_;
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r102_;
  goto L38_;

D58_:;
  // deopt 231 [object45]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_object45_;
  Rsh_Fir_deopt(231, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L220_:;
  // object46 = force? object45
  Rsh_Fir_reg_object46_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object45_);
  // checkMissing(object46)
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_object46_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args230, Rsh_Fir_param_types_empty()));
  // c42 = `is.object`(object46)
  SEXP Rsh_Fir_array_args231[1];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_object46_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args231, Rsh_Fir_param_types_empty());
  // if c42 then L222() else L223(object46)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L222()
    goto L222_;
  } else {
  // L223(object46)
    Rsh_Fir_reg_object48_ = Rsh_Fir_reg_object46_;
    goto L223_;
  }

L221_:;
  // goto L39(dx70)
  // L39(dx70)
  Rsh_Fir_reg_r104_ = Rsh_Fir_reg_dx70_;
  goto L39_;

L222_:;
  // dr40 = tryDispatchBuiltin.1("$", object46)
  SEXP Rsh_Fir_array_args232[2];
  Rsh_Fir_array_args232[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args232[1] = Rsh_Fir_reg_object46_;
  Rsh_Fir_reg_dr40_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args232);
  // dc20 = getTryDispatchBuiltinDispatched(dr40)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dc20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty());
  // if dc20 then L224() else L223(dr40)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc20_)) {
  // L224()
    goto L224_;
  } else {
  // L223(dr40)
    Rsh_Fir_reg_object48_ = Rsh_Fir_reg_dr40_;
    goto L223_;
  }

L223_:;
  // r105 = `$`(object48, <sym residuals>)
  SEXP Rsh_Fir_array_args234[2];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_object48_;
  Rsh_Fir_array_args234[1] = Rsh_const(CCP, 64);
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args234, Rsh_Fir_param_types_empty());
  // goto L221(r105)
  // L221(r105)
  Rsh_Fir_reg_dx70_ = Rsh_Fir_reg_r105_;
  goto L221_;

L224_:;
  // dx69 = getTryDispatchBuiltinValue(dr40)
  SEXP Rsh_Fir_array_args235[1];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dx69_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args235, Rsh_Fir_param_types_empty());
  // goto L221(dx69)
  // L221(dx69)
  Rsh_Fir_reg_dx70_ = Rsh_Fir_reg_dx69_;
  goto L221_;

L225_:;
  // result5 = ld result
  Rsh_Fir_reg_result5_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L227() else D59()
  // L227()
  goto L227_;

L226_:;
  // r106 = dyn base15(<sym result>)
  SEXP Rsh_Fir_array_args236[1];
  Rsh_Fir_array_args236[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args236, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L40(r106)
  // L40(r106)
  Rsh_Fir_reg_r107_ = Rsh_Fir_reg_r106_;
  goto L40_;

D59_:;
  // deopt 237 [result5]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_result5_;
  Rsh_Fir_deopt(237, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L227_:;
  // result6 = force? result5
  Rsh_Fir_reg_result6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result5_);
  // checkMissing(result6)
  SEXP Rsh_Fir_array_args237[1];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_result6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args237, Rsh_Fir_param_types_empty()));
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r108 = dyn is_matrix(result6)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_result6_;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args238, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L228() else D60()
  // L228()
  goto L228_;

D60_:;
  // deopt 240 [r108]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_deopt(240, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L228_:;
  // goto L40(r108)
  // L40(r108)
  Rsh_Fir_reg_r107_ = Rsh_Fir_reg_r108_;
  goto L40_;

L229_:;
  // matrix1 = ldf matrix
  Rsh_Fir_reg_matrix1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L230() else D61()
  // L230()
  goto L230_;

D61_:;
  // deopt 243 []
  Rsh_Fir_deopt(243, 0, NULL, CCP, RHO);
  return R_NilValue;

L230_:;
  // p5 = prom<V +>{
  //   res = ld res;
  //   res1 = force? res;
  //   checkMissing(res1);
  //   return res1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1719482137_5, CCP, RHO);
  // p6 = prom<V +>{
  //   sym16 = ldf length;
  //   base16 = ldf length in base;
  //   guard16 = `==`.4(sym16, base16);
  //   if guard16 then L1() else L2();
  // L0(r112):
  //   return r112;
  // L1():
  //   res2 = ld res;
  //   res3 = force? res2;
  //   checkMissing(res3);
  //   length2 = ldf length in base;
  //   r113 = dyn length2(res3);
  //   goto L0(r113);
  // L2():
  //   r111 = dyn base16(<sym res>);
  //   goto L0(r111);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1719482137_6, CCP, RHO);
  // p7 = prom<V +>{
  //   sym17 = ldf list;
  //   base17 = ldf list in base;
  //   guard17 = `==`.4(sym17, base17);
  //   if guard17 then L2() else L3();
  // L0(r116):
  //   return r116;
  // L2():
  //   sym18 = ldf names;
  //   base18 = ldf names in base;
  //   guard18 = `==`.4(sym18, base18);
  //   if guard18 then L4() else L5();
  // L3():
  //   r115 = dyn base17(<lang names(res)>, "Residuals");
  //   goto L0(r115);
  // L1(r118):
  //   list1 = ldf list in base;
  //   r120 = dyn list1(r118, "Residuals");
  //   goto L0(r120);
  // L4():
  //   res4 = ld res;
  //   res5 = force? res4;
  //   checkMissing(res5);
  //   names = ldf names in base;
  //   r119 = dyn names(res5);
  //   goto L1(r119);
  // L5():
  //   r117 = dyn base18(<sym res>);
  //   goto L1(r117);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1719482137_7, CCP, RHO);
  // r122 = dyn matrix1[, , , dimnames](p5, p6, 1, p7)
  SEXP Rsh_Fir_array_args251[4];
  Rsh_Fir_array_args251[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args251[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args251[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args251[3] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names51[4];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_array_arg_names51[2] = R_MissingArg;
  Rsh_Fir_array_arg_names51[3] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix1_, 4, Rsh_Fir_array_args251, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L231() else D62()
  // L231()
  goto L231_;

D62_:;
  // deopt 249 [r122]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_r122_;
  Rsh_Fir_deopt(249, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L231_:;
  // st result = r122
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r122_, RHO);
  (void)(Rsh_Fir_reg_r122_);
  // goto L42()
  // L42()
  goto L42_;

L233_:;
  // result7 = ld result
  Rsh_Fir_reg_result7_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L235() else D63()
  // L235()
  goto L235_;

L234_:;
  // r124 = dyn base19(<sym result>)
  SEXP Rsh_Fir_array_args252[1];
  Rsh_Fir_array_args252[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r124_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args252, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L43(r124)
  // L43(r124)
  Rsh_Fir_reg_r125_ = Rsh_Fir_reg_r124_;
  goto L43_;

D63_:;
  // deopt 253 [result7]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_result7_;
  Rsh_Fir_deopt(253, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L235_:;
  // result8 = force? result7
  Rsh_Fir_reg_result8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result7_);
  // checkMissing(result8)
  SEXP Rsh_Fir_array_args253[1];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_result8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args253, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r126 = dyn dimnames(result8)
  SEXP Rsh_Fir_array_args254[1];
  Rsh_Fir_array_args254[0] = Rsh_Fir_reg_result8_;
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r126_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args254, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L236() else D64()
  // L236()
  goto L236_;

D64_:;
  // deopt 256 [r126]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r126_;
  Rsh_Fir_deopt(256, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L236_:;
  // goto L43(r126)
  // L43(r126)
  Rsh_Fir_reg_r125_ = Rsh_Fir_reg_r126_;
  goto L43_;

L237_:;
  // result9 = ld result
  Rsh_Fir_reg_result9_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L239() else D65()
  // L239()
  goto L239_;

L238_:;
  // r127 = dyn base20(<sym result>)
  SEXP Rsh_Fir_array_args255[1];
  Rsh_Fir_array_args255[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 1, Rsh_Fir_array_args255, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L44(r127)
  // L44(r127)
  Rsh_Fir_reg_r128_ = Rsh_Fir_reg_r127_;
  goto L44_;

D65_:;
  // deopt 260 [result9]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_result9_;
  Rsh_Fir_deopt(260, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L239_:;
  // result10 = force? result9
  Rsh_Fir_reg_result10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result9_);
  // checkMissing(result10)
  SEXP Rsh_Fir_array_args256[1];
  Rsh_Fir_array_args256[0] = Rsh_Fir_reg_result10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args256, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r129 = dyn dim(result10)
  SEXP Rsh_Fir_array_args257[1];
  Rsh_Fir_array_args257[0] = Rsh_Fir_reg_result10_;
  SEXP Rsh_Fir_array_arg_names55[1];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_reg_r129_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args257, Rsh_Fir_array_arg_names55, CCP, RHO);
  // check L240() else D66()
  // L240()
  goto L240_;

D66_:;
  // deopt 263 [r129]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_r129_;
  Rsh_Fir_deopt(263, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L240_:;
  // goto L44(r129)
  // L44(r129)
  Rsh_Fir_reg_r128_ = Rsh_Fir_reg_r129_;
  goto L44_;

D67_:;
  // deopt 266 []
  Rsh_Fir_deopt(266, 0, NULL, CCP, RHO);
  return R_NilValue;

L241_:;
  // p8 = prom<V +>{
  //   sym21 = ldf c;
  //   base21 = ldf c in base;
  //   guard21 = `==`.4(sym21, base21);
  //   if guard21 then L1() else L2();
  // L0(r131):
  //   return r131;
  // L1():
  //   result11 = ld result;
  //   result12 = force? result11;
  //   checkMissing(result12);
  //   res6 = ld res;
  //   res7 = force? res6;
  //   checkMissing(res7);
  //   c44 = ldf c in base;
  //   r132 = dyn c44(result12, res7);
  //   goto L0(r132);
  // L2():
  //   r130 = dyn base21(<sym result>, <sym res>);
  //   goto L0(r130);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1719482137_8, CCP, RHO);
  // r134 = dyn setNames(p8, NULL)
  SEXP Rsh_Fir_array_args263[2];
  Rsh_Fir_array_args263[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args263[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names58[2];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_array_arg_names58[1] = R_MissingArg;
  Rsh_Fir_reg_r134_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setNames, 2, Rsh_Fir_array_args263, Rsh_Fir_array_arg_names58, CCP, RHO);
  // check L242() else D68()
  // L242()
  goto L242_;

D68_:;
  // deopt 269 [r134]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_r134_;
  Rsh_Fir_deopt(269, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L242_:;
  // st result = r134
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r134_, RHO);
  (void)(Rsh_Fir_reg_r134_);
  // d = ld d
  Rsh_Fir_reg_d = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L243() else D69()
  // L243()
  goto L243_;

D69_:;
  // deopt 271 [d]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_d;
  Rsh_Fir_deopt(271, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L243_:;
  // d1 = force? d
  Rsh_Fir_reg_d1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args264[1];
  Rsh_Fir_array_args264[0] = Rsh_Fir_reg_d1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args264, Rsh_Fir_param_types_empty()));
  // sym22 = ldf c
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base22 = ldf c in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args265[2];
  Rsh_Fir_array_args265[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args265[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args265);
  // if guard22 then L244() else L245()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L244()
    goto L244_;
  } else {
  // L245()
    goto L245_;
  }

L244_:;
  // c45 = ldf c in base
  Rsh_Fir_reg_c45_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r137 = dyn c45(0.0, 1.0)
  SEXP Rsh_Fir_array_args266[2];
  Rsh_Fir_array_args266[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args266[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names59[2];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_array_arg_names59[1] = R_MissingArg;
  Rsh_Fir_reg_r137_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c45_, 2, Rsh_Fir_array_args266, Rsh_Fir_array_arg_names59, CCP, RHO);
  // check L246() else D70()
  // L246()
  goto L246_;

L245_:;
  // r135 = dyn base22(0.0, 1.0)
  SEXP Rsh_Fir_array_args267[2];
  Rsh_Fir_array_args267[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args267[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names60[2];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_reg_r135_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 2, Rsh_Fir_array_args267, Rsh_Fir_array_arg_names60, CCP, RHO);
  // goto L45(d1, r135)
  // L45(d1, r135)
  Rsh_Fir_reg_d4_ = Rsh_Fir_reg_d1_;
  Rsh_Fir_reg_r136_ = Rsh_Fir_reg_r135_;
  goto L45_;

D70_:;
  // deopt 277 [d1, r137]
  SEXP Rsh_Fir_array_deopt_stack63[2];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_d1_;
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_r137_;
  Rsh_Fir_deopt(277, 2, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L246_:;
  // goto L45(d1, r137)
  // L45(d1, r137)
  Rsh_Fir_reg_d4_ = Rsh_Fir_reg_d1_;
  Rsh_Fir_reg_r136_ = Rsh_Fir_reg_r137_;
  goto L45_;

D71_:;
  // deopt 280 [r138, l8, r138]
  SEXP Rsh_Fir_array_deopt_stack64[3];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_r138_;
  Rsh_Fir_array_deopt_stack64[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack64[2] = Rsh_Fir_reg_r138_;
  Rsh_Fir_deopt(280, 3, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L247_:;
  // r139 = dyn dim__(l8, NULL, r138)
  SEXP Rsh_Fir_array_args268[3];
  Rsh_Fir_array_args268[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args268[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args268[2] = Rsh_Fir_reg_r138_;
  SEXP Rsh_Fir_array_arg_names61[3];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_array_arg_names61[1] = R_MissingArg;
  Rsh_Fir_array_arg_names61[2] = R_MissingArg;
  Rsh_Fir_reg_r139_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim__, 3, Rsh_Fir_array_args268, Rsh_Fir_array_arg_names61, CCP, RHO);
  // check L248() else D72()
  // L248()
  goto L248_;

D72_:;
  // deopt 282 [r138, r139]
  SEXP Rsh_Fir_array_deopt_stack65[2];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_r138_;
  Rsh_Fir_array_deopt_stack65[1] = Rsh_Fir_reg_r139_;
  Rsh_Fir_deopt(282, 2, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L248_:;
  // st result = r139
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r139_, RHO);
  (void)(Rsh_Fir_reg_r139_);
  // sym23 = ldf list
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base23 = ldf list in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args269[2];
  Rsh_Fir_array_args269[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args269[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args269);
  // if guard23 then L249() else L250()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L249()
    goto L249_;
  } else {
  // L250()
    goto L250_;
  }

L249_:;
  // sym24 = ldf names
  Rsh_Fir_reg_sym24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 77), RHO);
  // base24 = ldf names in base
  Rsh_Fir_reg_base24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 77), RHO);
  // guard24 = `==`.4(sym24, base24)
  SEXP Rsh_Fir_array_args270[2];
  Rsh_Fir_array_args270[0] = Rsh_Fir_reg_sym24_;
  Rsh_Fir_array_args270[1] = Rsh_Fir_reg_base24_;
  Rsh_Fir_reg_guard24_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args270);
  // if guard24 then L251() else L252()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard24_)) {
  // L251()
    goto L251_;
  } else {
  // L252()
    goto L252_;
  }

L250_:;
  // r140 = dyn base23(<lang names(res)>, <lang c(`[[`(dn, 2), "Residuals")>)
  SEXP Rsh_Fir_array_args271[2];
  Rsh_Fir_array_args271[0] = Rsh_const(CCP, 78);
  Rsh_Fir_array_args271[1] = Rsh_const(CCP, 79);
  SEXP Rsh_Fir_array_arg_names62[2];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_array_arg_names62[1] = R_MissingArg;
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 2, Rsh_Fir_array_args271, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L46(r140)
  // L46(r140)
  Rsh_Fir_reg_r141_ = Rsh_Fir_reg_r140_;
  goto L46_;

L251_:;
  // res8 = ld res
  Rsh_Fir_reg_res8_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L253() else D73()
  // L253()
  goto L253_;

L252_:;
  // r142 = dyn base24(<sym res>)
  SEXP Rsh_Fir_array_args272[1];
  Rsh_Fir_array_args272[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names63[1];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_reg_r142_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base24_, 1, Rsh_Fir_array_args272, Rsh_Fir_array_arg_names63, CCP, RHO);
  // goto L47(r142)
  // L47(r142)
  Rsh_Fir_reg_r143_ = Rsh_Fir_reg_r142_;
  goto L47_;

D73_:;
  // deopt 288 [res8]
  SEXP Rsh_Fir_array_deopt_stack66[1];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_res8_;
  Rsh_Fir_deopt(288, 1, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L253_:;
  // res9 = force? res8
  Rsh_Fir_reg_res9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res8_);
  // checkMissing(res9)
  SEXP Rsh_Fir_array_args273[1];
  Rsh_Fir_array_args273[0] = Rsh_Fir_reg_res9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args273, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 77), RHO);
  // r144 = dyn names1(res9)
  SEXP Rsh_Fir_array_args274[1];
  Rsh_Fir_array_args274[0] = Rsh_Fir_reg_res9_;
  SEXP Rsh_Fir_array_arg_names64[1];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_reg_r144_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args274, Rsh_Fir_array_arg_names64, CCP, RHO);
  // check L254() else D74()
  // L254()
  goto L254_;

D74_:;
  // deopt 291 [r144]
  SEXP Rsh_Fir_array_deopt_stack67[1];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_r144_;
  Rsh_Fir_deopt(291, 1, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L254_:;
  // goto L47(r144)
  // L47(r144)
  Rsh_Fir_reg_r143_ = Rsh_Fir_reg_r144_;
  goto L47_;

L255_:;
  // dn = ld dn
  Rsh_Fir_reg_dn = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L257() else D75()
  // L257()
  goto L257_;

L256_:;
  // r145 = dyn base25(<lang `[[`(dn, 2)>, "Residuals")
  SEXP Rsh_Fir_array_args275[2];
  Rsh_Fir_array_args275[0] = Rsh_const(CCP, 80);
  Rsh_Fir_array_args275[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names65[2];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_array_arg_names65[1] = R_MissingArg;
  Rsh_Fir_reg_r145_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base25_, 2, Rsh_Fir_array_args275, Rsh_Fir_array_arg_names65, CCP, RHO);
  // goto L48(r145)
  // L48(r145)
  Rsh_Fir_reg_r146_ = Rsh_Fir_reg_r145_;
  goto L48_;

D75_:;
  // deopt 294 [dn]
  SEXP Rsh_Fir_array_deopt_stack68[1];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_dn;
  Rsh_Fir_deopt(294, 1, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L257_:;
  // dn1 = force? dn
  Rsh_Fir_reg_dn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn);
  // checkMissing(dn1)
  SEXP Rsh_Fir_array_args276[1];
  Rsh_Fir_array_args276[0] = Rsh_Fir_reg_dn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args276, Rsh_Fir_param_types_empty()));
  // c46 = `is.object`(dn1)
  SEXP Rsh_Fir_array_args277[1];
  Rsh_Fir_array_args277[0] = Rsh_Fir_reg_dn1_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args277, Rsh_Fir_param_types_empty());
  // if c46 then L258() else L259(dn1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L258()
    goto L258_;
  } else {
  // L259(dn1)
    Rsh_Fir_reg_dn3_ = Rsh_Fir_reg_dn1_;
    goto L259_;
  }

L258_:;
  // dr42 = tryDispatchBuiltin.1("[[", dn1)
  SEXP Rsh_Fir_array_args278[2];
  Rsh_Fir_array_args278[0] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args278[1] = Rsh_Fir_reg_dn1_;
  Rsh_Fir_reg_dr42_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args278);
  // dc21 = getTryDispatchBuiltinDispatched(dr42)
  SEXP Rsh_Fir_array_args279[1];
  Rsh_Fir_array_args279[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dc21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args279, Rsh_Fir_param_types_empty());
  // if dc21 then L260() else L259(dr42)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc21_)) {
  // L260()
    goto L260_;
  } else {
  // L259(dr42)
    Rsh_Fir_reg_dn3_ = Rsh_Fir_reg_dr42_;
    goto L259_;
  }

L259_:;
  // __7 = ldf `[[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 82), RHO);
  // r147 = dyn __7(dn3, 2)
  SEXP Rsh_Fir_array_args280[2];
  Rsh_Fir_array_args280[0] = Rsh_Fir_reg_dn3_;
  Rsh_Fir_array_args280[1] = Rsh_const(CCP, 83);
  SEXP Rsh_Fir_array_arg_names66[2];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_array_arg_names66[1] = R_MissingArg;
  Rsh_Fir_reg_r147_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args280, Rsh_Fir_array_arg_names66, CCP, RHO);
  // goto L49(r147)
  // L49(r147)
  Rsh_Fir_reg_dx72_ = Rsh_Fir_reg_r147_;
  goto L49_;

L260_:;
  // dx71 = getTryDispatchBuiltinValue(dr42)
  SEXP Rsh_Fir_array_args281[1];
  Rsh_Fir_array_args281[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dx71_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args281, Rsh_Fir_param_types_empty());
  // goto L49(dx71)
  // L49(dx71)
  Rsh_Fir_reg_dx72_ = Rsh_Fir_reg_dx71_;
  goto L49_;

D76_:;
  // deopt 301 [r148]
  SEXP Rsh_Fir_array_deopt_stack69[1];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_r148_;
  Rsh_Fir_deopt(301, 1, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L261_:;
  // goto L48(r148)
  // L48(r148)
  Rsh_Fir_reg_r146_ = Rsh_Fir_reg_r148_;
  goto L48_;

D77_:;
  // deopt 303 [r149]
  SEXP Rsh_Fir_array_deopt_stack70[1];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_r149_;
  Rsh_Fir_deopt(303, 1, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L262_:;
  // goto L46(r149)
  // L46(r149)
  Rsh_Fir_reg_r141_ = Rsh_Fir_reg_r149_;
  goto L46_;

D78_:;
  // deopt 305 [r141, l9, r141]
  SEXP Rsh_Fir_array_deopt_stack71[3];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_r141_;
  Rsh_Fir_array_deopt_stack71[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack71[2] = Rsh_Fir_reg_r141_;
  Rsh_Fir_deopt(305, 3, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L263_:;
  // r150 = dyn dimnames__1(l9, NULL, r141)
  SEXP Rsh_Fir_array_args282[3];
  Rsh_Fir_array_args282[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args282[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args282[2] = Rsh_Fir_reg_r141_;
  SEXP Rsh_Fir_array_arg_names67[3];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_array_arg_names67[1] = R_MissingArg;
  Rsh_Fir_array_arg_names67[2] = R_MissingArg;
  Rsh_Fir_reg_r150_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__1_, 3, Rsh_Fir_array_args282, Rsh_Fir_array_arg_names67, CCP, RHO);
  // check L264() else D79()
  // L264()
  goto L264_;

D79_:;
  // deopt 307 [r141, r150]
  SEXP Rsh_Fir_array_deopt_stack72[2];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_r141_;
  Rsh_Fir_array_deopt_stack72[1] = Rsh_Fir_reg_r150_;
  Rsh_Fir_deopt(307, 2, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L264_:;
  // st result = r150
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r150_, RHO);
  (void)(Rsh_Fir_reg_r150_);
  // goto L42()
  // L42()
  goto L42_;

L265_:;
  // df4 = ld df
  Rsh_Fir_reg_df4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L267() else D80()
  // L267()
  goto L267_;

L266_:;
  // r151 = dyn base26(<sym df>, <lang `$`(object, df.residual)>)
  SEXP Rsh_Fir_array_args283[2];
  Rsh_Fir_array_args283[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args283[1] = Rsh_const(CCP, 84);
  SEXP Rsh_Fir_array_arg_names68[2];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_array_arg_names68[1] = R_MissingArg;
  Rsh_Fir_reg_r151_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base26_, 2, Rsh_Fir_array_args283, Rsh_Fir_array_arg_names68, CCP, RHO);
  // goto L50(r151)
  // L50(r151)
  Rsh_Fir_reg_r152_ = Rsh_Fir_reg_r151_;
  goto L50_;

D80_:;
  // deopt 311 [df4]
  SEXP Rsh_Fir_array_deopt_stack73[1];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_df4_;
  Rsh_Fir_deopt(311, 1, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L267_:;
  // df5 = force? df4
  Rsh_Fir_reg_df5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df4_);
  // checkMissing(df5)
  SEXP Rsh_Fir_array_args284[1];
  Rsh_Fir_array_args284[0] = Rsh_Fir_reg_df5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args284, Rsh_Fir_param_types_empty()));
  // object49 = ld object
  Rsh_Fir_reg_object49_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L268() else D81()
  // L268()
  goto L268_;

D81_:;
  // deopt 313 [object49]
  SEXP Rsh_Fir_array_deopt_stack74[1];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_object49_;
  Rsh_Fir_deopt(313, 1, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L268_:;
  // object50 = force? object49
  Rsh_Fir_reg_object50_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object49_);
  // checkMissing(object50)
  SEXP Rsh_Fir_array_args285[1];
  Rsh_Fir_array_args285[0] = Rsh_Fir_reg_object50_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args285, Rsh_Fir_param_types_empty()));
  // c48 = `is.object`(object50)
  SEXP Rsh_Fir_array_args286[1];
  Rsh_Fir_array_args286[0] = Rsh_Fir_reg_object50_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args286, Rsh_Fir_param_types_empty());
  // if c48 then L270() else L271(object50)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c48_)) {
  // L270()
    goto L270_;
  } else {
  // L271(object50)
    Rsh_Fir_reg_object52_ = Rsh_Fir_reg_object50_;
    goto L271_;
  }

L269_:;
  // c49 = ldf c in base
  Rsh_Fir_reg_c49_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r154 = dyn c49(df5, dx74)
  SEXP Rsh_Fir_array_args287[2];
  Rsh_Fir_array_args287[0] = Rsh_Fir_reg_df5_;
  Rsh_Fir_array_args287[1] = Rsh_Fir_reg_dx74_;
  SEXP Rsh_Fir_array_arg_names69[2];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_array_arg_names69[1] = R_MissingArg;
  Rsh_Fir_reg_r154_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c49_, 2, Rsh_Fir_array_args287, Rsh_Fir_array_arg_names69, CCP, RHO);
  // check L273() else D82()
  // L273()
  goto L273_;

L270_:;
  // dr44 = tryDispatchBuiltin.1("$", object50)
  SEXP Rsh_Fir_array_args288[2];
  Rsh_Fir_array_args288[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args288[1] = Rsh_Fir_reg_object50_;
  Rsh_Fir_reg_dr44_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args288);
  // dc22 = getTryDispatchBuiltinDispatched(dr44)
  SEXP Rsh_Fir_array_args289[1];
  Rsh_Fir_array_args289[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dc22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args289, Rsh_Fir_param_types_empty());
  // if dc22 then L272() else L271(dr44)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc22_)) {
  // L272()
    goto L272_;
  } else {
  // L271(dr44)
    Rsh_Fir_reg_object52_ = Rsh_Fir_reg_dr44_;
    goto L271_;
  }

L271_:;
  // r153 = `$`(object52, <sym df.residual>)
  SEXP Rsh_Fir_array_args290[2];
  Rsh_Fir_array_args290[0] = Rsh_Fir_reg_object52_;
  Rsh_Fir_array_args290[1] = Rsh_const(CCP, 76);
  Rsh_Fir_reg_r153_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args290, Rsh_Fir_param_types_empty());
  // goto L269(r153)
  // L269(r153)
  Rsh_Fir_reg_dx74_ = Rsh_Fir_reg_r153_;
  goto L269_;

L272_:;
  // dx73 = getTryDispatchBuiltinValue(dr44)
  SEXP Rsh_Fir_array_args291[1];
  Rsh_Fir_array_args291[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dx73_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args291, Rsh_Fir_param_types_empty());
  // goto L269(dx73)
  // L269(dx73)
  Rsh_Fir_reg_dx74_ = Rsh_Fir_reg_dx73_;
  goto L269_;

D82_:;
  // deopt 317 [r154]
  SEXP Rsh_Fir_array_deopt_stack75[1];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_r154_;
  Rsh_Fir_deopt(317, 1, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L273_:;
  // goto L50(r154)
  // L50(r154)
  Rsh_Fir_reg_r152_ = Rsh_Fir_reg_r154_;
  goto L50_;

D83_:;
  // deopt 322 []
  Rsh_Fir_deopt(322, 0, NULL, CCP, RHO);
  return R_NilValue;

L275_:;
  // p9 = prom<V +>{
  //   result13 = ld result;
  //   result14 = force? result13;
  //   checkMissing(result14);
  //   return result14;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1719482137_9, CCP, RHO);
  // r157 = dyn colnames(p9)
  SEXP Rsh_Fir_array_args293[1];
  Rsh_Fir_array_args293[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names70[1];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_reg_r157_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colnames, 1, Rsh_Fir_array_args293, Rsh_Fir_array_arg_names70, CCP, RHO);
  // check L276() else D84()
  // L276()
  goto L276_;

D84_:;
  // deopt 324 [r157]
  SEXP Rsh_Fir_array_deopt_stack76[1];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_r157_;
  Rsh_Fir_deopt(324, 1, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

L276_:;
  // l10 = ld df
  Rsh_Fir_reg_l10_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 85), RHO);
  // check L277() else D85()
  // L277()
  goto L277_;

D85_:;
  // deopt 326 [r157, l10, r157]
  SEXP Rsh_Fir_array_deopt_stack77[3];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_r157_;
  Rsh_Fir_array_deopt_stack77[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack77[2] = Rsh_Fir_reg_r157_;
  Rsh_Fir_deopt(326, 3, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

L277_:;
  // r158 = dyn names__(l10, NULL, r157)
  SEXP Rsh_Fir_array_args294[3];
  Rsh_Fir_array_args294[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args294[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args294[2] = Rsh_Fir_reg_r157_;
  SEXP Rsh_Fir_array_arg_names71[3];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_array_arg_names71[1] = R_MissingArg;
  Rsh_Fir_array_arg_names71[2] = R_MissingArg;
  Rsh_Fir_reg_r158_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args294, Rsh_Fir_array_arg_names71, CCP, RHO);
  // check L278() else D86()
  // L278()
  goto L278_;

D86_:;
  // deopt 328 [r157, r158]
  SEXP Rsh_Fir_array_deopt_stack78[2];
  Rsh_Fir_array_deopt_stack78[0] = Rsh_Fir_reg_r157_;
  Rsh_Fir_array_deopt_stack78[1] = Rsh_Fir_reg_r158_;
  Rsh_Fir_deopt(328, 2, Rsh_Fir_array_deopt_stack78, CCP, RHO);
  return R_NilValue;

L278_:;
  // st df = r158
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r158_, RHO);
  (void)(Rsh_Fir_reg_r158_);
  // df6 = ld df
  Rsh_Fir_reg_df6_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L279() else D87()
  // L279()
  goto L279_;

D87_:;
  // deopt 330 [df6]
  SEXP Rsh_Fir_array_deopt_stack79[1];
  Rsh_Fir_array_deopt_stack79[0] = Rsh_Fir_reg_df6_;
  Rsh_Fir_deopt(330, 1, Rsh_Fir_array_deopt_stack79, CCP, RHO);
  return R_NilValue;

L279_:;
  // df7 = force? df6
  Rsh_Fir_reg_df7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df6_);
  // checkMissing(df7)
  SEXP Rsh_Fir_array_args295[1];
  Rsh_Fir_array_args295[0] = Rsh_Fir_reg_df7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args295, Rsh_Fir_param_types_empty()));
  // l11 = ld result
  Rsh_Fir_reg_l11_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 86), RHO);
  // check L280() else D88()
  // L280()
  goto L280_;

D88_:;
  // deopt 333 [df7, l11, df7]
  SEXP Rsh_Fir_array_deopt_stack80[3];
  Rsh_Fir_array_deopt_stack80[0] = Rsh_Fir_reg_df7_;
  Rsh_Fir_array_deopt_stack80[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack80[2] = Rsh_Fir_reg_df7_;
  Rsh_Fir_deopt(333, 3, Rsh_Fir_array_deopt_stack80, CCP, RHO);
  return R_NilValue;

L280_:;
  // r159 = dyn attr__(l11, NULL, "df", df7)
  SEXP Rsh_Fir_array_args296[4];
  Rsh_Fir_array_args296[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args296[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args296[2] = Rsh_const(CCP, 87);
  Rsh_Fir_array_args296[3] = Rsh_Fir_reg_df7_;
  SEXP Rsh_Fir_array_arg_names72[4];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_array_arg_names72[1] = R_MissingArg;
  Rsh_Fir_array_arg_names72[2] = R_MissingArg;
  Rsh_Fir_array_arg_names72[3] = R_MissingArg;
  Rsh_Fir_reg_r159_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args296, Rsh_Fir_array_arg_names72, CCP, RHO);
  // check L281() else D89()
  // L281()
  goto L281_;

D89_:;
  // deopt 336 [df7, r159]
  SEXP Rsh_Fir_array_deopt_stack81[2];
  Rsh_Fir_array_deopt_stack81[0] = Rsh_Fir_reg_df7_;
  Rsh_Fir_array_deopt_stack81[1] = Rsh_Fir_reg_r159_;
  Rsh_Fir_deopt(336, 2, Rsh_Fir_array_deopt_stack81, CCP, RHO);
  return R_NilValue;

L281_:;
  // st result = r159
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r159_, RHO);
  (void)(Rsh_Fir_reg_r159_);
  // object53 = ld object
  Rsh_Fir_reg_object53_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L282() else D90()
  // L282()
  goto L282_;

D90_:;
  // deopt 338 [object53]
  SEXP Rsh_Fir_array_deopt_stack82[1];
  Rsh_Fir_array_deopt_stack82[0] = Rsh_Fir_reg_object53_;
  Rsh_Fir_deopt(338, 1, Rsh_Fir_array_deopt_stack82, CCP, RHO);
  return R_NilValue;

L282_:;
  // object54 = force? object53
  Rsh_Fir_reg_object54_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object53_);
  // checkMissing(object54)
  SEXP Rsh_Fir_array_args297[1];
  Rsh_Fir_array_args297[0] = Rsh_Fir_reg_object54_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args297, Rsh_Fir_param_types_empty()));
  // c50 = `is.object`(object54)
  SEXP Rsh_Fir_array_args298[1];
  Rsh_Fir_array_args298[0] = Rsh_Fir_reg_object54_;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args298, Rsh_Fir_param_types_empty());
  // if c50 then L284() else L285(object54)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c50_)) {
  // L284()
    goto L284_;
  } else {
  // L285(object54)
    Rsh_Fir_reg_object56_ = Rsh_Fir_reg_object54_;
    goto L285_;
  }

L283_:;
  // c51 = `is.object`(dx76)
  SEXP Rsh_Fir_array_args299[1];
  Rsh_Fir_array_args299[0] = Rsh_Fir_reg_dx76_;
  Rsh_Fir_reg_c51_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args299, Rsh_Fir_param_types_empty());
  // if c51 then L288() else L289(dx76)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c51_)) {
  // L288()
    goto L288_;
  } else {
  // L289(dx76)
    Rsh_Fir_reg_dx78_ = Rsh_Fir_reg_dx76_;
    goto L289_;
  }

L284_:;
  // dr46 = tryDispatchBuiltin.1("$", object54)
  SEXP Rsh_Fir_array_args300[2];
  Rsh_Fir_array_args300[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args300[1] = Rsh_Fir_reg_object54_;
  Rsh_Fir_reg_dr46_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args300);
  // dc23 = getTryDispatchBuiltinDispatched(dr46)
  SEXP Rsh_Fir_array_args301[1];
  Rsh_Fir_array_args301[0] = Rsh_Fir_reg_dr46_;
  Rsh_Fir_reg_dc23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args301, Rsh_Fir_param_types_empty());
  // if dc23 then L286() else L285(dr46)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc23_)) {
  // L286()
    goto L286_;
  } else {
  // L285(dr46)
    Rsh_Fir_reg_object56_ = Rsh_Fir_reg_dr46_;
    goto L285_;
  }

L285_:;
  // r160 = `$`(object56, <sym call>)
  SEXP Rsh_Fir_array_args302[2];
  Rsh_Fir_array_args302[0] = Rsh_Fir_reg_object56_;
  Rsh_Fir_array_args302[1] = Rsh_const(CCP, 88);
  Rsh_Fir_reg_r160_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args302, Rsh_Fir_param_types_empty());
  // goto L283(r160)
  // L283(r160)
  Rsh_Fir_reg_dx76_ = Rsh_Fir_reg_r160_;
  goto L283_;

L286_:;
  // dx75 = getTryDispatchBuiltinValue(dr46)
  SEXP Rsh_Fir_array_args303[1];
  Rsh_Fir_array_args303[0] = Rsh_Fir_reg_dr46_;
  Rsh_Fir_reg_dx75_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args303, Rsh_Fir_param_types_empty());
  // goto L283(dx75)
  // L283(dx75)
  Rsh_Fir_reg_dx76_ = Rsh_Fir_reg_dx75_;
  goto L283_;

L287_:;
  // l12 = ld result
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 86), RHO);
  // check L291() else D91()
  // L291()
  goto L291_;

L288_:;
  // dr48 = tryDispatchBuiltin.1("$", dx76)
  SEXP Rsh_Fir_array_args304[2];
  Rsh_Fir_array_args304[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args304[1] = Rsh_Fir_reg_dx76_;
  Rsh_Fir_reg_dr48_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args304);
  // dc24 = getTryDispatchBuiltinDispatched(dr48)
  SEXP Rsh_Fir_array_args305[1];
  Rsh_Fir_array_args305[0] = Rsh_Fir_reg_dr48_;
  Rsh_Fir_reg_dc24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args305, Rsh_Fir_param_types_empty());
  // if dc24 then L290() else L289(dr48)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc24_)) {
  // L290()
    goto L290_;
  } else {
  // L289(dr48)
    Rsh_Fir_reg_dx78_ = Rsh_Fir_reg_dr48_;
    goto L289_;
  }

L289_:;
  // r161 = `$`(dx78, <sym formula>)
  SEXP Rsh_Fir_array_args306[2];
  Rsh_Fir_array_args306[0] = Rsh_Fir_reg_dx78_;
  Rsh_Fir_array_args306[1] = Rsh_const(CCP, 89);
  Rsh_Fir_reg_r161_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args306, Rsh_Fir_param_types_empty());
  // goto L287(r161)
  // L287(r161)
  Rsh_Fir_reg_dx80_ = Rsh_Fir_reg_r161_;
  goto L287_;

L290_:;
  // dx79 = getTryDispatchBuiltinValue(dr48)
  SEXP Rsh_Fir_array_args307[1];
  Rsh_Fir_array_args307[0] = Rsh_Fir_reg_dr48_;
  Rsh_Fir_reg_dx79_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args307, Rsh_Fir_param_types_empty());
  // goto L287(dx79)
  // L287(dx79)
  Rsh_Fir_reg_dx80_ = Rsh_Fir_reg_dx79_;
  goto L287_;

D91_:;
  // deopt 343 [dx80, l12, dx80]
  SEXP Rsh_Fir_array_deopt_stack83[3];
  Rsh_Fir_array_deopt_stack83[0] = Rsh_Fir_reg_dx80_;
  Rsh_Fir_array_deopt_stack83[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack83[2] = Rsh_Fir_reg_dx80_;
  Rsh_Fir_deopt(343, 3, Rsh_Fir_array_deopt_stack83, CCP, RHO);
  return R_NilValue;

L291_:;
  // r162 = dyn attr__1(l12, NULL, "formula", dx80)
  SEXP Rsh_Fir_array_args308[4];
  Rsh_Fir_array_args308[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args308[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args308[2] = Rsh_const(CCP, 90);
  Rsh_Fir_array_args308[3] = Rsh_Fir_reg_dx80_;
  SEXP Rsh_Fir_array_arg_names73[4];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_array_arg_names73[1] = R_MissingArg;
  Rsh_Fir_array_arg_names73[2] = R_MissingArg;
  Rsh_Fir_array_arg_names73[3] = R_MissingArg;
  Rsh_Fir_reg_r162_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args308, Rsh_Fir_array_arg_names73, CCP, RHO);
  // check L292() else D92()
  // L292()
  goto L292_;

D92_:;
  // deopt 346 [dx80, r162]
  SEXP Rsh_Fir_array_deopt_stack84[2];
  Rsh_Fir_array_deopt_stack84[0] = Rsh_Fir_reg_dx80_;
  Rsh_Fir_array_deopt_stack84[1] = Rsh_Fir_reg_r162_;
  Rsh_Fir_deopt(346, 2, Rsh_Fir_array_deopt_stack84, CCP, RHO);
  return R_NilValue;

L292_:;
  // st result = r162
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r162_, RHO);
  (void)(Rsh_Fir_reg_r162_);
  // onedf3 = ld onedf
  Rsh_Fir_reg_onedf3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L293() else D93()
  // L293()
  goto L293_;

D93_:;
  // deopt 348 [onedf3]
  SEXP Rsh_Fir_array_deopt_stack85[1];
  Rsh_Fir_array_deopt_stack85[0] = Rsh_Fir_reg_onedf3_;
  Rsh_Fir_deopt(348, 1, Rsh_Fir_array_deopt_stack85, CCP, RHO);
  return R_NilValue;

L293_:;
  // onedf4 = force? onedf3
  Rsh_Fir_reg_onedf4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_onedf3_);
  // checkMissing(onedf4)
  SEXP Rsh_Fir_array_args309[1];
  Rsh_Fir_array_args309[0] = Rsh_Fir_reg_onedf4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args309, Rsh_Fir_param_types_empty()));
  // l13 = ld result
  Rsh_Fir_reg_l13_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // attr__2 = ldf `attr<-`
  Rsh_Fir_reg_attr__2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 86), RHO);
  // check L294() else D94()
  // L294()
  goto L294_;

D94_:;
  // deopt 351 [onedf4, l13, onedf4]
  SEXP Rsh_Fir_array_deopt_stack86[3];
  Rsh_Fir_array_deopt_stack86[0] = Rsh_Fir_reg_onedf4_;
  Rsh_Fir_array_deopt_stack86[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack86[2] = Rsh_Fir_reg_onedf4_;
  Rsh_Fir_deopt(351, 3, Rsh_Fir_array_deopt_stack86, CCP, RHO);
  return R_NilValue;

L294_:;
  // r163 = dyn attr__2(l13, NULL, "onedf", onedf4)
  SEXP Rsh_Fir_array_args310[4];
  Rsh_Fir_array_args310[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args310[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args310[2] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args310[3] = Rsh_Fir_reg_onedf4_;
  SEXP Rsh_Fir_array_arg_names74[4];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_array_arg_names74[1] = R_MissingArg;
  Rsh_Fir_array_arg_names74[2] = R_MissingArg;
  Rsh_Fir_array_arg_names74[3] = R_MissingArg;
  Rsh_Fir_reg_r163_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__2_, 4, Rsh_Fir_array_args310, Rsh_Fir_array_arg_names74, CCP, RHO);
  // check L295() else D95()
  // L295()
  goto L295_;

D95_:;
  // deopt 354 [onedf4, r163]
  SEXP Rsh_Fir_array_deopt_stack87[2];
  Rsh_Fir_array_deopt_stack87[0] = Rsh_Fir_reg_onedf4_;
  Rsh_Fir_array_deopt_stack87[1] = Rsh_Fir_reg_r163_;
  Rsh_Fir_deopt(354, 2, Rsh_Fir_array_deopt_stack87, CCP, RHO);
  return R_NilValue;

L295_:;
  // st result = r163
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r163_, RHO);
  (void)(Rsh_Fir_reg_r163_);
  // sym27 = ldf `is.null`
  Rsh_Fir_reg_sym27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base27 = ldf `is.null` in base
  Rsh_Fir_reg_base27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard27 = `==`.4(sym27, base27)
  SEXP Rsh_Fir_array_args311[2];
  Rsh_Fir_array_args311[0] = Rsh_Fir_reg_sym27_;
  Rsh_Fir_array_args311[1] = Rsh_Fir_reg_base27_;
  Rsh_Fir_reg_guard27_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args311);
  // if guard27 then L296() else L297()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard27_)) {
  // L296()
    goto L296_;
  } else {
  // L297()
    goto L297_;
  }

L296_:;
  // wt6 = ld wt
  Rsh_Fir_reg_wt6_ = Rsh_Fir_load(Rsh_const(CCP, 73), RHO);
  // check L298() else D96()
  // L298()
  goto L298_;

L297_:;
  // r164 = dyn base27(<sym wt>)
  SEXP Rsh_Fir_array_args312[1];
  Rsh_Fir_array_args312[0] = Rsh_const(CCP, 73);
  SEXP Rsh_Fir_array_arg_names75[1];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_reg_r164_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base27_, 1, Rsh_Fir_array_args312, Rsh_Fir_array_arg_names75, CCP, RHO);
  // goto L52(r164)
  // L52(r164)
  Rsh_Fir_reg_r165_ = Rsh_Fir_reg_r164_;
  goto L52_;

D96_:;
  // deopt 357 [wt6]
  SEXP Rsh_Fir_array_deopt_stack88[1];
  Rsh_Fir_array_deopt_stack88[0] = Rsh_Fir_reg_wt6_;
  Rsh_Fir_deopt(357, 1, Rsh_Fir_array_deopt_stack88, CCP, RHO);
  return R_NilValue;

L298_:;
  // wt7 = force? wt6
  Rsh_Fir_reg_wt7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_wt6_);
  // checkMissing(wt7)
  SEXP Rsh_Fir_array_args313[1];
  Rsh_Fir_array_args313[0] = Rsh_Fir_reg_wt7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args313, Rsh_Fir_param_types_empty()));
  // c52 = `==`(wt7, NULL)
  SEXP Rsh_Fir_array_args314[2];
  Rsh_Fir_array_args314[0] = Rsh_Fir_reg_wt7_;
  Rsh_Fir_array_args314[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c52_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args314, Rsh_Fir_param_types_empty());
  // goto L52(c52)
  // L52(c52)
  Rsh_Fir_reg_r165_ = Rsh_Fir_reg_c52_;
  goto L52_;

L299_:;
  // unweighted_scale5 = ld `unweighted.scale`
  Rsh_Fir_reg_unweighted_scale5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L300() else D97()
  // L300()
  goto L300_;

D97_:;
  // deopt 361 [unweighted_scale5]
  SEXP Rsh_Fir_array_deopt_stack89[1];
  Rsh_Fir_array_deopt_stack89[0] = Rsh_Fir_reg_unweighted_scale5_;
  Rsh_Fir_deopt(361, 1, Rsh_Fir_array_deopt_stack89, CCP, RHO);
  return R_NilValue;

L300_:;
  // unweighted_scale6 = force? unweighted_scale5
  Rsh_Fir_reg_unweighted_scale6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_unweighted_scale5_);
  // checkMissing(unweighted_scale6)
  SEXP Rsh_Fir_array_args315[1];
  Rsh_Fir_array_args315[0] = Rsh_Fir_reg_unweighted_scale6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args315, Rsh_Fir_param_types_empty()));
  // l14 = ld result
  Rsh_Fir_reg_l14_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // attr__3 = ldf `attr<-`
  Rsh_Fir_reg_attr__3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 86), RHO);
  // check L301() else D98()
  // L301()
  goto L301_;

D98_:;
  // deopt 364 [unweighted_scale6, l14, unweighted_scale6]
  SEXP Rsh_Fir_array_deopt_stack90[3];
  Rsh_Fir_array_deopt_stack90[0] = Rsh_Fir_reg_unweighted_scale6_;
  Rsh_Fir_array_deopt_stack90[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack90[2] = Rsh_Fir_reg_unweighted_scale6_;
  Rsh_Fir_deopt(364, 3, Rsh_Fir_array_deopt_stack90, CCP, RHO);
  return R_NilValue;

L301_:;
  // r167 = dyn attr__3(l14, NULL, "unweighted.scale", unweighted_scale6)
  SEXP Rsh_Fir_array_args316[4];
  Rsh_Fir_array_args316[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args316[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args316[2] = Rsh_const(CCP, 92);
  Rsh_Fir_array_args316[3] = Rsh_Fir_reg_unweighted_scale6_;
  SEXP Rsh_Fir_array_arg_names76[4];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_array_arg_names76[1] = R_MissingArg;
  Rsh_Fir_array_arg_names76[2] = R_MissingArg;
  Rsh_Fir_array_arg_names76[3] = R_MissingArg;
  Rsh_Fir_reg_r167_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__3_, 4, Rsh_Fir_array_args316, Rsh_Fir_array_arg_names76, CCP, RHO);
  // check L302() else D99()
  // L302()
  goto L302_;

D99_:;
  // deopt 367 [unweighted_scale6, r167]
  SEXP Rsh_Fir_array_deopt_stack91[2];
  Rsh_Fir_array_deopt_stack91[0] = Rsh_Fir_reg_unweighted_scale6_;
  Rsh_Fir_array_deopt_stack91[1] = Rsh_Fir_reg_r167_;
  Rsh_Fir_deopt(367, 2, Rsh_Fir_array_deopt_stack91, CCP, RHO);
  return R_NilValue;

L302_:;
  // st result = r167
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r167_, RHO);
  (void)(Rsh_Fir_reg_r167_);
  // goto L54()
  // L54()
  goto L54_;

D100_:;
  // deopt 371 [result15]
  SEXP Rsh_Fir_array_deopt_stack92[1];
  Rsh_Fir_array_deopt_stack92[0] = Rsh_Fir_reg_result15_;
  Rsh_Fir_deopt(371, 1, Rsh_Fir_array_deopt_stack92, CCP, RHO);
  return R_NilValue;

L304_:;
  // result16 = force? result15
  Rsh_Fir_reg_result16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result15_);
  // checkMissing(result16)
  SEXP Rsh_Fir_array_args317[1];
  Rsh_Fir_array_args317[0] = Rsh_Fir_reg_result16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args317, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return result16
  return Rsh_Fir_reg_result16_;
}
SEXP Rsh_Fir_user_promise_inner1719482137_(SEXP CCP, SEXP RHO) {
  // object7 = ld object
  Rsh_Fir_reg_object7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object8 = force? object7
  Rsh_Fir_reg_object8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object7_);
  // checkMissing(object8)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_object8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return object8
  return Rsh_Fir_reg_object8_;
}
SEXP Rsh_Fir_user_promise_inner1719482137_1(SEXP CCP, SEXP RHO) {
  // asgn = ld asgn
  Rsh_Fir_reg_asgn = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // asgn1 = force? asgn
  Rsh_Fir_reg_asgn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_asgn);
  // checkMissing(asgn1)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_asgn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // return asgn1
  return Rsh_Fir_reg_asgn1_;
}
SEXP Rsh_Fir_user_promise_inner1719482137_2(SEXP CCP, SEXP RHO) {
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args128);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r47
  return Rsh_Fir_reg_r47_;

L1_:;
  // object25 = ld object
  Rsh_Fir_reg_object25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object26 = force? object25
  Rsh_Fir_reg_object26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object25_);
  // checkMissing(object26)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_object26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(object26)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_object26_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // if c14 then L4() else L5(object26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L4()
    goto L4_;
  } else {
  // L5(object26)
    Rsh_Fir_reg_object28_ = Rsh_Fir_reg_object26_;
    goto L5_;
  }

L2_:;
  // r46 = dyn base6(<lang `$`(object, residuals)>)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_const(CCP, 63);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r46)
  // L0(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L0_;

L3_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r49 = dyn length1(dx47)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_dx47_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(r49)
  // L0(r49)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r49_;
  goto L0_;

L4_:;
  // dr20 = tryDispatchBuiltin.1("$", object26)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_object26_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args133);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if dc10 then L6() else L5(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr20)
    Rsh_Fir_reg_object28_ = Rsh_Fir_reg_dr20_;
    goto L5_;
  }

L5_:;
  // r48 = `$`(object28, <sym residuals>)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_object28_;
  Rsh_Fir_array_args135[1] = Rsh_const(CCP, 64);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // goto L3(r48)
  // L3(r48)
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_r48_;
  goto L3_;

L6_:;
  // dx46 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx46_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // goto L3(dx46)
  // L3(dx46)
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_dx46_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner1719482137_3(SEXP CCP, SEXP RHO) {
  // nterms2 = ld nterms
  Rsh_Fir_reg_nterms2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // nterms3 = force? nterms2
  Rsh_Fir_reg_nterms3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nterms2_);
  // checkMissing(nterms3)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_nterms3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty()));
  // return nterms3
  return Rsh_Fir_reg_nterms3_;
}
SEXP Rsh_Fir_user_promise_inner1719482137_4(SEXP CCP, SEXP RHO) {
  // object29 = ld object
  Rsh_Fir_reg_object29_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object30 = force? object29
  Rsh_Fir_reg_object30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object29_);
  // checkMissing(object30)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_object30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(object30)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_object30_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // if c15 then L1() else L2(object30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L1()
    goto L1_;
  } else {
  // L2(object30)
    Rsh_Fir_reg_object32_ = Rsh_Fir_reg_object30_;
    goto L2_;
  }

L0_:;
  // return dx49
  return Rsh_Fir_reg_dx49_;

L1_:;
  // dr22 = tryDispatchBuiltin.1("$", object30)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_object30_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args143);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // if dc11 then L3() else L2(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr22)
    Rsh_Fir_reg_object32_ = Rsh_Fir_reg_dr22_;
    goto L2_;
  }

L2_:;
  // r55 = `$`(object32, <sym fitted.values>)
  SEXP Rsh_Fir_array_args145[2];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_object32_;
  Rsh_Fir_array_args145[1] = Rsh_const(CCP, 67);
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // goto L0(r55)
  // L0(r55)
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_r55_;
  goto L0_;

L3_:;
  // dx48 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx48_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // goto L0(dx48)
  // L0(dx48)
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_dx48_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1719482137_5(SEXP CCP, SEXP RHO) {
  // res = ld res
  Rsh_Fir_reg_res = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // res1 = force? res
  Rsh_Fir_reg_res1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res);
  // checkMissing(res1)
  SEXP Rsh_Fir_array_args239[1];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_res1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args239, Rsh_Fir_param_types_empty()));
  // return res1
  return Rsh_Fir_reg_res1_;
}
SEXP Rsh_Fir_user_promise_inner1719482137_6(SEXP CCP, SEXP RHO) {
  // sym16 = ldf length
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base16 = ldf length in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args240[2];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args240[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args240);
  // if guard16 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r112
  return Rsh_Fir_reg_r112_;

L1_:;
  // res2 = ld res
  Rsh_Fir_reg_res2_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // res3 = force? res2
  Rsh_Fir_reg_res3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res2_);
  // checkMissing(res3)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_res3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args241, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r113 = dyn length2(res3)
  SEXP Rsh_Fir_array_args242[1];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_res3_;
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args242, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L0(r113)
  // L0(r113)
  Rsh_Fir_reg_r112_ = Rsh_Fir_reg_r113_;
  goto L0_;

L2_:;
  // r111 = dyn base16(<sym res>)
  SEXP Rsh_Fir_array_args243[1];
  Rsh_Fir_array_args243[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args243, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L0(r111)
  // L0(r111)
  Rsh_Fir_reg_r112_ = Rsh_Fir_reg_r111_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1719482137_7(SEXP CCP, SEXP RHO) {
  // sym17 = ldf list
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base17 = ldf list in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args244[2];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args244[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args244);
  // if guard17 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r116
  return Rsh_Fir_reg_r116_;

L1_:;
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r120 = dyn list1(r118, "Residuals")
  SEXP Rsh_Fir_array_args245[2];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_r118_;
  Rsh_Fir_array_args245[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_reg_r120_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 2, Rsh_Fir_array_args245, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L0(r120)
  // L0(r120)
  Rsh_Fir_reg_r116_ = Rsh_Fir_reg_r120_;
  goto L0_;

L2_:;
  // sym18 = ldf names
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 77), RHO);
  // base18 = ldf names in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 77), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args246[2];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args246[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args246);
  // if guard18 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r115 = dyn base17(<lang names(res)>, "Residuals")
  SEXP Rsh_Fir_array_args247[2];
  Rsh_Fir_array_args247[0] = Rsh_const(CCP, 78);
  Rsh_Fir_array_args247[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 2, Rsh_Fir_array_args247, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L0(r115)
  // L0(r115)
  Rsh_Fir_reg_r116_ = Rsh_Fir_reg_r115_;
  goto L0_;

L4_:;
  // res4 = ld res
  Rsh_Fir_reg_res4_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // res5 = force? res4
  Rsh_Fir_reg_res5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res4_);
  // checkMissing(res5)
  SEXP Rsh_Fir_array_args248[1];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_res5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args248, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 77), RHO);
  // r119 = dyn names(res5)
  SEXP Rsh_Fir_array_args249[1];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_res5_;
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args249, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L1(r119)
  // L1(r119)
  Rsh_Fir_reg_r118_ = Rsh_Fir_reg_r119_;
  goto L1_;

L5_:;
  // r117 = dyn base18(<sym res>)
  SEXP Rsh_Fir_array_args250[1];
  Rsh_Fir_array_args250[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args250, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L1(r117)
  // L1(r117)
  Rsh_Fir_reg_r118_ = Rsh_Fir_reg_r117_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner1719482137_8(SEXP CCP, SEXP RHO) {
  // sym21 = ldf c
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base21 = ldf c in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args258[2];
  Rsh_Fir_array_args258[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args258[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args258);
  // if guard21 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r131
  return Rsh_Fir_reg_r131_;

L1_:;
  // result11 = ld result
  Rsh_Fir_reg_result11_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // result12 = force? result11
  Rsh_Fir_reg_result12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result11_);
  // checkMissing(result12)
  SEXP Rsh_Fir_array_args259[1];
  Rsh_Fir_array_args259[0] = Rsh_Fir_reg_result12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args259, Rsh_Fir_param_types_empty()));
  // res6 = ld res
  Rsh_Fir_reg_res6_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // res7 = force? res6
  Rsh_Fir_reg_res7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res6_);
  // checkMissing(res7)
  SEXP Rsh_Fir_array_args260[1];
  Rsh_Fir_array_args260[0] = Rsh_Fir_reg_res7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args260, Rsh_Fir_param_types_empty()));
  // c44 = ldf c in base
  Rsh_Fir_reg_c44_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r132 = dyn c44(result12, res7)
  SEXP Rsh_Fir_array_args261[2];
  Rsh_Fir_array_args261[0] = Rsh_Fir_reg_result12_;
  Rsh_Fir_array_args261[1] = Rsh_Fir_reg_res7_;
  SEXP Rsh_Fir_array_arg_names56[2];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_reg_r132_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c44_, 2, Rsh_Fir_array_args261, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L0(r132)
  // L0(r132)
  Rsh_Fir_reg_r131_ = Rsh_Fir_reg_r132_;
  goto L0_;

L2_:;
  // r130 = dyn base21(<sym result>, <sym res>)
  SEXP Rsh_Fir_array_args262[2];
  Rsh_Fir_array_args262[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args262[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names57[2];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_reg_r130_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 2, Rsh_Fir_array_args262, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L0(r130)
  // L0(r130)
  Rsh_Fir_reg_r131_ = Rsh_Fir_reg_r130_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1719482137_9(SEXP CCP, SEXP RHO) {
  // result13 = ld result
  Rsh_Fir_reg_result13_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // result14 = force? result13
  Rsh_Fir_reg_result14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result13_);
  // checkMissing(result14)
  SEXP Rsh_Fir_array_args292[1];
  Rsh_Fir_array_args292[0] = Rsh_Fir_reg_result14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args292, Rsh_Fir_param_types_empty()));
  // return result14
  return Rsh_Fir_reg_result14_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
