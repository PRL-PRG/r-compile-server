#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3265645067_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3265645067_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3265645067_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_18(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_19(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_20(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_21(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3265645067_22(SEXP CCP, SEXP RHO);
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
  // r = clos inner3265645067
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3265645067_, RHO, CCP);
  // st `summary.glm` = r
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
SEXP Rsh_Fir_user_function_inner3265645067_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3265645067 dynamic dispatch ([object, dispersion, correlation, `symbolic.cor`, `...`])

  return Rsh_Fir_user_version_inner3265645067_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3265645067_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3265645067 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner3265645067/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_object;  // object
  SEXP Rsh_Fir_reg_dispersion;  // dispersion
  SEXP Rsh_Fir_reg_correlation;  // correlation
  SEXP Rsh_Fir_reg_symbolic_cor;  // symbolic_cor
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_dispersion_isMissing;  // dispersion_isMissing
  SEXP Rsh_Fir_reg_dispersion_orDefault;  // dispersion_orDefault
  SEXP Rsh_Fir_reg_correlation_isMissing;  // correlation_isMissing
  SEXP Rsh_Fir_reg_correlation_orDefault;  // correlation_orDefault
  SEXP Rsh_Fir_reg_symbolic_cor_isMissing;  // symbolic_cor_isMissing
  SEXP Rsh_Fir_reg_symbolic_cor_orDefault;  // symbolic_cor_orDefault
  SEXP Rsh_Fir_reg_object1_;  // object1
  SEXP Rsh_Fir_reg_object2_;  // object2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_object4_;  // object4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_dispersion1_;  // dispersion1
  SEXP Rsh_Fir_reg_dispersion2_;  // dispersion2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_object5_;  // object5
  SEXP Rsh_Fir_reg_object6_;  // object6
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_object8_;  // object8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_fam;  // fam
  SEXP Rsh_Fir_reg_fam1_;  // fam1
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_fam3_;  // fam3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_fam4_;  // fam4
  SEXP Rsh_Fir_reg_fam5_;  // fam5
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_fam7_;  // fam7
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_fam8_;  // fam8
  SEXP Rsh_Fir_reg_fam9_;  // fam9
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_fam11_;  // fam11
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_fam12_;  // fam12
  SEXP Rsh_Fir_reg_fam13_;  // fam13
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_fam15_;  // fam15
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_df_r;  // df_r
  SEXP Rsh_Fir_reg_df_r1_;  // df_r1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_object9_;  // object9
  SEXP Rsh_Fir_reg_object10_;  // object10
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_object12_;  // object12
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_object13_;  // object13
  SEXP Rsh_Fir_reg_object14_;  // object14
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_object16_;  // object16
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_object17_;  // object17
  SEXP Rsh_Fir_reg_object18_;  // object18
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_object20_;  // object20
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_object21_;  // object21
  SEXP Rsh_Fir_reg_object22_;  // object22
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_object24_;  // object24
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_df_r2_;  // df_r2
  SEXP Rsh_Fir_reg_df_r3_;  // df_r3
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_coef;  // coef
  SEXP Rsh_Fir_reg_object25_;  // object25
  SEXP Rsh_Fir_reg_object26_;  // object26
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_object27_;  // object27
  SEXP Rsh_Fir_reg_object28_;  // object28
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_object30_;  // object30
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_qr_lm;  // qr_lm
  SEXP Rsh_Fir_reg_object31_;  // object31
  SEXP Rsh_Fir_reg_object32_;  // object32
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_object33_;  // object33
  SEXP Rsh_Fir_reg_object34_;  // object34
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_object36_;  // object36
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_Qr;  // Qr
  SEXP Rsh_Fir_reg_Qr1_;  // Qr1
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_Qr3_;  // Qr3
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg_dx40_;  // dx40
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_dx44_;  // dx44
  SEXP Rsh_Fir_reg_dx45_;  // dx45
  SEXP Rsh_Fir_reg_dr30_;  // dr30
  SEXP Rsh_Fir_reg_dc15_;  // dc15
  SEXP Rsh_Fir_reg_dx47_;  // dx47
  SEXP Rsh_Fir_reg_dx48_;  // dx48
  SEXP Rsh_Fir_reg_dx49_;  // dx49
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_chol2inv;  // chol2inv
  SEXP Rsh_Fir_reg_Qr4_;  // Qr4
  SEXP Rsh_Fir_reg_Qr5_;  // Qr5
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_Qr7_;  // Qr7
  SEXP Rsh_Fir_reg_dr32_;  // dr32
  SEXP Rsh_Fir_reg_dc16_;  // dc16
  SEXP Rsh_Fir_reg_dx50_;  // dx50
  SEXP Rsh_Fir_reg_dx51_;  // dx51
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_dr34_;  // dr34
  SEXP Rsh_Fir_reg_dc17_;  // dc17
  SEXP Rsh_Fir_reg_dx54_;  // dx54
  SEXP Rsh_Fir_reg_dx55_;  // dx55
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_coef_p;  // coef_p
  SEXP Rsh_Fir_reg_coef_p1_;  // coef_p1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_coef_p2_;  // coef_p2
  SEXP Rsh_Fir_reg_coef_p3_;  // coef_p3
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_dimnames__;  // dimnames__
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_dispersion3_;  // dispersion3
  SEXP Rsh_Fir_reg_dispersion4_;  // dispersion4
  SEXP Rsh_Fir_reg_covmat_unscaled;  // covmat_unscaled
  SEXP Rsh_Fir_reg_covmat_unscaled1_;  // covmat_unscaled1
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_diag;  // diag
  SEXP Rsh_Fir_reg_covmat;  // covmat
  SEXP Rsh_Fir_reg_covmat1_;  // covmat1
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_var_cf;  // var_cf
  SEXP Rsh_Fir_reg_var_cf1_;  // var_cf1
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_coef_p4_;  // coef_p4
  SEXP Rsh_Fir_reg_coef_p5_;  // coef_p5
  SEXP Rsh_Fir_reg_s_err;  // s_err
  SEXP Rsh_Fir_reg_s_err1_;  // s_err1
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_est_disp;  // est_disp
  SEXP Rsh_Fir_reg_est_disp1_;  // est_disp1
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_c41_;  // c41
  SEXP Rsh_Fir_reg_pnorm;  // pnorm
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_tvalue;  // tvalue
  SEXP Rsh_Fir_reg_tvalue1_;  // tvalue1
  SEXP Rsh_Fir_reg_abs;  // abs
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_cbind;  // cbind
  SEXP Rsh_Fir_reg_coef_p6_;  // coef_p6
  SEXP Rsh_Fir_reg_coef_p7_;  // coef_p7
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_s_err2_;  // s_err2
  SEXP Rsh_Fir_reg_s_err3_;  // s_err3
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_tvalue2_;  // tvalue2
  SEXP Rsh_Fir_reg_tvalue3_;  // tvalue3
  SEXP Rsh_Fir_reg_p19_;  // p19
  SEXP Rsh_Fir_reg_pvalue;  // pvalue
  SEXP Rsh_Fir_reg_pvalue1_;  // pvalue1
  SEXP Rsh_Fir_reg_p20_;  // p20
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_coef_p8_;  // coef_p8
  SEXP Rsh_Fir_reg_coef_p9_;  // coef_p9
  SEXP Rsh_Fir_reg_names2_;  // names2
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_dn;  // dn
  SEXP Rsh_Fir_reg_dn1_;  // dn1
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_list1_;  // list1
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_dimnames__1_;  // dimnames__1
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_df_r4_;  // df_r4
  SEXP Rsh_Fir_reg_df_r5_;  // df_r5
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_pt;  // pt
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_r110_;  // r110
  SEXP Rsh_Fir_reg_tvalue4_;  // tvalue4
  SEXP Rsh_Fir_reg_tvalue5_;  // tvalue5
  SEXP Rsh_Fir_reg_abs1_;  // abs1
  SEXP Rsh_Fir_reg_r111_;  // r111
  SEXP Rsh_Fir_reg_r112_;  // r112
  SEXP Rsh_Fir_reg_p21_;  // p21
  SEXP Rsh_Fir_reg_df_r6_;  // df_r6
  SEXP Rsh_Fir_reg_df_r7_;  // df_r7
  SEXP Rsh_Fir_reg_p22_;  // p22
  SEXP Rsh_Fir_reg_r115_;  // r115
  SEXP Rsh_Fir_reg_r116_;  // r116
  SEXP Rsh_Fir_reg_cbind1_;  // cbind1
  SEXP Rsh_Fir_reg_coef_p10_;  // coef_p10
  SEXP Rsh_Fir_reg_coef_p11_;  // coef_p11
  SEXP Rsh_Fir_reg_p23_;  // p23
  SEXP Rsh_Fir_reg_s_err4_;  // s_err4
  SEXP Rsh_Fir_reg_s_err5_;  // s_err5
  SEXP Rsh_Fir_reg_p24_;  // p24
  SEXP Rsh_Fir_reg_tvalue6_;  // tvalue6
  SEXP Rsh_Fir_reg_tvalue7_;  // tvalue7
  SEXP Rsh_Fir_reg_p25_;  // p25
  SEXP Rsh_Fir_reg_pvalue2_;  // pvalue2
  SEXP Rsh_Fir_reg_pvalue3_;  // pvalue3
  SEXP Rsh_Fir_reg_p26_;  // p26
  SEXP Rsh_Fir_reg_r121_;  // r121
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r122_;  // r122
  SEXP Rsh_Fir_reg_r123_;  // r123
  SEXP Rsh_Fir_reg_sym18_;  // sym18
  SEXP Rsh_Fir_reg_base18_;  // base18
  SEXP Rsh_Fir_reg_guard18_;  // guard18
  SEXP Rsh_Fir_reg_r124_;  // r124
  SEXP Rsh_Fir_reg_r125_;  // r125
  SEXP Rsh_Fir_reg_coef_p12_;  // coef_p12
  SEXP Rsh_Fir_reg_coef_p13_;  // coef_p13
  SEXP Rsh_Fir_reg_names3_;  // names3
  SEXP Rsh_Fir_reg_r126_;  // r126
  SEXP Rsh_Fir_reg_sym19_;  // sym19
  SEXP Rsh_Fir_reg_base19_;  // base19
  SEXP Rsh_Fir_reg_guard19_;  // guard19
  SEXP Rsh_Fir_reg_r127_;  // r127
  SEXP Rsh_Fir_reg_r128_;  // r128
  SEXP Rsh_Fir_reg_dn2_;  // dn2
  SEXP Rsh_Fir_reg_dn3_;  // dn3
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_r129_;  // r129
  SEXP Rsh_Fir_reg_list2_;  // list2
  SEXP Rsh_Fir_reg_r130_;  // r130
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dimnames__2_;  // dimnames__2
  SEXP Rsh_Fir_reg_r131_;  // r131
  SEXP Rsh_Fir_reg_cbind2_;  // cbind2
  SEXP Rsh_Fir_reg_coef_p14_;  // coef_p14
  SEXP Rsh_Fir_reg_coef_p15_;  // coef_p15
  SEXP Rsh_Fir_reg_p27_;  // p27
  SEXP Rsh_Fir_reg_r133_;  // r133
  SEXP Rsh_Fir_reg_sym20_;  // sym20
  SEXP Rsh_Fir_reg_base20_;  // base20
  SEXP Rsh_Fir_reg_guard20_;  // guard20
  SEXP Rsh_Fir_reg_r134_;  // r134
  SEXP Rsh_Fir_reg_r135_;  // r135
  SEXP Rsh_Fir_reg_sym21_;  // sym21
  SEXP Rsh_Fir_reg_base21_;  // base21
  SEXP Rsh_Fir_reg_guard21_;  // guard21
  SEXP Rsh_Fir_reg_r136_;  // r136
  SEXP Rsh_Fir_reg_r137_;  // r137
  SEXP Rsh_Fir_reg_coef_p16_;  // coef_p16
  SEXP Rsh_Fir_reg_coef_p17_;  // coef_p17
  SEXP Rsh_Fir_reg_names4_;  // names4
  SEXP Rsh_Fir_reg_r138_;  // r138
  SEXP Rsh_Fir_reg_sym22_;  // sym22
  SEXP Rsh_Fir_reg_base22_;  // base22
  SEXP Rsh_Fir_reg_guard22_;  // guard22
  SEXP Rsh_Fir_reg_r139_;  // r139
  SEXP Rsh_Fir_reg_r140_;  // r140
  SEXP Rsh_Fir_reg_dn4_;  // dn4
  SEXP Rsh_Fir_reg_dn5_;  // dn5
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_r141_;  // r141
  SEXP Rsh_Fir_reg_list3_;  // list3
  SEXP Rsh_Fir_reg_r142_;  // r142
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dimnames__3_;  // dimnames__3
  SEXP Rsh_Fir_reg_r143_;  // r143
  SEXP Rsh_Fir_reg_NCOL;  // NCOL
  SEXP Rsh_Fir_reg_Qr8_;  // Qr8
  SEXP Rsh_Fir_reg_Qr9_;  // Qr9
  SEXP Rsh_Fir_reg_c46_;  // c46
  SEXP Rsh_Fir_reg_Qr11_;  // Qr11
  SEXP Rsh_Fir_reg_dr36_;  // dr36
  SEXP Rsh_Fir_reg_dc18_;  // dc18
  SEXP Rsh_Fir_reg_dx56_;  // dx56
  SEXP Rsh_Fir_reg_dx57_;  // dx57
  SEXP Rsh_Fir_reg_r144_;  // r144
  SEXP Rsh_Fir_reg_p28_;  // p28
  SEXP Rsh_Fir_reg_r146_;  // r146
  SEXP Rsh_Fir_reg_matrix;  // matrix
  SEXP Rsh_Fir_reg_r148_;  // r148
  SEXP Rsh_Fir_reg_sym23_;  // sym23
  SEXP Rsh_Fir_reg_base23_;  // base23
  SEXP Rsh_Fir_reg_guard23_;  // guard23
  SEXP Rsh_Fir_reg_r149_;  // r149
  SEXP Rsh_Fir_reg_r150_;  // r150
  SEXP Rsh_Fir_reg_sym24_;  // sym24
  SEXP Rsh_Fir_reg_base24_;  // base24
  SEXP Rsh_Fir_reg_guard24_;  // guard24
  SEXP Rsh_Fir_reg_r151_;  // r151
  SEXP Rsh_Fir_reg_r152_;  // r152
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_r153_;  // r153
  SEXP Rsh_Fir_reg_list4_;  // list4
  SEXP Rsh_Fir_reg_r154_;  // r154
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_dimnames__4_;  // dimnames__4
  SEXP Rsh_Fir_reg_r155_;  // r155
  SEXP Rsh_Fir_reg_matrix1_;  // matrix1
  SEXP Rsh_Fir_reg_r156_;  // r156
  SEXP Rsh_Fir_reg_sym25_;  // sym25
  SEXP Rsh_Fir_reg_base25_;  // base25
  SEXP Rsh_Fir_reg_guard25_;  // guard25
  SEXP Rsh_Fir_reg_r157_;  // r157
  SEXP Rsh_Fir_reg_r158_;  // r158
  SEXP Rsh_Fir_reg_aliased;  // aliased
  SEXP Rsh_Fir_reg_aliased1_;  // aliased1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r159_;  // r159
  SEXP Rsh_Fir_reg_sym26_;  // sym26
  SEXP Rsh_Fir_reg_base26_;  // base26
  SEXP Rsh_Fir_reg_guard26_;  // guard26
  SEXP Rsh_Fir_reg_r160_;  // r160
  SEXP Rsh_Fir_reg_r161_;  // r161
  SEXP Rsh_Fir_reg_sym27_;  // sym27
  SEXP Rsh_Fir_reg_base27_;  // base27
  SEXP Rsh_Fir_reg_guard27_;  // guard27
  SEXP Rsh_Fir_reg_r162_;  // r162
  SEXP Rsh_Fir_reg_r163_;  // r163
  SEXP Rsh_Fir_reg_c48_;  // c48
  SEXP Rsh_Fir_reg_r164_;  // r164
  SEXP Rsh_Fir_reg_sym28_;  // sym28
  SEXP Rsh_Fir_reg_base28_;  // base28
  SEXP Rsh_Fir_reg_guard28_;  // guard28
  SEXP Rsh_Fir_reg_r165_;  // r165
  SEXP Rsh_Fir_reg_r166_;  // r166
  SEXP Rsh_Fir_reg_object37_;  // object37
  SEXP Rsh_Fir_reg_object38_;  // object38
  SEXP Rsh_Fir_reg_names5_;  // names5
  SEXP Rsh_Fir_reg_r167_;  // r167
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r168_;  // r168
  SEXP Rsh_Fir_reg_sym29_;  // sym29
  SEXP Rsh_Fir_reg_base29_;  // base29
  SEXP Rsh_Fir_reg_guard29_;  // guard29
  SEXP Rsh_Fir_reg_r169_;  // r169
  SEXP Rsh_Fir_reg_r170_;  // r170
  SEXP Rsh_Fir_reg_object39_;  // object39
  SEXP Rsh_Fir_reg_object40_;  // object40
  SEXP Rsh_Fir_reg_c49_;  // c49
  SEXP Rsh_Fir_reg_object42_;  // object42
  SEXP Rsh_Fir_reg_dr38_;  // dr38
  SEXP Rsh_Fir_reg_dc19_;  // dc19
  SEXP Rsh_Fir_reg_dx58_;  // dx58
  SEXP Rsh_Fir_reg_dx59_;  // dx59
  SEXP Rsh_Fir_reg_keep;  // keep
  SEXP Rsh_Fir_reg_keep1_;  // keep1
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r171_;  // r171
  SEXP Rsh_Fir_reg_sym30_;  // sym30
  SEXP Rsh_Fir_reg_base30_;  // base30
  SEXP Rsh_Fir_reg_guard30_;  // guard30
  SEXP Rsh_Fir_reg_r172_;  // r172
  SEXP Rsh_Fir_reg_r173_;  // r173
  SEXP Rsh_Fir_reg_residuals;  // residuals
  SEXP Rsh_Fir_reg_object43_;  // object43
  SEXP Rsh_Fir_reg_object44_;  // object44
  SEXP Rsh_Fir_reg_p29_;  // p29
  SEXP Rsh_Fir_reg_r175_;  // r175
  SEXP Rsh_Fir_reg_coef_table;  // coef_table
  SEXP Rsh_Fir_reg_coef_table1_;  // coef_table1
  SEXP Rsh_Fir_reg_aliased2_;  // aliased2
  SEXP Rsh_Fir_reg_aliased3_;  // aliased3
  SEXP Rsh_Fir_reg_dispersion5_;  // dispersion5
  SEXP Rsh_Fir_reg_dispersion6_;  // dispersion6
  SEXP Rsh_Fir_reg_sym31_;  // sym31
  SEXP Rsh_Fir_reg_base31_;  // base31
  SEXP Rsh_Fir_reg_guard31_;  // guard31
  SEXP Rsh_Fir_reg_r176_;  // r176
  SEXP Rsh_Fir_reg_r177_;  // r177
  SEXP Rsh_Fir_reg_object45_;  // object45
  SEXP Rsh_Fir_reg_object46_;  // object46
  SEXP Rsh_Fir_reg_c50_;  // c50
  SEXP Rsh_Fir_reg_object48_;  // object48
  SEXP Rsh_Fir_reg_dr40_;  // dr40
  SEXP Rsh_Fir_reg_dc20_;  // dc20
  SEXP Rsh_Fir_reg_dx60_;  // dx60
  SEXP Rsh_Fir_reg_dx61_;  // dx61
  SEXP Rsh_Fir_reg_r178_;  // r178
  SEXP Rsh_Fir_reg_df_r8_;  // df_r8
  SEXP Rsh_Fir_reg_df_r9_;  // df_r9
  SEXP Rsh_Fir_reg_df_f;  // df_f
  SEXP Rsh_Fir_reg_df_f1_;  // df_f1
  SEXP Rsh_Fir_reg_c51_;  // c51
  SEXP Rsh_Fir_reg_r179_;  // r179
  SEXP Rsh_Fir_reg_covmat_unscaled2_;  // covmat_unscaled2
  SEXP Rsh_Fir_reg_covmat_unscaled3_;  // covmat_unscaled3
  SEXP Rsh_Fir_reg_covmat2_;  // covmat2
  SEXP Rsh_Fir_reg_covmat3_;  // covmat3
  SEXP Rsh_Fir_reg_list5_;  // list5
  SEXP Rsh_Fir_reg_r180_;  // r180
  SEXP Rsh_Fir_reg_c52_;  // c52
  SEXP Rsh_Fir_reg_r181_;  // r181
  SEXP Rsh_Fir_reg_correlation1_;  // correlation1
  SEXP Rsh_Fir_reg_correlation2_;  // correlation2
  SEXP Rsh_Fir_reg_c53_;  // c53
  SEXP Rsh_Fir_reg_c55_;  // c55
  SEXP Rsh_Fir_reg_p30_;  // p30
  SEXP Rsh_Fir_reg_p31_;  // p31
  SEXP Rsh_Fir_reg_r182_;  // r182
  SEXP Rsh_Fir_reg_c56_;  // c56
  SEXP Rsh_Fir_reg_c57_;  // c57
  SEXP Rsh_Fir_reg_c59_;  // c59
  SEXP Rsh_Fir_reg_sym32_;  // sym32
  SEXP Rsh_Fir_reg_base32_;  // base32
  SEXP Rsh_Fir_reg_guard32_;  // guard32
  SEXP Rsh_Fir_reg_r183_;  // r183
  SEXP Rsh_Fir_reg_r184_;  // r184
  SEXP Rsh_Fir_reg_diag1_;  // diag1
  SEXP Rsh_Fir_reg_covmat_unscaled4_;  // covmat_unscaled4
  SEXP Rsh_Fir_reg_covmat_unscaled5_;  // covmat_unscaled5
  SEXP Rsh_Fir_reg_p32_;  // p32
  SEXP Rsh_Fir_reg_r186_;  // r186
  SEXP Rsh_Fir_reg_r187_;  // r187
  SEXP Rsh_Fir_reg_covmat_unscaled6_;  // covmat_unscaled6
  SEXP Rsh_Fir_reg_covmat_unscaled7_;  // covmat_unscaled7
  SEXP Rsh_Fir_reg_outer;  // outer
  SEXP Rsh_Fir_reg_dd;  // dd
  SEXP Rsh_Fir_reg_dd1_;  // dd1
  SEXP Rsh_Fir_reg_p33_;  // p33
  SEXP Rsh_Fir_reg_dd2_;  // dd2
  SEXP Rsh_Fir_reg_dd3_;  // dd3
  SEXP Rsh_Fir_reg_p34_;  // p34
  SEXP Rsh_Fir_reg_r190_;  // r190
  SEXP Rsh_Fir_reg_r191_;  // r191
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_c60_;  // c60
  SEXP Rsh_Fir_reg_r193_;  // r193
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_dr42_;  // dr42
  SEXP Rsh_Fir_reg_dc21_;  // dc21
  SEXP Rsh_Fir_reg_dx62_;  // dx62
  SEXP Rsh_Fir_reg_dx63_;  // dx63
  SEXP Rsh_Fir_reg_r196_;  // r196
  SEXP Rsh_Fir_reg_symbolic_cor1_;  // symbolic_cor1
  SEXP Rsh_Fir_reg_symbolic_cor2_;  // symbolic_cor2
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_c61_;  // c61
  SEXP Rsh_Fir_reg_symbolic_cor4_;  // symbolic_cor4
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_dr44_;  // dr44
  SEXP Rsh_Fir_reg_dc22_;  // dc22
  SEXP Rsh_Fir_reg_dx64_;  // dx64
  SEXP Rsh_Fir_reg_symbolic_cor6_;  // symbolic_cor6
  SEXP Rsh_Fir_reg_dx65_;  // dx65
  SEXP Rsh_Fir_reg_r197_;  // r197
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r198_;  // r198
  SEXP Rsh_Fir_reg_ans;  // ans
  SEXP Rsh_Fir_reg_ans1_;  // ans1

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_dispersion = PARAMS[1];
  Rsh_Fir_reg_correlation = PARAMS[2];
  Rsh_Fir_reg_symbolic_cor = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // dispersion_isMissing = missing.0(dispersion)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_dispersion;
  Rsh_Fir_reg_dispersion_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if dispersion_isMissing then L0(NULL) else L0(dispersion)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dispersion_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_dispersion_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(dispersion)
    Rsh_Fir_reg_dispersion_orDefault = Rsh_Fir_reg_dispersion;
    goto L0_;
  }

