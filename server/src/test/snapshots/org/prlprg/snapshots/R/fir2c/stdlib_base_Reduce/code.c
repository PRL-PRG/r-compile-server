#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1828503910_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1828503910_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1828503910_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1828503910_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1828503910_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1828503910_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1828503910_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1828503910_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1828503910_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1828503910
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1828503910_, RHO, CCP);
  // st Reduce = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner1828503910_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1828503910 dynamic dispatch ([f, x, init, right, accumulate, simplify])

  return Rsh_Fir_user_version_inner1828503910_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1828503910_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1828503910 version 0 (*, *, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner1828503910/0: expected 6, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_f;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_init;
  SEXP Rsh_Fir_reg_right;
  SEXP Rsh_Fir_reg_accumulate;
  SEXP Rsh_Fir_reg_simplify;
  SEXP Rsh_Fir_reg_right_isMissing;
  SEXP Rsh_Fir_reg_right_orDefault;
  SEXP Rsh_Fir_reg_accumulate_isMissing;
  SEXP Rsh_Fir_reg_accumulate_orDefault;
  SEXP Rsh_Fir_reg_simplify_isMissing;
  SEXP Rsh_Fir_reg_simplify_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_len;
  SEXP Rsh_Fir_reg_len1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_mis;
  SEXP Rsh_Fir_reg_mis1_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_init1_;
  SEXP Rsh_Fir_reg_init2_;
  SEXP Rsh_Fir_reg_match_fun;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_is_vector;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_as_list;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_len2_;
  SEXP Rsh_Fir_reg_len3_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_mis2_;
  SEXP Rsh_Fir_reg_mis3_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_right1_;
  SEXP Rsh_Fir_reg_right2_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_len4_;
  SEXP Rsh_Fir_reg_len5_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_ind;
  SEXP Rsh_Fir_reg_ind1_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_ind3_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_len6_;
  SEXP Rsh_Fir_reg_len7_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_ind4_;
  SEXP Rsh_Fir_reg_ind5_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_ind7_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_accumulate1_;
  SEXP Rsh_Fir_reg_accumulate2_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_right3_;
  SEXP Rsh_Fir_reg_right4_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_rev;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_i7_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_forceAndCall;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_ind10_;
  SEXP Rsh_Fir_reg_ind11_;
  SEXP Rsh_Fir_reg_s1_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_i9_;
  SEXP Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_reg_i11_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_i16_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_forceAndCall1_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_init3_;
  SEXP Rsh_Fir_reg_init4_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_ind12_;
  SEXP Rsh_Fir_reg_ind13_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_len8_;
  SEXP Rsh_Fir_reg_len9_;
  SEXP Rsh_Fir_reg_vector;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_mis4_;
  SEXP Rsh_Fir_reg_mis5_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_right5_;
  SEXP Rsh_Fir_reg_right6_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_init5_;
  SEXP Rsh_Fir_reg_init6_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_init8_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_len10_;
  SEXP Rsh_Fir_reg_len11_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_rev1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_s2_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_i17_;
  SEXP Rsh_Fir_reg_i18_;
  SEXP Rsh_Fir_reg_i19_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_x19_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_i24_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_forceAndCall2_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_init11_;
  SEXP Rsh_Fir_reg_init12_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_i26_;
  SEXP Rsh_Fir_reg_init14_;
  SEXP Rsh_Fir_reg_l8_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_i28_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_i29_;
  SEXP Rsh_Fir_reg_i30_;
  SEXP Rsh_Fir_reg_____1_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_i31_;
  SEXP Rsh_Fir_reg_init17_;
  SEXP Rsh_Fir_reg_init18_;
  SEXP Rsh_Fir_reg_l9_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_init20_;
  SEXP Rsh_Fir_reg_l11_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_____2_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_ind16_;
  SEXP Rsh_Fir_reg_ind17_;
  SEXP Rsh_Fir_reg_s3_;
  SEXP Rsh_Fir_reg_l12_;
  SEXP Rsh_Fir_reg_i32_;
  SEXP Rsh_Fir_reg_i33_;
  SEXP Rsh_Fir_reg_i34_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_x20_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_i39_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_forceAndCall3_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_init23_;
  SEXP Rsh_Fir_reg_init24_;
  SEXP Rsh_Fir_reg_l13_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_i41_;
  SEXP Rsh_Fir_reg_init26_;
  SEXP Rsh_Fir_reg_l15_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_i43_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_i44_;
  SEXP Rsh_Fir_reg_i45_;
  SEXP Rsh_Fir_reg_____3_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_right7_;
  SEXP Rsh_Fir_reg_right8_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_init29_;
  SEXP Rsh_Fir_reg_init30_;
  SEXP Rsh_Fir_reg_l16_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_init32_;
  SEXP Rsh_Fir_reg_l18_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg_len12_;
  SEXP Rsh_Fir_reg_len13_;
  SEXP Rsh_Fir_reg_____4_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_rev2_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_s4_;
  SEXP Rsh_Fir_reg_l19_;
  SEXP Rsh_Fir_reg_i47_;
  SEXP Rsh_Fir_reg_i48_;
  SEXP Rsh_Fir_reg_i49_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_x21_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_i54_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_forceAndCall4_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_init35_;
  SEXP Rsh_Fir_reg_init36_;
  SEXP Rsh_Fir_reg_l20_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_i56_;
  SEXP Rsh_Fir_reg_init38_;
  SEXP Rsh_Fir_reg_l22_;
  SEXP Rsh_Fir_reg_dr18_;
  SEXP Rsh_Fir_reg_dc9_;
  SEXP Rsh_Fir_reg_dx20_;
  SEXP Rsh_Fir_reg_i58_;
  SEXP Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_reg_i59_;
  SEXP Rsh_Fir_reg_i60_;
  SEXP Rsh_Fir_reg_____5_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_ind20_;
  SEXP Rsh_Fir_reg_ind21_;
  SEXP Rsh_Fir_reg_s5_;
  SEXP Rsh_Fir_reg_l23_;
  SEXP Rsh_Fir_reg_i61_;
  SEXP Rsh_Fir_reg_i62_;
  SEXP Rsh_Fir_reg_i63_;
  SEXP Rsh_Fir_reg_c35_;
  SEXP Rsh_Fir_reg_x22_;
  SEXP Rsh_Fir_reg_init41_;
  SEXP Rsh_Fir_reg_init42_;
  SEXP Rsh_Fir_reg_l24_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_i67_;
  SEXP Rsh_Fir_reg_init44_;
  SEXP Rsh_Fir_reg_l26_;
  SEXP Rsh_Fir_reg_dr20_;
  SEXP Rsh_Fir_reg_dc10_;
  SEXP Rsh_Fir_reg_dx22_;
  SEXP Rsh_Fir_reg_i69_;
  SEXP Rsh_Fir_reg_dx23_;
  SEXP Rsh_Fir_reg_i70_;
  SEXP Rsh_Fir_reg_i71_;
  SEXP Rsh_Fir_reg_____6_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_i74_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_forceAndCall5_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_init47_;
  SEXP Rsh_Fir_reg_init48_;
  SEXP Rsh_Fir_reg_l27_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_init50_;
  SEXP Rsh_Fir_reg_l29_;
  SEXP Rsh_Fir_reg_dr22_;
  SEXP Rsh_Fir_reg_dc11_;
  SEXP Rsh_Fir_reg_dx24_;
  SEXP Rsh_Fir_reg_init52_;
  SEXP Rsh_Fir_reg_dx25_;
  SEXP Rsh_Fir_reg_len14_;
  SEXP Rsh_Fir_reg_len15_;
  SEXP Rsh_Fir_reg_____7_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_lengths;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_all;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_c38_;
  SEXP Rsh_Fir_reg_c40_;
  SEXP Rsh_Fir_reg_simplify1_;
  SEXP Rsh_Fir_reg_simplify2_;
  SEXP Rsh_Fir_reg_c41_;
  SEXP Rsh_Fir_reg_c42_;
  SEXP Rsh_Fir_reg_c44_;
  SEXP Rsh_Fir_reg_unlist;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_out4_;
  SEXP Rsh_Fir_reg_out5_;

  // Bind parameters
  Rsh_Fir_reg_f = PARAMS[0];
  Rsh_Fir_reg_x = PARAMS[1];
  Rsh_Fir_reg_init = PARAMS[2];
  Rsh_Fir_reg_right = PARAMS[3];
  Rsh_Fir_reg_accumulate = PARAMS[4];
  Rsh_Fir_reg_simplify = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st f = f
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_f, RHO);
  (void)(Rsh_Fir_reg_f);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st init = init
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_init, RHO);
  (void)(Rsh_Fir_reg_init);
  // right_isMissing = missing.0(right)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_right;
  Rsh_Fir_reg_right_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if right_isMissing then L0(FALSE) else L0(right)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_right_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_right_orDefault = Rsh_const(CCP, 4);
    goto L0_;
  } else {
  // L0(right)
    Rsh_Fir_reg_right_orDefault = Rsh_Fir_reg_right;
    goto L0_;
  }

