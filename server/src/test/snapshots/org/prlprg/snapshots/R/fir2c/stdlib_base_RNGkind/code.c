#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3938378601_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3938378601_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3938378601_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3938378601_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3938378601_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3938378601_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3938378601_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3938378601_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3938378601_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3938378601_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3938378601_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3938378601_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3938378601_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3938378601_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  // r = clos inner3938378601
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3938378601_, RHO, CCP);
  // st RNGkind = r
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
SEXP Rsh_Fir_user_function_inner3938378601_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3938378601 dynamic dispatch ([kind, `normal.kind`, `sample.kind`])

  return Rsh_Fir_user_version_inner3938378601_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3938378601_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3938378601 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3938378601/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_kind;
  SEXP Rsh_Fir_reg_normal_kind;
  SEXP Rsh_Fir_reg_sample_kind;
  SEXP Rsh_Fir_reg_kind_isMissing;
  SEXP Rsh_Fir_reg_kind_orDefault;
  SEXP Rsh_Fir_reg_normal_kind_isMissing;
  SEXP Rsh_Fir_reg_normal_kind_orDefault;
  SEXP Rsh_Fir_reg_sample_kind_isMissing;
  SEXP Rsh_Fir_reg_sample_kind_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_kind1_;
  SEXP Rsh_Fir_reg_kind2_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_do_set;
  SEXP Rsh_Fir_reg_do_set1_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_kind3_;
  SEXP Rsh_Fir_reg_kind4_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_kind5_;
  SEXP Rsh_Fir_reg_kind6_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_pmatch;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_i_knd;
  SEXP Rsh_Fir_reg_i_knd1_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_i_knd4_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_kinds2_;
  SEXP Rsh_Fir_reg_kinds3_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_normal_kind1_;
  SEXP Rsh_Fir_reg_normal_kind2_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_normal_kind3_;
  SEXP Rsh_Fir_reg_normal_kind4_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_normal_kind5_;
  SEXP Rsh_Fir_reg_normal_kind6_;
  SEXP Rsh_Fir_reg_length3_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_stop2_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_pmatch1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_normal_kind9_;
  SEXP Rsh_Fir_reg_normal_kind10_;
  SEXP Rsh_Fir_reg_is_na1_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_stop3_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_normal_kind13_;
  SEXP Rsh_Fir_reg_normal_kind14_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_normal_kind15_;
  SEXP Rsh_Fir_reg_normal_kind16_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_normal_kind19_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_n_kinds2_;
  SEXP Rsh_Fir_reg_n_kinds3_;
  SEXP Rsh_Fir_reg_length4_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_sample_kind1_;
  SEXP Rsh_Fir_reg_sample_kind2_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_sample_kind3_;
  SEXP Rsh_Fir_reg_sample_kind4_;
  SEXP Rsh_Fir_reg_c35_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_c41_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_sample_kind5_;
  SEXP Rsh_Fir_reg_sample_kind6_;
  SEXP Rsh_Fir_reg_length5_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_c42_;
  SEXP Rsh_Fir_reg_c43_;
  SEXP Rsh_Fir_reg_c45_;
  SEXP Rsh_Fir_reg_stop4_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_pmatch2_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg_sample_kind9_;
  SEXP Rsh_Fir_reg_sample_kind10_;
  SEXP Rsh_Fir_reg_is_na2_;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_c46_;
  SEXP Rsh_Fir_reg_stop5_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_sample_kind13_;
  SEXP Rsh_Fir_reg_sample_kind14_;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_c47_;
  SEXP Rsh_Fir_reg_warning1_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_sample_kind15_;
  SEXP Rsh_Fir_reg_sample_kind16_;
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r102_;
  SEXP Rsh_Fir_reg_sample_kind19_;
  SEXP Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_reg_s_kinds2_;
  SEXP Rsh_Fir_reg_s_kinds3_;
  SEXP Rsh_Fir_reg_length6_;
  SEXP Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_reg_r105_;
  SEXP Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_reg_c48_;
  SEXP Rsh_Fir_reg_r107_;
  SEXP Rsh_Fir_reg_sym18_;
  SEXP Rsh_Fir_reg_base18_;
  SEXP Rsh_Fir_reg_guard18_;
  SEXP Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_reg_r112_;
  SEXP Rsh_Fir_reg_r113_;
  SEXP Rsh_Fir_reg_i_knd5_;
  SEXP Rsh_Fir_reg_i_knd6_;
  SEXP Rsh_Fir_reg_normal_kind20_;
  SEXP Rsh_Fir_reg_normal_kind21_;
  SEXP Rsh_Fir_reg_sample_kind20_;
  SEXP Rsh_Fir_reg_sample_kind21_;
  SEXP Rsh_Fir_reg_RNGkind;
  SEXP Rsh_Fir_reg_r114_;
  SEXP Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_reg_sym19_;
  SEXP Rsh_Fir_reg_base19_;
  SEXP Rsh_Fir_reg_guard19_;
  SEXP Rsh_Fir_reg_r116_;
  SEXP Rsh_Fir_reg_r117_;
  SEXP Rsh_Fir_reg_kinds4_;
  SEXP Rsh_Fir_reg_kinds5_;
  SEXP Rsh_Fir_reg_c49_;
  SEXP Rsh_Fir_reg_kinds7_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r118_;
  SEXP Rsh_Fir_reg_r119_;
  SEXP Rsh_Fir_reg_c50_;
  SEXP Rsh_Fir_reg_kinds9_;
  SEXP Rsh_Fir_reg_r121_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_kinds11_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r122_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r123_;
  SEXP Rsh_Fir_reg_n_kinds4_;
  SEXP Rsh_Fir_reg_n_kinds5_;
  SEXP Rsh_Fir_reg_c51_;
  SEXP Rsh_Fir_reg_n_kinds7_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_r124_;
  SEXP Rsh_Fir_reg_r125_;
  SEXP Rsh_Fir_reg_c52_;
  SEXP Rsh_Fir_reg_n_kinds9_;
  SEXP Rsh_Fir_reg_r127_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_n_kinds11_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r128_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r129_;
  SEXP Rsh_Fir_reg_s_kinds4_;
  SEXP Rsh_Fir_reg_s_kinds5_;
  SEXP Rsh_Fir_reg_c53_;
  SEXP Rsh_Fir_reg_s_kinds7_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_r130_;
  SEXP Rsh_Fir_reg_r131_;
  SEXP Rsh_Fir_reg_c54_;
  SEXP Rsh_Fir_reg_s_kinds9_;
  SEXP Rsh_Fir_reg_r133_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_s_kinds11_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r134_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r135_;
  SEXP Rsh_Fir_reg_c55_;
  SEXP Rsh_Fir_reg_r136_;
  SEXP Rsh_Fir_reg_do_set2_;
  SEXP Rsh_Fir_reg_do_set3_;
  SEXP Rsh_Fir_reg_c56_;
  SEXP Rsh_Fir_reg_c57_;
  SEXP Rsh_Fir_reg_sym20_;
  SEXP Rsh_Fir_reg_base20_;
  SEXP Rsh_Fir_reg_guard20_;
  SEXP Rsh_Fir_reg_r137_;
  SEXP Rsh_Fir_reg_c61_;
  SEXP Rsh_Fir_reg_r138_;
  SEXP Rsh_Fir_reg_normal_kind22_;
  SEXP Rsh_Fir_reg_normal_kind23_;
  SEXP Rsh_Fir_reg_c62_;
  SEXP Rsh_Fir_reg_r139_;
  SEXP Rsh_Fir_reg_c63_;
  SEXP Rsh_Fir_reg_c64_;
  SEXP Rsh_Fir_reg_c66_;
  SEXP Rsh_Fir_reg_c67_;
  SEXP Rsh_Fir_reg_sym21_;
  SEXP Rsh_Fir_reg_base21_;
  SEXP Rsh_Fir_reg_guard21_;
  SEXP Rsh_Fir_reg_r140_;
  SEXP Rsh_Fir_reg_c71_;
  SEXP Rsh_Fir_reg_r141_;
  SEXP Rsh_Fir_reg_sample_kind22_;
  SEXP Rsh_Fir_reg_sample_kind23_;
  SEXP Rsh_Fir_reg_c72_;
  SEXP Rsh_Fir_reg_r142_;
  SEXP Rsh_Fir_reg_c73_;
  SEXP Rsh_Fir_reg_c74_;
  SEXP Rsh_Fir_reg_c76_;
  SEXP Rsh_Fir_reg_sym22_;
  SEXP Rsh_Fir_reg_base22_;
  SEXP Rsh_Fir_reg_guard22_;
  SEXP Rsh_Fir_reg_r143_;
  SEXP Rsh_Fir_reg_r144_;
  SEXP Rsh_Fir_reg_r145_;
  SEXP Rsh_Fir_reg_r146_;
  SEXP Rsh_Fir_reg_invisible;
  SEXP Rsh_Fir_reg_r147_;
  SEXP Rsh_Fir_reg_r148_;
  SEXP Rsh_Fir_reg_r149_;

  // Bind parameters
  Rsh_Fir_reg_kind = PARAMS[0];
  Rsh_Fir_reg_normal_kind = PARAMS[1];
  Rsh_Fir_reg_sample_kind = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // kind_isMissing = missing.0(kind)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_kind;
  Rsh_Fir_reg_kind_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if kind_isMissing then L0(NULL) else L0(kind)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_kind_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_kind_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(kind)
    Rsh_Fir_reg_kind_orDefault = Rsh_Fir_reg_kind;
    goto L0_;
  }

L0_:;
  // st kind = kind_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_kind_orDefault, RHO);
  (void)(Rsh_Fir_reg_kind_orDefault);
  // normal_kind_isMissing = missing.0(normal_kind)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_normal_kind;
  Rsh_Fir_reg_normal_kind_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if normal_kind_isMissing then L1(NULL) else L1(normal_kind)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_normal_kind_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_normal_kind_orDefault = Rsh_const(CCP, 1);
    goto L1_;
  } else {
  // L1(normal_kind)
    Rsh_Fir_reg_normal_kind_orDefault = Rsh_Fir_reg_normal_kind;
    goto L1_;
  }

