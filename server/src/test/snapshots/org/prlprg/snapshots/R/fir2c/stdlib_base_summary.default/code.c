#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner890012476_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner890012476_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner890012476_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner890012476_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner890012476_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner890012476_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner890012476_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner890012476_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner890012476_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner890012476_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner890012476_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner890012476_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner890012476_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner890012476_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner890012476_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner890012476_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner890012476_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner890012476_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner890012476_16(SEXP CCP, SEXP RHO);
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
  // r = clos inner890012476
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner890012476_, RHO, CCP);
  // st `summary.default` = r
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
SEXP Rsh_Fir_user_function_inner890012476_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner890012476 dynamic dispatch ([object, `...`, digits, `quantile.type`])

  return Rsh_Fir_user_version_inner890012476_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner890012476_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner890012476 version 0 (*, dots, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner890012476/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_digits;  // digits
  SEXP Rsh_Fir_reg_quantile_type;  // quantile_type
  SEXP Rsh_Fir_reg_quantile_type_isMissing;  // quantile_type_isMissing
  SEXP Rsh_Fir_reg_quantile_type_orDefault;  // quantile_type_orDefault
  SEXP Rsh_Fir_reg_is_factor;  // is_factor
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_summary_factor;  // summary_factor
  SEXP Rsh_Fir_reg_object3_;  // object3
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_is_matrix;  // is_matrix
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_summary_matrix;  // summary_matrix
  SEXP Rsh_Fir_reg_object7_;  // object7
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_quantile_type1_;  // quantile_type1
  SEXP Rsh_Fir_reg_quantile_type2_;  // quantile_type2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_ddd2_;  // ddd2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_summary_matrix1_;  // summary_matrix1
  SEXP Rsh_Fir_reg_object9_;  // object9
  SEXP Rsh_Fir_reg_object10_;  // object10
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_digits1_;  // digits1
  SEXP Rsh_Fir_reg_digits2_;  // digits2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_quantile_type3_;  // quantile_type3
  SEXP Rsh_Fir_reg_quantile_type4_;  // quantile_type4
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_ddd3_;  // ddd3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_object11_;  // object11
  SEXP Rsh_Fir_reg_object12_;  // object12
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_table;  // table
  SEXP Rsh_Fir_reg_object13_;  // object13
  SEXP Rsh_Fir_reg_object14_;  // object14
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_tb;  // tb
  SEXP Rsh_Fir_reg_tb1_;  // tb1
  SEXP Rsh_Fir_reg_dimnames;  // dimnames
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_dimnames1_;  // dimnames1
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_iN;  // iN
  SEXP Rsh_Fir_reg_iN1_;  // iN1
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_dimnames__;  // dimnames__
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_tb2_;  // tb2
  SEXP Rsh_Fir_reg_tb3_;  // tb3
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_object15_;  // object15
  SEXP Rsh_Fir_reg_object16_;  // object16
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_object17_;  // object17
  SEXP Rsh_Fir_reg_object18_;  // object18
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_object19_;  // object19
  SEXP Rsh_Fir_reg_object20_;  // object20
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_object22_;  // object22
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_nas;  // nas
  SEXP Rsh_Fir_reg_nas1_;  // nas1
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_object23_;  // object23
  SEXP Rsh_Fir_reg_object24_;  // object24
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_quantile_type5_;  // quantile_type5
  SEXP Rsh_Fir_reg_quantile_type6_;  // quantile_type6
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_qq;  // qq
  SEXP Rsh_Fir_reg_qq1_;  // qq1
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_qq3_;  // qq3
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_mean;  // mean
  SEXP Rsh_Fir_reg_object25_;  // object25
  SEXP Rsh_Fir_reg_object26_;  // object26
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_qq4_;  // qq4
  SEXP Rsh_Fir_reg_qq5_;  // qq5
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_qq7_;  // qq7
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_missing1_;  // missing1
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_signif;  // signif
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r110_;  // r110
  SEXP Rsh_Fir_reg_r111_;  // r111
  SEXP Rsh_Fir_reg_nas2_;  // nas2
  SEXP Rsh_Fir_reg_nas3_;  // nas3
  SEXP Rsh_Fir_reg_any1_;  // any1
  SEXP Rsh_Fir_reg_r112_;  // r112
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r113_;  // r113
  SEXP Rsh_Fir_reg_r114_;  // r114
  SEXP Rsh_Fir_reg_qq8_;  // qq8
  SEXP Rsh_Fir_reg_qq9_;  // qq9
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r115_;  // r115
  SEXP Rsh_Fir_reg_r116_;  // r116
  SEXP Rsh_Fir_reg_nas4_;  // nas4
  SEXP Rsh_Fir_reg_nas5_;  // nas5
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r117_;  // r117
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_r118_;  // r118
  SEXP Rsh_Fir_reg_r119_;  // r119
  SEXP Rsh_Fir_reg_qq10_;  // qq10
  SEXP Rsh_Fir_reg_qq11_;  // qq11
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r120_;  // r120
  SEXP Rsh_Fir_reg_r121_;  // r121
  SEXP Rsh_Fir_reg_object27_;  // object27
  SEXP Rsh_Fir_reg_object28_;  // object28
  SEXP Rsh_Fir_reg_is_recursive;  // is_recursive
  SEXP Rsh_Fir_reg_r122_;  // r122
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_sym18_;  // sym18
  SEXP Rsh_Fir_reg_base18_;  // base18
  SEXP Rsh_Fir_reg_guard18_;  // guard18
  SEXP Rsh_Fir_reg_r123_;  // r123
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_r124_;  // r124
  SEXP Rsh_Fir_reg_object29_;  // object29
  SEXP Rsh_Fir_reg_object30_;  // object30
  SEXP Rsh_Fir_reg_is_language;  // is_language
  SEXP Rsh_Fir_reg_r125_;  // r125
  SEXP Rsh_Fir_reg_r126_;  // r126
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_sym19_;  // sym19
  SEXP Rsh_Fir_reg_base19_;  // base19
  SEXP Rsh_Fir_reg_guard19_;  // guard19
  SEXP Rsh_Fir_reg_r127_;  // r127
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_r128_;  // r128
  SEXP Rsh_Fir_reg_object31_;  // object31
  SEXP Rsh_Fir_reg_object32_;  // object32
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r129_;  // r129
  SEXP Rsh_Fir_reg_c48_;  // c48
  SEXP Rsh_Fir_reg_c49_;  // c49
  SEXP Rsh_Fir_reg_c51_;  // c51
  SEXP Rsh_Fir_reg_array;  // array
  SEXP Rsh_Fir_reg_sym20_;  // sym20
  SEXP Rsh_Fir_reg_base20_;  // base20
  SEXP Rsh_Fir_reg_guard20_;  // guard20
  SEXP Rsh_Fir_reg_r130_;  // r130
  SEXP Rsh_Fir_reg_r131_;  // r131
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_c52_;  // c52
  SEXP Rsh_Fir_reg_r132_;  // r132
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_sym21_;  // sym21
  SEXP Rsh_Fir_reg_base21_;  // base21
  SEXP Rsh_Fir_reg_guard21_;  // guard21
  SEXP Rsh_Fir_reg_r134_;  // r134
  SEXP Rsh_Fir_reg_r135_;  // r135
  SEXP Rsh_Fir_reg_sym22_;  // sym22
  SEXP Rsh_Fir_reg_base22_;  // base22
  SEXP Rsh_Fir_reg_guard22_;  // guard22
  SEXP Rsh_Fir_reg_r136_;  // r136
  SEXP Rsh_Fir_reg_r137_;  // r137
  SEXP Rsh_Fir_reg_object33_;  // object33
  SEXP Rsh_Fir_reg_object34_;  // object34
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r138_;  // r138
  SEXP Rsh_Fir_reg_sym23_;  // sym23
  SEXP Rsh_Fir_reg_base23_;  // base23
  SEXP Rsh_Fir_reg_guard23_;  // guard23
  SEXP Rsh_Fir_reg_r139_;  // r139
  SEXP Rsh_Fir_reg_r140_;  // r140
  SEXP Rsh_Fir_reg_c53_;  // c53
  SEXP Rsh_Fir_reg_r141_;  // r141
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r142_;  // r142
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r144_;  // r144
  SEXP Rsh_Fir_reg_numeric;  // numeric
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r146_;  // r146
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_r147_;  // r147
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c54_;  // c54
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_object35_;  // object35
  SEXP Rsh_Fir_reg_object36_;  // object36
  SEXP Rsh_Fir_reg_c55_;  // c55
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_object38_;  // object38
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r148_;  // r148
  SEXP Rsh_Fir_reg_sym24_;  // sym24
  SEXP Rsh_Fir_reg_base24_;  // base24
  SEXP Rsh_Fir_reg_guard24_;  // guard24
  SEXP Rsh_Fir_reg_r149_;  // r149
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_r150_;  // r150
  SEXP Rsh_Fir_reg_ii;  // ii
  SEXP Rsh_Fir_reg_ii1_;  // ii1
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r151_;  // r151
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_c56_;  // c56
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_r153_;  // r153
  SEXP Rsh_Fir_reg_l17_;  // l17
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r156_;  // r156
  SEXP Rsh_Fir_reg_sym25_;  // sym25
  SEXP Rsh_Fir_reg_base25_;  // base25
  SEXP Rsh_Fir_reg_guard25_;  // guard25
  SEXP Rsh_Fir_reg_r157_;  // r157
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_r158_;  // r158
  SEXP Rsh_Fir_reg_ii2_;  // ii2
  SEXP Rsh_Fir_reg_ii3_;  // ii3
  SEXP Rsh_Fir_reg_oldClass;  // oldClass
  SEXP Rsh_Fir_reg_r159_;  // r159
  SEXP Rsh_Fir_reg_sym26_;  // sym26
  SEXP Rsh_Fir_reg_base26_;  // base26
  SEXP Rsh_Fir_reg_guard26_;  // guard26
  SEXP Rsh_Fir_reg_r160_;  // r160
  SEXP Rsh_Fir_reg_i25_;  // i25
  SEXP Rsh_Fir_reg_r161_;  // r161
  SEXP Rsh_Fir_reg_cls;  // cls
  SEXP Rsh_Fir_reg_cls1_;  // cls1
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r162_;  // r162
  SEXP Rsh_Fir_reg_c57_;  // c57
  SEXP Rsh_Fir_reg_cls2_;  // cls2
  SEXP Rsh_Fir_reg_cls3_;  // cls3
  SEXP Rsh_Fir_reg_c58_;  // c58
  SEXP Rsh_Fir_reg_i29_;  // i29
  SEXP Rsh_Fir_reg_cls5_;  // cls5
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_i31_;  // i31
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r163_;  // r163
  SEXP Rsh_Fir_reg_i32_;  // i32
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_l18_;  // l18
  SEXP Rsh_Fir_reg_c59_;  // c59
  SEXP Rsh_Fir_reg_i34_;  // i34
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_l20_;  // l20
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_i36_;  // i36
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_i37_;  // i37
  SEXP Rsh_Fir_reg_i38_;  // i38
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r164_;  // r164
  SEXP Rsh_Fir_reg_mode;  // mode
  SEXP Rsh_Fir_reg_ii4_;  // ii4
  SEXP Rsh_Fir_reg_ii5_;  // ii5
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r166_;  // r166
  SEXP Rsh_Fir_reg_l21_;  // l21
  SEXP Rsh_Fir_reg_c60_;  // c60
  SEXP Rsh_Fir_reg_i40_;  // i40
  SEXP Rsh_Fir_reg_r168_;  // r168
  SEXP Rsh_Fir_reg_l23_;  // l23
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_i42_;  // i42
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_i43_;  // i43
  SEXP Rsh_Fir_reg_i44_;  // i44
  SEXP Rsh_Fir_reg____3_;  // ___3
  SEXP Rsh_Fir_reg_r171_;  // r171
  SEXP Rsh_Fir_reg_format;  // format
  SEXP Rsh_Fir_reg_sym27_;  // sym27
  SEXP Rsh_Fir_reg_base27_;  // base27
  SEXP Rsh_Fir_reg_guard27_;  // guard27
  SEXP Rsh_Fir_reg_r172_;  // r172
  SEXP Rsh_Fir_reg_r173_;  // r173
  SEXP Rsh_Fir_reg_ll;  // ll
  SEXP Rsh_Fir_reg_ll1_;  // ll1
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r174_;  // r174
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_r176_;  // r176
  SEXP Rsh_Fir_reg_l24_;  // l24
  SEXP Rsh_Fir_reg_c61_;  // c61
  SEXP Rsh_Fir_reg_r178_;  // r178
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg____4_;  // ___4
  SEXP Rsh_Fir_reg_r181_;  // r181
  SEXP Rsh_Fir_reg_sumry;  // sumry
  SEXP Rsh_Fir_reg_sumry1_;  // sumry1
  SEXP Rsh_Fir_reg_sym28_;  // sym28
  SEXP Rsh_Fir_reg_base28_;  // base28
  SEXP Rsh_Fir_reg_guard28_;  // guard28
  SEXP Rsh_Fir_reg_r182_;  // r182
  SEXP Rsh_Fir_reg_sym29_;  // sym29
  SEXP Rsh_Fir_reg_base29_;  // base29
  SEXP Rsh_Fir_reg_guard29_;  // guard29
  SEXP Rsh_Fir_reg_r183_;  // r183
  SEXP Rsh_Fir_reg_r184_;  // r184
  SEXP Rsh_Fir_reg_object39_;  // object39
  SEXP Rsh_Fir_reg_object40_;  // object40
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r185_;  // r185
  SEXP Rsh_Fir_reg_sym30_;  // sym30
  SEXP Rsh_Fir_reg_base30_;  // base30
  SEXP Rsh_Fir_reg_guard30_;  // guard30
  SEXP Rsh_Fir_reg_r186_;  // r186
  SEXP Rsh_Fir_reg_r187_;  // r187
  SEXP Rsh_Fir_reg_object41_;  // object41
  SEXP Rsh_Fir_reg_object42_;  // object42
  SEXP Rsh_Fir_reg_class;  // class
  SEXP Rsh_Fir_reg_r188_;  // r188
  SEXP Rsh_Fir_reg_mode1_;  // mode1
  SEXP Rsh_Fir_reg_object43_;  // object43
  SEXP Rsh_Fir_reg_object44_;  // object44
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_r190_;  // r190
  SEXP Rsh_Fir_reg_c62_;  // c62
  SEXP Rsh_Fir_reg_r191_;  // r191
  SEXP Rsh_Fir_reg_sym31_;  // sym31
  SEXP Rsh_Fir_reg_base31_;  // base31
  SEXP Rsh_Fir_reg_guard31_;  // guard31
  SEXP Rsh_Fir_reg_r192_;  // r192
  SEXP Rsh_Fir_reg_r193_;  // r193
  SEXP Rsh_Fir_reg_c63_;  // c63
  SEXP Rsh_Fir_reg_r194_;  // r194
  SEXP Rsh_Fir_reg_l27_;  // l27
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r195_;  // r195
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_value1_;  // value1

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];
  Rsh_Fir_reg_digits = PARAMS[2];
  Rsh_Fir_reg_quantile_type = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // st digits = digits
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_digits, RHO);
  (void)(Rsh_Fir_reg_digits);
  // quantile_type_isMissing = missing.0(quantile_type)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_quantile_type;
  Rsh_Fir_reg_quantile_type_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if quantile_type_isMissing then L0(7.0) else L0(quantile_type)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_quantile_type_isMissing)) {
  // L0(7.0)
    Rsh_Fir_reg_quantile_type_orDefault = Rsh_const(CCP, 4);
    goto L0_;
  } else {
  // L0(quantile_type)
    Rsh_Fir_reg_quantile_type_orDefault = Rsh_Fir_reg_quantile_type;
    goto L0_;
  }

