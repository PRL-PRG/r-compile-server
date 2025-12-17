#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner736444261_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner736444261_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner736444261_(SEXP CCP, SEXP RHO);
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
  // r = clos inner736444261
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner736444261_, RHO, CCP);
  // st `mostattributes<-` = r
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
SEXP Rsh_Fir_user_function_inner736444261_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner736444261 dynamic dispatch ([x, value])

  return Rsh_Fir_user_version_inner736444261_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner736444261_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner736444261 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner736444261/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_value3_;  // value3
  SEXP Rsh_Fir_reg_value4_;  // value4
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_value5_;  // value5
  SEXP Rsh_Fir_reg_value6_;  // value6
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_value7_;  // value7
  SEXP Rsh_Fir_reg_value8_;  // value8
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_value10_;  // value10
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_inam;  // inam
  SEXP Rsh_Fir_reg_inam1_;  // inam1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_value11_;  // value11
  SEXP Rsh_Fir_reg_value12_;  // value12
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_value14_;  // value14
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_inam2_;  // inam2
  SEXP Rsh_Fir_reg_inam3_;  // inam3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_value15_;  // value15
  SEXP Rsh_Fir_reg_value16_;  // value16
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_match1_;  // match1
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_value17_;  // value17
  SEXP Rsh_Fir_reg_value18_;  // value18
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_value20_;  // value20
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_idin;  // idin
  SEXP Rsh_Fir_reg_idin1_;  // idin1
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_value21_;  // value21
  SEXP Rsh_Fir_reg_value22_;  // value22
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_value24_;  // value24
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_idin2_;  // idin2
  SEXP Rsh_Fir_reg_idin3_;  // idin3
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_value25_;  // value25
  SEXP Rsh_Fir_reg_value26_;  // value26
  SEXP Rsh_Fir_reg_names2_;  // names2
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_match2_;  // match2
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_is_na2_;  // is_na2
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_value27_;  // value27
  SEXP Rsh_Fir_reg_value28_;  // value28
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_value30_;  // value30
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_idmn;  // idmn
  SEXP Rsh_Fir_reg_idmn1_;  // idmn1
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_value31_;  // value31
  SEXP Rsh_Fir_reg_value32_;  // value32
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_value34_;  // value34
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_idmn2_;  // idmn2
  SEXP Rsh_Fir_reg_idmn3_;  // idmn3
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_value35_;  // value35
  SEXP Rsh_Fir_reg_value36_;  // value36
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_attributes__;  // attributes__
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_is_list1_;  // is_list1
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_unclass;  // unclass
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_h_dim;  // h_dim
  SEXP Rsh_Fir_reg_h_dim1_;  // h_dim1
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_L;  // L
  SEXP Rsh_Fir_reg_L1_;  // L1
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_L4_;  // L4
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_d1_;  // d1
  SEXP Rsh_Fir_reg_d2_;  // d2
  SEXP Rsh_Fir_reg_prod;  // prod
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_d3_;  // d3
  SEXP Rsh_Fir_reg_d4_;  // d4
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_h_dmn;  // h_dmn
  SEXP Rsh_Fir_reg_h_dmn1_;  // h_dmn1
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_dm;  // dm
  SEXP Rsh_Fir_reg_dm1_;  // dm1
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_lengths;  // lengths
  SEXP Rsh_Fir_reg_dn1_;  // dn1
  SEXP Rsh_Fir_reg_dn2_;  // dn2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_dm2_;  // dm2
  SEXP Rsh_Fir_reg_dm3_;  // dm3
  SEXP Rsh_Fir_reg_ddn;  // ddn
  SEXP Rsh_Fir_reg_ddn1_;  // ddn1
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_ddn2_;  // ddn2
  SEXP Rsh_Fir_reg_ddn3_;  // ddn3
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_all;  // all
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_dn3_;  // dn3
  SEXP Rsh_Fir_reg_dn4_;  // dn4
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_attr__1_;  // attr__1
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_dn5_;  // dn5
  SEXP Rsh_Fir_reg_h_nam;  // h_nam
  SEXP Rsh_Fir_reg_h_nam1_;  // h_nam1
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_sym18_;  // sym18
  SEXP Rsh_Fir_reg_base18_;  // base18
  SEXP Rsh_Fir_reg_guard18_;  // guard18
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_dm4_;  // dm4
  SEXP Rsh_Fir_reg_dm5_;  // dm5
  SEXP Rsh_Fir_reg_c41_;  // c41
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_L5_;  // L5
  SEXP Rsh_Fir_reg_L6_;  // L6
  SEXP Rsh_Fir_reg_sym19_;  // sym19
  SEXP Rsh_Fir_reg_base19_;  // base19
  SEXP Rsh_Fir_reg_guard19_;  // guard19
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_c50_;  // c50
  SEXP Rsh_Fir_reg_L9_;  // L9
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_c51_;  // c51
  SEXP Rsh_Fir_reg_c52_;  // c52
  SEXP Rsh_Fir_reg_c54_;  // c54
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_attr__2_;  // attr__2
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_value = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st value = value
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_value, RHO);
  (void)(Rsh_Fir_reg_value);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L55() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L55()
    goto L55_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L50()
  // L50()
  goto L50_;

L2_:;
  // r6 = `!`(r4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c1 then L60() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L60()
    goto L60_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // sym2 = ldf `is.na`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base2 = ldf `is.na` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard2 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

L5_:;
  // r18 = `!`(r10)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // st `h.nam` = r18
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // c2 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c2 then L74() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L74()
    goto L74_;
  } else {
  // L8()
    goto L8_;
  }

L6_:;
  // st inam = r12
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r17 = dyn is_na(r12)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L73() else D9()
  // L73()
  goto L73_;

L7_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r16 = dyn match("names", r14, NA_INT, NULL)
  SEXP Rsh_Fir_array_args8[4];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L72() else D8()
  // L72()
  goto L72_;

L8_:;
  // goto L11()
  // L11()
  goto L11_;

L9_:;
  // st n1 = dx1
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // value11 = ld value
  Rsh_Fir_reg_value11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L80() else D12()
  // L80()
  goto L80_;

