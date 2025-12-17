#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner131594683_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner131594683_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner131594683_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner131594683_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner131594683_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner131594683
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner131594683_, RHO, CCP);
  // st `de.setup` = r
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
SEXP Rsh_Fir_user_function_inner131594683_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner131594683 dynamic dispatch ([ilist, `list.names`, incols])

  return Rsh_Fir_user_version_inner131594683_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner131594683_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner131594683 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner131594683/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_ilist;  // ilist
  SEXP Rsh_Fir_reg_list_names;  // list_names
  SEXP Rsh_Fir_reg_incols;  // incols
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_incols1_;  // incols1
  SEXP Rsh_Fir_reg_incols2_;  // incols2
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_ilen;  // ilen
  SEXP Rsh_Fir_reg_ilen1_;  // ilen1
  SEXP Rsh_Fir_reg_vector;  // vector
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_ilen2_;  // ilen2
  SEXP Rsh_Fir_reg_ilen3_;  // ilen3
  SEXP Rsh_Fir_reg_vector1_;  // vector1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_ilist1_;  // ilist1
  SEXP Rsh_Fir_reg_ilist2_;  // ilist2
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_k;  // k
  SEXP Rsh_Fir_reg_k1_;  // k1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_telt;  // telt
  SEXP Rsh_Fir_reg_telt1_;  // telt1
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_telt2_;  // telt2
  SEXP Rsh_Fir_reg_telt3_;  // telt3
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_telt4_;  // telt4
  SEXP Rsh_Fir_reg_telt5_;  // telt5
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_telt6_;  // telt6
  SEXP Rsh_Fir_reg_telt7_;  // telt7
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_i26_;  // i26
  SEXP Rsh_Fir_reg_i27_;  // i27
  SEXP Rsh_Fir_reg_telt9_;  // telt9
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i30_;  // i30
  SEXP Rsh_Fir_reg_i31_;  // i31
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_j;  // j
  SEXP Rsh_Fir_reg_j1_;  // j1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_i34_;  // i34
  SEXP Rsh_Fir_reg_i35_;  // i35
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_i38_;  // i38
  SEXP Rsh_Fir_reg_i39_;  // i39
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_i40_;  // i40
  SEXP Rsh_Fir_reg_i41_;  // i41
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_i46_;  // i46
  SEXP Rsh_Fir_reg_i47_;  // i47
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_i48_;  // i48
  SEXP Rsh_Fir_reg_i49_;  // i49
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_i54_;  // i54
  SEXP Rsh_Fir_reg_i55_;  // i55
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_y5_;  // y5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_i58_;  // i58
  SEXP Rsh_Fir_reg_i59_;  // i59
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_j2_;  // j2
  SEXP Rsh_Fir_reg_j3_;  // j3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_i66_;  // i66
  SEXP Rsh_Fir_reg_i67_;  // i67
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_i70_;  // i70
  SEXP Rsh_Fir_reg_i71_;  // i71
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_i74_;  // i74
  SEXP Rsh_Fir_reg_i75_;  // i75
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_i76_;  // i76
  SEXP Rsh_Fir_reg_i77_;  // i77
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_i78_;  // i78
  SEXP Rsh_Fir_reg_i79_;  // i79
  SEXP Rsh_Fir_reg_y6_;  // y6
  SEXP Rsh_Fir_reg_y7_;  // y7
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_i82_;  // i82
  SEXP Rsh_Fir_reg_i83_;  // i83
  SEXP Rsh_Fir_reg_y9_;  // y9
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_i86_;  // i86
  SEXP Rsh_Fir_reg_i87_;  // i87
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_j4_;  // j4
  SEXP Rsh_Fir_reg_j5_;  // j5
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_i90_;  // i90
  SEXP Rsh_Fir_reg_i91_;  // i91
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_i94_;  // i94
  SEXP Rsh_Fir_reg_i95_;  // i95
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_i96_;  // i96
  SEXP Rsh_Fir_reg_i97_;  // i97
  SEXP Rsh_Fir_reg_____2_;  // ____2
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_i98_;  // i98
  SEXP Rsh_Fir_reg_i99_;  // i99
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_i100_;  // i100
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_i104_;  // i104
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_telt10_;  // telt10
  SEXP Rsh_Fir_reg_telt11_;  // telt11
  SEXP Rsh_Fir_reg_is_vector;  // is_vector
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_telt12_;  // telt12
  SEXP Rsh_Fir_reg_telt13_;  // telt13
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_i108_;  // i108
  SEXP Rsh_Fir_reg_telt15_;  // telt15
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_i110_;  // i110
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_i111_;  // i111
  SEXP Rsh_Fir_reg_i112_;  // i112
  SEXP Rsh_Fir_reg_____3_;  // ____3
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_list_names1_;  // list_names1
  SEXP Rsh_Fir_reg_list_names2_;  // list_names2
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_i114_;  // i114
  SEXP Rsh_Fir_reg_list_names4_;  // list_names4
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_i116_;  // i116
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_k2_;  // k2
  SEXP Rsh_Fir_reg_k3_;  // k3
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_i118_;  // i118
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_l16_;  // l16
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_i120_;  // i120
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_i121_;  // i121
  SEXP Rsh_Fir_reg_i122_;  // i122
  SEXP Rsh_Fir_reg_____4_;  // ____4
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_i123_;  // i123
  SEXP Rsh_Fir_reg_i124_;  // i124
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_i127_;  // i127
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_telt18_;  // telt18
  SEXP Rsh_Fir_reg_telt19_;  // telt19
  SEXP Rsh_Fir_reg_is_matrix;  // is_matrix
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_i132_;  // i132
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_telt20_;  // telt20
  SEXP Rsh_Fir_reg_telt21_;  // telt21
  SEXP Rsh_Fir_reg_dimnames;  // dimnames
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_i134_;  // i134
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_i136_;  // i136
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_i139_;  // i139
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_ncol;  // ncol
  SEXP Rsh_Fir_reg_telt22_;  // telt22
  SEXP Rsh_Fir_reg_telt23_;  // telt23
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_s2_;  // s2
  SEXP Rsh_Fir_reg_l17_;  // l17
  SEXP Rsh_Fir_reg_i140_;  // i140
  SEXP Rsh_Fir_reg_i141_;  // i141
  SEXP Rsh_Fir_reg_i142_;  // i142
  SEXP Rsh_Fir_reg_i143_;  // i143
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_telt24_;  // telt24
  SEXP Rsh_Fir_reg_telt25_;  // telt25
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_i150_;  // i150
  SEXP Rsh_Fir_reg_i151_;  // i151
  SEXP Rsh_Fir_reg_telt27_;  // telt27
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_i154_;  // i154
  SEXP Rsh_Fir_reg_i155_;  // i155
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_j6_;  // j6
  SEXP Rsh_Fir_reg_j7_;  // j7
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_l18_;  // l18
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_i158_;  // i158
  SEXP Rsh_Fir_reg_i159_;  // i159
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_l20_;  // l20
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_i162_;  // i162
  SEXP Rsh_Fir_reg_i163_;  // i163
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg_i164_;  // i164
  SEXP Rsh_Fir_reg_i165_;  // i165
  SEXP Rsh_Fir_reg_____5_;  // ____5
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_i170_;  // i170
  SEXP Rsh_Fir_reg_i171_;  // i171
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_y10_;  // y10
  SEXP Rsh_Fir_reg_y11_;  // y11
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_i172_;  // i172
  SEXP Rsh_Fir_reg_i173_;  // i173
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_y12_;  // y12
  SEXP Rsh_Fir_reg_y13_;  // y13
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_i178_;  // i178
  SEXP Rsh_Fir_reg_i179_;  // i179
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_y15_;  // y15
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx40_;  // dx40
  SEXP Rsh_Fir_reg_i182_;  // i182
  SEXP Rsh_Fir_reg_i183_;  // i183
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg_j8_;  // j8
  SEXP Rsh_Fir_reg_j9_;  // j9
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_paste1_;  // paste1
  SEXP Rsh_Fir_reg_i190_;  // i190
  SEXP Rsh_Fir_reg_i191_;  // i191
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_l21_;  // l21
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_i194_;  // i194
  SEXP Rsh_Fir_reg_i195_;  // i195
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_l23_;  // l23
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx42_;  // dx42
  SEXP Rsh_Fir_reg_i198_;  // i198
  SEXP Rsh_Fir_reg_i199_;  // i199
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_dx43_;  // dx43
  SEXP Rsh_Fir_reg_i200_;  // i200
  SEXP Rsh_Fir_reg_i201_;  // i201
  SEXP Rsh_Fir_reg_____6_;  // ____6
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_i202_;  // i202
  SEXP Rsh_Fir_reg_i203_;  // i203
  SEXP Rsh_Fir_reg_y16_;  // y16
  SEXP Rsh_Fir_reg_y17_;  // y17
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_i206_;  // i206
  SEXP Rsh_Fir_reg_i207_;  // i207
  SEXP Rsh_Fir_reg_y19_;  // y19
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx44_;  // dx44
  SEXP Rsh_Fir_reg_i210_;  // i210
  SEXP Rsh_Fir_reg_i211_;  // i211
  SEXP Rsh_Fir_reg_dx45_;  // dx45
  SEXP Rsh_Fir_reg_j10_;  // j10
  SEXP Rsh_Fir_reg_j11_;  // j11
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_l24_;  // l24
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_i214_;  // i214
  SEXP Rsh_Fir_reg_i215_;  // i215
  SEXP Rsh_Fir_reg_dx47_;  // dx47
  SEXP Rsh_Fir_reg_l26_;  // l26
  SEXP Rsh_Fir_reg_dr30_;  // dr30
  SEXP Rsh_Fir_reg_dc15_;  // dc15
  SEXP Rsh_Fir_reg_dx49_;  // dx49
  SEXP Rsh_Fir_reg_i218_;  // i218
  SEXP Rsh_Fir_reg_i219_;  // i219
  SEXP Rsh_Fir_reg_dx50_;  // dx50
  SEXP Rsh_Fir_reg_dx51_;  // dx51
  SEXP Rsh_Fir_reg_i220_;  // i220
  SEXP Rsh_Fir_reg_i221_;  // i221
  SEXP Rsh_Fir_reg_____7_;  // ____7
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_i222_;  // i222
  SEXP Rsh_Fir_reg_i223_;  // i223
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_inames;  // inames
  SEXP Rsh_Fir_reg_inames1_;  // inames1
  SEXP Rsh_Fir_reg_l27_;  // l27
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_ivec;  // ivec
  SEXP Rsh_Fir_reg_ivec1_;  // ivec1

  // Bind parameters
  Rsh_Fir_reg_ilist = PARAMS[0];
  Rsh_Fir_reg_list_names = PARAMS[1];
  Rsh_Fir_reg_incols = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st ilist = ilist
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_ilist, RHO);
  (void)(Rsh_Fir_reg_ilist);
  // st `list.names` = list_names
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_list_names, RHO);
  (void)(Rsh_Fir_reg_list_names);
  // st incols = incols
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_incols, RHO);
  (void)(Rsh_Fir_reg_incols);
  // sym = ldf sum
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf sum in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L0_:;
  // st ilen = r1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf vector
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf vector in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L1_:;
  // st ivec = r4
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym2 = ldf vector
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base2 = ldf vector in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard2 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L2_:;
  // st inames = r7
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // st i = 1
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_const(CCP, 9), RHO);
  (void)(Rsh_const(CCP, 9));
  // st k = 0
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_const(CCP, 11), RHO);
  (void)(Rsh_const(CCP, 11));
  // ilist1 = ld ilist
  Rsh_Fir_reg_ilist1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L56() else D6()
  // L56()
  goto L56_;

