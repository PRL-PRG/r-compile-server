#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1626172927_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1626172927_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1626172927_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1626172927_24(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3002224933_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3002224933_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner1626172927
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1626172927_, RHO, CCP);
  // st `.kronecker` = r
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
SEXP Rsh_Fir_user_function_inner1626172927_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1626172927 dynamic dispatch ([X, Y, FUN, `make.dimnames`, `...`])

  return Rsh_Fir_user_version_inner1626172927_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1626172927_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1626172927 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner1626172927/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_X;
  SEXP Rsh_Fir_reg_Y;
  SEXP Rsh_Fir_reg_FUN;
  SEXP Rsh_Fir_reg_make_dimnames;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_FUN_isMissing;
  SEXP Rsh_Fir_reg_FUN_orDefault;
  SEXP Rsh_Fir_reg_make_dimnames_isMissing;
  SEXP Rsh_Fir_reg_make_dimnames_orDefault;
  SEXP Rsh_Fir_reg_as_array;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_as_array1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_make_dimnames1_;
  SEXP Rsh_Fir_reg_make_dimnames2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_X3_;
  SEXP Rsh_Fir_reg_X4_;
  SEXP Rsh_Fir_reg_dimnames;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_Y3_;
  SEXP Rsh_Fir_reg_Y4_;
  SEXP Rsh_Fir_reg_dimnames1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_X5_;
  SEXP Rsh_Fir_reg_X6_;
  SEXP Rsh_Fir_reg_dim;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_Y5_;
  SEXP Rsh_Fir_reg_Y6_;
  SEXP Rsh_Fir_reg_dim1_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_dX;
  SEXP Rsh_Fir_reg_dX1_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_dY;
  SEXP Rsh_Fir_reg_dY1_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_ld;
  SEXP Rsh_Fir_reg_ld1_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_dX2_;
  SEXP Rsh_Fir_reg_dX3_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_ld2_;
  SEXP Rsh_Fir_reg_ld3_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_rep_int;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_dim__;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_ld4_;
  SEXP Rsh_Fir_reg_ld5_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_dY2_;
  SEXP Rsh_Fir_reg_dY3_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_ld6_;
  SEXP Rsh_Fir_reg_ld7_;
  SEXP Rsh_Fir_reg_rep_int1_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_dim__1_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_outer;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_as_vector;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_aperm;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_dX6_;
  SEXP Rsh_Fir_reg_dX7_;
  SEXP Rsh_Fir_reg_dY4_;
  SEXP Rsh_Fir_reg_dY5_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dim__2_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_make_dimnames3_;
  SEXP Rsh_Fir_reg_make_dimnames4_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_dnx;
  SEXP Rsh_Fir_reg_dnx1_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_dny;
  SEXP Rsh_Fir_reg_dny1_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_dnx2_;
  SEXP Rsh_Fir_reg_dnx3_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_dX8_;
  SEXP Rsh_Fir_reg_dX9_;
  SEXP Rsh_Fir_reg_length3_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_vector;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_ld8_;
  SEXP Rsh_Fir_reg_ld9_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_c35_;
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_dnx4_;
  SEXP Rsh_Fir_reg_dnx5_;
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg_ld10_;
  SEXP Rsh_Fir_reg_ld11_;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_vector1_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg_which;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_lapply;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_tmp2_;
  SEXP Rsh_Fir_reg_tmp3_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r109_;
  SEXP Rsh_Fir_reg_sym18_;
  SEXP Rsh_Fir_reg_base18_;
  SEXP Rsh_Fir_reg_guard18_;
  SEXP Rsh_Fir_reg_r110_;
  SEXP Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_reg_dny2_;
  SEXP Rsh_Fir_reg_dny3_;
  SEXP Rsh_Fir_reg_c38_;
  SEXP Rsh_Fir_reg_c39_;
  SEXP Rsh_Fir_reg_sym19_;
  SEXP Rsh_Fir_reg_base19_;
  SEXP Rsh_Fir_reg_guard19_;
  SEXP Rsh_Fir_reg_r112_;
  SEXP Rsh_Fir_reg_r113_;
  SEXP Rsh_Fir_reg_sym20_;
  SEXP Rsh_Fir_reg_base20_;
  SEXP Rsh_Fir_reg_guard20_;
  SEXP Rsh_Fir_reg_r114_;
  SEXP Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_reg_dY6_;
  SEXP Rsh_Fir_reg_dY7_;
  SEXP Rsh_Fir_reg_length4_;
  SEXP Rsh_Fir_reg_r116_;
  SEXP Rsh_Fir_reg_vector2_;
  SEXP Rsh_Fir_reg_r117_;
  SEXP Rsh_Fir_reg_ld12_;
  SEXP Rsh_Fir_reg_ld13_;
  SEXP Rsh_Fir_reg_r119_;
  SEXP Rsh_Fir_reg_c40_;
  SEXP Rsh_Fir_reg_sym21_;
  SEXP Rsh_Fir_reg_base21_;
  SEXP Rsh_Fir_reg_guard21_;
  SEXP Rsh_Fir_reg_r120_;
  SEXP Rsh_Fir_reg_r121_;
  SEXP Rsh_Fir_reg_dny4_;
  SEXP Rsh_Fir_reg_dny5_;
  SEXP Rsh_Fir_reg_sym22_;
  SEXP Rsh_Fir_reg_base22_;
  SEXP Rsh_Fir_reg_guard22_;
  SEXP Rsh_Fir_reg_r122_;
  SEXP Rsh_Fir_reg_r123_;
  SEXP Rsh_Fir_reg_ld14_;
  SEXP Rsh_Fir_reg_ld15_;
  SEXP Rsh_Fir_reg_vector3_;
  SEXP Rsh_Fir_reg_r124_;
  SEXP Rsh_Fir_reg_c41_;
  SEXP Rsh_Fir_reg_r125_;
  SEXP Rsh_Fir_reg_which1_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r130_;
  SEXP Rsh_Fir_reg_lapply1_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_r134_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_c42_;
  SEXP Rsh_Fir_reg_r136_;
  SEXP Rsh_Fir_reg_l8_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_tmp6_;
  SEXP Rsh_Fir_reg_tmp7_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r139_;
  SEXP Rsh_Fir_reg_sym23_;
  SEXP Rsh_Fir_reg_base23_;
  SEXP Rsh_Fir_reg_guard23_;
  SEXP Rsh_Fir_reg_r140_;
  SEXP Rsh_Fir_reg_r141_;
  SEXP Rsh_Fir_reg_sym24_;
  SEXP Rsh_Fir_reg_base24_;
  SEXP Rsh_Fir_reg_guard24_;
  SEXP Rsh_Fir_reg_r142_;
  SEXP Rsh_Fir_reg_r143_;
  SEXP Rsh_Fir_reg_opobj2_;
  SEXP Rsh_Fir_reg_opobj3_;
  SEXP Rsh_Fir_reg_dim2_;
  SEXP Rsh_Fir_reg_r144_;
  SEXP Rsh_Fir_reg_length5_;
  SEXP Rsh_Fir_reg_r145_;
  SEXP Rsh_Fir_reg_sym25_;
  SEXP Rsh_Fir_reg_base25_;
  SEXP Rsh_Fir_reg_guard25_;
  SEXP Rsh_Fir_reg_r146_;
  SEXP Rsh_Fir_reg_r147_;
  SEXP Rsh_Fir_reg_k;
  SEXP Rsh_Fir_reg_k1_;
  SEXP Rsh_Fir_reg_vector4_;
  SEXP Rsh_Fir_reg_r148_;
  SEXP Rsh_Fir_reg_k2_;
  SEXP Rsh_Fir_reg_k3_;
  SEXP Rsh_Fir_reg_r149_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l9_;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c43_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_outer1_;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_reg_r155_;
  SEXP Rsh_Fir_reg_as_vector1_;
  SEXP Rsh_Fir_reg_p24_;
  SEXP Rsh_Fir_reg_r159_;
  SEXP Rsh_Fir_reg_l10_;
  SEXP Rsh_Fir_reg_c46_;
  SEXP Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_reg_r161_;
  SEXP Rsh_Fir_reg_l12_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_reg_i14_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r164_;
  SEXP Rsh_Fir_reg_dno;
  SEXP Rsh_Fir_reg_dno1_;
  SEXP Rsh_Fir_reg_l13_;
  SEXP Rsh_Fir_reg_dimnames__;
  SEXP Rsh_Fir_reg_r165_;
  SEXP Rsh_Fir_reg_opobj4_;
  SEXP Rsh_Fir_reg_opobj5_;

  // Bind parameters
  Rsh_Fir_reg_X = PARAMS[0];
  Rsh_Fir_reg_Y = PARAMS[1];
  Rsh_Fir_reg_FUN = PARAMS[2];
  Rsh_Fir_reg_make_dimnames = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st X = X
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_X, RHO);
  (void)(Rsh_Fir_reg_X);
  // st Y = Y
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_Y, RHO);
  (void)(Rsh_Fir_reg_Y);
  // FUN_isMissing = missing.0(FUN)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_FUN;
  Rsh_Fir_reg_FUN_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if FUN_isMissing then L0("*") else L0(FUN)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_FUN_isMissing)) {
  // L0("*")
    Rsh_Fir_reg_FUN_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(FUN)
    Rsh_Fir_reg_FUN_orDefault = Rsh_Fir_reg_FUN;
    goto L0_;
  }

L0_:;
  // st FUN = FUN_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_FUN_orDefault, RHO);
  (void)(Rsh_Fir_reg_FUN_orDefault);
  // make_dimnames_isMissing = missing.0(make_dimnames)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_make_dimnames;
  Rsh_Fir_reg_make_dimnames_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if make_dimnames_isMissing then L1(FALSE) else L1(make_dimnames)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_make_dimnames_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_make_dimnames_orDefault = Rsh_const(CCP, 5);
    goto L1_;
  } else {
  // L1(make_dimnames)
    Rsh_Fir_reg_make_dimnames_orDefault = Rsh_Fir_reg_make_dimnames;
    goto L1_;
  }

L1_:;
  // st `make.dimnames` = make_dimnames_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_make_dimnames_orDefault, RHO);
  (void)(Rsh_Fir_reg_make_dimnames_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // as_array = ldf `as.array`
  Rsh_Fir_reg_as_array = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L47() else D0()
  // L47()
  goto L47_;

L2_:;
  // goto L5()
  // L5()
  goto L5_;

L3_:;
  // st dnx = r5
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym1 = ldf dimnames
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf dimnames in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L4_:;
  // st dny = r8
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // sym2 = ldf dim
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base2 = ldf dim in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard2 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L6_:;
  // st dX = r12
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // sym3 = ldf dim
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base3 = ldf dim in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard3 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L7_:;
  // st dY = r15
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard4 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L8_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard5 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L9_:;
  // r26 = `-`(r23, r24)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args7);
  // st ld = r26
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // ld = ld ld
  Rsh_Fir_reg_ld = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L78() else D17()
  // L78()
  goto L78_;

L10_:;
  // ld4 = ld ld
  Rsh_Fir_reg_ld4_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L91() else D24()
  // L91()
  goto L91_;

L11_:;
  // l = ld X
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // dim__ = ldf `dim<-`
  Rsh_Fir_reg_dim__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L88() else D22()
  // L88()
  goto L88_;

L12_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r34 = dyn c2(dX3, r31)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dX3_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L87() else D21()
  // L87()
  goto L87_;

L13_:;
  // outer = ldf outer
  Rsh_Fir_reg_outer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L104() else D31()
  // L104()
  goto L104_;

L14_:;
  // goto L13()
  // L13()
  goto L13_;

L15_:;
  // l1 = ld Y
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // dim__1 = ldf `dim<-`
  Rsh_Fir_reg_dim__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L101() else D29()
  // L101()
  goto L101_;

L16_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r43 = dyn c4(dY3, r41)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dY3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L100() else D28()
  // L100()
  goto L100_;

L17_:;
  // c32 = `as.logical`(c8)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args10);
  // if c32 then L125() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L125()
    goto L125_;
  } else {
  // L21()
    goto L21_;
  }