L10_:;
  // st value = dx3
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // sym5 = ldf `is.na`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base5 = ldf `is.na` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard5 then L86() else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L86()
    goto L86_;
  } else {
  // L87()
    goto L87_;
  }

L12_:;
  // r31 = `!`(r23)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // st `h.dim` = r31
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // c5 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c5 then L96() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L96()
    goto L96_;
  } else {
  // L15()
    goto L15_;
  }

L13_:;
  // st idin = r25
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r30 = dyn is_na1(r25)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L95() else D17()
  // L95()
  goto L95_;

L14_:;
  // match1 = ldf match in base
  Rsh_Fir_reg_match1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r29 = dyn match1("dim", r27, NA_INT, NULL)
  SEXP Rsh_Fir_array_args13[4];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args13[3] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match1_, 4, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L94() else D16()
  // L94()
  goto L94_;

L15_:;
  // goto L18()
  // L18()
  goto L18_;

L16_:;
  // st d1 = dx6
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx6_, RHO);
  (void)(Rsh_Fir_reg_dx6_);
  // value21 = ld value
  Rsh_Fir_reg_value21_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L102() else D20()
  // L102()
  goto L102_;

L17_:;
  // st value = dx8
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx8_, RHO);
  (void)(Rsh_Fir_reg_dx8_);
  // goto L18()
  // L18()
  goto L18_;

L18_:;
  // sym8 = ldf `is.na`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base8 = ldf `is.na` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard8 then L108() else L109()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L108()
    goto L108_;
  } else {
  // L109()
    goto L109_;
  }

L19_:;
  // r44 = `!`(r36)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // st `h.dmn` = r44
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // c8 = `as.logical`(r44)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c8 then L118() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L118()
    goto L118_;
  } else {
  // L22()
    goto L22_;
  }

L20_:;
  // st idmn = r38
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // is_na2 = ldf `is.na` in base
  Rsh_Fir_reg_is_na2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r43 = dyn is_na2(r38)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na2_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L117() else D25()
  // L117()
  goto L117_;

L21_:;
  // match2 = ldf match in base
  Rsh_Fir_reg_match2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r42 = dyn match2("dimnames", r40, NA_INT, NULL)
  SEXP Rsh_Fir_array_args18[4];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args18[3] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names5[4];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match2_, 4, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L116() else D24()
  // L116()
  goto L116_;

L22_:;
  // goto L25()
  // L25()
  goto L25_;

L23_:;
  // st dn1 = dx11
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // value31 = ld value
  Rsh_Fir_reg_value31_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L124() else D28()
  // L124()
  goto L124_;

L24_:;
  // st value = dx13
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // goto L25()
  // L25()
  goto L25_;

L25_:;
  // value35 = ld value
  Rsh_Fir_reg_value35_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L130() else D30()
  // L130()
  goto L130_;

L26_:;
  // st dm = r50
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // sym12 = ldf length
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base12 = ldf length in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard12 then L137() else L138()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L137()
    goto L137_;
  } else {
  // L138()
    goto L138_;
  }

L27_:;
  // st L = r53
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r53_, RHO);
  (void)(Rsh_Fir_reg_r53_);
  // h_dim = ld `h.dim`
  Rsh_Fir_reg_h_dim = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L151() else D41()
  // L151()
  goto L151_;

L28_:;
  // c11 = `as.logical`(r55)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c11 then L143() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L143()
    goto L143_;
  } else {
  // L29()
    goto L29_;
  }

L29_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L149() else D39()
  // L149()
  goto L149_;

L30_:;
  // goto L31(r58)
  // L31(r58)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r58_;
  goto L31_;

L31_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r61 = dyn length1(r60)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L150() else D40()
  // L150()
  goto L150_;

L32_:;
  // c21 = `as.logical`(c14)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c21 then L159() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L159()
    goto L159_;
  } else {
  // L34()
    goto L34_;
  }

L33_:;
  // r65 = `==`(L4, r63)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_L4_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // c18 = `as.logical`(r65)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // c19 = `&&`(c17, c18)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L32(c19)
  // L32(c19)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c19_;
  goto L32_;

L34_:;
  // goto L35()
  // L35()
  goto L35_;

L35_:;
  // h_dmn = ld `h.dmn`
  Rsh_Fir_reg_h_dmn = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L164() else D48()
  // L164()
  goto L164_;

L36_:;
  // c32 = `as.logical`(c24)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c32 then L170() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L170()
    goto L170_;
  } else {
  // L38()
    goto L38_;
  }

L37_:;
  // r69 = `!`(r68)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // c29 = `as.logical`(r69)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // c30 = `&&`(c27, c29)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_c27_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_c29_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L36(c30)
  // L36(c30)
  Rsh_Fir_reg_c24_ = Rsh_Fir_reg_c30_;
  goto L36_;

L38_:;
  // goto L43()
  // L43()
  goto L43_;

L39_:;
  // c34 = `as.logical`(r73)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c34 then L182() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L182()
    goto L182_;
  } else {
  // L41()
    goto L41_;
  }

L40_:;
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r79 = dyn all(dx16)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L181() else D55()
  // L181()
  goto L181_;

L41_:;
  // goto L42(NULL)
  // L42(NULL)
  Rsh_Fir_reg_dn5_ = Rsh_const(CCP, 10);
  goto L42_;

L42_:;
  // goto L43()
  // L43()
  goto L43_;

L43_:;
  // h_nam = ld `h.nam`
  Rsh_Fir_reg_h_nam = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L188() else D59()
  // L188()
  goto L188_;

L44_:;
  // c45 = `as.logical`(c37)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_c37_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c45 then L194() else L46(c45)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L194()
    goto L194_;
  } else {
  // L46(c45)
    Rsh_Fir_reg_c47_ = Rsh_Fir_reg_c45_;
    goto L46_;
  }

L45_:;
  // c42 = `as.logical`(r82)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // c43 = `&&`(c40, c42)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_c40_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_c42_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L44(c43)
  // L44(c43)
  Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c43_;
  goto L44_;

