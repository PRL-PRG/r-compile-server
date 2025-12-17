#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1047316782_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1047316782_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1047316782_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1047316782_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1047316782_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1047316782_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1047316782_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1047316782_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1047316782_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1047316782_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1047316782_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1047316782_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1047316782_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1047316782_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1047316782_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  // r = clos inner1047316782
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1047316782_, RHO, CCP);
  // st `.kappa_tri` = r
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
SEXP Rsh_Fir_user_function_inner1047316782_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1047316782 dynamic dispatch ([z, exact, LINPACK, norm, uplo, `...`])

  return Rsh_Fir_user_version_inner1047316782_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1047316782_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1047316782 version 0 (*, *, *, *, *, dots -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner1047316782/0: expected 6, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_z;
  SEXP Rsh_Fir_reg_exact;
  SEXP Rsh_Fir_reg_LINPACK;
  SEXP Rsh_Fir_reg_norm;
  SEXP Rsh_Fir_reg_uplo;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_exact_isMissing;
  SEXP Rsh_Fir_reg_exact_orDefault;
  SEXP Rsh_Fir_reg_LINPACK_isMissing;
  SEXP Rsh_Fir_reg_LINPACK_orDefault;
  SEXP Rsh_Fir_reg_norm_isMissing;
  SEXP Rsh_Fir_reg_norm_orDefault;
  SEXP Rsh_Fir_reg_uplo_isMissing;
  SEXP Rsh_Fir_reg_uplo_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_z1_;
  SEXP Rsh_Fir_reg_z2_;
  SEXP Rsh_Fir_reg_dim;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_all;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_exact1_;
  SEXP Rsh_Fir_reg_exact2_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_norm1_;
  SEXP Rsh_Fir_reg_norm2_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_norm3_;
  SEXP Rsh_Fir_reg_norm4_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_svd;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_s1_;
  SEXP Rsh_Fir_reg_max;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_s2_;
  SEXP Rsh_Fir_reg_s3_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_s5_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_s6_;
  SEXP Rsh_Fir_reg_s7_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_min;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_norm5_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_norm8_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_nrow;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_as_integer;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_ncol;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_norm11_;
  SEXP Rsh_Fir_reg_norm12_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_norm13_;
  SEXP Rsh_Fir_reg_norm14_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_toupper;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_match;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_warning1_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_z13_;
  SEXP Rsh_Fir_reg_z14_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_z15_;
  SEXP Rsh_Fir_reg_z16_;
  SEXP Rsh_Fir_reg_norm19_;
  SEXP Rsh_Fir_reg_norm20_;
  SEXP Rsh_Fir_reg_uplo1_;
  SEXP Rsh_Fir_reg_uplo2_;
  SEXP Rsh_Fir_reg_La_ztrcon3_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_LINPACK1_;
  SEXP Rsh_Fir_reg_LINPACK2_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_norm21_;
  SEXP Rsh_Fir_reg_norm22_;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_t;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_storage_mode__;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg__F_dtrco;
  SEXP Rsh_Fir_reg__F_dtrco1_;
  SEXP Rsh_Fir_reg_z19_;
  SEXP Rsh_Fir_reg_z20_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_double;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_double1_;
  SEXP Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_reg_uplo3_;
  SEXP Rsh_Fir_reg_uplo4_;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_r102_;
  SEXP Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_reg__Fortran;
  SEXP Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_r107_;
  SEXP Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_r110_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_reg_r112_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_reg_r116_;
  SEXP Rsh_Fir_reg_r117_;
  SEXP Rsh_Fir_reg_z21_;
  SEXP Rsh_Fir_reg_z22_;
  SEXP Rsh_Fir_reg_norm23_;
  SEXP Rsh_Fir_reg_norm24_;
  SEXP Rsh_Fir_reg_uplo5_;
  SEXP Rsh_Fir_reg_uplo6_;
  SEXP Rsh_Fir_reg_La_dtrcon3_;
  SEXP Rsh_Fir_reg_r118_;
  SEXP Rsh_Fir_reg_r119_;

  // Bind parameters
  Rsh_Fir_reg_z = PARAMS[0];
  Rsh_Fir_reg_exact = PARAMS[1];
  Rsh_Fir_reg_LINPACK = PARAMS[2];
  Rsh_Fir_reg_norm = PARAMS[3];
  Rsh_Fir_reg_uplo = PARAMS[4];
  Rsh_Fir_reg_ddd = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st z = z
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_z, RHO);
  (void)(Rsh_Fir_reg_z);
  // exact_isMissing = missing.0(exact)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_exact;
  Rsh_Fir_reg_exact_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if exact_isMissing then L0(FALSE) else L0(exact)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_exact_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_exact_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(exact)
    Rsh_Fir_reg_exact_orDefault = Rsh_Fir_reg_exact;
    goto L0_;
  }

L0_:;
  // st exact = exact_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_exact_orDefault, RHO);
  (void)(Rsh_Fir_reg_exact_orDefault);
  // LINPACK_isMissing = missing.0(LINPACK)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_LINPACK;
  Rsh_Fir_reg_LINPACK_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if LINPACK_isMissing then L1(TRUE) else L1(LINPACK)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_LINPACK_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_LINPACK_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(LINPACK)
    Rsh_Fir_reg_LINPACK_orDefault = Rsh_Fir_reg_LINPACK;
    goto L1_;
  }

L1_:;
  // st LINPACK = LINPACK_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_LINPACK_orDefault, RHO);
  (void)(Rsh_Fir_reg_LINPACK_orDefault);
  // norm_isMissing = missing.0(norm)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_norm;
  Rsh_Fir_reg_norm_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if norm_isMissing then L2(NULL) else L2(norm)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_norm_isMissing)) {
  // L2(NULL)
    Rsh_Fir_reg_norm_orDefault = Rsh_const(CCP, 6);
    goto L2_;
  } else {
  // L2(norm)
    Rsh_Fir_reg_norm_orDefault = Rsh_Fir_reg_norm;
    goto L2_;
  }

L2_:;
  // st norm = norm_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_norm_orDefault, RHO);
  (void)(Rsh_Fir_reg_norm_orDefault);
  // uplo_isMissing = missing.0(uplo)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_uplo;
  Rsh_Fir_reg_uplo_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if uplo_isMissing then L3("U") else L3(uplo)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_uplo_isMissing)) {
  // L3("U")
    Rsh_Fir_reg_uplo_orDefault = Rsh_const(CCP, 8);
    goto L3_;
  } else {
  // L3(uplo)
    Rsh_Fir_reg_uplo_orDefault = Rsh_Fir_reg_uplo;
    goto L3_;
  }