L18_:;
  // c13 = `as.logical`(r75)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args11);
  // if c13 then L119() else L19(c11, c13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L119()
    goto L119_;
  } else {
  // L19(c11, c13)
    Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c11_;
    Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c13_;
    goto L19_;
  }

L19_:;
  // r78 = `!`(c17)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args12);
  // c29 = `as.logical`(r78)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args13);
  // c30 = `&&`(c16, c29)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_c29_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args14);
  // goto L17(c30)
  // L17(c30)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c30_;
  goto L17_;

L20_:;
  // c25 = `as.logical`(r77)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args15);
  // c26 = `&&`(c23, c25)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_c25_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args16);
  // goto L19(c22, c26)
  // L19(c22, c26)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c22_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c26_;
  goto L19_;

L21_:;
  // goto L46()
  // L46()
  goto L46_;

L22_:;
  // c34 = `as.logical`(r80)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args17);
  // if c34 then L129() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L129()
    goto L129_;
  } else {
  // L23()
    goto L23_;
  }

L23_:;
  // ld8 = ld ld
  Rsh_Fir_reg_ld8_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L138() else D48()
  // L138()
  goto L138_;

L24_:;
  // st dnx = r82
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r82_, RHO);
  (void)(Rsh_Fir_reg_r82_);
  // goto L26()
  // L26()
  goto L26_;

L25_:;
  // vector = ldf vector in base
  Rsh_Fir_reg_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r86 = dyn vector("list", r84)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L136() else D47()
  // L136()
  goto L136_;

L26_:;
  // which = ldf which
  Rsh_Fir_reg_which = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L149() else D53()
  // L149()
  goto L149_;

L27_:;
  // goto L26()
  // L26()
  goto L26_;

L28_:;
  // st dnx = r90
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r90_, RHO);
  (void)(Rsh_Fir_reg_r90_);
  // goto L26()
  // L26()
  goto L26_;

L29_:;
  // c36 = ldf c in base
  Rsh_Fir_reg_c36_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r95 = dyn c36(dnx5, r92)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dnx5_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c36_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L147() else D52()
  // L147()
  goto L147_;

L30_:;
  // st dnx = dx3
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym18 = ldf `is.null`
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base18 = ldf `is.null` in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard18 then L157() else L158()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L157()
    goto L157_;
  } else {
  // L158()
    goto L158_;
  }

L31_:;
  // c39 = `as.logical`(r111)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args21);
  // if c39 then L160() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L160()
    goto L160_;
  } else {
  // L32()
    goto L32_;
  }

L32_:;
  // ld12 = ld ld
  Rsh_Fir_reg_ld12_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L169() else D62()
  // L169()
  goto L169_;

L33_:;
  // st dny = r113
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r113_, RHO);
  (void)(Rsh_Fir_reg_r113_);
  // goto L35()
  // L35()
  goto L35_;

L34_:;
  // vector2 = ldf vector in base
  Rsh_Fir_reg_vector2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r117 = dyn vector2("list", r115)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector2_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L167() else D61()
  // L167()
  goto L167_;

L35_:;
  // which1 = ldf which
  Rsh_Fir_reg_which1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L180() else D67()
  // L180()
  goto L180_;

L36_:;
  // goto L35()
  // L35()
  goto L35_;

L37_:;
  // st dny = r121
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r121_, RHO);
  (void)(Rsh_Fir_reg_r121_);
  // goto L35()
  // L35()
  goto L35_;

L38_:;
  // c41 = ldf c in base
  Rsh_Fir_reg_c41_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r125 = dyn c41(dny5, r123)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dny5_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_r123_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r125_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c41_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L178() else D66()
  // L178()
  goto L178_;

L39_:;
  // st dny = dx5
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // sym23 = ldf length
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base23 = ldf length in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard23 then L188() else L189()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L188()
    goto L188_;
  } else {
  // L189()
    goto L189_;
  }

L40_:;
  // st k = r141
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r141_, RHO);
  (void)(Rsh_Fir_reg_r141_);
  // sym25 = ldf vector
  Rsh_Fir_reg_sym25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base25 = ldf vector in base
  Rsh_Fir_reg_base25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard25 = `==`.4(sym25, base25)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym25_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base25_;
  Rsh_Fir_reg_guard25_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard25 then L195() else L196()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard25_)) {
  // L195()
    goto L195_;
  } else {
  // L196()
    goto L196_;
  }

L41_:;
  // length5 = ldf length in base
  Rsh_Fir_reg_length5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r145 = dyn length5(r143)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r143_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r145_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length5_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L194() else D74()
  // L194()
  goto L194_;

L42_:;
  // st dno = r147
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r147_, RHO);
  (void)(Rsh_Fir_reg_r147_);
  // k2 = ld k
  Rsh_Fir_reg_k2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L199() else D77()
  // L199()
  goto L199_;

L43_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args27);
  // c43 = `<`.1(l9, i2)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if c43 then L200() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L200()
    goto L200_;
  } else {
  // L45()
    goto L45_;
  }

L44_:;
  // st dno = dx11
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // goto L43(i12)
  // L43(i12)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i12_;
  goto L43_;

L45_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args29[4];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args29[3] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args29);
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // outer1 = ldf outer
  Rsh_Fir_reg_outer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L201() else D78()
  // L201()
  goto L201_;

L46_:;
  // opobj4 = ld opobj
  Rsh_Fir_reg_opobj4_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L213() else D86()
  // L213()
  goto L213_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L47_:;
  // p = prom<V +>{
  //   X1 = ld X;
  //   X2 = force? X1;
  //   checkMissing(X2);
  //   return X2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_, 0, NULL, CCP, RHO);
  // r1 = dyn as_array(p)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_array, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L48() else D1()
  // L48()
  goto L48_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L48_:;
  // st X = r1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // as_array1 = ldf `as.array`
  Rsh_Fir_reg_as_array1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L49() else D2()
  // L49()
  goto L49_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // p1 = prom<V +>{
  //   Y1 = ld Y;
  //   Y2 = force? Y1;
  //   checkMissing(Y2);
  //   return Y2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_1, 0, NULL, CCP, RHO);
  // r3 = dyn as_array1(p1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_array1_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L50() else D3()
  // L50()
  goto L50_;

D3_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L50_:;
  // st Y = r3
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // make_dimnames1 = ld `make.dimnames`
  Rsh_Fir_reg_make_dimnames1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L51() else D4()
  // L51()
  goto L51_;

D4_:;
  // deopt 10 [make_dimnames1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_make_dimnames1_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L51_:;
  // make_dimnames2 = force? make_dimnames1
  Rsh_Fir_reg_make_dimnames2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_make_dimnames1_);
  // checkMissing(make_dimnames2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_make_dimnames2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(make_dimnames2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_make_dimnames2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args35);
  // if c then L52() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L52()
    goto L52_;
  } else {
  // L2()
    goto L2_;
  }

L52_:;
  // sym = ldf dimnames
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base = ldf dimnames in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

L53_:;
  // X3 = ld X
  Rsh_Fir_reg_X3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L55() else D5()
  // L55()
  goto L55_;

L54_:;
  // r4 = dyn base(<sym X>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L3_;

D5_:;
  // deopt 14 [X3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_X3_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L55_:;
  // X4 = force? X3
  Rsh_Fir_reg_X4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X3_);
  // checkMissing(X4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_X4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r6 = dyn dimnames(X4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_X4_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L56() else D6()
  // L56()
  goto L56_;

D6_:;
  // deopt 17 [r6]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L56_:;
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L3_;

L57_:;
  // Y3 = ld Y
  Rsh_Fir_reg_Y3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L59() else D7()
  // L59()
  goto L59_;

L58_:;
  // r7 = dyn base1(<sym Y>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L4(r7)
  // L4(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L4_;

D7_:;
  // deopt 21 [Y3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_Y3_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L59_:;
  // Y4 = force? Y3
  Rsh_Fir_reg_Y4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Y3_);
  // checkMissing(Y4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_Y4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // dimnames1 = ldf dimnames in base
  Rsh_Fir_reg_dimnames1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r9 = dyn dimnames1(Y4)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_Y4_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames1_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L60() else D8()
  // L60()
  goto L60_;

D8_:;
  // deopt 24 [r9]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L60_:;
  // goto L4(r9)
  // L4(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L4_;

L62_:;
  // X5 = ld X
  Rsh_Fir_reg_X5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L64() else D9()
  // L64()
  goto L64_;

L63_:;
  // r11 = dyn base2(<sym X>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L6(r11)
  // L6(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L6_;

D9_:;
  // deopt 30 [X5]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_X5_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L64_:;
  // X6 = force? X5
  Rsh_Fir_reg_X6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X5_);
  // checkMissing(X6)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_X6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r13 = dyn dim(X6)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_X6_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L65() else D10()
  // L65()
  goto L65_;

D10_:;
  // deopt 33 [r13]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L65_:;
  // goto L6(r13)
  // L6(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L6_;

L66_:;
  // Y5 = ld Y
  Rsh_Fir_reg_Y5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L68() else D11()
  // L68()
  goto L68_;

L67_:;
  // r14 = dyn base3(<sym Y>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L7(r14)
  // L7(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L7_;

D11_:;
  // deopt 37 [Y5]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_Y5_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L68_:;
  // Y6 = force? Y5
  Rsh_Fir_reg_Y6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Y5_);
  // checkMissing(Y6)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_Y6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // dim1 = ldf dim in base
  Rsh_Fir_reg_dim1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r16 = dyn dim1(Y6)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_Y6_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim1_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L69() else D12()
  // L69()
  goto L69_;

D12_:;
  // deopt 40 [r16]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L69_:;
  // goto L7(r16)
  // L7(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L7_;

L70_:;
  // dX = ld dX
  Rsh_Fir_reg_dX = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L72() else D13()
  // L72()
  goto L72_;

L71_:;
  // r17 = dyn base4(<sym dX>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L8(r17)
  // L8(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L8_;

D13_:;
  // deopt 44 [dX]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_dX;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L72_:;
  // dX1 = force? dX
  Rsh_Fir_reg_dX1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dX);
  // checkMissing(dX1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dX1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r19 = dyn length(dX1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dX1_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L73() else D14()
  // L73()
  goto L73_;