L0_:;
  // st right = right_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_right_orDefault, RHO);
  (void)(Rsh_Fir_reg_right_orDefault);
  // accumulate_isMissing = missing.0(accumulate)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_accumulate;
  Rsh_Fir_reg_accumulate_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if accumulate_isMissing then L1(FALSE) else L1(accumulate)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_accumulate_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_accumulate_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(accumulate)
    Rsh_Fir_reg_accumulate_orDefault = Rsh_Fir_reg_accumulate;
    goto L1_;
  }

L1_:;
  // st accumulate = accumulate_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_accumulate_orDefault, RHO);
  (void)(Rsh_Fir_reg_accumulate_orDefault);
  // simplify_isMissing = missing.0(simplify)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_simplify;
  Rsh_Fir_reg_simplify_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if simplify_isMissing then L2(TRUE) else L2(simplify)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_simplify_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_simplify_orDefault = Rsh_const(CCP, 7);
    goto L2_;
  } else {
  // L2(simplify)
    Rsh_Fir_reg_simplify_orDefault = Rsh_Fir_reg_simplify;
    goto L2_;
  }

L2_:;
  // st simplify = simplify_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_simplify_orDefault, RHO);
  (void)(Rsh_Fir_reg_simplify_orDefault);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L3_:;
  // st mis = r1
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L4_:;
  // st len = r4
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // len = ld len
  Rsh_Fir_reg_len = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L69() else D2()
  // L69()
  goto L69_;

L5_:;
  // match_fun = ldf `match.fun`
  Rsh_Fir_reg_match_fun = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L77() else D5()
  // L77()
  goto L77_;

L6_:;
  // init1 = ld init
  Rsh_Fir_reg_init1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L74() else D4()
  // L74()
  goto L74_;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r7
  return Rsh_Fir_reg_r7_;

L9_:;
  // r15 = `!`(r13)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args5);
  // c2 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args6);
  // if c2 then L10(c2) else L83()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L10(c2)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c2_;
    goto L10_;
  } else {
  // L83()
    goto L83_;
  }

L10_:;
  // c12 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args7);
  // if c12 then L88() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L88()
    goto L88_;
  } else {
  // L12()
    goto L12_;
  }

L11_:;
  // c9 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args8);
  // c10 = `||`(c7, c9)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args9);
  // goto L10(c10)
  // L10(c10)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c10_;
  goto L10_;

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // sym4 = ldf seq_len
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base4 = ldf seq_len in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard4 then L92() else L93()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L92()
    goto L92_;
  } else {
  // L93()
    goto L93_;
  }

L14_:;
  // st ind = r22
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // mis2 = ld mis
  Rsh_Fir_reg_mis2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L95() else D13()
  // L95()
  goto L95_;

L15_:;
  // goto L22()
  // L22()
  goto L22_;

L16_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L110() else D19()
  // L110()
  goto L110_;

L17_:;
  // st init = dx1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // ind = ld ind
  Rsh_Fir_reg_ind = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L104() else D17()
  // L104()
  goto L104_;

L18_:;
  // st ind = dx3
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L19(dx3)
  // L19(dx3)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L19_;

L19_:;
  // goto L22()
  // L22()
  goto L22_;

L20_:;
  // st init = dx6
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx6_, RHO);
  (void)(Rsh_Fir_reg_dx6_);
  // ind4 = ld ind
  Rsh_Fir_reg_ind4_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L114() else D20()
  // L114()
  goto L114_;

L21_:;
  // st ind = dx8
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx8_, RHO);
  (void)(Rsh_Fir_reg_dx8_);
  // goto L19(dx8)
  // L19(dx8)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx8_;
  goto L19_;

L22_:;
  // accumulate1 = ld accumulate
  Rsh_Fir_reg_accumulate1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L119() else D21()
  // L119()
  goto L119_;

L23_:;
  // sym7 = ldf length
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base7 = ldf length in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard7 then L135() else L136()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L135()
    goto L135_;
  } else {
  // L136()
    goto L136_;
  }

L24_:;
  // ind10 = ld ind
  Rsh_Fir_reg_ind10_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L129() else D25()
  // L129()
  goto L129_;

L25_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args12);
  // c21 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if c21 then L125() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L125()
    goto L125_;
  } else {
  // L27()
    goto L27_;
  }

L26_:;
  // st init = r33
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // goto L25(i7)
  // L25(i7)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i7_;
  goto L25_;

L27_:;
  // x17 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args14[4];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args14[3] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_x17_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args14);
  // st i = x17
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_x17_, RHO);
  (void)(Rsh_Fir_reg_x17_);
  // sym5 = ldf forceAndCall
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base5 = ldf forceAndCall in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard5 then L126() else L127()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L126()
    goto L126_;
  } else {
  // L127()
    goto L127_;
  }

L28_:;
  // init3 = ld init
  Rsh_Fir_reg_init3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L133() else D26()
  // L133()
  goto L133_;

L29_:;
  // i11 = `+`.1(i10, 1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_i11_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // c22 = `<`.1(l1, i11)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if c22 then L130() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L130()
    goto L130_;
  } else {
  // L31()
    goto L31_;
  }

L30_:;
  // st init = r36
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r36_, RHO);
  (void)(Rsh_Fir_reg_r36_);
  // goto L29(i16)
  // L29(i16)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i16_;
  goto L29_;

L31_:;
  // x18 = `[[`(s1, i11, NULL, TRUE)
  SEXP Rsh_Fir_array_args18[4];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args18[3] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_x18_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args18);
  // st i = x18
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_x18_, RHO);
  (void)(Rsh_Fir_reg_x18_);
  // sym6 = ldf forceAndCall
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base6 = ldf forceAndCall in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard6 then L131() else L132()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L131()
    goto L131_;
  } else {
  // L132()
    goto L132_;
  }

L32_:;
  // r41 = `+`(r39, 1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args20);
  // st len = r41
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r41_, RHO);
  (void)(Rsh_Fir_reg_r41_);
  // sym8 = ldf vector
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base8 = ldf vector in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard8 then L139() else L140()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L139()
    goto L139_;
  } else {
  // L140()
    goto L140_;
  }

L33_:;
  // st out = r43
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // mis4 = ld mis
  Rsh_Fir_reg_mis4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L143() else D31()
  // L143()
  goto L143_;

L34_:;
  // right7 = ld right
  Rsh_Fir_reg_right7_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L177() else D43()
  // L177()
  goto L177_;

L35_:;
  // init17 = ld init
  Rsh_Fir_reg_init17_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L163() else D39()
  // L163()
  goto L163_;

L36_:;
  // st out = dx11
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // rev1 = ldf rev
  Rsh_Fir_reg_rev1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L152() else D35()
  // L152()
  goto L152_;

L37_:;
  // i19 = `+`.1(i18, 1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_i19_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // c26 = `<`.1(l5, i19)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if c26 then L154() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L154()
    goto L154_;
  } else {
  // L40()
    goto L40_;
  }

L38_:;
  // st init = r49
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r49_, RHO);
  (void)(Rsh_Fir_reg_r49_);
  // init11 = ld init
  Rsh_Fir_reg_init11_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L157() else D37()
  // L157()
  goto L157_;

L39_:;
  // st out = dx13
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // goto L37(i28)
  // L37(i28)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i28_;
  goto L37_;

L40_:;
  // x19 = `[[`(s2, i19, NULL, TRUE)
  SEXP Rsh_Fir_array_args24[4];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_s2_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_i19_;
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args24[3] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_x19_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args24);
  // st i = x19
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_x19_, RHO);
  (void)(Rsh_Fir_reg_x19_);
  // sym9 = ldf forceAndCall
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base9 = ldf forceAndCall in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard9 then L155() else L156()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L155()
    goto L155_;
  } else {
  // L156()
    goto L156_;
  }

L41_:;
  // goto L47()
  // L47()
  goto L47_;

L42_:;
  // st out = dx15
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx15_, RHO);
  (void)(Rsh_Fir_reg_dx15_);
  // ind16 = ld ind
  Rsh_Fir_reg_ind16_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L167() else D40()
  // L167()
  goto L167_;

L43_:;
  // i34 = `+`.1(i33, 1)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_i33_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_i34_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args26);
  // c29 = `<`.1(l12, i34)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_i34_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if c29 then L168() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L168()
    goto L168_;
  } else {
  // L46()
    goto L46_;
  }

L44_:;
  // st init = r54
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // init23 = ld init
  Rsh_Fir_reg_init23_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L171() else D41()
  // L171()
  goto L171_;

L45_:;
  // st out = dx17
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // goto L43(i43)
  // L43(i43)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i43_;
  goto L43_;

L46_:;
  // x20 = `[[`(s3, i34, NULL, TRUE)
  SEXP Rsh_Fir_array_args28[4];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_i34_;
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args28[3] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_x20_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args28);
  // st i = x20
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_x20_, RHO);
  (void)(Rsh_Fir_reg_x20_);
  // sym10 = ldf forceAndCall
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base10 = ldf forceAndCall in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard10 then L169() else L170()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L169()
    goto L169_;
  } else {
  // L170()
    goto L170_;
  }