L3_:;
  // st uplo = uplo_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_uplo_orDefault, RHO);
  (void)(Rsh_Fir_reg_uplo_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf all
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base = ldf all in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L4_:;
  // r6 = `!`(r1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args5);
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args6);
  // if c then L46() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L46()
    goto L46_;
  } else {
  // L6()
    goto L6_;
  }

L5_:;
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r5 = dyn all(r3)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L45() else D2()
  // L45()
  goto L45_;

L6_:;
  // exact1 = ld exact
  Rsh_Fir_reg_exact1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L49() else D3()
  // L49()
  goto L49_;

L8_:;
  // sym6 = ldf `as.integer`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base6 = ldf `as.integer` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard6 then L85() else L86()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L85()
    goto L85_;
  } else {
  // L86()
    goto L86_;
  }

L9_:;
  // c3 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args9);
  // if c3 then L10(c3) else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L10(c3)
    Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c3_;
    goto L10_;
  } else {
  // L54()
    goto L54_;
  }

L10_:;
  // c12 = `as.logical`(c4)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args10);
  // if c12 then L60() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L60()
    goto L60_;
  } else {
  // L12()
    goto L12_;
  }

L11_:;
  // c9 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args11);
  // c10 = `||`(c8, c9)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args12);
  // goto L10(c10)
  // L10(c10)
  Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c10_;
  goto L10_;

L12_:;
  // norm5 = ldf norm
  Rsh_Fir_reg_norm5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L80() else D14()
  // L80()
  goto L80_;

L13_:;
  // sym5 = ldf min
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base5 = ldf min in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard5 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L14_:;
  // r34 = `/`(r25, r26)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args14);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r34
  return Rsh_Fir_reg_r34_;

L15_:;
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r33 = dyn min(dx3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L78() else D13()
  // L78()
  goto L78_;

L16_:;
  // st p = r45
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // sym7 = ldf `is.na`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base7 = ldf `is.na` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard7 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L17_:;
  // c15 = `as.logical`(r50)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args17);
  // if c15 then L94() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L94()
    goto L94_;
  } else {
  // L18()
    goto L18_;
  }

L18_:;
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // p9 = ld p
  Rsh_Fir_reg_p9_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L98() else D25()
  // L98()
  goto L98_;

L20_:;
  // goto L21()
  // L21()
  goto L21_;

L21_:;
  // sym8 = ldf `is.null`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base8 = ldf `is.null` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard8 then L105() else L106()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L105()
    goto L105_;
  } else {
  // L106()
    goto L106_;
  }

L22_:;
  // c18 = `as.logical`(r60)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args19);
  // if c18 then L108() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L108()
    goto L108_;
  } else {
  // L23()
    goto L23_;
  }

L23_:;
  // norm13 = ld norm
  Rsh_Fir_reg_norm13_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L110() else D31()
  // L110()
  goto L110_;

L24_:;
  // sym11 = ldf `is.complex`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base11 = ldf `is.complex` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard11 then L127() else L128()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L127()
    goto L127_;
  } else {
  // L128()
    goto L128_;
  }

L25_:;
  // sym9 = ldf match
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base9 = ldf match in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard9 then L115() else L116()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L115()
    goto L115_;
  } else {
  // L116()
    goto L116_;
  }

L26_:;
  // r72 = `!`(r65)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args22);
  // c21 = `as.logical`(r72)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args23);
  // if c21 then L123() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L123()
    goto L123_;
  } else {
  // L28()
    goto L28_;
  }

L27_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r71 = dyn match(r67, r69, 0, NULL)
  SEXP Rsh_Fir_array_args24[4];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args24[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L122() else D37()
  // L122()
  goto L122_;

L28_:;
  // goto L24()
  // L24()
  goto L24_;

L29_:;
  // c23 = `as.logical`(r78)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args25);
  // if c23 then L130() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L130()
    goto L130_;
  } else {
  // L30()
    goto L30_;
  }

L30_:;
  // LINPACK1 = ld LINPACK
  Rsh_Fir_reg_LINPACK1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L138() else D45()
  // L138()
  goto L138_;

L31_:;
  // r85 = `/`(r82, r83)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_r83_;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args26);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r85
  return Rsh_Fir_reg_r85_;

L32_:;
  // sym14 = ldf `.Internal`
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base14 = ldf `.Internal` in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard14 then L166() else L167()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L166()
    goto L166_;
  } else {
  // L167()
    goto L167_;
  }

L33_:;
  // goto L34()
  // L34()
  goto L34_;

L34_:;
  // l = ld z
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // storage_mode__ = ldf `storage.mode<-`
  Rsh_Fir_reg_storage_mode__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L145() else D49()
  // L145()
  goto L145_;

L35_:;
  // c27 = `is.object`(r95)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args28);
  // if c27 then L162() else L163(r94, r95)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L162()
    goto L162_;
  } else {
  // L163(r94, r95)
    Rsh_Fir_reg_r107_ = Rsh_Fir_reg_r94_;
    Rsh_Fir_reg_r108_ = Rsh_Fir_reg_r95_;
    goto L163_;
  }

L36_:;
  // goto L37(1.0, 0)
  // L37(1.0, 0)
  Rsh_Fir_reg_r102_ = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r103_ = Rsh_const(CCP, 19);
  goto L37_;

L37_:;
  // _Fortran = ldf `.Fortran` in base
  Rsh_Fir_reg__Fortran = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r104 = dyn _Fortran(_F_dtrco1, z20, p17, p19, r96, r98, r103)
  SEXP Rsh_Fir_array_args29[7];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg__F_dtrco1_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_z20_;
  Rsh_Fir_array_args29[2] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args29[3] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_args29[4] = Rsh_Fir_reg_r96_;
  Rsh_Fir_array_args29[5] = Rsh_Fir_reg_r98_;
  Rsh_Fir_array_args29[6] = Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_array_arg_names3[7];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_array_arg_names3[4] = R_MissingArg;
  Rsh_Fir_array_arg_names3[5] = R_MissingArg;
  Rsh_Fir_array_arg_names3[6] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__Fortran, 7, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L160() else D60()
  // L160()
  goto L160_;

L38_:;
  // r119 = `/`(r116, r117)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r116_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_r117_;
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args30);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r119
  return Rsh_Fir_reg_r119_;

L39_:;
  // sym1 = ldf dim
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base1 = ldf dim in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard1 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L40_:;
  // r = dyn base(<lang dim(z)>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L4(r)
  // L4(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L4_;

