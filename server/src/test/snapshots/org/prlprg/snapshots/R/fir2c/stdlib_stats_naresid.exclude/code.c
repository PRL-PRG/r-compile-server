#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner785164255_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner785164255_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner785164255_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner785164255_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner785164255
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner785164255_, RHO, CCP);
  // st `naresid.exclude` = r
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
SEXP Rsh_Fir_user_function_inner785164255_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner785164255 dynamic dispatch ([omit, x, `...`])

  return Rsh_Fir_user_version_inner785164255_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner785164255_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner785164255 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner785164255/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_omit;  // omit
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_omit1_;  // omit1
  SEXP Rsh_Fir_reg_omit2_;  // omit2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_omit3_;  // omit3
  SEXP Rsh_Fir_reg_omit4_;  // omit4
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_NROW;  // NROW
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_omit5_;  // omit5
  SEXP Rsh_Fir_reg_omit6_;  // omit6
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_rep_int;  // rep_int
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_omit7_;  // omit7
  SEXP Rsh_Fir_reg_omit8_;  // omit8
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_is_matrix;  // is_matrix
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_keep;  // keep
  SEXP Rsh_Fir_reg_keep1_;  // keep1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_rownames;  // rownames
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_temp;  // temp
  SEXP Rsh_Fir_reg_temp1_;  // temp1
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_omit9_;  // omit9
  SEXP Rsh_Fir_reg_omit10_;  // omit10
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_omit11_;  // omit11
  SEXP Rsh_Fir_reg_omit12_;  // omit12
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_temp2_;  // temp2
  SEXP Rsh_Fir_reg_temp3_;  // temp3
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_rownames__;  // rownames__
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_temp4_;  // temp4
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_is_array;  // is_array
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_dim;  // dim
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_x19_;  // x19
  SEXP Rsh_Fir_reg_x20_;  // x20
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_x22_;  // x22
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_keep2_;  // keep2
  SEXP Rsh_Fir_reg_keep3_;  // keep3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_x23_;  // x23
  SEXP Rsh_Fir_reg_x24_;  // x24
  SEXP Rsh_Fir_reg_dimnames;  // dimnames
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_temp6_;  // temp6
  SEXP Rsh_Fir_reg_temp7_;  // temp7
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_omit13_;  // omit13
  SEXP Rsh_Fir_reg_omit14_;  // omit14
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_omit15_;  // omit15
  SEXP Rsh_Fir_reg_omit16_;  // omit16
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_temp8_;  // temp8
  SEXP Rsh_Fir_reg_temp9_;  // temp9
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_dimnames1_;  // dimnames1
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_temp11_;  // temp11
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_temp13_;  // temp13
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_dimnames__;  // dimnames__
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_temp14_;  // temp14
  SEXP Rsh_Fir_reg_x25_;  // x25
  SEXP Rsh_Fir_reg_x26_;  // x26
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_x28_;  // x28
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_keep4_;  // keep4
  SEXP Rsh_Fir_reg_keep5_;  // keep5
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_x29_;  // x29
  SEXP Rsh_Fir_reg_x30_;  // x30
  SEXP Rsh_Fir_reg_names2_;  // names2
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_temp15_;  // temp15
  SEXP Rsh_Fir_reg_temp16_;  // temp16
  SEXP Rsh_Fir_reg_length4_;  // length4
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_omit17_;  // omit17
  SEXP Rsh_Fir_reg_omit18_;  // omit18
  SEXP Rsh_Fir_reg_names3_;  // names3
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_l17_;  // l17
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_omit19_;  // omit19
  SEXP Rsh_Fir_reg_omit20_;  // omit20
  SEXP Rsh_Fir_reg____3_;  // ___3
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_temp17_;  // temp17
  SEXP Rsh_Fir_reg_temp18_;  // temp18
  SEXP Rsh_Fir_reg_l18_;  // l18
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_x31_;  // x31
  SEXP Rsh_Fir_reg_x32_;  // x32

  // Bind parameters
  Rsh_Fir_reg_omit = PARAMS[0];
  Rsh_Fir_reg_x = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st omit = omit
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_omit, RHO);
  (void)(Rsh_Fir_reg_omit);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L0_:;
  // r3 = `==`(r1, 0.0)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L1(c) else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1(c)
    Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c;
    goto L1_;
  } else {
  // L44()
    goto L44_;
  }

L1_:;
  // c9 = `as.logical`(c1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c9 then L50() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L50()
    goto L50_;
  } else {
  // L3()
    goto L3_;
  }

L2_:;
  // r7 = `!`(r5)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c7 = `||`(c5, c6)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L1(c7)
  // L1(c7)
  Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c7_;
  goto L1_;

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard2 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L5_:;
  // c11 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c11 then L57() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L57()
    goto L57_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // NROW = ldf NROW
  Rsh_Fir_reg_NROW = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L61() else D8()
  // L61()
  goto L61_;

L8_:;
  // st keep = r17
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L71() else D14()
  // L71()
  goto L71_;

L9_:;
  // r21 = `+`(n4, r19)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r22 = dyn rep_int(NA_LGL, r21)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L70() else D13()
  // L70()
  goto L70_;