L0_:;
  // st `quantile.type` = quantile_type_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_quantile_type_orDefault, RHO);
  (void)(Rsh_Fir_reg_quantile_type_orDefault);
  // is_factor = ldf `is.factor`
  Rsh_Fir_reg_is_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L62() else D0()
  // L62()
  goto L62_;

L1_:;
  // sym = ldf `is.matrix`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `is.matrix` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L3_:;
  // c1 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L73() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L73()
    goto L73_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // sym2 = ldf `is.logical`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf `is.logical` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard2 then L85() else L86()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L85()
    goto L85_;
  } else {
  // L86()
    goto L86_;
  }

L5_:;
  // c2 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c2 then L76() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L76()
    goto L76_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // summary_matrix1 = ldf `summary.matrix`
  Rsh_Fir_reg_summary_matrix1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L81() else D8()
  // L81()
  goto L81_;

L8_:;
  // c4 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c4 then L88() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L88()
    goto L88_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // sym8 = ldf `is.numeric`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base8 = ldf `is.numeric` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard8 then L130() else L131()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L130()
    goto L130_;
  } else {
  // L131()
    goto L131_;
  }

L10_:;
  // goto L22(r24)
  // L22(r24)
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r24_;
  goto L22_;

L11_:;
  // r35 = `!`(r28)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c7 then L102() else L14(c7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L102()
    goto L102_;
  } else {
  // L14(c7)
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c7_;
    goto L14_;
  }

L12_:;
  // c5 = `is.object`(r30)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c5 then L99() else L100(r30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L99()
    goto L99_;
  } else {
  // L100(r30)
    Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r30_;
    goto L100_;
  }

L13_:;
  // st n = dx1
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // c6 = `==`(dx1, NULL)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L11(c6)
  // L11(c6)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_c6_;
  goto L11_;

L14_:;
  // c19 = `as.logical`(c9)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c19 then L111() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L111()
    goto L111_;
  } else {
  // L17()
    goto L17_;
  }

L15_:;
  // c16 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // c17 = `&&`(c12, c16)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L14(c17)
  // L14(c17)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c17_;
  goto L14_;

L16_:;
  // st iN = r39
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r41 = dyn any(r39)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L109() else D17()
  // L109()
  goto L109_;

L17_:;
  // goto L21()
  // L21()
  goto L21_;

L18_:;
  // c21 = `is.object`(dx3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c21 then L117() else L118(r54, l4, r55, dx3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L117()
    goto L117_;
  } else {
  // L118(r54, l4, r55, dx3)
    Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r54_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r55_;
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    goto L118_;
  }

L19_:;
  // c22 = `is.object`(r65)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c22 then L121() else L122(r64, l8, r65)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L121()
    goto L121_;
  } else {
  // L122(r64, l8, r65)
    Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r64_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l8_;
    Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r65_;
    goto L122_;
  }

L20_:;
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L124() else D21()
  // L124()
  goto L124_;

L21_:;
  // tb2 = ld tb
  Rsh_Fir_reg_tb2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L127() else D23()
  // L127()
  goto L127_;

L22_:;
  // st value = r77
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r77_, RHO);
  (void)(Rsh_Fir_reg_r77_);
  // sym31 = ldf c
  Rsh_Fir_reg_sym31_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base31 = ldf c in base
  Rsh_Fir_reg_base31_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard31 = `==`.4(sym31, base31)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym31_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base31_;
  Rsh_Fir_reg_guard31_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard31 then L267() else L268()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard31_)) {
  // L267()
    goto L267_;
  } else {
  // L268()
    goto L268_;
  }

L23_:;
  // c24 = `as.logical`(r79)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c24 then L134() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L134()
    goto L134_;
  } else {
  // L24()
    goto L24_;
  }

L24_:;
  // sym17 = ldf `is.recursive`
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base17 = ldf `is.recursive` in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard17 then L187() else L188()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L187()
    goto L187_;
  } else {
  // L188()
    goto L188_;
  }

L25_:;
  // st nas = r82
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r82_, RHO);
  (void)(Rsh_Fir_reg_r82_);
  // object19 = ld object
  Rsh_Fir_reg_object19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L139() else D29()
  // L139()
  goto L139_;

L26_:;
  // st object = dx11
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // __3 = ldf `::`
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L144() else D31()
  // L144()
  goto L144_;

L27_:;
  // st qq = r92
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r92_, RHO);
  (void)(Rsh_Fir_reg_r92_);
  // sym11 = ldf missing
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base11 = ldf missing in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard11 then L160() else L161()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L160()
    goto L160_;
  } else {
  // L161()
    goto L161_;
  }

L28_:;
  // mean = ldf mean
  Rsh_Fir_reg_mean = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L153() else D35()
  // L153()
  goto L153_;

L29_:;
  // c28 = ldf c in base
  Rsh_Fir_reg_c28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r97 = dyn c28(dx13, r95, dx15)
  SEXP Rsh_Fir_array_args21[3];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_r95_;
  Rsh_Fir_array_args21[2] = Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c28_, 3, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L159() else D38()
  // L159()
  goto L159_;

L30_:;
  // r101 = `!`(r99)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r99_;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // c29 = `as.logical`(r101)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c29 then L162() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L162()
    goto L162_;
  } else {
  // L31()
    goto L31_;
  }

L31_:;
  // goto L33()
  // L33()
  goto L33_;

L32_:;
  // st qq = r103
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r103_, RHO);
  (void)(Rsh_Fir_reg_r103_);
  // goto L33()
  // L33()
  goto L33_;

L33_:;
  // sym13 = ldf c
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base13 = ldf c in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard13 then L166() else L167()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L166()
    goto L166_;
  } else {
  // L167()
    goto L167_;
  }

L34_:;
  // l13 = ld qq
  Rsh_Fir_reg_l13_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L169() else D40()
  // L169()
  goto L169_;

L35_:;
  // c31 = `as.logical`(r111)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c31 then L175() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L175()
    goto L175_;
  } else {
  // L36()
    goto L36_;
  }

L36_:;
  // qq10 = ld qq
  Rsh_Fir_reg_qq10_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L185() else D48()
  // L185()
  goto L185_;

L37_:;
  // goto L39(r114)
  // L39(r114)
  Rsh_Fir_reg_r119_ = Rsh_Fir_reg_r114_;
  goto L39_;

L38_:;
  // c32 = ldf c in base
  Rsh_Fir_reg_c32_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r118 = dyn c32(qq9, r116)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_qq9_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_r116_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c32_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L183() else D47()
  // L183()
  goto L183_;

L39_:;
  // goto L22(r119)
  // L22(r119)
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r119_;
  goto L22_;

L40_:;
  // c33 = `as.logical`(r121)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r121_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c33 then L191() else L41(c33)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L191()
    goto L191_;
  } else {
  // L41(c33)
    Rsh_Fir_reg_c35_ = Rsh_Fir_reg_c33_;
    goto L41_;
  }

L41_:;
  // c42 = `as.logical`(c35)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_c35_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c42 then L197() else L43(c42)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L197()
    goto L197_;
  } else {
  // L43(c42)
    Rsh_Fir_reg_c44_ = Rsh_Fir_reg_c42_;
    goto L43_;
  }

L42_:;
  // r126 = `!`(r124)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r124_;
  Rsh_Fir_reg_r126_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // c39 = `as.logical`(r126)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r126_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // c40 = `&&`(c38, c39)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_c39_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L41(c40)
  // L41(c40)
  Rsh_Fir_reg_c35_ = Rsh_Fir_reg_c40_;
  goto L41_;

L43_:;
  // c51 = `as.logical`(c44)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_c44_;
  Rsh_Fir_reg_c51_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c51 then L203() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c51_)) {
  // L203()
    goto L203_;
  } else {
  // L45()
    goto L45_;
  }

L44_:;
  // st n = r128
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r128_, RHO);
  (void)(Rsh_Fir_reg_r128_);
  // c48 = `as.logical`(r128)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r128_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // c49 = `&&`(c47, c48)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_c47_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_c48_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L43(c49)
  // L43(c49)
  Rsh_Fir_reg_c44_ = Rsh_Fir_reg_c49_;
  goto L43_;

L45_:;
  // sym28 = ldf c
  Rsh_Fir_reg_sym28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base28 = ldf c in base
  Rsh_Fir_reg_base28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard28 = `==`.4(sym28, base28)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym28_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base28_;
  Rsh_Fir_reg_guard28_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard28 then L254() else L255()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard28_)) {
  // L254()
    goto L254_;
  } else {
  // L255()
    goto L255_;
  }

L46_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args36);
  // c54 = `<`.1(l14, i2)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c54_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if c54 then L209() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c54_)) {
  // L209()
    goto L209_;
  } else {
  // L57()
    goto L57_;
  }

L47_:;
  // st ii = dx17
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // sym24 = ldf length
  Rsh_Fir_reg_sym24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base24 = ldf length in base
  Rsh_Fir_reg_base24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard24 = `==`.4(sym24, base24)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym24_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base24_;
  Rsh_Fir_reg_guard24_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard24 then L215() else L216()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard24_)) {
  // L215()
    goto L215_;
  } else {
  // L216()
    goto L216_;
  }

L48_:;
  // l15 = ld ll
  Rsh_Fir_reg_l15_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // c56 = `is.object`(l15)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_reg_c56_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if c56 then L219() else L220(i13, r150, l15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c56_)) {
  // L219()
    goto L219_;
  } else {
  // L220(i13, r150, l15)
    Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i13_;
    Rsh_Fir_reg_r153_ = Rsh_Fir_reg_r150_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l15_;
    goto L220_;
  }

L49_:;
  // st ll = dx19
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // sym25 = ldf oldClass
  Rsh_Fir_reg_sym25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base25 = ldf oldClass in base
  Rsh_Fir_reg_base25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard25 = `==`.4(sym25, base25)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym25_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base25_;
  Rsh_Fir_reg_guard25_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard25 then L223() else L224()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard25_)) {
  // L223()
    goto L223_;
  } else {
  // L224()
    goto L224_;
  }

L50_:;
  // st cls = r158
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r158_, RHO);
  (void)(Rsh_Fir_reg_r158_);
  // sym26 = ldf length
  Rsh_Fir_reg_sym26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base26 = ldf length in base
  Rsh_Fir_reg_base26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard26 = `==`.4(sym26, base26)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym26_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base26_;
  Rsh_Fir_reg_guard26_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard26 then L227() else L228()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard26_)) {
  // L227()
    goto L227_;
  } else {
  // L228()
    goto L228_;
  }

L51_:;
  // c57 = `as.logical`(r161)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r161_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c57 then L231() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c57_)) {
  // L231()
    goto L231_;
  } else {
  // L52()
    goto L52_;
  }

L52_:;
  // goto L54(i25, "-none-")
  // L54(i25, "-none-")
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i25_;
  Rsh_Fir_reg_dx22_ = Rsh_const(CCP, 32);
  goto L54_;

L53_:;
  // goto L54(i31, dx21)
  // L54(i31, dx21)
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i31_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx21_;
  goto L54_;

L54_:;
  // l18 = ld sumry
  Rsh_Fir_reg_l18_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // c59 = `is.object`(l18)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if c59 then L237() else L238(i32, dx22, l18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c59_)) {
  // L237()
    goto L237_;
  } else {
  // L238(i32, dx22, l18)
    Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i32_;
    Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx22_;
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_l18_;
    goto L238_;
  }

L55_:;
  // st sumry = dx28
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_dx28_, RHO);
  (void)(Rsh_Fir_reg_dx28_);
  // mode = ldf mode
  Rsh_Fir_reg_mode = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L241() else D71()
  // L241()
  goto L241_;

L56_:;
  // st sumry = dx30
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_dx30_, RHO);
  (void)(Rsh_Fir_reg_dx30_);
  // goto L46(i42)
  // L46(i42)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i42_;
  goto L46_;

L57_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args44[4];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args44[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args44[3] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // object35 = ld object
  Rsh_Fir_reg_object35_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L210() else D60()
  // L210()
  goto L210_;

L58_:;
  // st sumry = dx32
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_dx32_, RHO);
  (void)(Rsh_Fir_reg_dx32_);
  // sumry = ld sumry
  Rsh_Fir_reg_sumry = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L252() else D76()
  // L252()
  goto L252_;

L59_:;
  // sym30 = ldf class
  Rsh_Fir_reg_sym30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base30 = ldf class in base
  Rsh_Fir_reg_base30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard30 = `==`.4(sym30, base30)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym30_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base30_;
  Rsh_Fir_reg_guard30_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard30 then L260() else L261()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard30_)) {
  // L260()
    goto L260_;
  } else {
  // L261()
    goto L261_;
  }