D14_:;
  // deopt 47 [r19]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L73_:;
  // goto L8(r19)
  // L8(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L8_;

L74_:;
  // dY = ld dY
  Rsh_Fir_reg_dY = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L76() else D15()
  // L76()
  goto L76_;

L75_:;
  // r22 = dyn base5(<sym dY>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L9(r18, r22)
  // L9(r18, r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r22_;
  goto L9_;

D15_:;
  // deopt 49 [r18, dY]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_dY;
  Rsh_Fir_deopt(49, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L76_:;
  // dY1 = force? dY
  Rsh_Fir_reg_dY1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dY);
  // checkMissing(dY1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dY1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r25 = dyn length1(dY1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dY1_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L77() else D16()
  // L77()
  goto L77_;

D16_:;
  // deopt 52 [r18, r25]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(52, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L77_:;
  // goto L9(r18, r25)
  // L9(r18, r25)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L9_;

D17_:;
  // deopt 55 [ld]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_ld;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L78_:;
  // ld1 = force? ld
  Rsh_Fir_reg_ld1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ld);
  // checkMissing(ld1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_ld1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // r27 = `<`(ld1, 0)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_ld1_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args56);
  // c1 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args57);
  // if c1 then L79() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L79()
    goto L79_;
  } else {
  // L10()
    goto L10_;
  }

L79_:;
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard6 then L80() else L81()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L80()
    goto L80_;
  } else {
  // L81()
    goto L81_;
  }

L80_:;
  // dX2 = ld dX
  Rsh_Fir_reg_dX2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L82() else D18()
  // L82()
  goto L82_;

L81_:;
  // r28 = dyn base6(<sym dX>, <lang rep.int(1.0, `-`(ld))>)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L11(r28)
  // L11(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L11_;

D18_:;
  // deopt 61 [dX2]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_dX2_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L82_:;
  // dX3 = force? dX2
  Rsh_Fir_reg_dX3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dX2_);
  // checkMissing(dX3)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dX3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // sym7 = ldf `rep.int`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base7 = ldf `rep.int` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
  // if guard7 then L83() else L84()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L83()
    goto L83_;
  } else {
  // L84()
    goto L84_;
  }

L83_:;
  // ld2 = ld ld
  Rsh_Fir_reg_ld2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L85() else D19()
  // L85()
  goto L85_;

L84_:;
  // r30 = dyn base7(1.0, <lang `-`(ld)>)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L12(r30)
  // L12(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L12_;

D19_:;
  // deopt 66 [ld2]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_ld2_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L85_:;
  // ld3 = force? ld2
  Rsh_Fir_reg_ld3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ld2_);
  // checkMissing(ld3)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_ld3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // r32 = `-`(<missing>, ld3)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_ld3_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args64);
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r33 = dyn rep_int(1.0, r32)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L86() else D20()
  // L86()
  goto L86_;

D20_:;
  // deopt 70 [r33]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L86_:;
  // goto L12(r33)
  // L12(r33)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r33_;
  goto L12_;

D21_:;
  // deopt 72 [r34]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L87_:;
  // goto L11(r34)
  // L11(r34)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r34_;
  goto L11_;

D22_:;
  // deopt 74 [r29, l, r29]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(74, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L88_:;
  // r35 = dyn dim__(l, NULL, r29)
  SEXP Rsh_Fir_array_args66[3];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args66[2] = Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim__, 3, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L89() else D23()
  // L89()
  goto L89_;

D23_:;
  // deopt 76 [r29, r35]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(76, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L89_:;
  // st X = r35
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // st dX = r29
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // goto L13()
  // L13()
  goto L13_;

D24_:;
  // deopt 79 [ld4]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_ld4_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L91_:;
  // ld5 = force? ld4
  Rsh_Fir_reg_ld5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ld4_);
  // checkMissing(ld5)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_ld5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // r37 = `>`(ld5, 0)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_ld5_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args68);
  // c3 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args69);
  // if c3 then L92() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L92()
    goto L92_;
  } else {
  // L14()
    goto L14_;
  }

L92_:;
  // sym8 = ldf c
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base8 = ldf c in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard8 then L93() else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L93()
    goto L93_;
  } else {
  // L94()
    goto L94_;
  }

L93_:;
  // dY2 = ld dY
  Rsh_Fir_reg_dY2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L95() else D25()
  // L95()
  goto L95_;

L94_:;
  // r38 = dyn base8(<sym dY>, <lang rep.int(1.0, ld)>)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L15(r38)
  // L15(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L15_;

D25_:;
  // deopt 85 [dY2]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_dY2_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L95_:;
  // dY3 = force? dY2
  Rsh_Fir_reg_dY3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dY2_);
  // checkMissing(dY3)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dY3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // sym9 = ldf `rep.int`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base9 = ldf `rep.int` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard9 then L96() else L97()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L96()
    goto L96_;
  } else {
  // L97()
    goto L97_;
  }

L96_:;
  // ld6 = ld ld
  Rsh_Fir_reg_ld6_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L98() else D26()
  // L98()
  goto L98_;

L97_:;
  // r40 = dyn base9(1.0, <sym ld>)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L16(r40)
  // L16(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L16_;

D26_:;
  // deopt 90 [ld6]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_ld6_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L98_:;
  // ld7 = force? ld6
  Rsh_Fir_reg_ld7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ld6_);
  // checkMissing(ld7)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_ld7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // rep_int1 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r42 = dyn rep_int1(1.0, ld7)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_ld7_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int1_, 2, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L99() else D27()
  // L99()
  goto L99_;

D27_:;
  // deopt 93 [r42]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L99_:;
  // goto L16(r42)
  // L16(r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L16_;

D28_:;
  // deopt 95 [r43]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L100_:;
  // goto L15(r43)
  // L15(r43)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r43_;
  goto L15_;

D29_:;
  // deopt 97 [r39, l1, r39]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(97, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L101_:;
  // r44 = dyn dim__1(l1, NULL, r39)
  SEXP Rsh_Fir_array_args77[3];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args77[2] = Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_array_arg_names28[3];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim__1_, 3, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L102() else D30()
  // L102()
  goto L102_;

D30_:;
  // deopt 99 [r39, r44]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(99, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L102_:;
  // st Y = r44
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // st dY = r39
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // goto L13()
  // L13()
  goto L13_;

D31_:;
  // deopt 105 []
  Rsh_Fir_deopt(105, 0, NULL, CCP, RHO);
  return R_NilValue;

L104_:;
  // p2 = prom<V +>{
  //   X7 = ld X;
  //   X8 = force? X7;
  //   checkMissing(X8);
  //   return X8;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   Y7 = ld Y;
  //   Y8 = force? Y7;
  //   checkMissing(Y8);
  //   return Y8;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   FUN1 = ld FUN;
  //   FUN2 = force? FUN1;
  //   checkMissing(FUN2);
  //   return FUN2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_4, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // r48 = dyn outer[, , , `...`](p2, p3, p4, ddd1)
  SEXP Rsh_Fir_array_args81[4];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args81[2] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args81[3] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names29[4];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_array_arg_names29[3] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_outer, 4, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L105() else D32()
  // L105()
  goto L105_;

D32_:;
  // deopt 110 [r48]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L105_:;
  // st opobj = r48
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r48_, RHO);
  (void)(Rsh_Fir_reg_r48_);
  // as_vector = ldf `as.vector`
  Rsh_Fir_reg_as_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L106() else D33()
  // L106()
  goto L106_;

D33_:;
  // deopt 113 []
  Rsh_Fir_deopt(113, 0, NULL, CCP, RHO);
  return R_NilValue;

L106_:;
  // p7 = prom<V +>{
  //   t = ldf t;
  //   p6 = prom<V +>{
  //     matrix = ldf matrix;
  //     p5 = prom<V +>{
  //       sym10 = ldf length;
  //       base10 = ldf length in base;
  //       guard10 = `==`.4(sym10, base10);
  //       if guard10 then L1() else L2();
  //     L0(r54, r55, r56):
  //       r58 = `*`(r55, r56);
  //       r59 = `:`(r54, r58);
  //       return r59;
  //     L1():
  //       dX4 = ld dX;
  //       dX5 = force? dX4;
  //       checkMissing(dX5);
  //       length2 = ldf length in base;
  //       r57 = dyn length2(dX5);
  //       goto L0(1, 2.0, r57);
  //     L2():
  //       r53 = dyn base10(<sym dX>);
  //       goto L0(1, 2.0, r53);
  //     };
  //     r61 = dyn matrix[, ncol](p5, 2.0);
  //     c5 = `is.object`(r61);
  //     if c5 then L1() else L2();
  //   L0(dx1):
  //     return dx1;
  //   L1():
  //     dr = tryDispatchBuiltin.1("[", r61);
  //     dc = getTryDispatchBuiltinDispatched(dr);
  //     if dc then L3() else L2();
  //   L2():
  //     __ = ldf `[` in base;
  //     r64 = dyn __(r61, <missing>, <int 2, 1>);
  //     goto L0(r64);
  //   L3():
  //     dx = getTryDispatchBuiltinValue(dr);
  //     goto L0(dx);
  //   };
  //   r66 = dyn t(p6);
  //   return r66;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_5, 0, NULL, CCP, RHO);
  // r68 = dyn as_vector(p7)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_vector, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L107() else D34()
  // L107()
  goto L107_;

D34_:;
  // deopt 115 [r68]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L107_:;
  // st dp = r68
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_r68_, RHO);
  (void)(Rsh_Fir_reg_r68_);
  // aperm = ldf aperm
  Rsh_Fir_reg_aperm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L108() else D35()
  // L108()
  goto L108_;

D35_:;
  // deopt 118 []
  Rsh_Fir_deopt(118, 0, NULL, CCP, RHO);
  return R_NilValue;

L108_:;
  // p8 = prom<V +>{
  //   opobj = ld opobj;
  //   opobj1 = force? opobj;
  //   checkMissing(opobj1);
  //   return opobj1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   dp = ld dp;
  //   dp1 = force? dp;
  //   checkMissing(dp1);
  //   return dp1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_9, 0, NULL, CCP, RHO);
  // r71 = dyn aperm(p8, p9)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_aperm, 2, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L109() else D36()
  // L109()
  goto L109_;

D36_:;
  // deopt 121 [r71]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L109_:;
  // st opobj = r71
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r71_, RHO);
  (void)(Rsh_Fir_reg_r71_);
  // dX6 = ld dX
  Rsh_Fir_reg_dX6_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L110() else D37()
  // L110()
  goto L110_;

D37_:;
  // deopt 123 [dX6]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_dX6_;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L110_:;
  // dX7 = force? dX6
  Rsh_Fir_reg_dX7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dX6_);
  // checkMissing(dX7)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dX7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // dY4 = ld dY
  Rsh_Fir_reg_dY4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L111() else D38()
  // L111()
  goto L111_;