L0_:;
  // st dispersion = dispersion_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dispersion_orDefault, RHO);
  (void)(Rsh_Fir_reg_dispersion_orDefault);
  // correlation_isMissing = missing.0(correlation)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_correlation;
  Rsh_Fir_reg_correlation_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if correlation_isMissing then L1(FALSE) else L1(correlation)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_correlation_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_correlation_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(correlation)
    Rsh_Fir_reg_correlation_orDefault = Rsh_Fir_reg_correlation;
    goto L1_;
  }

L1_:;
  // st correlation = correlation_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_correlation_orDefault, RHO);
  (void)(Rsh_Fir_reg_correlation_orDefault);
  // symbolic_cor_isMissing = missing.0(symbolic_cor)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_symbolic_cor;
  Rsh_Fir_reg_symbolic_cor_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if symbolic_cor_isMissing then L2(FALSE) else L2(symbolic_cor)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_symbolic_cor_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_symbolic_cor_orDefault = Rsh_const(CCP, 4);
    goto L2_;
  } else {
  // L2(symbolic_cor)
    Rsh_Fir_reg_symbolic_cor_orDefault = Rsh_Fir_reg_symbolic_cor;
    goto L2_;
  }

L2_:;
  // st `symbolic.cor` = symbolic_cor_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_symbolic_cor_orDefault, RHO);
  (void)(Rsh_Fir_reg_symbolic_cor_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // st `est.disp` = FALSE
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_const(CCP, 4), RHO);
  (void)(Rsh_const(CCP, 4));
  // object1 = ld object
  Rsh_Fir_reg_object1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L54() else D0()
  // L54()
  goto L54_;

L3_:;
  // c2 = `as.logical`(r2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c2 then L62() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L62()
    goto L62_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L17()
  // L17()
  goto L17_;

L5_:;
  // r7 = `!`(r5)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c6 then L75() else L6(c6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L75()
    goto L75_;
  } else {
  // L6(c6)
    Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c6_;
    goto L6_;
  }

L6_:;
  // c20 = `as.logical`(c8)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c20 then L85() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L85()
    goto L85_;
  } else {
  // L8()
    goto L8_;
  }

L7_:;
  // r12 = `!`(r9)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c17 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c18 = `&&`(c11, c17)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L6(c18)
  // L6(c18)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c18_;
  goto L6_;

L8_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L92() else D7()
  // L92()
  goto L92_;

L9_:;
  // st dispersion = dx10
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx10_, RHO);
  (void)(Rsh_Fir_reg_dx10_);
  // goto L17()
  // L17()
  goto L17_;

L10_:;
  // df_r = ld `df.r`
  Rsh_Fir_reg_df_r = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L96() else D9()
  // L96()
  goto L96_;

L11_:;
  // st `est.disp` = TRUE
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_const(CCP, 11), RHO);
  (void)(Rsh_const(CCP, 11));
  // goto L9(NA_REAL)
  // L9(NA_REAL)
  Rsh_Fir_reg_dx10_ = Rsh_const(CCP, 12);
  goto L9_;

L12_:;
  // c27 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c27 then L106() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L106()
    goto L106_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // sym5 = ldf sum
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base5 = ldf sum in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard5 then L110() else L111()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L110()
    goto L110_;
  } else {
  // L111()
    goto L111_;
  }

L15_:;
  // df_r2 = ld `df.r`
  Rsh_Fir_reg_df_r2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L131() else D18()
  // L131()
  goto L131_;

L16_:;
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r44 = dyn sum(dx24)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dx24_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L130() else D17()
  // L130()
  goto L130_;

L17_:;
  // sym6 = ldf `is.na`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base6 = ldf `is.na` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard6 then L134() else L135()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L134()
    goto L134_;
  } else {
  // L135()
    goto L135_;
  }

L18_:;
  // st aliased = r47
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r47_, RHO);
  (void)(Rsh_Fir_reg_r47_);
  // object27 = ld object
  Rsh_Fir_reg_object27_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L139() else D22()
  // L139()
  goto L139_;

L19_:;
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L251() else D82()
  // L251()
  goto L251_;

L20_:;
  // st `coef.p` = dx35
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_dx35_, RHO);
  (void)(Rsh_Fir_reg_dx35_);
  // chol2inv = ldf chol2inv
  Rsh_Fir_reg_chol2inv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L166() else D30()
  // L166()
  goto L166_;

L21_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r59 = dyn __2(dx48, dx49)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dx48_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_dx49_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L20(r59)
  // L20(r59)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_r59_;
  goto L20_;

L22_:;
  // l = ld `covmat.unscaled`
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L179() else D37()
  // L179()
  goto L179_;

L23_:;
  // sym9 = ldf names
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base9 = ldf names in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard9 then L174() else L175()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L174()
    goto L174_;
  } else {
  // L175()
    goto L175_;
  }

L24_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r72 = dyn list(r67, r70)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L178() else D36()
  // L178()
  goto L178_;

L25_:;
  // st `s.err` = r78
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r78_, RHO);
  (void)(Rsh_Fir_reg_r78_);
  // coef_p4 = ld `coef.p`
  Rsh_Fir_reg_coef_p4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L188() else D44()
  // L188()
  goto L188_;

L26_:;
  // st dn = r82
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r82_, RHO);
  (void)(Rsh_Fir_reg_r82_);
  // est_disp = ld `est.disp`
  Rsh_Fir_reg_est_disp = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L193() else D47()
  // L193()
  goto L193_;

L27_:;
  // df_r4 = ld `df.r`
  Rsh_Fir_reg_df_r4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L213() else D59()
  // L213()
  goto L213_;

L28_:;
  // l1 = ld `coef.table`
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // dimnames__1 = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L210() else D57()
  // L210()
  goto L210_;

L29_:;
  // sym15 = ldf c
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base15 = ldf c in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard15 then L205() else L206()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L205()
    goto L205_;
  } else {
  // L206()
    goto L206_;
  }

L30_:;
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r105 = dyn list1(r100, r103)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L209() else D56()
  // L209()
  goto L209_;

L31_:;
  // NCOL = ldf NCOL
  Rsh_Fir_reg_NCOL = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L248() else D80()
  // L248()
  goto L248_;

L32_:;
  // cbind2 = ldf cbind
  Rsh_Fir_reg_cbind2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L233() else D71()
  // L233()
  goto L233_;

L33_:;
  // l2 = ld `coef.table`
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // dimnames__2 = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L230() else D69()
  // L230()
  goto L230_;

L34_:;
  // sym19 = ldf c
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base19 = ldf c in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard19 then L225() else L226()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L225()
    goto L225_;
  } else {
  // L226()
    goto L226_;
  }

L35_:;
  // list2 = ldf list in base
  Rsh_Fir_reg_list2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r130 = dyn list2(r125, r128)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r125_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_r128_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r130_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L229() else D68()
  // L229()
  goto L229_;

L36_:;
  // l3 = ld `coef.table`
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // dimnames__3 = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L246() else D78()
  // L246()
  goto L246_;

L37_:;
  // sym22 = ldf c
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base22 = ldf c in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard22 then L241() else L242()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L241()
    goto L241_;
  } else {
  // L242()
    goto L242_;
  }

L38_:;
  // list3 = ldf list in base
  Rsh_Fir_reg_list3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r142 = dyn list3(r137, r140)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r137_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_r140_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r142_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list3_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L245() else D77()
  // L245()
  goto L245_;

L39_:;
  // sym26 = ldf match
  Rsh_Fir_reg_sym26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base26 = ldf match in base
  Rsh_Fir_reg_base26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard26 = `==`.4(sym26, base26)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym26_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base26_;
  Rsh_Fir_reg_guard26_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard26 then L267() else L268()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard26_)) {
  // L267()
    goto L267_;
  } else {
  // L268()
    goto L268_;
  }

L40_:;
  // l4 = ld `coef.table`
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // dimnames__4 = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L259() else D86()
  // L259()
  goto L259_;

L41_:;
  // list4 = ldf list in base
  Rsh_Fir_reg_list4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r154 = dyn list4(NULL, r152)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_r152_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r154_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list4_, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L258() else D85()
  // L258()
  goto L258_;

L42_:;
  // st `df.f` = r158
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r158_, RHO);
  (void)(Rsh_Fir_reg_r158_);
  // goto L39()
  // L39()
  goto L39_;

L43_:;
  // st keep = r161
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r161_, RHO);
  (void)(Rsh_Fir_reg_r161_);
  // sym29 = ldf c
  Rsh_Fir_reg_sym29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base29 = ldf c in base
  Rsh_Fir_reg_base29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard29 = `==`.4(sym29, base29)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym29_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base29_;
  Rsh_Fir_reg_guard29_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard29 then L277() else L278()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard29_)) {
  // L277()
    goto L277_;
  } else {
  // L278()
    goto L278_;
  }

L44_:;
  // sym28 = ldf names
  Rsh_Fir_reg_sym28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base28 = ldf names in base
  Rsh_Fir_reg_base28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard28 = `==`.4(sym28, base28)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym28_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base28_;
  Rsh_Fir_reg_guard28_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard28 then L272() else L273()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard28_)) {
  // L272()
    goto L272_;
  } else {
  // L273()
    goto L273_;
  }

L45_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r168 = dyn match(r163, r166, 0, NULL)
  SEXP Rsh_Fir_array_args27[4];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r163_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_r166_;
  Rsh_Fir_array_args27[2] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args27[3] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names7[4];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_reg_r168_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L276() else D95()
  // L276()
  goto L276_;

L46_:;
  // st ans = r170
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_r170_, RHO);
  (void)(Rsh_Fir_reg_r170_);
  // correlation1 = ld correlation
  Rsh_Fir_reg_correlation1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L305() else D111()
  // L305()
  goto L305_;

L47_:;
  // sym30 = ldf list
  Rsh_Fir_reg_sym30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base30 = ldf list in base
  Rsh_Fir_reg_base30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard30 = `==`.4(sym30, base30)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym30_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base30_;
  Rsh_Fir_reg_guard30_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard30 then L284() else L285()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard30_)) {
  // L284()
    goto L284_;
  } else {
  // L285()
    goto L285_;
  }

L48_:;
  // c52 = ldf c in base
  Rsh_Fir_reg_c52_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r181 = dyn c52(dx59, r173)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dx59_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_r173_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r181_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c52_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L304() else D110()
  // L304()
  goto L304_;

L49_:;
  // covmat_unscaled2 = ld `covmat.unscaled`
  Rsh_Fir_reg_covmat_unscaled2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L301() else D107()
  // L301()
  goto L301_;

L50_:;
  // c59 = `as.logical`(c55)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_c55_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c59 then L309() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c59_)) {
  // L309()
    goto L309_;
  } else {
  // L51()
    goto L51_;
  }

L51_:;
  // goto L53()
  // L53()
  goto L53_;

L52_:;
  // st dd = r184
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r184_, RHO);
  (void)(Rsh_Fir_reg_r184_);
  // covmat_unscaled6 = ld `covmat.unscaled`
  Rsh_Fir_reg_covmat_unscaled6_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L314() else D115()
  // L314()
  goto L314_;

L53_:;
  // l11 = ld ans
  Rsh_Fir_reg_l11_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L327() else D119()
  // L327()
  goto L327_;

D0_:;
  // deopt 3 [object1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_object1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L54_:;
  // object2 = force? object1
  Rsh_Fir_reg_object2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object1_);
  // checkMissing(object2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_object2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // c = `is.object`(object2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c then L56() else L57(object2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L56()
    goto L56_;
  } else {
  // L57(object2)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_object2_;
    goto L57_;
  }

L55_:;
  // st `df.r` = dx1
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L56_:;
  // dr = tryDispatchBuiltin.1("$", object2)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_object2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args34);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if dc then L58() else L57(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L58()
    goto L58_;
  } else {
  // L57(dr)
    Rsh_Fir_reg_object4_ = Rsh_Fir_reg_dr;
    goto L57_;
  }

L57_:;
  // r = `$`(object4, <sym df.residual>)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_object4_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L55(r)
  // L55(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1;
  goto L55_;

L58_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L55(dx)
  // L55(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L55_;

L59_:;
  // dispersion1 = ld dispersion
  Rsh_Fir_reg_dispersion1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L61() else D1()
  // L61()
  goto L61_;

L60_:;
  // r1 = dyn base(<sym dispersion>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L3(r1)
  // L3(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L3_;

D1_:;
  // deopt 8 [dispersion1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_dispersion1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L61_:;
  // dispersion2 = force? dispersion1
  Rsh_Fir_reg_dispersion2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dispersion1_);
  // checkMissing(dispersion2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dispersion2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c1 = `==`(dispersion2, NULL)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dispersion2_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // goto L3(c1)
  // L3(c1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_c1_;
  goto L3_;

L62_:;
  // object5 = ld object
  Rsh_Fir_reg_object5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L63() else D2()
  // L63()
  goto L63_;

D2_:;
  // deopt 11 [object5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_object5_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L63_:;
  // object6 = force? object5
  Rsh_Fir_reg_object6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object5_);
  // checkMissing(object6)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_object6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(object6)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c3 then L65() else L66(object6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L65()
    goto L65_;
  } else {
  // L66(object6)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_object6_;
    goto L66_;
  }

L64_:;
  // st fam = dx3
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard1 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L65_:;
  // dr2 = tryDispatchBuiltin.1("$", object6)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_object6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args44);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if dc1 then L67() else L66(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L67()
    goto L67_;
  } else {
  // L66(dr2)
    Rsh_Fir_reg_object8_ = Rsh_Fir_reg_dr2_;
    goto L66_;
  }

L66_:;
  // r3 = `$`(object8, <sym family>)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_object8_;
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L64(r3)
  // L64(r3)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r3_;
  goto L64_;

L67_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L64(dx2)
  // L64(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L64_;

L68_:;
  // fam = ld fam
  Rsh_Fir_reg_fam = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L70() else D3()
  // L70()
  goto L70_;

L69_:;
  // r4 = dyn base1(<lang `$`(fam, dispersion)>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L5(r4)
  // L5(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L5_;

D3_:;
  // deopt 16 [fam]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_fam;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L70_:;
  // fam1 = force? fam
  Rsh_Fir_reg_fam1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fam);
  // checkMissing(fam1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_fam1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(fam1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_fam1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if c4 then L72() else L73(fam1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L72()
    goto L72_;
  } else {
  // L73(fam1)
    Rsh_Fir_reg_fam3_ = Rsh_Fir_reg_fam1_;
    goto L73_;
  }

L71_:;
  // c5 = `==`(dx5, NULL)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L5(c5)
  // L5(c5)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_c5_;
  goto L5_;

L72_:;
  // dr4 = tryDispatchBuiltin.1("$", fam1)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_fam1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args52);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if dc2 then L74() else L73(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L74()
    goto L74_;
  } else {
  // L73(dr4)
    Rsh_Fir_reg_fam3_ = Rsh_Fir_reg_dr4_;
    goto L73_;
  }

L73_:;
  // r6 = `$`(fam3, <sym dispersion>)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_fam3_;
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L71(r6)
  // L71(r6)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r6_;
  goto L71_;

L74_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L71(dx4)
  // L71(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L71_;

L75_:;
  // sym2 = ldf `is.na`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base2 = ldf `is.na` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard2 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L76_:;
  // fam4 = ld fam
  Rsh_Fir_reg_fam4_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L78() else D4()
  // L78()
  goto L78_;

L77_:;
  // r8 = dyn base2(<lang `$`(fam, dispersion)>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L7(c6, r8)
  // L7(c6, r8)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L7_;

D4_:;
  // deopt 23 [c6, fam4]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_fam4_;
  Rsh_Fir_deopt(23, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L78_:;
  // fam5 = force? fam4
  Rsh_Fir_reg_fam5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fam4_);
  // checkMissing(fam5)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_fam5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(fam5)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_fam5_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if c12 then L80() else L81(c6, fam5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L80()
    goto L80_;
  } else {
  // L81(c6, fam5)
    Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c6_;
    Rsh_Fir_reg_fam7_ = Rsh_Fir_reg_fam5_;
    goto L81_;
  }

L79_:;
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r11 = dyn is_na(dx7)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L83() else D5()
  // L83()
  goto L83_;

L80_:;
  // dr6 = tryDispatchBuiltin.1("$", fam5)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_fam5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args61);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if dc3 then L82() else L81(c6, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L82()
    goto L82_;
  } else {
  // L81(c6, dr6)
    Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c6_;
    Rsh_Fir_reg_fam7_ = Rsh_Fir_reg_dr6_;
    goto L81_;
  }

L81_:;
  // r10 = `$`(fam7, <sym dispersion>)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_fam7_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L79(c14, r10)
  // L79(c14, r10)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r10_;
  goto L79_;

L82_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L79(c6, dx6)
  // L79(c6, dx6)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L79_;

D5_:;
  // deopt 27 [c16, r11]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L83_:;
  // goto L7(c16, r11)
  // L7(c16, r11)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r11_;
  goto L7_;

L85_:;
  // fam8 = ld fam
  Rsh_Fir_reg_fam8_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L86() else D6()
  // L86()
  goto L86_;

D6_:;
  // deopt 30 [fam8]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_fam8_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L86_:;
  // fam9 = force? fam8
  Rsh_Fir_reg_fam9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fam8_);
  // checkMissing(fam9)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_fam9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // c21 = `is.object`(fam9)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_fam9_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if c21 then L88() else L89(fam9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L88()
    goto L88_;
  } else {
  // L89(fam9)
    Rsh_Fir_reg_fam11_ = Rsh_Fir_reg_fam9_;
    goto L89_;
  }

L87_:;
  // goto L9(dx9)
  // L9(dx9)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L9_;

L88_:;
  // dr8 = tryDispatchBuiltin.1("$", fam9)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_fam9_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args67);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc4 then L90() else L89(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L90()
    goto L90_;
  } else {
  // L89(dr8)
    Rsh_Fir_reg_fam11_ = Rsh_Fir_reg_dr8_;
    goto L89_;
  }

L89_:;
  // r13 = `$`(fam11, <sym dispersion>)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_fam11_;
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L87(r13)
  // L87(r13)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r13_;
  goto L87_;

L90_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // goto L87(dx8)
  // L87(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L87_;

D7_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L92_:;
  // p = prom<V +>{
  //   fam12 = ld fam;
  //   fam13 = force? fam12;
  //   checkMissing(fam13);
  //   c22 = `is.object`(fam13);
  //   if c22 then L1() else L2(fam13);
  // L0(dx12):
  //   return dx12;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("$", fam13);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(fam15):
  //   r14 = `$`(fam15, <sym family>);
  //   goto L0(r14);
  // L3():
  //   dx11 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx11);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_, CCP, RHO);
  // p1 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r17):
  //   return r17;
  // L1():
  //   c23 = ldf c in base;
  //   r18 = dyn c23("poisson", "binomial");
  //   goto L0(r18);
  // L2():
  //   r16 = dyn base3("poisson", "binomial");
  //   goto L0(r16);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_1, CCP, RHO);
  // r20 = dyn _in_(p, p1)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L93() else D8()
  // L93()
  goto L93_;

D8_:;
  // deopt 37 [r20]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L93_:;
  // c24 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if c24 then L94() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L94()
    goto L94_;
  } else {
  // L10()
    goto L10_;
  }

L94_:;
  // goto L9(1.0)
  // L9(1.0)
  Rsh_Fir_reg_dx10_ = Rsh_const(CCP, 45);
  goto L9_;

D9_:;
  // deopt 40 [df_r]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_df_r;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L96_:;
  // df_r1 = force? df_r
  Rsh_Fir_reg_df_r1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df_r);
  // checkMissing(df_r1)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_df_r1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // r21 = `>`(df_r1, 0.0)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_df_r1_;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // c25 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if c25 then L97() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L97()
    goto L97_;
  } else {
  // L11()
    goto L11_;
  }

L97_:;
  // st `est.disp` = TRUE
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_const(CCP, 11), RHO);
  (void)(Rsh_const(CCP, 11));
  // sym4 = ldf any
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base4 = ldf any in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args85);
  // if guard4 then L98() else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L98()
    goto L98_;
  } else {
  // L99()
    goto L99_;
  }

L98_:;
  // object9 = ld object
  Rsh_Fir_reg_object9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L100() else D10()
  // L100()
  goto L100_;

L99_:;
  // r22 = dyn base4(<lang `==`(`$`(object, weights), 0.0)>)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L12(r22)
  // L12(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L12_;

D10_:;
  // deopt 49 [object9]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_object9_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L100_:;
  // object10 = force? object9
  Rsh_Fir_reg_object10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object9_);
  // checkMissing(object10)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_object10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // c26 = `is.object`(object10)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if c26 then L102() else L103(object10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L102()
    goto L102_;
  } else {
  // L103(object10)
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_object10_;
    goto L103_;
  }

L101_:;
  // r25 = `==`(dx14, 0.0)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dx14_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r26 = dyn any(r25)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L105() else D11()
  // L105()
  goto L105_;