L3_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if c then L57() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L57()
    goto L57_;
  } else {
  // L43()
    goto L43_;
  }

L4_:;
  // c1 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c1 then L63() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L63()
    goto L63_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // sym7 = ldf `is.vector`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base7 = ldf `is.vector` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard7 then L110() else L111()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L110()
    goto L110_;
  } else {
  // L111()
    goto L111_;
  }

L6_:;
  // st y = r14
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // sym5 = ldf seq_along
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base5 = ldf seq_along in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard5 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L7_:;
  // s1 = toForSeq(r17)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // l1 = length(s1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // i16 = 0
  Rsh_Fir_reg_i16_ = Rsh_const(CCP, 11);
  // goto L8(i15, i16)
  // L8(i15, i16)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i16_;
  goto L8_;

L8_:;
  // i19 = `+`.1(i18, 1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_i19_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args10);
  // c2 = `<`.1(l1, i19)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if c2 then L71() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L71()
    goto L71_;
  } else {
  // L19()
    goto L19_;
  }

L9_:;
  // l2 = ld ivec
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // c4 = `is.object`(l2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c4 then L77() else L78(i30, i31, dx1, l2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L77()
    goto L77_;
  } else {
  // L78(i30, i31, dx1, l2)
    Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i30_;
    Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i31_;
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    goto L78_;
  }

L10_:;
  // st ivec = dx7
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // sym6 = ldf `is.null`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base6 = ldf `is.null` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard6 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L11_:;
  // c6 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c6 then L12(i46, i47, c6) else L84()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L12(i46, i47, c6)
    Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i46_;
    Rsh_Fir_reg_i49_ = Rsh_Fir_reg_i47_;
    Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c6_;
    goto L12_;
  } else {
  // L84()
    goto L84_;
  }

L12_:;
  // c17 = `as.logical`(c7)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c17 then L91() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L91()
    goto L91_;
  } else {
  // L14()
    goto L14_;
  }

L13_:;
  // r24 = `==`(dx9, "")
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // c14 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // c15 = `||`(c13, c14)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L12(i58, i59, c15)
  // L12(i58, i59, c15)
  Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i58_;
  Rsh_Fir_reg_i49_ = Rsh_Fir_reg_i59_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c15_;
  goto L12_;

L14_:;
  // y6 = ld y
  Rsh_Fir_reg_y6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L99() else D22()
  // L99()
  goto L99_;

L15_:;
  // st inames = dx11
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // goto L16(i74, i75)
  // L16(i74, i75)
  Rsh_Fir_reg_i78_ = Rsh_Fir_reg_i74_;
  Rsh_Fir_reg_i79_ = Rsh_Fir_reg_i75_;
  goto L16_;

L16_:;
  // i98 = ld i
  Rsh_Fir_reg_i98_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L108() else D25()
  // L108()
  goto L108_;

L17_:;
  // l8 = ld inames
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // c20 = `is.object`(l8)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c20 then L104() else L105(i86, i87, dx13, l8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L104()
    goto L104_;
  } else {
  // L105(i86, i87, dx13, l8)
    Rsh_Fir_reg_i90_ = Rsh_Fir_reg_i86_;
    Rsh_Fir_reg_i91_ = Rsh_Fir_reg_i87_;
    Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx13_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l8_;
    goto L105_;
  }

L18_:;
  // st inames = dx19
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // goto L16(i94, i95)
  // L16(i94, i95)
  Rsh_Fir_reg_i78_ = Rsh_Fir_reg_i94_;
  Rsh_Fir_reg_i79_ = Rsh_Fir_reg_i95_;
  goto L16_;

L19_:;
  // x1 = `[[`(s1, i19, NULL, TRUE)
  SEXP Rsh_Fir_array_args20[4];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args20[3] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_x1_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // st j = x1
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // telt6 = ld telt
  Rsh_Fir_reg_telt6_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L72() else D13()
  // L72()
  goto L72_;

L20_:;
  // goto L3(i100)
  // L3(i100)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i100_;
  goto L3_;

L21_:;
  // c21 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c21 then L114() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L114()
    goto L114_;
  } else {
  // L22()
    goto L22_;
  }

L22_:;
  // sym8 = ldf `is.matrix`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base8 = ldf `is.matrix` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard8 then L131() else L132()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L131()
    goto L131_;
  } else {
  // L132()
    goto L132_;
  }

L23_:;
  // st ivec = dx21
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // list_names1 = ld `list.names`
  Rsh_Fir_reg_list_names1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L120() else D30()
  // L120()
  goto L120_;

L24_:;
  // l14 = ld inames
  Rsh_Fir_reg_l14_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // c24 = `is.object`(l14)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c24 then L125() else L126(i116, dx23, l14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L125()
    goto L125_;
  } else {
  // L126(i116, dx23, l14)
    Rsh_Fir_reg_i118_ = Rsh_Fir_reg_i116_;
    Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx23_;
    Rsh_Fir_reg_l16_ = Rsh_Fir_reg_l14_;
    goto L126_;
  }

L25_:;
  // st inames = dx29
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx29_, RHO);
  (void)(Rsh_Fir_reg_dx29_);
  // i123 = ld i
  Rsh_Fir_reg_i123_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L129() else D33()
  // L129()
  goto L129_;

L26_:;
  // c25 = `as.logical`(r44)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c25 then L135() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L135()
    goto L135_;
  } else {
  // L27()
    goto L27_;
  }

L27_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L186() else D53()
  // L186()
  goto L186_;

L28_:;
  // c26 = `is.object`(r47)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c26 then L140() else L141(i132, r47)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L140()
    goto L140_;
  } else {
  // L141(i132, r47)
    Rsh_Fir_reg_i134_ = Rsh_Fir_reg_i132_;
    Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r47_;
    goto L141_;
  }

L29_:;
  // st y = dx31
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_dx31_, RHO);
  (void)(Rsh_Fir_reg_dx31_);
  // sym10 = ldf seq_len
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base10 = ldf seq_len in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard10 then L143() else L144()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L143()
    goto L143_;
  } else {
  // L144()
    goto L144_;
  }

L30_:;
  // s2 = toForSeq(r53)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_s2_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // l17 = length(s2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_s2_;
  Rsh_Fir_reg_l17_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // i140 = 0
  Rsh_Fir_reg_i140_ = Rsh_const(CCP, 11);
  // goto L31(i139, i140)
  // L31(i139, i140)
  Rsh_Fir_reg_i141_ = Rsh_Fir_reg_i139_;
  Rsh_Fir_reg_i142_ = Rsh_Fir_reg_i140_;
  goto L31_;

L31_:;
  // i143 = `+`.1(i142, 1)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_i142_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_i143_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args29);
  // c27 = `<`.1(l17, i143)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_i143_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if c27 then L147() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L147()
    goto L147_;
  } else {
  // L42()
    goto L42_;
  }

L32_:;
  // l18 = ld ivec
  Rsh_Fir_reg_l18_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // c29 = `is.object`(l18)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c29 then L153() else L154(i154, i155, dx33, l18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L153()
    goto L153_;
  } else {
  // L154(i154, i155, dx33, l18)
    Rsh_Fir_reg_i158_ = Rsh_Fir_reg_i154_;
    Rsh_Fir_reg_i159_ = Rsh_Fir_reg_i155_;
    Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx33_;
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_l18_;
    goto L154_;
  }

L33_:;
  // st ivec = dx39
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx39_, RHO);
  (void)(Rsh_Fir_reg_dx39_);
  // sym11 = ldf `is.null`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base11 = ldf `is.null` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard11 then L157() else L158()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L157()
    goto L157_;
  } else {
  // L158()
    goto L158_;
  }

L34_:;
  // c31 = `as.logical`(r60)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c31 then L35(i170, i171, c31) else L160()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L35(i170, i171, c31)
    Rsh_Fir_reg_i172_ = Rsh_Fir_reg_i170_;
    Rsh_Fir_reg_i173_ = Rsh_Fir_reg_i171_;
    Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c31_;
    goto L35_;
  } else {
  // L160()
    goto L160_;
  }