L60_:;
  // mode1 = ldf mode
  Rsh_Fir_reg_mode1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L264() else D81()
  // L264()
  goto L264_;

L61_:;
  // l27 = ld value
  Rsh_Fir_reg_l27_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L270() else D85()
  // L270()
  goto L270_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L62_:;
  // p = prom<V +>{
  //   object1 = ld object;
  //   object2 = force? object1;
  //   checkMissing(object2);
  //   return object2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner890012476_, CCP, RHO);
  // r1 = dyn is_factor(p)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_factor, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L63() else D1()
  // L63()
  goto L63_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L63_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if c then L64() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L64()
    goto L64_;
  } else {
  // L1()
    goto L1_;
  }

L64_:;
  // summary_factor = ldf `summary.factor`
  Rsh_Fir_reg_summary_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L65() else D2()
  // L65()
  goto L65_;

D2_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L65_:;
  // p1 = prom<V +>{
  //   object3 = ld object;
  //   object4 = force? object3;
  //   checkMissing(object4);
  //   return object4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner890012476_1, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // r3 = dyn summary_factor[, `...`](p1, ddd1)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_summary_factor, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L66() else D3()
  // L66()
  goto L66_;

D3_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L66_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_;

L69_:;
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L71() else D4()
  // L71()
  goto L71_;

L70_:;
  // r6 = dyn base(<sym object>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L3_;

D4_:;
  // deopt 12 [object5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_object5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L71_:;
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r8 = dyn is_matrix(object6)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_object6_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L72() else D5()
  // L72()
  goto L72_;

D5_:;
  // deopt 15 [r8]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L3_;

L73_:;
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard1 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L74_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r11 = dyn missing(<sym digits>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(r11)
  // L5(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L5_;

L75_:;
  // r9 = dyn base1(<sym digits>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L5_;

L76_:;
  // summary_matrix = ldf `summary.matrix`
  Rsh_Fir_reg_summary_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L77() else D6()
  // L77()
  goto L77_;

D6_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L77_:;
  // p2 = prom<V +>{
  //   object7 = ld object;
  //   object8 = force? object7;
  //   checkMissing(object8);
  //   return object8;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner890012476_2, CCP, RHO);
  // p3 = prom<V +>{
  //   quantile_type1 = ld `quantile.type`;
  //   quantile_type2 = force? quantile_type1;
  //   checkMissing(quantile_type2);
  //   return quantile_type2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner890012476_3, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // r14 = dyn summary_matrix[, `quantile.type`, `...`](p2, p3, ddd2)
  SEXP Rsh_Fir_array_args59[3];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args59[2] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names9[2] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_summary_matrix, 3, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L78() else D7()
  // L78()
  goto L78_;

D7_:;
  // deopt 25 [r14]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L78_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r14
  return Rsh_Fir_reg_r14_;

D8_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L81_:;
  // p4 = prom<V +>{
  //   object9 = ld object;
  //   object10 = force? object9;
  //   checkMissing(object10);
  //   return object10;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner890012476_4, CCP, RHO);
  // p5 = prom<V +>{
  //   digits1 = ld digits;
  //   digits2 = force? digits1;
  //   checkMissing(digits2);
  //   return digits2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner890012476_5, CCP, RHO);
  // p6 = prom<V +>{
  //   quantile_type3 = ld `quantile.type`;
  //   quantile_type4 = force? quantile_type3;
  //   checkMissing(quantile_type4);
  //   return quantile_type4;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner890012476_6, CCP, RHO);
  // ddd3 = ld `...`
  Rsh_Fir_reg_ddd3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // r20 = dyn summary_matrix1[, digits, `quantile.type`, `...`](p4, p5, p6, ddd3)
  SEXP Rsh_Fir_array_args63[4];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args63[2] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args63[3] = Rsh_Fir_reg_ddd3_;
  SEXP Rsh_Fir_array_arg_names10[4];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names10[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names10[3] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_summary_matrix1_, 4, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L82() else D9()
  // L82()
  goto L82_;

D9_:;
  // deopt 35 [r20]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L82_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r20
  return Rsh_Fir_reg_r20_;

L85_:;
  // object11 = ld object
  Rsh_Fir_reg_object11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L87() else D10()
  // L87()
  goto L87_;

L86_:;
  // r21 = dyn base2(<sym object>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L8(r21)
  // L8(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L8_;

D10_:;
  // deopt 40 [object11]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_object11_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L87_:;
  // object12 = force? object11
  Rsh_Fir_reg_object12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object11_);
  // checkMissing(object12)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_object12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // c3 = `is.logical`(object12)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_object12_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(385, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L8(c3)
  // L8(c3)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_c3_;
  goto L8_;

L88_:;
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard3 then L89() else L90()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L89()
    goto L89_;
  } else {
  // L90()
    goto L90_;
  }

L89_:;
  // table = ldf table
  Rsh_Fir_reg_table = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L91() else D11()
  // L91()
  goto L91_;

L90_:;
  // r23 = dyn base3[Mode, ]("logical", <lang {
  //   `<-`(tb, table(object, exclude=NULL, useNA="ifany"));
  //   if(`&&`(`!`(is.null(`<-`(n, `[[`(dimnames(tb), 1)))), any(`<-`(iN, is.na(n)))), `<-`(`[`(`[[`(dimnames(tb), 1), iN), "NA's"));
  //   tb
  // }>)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L10(r23)
  // L10(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L10_;

D11_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

L91_:;
  // p7 = prom<V +>{
  //   object13 = ld object;
  //   object14 = force? object13;
  //   checkMissing(object14);
  //   return object14;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner890012476_7, CCP, RHO);
  // r26 = dyn table[, exclude, useNA](p7, NULL, "ifany")
  SEXP Rsh_Fir_array_args70[3];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args70[2] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 45);
  Rsh_Fir_array_arg_names13[2] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_table, 3, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L92() else D12()
  // L92()
  goto L92_;

D12_:;
  // deopt 54 [r26]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L92_:;
  // st tb = r26
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // sym4 = ldf `is.null`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base4 = ldf `is.null` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args71);
  // if guard4 then L93() else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L93()
    goto L93_;
  } else {
  // L94()
    goto L94_;
  }

L93_:;
  // sym5 = ldf dimnames
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base5 = ldf dimnames in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args72);
  // if guard5 then L95() else L96()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L95()
    goto L95_;
  } else {
  // L96()
    goto L96_;
  }

L94_:;
  // r27 = dyn base4(<lang `<-`(n, `[[`(dimnames(tb), 1))>)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L11(r27)
  // L11(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L11_;

L95_:;
  // tb = ld tb
  Rsh_Fir_reg_tb = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L97() else D13()
  // L97()
  goto L97_;

L96_:;
  // r29 = dyn base5(<sym tb>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L12(r29)
  // L12(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L12_;

D13_:;
  // deopt 59 [tb]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_tb;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L97_:;
  // tb1 = force? tb
  Rsh_Fir_reg_tb1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tb);
  // checkMissing(tb1)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_tb1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r31 = dyn dimnames(tb1)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_tb1_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L98() else D14()
  // L98()
  goto L98_;

D14_:;
  // deopt 62 [r31]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L98_:;
  // goto L12(r31)
  // L12(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L12_;

L99_:;
  // dr = tryDispatchBuiltin.1("[[", r30)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args77);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if dc then L101() else L100(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L101()
    goto L101_;
  } else {
  // L100(dr)
    Rsh_Fir_reg_r33_ = Rsh_Fir_reg_dr;
    goto L100_;
  }

L100_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r34 = dyn __(r33, 1)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L13(r34)
  // L13(r34)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r34_;
  goto L13_;

L101_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L13(dx)
  // L13(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L13_;

L102_:;
  // sym6 = ldf any
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base6 = ldf any in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args81);
  // if guard6 then L103() else L104()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L103()
    goto L103_;
  } else {
  // L104()
    goto L104_;
  }

L103_:;
  // sym7 = ldf `is.na`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base7 = ldf `is.na` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard7 then L105() else L106()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L105()
    goto L105_;
  } else {
  // L106()
    goto L106_;
  }

L104_:;
  // r36 = dyn base6(<lang `<-`(iN, is.na(n))>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L15(c7, r36)
  // L15(c7, r36)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L15_;

L105_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L107() else D15()
  // L107()
  goto L107_;

L106_:;
  // r38 = dyn base7(<sym n>)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L16(c7, r38)
  // L16(c7, r38)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L16_;

D15_:;
  // deopt 73 [c7, n]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(73, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L107_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r40 = dyn is_na(n1)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L108() else D16()
  // L108()
  goto L108_;

D16_:;
  // deopt 76 [c7, r40]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(76, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L108_:;
  // goto L16(c7, r40)
  // L16(c7, r40)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L16_;

D17_:;
  // deopt 79 [c15, r41]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(79, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L109_:;
  // goto L15(c15, r41)
  // L15(c15, r41)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r41_;
  goto L15_;

L111_:;
  // l = ld tb
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // dimnames1 = ldf dimnames
  Rsh_Fir_reg_dimnames1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L112() else D18()
  // L112()
  goto L112_;

D18_:;
  // deopt 85 ["NA's", l, "NA's"]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_const(CCP, 54);
  Rsh_Fir_deopt(85, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L112_:;
  // r42 = dyn dimnames1("NA's", NULL)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames1_, 2, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L113() else D19()
  // L113()
  goto L113_;

D19_:;
  // deopt 87 ["NA's", l, "NA's", r42]
  SEXP Rsh_Fir_array_deopt_stack14[4];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_const(CCP, 54);
  Rsh_Fir_array_deopt_stack14[3] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(87, 4, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L113_:;
  // c20 = `is.object`(r42)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if c20 then L114() else L115("NA's", l, r42, "NA's", r42)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L114()
    goto L114_;
  } else {
  // L115("NA's", l, r42, "NA's", r42)
    Rsh_Fir_reg_r47_ = Rsh_const(CCP, 54);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r42_;
    Rsh_Fir_reg_r49_ = Rsh_const(CCP, 54);
    Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r42_;
    goto L115_;
  }

L114_:;
  // dr2 = tryDispatchBuiltin.1("[[", r42)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args89);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // if dc1 then L116() else L115("NA's", l, r42, "NA's", dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L116()
    goto L116_;
  } else {
  // L115("NA's", l, r42, "NA's", dr2)
    Rsh_Fir_reg_r47_ = Rsh_const(CCP, 54);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r42_;
    Rsh_Fir_reg_r49_ = Rsh_const(CCP, 54);
    Rsh_Fir_reg_r50_ = Rsh_Fir_reg_dr2_;
    goto L115_;
  }

L115_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r57 = dyn __1(r50, 1)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_args91[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L18(r47, l2, r48, r49, r57)
  // L18(r47, l2, r48, r49, r57)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r57_;
  goto L18_;

L116_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // goto L18("NA's", l, r42, "NA's", dx2)
  // L18("NA's", l, r42, "NA's", dx2)
  Rsh_Fir_reg_r54_ = Rsh_const(CCP, 54);
  Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l;
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_r56_ = Rsh_const(CCP, 54);
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L18_;

L117_:;
  // dr4 = tryDispatchBuiltin.0("[<-", dx3, r56)
  SEXP Rsh_Fir_array_args93[3];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args93[2] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args93);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if dc2 then L119() else L118(r54, l4, r55, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L119()
    goto L119_;
  } else {
  // L118(r54, l4, r55, dr4)
    Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r54_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r55_;
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dr4_;
    goto L118_;
  }

L118_:;
  // iN = ld iN
  Rsh_Fir_reg_iN = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L120() else D20()
  // L120()
  goto L120_;

L119_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // goto L19(r54, l4, r55, dx6)
  // L19(r54, l4, r55, dx6)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L19_;

D20_:;
  // deopt 94 [r60, l6, r61, dx5, r56, iN]
  SEXP Rsh_Fir_array_deopt_stack15[6];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_r61_;
  Rsh_Fir_array_deopt_stack15[3] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack15[4] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_deopt_stack15[5] = Rsh_Fir_reg_iN;
  Rsh_Fir_deopt(94, 6, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L120_:;
  // iN1 = force? iN
  Rsh_Fir_reg_iN1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iN);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // r66 = dyn ___(dx5, r56, iN1)
  SEXP Rsh_Fir_array_args96[3];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_args96[2] = Rsh_Fir_reg_iN1_;
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L19(r60, l6, r61, r66)
  // L19(r60, l6, r61, r66)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r61_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r66_;
  goto L19_;

L121_:;
  // dr6 = tryDispatchBuiltin.0("[[<-", r65, dx7)
  SEXP Rsh_Fir_array_args97[3];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_args97[2] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args97);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // if dc3 then L123() else L122(r64, l8, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L123()
    goto L123_;
  } else {
  // L122(r64, l8, dr6)
    Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r64_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l8_;
    Rsh_Fir_reg_r70_ = Rsh_Fir_reg_dr6_;
    goto L122_;
  }

L122_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r73 = dyn ____(r70, dx7, 1)
  SEXP Rsh_Fir_array_args99[3];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args99[2] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L20(r69, l10, r73)
  // L20(r69, l10, r73)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r73_;
  goto L20_;

L123_:;
  // dx8 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // goto L20(r64, l8, dx8)
  // L20(r64, l8, dx8)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L20_;

D21_:;
  // deopt 100 [r72, l12, dx9]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_deopt(100, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L124_:;
  // r74 = dyn dimnames__(l12, NULL, dx9)
  SEXP Rsh_Fir_array_args101[3];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args101[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args101[2] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L125() else D22()
  // L125()
  goto L125_;

D22_:;
  // deopt 102 [r72, r74]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(102, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L125_:;
  // st tb = r74
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r74_, RHO);
  (void)(Rsh_Fir_reg_r74_);
  // goto L21()
  // L21()
  goto L21_;

D23_:;
  // deopt 107 [tb2]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_tb2_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L127_:;
  // tb3 = force? tb2
  Rsh_Fir_reg_tb3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tb2_);
  // checkMissing(tb3)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_tb3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // c23 = ldf c in base
  Rsh_Fir_reg_c23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r76 = dyn c23("logical", tb3)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_tb3_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c23_, 2, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L128() else D24()
  // L128()
  goto L128_;