L1_:;
  // st `normal.kind` = normal_kind_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_normal_kind_orDefault, RHO);
  (void)(Rsh_Fir_reg_normal_kind_orDefault);
  // sample_kind_isMissing = missing.0(sample_kind)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sample_kind;
  Rsh_Fir_reg_sample_kind_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if sample_kind_isMissing then L2(NULL) else L2(sample_kind)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_sample_kind_isMissing)) {
  // L2(NULL)
    Rsh_Fir_reg_sample_kind_orDefault = Rsh_const(CCP, 1);
    goto L2_;
  } else {
  // L2(sample_kind)
    Rsh_Fir_reg_sample_kind_orDefault = Rsh_Fir_reg_sample_kind;
    goto L2_;
  }

L2_:;
  // st `sample.kind` = sample_kind_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_sample_kind_orDefault, RHO);
  (void)(Rsh_Fir_reg_sample_kind_orDefault);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L3_:;
  // st kinds = r1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L4_:;
  // st `n.kinds` = r4
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard2 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L5_:;
  // st `s.kinds` = r7
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard3 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L6_:;
  // r12 = `>`(r10, 0)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args7);
  // st `do.set` = r12
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // do_set = ld `do.set`
  Rsh_Fir_reg_do_set = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L79() else D5()
  // L79()
  goto L79_;

L7_:;
  // st `i.knd` = NULL
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_const(CCP, 1), RHO);
  (void)(Rsh_const(CCP, 1));
  // goto L19()
  // L19()
  goto L19_;

L8_:;
  // r15 = `!`(r14)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args8);
  // c5 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args9);
  // if c5 then L9(c5) else L84()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L9(c5)
    Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c5_;
    goto L9_;
  } else {
  // L84()
    goto L84_;
  }

L9_:;
  // c14 = `as.logical`(c6)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args10);
  // if c14 then L90() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L90()
    goto L90_;
  } else {
  // L11()
    goto L11_;
  }

L10_:;
  // r19 = `>`(r17, 1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args11);
  // c11 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // c12 = `||`(c10, c11)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args13);
  // goto L9(c12)
  // L9(c12)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c12_;
  goto L9_;

L11_:;
  // goto L12()
  // L12()
  goto L12_;

L12_:;
  // sym6 = ldf `is.na`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base6 = ldf `is.na` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard6 then L94() else L95()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L94()
    goto L94_;
  } else {
  // L95()
    goto L95_;
  }

L13_:;
  // c15 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args15);
  // if c15 then L99() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L99()
    goto L99_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // i_knd = ld `i.knd`
  Rsh_Fir_reg_i_knd = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L103() else D16()
  // L103()
  goto L103_;

L16_:;
  // r37 = `-`(r35, 1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args16);
  // r38 = `==`(i_knd4, r37)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_i_knd4_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args17);
  // c16 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args18);
  // if c16 then L108() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L108()
    goto L108_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // goto L18(NULL)
  // L18(NULL)
  Rsh_Fir_reg_r39_ = Rsh_const(CCP, 1);
  goto L18_;

L18_:;
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // sym8 = ldf `is.null`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base8 = ldf `is.null` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard8 then L111() else L112()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L111()
    goto L111_;
  } else {
  // L112()
    goto L112_;
  }

L20_:;
  // r43 = `!`(r42)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args20);
  // c18 = `as.logical`(r43)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args21);
  // if c18 then L114() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L114()
    goto L114_;
  } else {
  // L21()
    goto L21_;
  }

L21_:;
  // goto L35()
  // L35()
  goto L35_;

L22_:;
  // r46 = `!`(r45)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args22);
  // c20 = `as.logical`(r46)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args23);
  // if c20 then L23(c20) else L118()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L23(c20)
    Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c20_;
    goto L23_;
  } else {
  // L118()
    goto L118_;
  }

L23_:;
  // c29 = `as.logical`(c21)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args24);
  // if c29 then L124() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L124()
    goto L124_;
  } else {
  // L25()
    goto L25_;
  }

L24_:;
  // r50 = `!=`(r48, 1)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args25);
  // c26 = `as.logical`(r50)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args26);
  // c27 = `||`(c25, c26)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_c25_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args27);
  // goto L23(c27)
  // L23(c27)
  Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c27_;
  goto L23_;

L25_:;
  // goto L26()
  // L26()
  goto L26_;

L26_:;
  // pmatch1 = ldf pmatch
  Rsh_Fir_reg_pmatch1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L128() else D25()
  // L128()
  goto L128_;

L27_:;
  // c30 = `as.logical`(r58)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args28);
  // if c30 then L134() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L134()
    goto L134_;
  } else {
  // L28()
    goto L28_;
  }

L28_:;
  // goto L29()
  // L29()
  goto L29_;

L29_:;
  // normal_kind13 = ld `normal.kind`
  Rsh_Fir_reg_normal_kind13_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L138() else D31()
  // L138()
  goto L138_;

L30_:;
  // goto L31()
  // L31()
  goto L31_;

L31_:;
  // normal_kind15 = ld `normal.kind`
  Rsh_Fir_reg_normal_kind15_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L143() else D34()
  // L143()
  goto L143_;

L32_:;
  // r71 = `-`(r69, 1)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args29);
  // r72 = `==`(normal_kind19, r71)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_normal_kind19_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_r71_;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args30);
  // c32 = `as.logical`(r72)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args31);
  // if c32 then L148() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L148()
    goto L148_;
  } else {
  // L33()
    goto L33_;
  }

L33_:;
  // goto L34(NULL)
  // L34(NULL)
  Rsh_Fir_reg_r73_ = Rsh_const(CCP, 1);
  goto L34_;

L34_:;
  // goto L35()
  // L35()
  goto L35_;

L35_:;
  // sym13 = ldf `is.null`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base13 = ldf `is.null` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard13 then L151() else L152()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L151()
    goto L151_;
  } else {
  // L152()
    goto L152_;
  }

L36_:;
  // r77 = `!`(r76)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args33);
  // c34 = `as.logical`(r77)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args34);
  // if c34 then L154() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L154()
    goto L154_;
  } else {
  // L37()
    goto L37_;
  }

L37_:;
  // goto L51()
  // L51()
  goto L51_;

L38_:;
  // r80 = `!`(r79)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args35);
  // c36 = `as.logical`(r80)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args36);
  // if c36 then L39(c36) else L158()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L39(c36)
    Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c36_;
    goto L39_;
  } else {
  // L158()
    goto L158_;
  }

L39_:;
  // c45 = `as.logical`(c37)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_c37_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args37);
  // if c45 then L164() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L164()
    goto L164_;
  } else {
  // L41()
    goto L41_;
  }

L40_:;
  // r84 = `!=`(r82, 1)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args38);
  // c42 = `as.logical`(r84)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args39);
  // c43 = `||`(c41, c42)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_c41_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_c42_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args40);
  // goto L39(c43)
  // L39(c43)
  Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c43_;
  goto L39_;

L41_:;
  // goto L42()
  // L42()
  goto L42_;

L42_:;
  // pmatch2 = ldf pmatch
  Rsh_Fir_reg_pmatch2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L168() else D43()
  // L168()
  goto L168_;

L43_:;
  // c46 = `as.logical`(r92)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args41);
  // if c46 then L174() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L174()
    goto L174_;
  } else {
  // L44()
    goto L44_;
  }

L44_:;
  // goto L45()
  // L45()
  goto L45_;

L45_:;
  // sample_kind13 = ld `sample.kind`
  Rsh_Fir_reg_sample_kind13_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L178() else D49()
  // L178()
  goto L178_;

L46_:;
  // goto L47()
  // L47()
  goto L47_;

L47_:;
  // sample_kind15 = ld `sample.kind`
  Rsh_Fir_reg_sample_kind15_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L183() else D52()
  // L183()
  goto L183_;

L48_:;
  // r105 = `-`(r103, 1)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r103_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args42);
  // r106 = `==`(sample_kind19, r105)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sample_kind19_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_r105_;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args43);
  // c48 = `as.logical`(r106)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r106_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args44);
  // if c48 then L188() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c48_)) {
  // L188()
    goto L188_;
  } else {
  // L49()
    goto L49_;
  }

L49_:;
  // goto L50(NULL)
  // L50(NULL)
  Rsh_Fir_reg_r107_ = Rsh_const(CCP, 1);
  goto L50_;

L50_:;
  // goto L51()
  // L51()
  goto L51_;

L51_:;
  // sym18 = ldf `.Internal`
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base18 = ldf `.Internal` in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard18 then L191() else L192()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L191()
    goto L191_;
  } else {
  // L192()
    goto L192_;
  }

L52_:;
  // r115 = `+`(r112, r113)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r112_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_r113_;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args46);
  // st r = r115
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r115_, RHO);
  (void)(Rsh_Fir_reg_r115_);
  // sym19 = ldf c
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base19 = ldf c in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard19 then L197() else L198()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L197()
    goto L197_;
  } else {
  // L198()
    goto L198_;
  }

L53_:;
  // st r = r117
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r117_, RHO);
  (void)(Rsh_Fir_reg_r117_);
  // do_set2 = ld `do.set`
  Rsh_Fir_reg_do_set2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L224() else D66()
  // L224()
  goto L224_;

L54_:;
  // n_kinds4 = ld `n.kinds`
  Rsh_Fir_reg_n_kinds4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L207() else D61()
  // L207()
  goto L207_;

L55_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r123 = dyn __1(kinds11, dx3)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_kinds11_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r123_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L54(r123)
  // L54(r123)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r123_;
  goto L54_;

L56_:;
  // s_kinds4 = ld `s.kinds`
  Rsh_Fir_reg_s_kinds4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L215() else D63()
  // L215()
  goto L215_;

L57_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r129 = dyn __3(n_kinds11, dx7)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_n_kinds11_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r129_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L56(r129)
  // L56(r129)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r129_;
  goto L56_;