L35_:;
  // c42 = `as.logical`(c32)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c42 then L167() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L167()
    goto L167_;
  } else {
  // L37()
    goto L37_;
  }

L36_:;
  // r62 = `==`(dx41, "")
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dx41_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // c39 = `as.logical`(r62)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // c40 = `||`(c38, c39)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_c39_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L35(i182, i183, c40)
  // L35(i182, i183, c40)
  Rsh_Fir_reg_i172_ = Rsh_Fir_reg_i182_;
  Rsh_Fir_reg_i173_ = Rsh_Fir_reg_i183_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c40_;
  goto L35_;

L37_:;
  // y16 = ld y
  Rsh_Fir_reg_y16_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L175() else D49()
  // L175()
  goto L175_;

L38_:;
  // st inames = dx43
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx43_, RHO);
  (void)(Rsh_Fir_reg_dx43_);
  // goto L39(i198, i199)
  // L39(i198, i199)
  Rsh_Fir_reg_i202_ = Rsh_Fir_reg_i198_;
  Rsh_Fir_reg_i203_ = Rsh_Fir_reg_i199_;
  goto L39_;

L39_:;
  // i222 = ld i
  Rsh_Fir_reg_i222_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L184() else D52()
  // L184()
  goto L184_;

L40_:;
  // l24 = ld inames
  Rsh_Fir_reg_l24_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // c45 = `is.object`(l24)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_l24_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c45 then L180() else L181(i210, i211, dx45, l24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L180()
    goto L180_;
  } else {
  // L181(i210, i211, dx45, l24)
    Rsh_Fir_reg_i214_ = Rsh_Fir_reg_i210_;
    Rsh_Fir_reg_i215_ = Rsh_Fir_reg_i211_;
    Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_dx45_;
    Rsh_Fir_reg_l26_ = Rsh_Fir_reg_l24_;
    goto L181_;
  }

L41_:;
  // st inames = dx51
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx51_, RHO);
  (void)(Rsh_Fir_reg_dx51_);
  // goto L39(i218, i219)
  // L39(i218, i219)
  Rsh_Fir_reg_i202_ = Rsh_Fir_reg_i218_;
  Rsh_Fir_reg_i203_ = Rsh_Fir_reg_i219_;
  goto L39_;

L42_:;
  // x2 = `[[`(s2, i143, NULL, TRUE)
  SEXP Rsh_Fir_array_args39[4];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_s2_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_i143_;
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args39[3] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_x2_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // st j = x2
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_x2_, RHO);
  (void)(Rsh_Fir_reg_x2_);
  // telt24 = ld telt
  Rsh_Fir_reg_telt24_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L148() else D40()
  // L148()
  goto L148_;

L43_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args40[4];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args40[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args40[3] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // st telt = x
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // k = ld k
  Rsh_Fir_reg_k = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L58() else D7()
  // L58()
  goto L58_;

L44_:;
  // incols1 = ld incols
  Rsh_Fir_reg_incols1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L46() else D0()
  // L46()
  goto L46_;

L45_:;
  // r = dyn base(<sym incols>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [incols1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_incols1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L46_:;
  // incols2 = force? incols1
  Rsh_Fir_reg_incols2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_incols1_);
  // checkMissing(incols2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_incols2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r2 = dyn sum(incols2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_incols2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L47() else D1()
  // L47()
  goto L47_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L48_:;
  // ilen = ld ilen
  Rsh_Fir_reg_ilen = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L50() else D2()
  // L50()
  goto L50_;

L49_:;
  // r3 = dyn base1("list", <sym ilen>)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 10 [ilen]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_ilen;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L50_:;
  // ilen1 = force? ilen
  Rsh_Fir_reg_ilen1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ilen);
  // checkMissing(ilen1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_ilen1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // vector = ldf vector in base
  Rsh_Fir_reg_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r5 = dyn vector("list", ilen1)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_ilen1_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L51() else D3()
  // L51()
  goto L51_;

D3_:;
  // deopt 13 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L52_:;
  // ilen2 = ld ilen
  Rsh_Fir_reg_ilen2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L54() else D4()
  // L54()
  goto L54_;

L53_:;
  // r6 = dyn base2("list", <sym ilen>)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L2_;

D4_:;
  // deopt 18 [ilen2]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_ilen2_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L54_:;
  // ilen3 = force? ilen2
  Rsh_Fir_reg_ilen3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ilen2_);
  // checkMissing(ilen3)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_ilen3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // vector1 = ldf vector in base
  Rsh_Fir_reg_vector1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r8 = dyn vector1("list", ilen3)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_ilen3_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector1_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L55() else D5()
  // L55()
  goto L55_;

D5_:;
  // deopt 21 [r8]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L55_:;
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L2_;

D6_:;
  // deopt 29 [ilist1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_ilist1_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L56_:;
  // ilist2 = force? ilist1
  Rsh_Fir_reg_ilist2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ilist1_);
  // checkMissing(ilist2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_ilist2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // s = toForSeq(ilist2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_ilist2_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 11);
  // goto L3(i)
  // L3(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L3_;

L57_:;
  // inames = ld inames
  Rsh_Fir_reg_inames = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L188() else D55()
  // L188()
  goto L188_;

D7_:;
  // deopt 31 [i2, k]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_k;
  Rsh_Fir_deopt(31, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L58_:;
  // k1 = force? k
  Rsh_Fir_reg_k1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k);
  // checkMissing(k1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_k1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // r9 = `+`(k1, 1)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_k1_;
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // st k = r9
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // sym3 = ldf `is.list`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base3 = ldf `is.list` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard3 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L59_:;
  // telt = ld telt
  Rsh_Fir_reg_telt = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L61() else D8()
  // L61()
  goto L61_;

L60_:;
  // r10 = dyn base3(<sym telt>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L4(i2, r10)
  // L4(i2, r10)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L4_;

D8_:;
  // deopt 38 [i2, telt]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_telt;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L61_:;
  // telt1 = force? telt
  Rsh_Fir_reg_telt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_telt);
  // checkMissing(telt1)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_telt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r12 = dyn is_list(telt1)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_telt1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L62() else D9()
  // L62()
  goto L62_;

D9_:;
  // deopt 41 [i2, r12]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(41, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L62_:;
  // goto L4(i2, r12)
  // L4(i2, r12)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L4_;

L63_:;
  // sym4 = ldf names
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base4 = ldf names in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard4 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

L64_:;
  // telt2 = ld telt
  Rsh_Fir_reg_telt2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L66() else D10()
  // L66()
  goto L66_;

L65_:;
  // r13 = dyn base4(<sym telt>)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(i7, r13)
  // L6(i7, r13)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L6_;

D10_:;
  // deopt 44 [i7, telt2]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_telt2_;
  Rsh_Fir_deopt(44, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L66_:;
  // telt3 = force? telt2
  Rsh_Fir_reg_telt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_telt2_);
  // checkMissing(telt3)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_telt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r15 = dyn names(telt3)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_telt3_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L67() else D11()
  // L67()
  goto L67_;

D11_:;
  // deopt 47 [i7, r15]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(47, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L67_:;
  // goto L6(i7, r15)
  // L6(i7, r15)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L6_;

L68_:;
  // telt4 = ld telt
  Rsh_Fir_reg_telt4_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L70() else D12()
  // L70()
  goto L70_;

L69_:;
  // r16 = dyn base5(<sym telt>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L7(i12, r16)
  // L7(i12, r16)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L7_;

D12_:;
  // deopt 50 [i12, telt4]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_telt4_;
  Rsh_Fir_deopt(50, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L70_:;
  // telt5 = force? telt4
  Rsh_Fir_reg_telt5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_telt4_);
  // checkMissing(telt5)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_telt5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // r18 = seq_along(telt5)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_telt5_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L7(i12, r18)
  // L7(i12, r18)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L7_;

L71_:;
  // goto L20(i17)
  // L20(i17)
  Rsh_Fir_reg_i100_ = Rsh_Fir_reg_i17_;
  goto L20_;

D13_:;
  // deopt 53 [i17, i19, telt6]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_telt6_;
  Rsh_Fir_deopt(53, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L72_:;
  // telt7 = force? telt6
  Rsh_Fir_reg_telt7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_telt6_);
  // checkMissing(telt7)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_telt7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(telt7)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_telt7_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if c3 then L73() else L74(i17, i19, telt7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L73()
    goto L73_;
  } else {
  // L74(i17, i19, telt7)
    Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i17_;
    Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_telt9_ = Rsh_Fir_reg_telt7_;
    goto L74_;
  }

L73_:;
  // dr = tryDispatchBuiltin.1("[[", telt7)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_telt7_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args68);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if dc then L75() else L74(i17, i19, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L75()
    goto L75_;
  } else {
  // L74(i17, i19, dr)
    Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i17_;
    Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_telt9_ = Rsh_Fir_reg_dr;
    goto L74_;
  }

L74_:;
  // j = ld j
  Rsh_Fir_reg_j = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L76() else D14()
  // L76()
  goto L76_;

L75_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // goto L9(i17, i19, dx)
  // L9(i17, i19, dx)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L9_;