L10_:;
  // st keep = dx1
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym5 = ldf `is.matrix`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base5 = ldf `is.matrix` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard5 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L11_:;
  // c13 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c13 then L80() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L80()
    goto L80_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // sym8 = ldf `is.array`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base8 = ldf `is.array` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard8 then L106() else L107()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L106()
    goto L106_;
  } else {
  // L107()
    goto L107_;
  }

L13_:;
  // st x = dx3
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // rownames = ldf rownames
  Rsh_Fir_reg_rownames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L86() else D20()
  // L86()
  goto L86_;

L14_:;
  // c15 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c15 then L92() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L92()
    goto L92_;
  } else {
  // L15()
    goto L15_;
  }

L15_:;
  // goto L18(NULL)
  // L18(NULL)
  Rsh_Fir_reg_temp4_ = Rsh_const(CCP, 15);
  goto L18_;

L16_:;
  // l3 = ld temp
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // c16 = `is.object`(l3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c16 then L97() else L98(r40, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L97()
    goto L97_;
  } else {
  // L98(r40, l3)
    Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r40_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L98_;
  }

L17_:;
  // st temp = dx5
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // temp2 = ld temp
  Rsh_Fir_reg_temp2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L101() else D27()
  // L101()
  goto L101_;

L18_:;
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // x31 = ld x
  Rsh_Fir_reg_x31_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L180() else D60()
  // L180()
  goto L180_;

L20_:;
  // c17 = `as.logical`(r49)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c17 then L110() else L21(c17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L110()
    goto L110_;
  } else {
  // L21(c17)
    Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c17_;
    goto L21_;
  }

L21_:;
  // c29 = `as.logical`(c19)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c29 then L119() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L119()
    goto L119_;
  } else {
  // L24()
    goto L24_;
  }

L22_:;
  // r57 = `>`(r52, 2)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // c26 = `as.logical`(r57)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // c27 = `&&`(c22, c26)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_c22_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L21(c27)
  // L21(c27)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c27_;
  goto L21_;

L23_:;
  // st d = r54
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r56 = dyn length3(r54)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L117() else D34()
  // L117()
  goto L117_;

L24_:;
  // x25 = ld x
  Rsh_Fir_reg_x25_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L154() else D48()
  // L154()
  goto L154_;

L25_:;
  // st x = dx7
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // sym11 = ldf dimnames
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base11 = ldf dimnames in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard11 then L125() else L126()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L125()
    goto L125_;
  } else {
  // L126()
    goto L126_;
  }

L26_:;
  // st dn = r60
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r60_, RHO);
  (void)(Rsh_Fir_reg_r60_);
  // c31 = `is.object`(r60)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c31 then L129() else L130(r60)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L129()
    goto L129_;
  } else {
  // L130(r60)
    Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r60_;
    goto L130_;
  }

L27_:;
  // st temp = dx9
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // sym12 = ldf `is.null`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base12 = ldf `is.null` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard12 then L132() else L133()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L132()
    goto L132_;
  } else {
  // L133()
    goto L133_;
  }

L28_:;
  // r67 = `!`(r66)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // c33 = `as.logical`(r67)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c33 then L135() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L135()
    goto L135_;
  } else {
  // L29()
    goto L29_;
  }

L29_:;
  // goto L33(NULL)
  // L33(NULL)
  Rsh_Fir_reg_temp14_ = Rsh_const(CCP, 15);
  goto L33_;

L30_:;
  // l7 = ld temp
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // c34 = `is.object`(l7)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c34 then L140() else L141(r69, l7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L140()
    goto L140_;
  } else {
  // L141(r69, l7)
    Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r69_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
    goto L141_;
  }

L31_:;
  // st temp = dx11
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // temp8 = ld temp
  Rsh_Fir_reg_temp8_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L144() else D43()
  // L144()
  goto L144_;

L32_:;
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L150() else D46()
  // L150()
  goto L150_;

L33_:;
  // goto L19()
  // L19()
  goto L19_;

L34_:;
  // st x = dx15
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx15_, RHO);
  (void)(Rsh_Fir_reg_dx15_);
  // sym14 = ldf names
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base14 = ldf names in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard14 then L159() else L160()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L159()
    goto L159_;
  } else {
  // L160()
    goto L160_;
  }

L35_:;
  // st temp = r83
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r83_, RHO);
  (void)(Rsh_Fir_reg_r83_);
  // sym15 = ldf length
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base15 = ldf length in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard15 then L163() else L164()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L163()
    goto L163_;
  } else {
  // L164()
    goto L164_;
  }

L36_:;
  // c37 = `as.logical`(r86)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c37 then L167() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L167()
    goto L167_;
  } else {
  // L37()
    goto L37_;
  }

L37_:;
  // goto L19()
  // L19()
  goto L19_;

L38_:;
  // l15 = ld temp
  Rsh_Fir_reg_l15_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // c38 = `is.object`(l15)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c38 then L172() else L173(r89, l15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L172()
    goto L172_;
  } else {
  // L173(r89, l15)
    Rsh_Fir_reg_r92_ = Rsh_Fir_reg_r89_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l15_;
    goto L173_;
  }