L41_:;
  // z1 = ld z
  Rsh_Fir_reg_z1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L43() else D0()
  // L43()
  goto L43_;

L42_:;
  // r2 = dyn base1(<sym z>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L5(r2)
  // L5(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L5_;

D0_:;
  // deopt 4 [z1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_z1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L43_:;
  // z2 = force? z1
  Rsh_Fir_reg_z2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z1_);
  // checkMissing(z2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_z2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r4 = dyn dim(z2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_z2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L44() else D1()
  // L44()
  goto L44_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L5(r4)
  // L5(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L5_;

D2_:;
  // deopt 9 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L45_:;
  // goto L4(r5)
  // L4(r5)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r5_;
  goto L4_;

L46_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 0.0
  return Rsh_const(CCP, 26);

D3_:;
  // deopt 16 [exact1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_exact1_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L49_:;
  // exact2 = force? exact1
  Rsh_Fir_reg_exact2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exact1_);
  // checkMissing(exact2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_exact2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(exact2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_exact2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args37);
  // if c1 then L50() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L50()
    goto L50_;
  } else {
  // L8()
    goto L8_;
  }

L50_:;
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard2 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L51_:;
  // norm1 = ld norm
  Rsh_Fir_reg_norm1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L53() else D4()
  // L53()
  goto L53_;

L52_:;
  // r9 = dyn base2(<sym norm>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L9(r9)
  // L9(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L9_;

D4_:;
  // deopt 19 [norm1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_norm1_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L53_:;
  // norm2 = force? norm1
  Rsh_Fir_reg_norm2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_norm1_);
  // checkMissing(norm2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_norm2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // c2 = `==`(norm2, NULL)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_norm2_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args41);
  // goto L9(c2)
  // L9(c2)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_c2_;
  goto L9_;

L54_:;
  // sym3 = ldf identical
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base3 = ldf identical in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard3 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L55_:;
  // norm3 = ld norm
  Rsh_Fir_reg_norm3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L57() else D5()
  // L57()
  goto L57_;

L56_:;
  // r11 = dyn base3("2", <sym norm>)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L11(c3, r11)
  // L11(c3, r11)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L11_;

D5_:;
  // deopt 25 [c3, norm3]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_norm3_;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L57_:;
  // norm4 = force? norm3
  Rsh_Fir_reg_norm4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_norm3_);
  // checkMissing(norm4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_norm4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r13 = dyn identical("2", norm4, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args45[9];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_norm4_;
  Rsh_Fir_array_args45[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args45[3] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args45[4] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args45[5] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args45[6] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args45[7] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args45[8] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names9[9];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_array_arg_names9[4] = R_MissingArg;
  Rsh_Fir_array_arg_names9[5] = R_MissingArg;
  Rsh_Fir_array_arg_names9[6] = R_MissingArg;
  Rsh_Fir_array_arg_names9[7] = R_MissingArg;
  Rsh_Fir_array_arg_names9[8] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L58() else D6()
  // L58()
  goto L58_;

D6_:;
  // deopt 35 [c3, r13]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(35, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L11(c3, r13)
  // L11(c3, r13)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L11_;

L60_:;
  // svd = ldf svd
  Rsh_Fir_reg_svd = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L61() else D7()
  // L61()
  goto L61_;

D7_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L61_:;
  // p = prom<V +>{
  //   z3 = ld z;
  //   z4 = force? z3;
  //   checkMissing(z4);
  //   return z4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1047316782_, 0, NULL, CCP, RHO);
  // r15 = dyn svd[, nu, nv](p, 0, 0)
  SEXP Rsh_Fir_array_args47[3];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args47[2] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_arg_names10[2] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_svd, 3, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L62() else D8()
  // L62()
  goto L62_;

D8_:;
  // deopt 44 [r15]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L62_:;
  // c13 = `is.object`(r15)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args48);
  // if c13 then L64() else L65(r15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L64()
    goto L64_;
  } else {
  // L65(r15)
    Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r15_;
    goto L65_;
  }

L63_:;
  // st s = dx1
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym4 = ldf max
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base4 = ldf max in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard4 then L67() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L67()
    goto L67_;
  } else {
  // L68()
    goto L68_;
  }

L64_:;
  // dr = tryDispatchBuiltin.1("$", r15)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args50);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if dc then L66() else L65(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L66()
    goto L66_;
  } else {
  // L65(dr)
    Rsh_Fir_reg_r17_ = Rsh_Fir_reg_dr;
    goto L65_;
  }

L65_:;
  // r18 = `$`(r17, <sym d>)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args52);
  // goto L63(r18)
  // L63(r18)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r18_;
  goto L63_;

L66_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L63(dx)
  // L63(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L63_;

L67_:;
  // s = ld s
  Rsh_Fir_reg_s = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L69() else D9()
  // L69()
  goto L69_;

L68_:;
  // r19 = dyn base4(<sym s>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L13(r19)
  // L13(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L13_;

D9_:;
  // deopt 49 [s]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_s;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L69_:;
  // s1 = force? s
  Rsh_Fir_reg_s1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s);
  // checkMissing(s1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_s1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r21 = dyn max(s1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_s1_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L70() else D10()
  // L70()
  goto L70_;

D10_:;
  // deopt 52 [r21]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L70_:;
  // goto L13(r21)
  // L13(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L13_;

L71_:;
  // s2 = ld s
  Rsh_Fir_reg_s2_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L73() else D11()
  // L73()
  goto L73_;

L72_:;
  // r24 = dyn base5(<lang `[`(s, `>`(s, 0.0))>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L14(r20, r24)
  // L14(r20, r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r24_;
  goto L14_;

D11_:;
  // deopt 54 [r20, s2]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_s2_;
  Rsh_Fir_deopt(54, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L73_:;
  // s3 = force? s2
  Rsh_Fir_reg_s3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s2_);
  // checkMissing(s3)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_s3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(s3)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args59);
  // if c14 then L74() else L75(r20, s3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L74()
    goto L74_;
  } else {
  // L75(r20, s3)
    Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r20_;
    Rsh_Fir_reg_s5_ = Rsh_Fir_reg_s3_;
    goto L75_;
  }

L74_:;
  // dr2 = tryDispatchBuiltin.1("[", s3)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_s3_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args60);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if dc1 then L76() else L75(r20, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L76()
    goto L76_;
  } else {
  // L75(r20, dr2)
    Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r20_;
    Rsh_Fir_reg_s5_ = Rsh_Fir_reg_dr2_;
    goto L75_;
  }