D14_:;
  // deopt 55 [i26, i27, telt9, j]
  SEXP Rsh_Fir_array_deopt_stack14[4];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i26_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_i27_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_telt9_;
  Rsh_Fir_array_deopt_stack14[3] = Rsh_Fir_reg_j;
  Rsh_Fir_deopt(55, 4, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L76_:;
  // j1 = force? j
  Rsh_Fir_reg_j1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r19 = dyn __(telt9, j1)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_telt9_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_j1_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L9(i26, i27, r19)
  // L9(i26, i27, r19)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i26_;
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r19_;
  goto L9_;

L77_:;
  // dr2 = tryDispatchBuiltin.0("[[<-", l2, dx1)
  SEXP Rsh_Fir_array_args72[3];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args72[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args72);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if dc1 then L79() else L78(i30, i31, dx1, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L79()
    goto L79_;
  } else {
  // L78(i30, i31, dx1, dr2)
    Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i30_;
    Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i31_;
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_dr2_;
    goto L78_;
  }

L78_:;
  // i40 = ld i
  Rsh_Fir_reg_i40_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L80() else D15()
  // L80()
  goto L80_;

L79_:;
  // dx5 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // goto L10(i30, i31, dx5)
  // L10(i30, i31, dx5)
  Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i30_;
  Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i31_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx5_;
  goto L10_;

D15_:;
  // deopt 59 [i34, i35, dx3, l4, dx1, i40]
  SEXP Rsh_Fir_array_deopt_stack15[6];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i34_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack15[3] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack15[4] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack15[5] = Rsh_Fir_reg_i40_;
  Rsh_Fir_deopt(59, 6, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L80_:;
  // i41 = force? i40
  Rsh_Fir_reg_i41_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i40_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r20 = dyn ____(l4, dx1, i41)
  SEXP Rsh_Fir_array_args75[3];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args75[2] = Rsh_Fir_reg_i41_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L10(i34, i35, r20)
  // L10(i34, i35, r20)
  Rsh_Fir_reg_i38_ = Rsh_Fir_reg_i34_;
  Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i35_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r20_;
  goto L10_;

L81_:;
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L83() else D16()
  // L83()
  goto L83_;

L82_:;
  // r21 = dyn base6(<sym y>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L11(i38, i39, r21)
  // L11(i38, i39, r21)
  Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i38_;
  Rsh_Fir_reg_i47_ = Rsh_Fir_reg_i39_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L11_;

D16_:;
  // deopt 64 [i38, i39, y]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i38_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_i39_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(64, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L83_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // c5 = `==`(y1, NULL)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_y1_;
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // goto L11(i38, i39, c5)
  // L11(i38, i39, c5)
  Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i38_;
  Rsh_Fir_reg_i47_ = Rsh_Fir_reg_i39_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_c5_;
  goto L11_;

L84_:;
  // y2 = ld y
  Rsh_Fir_reg_y2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L85() else D17()
  // L85()
  goto L85_;

D17_:;
  // deopt 67 [i46, i47, c6, y2]
  SEXP Rsh_Fir_array_deopt_stack17[4];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i46_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_i47_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack17[3] = Rsh_Fir_reg_y2_;
  Rsh_Fir_deopt(67, 4, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L85_:;
  // y3 = force? y2
  Rsh_Fir_reg_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y2_);
  // checkMissing(y3)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_y3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(y3)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if c9 then L86() else L87(i46, i47, c6, y3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L86()
    goto L86_;
  } else {
  // L87(i46, i47, c6, y3)
    Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i46_;
    Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i47_;
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c6_;
    Rsh_Fir_reg_y5_ = Rsh_Fir_reg_y3_;
    goto L87_;
  }

L86_:;
  // dr4 = tryDispatchBuiltin.1("[", y3)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_y3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args81);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // if dc2 then L88() else L87(i46, i47, c6, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L88()
    goto L88_;
  } else {
  // L87(i46, i47, c6, dr4)
    Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i46_;
    Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i47_;
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c6_;
    Rsh_Fir_reg_y5_ = Rsh_Fir_reg_dr4_;
    goto L87_;
  }

L87_:;
  // j2 = ld j
  Rsh_Fir_reg_j2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L89() else D18()
  // L89()
  goto L89_;

L88_:;
  // dx8 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // goto L13(i46, i47, c6, dx8)
  // L13(i46, i47, c6, dx8)
  Rsh_Fir_reg_i58_ = Rsh_Fir_reg_i46_;
  Rsh_Fir_reg_i59_ = Rsh_Fir_reg_i47_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L13_;

D18_:;
  // deopt 69 [i54, i55, c11, y5, j2]
  SEXP Rsh_Fir_array_deopt_stack18[5];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i54_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_i55_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack18[3] = Rsh_Fir_reg_y5_;
  Rsh_Fir_array_deopt_stack18[4] = Rsh_Fir_reg_j2_;
  Rsh_Fir_deopt(69, 5, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L89_:;
  // j3 = force? j2
  Rsh_Fir_reg_j3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j2_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r23 = dyn __1(y5, j3)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_y5_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_j3_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L13(i54, i55, c11, r23)
  // L13(i54, i55, c11, r23)
  Rsh_Fir_reg_i58_ = Rsh_Fir_reg_i54_;
  Rsh_Fir_reg_i59_ = Rsh_Fir_reg_i55_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r23_;
  goto L13_;

L91_:;
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L92() else D19()
  // L92()
  goto L92_;

D19_:;
  // deopt 76 [i48, i49]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i48_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_i49_;
  Rsh_Fir_deopt(76, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L92_:;
  // p = prom<V +>{
  //   i66 = ld i;
  //   i67 = force? i66;
  //   checkMissing(i67);
  //   return i67;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner131594683_, CCP, RHO);
  // r26 = dyn paste0("var", p)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L93() else D20()
  // L93()
  goto L93_;

D20_:;
  // deopt 79 [i48, i49, r26]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i48_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_i49_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(79, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L93_:;
  // l5 = ld inames
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // c18 = `is.object`(l5)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if c18 then L94() else L95(i48, i49, r26, l5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L94()
    goto L94_;
  } else {
  // L95(i48, i49, r26, l5)
    Rsh_Fir_reg_i70_ = Rsh_Fir_reg_i48_;
    Rsh_Fir_reg_i71_ = Rsh_Fir_reg_i49_;
    Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r26_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    goto L95_;
  }

L94_:;
  // dr6 = tryDispatchBuiltin.0("[[<-", l5, r26)
  SEXP Rsh_Fir_array_args88[3];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args88[2] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args88);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // if dc3 then L96() else L95(i48, i49, r26, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L96()
    goto L96_;
  } else {
  // L95(i48, i49, r26, dr6)
    Rsh_Fir_reg_i70_ = Rsh_Fir_reg_i48_;
    Rsh_Fir_reg_i71_ = Rsh_Fir_reg_i49_;
    Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r26_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr6_;
    goto L95_;
  }

L95_:;
  // i76 = ld i
  Rsh_Fir_reg_i76_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L97() else D21()
  // L97()
  goto L97_;

L96_:;
  // dx10 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // goto L15(i48, i49, r26, dx10)
  // L15(i48, i49, r26, dx10)
  Rsh_Fir_reg_i74_ = Rsh_Fir_reg_i48_;
  Rsh_Fir_reg_i75_ = Rsh_Fir_reg_i49_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L15_;

D21_:;
  // deopt 81 [i70, i71, r28, l7, r26, i76]
  SEXP Rsh_Fir_array_deopt_stack21[6];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i70_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_i71_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_deopt_stack21[3] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack21[4] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_deopt_stack21[5] = Rsh_Fir_reg_i76_;
  Rsh_Fir_deopt(81, 6, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L97_:;
  // i77 = force? i76
  Rsh_Fir_reg_i77_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i76_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r31 = dyn ____1(l7, r26, i77)
  SEXP Rsh_Fir_array_args91[3];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args91[2] = Rsh_Fir_reg_i77_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L15(i70, i71, r28, r31)
  // L15(i70, i71, r28, r31)
  Rsh_Fir_reg_i74_ = Rsh_Fir_reg_i70_;
  Rsh_Fir_reg_i75_ = Rsh_Fir_reg_i71_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r31_;
  goto L15_;

D22_:;
  // deopt 85 [i48, i49, y6]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i48_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_i49_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_y6_;
  Rsh_Fir_deopt(85, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L99_:;
  // y7 = force? y6
  Rsh_Fir_reg_y7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y6_);
  // checkMissing(y7)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_y7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(y7)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_y7_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if c19 then L100() else L101(i48, i49, y7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L100()
    goto L100_;
  } else {
  // L101(i48, i49, y7)
    Rsh_Fir_reg_i82_ = Rsh_Fir_reg_i48_;
    Rsh_Fir_reg_i83_ = Rsh_Fir_reg_i49_;
    Rsh_Fir_reg_y9_ = Rsh_Fir_reg_y7_;
    goto L101_;
  }

L100_:;
  // dr8 = tryDispatchBuiltin.1("[", y7)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_y7_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args94);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // if dc4 then L102() else L101(i48, i49, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L102()
    goto L102_;
  } else {
  // L101(i48, i49, dr8)
    Rsh_Fir_reg_i82_ = Rsh_Fir_reg_i48_;
    Rsh_Fir_reg_i83_ = Rsh_Fir_reg_i49_;
    Rsh_Fir_reg_y9_ = Rsh_Fir_reg_dr8_;
    goto L101_;
  }

L101_:;
  // j4 = ld j
  Rsh_Fir_reg_j4_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L103() else D23()
  // L103()
  goto L103_;

L102_:;
  // dx12 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // goto L17(i48, i49, dx12)
  // L17(i48, i49, dx12)
  Rsh_Fir_reg_i86_ = Rsh_Fir_reg_i48_;
  Rsh_Fir_reg_i87_ = Rsh_Fir_reg_i49_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L17_;

D23_:;
  // deopt 87 [i82, i83, y9, j4]
  SEXP Rsh_Fir_array_deopt_stack23[4];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i82_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_i83_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_y9_;
  Rsh_Fir_array_deopt_stack23[3] = Rsh_Fir_reg_j4_;
  Rsh_Fir_deopt(87, 4, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L103_:;
  // j5 = force? j4
  Rsh_Fir_reg_j5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j4_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r33 = dyn __2(y9, j5)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_y9_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_j5_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L17(i82, i83, r33)
  // L17(i82, i83, r33)
  Rsh_Fir_reg_i86_ = Rsh_Fir_reg_i82_;
  Rsh_Fir_reg_i87_ = Rsh_Fir_reg_i83_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r33_;
  goto L17_;

L104_:;
  // dr10 = tryDispatchBuiltin.0("[[<-", l8, dx13)
  SEXP Rsh_Fir_array_args98[3];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args98[2] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args98);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if dc5 then L106() else L105(i86, i87, dx13, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L106()
    goto L106_;
  } else {
  // L105(i86, i87, dx13, dr10)
    Rsh_Fir_reg_i90_ = Rsh_Fir_reg_i86_;
    Rsh_Fir_reg_i91_ = Rsh_Fir_reg_i87_;
    Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx13_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_dr10_;
    goto L105_;
  }