L39_:;
  // st temp = dx17
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // temp17 = ld temp
  Rsh_Fir_reg_temp17_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L176() else D57()
  // L176()
  goto L176_;

L40_:;
  // omit1 = ld omit
  Rsh_Fir_reg_omit1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L42() else D0()
  // L42()
  goto L42_;

L41_:;
  // r = dyn base(<sym omit>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [omit1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_omit1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L42_:;
  // omit2 = force? omit1
  Rsh_Fir_reg_omit2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_omit1_);
  // checkMissing(omit2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_omit2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r2 = dyn length(omit2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_omit2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L43() else D1()
  // L43()
  goto L43_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L44_:;
  // sym1 = ldf `is.numeric`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base1 = ldf `is.numeric` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard1 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L45_:;
  // omit3 = ld omit
  Rsh_Fir_reg_omit3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L47() else D2()
  // L47()
  goto L47_;

L46_:;
  // r4 = dyn base1(<sym omit>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(c, r4)
  // L2(c, r4)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L2_;

D2_:;
  // deopt 10 [c, omit3]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_omit3_;
  Rsh_Fir_deopt(10, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L47_:;
  // omit4 = force? omit3
  Rsh_Fir_reg_omit4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_omit3_);
  // checkMissing(omit4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_omit4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r6 = dyn is_numeric(omit4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_omit4_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L48() else D3()
  // L48()
  goto L48_;

D3_:;
  // deopt 13 [c, r6]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(13, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L48_:;
  // goto L2(c, r6)
  // L2(c, r6)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L2_;

L50_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L51() else D4()
  // L51()
  goto L51_;

D4_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L51_:;
  // r8 = dyn stop("invalid argument 'omit'")
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L52() else D5()
  // L52()
  goto L52_;

D5_:;
  // deopt 19 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L52_:;
  // goto L4()
  // L4()
  goto L4_;

L54_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L56() else D6()
  // L56()
  goto L56_;

L55_:;
  // r10 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(r10)
  // L5(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L5_;

D6_:;
  // deopt 23 [x1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L56_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // c10 = `==`(x2, NULL)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L5(c10)
  // L5(c10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_c10_;
  goto L5_;

L57_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L58() else D7()
  // L58()
  goto L58_;

D7_:;
  // deopt 26 [x3]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L58_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x4
  return Rsh_Fir_reg_x4_;

D8_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L61_:;
  // p = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   return x6;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner785164255_, CCP, RHO);
  // r15 = dyn NROW(p)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NROW, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L62() else D9()
  // L62()
  goto L62_;

D9_:;
  // deopt 34 [r15]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L62_:;
  // st n = r15
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // sym3 = ldf `rep.int`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base3 = ldf `rep.int` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard3 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L63_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L65() else D10()
  // L65()
  goto L65_;

L64_:;
  // r16 = dyn base3(NA_LGL, <lang `+`(n, length(omit))>)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L8(r16)
  // L8(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L8_;

D10_:;
  // deopt 39 [n]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L65_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard4 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L66_:;
  // omit5 = ld omit
  Rsh_Fir_reg_omit5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L68() else D11()
  // L68()
  goto L68_;

L67_:;
  // r18 = dyn base4(<sym omit>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L9(n1, r18)
  // L9(n1, r18)
  Rsh_Fir_reg_n4_ = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L9_;

D11_:;
  // deopt 42 [n1, omit5]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_omit5_;
  Rsh_Fir_deopt(42, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L68_:;
  // omit6 = force? omit5
  Rsh_Fir_reg_omit6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_omit5_);
  // checkMissing(omit6)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_omit6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r20 = dyn length1(omit6)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_omit6_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L69() else D12()
  // L69()
  goto L69_;

D12_:;
  // deopt 45 [n1, r20]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(45, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L69_:;
  // goto L9(n1, r20)
  // L9(n1, r20)
  Rsh_Fir_reg_n4_ = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L9_;

D13_:;
  // deopt 48 [r22]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L70_:;
  // goto L8(r22)
  // L8(r22)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r22_;
  goto L8_;

D14_:;
  // deopt 51 [1, n5]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_n5_;
  Rsh_Fir_deopt(51, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L71_:;
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // r23 = `:`(1, n6)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_n6_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // l = ld keep
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // c12 = `is.object`(l)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if c12 then L72() else L73(r23, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L72()
    goto L72_;
  } else {
  // L73(r23, l)
    Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r23_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L73_;
  }

L72_:;
  // dr = tryDispatchBuiltin.0("[<-", l, r23)
  SEXP Rsh_Fir_array_args56[3];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args56[2] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args56);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if dc then L74() else L73(r23, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L74()
    goto L74_;
  } else {
  // L73(r23, dr)
    Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r23_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L73_;
  }

L73_:;
  // omit7 = ld omit
  Rsh_Fir_reg_omit7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L75() else D15()
  // L75()
  goto L75_;

L74_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L10(dx)
  // L10(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L10_;