L46_:;
  // c54 = `as.logical`(c47)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_c47_;
  Rsh_Fir_reg_c54_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c54 then L201() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c54_)) {
  // L201()
    goto L201_;
  } else {
  // L48()
    goto L48_;
  }

L47_:;
  // r86 = `==`(L9, r84)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_L9_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // c51 = `as.logical`(r86)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_reg_c51_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // c52 = `&&`(c50, c51)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_c50_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_c51_;
  Rsh_Fir_reg_c52_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L46(c52)
  // L46(c52)
  Rsh_Fir_reg_c47_ = Rsh_Fir_reg_c52_;
  goto L46_;

L48_:;
  // goto L49(NULL)
  // L49(NULL)
  Rsh_Fir_reg_n5_ = Rsh_const(CCP, 10);
  goto L49_;

L49_:;
  // goto L50()
  // L50()
  goto L50_;

L50_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L207() else D67()
  // L207()
  goto L207_;

L51_:;
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L53() else D0()
  // L53()
  goto L53_;

L52_:;
  // r = dyn base(<sym value>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [value1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L53_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r2 = dyn length(value2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_value2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L54() else D1()
  // L54()
  goto L54_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L55_:;
  // sym1 = ldf `is.list`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base1 = ldf `is.list` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard1 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L56_:;
  // value3 = ld value
  Rsh_Fir_reg_value3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L58() else D2()
  // L58()
  goto L58_;

L57_:;
  // r3 = dyn base1(<sym value>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D2_:;
  // deopt 8 [value3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_value3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L58_:;
  // value4 = force? value3
  Rsh_Fir_reg_value4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value3_);
  // checkMissing(value4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_value4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r5 = dyn is_list(value4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_value4_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L59() else D3()
  // L59()
  goto L59_;

D3_:;
  // deopt 11 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L59_:;
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L2_;

L60_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L61() else D4()
  // L61()
  goto L61_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L61_:;
  // r7 = dyn stop("'value' must be a list")
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L62() else D5()
  // L62()
  goto L62_;

D5_:;
  // deopt 16 [r7]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L62_:;
  // goto L4()
  // L4()
  goto L4_;

L64_:;
  // sym3 = ldf match
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base3 = ldf match in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard3 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L65_:;
  // r9 = dyn base2(<lang `<-`(inam, match("names", names(value)))>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L5_;

L66_:;
  // sym4 = ldf names
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base4 = ldf names in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard4 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L67_:;
  // r11 = dyn base3("names", <lang names(value)>)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L6(r11)
  // L6(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L6_;

L68_:;
  // value5 = ld value
  Rsh_Fir_reg_value5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L70() else D6()
  // L70()
  goto L70_;

L69_:;
  // r13 = dyn base4(<sym value>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L7(r13)
  // L7(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L7_;

D6_:;
  // deopt 26 [value5]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_value5_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L70_:;
  // value6 = force? value5
  Rsh_Fir_reg_value6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value5_);
  // checkMissing(value6)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_value6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r15 = dyn names(value6)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_value6_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L71() else D7()
  // L71()
  goto L71_;

D7_:;
  // deopt 29 [r15]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L71_:;
  // goto L7(r15)
  // L7(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L7_;

D8_:;
  // deopt 33 [r16]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L6(r16)
  // L6(r16)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r16_;
  goto L6_;

D9_:;
  // deopt 36 [r17]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L73_:;
  // goto L5(r17)
  // L5(r17)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r17_;
  goto L5_;

L74_:;
  // value7 = ld value
  Rsh_Fir_reg_value7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L75() else D10()
  // L75()
  goto L75_;

D10_:;
  // deopt 39 [value7]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_value7_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L75_:;
  // value8 = force? value7
  Rsh_Fir_reg_value8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value7_);
  // checkMissing(value8)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_value8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(value8)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_value8_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if c3 then L76() else L77(value8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L76()
    goto L76_;
  } else {
  // L77(value8)
    Rsh_Fir_reg_value10_ = Rsh_Fir_reg_value8_;
    goto L77_;
  }

L76_:;
  // dr = tryDispatchBuiltin.1("[[", value8)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_value8_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args56);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if dc then L78() else L77(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L78()
    goto L78_;
  } else {
  // L77(dr)
    Rsh_Fir_reg_value10_ = Rsh_Fir_reg_dr;
    goto L77_;
  }

L77_:;
  // inam = ld inam
  Rsh_Fir_reg_inam = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L79() else D11()
  // L79()
  goto L79_;

L78_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L9(dx)
  // L9(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L9_;

D11_:;
  // deopt 41 [value10, inam]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_value10_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_inam;
  Rsh_Fir_deopt(41, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L79_:;
  // inam1 = force? inam
  Rsh_Fir_reg_inam1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inam);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r19 = dyn __(value10, inam1)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_value10_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_inam1_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L9(r19)
  // L9(r19)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r19_;
  goto L9_;

D12_:;
  // deopt 45 [value11]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_value11_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L80_:;
  // value12 = force? value11
  Rsh_Fir_reg_value12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value11_);
  // checkMissing(value12)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_value12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(value12)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_value12_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if c4 then L81() else L82(value12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L81()
    goto L81_;
  } else {
  // L82(value12)
    Rsh_Fir_reg_value14_ = Rsh_Fir_reg_value12_;
    goto L82_;
  }

L81_:;
  // dr2 = tryDispatchBuiltin.1("[", value12)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_value12_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args62);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if dc1 then L83() else L82(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L83()
    goto L83_;
  } else {
  // L82(dr2)
    Rsh_Fir_reg_value14_ = Rsh_Fir_reg_dr2_;
    goto L82_;
  }

L82_:;
  // inam2 = ld inam
  Rsh_Fir_reg_inam2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L84() else D13()
  // L84()
  goto L84_;

L83_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L10(dx2)
  // L10(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L10_;

D13_:;
  // deopt 47 [value14, inam2]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_value14_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_inam2_;
  Rsh_Fir_deopt(47, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L84_:;
  // inam3 = force? inam2
  Rsh_Fir_reg_inam3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inam2_);
  // checkMissing(inam3)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_inam3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // r20 = `-`(<missing>, inam3)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_inam3_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r21 = dyn __1(value14, r20)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_value14_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L10(r21)
  // L10(r21)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r21_;
  goto L10_;