L58_:;
  // c55 = ldf c in base
  Rsh_Fir_reg_c55_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r136 = dyn c55(dx1, dx5, dx9)
  SEXP Rsh_Fir_array_args50[3];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args50[2] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r136_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c55_, 3, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L223() else D65()
  // L223()
  goto L223_;

L59_:;
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r135 = dyn __5(s_kinds11, dx11)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_s_kinds11_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r135_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L58(r135)
  // L58(r135)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r135_;
  goto L58_;

L60_:;
  // c66 = `as.logical`(c57)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_c57_;
  Rsh_Fir_reg_c66_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args52);
  // if c66 then L62(c66) else L230()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c66_)) {
  // L62(c66)
    Rsh_Fir_reg_c67_ = Rsh_Fir_reg_c66_;
    goto L62_;
  } else {
  // L230()
    goto L230_;
  }

L61_:;
  // r139 = `!`(r138)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r138_;
  Rsh_Fir_reg_r139_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args53);
  // c63 = `as.logical`(r139)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r139_;
  Rsh_Fir_reg_c63_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args54);
  // c64 = `||`(c61, c63)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_c61_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_c63_;
  Rsh_Fir_reg_c64_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args55);
  // goto L60(c64)
  // L60(c64)
  Rsh_Fir_reg_c57_ = Rsh_Fir_reg_c64_;
  goto L60_;

L62_:;
  // c76 = `as.logical`(c67)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_c67_;
  Rsh_Fir_reg_c76_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args56);
  // if c76 then L235() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c76_)) {
  // L235()
    goto L235_;
  } else {
  // L64()
    goto L64_;
  }

L63_:;
  // r142 = `!`(r141)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r141_;
  Rsh_Fir_reg_r142_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args57);
  // c73 = `as.logical`(r142)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r142_;
  Rsh_Fir_reg_c73_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args58);
  // c74 = `||`(c71, c73)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_c71_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_c73_;
  Rsh_Fir_reg_c74_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args59);
  // goto L62(c74)
  // L62(c74)
  Rsh_Fir_reg_c67_ = Rsh_Fir_reg_c74_;
  goto L62_;

L64_:;
  // r148 = ld r
  Rsh_Fir_reg_r148_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L241() else D71()
  // L241()
  goto L241_;

L65_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r144
  return Rsh_Fir_reg_r144_;

L66_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r2 = dyn c("Wichmann-Hill", "Marsaglia-Multicarry", "Super-Duper", "Mersenne-Twister", "Knuth-TAOCP", "user-supplied", "Knuth-TAOCP-2002", "L'Ecuyer-CMRG", "default")
  SEXP Rsh_Fir_array_args60[9];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args60[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args60[3] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args60[4] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args60[5] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args60[6] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args60[7] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args60[8] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names4[9];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_array_arg_names4[4] = R_MissingArg;
  Rsh_Fir_array_arg_names4[5] = R_MissingArg;
  Rsh_Fir_array_arg_names4[6] = R_MissingArg;
  Rsh_Fir_array_arg_names4[7] = R_MissingArg;
  Rsh_Fir_array_arg_names4[8] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 9, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L68() else D0()
  // L68()
  goto L68_;

L67_:;
  // r = dyn base("Wichmann-Hill", "Marsaglia-Multicarry", "Super-Duper", "Mersenne-Twister", "Knuth-TAOCP", "user-supplied", "Knuth-TAOCP-2002", "L'Ecuyer-CMRG", "default")
  SEXP Rsh_Fir_array_args61[9];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args61[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args61[3] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args61[4] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args61[5] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args61[6] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args61[7] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args61[8] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names5[9];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_array_arg_names5[4] = R_MissingArg;
  Rsh_Fir_array_arg_names5[5] = R_MissingArg;
  Rsh_Fir_array_arg_names5[6] = R_MissingArg;
  Rsh_Fir_array_arg_names5[7] = R_MissingArg;
  Rsh_Fir_array_arg_names5[8] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 9, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L3_;

D0_:;
  // deopt 12 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L3_;

L69_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r5 = dyn c1("Buggy Kinderman-Ramage", "Ahrens-Dieter", "Box-Muller", "user-supplied", "Inversion", "Kinderman-Ramage", "default")
  SEXP Rsh_Fir_array_args62[7];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args62[2] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args62[3] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args62[4] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args62[5] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args62[6] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names6[7];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_array_arg_names6[4] = R_MissingArg;
  Rsh_Fir_array_arg_names6[5] = R_MissingArg;
  Rsh_Fir_array_arg_names6[6] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 7, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L71() else D1()
  // L71()
  goto L71_;

L70_:;
  // r3 = dyn base1("Buggy Kinderman-Ramage", "Ahrens-Dieter", "Box-Muller", "user-supplied", "Inversion", "Kinderman-Ramage", "default")
  SEXP Rsh_Fir_array_args63[7];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args63[2] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args63[3] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args63[4] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args63[5] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args63[6] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names7[7];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_array_arg_names7[4] = R_MissingArg;
  Rsh_Fir_array_arg_names7[5] = R_MissingArg;
  Rsh_Fir_array_arg_names7[6] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 7, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L4(r3)
  // L4(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L4_;

D1_:;
  // deopt 24 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L71_:;
  // goto L4(r5)
  // L4(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L4_;

L72_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r8 = dyn c2("Rounding", "Rejection", "default")
  SEXP Rsh_Fir_array_args64[3];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args64[2] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 3, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L74() else D2()
  // L74()
  goto L74_;

L73_:;
  // r6 = dyn base2("Rounding", "Rejection", "default")
  SEXP Rsh_Fir_array_args65[3];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args65[2] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 3, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L5(r6)
  // L5(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L5_;

D2_:;
  // deopt 32 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L5_;

L75_:;
  // kind1 = ld kind
  Rsh_Fir_reg_kind1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L77() else D3()
  // L77()
  goto L77_;

L76_:;
  // r9 = dyn base3(<sym kind>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6(r9)
  // L6(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L6_;

D3_:;
  // deopt 36 [kind1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_kind1_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L77_:;
  // kind2 = force? kind1
  Rsh_Fir_reg_kind2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_kind1_);
  // checkMissing(kind2)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_kind2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r11 = dyn length(kind2)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_kind2_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L78() else D4()
  // L78()
  goto L78_;

D4_:;
  // deopt 39 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L78_:;
  // goto L6(r11)
  // L6(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L6_;

D5_:;
  // deopt 43 [do_set]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_do_set;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L79_:;
  // do_set1 = force? do_set
  Rsh_Fir_reg_do_set1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_do_set);
  // checkMissing(do_set1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_do_set1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // c3 = `as.logical`(do_set1)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_do_set1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args70);
  // if c3 then L80() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L80()
    goto L80_;
  } else {
  // L7()
    goto L7_;
  }

L80_:;
  // sym4 = ldf `is.character`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base4 = ldf `is.character` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args71);
  // if guard4 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L81_:;
  // kind3 = ld kind
  Rsh_Fir_reg_kind3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L83() else D6()
  // L83()
  goto L83_;

L82_:;
  // r13 = dyn base4(<sym kind>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L8(r13)
  // L8(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L8_;

D6_:;
  // deopt 46 [kind3]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_kind3_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L83_:;
  // kind4 = force? kind3
  Rsh_Fir_reg_kind4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_kind3_);
  // checkMissing(kind4)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_kind4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // c4 = `is.character`(kind4)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_kind4_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args74);
  // goto L8(c4)
  // L8(c4)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_c4_;
  goto L8_;

L84_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard5 then L85() else L86()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L85()
    goto L85_;
  } else {
  // L86()
    goto L86_;
  }

L85_:;
  // kind5 = ld kind
  Rsh_Fir_reg_kind5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L87() else D7()
  // L87()
  goto L87_;

L86_:;
  // r16 = dyn base5(<sym kind>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L10(c5, r16)
  // L10(c5, r16)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L10_;

D7_:;
  // deopt 52 [c5, kind5]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_kind5_;
  Rsh_Fir_deopt(52, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L87_:;
  // kind6 = force? kind5
  Rsh_Fir_reg_kind6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_kind5_);
  // checkMissing(kind6)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_kind6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r18 = dyn length1(kind6)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_kind6_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L88() else D8()
  // L88()
  goto L88_;

D8_:;
  // deopt 55 [c5, r18]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(55, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L88_:;
  // goto L10(c5, r18)
  // L10(c5, r18)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L10_;

L90_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L91() else D9()
  // L91()
  goto L91_;

D9_:;
  // deopt 60 []
  Rsh_Fir_deopt(60, 0, NULL, CCP, RHO);
  return R_NilValue;

L91_:;
  // r20 = dyn stop("'kind' must be a character string of length 1 (RNG to be used).")
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L92() else D10()
  // L92()
  goto L92_;

D10_:;
  // deopt 62 [r20]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L92_:;
  // goto L12()
  // L12()
  goto L12_;

L94_:;
  // pmatch = ldf pmatch
  Rsh_Fir_reg_pmatch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L96() else D11()
  // L96()
  goto L96_;

L95_:;
  // r22 = dyn base6(<lang `<-`(i.knd, `-`(pmatch(kind, kinds), 1))>)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L13(r22)
  // L13(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L13_;

D11_:;
  // deopt 68 []
  Rsh_Fir_deopt(68, 0, NULL, CCP, RHO);
  return R_NilValue;

L96_:;
  // p = prom<V +>{
  //   kind7 = ld kind;
  //   kind8 = force? kind7;
  //   checkMissing(kind8);
  //   return kind8;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3938378601_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   kinds = ld kinds;
  //   kinds1 = force? kinds;
  //   checkMissing(kinds1);
  //   return kinds1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3938378601_1, 0, NULL, CCP, RHO);
  // r26 = dyn pmatch(p, p1)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmatch, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L97() else D12()
  // L97()
  goto L97_;

D12_:;
  // deopt 71 [r26]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L97_:;
  // r27 = `-`(r26, 1)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args84);
  // st `i.knd` = r27
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r28 = dyn is_na(r27)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L98() else D13()
  // L98()
  goto L98_;