D15_:;
  // deopt 55 [r25, l2, r23, omit7]
  SEXP Rsh_Fir_array_deopt_stack13[4];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack13[3] = Rsh_Fir_reg_omit7_;
  Rsh_Fir_deopt(55, 4, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L75_:;
  // omit8 = force? omit7
  Rsh_Fir_reg_omit8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_omit7_);
  // checkMissing(omit8)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_omit8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // r28 = `-`(<missing>, omit8)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_omit8_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r29 = dyn ___(l2, r23, r28)
  SEXP Rsh_Fir_array_args61[3];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args61[2] = Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L10(r29)
  // L10(r29)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r29_;
  goto L10_;

L76_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L78() else D16()
  // L78()
  goto L78_;

L77_:;
  // r30 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L11(r30)
  // L11(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L11_;

D16_:;
  // deopt 62 [x7]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L78_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r32 = dyn is_matrix(x8)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L79() else D17()
  // L79()
  goto L79_;

D17_:;
  // deopt 65 [r32]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L79_:;
  // goto L11(r32)
  // L11(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L11_;

L80_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L81() else D18()
  // L81()
  goto L81_;

D18_:;
  // deopt 66 [x9]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L81_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(x10)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if c14 then L82() else L83(x10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L82()
    goto L82_;
  } else {
  // L83(x10)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    goto L83_;
  }

L82_:;
  // dr2 = tryDispatchBuiltin.1("[", x10)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args67);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc1 then L84() else L83(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L84()
    goto L84_;
  } else {
  // L83(dr2)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_dr2_;
    goto L83_;
  }

L83_:;
  // keep = ld keep
  Rsh_Fir_reg_keep = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L85() else D19()
  // L85()
  goto L85_;

L84_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L13(dx2)
  // L13(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L13_;

D19_:;
  // deopt 68 [x12, keep]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_keep;
  Rsh_Fir_deopt(68, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L85_:;
  // keep1 = force? keep
  Rsh_Fir_reg_keep1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r33 = dyn __(x10, keep1, <missing>, FALSE)
  SEXP Rsh_Fir_array_args70[4];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_keep1_;
  Rsh_Fir_array_args70[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args70[3] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names15[4];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 4, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L13(r33)
  // L13(r33)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r33_;
  goto L13_;

D20_:;
  // deopt 77 []
  Rsh_Fir_deopt(77, 0, NULL, CCP, RHO);
  return R_NilValue;

L86_:;
  // p1 = prom<V +>{
  //   x13 = ld x;
  //   x14 = force? x13;
  //   checkMissing(x14);
  //   return x14;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner785164255_1, CCP, RHO);
  // r35 = dyn rownames(p1)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rownames, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L87() else D21()
  // L87()
  goto L87_;

D21_:;
  // deopt 79 [r35]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L87_:;
  // st temp = r35
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard6 then L88() else L89()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L88()
    goto L88_;
  } else {
  // L89()
    goto L89_;
  }

L88_:;
  // temp = ld temp
  Rsh_Fir_reg_temp = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L90() else D22()
  // L90()
  goto L90_;

L89_:;
  // r36 = dyn base6(<sym temp>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L14(r36)
  // L14(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L14_;

D22_:;
  // deopt 83 [temp]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_temp;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L90_:;
  // temp1 = force? temp
  Rsh_Fir_reg_temp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_temp);
  // checkMissing(temp1)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_temp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r38 = dyn length2(temp1)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_temp1_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L91() else D23()
  // L91()
  goto L91_;

D23_:;
  // deopt 86 [r38]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L91_:;
  // goto L14(r38)
  // L14(r38)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L14_;

L92_:;
  // sym7 = ldf names
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base7 = ldf names in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args77);
  // if guard7 then L93() else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L93()
    goto L93_;
  } else {
  // L94()
    goto L94_;
  }

L93_:;
  // omit9 = ld omit
  Rsh_Fir_reg_omit9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L95() else D24()
  // L95()
  goto L95_;

L94_:;
  // r39 = dyn base7(<sym omit>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L16(r39)
  // L16(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L16_;

D24_:;
  // deopt 89 [omit9]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_omit9_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L95_:;
  // omit10 = force? omit9
  Rsh_Fir_reg_omit10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_omit9_);
  // checkMissing(omit10)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_omit10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r41 = dyn names(omit10)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_omit10_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L96() else D25()
  // L96()
  goto L96_;

D25_:;
  // deopt 92 [r41]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L96_:;
  // goto L16(r41)
  // L16(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L16_;

L97_:;
  // dr4 = tryDispatchBuiltin.0("[<-", l3, r40)
  SEXP Rsh_Fir_array_args81[3];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args81[2] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args81);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // if dc2 then L99() else L98(r40, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L99()
    goto L99_;
  } else {
  // L98(r40, dr4)
    Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r40_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr4_;
    goto L98_;
  }

L98_:;
  // omit11 = ld omit
  Rsh_Fir_reg_omit11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L100() else D26()
  // L100()
  goto L100_;

L99_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // goto L17(dx4)
  // L17(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L17_;