L47_:;
  // sym13 = ldf all
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base13 = ldf all in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard13 then L209() else L210()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L209()
    goto L209_;
  } else {
  // L210()
    goto L210_;
  }

L48_:;
  // ind20 = ld ind
  Rsh_Fir_reg_ind20_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L195() else D50()
  // L195()
  goto L195_;

L49_:;
  // st out = dx19
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // rev2 = ldf rev
  Rsh_Fir_reg_rev2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L184() else D46()
  // L184()
  goto L184_;

L50_:;
  // i49 = `+`.1(i48, 1)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_i48_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_i49_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args31);
  // c33 = `<`.1(l19, i49)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_l19_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_i49_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if c33 then L186() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L186()
    goto L186_;
  } else {
  // L53()
    goto L53_;
  }

L51_:;
  // st init = r61
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r61_, RHO);
  (void)(Rsh_Fir_reg_r61_);
  // init35 = ld init
  Rsh_Fir_reg_init35_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L189() else D48()
  // L189()
  goto L189_;

L52_:;
  // st out = dx21
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // goto L50(i58)
  // L50(i58)
  Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i58_;
  goto L50_;

L53_:;
  // x21 = `[[`(s4, i49, NULL, TRUE)
  SEXP Rsh_Fir_array_args33[4];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_s4_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_i49_;
  Rsh_Fir_array_args33[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args33[3] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_x21_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args33);
  // st i = x21
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_x21_, RHO);
  (void)(Rsh_Fir_reg_x21_);
  // sym11 = ldf forceAndCall
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base11 = ldf forceAndCall in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard11 then L187() else L188()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L187()
    goto L187_;
  } else {
  // L188()
    goto L188_;
  }

L54_:;
  // i63 = `+`.1(i62, 1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_i62_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_i63_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // c35 = `<`.1(l23, i63)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_i63_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if c35 then L196() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L196()
    goto L196_;
  } else {
  // L57()
    goto L57_;
  }

L55_:;
  // st out = dx23
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx23_, RHO);
  (void)(Rsh_Fir_reg_dx23_);
  // sym12 = ldf forceAndCall
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base12 = ldf forceAndCall in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard12 then L202() else L203()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L202()
    goto L202_;
  } else {
  // L203()
    goto L203_;
  }

L56_:;
  // st init = r66
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r66_, RHO);
  (void)(Rsh_Fir_reg_r66_);
  // goto L54(i74)
  // L54(i74)
  Rsh_Fir_reg_i62_ = Rsh_Fir_reg_i74_;
  goto L54_;

L57_:;
  // x22 = `[[`(s5, i63, NULL, TRUE)
  SEXP Rsh_Fir_array_args38[4];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_s5_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_i63_;
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args38[3] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_x22_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args38);
  // st i = x22
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_x22_, RHO);
  (void)(Rsh_Fir_reg_x22_);
  // init41 = ld init
  Rsh_Fir_reg_init41_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L197() else D51()
  // L197()
  goto L197_;

L58_:;
  // st out = dx25
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx25_, RHO);
  (void)(Rsh_Fir_reg_dx25_);
  // goto L47()
  // L47()
  goto L47_;

L59_:;
  // c38 = `as.logical`(r70)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args39);
  // if c38 then L214() else L60(c38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L214()
    goto L214_;
  } else {
  // L60(c38)
    Rsh_Fir_reg_c40_ = Rsh_Fir_reg_c38_;
    goto L60_;
  }

L60_:;
  // c44 = `as.logical`(c40)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_c40_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args40);
  // if c44 then L217() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c44_)) {
  // L217()
    goto L217_;
  } else {
  // L61()
    goto L61_;
  }

L61_:;
  // goto L62()
  // L62()
  goto L62_;

L62_:;
  // out4 = ld out
  Rsh_Fir_reg_out4_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L221() else D61()
  // L221()
  goto L221_;

L63_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r2 = dyn missing(<sym init>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L3_;

L64_:;
  // r = dyn base(<sym init>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L3_;

L65_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L67() else D0()
  // L67()
  goto L67_;

L66_:;
  // r3 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L4(r3)
  // L4(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L4_;

D0_:;
  // deopt 6 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L67_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r5 = dyn length(x2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L68() else D1()
  // L68()
  goto L68_;

D1_:;
  // deopt 9 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L4(r5)
  // L4(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L4_;

D2_:;
  // deopt 11 [len]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_len;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L69_:;
  // len1 = force? len
  Rsh_Fir_reg_len1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_len);
  // checkMissing(len1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_len1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // r6 = `==`(len1, 0)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_len1_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args47);
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args48);
  // if c then L70() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L70()
    goto L70_;
  } else {
  // L5()
    goto L5_;
  }

L70_:;
  // mis = ld mis
  Rsh_Fir_reg_mis = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L71() else D3()
  // L71()
  goto L71_;

D3_:;
  // deopt 15 [mis]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_mis;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L71_:;
  // mis1 = force? mis
  Rsh_Fir_reg_mis1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mis);
  // checkMissing(mis1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_mis1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(mis1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_mis1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args50);
  // if c1 then L72() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L72()
    goto L72_;
  } else {
  // L6()
    goto L6_;
  }

L72_:;
  // goto L7(NULL)
  // L7(NULL)
  Rsh_Fir_reg_r7_ = Rsh_const(CCP, 17);
  goto L7_;

D4_:;
  // deopt 19 [init1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_init1_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L74_:;
  // init2 = force? init1
  Rsh_Fir_reg_init2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_init1_);
  // checkMissing(init2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_init2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // goto L7(init2)
  // L7(init2)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_init2_;
  goto L7_;

D5_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L77_:;
  // p = prom<V +>{
  //   f1 = ld f;
  //   f2 = force? f1;
  //   checkMissing(f2);
  //   return f2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1828503910_, 0, NULL, CCP, RHO);
  // r11 = dyn match_fun(p)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_fun, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L78() else D6()
  // L78()
  goto L78_;

D6_:;
  // deopt 27 [r11]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L78_:;
  // st f = r11
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // sym2 = ldf `is.vector`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base2 = ldf `is.vector` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard2 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L79_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L81() else D7()
  // L81()
  goto L81_;

L80_:;
  // r12 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L9(r12)
  // L9(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L9_;

D7_:;
  // deopt 31 [x3]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L81_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // is_vector = ldf `is.vector` in base
  Rsh_Fir_reg_is_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r14 = dyn is_vector(x4, "any")
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_vector, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L82() else D8()
  // L82()
  goto L82_;

D8_:;
  // deopt 35 [r14]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L82_:;
  // goto L9(r14)
  // L9(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L9_;

L83_:;
  // sym3 = ldf `is.object`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base3 = ldf `is.object` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard3 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L84_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L86() else D9()
  // L86()
  goto L86_;

L85_:;
  // r16 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L11(c2, r16)
  // L11(c2, r16)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L11_;

D9_:;
  // deopt 38 [c2, x5]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L86_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(x6)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args61);
  // goto L11(c2, c8)
  // L11(c2, c8)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_c8_;
  goto L11_;

L88_:;
  // as_list = ldf `as.list`
  Rsh_Fir_reg_as_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L89() else D10()
  // L89()
  goto L89_;

D10_:;
  // deopt 43 []
  Rsh_Fir_deopt(43, 0, NULL, CCP, RHO);
  return R_NilValue;

L89_:;
  // p1 = prom<V +>{
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   return x8;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1828503910_1, 0, NULL, CCP, RHO);
  // r19 = dyn as_list(p1)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_list, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L90() else D11()
  // L90()
  goto L90_;

D11_:;
  // deopt 45 [r19]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L90_:;
  // st x = r19
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // goto L13()
  // L13()
  goto L13_;

L92_:;
  // len2 = ld len
  Rsh_Fir_reg_len2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L94() else D12()
  // L94()
  goto L94_;

L93_:;
  // r21 = dyn base4(<sym len>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L14(r21)
  // L14(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L14_;

D12_:;
  // deopt 50 [len2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_len2_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L94_:;
  // len3 = force? len2
  Rsh_Fir_reg_len3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_len2_);
  // checkMissing(len3)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_len3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // r23 = seq_len(len3)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_len3_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args66);
  // goto L14(r23)
  // L14(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L14_;

D13_:;
  // deopt 54 [mis2]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_mis2_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L95_:;
  // mis3 = force? mis2
  Rsh_Fir_reg_mis3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mis2_);
  // checkMissing(mis3)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_mis3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // c13 = `as.logical`(mis3)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_mis3_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args68);
  // if c13 then L96() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L96()
    goto L96_;
  } else {
  // L15()
    goto L15_;
  }

L96_:;
  // right1 = ld right
  Rsh_Fir_reg_right1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L97() else D14()
  // L97()
  goto L97_;

D14_:;
  // deopt 56 [right1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_right1_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L97_:;
  // right2 = force? right1
  Rsh_Fir_reg_right2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_right1_);
  // checkMissing(right2)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_right2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // c14 = `as.logical`(right2)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_right2_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args70);
  // if c14 then L98() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L98()
    goto L98_;
  } else {
  // L16()
    goto L16_;
  }