L75_:;
  // s6 = ld s
  Rsh_Fir_reg_s6_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L77() else D12()
  // L77()
  goto L77_;

L76_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // goto L15(r20, dx2)
  // L15(r20, dx2)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L15_;

D12_:;
  // deopt 56 [r28, s5, s6]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_s5_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_s6_;
  Rsh_Fir_deopt(56, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L77_:;
  // s7 = force? s6
  Rsh_Fir_reg_s7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s6_);
  // checkMissing(s7)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_s7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // r31 = `>`(s7, 0.0)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_s7_;
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args64);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r32 = dyn __(s5, r31)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_s5_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L15(r28, r32)
  // L15(r28, r32)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r32_;
  goto L15_;

D13_:;
  // deopt 62 [r30, r33]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(62, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L78_:;
  // goto L14(r30, r33)
  // L14(r30, r33)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r33_;
  goto L14_;

D14_:;
  // deopt 65 []
  Rsh_Fir_deopt(65, 0, NULL, CCP, RHO);
  return R_NilValue;

L80_:;
  // p1 = prom<V +>{
  //   z5 = ld z;
  //   z6 = force? z5;
  //   checkMissing(z6);
  //   return z6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1047316782_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   norm6 = ld norm;
  //   norm7 = force? norm6;
  //   checkMissing(norm7);
  //   return norm7;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1047316782_2, 0, NULL, CCP, RHO);
  // r37 = dyn norm5[, type](p1, p2)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_norm5_, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L81() else D15()
  // L81()
  goto L81_;

D15_:;
  // deopt 69 [r37]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L81_:;
  // norm8 = ldf norm
  Rsh_Fir_reg_norm8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L82() else D16()
  // L82()
  goto L82_;

D16_:;
  // deopt 70 [r37]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L82_:;
  // p4 = prom<V +>{
  //   solve = ldf solve;
  //   p3 = prom<V +>{
  //     z7 = ld z;
  //     z8 = force? z7;
  //     checkMissing(z8);
  //     return z8;
  //   };
  //   r39 = dyn solve(p3);
  //   return r39;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1047316782_3, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   norm9 = ld norm;
  //   norm10 = force? norm9;
  //   checkMissing(norm10);
  //   return norm10;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1047316782_5, 0, NULL, CCP, RHO);
  // r42 = dyn norm8[, type](p4, p5)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_norm8_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L83() else D17()
  // L83()
  goto L83_;

D17_:;
  // deopt 74 [r37, r42]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(74, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L83_:;
  // r43 = `*`(r37, r42)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args73);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r43
  return Rsh_Fir_reg_r43_;

L85_:;
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L87() else D18()
  // L87()
  goto L87_;

L86_:;
  // r44 = dyn base6(<lang nrow(z)>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L16(r44)
  // L16(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L16_;

D18_:;
  // deopt 79 []
  Rsh_Fir_deopt(79, 0, NULL, CCP, RHO);
  return R_NilValue;

L87_:;
  // p6 = prom<V +>{
  //   z9 = ld z;
  //   z10 = force? z9;
  //   checkMissing(z10);
  //   return z10;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1047316782_6, 0, NULL, CCP, RHO);
  // r47 = dyn nrow(p6)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L88() else D19()
  // L88()
  goto L88_;

D19_:;
  // deopt 81 [r47]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L88_:;
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r48 = dyn as_integer(r47)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L89() else D20()
  // L89()
  goto L89_;

D20_:;
  // deopt 83 [r48]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L89_:;
  // goto L16(r48)
  // L16(r48)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r48_;
  goto L16_;

L90_:;
  // p7 = ld p
  Rsh_Fir_reg_p7_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L92() else D21()
  // L92()
  goto L92_;

L91_:;
  // r49 = dyn base7(<sym p>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L17(r49)
  // L17(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L17_;

D21_:;
  // deopt 87 [p7]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L92_:;
  // p8 = force? p7
  Rsh_Fir_reg_p8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p7_);
  // checkMissing(p8)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_p8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r51 = dyn is_na(p8)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L93() else D22()
  // L93()
  goto L93_;

D22_:;
  // deopt 90 [r51]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L93_:;
  // goto L17(r51)
  // L17(r51)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r51_;
  goto L17_;

L94_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L95() else D23()
  // L95()
  goto L95_;

D23_:;
  // deopt 92 []
  Rsh_Fir_deopt(92, 0, NULL, CCP, RHO);
  return R_NilValue;

L95_:;
  // r52 = dyn stop("invalid nrow(z)")
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L96() else D24()
  // L96()
  goto L96_;

D24_:;
  // deopt 94 [r52]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L96_:;
  // goto L19()
  // L19()
  goto L19_;

D25_:;
  // deopt 97 [p9]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L98_:;
  // p10 = force? p9
  Rsh_Fir_reg_p10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p9_);
  // checkMissing(p10)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_p10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L99() else D26()
  // L99()
  goto L99_;

D26_:;
  // deopt 99 [p10]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L99_:;
  // p11 = prom<V +>{
  //   z11 = ld z;
  //   z12 = force? z11;
  //   checkMissing(z12);
  //   return z12;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1047316782_7, 0, NULL, CCP, RHO);
  // r55 = dyn ncol(p11)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L100() else D27()
  // L100()
  goto L100_;

D27_:;
  // deopt 101 [p10, r55]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(101, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L100_:;
  // r56 = `!=`(p10, r55)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args85);
  // c16 = `as.logical`(r56)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args86);
  // if c16 then L101() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L101()
    goto L101_;
  } else {
  // L20()
    goto L20_;
  }

L101_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L102() else D28()
  // L102()
  goto L102_;

D28_:;
  // deopt 104 []
  Rsh_Fir_deopt(104, 0, NULL, CCP, RHO);
  return R_NilValue;

L102_:;
  // r57 = dyn stop1("triangular matrix should be square")
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L103() else D29()
  // L103()
  goto L103_;

D29_:;
  // deopt 106 [r57]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L103_:;
  // goto L21()
  // L21()
  goto L21_;

L105_:;
  // norm11 = ld norm
  Rsh_Fir_reg_norm11_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L107() else D30()
  // L107()
  goto L107_;

L106_:;
  // r59 = dyn base8(<sym norm>)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L22(r59)
  // L22(r59)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L22_;