D26_:;
  // deopt 94 [r43, l5, r40, omit11]
  SEXP Rsh_Fir_array_deopt_stack23[4];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_deopt_stack23[3] = Rsh_Fir_reg_omit11_;
  Rsh_Fir_deopt(94, 4, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L100_:;
  // omit12 = force? omit11
  Rsh_Fir_reg_omit12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_omit11_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r46 = dyn ___1(l5, r40, omit12)
  SEXP Rsh_Fir_array_args84[3];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_args84[2] = Rsh_Fir_reg_omit12_;
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L17(r46)
  // L17(r46)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r46_;
  goto L17_;

D27_:;
  // deopt 98 [temp2]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_temp2_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L101_:;
  // temp3 = force? temp2
  Rsh_Fir_reg_temp3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_temp2_);
  // checkMissing(temp3)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_temp3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // l6 = ld x
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // rownames__ = ldf `rownames<-`
  Rsh_Fir_reg_rownames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L102() else D28()
  // L102()
  goto L102_;

D28_:;
  // deopt 101 [temp3, l6, temp3]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_temp3_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_temp3_;
  Rsh_Fir_deopt(101, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L102_:;
  // r47 = dyn rownames__(l6, NULL, temp3)
  SEXP Rsh_Fir_array_args86[3];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args86[2] = Rsh_Fir_reg_temp3_;
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rownames__, 3, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L103() else D29()
  // L103()
  goto L103_;

D29_:;
  // deopt 103 [temp3, r47]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_temp3_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(103, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L103_:;
  // st x = r47
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r47_, RHO);
  (void)(Rsh_Fir_reg_r47_);
  // goto L18(temp3)
  // L18(temp3)
  Rsh_Fir_reg_temp4_ = Rsh_Fir_reg_temp3_;
  goto L18_;

L106_:;
  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L108() else D30()
  // L108()
  goto L108_;

L107_:;
  // r48 = dyn base8(<sym x>)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L20(r48)
  // L20(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L20_;

D30_:;
  // deopt 109 [x15]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_x15_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L108_:;
  // x16 = force? x15
  Rsh_Fir_reg_x16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_x16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // is_array = ldf `is.array` in base
  Rsh_Fir_reg_is_array = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r50 = dyn is_array(x16)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_array, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L109() else D31()
  // L109()
  goto L109_;

D31_:;
  // deopt 112 [r50]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L109_:;
  // goto L20(r50)
  // L20(r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L20_;

L110_:;
  // sym9 = ldf length
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base9 = ldf length in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args90);
  // if guard9 then L111() else L112()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L111()
    goto L111_;
  } else {
  // L112()
    goto L112_;
  }

L111_:;
  // sym10 = ldf dim
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base10 = ldf dim in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args91);
  // if guard10 then L113() else L114()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L113()
    goto L113_;
  } else {
  // L114()
    goto L114_;
  }

L112_:;
  // r51 = dyn base9(<lang `<-`(d, dim(x))>)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L22(c17, r51)
  // L22(c17, r51)
  Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L22_;

L113_:;
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L115() else D32()
  // L115()
  goto L115_;

L114_:;
  // r53 = dyn base10(<sym x>)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L23(c17, r53)
  // L23(c17, r53)
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L23_;

D32_:;
  // deopt 117 [c17, x17]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_x17_;
  Rsh_Fir_deopt(117, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L115_:;
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r55 = dyn dim(x18)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L116() else D33()
  // L116()
  goto L116_;

D33_:;
  // deopt 120 [c17, r55]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(120, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L116_:;
  // goto L23(c17, r55)
  // L23(c17, r55)
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r55_;
  goto L23_;

D34_:;
  // deopt 123 [c25, r56]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_c25_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(123, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L117_:;
  // goto L22(c25, r56)
  // L22(c25, r56)
  Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c25_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r56_;
  goto L22_;

L119_:;
  // x19 = ld x
  Rsh_Fir_reg_x19_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L120() else D35()
  // L120()
  goto L120_;

D35_:;
  // deopt 127 [x19]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_x19_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L120_:;
  // x20 = force? x19
  Rsh_Fir_reg_x20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x19_);
  // checkMissing(x20)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_x20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(x20)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if c30 then L121() else L122(x20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L121()
    goto L121_;
  } else {
  // L122(x20)
    Rsh_Fir_reg_x22_ = Rsh_Fir_reg_x20_;
    goto L122_;
  }

L121_:;
  // dr6 = tryDispatchBuiltin.1("[", x20)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_x20_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args98);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if dc3 then L123() else L122(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L123()
    goto L123_;
  } else {
  // L122(dr6)
    Rsh_Fir_reg_x22_ = Rsh_Fir_reg_dr6_;
    goto L122_;
  }

L122_:;
  // keep2 = ld keep
  Rsh_Fir_reg_keep2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L124() else D36()
  // L124()
  goto L124_;

L123_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // goto L25(dx6)
  // L25(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L25_;