L102_:;
  // dr12 = tryDispatchBuiltin.1("$", object10)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_object10_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args91);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // if dc6 then L104() else L103(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L104()
    goto L104_;
  } else {
  // L103(dr12)
    Rsh_Fir_reg_object12_ = Rsh_Fir_reg_dr12_;
    goto L103_;
  }

L103_:;
  // r24 = `$`(object12, <sym weights>)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_object12_;
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // goto L101(r24)
  // L101(r24)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_r24_;
  goto L101_;

L104_:;
  // dx13 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // goto L101(dx13)
  // L101(dx13)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx13_;
  goto L101_;

D11_:;
  // deopt 55 [r26]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L105_:;
  // goto L12(r26)
  // L12(r26)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r26_;
  goto L12_;

L106_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // check L107() else D12()
  // L107()
  goto L107_;

D12_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L107_:;
  // r27 = dyn warning("observations with zero weight not used for calculating dispersion")
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L108() else D13()
  // L108()
  goto L108_;

D13_:;
  // deopt 59 [r27]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L108_:;
  // goto L14()
  // L14()
  goto L14_;

L110_:;
  // object13 = ld object
  Rsh_Fir_reg_object13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L112() else D14()
  // L112()
  goto L112_;

L111_:;
  // r29 = dyn base5(<lang `[`(`(`(`*`(`$`(object, weights), `^`(`$`(object, residuals), 2.0))), `>`(`$`(object, weights), 0.0))>)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L15(r29)
  // L15(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L15_;

D14_:;
  // deopt 64 [object13]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_object13_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L112_:;
  // object14 = force? object13
  Rsh_Fir_reg_object14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object13_);
  // checkMissing(object14)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_object14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // c28 = `is.object`(object14)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_object14_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // if c28 then L114() else L115(object14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L114()
    goto L114_;
  } else {
  // L115(object14)
    Rsh_Fir_reg_object16_ = Rsh_Fir_reg_object14_;
    goto L115_;
  }

L113_:;
  // object17 = ld object
  Rsh_Fir_reg_object17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L117() else D15()
  // L117()
  goto L117_;

L114_:;
  // dr14 = tryDispatchBuiltin.1("$", object14)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_object14_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args99);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // if dc7 then L116() else L115(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L116()
    goto L116_;
  } else {
  // L115(dr14)
    Rsh_Fir_reg_object16_ = Rsh_Fir_reg_dr14_;
    goto L115_;
  }

L115_:;
  // r31 = `$`(object16, <sym weights>)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_object16_;
  Rsh_Fir_array_args101[1] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // goto L113(r31)
  // L113(r31)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_r31_;
  goto L113_;

L116_:;
  // dx15 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // goto L113(dx15)
  // L113(dx15)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx15_;
  goto L113_;

D15_:;
  // deopt 66 [dx16, object17]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_object17_;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L117_:;
  // object18 = force? object17
  Rsh_Fir_reg_object18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object17_);
  // checkMissing(object18)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_object18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // c29 = `is.object`(object18)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_object18_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // if c29 then L119() else L120(dx16, object18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L119()
    goto L119_;
  } else {
  // L120(dx16, object18)
    Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx16_;
    Rsh_Fir_reg_object20_ = Rsh_Fir_reg_object18_;
    goto L120_;
  }

L118_:;
  // r33 = `^`(dx22, 2.0)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dx22_;
  Rsh_Fir_array_args105[1] = Rsh_const(CCP, 53);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // r34 = `*`(dx21, r33)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // c30 = `is.object`(r34)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // if c30 then L122() else L123(r34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L122()
    goto L122_;
  } else {
  // L123(r34)
    Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r34_;
    goto L123_;
  }

L119_:;
  // dr16 = tryDispatchBuiltin.1("$", object18)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_object18_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args108);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // if dc8 then L121() else L120(dx16, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L121()
    goto L121_;
  } else {
  // L120(dx16, dr16)
    Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx16_;
    Rsh_Fir_reg_object20_ = Rsh_Fir_reg_dr16_;
    goto L120_;
  }

L120_:;
  // r32 = `$`(object20, <sym residuals>)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_object20_;
  Rsh_Fir_array_args110[1] = Rsh_const(CCP, 54);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // goto L118(dx18, r32)
  // L118(dx18, r32)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx18_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_r32_;
  goto L118_;

L121_:;
  // dx20 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // goto L118(dx16, dx20)
  // L118(dx16, dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx16_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx20_;
  goto L118_;

L122_:;
  // dr18 = tryDispatchBuiltin.1("[", r34)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args112);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // if dc9 then L124() else L123(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L124()
    goto L124_;
  } else {
  // L123(dr18)
    Rsh_Fir_reg_r36_ = Rsh_Fir_reg_dr18_;
    goto L123_;
  }

L123_:;
  // object21 = ld object
  Rsh_Fir_reg_object21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L125() else D16()
  // L125()
  goto L125_;

L124_:;
  // dx23 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // goto L16(dx23)
  // L16(dx23)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx23_;
  goto L16_;

D16_:;
  // deopt 72 [r36, object21]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_object21_;
  Rsh_Fir_deopt(72, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L125_:;
  // object22 = force? object21
  Rsh_Fir_reg_object22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object21_);
  // checkMissing(object22)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_object22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(object22)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_object22_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // if c31 then L127() else L128(r36, object22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L127()
    goto L127_;
  } else {
  // L128(r36, object22)
    Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r36_;
    Rsh_Fir_reg_object24_ = Rsh_Fir_reg_object22_;
    goto L128_;
  }

L126_:;
  // r42 = `>`(dx26, 0.0)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_dx26_;
  Rsh_Fir_array_args117[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r43 = dyn __(r40, r42)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L16(r43)
  // L16(r43)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_r43_;
  goto L16_;

L127_:;
  // dr20 = tryDispatchBuiltin.1("$", object22)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_object22_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args119);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // if dc10 then L129() else L128(r36, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L129()
    goto L129_;
  } else {
  // L128(r36, dr20)
    Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r36_;
    Rsh_Fir_reg_object24_ = Rsh_Fir_reg_dr20_;
    goto L128_;
  }

L128_:;
  // r41 = `$`(object24, <sym weights>)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_object24_;
  Rsh_Fir_array_args121[1] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // goto L126(r38, r41)
  // L126(r38, r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_r41_;
  goto L126_;

L129_:;
  // dx25 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // goto L126(r36, dx25)
  // L126(r36, dx25)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx25_;
  goto L126_;

D17_:;
  // deopt 79 [r44]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L130_:;
  // goto L15(r44)
  // L15(r44)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r44_;
  goto L15_;

D18_:;
  // deopt 79 [r30, df_r2]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_df_r2_;
  Rsh_Fir_deopt(79, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L131_:;
  // df_r3 = force? df_r2
  Rsh_Fir_reg_df_r3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df_r2_);
  // checkMissing(df_r3)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_df_r3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // r45 = `/`(r30, df_r3)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_df_r3_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // goto L9(r45)
  // L9(r45)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r45_;
  goto L9_;

L134_:;
  // coef = ldf coef
  Rsh_Fir_reg_coef = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // check L136() else D19()
  // L136()
  goto L136_;

L135_:;
  // r46 = dyn base6(<lang coef(object)>)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L18(r46)
  // L18(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L18_;

D19_:;
  // deopt 93 []
  Rsh_Fir_deopt(93, 0, NULL, CCP, RHO);
  return R_NilValue;

L136_:;
  // p2 = prom<V +>{
  //   object25 = ld object;
  //   object26 = force? object25;
  //   checkMissing(object26);
  //   return object26;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_2, CCP, RHO);
  // r49 = dyn coef(p2)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_coef, 1, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L137() else D20()
  // L137()
  goto L137_;

D20_:;
  // deopt 95 [r49]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L137_:;
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r50 = dyn is_na1(r49)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L138() else D21()
  // L138()
  goto L138_;

D21_:;
  // deopt 97 [r50]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L138_:;
  // goto L18(r50)
  // L18(r50)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r50_;
  goto L18_;

D22_:;
  // deopt 99 [object27]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_object27_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L139_:;
  // object28 = force? object27
  Rsh_Fir_reg_object28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object27_);
  // checkMissing(object28)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_object28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty()));
  // c32 = `is.object`(object28)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_object28_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // if c32 then L141() else L142(object28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L141()
    goto L141_;
  } else {
  // L142(object28)
    Rsh_Fir_reg_object30_ = Rsh_Fir_reg_object28_;
    goto L142_;
  }

L140_:;
  // st p = dx29
  Rsh_Fir_store(Rsh_const(CCP, 58), Rsh_Fir_reg_dx29_, RHO);
  (void)(Rsh_Fir_reg_dx29_);
  // p3 = ld p
  Rsh_Fir_reg_p3_ = Rsh_Fir_load(Rsh_const(CCP, 58), RHO);
  // check L144() else D23()
  // L144()
  goto L144_;

L141_:;
  // dr22 = tryDispatchBuiltin.1("$", object28)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_object28_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args131);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // if dc11 then L143() else L142(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L143()
    goto L143_;
  } else {
  // L142(dr22)
    Rsh_Fir_reg_object30_ = Rsh_Fir_reg_dr22_;
    goto L142_;
  }

L142_:;
  // r51 = `$`(object30, <sym rank>)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_object30_;
  Rsh_Fir_array_args133[1] = Rsh_const(CCP, 59);
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // goto L140(r51)
  // L140(r51)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r51_;
  goto L140_;

L143_:;
  // dx28 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // goto L140(dx28)
  // L140(dx28)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L140_;

D23_:;
  // deopt 103 [p3]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L144_:;
  // p4 = force? p3
  Rsh_Fir_reg_p4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p3_);
  // checkMissing(p4)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_p4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // r52 = `>`(p4, 0.0)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args136[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // c33 = `as.logical`(r52)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // if c33 then L145() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L145()
    goto L145_;
  } else {
  // L19()
    goto L19_;
  }

L145_:;
  // p5 = ld p
  Rsh_Fir_reg_p5_ = Rsh_Fir_load(Rsh_const(CCP, 58), RHO);
  // check L146() else D24()
  // L146()
  goto L146_;

D24_:;
  // deopt 108 [1, p5]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_const(CCP, 60);
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_deopt(108, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L146_:;
  // p6 = force? p5
  Rsh_Fir_reg_p6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p5_);
  // checkMissing(p6)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_p6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty()));
  // r53 = `:`(1, p6)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args139[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // st p1 = r53
  Rsh_Fir_store(Rsh_const(CCP, 61), Rsh_Fir_reg_r53_, RHO);
  (void)(Rsh_Fir_reg_r53_);
  // qr_lm = ldf `qr.lm`
  Rsh_Fir_reg_qr_lm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 62), RHO);
  // check L147() else D25()
  // L147()
  goto L147_;

D25_:;
  // deopt 113 []
  Rsh_Fir_deopt(113, 0, NULL, CCP, RHO);
  return R_NilValue;

L147_:;
  // p7 = prom<V +>{
  //   object31 = ld object;
  //   object32 = force? object31;
  //   checkMissing(object32);
  //   return object32;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_3, CCP, RHO);
  // r55 = dyn qr_lm(p7)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_qr_lm, 1, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L148() else D26()
  // L148()
  goto L148_;

D26_:;
  // deopt 115 [r55]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L148_:;
  // st Qr = r55
  Rsh_Fir_store(Rsh_const(CCP, 63), Rsh_Fir_reg_r55_, RHO);
  (void)(Rsh_Fir_reg_r55_);
  // object33 = ld object
  Rsh_Fir_reg_object33_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L149() else D27()
  // L149()
  goto L149_;

D27_:;
  // deopt 117 [object33]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_object33_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L149_:;
  // object34 = force? object33
  Rsh_Fir_reg_object34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object33_);
  // checkMissing(object34)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_object34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // c34 = `is.object`(object34)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_object34_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // if c34 then L151() else L152(object34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L151()
    goto L151_;
  } else {
  // L152(object34)
    Rsh_Fir_reg_object36_ = Rsh_Fir_reg_object34_;
    goto L152_;
  }

L150_:;
  // c35 = `is.object`(dx31)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_dx31_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // if c35 then L154() else L155(dx31)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L154()
    goto L154_;
  } else {
  // L155(dx31)
    Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx31_;
    goto L155_;
  }

L151_:;
  // dr24 = tryDispatchBuiltin.1("$", object34)
  SEXP Rsh_Fir_array_args145[2];
  Rsh_Fir_array_args145[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args145[1] = Rsh_Fir_reg_object34_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args145);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // if dc12 then L153() else L152(dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L153()
    goto L153_;
  } else {
  // L152(dr24)
    Rsh_Fir_reg_object36_ = Rsh_Fir_reg_dr24_;
    goto L152_;
  }

L152_:;
  // r56 = `$`(object36, <sym coefficients>)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_object36_;
  Rsh_Fir_array_args147[1] = Rsh_const(CCP, 64);
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // goto L150(r56)
  // L150(r56)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r56_;
  goto L150_;

L153_:;
  // dx30 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // goto L150(dx30)
  // L150(dx30)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L150_;

L154_:;
  // dr26 = tryDispatchBuiltin.1("[", dx31)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_dx31_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args149);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty());
  // if dc13 then L156() else L155(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L156()
    goto L156_;
  } else {
  // L155(dr26)
    Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dr26_;
    goto L155_;
  }

L155_:;
  // Qr = ld Qr
  Rsh_Fir_reg_Qr = Rsh_Fir_load(Rsh_const(CCP, 63), RHO);
  // check L157() else D28()
  // L157()
  goto L157_;

L156_:;
  // dx34 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty());
  // goto L20(dx34)
  // L20(dx34)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx34_;
  goto L20_;

D28_:;
  // deopt 120 [dx33, Qr]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_dx33_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_Qr;
  Rsh_Fir_deopt(120, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L157_:;
  // Qr1 = force? Qr
  Rsh_Fir_reg_Qr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Qr);
  // checkMissing(Qr1)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_Qr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty()));
  // c36 = `is.object`(Qr1)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_Qr1_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // if c36 then L159() else L160(dx33, Qr1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L159()
    goto L159_;
  } else {
  // L160(dx33, Qr1)
    Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx33_;
    Rsh_Fir_reg_Qr3_ = Rsh_Fir_reg_Qr1_;
    goto L160_;
  }

L158_:;
  // c37 = `is.object`(dx41)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_dx41_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // if c37 then L162() else L163(dx40, dx41)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L162()
    goto L162_;
  } else {
  // L163(dx40, dx41)
    Rsh_Fir_reg_dx44_ = Rsh_Fir_reg_dx40_;
    Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_dx41_;
    goto L163_;
  }

L159_:;
  // dr28 = tryDispatchBuiltin.1("$", Qr1)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args155[1] = Rsh_Fir_reg_Qr1_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args155);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty());
  // if dc14 then L161() else L160(dx33, dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L161()
    goto L161_;
  } else {
  // L160(dx33, dr28)
    Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx33_;
    Rsh_Fir_reg_Qr3_ = Rsh_Fir_reg_dr28_;
    goto L160_;
  }

L160_:;
  // r57 = `$`(Qr3, <sym pivot>)
  SEXP Rsh_Fir_array_args157[2];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_Qr3_;
  Rsh_Fir_array_args157[1] = Rsh_const(CCP, 65);
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // goto L158(dx37, r57)
  // L158(dx37, r57)
  Rsh_Fir_reg_dx40_ = Rsh_Fir_reg_dx37_;
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_r57_;
  goto L158_;

L161_:;
  // dx39 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx39_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty());
  // goto L158(dx33, dx39)
  // L158(dx33, dx39)
  Rsh_Fir_reg_dx40_ = Rsh_Fir_reg_dx33_;
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx39_;
  goto L158_;

L162_:;
  // dr30 = tryDispatchBuiltin.1("[", dx41)
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args159[1] = Rsh_Fir_reg_dx41_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args159);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty());
  // if dc15 then L164() else L163(dx40, dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L164()
    goto L164_;
  } else {
  // L163(dx40, dr30)
    Rsh_Fir_reg_dx44_ = Rsh_Fir_reg_dx40_;
    Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_dr30_;
    goto L163_;
  }

L163_:;
  // p8 = ld p1
  Rsh_Fir_reg_p8_ = Rsh_Fir_load(Rsh_const(CCP, 61), RHO);
  // check L165() else D29()
  // L165()
  goto L165_;

L164_:;
  // dx47 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx47_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty());
  // goto L21(dx40, dx47)
  // L21(dx40, dx47)
  Rsh_Fir_reg_dx48_ = Rsh_Fir_reg_dx40_;
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_dx47_;
  goto L21_;

D29_:;
  // deopt 123 [dx44, dx45, p8]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_dx44_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_dx45_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_p8_;
  Rsh_Fir_deopt(123, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L165_:;
  // p9 = force? p8
  Rsh_Fir_reg_p9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p8_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r58 = dyn __1(dx45, p9)
  SEXP Rsh_Fir_array_args162[2];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_dx45_;
  Rsh_Fir_array_args162[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args162, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L21(dx44, r58)
  // L21(dx44, r58)
  Rsh_Fir_reg_dx48_ = Rsh_Fir_reg_dx44_;
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_r58_;
  goto L21_;

D30_:;
  // deopt 129 []
  Rsh_Fir_deopt(129, 0, NULL, CCP, RHO);
  return R_NilValue;

L166_:;
  // p14 = prom<V +>{
  //   Qr4 = ld Qr;
  //   Qr5 = force? Qr4;
  //   checkMissing(Qr5);
  //   c38 = `is.object`(Qr5);
  //   if c38 then L2() else L3(Qr5);
  // L1(dx51):
  //   c39 = `is.object`(dx51);
  //   if c39 then L5() else L6();
  // L2():
  //   dr32 = tryDispatchBuiltin.1("$", Qr5);
  //   dc16 = getTryDispatchBuiltinDispatched(dr32);
  //   if dc16 then L4() else L3(dr32);
  // L3(Qr7):
  //   r60 = `$`(Qr7, <sym qr>);
  //   goto L1(r60);
  // L0(dx55):
  //   return dx55;
  // L4():
  //   dx50 = getTryDispatchBuiltinValue(dr32);
  //   goto L1(dx50);
  // L5():
  //   dr34 = tryDispatchBuiltin.1("[", dx51);
  //   dc17 = getTryDispatchBuiltinDispatched(dr34);
  //   if dc17 then L7() else L6();
  // L6():
  //   p10 = ld p1;
  //   p11 = force? p10;
  //   p12 = ld p1;
  //   p13 = force? p12;
  //   __3 = ldf `[` in base;
  //   r61 = dyn __3(dx51, p11, p13, FALSE);
  //   goto L0(r61);
  // L7():
  //   dx54 = getTryDispatchBuiltinValue(dr34);
  //   goto L0(dx54);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_4, CCP, RHO);
  // r63 = dyn chol2inv(p14)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_chol2inv, 1, Rsh_Fir_array_args174, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L167() else D31()
  // L167()
  goto L167_;

D31_:;
  // deopt 131 [r63]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L167_:;
  // st `covmat.unscaled` = r63
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r63_, RHO);
  (void)(Rsh_Fir_reg_r63_);
  // sym7 = ldf list
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base7 = ldf list in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args175);
  // if guard7 then L168() else L169()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L168()
    goto L168_;
  } else {
  // L169()
    goto L169_;
  }

L168_:;
  // sym8 = ldf names
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base8 = ldf names in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args176[2];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args176[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args176);
  // if guard8 then L170() else L171()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L170()
    goto L170_;
  } else {
  // L171()
    goto L171_;
  }

L169_:;
  // r64 = dyn base7(<lang names(coef.p)>, <lang names(coef.p)>)
  SEXP Rsh_Fir_array_args177[2];
  Rsh_Fir_array_args177[0] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args177[1] = Rsh_const(CCP, 67);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args177, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L22(r64)
  // L22(r64)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r64_;
  goto L22_;

L170_:;
  // coef_p = ld `coef.p`
  Rsh_Fir_reg_coef_p = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L172() else D32()
  // L172()
  goto L172_;

L171_:;
  // r66 = dyn base8(<sym coef.p>)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args178, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L23(r66)
  // L23(r66)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r66_;
  goto L23_;

D32_:;
  // deopt 137 [coef_p]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_coef_p;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L172_:;
  // coef_p1 = force? coef_p
  Rsh_Fir_reg_coef_p1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coef_p);
  // checkMissing(coef_p1)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_coef_p1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r68 = dyn names(coef_p1)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_coef_p1_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args180, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L173() else D33()
  // L173()
  goto L173_;

D33_:;
  // deopt 140 [r68]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L173_:;
  // goto L23(r68)
  // L23(r68)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r68_;
  goto L23_;

L174_:;
  // coef_p2 = ld `coef.p`
  Rsh_Fir_reg_coef_p2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L176() else D34()
  // L176()
  goto L176_;

L175_:;
  // r69 = dyn base9(<sym coef.p>)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args181, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L24(r69)
  // L24(r69)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r69_;
  goto L24_;

D34_:;
  // deopt 143 [coef_p2]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_coef_p2_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L176_:;
  // coef_p3 = force? coef_p2
  Rsh_Fir_reg_coef_p3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coef_p2_);
  // checkMissing(coef_p3)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_coef_p3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r71 = dyn names1(coef_p3)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_coef_p3_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args183, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L177() else D35()
  // L177()
  goto L177_;

D35_:;
  // deopt 146 [r71]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L177_:;
  // goto L24(r71)
  // L24(r71)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r71_;
  goto L24_;

D36_:;
  // deopt 148 [r72]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(148, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L178_:;
  // goto L22(r72)
  // L22(r72)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r72_;
  goto L22_;

D37_:;
  // deopt 150 [r65, l, r65]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(150, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L179_:;
  // r73 = dyn dimnames__(l, NULL, r65)
  SEXP Rsh_Fir_array_args184[3];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args184[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args184[2] = Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_array_arg_names33[3];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args184, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L180() else D38()
  // L180()
  goto L180_;

D38_:;
  // deopt 152 [r65, r73]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(152, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L180_:;
  // st `covmat.unscaled` = r73
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r73_, RHO);
  (void)(Rsh_Fir_reg_r73_);
  // dispersion3 = ld dispersion
  Rsh_Fir_reg_dispersion3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L181() else D39()
  // L181()
  goto L181_;

D39_:;
  // deopt 154 [dispersion3]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_dispersion3_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L181_:;
  // dispersion4 = force? dispersion3
  Rsh_Fir_reg_dispersion4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dispersion3_);
  // checkMissing(dispersion4)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_dispersion4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty()));
  // covmat_unscaled = ld `covmat.unscaled`
  Rsh_Fir_reg_covmat_unscaled = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L182() else D40()
  // L182()
  goto L182_;