D24_:;
  // deopt 110 [r76]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L128_:;
  // goto L10(r76)
  // L10(r76)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r76_;
  goto L10_;

L130_:;
  // object15 = ld object
  Rsh_Fir_reg_object15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L132() else D25()
  // L132()
  goto L132_;

L131_:;
  // r78 = dyn base8(<sym object>)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L23(r78)
  // L23(r78)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r78_;
  goto L23_;

D25_:;
  // deopt 113 [object15]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_object15_;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L132_:;
  // object16 = force? object15
  Rsh_Fir_reg_object16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object15_);
  // checkMissing(object16)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_object16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r80 = dyn is_numeric(object16)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_object16_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L133() else D26()
  // L133()
  goto L133_;

D26_:;
  // deopt 116 [r80]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L133_:;
  // goto L23(r80)
  // L23(r80)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r80_;
  goto L23_;

L134_:;
  // sym9 = ldf `is.na`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base9 = ldf `is.na` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args107);
  // if guard9 then L135() else L136()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L135()
    goto L135_;
  } else {
  // L136()
    goto L136_;
  }

L135_:;
  // object17 = ld object
  Rsh_Fir_reg_object17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L137() else D27()
  // L137()
  goto L137_;

L136_:;
  // r81 = dyn base9(<sym object>)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L25(r81)
  // L25(r81)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r81_;
  goto L25_;

D27_:;
  // deopt 119 [object17]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_object17_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L137_:;
  // object18 = force? object17
  Rsh_Fir_reg_object18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object17_);
  // checkMissing(object18)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_object18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r83 = dyn is_na1(object18)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_object18_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L138() else D28()
  // L138()
  goto L138_;

D28_:;
  // deopt 122 [r83]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L138_:;
  // goto L25(r83)
  // L25(r83)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r83_;
  goto L25_;

D29_:;
  // deopt 124 [object19]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_object19_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L139_:;
  // object20 = force? object19
  Rsh_Fir_reg_object20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object19_);
  // checkMissing(object20)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_object20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(object20)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_object20_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // if c25 then L140() else L141(object20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L140()
    goto L140_;
  } else {
  // L141(object20)
    Rsh_Fir_reg_object22_ = Rsh_Fir_reg_object20_;
    goto L141_;
  }

L140_:;
  // dr8 = tryDispatchBuiltin.1("[", object20)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_object20_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args113);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if dc4 then L142() else L141(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L142()
    goto L142_;
  } else {
  // L141(dr8)
    Rsh_Fir_reg_object22_ = Rsh_Fir_reg_dr8_;
    goto L141_;
  }

L141_:;
  // nas = ld nas
  Rsh_Fir_reg_nas = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L143() else D30()
  // L143()
  goto L143_;

L142_:;
  // dx10 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // goto L26(dx10)
  // L26(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L26_;

D30_:;
  // deopt 126 [object22, nas]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_object22_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_nas;
  Rsh_Fir_deopt(126, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L143_:;
  // nas1 = force? nas
  Rsh_Fir_reg_nas1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nas);
  // checkMissing(nas1)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_nas1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // r84 = `!`(nas1)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_nas1_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r85 = dyn __2(object22, r84)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_object22_;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L26(r85)
  // L26(r85)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r85_;
  goto L26_;

D31_:;
  // deopt 132 []
  Rsh_Fir_deopt(132, 0, NULL, CCP, RHO);
  return R_NilValue;

L144_:;
  // r86 = dyn __3("stats", "quantile")
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args119[1] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L145() else D32()
  // L145()
  goto L145_;

D32_:;
  // deopt 135 [r86]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(135, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L145_:;
  // checkFun.0(r86)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_r86_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args120));
  // r87 = r86 as cls
  Rsh_Fir_reg_r87_ = Rsh_Fir_cast(Rsh_Fir_reg_r86_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p8 = prom<V +>{
  //   object23 = ld object;
  //   object24 = force? object23;
  //   checkMissing(object24);
  //   return object24;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner890012476_8, CCP, RHO);
  // p9 = prom<V +>{
  //   quantile_type5 = ld `quantile.type`;
  //   quantile_type6 = force? quantile_type5;
  //   checkMissing(quantile_type6);
  //   return quantile_type6;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner890012476_9, CCP, RHO);
  // r90 = dyn r87[, names, type](p8, FALSE, p9)
  SEXP Rsh_Fir_array_args123[3];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args123[1] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args123[2] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names33[3];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = Rsh_const(CCP, 64);
  Rsh_Fir_array_arg_names33[2] = Rsh_const(CCP, 65);
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r87_, 3, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L146() else D33()
  // L146()
  goto L146_;

D33_:;
  // deopt 142 [r90]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_deopt(142, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L146_:;
  // st qq = r90
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r90_, RHO);
  (void)(Rsh_Fir_reg_r90_);
  // sym10 = ldf c
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base10 = ldf c in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args124);
  // if guard10 then L147() else L148()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L147()
    goto L147_;
  } else {
  // L148()
    goto L148_;
  }

L147_:;
  // qq = ld qq
  Rsh_Fir_reg_qq = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L149() else D34()
  // L149()
  goto L149_;

L148_:;
  // r91 = dyn base10(<lang `[`(qq, `:`(1, 3))>, <lang mean(object)>, <lang `[`(qq, `:`(4, 5))>)
  SEXP Rsh_Fir_array_args125[3];
  Rsh_Fir_array_args125[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args125[1] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args125[2] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 3, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L27(r91)
  // L27(r91)
  Rsh_Fir_reg_r92_ = Rsh_Fir_reg_r91_;
  goto L27_;

D34_:;
  // deopt 146 [qq]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_qq;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L149_:;
  // qq1 = force? qq
  Rsh_Fir_reg_qq1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qq);
  // checkMissing(qq1)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_qq1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // c26 = `is.object`(qq1)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_qq1_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // if c26 then L150() else L151(qq1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L150()
    goto L150_;
  } else {
  // L151(qq1)
    Rsh_Fir_reg_qq3_ = Rsh_Fir_reg_qq1_;
    goto L151_;
  }

L150_:;
  // dr10 = tryDispatchBuiltin.1("[", qq1)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_qq1_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args128);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // if dc5 then L152() else L151(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L152()
    goto L152_;
  } else {
  // L151(dr10)
    Rsh_Fir_reg_qq3_ = Rsh_Fir_reg_dr10_;
    goto L151_;
  }

L151_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r93 = dyn __4(qq3, <int 1, 2, 3>)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_qq3_;
  Rsh_Fir_array_args130[1] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L28(r93)
  // L28(r93)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r93_;
  goto L28_;

L152_:;
  // dx12 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // goto L28(dx12)
  // L28(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L28_;

D35_:;
  // deopt 152 []
  Rsh_Fir_deopt(152, 0, NULL, CCP, RHO);
  return R_NilValue;

L153_:;
  // p10 = prom<V +>{
  //   object25 = ld object;
  //   object26 = force? object25;
  //   checkMissing(object26);
  //   return object26;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner890012476_10, CCP, RHO);
  // r95 = dyn mean(p10)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mean, 1, Rsh_Fir_array_args133, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L154() else D36()
  // L154()
  goto L154_;

D36_:;
  // deopt 154 [r95]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L154_:;
  // qq4 = ld qq
  Rsh_Fir_reg_qq4_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L155() else D37()
  // L155()
  goto L155_;

D37_:;
  // deopt 155 [qq4]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_qq4_;
  Rsh_Fir_deopt(155, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L155_:;
  // qq5 = force? qq4
  Rsh_Fir_reg_qq5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qq4_);
  // checkMissing(qq5)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_qq5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty()));
  // c27 = `is.object`(qq5)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_qq5_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // if c27 then L156() else L157(qq5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L156()
    goto L156_;
  } else {
  // L157(qq5)
    Rsh_Fir_reg_qq7_ = Rsh_Fir_reg_qq5_;
    goto L157_;
  }

L156_:;
  // dr12 = tryDispatchBuiltin.1("[", qq5)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_qq5_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args136);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // if dc6 then L158() else L157(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L158()
    goto L158_;
  } else {
  // L157(dr12)
    Rsh_Fir_reg_qq7_ = Rsh_Fir_reg_dr12_;
    goto L157_;
  }

L157_:;
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r96 = dyn __5(qq7, <int 4, 5>)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_qq7_;
  Rsh_Fir_array_args138[1] = Rsh_const(CCP, 70);
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L29(r96)
  // L29(r96)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r96_;
  goto L29_;

L158_:;
  // dx14 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // goto L29(dx14)
  // L29(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L29_;

D38_:;
  // deopt 161 [r97]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_deopt(161, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L159_:;
  // goto L27(r97)
  // L27(r97)
  Rsh_Fir_reg_r92_ = Rsh_Fir_reg_r97_;
  goto L27_;

L160_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r100 = dyn missing1(<sym digits>)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L30(r100)
  // L30(r100)
  Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r100_;
  goto L30_;

L161_:;
  // r98 = dyn base11(<sym digits>)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L30(r98)
  // L30(r98)
  Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r98_;
  goto L30_;

L162_:;
  // sym12 = ldf signif
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 71), RHO);
  // base12 = ldf signif in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args142);
  // if guard12 then L163() else L164()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L163()
    goto L163_;
  } else {
  // L164()
    goto L164_;
  }

L163_:;
  // signif = ldf signif in base
  Rsh_Fir_reg_signif = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // r104 = dyn signif(<sym qq>, <sym digits>)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args143[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_signif, 2, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L32(r104)
  // L32(r104)
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r104_;
  goto L32_;

L164_:;
  // r102 = dyn base12(<sym qq>, <sym digits>)
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args144[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 2, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L32(r102)
  // L32(r102)
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r102_;
  goto L32_;

L166_:;
  // c30 = ldf c in base
  Rsh_Fir_reg_c30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r108 = dyn c30("Min.", "1st Qu.", "Median", "Mean", "3rd Qu.", "Max.")
  SEXP Rsh_Fir_array_args145[6];
  Rsh_Fir_array_args145[0] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args145[1] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args145[2] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args145[3] = Rsh_const(CCP, 75);
  Rsh_Fir_array_args145[4] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args145[5] = Rsh_const(CCP, 77);
  SEXP Rsh_Fir_array_arg_names42[6];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_array_arg_names42[2] = R_MissingArg;
  Rsh_Fir_array_arg_names42[3] = R_MissingArg;
  Rsh_Fir_array_arg_names42[4] = R_MissingArg;
  Rsh_Fir_array_arg_names42[5] = R_MissingArg;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c30_, 6, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L168() else D39()
  // L168()
  goto L168_;

L167_:;
  // r106 = dyn base13("Min.", "1st Qu.", "Median", "Mean", "3rd Qu.", "Max.")
  SEXP Rsh_Fir_array_args146[6];
  Rsh_Fir_array_args146[0] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args146[1] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args146[2] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args146[3] = Rsh_const(CCP, 75);
  Rsh_Fir_array_args146[4] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args146[5] = Rsh_const(CCP, 77);
  SEXP Rsh_Fir_array_arg_names43[6];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_array_arg_names43[2] = R_MissingArg;
  Rsh_Fir_array_arg_names43[3] = R_MissingArg;
  Rsh_Fir_array_arg_names43[4] = R_MissingArg;
  Rsh_Fir_array_arg_names43[5] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 6, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L34(r106)
  // L34(r106)
  Rsh_Fir_reg_r107_ = Rsh_Fir_reg_r106_;
  goto L34_;

D39_:;
  // deopt 182 [r108]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_deopt(182, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L168_:;
  // goto L34(r108)
  // L34(r108)
  Rsh_Fir_reg_r107_ = Rsh_Fir_reg_r108_;
  goto L34_;

D40_:;
  // deopt 184 [r107, l13, r107]
  SEXP Rsh_Fir_array_deopt_stack33[3];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r107_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_r107_;
  Rsh_Fir_deopt(184, 3, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L169_:;
  // r109 = dyn names__(l13, NULL, r107)
  SEXP Rsh_Fir_array_args147[3];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args147[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args147[2] = Rsh_Fir_reg_r107_;
  SEXP Rsh_Fir_array_arg_names44[3];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_array_arg_names44[2] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L170() else D41()
  // L170()
  goto L170_;

D41_:;
  // deopt 186 [r107, r109]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r107_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_r109_;
  Rsh_Fir_deopt(186, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L170_:;
  // st qq = r109
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r109_, RHO);
  (void)(Rsh_Fir_reg_r109_);
  // sym14 = ldf any
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base14 = ldf any in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args148[2];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args148[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args148);
  // if guard14 then L171() else L172()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L171()
    goto L171_;
  } else {
  // L172()
    goto L172_;
  }

L171_:;
  // nas2 = ld nas
  Rsh_Fir_reg_nas2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L173() else D42()
  // L173()
  goto L173_;

L172_:;
  // r110 = dyn base14(<sym nas>)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L35(r110)
  // L35(r110)
  Rsh_Fir_reg_r111_ = Rsh_Fir_reg_r110_;
  goto L35_;

D42_:;
  // deopt 190 [nas2]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_nas2_;
  Rsh_Fir_deopt(190, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L173_:;
  // nas3 = force? nas2
  Rsh_Fir_reg_nas3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nas2_);
  // checkMissing(nas3)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_nas3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r112 = dyn any1(nas3)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_nas3_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L174() else D43()
  // L174()
  goto L174_;

D43_:;
  // deopt 193 [r112]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r112_;
  Rsh_Fir_deopt(193, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L174_:;
  // goto L35(r112)
  // L35(r112)
  Rsh_Fir_reg_r111_ = Rsh_Fir_reg_r112_;
  goto L35_;

L175_:;
  // sym15 = ldf c
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base15 = ldf c in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args152);
  // if guard15 then L176() else L177()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L176()
    goto L176_;
  } else {
  // L177()
    goto L177_;
  }

L176_:;
  // qq8 = ld qq
  Rsh_Fir_reg_qq8_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L178() else D44()
  // L178()
  goto L178_;

L177_:;
  // r113 = dyn base15[, `NA's`](<sym qq>, <lang sum(nas)>)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args153[1] = Rsh_const(CCP, 78);
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = Rsh_const(CCP, 79);
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 2, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L37(r113)
  // L37(r113)
  Rsh_Fir_reg_r114_ = Rsh_Fir_reg_r113_;
  goto L37_;

D44_:;
  // deopt 196 [qq8]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_qq8_;
  Rsh_Fir_deopt(196, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L178_:;
  // qq9 = force? qq8
  Rsh_Fir_reg_qq9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qq8_);
  // checkMissing(qq9)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_qq9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty()));
  // sym16 = ldf sum
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 80), RHO);
  // base16 = ldf sum in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 80), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args155[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args155);
  // if guard16 then L179() else L180()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L179()
    goto L179_;
  } else {
  // L180()
    goto L180_;
  }