D38_:;
  // deopt 124 [dX7, dY4]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_dX7_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_dY4_;
  Rsh_Fir_deopt(124, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L111_:;
  // dY5 = force? dY4
  Rsh_Fir_reg_dY5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dY4_);
  // checkMissing(dY5)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dY5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // r72 = `*`(dX7, dY5)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dX7_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_dY5_;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args101);
  // l2 = ld opobj
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // dim__2 = ldf `dim<-`
  Rsh_Fir_reg_dim__2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L112() else D39()
  // L112()
  goto L112_;

D39_:;
  // deopt 128 [r72, l2, r72]
  SEXP Rsh_Fir_array_deopt_stack34[3];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(128, 3, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L112_:;
  // r73 = dyn dim__2(l2, NULL, r72)
  SEXP Rsh_Fir_array_args102[3];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args102[2] = Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_array_arg_names37[3];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim__2_, 3, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L113() else D40()
  // L113()
  goto L113_;

D40_:;
  // deopt 130 [r72, r73]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(130, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L113_:;
  // st opobj = r73
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r73_, RHO);
  (void)(Rsh_Fir_reg_r73_);
  // make_dimnames3 = ld `make.dimnames`
  Rsh_Fir_reg_make_dimnames3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L114() else D41()
  // L114()
  goto L114_;

D41_:;
  // deopt 132 [make_dimnames3]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_make_dimnames3_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L114_:;
  // make_dimnames4 = force? make_dimnames3
  Rsh_Fir_reg_make_dimnames4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_make_dimnames3_);
  // checkMissing(make_dimnames4)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_make_dimnames4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // c6 = `as.logical`(make_dimnames4)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_make_dimnames4_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args104);
  // if c6 then L115() else L17(c6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L115()
    goto L115_;
  } else {
  // L17(c6)
    Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c6_;
    goto L17_;
  }

L115_:;
  // sym11 = ldf `is.null`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base11 = ldf `is.null` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args105);
  // if guard11 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

L116_:;
  // dnx = ld dnx
  Rsh_Fir_reg_dnx = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L118() else D42()
  // L118()
  goto L118_;

L117_:;
  // r74 = dyn base11(<sym dnx>)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L18(c6, r74)
  // L18(c6, r74)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r74_;
  goto L18_;

D42_:;
  // deopt 135 [c6, dnx]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_dnx;
  Rsh_Fir_deopt(135, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L118_:;
  // dnx1 = force? dnx
  Rsh_Fir_reg_dnx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dnx);
  // checkMissing(dnx1)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dnx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // c12 = `==`(dnx1, NULL)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dnx1_;
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args108);
  // goto L18(c6, c12)
  // L18(c6, c12)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_c12_;
  goto L18_;

L119_:;
  // sym12 = ldf `is.null`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base12 = ldf `is.null` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args109);
  // if guard12 then L120() else L121()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L120()
    goto L120_;
  } else {
  // L121()
    goto L121_;
  }

L120_:;
  // dny = ld dny
  Rsh_Fir_reg_dny = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L122() else D43()
  // L122()
  goto L122_;

L121_:;
  // r76 = dyn base12(<sym dny>)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L20(c11, c13, r76)
  // L20(c11, c13, r76)
  Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r76_;
  goto L20_;

D43_:;
  // deopt 139 [c11, c13, dny]
  SEXP Rsh_Fir_array_deopt_stack38[3];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_c13_;
  Rsh_Fir_array_deopt_stack38[2] = Rsh_Fir_reg_dny;
  Rsh_Fir_deopt(139, 3, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L122_:;
  // dny1 = force? dny
  Rsh_Fir_reg_dny1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dny);
  // checkMissing(dny1)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dny1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // c24 = `==`(dny1, NULL)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dny1_;
  Rsh_Fir_array_args112[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args112);
  // goto L20(c11, c13, c24)
  // L20(c11, c13, c24)
  Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_c24_;
  goto L20_;

L125_:;
  // sym13 = ldf `is.null`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base13 = ldf `is.null` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args113);
  // if guard13 then L126() else L127()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L126()
    goto L126_;
  } else {
  // L127()
    goto L127_;
  }

L126_:;
  // dnx2 = ld dnx
  Rsh_Fir_reg_dnx2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L128() else D44()
  // L128()
  goto L128_;

L127_:;
  // r79 = dyn base13(<sym dnx>)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L22(r79)
  // L22(r79)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r79_;
  goto L22_;

D44_:;
  // deopt 146 [dnx2]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_dnx2_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L128_:;
  // dnx3 = force? dnx2
  Rsh_Fir_reg_dnx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dnx2_);
  // checkMissing(dnx3)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_dnx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // c33 = `==`(dnx3, NULL)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_dnx3_;
  Rsh_Fir_array_args116[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args116);
  // goto L22(c33)
  // L22(c33)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_c33_;
  goto L22_;

L129_:;
  // sym14 = ldf vector
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base14 = ldf vector in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args117);
  // if guard14 then L130() else L131()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L130()
    goto L130_;
  } else {
  // L131()
    goto L131_;
  }

L130_:;
  // sym15 = ldf length
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base15 = ldf length in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args118);
  // if guard15 then L132() else L133()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L132()
    goto L132_;
  } else {
  // L133()
    goto L133_;
  }

L131_:;
  // r81 = dyn base14("list", <lang length(dX)>)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args119[1] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 2, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L24(r81)
  // L24(r81)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r81_;
  goto L24_;

L132_:;
  // dX8 = ld dX
  Rsh_Fir_reg_dX8_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L134() else D45()
  // L134()
  goto L134_;

L133_:;
  // r83 = dyn base15(<sym dX>)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L25(r83)
  // L25(r83)
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r83_;
  goto L25_;

D45_:;
  // deopt 154 [dX8]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_dX8_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L134_:;
  // dX9 = force? dX8
  Rsh_Fir_reg_dX9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dX8_);
  // checkMissing(dX9)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dX9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r85 = dyn length3(dX9)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dX9_;
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L135() else D46()
  // L135()
  goto L135_;

D46_:;
  // deopt 157 [r85]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L135_:;
  // goto L25(r85)
  // L25(r85)
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r85_;
  goto L25_;

D47_:;
  // deopt 159 [r86]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(159, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L136_:;
  // goto L24(r86)
  // L24(r86)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r86_;
  goto L24_;

D48_:;
  // deopt 161 [ld8]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_ld8_;
  Rsh_Fir_deopt(161, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L138_:;
  // ld9 = force? ld8
  Rsh_Fir_reg_ld9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ld8_);
  // checkMissing(ld9)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_ld9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // r88 = `<`(ld9, 0)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_ld9_;
  Rsh_Fir_array_args124[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args124);
  // c35 = `as.logical`(r88)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args125);
  // if c35 then L139() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L139()
    goto L139_;
  } else {
  // L27()
    goto L27_;
  }

L139_:;
  // sym16 = ldf c
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base16 = ldf c in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args126);
  // if guard16 then L140() else L141()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L140()
    goto L140_;
  } else {
  // L141()
    goto L141_;
  }

L140_:;
  // dnx4 = ld dnx
  Rsh_Fir_reg_dnx4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L142() else D49()
  // L142()
  goto L142_;

L141_:;
  // r89 = dyn base16(<sym dnx>, <lang vector("list", `-`(ld))>)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args127[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 2, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L28(r89)
  // L28(r89)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r89_;
  goto L28_;

D49_:;
  // deopt 167 [dnx4]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_dnx4_;
  Rsh_Fir_deopt(167, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L142_:;
  // dnx5 = force? dnx4
  Rsh_Fir_reg_dnx5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dnx4_);
  // checkMissing(dnx5)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dnx5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // sym17 = ldf vector
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base17 = ldf vector in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args129);
  // if guard17 then L143() else L144()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L143()
    goto L143_;
  } else {
  // L144()
    goto L144_;
  }

L143_:;
  // ld10 = ld ld
  Rsh_Fir_reg_ld10_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L145() else D50()
  // L145()
  goto L145_;

L144_:;
  // r91 = dyn base17("list", <lang `-`(ld)>)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args130[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 2, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L29(r91)
  // L29(r91)
  Rsh_Fir_reg_r92_ = Rsh_Fir_reg_r91_;
  goto L29_;

D50_:;
  // deopt 172 [ld10]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_ld10_;
  Rsh_Fir_deopt(172, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L145_:;
  // ld11 = force? ld10
  Rsh_Fir_reg_ld11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ld10_);
  // checkMissing(ld11)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_ld11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // r93 = `-`(<missing>, ld11)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_ld11_;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args132);
  // vector1 = ldf vector in base
  Rsh_Fir_reg_vector1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r94 = dyn vector1("list", r93)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_array_arg_names46[2];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector1_, 2, Rsh_Fir_array_args133, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L146() else D51()
  // L146()
  goto L146_;

D51_:;
  // deopt 176 [r94]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_deopt(176, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L146_:;
  // goto L29(r94)
  // L29(r94)
  Rsh_Fir_reg_r92_ = Rsh_Fir_reg_r94_;
  goto L29_;

D52_:;
  // deopt 178 [r95]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_deopt(178, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L147_:;
  // goto L28(r95)
  // L28(r95)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r95_;
  goto L28_;

D53_:;
  // deopt 183 []
  Rsh_Fir_deopt(183, 0, NULL, CCP, RHO);
  return R_NilValue;

L149_:;
  // p12 = prom<V +>{
  //   sapply = ldf sapply;
  //   p10 = prom<V +>{
  //     dnx6 = ld dnx;
  //     dnx7 = force? dnx6;
  //     checkMissing(dnx7);
  //     return dnx7;
  //   };
  //   p11 = prom<V +>{
  //     is_null = ld `is.null`;
  //     is_null1 = force? is_null;
  //     checkMissing(is_null1);
  //     return is_null1;
  //   };
  //   r98 = dyn sapply(p10, p11);
  //   return r98;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_10, 0, NULL, CCP, RHO);
  // r100 = dyn which(p12)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which, 1, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L150() else D54()
  // L150()
  goto L150_;

D54_:;
  // deopt 185 [r100]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_deopt(185, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L150_:;
  // st tmp = r100
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r100_, RHO);
  (void)(Rsh_Fir_reg_r100_);
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // check L151() else D55()
  // L151()
  goto L151_;

D55_:;
  // deopt 188 []
  Rsh_Fir_deopt(188, 0, NULL, CCP, RHO);
  return R_NilValue;

L151_:;
  // p13 = prom<V +>{
  //   tmp = ld tmp;
  //   tmp1 = force? tmp;
  //   checkMissing(tmp1);
  //   return tmp1;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_13, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   r102 = clos inner3002224933;
  //   return r102;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_14, 0, NULL, CCP, RHO);
  // r104 = dyn lapply(p13, p14)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args139[1] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names49[2];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L152() else D56()
  // L152()
  goto L152_;

D56_:;
  // deopt 191 [r104]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r104_;
  Rsh_Fir_deopt(191, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L152_:;
  // l3 = ld dnx
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c37 = `is.object`(l3)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args140);
  // if c37 then L153() else L154(r104, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L153()
    goto L153_;
  } else {
  // L154(r104, l3)
    Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r104_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L154_;
  }