L86_:;
  // sym6 = ldf match
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base6 = ldf match in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args68);
  // if guard6 then L88() else L89()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L88()
    goto L88_;
  } else {
  // L89()
    goto L89_;
  }

L87_:;
  // r22 = dyn base5(<lang `<-`(idin, match("dim", names(value)))>)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L12(r22)
  // L12(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L12_;

L88_:;
  // sym7 = ldf names
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base7 = ldf names in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard7 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L89_:;
  // r24 = dyn base6("dim", <lang names(value)>)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L13(r24)
  // L13(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L13_;

L90_:;
  // value15 = ld value
  Rsh_Fir_reg_value15_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L92() else D14()
  // L92()
  goto L92_;

L91_:;
  // r26 = dyn base7(<sym value>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L14(r26)
  // L14(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L14_;

D14_:;
  // deopt 61 [value15]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_value15_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L92_:;
  // value16 = force? value15
  Rsh_Fir_reg_value16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value15_);
  // checkMissing(value16)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_value16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r28 = dyn names1(value16)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_value16_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L93() else D15()
  // L93()
  goto L93_;

D15_:;
  // deopt 64 [r28]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L93_:;
  // goto L14(r28)
  // L14(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L14_;

D16_:;
  // deopt 68 [r29]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L94_:;
  // goto L13(r29)
  // L13(r29)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r29_;
  goto L13_;

D17_:;
  // deopt 71 [r30]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L95_:;
  // goto L12(r30)
  // L12(r30)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r30_;
  goto L12_;

L96_:;
  // value17 = ld value
  Rsh_Fir_reg_value17_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L97() else D18()
  // L97()
  goto L97_;

D18_:;
  // deopt 74 [value17]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_value17_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L97_:;
  // value18 = force? value17
  Rsh_Fir_reg_value18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value17_);
  // checkMissing(value18)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_value18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(value18)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_value18_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if c6 then L98() else L99(value18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L98()
    goto L98_;
  } else {
  // L99(value18)
    Rsh_Fir_reg_value20_ = Rsh_Fir_reg_value18_;
    goto L99_;
  }

L98_:;
  // dr4 = tryDispatchBuiltin.1("[[", value18)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_value18_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args77);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if dc2 then L100() else L99(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L100()
    goto L100_;
  } else {
  // L99(dr4)
    Rsh_Fir_reg_value20_ = Rsh_Fir_reg_dr4_;
    goto L99_;
  }

L99_:;
  // idin = ld idin
  Rsh_Fir_reg_idin = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L101() else D19()
  // L101()
  goto L101_;

L100_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // goto L16(dx5)
  // L16(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L16_;

D19_:;
  // deopt 76 [value20, idin]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_value20_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_idin;
  Rsh_Fir_deopt(76, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L101_:;
  // idin1 = force? idin
  Rsh_Fir_reg_idin1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_idin);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r32 = dyn __2(value20, idin1)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_value20_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_idin1_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L16(r32)
  // L16(r32)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r32_;
  goto L16_;

D20_:;
  // deopt 80 [value21]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_value21_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L102_:;
  // value22 = force? value21
  Rsh_Fir_reg_value22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value21_);
  // checkMissing(value22)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_value22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(value22)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_value22_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // if c7 then L103() else L104(value22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L103()
    goto L103_;
  } else {
  // L104(value22)
    Rsh_Fir_reg_value24_ = Rsh_Fir_reg_value22_;
    goto L104_;
  }

L103_:;
  // dr6 = tryDispatchBuiltin.1("[", value22)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_value22_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args83);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if dc3 then L105() else L104(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L105()
    goto L105_;
  } else {
  // L104(dr6)
    Rsh_Fir_reg_value24_ = Rsh_Fir_reg_dr6_;
    goto L104_;
  }

L104_:;
  // idin2 = ld idin
  Rsh_Fir_reg_idin2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L106() else D21()
  // L106()
  goto L106_;

L105_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // goto L17(dx7)
  // L17(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L17_;

D21_:;
  // deopt 82 [value24, idin2]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_value24_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_idin2_;
  Rsh_Fir_deopt(82, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L106_:;
  // idin3 = force? idin2
  Rsh_Fir_reg_idin3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_idin2_);
  // checkMissing(idin3)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_idin3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // r33 = `-`(<missing>, idin3)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_idin3_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r34 = dyn __3(value24, r33)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_value24_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L17(r34)
  // L17(r34)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r34_;
  goto L17_;

L108_:;
  // sym9 = ldf match
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base9 = ldf match in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args89);
  // if guard9 then L110() else L111()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L110()
    goto L110_;
  } else {
  // L111()
    goto L111_;
  }

L109_:;
  // r35 = dyn base8(<lang `<-`(idmn, match("dimnames", names(value)))>)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L19(r35)
  // L19(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L19_;

L110_:;
  // sym10 = ldf names
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base10 = ldf names in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args91);
  // if guard10 then L112() else L113()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L112()
    goto L112_;
  } else {
  // L113()
    goto L113_;
  }

L111_:;
  // r37 = dyn base9("dimnames", <lang names(value)>)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L20(r37)
  // L20(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L20_;

L112_:;
  // value25 = ld value
  Rsh_Fir_reg_value25_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L114() else D22()
  // L114()
  goto L114_;

L113_:;
  // r39 = dyn base10(<sym value>)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L21(r39)
  // L21(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L21_;

D22_:;
  // deopt 96 [value25]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_value25_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L114_:;
  // value26 = force? value25
  Rsh_Fir_reg_value26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value25_);
  // checkMissing(value26)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_value26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // names2 = ldf names in base
  Rsh_Fir_reg_names2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r41 = dyn names2(value26)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_value26_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names2_, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L115() else D23()
  // L115()
  goto L115_;

D23_:;
  // deopt 99 [r41]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L115_:;
  // goto L21(r41)
  // L21(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L21_;

D24_:;
  // deopt 103 [r42]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L116_:;
  // goto L20(r42)
  // L20(r42)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r42_;
  goto L20_;