D13_:;
  // deopt 76 [r28]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L98_:;
  // goto L13(r28)
  // L13(r28)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r28_;
  goto L13_;

L99_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L100() else D14()
  // L100()
  goto L100_;

D14_:;
  // deopt 78 []
  Rsh_Fir_deopt(78, 0, NULL, CCP, RHO);
  return R_NilValue;

L100_:;
  // p3 = prom<V +>{
  //   gettextf = ldf gettextf;
  //   p2 = prom<V +>{
  //     kind9 = ld kind;
  //     kind10 = force? kind9;
  //     checkMissing(kind10);
  //     return kind10;
  //   };
  //   r30 = dyn gettextf("'%s' is not a valid abbreviation of an RNG", p2);
  //   return r30;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3938378601_2, 0, NULL, CCP, RHO);
  // r32 = dyn stop1[, domain](p3, NA_LGL)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L101() else D15()
  // L101()
  goto L101_;

D15_:;
  // deopt 82 [r32]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L101_:;
  // goto L15()
  // L15()
  goto L15_;

D16_:;
  // deopt 85 [i_knd]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i_knd;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L103_:;
  // i_knd1 = force? i_knd
  Rsh_Fir_reg_i_knd1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i_knd);
  // checkMissing(i_knd1)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_i_knd1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // sym7 = ldf length
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base7 = ldf length in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args90);
  // if guard7 then L104() else L105()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L104()
    goto L104_;
  } else {
  // L105()
    goto L105_;
  }

L104_:;
  // kinds2 = ld kinds
  Rsh_Fir_reg_kinds2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L106() else D17()
  // L106()
  goto L106_;

L105_:;
  // r34 = dyn base7(<sym kinds>)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L16(i_knd1, r34)
  // L16(i_knd1, r34)
  Rsh_Fir_reg_i_knd4_ = Rsh_Fir_reg_i_knd1_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L16_;

D17_:;
  // deopt 88 [i_knd1, kinds2]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i_knd1_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_kinds2_;
  Rsh_Fir_deopt(88, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L106_:;
  // kinds3 = force? kinds2
  Rsh_Fir_reg_kinds3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_kinds2_);
  // checkMissing(kinds3)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_kinds3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r36 = dyn length2(kinds3)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_kinds3_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L107() else D18()
  // L107()
  goto L107_;

D18_:;
  // deopt 91 [i_knd1, r36]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i_knd1_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(91, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L107_:;
  // goto L16(i_knd1, r36)
  // L16(i_knd1, r36)
  Rsh_Fir_reg_i_knd4_ = Rsh_Fir_reg_i_knd1_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L16_;

L108_:;
  // st `i.knd` = -1
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_const(CCP, 44), RHO);
  (void)(Rsh_const(CCP, 44));
  // goto L18(-1)
  // L18(-1)
  Rsh_Fir_reg_r39_ = Rsh_const(CCP, 44);
  goto L18_;

L111_:;
  // normal_kind1 = ld `normal.kind`
  Rsh_Fir_reg_normal_kind1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L113() else D19()
  // L113()
  goto L113_;

L112_:;
  // r41 = dyn base8(<sym normal.kind>)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L20(r41)
  // L20(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L20_;

D19_:;
  // deopt 104 [normal_kind1]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_normal_kind1_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L113_:;
  // normal_kind2 = force? normal_kind1
  Rsh_Fir_reg_normal_kind2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_normal_kind1_);
  // checkMissing(normal_kind2)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_normal_kind2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // c17 = `==`(normal_kind2, NULL)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_normal_kind2_;
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args96);
  // goto L20(c17)
  // L20(c17)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_c17_;
  goto L20_;

L114_:;
  // sym9 = ldf `is.character`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base9 = ldf `is.character` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args97);
  // if guard9 then L115() else L116()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L115()
    goto L115_;
  } else {
  // L116()
    goto L116_;
  }

L115_:;
  // normal_kind3 = ld `normal.kind`
  Rsh_Fir_reg_normal_kind3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L117() else D20()
  // L117()
  goto L117_;

L116_:;
  // r44 = dyn base9(<sym normal.kind>)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L22(r44)
  // L22(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L22_;

D20_:;
  // deopt 109 [normal_kind3]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_normal_kind3_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L117_:;
  // normal_kind4 = force? normal_kind3
  Rsh_Fir_reg_normal_kind4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_normal_kind3_);
  // checkMissing(normal_kind4)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_normal_kind4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // c19 = `is.character`(normal_kind4)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_normal_kind4_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args100);
  // goto L22(c19)
  // L22(c19)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_c19_;
  goto L22_;

L118_:;
  // sym10 = ldf length
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base10 = ldf length in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args101);
  // if guard10 then L119() else L120()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L119()
    goto L119_;
  } else {
  // L120()
    goto L120_;
  }

L119_:;
  // normal_kind5 = ld `normal.kind`
  Rsh_Fir_reg_normal_kind5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L121() else D21()
  // L121()
  goto L121_;

L120_:;
  // r47 = dyn base10(<sym normal.kind>)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L24(c20, r47)
  // L24(c20, r47)
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L24_;

D21_:;
  // deopt 115 [c20, normal_kind5]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_normal_kind5_;
  Rsh_Fir_deopt(115, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L121_:;
  // normal_kind6 = force? normal_kind5
  Rsh_Fir_reg_normal_kind6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_normal_kind5_);
  // checkMissing(normal_kind6)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_normal_kind6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r49 = dyn length3(normal_kind6)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_normal_kind6_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L122() else D22()
  // L122()
  goto L122_;

D22_:;
  // deopt 118 [c20, r49]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(118, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L122_:;
  // goto L24(c20, r49)
  // L24(c20, r49)
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r49_;
  goto L24_;

L124_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L125() else D23()
  // L125()
  goto L125_;

D23_:;
  // deopt 123 []
  Rsh_Fir_deopt(123, 0, NULL, CCP, RHO);
  return R_NilValue;

L125_:;
  // r51 = dyn stop2("'normal.kind' must be a character string of length 1")
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L126() else D24()
  // L126()
  goto L126_;

D24_:;
  // deopt 125 [r51]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L126_:;
  // goto L26()
  // L26()
  goto L26_;

D25_:;
  // deopt 129 []
  Rsh_Fir_deopt(129, 0, NULL, CCP, RHO);
  return R_NilValue;

L128_:;
  // p4 = prom<V +>{
  //   normal_kind7 = ld `normal.kind`;
  //   normal_kind8 = force? normal_kind7;
  //   checkMissing(normal_kind8);
  //   return normal_kind8;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3938378601_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   n_kinds = ld `n.kinds`;
  //   n_kinds1 = force? n_kinds;
  //   checkMissing(n_kinds1);
  //   return n_kinds1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3938378601_5, 0, NULL, CCP, RHO);
  // r55 = dyn pmatch1(p4, p5)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmatch1_, 2, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L129() else D26()
  // L129()
  goto L129_;

D26_:;
  // deopt 132 [r55]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L129_:;
  // r56 = `-`(r55, 1)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_args109[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args109);
  // st `normal.kind` = r56
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r56_, RHO);
  (void)(Rsh_Fir_reg_r56_);
  // sym11 = ldf `is.na`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base11 = ldf `is.na` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args110);
  // if guard11 then L130() else L131()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L130()
    goto L130_;
  } else {
  // L131()
    goto L131_;
  }

L130_:;
  // normal_kind9 = ld `normal.kind`
  Rsh_Fir_reg_normal_kind9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L132() else D27()
  // L132()
  goto L132_;

L131_:;
  // r57 = dyn base11(<sym normal.kind>)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L27(r57)
  // L27(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L27_;

D27_:;
  // deopt 138 [normal_kind9]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_normal_kind9_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L132_:;
  // normal_kind10 = force? normal_kind9
  Rsh_Fir_reg_normal_kind10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_normal_kind9_);
  // checkMissing(normal_kind10)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_normal_kind10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r59 = dyn is_na1(normal_kind10)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_normal_kind10_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L133() else D28()
  // L133()
  goto L133_;

D28_:;
  // deopt 141 [r59]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L133_:;
  // goto L27(r59)
  // L27(r59)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r59_;
  goto L27_;

L134_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L135() else D29()
  // L135()
  goto L135_;

D29_:;
  // deopt 143 []
  Rsh_Fir_deopt(143, 0, NULL, CCP, RHO);
  return R_NilValue;

L135_:;
  // p7 = prom<V +>{
  //   gettextf1 = ldf gettextf;
  //   p6 = prom<V +>{
  //     normal_kind11 = ld `normal.kind`;
  //     normal_kind12 = force? normal_kind11;
  //     checkMissing(normal_kind12);
  //     return normal_kind12;
  //   };
  //   r61 = dyn gettextf1("'%s' is not a valid choice", p6);
  //   return r61;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3938378601_6, 0, NULL, CCP, RHO);
  // r63 = dyn stop3[, domain](p7, NA_LGL)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args116[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 2, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L136() else D30()
  // L136()
  goto L136_;

D30_:;
  // deopt 147 [r63]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(147, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L136_:;
  // goto L29()
  // L29()
  goto L29_;

D31_:;
  // deopt 150 [normal_kind13]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_normal_kind13_;
  Rsh_Fir_deopt(150, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L138_:;
  // normal_kind14 = force? normal_kind13
  Rsh_Fir_reg_normal_kind14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_normal_kind13_);
  // checkMissing(normal_kind14)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_normal_kind14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // r65 = `==`(normal_kind14, 0)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_normal_kind14_;
  Rsh_Fir_array_args118[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args118);
  // c31 = `as.logical`(r65)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args119);
  // if c31 then L139() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L139()
    goto L139_;
  } else {
  // L30()
    goto L30_;
  }

L139_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L140() else D32()
  // L140()
  goto L140_;

D32_:;
  // deopt 155 []
  Rsh_Fir_deopt(155, 0, NULL, CCP, RHO);
  return R_NilValue;