L153_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l3, r104)
  SEXP Rsh_Fir_array_args141[3];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args141[2] = Rsh_Fir_reg_r104_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args141);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // if dc1 then L155() else L154(r104, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L155()
    goto L155_;
  } else {
  // L154(r104, dr2)
    Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r104_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr2_;
    goto L154_;
  }

L154_:;
  // tmp2 = ld tmp
  Rsh_Fir_reg_tmp2_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L156() else D57()
  // L156()
  goto L156_;

L155_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // goto L30(dx2)
  // L30(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L30_;

D57_:;
  // deopt 193 [r106, l5, r104, tmp2]
  SEXP Rsh_Fir_array_deopt_stack50[4];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r106_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack50[2] = Rsh_Fir_reg_r104_;
  Rsh_Fir_array_deopt_stack50[3] = Rsh_Fir_reg_tmp2_;
  Rsh_Fir_deopt(193, 4, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L156_:;
  // tmp3 = force? tmp2
  Rsh_Fir_reg_tmp3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp2_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // r109 = dyn ___(l5, r104, tmp3)
  SEXP Rsh_Fir_array_args144[3];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg_r104_;
  Rsh_Fir_array_args144[2] = Rsh_Fir_reg_tmp3_;
  SEXP Rsh_Fir_array_arg_names50[3];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_array_arg_names50[2] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L30(r109)
  // L30(r109)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r109_;
  goto L30_;

L157_:;
  // dny2 = ld dny
  Rsh_Fir_reg_dny2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L159() else D58()
  // L159()
  goto L159_;

L158_:;
  // r110 = dyn base18(<sym dny>)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L31(r110)
  // L31(r110)
  Rsh_Fir_reg_r111_ = Rsh_Fir_reg_r110_;
  goto L31_;

D58_:;
  // deopt 198 [dny2]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_dny2_;
  Rsh_Fir_deopt(198, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L159_:;
  // dny3 = force? dny2
  Rsh_Fir_reg_dny3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dny2_);
  // checkMissing(dny3)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_dny3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty()));
  // c38 = `==`(dny3, NULL)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_dny3_;
  Rsh_Fir_array_args147[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args147);
  // goto L31(c38)
  // L31(c38)
  Rsh_Fir_reg_r111_ = Rsh_Fir_reg_c38_;
  goto L31_;

L160_:;
  // sym19 = ldf vector
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base19 = ldf vector in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args148[2];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args148[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args148);
  // if guard19 then L161() else L162()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L161()
    goto L161_;
  } else {
  // L162()
    goto L162_;
  }

L161_:;
  // sym20 = ldf length
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base20 = ldf length in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args149);
  // if guard20 then L163() else L164()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L163()
    goto L163_;
  } else {
  // L164()
    goto L164_;
  }

L162_:;
  // r112 = dyn base19("list", <lang length(dY)>)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args150[1] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names52[2];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 2, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L33(r112)
  // L33(r112)
  Rsh_Fir_reg_r113_ = Rsh_Fir_reg_r112_;
  goto L33_;

L163_:;
  // dY6 = ld dY
  Rsh_Fir_reg_dY6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L165() else D59()
  // L165()
  goto L165_;

L164_:;
  // r114 = dyn base20(<sym dY>)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r114_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 1, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L34(r114)
  // L34(r114)
  Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r114_;
  goto L34_;

D59_:;
  // deopt 206 [dY6]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_dY6_;
  Rsh_Fir_deopt(206, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L165_:;
  // dY7 = force? dY6
  Rsh_Fir_reg_dY7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dY6_);
  // checkMissing(dY7)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_dY7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty()));
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r116 = dyn length4(dY7)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_dY7_;
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names54, CCP, RHO);
  // check L166() else D60()
  // L166()
  goto L166_;

D60_:;
  // deopt 209 [r116]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r116_;
  Rsh_Fir_deopt(209, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L166_:;
  // goto L34(r116)
  // L34(r116)
  Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r116_;
  goto L34_;

D61_:;
  // deopt 211 [r117]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_r117_;
  Rsh_Fir_deopt(211, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L167_:;
  // goto L33(r117)
  // L33(r117)
  Rsh_Fir_reg_r113_ = Rsh_Fir_reg_r117_;
  goto L33_;

D62_:;
  // deopt 213 [ld12]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_ld12_;
  Rsh_Fir_deopt(213, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L169_:;
  // ld13 = force? ld12
  Rsh_Fir_reg_ld13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ld12_);
  // checkMissing(ld13)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_ld13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty()));
  // r119 = `>`(ld13, 0.0)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_ld13_;
  Rsh_Fir_array_args155[1] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args155);
  // c40 = `as.logical`(r119)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_r119_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args156);
  // if c40 then L170() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L170()
    goto L170_;
  } else {
  // L36()
    goto L36_;
  }

L170_:;
  // sym21 = ldf c
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base21 = ldf c in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args157[2];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args157[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args157);
  // if guard21 then L171() else L172()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L171()
    goto L171_;
  } else {
  // L172()
    goto L172_;
  }

L171_:;
  // dny4 = ld dny
  Rsh_Fir_reg_dny4_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L173() else D63()
  // L173()
  goto L173_;