L105_:;
  // i96 = ld i
  Rsh_Fir_reg_i96_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L107() else D24()
  // L107()
  goto L107_;

L106_:;
  // dx17 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // goto L18(i86, i87, dx13, dx17)
  // L18(i86, i87, dx13, dx17)
  Rsh_Fir_reg_i94_ = Rsh_Fir_reg_i86_;
  Rsh_Fir_reg_i95_ = Rsh_Fir_reg_i87_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx17_;
  goto L18_;

D24_:;
  // deopt 91 [i90, i91, dx15, l10, dx13, i96]
  SEXP Rsh_Fir_array_deopt_stack24[6];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i90_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_i91_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_deopt_stack24[3] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack24[4] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_deopt_stack24[5] = Rsh_Fir_reg_i96_;
  Rsh_Fir_deopt(91, 6, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L107_:;
  // i97 = force? i96
  Rsh_Fir_reg_i97_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i96_);
  // ____2 = ldf `[[<-` in base
  Rsh_Fir_reg_____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r34 = dyn ____2(l10, dx13, i97)
  SEXP Rsh_Fir_array_args101[3];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args101[2] = Rsh_Fir_reg_i97_;
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____2_, 3, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L18(i90, i91, dx15, r34)
  // L18(i90, i91, dx15, r34)
  Rsh_Fir_reg_i94_ = Rsh_Fir_reg_i90_;
  Rsh_Fir_reg_i95_ = Rsh_Fir_reg_i91_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r34_;
  goto L18_;

D25_:;
  // deopt 95 [i78, i79, i98]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i78_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_i79_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_i98_;
  Rsh_Fir_deopt(95, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L108_:;
  // i99 = force? i98
  Rsh_Fir_reg_i99_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i98_);
  // checkMissing(i99)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_i99_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // r35 = `+`(i99, 1)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_i99_;
  Rsh_Fir_array_args103[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // st i = r35
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // goto L8(i78, i79)
  // L8(i78, i79)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i78_;
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i79_;
  goto L8_;

L110_:;
  // telt10 = ld telt
  Rsh_Fir_reg_telt10_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L112() else D26()
  // L112()
  goto L112_;

L111_:;
  // r36 = dyn base7(<sym telt>)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L21(i7, r36)
  // L21(i7, r36)
  Rsh_Fir_reg_i104_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L21_;

D26_:;
  // deopt 105 [i7, telt10]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_telt10_;
  Rsh_Fir_deopt(105, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L112_:;
  // telt11 = force? telt10
  Rsh_Fir_reg_telt11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_telt10_);
  // checkMissing(telt11)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_telt11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // is_vector = ldf `is.vector` in base
  Rsh_Fir_reg_is_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r38 = dyn is_vector(telt11, "any")
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_telt11_;
  Rsh_Fir_array_args106[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_vector, 2, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L113() else D27()
  // L113()
  goto L113_;

D27_:;
  // deopt 109 [i7, r38]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(109, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L113_:;
  // goto L21(i7, r38)
  // L21(i7, r38)
  Rsh_Fir_reg_i104_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L21_;

L114_:;
  // telt12 = ld telt
  Rsh_Fir_reg_telt12_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L115() else D28()
  // L115()
  goto L115_;

D28_:;
  // deopt 110 [i104, telt12]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i104_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_telt12_;
  Rsh_Fir_deopt(110, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L115_:;
  // telt13 = force? telt12
  Rsh_Fir_reg_telt13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_telt12_);
  // checkMissing(telt13)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_telt13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // l11 = ld ivec
  Rsh_Fir_reg_l11_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // c22 = `is.object`(l11)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // if c22 then L116() else L117(i104, telt13, l11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L116()
    goto L116_;
  } else {
  // L117(i104, telt13, l11)
    Rsh_Fir_reg_i108_ = Rsh_Fir_reg_i104_;
    Rsh_Fir_reg_telt15_ = Rsh_Fir_reg_telt13_;
    Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l11_;
    goto L117_;
  }

L116_:;
  // dr12 = tryDispatchBuiltin.0("[[<-", l11, telt13)
  SEXP Rsh_Fir_array_args109[3];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args109[2] = Rsh_Fir_reg_telt13_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args109);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // if dc6 then L118() else L117(i104, telt13, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L118()
    goto L118_;
  } else {
  // L117(i104, telt13, dr12)
    Rsh_Fir_reg_i108_ = Rsh_Fir_reg_i104_;
    Rsh_Fir_reg_telt15_ = Rsh_Fir_reg_telt13_;
    Rsh_Fir_reg_l13_ = Rsh_Fir_reg_dr12_;
    goto L117_;
  }

L117_:;
  // i111 = ld i
  Rsh_Fir_reg_i111_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L119() else D29()
  // L119()
  goto L119_;

L118_:;
  // dx20 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // goto L23(i104, dx20)
  // L23(i104, dx20)
  Rsh_Fir_reg_i110_ = Rsh_Fir_reg_i104_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L23_;

D29_:;
  // deopt 113 [i108, telt15, l13, telt13, i111]
  SEXP Rsh_Fir_array_deopt_stack29[5];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i108_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_telt15_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack29[3] = Rsh_Fir_reg_telt13_;
  Rsh_Fir_array_deopt_stack29[4] = Rsh_Fir_reg_i111_;
  Rsh_Fir_deopt(113, 5, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L119_:;
  // i112 = force? i111
  Rsh_Fir_reg_i112_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i111_);
  // ____3 = ldf `[[<-` in base
  Rsh_Fir_reg_____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r39 = dyn ____3(l13, telt13, i112)
  SEXP Rsh_Fir_array_args112[3];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_telt13_;
  Rsh_Fir_array_args112[2] = Rsh_Fir_reg_i112_;
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____3_, 3, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L23(i108, r39)
  // L23(i108, r39)
  Rsh_Fir_reg_i110_ = Rsh_Fir_reg_i108_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r39_;
  goto L23_;

D30_:;
  // deopt 117 [i110, list_names1]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i110_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_list_names1_;
  Rsh_Fir_deopt(117, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L120_:;
  // list_names2 = force? list_names1
  Rsh_Fir_reg_list_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list_names1_);
  // checkMissing(list_names2)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_list_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // c23 = `is.object`(list_names2)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_list_names2_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if c23 then L121() else L122(i110, list_names2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L121()
    goto L121_;
  } else {
  // L122(i110, list_names2)
    Rsh_Fir_reg_i114_ = Rsh_Fir_reg_i110_;
    Rsh_Fir_reg_list_names4_ = Rsh_Fir_reg_list_names2_;
    goto L122_;
  }

L121_:;
  // dr14 = tryDispatchBuiltin.1("[[", list_names2)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_list_names2_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args115);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // if dc7 then L123() else L122(i110, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L123()
    goto L123_;
  } else {
  // L122(i110, dr14)
    Rsh_Fir_reg_i114_ = Rsh_Fir_reg_i110_;
    Rsh_Fir_reg_list_names4_ = Rsh_Fir_reg_dr14_;
    goto L122_;
  }

L122_:;
  // k2 = ld k
  Rsh_Fir_reg_k2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L124() else D31()
  // L124()
  goto L124_;

L123_:;
  // dx22 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // goto L24(i110, dx22)
  // L24(i110, dx22)
  Rsh_Fir_reg_i116_ = Rsh_Fir_reg_i110_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L24_;

D31_:;
  // deopt 119 [i114, list_names4, k2]
  SEXP Rsh_Fir_array_deopt_stack31[3];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i114_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_list_names4_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_k2_;
  Rsh_Fir_deopt(119, 3, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L124_:;
  // k3 = force? k2
  Rsh_Fir_reg_k3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k2_);
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r40 = dyn __3(list_names4, k3)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_list_names4_;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_k3_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L24(i114, r40)
  // L24(i114, r40)
  Rsh_Fir_reg_i116_ = Rsh_Fir_reg_i114_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r40_;
  goto L24_;

L125_:;
  // dr16 = tryDispatchBuiltin.0("[[<-", l14, dx23)
  SEXP Rsh_Fir_array_args119[3];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args119[2] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args119);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // if dc8 then L127() else L126(i116, dx23, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L127()
    goto L127_;
  } else {
  // L126(i116, dx23, dr16)
    Rsh_Fir_reg_i118_ = Rsh_Fir_reg_i116_;
    Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx23_;
    Rsh_Fir_reg_l16_ = Rsh_Fir_reg_dr16_;
    goto L126_;
  }

L126_:;
  // i121 = ld i
  Rsh_Fir_reg_i121_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L128() else D32()
  // L128()
  goto L128_;

L127_:;
  // dx27 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // goto L25(i116, dx27)
  // L25(i116, dx27)
  Rsh_Fir_reg_i120_ = Rsh_Fir_reg_i116_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx27_;
  goto L25_;

D32_:;
  // deopt 123 [i118, dx25, l16, dx23, i121]
  SEXP Rsh_Fir_array_deopt_stack32[5];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i118_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_deopt_stack32[3] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_deopt_stack32[4] = Rsh_Fir_reg_i121_;
  Rsh_Fir_deopt(123, 5, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L128_:;
  // i122 = force? i121
  Rsh_Fir_reg_i122_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i121_);
  // ____4 = ldf `[[<-` in base
  Rsh_Fir_reg_____4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r41 = dyn ____4(l16, dx23, i122)
  SEXP Rsh_Fir_array_args122[3];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_args122[2] = Rsh_Fir_reg_i122_;
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____4_, 3, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L25(i118, r41)
  // L25(i118, r41)
  Rsh_Fir_reg_i120_ = Rsh_Fir_reg_i118_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r41_;
  goto L25_;