D40_:;
  // deopt 155 [dispersion4, covmat_unscaled]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_dispersion4_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_covmat_unscaled;
  Rsh_Fir_deopt(155, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L182_:;
  // covmat_unscaled1 = force? covmat_unscaled
  Rsh_Fir_reg_covmat_unscaled1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_covmat_unscaled);
  // checkMissing(covmat_unscaled1)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_covmat_unscaled1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty()));
  // r74 = `*`(dispersion4, covmat_unscaled1)
  SEXP Rsh_Fir_array_args187[2];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_dispersion4_;
  Rsh_Fir_array_args187[1] = Rsh_Fir_reg_covmat_unscaled1_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty());
  // st covmat = r74
  Rsh_Fir_store(Rsh_const(CCP, 68), Rsh_Fir_reg_r74_, RHO);
  (void)(Rsh_Fir_reg_r74_);
  // diag = ldf diag
  Rsh_Fir_reg_diag = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // check L183() else D41()
  // L183()
  goto L183_;

D41_:;
  // deopt 160 []
  Rsh_Fir_deopt(160, 0, NULL, CCP, RHO);
  return R_NilValue;

L183_:;
  // p15 = prom<V +>{
  //   covmat = ld covmat;
  //   covmat1 = force? covmat;
  //   checkMissing(covmat1);
  //   return covmat1;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_5, CCP, RHO);
  // r76 = dyn diag(p15)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diag, 1, Rsh_Fir_array_args189, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L184() else D42()
  // L184()
  goto L184_;

D42_:;
  // deopt 162 [r76]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(162, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L184_:;
  // st `var.cf` = r76
  Rsh_Fir_store(Rsh_const(CCP, 70), Rsh_Fir_reg_r76_, RHO);
  (void)(Rsh_Fir_reg_r76_);
  // sym10 = ldf sqrt
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 71), RHO);
  // base10 = ldf sqrt in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args190[2];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args190[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args190);
  // if guard10 then L185() else L186()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L185()
    goto L185_;
  } else {
  // L186()
    goto L186_;
  }

L185_:;
  // var_cf = ld `var.cf`
  Rsh_Fir_reg_var_cf = Rsh_Fir_load(Rsh_const(CCP, 70), RHO);
  // check L187() else D43()
  // L187()
  goto L187_;

L186_:;
  // r77 = dyn base10(<sym var.cf>)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_const(CCP, 70);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args191, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L25(r77)
  // L25(r77)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r77_;
  goto L25_;

D43_:;
  // deopt 165 [var_cf]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_var_cf;
  Rsh_Fir_deopt(165, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L187_:;
  // var_cf1 = force? var_cf
  Rsh_Fir_reg_var_cf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_var_cf);
  // checkMissing(var_cf1)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_var_cf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty()));
  // r79 = sqrt(var_cf1)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_var_cf1_;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_builtin(169, CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty());
  // goto L25(r79)
  // L25(r79)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r79_;
  goto L25_;

D44_:;
  // deopt 169 [coef_p4]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_coef_p4_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L188_:;
  // coef_p5 = force? coef_p4
  Rsh_Fir_reg_coef_p5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coef_p4_);
  // checkMissing(coef_p5)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_coef_p5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args194, Rsh_Fir_param_types_empty()));
  // s_err = ld `s.err`
  Rsh_Fir_reg_s_err = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L189() else D45()
  // L189()
  goto L189_;

D45_:;
  // deopt 170 [coef_p5, s_err]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_coef_p5_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_s_err;
  Rsh_Fir_deopt(170, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L189_:;
  // s_err1 = force? s_err
  Rsh_Fir_reg_s_err1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s_err);
  // checkMissing(s_err1)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_s_err1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty()));
  // r80 = `/`(coef_p5, s_err1)
  SEXP Rsh_Fir_array_args196[2];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_coef_p5_;
  Rsh_Fir_array_args196[1] = Rsh_Fir_reg_s_err1_;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty());
  // st tvalue = r80
  Rsh_Fir_store(Rsh_const(CCP, 72), Rsh_Fir_reg_r80_, RHO);
  (void)(Rsh_Fir_reg_r80_);
  // sym11 = ldf c
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base11 = ldf c in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args197[2];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args197[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args197);
  // if guard11 then L190() else L191()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L190()
    goto L190_;
  } else {
  // L191()
    goto L191_;
  }

L190_:;
  // c40 = ldf c in base
  Rsh_Fir_reg_c40_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r83 = dyn c40("Estimate", "Std. Error")
  SEXP Rsh_Fir_array_args198[2];
  Rsh_Fir_array_args198[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args198[1] = Rsh_const(CCP, 74);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c40_, 2, Rsh_Fir_array_args198, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L192() else D46()
  // L192()
  goto L192_;

L191_:;
  // r81 = dyn base11("Estimate", "Std. Error")
  SEXP Rsh_Fir_array_args199[2];
  Rsh_Fir_array_args199[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args199[1] = Rsh_const(CCP, 74);
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args199, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L26(r81)
  // L26(r81)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r81_;
  goto L26_;

D46_:;
  // deopt 179 [r83]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(179, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L192_:;
  // goto L26(r83)
  // L26(r83)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r83_;
  goto L26_;

D47_:;
  // deopt 181 [est_disp]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_est_disp;
  Rsh_Fir_deopt(181, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L193_:;
  // est_disp1 = force? est_disp
  Rsh_Fir_reg_est_disp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_est_disp);
  // checkMissing(est_disp1)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_est_disp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty()));
  // r84 = `!`(est_disp1)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_est_disp1_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty());
  // c41 = `as.logical`(r84)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty());
  // if c41 then L194() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c41_)) {
  // L194()
    goto L194_;
  } else {
  // L27()
    goto L27_;
  }

L194_:;
  // pnorm = ldf pnorm
  Rsh_Fir_reg_pnorm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 75), RHO);
  // check L195() else D48()
  // L195()
  goto L195_;

D48_:;
  // deopt 186 [2.0]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_const(CCP, 53);
  Rsh_Fir_deopt(186, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L195_:;
  // p16 = prom<V +>{
  //   sym12 = ldf abs;
  //   base12 = ldf abs in base;
  //   guard12 = `==`.4(sym12, base12);
  //   if guard12 then L1() else L2();
  // L0(r86):
  //   r88 = `-`(<missing>, r86);
  //   return r88;
  // L1():
  //   tvalue = ld tvalue;
  //   tvalue1 = force? tvalue;
  //   checkMissing(tvalue1);
  //   abs = ldf abs in base;
  //   r87 = dyn abs(tvalue1);
  //   goto L0(r87);
  // L2():
  //   r85 = dyn base12(<sym tvalue>);
  //   goto L0(r85);
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_6, CCP, RHO);
  // r90 = dyn pnorm(p16)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pnorm, 1, Rsh_Fir_array_args208, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L196() else D49()
  // L196()
  goto L196_;

D49_:;
  // deopt 188 [2.0, r90]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_r90_;
  Rsh_Fir_deopt(188, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L196_:;
  // r91 = `*`(2.0, r90)
  SEXP Rsh_Fir_array_args209[2];
  Rsh_Fir_array_args209[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args209[1] = Rsh_Fir_reg_r90_;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty());
  // st pvalue = r91
  Rsh_Fir_store(Rsh_const(CCP, 78), Rsh_Fir_reg_r91_, RHO);
  (void)(Rsh_Fir_reg_r91_);
  // cbind = ldf cbind
  Rsh_Fir_reg_cbind = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L197() else D50()
  // L197()
  goto L197_;

D50_:;
  // deopt 192 []
  Rsh_Fir_deopt(192, 0, NULL, CCP, RHO);
  return R_NilValue;

L197_:;
  // p17 = prom<V +>{
  //   coef_p6 = ld `coef.p`;
  //   coef_p7 = force? coef_p6;
  //   checkMissing(coef_p7);
  //   return coef_p7;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_7, CCP, RHO);
  // p18 = prom<V +>{
  //   s_err2 = ld `s.err`;
  //   s_err3 = force? s_err2;
  //   checkMissing(s_err3);
  //   return s_err3;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_8, CCP, RHO);
  // p19 = prom<V +>{
  //   tvalue2 = ld tvalue;
  //   tvalue3 = force? tvalue2;
  //   checkMissing(tvalue3);
  //   return tvalue3;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_9, CCP, RHO);
  // p20 = prom<V +>{
  //   pvalue = ld pvalue;
  //   pvalue1 = force? pvalue;
  //   checkMissing(pvalue1);
  //   return pvalue1;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_10, CCP, RHO);
  // r96 = dyn cbind(p17, p18, p19, p20)
  SEXP Rsh_Fir_array_args214[4];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args214[1] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args214[2] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_args214[3] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names41[4];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_array_arg_names41[2] = R_MissingArg;
  Rsh_Fir_array_arg_names41[3] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cbind, 4, Rsh_Fir_array_args214, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L198() else D51()
  // L198()
  goto L198_;

D51_:;
  // deopt 197 [r96]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_deopt(197, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L198_:;
  // st `coef.table` = r96
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r96_, RHO);
  (void)(Rsh_Fir_reg_r96_);
  // sym13 = ldf list
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base13 = ldf list in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args215[2];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args215[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args215);
  // if guard13 then L199() else L200()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L199()
    goto L199_;
  } else {
  // L200()
    goto L200_;
  }

L199_:;
  // sym14 = ldf names
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base14 = ldf names in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args216[2];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args216[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args216);
  // if guard14 then L201() else L202()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L201()
    goto L201_;
  } else {
  // L202()
    goto L202_;
  }

L200_:;
  // r97 = dyn base13(<lang names(coef.p)>, <lang c(dn, "z value", "Pr(>|z|)")>)
  SEXP Rsh_Fir_array_args217[2];
  Rsh_Fir_array_args217[0] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args217[1] = Rsh_const(CCP, 79);
  SEXP Rsh_Fir_array_arg_names42[2];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 2, Rsh_Fir_array_args217, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L28(r97)
  // L28(r97)
  Rsh_Fir_reg_r98_ = Rsh_Fir_reg_r97_;
  goto L28_;

L201_:;
  // coef_p8 = ld `coef.p`
  Rsh_Fir_reg_coef_p8_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L203() else D52()
  // L203()
  goto L203_;

L202_:;
  // r99 = dyn base14(<sym coef.p>)
  SEXP Rsh_Fir_array_args218[1];
  Rsh_Fir_array_args218[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args218, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L29(r99)
  // L29(r99)
  Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r99_;
  goto L29_;

D52_:;
  // deopt 203 [coef_p8]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_coef_p8_;
  Rsh_Fir_deopt(203, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L203_:;
  // coef_p9 = force? coef_p8
  Rsh_Fir_reg_coef_p9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coef_p8_);
  // checkMissing(coef_p9)
  SEXP Rsh_Fir_array_args219[1];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_coef_p9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args219, Rsh_Fir_param_types_empty()));
  // names2 = ldf names in base
  Rsh_Fir_reg_names2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r101 = dyn names2(coef_p9)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_coef_p9_;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names2_, 1, Rsh_Fir_array_args220, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L204() else D53()
  // L204()
  goto L204_;

D53_:;
  // deopt 206 [r101]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_deopt(206, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L204_:;
  // goto L29(r101)
  // L29(r101)
  Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r101_;
  goto L29_;

L205_:;
  // dn = ld dn
  Rsh_Fir_reg_dn = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L207() else D54()
  // L207()
  goto L207_;

L206_:;
  // r102 = dyn base15(<sym dn>, "z value", "Pr(>|z|)")
  SEXP Rsh_Fir_array_args221[3];
  Rsh_Fir_array_args221[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args221[1] = Rsh_const(CCP, 80);
  Rsh_Fir_array_args221[2] = Rsh_const(CCP, 81);
  SEXP Rsh_Fir_array_arg_names45[3];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_array_arg_names45[2] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 3, Rsh_Fir_array_args221, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L30(r102)
  // L30(r102)
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r102_;
  goto L30_;

D54_:;
  // deopt 209 [dn]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_dn;
  Rsh_Fir_deopt(209, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L207_:;
  // dn1 = force? dn
  Rsh_Fir_reg_dn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn);
  // checkMissing(dn1)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_dn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args222, Rsh_Fir_param_types_empty()));
  // c42 = ldf c in base
  Rsh_Fir_reg_c42_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r104 = dyn c42(dn1, "z value", "Pr(>|z|)")
  SEXP Rsh_Fir_array_args223[3];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_dn1_;
  Rsh_Fir_array_args223[1] = Rsh_const(CCP, 80);
  Rsh_Fir_array_args223[2] = Rsh_const(CCP, 81);
  SEXP Rsh_Fir_array_arg_names46[3];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_array_arg_names46[2] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c42_, 3, Rsh_Fir_array_args223, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L208() else D55()
  // L208()
  goto L208_;

D55_:;
  // deopt 214 [r104]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r104_;
  Rsh_Fir_deopt(214, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L208_:;
  // goto L30(r104)
  // L30(r104)
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r104_;
  goto L30_;

D56_:;
  // deopt 216 [r105]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r105_;
  Rsh_Fir_deopt(216, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L209_:;
  // goto L28(r105)
  // L28(r105)
  Rsh_Fir_reg_r98_ = Rsh_Fir_reg_r105_;
  goto L28_;

D57_:;
  // deopt 218 [r98, l1, r98]
  SEXP Rsh_Fir_array_deopt_stack50[3];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r98_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack50[2] = Rsh_Fir_reg_r98_;
  Rsh_Fir_deopt(218, 3, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L210_:;
  // r106 = dyn dimnames__1(l1, NULL, r98)
  SEXP Rsh_Fir_array_args224[3];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args224[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args224[2] = Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_array_arg_names47[3];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_array_arg_names47[2] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__1_, 3, Rsh_Fir_array_args224, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L211() else D58()
  // L211()
  goto L211_;

D58_:;
  // deopt 220 [r98, r106]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r98_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_r106_;
  Rsh_Fir_deopt(220, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L211_:;
  // st `coef.table` = r106
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r106_, RHO);
  (void)(Rsh_Fir_reg_r106_);
  // goto L31()
  // L31()
  goto L31_;

D59_:;
  // deopt 222 [df_r4]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_df_r4_;
  Rsh_Fir_deopt(222, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L213_:;
  // df_r5 = force? df_r4
  Rsh_Fir_reg_df_r5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df_r4_);
  // checkMissing(df_r5)
  SEXP Rsh_Fir_array_args225[1];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_df_r5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args225, Rsh_Fir_param_types_empty()));
  // r108 = `>`(df_r5, 0.0)
  SEXP Rsh_Fir_array_args226[2];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_df_r5_;
  Rsh_Fir_array_args226[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty());
  // c43 = `as.logical`(r108)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args227, Rsh_Fir_param_types_empty());
  // if c43 then L214() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L214()
    goto L214_;
  } else {
  // L32()
    goto L32_;
  }

L214_:;
  // pt = ldf pt
  Rsh_Fir_reg_pt = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 82), RHO);
  // check L215() else D60()
  // L215()
  goto L215_;

D60_:;
  // deopt 228 [2.0]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_const(CCP, 53);
  Rsh_Fir_deopt(228, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L215_:;
  // p21 = prom<V +>{
  //   sym16 = ldf abs;
  //   base16 = ldf abs in base;
  //   guard16 = `==`.4(sym16, base16);
  //   if guard16 then L1() else L2();
  // L0(r110):
  //   r112 = `-`(<missing>, r110);
  //   return r112;
  // L1():
  //   tvalue4 = ld tvalue;
  //   tvalue5 = force? tvalue4;
  //   checkMissing(tvalue5);
  //   abs1 = ldf abs in base;
  //   r111 = dyn abs1(tvalue5);
  //   goto L0(r111);
  // L2():
  //   r109 = dyn base16(<sym tvalue>);
  //   goto L0(r109);
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_11, CCP, RHO);
  // p22 = prom<V +>{
  //   df_r6 = ld `df.r`;
  //   df_r7 = force? df_r6;
  //   checkMissing(df_r7);
  //   return df_r7;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_12, CCP, RHO);
  // r115 = dyn pt(p21, p22)
  SEXP Rsh_Fir_array_args234[2];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_p21_;
  Rsh_Fir_array_args234[1] = Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_array_arg_names50[2];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pt, 2, Rsh_Fir_array_args234, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L216() else D61()
  // L216()
  goto L216_;

D61_:;
  // deopt 231 [2.0, r115]
  SEXP Rsh_Fir_array_deopt_stack54[2];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_deopt_stack54[1] = Rsh_Fir_reg_r115_;
  Rsh_Fir_deopt(231, 2, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L216_:;
  // r116 = `*`(2.0, r115)
  SEXP Rsh_Fir_array_args235[2];
  Rsh_Fir_array_args235[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args235[1] = Rsh_Fir_reg_r115_;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args235, Rsh_Fir_param_types_empty());
  // st pvalue = r116
  Rsh_Fir_store(Rsh_const(CCP, 78), Rsh_Fir_reg_r116_, RHO);
  (void)(Rsh_Fir_reg_r116_);
  // cbind1 = ldf cbind
  Rsh_Fir_reg_cbind1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L217() else D62()
  // L217()
  goto L217_;

D62_:;
  // deopt 235 []
  Rsh_Fir_deopt(235, 0, NULL, CCP, RHO);
  return R_NilValue;

L217_:;
  // p23 = prom<V +>{
  //   coef_p10 = ld `coef.p`;
  //   coef_p11 = force? coef_p10;
  //   checkMissing(coef_p11);
  //   return coef_p11;
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_13, CCP, RHO);
  // p24 = prom<V +>{
  //   s_err4 = ld `s.err`;
  //   s_err5 = force? s_err4;
  //   checkMissing(s_err5);
  //   return s_err5;
  // }
  Rsh_Fir_reg_p24_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_14, CCP, RHO);
  // p25 = prom<V +>{
  //   tvalue6 = ld tvalue;
  //   tvalue7 = force? tvalue6;
  //   checkMissing(tvalue7);
  //   return tvalue7;
  // }
  Rsh_Fir_reg_p25_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_15, CCP, RHO);
  // p26 = prom<V +>{
  //   pvalue2 = ld pvalue;
  //   pvalue3 = force? pvalue2;
  //   checkMissing(pvalue3);
  //   return pvalue3;
  // }
  Rsh_Fir_reg_p26_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_16, CCP, RHO);
  // r121 = dyn cbind1(p23, p24, p25, p26)
  SEXP Rsh_Fir_array_args240[4];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_p23_;
  Rsh_Fir_array_args240[1] = Rsh_Fir_reg_p24_;
  Rsh_Fir_array_args240[2] = Rsh_Fir_reg_p25_;
  Rsh_Fir_array_args240[3] = Rsh_Fir_reg_p26_;
  SEXP Rsh_Fir_array_arg_names51[4];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_array_arg_names51[2] = R_MissingArg;
  Rsh_Fir_array_arg_names51[3] = R_MissingArg;
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cbind1_, 4, Rsh_Fir_array_args240, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L218() else D63()
  // L218()
  goto L218_;

D63_:;
  // deopt 240 [r121]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r121_;
  Rsh_Fir_deopt(240, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L218_:;
  // st `coef.table` = r121
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r121_, RHO);
  (void)(Rsh_Fir_reg_r121_);
  // sym17 = ldf list
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base17 = ldf list in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args241[2];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args241[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args241);
  // if guard17 then L219() else L220()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L219()
    goto L219_;
  } else {
  // L220()
    goto L220_;
  }

L219_:;
  // sym18 = ldf names
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base18 = ldf names in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args242[2];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args242[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args242);
  // if guard18 then L221() else L222()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L221()
    goto L221_;
  } else {
  // L222()
    goto L222_;
  }

L220_:;
  // r122 = dyn base17(<lang names(coef.p)>, <lang c(dn, "t value", "Pr(>|t|)")>)
  SEXP Rsh_Fir_array_args243[2];
  Rsh_Fir_array_args243[0] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args243[1] = Rsh_const(CCP, 83);
  SEXP Rsh_Fir_array_arg_names52[2];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 2, Rsh_Fir_array_args243, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L33(r122)
  // L33(r122)
  Rsh_Fir_reg_r123_ = Rsh_Fir_reg_r122_;
  goto L33_;

L221_:;
  // coef_p12 = ld `coef.p`
  Rsh_Fir_reg_coef_p12_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L223() else D64()
  // L223()
  goto L223_;

L222_:;
  // r124 = dyn base18(<sym coef.p>)
  SEXP Rsh_Fir_array_args244[1];
  Rsh_Fir_array_args244[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r124_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args244, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L34(r124)
  // L34(r124)
  Rsh_Fir_reg_r125_ = Rsh_Fir_reg_r124_;
  goto L34_;

D64_:;
  // deopt 246 [coef_p12]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_coef_p12_;
  Rsh_Fir_deopt(246, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L223_:;
  // coef_p13 = force? coef_p12
  Rsh_Fir_reg_coef_p13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coef_p12_);
  // checkMissing(coef_p13)
  SEXP Rsh_Fir_array_args245[1];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_coef_p13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args245, Rsh_Fir_param_types_empty()));
  // names3 = ldf names in base
  Rsh_Fir_reg_names3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r126 = dyn names3(coef_p13)
  SEXP Rsh_Fir_array_args246[1];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_coef_p13_;
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r126_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names3_, 1, Rsh_Fir_array_args246, Rsh_Fir_array_arg_names54, CCP, RHO);
  // check L224() else D65()
  // L224()
  goto L224_;

D65_:;
  // deopt 249 [r126]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_r126_;
  Rsh_Fir_deopt(249, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L224_:;
  // goto L34(r126)
  // L34(r126)
  Rsh_Fir_reg_r125_ = Rsh_Fir_reg_r126_;
  goto L34_;

L225_:;
  // dn2 = ld dn
  Rsh_Fir_reg_dn2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L227() else D66()
  // L227()
  goto L227_;

L226_:;
  // r127 = dyn base19(<sym dn>, "t value", "Pr(>|t|)")
  SEXP Rsh_Fir_array_args247[3];
  Rsh_Fir_array_args247[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args247[1] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args247[2] = Rsh_const(CCP, 85);
  SEXP Rsh_Fir_array_arg_names55[3];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_array_arg_names55[2] = R_MissingArg;
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 3, Rsh_Fir_array_args247, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L35(r127)
  // L35(r127)
  Rsh_Fir_reg_r128_ = Rsh_Fir_reg_r127_;
  goto L35_;

D66_:;
  // deopt 252 [dn2]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_dn2_;
  Rsh_Fir_deopt(252, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L227_:;
  // dn3 = force? dn2
  Rsh_Fir_reg_dn3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn2_);
  // checkMissing(dn3)
  SEXP Rsh_Fir_array_args248[1];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_dn3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args248, Rsh_Fir_param_types_empty()));
  // c44 = ldf c in base
  Rsh_Fir_reg_c44_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r129 = dyn c44(dn3, "t value", "Pr(>|t|)")
  SEXP Rsh_Fir_array_args249[3];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_dn3_;
  Rsh_Fir_array_args249[1] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args249[2] = Rsh_const(CCP, 85);
  SEXP Rsh_Fir_array_arg_names56[3];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_array_arg_names56[2] = R_MissingArg;
  Rsh_Fir_reg_r129_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c44_, 3, Rsh_Fir_array_args249, Rsh_Fir_array_arg_names56, CCP, RHO);
  // check L228() else D67()
  // L228()
  goto L228_;