L98_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L99() else D15()
  // L99()
  goto L99_;

D15_:;
  // deopt 58 [x9]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L99_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(x10)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args72);
  // if c15 then L100() else L101(x10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L100()
    goto L100_;
  } else {
  // L101(x10)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    goto L101_;
  }

L100_:;
  // dr = tryDispatchBuiltin.1("[[", x10)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args73);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc then L102() else L101(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L102()
    goto L102_;
  } else {
  // L101(dr)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_dr;
    goto L101_;
  }

L101_:;
  // len4 = ld len
  Rsh_Fir_reg_len4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L103() else D16()
  // L103()
  goto L103_;

L102_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L17(dx)
  // L17(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L17_;

D16_:;
  // deopt 60 [x12, len4]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_len4_;
  Rsh_Fir_deopt(60, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L103_:;
  // len5 = force? len4
  Rsh_Fir_reg_len5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_len4_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r24 = dyn __(x12, len5)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_len5_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L17(r24)
  // L17(r24)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r24_;
  goto L17_;

D17_:;
  // deopt 64 [ind]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_ind;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L104_:;
  // ind1 = force? ind
  Rsh_Fir_reg_ind1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind);
  // checkMissing(ind1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_ind1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(ind1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_ind1_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args78);
  // if c16 then L105() else L106(ind1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L105()
    goto L105_;
  } else {
  // L106(ind1)
    Rsh_Fir_reg_ind3_ = Rsh_Fir_reg_ind1_;
    goto L106_;
  }

L105_:;
  // dr2 = tryDispatchBuiltin.1("[", ind1)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_ind1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args79);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if dc1 then L107() else L106(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L107()
    goto L107_;
  } else {
  // L106(dr2)
    Rsh_Fir_reg_ind3_ = Rsh_Fir_reg_dr2_;
    goto L106_;
  }

L106_:;
  // len6 = ld len
  Rsh_Fir_reg_len6_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L108() else D18()
  // L108()
  goto L108_;

L107_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L18(dx2)
  // L18(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L18_;

D18_:;
  // deopt 66 [ind3, len6]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_ind3_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_len6_;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L108_:;
  // len7 = force? len6
  Rsh_Fir_reg_len7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_len6_);
  // checkMissing(len7)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_len7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // r25 = `-`(<missing>, len7)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_len7_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args83);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r26 = dyn __1(ind3, r25)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_ind3_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L18(r26)
  // L18(r26)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r26_;
  goto L18_;

D19_:;
  // deopt 71 [x13]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L110_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(x14)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args86);
  // if c17 then L111() else L112(x14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L111()
    goto L111_;
  } else {
  // L112(x14)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_x14_;
    goto L112_;
  }

L111_:;
  // dr4 = tryDispatchBuiltin.1("[[", x14)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args87);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if dc2 then L113() else L112(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L113()
    goto L113_;
  } else {
  // L112(dr4)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_dr4_;
    goto L112_;
  }

L112_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r27 = dyn __2(x16, 1)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L20(r27)
  // L20(r27)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r27_;
  goto L20_;

L113_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // goto L20(dx5)
  // L20(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L20_;

D20_:;
  // deopt 77 [ind4]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_ind4_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L114_:;
  // ind5 = force? ind4
  Rsh_Fir_reg_ind5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind4_);
  // checkMissing(ind5)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_ind5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // c18 = `is.object`(ind5)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_ind5_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args92);
  // if c18 then L115() else L116(ind5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L115()
    goto L115_;
  } else {
  // L116(ind5)
    Rsh_Fir_reg_ind7_ = Rsh_Fir_reg_ind5_;
    goto L116_;
  }

L115_:;
  // dr6 = tryDispatchBuiltin.1("[", ind5)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_ind5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args93);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if dc3 then L117() else L116(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L117()
    goto L117_;
  } else {
  // L116(dr6)
    Rsh_Fir_reg_ind7_ = Rsh_Fir_reg_dr6_;
    goto L116_;
  }

L116_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r28 = dyn __3(ind7, -1)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_ind7_;
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L21(r28)
  // L21(r28)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r28_;
  goto L21_;

L117_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // goto L21(dx7)
  // L21(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L21_;

D21_:;
  // deopt 85 [accumulate1]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_accumulate1_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L119_:;
  // accumulate2 = force? accumulate1
  Rsh_Fir_reg_accumulate2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_accumulate1_);
  // checkMissing(accumulate2)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_accumulate2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // r29 = `!`(accumulate2)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_accumulate2_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args98);
  // c19 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args99);
  // if c19 then L120() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L120()
    goto L120_;
  } else {
  // L23()
    goto L23_;
  }

L120_:;
  // right3 = ld right
  Rsh_Fir_reg_right3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L121() else D22()
  // L121()
  goto L121_;

D22_:;
  // deopt 88 [right3]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_right3_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L121_:;
  // right4 = force? right3
  Rsh_Fir_reg_right4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_right3_);
  // checkMissing(right4)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_right4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // c20 = `as.logical`(right4)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_right4_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args101);
  // if c20 then L122() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L122()
    goto L122_;
  } else {
  // L24()
    goto L24_;
  }

L122_:;
  // rev = ldf rev
  Rsh_Fir_reg_rev = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L123() else D23()
  // L123()
  goto L123_;

D23_:;
  // deopt 91 []
  Rsh_Fir_deopt(91, 0, NULL, CCP, RHO);
  return R_NilValue;

L123_:;
  // p2 = prom<V +>{
  //   ind8 = ld ind;
  //   ind9 = force? ind8;
  //   checkMissing(ind9);
  //   return ind9;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1828503910_2, 0, NULL, CCP, RHO);
  // r31 = dyn rev(p2)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rev, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L124() else D24()
  // L124()
  goto L124_;

D24_:;
  // deopt 93 [r31]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L124_:;
  // s = toForSeq(r31)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args105);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 24);
  // goto L25(i)
  // L25(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L25_;

L125_:;
  // goto L28()
  // L28()
  goto L28_;

L126_:;
  // forceAndCall = ldf forceAndCall in base
  Rsh_Fir_reg_forceAndCall = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r34 = dyn forceAndCall(2.0, <sym f>, <lang `[[`(x, i)>, <sym init>)
  SEXP Rsh_Fir_array_args106[4];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args106[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args106[2] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args106[3] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names15[4];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_forceAndCall, 4, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L26(i2, r34)
  // L26(i2, r34)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L26_;

L127_:;
  // r32 = dyn base5(2.0, <sym f>, <lang `[[`(x, i)>, <sym init>)
  SEXP Rsh_Fir_array_args107[4];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args107[2] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args107[3] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names16[4];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 4, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L26(i2, r32)
  // L26(i2, r32)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L26_;

D25_:;
  // deopt 101 [ind10]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_ind10_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L129_:;
  // ind11 = force? ind10
  Rsh_Fir_reg_ind11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind10_);
  // checkMissing(ind11)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_ind11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // s1 = toForSeq(ind11)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_ind11_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // l1 = length(s1)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args110);
  // i9 = 0
  Rsh_Fir_reg_i9_ = Rsh_const(CCP, 24);
  // goto L29(i9)
  // L29(i9)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i9_;
  goto L29_;

L130_:;
  // goto L28()
  // L28()
  goto L28_;

L131_:;
  // forceAndCall1 = ldf forceAndCall in base
  Rsh_Fir_reg_forceAndCall1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r37 = dyn forceAndCall1(2.0, <sym f>, <sym init>, <lang `[[`(x, i)>)
  SEXP Rsh_Fir_array_args111[4];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args111[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args111[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args111[3] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names17[4];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_forceAndCall1_, 4, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L30(i11, r37)
  // L30(i11, r37)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L30_;

L132_:;
  // r35 = dyn base6(2.0, <sym f>, <sym init>, <lang `[[`(x, i)>)
  SEXP Rsh_Fir_array_args112[4];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args112[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args112[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args112[3] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names18[4];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 4, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L30(i11, r35)
  // L30(i11, r35)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L30_;

D26_:;
  // deopt 110 [init3]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_init3_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L133_:;
  // init4 = force? init3
  Rsh_Fir_reg_init4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_init3_);
  // checkMissing(init4)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_init4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return init4
  return Rsh_Fir_reg_init4_;

L135_:;
  // ind12 = ld ind
  Rsh_Fir_reg_ind12_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L137() else D27()
  // L137()
  goto L137_;

L136_:;
  // r38 = dyn base7(<sym ind>)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L32(r38)
  // L32(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L32_;

D27_:;
  // deopt 114 [ind12]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_ind12_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L137_:;
  // ind13 = force? ind12
  Rsh_Fir_reg_ind13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind12_);
  // checkMissing(ind13)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_ind13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r40 = dyn length1(ind13)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_ind13_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L138() else D28()
  // L138()
  goto L138_;

D28_:;
  // deopt 117 [r40]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L138_:;
  // goto L32(r40)
  // L32(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L32_;

L139_:;
  // len8 = ld len
  Rsh_Fir_reg_len8_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L141() else D29()
  // L141()
  goto L141_;

L140_:;
  // r42 = dyn base8("list", <sym len>)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args117[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L33(r42)
  // L33(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L33_;

D29_:;
  // deopt 124 [len8]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_len8_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L141_:;
  // len9 = force? len8
  Rsh_Fir_reg_len9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_len8_);
  // checkMissing(len9)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_len9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // vector = ldf vector in base
  Rsh_Fir_reg_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r44 = dyn vector("list", len9)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_len9_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector, 2, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L142() else D30()
  // L142()
  goto L142_;

D30_:;
  // deopt 127 [r44]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L142_:;
  // goto L33(r44)
  // L33(r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L33_;

D31_:;
  // deopt 129 [mis4]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_mis4_;
  Rsh_Fir_deopt(129, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L143_:;
  // mis5 = force? mis4
  Rsh_Fir_reg_mis5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mis4_);
  // checkMissing(mis5)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_mis5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // c23 = `as.logical`(mis5)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_mis5_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args121);
  // if c23 then L144() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L144()
    goto L144_;
  } else {
  // L34()
    goto L34_;
  }