D36_:;
  // deopt 129 [x22, keep2]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_x22_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_keep2_;
  Rsh_Fir_deopt(129, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L124_:;
  // keep3 = force? keep2
  Rsh_Fir_reg_keep3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep2_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r58 = dyn __1(x20, keep3, <missing>, <missing>, FALSE)
  SEXP Rsh_Fir_array_args101[5];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_keep3_;
  Rsh_Fir_array_args101[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args101[3] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args101[4] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names28[5];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_array_arg_names28[3] = R_MissingArg;
  Rsh_Fir_array_arg_names28[4] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 5, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L25(r58)
  // L25(r58)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r58_;
  goto L25_;

L125_:;
  // x23 = ld x
  Rsh_Fir_reg_x23_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L127() else D37()
  // L127()
  goto L127_;

L126_:;
  // r59 = dyn base11(<sym x>)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L26(r59)
  // L26(r59)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L26_;

D37_:;
  // deopt 140 [x23]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_x23_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L127_:;
  // x24 = force? x23
  Rsh_Fir_reg_x24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x23_);
  // checkMissing(x24)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_x24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r61 = dyn dimnames(x24)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_x24_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L128() else D38()
  // L128()
  goto L128_;

D38_:;
  // deopt 143 [r61]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L128_:;
  // goto L26(r61)
  // L26(r61)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r61_;
  goto L26_;

L129_:;
  // dr8 = tryDispatchBuiltin.1("[[", r60)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args105);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if dc4 then L131() else L130(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L131()
    goto L131_;
  } else {
  // L130(dr8)
    Rsh_Fir_reg_r63_ = Rsh_Fir_reg_dr8_;
    goto L130_;
  }

L130_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r64 = dyn __2(r63, 1)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L27(r64)
  // L27(r64)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r64_;
  goto L27_;

L131_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // goto L27(dx8)
  // L27(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L27_;

L132_:;
  // temp6 = ld temp
  Rsh_Fir_reg_temp6_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L134() else D39()
  // L134()
  goto L134_;

L133_:;
  // r65 = dyn base12(<sym temp>)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L28(r65)
  // L28(r65)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r65_;
  goto L28_;

D39_:;
  // deopt 150 [temp6]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_temp6_;
  Rsh_Fir_deopt(150, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L134_:;
  // temp7 = force? temp6
  Rsh_Fir_reg_temp7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_temp6_);
  // checkMissing(temp7)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_temp7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // c32 = `==`(temp7, NULL)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_temp7_;
  Rsh_Fir_array_args111[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // goto L28(c32)
  // L28(c32)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_c32_;
  goto L28_;

L135_:;
  // sym13 = ldf names
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base13 = ldf names in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args112);
  // if guard13 then L136() else L137()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L136()
    goto L136_;
  } else {
  // L137()
    goto L137_;
  }

L136_:;
  // omit13 = ld omit
  Rsh_Fir_reg_omit13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L138() else D40()
  // L138()
  goto L138_;

L137_:;
  // r68 = dyn base13(<sym omit>)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L30(r68)
  // L30(r68)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r68_;
  goto L30_;

D40_:;
  // deopt 156 [omit13]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_omit13_;
  Rsh_Fir_deopt(156, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L138_:;
  // omit14 = force? omit13
  Rsh_Fir_reg_omit14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_omit13_);
  // checkMissing(omit14)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_omit14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r70 = dyn names1(omit14)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_omit14_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L139() else D41()
  // L139()
  goto L139_;

D41_:;
  // deopt 159 [r70]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_deopt(159, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L139_:;
  // goto L30(r70)
  // L30(r70)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r70_;
  goto L30_;

L140_:;
  // dr10 = tryDispatchBuiltin.0("[<-", l7, r69)
  SEXP Rsh_Fir_array_args116[3];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args116[2] = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args116);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // if dc5 then L142() else L141(r69, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L142()
    goto L142_;
  } else {
  // L141(r69, dr10)
    Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r69_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_dr10_;
    goto L141_;
  }

L141_:;
  // omit15 = ld omit
  Rsh_Fir_reg_omit15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L143() else D42()
  // L143()
  goto L143_;

L142_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // goto L31(dx10)
  // L31(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L31_;

D42_:;
  // deopt 161 [r72, l9, r69, omit15]
  SEXP Rsh_Fir_array_deopt_stack39[4];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack39[2] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_deopt_stack39[3] = Rsh_Fir_reg_omit15_;
  Rsh_Fir_deopt(161, 4, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L143_:;
  // omit16 = force? omit15
  Rsh_Fir_reg_omit16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_omit15_);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r75 = dyn ___2(l9, r69, omit16)
  SEXP Rsh_Fir_array_args119[3];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_args119[2] = Rsh_Fir_reg_omit16_;
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L31(r75)
  // L31(r75)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r75_;
  goto L31_;

D43_:;
  // deopt 165 [temp8]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_temp8_;
  Rsh_Fir_deopt(165, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L144_:;
  // temp9 = force? temp8
  Rsh_Fir_reg_temp9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_temp8_);
  // checkMissing(temp9)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_temp9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // l10 = ld x
  Rsh_Fir_reg_l10_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // dimnames1 = ldf dimnames
  Rsh_Fir_reg_dimnames1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L145() else D44()
  // L145()
  goto L145_;