D67_:;
  // deopt 257 [r129]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_r129_;
  Rsh_Fir_deopt(257, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L228_:;
  // goto L35(r129)
  // L35(r129)
  Rsh_Fir_reg_r128_ = Rsh_Fir_reg_r129_;
  goto L35_;

D68_:;
  // deopt 259 [r130]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_r130_;
  Rsh_Fir_deopt(259, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L229_:;
  // goto L33(r130)
  // L33(r130)
  Rsh_Fir_reg_r123_ = Rsh_Fir_reg_r130_;
  goto L33_;

D69_:;
  // deopt 261 [r123, l2, r123]
  SEXP Rsh_Fir_array_deopt_stack61[3];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_r123_;
  Rsh_Fir_array_deopt_stack61[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack61[2] = Rsh_Fir_reg_r123_;
  Rsh_Fir_deopt(261, 3, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L230_:;
  // r131 = dyn dimnames__2(l2, NULL, r123)
  SEXP Rsh_Fir_array_args250[3];
  Rsh_Fir_array_args250[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args250[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args250[2] = Rsh_Fir_reg_r123_;
  SEXP Rsh_Fir_array_arg_names57[3];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_array_arg_names57[2] = R_MissingArg;
  Rsh_Fir_reg_r131_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__2_, 3, Rsh_Fir_array_args250, Rsh_Fir_array_arg_names57, CCP, RHO);
  // check L231() else D70()
  // L231()
  goto L231_;

D70_:;
  // deopt 263 [r123, r131]
  SEXP Rsh_Fir_array_deopt_stack62[2];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_r123_;
  Rsh_Fir_array_deopt_stack62[1] = Rsh_Fir_reg_r131_;
  Rsh_Fir_deopt(263, 2, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L231_:;
  // st `coef.table` = r131
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r131_, RHO);
  (void)(Rsh_Fir_reg_r131_);
  // goto L31()
  // L31()
  goto L31_;

D71_:;
  // deopt 266 []
  Rsh_Fir_deopt(266, 0, NULL, CCP, RHO);
  return R_NilValue;

L233_:;
  // p27 = prom<V +>{
  //   coef_p14 = ld `coef.p`;
  //   coef_p15 = force? coef_p14;
  //   checkMissing(coef_p15);
  //   return coef_p15;
  // }
  Rsh_Fir_reg_p27_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_17, CCP, RHO);
  // r133 = dyn cbind2(p27, NA_REAL, NA_REAL, NA_REAL)
  SEXP Rsh_Fir_array_args252[4];
  Rsh_Fir_array_args252[0] = Rsh_Fir_reg_p27_;
  Rsh_Fir_array_args252[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args252[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args252[3] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names58[4];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_array_arg_names58[1] = R_MissingArg;
  Rsh_Fir_array_arg_names58[2] = R_MissingArg;
  Rsh_Fir_array_arg_names58[3] = R_MissingArg;
  Rsh_Fir_reg_r133_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cbind2_, 4, Rsh_Fir_array_args252, Rsh_Fir_array_arg_names58, CCP, RHO);
  // check L234() else D72()
  // L234()
  goto L234_;

D72_:;
  // deopt 271 [r133]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_r133_;
  Rsh_Fir_deopt(271, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L234_:;
  // st `coef.table` = r133
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r133_, RHO);
  (void)(Rsh_Fir_reg_r133_);
  // sym20 = ldf list
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base20 = ldf list in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args253[2];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args253[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args253);
  // if guard20 then L235() else L236()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L235()
    goto L235_;
  } else {
  // L236()
    goto L236_;
  }

L235_:;
  // sym21 = ldf names
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base21 = ldf names in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args254[2];
  Rsh_Fir_array_args254[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args254[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args254);
  // if guard21 then L237() else L238()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L237()
    goto L237_;
  } else {
  // L238()
    goto L238_;
  }

L236_:;
  // r134 = dyn base20(<lang names(coef.p)>, <lang c(dn, "t value", "Pr(>|t|)")>)
  SEXP Rsh_Fir_array_args255[2];
  Rsh_Fir_array_args255[0] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args255[1] = Rsh_const(CCP, 83);
  SEXP Rsh_Fir_array_arg_names59[2];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_array_arg_names59[1] = R_MissingArg;
  Rsh_Fir_reg_r134_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 2, Rsh_Fir_array_args255, Rsh_Fir_array_arg_names59, CCP, RHO);
  // goto L36(r134)
  // L36(r134)
  Rsh_Fir_reg_r135_ = Rsh_Fir_reg_r134_;
  goto L36_;

L237_:;
  // coef_p16 = ld `coef.p`
  Rsh_Fir_reg_coef_p16_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L239() else D73()
  // L239()
  goto L239_;

L238_:;
  // r136 = dyn base21(<sym coef.p>)
  SEXP Rsh_Fir_array_args256[1];
  Rsh_Fir_array_args256[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names60[1];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_reg_r136_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 1, Rsh_Fir_array_args256, Rsh_Fir_array_arg_names60, CCP, RHO);
  // goto L37(r136)
  // L37(r136)
  Rsh_Fir_reg_r137_ = Rsh_Fir_reg_r136_;
  goto L37_;

D73_:;
  // deopt 277 [coef_p16]
  SEXP Rsh_Fir_array_deopt_stack64[1];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_coef_p16_;
  Rsh_Fir_deopt(277, 1, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L239_:;
  // coef_p17 = force? coef_p16
  Rsh_Fir_reg_coef_p17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coef_p16_);
  // checkMissing(coef_p17)
  SEXP Rsh_Fir_array_args257[1];
  Rsh_Fir_array_args257[0] = Rsh_Fir_reg_coef_p17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args257, Rsh_Fir_param_types_empty()));
  // names4 = ldf names in base
  Rsh_Fir_reg_names4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r138 = dyn names4(coef_p17)
  SEXP Rsh_Fir_array_args258[1];
  Rsh_Fir_array_args258[0] = Rsh_Fir_reg_coef_p17_;
  SEXP Rsh_Fir_array_arg_names61[1];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_reg_r138_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names4_, 1, Rsh_Fir_array_args258, Rsh_Fir_array_arg_names61, CCP, RHO);
  // check L240() else D74()
  // L240()
  goto L240_;

D74_:;
  // deopt 280 [r138]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_r138_;
  Rsh_Fir_deopt(280, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L240_:;
  // goto L37(r138)
  // L37(r138)
  Rsh_Fir_reg_r137_ = Rsh_Fir_reg_r138_;
  goto L37_;

L241_:;
  // dn4 = ld dn
  Rsh_Fir_reg_dn4_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L243() else D75()
  // L243()
  goto L243_;

L242_:;
  // r139 = dyn base22(<sym dn>, "t value", "Pr(>|t|)")
  SEXP Rsh_Fir_array_args259[3];
  Rsh_Fir_array_args259[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args259[1] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args259[2] = Rsh_const(CCP, 85);
  SEXP Rsh_Fir_array_arg_names62[3];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_array_arg_names62[1] = R_MissingArg;
  Rsh_Fir_array_arg_names62[2] = R_MissingArg;
  Rsh_Fir_reg_r139_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 3, Rsh_Fir_array_args259, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L38(r139)
  // L38(r139)
  Rsh_Fir_reg_r140_ = Rsh_Fir_reg_r139_;
  goto L38_;

D75_:;
  // deopt 283 [dn4]
  SEXP Rsh_Fir_array_deopt_stack66[1];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_dn4_;
  Rsh_Fir_deopt(283, 1, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L243_:;
  // dn5 = force? dn4
  Rsh_Fir_reg_dn5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn4_);
  // checkMissing(dn5)
  SEXP Rsh_Fir_array_args260[1];
  Rsh_Fir_array_args260[0] = Rsh_Fir_reg_dn5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args260, Rsh_Fir_param_types_empty()));
  // c45 = ldf c in base
  Rsh_Fir_reg_c45_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r141 = dyn c45(dn5, "t value", "Pr(>|t|)")
  SEXP Rsh_Fir_array_args261[3];
  Rsh_Fir_array_args261[0] = Rsh_Fir_reg_dn5_;
  Rsh_Fir_array_args261[1] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args261[2] = Rsh_const(CCP, 85);
  SEXP Rsh_Fir_array_arg_names63[3];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_array_arg_names63[1] = R_MissingArg;
  Rsh_Fir_array_arg_names63[2] = R_MissingArg;
  Rsh_Fir_reg_r141_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c45_, 3, Rsh_Fir_array_args261, Rsh_Fir_array_arg_names63, CCP, RHO);
  // check L244() else D76()
  // L244()
  goto L244_;

D76_:;
  // deopt 288 [r141]
  SEXP Rsh_Fir_array_deopt_stack67[1];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_r141_;
  Rsh_Fir_deopt(288, 1, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L244_:;
  // goto L38(r141)
  // L38(r141)
  Rsh_Fir_reg_r140_ = Rsh_Fir_reg_r141_;
  goto L38_;

D77_:;
  // deopt 290 [r142]
  SEXP Rsh_Fir_array_deopt_stack68[1];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_r142_;
  Rsh_Fir_deopt(290, 1, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L245_:;
  // goto L36(r142)
  // L36(r142)
  Rsh_Fir_reg_r135_ = Rsh_Fir_reg_r142_;
  goto L36_;

D78_:;
  // deopt 292 [r135, l3, r135]
  SEXP Rsh_Fir_array_deopt_stack69[3];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_r135_;
  Rsh_Fir_array_deopt_stack69[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack69[2] = Rsh_Fir_reg_r135_;
  Rsh_Fir_deopt(292, 3, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L246_:;
  // r143 = dyn dimnames__3(l3, NULL, r135)
  SEXP Rsh_Fir_array_args262[3];
  Rsh_Fir_array_args262[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args262[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args262[2] = Rsh_Fir_reg_r135_;
  SEXP Rsh_Fir_array_arg_names64[3];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_array_arg_names64[2] = R_MissingArg;
  Rsh_Fir_reg_r143_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__3_, 3, Rsh_Fir_array_args262, Rsh_Fir_array_arg_names64, CCP, RHO);
  // check L247() else D79()
  // L247()
  goto L247_;

D79_:;
  // deopt 294 [r135, r143]
  SEXP Rsh_Fir_array_deopt_stack70[2];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_r135_;
  Rsh_Fir_array_deopt_stack70[1] = Rsh_Fir_reg_r143_;
  Rsh_Fir_deopt(294, 2, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L247_:;
  // st `coef.table` = r143
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r143_, RHO);
  (void)(Rsh_Fir_reg_r143_);
  // goto L31()
  // L31()
  goto L31_;

D80_:;
  // deopt 297 []
  Rsh_Fir_deopt(297, 0, NULL, CCP, RHO);
  return R_NilValue;

L248_:;
  // p28 = prom<V +>{
  //   Qr8 = ld Qr;
  //   Qr9 = force? Qr8;
  //   checkMissing(Qr9);
  //   c46 = `is.object`(Qr9);
  //   if c46 then L1() else L2(Qr9);
  // L0(dx57):
  //   return dx57;
  // L1():
  //   dr36 = tryDispatchBuiltin.1("$", Qr9);
  //   dc18 = getTryDispatchBuiltinDispatched(dr36);
  //   if dc18 then L3() else L2(dr36);
  // L2(Qr11):
  //   r144 = `$`(Qr11, <sym qr>);
  //   goto L0(r144);
  // L3():
  //   dx56 = getTryDispatchBuiltinValue(dr36);
  //   goto L0(dx56);
  // }
  Rsh_Fir_reg_p28_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_18, CCP, RHO);
  // r146 = dyn NCOL(p28)
  SEXP Rsh_Fir_array_args269[1];
  Rsh_Fir_array_args269[0] = Rsh_Fir_reg_p28_;
  SEXP Rsh_Fir_array_arg_names65[1];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_reg_r146_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NCOL, 1, Rsh_Fir_array_args269, Rsh_Fir_array_arg_names65, CCP, RHO);
  // check L249() else D81()
  // L249()
  goto L249_;

D81_:;
  // deopt 299 [r146]
  SEXP Rsh_Fir_array_deopt_stack71[1];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_r146_;
  Rsh_Fir_deopt(299, 1, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L249_:;
  // st `df.f` = r146
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r146_, RHO);
  (void)(Rsh_Fir_reg_r146_);
  // goto L39()
  // L39()
  goto L39_;

D82_:;
  // deopt 302 []
  Rsh_Fir_deopt(302, 0, NULL, CCP, RHO);
  return R_NilValue;

L251_:;
  // r148 = dyn matrix(<missing>, 0, 4)
  SEXP Rsh_Fir_array_args270[3];
  Rsh_Fir_array_args270[0] = Rsh_const(CCP, 77);
  Rsh_Fir_array_args270[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args270[2] = Rsh_const(CCP, 86);
  SEXP Rsh_Fir_array_arg_names66[3];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_array_arg_names66[1] = R_MissingArg;
  Rsh_Fir_array_arg_names66[2] = R_MissingArg;
  Rsh_Fir_reg_r148_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args270, Rsh_Fir_array_arg_names66, CCP, RHO);
  // check L252() else D83()
  // L252()
  goto L252_;

D83_:;
  // deopt 306 [r148]
  SEXP Rsh_Fir_array_deopt_stack72[1];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_r148_;
  Rsh_Fir_deopt(306, 1, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L252_:;
  // st `coef.table` = r148
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r148_, RHO);
  (void)(Rsh_Fir_reg_r148_);
  // sym23 = ldf list
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base23 = ldf list in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args271[2];
  Rsh_Fir_array_args271[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args271[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args271);
  // if guard23 then L253() else L254()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L253()
    goto L253_;
  } else {
  // L254()
    goto L254_;
  }

L253_:;
  // sym24 = ldf c
  Rsh_Fir_reg_sym24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base24 = ldf c in base
  Rsh_Fir_reg_base24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard24 = `==`.4(sym24, base24)
  SEXP Rsh_Fir_array_args272[2];
  Rsh_Fir_array_args272[0] = Rsh_Fir_reg_sym24_;
  Rsh_Fir_array_args272[1] = Rsh_Fir_reg_base24_;
  Rsh_Fir_reg_guard24_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args272);
  // if guard24 then L255() else L256()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard24_)) {
  // L255()
    goto L255_;
  } else {
  // L256()
    goto L256_;
  }

L254_:;
  // r149 = dyn base23(NULL, <lang c("Estimate", "Std. Error", "t value", "Pr(>|t|)")>)
  SEXP Rsh_Fir_array_args273[2];
  Rsh_Fir_array_args273[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args273[1] = Rsh_const(CCP, 87);
  SEXP Rsh_Fir_array_arg_names67[2];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_array_arg_names67[1] = R_MissingArg;
  Rsh_Fir_reg_r149_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 2, Rsh_Fir_array_args273, Rsh_Fir_array_arg_names67, CCP, RHO);
  // goto L40(r149)
  // L40(r149)
  Rsh_Fir_reg_r150_ = Rsh_Fir_reg_r149_;
  goto L40_;

L255_:;
  // c47 = ldf c in base
  Rsh_Fir_reg_c47_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r153 = dyn c47("Estimate", "Std. Error", "t value", "Pr(>|t|)")
  SEXP Rsh_Fir_array_args274[4];
  Rsh_Fir_array_args274[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args274[1] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args274[2] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args274[3] = Rsh_const(CCP, 85);
  SEXP Rsh_Fir_array_arg_names68[4];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_array_arg_names68[1] = R_MissingArg;
  Rsh_Fir_array_arg_names68[2] = R_MissingArg;
  Rsh_Fir_array_arg_names68[3] = R_MissingArg;
  Rsh_Fir_reg_r153_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c47_, 4, Rsh_Fir_array_args274, Rsh_Fir_array_arg_names68, CCP, RHO);
  // check L257() else D84()
  // L257()
  goto L257_;

L256_:;
  // r151 = dyn base24("Estimate", "Std. Error", "t value", "Pr(>|t|)")
  SEXP Rsh_Fir_array_args275[4];
  Rsh_Fir_array_args275[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args275[1] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args275[2] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args275[3] = Rsh_const(CCP, 85);
  SEXP Rsh_Fir_array_arg_names69[4];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_array_arg_names69[1] = R_MissingArg;
  Rsh_Fir_array_arg_names69[2] = R_MissingArg;
  Rsh_Fir_array_arg_names69[3] = R_MissingArg;
  Rsh_Fir_reg_r151_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base24_, 4, Rsh_Fir_array_args275, Rsh_Fir_array_arg_names69, CCP, RHO);
  // goto L41(r151)
  // L41(r151)
  Rsh_Fir_reg_r152_ = Rsh_Fir_reg_r151_;
  goto L41_;

D84_:;
  // deopt 318 [r153]
  SEXP Rsh_Fir_array_deopt_stack73[1];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_r153_;
  Rsh_Fir_deopt(318, 1, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L257_:;
  // goto L41(r153)
  // L41(r153)
  Rsh_Fir_reg_r152_ = Rsh_Fir_reg_r153_;
  goto L41_;

D85_:;
  // deopt 320 [r154]
  SEXP Rsh_Fir_array_deopt_stack74[1];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_r154_;
  Rsh_Fir_deopt(320, 1, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L258_:;
  // goto L40(r154)
  // L40(r154)
  Rsh_Fir_reg_r150_ = Rsh_Fir_reg_r154_;
  goto L40_;

D86_:;
  // deopt 322 [r150, l4, r150]
  SEXP Rsh_Fir_array_deopt_stack75[3];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_r150_;
  Rsh_Fir_array_deopt_stack75[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack75[2] = Rsh_Fir_reg_r150_;
  Rsh_Fir_deopt(322, 3, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L259_:;
  // r155 = dyn dimnames__4(l4, NULL, r150)
  SEXP Rsh_Fir_array_args276[3];
  Rsh_Fir_array_args276[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args276[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args276[2] = Rsh_Fir_reg_r150_;
  SEXP Rsh_Fir_array_arg_names70[3];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_array_arg_names70[1] = R_MissingArg;
  Rsh_Fir_array_arg_names70[2] = R_MissingArg;
  Rsh_Fir_reg_r155_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__4_, 3, Rsh_Fir_array_args276, Rsh_Fir_array_arg_names70, CCP, RHO);
  // check L260() else D87()
  // L260()
  goto L260_;

D87_:;
  // deopt 324 [r150, r155]
  SEXP Rsh_Fir_array_deopt_stack76[2];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_r150_;
  Rsh_Fir_array_deopt_stack76[1] = Rsh_Fir_reg_r155_;
  Rsh_Fir_deopt(324, 2, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

L260_:;
  // st `coef.table` = r155
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r155_, RHO);
  (void)(Rsh_Fir_reg_r155_);
  // matrix1 = ldf matrix
  Rsh_Fir_reg_matrix1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L261() else D88()
  // L261()
  goto L261_;

D88_:;
  // deopt 327 []
  Rsh_Fir_deopt(327, 0, NULL, CCP, RHO);
  return R_NilValue;

L261_:;
  // r156 = dyn matrix1(<missing>, 0, 0)
  SEXP Rsh_Fir_array_args277[3];
  Rsh_Fir_array_args277[0] = Rsh_const(CCP, 77);
  Rsh_Fir_array_args277[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args277[2] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names71[3];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_array_arg_names71[1] = R_MissingArg;
  Rsh_Fir_array_arg_names71[2] = R_MissingArg;
  Rsh_Fir_reg_r156_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix1_, 3, Rsh_Fir_array_args277, Rsh_Fir_array_arg_names71, CCP, RHO);
  // check L262() else D89()
  // L262()
  goto L262_;

D89_:;
  // deopt 331 [r156]
  SEXP Rsh_Fir_array_deopt_stack77[1];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_r156_;
  Rsh_Fir_deopt(331, 1, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

L262_:;
  // st covmat = r156
  Rsh_Fir_store(Rsh_const(CCP, 68), Rsh_Fir_reg_r156_, RHO);
  (void)(Rsh_Fir_reg_r156_);
  // st `covmat.unscaled` = r156
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r156_, RHO);
  (void)(Rsh_Fir_reg_r156_);
  // sym25 = ldf length
  Rsh_Fir_reg_sym25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 88), RHO);
  // base25 = ldf length in base
  Rsh_Fir_reg_base25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 88), RHO);
  // guard25 = `==`.4(sym25, base25)
  SEXP Rsh_Fir_array_args278[2];
  Rsh_Fir_array_args278[0] = Rsh_Fir_reg_sym25_;
  Rsh_Fir_array_args278[1] = Rsh_Fir_reg_base25_;
  Rsh_Fir_reg_guard25_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args278);
  // if guard25 then L263() else L264()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard25_)) {
  // L263()
    goto L263_;
  } else {
  // L264()
    goto L264_;
  }

L263_:;
  // aliased = ld aliased
  Rsh_Fir_reg_aliased = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L265() else D90()
  // L265()
  goto L265_;

L264_:;
  // r157 = dyn base25(<sym aliased>)
  SEXP Rsh_Fir_array_args279[1];
  Rsh_Fir_array_args279[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names72[1];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_reg_r157_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base25_, 1, Rsh_Fir_array_args279, Rsh_Fir_array_arg_names72, CCP, RHO);
  // goto L42(r157)
  // L42(r157)
  Rsh_Fir_reg_r158_ = Rsh_Fir_reg_r157_;
  goto L42_;

D90_:;
  // deopt 336 [aliased]
  SEXP Rsh_Fir_array_deopt_stack78[1];
  Rsh_Fir_array_deopt_stack78[0] = Rsh_Fir_reg_aliased;
  Rsh_Fir_deopt(336, 1, Rsh_Fir_array_deopt_stack78, CCP, RHO);
  return R_NilValue;

L265_:;
  // aliased1 = force? aliased
  Rsh_Fir_reg_aliased1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_aliased);
  // checkMissing(aliased1)
  SEXP Rsh_Fir_array_args280[1];
  Rsh_Fir_array_args280[0] = Rsh_Fir_reg_aliased1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args280, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 88), RHO);
  // r159 = dyn length(aliased1)
  SEXP Rsh_Fir_array_args281[1];
  Rsh_Fir_array_args281[0] = Rsh_Fir_reg_aliased1_;
  SEXP Rsh_Fir_array_arg_names73[1];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_reg_r159_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args281, Rsh_Fir_array_arg_names73, CCP, RHO);
  // check L266() else D91()
  // L266()
  goto L266_;