L144_:;
  // right5 = ld right
  Rsh_Fir_reg_right5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L145() else D32()
  // L145()
  goto L145_;

D32_:;
  // deopt 131 [right5]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_right5_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L145_:;
  // right6 = force? right5
  Rsh_Fir_reg_right6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_right5_);
  // checkMissing(right6)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_right6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // c24 = `as.logical`(right6)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_right6_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args123);
  // if c24 then L146() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L146()
    goto L146_;
  } else {
  // L35()
    goto L35_;
  }

L146_:;
  // init5 = ld init
  Rsh_Fir_reg_init5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L147() else D33()
  // L147()
  goto L147_;

D33_:;
  // deopt 133 [init5]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_init5_;
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L147_:;
  // init6 = force? init5
  Rsh_Fir_reg_init6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_init5_);
  // checkMissing(init6)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_init6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // l2 = ld out
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // c25 = `is.object`(l2)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args125);
  // if c25 then L148() else L149(init6, l2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L148()
    goto L148_;
  } else {
  // L149(init6, l2)
    Rsh_Fir_reg_init8_ = Rsh_Fir_reg_init6_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    goto L149_;
  }

L148_:;
  // dr8 = tryDispatchBuiltin.0("[[<-", l2, init6)
  SEXP Rsh_Fir_array_args126[3];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args126[2] = Rsh_Fir_reg_init6_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args126);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // if dc4 then L150() else L149(init6, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L150()
    goto L150_;
  } else {
  // L149(init6, dr8)
    Rsh_Fir_reg_init8_ = Rsh_Fir_reg_init6_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_dr8_;
    goto L149_;
  }

L149_:;
  // len10 = ld len
  Rsh_Fir_reg_len10_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L151() else D34()
  // L151()
  goto L151_;

L150_:;
  // dx10 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // goto L36(dx10)
  // L36(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L36_;

D34_:;
  // deopt 136 [init8, l4, init6, len10]
  SEXP Rsh_Fir_array_deopt_stack31[4];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_init8_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_init6_;
  Rsh_Fir_array_deopt_stack31[3] = Rsh_Fir_reg_len10_;
  Rsh_Fir_deopt(136, 4, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L151_:;
  // len11 = force? len10
  Rsh_Fir_reg_len11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_len10_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r45 = dyn ____(l4, init6, len11)
  SEXP Rsh_Fir_array_args129[3];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_init6_;
  Rsh_Fir_array_args129[2] = Rsh_Fir_reg_len11_;
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L36(r45)
  // L36(r45)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r45_;
  goto L36_;

D35_:;
  // deopt 141 []
  Rsh_Fir_deopt(141, 0, NULL, CCP, RHO);
  return R_NilValue;

L152_:;
  // p3 = prom<V +>{
  //   ind14 = ld ind;
  //   ind15 = force? ind14;
  //   checkMissing(ind15);
  //   return ind15;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1828503910_3, 0, NULL, CCP, RHO);
  // r47 = dyn rev1(p3)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rev1_, 1, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L153() else D36()
  // L153()
  goto L153_;

D36_:;
  // deopt 143 [r47]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L153_:;
  // s2 = toForSeq(r47)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_s2_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // l5 = length(s2)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_s2_;
  Rsh_Fir_reg_l5_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args133);
  // i17 = 0
  Rsh_Fir_reg_i17_ = Rsh_const(CCP, 24);
  // goto L37(i17)
  // L37(i17)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i17_;
  goto L37_;

L154_:;
  // goto L41(i19)
  // L41(i19)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i19_;
  goto L41_;

L155_:;
  // forceAndCall2 = ldf forceAndCall in base
  Rsh_Fir_reg_forceAndCall2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r50 = dyn forceAndCall2(2.0, <sym f>, <lang `[[`(x, i)>, <sym init>)
  SEXP Rsh_Fir_array_args134[4];
  Rsh_Fir_array_args134[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args134[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args134[2] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args134[3] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names25[4];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_array_arg_names25[3] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_forceAndCall2_, 4, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L38(i19, r50)
  // L38(i19, r50)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L38_;

L156_:;
  // r48 = dyn base9(2.0, <sym f>, <lang `[[`(x, i)>, <sym init>)
  SEXP Rsh_Fir_array_args135[4];
  Rsh_Fir_array_args135[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args135[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args135[2] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args135[3] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names26[4];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_array_arg_names26[3] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 4, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L38(i19, r48)
  // L38(i19, r48)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L38_;

D37_:;
  // deopt 148 [i24, init11]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i24_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_init11_;
  Rsh_Fir_deopt(148, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L157_:;
  // init12 = force? init11
  Rsh_Fir_reg_init12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_init11_);
  // checkMissing(init12)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_init12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // l6 = ld out
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // c27 = `is.object`(l6)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args137);
  // if c27 then L158() else L159(i24, init12, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L158()
    goto L158_;
  } else {
  // L159(i24, init12, l6)
    Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i24_;
    Rsh_Fir_reg_init14_ = Rsh_Fir_reg_init12_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L159_;
  }

L158_:;
  // dr10 = tryDispatchBuiltin.0("[[<-", l6, init12)
  SEXP Rsh_Fir_array_args138[3];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args138[2] = Rsh_Fir_reg_init12_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args138);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // if dc5 then L160() else L159(i24, init12, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L160()
    goto L160_;
  } else {
  // L159(i24, init12, dr10)
    Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i24_;
    Rsh_Fir_reg_init14_ = Rsh_Fir_reg_init12_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr10_;
    goto L159_;
  }

L159_:;
  // i29 = ld i
  Rsh_Fir_reg_i29_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L161() else D38()
  // L161()
  goto L161_;

L160_:;
  // dx12 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // goto L39(i24, dx12)
  // L39(i24, dx12)
  Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i24_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L39_;

D38_:;
  // deopt 151 [i26, init14, l8, init12, i29]
  SEXP Rsh_Fir_array_deopt_stack34[5];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_i26_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_init14_;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack34[3] = Rsh_Fir_reg_init12_;
  Rsh_Fir_array_deopt_stack34[4] = Rsh_Fir_reg_i29_;
  Rsh_Fir_deopt(151, 5, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L161_:;
  // i30 = force? i29
  Rsh_Fir_reg_i30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i29_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r51 = dyn ____1(l8, init12, i30)
  SEXP Rsh_Fir_array_args141[3];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_init12_;
  Rsh_Fir_array_args141[2] = Rsh_Fir_reg_i30_;
  SEXP Rsh_Fir_array_arg_names27[3];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L39(i26, r51)
  // L39(i26, r51)
  Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i26_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r51_;
  goto L39_;

D39_:;
  // deopt 158 [init17]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_init17_;
  Rsh_Fir_deopt(158, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L163_:;
  // init18 = force? init17
  Rsh_Fir_reg_init18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_init17_);
  // checkMissing(init18)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_init18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // l9 = ld out
  Rsh_Fir_reg_l9_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // c28 = `is.object`(l9)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args143);
  // if c28 then L164() else L165(init18, l9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L164()
    goto L164_;
  } else {
  // L165(init18, l9)
    Rsh_Fir_reg_init20_ = Rsh_Fir_reg_init18_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    goto L165_;
  }

L164_:;
  // dr12 = tryDispatchBuiltin.0("[[<-", l9, init18)
  SEXP Rsh_Fir_array_args144[3];
  Rsh_Fir_array_args144[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args144[2] = Rsh_Fir_reg_init18_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args144);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // if dc6 then L166() else L165(init18, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L166()
    goto L166_;
  } else {
  // L165(init18, dr12)
    Rsh_Fir_reg_init20_ = Rsh_Fir_reg_init18_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_dr12_;
    goto L165_;
  }