L140_:;
  // r66 = dyn warning[, domain]("buggy version of Kinderman-Ramage generator used", NA_LGL)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args120[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 2, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L141() else D33()
  // L141()
  goto L141_;

D33_:;
  // deopt 159 [r66]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(159, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L141_:;
  // goto L31()
  // L31()
  goto L31_;

D34_:;
  // deopt 162 [normal_kind15]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_normal_kind15_;
  Rsh_Fir_deopt(162, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L143_:;
  // normal_kind16 = force? normal_kind15
  Rsh_Fir_reg_normal_kind16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_normal_kind15_);
  // checkMissing(normal_kind16)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_normal_kind16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty()));
  // sym12 = ldf length
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base12 = ldf length in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args122);
  // if guard12 then L144() else L145()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L144()
    goto L144_;
  } else {
  // L145()
    goto L145_;
  }

L144_:;
  // n_kinds2 = ld `n.kinds`
  Rsh_Fir_reg_n_kinds2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L146() else D35()
  // L146()
  goto L146_;

L145_:;
  // r68 = dyn base12(<sym n.kinds>)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L32(normal_kind16, r68)
  // L32(normal_kind16, r68)
  Rsh_Fir_reg_normal_kind19_ = Rsh_Fir_reg_normal_kind16_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r68_;
  goto L32_;

D35_:;
  // deopt 165 [normal_kind16, n_kinds2]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_normal_kind16_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_n_kinds2_;
  Rsh_Fir_deopt(165, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L146_:;
  // n_kinds3 = force? n_kinds2
  Rsh_Fir_reg_n_kinds3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_kinds2_);
  // checkMissing(n_kinds3)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_n_kinds3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r70 = dyn length4(n_kinds3)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_n_kinds3_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L147() else D36()
  // L147()
  goto L147_;

D36_:;
  // deopt 168 [normal_kind16, r70]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_normal_kind16_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r70_;
  Rsh_Fir_deopt(168, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L147_:;
  // goto L32(normal_kind16, r70)
  // L32(normal_kind16, r70)
  Rsh_Fir_reg_normal_kind19_ = Rsh_Fir_reg_normal_kind16_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r70_;
  goto L32_;

L148_:;
  // st `normal.kind` = -1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_const(CCP, 44), RHO);
  (void)(Rsh_const(CCP, 44));
  // goto L34(-1)
  // L34(-1)
  Rsh_Fir_reg_r73_ = Rsh_const(CCP, 44);
  goto L34_;

L151_:;
  // sample_kind1 = ld `sample.kind`
  Rsh_Fir_reg_sample_kind1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L153() else D37()
  // L153()
  goto L153_;

L152_:;
  // r75 = dyn base13(<sym sample.kind>)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L36(r75)
  // L36(r75)
  Rsh_Fir_reg_r76_ = Rsh_Fir_reg_r75_;
  goto L36_;

D37_:;
  // deopt 180 [sample_kind1]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_sample_kind1_;
  Rsh_Fir_deopt(180, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L153_:;
  // sample_kind2 = force? sample_kind1
  Rsh_Fir_reg_sample_kind2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sample_kind1_);
  // checkMissing(sample_kind2)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_sample_kind2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // c33 = `==`(sample_kind2, NULL)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_sample_kind2_;
  Rsh_Fir_array_args128[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args128);
  // goto L36(c33)
  // L36(c33)
  Rsh_Fir_reg_r76_ = Rsh_Fir_reg_c33_;
  goto L36_;

L154_:;
  // sym14 = ldf `is.character`
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base14 = ldf `is.character` in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args129);
  // if guard14 then L155() else L156()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L155()
    goto L155_;
  } else {
  // L156()
    goto L156_;
  }

L155_:;
  // sample_kind3 = ld `sample.kind`
  Rsh_Fir_reg_sample_kind3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L157() else D38()
  // L157()
  goto L157_;

L156_:;
  // r78 = dyn base14(<sym sample.kind>)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L38(r78)
  // L38(r78)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r78_;
  goto L38_;

D38_:;
  // deopt 185 [sample_kind3]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_sample_kind3_;
  Rsh_Fir_deopt(185, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L157_:;
  // sample_kind4 = force? sample_kind3
  Rsh_Fir_reg_sample_kind4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sample_kind3_);
  // checkMissing(sample_kind4)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_sample_kind4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // c35 = `is.character`(sample_kind4)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_sample_kind4_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args132);
  // goto L38(c35)
  // L38(c35)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_c35_;
  goto L38_;

L158_:;
  // sym15 = ldf length
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base15 = ldf length in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args133);
  // if guard15 then L159() else L160()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L159()
    goto L159_;
  } else {
  // L160()
    goto L160_;
  }

L159_:;
  // sample_kind5 = ld `sample.kind`
  Rsh_Fir_reg_sample_kind5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L161() else D39()
  // L161()
  goto L161_;

L160_:;
  // r81 = dyn base15(<sym sample.kind>)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L40(c36, r81)
  // L40(c36, r81)
  Rsh_Fir_reg_c41_ = Rsh_Fir_reg_c36_;
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r81_;
  goto L40_;

D39_:;
  // deopt 191 [c36, sample_kind5]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_c36_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_sample_kind5_;
  Rsh_Fir_deopt(191, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L161_:;
  // sample_kind6 = force? sample_kind5
  Rsh_Fir_reg_sample_kind6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sample_kind5_);
  // checkMissing(sample_kind6)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_sample_kind6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // length5 = ldf length in base
  Rsh_Fir_reg_length5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r83 = dyn length5(sample_kind6)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_sample_kind6_;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length5_, 1, Rsh_Fir_array_args136, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L162() else D40()
  // L162()
  goto L162_;

D40_:;
  // deopt 194 [c36, r83]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_c36_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(194, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L162_:;
  // goto L40(c36, r83)
  // L40(c36, r83)
  Rsh_Fir_reg_c41_ = Rsh_Fir_reg_c36_;
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r83_;
  goto L40_;

L164_:;
  // stop4 = ldf stop
  Rsh_Fir_reg_stop4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L165() else D41()
  // L165()
  goto L165_;

D41_:;
  // deopt 199 []
  Rsh_Fir_deopt(199, 0, NULL, CCP, RHO);
  return R_NilValue;

L165_:;
  // r85 = dyn stop4("'sample.kind' must be a character string of length 1")
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop4_, 1, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L166() else D42()
  // L166()
  goto L166_;

D42_:;
  // deopt 201 [r85]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_deopt(201, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L166_:;
  // goto L42()
  // L42()
  goto L42_;

D43_:;
  // deopt 205 []
  Rsh_Fir_deopt(205, 0, NULL, CCP, RHO);
  return R_NilValue;

L168_:;
  // p8 = prom<V +>{
  //   sample_kind7 = ld `sample.kind`;
  //   sample_kind8 = force? sample_kind7;
  //   checkMissing(sample_kind8);
  //   return sample_kind8;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3938378601_8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   s_kinds = ld `s.kinds`;
  //   s_kinds1 = force? s_kinds;
  //   checkMissing(s_kinds1);
  //   return s_kinds1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3938378601_9, 0, NULL, CCP, RHO);
  // r89 = dyn pmatch2(p8, p9)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args140[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmatch2_, 2, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L169() else D44()
  // L169()
  goto L169_;

D44_:;
  // deopt 208 [r89]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(208, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L169_:;
  // r90 = `-`(r89, 1)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_array_args141[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args141);
  // st `sample.kind` = r90
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r90_, RHO);
  (void)(Rsh_Fir_reg_r90_);
  // sym16 = ldf `is.na`
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base16 = ldf `is.na` in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args142);
  // if guard16 then L170() else L171()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L170()
    goto L170_;
  } else {
  // L171()
    goto L171_;
  }

L170_:;
  // sample_kind9 = ld `sample.kind`
  Rsh_Fir_reg_sample_kind9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L172() else D45()
  // L172()
  goto L172_;

L171_:;
  // r91 = dyn base16(<sym sample.kind>)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L43(r91)
  // L43(r91)
  Rsh_Fir_reg_r92_ = Rsh_Fir_reg_r91_;
  goto L43_;

D45_:;
  // deopt 214 [sample_kind9]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_sample_kind9_;
  Rsh_Fir_deopt(214, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L172_:;
  // sample_kind10 = force? sample_kind9
  Rsh_Fir_reg_sample_kind10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sample_kind9_);
  // checkMissing(sample_kind10)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_sample_kind10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty()));
  // is_na2 = ldf `is.na` in base
  Rsh_Fir_reg_is_na2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r93 = dyn is_na2(sample_kind10)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_sample_kind10_;
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na2_, 1, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L173() else D46()
  // L173()
  goto L173_;

D46_:;
  // deopt 217 [r93]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_deopt(217, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L173_:;
  // goto L43(r93)
  // L43(r93)
  Rsh_Fir_reg_r92_ = Rsh_Fir_reg_r93_;
  goto L43_;

L174_:;
  // stop5 = ldf stop
  Rsh_Fir_reg_stop5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L175() else D47()
  // L175()
  goto L175_;

D47_:;
  // deopt 219 []
  Rsh_Fir_deopt(219, 0, NULL, CCP, RHO);
  return R_NilValue;

L175_:;
  // p11 = prom<V +>{
  //   gettextf2 = ldf gettextf;
  //   p10 = prom<V +>{
  //     sample_kind11 = ld `sample.kind`;
  //     sample_kind12 = force? sample_kind11;
  //     checkMissing(sample_kind12);
  //     return sample_kind12;
  //   };
  //   r95 = dyn gettextf2("'%s' is not a valid choice", p10);
  //   return r95;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3938378601_10, 0, NULL, CCP, RHO);
  // r97 = dyn stop5[, domain](p11, NA_LGL)
  SEXP Rsh_Fir_array_args148[2];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args148[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop5_, 2, Rsh_Fir_array_args148, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L176() else D48()
  // L176()
  goto L176_;

D48_:;
  // deopt 223 [r97]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_deopt(223, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L176_:;
  // goto L45()
  // L45()
  goto L45_;

D49_:;
  // deopt 226 [sample_kind13]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_sample_kind13_;
  Rsh_Fir_deopt(226, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L178_:;
  // sample_kind14 = force? sample_kind13
  Rsh_Fir_reg_sample_kind14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sample_kind13_);
  // checkMissing(sample_kind14)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_sample_kind14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty()));
  // r99 = `==`(sample_kind14, 0)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_sample_kind14_;
  Rsh_Fir_array_args150[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args150);
  // c47 = `as.logical`(r99)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_r99_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args151);
  // if c47 then L179() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L179()
    goto L179_;
  } else {
  // L46()
    goto L46_;
  }