D91_:;
  // deopt 339 [r159]
  SEXP Rsh_Fir_array_deopt_stack79[1];
  Rsh_Fir_array_deopt_stack79[0] = Rsh_Fir_reg_r159_;
  Rsh_Fir_deopt(339, 1, Rsh_Fir_array_deopt_stack79, CCP, RHO);
  return R_NilValue;

L266_:;
  // goto L42(r159)
  // L42(r159)
  Rsh_Fir_reg_r158_ = Rsh_Fir_reg_r159_;
  goto L42_;

L267_:;
  // sym27 = ldf c
  Rsh_Fir_reg_sym27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base27 = ldf c in base
  Rsh_Fir_reg_base27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard27 = `==`.4(sym27, base27)
  SEXP Rsh_Fir_array_args282[2];
  Rsh_Fir_array_args282[0] = Rsh_Fir_reg_sym27_;
  Rsh_Fir_array_args282[1] = Rsh_Fir_reg_base27_;
  Rsh_Fir_reg_guard27_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args282);
  // if guard27 then L269() else L270()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard27_)) {
  // L269()
    goto L269_;
  } else {
  // L270()
    goto L270_;
  }

L268_:;
  // r160 = dyn base26(<lang c("call", "terms", "family", "deviance", "aic", "contrasts", "df.residual", "null.deviance", "df.null", "iter", "na.action")>, <lang names(object)>, 0)
  SEXP Rsh_Fir_array_args283[3];
  Rsh_Fir_array_args283[0] = Rsh_const(CCP, 89);
  Rsh_Fir_array_args283[1] = Rsh_const(CCP, 90);
  Rsh_Fir_array_args283[2] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names74[3];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_array_arg_names74[1] = R_MissingArg;
  Rsh_Fir_array_arg_names74[2] = R_MissingArg;
  Rsh_Fir_reg_r160_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base26_, 3, Rsh_Fir_array_args283, Rsh_Fir_array_arg_names74, CCP, RHO);
  // goto L43(r160)
  // L43(r160)
  Rsh_Fir_reg_r161_ = Rsh_Fir_reg_r160_;
  goto L43_;

L269_:;
  // c48 = ldf c in base
  Rsh_Fir_reg_c48_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r164 = dyn c48("call", "terms", "family", "deviance", "aic", "contrasts", "df.residual", "null.deviance", "df.null", "iter", "na.action")
  SEXP Rsh_Fir_array_args284[11];
  Rsh_Fir_array_args284[0] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args284[1] = Rsh_const(CCP, 92);
  Rsh_Fir_array_args284[2] = Rsh_const(CCP, 93);
  Rsh_Fir_array_args284[3] = Rsh_const(CCP, 94);
  Rsh_Fir_array_args284[4] = Rsh_const(CCP, 95);
  Rsh_Fir_array_args284[5] = Rsh_const(CCP, 96);
  Rsh_Fir_array_args284[6] = Rsh_const(CCP, 97);
  Rsh_Fir_array_args284[7] = Rsh_const(CCP, 98);
  Rsh_Fir_array_args284[8] = Rsh_const(CCP, 99);
  Rsh_Fir_array_args284[9] = Rsh_const(CCP, 100);
  Rsh_Fir_array_args284[10] = Rsh_const(CCP, 101);
  SEXP Rsh_Fir_array_arg_names75[11];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_array_arg_names75[1] = R_MissingArg;
  Rsh_Fir_array_arg_names75[2] = R_MissingArg;
  Rsh_Fir_array_arg_names75[3] = R_MissingArg;
  Rsh_Fir_array_arg_names75[4] = R_MissingArg;
  Rsh_Fir_array_arg_names75[5] = R_MissingArg;
  Rsh_Fir_array_arg_names75[6] = R_MissingArg;
  Rsh_Fir_array_arg_names75[7] = R_MissingArg;
  Rsh_Fir_array_arg_names75[8] = R_MissingArg;
  Rsh_Fir_array_arg_names75[9] = R_MissingArg;
  Rsh_Fir_array_arg_names75[10] = R_MissingArg;
  Rsh_Fir_reg_r164_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c48_, 11, Rsh_Fir_array_args284, Rsh_Fir_array_arg_names75, CCP, RHO);
  // check L271() else D92()
  // L271()
  goto L271_;

L270_:;
  // r162 = dyn base27("call", "terms", "family", "deviance", "aic", "contrasts", "df.residual", "null.deviance", "df.null", "iter", "na.action")
  SEXP Rsh_Fir_array_args285[11];
  Rsh_Fir_array_args285[0] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args285[1] = Rsh_const(CCP, 92);
  Rsh_Fir_array_args285[2] = Rsh_const(CCP, 93);
  Rsh_Fir_array_args285[3] = Rsh_const(CCP, 94);
  Rsh_Fir_array_args285[4] = Rsh_const(CCP, 95);
  Rsh_Fir_array_args285[5] = Rsh_const(CCP, 96);
  Rsh_Fir_array_args285[6] = Rsh_const(CCP, 97);
  Rsh_Fir_array_args285[7] = Rsh_const(CCP, 98);
  Rsh_Fir_array_args285[8] = Rsh_const(CCP, 99);
  Rsh_Fir_array_args285[9] = Rsh_const(CCP, 100);
  Rsh_Fir_array_args285[10] = Rsh_const(CCP, 101);
  SEXP Rsh_Fir_array_arg_names76[11];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_array_arg_names76[1] = R_MissingArg;
  Rsh_Fir_array_arg_names76[2] = R_MissingArg;
  Rsh_Fir_array_arg_names76[3] = R_MissingArg;
  Rsh_Fir_array_arg_names76[4] = R_MissingArg;
  Rsh_Fir_array_arg_names76[5] = R_MissingArg;
  Rsh_Fir_array_arg_names76[6] = R_MissingArg;
  Rsh_Fir_array_arg_names76[7] = R_MissingArg;
  Rsh_Fir_array_arg_names76[8] = R_MissingArg;
  Rsh_Fir_array_arg_names76[9] = R_MissingArg;
  Rsh_Fir_array_arg_names76[10] = R_MissingArg;
  Rsh_Fir_reg_r162_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base27_, 11, Rsh_Fir_array_args285, Rsh_Fir_array_arg_names76, CCP, RHO);
  // goto L44(r162)
  // L44(r162)
  Rsh_Fir_reg_r163_ = Rsh_Fir_reg_r162_;
  goto L44_;

D92_:;
  // deopt 357 [r164]
  SEXP Rsh_Fir_array_deopt_stack80[1];
  Rsh_Fir_array_deopt_stack80[0] = Rsh_Fir_reg_r164_;
  Rsh_Fir_deopt(357, 1, Rsh_Fir_array_deopt_stack80, CCP, RHO);
  return R_NilValue;

L271_:;
  // goto L44(r164)
  // L44(r164)
  Rsh_Fir_reg_r163_ = Rsh_Fir_reg_r164_;
  goto L44_;

L272_:;
  // object37 = ld object
  Rsh_Fir_reg_object37_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L274() else D93()
  // L274()
  goto L274_;

L273_:;
  // r165 = dyn base28(<sym object>)
  SEXP Rsh_Fir_array_args286[1];
  Rsh_Fir_array_args286[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names77[1];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_reg_r165_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base28_, 1, Rsh_Fir_array_args286, Rsh_Fir_array_arg_names77, CCP, RHO);
  // goto L45(r165)
  // L45(r165)
  Rsh_Fir_reg_r166_ = Rsh_Fir_reg_r165_;
  goto L45_;

D93_:;
  // deopt 360 [object37]
  SEXP Rsh_Fir_array_deopt_stack81[1];
  Rsh_Fir_array_deopt_stack81[0] = Rsh_Fir_reg_object37_;
  Rsh_Fir_deopt(360, 1, Rsh_Fir_array_deopt_stack81, CCP, RHO);
  return R_NilValue;

L274_:;
  // object38 = force? object37
  Rsh_Fir_reg_object38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object37_);
  // checkMissing(object38)
  SEXP Rsh_Fir_array_args287[1];
  Rsh_Fir_array_args287[0] = Rsh_Fir_reg_object38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args287, Rsh_Fir_param_types_empty()));
  // names5 = ldf names in base
  Rsh_Fir_reg_names5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r167 = dyn names5(object38)
  SEXP Rsh_Fir_array_args288[1];
  Rsh_Fir_array_args288[0] = Rsh_Fir_reg_object38_;
  SEXP Rsh_Fir_array_arg_names78[1];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_reg_r167_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names5_, 1, Rsh_Fir_array_args288, Rsh_Fir_array_arg_names78, CCP, RHO);
  // check L275() else D94()
  // L275()
  goto L275_;

D94_:;
  // deopt 363 [r167]
  SEXP Rsh_Fir_array_deopt_stack82[1];
  Rsh_Fir_array_deopt_stack82[0] = Rsh_Fir_reg_r167_;
  Rsh_Fir_deopt(363, 1, Rsh_Fir_array_deopt_stack82, CCP, RHO);
  return R_NilValue;

L275_:;
  // goto L45(r167)
  // L45(r167)
  Rsh_Fir_reg_r166_ = Rsh_Fir_reg_r167_;
  goto L45_;

D95_:;
  // deopt 367 [r168]
  SEXP Rsh_Fir_array_deopt_stack83[1];
  Rsh_Fir_array_deopt_stack83[0] = Rsh_Fir_reg_r168_;
  Rsh_Fir_deopt(367, 1, Rsh_Fir_array_deopt_stack83, CCP, RHO);
  return R_NilValue;

L276_:;
  // goto L43(r168)
  // L43(r168)
  Rsh_Fir_reg_r161_ = Rsh_Fir_reg_r168_;
  goto L43_;

L277_:;
  // object39 = ld object
  Rsh_Fir_reg_object39_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L279() else D96()
  // L279()
  goto L279_;

L278_:;
  // r169 = dyn base29(<lang `[`(object, keep)>, <lang list(deviance.resid=residuals(object, type="deviance"), coefficients=coef.table, aliased=aliased, dispersion=dispersion, df=c(`$`(object, rank), df.r, df.f), cov.unscaled=covmat.unscaled, cov.scaled=covmat)>)
  SEXP Rsh_Fir_array_args289[2];
  Rsh_Fir_array_args289[0] = Rsh_const(CCP, 102);
  Rsh_Fir_array_args289[1] = Rsh_const(CCP, 103);
  SEXP Rsh_Fir_array_arg_names79[2];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_array_arg_names79[1] = R_MissingArg;
  Rsh_Fir_reg_r169_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base29_, 2, Rsh_Fir_array_args289, Rsh_Fir_array_arg_names79, CCP, RHO);
  // goto L46(r169)
  // L46(r169)
  Rsh_Fir_reg_r170_ = Rsh_Fir_reg_r169_;
  goto L46_;

D96_:;
  // deopt 371 [object39]
  SEXP Rsh_Fir_array_deopt_stack84[1];
  Rsh_Fir_array_deopt_stack84[0] = Rsh_Fir_reg_object39_;
  Rsh_Fir_deopt(371, 1, Rsh_Fir_array_deopt_stack84, CCP, RHO);
  return R_NilValue;

L279_:;
  // object40 = force? object39
  Rsh_Fir_reg_object40_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object39_);
  // checkMissing(object40)
  SEXP Rsh_Fir_array_args290[1];
  Rsh_Fir_array_args290[0] = Rsh_Fir_reg_object40_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args290, Rsh_Fir_param_types_empty()));
  // c49 = `is.object`(object40)
  SEXP Rsh_Fir_array_args291[1];
  Rsh_Fir_array_args291[0] = Rsh_Fir_reg_object40_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args291, Rsh_Fir_param_types_empty());
  // if c49 then L280() else L281(object40)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c49_)) {
  // L280()
    goto L280_;
  } else {
  // L281(object40)
    Rsh_Fir_reg_object42_ = Rsh_Fir_reg_object40_;
    goto L281_;
  }

L280_:;
  // dr38 = tryDispatchBuiltin.1("[", object40)
  SEXP Rsh_Fir_array_args292[2];
  Rsh_Fir_array_args292[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args292[1] = Rsh_Fir_reg_object40_;
  Rsh_Fir_reg_dr38_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args292);
  // dc19 = getTryDispatchBuiltinDispatched(dr38)
  SEXP Rsh_Fir_array_args293[1];
  Rsh_Fir_array_args293[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dc19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args293, Rsh_Fir_param_types_empty());
  // if dc19 then L282() else L281(dr38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc19_)) {
  // L282()
    goto L282_;
  } else {
  // L281(dr38)
    Rsh_Fir_reg_object42_ = Rsh_Fir_reg_dr38_;
    goto L281_;
  }

L281_:;
  // keep = ld keep
  Rsh_Fir_reg_keep = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L283() else D97()
  // L283()
  goto L283_;

L282_:;
  // dx58 = getTryDispatchBuiltinValue(dr38)
  SEXP Rsh_Fir_array_args294[1];
  Rsh_Fir_array_args294[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dx58_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args294, Rsh_Fir_param_types_empty());
  // goto L47(dx58)
  // L47(dx58)
  Rsh_Fir_reg_dx59_ = Rsh_Fir_reg_dx58_;
  goto L47_;

D97_:;
  // deopt 373 [object42, keep]
  SEXP Rsh_Fir_array_deopt_stack85[2];
  Rsh_Fir_array_deopt_stack85[0] = Rsh_Fir_reg_object42_;
  Rsh_Fir_array_deopt_stack85[1] = Rsh_Fir_reg_keep;
  Rsh_Fir_deopt(373, 2, Rsh_Fir_array_deopt_stack85, CCP, RHO);
  return R_NilValue;

L283_:;
  // keep1 = force? keep
  Rsh_Fir_reg_keep1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r171 = dyn __4(object42, keep1)
  SEXP Rsh_Fir_array_args295[2];
  Rsh_Fir_array_args295[0] = Rsh_Fir_reg_object42_;
  Rsh_Fir_array_args295[1] = Rsh_Fir_reg_keep1_;
  SEXP Rsh_Fir_array_arg_names80[2];
  Rsh_Fir_array_arg_names80[0] = R_MissingArg;
  Rsh_Fir_array_arg_names80[1] = R_MissingArg;
  Rsh_Fir_reg_r171_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args295, Rsh_Fir_array_arg_names80, CCP, RHO);
  // goto L47(r171)
  // L47(r171)
  Rsh_Fir_reg_dx59_ = Rsh_Fir_reg_r171_;
  goto L47_;

L284_:;
  // residuals = ldf residuals
  Rsh_Fir_reg_residuals = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L286() else D98()
  // L286()
  goto L286_;

L285_:;
  // r172 = dyn base30[`deviance.resid`, coefficients, aliased, dispersion, df, `cov.unscaled`, `cov.scaled`](<lang residuals(object, type="deviance")>, <sym coef.table>, <sym aliased>, <sym dispersion>, <lang c(`$`(object, rank), df.r, df.f)>, <sym covmat.unscaled>, <sym covmat>)
  SEXP Rsh_Fir_array_args296[7];
  Rsh_Fir_array_args296[0] = Rsh_const(CCP, 104);
  Rsh_Fir_array_args296[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args296[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args296[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args296[4] = Rsh_const(CCP, 105);
  Rsh_Fir_array_args296[5] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args296[6] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names81[7];
  Rsh_Fir_array_arg_names81[0] = Rsh_const(CCP, 106);
  Rsh_Fir_array_arg_names81[1] = Rsh_const(CCP, 64);
  Rsh_Fir_array_arg_names81[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_arg_names81[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names81[4] = Rsh_const(CCP, 107);
  Rsh_Fir_array_arg_names81[5] = Rsh_const(CCP, 108);
  Rsh_Fir_array_arg_names81[6] = Rsh_const(CCP, 109);
  Rsh_Fir_reg_r172_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base30_, 7, Rsh_Fir_array_args296, Rsh_Fir_array_arg_names81, CCP, RHO);
  // goto L48(r172)
  // L48(r172)
  Rsh_Fir_reg_r173_ = Rsh_Fir_reg_r172_;
  goto L48_;

D98_:;
  // deopt 379 []
  Rsh_Fir_deopt(379, 0, NULL, CCP, RHO);
  return R_NilValue;

L286_:;
  // p29 = prom<V +>{
  //   object43 = ld object;
  //   object44 = force? object43;
  //   checkMissing(object44);
  //   return object44;
  // }
  Rsh_Fir_reg_p29_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_19, CCP, RHO);
  // r175 = dyn residuals[, type](p29, "deviance")
  SEXP Rsh_Fir_array_args298[2];
  Rsh_Fir_array_args298[0] = Rsh_Fir_reg_p29_;
  Rsh_Fir_array_args298[1] = Rsh_const(CCP, 94);
  SEXP Rsh_Fir_array_arg_names82[2];
  Rsh_Fir_array_arg_names82[0] = R_MissingArg;
  Rsh_Fir_array_arg_names82[1] = Rsh_const(CCP, 110);
  Rsh_Fir_reg_r175_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_residuals, 2, Rsh_Fir_array_args298, Rsh_Fir_array_arg_names82, CCP, RHO);
  // check L287() else D99()
  // L287()
  goto L287_;

D99_:;
  // deopt 383 [r175]
  SEXP Rsh_Fir_array_deopt_stack86[1];
  Rsh_Fir_array_deopt_stack86[0] = Rsh_Fir_reg_r175_;
  Rsh_Fir_deopt(383, 1, Rsh_Fir_array_deopt_stack86, CCP, RHO);
  return R_NilValue;

L287_:;
  // coef_table = ld `coef.table`
  Rsh_Fir_reg_coef_table = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L288() else D100()
  // L288()
  goto L288_;

D100_:;
  // deopt 385 [coef_table]
  SEXP Rsh_Fir_array_deopt_stack87[1];
  Rsh_Fir_array_deopt_stack87[0] = Rsh_Fir_reg_coef_table;
  Rsh_Fir_deopt(385, 1, Rsh_Fir_array_deopt_stack87, CCP, RHO);
  return R_NilValue;

L288_:;
  // coef_table1 = force? coef_table
  Rsh_Fir_reg_coef_table1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coef_table);
  // checkMissing(coef_table1)
  SEXP Rsh_Fir_array_args299[1];
  Rsh_Fir_array_args299[0] = Rsh_Fir_reg_coef_table1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args299, Rsh_Fir_param_types_empty()));
  // aliased2 = ld aliased
  Rsh_Fir_reg_aliased2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L289() else D101()
  // L289()
  goto L289_;

D101_:;
  // deopt 388 [aliased2]
  SEXP Rsh_Fir_array_deopt_stack88[1];
  Rsh_Fir_array_deopt_stack88[0] = Rsh_Fir_reg_aliased2_;
  Rsh_Fir_deopt(388, 1, Rsh_Fir_array_deopt_stack88, CCP, RHO);
  return R_NilValue;

L289_:;
  // aliased3 = force? aliased2
  Rsh_Fir_reg_aliased3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_aliased2_);
  // checkMissing(aliased3)
  SEXP Rsh_Fir_array_args300[1];
  Rsh_Fir_array_args300[0] = Rsh_Fir_reg_aliased3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args300, Rsh_Fir_param_types_empty()));
  // dispersion5 = ld dispersion
  Rsh_Fir_reg_dispersion5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L290() else D102()
  // L290()
  goto L290_;

D102_:;
  // deopt 391 [dispersion5]
  SEXP Rsh_Fir_array_deopt_stack89[1];
  Rsh_Fir_array_deopt_stack89[0] = Rsh_Fir_reg_dispersion5_;
  Rsh_Fir_deopt(391, 1, Rsh_Fir_array_deopt_stack89, CCP, RHO);
  return R_NilValue;

L290_:;
  // dispersion6 = force? dispersion5
  Rsh_Fir_reg_dispersion6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dispersion5_);
  // checkMissing(dispersion6)
  SEXP Rsh_Fir_array_args301[1];
  Rsh_Fir_array_args301[0] = Rsh_Fir_reg_dispersion6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args301, Rsh_Fir_param_types_empty()));
  // sym31 = ldf c
  Rsh_Fir_reg_sym31_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base31 = ldf c in base
  Rsh_Fir_reg_base31_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard31 = `==`.4(sym31, base31)
  SEXP Rsh_Fir_array_args302[2];
  Rsh_Fir_array_args302[0] = Rsh_Fir_reg_sym31_;
  Rsh_Fir_array_args302[1] = Rsh_Fir_reg_base31_;
  Rsh_Fir_reg_guard31_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args302);
  // if guard31 then L291() else L292()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard31_)) {
  // L291()
    goto L291_;
  } else {
  // L292()
    goto L292_;
  }

L291_:;
  // object45 = ld object
  Rsh_Fir_reg_object45_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L293() else D103()
  // L293()
  goto L293_;

L292_:;
  // r176 = dyn base31(<lang `$`(object, rank)>, <sym df.r>, <sym df.f>)
  SEXP Rsh_Fir_array_args303[3];
  Rsh_Fir_array_args303[0] = Rsh_const(CCP, 111);
  Rsh_Fir_array_args303[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args303[2] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names83[3];
  Rsh_Fir_array_arg_names83[0] = R_MissingArg;
  Rsh_Fir_array_arg_names83[1] = R_MissingArg;
  Rsh_Fir_array_arg_names83[2] = R_MissingArg;
  Rsh_Fir_reg_r176_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base31_, 3, Rsh_Fir_array_args303, Rsh_Fir_array_arg_names83, CCP, RHO);
  // goto L49(r176)
  // L49(r176)
  Rsh_Fir_reg_r177_ = Rsh_Fir_reg_r176_;
  goto L49_;

D103_:;
  // deopt 396 [object45]
  SEXP Rsh_Fir_array_deopt_stack90[1];
  Rsh_Fir_array_deopt_stack90[0] = Rsh_Fir_reg_object45_;
  Rsh_Fir_deopt(396, 1, Rsh_Fir_array_deopt_stack90, CCP, RHO);
  return R_NilValue;

L293_:;
  // object46 = force? object45
  Rsh_Fir_reg_object46_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object45_);
  // checkMissing(object46)
  SEXP Rsh_Fir_array_args304[1];
  Rsh_Fir_array_args304[0] = Rsh_Fir_reg_object46_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args304, Rsh_Fir_param_types_empty()));
  // c50 = `is.object`(object46)
  SEXP Rsh_Fir_array_args305[1];
  Rsh_Fir_array_args305[0] = Rsh_Fir_reg_object46_;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args305, Rsh_Fir_param_types_empty());
  // if c50 then L295() else L296(object46)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c50_)) {
  // L295()
    goto L295_;
  } else {
  // L296(object46)
    Rsh_Fir_reg_object48_ = Rsh_Fir_reg_object46_;
    goto L296_;
  }