L172_:;
  // r120 = dyn base21(<sym dny>, <lang vector("list", ld)>)
  SEXP Rsh_Fir_array_args158[2];
  Rsh_Fir_array_args158[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args158[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names55[2];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_reg_r120_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 2, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L37(r120)
  // L37(r120)
  Rsh_Fir_reg_r121_ = Rsh_Fir_reg_r120_;
  goto L37_;

D63_:;
  // deopt 219 [dny4]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_dny4_;
  Rsh_Fir_deopt(219, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L173_:;
  // dny5 = force? dny4
  Rsh_Fir_reg_dny5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dny4_);
  // checkMissing(dny5)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_dny5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // sym22 = ldf vector
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base22 = ldf vector in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args160[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args160);
  // if guard22 then L174() else L175()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L174()
    goto L174_;
  } else {
  // L175()
    goto L175_;
  }

L174_:;
  // ld14 = ld ld
  Rsh_Fir_reg_ld14_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L176() else D64()
  // L176()
  goto L176_;

L175_:;
  // r122 = dyn base22("list", <sym ld>)
  SEXP Rsh_Fir_array_args161[2];
  Rsh_Fir_array_args161[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args161[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names56[2];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 2, Rsh_Fir_array_args161, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L38(r122)
  // L38(r122)
  Rsh_Fir_reg_r123_ = Rsh_Fir_reg_r122_;
  goto L38_;

D64_:;
  // deopt 224 [ld14]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_ld14_;
  Rsh_Fir_deopt(224, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L176_:;
  // ld15 = force? ld14
  Rsh_Fir_reg_ld15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ld14_);
  // checkMissing(ld15)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_ld15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty()));
  // vector3 = ldf vector in base
  Rsh_Fir_reg_vector3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r124 = dyn vector3("list", ld15)
  SEXP Rsh_Fir_array_args163[2];
  Rsh_Fir_array_args163[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args163[1] = Rsh_Fir_reg_ld15_;
  SEXP Rsh_Fir_array_arg_names57[2];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_reg_r124_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector3_, 2, Rsh_Fir_array_args163, Rsh_Fir_array_arg_names57, CCP, RHO);
  // check L177() else D65()
  // L177()
  goto L177_;

D65_:;
  // deopt 227 [r124]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r124_;
  Rsh_Fir_deopt(227, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L177_:;
  // goto L38(r124)
  // L38(r124)
  Rsh_Fir_reg_r123_ = Rsh_Fir_reg_r124_;
  goto L38_;

D66_:;
  // deopt 229 [r125]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_r125_;
  Rsh_Fir_deopt(229, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L178_:;
  // goto L37(r125)
  // L37(r125)
  Rsh_Fir_reg_r121_ = Rsh_Fir_reg_r125_;
  goto L37_;

D67_:;
  // deopt 234 []
  Rsh_Fir_deopt(234, 0, NULL, CCP, RHO);
  return R_NilValue;

L180_:;
  // p17 = prom<V +>{
  //   sapply1 = ldf sapply;
  //   p15 = prom<V +>{
  //     dny6 = ld dny;
  //     dny7 = force? dny6;
  //     checkMissing(dny7);
  //     return dny7;
  //   };
  //   p16 = prom<V +>{
  //     is_null2 = ld `is.null`;
  //     is_null3 = force? is_null2;
  //     checkMissing(is_null3);
  //     return is_null3;
  //   };
  //   r128 = dyn sapply1(p15, p16);
  //   return r128;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_15, 0, NULL, CCP, RHO);
  // r130 = dyn which1(p17)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names59[1];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_reg_r130_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which1_, 1, Rsh_Fir_array_args167, Rsh_Fir_array_arg_names59, CCP, RHO);
  // check L181() else D68()
  // L181()
  goto L181_;

D68_:;
  // deopt 236 [r130]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_r130_;
  Rsh_Fir_deopt(236, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L181_:;
  // st tmp = r130
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r130_, RHO);
  (void)(Rsh_Fir_reg_r130_);
  // lapply1 = ldf lapply
  Rsh_Fir_reg_lapply1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // check L182() else D69()
  // L182()
  goto L182_;

D69_:;
  // deopt 239 []
  Rsh_Fir_deopt(239, 0, NULL, CCP, RHO);
  return R_NilValue;

L182_:;
  // p18 = prom<V +>{
  //   tmp4 = ld tmp;
  //   tmp5 = force? tmp4;
  //   checkMissing(tmp5);
  //   return tmp5;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_18, 0, NULL, CCP, RHO);
  // p19 = prom<V +>{
  //   r132 = clos inner3002224933;
  //   return r132;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_19, 0, NULL, CCP, RHO);
  // r134 = dyn lapply1(p18, p19)
  SEXP Rsh_Fir_array_args169[2];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args169[1] = Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_array_arg_names60[2];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_reg_r134_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply1_, 2, Rsh_Fir_array_args169, Rsh_Fir_array_arg_names60, CCP, RHO);
  // check L183() else D70()
  // L183()
  goto L183_;

D70_:;
  // deopt 242 [r134]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_r134_;
  Rsh_Fir_deopt(242, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L183_:;
  // l6 = ld dny
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // c42 = `is.object`(l6)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args170);
  // if c42 then L184() else L185(r134, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L184()
    goto L184_;
  } else {
  // L185(r134, l6)
    Rsh_Fir_reg_r136_ = Rsh_Fir_reg_r134_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L185_;
  }

L184_:;
  // dr4 = tryDispatchBuiltin.0("[<-", l6, r134)
  SEXP Rsh_Fir_array_args171[3];
  Rsh_Fir_array_args171[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args171[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args171[2] = Rsh_Fir_reg_r134_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args171);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty());
  // if dc2 then L186() else L185(r134, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L186()
    goto L186_;
  } else {
  // L185(r134, dr4)
    Rsh_Fir_reg_r136_ = Rsh_Fir_reg_r134_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr4_;
    goto L185_;
  }

L185_:;
  // tmp6 = ld tmp
  Rsh_Fir_reg_tmp6_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L187() else D71()
  // L187()
  goto L187_;

L186_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // goto L39(dx4)
  // L39(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L39_;

D71_:;
  // deopt 244 [r136, l8, r134, tmp6]
  SEXP Rsh_Fir_array_deopt_stack62[4];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_r136_;
  Rsh_Fir_array_deopt_stack62[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack62[2] = Rsh_Fir_reg_r134_;
  Rsh_Fir_array_deopt_stack62[3] = Rsh_Fir_reg_tmp6_;
  Rsh_Fir_deopt(244, 4, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L187_:;
  // tmp7 = force? tmp6
  Rsh_Fir_reg_tmp7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp6_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // r139 = dyn ___1(l8, r134, tmp7)
  SEXP Rsh_Fir_array_args174[3];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args174[1] = Rsh_Fir_reg_r134_;
  Rsh_Fir_array_args174[2] = Rsh_Fir_reg_tmp7_;
  SEXP Rsh_Fir_array_arg_names61[3];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_array_arg_names61[1] = R_MissingArg;
  Rsh_Fir_array_arg_names61[2] = R_MissingArg;
  Rsh_Fir_reg_r139_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args174, Rsh_Fir_array_arg_names61, CCP, RHO);
  // goto L39(r139)
  // L39(r139)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r139_;
  goto L39_;

L188_:;
  // sym24 = ldf dim
  Rsh_Fir_reg_sym24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base24 = ldf dim in base
  Rsh_Fir_reg_base24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard24 = `==`.4(sym24, base24)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_sym24_;
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_base24_;
  Rsh_Fir_reg_guard24_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args175);
  // if guard24 then L190() else L191()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard24_)) {
  // L190()
    goto L190_;
  } else {
  // L191()
    goto L191_;
  }

L189_:;
  // r140 = dyn base23(<lang dim(opobj)>)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names62[1];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 1, Rsh_Fir_array_args176, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L40(r140)
  // L40(r140)
  Rsh_Fir_reg_r141_ = Rsh_Fir_reg_r140_;
  goto L40_;

L190_:;
  // opobj2 = ld opobj
  Rsh_Fir_reg_opobj2_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L192() else D72()
  // L192()
  goto L192_;

L191_:;
  // r142 = dyn base24(<sym opobj>)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names63[1];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_reg_r142_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base24_, 1, Rsh_Fir_array_args177, Rsh_Fir_array_arg_names63, CCP, RHO);
  // goto L41(r142)
  // L41(r142)
  Rsh_Fir_reg_r143_ = Rsh_Fir_reg_r142_;
  goto L41_;

D72_:;
  // deopt 252 [opobj2]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_opobj2_;
  Rsh_Fir_deopt(252, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L192_:;
  // opobj3 = force? opobj2
  Rsh_Fir_reg_opobj3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opobj2_);
  // checkMissing(opobj3)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_opobj3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty()));
  // dim2 = ldf dim in base
  Rsh_Fir_reg_dim2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r144 = dyn dim2(opobj3)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_opobj3_;
  SEXP Rsh_Fir_array_arg_names64[1];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_reg_r144_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim2_, 1, Rsh_Fir_array_args179, Rsh_Fir_array_arg_names64, CCP, RHO);
  // check L193() else D73()
  // L193()
  goto L193_;

D73_:;
  // deopt 255 [r144]
  SEXP Rsh_Fir_array_deopt_stack64[1];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_r144_;
  Rsh_Fir_deopt(255, 1, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L193_:;
  // goto L41(r144)
  // L41(r144)
  Rsh_Fir_reg_r143_ = Rsh_Fir_reg_r144_;
  goto L41_;

D74_:;
  // deopt 257 [r145]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_r145_;
  Rsh_Fir_deopt(257, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L194_:;
  // goto L40(r145)
  // L40(r145)
  Rsh_Fir_reg_r141_ = Rsh_Fir_reg_r145_;
  goto L40_;

L195_:;
  // k = ld k
  Rsh_Fir_reg_k = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L197() else D75()
  // L197()
  goto L197_;

L196_:;
  // r146 = dyn base25("list", <sym k>)
  SEXP Rsh_Fir_array_args180[2];
  Rsh_Fir_array_args180[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args180[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names65[2];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_array_arg_names65[1] = R_MissingArg;
  Rsh_Fir_reg_r146_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base25_, 2, Rsh_Fir_array_args180, Rsh_Fir_array_arg_names65, CCP, RHO);
  // goto L42(r146)
  // L42(r146)
  Rsh_Fir_reg_r147_ = Rsh_Fir_reg_r146_;
  goto L42_;

D75_:;
  // deopt 262 [k]
  SEXP Rsh_Fir_array_deopt_stack66[1];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_k;
  Rsh_Fir_deopt(262, 1, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L197_:;
  // k1 = force? k
  Rsh_Fir_reg_k1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k);
  // checkMissing(k1)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_k1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty()));
  // vector4 = ldf vector in base
  Rsh_Fir_reg_vector4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r148 = dyn vector4("list", k1)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_k1_;
  SEXP Rsh_Fir_array_arg_names66[2];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_array_arg_names66[1] = R_MissingArg;
  Rsh_Fir_reg_r148_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector4_, 2, Rsh_Fir_array_args182, Rsh_Fir_array_arg_names66, CCP, RHO);
  // check L198() else D76()
  // L198()
  goto L198_;

D76_:;
  // deopt 265 [r148]
  SEXP Rsh_Fir_array_deopt_stack67[1];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_r148_;
  Rsh_Fir_deopt(265, 1, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L198_:;
  // goto L42(r148)
  // L42(r148)
  Rsh_Fir_reg_r147_ = Rsh_Fir_reg_r148_;
  goto L42_;

D77_:;
  // deopt 268 [1, k2]
  SEXP Rsh_Fir_array_deopt_stack68[2];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_deopt_stack68[1] = Rsh_Fir_reg_k2_;
  Rsh_Fir_deopt(268, 2, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L199_:;
  // k3 = force? k2
  Rsh_Fir_reg_k3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k2_);
  // checkMissing(k3)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_k3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty()));
  // r149 = `:`(1, k3)
  SEXP Rsh_Fir_array_args184[2];
  Rsh_Fir_array_args184[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args184[1] = Rsh_Fir_reg_k3_;
  Rsh_Fir_reg_r149_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args184);
  // s = toForSeq(r149)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_r149_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty());
  // l9 = length(s)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l9_ = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args186);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 31);
  // goto L43(i)
  // L43(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L43_;

L200_:;
  // dno = ld dno
  Rsh_Fir_reg_dno = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L209() else D83()
  // L209()
  goto L209_;

D78_:;
  // deopt 272 [i2]
  SEXP Rsh_Fir_array_deopt_stack69[1];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(272, 1, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L201_:;
  // p20 = prom<V +>{
  //   dnx8 = ld dnx;
  //   dnx9 = force? dnx8;
  //   checkMissing(dnx9);
  //   c44 = `is.object`(dnx9);
  //   if c44 then L1() else L2(dnx9);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[[", dnx9);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(dnx11):
  //   i5 = ld i;
  //   i6 = force? i5;
  //   __1 = ldf `[[` in base;
  //   r150 = dyn __1(dnx11, i6);
  //   goto L0(r150);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_20, 0, NULL, CCP, RHO);
  // p21 = prom<V +>{
  //   dny8 = ld dny;
  //   dny9 = force? dny8;
  //   checkMissing(dny9);
  //   c45 = `is.object`(dny9);
  //   if c45 then L1() else L2(dny9);
  // L0(dx9):
  //   return dx9;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("[[", dny9);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(dny11):
  //   i7 = ld i;
  //   i8 = force? i7;
  //   __2 = ldf `[[` in base;
  //   r152 = dyn __2(dny11, i8);
  //   goto L0(r152);
  // L3():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx8);
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_21, 0, NULL, CCP, RHO);
  // p22 = prom<V +>{
  //   paste = ld paste;
  //   paste1 = force? paste;
  //   checkMissing(paste1);
  //   return paste1;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_22, 0, NULL, CCP, RHO);
  // r155 = dyn outer1[, , FUN, sep](p20, p21, p22, ":")
  SEXP Rsh_Fir_array_args200[4];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_p20_;
  Rsh_Fir_array_args200[1] = Rsh_Fir_reg_p21_;
  Rsh_Fir_array_args200[2] = Rsh_Fir_reg_p22_;
  Rsh_Fir_array_args200[3] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names69[4];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_array_arg_names69[1] = R_MissingArg;
  Rsh_Fir_array_arg_names69[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names69[3] = Rsh_const(CCP, 63);
  Rsh_Fir_reg_r155_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_outer1_, 4, Rsh_Fir_array_args200, Rsh_Fir_array_arg_names69, CCP, RHO);
  // check L202() else D79()
  // L202()
  goto L202_;

D79_:;
  // deopt 279 [i2, r155]
  SEXP Rsh_Fir_array_deopt_stack70[2];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack70[1] = Rsh_Fir_reg_r155_;
  Rsh_Fir_deopt(279, 2, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L202_:;
  // st tmp = r155
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r155_, RHO);
  (void)(Rsh_Fir_reg_r155_);
  // as_vector1 = ldf `as.vector`
  Rsh_Fir_reg_as_vector1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L203() else D80()
  // L203()
  goto L203_;

D80_:;
  // deopt 282 [i2]
  SEXP Rsh_Fir_array_deopt_stack71[1];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(282, 1, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L203_:;
  // p24 = prom<V +>{
  //   t1 = ldf t;
  //   p23 = prom<V +>{
  //     tmp8 = ld tmp;
  //     tmp9 = force? tmp8;
  //     checkMissing(tmp9);
  //     return tmp9;
  //   };
  //   r157 = dyn t1(p23);
  //   return r157;
  // }
  Rsh_Fir_reg_p24_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_23, 0, NULL, CCP, RHO);
  // r159 = dyn as_vector1(p24)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_p24_;
  SEXP Rsh_Fir_array_arg_names71[1];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_reg_r159_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_vector1_, 1, Rsh_Fir_array_args203, Rsh_Fir_array_arg_names71, CCP, RHO);
  // check L204() else D81()
  // L204()
  goto L204_;

D81_:;
  // deopt 284 [i2, r159]
  SEXP Rsh_Fir_array_deopt_stack72[2];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack72[1] = Rsh_Fir_reg_r159_;
  Rsh_Fir_deopt(284, 2, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L204_:;
  // l10 = ld dno
  Rsh_Fir_reg_l10_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // c46 = `is.object`(l10)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args204);
  // if c46 then L205() else L206(i2, r159, l10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L205()
    goto L205_;
  } else {
  // L206(i2, r159, l10)
    Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r161_ = Rsh_Fir_reg_r159_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l10_;
    goto L206_;
  }

L205_:;
  // dr10 = tryDispatchBuiltin.0("[[<-", l10, r159)
  SEXP Rsh_Fir_array_args205[3];
  Rsh_Fir_array_args205[0] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args205[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args205[2] = Rsh_Fir_reg_r159_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args205);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty());
  // if dc5 then L207() else L206(i2, r159, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L207()
    goto L207_;
  } else {
  // L206(i2, r159, dr10)
    Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r161_ = Rsh_Fir_reg_r159_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_dr10_;
    goto L206_;
  }

L206_:;
  // i13 = ld i
  Rsh_Fir_reg_i13_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L208() else D82()
  // L208()
  goto L208_;

L207_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args207, Rsh_Fir_param_types_empty());
  // goto L44(i2, dx10)
  // L44(i2, dx10)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L44_;