L179_:;
  // warning1 = ldf warning
  Rsh_Fir_reg_warning1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L180() else D50()
  // L180()
  goto L180_;

D50_:;
  // deopt 231 []
  Rsh_Fir_deopt(231, 0, NULL, CCP, RHO);
  return R_NilValue;

L180_:;
  // r100 = dyn warning1[, domain]("non-uniform 'Rounding' sampler used", NA_LGL)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args152[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names46[2];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning1_, 2, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L181() else D51()
  // L181()
  goto L181_;

D51_:;
  // deopt 235 [r100]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_deopt(235, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L181_:;
  // goto L47()
  // L47()
  goto L47_;

D52_:;
  // deopt 238 [sample_kind15]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_sample_kind15_;
  Rsh_Fir_deopt(238, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L183_:;
  // sample_kind16 = force? sample_kind15
  Rsh_Fir_reg_sample_kind16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sample_kind15_);
  // checkMissing(sample_kind16)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_sample_kind16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty()));
  // sym17 = ldf length
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base17 = ldf length in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args154[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args154);
  // if guard17 then L184() else L185()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L184()
    goto L184_;
  } else {
  // L185()
    goto L185_;
  }

L184_:;
  // s_kinds2 = ld `s.kinds`
  Rsh_Fir_reg_s_kinds2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L186() else D53()
  // L186()
  goto L186_;

L185_:;
  // r102 = dyn base17(<sym s.kinds>)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L48(sample_kind16, r102)
  // L48(sample_kind16, r102)
  Rsh_Fir_reg_sample_kind19_ = Rsh_Fir_reg_sample_kind16_;
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r102_;
  goto L48_;

D53_:;
  // deopt 241 [sample_kind16, s_kinds2]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_sample_kind16_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_s_kinds2_;
  Rsh_Fir_deopt(241, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L186_:;
  // s_kinds3 = force? s_kinds2
  Rsh_Fir_reg_s_kinds3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s_kinds2_);
  // checkMissing(s_kinds3)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_s_kinds3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // length6 = ldf length in base
  Rsh_Fir_reg_length6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r104 = dyn length6(s_kinds3)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_s_kinds3_;
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length6_, 1, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L187() else D54()
  // L187()
  goto L187_;

D54_:;
  // deopt 244 [sample_kind16, r104]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_sample_kind16_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_r104_;
  Rsh_Fir_deopt(244, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L187_:;
  // goto L48(sample_kind16, r104)
  // L48(sample_kind16, r104)
  Rsh_Fir_reg_sample_kind19_ = Rsh_Fir_reg_sample_kind16_;
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r104_;
  goto L48_;

L188_:;
  // st `sample.kind` = -1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_const(CCP, 44), RHO);
  (void)(Rsh_const(CCP, 44));
  // goto L50(-1)
  // L50(-1)
  Rsh_Fir_reg_r107_ = Rsh_const(CCP, 44);
  goto L50_;

L191_:;
  // i_knd5 = ld `i.knd`
  Rsh_Fir_reg_i_knd5_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L193() else D55()
  // L193()
  goto L193_;

L192_:;
  // r111 = dyn base18(<lang RNGkind(i.knd, normal.kind, sample.kind)>)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L52(1, r111)
  // L52(1, r111)
  Rsh_Fir_reg_r112_ = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r113_ = Rsh_Fir_reg_r111_;
  goto L52_;

D55_:;
  // deopt 258 [1, i_knd5]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_i_knd5_;
  Rsh_Fir_deopt(258, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L193_:;
  // i_knd6 = force? i_knd5
  Rsh_Fir_reg_i_knd6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i_knd5_);
  // checkMissing(i_knd6)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_i_knd6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // normal_kind20 = ld `normal.kind`
  Rsh_Fir_reg_normal_kind20_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L194() else D56()
  // L194()
  goto L194_;

D56_:;
  // deopt 260 [1, normal_kind20]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_normal_kind20_;
  Rsh_Fir_deopt(260, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L194_:;
  // normal_kind21 = force? normal_kind20
  Rsh_Fir_reg_normal_kind21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_normal_kind20_);
  // checkMissing(normal_kind21)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_normal_kind21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty()));
  // sample_kind20 = ld `sample.kind`
  Rsh_Fir_reg_sample_kind20_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L195() else D57()
  // L195()
  goto L195_;

D57_:;
  // deopt 262 [1, sample_kind20]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_sample_kind20_;
  Rsh_Fir_deopt(262, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L195_:;
  // sample_kind21 = force? sample_kind20
  Rsh_Fir_reg_sample_kind21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sample_kind20_);
  // checkMissing(sample_kind21)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_sample_kind21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty()));
  // RNGkind = ldf RNGkind in base
  Rsh_Fir_reg_RNGkind = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r114 = dyn RNGkind(i_knd6, normal_kind21, sample_kind21)
  SEXP Rsh_Fir_array_args162[3];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_i_knd6_;
  Rsh_Fir_array_args162[1] = Rsh_Fir_reg_normal_kind21_;
  Rsh_Fir_array_args162[2] = Rsh_Fir_reg_sample_kind21_;
  SEXP Rsh_Fir_array_arg_names50[3];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_array_arg_names50[2] = R_MissingArg;
  Rsh_Fir_reg_r114_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_RNGkind, 3, Rsh_Fir_array_args162, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L196() else D58()
  // L196()
  goto L196_;

D58_:;
  // deopt 265 [1, r114]
  SEXP Rsh_Fir_array_deopt_stack47[2];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_r114_;
  Rsh_Fir_deopt(265, 2, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L196_:;
  // goto L52(1, r114)
  // L52(1, r114)
  Rsh_Fir_reg_r112_ = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r113_ = Rsh_Fir_reg_r114_;
  goto L52_;

L197_:;
  // kinds4 = ld kinds
  Rsh_Fir_reg_kinds4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L199() else D59()
  // L199()
  goto L199_;

L198_:;
  // r116 = dyn base19(<lang `[`(kinds, `[`(r, 1))>, <lang `[`(n.kinds, `[`(r, 2))>, <lang `[`(s.kinds, `[`(r, 3))>)
  SEXP Rsh_Fir_array_args163[3];
  Rsh_Fir_array_args163[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args163[1] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args163[2] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names51[3];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_array_arg_names51[2] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 3, Rsh_Fir_array_args163, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L53(r116)
  // L53(r116)
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r116_;
  goto L53_;

D59_:;
  // deopt 270 [kinds4]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_kinds4_;
  Rsh_Fir_deopt(270, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L199_:;
  // kinds5 = force? kinds4
  Rsh_Fir_reg_kinds5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_kinds4_);
  // checkMissing(kinds5)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_kinds5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // c49 = `is.object`(kinds5)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_kinds5_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args165);
  // if c49 then L200() else L201(kinds5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c49_)) {
  // L200()
    goto L200_;
  } else {
  // L201(kinds5)
    Rsh_Fir_reg_kinds7_ = Rsh_Fir_reg_kinds5_;
    goto L201_;
  }

L200_:;
  // dr = tryDispatchBuiltin.1("[", kinds5)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_kinds5_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args166);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty());
  // if dc then L202() else L201(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L202()
    goto L202_;
  } else {
  // L201(dr)
    Rsh_Fir_reg_kinds7_ = Rsh_Fir_reg_dr;
    goto L201_;
  }

L201_:;
  // r118 = ld r
  Rsh_Fir_reg_r118_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L203() else D60()
  // L203()
  goto L203_;

L202_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty());
  // goto L54(dx)
  // L54(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L54_;

D60_:;
  // deopt 272 [kinds7, r118]
  SEXP Rsh_Fir_array_deopt_stack49[2];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_kinds7_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_r118_;
  Rsh_Fir_deopt(272, 2, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L203_:;
  // r119 = force? r118
  Rsh_Fir_reg_r119_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r118_);
  // checkMissing(r119)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_r119_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty()));
  // c50 = `is.object`(r119)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_r119_;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args170);
  // if c50 then L204() else L205(kinds7, r119)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c50_)) {
  // L204()
    goto L204_;
  } else {
  // L205(kinds7, r119)
    Rsh_Fir_reg_kinds9_ = Rsh_Fir_reg_kinds7_;
    Rsh_Fir_reg_r121_ = Rsh_Fir_reg_r119_;
    goto L205_;
  }

L204_:;
  // dr2 = tryDispatchBuiltin.1("[", r119)
  SEXP Rsh_Fir_array_args171[2];
  Rsh_Fir_array_args171[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args171[1] = Rsh_Fir_reg_r119_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args171);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty());
  // if dc1 then L206() else L205(kinds7, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L206()
    goto L206_;
  } else {
  // L205(kinds7, dr2)
    Rsh_Fir_reg_kinds9_ = Rsh_Fir_reg_kinds7_;
    Rsh_Fir_reg_r121_ = Rsh_Fir_reg_dr2_;
    goto L205_;
  }

L205_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r122 = dyn __(r121, 1)
  SEXP Rsh_Fir_array_args173[2];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_r121_;
  Rsh_Fir_array_args173[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names52[2];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args173, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L55(kinds9, r122)
  // L55(kinds9, r122)
  Rsh_Fir_reg_kinds11_ = Rsh_Fir_reg_kinds9_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r122_;
  goto L55_;

L206_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty());
  // goto L55(kinds7, dx2)
  // L55(kinds7, dx2)
  Rsh_Fir_reg_kinds11_ = Rsh_Fir_reg_kinds7_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L55_;