L294_:;
  // df_r8 = ld `df.r`
  Rsh_Fir_reg_df_r8_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L298() else D104()
  // L298()
  goto L298_;

L295_:;
  // dr40 = tryDispatchBuiltin.1("$", object46)
  SEXP Rsh_Fir_array_args306[2];
  Rsh_Fir_array_args306[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args306[1] = Rsh_Fir_reg_object46_;
  Rsh_Fir_reg_dr40_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args306);
  // dc20 = getTryDispatchBuiltinDispatched(dr40)
  SEXP Rsh_Fir_array_args307[1];
  Rsh_Fir_array_args307[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dc20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args307, Rsh_Fir_param_types_empty());
  // if dc20 then L297() else L296(dr40)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc20_)) {
  // L297()
    goto L297_;
  } else {
  // L296(dr40)
    Rsh_Fir_reg_object48_ = Rsh_Fir_reg_dr40_;
    goto L296_;
  }

L296_:;
  // r178 = `$`(object48, <sym rank>)
  SEXP Rsh_Fir_array_args308[2];
  Rsh_Fir_array_args308[0] = Rsh_Fir_reg_object48_;
  Rsh_Fir_array_args308[1] = Rsh_const(CCP, 59);
  Rsh_Fir_reg_r178_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args308, Rsh_Fir_param_types_empty());
  // goto L294(r178)
  // L294(r178)
  Rsh_Fir_reg_dx61_ = Rsh_Fir_reg_r178_;
  goto L294_;

L297_:;
  // dx60 = getTryDispatchBuiltinValue(dr40)
  SEXP Rsh_Fir_array_args309[1];
  Rsh_Fir_array_args309[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dx60_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args309, Rsh_Fir_param_types_empty());
  // goto L294(dx60)
  // L294(dx60)
  Rsh_Fir_reg_dx61_ = Rsh_Fir_reg_dx60_;
  goto L294_;

D104_:;
  // deopt 399 [df_r8]
  SEXP Rsh_Fir_array_deopt_stack91[1];
  Rsh_Fir_array_deopt_stack91[0] = Rsh_Fir_reg_df_r8_;
  Rsh_Fir_deopt(399, 1, Rsh_Fir_array_deopt_stack91, CCP, RHO);
  return R_NilValue;

L298_:;
  // df_r9 = force? df_r8
  Rsh_Fir_reg_df_r9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df_r8_);
  // checkMissing(df_r9)
  SEXP Rsh_Fir_array_args310[1];
  Rsh_Fir_array_args310[0] = Rsh_Fir_reg_df_r9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args310, Rsh_Fir_param_types_empty()));
  // df_f = ld `df.f`
  Rsh_Fir_reg_df_f = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L299() else D105()
  // L299()
  goto L299_;

D105_:;
  // deopt 401 [df_f]
  SEXP Rsh_Fir_array_deopt_stack92[1];
  Rsh_Fir_array_deopt_stack92[0] = Rsh_Fir_reg_df_f;
  Rsh_Fir_deopt(401, 1, Rsh_Fir_array_deopt_stack92, CCP, RHO);
  return R_NilValue;

L299_:;
  // df_f1 = force? df_f
  Rsh_Fir_reg_df_f1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df_f);
  // checkMissing(df_f1)
  SEXP Rsh_Fir_array_args311[1];
  Rsh_Fir_array_args311[0] = Rsh_Fir_reg_df_f1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args311, Rsh_Fir_param_types_empty()));
  // c51 = ldf c in base
  Rsh_Fir_reg_c51_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r179 = dyn c51(dx61, df_r9, df_f1)
  SEXP Rsh_Fir_array_args312[3];
  Rsh_Fir_array_args312[0] = Rsh_Fir_reg_dx61_;
  Rsh_Fir_array_args312[1] = Rsh_Fir_reg_df_r9_;
  Rsh_Fir_array_args312[2] = Rsh_Fir_reg_df_f1_;
  SEXP Rsh_Fir_array_arg_names84[3];
  Rsh_Fir_array_arg_names84[0] = R_MissingArg;
  Rsh_Fir_array_arg_names84[1] = R_MissingArg;
  Rsh_Fir_array_arg_names84[2] = R_MissingArg;
  Rsh_Fir_reg_r179_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c51_, 3, Rsh_Fir_array_args312, Rsh_Fir_array_arg_names84, CCP, RHO);
  // check L300() else D106()
  // L300()
  goto L300_;

D106_:;
  // deopt 404 [r179]
  SEXP Rsh_Fir_array_deopt_stack93[1];
  Rsh_Fir_array_deopt_stack93[0] = Rsh_Fir_reg_r179_;
  Rsh_Fir_deopt(404, 1, Rsh_Fir_array_deopt_stack93, CCP, RHO);
  return R_NilValue;

L300_:;
  // goto L49(r179)
  // L49(r179)
  Rsh_Fir_reg_r177_ = Rsh_Fir_reg_r179_;
  goto L49_;

D107_:;
  // deopt 406 [covmat_unscaled2]
  SEXP Rsh_Fir_array_deopt_stack94[1];
  Rsh_Fir_array_deopt_stack94[0] = Rsh_Fir_reg_covmat_unscaled2_;
  Rsh_Fir_deopt(406, 1, Rsh_Fir_array_deopt_stack94, CCP, RHO);
  return R_NilValue;

L301_:;
  // covmat_unscaled3 = force? covmat_unscaled2
  Rsh_Fir_reg_covmat_unscaled3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_covmat_unscaled2_);
  // checkMissing(covmat_unscaled3)
  SEXP Rsh_Fir_array_args313[1];
  Rsh_Fir_array_args313[0] = Rsh_Fir_reg_covmat_unscaled3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args313, Rsh_Fir_param_types_empty()));
  // covmat2 = ld covmat
  Rsh_Fir_reg_covmat2_ = Rsh_Fir_load(Rsh_const(CCP, 68), RHO);
  // check L302() else D108()
  // L302()
  goto L302_;

D108_:;
  // deopt 409 [covmat2]
  SEXP Rsh_Fir_array_deopt_stack95[1];
  Rsh_Fir_array_deopt_stack95[0] = Rsh_Fir_reg_covmat2_;
  Rsh_Fir_deopt(409, 1, Rsh_Fir_array_deopt_stack95, CCP, RHO);
  return R_NilValue;

L302_:;
  // covmat3 = force? covmat2
  Rsh_Fir_reg_covmat3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_covmat2_);
  // checkMissing(covmat3)
  SEXP Rsh_Fir_array_args314[1];
  Rsh_Fir_array_args314[0] = Rsh_Fir_reg_covmat3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args314, Rsh_Fir_param_types_empty()));
  // list5 = ldf list in base
  Rsh_Fir_reg_list5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r180 = dyn list5(r175, coef_table1, aliased3, dispersion6, r177, covmat_unscaled3, covmat3)
  SEXP Rsh_Fir_array_args315[7];
  Rsh_Fir_array_args315[0] = Rsh_Fir_reg_r175_;
  Rsh_Fir_array_args315[1] = Rsh_Fir_reg_coef_table1_;
  Rsh_Fir_array_args315[2] = Rsh_Fir_reg_aliased3_;
  Rsh_Fir_array_args315[3] = Rsh_Fir_reg_dispersion6_;
  Rsh_Fir_array_args315[4] = Rsh_Fir_reg_r177_;
  Rsh_Fir_array_args315[5] = Rsh_Fir_reg_covmat_unscaled3_;
  Rsh_Fir_array_args315[6] = Rsh_Fir_reg_covmat3_;
  SEXP Rsh_Fir_array_arg_names85[7];
  Rsh_Fir_array_arg_names85[0] = R_MissingArg;
  Rsh_Fir_array_arg_names85[1] = R_MissingArg;
  Rsh_Fir_array_arg_names85[2] = R_MissingArg;
  Rsh_Fir_array_arg_names85[3] = R_MissingArg;
  Rsh_Fir_array_arg_names85[4] = R_MissingArg;
  Rsh_Fir_array_arg_names85[5] = R_MissingArg;
  Rsh_Fir_array_arg_names85[6] = R_MissingArg;
  Rsh_Fir_reg_r180_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list5_, 7, Rsh_Fir_array_args315, Rsh_Fir_array_arg_names85, CCP, RHO);
  // check L303() else D109()
  // L303()
  goto L303_;

D109_:;
  // deopt 413 [r180]
  SEXP Rsh_Fir_array_deopt_stack96[1];
  Rsh_Fir_array_deopt_stack96[0] = Rsh_Fir_reg_r180_;
  Rsh_Fir_deopt(413, 1, Rsh_Fir_array_deopt_stack96, CCP, RHO);
  return R_NilValue;

L303_:;
  // goto L48(r180)
  // L48(r180)
  Rsh_Fir_reg_r173_ = Rsh_Fir_reg_r180_;
  goto L48_;

D110_:;
  // deopt 415 [r181]
  SEXP Rsh_Fir_array_deopt_stack97[1];
  Rsh_Fir_array_deopt_stack97[0] = Rsh_Fir_reg_r181_;
  Rsh_Fir_deopt(415, 1, Rsh_Fir_array_deopt_stack97, CCP, RHO);
  return R_NilValue;

L304_:;
  // goto L46(r181)
  // L46(r181)
  Rsh_Fir_reg_r170_ = Rsh_Fir_reg_r181_;
  goto L46_;

D111_:;
  // deopt 417 [correlation1]
  SEXP Rsh_Fir_array_deopt_stack98[1];
  Rsh_Fir_array_deopt_stack98[0] = Rsh_Fir_reg_correlation1_;
  Rsh_Fir_deopt(417, 1, Rsh_Fir_array_deopt_stack98, CCP, RHO);
  return R_NilValue;

L305_:;
  // correlation2 = force? correlation1
  Rsh_Fir_reg_correlation2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_correlation1_);
  // checkMissing(correlation2)
  SEXP Rsh_Fir_array_args316[1];
  Rsh_Fir_array_args316[0] = Rsh_Fir_reg_correlation2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args316, Rsh_Fir_param_types_empty()));
  // c53 = `as.logical`(correlation2)
  SEXP Rsh_Fir_array_args317[1];
  Rsh_Fir_array_args317[0] = Rsh_Fir_reg_correlation2_;
  Rsh_Fir_reg_c53_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args317, Rsh_Fir_param_types_empty());
  // if c53 then L306() else L50(c53)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c53_)) {
  // L306()
    goto L306_;
  } else {
  // L50(c53)
    Rsh_Fir_reg_c55_ = Rsh_Fir_reg_c53_;
    goto L50_;
  }

L306_:;
  // p30 = ld p
  Rsh_Fir_reg_p30_ = Rsh_Fir_load(Rsh_const(CCP, 58), RHO);
  // check L307() else D112()
  // L307()
  goto L307_;

D112_:;
  // deopt 419 [c53, p30]
  SEXP Rsh_Fir_array_deopt_stack99[2];
  Rsh_Fir_array_deopt_stack99[0] = Rsh_Fir_reg_c53_;
  Rsh_Fir_array_deopt_stack99[1] = Rsh_Fir_reg_p30_;
  Rsh_Fir_deopt(419, 2, Rsh_Fir_array_deopt_stack99, CCP, RHO);
  return R_NilValue;

L307_:;
  // p31 = force? p30
  Rsh_Fir_reg_p31_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p30_);
  // checkMissing(p31)
  SEXP Rsh_Fir_array_args318[1];
  Rsh_Fir_array_args318[0] = Rsh_Fir_reg_p31_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args318, Rsh_Fir_param_types_empty()));
  // r182 = `>`(p31, 0.0)
  SEXP Rsh_Fir_array_args319[2];
  Rsh_Fir_array_args319[0] = Rsh_Fir_reg_p31_;
  Rsh_Fir_array_args319[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r182_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args319, Rsh_Fir_param_types_empty());
  // c56 = `as.logical`(r182)
  SEXP Rsh_Fir_array_args320[1];
  Rsh_Fir_array_args320[0] = Rsh_Fir_reg_r182_;
  Rsh_Fir_reg_c56_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args320, Rsh_Fir_param_types_empty());
  // c57 = `&&`(c53, c56)
  SEXP Rsh_Fir_array_args321[2];
  Rsh_Fir_array_args321[0] = Rsh_Fir_reg_c53_;
  Rsh_Fir_array_args321[1] = Rsh_Fir_reg_c56_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args321, Rsh_Fir_param_types_empty());
  // goto L50(c57)
  // L50(c57)
  Rsh_Fir_reg_c55_ = Rsh_Fir_reg_c57_;
  goto L50_;

L309_:;
  // sym32 = ldf sqrt
  Rsh_Fir_reg_sym32_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 71), RHO);
  // base32 = ldf sqrt in base
  Rsh_Fir_reg_base32_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // guard32 = `==`.4(sym32, base32)
  SEXP Rsh_Fir_array_args322[2];
  Rsh_Fir_array_args322[0] = Rsh_Fir_reg_sym32_;
  Rsh_Fir_array_args322[1] = Rsh_Fir_reg_base32_;
  Rsh_Fir_reg_guard32_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args322);
  // if guard32 then L310() else L311()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard32_)) {
  // L310()
    goto L310_;
  } else {
  // L311()
    goto L311_;
  }

L310_:;
  // diag1 = ldf diag
  Rsh_Fir_reg_diag1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // check L312() else D113()
  // L312()
  goto L312_;

L311_:;
  // r183 = dyn base32(<lang diag(covmat.unscaled)>)
  SEXP Rsh_Fir_array_args323[1];
  Rsh_Fir_array_args323[0] = Rsh_const(CCP, 112);
  SEXP Rsh_Fir_array_arg_names86[1];
  Rsh_Fir_array_arg_names86[0] = R_MissingArg;
  Rsh_Fir_reg_r183_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base32_, 1, Rsh_Fir_array_args323, Rsh_Fir_array_arg_names86, CCP, RHO);
  // goto L52(r183)
  // L52(r183)
  Rsh_Fir_reg_r184_ = Rsh_Fir_reg_r183_;
  goto L52_;

D113_:;
  // deopt 426 []
  Rsh_Fir_deopt(426, 0, NULL, CCP, RHO);
  return R_NilValue;

L312_:;
  // p32 = prom<V +>{
  //   covmat_unscaled4 = ld `covmat.unscaled`;
  //   covmat_unscaled5 = force? covmat_unscaled4;
  //   checkMissing(covmat_unscaled5);
  //   return covmat_unscaled5;
  // }
  Rsh_Fir_reg_p32_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_20, CCP, RHO);
  // r186 = dyn diag1(p32)
  SEXP Rsh_Fir_array_args325[1];
  Rsh_Fir_array_args325[0] = Rsh_Fir_reg_p32_;
  SEXP Rsh_Fir_array_arg_names87[1];
  Rsh_Fir_array_arg_names87[0] = R_MissingArg;
  Rsh_Fir_reg_r186_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diag1_, 1, Rsh_Fir_array_args325, Rsh_Fir_array_arg_names87, CCP, RHO);
  // check L313() else D114()
  // L313()
  goto L313_;

D114_:;
  // deopt 428 [r186]
  SEXP Rsh_Fir_array_deopt_stack100[1];
  Rsh_Fir_array_deopt_stack100[0] = Rsh_Fir_reg_r186_;
  Rsh_Fir_deopt(428, 1, Rsh_Fir_array_deopt_stack100, CCP, RHO);
  return R_NilValue;

L313_:;
  // r187 = sqrt(r186)
  SEXP Rsh_Fir_array_args326[1];
  Rsh_Fir_array_args326[0] = Rsh_Fir_reg_r186_;
  Rsh_Fir_reg_r187_ = Rsh_Fir_call_builtin(169, CCP, RHO, 1, Rsh_Fir_array_args326, Rsh_Fir_param_types_empty());
  // goto L52(r187)
  // L52(r187)
  Rsh_Fir_reg_r184_ = Rsh_Fir_reg_r187_;
  goto L52_;

D115_:;
  // deopt 431 [covmat_unscaled6]
  SEXP Rsh_Fir_array_deopt_stack101[1];
  Rsh_Fir_array_deopt_stack101[0] = Rsh_Fir_reg_covmat_unscaled6_;
  Rsh_Fir_deopt(431, 1, Rsh_Fir_array_deopt_stack101, CCP, RHO);
  return R_NilValue;

L314_:;
  // covmat_unscaled7 = force? covmat_unscaled6
  Rsh_Fir_reg_covmat_unscaled7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_covmat_unscaled6_);
  // checkMissing(covmat_unscaled7)
  SEXP Rsh_Fir_array_args327[1];
  Rsh_Fir_array_args327[0] = Rsh_Fir_reg_covmat_unscaled7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args327, Rsh_Fir_param_types_empty()));
  // outer = ldf outer
  Rsh_Fir_reg_outer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 113), RHO);
  // check L315() else D116()
  // L315()
  goto L315_;

D116_:;
  // deopt 433 [covmat_unscaled7]
  SEXP Rsh_Fir_array_deopt_stack102[1];
  Rsh_Fir_array_deopt_stack102[0] = Rsh_Fir_reg_covmat_unscaled7_;
  Rsh_Fir_deopt(433, 1, Rsh_Fir_array_deopt_stack102, CCP, RHO);
  return R_NilValue;

L315_:;
  // p33 = prom<V +>{
  //   dd = ld dd;
  //   dd1 = force? dd;
  //   checkMissing(dd1);
  //   return dd1;
  // }
  Rsh_Fir_reg_p33_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_21, CCP, RHO);
  // p34 = prom<V +>{
  //   dd2 = ld dd;
  //   dd3 = force? dd2;
  //   checkMissing(dd3);
  //   return dd3;
  // }
  Rsh_Fir_reg_p34_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3265645067_22, CCP, RHO);
  // r190 = dyn outer(p33, p34)
  SEXP Rsh_Fir_array_args330[2];
  Rsh_Fir_array_args330[0] = Rsh_Fir_reg_p33_;
  Rsh_Fir_array_args330[1] = Rsh_Fir_reg_p34_;
  SEXP Rsh_Fir_array_arg_names88[2];
  Rsh_Fir_array_arg_names88[0] = R_MissingArg;
  Rsh_Fir_array_arg_names88[1] = R_MissingArg;
  Rsh_Fir_reg_r190_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_outer, 2, Rsh_Fir_array_args330, Rsh_Fir_array_arg_names88, CCP, RHO);
  // check L316() else D117()
  // L316()
  goto L316_;

D117_:;
  // deopt 436 [covmat_unscaled7, r190]
  SEXP Rsh_Fir_array_deopt_stack103[2];
  Rsh_Fir_array_deopt_stack103[0] = Rsh_Fir_reg_covmat_unscaled7_;
  Rsh_Fir_array_deopt_stack103[1] = Rsh_Fir_reg_r190_;
  Rsh_Fir_deopt(436, 2, Rsh_Fir_array_deopt_stack103, CCP, RHO);
  return R_NilValue;

L316_:;
  // r191 = `/`(covmat_unscaled7, r190)
  SEXP Rsh_Fir_array_args331[2];
  Rsh_Fir_array_args331[0] = Rsh_Fir_reg_covmat_unscaled7_;
  Rsh_Fir_array_args331[1] = Rsh_Fir_reg_r190_;
  Rsh_Fir_reg_r191_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args331, Rsh_Fir_param_types_empty());
  // l5 = ld ans
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // c60 = `is.object`(l5)
  SEXP Rsh_Fir_array_args332[1];
  Rsh_Fir_array_args332[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_c60_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args332, Rsh_Fir_param_types_empty());
  // if c60 then L318() else L319(r191, l5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c60_)) {
  // L318()
    goto L318_;
  } else {
  // L319(r191, l5)
    Rsh_Fir_reg_r193_ = Rsh_Fir_reg_r191_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    goto L319_;
  }

L317_:;
  // st ans = dx63
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_dx63_, RHO);
  (void)(Rsh_Fir_reg_dx63_);
  // symbolic_cor1 = ld `symbolic.cor`
  Rsh_Fir_reg_symbolic_cor1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L321() else D118()
  // L321()
  goto L321_;

L318_:;
  // dr42 = tryDispatchBuiltin.0("$<-", l5, r191)
  SEXP Rsh_Fir_array_args333[3];
  Rsh_Fir_array_args333[0] = Rsh_const(CCP, 114);
  Rsh_Fir_array_args333[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args333[2] = Rsh_Fir_reg_r191_;
  Rsh_Fir_reg_dr42_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args333);
  // dc21 = getTryDispatchBuiltinDispatched(dr42)
  SEXP Rsh_Fir_array_args334[1];
  Rsh_Fir_array_args334[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dc21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args334, Rsh_Fir_param_types_empty());
  // if dc21 then L320() else L319(r191, dr42)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc21_)) {
  // L320()
    goto L320_;
  } else {
  // L319(r191, dr42)
    Rsh_Fir_reg_r193_ = Rsh_Fir_reg_r191_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr42_;
    goto L319_;
  }

L319_:;
  // r196 = `$<-`(l7, <sym correlation>, r191)
  SEXP Rsh_Fir_array_args335[3];
  Rsh_Fir_array_args335[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args335[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args335[2] = Rsh_Fir_reg_r191_;
  Rsh_Fir_reg_r196_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args335, Rsh_Fir_param_types_empty());
  // goto L317(r196)
  // L317(r196)
  Rsh_Fir_reg_dx63_ = Rsh_Fir_reg_r196_;
  goto L317_;

L320_:;
  // dx62 = getTryDispatchBuiltinValue(dr42)
  SEXP Rsh_Fir_array_args336[1];
  Rsh_Fir_array_args336[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dx62_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args336, Rsh_Fir_param_types_empty());
  // goto L317(dx62)
  // L317(dx62)
  Rsh_Fir_reg_dx63_ = Rsh_Fir_reg_dx62_;
  goto L317_;

D118_:;
  // deopt 441 [symbolic_cor1]
  SEXP Rsh_Fir_array_deopt_stack104[1];
  Rsh_Fir_array_deopt_stack104[0] = Rsh_Fir_reg_symbolic_cor1_;
  Rsh_Fir_deopt(441, 1, Rsh_Fir_array_deopt_stack104, CCP, RHO);
  return R_NilValue;

L321_:;
  // symbolic_cor2 = force? symbolic_cor1
  Rsh_Fir_reg_symbolic_cor2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_symbolic_cor1_);
  // checkMissing(symbolic_cor2)
  SEXP Rsh_Fir_array_args337[1];
  Rsh_Fir_array_args337[0] = Rsh_Fir_reg_symbolic_cor2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args337, Rsh_Fir_param_types_empty()));
  // l8 = ld ans
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // c61 = `is.object`(l8)
  SEXP Rsh_Fir_array_args338[1];
  Rsh_Fir_array_args338[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_c61_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args338, Rsh_Fir_param_types_empty());
  // if c61 then L323() else L324(symbolic_cor2, l8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c61_)) {
  // L323()
    goto L323_;
  } else {
  // L324(symbolic_cor2, l8)
    Rsh_Fir_reg_symbolic_cor4_ = Rsh_Fir_reg_symbolic_cor2_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l8_;
    goto L324_;
  }