D25_:;
  // deopt 106 [r43]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L117_:;
  // goto L19(r43)
  // L19(r43)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r43_;
  goto L19_;

L118_:;
  // value27 = ld value
  Rsh_Fir_reg_value27_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L119() else D26()
  // L119()
  goto L119_;

D26_:;
  // deopt 109 [value27]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_value27_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L119_:;
  // value28 = force? value27
  Rsh_Fir_reg_value28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value27_);
  // checkMissing(value28)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_value28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(value28)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_value28_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if c9 then L120() else L121(value28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L120()
    goto L120_;
  } else {
  // L121(value28)
    Rsh_Fir_reg_value30_ = Rsh_Fir_reg_value28_;
    goto L121_;
  }

L120_:;
  // dr8 = tryDispatchBuiltin.1("[[", value28)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_value28_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args98);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if dc4 then L122() else L121(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L122()
    goto L122_;
  } else {
  // L121(dr8)
    Rsh_Fir_reg_value30_ = Rsh_Fir_reg_dr8_;
    goto L121_;
  }

L121_:;
  // idmn = ld idmn
  Rsh_Fir_reg_idmn = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L123() else D27()
  // L123()
  goto L123_;

L122_:;
  // dx10 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // goto L23(dx10)
  // L23(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L23_;

D27_:;
  // deopt 111 [value30, idmn]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_value30_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_idmn;
  Rsh_Fir_deopt(111, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L123_:;
  // idmn1 = force? idmn
  Rsh_Fir_reg_idmn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_idmn);
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r45 = dyn __4(value30, idmn1)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_value30_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_idmn1_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L23(r45)
  // L23(r45)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r45_;
  goto L23_;

D28_:;
  // deopt 115 [value31]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_value31_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L124_:;
  // value32 = force? value31
  Rsh_Fir_reg_value32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value31_);
  // checkMissing(value32)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_value32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(value32)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_value32_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // if c10 then L125() else L126(value32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L125()
    goto L125_;
  } else {
  // L126(value32)
    Rsh_Fir_reg_value34_ = Rsh_Fir_reg_value32_;
    goto L126_;
  }

L125_:;
  // dr10 = tryDispatchBuiltin.1("[", value32)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_value32_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args104);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if dc5 then L127() else L126(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L127()
    goto L127_;
  } else {
  // L126(dr10)
    Rsh_Fir_reg_value34_ = Rsh_Fir_reg_dr10_;
    goto L126_;
  }

L126_:;
  // idmn2 = ld idmn
  Rsh_Fir_reg_idmn2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L128() else D29()
  // L128()
  goto L128_;

L127_:;
  // dx12 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // goto L24(dx12)
  // L24(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L24_;

D29_:;
  // deopt 117 [value34, idmn2]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_value34_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_idmn2_;
  Rsh_Fir_deopt(117, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L128_:;
  // idmn3 = force? idmn2
  Rsh_Fir_reg_idmn3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_idmn2_);
  // checkMissing(idmn3)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_idmn3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // r46 = `-`(<missing>, idmn3)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_idmn3_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r47 = dyn __5(value34, r46)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_value34_;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L24(r47)
  // L24(r47)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r47_;
  goto L24_;

D30_:;
  // deopt 124 [value35]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_value35_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L130_:;
  // value36 = force? value35
  Rsh_Fir_reg_value36_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value35_);
  // checkMissing(value36)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_value36_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attributes__ = ldf `attributes<-`
  Rsh_Fir_reg_attributes__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L131() else D31()
  // L131()
  goto L131_;

D31_:;
  // deopt 127 [value36, l, value36]
  SEXP Rsh_Fir_array_deopt_stack30[3];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_value36_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_value36_;
  Rsh_Fir_deopt(127, 3, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L131_:;
  // r48 = dyn attributes__(l, NULL, value36)
  SEXP Rsh_Fir_array_args111[3];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args111[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args111[2] = Rsh_Fir_reg_value36_;
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes__, 3, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L132() else D32()
  // L132()
  goto L132_;

D32_:;
  // deopt 129 [value36, r48]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_value36_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(129, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L132_:;
  // st x = r48
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r48_, RHO);
  (void)(Rsh_Fir_reg_r48_);
  // sym11 = ldf attr
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base11 = ldf attr in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args112);
  // if guard11 then L133() else L134()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L133()
    goto L133_;
  } else {
  // L134()
    goto L134_;
  }

L133_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L135() else D33()
  // L135()
  goto L135_;

L134_:;
  // r49 = dyn base11(<sym x>, "dim")
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args113[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L26(r49)
  // L26(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L26_;

D33_:;
  // deopt 133 [x1]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L135_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r51 = dyn attr(x2, "dim")
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args115[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L136() else D34()
  // L136()
  goto L136_;

D34_:;
  // deopt 137 [r51]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L136_:;
  // goto L26(r51)
  // L26(r51)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r51_;
  goto L26_;

L137_:;
  // sym13 = ldf `is.list`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base13 = ldf `is.list` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args116);
  // if guard13 then L139() else L140()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L139()
    goto L139_;
  } else {
  // L140()
    goto L140_;
  }

L138_:;
  // r52 = dyn base12(<lang if(is.list(x), unclass(x), x)>)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L27(r52)
  // L27(r52)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L27_;

L139_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L141() else D35()
  // L141()
  goto L141_;

L140_:;
  // r54 = dyn base13(<sym x>)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L28(r54)
  // L28(r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L28_;

D35_:;
  // deopt 143 [x3]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L141_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // is_list1 = ldf `is.list` in base
  Rsh_Fir_reg_is_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r56 = dyn is_list1(x4)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list1_, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L142() else D36()
  // L142()
  goto L142_;

D36_:;
  // deopt 146 [r56]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L142_:;
  // goto L28(r56)
  // L28(r56)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r56_;
  goto L28_;

L143_:;
  // sym14 = ldf unclass
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base14 = ldf unclass in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args121);
  // if guard14 then L144() else L145()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L144()
    goto L144_;
  } else {
  // L145()
    goto L145_;
  }

L144_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L146() else D37()
  // L146()
  goto L146_;