D61_:;
  // deopt 278 [n_kinds4]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_n_kinds4_;
  Rsh_Fir_deopt(278, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L207_:;
  // n_kinds5 = force? n_kinds4
  Rsh_Fir_reg_n_kinds5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_kinds4_);
  // checkMissing(n_kinds5)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_n_kinds5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty()));
  // c51 = `is.object`(n_kinds5)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_n_kinds5_;
  Rsh_Fir_reg_c51_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args176);
  // if c51 then L208() else L209(n_kinds5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c51_)) {
  // L208()
    goto L208_;
  } else {
  // L209(n_kinds5)
    Rsh_Fir_reg_n_kinds7_ = Rsh_Fir_reg_n_kinds5_;
    goto L209_;
  }

L208_:;
  // dr4 = tryDispatchBuiltin.1("[", n_kinds5)
  SEXP Rsh_Fir_array_args177[2];
  Rsh_Fir_array_args177[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args177[1] = Rsh_Fir_reg_n_kinds5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args177);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty());
  // if dc2 then L210() else L209(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L210()
    goto L210_;
  } else {
  // L209(dr4)
    Rsh_Fir_reg_n_kinds7_ = Rsh_Fir_reg_dr4_;
    goto L209_;
  }

L209_:;
  // r124 = ld r
  Rsh_Fir_reg_r124_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L211() else D62()
  // L211()
  goto L211_;

L210_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty());
  // goto L56(dx4)
  // L56(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L56_;

D62_:;
  // deopt 280 [n_kinds7, r124]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_n_kinds7_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_r124_;
  Rsh_Fir_deopt(280, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L211_:;
  // r125 = force? r124
  Rsh_Fir_reg_r125_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r124_);
  // checkMissing(r125)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_r125_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty()));
  // c52 = `is.object`(r125)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_r125_;
  Rsh_Fir_reg_c52_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args181);
  // if c52 then L212() else L213(n_kinds7, r125)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c52_)) {
  // L212()
    goto L212_;
  } else {
  // L213(n_kinds7, r125)
    Rsh_Fir_reg_n_kinds9_ = Rsh_Fir_reg_n_kinds7_;
    Rsh_Fir_reg_r127_ = Rsh_Fir_reg_r125_;
    goto L213_;
  }

L212_:;
  // dr6 = tryDispatchBuiltin.1("[", r125)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_r125_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args182);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty());
  // if dc3 then L214() else L213(n_kinds7, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L214()
    goto L214_;
  } else {
  // L213(n_kinds7, dr6)
    Rsh_Fir_reg_n_kinds9_ = Rsh_Fir_reg_n_kinds7_;
    Rsh_Fir_reg_r127_ = Rsh_Fir_reg_dr6_;
    goto L213_;
  }

L213_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r128 = dyn __2(r127, 2)
  SEXP Rsh_Fir_array_args184[2];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_r127_;
  Rsh_Fir_array_args184[1] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names53[2];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_reg_r128_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args184, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L57(n_kinds9, r128)
  // L57(n_kinds9, r128)
  Rsh_Fir_reg_n_kinds11_ = Rsh_Fir_reg_n_kinds9_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r128_;
  goto L57_;

L214_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty());
  // goto L57(n_kinds7, dx6)
  // L57(n_kinds7, dx6)
  Rsh_Fir_reg_n_kinds11_ = Rsh_Fir_reg_n_kinds7_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L57_;

D63_:;
  // deopt 286 [s_kinds4]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_s_kinds4_;
  Rsh_Fir_deopt(286, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L215_:;
  // s_kinds5 = force? s_kinds4
  Rsh_Fir_reg_s_kinds5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s_kinds4_);
  // checkMissing(s_kinds5)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_s_kinds5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty()));
  // c53 = `is.object`(s_kinds5)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_s_kinds5_;
  Rsh_Fir_reg_c53_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args187);
  // if c53 then L216() else L217(s_kinds5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c53_)) {
  // L216()
    goto L216_;
  } else {
  // L217(s_kinds5)
    Rsh_Fir_reg_s_kinds7_ = Rsh_Fir_reg_s_kinds5_;
    goto L217_;
  }

L216_:;
  // dr8 = tryDispatchBuiltin.1("[", s_kinds5)
  SEXP Rsh_Fir_array_args188[2];
  Rsh_Fir_array_args188[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args188[1] = Rsh_Fir_reg_s_kinds5_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args188);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty());
  // if dc4 then L218() else L217(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L218()
    goto L218_;
  } else {
  // L217(dr8)
    Rsh_Fir_reg_s_kinds7_ = Rsh_Fir_reg_dr8_;
    goto L217_;
  }

L217_:;
  // r130 = ld r
  Rsh_Fir_reg_r130_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L219() else D64()
  // L219()
  goto L219_;

L218_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty());
  // goto L58(dx8)
  // L58(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L58_;

D64_:;
  // deopt 288 [s_kinds7, r130]
  SEXP Rsh_Fir_array_deopt_stack53[2];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_s_kinds7_;
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_r130_;
  Rsh_Fir_deopt(288, 2, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L219_:;
  // r131 = force? r130
  Rsh_Fir_reg_r131_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r130_);
  // checkMissing(r131)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_r131_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args191, Rsh_Fir_param_types_empty()));
  // c54 = `is.object`(r131)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_r131_;
  Rsh_Fir_reg_c54_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args192);
  // if c54 then L220() else L221(s_kinds7, r131)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c54_)) {
  // L220()
    goto L220_;
  } else {
  // L221(s_kinds7, r131)
    Rsh_Fir_reg_s_kinds9_ = Rsh_Fir_reg_s_kinds7_;
    Rsh_Fir_reg_r133_ = Rsh_Fir_reg_r131_;
    goto L221_;
  }

L220_:;
  // dr10 = tryDispatchBuiltin.1("[", r131)
  SEXP Rsh_Fir_array_args193[2];
  Rsh_Fir_array_args193[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args193[1] = Rsh_Fir_reg_r131_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args193);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args194, Rsh_Fir_param_types_empty());
  // if dc5 then L222() else L221(s_kinds7, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L222()
    goto L222_;
  } else {
  // L221(s_kinds7, dr10)
    Rsh_Fir_reg_s_kinds9_ = Rsh_Fir_reg_s_kinds7_;
    Rsh_Fir_reg_r133_ = Rsh_Fir_reg_dr10_;
    goto L221_;
  }

L221_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r134 = dyn __4(r133, 3)
  SEXP Rsh_Fir_array_args195[2];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_r133_;
  Rsh_Fir_array_args195[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names54[2];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_reg_r134_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args195, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L59(s_kinds9, r134)
  // L59(s_kinds9, r134)
  Rsh_Fir_reg_s_kinds11_ = Rsh_Fir_reg_s_kinds9_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r134_;
  goto L59_;

L222_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty());
  // goto L59(s_kinds7, dx10)
  // L59(s_kinds7, dx10)
  Rsh_Fir_reg_s_kinds11_ = Rsh_Fir_reg_s_kinds7_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L59_;

D65_:;
  // deopt 295 [r136]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_r136_;
  Rsh_Fir_deopt(295, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L223_:;
  // goto L53(r136)
  // L53(r136)
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r136_;
  goto L53_;

D66_:;
  // deopt 297 [do_set2]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_do_set2_;
  Rsh_Fir_deopt(297, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L224_:;
  // do_set3 = force? do_set2
  Rsh_Fir_reg_do_set3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_do_set2_);
  // checkMissing(do_set3)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_do_set3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty()));
  // c56 = `as.logical`(do_set3)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_do_set3_;
  Rsh_Fir_reg_c56_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args198);
  // if c56 then L60(c56) else L225()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c56_)) {
  // L60(c56)
    Rsh_Fir_reg_c57_ = Rsh_Fir_reg_c56_;
    goto L60_;
  } else {
  // L225()
    goto L225_;
  }

L225_:;
  // sym20 = ldf `is.null`
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base20 = ldf `is.null` in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args199[2];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args199[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args199);
  // if guard20 then L226() else L227()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L226()
    goto L226_;
  } else {
  // L227()
    goto L227_;
  }

L226_:;
  // normal_kind22 = ld `normal.kind`
  Rsh_Fir_reg_normal_kind22_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L228() else D67()
  // L228()
  goto L228_;

L227_:;
  // r137 = dyn base20(<sym normal.kind>)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names55[1];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_reg_r137_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 1, Rsh_Fir_array_args200, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L61(c56, r137)
  // L61(c56, r137)
  Rsh_Fir_reg_c61_ = Rsh_Fir_reg_c56_;
  Rsh_Fir_reg_r138_ = Rsh_Fir_reg_r137_;
  goto L61_;

D67_:;
  // deopt 300 [c56, normal_kind22]
  SEXP Rsh_Fir_array_deopt_stack56[2];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_c56_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_normal_kind22_;
  Rsh_Fir_deopt(300, 2, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L228_:;
  // normal_kind23 = force? normal_kind22
  Rsh_Fir_reg_normal_kind23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_normal_kind22_);
  // checkMissing(normal_kind23)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_normal_kind23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty()));
  // c62 = `==`(normal_kind23, NULL)
  SEXP Rsh_Fir_array_args202[2];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_normal_kind23_;
  Rsh_Fir_array_args202[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_c62_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args202);
  // goto L61(c56, c62)
  // L61(c56, c62)
  Rsh_Fir_reg_c61_ = Rsh_Fir_reg_c56_;
  Rsh_Fir_reg_r138_ = Rsh_Fir_reg_c62_;
  goto L61_;

L230_:;
  // sym21 = ldf `is.null`
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base21 = ldf `is.null` in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args203[2];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args203[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args203);
  // if guard21 then L231() else L232()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L231()
    goto L231_;
  } else {
  // L232()
    goto L232_;
  }

L231_:;
  // sample_kind22 = ld `sample.kind`
  Rsh_Fir_reg_sample_kind22_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L233() else D68()
  // L233()
  goto L233_;