D82_:;
  // deopt 286 [i10, r161, l12, r159, i13]
  SEXP Rsh_Fir_array_deopt_stack73[5];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack73[1] = Rsh_Fir_reg_r161_;
  Rsh_Fir_array_deopt_stack73[2] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack73[3] = Rsh_Fir_reg_r159_;
  Rsh_Fir_array_deopt_stack73[4] = Rsh_Fir_reg_i13_;
  Rsh_Fir_deopt(286, 5, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L208_:;
  // i14 = force? i13
  Rsh_Fir_reg_i14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i13_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 65), RHO);
  // r164 = dyn ____(l12, r159, i14)
  SEXP Rsh_Fir_array_args208[3];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args208[1] = Rsh_Fir_reg_r159_;
  Rsh_Fir_array_args208[2] = Rsh_Fir_reg_i14_;
  SEXP Rsh_Fir_array_arg_names72[3];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_array_arg_names72[1] = R_MissingArg;
  Rsh_Fir_array_arg_names72[2] = R_MissingArg;
  Rsh_Fir_reg_r164_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args208, Rsh_Fir_array_arg_names72, CCP, RHO);
  // goto L44(i10, r164)
  // L44(i10, r164)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i10_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r164_;
  goto L44_;

D83_:;
  // deopt 293 [dno]
  SEXP Rsh_Fir_array_deopt_stack74[1];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_dno;
  Rsh_Fir_deopt(293, 1, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L209_:;
  // dno1 = force? dno
  Rsh_Fir_reg_dno1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dno);
  // checkMissing(dno1)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_dno1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty()));
  // l13 = ld opobj
  Rsh_Fir_reg_l13_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // dimnames__ = ldf `dimnames<-`
  Rsh_Fir_reg_dimnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // check L210() else D84()
  // L210()
  goto L210_;

D84_:;
  // deopt 296 [dno1, l13, dno1]
  SEXP Rsh_Fir_array_deopt_stack75[3];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_dno1_;
  Rsh_Fir_array_deopt_stack75[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack75[2] = Rsh_Fir_reg_dno1_;
  Rsh_Fir_deopt(296, 3, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L210_:;
  // r165 = dyn dimnames__(l13, NULL, dno1)
  SEXP Rsh_Fir_array_args210[3];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args210[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args210[2] = Rsh_Fir_reg_dno1_;
  SEXP Rsh_Fir_array_arg_names73[3];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_array_arg_names73[1] = R_MissingArg;
  Rsh_Fir_array_arg_names73[2] = R_MissingArg;
  Rsh_Fir_reg_r165_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames__, 3, Rsh_Fir_array_args210, Rsh_Fir_array_arg_names73, CCP, RHO);
  // check L211() else D85()
  // L211()
  goto L211_;

D85_:;
  // deopt 298 [dno1, r165]
  SEXP Rsh_Fir_array_deopt_stack76[2];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_dno1_;
  Rsh_Fir_array_deopt_stack76[1] = Rsh_Fir_reg_r165_;
  Rsh_Fir_deopt(298, 2, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

L211_:;
  // st opobj = r165
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r165_, RHO);
  (void)(Rsh_Fir_reg_r165_);
  // goto L46()
  // L46()
  goto L46_;

D86_:;
  // deopt 302 [opobj4]
  SEXP Rsh_Fir_array_deopt_stack77[1];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_opobj4_;
  Rsh_Fir_deopt(302, 1, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

L213_:;
  // opobj5 = force? opobj4
  Rsh_Fir_reg_opobj5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opobj4_);
  // checkMissing(opobj5)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_opobj5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return opobj5
  return Rsh_Fir_reg_opobj5_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_X1_;
  SEXP Rsh_Fir_reg_X2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // X1 = ld X
  Rsh_Fir_reg_X1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // X2 = force? X1
  Rsh_Fir_reg_X2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X1_);
  // checkMissing(X2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_X2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return X2
  return Rsh_Fir_reg_X2_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Y1_;
  SEXP Rsh_Fir_reg_Y2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // Y1 = ld Y
  Rsh_Fir_reg_Y1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // Y2 = force? Y1
  Rsh_Fir_reg_Y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Y1_);
  // checkMissing(Y2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_Y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return Y2
  return Rsh_Fir_reg_Y2_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_X7_;
  SEXP Rsh_Fir_reg_X8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // X7 = ld X
  Rsh_Fir_reg_X7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // X8 = force? X7
  Rsh_Fir_reg_X8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X7_);
  // checkMissing(X8)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_X8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // return X8
  return Rsh_Fir_reg_X8_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Y7_;
  SEXP Rsh_Fir_reg_Y8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // Y7 = ld Y
  Rsh_Fir_reg_Y7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // Y8 = force? Y7
  Rsh_Fir_reg_Y8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Y7_);
  // checkMissing(Y8)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_Y8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // return Y8
  return Rsh_Fir_reg_Y8_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_FUN1_;
  SEXP Rsh_Fir_reg_FUN2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // FUN1 = ld FUN
  Rsh_Fir_reg_FUN1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // FUN2 = force? FUN1
  Rsh_Fir_reg_FUN2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_FUN1_);
  // checkMissing(FUN2)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_FUN2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // return FUN2
  return Rsh_Fir_reg_FUN2_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_t;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r66_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // t = ldf t
  Rsh_Fir_reg_t = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // p6 = prom<V +>{
  //   matrix = ldf matrix;
  //   p5 = prom<V +>{
  //     sym10 = ldf length;
  //     base10 = ldf length in base;
  //     guard10 = `==`.4(sym10, base10);
  //     if guard10 then L1() else L2();
  //   L0(r54, r55, r56):
  //     r58 = `*`(r55, r56);
  //     r59 = `:`(r54, r58);
  //     return r59;
  //   L1():
  //     dX4 = ld dX;
  //     dX5 = force? dX4;
  //     checkMissing(dX5);
  //     length2 = ldf length in base;
  //     r57 = dyn length2(dX5);
  //     goto L0(1, 2.0, r57);
  //   L2():
  //     r53 = dyn base10(<sym dX>);
  //     goto L0(1, 2.0, r53);
  //   };
  //   r61 = dyn matrix[, ncol](p5, 2.0);
  //   c5 = `is.object`(r61);
  //   if c5 then L1() else L2();
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", r61);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2();
  // L2():
  //   __ = ldf `[` in base;
  //   r64 = dyn __(r61, <missing>, <int 2, 1>);
  //   goto L0(r64);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_6, 0, NULL, CCP, RHO);
  // r66 = dyn t(p6)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_t, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names34, CCP, RHO);
  // return r66
  return Rsh_Fir_reg_r66_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_matrix;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r64_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // p5 = prom<V +>{
  //   sym10 = ldf length;
  //   base10 = ldf length in base;
  //   guard10 = `==`.4(sym10, base10);
  //   if guard10 then L1() else L2();
  // L0(r54, r55, r56):
  //   r58 = `*`(r55, r56);
  //   r59 = `:`(r54, r58);
  //   return r59;
  // L1():
  //   dX4 = ld dX;
  //   dX5 = force? dX4;
  //   checkMissing(dX5);
  //   length2 = ldf length in base;
  //   r57 = dyn length2(dX5);
  //   goto L0(1, 2.0, r57);
  // L2():
  //   r53 = dyn base10(<sym dX>);
  //   goto L0(1, 2.0, r53);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_7, 0, NULL, CCP, RHO);
  // r61 = dyn matrix[, ncol](p5, 2.0)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = Rsh_const(CCP, 42);
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names32, CCP, RHO);
  // c5 = `is.object`(r61)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args89);
  // if c5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", r61)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_r61_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args90);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r64 = dyn __(r61, <missing>, <int 2, 1>)
  SEXP Rsh_Fir_array_args92[3];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args92[2] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names33[3];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L0(r64)
  // L0(r64)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r64_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_dX4_;
  SEXP Rsh_Fir_reg_dX5_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_r59_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // sym10 = ldf length
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base10 = ldf length in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard10 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r58 = `*`(r55, r56)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args83);
  // r59 = `:`(r54, r58)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args84);
  // return r59
  return Rsh_Fir_reg_r59_;

L1_:;
  // dX4 = ld dX
  Rsh_Fir_reg_dX4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // dX5 = force? dX4
  Rsh_Fir_reg_dX5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dX4_);
  // checkMissing(dX5)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dX5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r57 = dyn length2(dX5)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dX5_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L0(1, 2.0, r57)
  // L0(1, 2.0, r57)
  Rsh_Fir_reg_r54_ = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r55_ = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r57_;
  goto L0_;