L179_:;
  // nas4 = ld nas
  Rsh_Fir_reg_nas4_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L181() else D45()
  // L181()
  goto L181_;

L180_:;
  // r115 = dyn base16(<sym nas>)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args156, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L38(r115)
  // L38(r115)
  Rsh_Fir_reg_r116_ = Rsh_Fir_reg_r115_;
  goto L38_;

D45_:;
  // deopt 200 [nas4]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_nas4_;
  Rsh_Fir_deopt(200, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L181_:;
  // nas5 = force? nas4
  Rsh_Fir_reg_nas5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nas4_);
  // checkMissing(nas5)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_nas5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty()));
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 80), RHO);
  // r117 = dyn sum(nas5)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_nas5_;
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L182() else D46()
  // L182()
  goto L182_;

D46_:;
  // deopt 203 [r117]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r117_;
  Rsh_Fir_deopt(203, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L182_:;
  // goto L38(r117)
  // L38(r117)
  Rsh_Fir_reg_r116_ = Rsh_Fir_reg_r117_;
  goto L38_;

D47_:;
  // deopt 206 [r118]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r118_;
  Rsh_Fir_deopt(206, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L183_:;
  // goto L37(r118)
  // L37(r118)
  Rsh_Fir_reg_r114_ = Rsh_Fir_reg_r118_;
  goto L37_;

D48_:;
  // deopt 207 [qq10]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_qq10_;
  Rsh_Fir_deopt(207, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L185_:;
  // qq11 = force? qq10
  Rsh_Fir_reg_qq11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_qq10_);
  // checkMissing(qq11)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_qq11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // goto L39(qq11)
  // L39(qq11)
  Rsh_Fir_reg_r119_ = Rsh_Fir_reg_qq11_;
  goto L39_;

L187_:;
  // object27 = ld object
  Rsh_Fir_reg_object27_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L189() else D49()
  // L189()
  goto L189_;

L188_:;
  // r120 = dyn base17(<sym object>)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r120_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L40(r120)
  // L40(r120)
  Rsh_Fir_reg_r121_ = Rsh_Fir_reg_r120_;
  goto L40_;

D49_:;
  // deopt 211 [object27]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_object27_;
  Rsh_Fir_deopt(211, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L189_:;
  // object28 = force? object27
  Rsh_Fir_reg_object28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object27_);
  // checkMissing(object28)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_object28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty()));
  // is_recursive = ldf `is.recursive` in base
  Rsh_Fir_reg_is_recursive = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r122 = dyn is_recursive(object28)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_object28_;
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_recursive, 1, Rsh_Fir_array_args162, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L190() else D50()
  // L190()
  goto L190_;

D50_:;
  // deopt 214 [r122]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r122_;
  Rsh_Fir_deopt(214, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L190_:;
  // goto L40(r122)
  // L40(r122)
  Rsh_Fir_reg_r121_ = Rsh_Fir_reg_r122_;
  goto L40_;

L191_:;
  // sym18 = ldf `is.language`
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 81), RHO);
  // base18 = ldf `is.language` in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 81), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args163[2];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args163[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args163);
  // if guard18 then L192() else L193()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L192()
    goto L192_;
  } else {
  // L193()
    goto L193_;
  }

L192_:;
  // object29 = ld object
  Rsh_Fir_reg_object29_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L194() else D51()
  // L194()
  goto L194_;

L193_:;
  // r123 = dyn base18(<sym object>)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r123_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L42(c33, r123)
  // L42(c33, r123)
  Rsh_Fir_reg_c38_ = Rsh_Fir_reg_c33_;
  Rsh_Fir_reg_r124_ = Rsh_Fir_reg_r123_;
  goto L42_;

D51_:;
  // deopt 217 [c33, object29]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_c33_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_object29_;
  Rsh_Fir_deopt(217, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L194_:;
  // object30 = force? object29
  Rsh_Fir_reg_object30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object29_);
  // checkMissing(object30)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_object30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty()));
  // is_language = ldf `is.language` in base
  Rsh_Fir_reg_is_language = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 81), RHO);
  // r125 = dyn is_language(object30)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_object30_;
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r125_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_language, 1, Rsh_Fir_array_args166, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L195() else D52()
  // L195()
  goto L195_;

D52_:;
  // deopt 220 [c33, r125]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_c33_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_r125_;
  Rsh_Fir_deopt(220, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L195_:;
  // goto L42(c33, r125)
  // L42(c33, r125)
  Rsh_Fir_reg_c38_ = Rsh_Fir_reg_c33_;
  Rsh_Fir_reg_r124_ = Rsh_Fir_reg_r125_;
  goto L42_;

L197_:;
  // sym19 = ldf length
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base19 = ldf length in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args167[2];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args167);
  // if guard19 then L198() else L199()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L198()
    goto L198_;
  } else {
  // L199()
    goto L199_;
  }

L198_:;
  // object31 = ld object
  Rsh_Fir_reg_object31_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L200() else D53()
  // L200()
  goto L200_;

L199_:;
  // r127 = dyn base19(<sym object>)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args168, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L44(c42, r127)
  // L44(c42, r127)
  Rsh_Fir_reg_c47_ = Rsh_Fir_reg_c42_;
  Rsh_Fir_reg_r128_ = Rsh_Fir_reg_r127_;
  goto L44_;

D53_:;
  // deopt 225 [c42, object31]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_c42_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_object31_;
  Rsh_Fir_deopt(225, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L200_:;
  // object32 = force? object31
  Rsh_Fir_reg_object32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object31_);
  // checkMissing(object32)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_object32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r129 = dyn length(object32)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_object32_;
  SEXP Rsh_Fir_array_arg_names55[1];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_reg_r129_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args170, Rsh_Fir_array_arg_names55, CCP, RHO);
  // check L201() else D54()
  // L201()
  goto L201_;

D54_:;
  // deopt 228 [c42, r129]
  SEXP Rsh_Fir_array_deopt_stack47[2];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_c42_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_r129_;
  Rsh_Fir_deopt(228, 2, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L201_:;
  // goto L44(c42, r129)
  // L44(c42, r129)
  Rsh_Fir_reg_c47_ = Rsh_Fir_reg_c42_;
  Rsh_Fir_reg_r128_ = Rsh_Fir_reg_r129_;
  goto L44_;

L203_:;
  // array = ldf array
  Rsh_Fir_reg_array = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 82), RHO);
  // check L204() else D55()
  // L204()
  goto L204_;

D55_:;
  // deopt 232 []
  Rsh_Fir_deopt(232, 0, NULL, CCP, RHO);
  return R_NilValue;

L204_:;
  // p11 = prom<V +>{
  //   sym20 = ldf c;
  //   base20 = ldf c in base;
  //   guard20 = `==`.4(sym20, base20);
  //   if guard20 then L1() else L2();
  // L0(r131):
  //   return r131;
  // L1():
  //   n2 = ld n;
  //   n3 = force? n2;
  //   checkMissing(n3);
  //   c52 = ldf c in base;
  //   r132 = dyn c52(n3, 3);
  //   goto L0(r132);
  // L2():
  //   r130 = dyn base20(<sym n>, 3);
  //   goto L0(r130);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner890012476_11, CCP, RHO);
  // p12 = prom<V +>{
  //   sym21 = ldf list;
  //   base21 = ldf list in base;
  //   guard21 = `==`.4(sym21, base21);
  //   if guard21 then L3() else L4();
  // L0(r135):
  //   return r135;
  // L3():
  //   sym22 = ldf names;
  //   base22 = ldf names in base;
  //   guard22 = `==`.4(sym22, base22);
  //   if guard22 then L5() else L6();
  // L4():
  //   r134 = dyn base21(<lang names(object)>, <lang c("Length", "Class", "Mode")>);
  //   goto L0(r134);
  // L1(r137):
  //   sym23 = ldf c;
  //   base23 = ldf c in base;
  //   guard23 = `==`.4(sym23, base23);
  //   if guard23 then L7() else L8();
  // L5():
  //   object33 = ld object;
  //   object34 = force? object33;
  //   checkMissing(object34);
  //   names = ldf names in base;
  //   r138 = dyn names(object34);
  //   goto L1(r138);
  // L6():
  //   r136 = dyn base22(<sym object>);
  //   goto L1(r136);
  // L2(r140):
  //   list = ldf list in base;
  //   r142 = dyn list(r137, r140);
  //   goto L0(r142);
  // L7():
  //   c53 = ldf c in base;
  //   r141 = dyn c53("Length", "Class", "Mode");
  //   goto L2(r141);
  // L8():
  //   r139 = dyn base23("Length", "Class", "Mode");
  //   goto L2(r139);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner890012476_12, CCP, RHO);
  // r144 = dyn array("", p11, p12)
  SEXP Rsh_Fir_array_args185[3];
  Rsh_Fir_array_args185[0] = Rsh_const(CCP, 90);
  Rsh_Fir_array_args185[1] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args185[2] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names64[3];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_array_arg_names64[2] = R_MissingArg;
  Rsh_Fir_reg_r144_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_array, 3, Rsh_Fir_array_args185, Rsh_Fir_array_arg_names64, CCP, RHO);
  // check L205() else D56()
  // L205()
  goto L205_;

D56_:;
  // deopt 236 [r144]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r144_;
  Rsh_Fir_deopt(236, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L205_:;
  // st sumry = r144
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r144_, RHO);
  (void)(Rsh_Fir_reg_r144_);
  // numeric = ldf numeric
  Rsh_Fir_reg_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 91), RHO);
  // check L206() else D57()
  // L206()
  goto L206_;

D57_:;
  // deopt 239 []
  Rsh_Fir_deopt(239, 0, NULL, CCP, RHO);
  return R_NilValue;

L206_:;
  // p13 = prom<V +>{
  //   n4 = ld n;
  //   n5 = force? n4;
  //   checkMissing(n5);
  //   return n5;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner890012476_13, CCP, RHO);
  // r146 = dyn numeric(p13)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names65[1];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_reg_r146_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric, 1, Rsh_Fir_array_args187, Rsh_Fir_array_arg_names65, CCP, RHO);
  // check L207() else D58()
  // L207()
  goto L207_;

D58_:;
  // deopt 241 [r146]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r146_;
  Rsh_Fir_deopt(241, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L207_:;
  // st ll = r146
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r146_, RHO);
  (void)(Rsh_Fir_reg_r146_);
  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L208() else D59()
  // L208()
  goto L208_;

D59_:;
  // deopt 244 [1, n6]
  SEXP Rsh_Fir_array_deopt_stack50[2];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_n6_;
  Rsh_Fir_deopt(244, 2, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L208_:;
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // checkMissing(n7)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_n7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty()));
  // r147 = `:`(1, n7)
  SEXP Rsh_Fir_array_args189[2];
  Rsh_Fir_array_args189[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args189[1] = Rsh_Fir_reg_n7_;
  Rsh_Fir_reg_r147_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty());
  // s = toForSeq(r147)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_r147_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty());
  // l14 = length(s)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l14_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args191, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 92);
  // goto L46(i)
  // L46(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L46_;

L209_:;
  // format = ldf format
  Rsh_Fir_reg_format = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 93), RHO);
  // check L247() else D74()
  // L247()
  goto L247_;

D60_:;
  // deopt 247 [i2, object35]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_object35_;
  Rsh_Fir_deopt(247, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L210_:;
  // object36 = force? object35
  Rsh_Fir_reg_object36_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object35_);
  // checkMissing(object36)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_object36_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty()));
  // c55 = `is.object`(object36)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_object36_;
  Rsh_Fir_reg_c55_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty());
  // if c55 then L211() else L212(i2, object36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c55_)) {
  // L211()
    goto L211_;
  } else {
  // L212(i2, object36)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_object38_ = Rsh_Fir_reg_object36_;
    goto L212_;
  }

L211_:;
  // dr14 = tryDispatchBuiltin.1("[[", object36)
  SEXP Rsh_Fir_array_args194[2];
  Rsh_Fir_array_args194[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args194[1] = Rsh_Fir_reg_object36_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args194);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty());
  // if dc7 then L213() else L212(i2, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L213()
    goto L213_;
  } else {
  // L212(i2, dr14)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_object38_ = Rsh_Fir_reg_dr14_;
    goto L212_;
  }

L212_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L214() else D61()
  // L214()
  goto L214_;

L213_:;
  // dx16 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty());
  // goto L47(i2, dx16)
  // L47(i2, dx16)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L47_;