L232_:;
  // r140 = dyn base21(<sym sample.kind>)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 1, Rsh_Fir_array_args204, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L63(c66, r140)
  // L63(c66, r140)
  Rsh_Fir_reg_c71_ = Rsh_Fir_reg_c66_;
  Rsh_Fir_reg_r141_ = Rsh_Fir_reg_r140_;
  goto L63_;

D68_:;
  // deopt 306 [c66, sample_kind22]
  SEXP Rsh_Fir_array_deopt_stack57[2];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_c66_;
  Rsh_Fir_array_deopt_stack57[1] = Rsh_Fir_reg_sample_kind22_;
  Rsh_Fir_deopt(306, 2, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L233_:;
  // sample_kind23 = force? sample_kind22
  Rsh_Fir_reg_sample_kind23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sample_kind22_);
  // checkMissing(sample_kind23)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_sample_kind23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args205, Rsh_Fir_param_types_empty()));
  // c72 = `==`(sample_kind23, NULL)
  SEXP Rsh_Fir_array_args206[2];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_sample_kind23_;
  Rsh_Fir_array_args206[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_c72_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args206);
  // goto L63(c66, c72)
  // L63(c66, c72)
  Rsh_Fir_reg_c71_ = Rsh_Fir_reg_c66_;
  Rsh_Fir_reg_r141_ = Rsh_Fir_reg_c72_;
  goto L63_;

L235_:;
  // sym22 = ldf invisible
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // base22 = ldf invisible in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args207[2];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args207[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args207);
  // if guard22 then L236() else L237()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L236()
    goto L236_;
  } else {
  // L237()
    goto L237_;
  }

L236_:;
  // r145 = ld r
  Rsh_Fir_reg_r145_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L238() else D69()
  // L238()
  goto L238_;

L237_:;
  // r143 = dyn base22(<sym r>)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names57[1];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_reg_r143_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 1, Rsh_Fir_array_args208, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L65(r143)
  // L65(r143)
  Rsh_Fir_reg_r144_ = Rsh_Fir_reg_r143_;
  goto L65_;

D69_:;
  // deopt 313 [r145]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r145_;
  Rsh_Fir_deopt(313, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L238_:;
  // r146 = force? r145
  Rsh_Fir_reg_r146_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r145_);
  // checkMissing(r146)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_r146_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty()));
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r147 = dyn invisible(r146)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_r146_;
  SEXP Rsh_Fir_array_arg_names58[1];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_reg_r147_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args210, Rsh_Fir_array_arg_names58, CCP, RHO);
  // check L239() else D70()
  // L239()
  goto L239_;

D70_:;
  // deopt 316 [r147]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_r147_;
  Rsh_Fir_deopt(316, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L239_:;
  // goto L65(r147)
  // L65(r147)
  Rsh_Fir_reg_r144_ = Rsh_Fir_reg_r147_;
  goto L65_;

D71_:;
  // deopt 317 [r148]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_r148_;
  Rsh_Fir_deopt(317, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L241_:;
  // r149 = force? r148
  Rsh_Fir_reg_r149_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r148_);
  // checkMissing(r149)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_r149_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r149
  return Rsh_Fir_reg_r149_;
}
SEXP Rsh_Fir_user_promise_inner3938378601_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_kind7_;
  SEXP Rsh_Fir_reg_kind8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3938378601/0: expected 0, got %d", NCAPTURES);

  // kind7 = ld kind
  Rsh_Fir_reg_kind7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // kind8 = force? kind7
  Rsh_Fir_reg_kind8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_kind7_);
  // checkMissing(kind8)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_kind8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // return kind8
  return Rsh_Fir_reg_kind8_;
}
SEXP Rsh_Fir_user_promise_inner3938378601_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_kinds;
  SEXP Rsh_Fir_reg_kinds1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3938378601/0: expected 0, got %d", NCAPTURES);

  // kinds = ld kinds
  Rsh_Fir_reg_kinds = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // kinds1 = force? kinds
  Rsh_Fir_reg_kinds1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_kinds);
  // checkMissing(kinds1)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_kinds1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // return kinds1
  return Rsh_Fir_reg_kinds1_;
}
SEXP Rsh_Fir_user_promise_inner3938378601_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r30_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3938378601/0: expected 0, got %d", NCAPTURES);

  // gettextf = ldf gettextf
  Rsh_Fir_reg_gettextf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // p2 = prom<V +>{
  //   kind9 = ld kind;
  //   kind10 = force? kind9;
  //   checkMissing(kind10);
  //   return kind10;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3938378601_3, 0, NULL, CCP, RHO);
  // r30 = dyn gettextf("'%s' is not a valid abbreviation of an RNG", p2)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf, 2, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names19, CCP, RHO);
  // return r30
  return Rsh_Fir_reg_r30_;
}
SEXP Rsh_Fir_user_promise_inner3938378601_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_kind9_;
  SEXP Rsh_Fir_reg_kind10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3938378601/0: expected 0, got %d", NCAPTURES);

  // kind9 = ld kind
  Rsh_Fir_reg_kind9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // kind10 = force? kind9
  Rsh_Fir_reg_kind10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_kind9_);
  // checkMissing(kind10)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_kind10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // return kind10
  return Rsh_Fir_reg_kind10_;
}
SEXP Rsh_Fir_user_promise_inner3938378601_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_normal_kind7_;
  SEXP Rsh_Fir_reg_normal_kind8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3938378601/0: expected 0, got %d", NCAPTURES);

  // normal_kind7 = ld `normal.kind`
  Rsh_Fir_reg_normal_kind7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // normal_kind8 = force? normal_kind7
  Rsh_Fir_reg_normal_kind8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_normal_kind7_);
  // checkMissing(normal_kind8)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_normal_kind8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // return normal_kind8
  return Rsh_Fir_reg_normal_kind8_;
}
SEXP Rsh_Fir_user_promise_inner3938378601_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_n_kinds;
  SEXP Rsh_Fir_reg_n_kinds1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3938378601/0: expected 0, got %d", NCAPTURES);

  // n_kinds = ld `n.kinds`
  Rsh_Fir_reg_n_kinds = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // n_kinds1 = force? n_kinds
  Rsh_Fir_reg_n_kinds1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_kinds);
  // checkMissing(n_kinds1)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_n_kinds1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // return n_kinds1
  return Rsh_Fir_reg_n_kinds1_;
}
SEXP Rsh_Fir_user_promise_inner3938378601_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r61_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3938378601/0: expected 0, got %d", NCAPTURES);

  // gettextf1 = ldf gettextf
  Rsh_Fir_reg_gettextf1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // p6 = prom<V +>{
  //   normal_kind11 = ld `normal.kind`;
  //   normal_kind12 = force? normal_kind11;
  //   checkMissing(normal_kind12);
  //   return normal_kind12;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3938378601_7, 0, NULL, CCP, RHO);
  // r61 = dyn gettextf1("'%s' is not a valid choice", p6)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf1_, 2, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names31, CCP, RHO);
  // return r61
  return Rsh_Fir_reg_r61_;
}
SEXP Rsh_Fir_user_promise_inner3938378601_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_normal_kind11_;
  SEXP Rsh_Fir_reg_normal_kind12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3938378601/0: expected 0, got %d", NCAPTURES);

  // normal_kind11 = ld `normal.kind`
  Rsh_Fir_reg_normal_kind11_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // normal_kind12 = force? normal_kind11
  Rsh_Fir_reg_normal_kind12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_normal_kind11_);
  // checkMissing(normal_kind12)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_normal_kind12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // return normal_kind12
  return Rsh_Fir_reg_normal_kind12_;
}
SEXP Rsh_Fir_user_promise_inner3938378601_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sample_kind7_;
  SEXP Rsh_Fir_reg_sample_kind8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3938378601/0: expected 0, got %d", NCAPTURES);

  // sample_kind7 = ld `sample.kind`
  Rsh_Fir_reg_sample_kind7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // sample_kind8 = force? sample_kind7
  Rsh_Fir_reg_sample_kind8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sample_kind7_);
  // checkMissing(sample_kind8)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_sample_kind8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty()));
  // return sample_kind8
  return Rsh_Fir_reg_sample_kind8_;
}
SEXP Rsh_Fir_user_promise_inner3938378601_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_s_kinds;
  SEXP Rsh_Fir_reg_s_kinds1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3938378601/0: expected 0, got %d", NCAPTURES);

  // s_kinds = ld `s.kinds`
  Rsh_Fir_reg_s_kinds = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // s_kinds1 = force? s_kinds
  Rsh_Fir_reg_s_kinds1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s_kinds);
  // checkMissing(s_kinds1)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_s_kinds1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // return s_kinds1
  return Rsh_Fir_reg_s_kinds1_;
}
SEXP Rsh_Fir_user_promise_inner3938378601_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf2_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r95_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3938378601/0: expected 0, got %d", NCAPTURES);

  // gettextf2 = ldf gettextf
  Rsh_Fir_reg_gettextf2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // p10 = prom<V +>{
  //   sample_kind11 = ld `sample.kind`;
  //   sample_kind12 = force? sample_kind11;
  //   checkMissing(sample_kind12);
  //   return sample_kind12;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3938378601_11, 0, NULL, CCP, RHO);
  // r95 = dyn gettextf2("'%s' is not a valid choice", p10)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf2_, 2, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names44, CCP, RHO);
  // return r95
  return Rsh_Fir_reg_r95_;
}
SEXP Rsh_Fir_user_promise_inner3938378601_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sample_kind11_;
  SEXP Rsh_Fir_reg_sample_kind12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3938378601/0: expected 0, got %d", NCAPTURES);

  // sample_kind11 = ld `sample.kind`
  Rsh_Fir_reg_sample_kind11_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // sample_kind12 = force? sample_kind11
  Rsh_Fir_reg_sample_kind12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sample_kind11_);
  // checkMissing(sample_kind12)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_sample_kind12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty()));
  // return sample_kind12
  return Rsh_Fir_reg_sample_kind12_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