L2_:;
  // r53 = dyn base10(<sym dX>)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L0(1, 2.0, r53)
  // L0(1, 2.0, r53)
  Rsh_Fir_reg_r54_ = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r55_ = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r53_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_opobj;
  SEXP Rsh_Fir_reg_opobj1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // opobj = ld opobj
  Rsh_Fir_reg_opobj = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // opobj1 = force? opobj
  Rsh_Fir_reg_opobj1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_opobj);
  // checkMissing(opobj1)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_opobj1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // return opobj1
  return Rsh_Fir_reg_opobj1_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dp;
  SEXP Rsh_Fir_reg_dp1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // dp = ld dp
  Rsh_Fir_reg_dp = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // dp1 = force? dp
  Rsh_Fir_reg_dp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dp);
  // checkMissing(dp1)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // return dp1
  return Rsh_Fir_reg_dp1_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sapply;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r98_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // sapply = ldf sapply
  Rsh_Fir_reg_sapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // p10 = prom<V +>{
  //   dnx6 = ld dnx;
  //   dnx7 = force? dnx6;
  //   checkMissing(dnx7);
  //   return dnx7;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_11, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   is_null = ld `is.null`;
  //   is_null1 = force? is_null;
  //   checkMissing(is_null1);
  //   return is_null1;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_12, 0, NULL, CCP, RHO);
  // r98 = dyn sapply(p10, p11)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sapply, 2, Rsh_Fir_array_args136, Rsh_Fir_array_arg_names47, CCP, RHO);
  // return r98
  return Rsh_Fir_reg_r98_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dnx6_;
  SEXP Rsh_Fir_reg_dnx7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // dnx6 = ld dnx
  Rsh_Fir_reg_dnx6_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // dnx7 = force? dnx6
  Rsh_Fir_reg_dnx7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dnx6_);
  // checkMissing(dnx7)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dnx7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty()));
  // return dnx7
  return Rsh_Fir_reg_dnx7_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_is_null;
  SEXP Rsh_Fir_reg_is_null1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // is_null = ld `is.null`
  Rsh_Fir_reg_is_null = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // is_null1 = force? is_null
  Rsh_Fir_reg_is_null1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_is_null);
  // checkMissing(is_null1)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_is_null1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // return is_null1
  return Rsh_Fir_reg_is_null1_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tmp;
  SEXP Rsh_Fir_reg_tmp1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // tmp = ld tmp
  Rsh_Fir_reg_tmp = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // tmp1 = force? tmp
  Rsh_Fir_reg_tmp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp);
  // checkMissing(tmp1)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_tmp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty()));
  // return tmp1
  return Rsh_Fir_reg_tmp1_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r102_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // r102 = clos inner3002224933
  Rsh_Fir_reg_r102_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3002224933_, RHO, CCP);
  // return r102
  return Rsh_Fir_reg_r102_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sapply1_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r128_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // sapply1 = ldf sapply
  Rsh_Fir_reg_sapply1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // p15 = prom<V +>{
  //   dny6 = ld dny;
  //   dny7 = force? dny6;
  //   checkMissing(dny7);
  //   return dny7;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_16, 0, NULL, CCP, RHO);
  // p16 = prom<V +>{
  //   is_null2 = ld `is.null`;
  //   is_null3 = force? is_null2;
  //   checkMissing(is_null3);
  //   return is_null3;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_17, 0, NULL, CCP, RHO);
  // r128 = dyn sapply1(p15, p16)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names58[2];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_array_arg_names58[1] = R_MissingArg;
  Rsh_Fir_reg_r128_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sapply1_, 2, Rsh_Fir_array_args166, Rsh_Fir_array_arg_names58, CCP, RHO);
  // return r128
  return Rsh_Fir_reg_r128_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dny6_;
  SEXP Rsh_Fir_reg_dny7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // dny6 = ld dny
  Rsh_Fir_reg_dny6_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // dny7 = force? dny6
  Rsh_Fir_reg_dny7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dny6_);
  // checkMissing(dny7)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_dny7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // return dny7
  return Rsh_Fir_reg_dny7_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_is_null2_;
  SEXP Rsh_Fir_reg_is_null3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // is_null2 = ld `is.null`
  Rsh_Fir_reg_is_null2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // is_null3 = force? is_null2
  Rsh_Fir_reg_is_null3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_is_null2_);
  // checkMissing(is_null3)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_is_null3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty()));
  // return is_null3
  return Rsh_Fir_reg_is_null3_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tmp4_;
  SEXP Rsh_Fir_reg_tmp5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // tmp4 = ld tmp
  Rsh_Fir_reg_tmp4_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // tmp5 = force? tmp4
  Rsh_Fir_reg_tmp5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp4_);
  // checkMissing(tmp5)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_tmp5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty()));
  // return tmp5
  return Rsh_Fir_reg_tmp5_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r132_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // r132 = clos inner3002224933
  Rsh_Fir_reg_r132_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3002224933_, RHO, CCP);
  // return r132
  return Rsh_Fir_reg_r132_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dnx8_;
  SEXP Rsh_Fir_reg_dnx9_;
  SEXP Rsh_Fir_reg_c44_;
  SEXP Rsh_Fir_reg_dnx11_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r150_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // dnx8 = ld dnx
  Rsh_Fir_reg_dnx8_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // dnx9 = force? dnx8
  Rsh_Fir_reg_dnx9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dnx8_);
  // checkMissing(dnx9)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_dnx9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty()));
  // c44 = `is.object`(dnx9)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_dnx9_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args188);
  // if c44 then L1() else L2(dnx9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c44_)) {
  // L1()
    goto L1_;
  } else {
  // L2(dnx9)
    Rsh_Fir_reg_dnx11_ = Rsh_Fir_reg_dnx9_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[[", dnx9)
  SEXP Rsh_Fir_array_args189[2];
  Rsh_Fir_array_args189[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args189[1] = Rsh_Fir_reg_dnx9_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args189);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_dnx11_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r150 = dyn __1(dnx11, i6)
  SEXP Rsh_Fir_array_args191[2];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_dnx11_;
  Rsh_Fir_array_args191[1] = Rsh_Fir_reg_i6_;
  SEXP Rsh_Fir_array_arg_names67[2];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_array_arg_names67[1] = R_MissingArg;
  Rsh_Fir_reg_r150_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args191, Rsh_Fir_array_arg_names67, CCP, RHO);
  // goto L0(r150)
  // L0(r150)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r150_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dny8_;
  SEXP Rsh_Fir_reg_dny9_;
  SEXP Rsh_Fir_reg_c45_;
  SEXP Rsh_Fir_reg_dny11_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_i7_;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r152_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // dny8 = ld dny
  Rsh_Fir_reg_dny8_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // dny9 = force? dny8
  Rsh_Fir_reg_dny9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dny8_);
  // checkMissing(dny9)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_dny9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty()));
  // c45 = `is.object`(dny9)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_dny9_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args194);
  // if c45 then L1() else L2(dny9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L1()
    goto L1_;
  } else {
  // L2(dny9)
    Rsh_Fir_reg_dny11_ = Rsh_Fir_reg_dny9_;
    goto L2_;
  }

L0_:;
  // return dx9
  return Rsh_Fir_reg_dx9_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("[[", dny9)
  SEXP Rsh_Fir_array_args195[2];
  Rsh_Fir_array_args195[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args195[1] = Rsh_Fir_reg_dny9_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args195);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_dny11_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // i7 = ld i
  Rsh_Fir_reg_i7_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // i8 = force? i7
  Rsh_Fir_reg_i8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i7_);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r152 = dyn __2(dny11, i8)
  SEXP Rsh_Fir_array_args197[2];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_dny11_;
  Rsh_Fir_array_args197[1] = Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_array_arg_names68[2];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_array_arg_names68[1] = R_MissingArg;
  Rsh_Fir_reg_r152_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args197, Rsh_Fir_array_arg_names68, CCP, RHO);
  // goto L0(r152)
  // L0(r152)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r152_;
  goto L0_;

L3_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_paste1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // paste = ld paste
  Rsh_Fir_reg_paste = Rsh_Fir_load(Rsh_const(CCP, 61), RHO);
  // paste1 = force? paste
  Rsh_Fir_reg_paste1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_paste);
  // checkMissing(paste1)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_paste1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args199, Rsh_Fir_param_types_empty()));
  // return paste1
  return Rsh_Fir_reg_paste1_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_t1_;
  SEXP Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_reg_r157_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // t1 = ldf t
  Rsh_Fir_reg_t1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // p23 = prom<V +>{
  //   tmp8 = ld tmp;
  //   tmp9 = force? tmp8;
  //   checkMissing(tmp9);
  //   return tmp9;
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1626172927_24, 0, NULL, CCP, RHO);
  // r157 = dyn t1(p23)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_array_arg_names70[1];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_reg_r157_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_t1_, 1, Rsh_Fir_array_args202, Rsh_Fir_array_arg_names70, CCP, RHO);
  // return r157
  return Rsh_Fir_reg_r157_;
}
SEXP Rsh_Fir_user_promise_inner1626172927_24(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tmp8_;
  SEXP Rsh_Fir_reg_tmp9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1626172927/0: expected 0, got %d", NCAPTURES);

  // tmp8 = ld tmp
  Rsh_Fir_reg_tmp8_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // tmp9 = force? tmp8
  Rsh_Fir_reg_tmp9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp8_);
  // checkMissing(tmp9)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_tmp9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty()));
  // return tmp9
  return Rsh_Fir_reg_tmp9_;
}
SEXP Rsh_Fir_user_function_inner3002224933_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3002224933 dynamic dispatch ([i])

  return Rsh_Fir_user_version_inner3002224933_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3002224933_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3002224933 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3002224933/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_i1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_dX1;
  SEXP Rsh_Fir_reg_dX1_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_dX3_1;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg_i1_1;
  SEXP Rsh_Fir_reg_i2_1;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_rep_int1;
  SEXP Rsh_Fir_reg_r3_1;

  // Bind parameters
  Rsh_Fir_reg_i1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st i = i
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_i1, RHO);
  (void)(Rsh_Fir_reg_i1);
  // sym = ldf `rep.int`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base = ldf `rep.int` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args212[2];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args212[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args212);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_1;

L1_:;
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r3 = dyn rep_int("", dx1)
  SEXP Rsh_Fir_array_args213[2];
  Rsh_Fir_array_args213[0] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args213[1] = Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_array_arg_names74[2];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_array_arg_names74[1] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int1, 2, Rsh_Fir_array_args213, Rsh_Fir_array_arg_names74, CCP, RHO);
  // check L9() else D2()
  // L9()
  goto L9_;

L2_:;
  // dX = ld dX
  Rsh_Fir_reg_dX1 = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r = dyn base("", <lang `[`(dX, i)>)
  SEXP Rsh_Fir_array_args214[2];
  Rsh_Fir_array_args214[0] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args214[1] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names75[2];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_array_arg_names75[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 2, Rsh_Fir_array_args214, Rsh_Fir_array_arg_names75, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 3 [dX]
  SEXP Rsh_Fir_array_deopt_stack78[1];
  Rsh_Fir_array_deopt_stack78[0] = Rsh_Fir_reg_dX1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack78, CCP, RHO);
  return R_NilValue;

L4_:;
  // dX1 = force? dX
  Rsh_Fir_reg_dX1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_dX1);
  // checkMissing(dX1)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_dX1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty()));
  // c = `is.object`(dX1)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_dX1_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args216);
  // if c then L5() else L6(dX1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L5()
    goto L5_;
  } else {
  // L6(dX1)
    Rsh_Fir_reg_dX3_1 = Rsh_Fir_reg_dX1_1;
    goto L6_;
  }

L5_:;
  // dr = tryDispatchBuiltin.1("[", dX1)
  SEXP Rsh_Fir_array_args217[2];
  Rsh_Fir_array_args217[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args217[1] = Rsh_Fir_reg_dX1_1;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args217);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args218[1];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args218, Rsh_Fir_param_types_empty());
  // if dc then L7() else L6(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr)
    Rsh_Fir_reg_dX3_1 = Rsh_Fir_reg_dr1;
    goto L6_;
  }

L6_:;
  // i1 = ld i
  Rsh_Fir_reg_i1_1 = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

L7_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args219[1];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args219, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L1_;

D1_:;
  // deopt 5 [dX3, i1]
  SEXP Rsh_Fir_array_deopt_stack79[2];
  Rsh_Fir_array_deopt_stack79[0] = Rsh_Fir_reg_dX3_1;
  Rsh_Fir_array_deopt_stack79[1] = Rsh_Fir_reg_i1_1;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack79, CCP, RHO);
  return R_NilValue;

L8_:;
  // i2 = force? i1
  Rsh_Fir_reg_i2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_i1_1);
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r2 = dyn __(dX3, i2)
  SEXP Rsh_Fir_array_args220[2];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_dX3_1;
  Rsh_Fir_array_args220[1] = Rsh_Fir_reg_i2_1;
  SEXP Rsh_Fir_array_arg_names76[2];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_array_arg_names76[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args220, Rsh_Fir_array_arg_names76, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r2_;
  goto L1_;

D2_:;
  // deopt 9 [r3]
  SEXP Rsh_Fir_array_deopt_stack80[1];
  Rsh_Fir_array_deopt_stack80[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack80, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r3_1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