L165_:;
  // ____2 = ldf `[[<-` in base
  Rsh_Fir_reg_____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r52 = dyn ____2(l11, init18, 1)
  SEXP Rsh_Fir_array_args146[3];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args146[1] = Rsh_Fir_reg_init18_;
  Rsh_Fir_array_args146[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names28[3];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____2_, 3, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L42(r52)
  // L42(r52)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r52_;
  goto L42_;

L166_:;
  // dx14 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // goto L42(dx14)
  // L42(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L42_;

D40_:;
  // deopt 165 [ind16]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_ind16_;
  Rsh_Fir_deopt(165, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L167_:;
  // ind17 = force? ind16
  Rsh_Fir_reg_ind17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind16_);
  // checkMissing(ind17)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_ind17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // s3 = toForSeq(ind17)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_ind17_;
  Rsh_Fir_reg_s3_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty());
  // l12 = length(s3)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_reg_l12_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args150);
  // i32 = 0
  Rsh_Fir_reg_i32_ = Rsh_const(CCP, 24);
  // goto L43(i32)
  // L43(i32)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i32_;
  goto L43_;

L168_:;
  // goto L41(i34)
  // L41(i34)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i34_;
  goto L41_;

L169_:;
  // forceAndCall3 = ldf forceAndCall in base
  Rsh_Fir_reg_forceAndCall3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r55 = dyn forceAndCall3(2.0, <sym f>, <sym init>, <lang `[[`(x, i)>)
  SEXP Rsh_Fir_array_args151[4];
  Rsh_Fir_array_args151[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args151[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args151[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args151[3] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names29[4];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_array_arg_names29[3] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_forceAndCall3_, 4, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L44(i34, r55)
  // L44(i34, r55)
  Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i34_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r55_;
  goto L44_;

L170_:;
  // r53 = dyn base10(2.0, <sym f>, <sym init>, <lang `[[`(x, i)>)
  SEXP Rsh_Fir_array_args152[4];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args152[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args152[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args152[3] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names30[4];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_array_arg_names30[3] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 4, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L44(i34, r53)
  // L44(i34, r53)
  Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i34_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L44_;

D41_:;
  // deopt 171 [i39, init23]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_i39_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_init23_;
  Rsh_Fir_deopt(171, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L171_:;
  // init24 = force? init23
  Rsh_Fir_reg_init24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_init23_);
  // checkMissing(init24)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_init24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty()));
  // l13 = ld out
  Rsh_Fir_reg_l13_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // c30 = `is.object`(l13)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args154);
  // if c30 then L172() else L173(i39, init24, l13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L172()
    goto L172_;
  } else {
  // L173(i39, init24, l13)
    Rsh_Fir_reg_i41_ = Rsh_Fir_reg_i39_;
    Rsh_Fir_reg_init26_ = Rsh_Fir_reg_init24_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_l13_;
    goto L173_;
  }

L172_:;
  // dr14 = tryDispatchBuiltin.0("[[<-", l13, init24)
  SEXP Rsh_Fir_array_args155[3];
  Rsh_Fir_array_args155[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args155[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args155[2] = Rsh_Fir_reg_init24_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args155);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty());
  // if dc7 then L174() else L173(i39, init24, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L174()
    goto L174_;
  } else {
  // L173(i39, init24, dr14)
    Rsh_Fir_reg_i41_ = Rsh_Fir_reg_i39_;
    Rsh_Fir_reg_init26_ = Rsh_Fir_reg_init24_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_dr14_;
    goto L173_;
  }

L173_:;
  // i44 = ld i
  Rsh_Fir_reg_i44_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L175() else D42()
  // L175()
  goto L175_;

L174_:;
  // dx16 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // goto L45(i39, dx16)
  // L45(i39, dx16)
  Rsh_Fir_reg_i43_ = Rsh_Fir_reg_i39_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L45_;

D42_:;
  // deopt 174 [i41, init26, l15, init24, i44]
  SEXP Rsh_Fir_array_deopt_stack38[5];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_i41_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_init26_;
  Rsh_Fir_array_deopt_stack38[2] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_deopt_stack38[3] = Rsh_Fir_reg_init24_;
  Rsh_Fir_array_deopt_stack38[4] = Rsh_Fir_reg_i44_;
  Rsh_Fir_deopt(174, 5, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L175_:;
  // i45 = force? i44
  Rsh_Fir_reg_i45_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i44_);
  // ____3 = ldf `[[<-` in base
  Rsh_Fir_reg_____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r56 = dyn ____3(l15, init24, i45)
  SEXP Rsh_Fir_array_args158[3];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args158[1] = Rsh_Fir_reg_init24_;
  Rsh_Fir_array_args158[2] = Rsh_Fir_reg_i45_;
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____3_, 3, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L45(i41, r56)
  // L45(i41, r56)
  Rsh_Fir_reg_i43_ = Rsh_Fir_reg_i41_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r56_;
  goto L45_;

D43_:;
  // deopt 181 [right7]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_right7_;
  Rsh_Fir_deopt(181, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L177_:;
  // right8 = force? right7
  Rsh_Fir_reg_right8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_right7_);
  // checkMissing(right8)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_right8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // c31 = `as.logical`(right8)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_right8_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args160);
  // if c31 then L178() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L178()
    goto L178_;
  } else {
  // L48()
    goto L48_;
  }

L178_:;
  // init29 = ld init
  Rsh_Fir_reg_init29_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L179() else D44()
  // L179()
  goto L179_;

D44_:;
  // deopt 183 [init29]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_init29_;
  Rsh_Fir_deopt(183, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L179_:;
  // init30 = force? init29
  Rsh_Fir_reg_init30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_init29_);
  // checkMissing(init30)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_init30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty()));
  // l16 = ld out
  Rsh_Fir_reg_l16_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // c32 = `is.object`(l16)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_l16_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args162);
  // if c32 then L180() else L181(init30, l16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L180()
    goto L180_;
  } else {
  // L181(init30, l16)
    Rsh_Fir_reg_init32_ = Rsh_Fir_reg_init30_;
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_l16_;
    goto L181_;
  }

L180_:;
  // dr16 = tryDispatchBuiltin.0("[[<-", l16, init30)
  SEXP Rsh_Fir_array_args163[3];
  Rsh_Fir_array_args163[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args163[1] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_args163[2] = Rsh_Fir_reg_init30_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args163);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty());
  // if dc8 then L182() else L181(init30, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L182()
    goto L182_;
  } else {
  // L181(init30, dr16)
    Rsh_Fir_reg_init32_ = Rsh_Fir_reg_init30_;
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_dr16_;
    goto L181_;
  }

L181_:;
  // len12 = ld len
  Rsh_Fir_reg_len12_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L183() else D45()
  // L183()
  goto L183_;

L182_:;
  // dx18 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty());
  // goto L49(dx18)
  // L49(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L49_;

D45_:;
  // deopt 186 [init32, l18, init30, len12]
  SEXP Rsh_Fir_array_deopt_stack41[4];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_init32_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_deopt_stack41[2] = Rsh_Fir_reg_init30_;
  Rsh_Fir_array_deopt_stack41[3] = Rsh_Fir_reg_len12_;
  Rsh_Fir_deopt(186, 4, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L183_:;
  // len13 = force? len12
  Rsh_Fir_reg_len13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_len12_);
  // ____4 = ldf `[[<-` in base
  Rsh_Fir_reg_____4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r57 = dyn ____4(l18, init30, len13)
  SEXP Rsh_Fir_array_args166[3];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_init30_;
  Rsh_Fir_array_args166[2] = Rsh_Fir_reg_len13_;
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____4_, 3, Rsh_Fir_array_args166, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L49(r57)
  // L49(r57)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r57_;
  goto L49_;

D46_:;
  // deopt 191 []
  Rsh_Fir_deopt(191, 0, NULL, CCP, RHO);
  return R_NilValue;

L184_:;
  // p4 = prom<V +>{
  //   ind18 = ld ind;
  //   ind19 = force? ind18;
  //   checkMissing(ind19);
  //   return ind19;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1828503910_4, 0, NULL, CCP, RHO);
  // r59 = dyn rev2(p4)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rev2_, 1, Rsh_Fir_array_args168, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L185() else D47()
  // L185()
  goto L185_;

D47_:;
  // deopt 193 [r59]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(193, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L185_:;
  // s4 = toForSeq(r59)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_s4_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // l19 = length(s4)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_s4_;
  Rsh_Fir_reg_l19_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args170);
  // i47 = 0
  Rsh_Fir_reg_i47_ = Rsh_const(CCP, 24);
  // goto L50(i47)
  // L50(i47)
  Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i47_;
  goto L50_;

L186_:;
  // goto L47()
  // L47()
  goto L47_;