L322_:;
  // st ans = dx65
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_dx65_, RHO);
  (void)(Rsh_Fir_reg_dx65_);
  // goto L53()
  // L53()
  goto L53_;

L323_:;
  // dr44 = tryDispatchBuiltin.0("$<-", l8, symbolic_cor2)
  SEXP Rsh_Fir_array_args339[3];
  Rsh_Fir_array_args339[0] = Rsh_const(CCP, 114);
  Rsh_Fir_array_args339[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args339[2] = Rsh_Fir_reg_symbolic_cor2_;
  Rsh_Fir_reg_dr44_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args339);
  // dc22 = getTryDispatchBuiltinDispatched(dr44)
  SEXP Rsh_Fir_array_args340[1];
  Rsh_Fir_array_args340[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dc22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args340, Rsh_Fir_param_types_empty());
  // if dc22 then L325() else L324(symbolic_cor2, dr44)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc22_)) {
  // L325()
    goto L325_;
  } else {
  // L324(symbolic_cor2, dr44)
    Rsh_Fir_reg_symbolic_cor4_ = Rsh_Fir_reg_symbolic_cor2_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_dr44_;
    goto L324_;
  }

L324_:;
  // r197 = `$<-`(l10, <sym symbolic.cor>, symbolic_cor2)
  SEXP Rsh_Fir_array_args341[3];
  Rsh_Fir_array_args341[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args341[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args341[2] = Rsh_Fir_reg_symbolic_cor2_;
  Rsh_Fir_reg_r197_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args341, Rsh_Fir_param_types_empty());
  // goto L322(symbolic_cor4, r197)
  // L322(symbolic_cor4, r197)
  Rsh_Fir_reg_symbolic_cor6_ = Rsh_Fir_reg_symbolic_cor4_;
  Rsh_Fir_reg_dx65_ = Rsh_Fir_reg_r197_;
  goto L322_;

L325_:;
  // dx64 = getTryDispatchBuiltinValue(dr44)
  SEXP Rsh_Fir_array_args342[1];
  Rsh_Fir_array_args342[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dx64_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args342, Rsh_Fir_param_types_empty());
  // goto L322(symbolic_cor2, dx64)
  // L322(symbolic_cor2, dx64)
  Rsh_Fir_reg_symbolic_cor6_ = Rsh_Fir_reg_symbolic_cor2_;
  Rsh_Fir_reg_dx65_ = Rsh_Fir_reg_dx64_;
  goto L322_;

D119_:;
  // deopt 451 ["summary.glm", l11, "summary.glm"]
  SEXP Rsh_Fir_array_deopt_stack105[3];
  Rsh_Fir_array_deopt_stack105[0] = Rsh_const(CCP, 115);
  Rsh_Fir_array_deopt_stack105[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack105[2] = Rsh_const(CCP, 115);
  Rsh_Fir_deopt(451, 3, Rsh_Fir_array_deopt_stack105, CCP, RHO);
  return R_NilValue;

L327_:;
  // r198 = dyn class__(l11, NULL, "summary.glm")
  SEXP Rsh_Fir_array_args343[3];
  Rsh_Fir_array_args343[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args343[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args343[2] = Rsh_const(CCP, 115);
  SEXP Rsh_Fir_array_arg_names89[3];
  Rsh_Fir_array_arg_names89[0] = R_MissingArg;
  Rsh_Fir_array_arg_names89[1] = R_MissingArg;
  Rsh_Fir_array_arg_names89[2] = R_MissingArg;
  Rsh_Fir_reg_r198_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args343, Rsh_Fir_array_arg_names89, CCP, RHO);
  // check L328() else D120()
  // L328()
  goto L328_;

D120_:;
  // deopt 453 ["summary.glm", r198]
  SEXP Rsh_Fir_array_deopt_stack106[2];
  Rsh_Fir_array_deopt_stack106[0] = Rsh_const(CCP, 115);
  Rsh_Fir_array_deopt_stack106[1] = Rsh_Fir_reg_r198_;
  Rsh_Fir_deopt(453, 2, Rsh_Fir_array_deopt_stack106, CCP, RHO);
  return R_NilValue;

L328_:;
  // st ans = r198
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_r198_, RHO);
  (void)(Rsh_Fir_reg_r198_);
  // ans = ld ans
  Rsh_Fir_reg_ans = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L329() else D121()
  // L329()
  goto L329_;

D121_:;
  // deopt 455 [ans]
  SEXP Rsh_Fir_array_deopt_stack107[1];
  Rsh_Fir_array_deopt_stack107[0] = Rsh_Fir_reg_ans;
  Rsh_Fir_deopt(455, 1, Rsh_Fir_array_deopt_stack107, CCP, RHO);
  return R_NilValue;

L329_:;
  // ans1 = force? ans
  Rsh_Fir_reg_ans1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ans);
  // checkMissing(ans1)
  SEXP Rsh_Fir_array_args344[1];
  Rsh_Fir_array_args344[0] = Rsh_Fir_reg_ans1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args344, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ans1
  return Rsh_Fir_reg_ans1_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_(SEXP CCP, SEXP RHO) {
  // fam12 = ld fam
  Rsh_Fir_reg_fam12_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // fam13 = force? fam12
  Rsh_Fir_reg_fam13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fam12_);
  // checkMissing(fam13)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_fam13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(fam13)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_fam13_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if c22 then L1() else L2(fam13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L1()
    goto L1_;
  } else {
  // L2(fam13)
    Rsh_Fir_reg_fam15_ = Rsh_Fir_reg_fam13_;
    goto L2_;
  }

L0_:;
  // return dx12
  return Rsh_Fir_reg_dx12_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("$", fam13)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_fam13_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args73);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_fam15_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // r14 = `$`(fam15, <sym family>)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_fam15_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r14_;
  goto L0_;

L3_:;
  // dx11 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L0(dx11)
  // L0(dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_1(SEXP CCP, SEXP RHO) {
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args77);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r17
  return Rsh_Fir_reg_r17_;

L1_:;
  // c23 = ldf c in base
  Rsh_Fir_reg_c23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r18 = dyn c23("poisson", "binomial")
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c23_, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L0_;

L2_:;
  // r16 = dyn base3("poisson", "binomial")
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_2(SEXP CCP, SEXP RHO) {
  // object25 = ld object
  Rsh_Fir_reg_object25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object26 = force? object25
  Rsh_Fir_reg_object26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object25_);
  // checkMissing(object26)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_object26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // return object26
  return Rsh_Fir_reg_object26_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_3(SEXP CCP, SEXP RHO) {
  // object31 = ld object
  Rsh_Fir_reg_object31_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object32 = force? object31
  Rsh_Fir_reg_object32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object31_);
  // checkMissing(object32)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_object32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty()));
  // return object32
  return Rsh_Fir_reg_object32_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_4(SEXP CCP, SEXP RHO) {
  // Qr4 = ld Qr
  Rsh_Fir_reg_Qr4_ = Rsh_Fir_load(Rsh_const(CCP, 63), RHO);
  // Qr5 = force? Qr4
  Rsh_Fir_reg_Qr5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Qr4_);
  // checkMissing(Qr5)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_Qr5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty()));
  // c38 = `is.object`(Qr5)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_Qr5_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty());
  // if c38 then L2() else L3(Qr5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L2()
    goto L2_;
  } else {
  // L3(Qr5)
    Rsh_Fir_reg_Qr7_ = Rsh_Fir_reg_Qr5_;
    goto L3_;
  }

L0_:;
  // return dx55
  return Rsh_Fir_reg_dx55_;

L1_:;
  // c39 = `is.object`(dx51)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_dx51_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty());
  // if c39 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L2_:;
  // dr32 = tryDispatchBuiltin.1("$", Qr5)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_Qr5_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args166);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty());
  // if dc16 then L4() else L3(dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr32)
    Rsh_Fir_reg_Qr7_ = Rsh_Fir_reg_dr32_;
    goto L3_;
  }

L3_:;
  // r60 = `$`(Qr7, <sym qr>)
  SEXP Rsh_Fir_array_args168[2];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_Qr7_;
  Rsh_Fir_array_args168[1] = Rsh_const(CCP, 66);
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty());
  // goto L1(r60)
  // L1(r60)
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_r60_;
  goto L1_;

L4_:;
  // dx50 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx50_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // goto L1(dx50)
  // L1(dx50)
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_dx50_;
  goto L1_;

L5_:;
  // dr34 = tryDispatchBuiltin.1("[", dx51)
  SEXP Rsh_Fir_array_args170[2];
  Rsh_Fir_array_args170[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args170[1] = Rsh_Fir_reg_dx51_;
  Rsh_Fir_reg_dr34_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args170);
  // dc17 = getTryDispatchBuiltinDispatched(dr34)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dc17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty());
  // if dc17 then L7() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc17_)) {
  // L7()
    goto L7_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // p10 = ld p1
  Rsh_Fir_reg_p10_ = Rsh_Fir_load(Rsh_const(CCP, 61), RHO);
  // p11 = force? p10
  Rsh_Fir_reg_p11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p10_);
  // p12 = ld p1
  Rsh_Fir_reg_p12_ = Rsh_Fir_load(Rsh_const(CCP, 61), RHO);
  // p13 = force? p12
  Rsh_Fir_reg_p13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p12_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r61 = dyn __3(dx51, p11, p13, FALSE)
  SEXP Rsh_Fir_array_args172[4];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_dx51_;
  Rsh_Fir_array_args172[1] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args172[2] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args172[3] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names26[4];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_array_arg_names26[3] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 4, Rsh_Fir_array_args172, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r61)
  // L0(r61)
  Rsh_Fir_reg_dx55_ = Rsh_Fir_reg_r61_;
  goto L0_;

L7_:;
  // dx54 = getTryDispatchBuiltinValue(dr34)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dx54_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // goto L0(dx54)
  // L0(dx54)
  Rsh_Fir_reg_dx55_ = Rsh_Fir_reg_dx54_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_5(SEXP CCP, SEXP RHO) {
  // covmat = ld covmat
  Rsh_Fir_reg_covmat = Rsh_Fir_load(Rsh_const(CCP, 68), RHO);
  // covmat1 = force? covmat
  Rsh_Fir_reg_covmat1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_covmat);
  // checkMissing(covmat1)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_covmat1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty()));
  // return covmat1
  return Rsh_Fir_reg_covmat1_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_6(SEXP CCP, SEXP RHO) {
  // sym12 = ldf abs
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 76), RHO);
  // base12 = ldf abs in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 76), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args203[2];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args203[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args203);
  // if guard12 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r88 = `-`(<missing>, r86)
  SEXP Rsh_Fir_array_args204[2];
  Rsh_Fir_array_args204[0] = Rsh_const(CCP, 77);
  Rsh_Fir_array_args204[1] = Rsh_Fir_reg_r86_;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty());
  // return r88
  return Rsh_Fir_reg_r88_;

L1_:;
  // tvalue = ld tvalue
  Rsh_Fir_reg_tvalue = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // tvalue1 = force? tvalue
  Rsh_Fir_reg_tvalue1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tvalue);
  // checkMissing(tvalue1)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_tvalue1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args205, Rsh_Fir_param_types_empty()));
  // abs = ldf abs in base
  Rsh_Fir_reg_abs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 76), RHO);
  // r87 = dyn abs(tvalue1)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_tvalue1_;
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs, 1, Rsh_Fir_array_args206, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L0(r87)
  // L0(r87)
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r87_;
  goto L0_;

L2_:;
  // r85 = dyn base12(<sym tvalue>)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args207, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L0(r85)
  // L0(r85)
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r85_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_7(SEXP CCP, SEXP RHO) {
  // coef_p6 = ld `coef.p`
  Rsh_Fir_reg_coef_p6_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // coef_p7 = force? coef_p6
  Rsh_Fir_reg_coef_p7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coef_p6_);
  // checkMissing(coef_p7)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_coef_p7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args210, Rsh_Fir_param_types_empty()));
  // return coef_p7
  return Rsh_Fir_reg_coef_p7_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_8(SEXP CCP, SEXP RHO) {
  // s_err2 = ld `s.err`
  Rsh_Fir_reg_s_err2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // s_err3 = force? s_err2
  Rsh_Fir_reg_s_err3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s_err2_);
  // checkMissing(s_err3)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_s_err3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty()));
  // return s_err3
  return Rsh_Fir_reg_s_err3_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_9(SEXP CCP, SEXP RHO) {
  // tvalue2 = ld tvalue
  Rsh_Fir_reg_tvalue2_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // tvalue3 = force? tvalue2
  Rsh_Fir_reg_tvalue3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tvalue2_);
  // checkMissing(tvalue3)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_tvalue3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args212, Rsh_Fir_param_types_empty()));
  // return tvalue3
  return Rsh_Fir_reg_tvalue3_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_10(SEXP CCP, SEXP RHO) {
  // pvalue = ld pvalue
  Rsh_Fir_reg_pvalue = Rsh_Fir_load(Rsh_const(CCP, 78), RHO);
  // pvalue1 = force? pvalue
  Rsh_Fir_reg_pvalue1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pvalue);
  // checkMissing(pvalue1)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_pvalue1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args213, Rsh_Fir_param_types_empty()));
  // return pvalue1
  return Rsh_Fir_reg_pvalue1_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_11(SEXP CCP, SEXP RHO) {
  // sym16 = ldf abs
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 76), RHO);
  // base16 = ldf abs in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 76), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args228[2];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args228[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args228);
  // if guard16 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r112 = `-`(<missing>, r110)
  SEXP Rsh_Fir_array_args229[2];
  Rsh_Fir_array_args229[0] = Rsh_const(CCP, 77);
  Rsh_Fir_array_args229[1] = Rsh_Fir_reg_r110_;
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args229, Rsh_Fir_param_types_empty());
  // return r112
  return Rsh_Fir_reg_r112_;

L1_:;
  // tvalue4 = ld tvalue
  Rsh_Fir_reg_tvalue4_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // tvalue5 = force? tvalue4
  Rsh_Fir_reg_tvalue5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tvalue4_);
  // checkMissing(tvalue5)
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_tvalue5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args230, Rsh_Fir_param_types_empty()));
  // abs1 = ldf abs in base
  Rsh_Fir_reg_abs1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 76), RHO);
  // r111 = dyn abs1(tvalue5)
  SEXP Rsh_Fir_array_args231[1];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_tvalue5_;
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs1_, 1, Rsh_Fir_array_args231, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L0(r111)
  // L0(r111)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r111_;
  goto L0_;

L2_:;
  // r109 = dyn base16(<sym tvalue>)
  SEXP Rsh_Fir_array_args232[1];
  Rsh_Fir_array_args232[0] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args232, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L0(r109)
  // L0(r109)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r109_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_12(SEXP CCP, SEXP RHO) {
  // df_r6 = ld `df.r`
  Rsh_Fir_reg_df_r6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // df_r7 = force? df_r6
  Rsh_Fir_reg_df_r7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_df_r6_);
  // checkMissing(df_r7)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_df_r7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty()));
  // return df_r7
  return Rsh_Fir_reg_df_r7_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_13(SEXP CCP, SEXP RHO) {
  // coef_p10 = ld `coef.p`
  Rsh_Fir_reg_coef_p10_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // coef_p11 = force? coef_p10
  Rsh_Fir_reg_coef_p11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coef_p10_);
  // checkMissing(coef_p11)
  SEXP Rsh_Fir_array_args236[1];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_coef_p11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args236, Rsh_Fir_param_types_empty()));
  // return coef_p11
  return Rsh_Fir_reg_coef_p11_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_14(SEXP CCP, SEXP RHO) {
  // s_err4 = ld `s.err`
  Rsh_Fir_reg_s_err4_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // s_err5 = force? s_err4
  Rsh_Fir_reg_s_err5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s_err4_);
  // checkMissing(s_err5)
  SEXP Rsh_Fir_array_args237[1];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_s_err5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args237, Rsh_Fir_param_types_empty()));
  // return s_err5
  return Rsh_Fir_reg_s_err5_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_15(SEXP CCP, SEXP RHO) {
  // tvalue6 = ld tvalue
  Rsh_Fir_reg_tvalue6_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // tvalue7 = force? tvalue6
  Rsh_Fir_reg_tvalue7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tvalue6_);
  // checkMissing(tvalue7)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_tvalue7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args238, Rsh_Fir_param_types_empty()));
  // return tvalue7
  return Rsh_Fir_reg_tvalue7_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_16(SEXP CCP, SEXP RHO) {
  // pvalue2 = ld pvalue
  Rsh_Fir_reg_pvalue2_ = Rsh_Fir_load(Rsh_const(CCP, 78), RHO);
  // pvalue3 = force? pvalue2
  Rsh_Fir_reg_pvalue3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pvalue2_);
  // checkMissing(pvalue3)
  SEXP Rsh_Fir_array_args239[1];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_pvalue3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args239, Rsh_Fir_param_types_empty()));
  // return pvalue3
  return Rsh_Fir_reg_pvalue3_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_17(SEXP CCP, SEXP RHO) {
  // coef_p14 = ld `coef.p`
  Rsh_Fir_reg_coef_p14_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // coef_p15 = force? coef_p14
  Rsh_Fir_reg_coef_p15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_coef_p14_);
  // checkMissing(coef_p15)
  SEXP Rsh_Fir_array_args251[1];
  Rsh_Fir_array_args251[0] = Rsh_Fir_reg_coef_p15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args251, Rsh_Fir_param_types_empty()));
  // return coef_p15
  return Rsh_Fir_reg_coef_p15_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_18(SEXP CCP, SEXP RHO) {
  // Qr8 = ld Qr
  Rsh_Fir_reg_Qr8_ = Rsh_Fir_load(Rsh_const(CCP, 63), RHO);
  // Qr9 = force? Qr8
  Rsh_Fir_reg_Qr9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Qr8_);
  // checkMissing(Qr9)
  SEXP Rsh_Fir_array_args263[1];
  Rsh_Fir_array_args263[0] = Rsh_Fir_reg_Qr9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args263, Rsh_Fir_param_types_empty()));
  // c46 = `is.object`(Qr9)
  SEXP Rsh_Fir_array_args264[1];
  Rsh_Fir_array_args264[0] = Rsh_Fir_reg_Qr9_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args264, Rsh_Fir_param_types_empty());
  // if c46 then L1() else L2(Qr9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L1()
    goto L1_;
  } else {
  // L2(Qr9)
    Rsh_Fir_reg_Qr11_ = Rsh_Fir_reg_Qr9_;
    goto L2_;
  }

L0_:;
  // return dx57
  return Rsh_Fir_reg_dx57_;

L1_:;
  // dr36 = tryDispatchBuiltin.1("$", Qr9)
  SEXP Rsh_Fir_array_args265[2];
  Rsh_Fir_array_args265[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args265[1] = Rsh_Fir_reg_Qr9_;
  Rsh_Fir_reg_dr36_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args265);
  // dc18 = getTryDispatchBuiltinDispatched(dr36)
  SEXP Rsh_Fir_array_args266[1];
  Rsh_Fir_array_args266[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dc18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args266, Rsh_Fir_param_types_empty());
  // if dc18 then L3() else L2(dr36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc18_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr36)
    Rsh_Fir_reg_Qr11_ = Rsh_Fir_reg_dr36_;
    goto L2_;
  }

L2_:;
  // r144 = `$`(Qr11, <sym qr>)
  SEXP Rsh_Fir_array_args267[2];
  Rsh_Fir_array_args267[0] = Rsh_Fir_reg_Qr11_;
  Rsh_Fir_array_args267[1] = Rsh_const(CCP, 66);
  Rsh_Fir_reg_r144_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args267, Rsh_Fir_param_types_empty());
  // goto L0(r144)
  // L0(r144)
  Rsh_Fir_reg_dx57_ = Rsh_Fir_reg_r144_;
  goto L0_;

L3_:;
  // dx56 = getTryDispatchBuiltinValue(dr36)
  SEXP Rsh_Fir_array_args268[1];
  Rsh_Fir_array_args268[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dx56_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args268, Rsh_Fir_param_types_empty());
  // goto L0(dx56)
  // L0(dx56)
  Rsh_Fir_reg_dx57_ = Rsh_Fir_reg_dx56_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_19(SEXP CCP, SEXP RHO) {
  // object43 = ld object
  Rsh_Fir_reg_object43_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // object44 = force? object43
  Rsh_Fir_reg_object44_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_object43_);
  // checkMissing(object44)
  SEXP Rsh_Fir_array_args297[1];
  Rsh_Fir_array_args297[0] = Rsh_Fir_reg_object44_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args297, Rsh_Fir_param_types_empty()));
  // return object44
  return Rsh_Fir_reg_object44_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_20(SEXP CCP, SEXP RHO) {
  // covmat_unscaled4 = ld `covmat.unscaled`
  Rsh_Fir_reg_covmat_unscaled4_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // covmat_unscaled5 = force? covmat_unscaled4
  Rsh_Fir_reg_covmat_unscaled5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_covmat_unscaled4_);
  // checkMissing(covmat_unscaled5)
  SEXP Rsh_Fir_array_args324[1];
  Rsh_Fir_array_args324[0] = Rsh_Fir_reg_covmat_unscaled5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args324, Rsh_Fir_param_types_empty()));
  // return covmat_unscaled5
  return Rsh_Fir_reg_covmat_unscaled5_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_21(SEXP CCP, SEXP RHO) {
  // dd = ld dd
  Rsh_Fir_reg_dd = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // dd1 = force? dd
  Rsh_Fir_reg_dd1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dd);
  // checkMissing(dd1)
  SEXP Rsh_Fir_array_args328[1];
  Rsh_Fir_array_args328[0] = Rsh_Fir_reg_dd1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args328, Rsh_Fir_param_types_empty()));
  // return dd1
  return Rsh_Fir_reg_dd1_;
}
SEXP Rsh_Fir_user_promise_inner3265645067_22(SEXP CCP, SEXP RHO) {
  // dd2 = ld dd
  Rsh_Fir_reg_dd2_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // dd3 = force? dd2
  Rsh_Fir_reg_dd3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dd2_);
  // checkMissing(dd3)
  SEXP Rsh_Fir_array_args329[1];
  Rsh_Fir_array_args329[0] = Rsh_Fir_reg_dd3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args329, Rsh_Fir_param_types_empty()));
  // return dd3
  return Rsh_Fir_reg_dd3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