D44_:;
  // deopt 168 [temp9, l10, temp9]
  SEXP Rsh_Fir_array_deopt_stack41[3];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_temp9_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack41[2] = Rsh_Fir_reg_temp9_;
  Rsh_Fir_deopt(168, 3, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L145_:;
  // r76 = dyn dimnames1(temp9, NULL)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_temp9_;
  Rsh_Fir_array_args121[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames1_, 2, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L146() else D45()
  // L146()
  goto L146_;

D45_:;
  // deopt 170 [temp9, l10, temp9, r76]
  SEXP Rsh_Fir_array_deopt_stack42[4];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_temp9_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_temp9_;
  Rsh_Fir_array_deopt_stack42[3] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(170, 4, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L146_:;
  // c35 = `is.object`(r76)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // if c35 then L147() else L148(temp9, l10, r76)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L147()
    goto L147_;
  } else {
  // L148(temp9, l10, r76)
    Rsh_Fir_reg_temp11_ = Rsh_Fir_reg_temp9_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l10_;
    Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r76_;
    goto L148_;
  }

L147_:;
  // dr12 = tryDispatchBuiltin.0("[[<-", r76, temp9)
  SEXP Rsh_Fir_array_args123[3];
  Rsh_Fir_array_args123[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_r76_;
  Rsh_Fir_array_args123[2] = Rsh_Fir_reg_temp9_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args123);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // if dc6 then L149() else L148(temp9, l10, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L149()
    goto L149_;
  } else {
  // L148(temp9, l10, dr12)
    Rsh_Fir_reg_temp11_ = Rsh_Fir_reg_temp9_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l10_;
    Rsh_Fir_reg_r78_ = Rsh_Fir_reg_dr12_;
    goto L148_;
  }

L148_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r79 = dyn ____(r78, temp9, 1)
  SEXP Rsh_Fir_array_args125[3];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_temp9_;
  Rsh_Fir_array_args125[2] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names37[3];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L32(temp11, l12, r79)
  // L32(temp11, l12, r79)
  Rsh_Fir_reg_temp13_ = Rsh_Fir_reg_temp11_;
  Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r79_;
  goto L32_;

L149_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // goto L32(temp9, l10, dx12)
  // L32(temp9, l10, dx12)
  Rsh_Fir_reg_temp13_ = Rsh_Fir_reg_temp9_;
  Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L32_;

D46_:;
  // deopt 175 [temp13, l14, dx13]
  SEXP Rsh_Fir_array_deopt_stack43[3];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_temp13_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack43[2] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_deopt(175, 3, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L150_:;
  // r80 = dyn dimnames__(l14, NULL, dx13)
  SEXP Rsh_Fir_array_args127[3];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args127[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args127[2] = Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_array_arg_names38[3];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L151() else D47()
  // L151()
  goto L151_;

D47_:;
  // deopt 177 [temp13, r80]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_temp13_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(177, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L151_:;
  // st x = r80
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r80_, RHO);
  (void)(Rsh_Fir_reg_r80_);
  // goto L33(temp13)
  // L33(temp13)
  Rsh_Fir_reg_temp14_ = Rsh_Fir_reg_temp13_;
  goto L33_;

D48_:;
  // deopt 181 [x25]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_x25_;
  Rsh_Fir_deopt(181, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L154_:;
  // x26 = force? x25
  Rsh_Fir_reg_x26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x25_);
  // checkMissing(x26)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_x26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // c36 = `is.object`(x26)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // if c36 then L155() else L156(x26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L155()
    goto L155_;
  } else {
  // L156(x26)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_x26_;
    goto L156_;
  }

L155_:;
  // dr14 = tryDispatchBuiltin.1("[", x26)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args130);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // if dc7 then L157() else L156(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L157()
    goto L157_;
  } else {
  // L156(dr14)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_dr14_;
    goto L156_;
  }

L156_:;
  // keep4 = ld keep
  Rsh_Fir_reg_keep4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L158() else D49()
  // L158()
  goto L158_;

L157_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // goto L34(dx14)
  // L34(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L34_;

D49_:;
  // deopt 183 [x28, keep4]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_keep4_;
  Rsh_Fir_deopt(183, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L158_:;
  // keep5 = force? keep4
  Rsh_Fir_reg_keep5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep4_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r81 = dyn __3(x28, keep5)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_keep5_;
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args133, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L34(r81)
  // L34(r81)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r81_;
  goto L34_;

L159_:;
  // x29 = ld x
  Rsh_Fir_reg_x29_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L161() else D50()
  // L161()
  goto L161_;

L160_:;
  // r82 = dyn base14(<sym x>)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L35(r82)
  // L35(r82)
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r82_;
  goto L35_;

D50_:;
  // deopt 189 [x29]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_x29_;
  Rsh_Fir_deopt(189, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L161_:;
  // x30 = force? x29
  Rsh_Fir_reg_x30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x29_);
  // checkMissing(x30)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_x30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // names2 = ldf names in base
  Rsh_Fir_reg_names2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r84 = dyn names2(x30)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_x30_;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names2_, 1, Rsh_Fir_array_args136, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L162() else D51()
  // L162()
  goto L162_;

D51_:;
  // deopt 192 [r84]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_deopt(192, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L162_:;
  // goto L35(r84)
  // L35(r84)
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r84_;
  goto L35_;

L163_:;
  // temp15 = ld temp
  Rsh_Fir_reg_temp15_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L165() else D52()
  // L165()
  goto L165_;

L164_:;
  // r85 = dyn base15(<sym temp>)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L36(r85)
  // L36(r85)
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r85_;
  goto L36_;

D52_:;
  // deopt 196 [temp15]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_temp15_;
  Rsh_Fir_deopt(196, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L165_:;
  // temp16 = force? temp15
  Rsh_Fir_reg_temp16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_temp15_);
  // checkMissing(temp16)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_temp16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty()));
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r87 = dyn length4(temp16)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_temp16_;
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L166() else D53()
  // L166()
  goto L166_;

D53_:;
  // deopt 199 [r87]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_deopt(199, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L166_:;
  // goto L36(r87)
  // L36(r87)
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r87_;
  goto L36_;

L167_:;
  // sym16 = ldf names
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base16 = ldf names in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args140[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args140);
  // if guard16 then L168() else L169()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L168()
    goto L168_;
  } else {
  // L169()
    goto L169_;
  }