L187_:;
  // forceAndCall4 = ldf forceAndCall in base
  Rsh_Fir_reg_forceAndCall4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r62 = dyn forceAndCall4(2.0, <sym f>, <lang `[[`(x, i)>, <sym init>)
  SEXP Rsh_Fir_array_args171[4];
  Rsh_Fir_array_args171[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args171[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args171[2] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args171[3] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names34[4];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_array_arg_names34[3] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_forceAndCall4_, 4, Rsh_Fir_array_args171, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L51(i49, r62)
  // L51(i49, r62)
  Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i49_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r62_;
  goto L51_;

L188_:;
  // r60 = dyn base11(2.0, <sym f>, <lang `[[`(x, i)>, <sym init>)
  SEXP Rsh_Fir_array_args172[4];
  Rsh_Fir_array_args172[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args172[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args172[2] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args172[3] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names35[4];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_array_arg_names35[3] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 4, Rsh_Fir_array_args172, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L51(i49, r60)
  // L51(i49, r60)
  Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i49_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r60_;
  goto L51_;

D48_:;
  // deopt 198 [i54, init35]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_i54_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_init35_;
  Rsh_Fir_deopt(198, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L189_:;
  // init36 = force? init35
  Rsh_Fir_reg_init36_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_init35_);
  // checkMissing(init36)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_init36_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty()));
  // l20 = ld out
  Rsh_Fir_reg_l20_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // c34 = `is.object`(l20)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_l20_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args174);
  // if c34 then L190() else L191(i54, init36, l20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L190()
    goto L190_;
  } else {
  // L191(i54, init36, l20)
    Rsh_Fir_reg_i56_ = Rsh_Fir_reg_i54_;
    Rsh_Fir_reg_init38_ = Rsh_Fir_reg_init36_;
    Rsh_Fir_reg_l22_ = Rsh_Fir_reg_l20_;
    goto L191_;
  }

L190_:;
  // dr18 = tryDispatchBuiltin.0("[[<-", l20, init36)
  SEXP Rsh_Fir_array_args175[3];
  Rsh_Fir_array_args175[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_args175[2] = Rsh_Fir_reg_init36_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args175);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty());
  // if dc9 then L192() else L191(i54, init36, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L192()
    goto L192_;
  } else {
  // L191(i54, init36, dr18)
    Rsh_Fir_reg_i56_ = Rsh_Fir_reg_i54_;
    Rsh_Fir_reg_init38_ = Rsh_Fir_reg_init36_;
    Rsh_Fir_reg_l22_ = Rsh_Fir_reg_dr18_;
    goto L191_;
  }

L191_:;
  // i59 = ld i
  Rsh_Fir_reg_i59_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L193() else D49()
  // L193()
  goto L193_;

L192_:;
  // dx20 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // goto L52(i54, dx20)
  // L52(i54, dx20)
  Rsh_Fir_reg_i58_ = Rsh_Fir_reg_i54_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L52_;

D49_:;
  // deopt 201 [i56, init38, l22, init36, i59]
  SEXP Rsh_Fir_array_deopt_stack44[5];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_i56_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_init38_;
  Rsh_Fir_array_deopt_stack44[2] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_deopt_stack44[3] = Rsh_Fir_reg_init36_;
  Rsh_Fir_array_deopt_stack44[4] = Rsh_Fir_reg_i59_;
  Rsh_Fir_deopt(201, 5, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L193_:;
  // i60 = force? i59
  Rsh_Fir_reg_i60_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i59_);
  // ____5 = ldf `[[<-` in base
  Rsh_Fir_reg_____5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r63 = dyn ____5(l22, init36, i60)
  SEXP Rsh_Fir_array_args178[3];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_args178[1] = Rsh_Fir_reg_init36_;
  Rsh_Fir_array_args178[2] = Rsh_Fir_reg_i60_;
  SEXP Rsh_Fir_array_arg_names36[3];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____5_, 3, Rsh_Fir_array_args178, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L52(i56, r63)
  // L52(i56, r63)
  Rsh_Fir_reg_i58_ = Rsh_Fir_reg_i56_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r63_;
  goto L52_;

D50_:;
  // deopt 208 [ind20]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_ind20_;
  Rsh_Fir_deopt(208, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L195_:;
  // ind21 = force? ind20
  Rsh_Fir_reg_ind21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind20_);
  // checkMissing(ind21)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_ind21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty()));
  // s5 = toForSeq(ind21)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_ind21_;
  Rsh_Fir_reg_s5_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty());
  // l23 = length(s5)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_s5_;
  Rsh_Fir_reg_l23_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args181);
  // i61 = 0
  Rsh_Fir_reg_i61_ = Rsh_const(CCP, 24);
  // goto L54(i61)
  // L54(i61)
  Rsh_Fir_reg_i62_ = Rsh_Fir_reg_i61_;
  goto L54_;

L196_:;
  // init47 = ld init
  Rsh_Fir_reg_init47_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L204() else D53()
  // L204()
  goto L204_;

D51_:;
  // deopt 210 [i63, init41]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_i63_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_init41_;
  Rsh_Fir_deopt(210, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L197_:;
  // init42 = force? init41
  Rsh_Fir_reg_init42_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_init41_);
  // checkMissing(init42)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_init42_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty()));
  // l24 = ld out
  Rsh_Fir_reg_l24_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // c36 = `is.object`(l24)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_l24_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args183);
  // if c36 then L198() else L199(i63, init42, l24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L198()
    goto L198_;
  } else {
  // L199(i63, init42, l24)
    Rsh_Fir_reg_i67_ = Rsh_Fir_reg_i63_;
    Rsh_Fir_reg_init44_ = Rsh_Fir_reg_init42_;
    Rsh_Fir_reg_l26_ = Rsh_Fir_reg_l24_;
    goto L199_;
  }

L198_:;
  // dr20 = tryDispatchBuiltin.0("[[<-", l24, init42)
  SEXP Rsh_Fir_array_args184[3];
  Rsh_Fir_array_args184[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args184[1] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_args184[2] = Rsh_Fir_reg_init42_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args184);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty());
  // if dc10 then L200() else L199(i63, init42, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L200()
    goto L200_;
  } else {
  // L199(i63, init42, dr20)
    Rsh_Fir_reg_i67_ = Rsh_Fir_reg_i63_;
    Rsh_Fir_reg_init44_ = Rsh_Fir_reg_init42_;
    Rsh_Fir_reg_l26_ = Rsh_Fir_reg_dr20_;
    goto L199_;
  }

L199_:;
  // i70 = ld i
  Rsh_Fir_reg_i70_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L201() else D52()
  // L201()
  goto L201_;

L200_:;
  // dx22 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty());
  // goto L55(i63, dx22)
  // L55(i63, dx22)
  Rsh_Fir_reg_i69_ = Rsh_Fir_reg_i63_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L55_;

D52_:;
  // deopt 213 [i67, init44, l26, init42, i70]
  SEXP Rsh_Fir_array_deopt_stack47[5];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_i67_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_init44_;
  Rsh_Fir_array_deopt_stack47[2] = Rsh_Fir_reg_l26_;
  Rsh_Fir_array_deopt_stack47[3] = Rsh_Fir_reg_init42_;
  Rsh_Fir_array_deopt_stack47[4] = Rsh_Fir_reg_i70_;
  Rsh_Fir_deopt(213, 5, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L201_:;
  // i71 = force? i70
  Rsh_Fir_reg_i71_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i70_);
  // ____6 = ldf `[[<-` in base
  Rsh_Fir_reg_____6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r64 = dyn ____6(l26, init42, i71)
  SEXP Rsh_Fir_array_args187[3];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_l26_;
  Rsh_Fir_array_args187[1] = Rsh_Fir_reg_init42_;
  Rsh_Fir_array_args187[2] = Rsh_Fir_reg_i71_;
  SEXP Rsh_Fir_array_arg_names37[3];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____6_, 3, Rsh_Fir_array_args187, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L55(i67, r64)
  // L55(i67, r64)
  Rsh_Fir_reg_i69_ = Rsh_Fir_reg_i67_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r64_;
  goto L55_;