D33_:;
  // deopt 127 [i120, i123]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i120_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_i123_;
  Rsh_Fir_deopt(127, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L129_:;
  // i124 = force? i123
  Rsh_Fir_reg_i124_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i123_);
  // checkMissing(i124)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_i124_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // r42 = `+`(i124, 1.0)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_i124_;
  Rsh_Fir_array_args124[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // st i = r42
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r42_, RHO);
  (void)(Rsh_Fir_reg_r42_);
  // goto L20(i120)
  // L20(i120)
  Rsh_Fir_reg_i100_ = Rsh_Fir_reg_i120_;
  goto L20_;

L131_:;
  // telt18 = ld telt
  Rsh_Fir_reg_telt18_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L133() else D34()
  // L133()
  goto L133_;

L132_:;
  // r43 = dyn base8(<sym telt>)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L26(i104, r43)
  // L26(i104, r43)
  Rsh_Fir_reg_i127_ = Rsh_Fir_reg_i104_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L26_;

D34_:;
  // deopt 134 [i104, telt18]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_i104_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_telt18_;
  Rsh_Fir_deopt(134, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L133_:;
  // telt19 = force? telt18
  Rsh_Fir_reg_telt19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_telt18_);
  // checkMissing(telt19)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_telt19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r45 = dyn is_matrix(telt19)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_telt19_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L134() else D35()
  // L134()
  goto L134_;

D35_:;
  // deopt 137 [i104, r45]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i104_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(137, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L134_:;
  // goto L26(i104, r45)
  // L26(i104, r45)
  Rsh_Fir_reg_i127_ = Rsh_Fir_reg_i104_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r45_;
  goto L26_;

L135_:;
  // sym9 = ldf dimnames
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base9 = ldf dimnames in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args128);
  // if guard9 then L136() else L137()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L136()
    goto L136_;
  } else {
  // L137()
    goto L137_;
  }

L136_:;
  // telt20 = ld telt
  Rsh_Fir_reg_telt20_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L138() else D36()
  // L138()
  goto L138_;

L137_:;
  // r46 = dyn base9(<sym telt>)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L28(i127, r46)
  // L28(i127, r46)
  Rsh_Fir_reg_i132_ = Rsh_Fir_reg_i127_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L28_;

D36_:;
  // deopt 140 [i127, telt20]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_i127_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_telt20_;
  Rsh_Fir_deopt(140, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L138_:;
  // telt21 = force? telt20
  Rsh_Fir_reg_telt21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_telt20_);
  // checkMissing(telt21)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_telt21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r48 = dyn dimnames(telt21)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_telt21_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L139() else D37()
  // L139()
  goto L139_;

D37_:;
  // deopt 143 [i127, r48]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_i127_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(143, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L139_:;
  // goto L28(i127, r48)
  // L28(i127, r48)
  Rsh_Fir_reg_i132_ = Rsh_Fir_reg_i127_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L28_;

L140_:;
  // dr18 = tryDispatchBuiltin.1("[[", r47)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args132);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // if dc9 then L142() else L141(i132, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L142()
    goto L142_;
  } else {
  // L141(i132, dr18)
    Rsh_Fir_reg_i134_ = Rsh_Fir_reg_i132_;
    Rsh_Fir_reg_r50_ = Rsh_Fir_reg_dr18_;
    goto L141_;
  }

L141_:;
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r51 = dyn __4(r50, 2)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_args134[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L29(i134, r51)
  // L29(i134, r51)
  Rsh_Fir_reg_i136_ = Rsh_Fir_reg_i134_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r51_;
  goto L29_;

L142_:;
  // dx30 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // goto L29(i132, dx30)
  // L29(i132, dx30)
  Rsh_Fir_reg_i136_ = Rsh_Fir_reg_i132_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L29_;

L143_:;
  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L145() else D38()
  // L145()
  goto L145_;

L144_:;
  // r52 = dyn base10(<lang ncol(telt)>)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args136, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L30(i136, r52)
  // L30(i136, r52)
  Rsh_Fir_reg_i139_ = Rsh_Fir_reg_i136_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L30_;

D38_:;
  // deopt 150 [i136]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_i136_;
  Rsh_Fir_deopt(150, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L145_:;
  // p1 = prom<V +>{
  //   telt22 = ld telt;
  //   telt23 = force? telt22;
  //   checkMissing(telt23);
  //   return telt23;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner131594683_1, CCP, RHO);
  // r55 = dyn ncol(p1)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L146() else D39()
  // L146()
  goto L146_;

D39_:;
  // deopt 152 [i136, r55]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_i136_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(152, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L146_:;
  // r56 = seq_len(r55)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // goto L30(i136, r56)
  // L30(i136, r56)
  Rsh_Fir_reg_i139_ = Rsh_Fir_reg_i136_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r56_;
  goto L30_;

L147_:;
  // goto L20(i141)
  // L20(i141)
  Rsh_Fir_reg_i100_ = Rsh_Fir_reg_i141_;
  goto L20_;

D40_:;
  // deopt 154 [i141, i143, telt24]
  SEXP Rsh_Fir_array_deopt_stack40[3];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_i141_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_i143_;
  Rsh_Fir_array_deopt_stack40[2] = Rsh_Fir_reg_telt24_;
  Rsh_Fir_deopt(154, 3, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L148_:;
  // telt25 = force? telt24
  Rsh_Fir_reg_telt25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_telt24_);
  // checkMissing(telt25)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_telt25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty()));
  // c28 = `is.object`(telt25)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_telt25_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // if c28 then L149() else L150(i141, i143, telt25)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L149()
    goto L149_;
  } else {
  // L150(i141, i143, telt25)
    Rsh_Fir_reg_i150_ = Rsh_Fir_reg_i141_;
    Rsh_Fir_reg_i151_ = Rsh_Fir_reg_i143_;
    Rsh_Fir_reg_telt27_ = Rsh_Fir_reg_telt25_;
    goto L150_;
  }

L149_:;
  // dr20 = tryDispatchBuiltin.1("[", telt25)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_telt25_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args142);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // if dc10 then L151() else L150(i141, i143, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L151()
    goto L151_;
  } else {
  // L150(i141, i143, dr20)
    Rsh_Fir_reg_i150_ = Rsh_Fir_reg_i141_;
    Rsh_Fir_reg_i151_ = Rsh_Fir_reg_i143_;
    Rsh_Fir_reg_telt27_ = Rsh_Fir_reg_dr20_;
    goto L150_;
  }

L150_:;
  // j6 = ld j
  Rsh_Fir_reg_j6_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L152() else D41()
  // L152()
  goto L152_;

L151_:;
  // dx32 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx32_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // goto L32(i141, i143, dx32)
  // L32(i141, i143, dx32)
  Rsh_Fir_reg_i154_ = Rsh_Fir_reg_i141_;
  Rsh_Fir_reg_i155_ = Rsh_Fir_reg_i143_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx32_;
  goto L32_;

D41_:;
  // deopt 157 [i150, i151, telt27, j6]
  SEXP Rsh_Fir_array_deopt_stack41[4];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_i150_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_i151_;
  Rsh_Fir_array_deopt_stack41[2] = Rsh_Fir_reg_telt27_;
  Rsh_Fir_array_deopt_stack41[3] = Rsh_Fir_reg_j6_;
  Rsh_Fir_deopt(157, 4, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L152_:;
  // j7 = force? j6
  Rsh_Fir_reg_j7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j6_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r57 = dyn __5(telt25, <missing>, j7)
  SEXP Rsh_Fir_array_args145[3];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_telt25_;
  Rsh_Fir_array_args145[1] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args145[2] = Rsh_Fir_reg_j7_;
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 3, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L32(i150, i151, r57)
  // L32(i150, i151, r57)
  Rsh_Fir_reg_i154_ = Rsh_Fir_reg_i150_;
  Rsh_Fir_reg_i155_ = Rsh_Fir_reg_i151_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_r57_;
  goto L32_;

L153_:;
  // dr22 = tryDispatchBuiltin.0("[[<-", l18, dx33)
  SEXP Rsh_Fir_array_args146[3];
  Rsh_Fir_array_args146[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args146[1] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_args146[2] = Rsh_Fir_reg_dx33_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args146);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // if dc11 then L155() else L154(i154, i155, dx33, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L155()
    goto L155_;
  } else {
  // L154(i154, i155, dx33, dr22)
    Rsh_Fir_reg_i158_ = Rsh_Fir_reg_i154_;
    Rsh_Fir_reg_i159_ = Rsh_Fir_reg_i155_;
    Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx33_;
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_dr22_;
    goto L154_;
  }

L154_:;
  // i164 = ld i
  Rsh_Fir_reg_i164_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L156() else D42()
  // L156()
  goto L156_;

L155_:;
  // dx37 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // goto L33(i154, i155, dx37)
  // L33(i154, i155, dx37)
  Rsh_Fir_reg_i162_ = Rsh_Fir_reg_i154_;
  Rsh_Fir_reg_i163_ = Rsh_Fir_reg_i155_;
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx37_;
  goto L33_;

D42_:;
  // deopt 162 [i158, i159, dx35, l20, dx33, i164]
  SEXP Rsh_Fir_array_deopt_stack42[6];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_i158_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_i159_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_dx35_;
  Rsh_Fir_array_deopt_stack42[3] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_deopt_stack42[4] = Rsh_Fir_reg_dx33_;
  Rsh_Fir_array_deopt_stack42[5] = Rsh_Fir_reg_i164_;
  Rsh_Fir_deopt(162, 6, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L156_:;
  // i165 = force? i164
  Rsh_Fir_reg_i165_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i164_);
  // ____5 = ldf `[[<-` in base
  Rsh_Fir_reg_____5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r58 = dyn ____5(l20, dx33, i165)
  SEXP Rsh_Fir_array_args149[3];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_dx33_;
  Rsh_Fir_array_args149[2] = Rsh_Fir_reg_i165_;
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____5_, 3, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L33(i158, i159, r58)
  // L33(i158, i159, r58)
  Rsh_Fir_reg_i162_ = Rsh_Fir_reg_i158_;
  Rsh_Fir_reg_i163_ = Rsh_Fir_reg_i159_;
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_r58_;
  goto L33_;