D61_:;
  // deopt 249 [i6, object38, i9]
  SEXP Rsh_Fir_array_deopt_stack52[3];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_object38_;
  Rsh_Fir_array_deopt_stack52[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(249, 3, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L214_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __6 = ldf `[[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r148 = dyn __6(object38, i10)
  SEXP Rsh_Fir_array_args197[2];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_object38_;
  Rsh_Fir_array_args197[1] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names66[2];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_array_arg_names66[1] = R_MissingArg;
  Rsh_Fir_reg_r148_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args197, Rsh_Fir_array_arg_names66, CCP, RHO);
  // goto L47(i6, r148)
  // L47(i6, r148)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r148_;
  goto L47_;

L215_:;
  // ii = ld ii
  Rsh_Fir_reg_ii = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L217() else D62()
  // L217()
  goto L217_;

L216_:;
  // r149 = dyn base24(<sym ii>)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names67[1];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_reg_r149_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base24_, 1, Rsh_Fir_array_args198, Rsh_Fir_array_arg_names67, CCP, RHO);
  // goto L48(i8, r149)
  // L48(i8, r149)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r150_ = Rsh_Fir_reg_r149_;
  goto L48_;

D62_:;
  // deopt 255 [i8, ii]
  SEXP Rsh_Fir_array_deopt_stack53[2];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_ii;
  Rsh_Fir_deopt(255, 2, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L217_:;
  // ii1 = force? ii
  Rsh_Fir_reg_ii1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ii);
  // checkMissing(ii1)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_ii1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args199, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r151 = dyn length1(ii1)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_ii1_;
  SEXP Rsh_Fir_array_arg_names68[1];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_reg_r151_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args200, Rsh_Fir_array_arg_names68, CCP, RHO);
  // check L218() else D63()
  // L218()
  goto L218_;

D63_:;
  // deopt 258 [i8, r151]
  SEXP Rsh_Fir_array_deopt_stack54[2];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack54[1] = Rsh_Fir_reg_r151_;
  Rsh_Fir_deopt(258, 2, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L218_:;
  // goto L48(i8, r151)
  // L48(i8, r151)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r150_ = Rsh_Fir_reg_r151_;
  goto L48_;

L219_:;
  // dr16 = tryDispatchBuiltin.0("[<-", l15, r150)
  SEXP Rsh_Fir_array_args201[3];
  Rsh_Fir_array_args201[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args201[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args201[2] = Rsh_Fir_reg_r150_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args201);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty());
  // if dc8 then L221() else L220(i13, r150, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L221()
    goto L221_;
  } else {
  // L220(i13, r150, dr16)
    Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i13_;
    Rsh_Fir_reg_r153_ = Rsh_Fir_reg_r150_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_dr16_;
    goto L220_;
  }

L220_:;
  // i18 = ld i
  Rsh_Fir_reg_i18_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L222() else D64()
  // L222()
  goto L222_;

L221_:;
  // dx18 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args203, Rsh_Fir_param_types_empty());
  // goto L49(i13, dx18)
  // L49(i13, dx18)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L49_;

D64_:;
  // deopt 260 [i15, r153, l17, r150, i18]
  SEXP Rsh_Fir_array_deopt_stack55[5];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_r153_;
  Rsh_Fir_array_deopt_stack55[2] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_deopt_stack55[3] = Rsh_Fir_reg_r150_;
  Rsh_Fir_array_deopt_stack55[4] = Rsh_Fir_reg_i18_;
  Rsh_Fir_deopt(260, 5, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L222_:;
  // i19 = force? i18
  Rsh_Fir_reg_i19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i18_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // r156 = dyn ___1(l17, r150, i19)
  SEXP Rsh_Fir_array_args204[3];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_args204[1] = Rsh_Fir_reg_r150_;
  Rsh_Fir_array_args204[2] = Rsh_Fir_reg_i19_;
  SEXP Rsh_Fir_array_arg_names69[3];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_array_arg_names69[1] = R_MissingArg;
  Rsh_Fir_array_arg_names69[2] = R_MissingArg;
  Rsh_Fir_reg_r156_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args204, Rsh_Fir_array_arg_names69, CCP, RHO);
  // goto L49(i15, r156)
  // L49(i15, r156)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r156_;
  goto L49_;

L223_:;
  // ii2 = ld ii
  Rsh_Fir_reg_ii2_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L225() else D65()
  // L225()
  goto L225_;

L224_:;
  // r157 = dyn base25(<sym ii>)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names70[1];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_reg_r157_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base25_, 1, Rsh_Fir_array_args205, Rsh_Fir_array_arg_names70, CCP, RHO);
  // goto L50(i17, r157)
  // L50(i17, r157)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_r158_ = Rsh_Fir_reg_r157_;
  goto L50_;

D65_:;
  // deopt 266 [i17, ii2]
  SEXP Rsh_Fir_array_deopt_stack56[2];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_ii2_;
  Rsh_Fir_deopt(266, 2, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L225_:;
  // ii3 = force? ii2
  Rsh_Fir_reg_ii3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ii2_);
  // checkMissing(ii3)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_ii3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty()));
  // oldClass = ldf oldClass in base
  Rsh_Fir_reg_oldClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r159 = dyn oldClass(ii3)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_ii3_;
  SEXP Rsh_Fir_array_arg_names71[1];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_reg_r159_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass, 1, Rsh_Fir_array_args207, Rsh_Fir_array_arg_names71, CCP, RHO);
  // check L226() else D66()
  // L226()
  goto L226_;

D66_:;
  // deopt 269 [i17, r159]
  SEXP Rsh_Fir_array_deopt_stack57[2];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack57[1] = Rsh_Fir_reg_r159_;
  Rsh_Fir_deopt(269, 2, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L226_:;
  // goto L50(i17, r159)
  // L50(i17, r159)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_r158_ = Rsh_Fir_reg_r159_;
  goto L50_;

L227_:;
  // cls = ld cls
  Rsh_Fir_reg_cls = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L229() else D67()
  // L229()
  goto L229_;

L228_:;
  // r160 = dyn base26(<sym cls>)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names72[1];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_reg_r160_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base26_, 1, Rsh_Fir_array_args208, Rsh_Fir_array_arg_names72, CCP, RHO);
  // goto L51(i22, r160)
  // L51(i22, r160)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i22_;
  Rsh_Fir_reg_r161_ = Rsh_Fir_reg_r160_;
  goto L51_;

D67_:;
  // deopt 273 [i22, cls]
  SEXP Rsh_Fir_array_deopt_stack58[2];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack58[1] = Rsh_Fir_reg_cls;
  Rsh_Fir_deopt(273, 2, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L229_:;
  // cls1 = force? cls
  Rsh_Fir_reg_cls1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cls);
  // checkMissing(cls1)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_cls1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r162 = dyn length2(cls1)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_cls1_;
  SEXP Rsh_Fir_array_arg_names73[1];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_reg_r162_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args210, Rsh_Fir_array_arg_names73, CCP, RHO);
  // check L230() else D68()
  // L230()
  goto L230_;

D68_:;
  // deopt 276 [i22, r162]
  SEXP Rsh_Fir_array_deopt_stack59[2];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack59[1] = Rsh_Fir_reg_r162_;
  Rsh_Fir_deopt(276, 2, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L230_:;
  // goto L51(i22, r162)
  // L51(i22, r162)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i22_;
  Rsh_Fir_reg_r161_ = Rsh_Fir_reg_r162_;
  goto L51_;

L231_:;
  // cls2 = ld cls
  Rsh_Fir_reg_cls2_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L232() else D69()
  // L232()
  goto L232_;

D69_:;
  // deopt 277 [i25, cls2]
  SEXP Rsh_Fir_array_deopt_stack60[2];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_i25_;
  Rsh_Fir_array_deopt_stack60[1] = Rsh_Fir_reg_cls2_;
  Rsh_Fir_deopt(277, 2, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L232_:;
  // cls3 = force? cls2
  Rsh_Fir_reg_cls3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cls2_);
  // checkMissing(cls3)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_cls3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty()));
  // c58 = `is.object`(cls3)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_cls3_;
  Rsh_Fir_reg_c58_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args212, Rsh_Fir_param_types_empty());
  // if c58 then L233() else L234(i25, cls3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c58_)) {
  // L233()
    goto L233_;
  } else {
  // L234(i25, cls3)
    Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i25_;
    Rsh_Fir_reg_cls5_ = Rsh_Fir_reg_cls3_;
    goto L234_;
  }

L233_:;
  // dr18 = tryDispatchBuiltin.1("[", cls3)
  SEXP Rsh_Fir_array_args213[2];
  Rsh_Fir_array_args213[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args213[1] = Rsh_Fir_reg_cls3_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args213);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty());
  // if dc9 then L235() else L234(i25, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L235()
    goto L235_;
  } else {
  // L234(i25, dr18)
    Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i25_;
    Rsh_Fir_reg_cls5_ = Rsh_Fir_reg_dr18_;
    goto L234_;
  }

L234_:;
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r163 = dyn __7(cls5, 1)
  SEXP Rsh_Fir_array_args215[2];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_cls5_;
  Rsh_Fir_array_args215[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names74[2];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_array_arg_names74[1] = R_MissingArg;
  Rsh_Fir_reg_r163_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args215, Rsh_Fir_array_arg_names74, CCP, RHO);
  // goto L53(i29, r163)
  // L53(i29, r163)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r163_;
  goto L53_;

L235_:;
  // dx20 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args216, Rsh_Fir_param_types_empty());
  // goto L53(i25, dx20)
  // L53(i25, dx20)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i25_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L53_;

L237_:;
  // dr20 = tryDispatchBuiltin.0("[<-", l18, dx22)
  SEXP Rsh_Fir_array_args217[3];
  Rsh_Fir_array_args217[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args217[1] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_args217[2] = Rsh_Fir_reg_dx22_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args217);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args218[1];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args218, Rsh_Fir_param_types_empty());
  // if dc10 then L239() else L238(i32, dx22, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L239()
    goto L239_;
  } else {
  // L238(i32, dx22, dr20)
    Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i32_;
    Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx22_;
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_dr20_;
    goto L238_;
  }

L238_:;
  // i37 = ld i
  Rsh_Fir_reg_i37_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L240() else D70()
  // L240()
  goto L240_;

L239_:;
  // dx26 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args219[1];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args219, Rsh_Fir_param_types_empty());
  // goto L55(i32, dx26)
  // L55(i32, dx26)
  Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i32_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx26_;
  goto L55_;

D70_:;
  // deopt 285 [i34, dx24, l20, dx22, i37]
  SEXP Rsh_Fir_array_deopt_stack61[5];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_i34_;
  Rsh_Fir_array_deopt_stack61[1] = Rsh_Fir_reg_dx24_;
  Rsh_Fir_array_deopt_stack61[2] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_deopt_stack61[3] = Rsh_Fir_reg_dx22_;
  Rsh_Fir_array_deopt_stack61[4] = Rsh_Fir_reg_i37_;
  Rsh_Fir_deopt(285, 5, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L240_:;
  // i38 = force? i37
  Rsh_Fir_reg_i38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i37_);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // r164 = dyn ___2(l20, dx22, i38, 2)
  SEXP Rsh_Fir_array_args220[4];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_args220[1] = Rsh_Fir_reg_dx22_;
  Rsh_Fir_array_args220[2] = Rsh_Fir_reg_i38_;
  Rsh_Fir_array_args220[3] = Rsh_const(CCP, 94);
  SEXP Rsh_Fir_array_arg_names75[4];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_array_arg_names75[1] = R_MissingArg;
  Rsh_Fir_array_arg_names75[2] = R_MissingArg;
  Rsh_Fir_array_arg_names75[3] = R_MissingArg;
  Rsh_Fir_reg_r164_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 4, Rsh_Fir_array_args220, Rsh_Fir_array_arg_names75, CCP, RHO);
  // goto L55(i34, r164)
  // L55(i34, r164)
  Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i34_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_r164_;
  goto L55_;

D71_:;
  // deopt 291 [i36]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_i36_;
  Rsh_Fir_deopt(291, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L241_:;
  // p14 = prom<V +>{
  //   ii4 = ld ii;
  //   ii5 = force? ii4;
  //   checkMissing(ii5);
  //   return ii5;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner890012476_14, CCP, RHO);
  // r166 = dyn mode(p14)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names76[1];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_reg_r166_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mode, 1, Rsh_Fir_array_args222, Rsh_Fir_array_arg_names76, CCP, RHO);
  // check L242() else D72()
  // L242()
  goto L242_;

D72_:;
  // deopt 293 [i36, r166]
  SEXP Rsh_Fir_array_deopt_stack63[2];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_i36_;
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_r166_;
  Rsh_Fir_deopt(293, 2, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L242_:;
  // l21 = ld sumry
  Rsh_Fir_reg_l21_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // c60 = `is.object`(l21)
  SEXP Rsh_Fir_array_args223[1];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_l21_;
  Rsh_Fir_reg_c60_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty());
  // if c60 then L243() else L244(i36, r166, l21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c60_)) {
  // L243()
    goto L243_;
  } else {
  // L244(i36, r166, l21)
    Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i36_;
    Rsh_Fir_reg_r168_ = Rsh_Fir_reg_r166_;
    Rsh_Fir_reg_l23_ = Rsh_Fir_reg_l21_;
    goto L244_;
  }

L243_:;
  // dr22 = tryDispatchBuiltin.0("[<-", l21, r166)
  SEXP Rsh_Fir_array_args224[3];
  Rsh_Fir_array_args224[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args224[1] = Rsh_Fir_reg_l21_;
  Rsh_Fir_array_args224[2] = Rsh_Fir_reg_r166_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args224);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args225[1];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args225, Rsh_Fir_param_types_empty());
  // if dc11 then L245() else L244(i36, r166, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L245()
    goto L245_;
  } else {
  // L244(i36, r166, dr22)
    Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i36_;
    Rsh_Fir_reg_r168_ = Rsh_Fir_reg_r166_;
    Rsh_Fir_reg_l23_ = Rsh_Fir_reg_dr22_;
    goto L244_;
  }

L244_:;
  // i43 = ld i
  Rsh_Fir_reg_i43_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L246() else D73()
  // L246()
  goto L246_;

L245_:;
  // dx29 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty());
  // goto L56(i36, dx29)
  // L56(i36, dx29)
  Rsh_Fir_reg_i42_ = Rsh_Fir_reg_i36_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_dx29_;
  goto L56_;

D73_:;
  // deopt 295 [i40, r168, l23, r166, i43]
  SEXP Rsh_Fir_array_deopt_stack64[5];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_i40_;
  Rsh_Fir_array_deopt_stack64[1] = Rsh_Fir_reg_r168_;
  Rsh_Fir_array_deopt_stack64[2] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_deopt_stack64[3] = Rsh_Fir_reg_r166_;
  Rsh_Fir_array_deopt_stack64[4] = Rsh_Fir_reg_i43_;
  Rsh_Fir_deopt(295, 5, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L246_:;
  // i44 = force? i43
  Rsh_Fir_reg_i44_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i43_);
  // ___3 = ldf `[<-` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // r171 = dyn ___3(l23, r166, i44, 3)
  SEXP Rsh_Fir_array_args227[4];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_args227[1] = Rsh_Fir_reg_r166_;
  Rsh_Fir_array_args227[2] = Rsh_Fir_reg_i44_;
  Rsh_Fir_array_args227[3] = Rsh_const(CCP, 83);
  SEXP Rsh_Fir_array_arg_names77[4];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_array_arg_names77[1] = R_MissingArg;
  Rsh_Fir_array_arg_names77[2] = R_MissingArg;
  Rsh_Fir_array_arg_names77[3] = R_MissingArg;
  Rsh_Fir_reg_r171_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 4, Rsh_Fir_array_args227, Rsh_Fir_array_arg_names77, CCP, RHO);
  // goto L56(i40, r171)
  // L56(i40, r171)
  Rsh_Fir_reg_i42_ = Rsh_Fir_reg_i40_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_r171_;
  goto L56_;

D74_:;
  // deopt 304 []
  Rsh_Fir_deopt(304, 0, NULL, CCP, RHO);
  return R_NilValue;

L247_:;
  // p15 = prom<V +>{
  //   sym27 = ldf `as.integer`;
  //   base27 = ldf `as.integer` in base;
  //   guard27 = `==`.4(sym27, base27);
  //   if guard27 then L1() else L2();
  // L0(r173):
  //   return r173;
  // L1():
  //   ll = ld ll;
  //   ll1 = force? ll;
  //   checkMissing(ll1);
  //   as_integer = ldf `as.integer` in base;
  //   r174 = dyn as_integer(ll1);
  //   goto L0(r174);
  // L2():
  //   r172 = dyn base27(<sym ll>);
  //   goto L0(r172);
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner890012476_15, CCP, RHO);
  // r176 = dyn format(p15)
  SEXP Rsh_Fir_array_args232[1];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names80[1];
  Rsh_Fir_array_arg_names80[0] = R_MissingArg;
  Rsh_Fir_reg_r176_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format, 1, Rsh_Fir_array_args232, Rsh_Fir_array_arg_names80, CCP, RHO);
  // check L248() else D75()
  // L248()
  goto L248_;

D75_:;
  // deopt 306 [r176]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_r176_;
  Rsh_Fir_deopt(306, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L248_:;
  // l24 = ld sumry
  Rsh_Fir_reg_l24_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // c61 = `is.object`(l24)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_l24_;
  Rsh_Fir_reg_c61_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty());
  // if c61 then L249() else L250(r176)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c61_)) {
  // L249()
    goto L249_;
  } else {
  // L250(r176)
    Rsh_Fir_reg_r178_ = Rsh_Fir_reg_r176_;
    goto L250_;
  }

L249_:;
  // dr24 = tryDispatchBuiltin.0("[<-", l24, r176)
  SEXP Rsh_Fir_array_args234[3];
  Rsh_Fir_array_args234[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args234[1] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_args234[2] = Rsh_Fir_reg_r176_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args234);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args235[1];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args235, Rsh_Fir_param_types_empty());
  // if dc12 then L251() else L250(r176)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L251()
    goto L251_;
  } else {
  // L250(r176)
    Rsh_Fir_reg_r178_ = Rsh_Fir_reg_r176_;
    goto L250_;
  }

L250_:;
  // ___4 = ldf `[<-` in base
  Rsh_Fir_reg____4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // r181 = dyn ___4(l24, <missing>, 1, r176)
  SEXP Rsh_Fir_array_args236[4];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_args236[1] = Rsh_const(CCP, 96);
  Rsh_Fir_array_args236[2] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args236[3] = Rsh_Fir_reg_r176_;
  SEXP Rsh_Fir_array_arg_names81[4];
  Rsh_Fir_array_arg_names81[0] = R_MissingArg;
  Rsh_Fir_array_arg_names81[1] = R_MissingArg;
  Rsh_Fir_array_arg_names81[2] = R_MissingArg;
  Rsh_Fir_array_arg_names81[3] = R_MissingArg;
  Rsh_Fir_reg_r181_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____4_, 4, Rsh_Fir_array_args236, Rsh_Fir_array_arg_names81, CCP, RHO);
  // goto L58(r181)
  // L58(r181)
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_r181_;
  goto L58_;

L251_:;
  // dx31 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args237[1];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args237, Rsh_Fir_param_types_empty());
  // goto L58(dx31)
  // L58(dx31)
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx31_;
  goto L58_;

D76_:;
  // deopt 313 [sumry]
  SEXP Rsh_Fir_array_deopt_stack66[1];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_sumry;
  Rsh_Fir_deopt(313, 1, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L252_:;
  // sumry1 = force? sumry
  Rsh_Fir_reg_sumry1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sumry);
  // checkMissing(sumry1)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_sumry1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args238, Rsh_Fir_param_types_empty()));
  // goto L22(sumry1)
  // L22(sumry1)
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_sumry1_;
  goto L22_;

L254_:;
  // sym29 = ldf length
  Rsh_Fir_reg_sym29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base29 = ldf length in base
  Rsh_Fir_reg_base29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard29 = `==`.4(sym29, base29)
  SEXP Rsh_Fir_array_args239[2];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_sym29_;
  Rsh_Fir_array_args239[1] = Rsh_Fir_reg_base29_;
  Rsh_Fir_reg_guard29_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args239);
  // if guard29 then L256() else L257()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard29_)) {
  // L256()
    goto L256_;
  } else {
  // L257()
    goto L257_;
  }

L255_:;
  // r182 = dyn base28[Length, Class, Mode](<lang length(object)>, <lang class(object)>, <lang mode(object)>)
  SEXP Rsh_Fir_array_args240[3];
  Rsh_Fir_array_args240[0] = Rsh_const(CCP, 97);
  Rsh_Fir_array_args240[1] = Rsh_const(CCP, 98);
  Rsh_Fir_array_args240[2] = Rsh_const(CCP, 99);
  SEXP Rsh_Fir_array_arg_names82[3];
  Rsh_Fir_array_arg_names82[0] = Rsh_const(CCP, 100);
  Rsh_Fir_array_arg_names82[1] = Rsh_const(CCP, 101);
  Rsh_Fir_array_arg_names82[2] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r182_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base28_, 3, Rsh_Fir_array_args240, Rsh_Fir_array_arg_names82, CCP, RHO);
  // goto L22(r182)
  // L22(r182)
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r182_;
  goto L22_;

L256_:;
  // object39 = ld object
  Rsh_Fir_reg_object39_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L258() else D77()
  // L258()
  goto L258_;

L257_:;
  // r183 = dyn base29(<sym object>)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names83[1];
  Rsh_Fir_array_arg_names83[0] = R_MissingArg;
  Rsh_Fir_reg_r183_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base29_, 1, Rsh_Fir_array_args241, Rsh_Fir_array_arg_names83, CCP, RHO);
  // goto L59(r183)
  // L59(r183)
  Rsh_Fir_reg_r184_ = Rsh_Fir_reg_r183_;
  goto L59_;

D77_:;
  // deopt 319 [object39]
  SEXP Rsh_Fir_array_deopt_stack67[1];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_object39_;
  Rsh_Fir_deopt(319, 1, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L258_:;
  // object40 = force? object39
  Rsh_Fir_reg_object40_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object39_);
  // checkMissing(object40)
  SEXP Rsh_Fir_array_args242[1];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_object40_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args242, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r185 = dyn length3(object40)
  SEXP Rsh_Fir_array_args243[1];
  Rsh_Fir_array_args243[0] = Rsh_Fir_reg_object40_;
  SEXP Rsh_Fir_array_arg_names84[1];
  Rsh_Fir_array_arg_names84[0] = R_MissingArg;
  Rsh_Fir_reg_r185_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args243, Rsh_Fir_array_arg_names84, CCP, RHO);
  // check L259() else D78()
  // L259()
  goto L259_;

D78_:;
  // deopt 322 [r185]
  SEXP Rsh_Fir_array_deopt_stack68[1];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_r185_;
  Rsh_Fir_deopt(322, 1, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L259_:;
  // goto L59(r185)
  // L59(r185)
  Rsh_Fir_reg_r184_ = Rsh_Fir_reg_r185_;
  goto L59_;

L260_:;
  // object41 = ld object
  Rsh_Fir_reg_object41_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L262() else D79()
  // L262()
  goto L262_;

L261_:;
  // r186 = dyn base30(<sym object>)
  SEXP Rsh_Fir_array_args244[1];
  Rsh_Fir_array_args244[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names85[1];
  Rsh_Fir_array_arg_names85[0] = R_MissingArg;
  Rsh_Fir_reg_r186_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base30_, 1, Rsh_Fir_array_args244, Rsh_Fir_array_arg_names85, CCP, RHO);
  // goto L60(r186)
  // L60(r186)
  Rsh_Fir_reg_r187_ = Rsh_Fir_reg_r186_;
  goto L60_;

D79_:;
  // deopt 326 [object41]
  SEXP Rsh_Fir_array_deopt_stack69[1];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_object41_;
  Rsh_Fir_deopt(326, 1, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L262_:;
  // object42 = force? object41
  Rsh_Fir_reg_object42_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object41_);
  // checkMissing(object42)
  SEXP Rsh_Fir_array_args245[1];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_object42_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args245, Rsh_Fir_param_types_empty()));
  // class = ldf class in base
  Rsh_Fir_reg_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r188 = dyn class(object42)
  SEXP Rsh_Fir_array_args246[1];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_object42_;
  SEXP Rsh_Fir_array_arg_names86[1];
  Rsh_Fir_array_arg_names86[0] = R_MissingArg;
  Rsh_Fir_reg_r188_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class, 1, Rsh_Fir_array_args246, Rsh_Fir_array_arg_names86, CCP, RHO);
  // check L263() else D80()
  // L263()
  goto L263_;

D80_:;
  // deopt 329 [r188]
  SEXP Rsh_Fir_array_deopt_stack70[1];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_r188_;
  Rsh_Fir_deopt(329, 1, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L263_:;
  // goto L60(r188)
  // L60(r188)
  Rsh_Fir_reg_r187_ = Rsh_Fir_reg_r188_;
  goto L60_;

D81_:;
  // deopt 332 []
  Rsh_Fir_deopt(332, 0, NULL, CCP, RHO);
  return R_NilValue;

L264_:;
  // p16 = prom<V +>{
  //   object43 = ld object;
  //   object44 = force? object43;
  //   checkMissing(object44);
  //   return object44;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner890012476_16, CCP, RHO);
  // r190 = dyn mode1(p16)
  SEXP Rsh_Fir_array_args248[1];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names87[1];
  Rsh_Fir_array_arg_names87[0] = R_MissingArg;
  Rsh_Fir_reg_r190_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mode1_, 1, Rsh_Fir_array_args248, Rsh_Fir_array_arg_names87, CCP, RHO);
  // check L265() else D82()
  // L265()
  goto L265_;

D82_:;
  // deopt 334 [r190]
  SEXP Rsh_Fir_array_deopt_stack71[1];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_r190_;
  Rsh_Fir_deopt(334, 1, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L265_:;
  // c62 = ldf c in base
  Rsh_Fir_reg_c62_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r191 = dyn c62(r184, r187, r190)
  SEXP Rsh_Fir_array_args249[3];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_r184_;
  Rsh_Fir_array_args249[1] = Rsh_Fir_reg_r187_;
  Rsh_Fir_array_args249[2] = Rsh_Fir_reg_r190_;
  SEXP Rsh_Fir_array_arg_names88[3];
  Rsh_Fir_array_arg_names88[0] = R_MissingArg;
  Rsh_Fir_array_arg_names88[1] = R_MissingArg;
  Rsh_Fir_array_arg_names88[2] = R_MissingArg;
  Rsh_Fir_reg_r191_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c62_, 3, Rsh_Fir_array_args249, Rsh_Fir_array_arg_names88, CCP, RHO);
  // check L266() else D83()
  // L266()
  goto L266_;

D83_:;
  // deopt 337 [r191]
  SEXP Rsh_Fir_array_deopt_stack72[1];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_r191_;
  Rsh_Fir_deopt(337, 1, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L266_:;
  // goto L22(r191)
  // L22(r191)
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r191_;
  goto L22_;

L267_:;
  // c63 = ldf c in base
  Rsh_Fir_reg_c63_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r194 = dyn c63("summaryDefault", "table")
  SEXP Rsh_Fir_array_args250[2];
  Rsh_Fir_array_args250[0] = Rsh_const(CCP, 102);
  Rsh_Fir_array_args250[1] = Rsh_const(CCP, 103);
  SEXP Rsh_Fir_array_arg_names89[2];
  Rsh_Fir_array_arg_names89[0] = R_MissingArg;
  Rsh_Fir_array_arg_names89[1] = R_MissingArg;
  Rsh_Fir_reg_r194_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c63_, 2, Rsh_Fir_array_args250, Rsh_Fir_array_arg_names89, CCP, RHO);
  // check L269() else D84()
  // L269()
  goto L269_;

L268_:;
  // r192 = dyn base31("summaryDefault", "table")
  SEXP Rsh_Fir_array_args251[2];
  Rsh_Fir_array_args251[0] = Rsh_const(CCP, 102);
  Rsh_Fir_array_args251[1] = Rsh_const(CCP, 103);
  SEXP Rsh_Fir_array_arg_names90[2];
  Rsh_Fir_array_arg_names90[0] = R_MissingArg;
  Rsh_Fir_array_arg_names90[1] = R_MissingArg;
  Rsh_Fir_reg_r192_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base31_, 2, Rsh_Fir_array_args251, Rsh_Fir_array_arg_names90, CCP, RHO);
  // goto L61(r192)
  // L61(r192)
  Rsh_Fir_reg_r193_ = Rsh_Fir_reg_r192_;
  goto L61_;

D84_:;
  // deopt 344 [r194]
  SEXP Rsh_Fir_array_deopt_stack73[1];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_r194_;
  Rsh_Fir_deopt(344, 1, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L269_:;
  // goto L61(r194)
  // L61(r194)
  Rsh_Fir_reg_r193_ = Rsh_Fir_reg_r194_;
  goto L61_;

D85_:;
  // deopt 346 [r193, l27, r193]
  SEXP Rsh_Fir_array_deopt_stack74[3];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_r193_;
  Rsh_Fir_array_deopt_stack74[1] = Rsh_Fir_reg_l27_;
  Rsh_Fir_array_deopt_stack74[2] = Rsh_Fir_reg_r193_;
  Rsh_Fir_deopt(346, 3, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L270_:;
  // r195 = dyn class__(l27, NULL, r193)
  SEXP Rsh_Fir_array_args252[3];
  Rsh_Fir_array_args252[0] = Rsh_Fir_reg_l27_;
  Rsh_Fir_array_args252[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args252[2] = Rsh_Fir_reg_r193_;
  SEXP Rsh_Fir_array_arg_names91[3];
  Rsh_Fir_array_arg_names91[0] = R_MissingArg;
  Rsh_Fir_array_arg_names91[1] = R_MissingArg;
  Rsh_Fir_array_arg_names91[2] = R_MissingArg;
  Rsh_Fir_reg_r195_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args252, Rsh_Fir_array_arg_names91, CCP, RHO);
  // check L271() else D86()
  // L271()
  goto L271_;

D86_:;
  // deopt 348 [r193, r195]
  SEXP Rsh_Fir_array_deopt_stack75[2];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_r193_;
  Rsh_Fir_array_deopt_stack75[1] = Rsh_Fir_reg_r195_;
  Rsh_Fir_deopt(348, 2, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L271_:;
  // st value = r195
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r195_, RHO);
  (void)(Rsh_Fir_reg_r195_);
  // value = ld value
  Rsh_Fir_reg_value = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L272() else D87()
  // L272()
  goto L272_;

D87_:;
  // deopt 350 [value]
  SEXP Rsh_Fir_array_deopt_stack76[1];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_value;
  Rsh_Fir_deopt(350, 1, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

L272_:;
  // value1 = force? value
  Rsh_Fir_reg_value1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value);
  // checkMissing(value1)
  SEXP Rsh_Fir_array_args253[1];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_value1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args253, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return value1
  return Rsh_Fir_reg_value1_;
}
SEXP Rsh_Fir_user_promise_inner890012476_(SEXP CCP, SEXP RHO) {
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return object2
  return Rsh_Fir_reg_object2_;
}
SEXP Rsh_Fir_user_promise_inner890012476_1(SEXP CCP, SEXP RHO) {
  // object3 = ld object
  Rsh_Fir_reg_object3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object4 = force? object3
  Rsh_Fir_reg_object4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object3_);
  // checkMissing(object4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_object4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // return object4
  return Rsh_Fir_reg_object4_;
}
SEXP Rsh_Fir_user_promise_inner890012476_2(SEXP CCP, SEXP RHO) {
  // object7 = ld object
  Rsh_Fir_reg_object7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object8 = force? object7
  Rsh_Fir_reg_object8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object7_);
  // checkMissing(object8)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_object8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return object8
  return Rsh_Fir_reg_object8_;
}
SEXP Rsh_Fir_user_promise_inner890012476_3(SEXP CCP, SEXP RHO) {
  // quantile_type1 = ld `quantile.type`
  Rsh_Fir_reg_quantile_type1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // quantile_type2 = force? quantile_type1
  Rsh_Fir_reg_quantile_type2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quantile_type1_);
  // checkMissing(quantile_type2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_quantile_type2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // return quantile_type2
  return Rsh_Fir_reg_quantile_type2_;
}
SEXP Rsh_Fir_user_promise_inner890012476_4(SEXP CCP, SEXP RHO) {
  // object9 = ld object
  Rsh_Fir_reg_object9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object10 = force? object9
  Rsh_Fir_reg_object10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object9_);
  // checkMissing(object10)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_object10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // return object10
  return Rsh_Fir_reg_object10_;
}
SEXP Rsh_Fir_user_promise_inner890012476_5(SEXP CCP, SEXP RHO) {
  // digits1 = ld digits
  Rsh_Fir_reg_digits1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // digits2 = force? digits1
  Rsh_Fir_reg_digits2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits1_);
  // checkMissing(digits2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_digits2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // return digits2
  return Rsh_Fir_reg_digits2_;
}
SEXP Rsh_Fir_user_promise_inner890012476_6(SEXP CCP, SEXP RHO) {
  // quantile_type3 = ld `quantile.type`
  Rsh_Fir_reg_quantile_type3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // quantile_type4 = force? quantile_type3
  Rsh_Fir_reg_quantile_type4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quantile_type3_);
  // checkMissing(quantile_type4)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_quantile_type4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return quantile_type4
  return Rsh_Fir_reg_quantile_type4_;
}
SEXP Rsh_Fir_user_promise_inner890012476_7(SEXP CCP, SEXP RHO) {
  // object13 = ld object
  Rsh_Fir_reg_object13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object14 = force? object13
  Rsh_Fir_reg_object14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object13_);
  // checkMissing(object14)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_object14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // return object14
  return Rsh_Fir_reg_object14_;
}
SEXP Rsh_Fir_user_promise_inner890012476_8(SEXP CCP, SEXP RHO) {
  // object23 = ld object
  Rsh_Fir_reg_object23_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object24 = force? object23
  Rsh_Fir_reg_object24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object23_);
  // checkMissing(object24)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_object24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty()));
  // return object24
  return Rsh_Fir_reg_object24_;
}
SEXP Rsh_Fir_user_promise_inner890012476_9(SEXP CCP, SEXP RHO) {
  // quantile_type5 = ld `quantile.type`
  Rsh_Fir_reg_quantile_type5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // quantile_type6 = force? quantile_type5
  Rsh_Fir_reg_quantile_type6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quantile_type5_);
  // checkMissing(quantile_type6)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_quantile_type6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // return quantile_type6
  return Rsh_Fir_reg_quantile_type6_;
}
SEXP Rsh_Fir_user_promise_inner890012476_10(SEXP CCP, SEXP RHO) {
  // object25 = ld object
  Rsh_Fir_reg_object25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object26 = force? object25
  Rsh_Fir_reg_object26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object25_);
  // checkMissing(object26)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_object26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty()));
  // return object26
  return Rsh_Fir_reg_object26_;
}
SEXP Rsh_Fir_user_promise_inner890012476_11(SEXP CCP, SEXP RHO) {
  // sym20 = ldf c
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base20 = ldf c in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args171[2];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args171[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args171);
  // if guard20 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
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
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty()));
  // c52 = ldf c in base
  Rsh_Fir_reg_c52_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r132 = dyn c52(n3, 3)
  SEXP Rsh_Fir_array_args173[2];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_array_args173[1] = Rsh_const(CCP, 83);
  SEXP Rsh_Fir_array_arg_names56[2];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_reg_r132_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c52_, 2, Rsh_Fir_array_args173, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L0(r132)
  // L0(r132)
  Rsh_Fir_reg_r131_ = Rsh_Fir_reg_r132_;
  goto L0_;

L2_:;
  // r130 = dyn base20(<sym n>, 3)
  SEXP Rsh_Fir_array_args174[2];
  Rsh_Fir_array_args174[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args174[1] = Rsh_const(CCP, 83);
  SEXP Rsh_Fir_array_arg_names57[2];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_reg_r130_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 2, Rsh_Fir_array_args174, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L0(r130)
  // L0(r130)
  Rsh_Fir_reg_r131_ = Rsh_Fir_reg_r130_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner890012476_12(SEXP CCP, SEXP RHO) {
  // sym21 = ldf list
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 84), RHO);
  // base21 = ldf list in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 84), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args175);
  // if guard21 then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // return r135
  return Rsh_Fir_reg_r135_;

L1_:;
  // sym23 = ldf c
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base23 = ldf c in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args176[2];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args176[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args176);
  // if guard23 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L2_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 84), RHO);
  // r142 = dyn list(r137, r140)
  SEXP Rsh_Fir_array_args177[2];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_r137_;
  Rsh_Fir_array_args177[1] = Rsh_Fir_reg_r140_;
  SEXP Rsh_Fir_array_arg_names58[2];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_array_arg_names58[1] = R_MissingArg;
  Rsh_Fir_reg_r142_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args177, Rsh_Fir_array_arg_names58, CCP, RHO);
  // goto L0(r142)
  // L0(r142)
  Rsh_Fir_reg_r135_ = Rsh_Fir_reg_r142_;
  goto L0_;

L3_:;
  // sym22 = ldf names
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 64), RHO);
  // base22 = ldf names in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args178[2];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args178[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args178);
  // if guard22 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // r134 = dyn base21(<lang names(object)>, <lang c("Length", "Class", "Mode")>)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_const(CCP, 85);
  Rsh_Fir_array_args179[1] = Rsh_const(CCP, 86);
  SEXP Rsh_Fir_array_arg_names59[2];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_array_arg_names59[1] = R_MissingArg;
  Rsh_Fir_reg_r134_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 2, Rsh_Fir_array_args179, Rsh_Fir_array_arg_names59, CCP, RHO);
  // goto L0(r134)
  // L0(r134)
  Rsh_Fir_reg_r135_ = Rsh_Fir_reg_r134_;
  goto L0_;

L5_:;
  // object33 = ld object
  Rsh_Fir_reg_object33_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object34 = force? object33
  Rsh_Fir_reg_object34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object33_);
  // checkMissing(object34)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_object34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // r138 = dyn names(object34)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_object34_;
  SEXP Rsh_Fir_array_arg_names60[1];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_reg_r138_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args181, Rsh_Fir_array_arg_names60, CCP, RHO);
  // goto L1(r138)
  // L1(r138)
  Rsh_Fir_reg_r137_ = Rsh_Fir_reg_r138_;
  goto L1_;

L6_:;
  // r136 = dyn base22(<sym object>)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names61[1];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_reg_r136_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 1, Rsh_Fir_array_args182, Rsh_Fir_array_arg_names61, CCP, RHO);
  // goto L1(r136)
  // L1(r136)
  Rsh_Fir_reg_r137_ = Rsh_Fir_reg_r136_;
  goto L1_;

L7_:;
  // c53 = ldf c in base
  Rsh_Fir_reg_c53_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r141 = dyn c53("Length", "Class", "Mode")
  SEXP Rsh_Fir_array_args183[3];
  Rsh_Fir_array_args183[0] = Rsh_const(CCP, 87);
  Rsh_Fir_array_args183[1] = Rsh_const(CCP, 88);
  Rsh_Fir_array_args183[2] = Rsh_const(CCP, 89);
  SEXP Rsh_Fir_array_arg_names62[3];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_array_arg_names62[1] = R_MissingArg;
  Rsh_Fir_array_arg_names62[2] = R_MissingArg;
  Rsh_Fir_reg_r141_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c53_, 3, Rsh_Fir_array_args183, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L2(r141)
  // L2(r141)
  Rsh_Fir_reg_r140_ = Rsh_Fir_reg_r141_;
  goto L2_;

L8_:;
  // r139 = dyn base23("Length", "Class", "Mode")
  SEXP Rsh_Fir_array_args184[3];
  Rsh_Fir_array_args184[0] = Rsh_const(CCP, 87);
  Rsh_Fir_array_args184[1] = Rsh_const(CCP, 88);
  Rsh_Fir_array_args184[2] = Rsh_const(CCP, 89);
  SEXP Rsh_Fir_array_arg_names63[3];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_array_arg_names63[1] = R_MissingArg;
  Rsh_Fir_array_arg_names63[2] = R_MissingArg;
  Rsh_Fir_reg_r139_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 3, Rsh_Fir_array_args184, Rsh_Fir_array_arg_names63, CCP, RHO);
  // goto L2(r139)
  // L2(r139)
  Rsh_Fir_reg_r140_ = Rsh_Fir_reg_r139_;
  goto L2_;
}
SEXP Rsh_Fir_user_promise_inner890012476_13(SEXP CCP, SEXP RHO) {
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty()));
  // return n5
  return Rsh_Fir_reg_n5_;
}
SEXP Rsh_Fir_user_promise_inner890012476_14(SEXP CCP, SEXP RHO) {
  // ii4 = ld ii
  Rsh_Fir_reg_ii4_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // ii5 = force? ii4
  Rsh_Fir_reg_ii5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ii4_);
  // checkMissing(ii5)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_ii5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args221, Rsh_Fir_param_types_empty()));
  // return ii5
  return Rsh_Fir_reg_ii5_;
}
SEXP Rsh_Fir_user_promise_inner890012476_15(SEXP CCP, SEXP RHO) {
  // sym27 = ldf `as.integer`
  Rsh_Fir_reg_sym27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 95), RHO);
  // base27 = ldf `as.integer` in base
  Rsh_Fir_reg_base27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 95), RHO);
  // guard27 = `==`.4(sym27, base27)
  SEXP Rsh_Fir_array_args228[2];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_sym27_;
  Rsh_Fir_array_args228[1] = Rsh_Fir_reg_base27_;
  Rsh_Fir_reg_guard27_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args228);
  // if guard27 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard27_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r173
  return Rsh_Fir_reg_r173_;

L1_:;
  // ll = ld ll
  Rsh_Fir_reg_ll = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // ll1 = force? ll
  Rsh_Fir_reg_ll1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ll);
  // checkMissing(ll1)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_ll1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args229, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 95), RHO);
  // r174 = dyn as_integer(ll1)
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_ll1_;
  SEXP Rsh_Fir_array_arg_names78[1];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_reg_r174_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args230, Rsh_Fir_array_arg_names78, CCP, RHO);
  // goto L0(r174)
  // L0(r174)
  Rsh_Fir_reg_r173_ = Rsh_Fir_reg_r174_;
  goto L0_;

L2_:;
  // r172 = dyn base27(<sym ll>)
  SEXP Rsh_Fir_array_args231[1];
  Rsh_Fir_array_args231[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names79[1];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_reg_r172_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base27_, 1, Rsh_Fir_array_args231, Rsh_Fir_array_arg_names79, CCP, RHO);
  // goto L0(r172)
  // L0(r172)
  Rsh_Fir_reg_r173_ = Rsh_Fir_reg_r172_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner890012476_16(SEXP CCP, SEXP RHO) {
  // object43 = ld object
  Rsh_Fir_reg_object43_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object44 = force? object43
  Rsh_Fir_reg_object44_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object43_);
  // checkMissing(object44)
  SEXP Rsh_Fir_array_args247[1];
  Rsh_Fir_array_args247[0] = Rsh_Fir_reg_object44_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args247, Rsh_Fir_param_types_empty()));
  // return object44
  return Rsh_Fir_reg_object44_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