L145_:;
  // r57 = dyn base14(<sym x>)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L30(r57)
  // L30(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L30_;

D37_:;
  // deopt 149 [x5]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(149, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L146_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // unclass = ldf unclass in base
  Rsh_Fir_reg_unclass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r59 = dyn unclass(x6)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass, 1, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L147() else D38()
  // L147()
  goto L147_;

D38_:;
  // deopt 152 [r59]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(152, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L147_:;
  // goto L30(r59)
  // L30(r59)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r59_;
  goto L30_;

D39_:;
  // deopt 153 [x7]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(153, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L149_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // goto L31(x8)
  // L31(x8)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_x8_;
  goto L31_;

D40_:;
  // deopt 156 [r61]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(156, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L150_:;
  // goto L27(r61)
  // L27(r61)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r61_;
  goto L27_;

D41_:;
  // deopt 158 [h_dim]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_h_dim;
  Rsh_Fir_deopt(158, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L151_:;
  // h_dim1 = force? h_dim
  Rsh_Fir_reg_h_dim1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h_dim);
  // checkMissing(h_dim1)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_h_dim1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // c12 = `as.logical`(h_dim1)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_h_dim1_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // if c12 then L152() else L32(c12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L152()
    goto L152_;
  } else {
  // L32(c12)
    Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c12_;
    goto L32_;
  }

L152_:;
  // L = ld L
  Rsh_Fir_reg_L = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L153() else D42()
  // L153()
  goto L153_;

D42_:;
  // deopt 160 [c12, L]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_L;
  Rsh_Fir_deopt(160, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L153_:;
  // L1 = force? L
  Rsh_Fir_reg_L1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_L);
  // checkMissing(L1)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_L1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // sym15 = ldf prod
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base15 = ldf prod in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args129);
  // if guard15 then L154() else L155()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L154()
    goto L154_;
  } else {
  // L155()
    goto L155_;
  }

L154_:;
  // d1 = ld d1
  Rsh_Fir_reg_d1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L156() else D43()
  // L156()
  goto L156_;

L155_:;
  // r62 = dyn base15(<sym d1>)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L33(c12, L1, r62)
  // L33(c12, L1, r62)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_L4_ = Rsh_Fir_reg_L1_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r62_;
  goto L33_;

D43_:;
  // deopt 163 [c12, L1, d1]
  SEXP Rsh_Fir_array_deopt_stack42[3];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_L1_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_d1_;
  Rsh_Fir_deopt(163, 3, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L156_:;
  // d2 = force? d1
  Rsh_Fir_reg_d2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d1_);
  // checkMissing(d2)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_d2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // prod = ldf prod in base
  Rsh_Fir_reg_prod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r64 = dyn prod(d2)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_d2_;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod, 1, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L157() else D44()
  // L157()
  goto L157_;

D44_:;
  // deopt 166 [c12, L1, r64]
  SEXP Rsh_Fir_array_deopt_stack43[3];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_L1_;
  Rsh_Fir_array_deopt_stack43[2] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(166, 3, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L157_:;
  // goto L33(c12, L1, r64)
  // L33(c12, L1, r64)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_L4_ = Rsh_Fir_reg_L1_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r64_;
  goto L33_;

L159_:;
  // d3 = ld d1
  Rsh_Fir_reg_d3_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L160() else D45()
  // L160()
  goto L160_;

D45_:;
  // deopt 169 [d3]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_d3_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L160_:;
  // d4 = force? d3
  Rsh_Fir_reg_d4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d3_);
  // checkMissing(d4)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_d4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // st dm = d4
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_d4_, RHO);
  (void)(Rsh_Fir_reg_d4_);
  // l1 = ld x
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L161() else D46()
  // L161()
  goto L161_;

D46_:;
  // deopt 173 [d4, l1, d4]
  SEXP Rsh_Fir_array_deopt_stack45[3];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_d4_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack45[2] = Rsh_Fir_reg_d4_;
  Rsh_Fir_deopt(173, 3, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L161_:;
  // r66 = dyn attr__(l1, NULL, "dim", d4)
  SEXP Rsh_Fir_array_args134[4];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args134[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args134[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args134[3] = Rsh_Fir_reg_d4_;
  SEXP Rsh_Fir_array_arg_names41[4];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_array_arg_names41[2] = R_MissingArg;
  Rsh_Fir_array_arg_names41[3] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L162() else D47()
  // L162()
  goto L162_;

D47_:;
  // deopt 176 [d4, r66]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_d4_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(176, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L162_:;
  // st x = r66
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r66_, RHO);
  (void)(Rsh_Fir_reg_r66_);
  // goto L35()
  // L35()
  goto L35_;

D48_:;
  // deopt 180 [h_dmn]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_h_dmn;
  Rsh_Fir_deopt(180, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L164_:;
  // h_dmn1 = force? h_dmn
  Rsh_Fir_reg_h_dmn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h_dmn);
  // checkMissing(h_dmn1)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_h_dmn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // c22 = `as.logical`(h_dmn1)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_h_dmn1_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // if c22 then L165() else L36(c22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L165()
    goto L165_;
  } else {
  // L36(c22)
    Rsh_Fir_reg_c24_ = Rsh_Fir_reg_c22_;
    goto L36_;
  }

L165_:;
  // sym16 = ldf `is.null`
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base16 = ldf `is.null` in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args137);
  // if guard16 then L166() else L167()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L166()
    goto L166_;
  } else {
  // L167()
    goto L167_;
  }

L166_:;
  // dm = ld dm
  Rsh_Fir_reg_dm = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L168() else D49()
  // L168()
  goto L168_;

L167_:;
  // r67 = dyn base16(<sym dm>)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L37(c22, r67)
  // L37(c22, r67)
  Rsh_Fir_reg_c27_ = Rsh_Fir_reg_c22_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r67_;
  goto L37_;