L157_:;
  // y10 = ld y
  Rsh_Fir_reg_y10_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L159() else D43()
  // L159()
  goto L159_;

L158_:;
  // r59 = dyn base11(<sym y>)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L34(i162, i163, r59)
  // L34(i162, i163, r59)
  Rsh_Fir_reg_i170_ = Rsh_Fir_reg_i162_;
  Rsh_Fir_reg_i171_ = Rsh_Fir_reg_i163_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L34_;

D43_:;
  // deopt 167 [i162, i163, y10]
  SEXP Rsh_Fir_array_deopt_stack43[3];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_i162_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_i163_;
  Rsh_Fir_array_deopt_stack43[2] = Rsh_Fir_reg_y10_;
  Rsh_Fir_deopt(167, 3, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L159_:;
  // y11 = force? y10
  Rsh_Fir_reg_y11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y10_);
  // checkMissing(y11)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_y11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty()));
  // c30 = `==`(y11, NULL)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_y11_;
  Rsh_Fir_array_args152[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty());
  // goto L34(i162, i163, c30)
  // L34(i162, i163, c30)
  Rsh_Fir_reg_i170_ = Rsh_Fir_reg_i162_;
  Rsh_Fir_reg_i171_ = Rsh_Fir_reg_i163_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_c30_;
  goto L34_;

L160_:;
  // y12 = ld y
  Rsh_Fir_reg_y12_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L161() else D44()
  // L161()
  goto L161_;

D44_:;
  // deopt 170 [i170, i171, c31, y12]
  SEXP Rsh_Fir_array_deopt_stack44[4];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_i170_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_i171_;
  Rsh_Fir_array_deopt_stack44[2] = Rsh_Fir_reg_c31_;
  Rsh_Fir_array_deopt_stack44[3] = Rsh_Fir_reg_y12_;
  Rsh_Fir_deopt(170, 4, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L161_:;
  // y13 = force? y12
  Rsh_Fir_reg_y13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y12_);
  // checkMissing(y13)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_y13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty()));
  // c34 = `is.object`(y13)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_y13_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // if c34 then L162() else L163(i170, i171, c31, y13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L162()
    goto L162_;
  } else {
  // L163(i170, i171, c31, y13)
    Rsh_Fir_reg_i178_ = Rsh_Fir_reg_i170_;
    Rsh_Fir_reg_i179_ = Rsh_Fir_reg_i171_;
    Rsh_Fir_reg_c36_ = Rsh_Fir_reg_c31_;
    Rsh_Fir_reg_y15_ = Rsh_Fir_reg_y13_;
    goto L163_;
  }

L162_:;
  // dr24 = tryDispatchBuiltin.1("[", y13)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args155[1] = Rsh_Fir_reg_y13_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args155);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty());
  // if dc12 then L164() else L163(i170, i171, c31, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L164()
    goto L164_;
  } else {
  // L163(i170, i171, c31, dr24)
    Rsh_Fir_reg_i178_ = Rsh_Fir_reg_i170_;
    Rsh_Fir_reg_i179_ = Rsh_Fir_reg_i171_;
    Rsh_Fir_reg_c36_ = Rsh_Fir_reg_c31_;
    Rsh_Fir_reg_y15_ = Rsh_Fir_reg_dr24_;
    goto L163_;
  }

L163_:;
  // j8 = ld j
  Rsh_Fir_reg_j8_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L165() else D45()
  // L165()
  goto L165_;

L164_:;
  // dx40 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx40_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // goto L36(i170, i171, c31, dx40)
  // L36(i170, i171, c31, dx40)
  Rsh_Fir_reg_i182_ = Rsh_Fir_reg_i170_;
  Rsh_Fir_reg_i183_ = Rsh_Fir_reg_i171_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_reg_c31_;
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx40_;
  goto L36_;

D45_:;
  // deopt 172 [i178, i179, c36, y15, j8]
  SEXP Rsh_Fir_array_deopt_stack45[5];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_i178_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_i179_;
  Rsh_Fir_array_deopt_stack45[2] = Rsh_Fir_reg_c36_;
  Rsh_Fir_array_deopt_stack45[3] = Rsh_Fir_reg_y15_;
  Rsh_Fir_array_deopt_stack45[4] = Rsh_Fir_reg_j8_;
  Rsh_Fir_deopt(172, 5, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L165_:;
  // j9 = force? j8
  Rsh_Fir_reg_j9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j8_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r61 = dyn __6(y15, j9)
  SEXP Rsh_Fir_array_args158[2];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_y15_;
  Rsh_Fir_array_args158[1] = Rsh_Fir_reg_j9_;
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L36(i178, i179, c36, r61)
  // L36(i178, i179, c36, r61)
  Rsh_Fir_reg_i182_ = Rsh_Fir_reg_i178_;
  Rsh_Fir_reg_i183_ = Rsh_Fir_reg_i179_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_reg_c36_;
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_r61_;
  goto L36_;

L167_:;
  // paste1 = ldf paste0
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L168() else D46()
  // L168()
  goto L168_;

D46_:;
  // deopt 179 [i172, i173]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_i172_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_i173_;
  Rsh_Fir_deopt(179, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L168_:;
  // p2 = prom<V +>{
  //   i190 = ld i;
  //   i191 = force? i190;
  //   checkMissing(i191);
  //   return i191;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner131594683_2, CCP, RHO);
  // r64 = dyn paste1("var", p2)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args160[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 2, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L169() else D47()
  // L169()
  goto L169_;

D47_:;
  // deopt 182 [i172, i173, r64]
  SEXP Rsh_Fir_array_deopt_stack47[3];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_i172_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_i173_;
  Rsh_Fir_array_deopt_stack47[2] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(182, 3, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L169_:;
  // l21 = ld inames
  Rsh_Fir_reg_l21_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // c43 = `is.object`(l21)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_l21_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty());
  // if c43 then L170() else L171(i172, i173, r64, l21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L170()
    goto L170_;
  } else {
  // L171(i172, i173, r64, l21)
    Rsh_Fir_reg_i194_ = Rsh_Fir_reg_i172_;
    Rsh_Fir_reg_i195_ = Rsh_Fir_reg_i173_;
    Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r64_;
    Rsh_Fir_reg_l23_ = Rsh_Fir_reg_l21_;
    goto L171_;
  }

L170_:;
  // dr26 = tryDispatchBuiltin.0("[[<-", l21, r64)
  SEXP Rsh_Fir_array_args162[3];
  Rsh_Fir_array_args162[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args162[1] = Rsh_Fir_reg_l21_;
  Rsh_Fir_array_args162[2] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args162);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // if dc13 then L172() else L171(i172, i173, r64, dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L172()
    goto L172_;
  } else {
  // L171(i172, i173, r64, dr26)
    Rsh_Fir_reg_i194_ = Rsh_Fir_reg_i172_;
    Rsh_Fir_reg_i195_ = Rsh_Fir_reg_i173_;
    Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r64_;
    Rsh_Fir_reg_l23_ = Rsh_Fir_reg_dr26_;
    goto L171_;
  }

L171_:;
  // i200 = ld i
  Rsh_Fir_reg_i200_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L173() else D48()
  // L173()
  goto L173_;

L172_:;
  // dx42 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty());
  // goto L38(i172, i173, r64, dx42)
  // L38(i172, i173, r64, dx42)
  Rsh_Fir_reg_i198_ = Rsh_Fir_reg_i172_;
  Rsh_Fir_reg_i199_ = Rsh_Fir_reg_i173_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx42_;
  goto L38_;

D48_:;
  // deopt 184 [i194, i195, r66, l23, r64, i200]
  SEXP Rsh_Fir_array_deopt_stack48[6];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_i194_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_i195_;
  Rsh_Fir_array_deopt_stack48[2] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_deopt_stack48[3] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_deopt_stack48[4] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_deopt_stack48[5] = Rsh_Fir_reg_i200_;
  Rsh_Fir_deopt(184, 6, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L173_:;
  // i201 = force? i200
  Rsh_Fir_reg_i201_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i200_);
  // ____6 = ldf `[[<-` in base
  Rsh_Fir_reg_____6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r69 = dyn ____6(l23, r64, i201)
  SEXP Rsh_Fir_array_args165[3];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_args165[2] = Rsh_Fir_reg_i201_;
  SEXP Rsh_Fir_array_arg_names36[3];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____6_, 3, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L38(i194, i195, r66, r69)
  // L38(i194, i195, r66, r69)
  Rsh_Fir_reg_i198_ = Rsh_Fir_reg_i194_;
  Rsh_Fir_reg_i199_ = Rsh_Fir_reg_i195_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_r69_;
  goto L38_;

D49_:;
  // deopt 188 [i172, i173, y16]
  SEXP Rsh_Fir_array_deopt_stack49[3];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_i172_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_i173_;
  Rsh_Fir_array_deopt_stack49[2] = Rsh_Fir_reg_y16_;
  Rsh_Fir_deopt(188, 3, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L175_:;
  // y17 = force? y16
  Rsh_Fir_reg_y17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y16_);
  // checkMissing(y17)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_y17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty()));
  // c44 = `is.object`(y17)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_y17_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty());
  // if c44 then L176() else L177(i172, i173, y17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c44_)) {
  // L176()
    goto L176_;
  } else {
  // L177(i172, i173, y17)
    Rsh_Fir_reg_i206_ = Rsh_Fir_reg_i172_;
    Rsh_Fir_reg_i207_ = Rsh_Fir_reg_i173_;
    Rsh_Fir_reg_y19_ = Rsh_Fir_reg_y17_;
    goto L177_;
  }