D30_:;
  // deopt 110 [norm11]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_norm11_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L107_:;
  // norm12 = force? norm11
  Rsh_Fir_reg_norm12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_norm11_);
  // checkMissing(norm12)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_norm12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // c17 = `==`(norm12, NULL)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_norm12_;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args90);
  // goto L22(c17)
  // L22(c17)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_c17_;
  goto L22_;

L108_:;
  // st norm = "1"
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_const(CCP, 47), RHO);
  (void)(Rsh_const(CCP, 47));
  // goto L24()
  // L24()
  goto L24_;

D31_:;
  // deopt 116 [norm13]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_norm13_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L110_:;
  // norm14 = force? norm13
  Rsh_Fir_reg_norm14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_norm13_);
  // checkMissing(norm14)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_norm14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // r62 = `==`(norm14, "2")
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_norm14_;
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args92);
  // c19 = `as.logical`(r62)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args93);
  // if c19 then L111() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L111()
    goto L111_;
  } else {
  // L25()
    goto L25_;
  }

L111_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L112() else D32()
  // L112()
  goto L112_;

D32_:;
  // deopt 121 []
  Rsh_Fir_deopt(121, 0, NULL, CCP, RHO);
  return R_NilValue;

L112_:;
  // r63 = dyn warning("using 1-norm approximation for approximate 2-norm")
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L113() else D33()
  // L113()
  goto L113_;

D33_:;
  // deopt 123 [r63]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L113_:;
  // st norm = "1"
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_const(CCP, 47), RHO);
  (void)(Rsh_const(CCP, 47));
  // goto L24()
  // L24()
  goto L24_;

L115_:;
  // toupper = ldf toupper
  Rsh_Fir_reg_toupper = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // check L117() else D34()
  // L117()
  goto L117_;

L116_:;
  // r64 = dyn base9(<lang toupper(norm)>, <lang c("1", "O", "I")>, 0)
  SEXP Rsh_Fir_array_args95[3];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args95[2] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names28[3];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 3, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L26(r64)
  // L26(r64)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r64_;
  goto L26_;

D34_:;
  // deopt 130 []
  Rsh_Fir_deopt(130, 0, NULL, CCP, RHO);
  return R_NilValue;

L117_:;
  // p12 = prom<V +>{
  //   norm15 = ld norm;
  //   norm16 = force? norm15;
  //   checkMissing(norm16);
  //   return norm16;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1047316782_8, 0, NULL, CCP, RHO);
  // r67 = dyn toupper(p12)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_toupper, 1, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L118() else D35()
  // L118()
  goto L118_;

D35_:;
  // deopt 132 [r67]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L118_:;
  // sym10 = ldf c
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // base10 = ldf c in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args98);
  // if guard10 then L119() else L120()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L119()
    goto L119_;
  } else {
  // L120()
    goto L120_;
  }

L119_:;
  // c20 = ldf c in base
  Rsh_Fir_reg_c20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r70 = dyn c20("1", "O", "I")
  SEXP Rsh_Fir_array_args99[3];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args99[2] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c20_, 3, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L121() else D36()
  // L121()
  goto L121_;

L120_:;
  // r68 = dyn base10("1", "O", "I")
  SEXP Rsh_Fir_array_args100[3];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args100[1] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args100[2] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 3, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L27(r68)
  // L27(r68)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r68_;
  goto L27_;

D36_:;
  // deopt 139 [r70]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_deopt(139, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L121_:;
  // goto L27(r70)
  // L27(r70)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r70_;
  goto L27_;

D37_:;
  // deopt 143 [r71]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L122_:;
  // goto L26(r71)
  // L26(r71)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r71_;
  goto L26_;

L123_:;
  // warning1 = ldf warning
  Rsh_Fir_reg_warning1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L124() else D38()
  // L124()
  goto L124_;

D38_:;
  // deopt 146 []
  Rsh_Fir_deopt(146, 0, NULL, CCP, RHO);
  return R_NilValue;

L124_:;
  // p14 = prom<V +>{
  //   gettextf = ldf gettextf;
  //   p13 = prom<V +>{
  //     norm17 = ld norm;
  //     norm18 = force? norm17;
  //     checkMissing(norm18);
  //     return norm18;
  //   };
  //   r74 = dyn gettextf("norm=\"%s\" not available here; using norm=\"1\"", p13);
  //   return r74;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1047316782_9, 0, NULL, CCP, RHO);
  // r76 = dyn warning1[, domain](p14, NA_LGL)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args103[1] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = Rsh_const(CCP, 59);
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning1_, 2, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L125() else D39()
  // L125()
  goto L125_;

D39_:;
  // deopt 150 [r76]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(150, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L125_:;
  // st norm = "1"
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_const(CCP, 47), RHO);
  (void)(Rsh_const(CCP, 47));
  // goto L24()
  // L24()
  goto L24_;

L127_:;
  // z13 = ld z
  Rsh_Fir_reg_z13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L129() else D40()
  // L129()
  goto L129_;

L128_:;
  // r77 = dyn base11(<sym z>)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L29(r77)
  // L29(r77)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r77_;
  goto L29_;

D40_:;
  // deopt 157 [z13]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_z13_;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L129_:;
  // z14 = force? z13
  Rsh_Fir_reg_z14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z13_);
  // checkMissing(z14)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_z14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // c22 = `is.complex`(z14)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_z14_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(388, RHO, 1, Rsh_Fir_array_args106);
  // goto L29(c22)
  // L29(c22)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_c22_;
  goto L29_;

L130_:;
  // sym12 = ldf `.Internal`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base12 = ldf `.Internal` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args107);
  // if guard12 then L131() else L132()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L131()
    goto L131_;
  } else {
  // L132()
    goto L132_;
  }

L131_:;
  // z15 = ld z
  Rsh_Fir_reg_z15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L133() else D41()
  // L133()
  goto L133_;

L132_:;
  // r81 = dyn base12(<lang La_ztrcon3(z, norm, uplo)>)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L31(1.0, r81)
  // L31(1.0, r81)
  Rsh_Fir_reg_r82_ = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r81_;
  goto L31_;

D41_:;
  // deopt 163 [1.0, z15]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_z15_;
  Rsh_Fir_deopt(163, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L133_:;
  // z16 = force? z15
  Rsh_Fir_reg_z16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z15_);
  // checkMissing(z16)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_z16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // norm19 = ld norm
  Rsh_Fir_reg_norm19_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L134() else D42()
  // L134()
  goto L134_;