D49_:;
  // deopt 183 [c22, dm]
  SEXP Rsh_Fir_array_deopt_stack48[2];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_c22_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_dm;
  Rsh_Fir_deopt(183, 2, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L168_:;
  // dm1 = force? dm
  Rsh_Fir_reg_dm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dm);
  // checkMissing(dm1)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // c28 = `==`(dm1, NULL)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_dm1_;
  Rsh_Fir_array_args140[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // goto L37(c22, c28)
  // L37(c22, c28)
  Rsh_Fir_reg_c27_ = Rsh_Fir_reg_c22_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_c28_;
  goto L37_;

L170_:;
  // lengths = ldf lengths
  Rsh_Fir_reg_lengths = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L171() else D50()
  // L171()
  goto L171_;

D50_:;
  // deopt 189 []
  Rsh_Fir_deopt(189, 0, NULL, CCP, RHO);
  return R_NilValue;

L171_:;
  // p = prom<V +>{
  //   dn1 = ld dn1;
  //   dn2 = force? dn1;
  //   checkMissing(dn2);
  //   return dn2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner736444261_, CCP, RHO);
  // r71 = dyn lengths[, `use.names`](p, FALSE)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args142[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lengths, 2, Rsh_Fir_array_args142, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L172() else D51()
  // L172()
  goto L172_;

D51_:;
  // deopt 193 [r71]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(193, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L172_:;
  // st ddn = r71
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_r71_, RHO);
  (void)(Rsh_Fir_reg_r71_);
  // sym17 = ldf all
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base17 = ldf all in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args143);
  // if guard17 then L173() else L174()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L173()
    goto L173_;
  } else {
  // L174()
    goto L174_;
  }

L173_:;
  // dm2 = ld dm
  Rsh_Fir_reg_dm2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L175() else D52()
  // L175()
  goto L175_;

L174_:;
  // r72 = dyn base17(<lang `[`(`(`(`==`(dm, ddn)), `>`(ddn, 0.0))>)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L39(r72)
  // L39(r72)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r72_;
  goto L39_;

D52_:;
  // deopt 197 [dm2]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_dm2_;
  Rsh_Fir_deopt(197, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L175_:;
  // dm3 = force? dm2
  Rsh_Fir_reg_dm3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dm2_);
  // checkMissing(dm3)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_dm3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty()));
  // ddn = ld ddn
  Rsh_Fir_reg_ddn = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L176() else D53()
  // L176()
  goto L176_;

D53_:;
  // deopt 198 [dm3, ddn]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_dm3_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_ddn;
  Rsh_Fir_deopt(198, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L176_:;
  // ddn1 = force? ddn
  Rsh_Fir_reg_ddn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ddn);
  // checkMissing(ddn1)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_ddn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty()));
  // r74 = `==`(dm3, ddn1)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_dm3_;
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_ddn1_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // c33 = `is.object`(r74)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // if c33 then L177() else L178(r74)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L177()
    goto L177_;
  } else {
  // L178(r74)
    Rsh_Fir_reg_r76_ = Rsh_Fir_reg_r74_;
    goto L178_;
  }

L177_:;
  // dr12 = tryDispatchBuiltin.1("[", r74)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_r74_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args149);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty());
  // if dc6 then L179() else L178(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L179()
    goto L179_;
  } else {
  // L178(dr12)
    Rsh_Fir_reg_r76_ = Rsh_Fir_reg_dr12_;
    goto L178_;
  }

L178_:;
  // ddn2 = ld ddn
  Rsh_Fir_reg_ddn2_ = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L180() else D54()
  // L180()
  goto L180_;

L179_:;
  // dx15 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty());
  // goto L40(dx15)
  // L40(dx15)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx15_;
  goto L40_;

D54_:;
  // deopt 201 [r76, ddn2]
  SEXP Rsh_Fir_array_deopt_stack52[2];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_ddn2_;
  Rsh_Fir_deopt(201, 2, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L180_:;
  // ddn3 = force? ddn2
  Rsh_Fir_reg_ddn3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ddn2_);
  // checkMissing(ddn3)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_ddn3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty()));
  // r77 = `>`(ddn3, 0.0)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_ddn3_;
  Rsh_Fir_array_args153[1] = Rsh_const(CCP, 48);
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r78 = dyn __6(r76, r77)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_array_args154[1] = Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args154, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L40(r78)
  // L40(r78)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_r78_;
  goto L40_;

D55_:;
  // deopt 207 [r79]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_deopt(207, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L181_:;
  // goto L39(r79)
  // L39(r79)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r79_;
  goto L39_;

L182_:;
  // dn3 = ld dn1
  Rsh_Fir_reg_dn3_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L183() else D56()
  // L183()
  goto L183_;

D56_:;
  // deopt 208 [dn3]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_dn3_;
  Rsh_Fir_deopt(208, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L183_:;
  // dn4 = force? dn3
  Rsh_Fir_reg_dn4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn3_);
  // checkMissing(dn4)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_dn4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty()));
  // l2 = ld x
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L184() else D57()
  // L184()
  goto L184_;