L168_:;
  // omit17 = ld omit
  Rsh_Fir_reg_omit17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L170() else D54()
  // L170()
  goto L170_;

L169_:;
  // r88 = dyn base16(<sym omit>)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L38(r88)
  // L38(r88)
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r88_;
  goto L38_;

D54_:;
  // deopt 202 [omit17]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_omit17_;
  Rsh_Fir_deopt(202, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L170_:;
  // omit18 = force? omit17
  Rsh_Fir_reg_omit18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_omit17_);
  // checkMissing(omit18)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_omit18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // names3 = ldf names in base
  Rsh_Fir_reg_names3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r90 = dyn names3(omit18)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_omit18_;
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names3_, 1, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L171() else D55()
  // L171()
  goto L171_;

D55_:;
  // deopt 205 [r90]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_deopt(205, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L171_:;
  // goto L38(r90)
  // L38(r90)
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r90_;
  goto L38_;

L172_:;
  // dr16 = tryDispatchBuiltin.0("[<-", l15, r89)
  SEXP Rsh_Fir_array_args144[3];
  Rsh_Fir_array_args144[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args144[2] = Rsh_Fir_reg_r89_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args144);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // if dc8 then L174() else L173(r89, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L174()
    goto L174_;
  } else {
  // L173(r89, dr16)
    Rsh_Fir_reg_r92_ = Rsh_Fir_reg_r89_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_dr16_;
    goto L173_;
  }

L173_:;
  // omit19 = ld omit
  Rsh_Fir_reg_omit19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L175() else D56()
  // L175()
  goto L175_;

L174_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // goto L39(dx16)
  // L39(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L39_;

D56_:;
  // deopt 207 [r92, l17, r89, omit19]
  SEXP Rsh_Fir_array_deopt_stack53[4];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_deopt_stack53[2] = Rsh_Fir_reg_r89_;
  Rsh_Fir_array_deopt_stack53[3] = Rsh_Fir_reg_omit19_;
  Rsh_Fir_deopt(207, 4, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L175_:;
  // omit20 = force? omit19
  Rsh_Fir_reg_omit20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_omit19_);
  // ___3 = ldf `[<-` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r95 = dyn ___3(l17, r89, omit20)
  SEXP Rsh_Fir_array_args147[3];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_r89_;
  Rsh_Fir_array_args147[2] = Rsh_Fir_reg_omit20_;
  SEXP Rsh_Fir_array_arg_names46[3];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_array_arg_names46[2] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 3, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L39(r95)
  // L39(r95)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r95_;
  goto L39_;

D57_:;
  // deopt 211 [temp17]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_temp17_;
  Rsh_Fir_deopt(211, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L176_:;
  // temp18 = force? temp17
  Rsh_Fir_reg_temp18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_temp17_);
  // checkMissing(temp18)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_temp18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // l18 = ld x
  Rsh_Fir_reg_l18_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L177() else D58()
  // L177()
  goto L177_;

D58_:;
  // deopt 214 [temp18, l18, temp18]
  SEXP Rsh_Fir_array_deopt_stack55[3];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_temp18_;
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_deopt_stack55[2] = Rsh_Fir_reg_temp18_;
  Rsh_Fir_deopt(214, 3, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L177_:;
  // r96 = dyn names__(l18, NULL, temp18)
  SEXP Rsh_Fir_array_args149[3];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_args149[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args149[2] = Rsh_Fir_reg_temp18_;
  SEXP Rsh_Fir_array_arg_names47[3];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_array_arg_names47[2] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L178() else D59()
  // L178()
  goto L178_;

D59_:;
  // deopt 216 [temp18, r96]
  SEXP Rsh_Fir_array_deopt_stack56[2];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_temp18_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_r96_;
  Rsh_Fir_deopt(216, 2, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L178_:;
  // st x = r96
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r96_, RHO);
  (void)(Rsh_Fir_reg_r96_);
  // goto L19()
  // L19()
  goto L19_;

D60_:;
  // deopt 220 [x31]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_x31_;
  Rsh_Fir_deopt(220, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L180_:;
  // x32 = force? x31
  Rsh_Fir_reg_x32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x31_);
  // checkMissing(x32)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_x32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x32
  return Rsh_Fir_reg_x32_;
}
SEXP Rsh_Fir_user_promise_inner785164255_(SEXP CCP, SEXP RHO) {
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return x6
  return Rsh_Fir_reg_x6_;
}
SEXP Rsh_Fir_user_promise_inner785164255_1(SEXP CCP, SEXP RHO) {
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // return x14
  return Rsh_Fir_reg_x14_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