D42_:;
  // deopt 165 [1.0, norm19]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_norm19_;
  Rsh_Fir_deopt(165, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L134_:;
  // norm20 = force? norm19
  Rsh_Fir_reg_norm20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_norm19_);
  // checkMissing(norm20)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_norm20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // uplo1 = ld uplo
  Rsh_Fir_reg_uplo1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L135() else D43()
  // L135()
  goto L135_;

D43_:;
  // deopt 167 [1.0, uplo1]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_uplo1_;
  Rsh_Fir_deopt(167, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L135_:;
  // uplo2 = force? uplo1
  Rsh_Fir_reg_uplo2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_uplo1_);
  // checkMissing(uplo2)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_uplo2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // La_ztrcon3 = ldf La_ztrcon3 in base
  Rsh_Fir_reg_La_ztrcon3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // r84 = dyn La_ztrcon3(z16, norm20, uplo2)
  SEXP Rsh_Fir_array_args112[3];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_z16_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_norm20_;
  Rsh_Fir_array_args112[2] = Rsh_Fir_reg_uplo2_;
  SEXP Rsh_Fir_array_arg_names36[3];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_La_ztrcon3_, 3, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L136() else D44()
  // L136()
  goto L136_;

D44_:;
  // deopt 170 [1.0, r84]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r84_;
  Rsh_Fir_deopt(170, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L136_:;
  // goto L31(1.0, r84)
  // L31(1.0, r84)
  Rsh_Fir_reg_r82_ = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r84_;
  goto L31_;

D45_:;
  // deopt 172 [LINPACK1]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_LINPACK1_;
  Rsh_Fir_deopt(172, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L138_:;
  // LINPACK2 = force? LINPACK1
  Rsh_Fir_reg_LINPACK2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LINPACK1_);
  // checkMissing(LINPACK2)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_LINPACK2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // c24 = `as.logical`(LINPACK2)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_LINPACK2_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args114);
  // if c24 then L139() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L139()
    goto L139_;
  } else {
  // L32()
    goto L32_;
  }

L139_:;
  // norm21 = ld norm
  Rsh_Fir_reg_norm21_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L140() else D46()
  // L140()
  goto L140_;

D46_:;
  // deopt 174 [norm21]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_norm21_;
  Rsh_Fir_deopt(174, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L140_:;
  // norm22 = force? norm21
  Rsh_Fir_reg_norm22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_norm21_);
  // checkMissing(norm22)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_norm22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // r86 = `==`(norm22, "I")
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_norm22_;
  Rsh_Fir_array_args116[1] = Rsh_const(CCP, 55);
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args116);
  // c25 = `as.logical`(r86)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args117);
  // if c25 then L141() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L141()
    goto L141_;
  } else {
  // L33()
    goto L33_;
  }

L141_:;
  // t = ldf t
  Rsh_Fir_reg_t = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 62), RHO);
  // check L142() else D47()
  // L142()
  goto L142_;

D47_:;
  // deopt 179 []
  Rsh_Fir_deopt(179, 0, NULL, CCP, RHO);
  return R_NilValue;

L142_:;
  // p15 = prom<V +>{
  //   z17 = ld z;
  //   z18 = force? z17;
  //   checkMissing(z18);
  //   return z18;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1047316782_11, 0, NULL, CCP, RHO);
  // r88 = dyn t(p15)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_t, 1, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L143() else D48()
  // L143()
  goto L143_;

D48_:;
  // deopt 181 [r88]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_deopt(181, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L143_:;
  // st z = r88
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r88_, RHO);
  (void)(Rsh_Fir_reg_r88_);
  // goto L34()
  // L34()
  goto L34_;