L176_:;
  // dr28 = tryDispatchBuiltin.1("[", y17)
  SEXP Rsh_Fir_array_args168[2];
  Rsh_Fir_array_args168[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args168[1] = Rsh_Fir_reg_y17_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args168);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // if dc14 then L178() else L177(i172, i173, dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L178()
    goto L178_;
  } else {
  // L177(i172, i173, dr28)
    Rsh_Fir_reg_i206_ = Rsh_Fir_reg_i172_;
    Rsh_Fir_reg_i207_ = Rsh_Fir_reg_i173_;
    Rsh_Fir_reg_y19_ = Rsh_Fir_reg_dr28_;
    goto L177_;
  }

L177_:;
  // j10 = ld j
  Rsh_Fir_reg_j10_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L179() else D50()
  // L179()
  goto L179_;

L178_:;
  // dx44 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx44_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty());
  // goto L40(i172, i173, dx44)
  // L40(i172, i173, dx44)
  Rsh_Fir_reg_i210_ = Rsh_Fir_reg_i172_;
  Rsh_Fir_reg_i211_ = Rsh_Fir_reg_i173_;
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_dx44_;
  goto L40_;

D50_:;
  // deopt 190 [i206, i207, y19, j10]
  SEXP Rsh_Fir_array_deopt_stack50[4];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_i206_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_i207_;
  Rsh_Fir_array_deopt_stack50[2] = Rsh_Fir_reg_y19_;
  Rsh_Fir_array_deopt_stack50[3] = Rsh_Fir_reg_j10_;
  Rsh_Fir_deopt(190, 4, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L179_:;
  // j11 = force? j10
  Rsh_Fir_reg_j11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j10_);
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r71 = dyn __7(y19, j11)
  SEXP Rsh_Fir_array_args171[2];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_y19_;
  Rsh_Fir_array_args171[1] = Rsh_Fir_reg_j11_;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args171, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L40(i206, i207, r71)
  // L40(i206, i207, r71)
  Rsh_Fir_reg_i210_ = Rsh_Fir_reg_i206_;
  Rsh_Fir_reg_i211_ = Rsh_Fir_reg_i207_;
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_r71_;
  goto L40_;

L180_:;
  // dr30 = tryDispatchBuiltin.0("[[<-", l24, dx45)
  SEXP Rsh_Fir_array_args172[3];
  Rsh_Fir_array_args172[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args172[1] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_args172[2] = Rsh_Fir_reg_dx45_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args172);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // if dc15 then L182() else L181(i210, i211, dx45, dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L182()
    goto L182_;
  } else {
  // L181(i210, i211, dx45, dr30)
    Rsh_Fir_reg_i214_ = Rsh_Fir_reg_i210_;
    Rsh_Fir_reg_i215_ = Rsh_Fir_reg_i211_;
    Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_dx45_;
    Rsh_Fir_reg_l26_ = Rsh_Fir_reg_dr30_;
    goto L181_;
  }

L181_:;
  // i220 = ld i
  Rsh_Fir_reg_i220_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L183() else D51()
  // L183()
  goto L183_;

L182_:;
  // dx49 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx49_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty());
  // goto L41(i210, i211, dx45, dx49)
  // L41(i210, i211, dx45, dx49)
  Rsh_Fir_reg_i218_ = Rsh_Fir_reg_i210_;
  Rsh_Fir_reg_i219_ = Rsh_Fir_reg_i211_;
  Rsh_Fir_reg_dx50_ = Rsh_Fir_reg_dx45_;
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_dx49_;
  goto L41_;

D51_:;
  // deopt 194 [i214, i215, dx47, l26, dx45, i220]
  SEXP Rsh_Fir_array_deopt_stack51[6];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_i214_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_i215_;
  Rsh_Fir_array_deopt_stack51[2] = Rsh_Fir_reg_dx47_;
  Rsh_Fir_array_deopt_stack51[3] = Rsh_Fir_reg_l26_;
  Rsh_Fir_array_deopt_stack51[4] = Rsh_Fir_reg_dx45_;
  Rsh_Fir_array_deopt_stack51[5] = Rsh_Fir_reg_i220_;
  Rsh_Fir_deopt(194, 6, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L183_:;
  // i221 = force? i220
  Rsh_Fir_reg_i221_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i220_);
  // ____7 = ldf `[[<-` in base
  Rsh_Fir_reg_____7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r72 = dyn ____7(l26, dx45, i221)
  SEXP Rsh_Fir_array_args175[3];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_l26_;
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_dx45_;
  Rsh_Fir_array_args175[2] = Rsh_Fir_reg_i221_;
  SEXP Rsh_Fir_array_arg_names38[3];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____7_, 3, Rsh_Fir_array_args175, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L41(i214, i215, dx47, r72)
  // L41(i214, i215, dx47, r72)
  Rsh_Fir_reg_i218_ = Rsh_Fir_reg_i214_;
  Rsh_Fir_reg_i219_ = Rsh_Fir_reg_i215_;
  Rsh_Fir_reg_dx50_ = Rsh_Fir_reg_dx47_;
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_r72_;
  goto L41_;

D52_:;
  // deopt 198 [i202, i203, i222]
  SEXP Rsh_Fir_array_deopt_stack52[3];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_i202_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_i203_;
  Rsh_Fir_array_deopt_stack52[2] = Rsh_Fir_reg_i222_;
  Rsh_Fir_deopt(198, 3, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L184_:;
  // i223 = force? i222
  Rsh_Fir_reg_i223_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i222_);
  // checkMissing(i223)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_i223_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty()));
  // r73 = `+`(i223, 1)
  SEXP Rsh_Fir_array_args177[2];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_i223_;
  Rsh_Fir_array_args177[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // st i = r73
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r73_, RHO);
  (void)(Rsh_Fir_reg_r73_);
  // goto L31(i202, i203)
  // L31(i202, i203)
  Rsh_Fir_reg_i141_ = Rsh_Fir_reg_i202_;
  Rsh_Fir_reg_i142_ = Rsh_Fir_reg_i203_;
  goto L31_;

D53_:;
  // deopt 207 [i127]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_i127_;
  Rsh_Fir_deopt(207, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L186_:;
  // r74 = dyn stop("wrong argument to 'dataentry'")
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args178, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L187() else D54()
  // L187()
  goto L187_;

D54_:;
  // deopt 209 [i127, r74]
  SEXP Rsh_Fir_array_deopt_stack54[2];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_i127_;
  Rsh_Fir_array_deopt_stack54[1] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(209, 2, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L187_:;
  // goto L20(i127)
  // L20(i127)
  Rsh_Fir_reg_i100_ = Rsh_Fir_reg_i127_;
  goto L20_;

D55_:;
  // deopt 213 [inames]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_inames;
  Rsh_Fir_deopt(213, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L188_:;
  // inames1 = force? inames
  Rsh_Fir_reg_inames1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inames);
  // checkMissing(inames1)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_inames1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty()));
  // l27 = ld ivec
  Rsh_Fir_reg_l27_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // check L189() else D56()
  // L189()
  goto L189_;

D56_:;
  // deopt 216 [inames1, l27, inames1]
  SEXP Rsh_Fir_array_deopt_stack56[3];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_inames1_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_l27_;
  Rsh_Fir_array_deopt_stack56[2] = Rsh_Fir_reg_inames1_;
  Rsh_Fir_deopt(216, 3, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L189_:;
  // r75 = dyn names__(l27, NULL, inames1)
  SEXP Rsh_Fir_array_args180[3];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_l27_;
  Rsh_Fir_array_args180[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args180[2] = Rsh_Fir_reg_inames1_;
  SEXP Rsh_Fir_array_arg_names40[3];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_array_arg_names40[2] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args180, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L190() else D57()
  // L190()
  goto L190_;

D57_:;
  // deopt 218 [inames1, r75]
  SEXP Rsh_Fir_array_deopt_stack57[2];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_inames1_;
  Rsh_Fir_array_deopt_stack57[1] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(218, 2, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L190_:;
  // st ivec = r75
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r75_, RHO);
  (void)(Rsh_Fir_reg_r75_);
  // ivec = ld ivec
  Rsh_Fir_reg_ivec = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L191() else D58()
  // L191()
  goto L191_;

D58_:;
  // deopt 220 [ivec]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_ivec;
  Rsh_Fir_deopt(220, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L191_:;
  // ivec1 = force? ivec
  Rsh_Fir_reg_ivec1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ivec);
  // checkMissing(ivec1)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_ivec1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ivec1
  return Rsh_Fir_reg_ivec1_;
}
SEXP Rsh_Fir_user_promise_inner131594683_(SEXP CCP, SEXP RHO) {
  // i66 = ld i
  Rsh_Fir_reg_i66_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // i67 = force? i66
  Rsh_Fir_reg_i67_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i66_);
  // checkMissing(i67)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_i67_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // return i67
  return Rsh_Fir_reg_i67_;
}
SEXP Rsh_Fir_user_promise_inner131594683_1(SEXP CCP, SEXP RHO) {
  // telt22 = ld telt
  Rsh_Fir_reg_telt22_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // telt23 = force? telt22
  Rsh_Fir_reg_telt23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_telt22_);
  // checkMissing(telt23)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_telt23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty()));
  // return telt23
  return Rsh_Fir_reg_telt23_;
}
SEXP Rsh_Fir_user_promise_inner131594683_2(SEXP CCP, SEXP RHO) {
  // i190 = ld i
  Rsh_Fir_reg_i190_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // i191 = force? i190
  Rsh_Fir_reg_i191_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i190_);
  // checkMissing(i191)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_i191_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // return i191
  return Rsh_Fir_reg_i191_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