L202_:;
  // forceAndCall5 = ldf forceAndCall in base
  Rsh_Fir_reg_forceAndCall5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r67 = dyn forceAndCall5(2.0, <sym f>, <sym init>, <lang `[[`(x, i)>)
  SEXP Rsh_Fir_array_args188[4];
  Rsh_Fir_array_args188[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args188[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args188[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args188[3] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names38[4];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_array_arg_names38[3] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_forceAndCall5_, 4, Rsh_Fir_array_args188, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L56(i69, r67)
  // L56(i69, r67)
  Rsh_Fir_reg_i74_ = Rsh_Fir_reg_i69_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r67_;
  goto L56_;

L203_:;
  // r65 = dyn base12(2.0, <sym f>, <sym init>, <lang `[[`(x, i)>)
  SEXP Rsh_Fir_array_args189[4];
  Rsh_Fir_array_args189[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args189[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args189[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args189[3] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names39[4];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_array_arg_names39[2] = R_MissingArg;
  Rsh_Fir_array_arg_names39[3] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 4, Rsh_Fir_array_args189, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L56(i69, r65)
  // L56(i69, r65)
  Rsh_Fir_reg_i74_ = Rsh_Fir_reg_i69_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r65_;
  goto L56_;

D53_:;
  // deopt 224 [init47]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_init47_;
  Rsh_Fir_deopt(224, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L204_:;
  // init48 = force? init47
  Rsh_Fir_reg_init48_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_init47_);
  // checkMissing(init48)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_init48_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty()));
  // l27 = ld out
  Rsh_Fir_reg_l27_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // c37 = `is.object`(l27)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_l27_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args191);
  // if c37 then L205() else L206(init48, l27)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L205()
    goto L205_;
  } else {
  // L206(init48, l27)
    Rsh_Fir_reg_init50_ = Rsh_Fir_reg_init48_;
    Rsh_Fir_reg_l29_ = Rsh_Fir_reg_l27_;
    goto L206_;
  }

L205_:;
  // dr22 = tryDispatchBuiltin.0("[[<-", l27, init48)
  SEXP Rsh_Fir_array_args192[3];
  Rsh_Fir_array_args192[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args192[1] = Rsh_Fir_reg_l27_;
  Rsh_Fir_array_args192[2] = Rsh_Fir_reg_init48_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args192);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty());
  // if dc11 then L207() else L206(init48, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L207()
    goto L207_;
  } else {
  // L206(init48, dr22)
    Rsh_Fir_reg_init50_ = Rsh_Fir_reg_init48_;
    Rsh_Fir_reg_l29_ = Rsh_Fir_reg_dr22_;
    goto L206_;
  }

L206_:;
  // len14 = ld len
  Rsh_Fir_reg_len14_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L208() else D54()
  // L208()
  goto L208_;

L207_:;
  // dx24 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args194, Rsh_Fir_param_types_empty());
  // goto L58(init48, dx24)
  // L58(init48, dx24)
  Rsh_Fir_reg_init52_ = Rsh_Fir_reg_init48_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L58_;

D54_:;
  // deopt 227 [init50, l29, init48, len14]
  SEXP Rsh_Fir_array_deopt_stack49[4];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_init50_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_l29_;
  Rsh_Fir_array_deopt_stack49[2] = Rsh_Fir_reg_init48_;
  Rsh_Fir_array_deopt_stack49[3] = Rsh_Fir_reg_len14_;
  Rsh_Fir_deopt(227, 4, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L208_:;
  // len15 = force? len14
  Rsh_Fir_reg_len15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_len14_);
  // ____7 = ldf `[[<-` in base
  Rsh_Fir_reg_____7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r68 = dyn ____7(l29, init48, len15)
  SEXP Rsh_Fir_array_args195[3];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_l29_;
  Rsh_Fir_array_args195[1] = Rsh_Fir_reg_init48_;
  Rsh_Fir_array_args195[2] = Rsh_Fir_reg_len15_;
  SEXP Rsh_Fir_array_arg_names40[3];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_array_arg_names40[2] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____7_, 3, Rsh_Fir_array_args195, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L58(init50, r68)
  // L58(init50, r68)
  Rsh_Fir_reg_init52_ = Rsh_Fir_reg_init50_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r68_;
  goto L58_;

L209_:;
  // lengths = ldf lengths
  Rsh_Fir_reg_lengths = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L211() else D55()
  // L211()
  goto L211_;

L210_:;
  // r69 = dyn base13(<lang `==`(lengths(out), 1)>)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args196, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L59(r69)
  // L59(r69)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r69_;
  goto L59_;

D55_:;
  // deopt 234 []
  Rsh_Fir_deopt(234, 0, NULL, CCP, RHO);
  return R_NilValue;

L211_:;
  // p5 = prom<V +>{
  //   out = ld out;
  //   out1 = force? out;
  //   checkMissing(out1);
  //   return out1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1828503910_5, 0, NULL, CCP, RHO);
  // r72 = dyn lengths(p5)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lengths, 1, Rsh_Fir_array_args198, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L212() else D56()
  // L212()
  goto L212_;

D56_:;
  // deopt 236 [r72]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(236, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L212_:;
  // r73 = `==`(r72, 1)
  SEXP Rsh_Fir_array_args199[2];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_array_args199[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args199);
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r74 = dyn all(r73)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args200, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L213() else D57()
  // L213()
  goto L213_;

D57_:;
  // deopt 240 [r74]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(240, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L213_:;
  // goto L59(r74)
  // L59(r74)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r74_;
  goto L59_;

L214_:;
  // simplify1 = ld simplify
  Rsh_Fir_reg_simplify1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L215() else D58()
  // L215()
  goto L215_;

D58_:;
  // deopt 241 [c38, simplify1]
  SEXP Rsh_Fir_array_deopt_stack52[2];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_simplify1_;
  Rsh_Fir_deopt(241, 2, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L215_:;
  // simplify2 = force? simplify1
  Rsh_Fir_reg_simplify2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_simplify1_);
  // checkMissing(simplify2)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_simplify2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty()));
  // c41 = `as.logical`(simplify2)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_simplify2_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args202);
  // c42 = `&&`(c38, c41)
  SEXP Rsh_Fir_array_args203[2];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_args203[1] = Rsh_Fir_reg_c41_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args203);
  // goto L60(c42)
  // L60(c42)
  Rsh_Fir_reg_c40_ = Rsh_Fir_reg_c42_;
  goto L60_;

L217_:;
  // unlist = ldf unlist
  Rsh_Fir_reg_unlist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // check L218() else D59()
  // L218()
  goto L218_;

D59_:;
  // deopt 245 []
  Rsh_Fir_deopt(245, 0, NULL, CCP, RHO);
  return R_NilValue;

L218_:;
  // p6 = prom<V +>{
  //   out2 = ld out;
  //   out3 = force? out2;
  //   checkMissing(out3);
  //   return out3;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1828503910_6, 0, NULL, CCP, RHO);
  // r76 = dyn unlist[, recursive](p6, FALSE)
  SEXP Rsh_Fir_array_args205[2];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args205[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlist, 2, Rsh_Fir_array_args205, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L219() else D60()
  // L219()
  goto L219_;

D60_:;
  // deopt 249 [r76]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(249, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L219_:;
  // st out = r76
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r76_, RHO);
  (void)(Rsh_Fir_reg_r76_);
  // goto L62()
  // L62()
  goto L62_;

D61_:;
  // deopt 253 [out4]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_out4_;
  Rsh_Fir_deopt(253, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L221_:;
  // out5 = force? out4
  Rsh_Fir_reg_out5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_out4_);
  // checkMissing(out5)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_out5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return out5
  return Rsh_Fir_reg_out5_;
}
SEXP Rsh_Fir_user_promise_inner1828503910_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_f1_;
  SEXP Rsh_Fir_reg_f2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1828503910/0: expected 0, got %d", NCAPTURES);

  // f1 = ld f
  Rsh_Fir_reg_f1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // f2 = force? f1
  Rsh_Fir_reg_f2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f1_);
  // checkMissing(f2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_f2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // return f2
  return Rsh_Fir_reg_f2_;
}
SEXP Rsh_Fir_user_promise_inner1828503910_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_x8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1828503910/0: expected 0, got %d", NCAPTURES);

  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return x8
  return Rsh_Fir_reg_x8_;
}
SEXP Rsh_Fir_user_promise_inner1828503910_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ind8_;
  SEXP Rsh_Fir_reg_ind9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1828503910/0: expected 0, got %d", NCAPTURES);

  // ind8 = ld ind
  Rsh_Fir_reg_ind8_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // ind9 = force? ind8
  Rsh_Fir_reg_ind9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind8_);
  // checkMissing(ind9)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_ind9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // return ind9
  return Rsh_Fir_reg_ind9_;
}
SEXP Rsh_Fir_user_promise_inner1828503910_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ind14_;
  SEXP Rsh_Fir_reg_ind15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1828503910/0: expected 0, got %d", NCAPTURES);

  // ind14 = ld ind
  Rsh_Fir_reg_ind14_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // ind15 = force? ind14
  Rsh_Fir_reg_ind15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind14_);
  // checkMissing(ind15)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_ind15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // return ind15
  return Rsh_Fir_reg_ind15_;
}
SEXP Rsh_Fir_user_promise_inner1828503910_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ind18_;
  SEXP Rsh_Fir_reg_ind19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1828503910/0: expected 0, got %d", NCAPTURES);

  // ind18 = ld ind
  Rsh_Fir_reg_ind18_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // ind19 = force? ind18
  Rsh_Fir_reg_ind19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind18_);
  // checkMissing(ind19)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_ind19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty()));
  // return ind19
  return Rsh_Fir_reg_ind19_;
}
SEXP Rsh_Fir_user_promise_inner1828503910_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_out;
  SEXP Rsh_Fir_reg_out1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1828503910/0: expected 0, got %d", NCAPTURES);

  // out = ld out
  Rsh_Fir_reg_out = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // out1 = force? out
  Rsh_Fir_reg_out1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_out);
  // checkMissing(out1)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_out1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty()));
  // return out1
  return Rsh_Fir_reg_out1_;
}
SEXP Rsh_Fir_user_promise_inner1828503910_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_out2_;
  SEXP Rsh_Fir_reg_out3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1828503910/0: expected 0, got %d", NCAPTURES);

  // out2 = ld out
  Rsh_Fir_reg_out2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // out3 = force? out2
  Rsh_Fir_reg_out3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_out2_);
  // checkMissing(out3)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_out3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty()));
  // return out3
  return Rsh_Fir_reg_out3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