D49_:;
  // deopt 188 ["double", l, "double"]
  SEXP Rsh_Fir_array_deopt_stack40[3];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_const(CCP, 63);
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack40[2] = Rsh_const(CCP, 63);
  Rsh_Fir_deopt(188, 3, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L145_:;
  // r90 = dyn storage_mode__(l, NULL, "double")
  SEXP Rsh_Fir_array_args120[3];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args120[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args120[2] = Rsh_const(CCP, 63);
  SEXP Rsh_Fir_array_arg_names38[3];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode__, 3, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L146() else D50()
  // L146()
  goto L146_;

D50_:;
  // deopt 190 ["double", r90]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_const(CCP, 63);
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_r90_;
  Rsh_Fir_deopt(190, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L146_:;
  // st z = r90
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r90_, RHO);
  (void)(Rsh_Fir_reg_r90_);
  // sym13 = ldf `.Fortran`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base13 = ldf `.Fortran` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args121);
  // if guard13 then L147() else L148()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L147()
    goto L147_;
  } else {
  // L148()
    goto L148_;
  }

L147_:;
  // _F_dtrco = ld `.F_dtrco`
  Rsh_Fir_reg__F_dtrco = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // check L149() else D51()
  // L149()
  goto L149_;

L148_:;
  // r93 = dyn base13[, , , , k, , ](<sym .F_dtrco>, <sym z>, <sym p>, <sym p>, <lang double(1.0)>, <lang double(p)>, <lang if(`==`(uplo, "U"), 1, 0)>)
  SEXP Rsh_Fir_array_args122[7];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args122[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args122[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args122[3] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args122[4] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args122[5] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args122[6] = Rsh_const(CCP, 67);
  SEXP Rsh_Fir_array_arg_names39[7];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_array_arg_names39[2] = R_MissingArg;
  Rsh_Fir_array_arg_names39[3] = R_MissingArg;
  Rsh_Fir_array_arg_names39[4] = Rsh_const(CCP, 68);
  Rsh_Fir_array_arg_names39[5] = R_MissingArg;
  Rsh_Fir_array_arg_names39[6] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 7, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L35(1.0, r93)
  // L35(1.0, r93)
  Rsh_Fir_reg_r94_ = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r93_;
  goto L35_;

D51_:;
  // deopt 195 [1.0, _F_dtrco]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg__F_dtrco;
  Rsh_Fir_deopt(195, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L149_:;
  // _F_dtrco1 = force? _F_dtrco
  Rsh_Fir_reg__F_dtrco1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__F_dtrco);
  // checkMissing(_F_dtrco1)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg__F_dtrco1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // z19 = ld z
  Rsh_Fir_reg_z19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L150() else D52()
  // L150()
  goto L150_;

D52_:;
  // deopt 197 [1.0, z19]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_z19_;
  Rsh_Fir_deopt(197, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L150_:;
  // z20 = force? z19
  Rsh_Fir_reg_z20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z19_);
  // checkMissing(z20)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_z20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // p16 = ld p
  Rsh_Fir_reg_p16_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L151() else D53()
  // L151()
  goto L151_;

D53_:;
  // deopt 199 [1.0, p16]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_p16_;
  Rsh_Fir_deopt(199, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L151_:;
  // p17 = force? p16
  Rsh_Fir_reg_p17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p16_);
  // checkMissing(p17)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_p17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // p18 = ld p
  Rsh_Fir_reg_p18_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L152() else D54()
  // L152()
  goto L152_;

D54_:;
  // deopt 201 [1.0, p18]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_p18_;
  Rsh_Fir_deopt(201, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L152_:;
  // p19 = force? p18
  Rsh_Fir_reg_p19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p18_);
  // checkMissing(p19)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_p19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // double = ldf double
  Rsh_Fir_reg_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // check L153() else D55()
  // L153()
  goto L153_;

D55_:;
  // deopt 204 [1.0]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_const(CCP, 22);
  Rsh_Fir_deopt(204, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L153_:;
  // r96 = dyn double(1.0)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_double, 1, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L154() else D56()
  // L154()
  goto L154_;

D56_:;
  // deopt 206 [1.0, r96]
  SEXP Rsh_Fir_array_deopt_stack47[2];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_r96_;
  Rsh_Fir_deopt(206, 2, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L154_:;
  // double1 = ldf double
  Rsh_Fir_reg_double1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // check L155() else D57()
  // L155()
  goto L155_;

D57_:;
  // deopt 209 [1.0]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_const(CCP, 22);
  Rsh_Fir_deopt(209, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L155_:;
  // p22 = prom<V +>{
  //   p20 = ld p;
  //   p21 = force? p20;
  //   checkMissing(p21);
  //   return p21;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1047316782_12, 0, NULL, CCP, RHO);
  // r98 = dyn double1(p22)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_double1_, 1, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L156() else D58()
  // L156()
  goto L156_;

D58_:;
  // deopt 211 [1.0, r98]
  SEXP Rsh_Fir_array_deopt_stack49[2];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_r98_;
  Rsh_Fir_deopt(211, 2, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L156_:;
  // uplo3 = ld uplo
  Rsh_Fir_reg_uplo3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L157() else D59()
  // L157()
  goto L157_;

D59_:;
  // deopt 212 [1.0, uplo3]
  SEXP Rsh_Fir_array_deopt_stack50[2];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_uplo3_;
  Rsh_Fir_deopt(212, 2, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L157_:;
  // uplo4 = force? uplo3
  Rsh_Fir_reg_uplo4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_uplo3_);
  // checkMissing(uplo4)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_uplo4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // r99 = `==`(uplo4, "U")
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_uplo4_;
  Rsh_Fir_array_args131[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args131);
  // c26 = `as.logical`(r99)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_r99_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args132);
  // if c26 then L158() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L158()
    goto L158_;
  } else {
  // L36()
    goto L36_;
  }

L158_:;
  // goto L37(1.0, 1)
  // L37(1.0, 1)
  Rsh_Fir_reg_r102_ = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r103_ = Rsh_const(CCP, 70);
  goto L37_;

D60_:;
  // deopt 221 [r102, r104]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_r104_;
  Rsh_Fir_deopt(221, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L160_:;
  // goto L35(r102, r104)
  // L35(r102, r104)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r102_;
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r104_;
  goto L35_;

L161_:;
  // r112 = `/`(r110, dx5)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_r110_;
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args133);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r112
  return Rsh_Fir_reg_r112_;

L162_:;
  // dr4 = tryDispatchBuiltin.1("$", r95)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_r95_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args134);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // if dc2 then L164() else L163(r94, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L164()
    goto L164_;
  } else {
  // L163(r94, dr4)
    Rsh_Fir_reg_r107_ = Rsh_Fir_reg_r94_;
    Rsh_Fir_reg_r108_ = Rsh_Fir_reg_dr4_;
    goto L163_;
  }

L163_:;
  // r111 = `$`(r108, <sym k>)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_array_args136[1] = Rsh_const(CCP, 68);
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args136);
  // goto L161(r107, r111)
  // L161(r107, r111)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r107_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r111_;
  goto L161_;

L164_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // goto L161(r94, dx4)
  // L161(r94, dx4)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r94_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L161_;

L166_:;
  // z21 = ld z
  Rsh_Fir_reg_z21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L168() else D61()
  // L168()
  goto L168_;

L167_:;
  // r115 = dyn base14(<lang La_dtrcon3(z, norm, uplo)>)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 71);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L38(1.0, r115)
  // L38(1.0, r115)
  Rsh_Fir_reg_r116_ = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r115_;
  goto L38_;

D61_:;
  // deopt 227 [1.0, z21]
  SEXP Rsh_Fir_array_deopt_stack52[2];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_z21_;
  Rsh_Fir_deopt(227, 2, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L168_:;
  // z22 = force? z21
  Rsh_Fir_reg_z22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z21_);
  // checkMissing(z22)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_z22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // norm23 = ld norm
  Rsh_Fir_reg_norm23_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L169() else D62()
  // L169()
  goto L169_;

D62_:;
  // deopt 229 [1.0, norm23]
  SEXP Rsh_Fir_array_deopt_stack53[2];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_norm23_;
  Rsh_Fir_deopt(229, 2, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L169_:;
  // norm24 = force? norm23
  Rsh_Fir_reg_norm24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_norm23_);
  // checkMissing(norm24)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_norm24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty()));
  // uplo5 = ld uplo
  Rsh_Fir_reg_uplo5_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L170() else D63()
  // L170()
  goto L170_;

D63_:;
  // deopt 231 [1.0, uplo5]
  SEXP Rsh_Fir_array_deopt_stack54[2];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_deopt_stack54[1] = Rsh_Fir_reg_uplo5_;
  Rsh_Fir_deopt(231, 2, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L170_:;
  // uplo6 = force? uplo5
  Rsh_Fir_reg_uplo6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_uplo5_);
  // checkMissing(uplo6)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_uplo6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // La_dtrcon3 = ldf La_dtrcon3 in base
  Rsh_Fir_reg_La_dtrcon3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 72), RHO);
  // r118 = dyn La_dtrcon3(z22, norm24, uplo6)
  SEXP Rsh_Fir_array_args142[3];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_z22_;
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_norm24_;
  Rsh_Fir_array_args142[2] = Rsh_Fir_reg_uplo6_;
  SEXP Rsh_Fir_array_arg_names43[3];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_array_arg_names43[2] = R_MissingArg;
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_La_dtrcon3_, 3, Rsh_Fir_array_args142, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L171() else D64()
  // L171()
  goto L171_;

D64_:;
  // deopt 234 [1.0, r118]
  SEXP Rsh_Fir_array_deopt_stack55[2];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_r118_;
  Rsh_Fir_deopt(234, 2, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L171_:;
  // goto L38(1.0, r118)
  // L38(1.0, r118)
  Rsh_Fir_reg_r116_ = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r118_;
  goto L38_;
}
SEXP Rsh_Fir_user_promise_inner1047316782_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_z3_;
  SEXP Rsh_Fir_reg_z4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1047316782/0: expected 0, got %d", NCAPTURES);

  // z3 = ld z
  Rsh_Fir_reg_z3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // z4 = force? z3
  Rsh_Fir_reg_z4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z3_);
  // checkMissing(z4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_z4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return z4
  return Rsh_Fir_reg_z4_;
}
SEXP Rsh_Fir_user_promise_inner1047316782_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_z5_;
  SEXP Rsh_Fir_reg_z6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1047316782/0: expected 0, got %d", NCAPTURES);

  // z5 = ld z
  Rsh_Fir_reg_z5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // z6 = force? z5
  Rsh_Fir_reg_z6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z5_);
  // checkMissing(z6)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_z6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // return z6
  return Rsh_Fir_reg_z6_;
}
SEXP Rsh_Fir_user_promise_inner1047316782_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_norm6_;
  SEXP Rsh_Fir_reg_norm7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1047316782/0: expected 0, got %d", NCAPTURES);

  // norm6 = ld norm
  Rsh_Fir_reg_norm6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // norm7 = force? norm6
  Rsh_Fir_reg_norm7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_norm6_);
  // checkMissing(norm7)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_norm7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // return norm7
  return Rsh_Fir_reg_norm7_;
}
SEXP Rsh_Fir_user_promise_inner1047316782_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_solve;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r39_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1047316782/0: expected 0, got %d", NCAPTURES);

  // solve = ldf solve
  Rsh_Fir_reg_solve = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // p3 = prom<V +>{
  //   z7 = ld z;
  //   z8 = force? z7;
  //   checkMissing(z8);
  //   return z8;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1047316782_4, 0, NULL, CCP, RHO);
  // r39 = dyn solve(p3)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_solve, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names16, CCP, RHO);
  // return r39
  return Rsh_Fir_reg_r39_;
}
SEXP Rsh_Fir_user_promise_inner1047316782_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_z7_;
  SEXP Rsh_Fir_reg_z8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1047316782/0: expected 0, got %d", NCAPTURES);

  // z7 = ld z
  Rsh_Fir_reg_z7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // z8 = force? z7
  Rsh_Fir_reg_z8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z7_);
  // checkMissing(z8)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_z8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // return z8
  return Rsh_Fir_reg_z8_;
}
SEXP Rsh_Fir_user_promise_inner1047316782_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_norm9_;
  SEXP Rsh_Fir_reg_norm10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1047316782/0: expected 0, got %d", NCAPTURES);

  // norm9 = ld norm
  Rsh_Fir_reg_norm9_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // norm10 = force? norm9
  Rsh_Fir_reg_norm10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_norm9_);
  // checkMissing(norm10)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_norm10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // return norm10
  return Rsh_Fir_reg_norm10_;
}
SEXP Rsh_Fir_user_promise_inner1047316782_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_z9_;
  SEXP Rsh_Fir_reg_z10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1047316782/0: expected 0, got %d", NCAPTURES);

  // z9 = ld z
  Rsh_Fir_reg_z9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // z10 = force? z9
  Rsh_Fir_reg_z10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z9_);
  // checkMissing(z10)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_z10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // return z10
  return Rsh_Fir_reg_z10_;
}
SEXP Rsh_Fir_user_promise_inner1047316782_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_z11_;
  SEXP Rsh_Fir_reg_z12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1047316782/0: expected 0, got %d", NCAPTURES);

  // z11 = ld z
  Rsh_Fir_reg_z11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // z12 = force? z11
  Rsh_Fir_reg_z12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z11_);
  // checkMissing(z12)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_z12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // return z12
  return Rsh_Fir_reg_z12_;
}
SEXP Rsh_Fir_user_promise_inner1047316782_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_norm15_;
  SEXP Rsh_Fir_reg_norm16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1047316782/0: expected 0, got %d", NCAPTURES);

  // norm15 = ld norm
  Rsh_Fir_reg_norm15_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // norm16 = force? norm15
  Rsh_Fir_reg_norm16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_norm15_);
  // checkMissing(norm16)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_norm16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // return norm16
  return Rsh_Fir_reg_norm16_;
}
SEXP Rsh_Fir_user_promise_inner1047316782_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r74_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1047316782/0: expected 0, got %d", NCAPTURES);

  // gettextf = ldf gettextf
  Rsh_Fir_reg_gettextf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // p13 = prom<V +>{
  //   norm17 = ld norm;
  //   norm18 = force? norm17;
  //   checkMissing(norm18);
  //   return norm18;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1047316782_10, 0, NULL, CCP, RHO);
  // r74 = dyn gettextf("norm=\"%s\" not available here; using norm=\"1\"", p13)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf, 2, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names32, CCP, RHO);
  // return r74
  return Rsh_Fir_reg_r74_;
}
SEXP Rsh_Fir_user_promise_inner1047316782_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_norm17_;
  SEXP Rsh_Fir_reg_norm18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1047316782/0: expected 0, got %d", NCAPTURES);

  // norm17 = ld norm
  Rsh_Fir_reg_norm17_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // norm18 = force? norm17
  Rsh_Fir_reg_norm18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_norm17_);
  // checkMissing(norm18)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_norm18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // return norm18
  return Rsh_Fir_reg_norm18_;
}
SEXP Rsh_Fir_user_promise_inner1047316782_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_z17_;
  SEXP Rsh_Fir_reg_z18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1047316782/0: expected 0, got %d", NCAPTURES);

  // z17 = ld z
  Rsh_Fir_reg_z17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // z18 = force? z17
  Rsh_Fir_reg_z18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z17_);
  // checkMissing(z18)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_z18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // return z18
  return Rsh_Fir_reg_z18_;
}
SEXP Rsh_Fir_user_promise_inner1047316782_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_p21_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1047316782/0: expected 0, got %d", NCAPTURES);

  // p20 = ld p
  Rsh_Fir_reg_p20_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // p21 = force? p20
  Rsh_Fir_reg_p21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p20_);
  // checkMissing(p21)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_p21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // return p21
  return Rsh_Fir_reg_p21_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