D57_:;
  // deopt 211 [dn4, l2, dn4]
  SEXP Rsh_Fir_array_deopt_stack55[3];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_dn4_;
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack55[2] = Rsh_Fir_reg_dn4_;
  Rsh_Fir_deopt(211, 3, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L184_:;
  // r80 = dyn attr__1(l2, NULL, "dimnames", dn4)
  SEXP Rsh_Fir_array_args156[4];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args156[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args156[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args156[3] = Rsh_Fir_reg_dn4_;
  SEXP Rsh_Fir_array_arg_names46[4];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_array_arg_names46[2] = R_MissingArg;
  Rsh_Fir_array_arg_names46[3] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args156, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L185() else D58()
  // L185()
  goto L185_;

D58_:;
  // deopt 214 [dn4, r80]
  SEXP Rsh_Fir_array_deopt_stack56[2];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_dn4_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(214, 2, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L185_:;
  // st x = r80
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r80_, RHO);
  (void)(Rsh_Fir_reg_r80_);
  // goto L42(dn4)
  // L42(dn4)
  Rsh_Fir_reg_dn5_ = Rsh_Fir_reg_dn4_;
  goto L42_;

D59_:;
  // deopt 220 [h_nam]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_h_nam;
  Rsh_Fir_deopt(220, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L188_:;
  // h_nam1 = force? h_nam
  Rsh_Fir_reg_h_nam1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_h_nam);
  // checkMissing(h_nam1)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_h_nam1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty()));
  // c35 = `as.logical`(h_nam1)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_h_nam1_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty());
  // if c35 then L189() else L44(c35)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L189()
    goto L189_;
  } else {
  // L44(c35)
    Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c35_;
    goto L44_;
  }

L189_:;
  // sym18 = ldf `is.null`
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base18 = ldf `is.null` in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args159[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args159);
  // if guard18 then L190() else L191()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L190()
    goto L190_;
  } else {
  // L191()
    goto L191_;
  }

L190_:;
  // dm4 = ld dm
  Rsh_Fir_reg_dm4_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L192() else D60()
  // L192()
  goto L192_;

L191_:;
  // r81 = dyn base18(<sym dm>)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L45(c35, r81)
  // L45(c35, r81)
  Rsh_Fir_reg_c40_ = Rsh_Fir_reg_c35_;
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r81_;
  goto L45_;

D60_:;
  // deopt 223 [c35, dm4]
  SEXP Rsh_Fir_array_deopt_stack58[2];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_c35_;
  Rsh_Fir_array_deopt_stack58[1] = Rsh_Fir_reg_dm4_;
  Rsh_Fir_deopt(223, 2, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L192_:;
  // dm5 = force? dm4
  Rsh_Fir_reg_dm5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dm4_);
  // checkMissing(dm5)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_dm5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty()));
  // c41 = `==`(dm5, NULL)
  SEXP Rsh_Fir_array_args162[2];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_dm5_;
  Rsh_Fir_array_args162[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty());
  // goto L45(c35, c41)
  // L45(c35, c41)
  Rsh_Fir_reg_c40_ = Rsh_Fir_reg_c35_;
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_c41_;
  goto L45_;

L194_:;
  // L5 = ld L
  Rsh_Fir_reg_L5_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L195() else D61()
  // L195()
  goto L195_;

D61_:;
  // deopt 227 [c45, L5]
  SEXP Rsh_Fir_array_deopt_stack59[2];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_c45_;
  Rsh_Fir_array_deopt_stack59[1] = Rsh_Fir_reg_L5_;
  Rsh_Fir_deopt(227, 2, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L195_:;
  // L6 = force? L5
  Rsh_Fir_reg_L6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_L5_);
  // checkMissing(L6)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_L6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty()));
  // sym19 = ldf length
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base19 = ldf length in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args164[2];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args164[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args164);
  // if guard19 then L196() else L197()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L196()
    goto L196_;
  } else {
  // L197()
    goto L197_;
  }

L196_:;
  // n1 = ld n1
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L198() else D62()
  // L198()
  goto L198_;

L197_:;
  // r83 = dyn base19(<sym n1>)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L47(c45, L6, r83)
  // L47(c45, L6, r83)
  Rsh_Fir_reg_c50_ = Rsh_Fir_reg_c45_;
  Rsh_Fir_reg_L9_ = Rsh_Fir_reg_L6_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r83_;
  goto L47_;

D62_:;
  // deopt 230 [c45, L6, n1]
  SEXP Rsh_Fir_array_deopt_stack60[3];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_c45_;
  Rsh_Fir_array_deopt_stack60[1] = Rsh_Fir_reg_L6_;
  Rsh_Fir_array_deopt_stack60[2] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(230, 3, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L198_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r85 = dyn length2(n2)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args167, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L199() else D63()
  // L199()
  goto L199_;

D63_:;
  // deopt 233 [c45, L6, r85]
  SEXP Rsh_Fir_array_deopt_stack61[3];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_c45_;
  Rsh_Fir_array_deopt_stack61[1] = Rsh_Fir_reg_L6_;
  Rsh_Fir_array_deopt_stack61[2] = Rsh_Fir_reg_r85_;
  Rsh_Fir_deopt(233, 3, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L199_:;
  // goto L47(c45, L6, r85)
  // L47(c45, L6, r85)
  Rsh_Fir_reg_c50_ = Rsh_Fir_reg_c45_;
  Rsh_Fir_reg_L9_ = Rsh_Fir_reg_L6_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r85_;
  goto L47_;

L201_:;
  // n3 = ld n1
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L202() else D64()
  // L202()
  goto L202_;

D64_:;
  // deopt 236 [n3]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_deopt(236, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L202_:;
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty()));
  // l3 = ld x
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // attr__2 = ldf `attr<-`
  Rsh_Fir_reg_attr__2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L203() else D65()
  // L203()
  goto L203_;

D65_:;
  // deopt 239 [n4, l3, n4]
  SEXP Rsh_Fir_array_deopt_stack63[3];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack63[2] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(239, 3, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L203_:;
  // r87 = dyn attr__2(l3, NULL, "names", n4)
  SEXP Rsh_Fir_array_args169[4];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args169[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args169[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args169[3] = Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_array_arg_names50[4];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_array_arg_names50[2] = R_MissingArg;
  Rsh_Fir_array_arg_names50[3] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__2_, 4, Rsh_Fir_array_args169, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L204() else D66()
  // L204()
  goto L204_;

D66_:;
  // deopt 242 [n4, r87]
  SEXP Rsh_Fir_array_deopt_stack64[2];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_array_deopt_stack64[1] = Rsh_Fir_reg_r87_;
  Rsh_Fir_deopt(242, 2, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L204_:;
  // st x = r87
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r87_, RHO);
  (void)(Rsh_Fir_reg_r87_);
  // goto L49(n4)
  // L49(n4)
  Rsh_Fir_reg_n5_ = Rsh_Fir_reg_n4_;
  goto L49_;

D67_:;
  // deopt 248 [x9]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(248, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L207_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x10
  return Rsh_Fir_reg_x10_;
}
SEXP Rsh_Fir_user_promise_inner736444261_(SEXP CCP, SEXP RHO) {
  // dn1 = ld dn1
  Rsh_Fir_reg_dn1_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // dn2 = force? dn1
  Rsh_Fir_reg_dn2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn1_);
  // checkMissing(dn2)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_dn2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // return dn2
  return Rsh_Fir_reg_dn2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
