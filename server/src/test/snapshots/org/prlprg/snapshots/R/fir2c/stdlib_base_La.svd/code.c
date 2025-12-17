#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1888930683_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1888930683_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1888930683_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1888930683_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1888930683_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1888930683_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1888930683_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1888930683_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1888930683_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1888930683_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1888930683_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1888930683_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1888930683_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1888930683_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1888930683_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1888930683_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1888930683_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1888930683_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1888930683_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1888930683_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1888930683_18(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1888930683_19(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1888930683_20(SEXP CCP, SEXP RHO);
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
  // r = clos inner1888930683
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1888930683_, RHO, CCP);
  // st `La.svd` = r
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
SEXP Rsh_Fir_user_function_inner1888930683_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1888930683 dynamic dispatch ([x, nu, nv])

  return Rsh_Fir_user_version_inner1888930683_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1888930683_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1888930683 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1888930683/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_nu;  // nu
  SEXP Rsh_Fir_reg_nv;  // nv
  SEXP Rsh_Fir_reg_nu_isMissing;  // nu_isMissing
  SEXP Rsh_Fir_reg_nu_orDefault;  // nu_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_min;  // min
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_nv_isMissing;  // nv_isMissing
  SEXP Rsh_Fir_reg_nv_orDefault;  // nv_orDefault
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_min1_;  // min1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_is_finite;  // is_finite
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_as_matrix;  // as_matrix
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_nrow;  // nrow
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_ncol;  // ncol
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_nu1_;  // nu1
  SEXP Rsh_Fir_reg_nu2_;  // nu2
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_nv1_;  // nv1
  SEXP Rsh_Fir_reg_nv2_;  // nv2
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_min2_;  // min2
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_nu3_;  // nu3
  SEXP Rsh_Fir_reg_nu4_;  // nu4
  SEXP Rsh_Fir_reg_np;  // np
  SEXP Rsh_Fir_reg_np1_;  // np1
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_nv3_;  // nv3
  SEXP Rsh_Fir_reg_nv4_;  // nv4
  SEXP Rsh_Fir_reg_np2_;  // np2
  SEXP Rsh_Fir_reg_np3_;  // np3
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_c41_;  // c41
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_matrix;  // matrix
  SEXP Rsh_Fir_reg_zero;  // zero
  SEXP Rsh_Fir_reg_zero1_;  // zero1
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_n8_;  // n8
  SEXP Rsh_Fir_reg_n9_;  // n9
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_np4_;  // np4
  SEXP Rsh_Fir_reg_np5_;  // np5
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_matrix1_;  // matrix1
  SEXP Rsh_Fir_reg_zero2_;  // zero2
  SEXP Rsh_Fir_reg_zero3_;  // zero3
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_np6_;  // np6
  SEXP Rsh_Fir_reg_np7_;  // np7
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_p19_;  // p19
  SEXP Rsh_Fir_reg_p20_;  // p20
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_np8_;  // np8
  SEXP Rsh_Fir_reg_np9_;  // np9
  SEXP Rsh_Fir_reg_np10_;  // np10
  SEXP Rsh_Fir_reg_matrix2_;  // matrix2
  SEXP Rsh_Fir_reg_zero4_;  // zero4
  SEXP Rsh_Fir_reg_zero5_;  // zero5
  SEXP Rsh_Fir_reg_p21_;  // p21
  SEXP Rsh_Fir_reg_n10_;  // n10
  SEXP Rsh_Fir_reg_n11_;  // n11
  SEXP Rsh_Fir_reg_p22_;  // p22
  SEXP Rsh_Fir_reg_n12_;  // n12
  SEXP Rsh_Fir_reg_n13_;  // n13
  SEXP Rsh_Fir_reg_p23_;  // p23
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_matrix3_;  // matrix3
  SEXP Rsh_Fir_reg_zero6_;  // zero6
  SEXP Rsh_Fir_reg_zero7_;  // zero7
  SEXP Rsh_Fir_reg_p24_;  // p24
  SEXP Rsh_Fir_reg_p25_;  // p25
  SEXP Rsh_Fir_reg_p26_;  // p26
  SEXP Rsh_Fir_reg_p27_;  // p27
  SEXP Rsh_Fir_reg_p28_;  // p28
  SEXP Rsh_Fir_reg_p29_;  // p29
  SEXP Rsh_Fir_reg_p30_;  // p30
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_n14_;  // n14
  SEXP Rsh_Fir_reg_n15_;  // n15
  SEXP Rsh_Fir_reg_p31_;  // p31
  SEXP Rsh_Fir_reg_p32_;  // p32
  SEXP Rsh_Fir_reg_matrix4_;  // matrix4
  SEXP Rsh_Fir_reg_zero8_;  // zero8
  SEXP Rsh_Fir_reg_zero9_;  // zero9
  SEXP Rsh_Fir_reg_p33_;  // p33
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_matrix5_;  // matrix5
  SEXP Rsh_Fir_reg_zero10_;  // zero10
  SEXP Rsh_Fir_reg_zero11_;  // zero11
  SEXP Rsh_Fir_reg_p34_;  // p34
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_c46_;  // c46
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_jobu;  // jobu
  SEXP Rsh_Fir_reg_jobu1_;  // jobu1
  SEXP Rsh_Fir_reg_x19_;  // x19
  SEXP Rsh_Fir_reg_x20_;  // x20
  SEXP Rsh_Fir_reg_double;  // double
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_n16_;  // n16
  SEXP Rsh_Fir_reg_n17_;  // n17
  SEXP Rsh_Fir_reg_p35_;  // p35
  SEXP Rsh_Fir_reg_p36_;  // p36
  SEXP Rsh_Fir_reg_min3_;  // min3
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_p37_;  // p37
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_u;  // u
  SEXP Rsh_Fir_reg_u1_;  // u1
  SEXP Rsh_Fir_reg_vt;  // vt
  SEXP Rsh_Fir_reg_vt1_;  // vt1
  SEXP Rsh_Fir_reg_La_svd_cmplx;  // La_svd_cmplx
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_jobu2_;  // jobu2
  SEXP Rsh_Fir_reg_jobu3_;  // jobu3
  SEXP Rsh_Fir_reg_x21_;  // x21
  SEXP Rsh_Fir_reg_x22_;  // x22
  SEXP Rsh_Fir_reg_double1_;  // double1
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_n18_;  // n18
  SEXP Rsh_Fir_reg_n19_;  // n19
  SEXP Rsh_Fir_reg_p38_;  // p38
  SEXP Rsh_Fir_reg_p39_;  // p39
  SEXP Rsh_Fir_reg_min4_;  // min4
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_p40_;  // p40
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_u2_;  // u2
  SEXP Rsh_Fir_reg_u3_;  // u3
  SEXP Rsh_Fir_reg_vt2_;  // vt2
  SEXP Rsh_Fir_reg_vt3_;  // vt3
  SEXP Rsh_Fir_reg_La_svd;  // La_svd
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_res;  // res
  SEXP Rsh_Fir_reg_res1_;  // res1
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_res3_;  // res3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_res6_;  // res6
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_nu5_;  // nu5
  SEXP Rsh_Fir_reg_nu6_;  // nu6
  SEXP Rsh_Fir_reg_c48_;  // c48
  SEXP Rsh_Fir_reg_res9_;  // res9
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_nv5_;  // nv5
  SEXP Rsh_Fir_reg_nv6_;  // nv6
  SEXP Rsh_Fir_reg_c49_;  // c49
  SEXP Rsh_Fir_reg_res12_;  // res12
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_c50_;  // c50
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_nu7_;  // nu7
  SEXP Rsh_Fir_reg_nu8_;  // nu8
  SEXP Rsh_Fir_reg_c51_;  // c51
  SEXP Rsh_Fir_reg_c53_;  // c53
  SEXP Rsh_Fir_reg_nu9_;  // nu9
  SEXP Rsh_Fir_reg_nu10_;  // nu10
  SEXP Rsh_Fir_reg_nu11_;  // nu11
  SEXP Rsh_Fir_reg_nu12_;  // nu12
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_c54_;  // c54
  SEXP Rsh_Fir_reg_c55_;  // c55
  SEXP Rsh_Fir_reg_c57_;  // c57
  SEXP Rsh_Fir_reg_res13_;  // res13
  SEXP Rsh_Fir_reg_res14_;  // res14
  SEXP Rsh_Fir_reg_c58_;  // c58
  SEXP Rsh_Fir_reg_res16_;  // res16
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_c59_;  // c59
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_n20_;  // n20
  SEXP Rsh_Fir_reg_n21_;  // n21
  SEXP Rsh_Fir_reg_nu13_;  // nu13
  SEXP Rsh_Fir_reg_nu14_;  // nu14
  SEXP Rsh_Fir_reg_min5_;  // min5
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c60_;  // c60
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_nv7_;  // nv7
  SEXP Rsh_Fir_reg_nv8_;  // nv8
  SEXP Rsh_Fir_reg_c61_;  // c61
  SEXP Rsh_Fir_reg_c63_;  // c63
  SEXP Rsh_Fir_reg_nv9_;  // nv9
  SEXP Rsh_Fir_reg_nv10_;  // nv10
  SEXP Rsh_Fir_reg_nv11_;  // nv11
  SEXP Rsh_Fir_reg_nv12_;  // nv12
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_c64_;  // c64
  SEXP Rsh_Fir_reg_c65_;  // c65
  SEXP Rsh_Fir_reg_c67_;  // c67
  SEXP Rsh_Fir_reg_res17_;  // res17
  SEXP Rsh_Fir_reg_res18_;  // res18
  SEXP Rsh_Fir_reg_c68_;  // c68
  SEXP Rsh_Fir_reg_res20_;  // res20
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_c69_;  // c69
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_sym18_;  // sym18
  SEXP Rsh_Fir_reg_base18_;  // base18
  SEXP Rsh_Fir_reg_guard18_;  // guard18
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_p41_;  // p41
  SEXP Rsh_Fir_reg_p42_;  // p42
  SEXP Rsh_Fir_reg_nv13_;  // nv13
  SEXP Rsh_Fir_reg_nv14_;  // nv14
  SEXP Rsh_Fir_reg_min6_;  // min6
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c70_;  // c70
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_r110_;  // r110
  SEXP Rsh_Fir_reg_res21_;  // res21
  SEXP Rsh_Fir_reg_res22_;  // res22

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_nu = PARAMS[1];
  Rsh_Fir_reg_nv = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // nu_isMissing = missing.0(nu)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_nu;
  Rsh_Fir_reg_nu_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if nu_isMissing then L0() else L1(nu)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_nu_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(nu)
    Rsh_Fir_reg_nu_orDefault = Rsh_Fir_reg_nu;
    goto L1_;
  }

L0_:;
  // p2 = prom<V +>{
  //   sym = ldf min;
  //   base = ldf min in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   n = ld n;
  //   n1 = force? n;
  //   checkMissing(n1);
  //   p = ld p;
  //   p1 = force? p;
  //   checkMissing(p1);
  //   min = ldf min in base;
  //   r2 = dyn min(n1, p1);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym n>, <sym p>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1888930683_, CCP, RHO);
  // goto L1(p2)
  // L1(p2)
  Rsh_Fir_reg_nu_orDefault = Rsh_Fir_reg_p2_;
  goto L1_;

L1_:;
  // st nu = nu_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_nu_orDefault, RHO);
  (void)(Rsh_Fir_reg_nu_orDefault);
  // nv_isMissing = missing.0(nv)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_nv;
  Rsh_Fir_reg_nv_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if nv_isMissing then L2() else L3(nv)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_nv_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(nv)
    Rsh_Fir_reg_nv_orDefault = Rsh_Fir_reg_nv;
    goto L3_;
  }

L2_:;
  // p5 = prom<V +>{
  //   sym1 = ldf min;
  //   base1 = ldf min in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r5):
  //   return r5;
  // L1():
  //   n2 = ld n;
  //   n3 = force? n2;
  //   checkMissing(n3);
  //   p3 = ld p;
  //   p4 = force? p3;
  //   checkMissing(p4);
  //   min1 = ldf min in base;
  //   r6 = dyn min1(n3, p4);
  //   goto L0(r6);
  // L2():
  //   r4 = dyn base1(<sym n>, <sym p>);
  //   goto L0(r4);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1888930683_1, CCP, RHO);
  // goto L3(p5)
  // L3(p5)
  Rsh_Fir_reg_nv_orDefault = Rsh_Fir_reg_p5_;
  goto L3_;

L3_:;
  // st nv = nv_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_nv_orDefault, RHO);
  (void)(Rsh_Fir_reg_nv_orDefault);
  // sym2 = ldf `is.logical`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf `is.logical` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard2 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L4_:;
  // r10 = `!`(r9)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c1 then L53() else L5(c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L53()
    goto L53_;
  } else {
  // L5(c1)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c1_;
    goto L5_;
  }

L5_:;
  // c10 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c10 then L59() else L7(c10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L59()
    goto L59_;
  } else {
  // L7(c10)
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c10_;
    goto L7_;
  }

L6_:;
  // r14 = `!`(r12)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // c8 = `&&`(c6, c7)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L5(c8)
  // L5(c8)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c8_;
  goto L5_;

L7_:;
  // c20 = `as.logical`(c12)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c20 then L64() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L64()
    goto L64_;
  } else {
  // L9()
    goto L9_;
  }

L8_:;
  // r17 = `!`(r16)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // c17 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // c18 = `&&`(c15, c17)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L7(c18)
  // L7(c18)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c18_;
  goto L7_;

L9_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // sym5 = ldf any
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base5 = ldf any in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard5 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L11_:;
  // c21 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c21 then L75() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L75()
    goto L75_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // r25 = `!`(r23)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r26 = dyn any(r25)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L74() else D8()
  // L74()
  goto L74_;

L13_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // as_matrix = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L79() else D11()
  // L79()
  goto L79_;

L15_:;
  // c28 = `as.logical`(c23)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c28 then L89() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L89()
    goto L89_;
  } else {
  // L16()
    goto L16_;
  }

L16_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // sym7 = ldf `is.complex`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base7 = ldf `is.complex` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard7 then L93() else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L93()
    goto L93_;
  } else {
  // L94()
    goto L94_;
  }

L18_:;
  // c30 = `as.logical`(r40)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c30 then L96() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L96()
    goto L96_;
  } else {
  // L19()
    goto L19_;
  }

L19_:;
  // goto L20(0.0)
  // L20(0.0)
  Rsh_Fir_reg_r41_ = Rsh_const(CCP, 11);
  goto L20_;

L20_:;
  // st zero = r41
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r41_, RHO);
  (void)(Rsh_Fir_reg_r41_);
  // nu1 = ld nu
  Rsh_Fir_reg_nu1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L98() else D22()
  // L98()
  goto L98_;

L21_:;
  // c37 = `as.logical`(c32)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c37 then L102() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L102()
    goto L102_;
  } else {
  // L22()
    goto L22_;
  }

L22_:;
  // st jobu = "N"
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_const(CCP, 13), RHO);
  (void)(Rsh_const(CCP, 13));
  // matrix4 = ldf matrix
  Rsh_Fir_reg_matrix4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L128() else D42()
  // L128()
  goto L128_;

L23_:;
  // st np = r43
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // nu3 = ld nu
  Rsh_Fir_reg_nu3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L108() else D27()
  // L108()
  goto L108_;

L24_:;
  // c44 = `as.logical`(c40)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_c40_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c44 then L114() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c44_)) {
  // L114()
    goto L114_;
  } else {
  // L25()
    goto L25_;
  }

L25_:;
  // st jobu = "A"
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_const(CCP, 17), RHO);
  (void)(Rsh_const(CCP, 17));
  // matrix2 = ldf matrix
  Rsh_Fir_reg_matrix2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L121() else D36()
  // L121()
  goto L121_;

L26_:;
  // goto L27()
  // L27()
  goto L27_;

L27_:;
  // sym9 = ldf `is.complex`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base9 = ldf `is.complex` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard9 then L132() else L133()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L132()
    goto L132_;
  } else {
  // L133()
    goto L133_;
  }

L28_:;
  // c46 = `as.logical`(r68)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c46 then L135() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L135()
    goto L135_;
  } else {
  // L29()
    goto L29_;
  }

L29_:;
  // sym12 = ldf `.Internal`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base12 = ldf `.Internal` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard12 then L146() else L147()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L146()
    goto L146_;
  } else {
  // L147()
    goto L147_;
  }

L30_:;
  // goto L31(r70)
  // L31(r70)
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r70_;
  goto L31_;

L31_:;
  // st res = r77
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r77_, RHO);
  (void)(Rsh_Fir_reg_r77_);
  // res = ld res
  Rsh_Fir_reg_res = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L155() else D61()
  // L155()
  goto L155_;

L32_:;
  // st res = dx1
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // nu7 = ld nu
  Rsh_Fir_reg_nu7_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L168() else D65()
  // L168()
  goto L168_;

L33_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r90 = dyn __(res6, r86)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_res6_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L32(r90)
  // L32(r90)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r90_;
  goto L32_;

L34_:;
  // goto L35(res3, NULL)
  // L35(res3, NULL)
  Rsh_Fir_reg_res9_ = Rsh_Fir_reg_res3_;
  Rsh_Fir_reg_r87_ = Rsh_const(CCP, 21);
  goto L35_;

L35_:;
  // nv5 = ld nv
  Rsh_Fir_reg_nv5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L164() else D63()
  // L164()
  goto L164_;

L36_:;
  // goto L37(res9, NULL)
  // L37(res9, NULL)
  Rsh_Fir_reg_res12_ = Rsh_Fir_reg_res9_;
  Rsh_Fir_reg_r88_ = Rsh_const(CCP, 21);
  goto L37_;

L37_:;
  // c50 = ldf c in base
  Rsh_Fir_reg_c50_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r89 = dyn c50("d", r87, r88)
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_r87_;
  Rsh_Fir_array_args36[2] = Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c50_, 3, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L167() else D64()
  // L167()
  goto L167_;

L38_:;
  // c57 = `as.logical`(c53)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_c53_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if c57 then L173() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c57_)) {
  // L173()
    goto L173_;
  } else {
  // L39()
    goto L39_;
  }

L39_:;
  // goto L43()
  // L43()
  goto L43_;

L40_:;
  // l = ld res
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // c60 = `is.object`(l)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c60_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c60 then L190() else L191(dx7, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c60_)) {
  // L190()
    goto L190_;
  } else {
  // L191(dx7, l)
    Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L191_;
  }

L41_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r99 = dyn __1(dx3, <missing>, r94, FALSE)
  SEXP Rsh_Fir_array_args39[4];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args39[2] = Rsh_Fir_reg_r94_;
  Rsh_Fir_array_args39[3] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names7[4];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 4, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L40(r99)
  // L40(r99)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r99_;
  goto L40_;

L42_:;
  // r98 = seq_len(r96)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // goto L41(r98)
  // L41(r98)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r98_;
  goto L41_;

L43_:;
  // nv7 = ld nv
  Rsh_Fir_reg_nv7_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L194() else D72()
  // L194()
  goto L194_;

L44_:;
  // c67 = `as.logical`(c63)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_c63_;
  Rsh_Fir_reg_c67_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c67 then L199() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c67_)) {
  // L199()
    goto L199_;
  } else {
  // L45()
    goto L45_;
  }

L45_:;
  // goto L49()
  // L49()
  goto L49_;

L46_:;
  // l3 = ld res
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // c70 = `is.object`(l3)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c70_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c70 then L216() else L217(dx26, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c70_)) {
  // L216()
    goto L216_;
  } else {
  // L217(dx26, l3)
    Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_dx26_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L217_;
  }

L47_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r109 = dyn __2(dx22, r104, <missing>, FALSE)
  SEXP Rsh_Fir_array_args43[4];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dx22_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_r104_;
  Rsh_Fir_array_args43[2] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args43[3] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names8[4];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_array_arg_names8[3] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 4, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L46(r109)
  // L46(r109)
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_r109_;
  goto L46_;

L48_:;
  // r108 = seq_len(r106)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r106_;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L47(r108)
  // L47(r108)
  Rsh_Fir_reg_r104_ = Rsh_Fir_reg_r108_;
  goto L47_;

L49_:;
  // res21 = ld res
  Rsh_Fir_reg_res21_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L220() else D79()
  // L220()
  goto L220_;

L50_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L52() else D0()
  // L52()
  goto L52_;

L51_:;
  // r8 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L4(r8)
  // L4(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L4_;

D0_:;
  // deopt 1 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L52_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c = `is.logical`(x2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(385, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L4(c)
  // L4(c)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_c;
  goto L4_;

L53_:;
  // sym3 = ldf `is.numeric`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base3 = ldf `is.numeric` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard3 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L54_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L56() else D1()
  // L56()
  goto L56_;

L55_:;
  // r11 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6(c1, r11)
  // L6(c1, r11)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L6_;

D1_:;
  // deopt 7 [c1, x3]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(7, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L56_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r13 = dyn is_numeric(x4)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L57() else D2()
  // L57()
  goto L57_;

D2_:;
  // deopt 10 [c1, r13]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(10, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L6(c1, r13)
  // L6(c1, r13)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L6_;

L59_:;
  // sym4 = ldf `is.complex`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base4 = ldf `is.complex` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard4 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L60_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L62() else D3()
  // L62()
  goto L62_;

L61_:;
  // r15 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L8(c10, r15)
  // L8(c10, r15)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L8_;

D3_:;
  // deopt 14 [c10, x5]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L62_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // c16 = `is.complex`(x6)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(388, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L8(c10, c16)
  // L8(c10, c16)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_c16_;
  goto L8_;

L64_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L65() else D4()
  // L65()
  goto L65_;

D4_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L65_:;
  // r18 = dyn stop("argument to 'La.svd' must be numeric or complex")
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L66() else D5()
  // L66()
  goto L66_;

D5_:;
  // deopt 22 [r18]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L10()
  // L10()
  goto L10_;

L68_:;
  // sym6 = ldf `is.finite`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base6 = ldf `is.finite` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard6 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L69_:;
  // r20 = dyn base5(<lang `!`(is.finite(x))>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L11(r20)
  // L11(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L11_;

L70_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L72() else D6()
  // L72()
  goto L72_;

L71_:;
  // r22 = dyn base6(<sym x>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L12(r22)
  // L12(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L12_;

D6_:;
  // deopt 29 [x7]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L72_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // is_finite = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r24 = dyn is_finite(x8)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L73() else D7()
  // L73()
  goto L73_;

D7_:;
  // deopt 32 [r24]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L73_:;
  // goto L12(r24)
  // L12(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L12_;

D8_:;
  // deopt 35 [r26]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L11(r26)
  // L11(r26)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r26_;
  goto L11_;

L75_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L76() else D9()
  // L76()
  goto L76_;

D9_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L76_:;
  // r27 = dyn stop1("infinite or missing values in 'x'")
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L77() else D10()
  // L77()
  goto L77_;

D10_:;
  // deopt 39 [r27]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L77_:;
  // goto L14()
  // L14()
  goto L14_;

D11_:;
  // deopt 43 []
  Rsh_Fir_deopt(43, 0, NULL, CCP, RHO);
  return R_NilValue;

L79_:;
  // p6 = prom<V +>{
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   return x10;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1888930683_2, CCP, RHO);
  // r30 = dyn as_matrix(p6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L80() else D12()
  // L80()
  goto L80_;

D12_:;
  // deopt 45 [r30]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L80_:;
  // st x = r30
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L81() else D13()
  // L81()
  goto L81_;

D13_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

L81_:;
  // p7 = prom<V +>{
  //   x11 = ld x;
  //   x12 = force? x11;
  //   checkMissing(x12);
  //   return x12;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1888930683_3, CCP, RHO);
  // r32 = dyn nrow(p7)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L82() else D14()
  // L82()
  goto L82_;

D14_:;
  // deopt 50 [r32]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L82_:;
  // st n = r32
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L83() else D15()
  // L83()
  goto L83_;

D15_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L83_:;
  // p8 = prom<V +>{
  //   x13 = ld x;
  //   x14 = force? x13;
  //   checkMissing(x14);
  //   return x14;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1888930683_4, CCP, RHO);
  // r34 = dyn ncol(p8)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L84() else D16()
  // L84()
  goto L84_;

D16_:;
  // deopt 55 [r34]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L84_:;
  // st p = r34
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L85() else D17()
  // L85()
  goto L85_;

D17_:;
  // deopt 57 [n4]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L85_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // r35 = `!`(n5)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // c22 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if c22 then L15(c22) else L86()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L15(c22)
    Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c22_;
    goto L15_;
  } else {
  // L86()
    goto L86_;
  }

L86_:;
  // p9 = ld p
  Rsh_Fir_reg_p9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L87() else D18()
  // L87()
  goto L87_;

D18_:;
  // deopt 60 [c22, p9]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c22_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_deopt(60, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L87_:;
  // p10 = force? p9
  Rsh_Fir_reg_p10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p9_);
  // checkMissing(p10)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_p10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // r36 = `!`(p10)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // c25 = `as.logical`(r36)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // c26 = `||`(c22, c25)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_c22_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_c25_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L15(c26)
  // L15(c26)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c26_;
  goto L15_;

L89_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L90() else D19()
  // L90()
  goto L90_;

D19_:;
  // deopt 65 []
  Rsh_Fir_deopt(65, 0, NULL, CCP, RHO);
  return R_NilValue;

L90_:;
  // r37 = dyn stop2("a dimension is zero")
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L91() else D20()
  // L91()
  goto L91_;

D20_:;
  // deopt 67 [r37]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L91_:;
  // goto L17()
  // L17()
  goto L17_;

L93_:;
  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L95() else D21()
  // L95()
  goto L95_;

L94_:;
  // r39 = dyn base7(<sym x>)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L18(r39)
  // L18(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L18_;

D21_:;
  // deopt 71 [x15]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_x15_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L95_:;
  // x16 = force? x15
  Rsh_Fir_reg_x16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_x16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // c29 = `is.complex`(x16)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(388, CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // goto L18(c29)
  // L18(c29)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_c29_;
  goto L18_;

L96_:;
  // goto L20(0.0i)
  // L20(0.0i)
  Rsh_Fir_reg_r41_ = Rsh_const(CCP, 35);
  goto L20_;

D22_:;
  // deopt 79 [nu1]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_nu1_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L98_:;
  // nu2 = force? nu1
  Rsh_Fir_reg_nu2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nu1_);
  // checkMissing(nu2)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_nu2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // c31 = `as.logical`(nu2)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_nu2_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if c31 then L21(c31) else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L21(c31)
    Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c31_;
    goto L21_;
  } else {
  // L99()
    goto L99_;
  }

L99_:;
  // nv1 = ld nv
  Rsh_Fir_reg_nv1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L100() else D23()
  // L100()
  goto L100_;

D23_:;
  // deopt 81 [c31, nv1]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_c31_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_nv1_;
  Rsh_Fir_deopt(81, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L100_:;
  // nv2 = force? nv1
  Rsh_Fir_reg_nv2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nv1_);
  // checkMissing(nv2)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_nv2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // c34 = `as.logical`(nv2)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_nv2_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // c35 = `||`(c31, c34)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_c31_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_c34_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // goto L21(c35)
  // L21(c35)
  Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c35_;
  goto L21_;

L102_:;
  // sym8 = ldf min
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base8 = ldf min in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args85);
  // if guard8 then L103() else L104()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L103()
    goto L103_;
  } else {
  // L104()
    goto L104_;
  }

L103_:;
  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L105() else D24()
  // L105()
  goto L105_;

L104_:;
  // r42 = dyn base8(<sym n>, <sym p>)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L23(r42)
  // L23(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L23_;

D24_:;
  // deopt 86 [n6]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_n6_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L105_:;
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // checkMissing(n7)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_n7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // p11 = ld p
  Rsh_Fir_reg_p11_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L106() else D25()
  // L106()
  goto L106_;

D25_:;
  // deopt 88 [p11]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L106_:;
  // p12 = force? p11
  Rsh_Fir_reg_p12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p11_);
  // checkMissing(p12)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_p12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // min2 = ldf min in base
  Rsh_Fir_reg_min2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r44 = dyn min2(n7, p12)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_n7_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min2_, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L107() else D26()
  // L107()
  goto L107_;

D26_:;
  // deopt 91 [r44]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L107_:;
  // goto L23(r44)
  // L23(r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L23_;

D27_:;
  // deopt 93 [nu3]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_nu3_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L108_:;
  // nu4 = force? nu3
  Rsh_Fir_reg_nu4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nu3_);
  // checkMissing(nu4)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_nu4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // np = ld np
  Rsh_Fir_reg_np = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L109() else D28()
  // L109()
  goto L109_;

D28_:;
  // deopt 94 [nu4, np]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_nu4_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_np;
  Rsh_Fir_deopt(94, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L109_:;
  // np1 = force? np
  Rsh_Fir_reg_np1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_np);
  // checkMissing(np1)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_np1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // r45 = `<=`(nu4, np1)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_nu4_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_np1_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // c38 = `as.logical`(r45)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if c38 then L110() else L24(c38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L110()
    goto L110_;
  } else {
  // L24(c38)
    Rsh_Fir_reg_c40_ = Rsh_Fir_reg_c38_;
    goto L24_;
  }

L110_:;
  // nv3 = ld nv
  Rsh_Fir_reg_nv3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L111() else D29()
  // L111()
  goto L111_;

D29_:;
  // deopt 97 [c38, nv3]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_nv3_;
  Rsh_Fir_deopt(97, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L111_:;
  // nv4 = force? nv3
  Rsh_Fir_reg_nv4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nv3_);
  // checkMissing(nv4)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_nv4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // np2 = ld np
  Rsh_Fir_reg_np2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L112() else D30()
  // L112()
  goto L112_;

D30_:;
  // deopt 98 [c38, nv4, np2]
  SEXP Rsh_Fir_array_deopt_stack24[3];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_nv4_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_np2_;
  Rsh_Fir_deopt(98, 3, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L112_:;
  // np3 = force? np2
  Rsh_Fir_reg_np3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_np2_);
  // checkMissing(np3)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_np3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // r46 = `<=`(nv4, np3)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_nv4_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_np3_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // c41 = `as.logical`(r46)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // c42 = `&&`(c38, c41)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_c41_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // goto L24(c42)
  // L24(c42)
  Rsh_Fir_reg_c40_ = Rsh_Fir_reg_c42_;
  goto L24_;

L114_:;
  // st jobu = "S"
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_const(CCP, 36), RHO);
  (void)(Rsh_const(CCP, 36));
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L115() else D31()
  // L115()
  goto L115_;

D31_:;
  // deopt 106 []
  Rsh_Fir_deopt(106, 0, NULL, CCP, RHO);
  return R_NilValue;

L115_:;
  // p13 = prom<V +>{
  //   zero = ld zero;
  //   zero1 = force? zero;
  //   checkMissing(zero1);
  //   return zero1;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1888930683_5, CCP, RHO);
  // p14 = prom<V +>{
  //   n8 = ld n;
  //   n9 = force? n8;
  //   checkMissing(n9);
  //   return n9;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1888930683_6, CCP, RHO);
  // p15 = prom<V +>{
  //   np4 = ld np;
  //   np5 = force? np4;
  //   checkMissing(np5);
  //   return np5;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1888930683_7, CCP, RHO);
  // r50 = dyn matrix(p13, p14, p15)
  SEXP Rsh_Fir_array_args102[3];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args102[2] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L116() else D32()
  // L116()
  goto L116_;

D32_:;
  // deopt 110 [r50]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L116_:;
  // st u = r50
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // matrix1 = ldf matrix
  Rsh_Fir_reg_matrix1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L117() else D33()
  // L117()
  goto L117_;

D33_:;
  // deopt 113 []
  Rsh_Fir_deopt(113, 0, NULL, CCP, RHO);
  return R_NilValue;

L117_:;
  // p16 = prom<V +>{
  //   zero2 = ld zero;
  //   zero3 = force? zero2;
  //   checkMissing(zero3);
  //   return zero3;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1888930683_8, CCP, RHO);
  // p17 = prom<V +>{
  //   np6 = ld np;
  //   np7 = force? np6;
  //   checkMissing(np7);
  //   return np7;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1888930683_9, CCP, RHO);
  // p20 = prom<V +>{
  //   p18 = ld p;
  //   p19 = force? p18;
  //   checkMissing(p19);
  //   return p19;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1888930683_10, CCP, RHO);
  // r54 = dyn matrix1(p16, p17, p20)
  SEXP Rsh_Fir_array_args106[3];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args106[2] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix1_, 3, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L118() else D34()
  // L118()
  goto L118_;

D34_:;
  // deopt 117 [r54]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L118_:;
  // st vt = r54
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // np8 = ld np
  Rsh_Fir_reg_np8_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L119() else D35()
  // L119()
  goto L119_;

D35_:;
  // deopt 119 [np8]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_np8_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L119_:;
  // np9 = force? np8
  Rsh_Fir_reg_np9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_np8_);
  // checkMissing(np9)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_np9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // st nv0 = np9
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_np9_, RHO);
  (void)(Rsh_Fir_reg_np9_);
  // st nu0 = np9
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_np9_, RHO);
  (void)(Rsh_Fir_reg_np9_);
  // goto L26(np9)
  // L26(np9)
  Rsh_Fir_reg_np10_ = Rsh_Fir_reg_np9_;
  goto L26_;

D36_:;
  // deopt 127 []
  Rsh_Fir_deopt(127, 0, NULL, CCP, RHO);
  return R_NilValue;

L121_:;
  // p21 = prom<V +>{
  //   zero4 = ld zero;
  //   zero5 = force? zero4;
  //   checkMissing(zero5);
  //   return zero5;
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1888930683_11, CCP, RHO);
  // p22 = prom<V +>{
  //   n10 = ld n;
  //   n11 = force? n10;
  //   checkMissing(n11);
  //   return n11;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1888930683_12, CCP, RHO);
  // p23 = prom<V +>{
  //   n12 = ld n;
  //   n13 = force? n12;
  //   checkMissing(n13);
  //   return n13;
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1888930683_13, CCP, RHO);
  // r58 = dyn matrix2(p21, p22, p23)
  SEXP Rsh_Fir_array_args111[3];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_p21_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_p22_;
  Rsh_Fir_array_args111[2] = Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_array_arg_names27[3];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix2_, 3, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L122() else D37()
  // L122()
  goto L122_;

D37_:;
  // deopt 131 [r58]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L122_:;
  // st u = r58
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r58_, RHO);
  (void)(Rsh_Fir_reg_r58_);
  // matrix3 = ldf matrix
  Rsh_Fir_reg_matrix3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L123() else D38()
  // L123()
  goto L123_;

D38_:;
  // deopt 134 []
  Rsh_Fir_deopt(134, 0, NULL, CCP, RHO);
  return R_NilValue;

L123_:;
  // p24 = prom<V +>{
  //   zero6 = ld zero;
  //   zero7 = force? zero6;
  //   checkMissing(zero7);
  //   return zero7;
  // }
  Rsh_Fir_reg_p24_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1888930683_14, CCP, RHO);
  // p27 = prom<V +>{
  //   p25 = ld p;
  //   p26 = force? p25;
  //   checkMissing(p26);
  //   return p26;
  // }
  Rsh_Fir_reg_p27_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1888930683_15, CCP, RHO);
  // p30 = prom<V +>{
  //   p28 = ld p;
  //   p29 = force? p28;
  //   checkMissing(p29);
  //   return p29;
  // }
  Rsh_Fir_reg_p30_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1888930683_16, CCP, RHO);
  // r62 = dyn matrix3(p24, p27, p30)
  SEXP Rsh_Fir_array_args115[3];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_p24_;
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_p27_;
  Rsh_Fir_array_args115[2] = Rsh_Fir_reg_p30_;
  SEXP Rsh_Fir_array_arg_names28[3];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix3_, 3, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L124() else D39()
  // L124()
  goto L124_;

D39_:;
  // deopt 138 [r62]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L124_:;
  // st vt = r62
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_r62_, RHO);
  (void)(Rsh_Fir_reg_r62_);
  // n14 = ld n
  Rsh_Fir_reg_n14_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L125() else D40()
  // L125()
  goto L125_;

D40_:;
  // deopt 140 [n14]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_n14_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L125_:;
  // n15 = force? n14
  Rsh_Fir_reg_n15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n14_);
  // checkMissing(n15)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_n15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // st nu0 = n15
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_n15_, RHO);
  (void)(Rsh_Fir_reg_n15_);
  // p31 = ld p
  Rsh_Fir_reg_p31_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L126() else D41()
  // L126()
  goto L126_;

D41_:;
  // deopt 143 [p31]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_p31_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L126_:;
  // p32 = force? p31
  Rsh_Fir_reg_p32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p31_);
  // checkMissing(p32)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_p32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // st nv0 = p32
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_p32_, RHO);
  (void)(Rsh_Fir_reg_p32_);
  // goto L26(p32)
  // L26(p32)
  Rsh_Fir_reg_np10_ = Rsh_Fir_reg_p32_;
  goto L26_;

D42_:;
  // deopt 150 []
  Rsh_Fir_deopt(150, 0, NULL, CCP, RHO);
  return R_NilValue;

L128_:;
  // p33 = prom<V +>{
  //   zero8 = ld zero;
  //   zero9 = force? zero8;
  //   checkMissing(zero9);
  //   return zero9;
  // }
  Rsh_Fir_reg_p33_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1888930683_17, CCP, RHO);
  // r64 = dyn matrix4(p33, 1, 1)
  SEXP Rsh_Fir_array_args119[3];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_p33_;
  Rsh_Fir_array_args119[1] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args119[2] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix4_, 3, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L129() else D43()
  // L129()
  goto L129_;

D43_:;
  // deopt 154 [r64]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L129_:;
  // st u = r64
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r64_, RHO);
  (void)(Rsh_Fir_reg_r64_);
  // matrix5 = ldf matrix
  Rsh_Fir_reg_matrix5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L130() else D44()
  // L130()
  goto L130_;

D44_:;
  // deopt 157 []
  Rsh_Fir_deopt(157, 0, NULL, CCP, RHO);
  return R_NilValue;

L130_:;
  // p34 = prom<V +>{
  //   zero10 = ld zero;
  //   zero11 = force? zero10;
  //   checkMissing(zero11);
  //   return zero11;
  // }
  Rsh_Fir_reg_p34_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1888930683_18, CCP, RHO);
  // r66 = dyn matrix5(p34, 1, 1)
  SEXP Rsh_Fir_array_args121[3];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_p34_;
  Rsh_Fir_array_args121[1] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args121[2] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix5_, 3, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L131() else D45()
  // L131()
  goto L131_;

D45_:;
  // deopt 161 [r66]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(161, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L131_:;
  // st vt = r66
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_r66_, RHO);
  (void)(Rsh_Fir_reg_r66_);
  // goto L27()
  // L27()
  goto L27_;

L132_:;
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L134() else D46()
  // L134()
  goto L134_;

L133_:;
  // r67 = dyn base9(<sym x>)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L28(r67)
  // L28(r67)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r67_;
  goto L28_;

D46_:;
  // deopt 164 [x17]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_deopt(164, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L134_:;
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // c45 = `is.complex`(x18)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(388, CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // goto L28(c45)
  // L28(c45)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_c45_;
  goto L28_;

L135_:;
  // sym10 = ldf `.Internal`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base10 = ldf `.Internal` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args125);
  // if guard10 then L136() else L137()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L136()
    goto L136_;
  } else {
  // L137()
    goto L137_;
  }

L136_:;
  // jobu = ld jobu
  Rsh_Fir_reg_jobu = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L138() else D47()
  // L138()
  goto L138_;

L137_:;
  // r69 = dyn base10(<lang La_svd_cmplx(jobu, x, double(min(n, p)), u, vt)>)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L30(r69)
  // L30(r69)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r69_;
  goto L30_;

D47_:;
  // deopt 169 [jobu]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_jobu;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L138_:;
  // jobu1 = force? jobu
  Rsh_Fir_reg_jobu1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_jobu);
  // checkMissing(jobu1)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_jobu1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // x19 = ld x
  Rsh_Fir_reg_x19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L139() else D48()
  // L139()
  goto L139_;

D48_:;
  // deopt 171 [x19]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_x19_;
  Rsh_Fir_deopt(171, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L139_:;
  // x20 = force? x19
  Rsh_Fir_reg_x20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x19_);
  // checkMissing(x20)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_x20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // double = ldf double
  Rsh_Fir_reg_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L140() else D49()
  // L140()
  goto L140_;

D49_:;
  // deopt 174 []
  Rsh_Fir_deopt(174, 0, NULL, CCP, RHO);
  return R_NilValue;

L140_:;
  // p37 = prom<V +>{
  //   sym11 = ldf min;
  //   base11 = ldf min in base;
  //   guard11 = `==`.4(sym11, base11);
  //   if guard11 then L1() else L2();
  // L0(r72):
  //   return r72;
  // L1():
  //   n16 = ld n;
  //   n17 = force? n16;
  //   checkMissing(n17);
  //   p35 = ld p;
  //   p36 = force? p35;
  //   checkMissing(p36);
  //   min3 = ldf min in base;
  //   r73 = dyn min3(n17, p36);
  //   goto L0(r73);
  // L2():
  //   r71 = dyn base11(<sym n>, <sym p>);
  //   goto L0(r71);
  // }
  Rsh_Fir_reg_p37_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1888930683_19, CCP, RHO);
  // r75 = dyn double(p37)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_p37_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_double, 1, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L141() else D50()
  // L141()
  goto L141_;

D50_:;
  // deopt 176 [r75]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(176, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L141_:;
  // u = ld u
  Rsh_Fir_reg_u = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L142() else D51()
  // L142()
  goto L142_;

D51_:;
  // deopt 177 [u]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_u;
  Rsh_Fir_deopt(177, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L142_:;
  // u1 = force? u
  Rsh_Fir_reg_u1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_u);
  // checkMissing(u1)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_u1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // vt = ld vt
  Rsh_Fir_reg_vt = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L143() else D52()
  // L143()
  goto L143_;

D52_:;
  // deopt 179 [vt]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_vt;
  Rsh_Fir_deopt(179, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L143_:;
  // vt1 = force? vt
  Rsh_Fir_reg_vt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vt);
  // checkMissing(vt1)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_vt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // La_svd_cmplx = ldf La_svd_cmplx in base
  Rsh_Fir_reg_La_svd_cmplx = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r76 = dyn La_svd_cmplx(jobu1, x20, r75, u1, vt1)
  SEXP Rsh_Fir_array_args137[5];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_jobu1_;
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_x20_;
  Rsh_Fir_array_args137[2] = Rsh_Fir_reg_r75_;
  Rsh_Fir_array_args137[3] = Rsh_Fir_reg_u1_;
  Rsh_Fir_array_args137[4] = Rsh_Fir_reg_vt1_;
  SEXP Rsh_Fir_array_arg_names36[5];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_array_arg_names36[3] = R_MissingArg;
  Rsh_Fir_array_arg_names36[4] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_La_svd_cmplx, 5, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L144() else D53()
  // L144()
  goto L144_;

D53_:;
  // deopt 182 [r76]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(182, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L144_:;
  // goto L30(r76)
  // L30(r76)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r76_;
  goto L30_;

L146_:;
  // jobu2 = ld jobu
  Rsh_Fir_reg_jobu2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L148() else D54()
  // L148()
  goto L148_;

L147_:;
  // r78 = dyn base12(<lang La_svd(jobu, x, double(min(n, p)), u, vt)>)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L31(r78)
  // L31(r78)
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r78_;
  goto L31_;

D54_:;
  // deopt 185 [jobu2]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_jobu2_;
  Rsh_Fir_deopt(185, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L148_:;
  // jobu3 = force? jobu2
  Rsh_Fir_reg_jobu3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_jobu2_);
  // checkMissing(jobu3)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_jobu3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // x21 = ld x
  Rsh_Fir_reg_x21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L149() else D55()
  // L149()
  goto L149_;

D55_:;
  // deopt 187 [x21]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_x21_;
  Rsh_Fir_deopt(187, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L149_:;
  // x22 = force? x21
  Rsh_Fir_reg_x22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x21_);
  // checkMissing(x22)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_x22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty()));
  // double1 = ldf double
  Rsh_Fir_reg_double1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L150() else D56()
  // L150()
  goto L150_;

D56_:;
  // deopt 190 []
  Rsh_Fir_deopt(190, 0, NULL, CCP, RHO);
  return R_NilValue;

L150_:;
  // p40 = prom<V +>{
  //   sym13 = ldf min;
  //   base13 = ldf min in base;
  //   guard13 = `==`.4(sym13, base13);
  //   if guard13 then L1() else L2();
  // L0(r80):
  //   return r80;
  // L1():
  //   n18 = ld n;
  //   n19 = force? n18;
  //   checkMissing(n19);
  //   p38 = ld p;
  //   p39 = force? p38;
  //   checkMissing(p39);
  //   min4 = ldf min in base;
  //   r81 = dyn min4(n19, p39);
  //   goto L0(r81);
  // L2():
  //   r79 = dyn base13(<sym n>, <sym p>);
  //   goto L0(r79);
  // }
  Rsh_Fir_reg_p40_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1888930683_20, CCP, RHO);
  // r83 = dyn double1(p40)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_p40_;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_double1_, 1, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L151() else D57()
  // L151()
  goto L151_;

D57_:;
  // deopt 192 [r83]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(192, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L151_:;
  // u2 = ld u
  Rsh_Fir_reg_u2_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L152() else D58()
  // L152()
  goto L152_;

D58_:;
  // deopt 193 [u2]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_u2_;
  Rsh_Fir_deopt(193, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L152_:;
  // u3 = force? u2
  Rsh_Fir_reg_u3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_u2_);
  // checkMissing(u3)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_u3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty()));
  // vt2 = ld vt
  Rsh_Fir_reg_vt2_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L153() else D59()
  // L153()
  goto L153_;

D59_:;
  // deopt 195 [vt2]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_vt2_;
  Rsh_Fir_deopt(195, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L153_:;
  // vt3 = force? vt2
  Rsh_Fir_reg_vt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vt2_);
  // checkMissing(vt3)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_vt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // La_svd = ldf La_svd in base
  Rsh_Fir_reg_La_svd = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r84 = dyn La_svd(jobu3, x22, r83, u3, vt3)
  SEXP Rsh_Fir_array_args149[5];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_jobu3_;
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_x22_;
  Rsh_Fir_array_args149[2] = Rsh_Fir_reg_r83_;
  Rsh_Fir_array_args149[3] = Rsh_Fir_reg_u3_;
  Rsh_Fir_array_args149[4] = Rsh_Fir_reg_vt3_;
  SEXP Rsh_Fir_array_arg_names41[5];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_array_arg_names41[2] = R_MissingArg;
  Rsh_Fir_array_arg_names41[3] = R_MissingArg;
  Rsh_Fir_array_arg_names41[4] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_La_svd, 5, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L154() else D60()
  // L154()
  goto L154_;

D60_:;
  // deopt 198 [r84]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_deopt(198, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L154_:;
  // goto L31(r84)
  // L31(r84)
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r84_;
  goto L31_;

D61_:;
  // deopt 200 [res]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_res;
  Rsh_Fir_deopt(200, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L155_:;
  // res1 = force? res
  Rsh_Fir_reg_res1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res);
  // checkMissing(res1)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_res1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // c47 = `is.object`(res1)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_res1_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty());
  // if c47 then L156() else L157(res1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L156()
    goto L156_;
  } else {
  // L157(res1)
    Rsh_Fir_reg_res3_ = Rsh_Fir_reg_res1_;
    goto L157_;
  }

L156_:;
  // dr = tryDispatchBuiltin.1("[", res1)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_res1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args152);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // if dc then L158() else L157(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L158()
    goto L158_;
  } else {
  // L157(dr)
    Rsh_Fir_reg_res3_ = Rsh_Fir_reg_dr;
    goto L157_;
  }

L157_:;
  // sym14 = ldf c
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base14 = ldf c in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args154[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args154);
  // if guard14 then L159() else L160()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L159()
    goto L159_;
  } else {
  // L160()
    goto L160_;
  }

L158_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty());
  // goto L32(dx)
  // L32(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L32_;

L159_:;
  // nu5 = ld nu
  Rsh_Fir_reg_nu5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L161() else D62()
  // L161()
  goto L161_;

L160_:;
  // r85 = dyn base14("d", <lang if(nu, "u")>, <lang if(nv, "vt")>)
  SEXP Rsh_Fir_array_args156[3];
  Rsh_Fir_array_args156[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args156[1] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args156[2] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names42[3];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_array_arg_names42[2] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 3, Rsh_Fir_array_args156, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L33(res3, r85)
  // L33(res3, r85)
  Rsh_Fir_reg_res6_ = Rsh_Fir_reg_res3_;
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r85_;
  goto L33_;

D62_:;
  // deopt 205 [res3, nu5]
  SEXP Rsh_Fir_array_deopt_stack48[2];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_res3_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_nu5_;
  Rsh_Fir_deopt(205, 2, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L161_:;
  // nu6 = force? nu5
  Rsh_Fir_reg_nu6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nu5_);
  // checkMissing(nu6)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_nu6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty()));
  // c48 = `as.logical`(nu6)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_nu6_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty());
  // if c48 then L162() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c48_)) {
  // L162()
    goto L162_;
  } else {
  // L34()
    goto L34_;
  }

L162_:;
  // goto L35(res3, "u")
  // L35(res3, "u")
  Rsh_Fir_reg_res9_ = Rsh_Fir_reg_res3_;
  Rsh_Fir_reg_r87_ = Rsh_const(CCP, 50);
  goto L35_;

D63_:;
  // deopt 211 [res9, nv5]
  SEXP Rsh_Fir_array_deopt_stack49[2];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_res9_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_nv5_;
  Rsh_Fir_deopt(211, 2, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L164_:;
  // nv6 = force? nv5
  Rsh_Fir_reg_nv6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nv5_);
  // checkMissing(nv6)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_nv6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // c49 = `as.logical`(nv6)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_nv6_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty());
  // if c49 then L165() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c49_)) {
  // L165()
    goto L165_;
  } else {
  // L36()
    goto L36_;
  }

L165_:;
  // goto L37(res9, "vt")
  // L37(res9, "vt")
  Rsh_Fir_reg_res12_ = Rsh_Fir_reg_res9_;
  Rsh_Fir_reg_r88_ = Rsh_const(CCP, 51);
  goto L37_;

D64_:;
  // deopt 218 [res12, r89]
  SEXP Rsh_Fir_array_deopt_stack50[2];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_res12_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(218, 2, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L167_:;
  // goto L33(res12, r89)
  // L33(res12, r89)
  Rsh_Fir_reg_res6_ = Rsh_Fir_reg_res12_;
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r89_;
  goto L33_;

D65_:;
  // deopt 221 [nu7]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_nu7_;
  Rsh_Fir_deopt(221, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L168_:;
  // nu8 = force? nu7
  Rsh_Fir_reg_nu8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nu7_);
  // checkMissing(nu8)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_nu8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty()));
  // c51 = `as.logical`(nu8)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_nu8_;
  Rsh_Fir_reg_c51_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty());
  // if c51 then L169() else L38(c51)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c51_)) {
  // L169()
    goto L169_;
  } else {
  // L38(c51)
    Rsh_Fir_reg_c53_ = Rsh_Fir_reg_c51_;
    goto L38_;
  }

L169_:;
  // nu9 = ld nu
  Rsh_Fir_reg_nu9_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L170() else D66()
  // L170()
  goto L170_;

D66_:;
  // deopt 223 [c51, nu9]
  SEXP Rsh_Fir_array_deopt_stack52[2];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_c51_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_nu9_;
  Rsh_Fir_deopt(223, 2, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L170_:;
  // nu10 = force? nu9
  Rsh_Fir_reg_nu10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nu9_);
  // checkMissing(nu10)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_nu10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty()));
  // nu11 = ld nu0
  Rsh_Fir_reg_nu11_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L171() else D67()
  // L171()
  goto L171_;

D67_:;
  // deopt 224 [c51, nu10, nu11]
  SEXP Rsh_Fir_array_deopt_stack53[3];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_c51_;
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_nu10_;
  Rsh_Fir_array_deopt_stack53[2] = Rsh_Fir_reg_nu11_;
  Rsh_Fir_deopt(224, 3, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L171_:;
  // nu12 = force? nu11
  Rsh_Fir_reg_nu12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nu11_);
  // checkMissing(nu12)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_nu12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // r91 = `<`(nu10, nu12)
  SEXP Rsh_Fir_array_args165[2];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_nu10_;
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_nu12_;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty());
  // c54 = `as.logical`(r91)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_reg_c54_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty());
  // c55 = `&&`(c51, c54)
  SEXP Rsh_Fir_array_args167[2];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_c51_;
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_c54_;
  Rsh_Fir_reg_c55_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty());
  // goto L38(c55)
  // L38(c55)
  Rsh_Fir_reg_c53_ = Rsh_Fir_reg_c55_;
  goto L38_;

L173_:;
  // res13 = ld res
  Rsh_Fir_reg_res13_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L174() else D68()
  // L174()
  goto L174_;

D68_:;
  // deopt 228 [res13]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_res13_;
  Rsh_Fir_deopt(228, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L174_:;
  // res14 = force? res13
  Rsh_Fir_reg_res14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res13_);
  // checkMissing(res14)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_res14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty()));
  // c58 = `is.object`(res14)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_res14_;
  Rsh_Fir_reg_c58_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // if c58 then L176() else L177(res14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c58_)) {
  // L176()
    goto L176_;
  } else {
  // L177(res14)
    Rsh_Fir_reg_res16_ = Rsh_Fir_reg_res14_;
    goto L177_;
  }

L175_:;
  // c59 = `is.object`(dx3)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty());
  // if c59 then L179() else L180(dx3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c59_)) {
  // L179()
    goto L179_;
  } else {
  // L180(dx3)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    goto L180_;
  }

L176_:;
  // dr2 = tryDispatchBuiltin.1("$", res14)
  SEXP Rsh_Fir_array_args171[2];
  Rsh_Fir_array_args171[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args171[1] = Rsh_Fir_reg_res14_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args171);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty());
  // if dc1 then L178() else L177(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L178()
    goto L178_;
  } else {
  // L177(dr2)
    Rsh_Fir_reg_res16_ = Rsh_Fir_reg_dr2_;
    goto L177_;
  }

L177_:;
  // r92 = `$`(res16, <sym u>)
  SEXP Rsh_Fir_array_args173[2];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_res16_;
  Rsh_Fir_array_args173[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // goto L175(r92)
  // L175(r92)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r92_;
  goto L175_;

L178_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty());
  // goto L175(dx2)
  // L175(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L175_;

L179_:;
  // dr4 = tryDispatchBuiltin.1("[", dx3)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args175);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty());
  // if dc2 then L181() else L180(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L181()
    goto L181_;
  } else {
  // L180(dr4)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dr4_;
    goto L180_;
  }

L180_:;
  // sym15 = ldf seq_len
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // base15 = ldf seq_len in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args177[2];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args177[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args177);
  // if guard15 then L182() else L183()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L182()
    goto L182_;
  } else {
  // L183()
    goto L183_;
  }

L181_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty());
  // goto L40(dx6)
  // L40(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L40_;

L182_:;
  // sym16 = ldf min
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base16 = ldf min in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args179[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args179);
  // if guard16 then L184() else L185()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L184()
    goto L184_;
  } else {
  // L185()
    goto L185_;
  }

L183_:;
  // r93 = dyn base15(<lang min(n, nu)>)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args180, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L41(r93)
  // L41(r93)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r93_;
  goto L41_;

L184_:;
  // n20 = ld n
  Rsh_Fir_reg_n20_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L186() else D69()
  // L186()
  goto L186_;

L185_:;
  // r95 = dyn base16(<sym n>, <sym nu>)
  SEXP Rsh_Fir_array_args181[2];
  Rsh_Fir_array_args181[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args181[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 2, Rsh_Fir_array_args181, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L42(dx5, r95)
  // L42(dx5, r95)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r95_;
  goto L42_;

D69_:;
  // deopt 235 [dx5, n20]
  SEXP Rsh_Fir_array_deopt_stack55[2];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_n20_;
  Rsh_Fir_deopt(235, 2, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L186_:;
  // n21 = force? n20
  Rsh_Fir_reg_n21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n20_);
  // checkMissing(n21)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_n21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty()));
  // nu13 = ld nu
  Rsh_Fir_reg_nu13_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L187() else D70()
  // L187()
  goto L187_;

D70_:;
  // deopt 237 [dx5, nu13]
  SEXP Rsh_Fir_array_deopt_stack56[2];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_nu13_;
  Rsh_Fir_deopt(237, 2, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L187_:;
  // nu14 = force? nu13
  Rsh_Fir_reg_nu14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nu13_);
  // checkMissing(nu14)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_nu14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty()));
  // min5 = ldf min in base
  Rsh_Fir_reg_min5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r97 = dyn min5(n21, nu14)
  SEXP Rsh_Fir_array_args184[2];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_n21_;
  Rsh_Fir_array_args184[1] = Rsh_Fir_reg_nu14_;
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min5_, 2, Rsh_Fir_array_args184, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L188() else D71()
  // L188()
  goto L188_;

D71_:;
  // deopt 240 [dx5, r97]
  SEXP Rsh_Fir_array_deopt_stack57[2];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack57[1] = Rsh_Fir_reg_r97_;
  Rsh_Fir_deopt(240, 2, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L188_:;
  // goto L42(dx5, r97)
  // L42(dx5, r97)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r97_;
  goto L42_;

L189_:;
  // st res = dx19
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // goto L43()
  // L43()
  goto L43_;

L190_:;
  // dr6 = tryDispatchBuiltin.0("$<-", l, dx7)
  SEXP Rsh_Fir_array_args185[3];
  Rsh_Fir_array_args185[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args185[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args185[2] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args185);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty());
  // if dc3 then L192() else L191(dx7, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L192()
    goto L192_;
  } else {
  // L191(dx7, dr6)
    Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr6_;
    goto L191_;
  }

L191_:;
  // r100 = `$<-`(l2, <sym u>, dx7)
  SEXP Rsh_Fir_array_args187[3];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args187[1] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args187[2] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty());
  // goto L189(dx15, r100)
  // L189(dx15, r100)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r100_;
  goto L189_;

L192_:;
  // dx17 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty());
  // goto L189(dx7, dx17)
  // L189(dx7, dx17)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx17_;
  goto L189_;

D72_:;
  // deopt 251 [nv7]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_nv7_;
  Rsh_Fir_deopt(251, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L194_:;
  // nv8 = force? nv7
  Rsh_Fir_reg_nv8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nv7_);
  // checkMissing(nv8)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_nv8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty()));
  // c61 = `as.logical`(nv8)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_nv8_;
  Rsh_Fir_reg_c61_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty());
  // if c61 then L195() else L44(c61)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c61_)) {
  // L195()
    goto L195_;
  } else {
  // L44(c61)
    Rsh_Fir_reg_c63_ = Rsh_Fir_reg_c61_;
    goto L44_;
  }

L195_:;
  // nv9 = ld nv
  Rsh_Fir_reg_nv9_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L196() else D73()
  // L196()
  goto L196_;

D73_:;
  // deopt 253 [c61, nv9]
  SEXP Rsh_Fir_array_deopt_stack59[2];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_c61_;
  Rsh_Fir_array_deopt_stack59[1] = Rsh_Fir_reg_nv9_;
  Rsh_Fir_deopt(253, 2, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L196_:;
  // nv10 = force? nv9
  Rsh_Fir_reg_nv10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nv9_);
  // checkMissing(nv10)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_nv10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args191, Rsh_Fir_param_types_empty()));
  // nv11 = ld nv0
  Rsh_Fir_reg_nv11_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L197() else D74()
  // L197()
  goto L197_;

D74_:;
  // deopt 254 [c61, nv10, nv11]
  SEXP Rsh_Fir_array_deopt_stack60[3];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_c61_;
  Rsh_Fir_array_deopt_stack60[1] = Rsh_Fir_reg_nv10_;
  Rsh_Fir_array_deopt_stack60[2] = Rsh_Fir_reg_nv11_;
  Rsh_Fir_deopt(254, 3, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L197_:;
  // nv12 = force? nv11
  Rsh_Fir_reg_nv12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nv11_);
  // checkMissing(nv12)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_nv12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty()));
  // r101 = `<`(nv10, nv12)
  SEXP Rsh_Fir_array_args193[2];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_nv10_;
  Rsh_Fir_array_args193[1] = Rsh_Fir_reg_nv12_;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty());
  // c64 = `as.logical`(r101)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_reg_c64_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args194, Rsh_Fir_param_types_empty());
  // c65 = `&&`(c61, c64)
  SEXP Rsh_Fir_array_args195[2];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_c61_;
  Rsh_Fir_array_args195[1] = Rsh_Fir_reg_c64_;
  Rsh_Fir_reg_c65_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty());
  // goto L44(c65)
  // L44(c65)
  Rsh_Fir_reg_c63_ = Rsh_Fir_reg_c65_;
  goto L44_;

L199_:;
  // res17 = ld res
  Rsh_Fir_reg_res17_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L200() else D75()
  // L200()
  goto L200_;

D75_:;
  // deopt 258 [res17]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_res17_;
  Rsh_Fir_deopt(258, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L200_:;
  // res18 = force? res17
  Rsh_Fir_reg_res18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res17_);
  // checkMissing(res18)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_res18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty()));
  // c68 = `is.object`(res18)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_res18_;
  Rsh_Fir_reg_c68_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty());
  // if c68 then L202() else L203(res18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c68_)) {
  // L202()
    goto L202_;
  } else {
  // L203(res18)
    Rsh_Fir_reg_res20_ = Rsh_Fir_reg_res18_;
    goto L203_;
  }

L201_:;
  // c69 = `is.object`(dx22)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_dx22_;
  Rsh_Fir_reg_c69_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty());
  // if c69 then L205() else L206(dx22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c69_)) {
  // L205()
    goto L205_;
  } else {
  // L206(dx22)
    Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx22_;
    goto L206_;
  }

L202_:;
  // dr8 = tryDispatchBuiltin.1("$", res18)
  SEXP Rsh_Fir_array_args199[2];
  Rsh_Fir_array_args199[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args199[1] = Rsh_Fir_reg_res18_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args199);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty());
  // if dc4 then L204() else L203(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L204()
    goto L204_;
  } else {
  // L203(dr8)
    Rsh_Fir_reg_res20_ = Rsh_Fir_reg_dr8_;
    goto L203_;
  }

L203_:;
  // r102 = `$`(res20, <sym vt>)
  SEXP Rsh_Fir_array_args201[2];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_res20_;
  Rsh_Fir_array_args201[1] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty());
  // goto L201(r102)
  // L201(r102)
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_r102_;
  goto L201_;

L204_:;
  // dx21 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty());
  // goto L201(dx21)
  // L201(dx21)
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx21_;
  goto L201_;

L205_:;
  // dr10 = tryDispatchBuiltin.1("[", dx22)
  SEXP Rsh_Fir_array_args203[2];
  Rsh_Fir_array_args203[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args203[1] = Rsh_Fir_reg_dx22_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args203);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty());
  // if dc5 then L207() else L206(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L207()
    goto L207_;
  } else {
  // L206(dr10)
    Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dr10_;
    goto L206_;
  }

L206_:;
  // sym17 = ldf seq_len
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // base17 = ldf seq_len in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args205[2];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args205[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args205);
  // if guard17 then L208() else L209()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L208()
    goto L208_;
  } else {
  // L209()
    goto L209_;
  }

L207_:;
  // dx25 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty());
  // goto L46(dx25)
  // L46(dx25)
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx25_;
  goto L46_;

L208_:;
  // sym18 = ldf min
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base18 = ldf min in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args207[2];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args207[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args207);
  // if guard18 then L210() else L211()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L210()
    goto L210_;
  } else {
  // L211()
    goto L211_;
  }

L209_:;
  // r103 = dyn base17(<lang min(p, nv)>)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args208, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L47(r103)
  // L47(r103)
  Rsh_Fir_reg_r104_ = Rsh_Fir_reg_r103_;
  goto L47_;

L210_:;
  // p41 = ld p
  Rsh_Fir_reg_p41_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L212() else D76()
  // L212()
  goto L212_;

L211_:;
  // r105 = dyn base18(<sym p>, <sym nv>)
  SEXP Rsh_Fir_array_args209[2];
  Rsh_Fir_array_args209[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args209[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 2, Rsh_Fir_array_args209, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L48(dx24, r105)
  // L48(dx24, r105)
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx24_;
  Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r105_;
  goto L48_;

D76_:;
  // deopt 264 [dx24, p41]
  SEXP Rsh_Fir_array_deopt_stack62[2];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_dx24_;
  Rsh_Fir_array_deopt_stack62[1] = Rsh_Fir_reg_p41_;
  Rsh_Fir_deopt(264, 2, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L212_:;
  // p42 = force? p41
  Rsh_Fir_reg_p42_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p41_);
  // checkMissing(p42)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_p42_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args210, Rsh_Fir_param_types_empty()));
  // nv13 = ld nv
  Rsh_Fir_reg_nv13_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L213() else D77()
  // L213()
  goto L213_;

D77_:;
  // deopt 266 [dx24, nv13]
  SEXP Rsh_Fir_array_deopt_stack63[2];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_dx24_;
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_nv13_;
  Rsh_Fir_deopt(266, 2, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L213_:;
  // nv14 = force? nv13
  Rsh_Fir_reg_nv14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nv13_);
  // checkMissing(nv14)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_nv14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty()));
  // min6 = ldf min in base
  Rsh_Fir_reg_min6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r107 = dyn min6(p42, nv14)
  SEXP Rsh_Fir_array_args212[2];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_p42_;
  Rsh_Fir_array_args212[1] = Rsh_Fir_reg_nv14_;
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min6_, 2, Rsh_Fir_array_args212, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L214() else D78()
  // L214()
  goto L214_;

D78_:;
  // deopt 269 [dx24, r107]
  SEXP Rsh_Fir_array_deopt_stack64[2];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_dx24_;
  Rsh_Fir_array_deopt_stack64[1] = Rsh_Fir_reg_r107_;
  Rsh_Fir_deopt(269, 2, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L214_:;
  // goto L48(dx24, r107)
  // L48(dx24, r107)
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx24_;
  Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r107_;
  goto L48_;

L215_:;
  // st res = dx38
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx38_, RHO);
  (void)(Rsh_Fir_reg_dx38_);
  // goto L49()
  // L49()
  goto L49_;

L216_:;
  // dr12 = tryDispatchBuiltin.0("$<-", l3, dx26)
  SEXP Rsh_Fir_array_args213[3];
  Rsh_Fir_array_args213[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args213[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args213[2] = Rsh_Fir_reg_dx26_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args213);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty());
  // if dc6 then L218() else L217(dx26, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L218()
    goto L218_;
  } else {
  // L217(dx26, dr12)
    Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_dx26_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr12_;
    goto L217_;
  }

L217_:;
  // r110 = `$<-`(l5, <sym vt>, dx26)
  SEXP Rsh_Fir_array_args215[3];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args215[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args215[2] = Rsh_Fir_reg_dx26_;
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty());
  // goto L215(dx34, r110)
  // L215(dx34, r110)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx34_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_r110_;
  goto L215_;

L218_:;
  // dx36 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args216, Rsh_Fir_param_types_empty());
  // goto L215(dx26, dx36)
  // L215(dx26, dx36)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx26_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_dx36_;
  goto L215_;

D79_:;
  // deopt 281 [res21]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_res21_;
  Rsh_Fir_deopt(281, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L220_:;
  // res22 = force? res21
  Rsh_Fir_reg_res22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res21_);
  // checkMissing(res22)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_res22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args217, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return res22
  return Rsh_Fir_reg_res22_;
}
SEXP Rsh_Fir_user_promise_inner1888930683_(SEXP CCP, SEXP RHO) {
  // sym = ldf min
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf min in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // p = ld p
  Rsh_Fir_reg_p = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // p1 = force? p
  Rsh_Fir_reg_p1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p);
  // checkMissing(p1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn min(n1, p1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(<sym n>, <sym p>)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1888930683_1(SEXP CCP, SEXP RHO) {
  // sym1 = ldf min
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base1 = ldf min in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r5
  return Rsh_Fir_reg_r5_;

L1_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // p3 = ld p
  Rsh_Fir_reg_p3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // p4 = force? p3
  Rsh_Fir_reg_p4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p3_);
  // checkMissing(p4)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // min1 = ldf min in base
  Rsh_Fir_reg_min1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r6 = dyn min1(n3, p4)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min1_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L0_;

L2_:;
  // r4 = dyn base1(<sym n>, <sym p>)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1888930683_2(SEXP CCP, SEXP RHO) {
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // return x10
  return Rsh_Fir_reg_x10_;
}
SEXP Rsh_Fir_user_promise_inner1888930683_3(SEXP CCP, SEXP RHO) {
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return x12
  return Rsh_Fir_reg_x12_;
}
SEXP Rsh_Fir_user_promise_inner1888930683_4(SEXP CCP, SEXP RHO) {
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // return x14
  return Rsh_Fir_reg_x14_;
}
SEXP Rsh_Fir_user_promise_inner1888930683_5(SEXP CCP, SEXP RHO) {
  // zero = ld zero
  Rsh_Fir_reg_zero = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // zero1 = force? zero
  Rsh_Fir_reg_zero1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zero);
  // checkMissing(zero1)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_zero1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // return zero1
  return Rsh_Fir_reg_zero1_;
}
SEXP Rsh_Fir_user_promise_inner1888930683_6(SEXP CCP, SEXP RHO) {
  // n8 = ld n
  Rsh_Fir_reg_n8_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // n9 = force? n8
  Rsh_Fir_reg_n9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n8_);
  // checkMissing(n9)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_n9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // return n9
  return Rsh_Fir_reg_n9_;
}
SEXP Rsh_Fir_user_promise_inner1888930683_7(SEXP CCP, SEXP RHO) {
  // np4 = ld np
  Rsh_Fir_reg_np4_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // np5 = force? np4
  Rsh_Fir_reg_np5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_np4_);
  // checkMissing(np5)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_np5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // return np5
  return Rsh_Fir_reg_np5_;
}
SEXP Rsh_Fir_user_promise_inner1888930683_8(SEXP CCP, SEXP RHO) {
  // zero2 = ld zero
  Rsh_Fir_reg_zero2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // zero3 = force? zero2
  Rsh_Fir_reg_zero3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zero2_);
  // checkMissing(zero3)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_zero3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // return zero3
  return Rsh_Fir_reg_zero3_;
}
SEXP Rsh_Fir_user_promise_inner1888930683_9(SEXP CCP, SEXP RHO) {
  // np6 = ld np
  Rsh_Fir_reg_np6_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // np7 = force? np6
  Rsh_Fir_reg_np7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_np6_);
  // checkMissing(np7)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_np7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // return np7
  return Rsh_Fir_reg_np7_;
}
SEXP Rsh_Fir_user_promise_inner1888930683_10(SEXP CCP, SEXP RHO) {
  // p18 = ld p
  Rsh_Fir_reg_p18_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // p19 = force? p18
  Rsh_Fir_reg_p19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p18_);
  // checkMissing(p19)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_p19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // return p19
  return Rsh_Fir_reg_p19_;
}
SEXP Rsh_Fir_user_promise_inner1888930683_11(SEXP CCP, SEXP RHO) {
  // zero4 = ld zero
  Rsh_Fir_reg_zero4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // zero5 = force? zero4
  Rsh_Fir_reg_zero5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zero4_);
  // checkMissing(zero5)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_zero5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // return zero5
  return Rsh_Fir_reg_zero5_;
}
SEXP Rsh_Fir_user_promise_inner1888930683_12(SEXP CCP, SEXP RHO) {
  // n10 = ld n
  Rsh_Fir_reg_n10_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // n11 = force? n10
  Rsh_Fir_reg_n11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n10_);
  // checkMissing(n11)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_n11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // return n11
  return Rsh_Fir_reg_n11_;
}
SEXP Rsh_Fir_user_promise_inner1888930683_13(SEXP CCP, SEXP RHO) {
  // n12 = ld n
  Rsh_Fir_reg_n12_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // n13 = force? n12
  Rsh_Fir_reg_n13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n12_);
  // checkMissing(n13)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_n13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // return n13
  return Rsh_Fir_reg_n13_;
}
SEXP Rsh_Fir_user_promise_inner1888930683_14(SEXP CCP, SEXP RHO) {
  // zero6 = ld zero
  Rsh_Fir_reg_zero6_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // zero7 = force? zero6
  Rsh_Fir_reg_zero7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zero6_);
  // checkMissing(zero7)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_zero7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // return zero7
  return Rsh_Fir_reg_zero7_;
}
SEXP Rsh_Fir_user_promise_inner1888930683_15(SEXP CCP, SEXP RHO) {
  // p25 = ld p
  Rsh_Fir_reg_p25_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // p26 = force? p25
  Rsh_Fir_reg_p26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p25_);
  // checkMissing(p26)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_p26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // return p26
  return Rsh_Fir_reg_p26_;
}
SEXP Rsh_Fir_user_promise_inner1888930683_16(SEXP CCP, SEXP RHO) {
  // p28 = ld p
  Rsh_Fir_reg_p28_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // p29 = force? p28
  Rsh_Fir_reg_p29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p28_);
  // checkMissing(p29)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_p29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // return p29
  return Rsh_Fir_reg_p29_;
}
SEXP Rsh_Fir_user_promise_inner1888930683_17(SEXP CCP, SEXP RHO) {
  // zero8 = ld zero
  Rsh_Fir_reg_zero8_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // zero9 = force? zero8
  Rsh_Fir_reg_zero9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zero8_);
  // checkMissing(zero9)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_zero9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // return zero9
  return Rsh_Fir_reg_zero9_;
}
SEXP Rsh_Fir_user_promise_inner1888930683_18(SEXP CCP, SEXP RHO) {
  // zero10 = ld zero
  Rsh_Fir_reg_zero10_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // zero11 = force? zero10
  Rsh_Fir_reg_zero11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zero10_);
  // checkMissing(zero11)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_zero11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // return zero11
  return Rsh_Fir_reg_zero11_;
}
SEXP Rsh_Fir_user_promise_inner1888930683_19(SEXP CCP, SEXP RHO) {
  // sym11 = ldf min
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base11 = ldf min in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args129);
  // if guard11 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r72
  return Rsh_Fir_reg_r72_;

L1_:;
  // n16 = ld n
  Rsh_Fir_reg_n16_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // n17 = force? n16
  Rsh_Fir_reg_n17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n16_);
  // checkMissing(n17)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_n17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // p35 = ld p
  Rsh_Fir_reg_p35_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // p36 = force? p35
  Rsh_Fir_reg_p36_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p35_);
  // checkMissing(p36)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_p36_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // min3 = ldf min in base
  Rsh_Fir_reg_min3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r73 = dyn min3(n17, p36)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_n17_;
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_p36_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min3_, 2, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L0(r73)
  // L0(r73)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r73_;
  goto L0_;

L2_:;
  // r71 = dyn base11(<sym n>, <sym p>)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args133[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args133, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L0(r71)
  // L0(r71)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r71_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1888930683_20(SEXP CCP, SEXP RHO) {
  // sym13 = ldf min
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base13 = ldf min in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args141);
  // if guard13 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r80
  return Rsh_Fir_reg_r80_;

L1_:;
  // n18 = ld n
  Rsh_Fir_reg_n18_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // n19 = force? n18
  Rsh_Fir_reg_n19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n18_);
  // checkMissing(n19)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_n19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // p38 = ld p
  Rsh_Fir_reg_p38_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // p39 = force? p38
  Rsh_Fir_reg_p39_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p38_);
  // checkMissing(p39)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_p39_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty()));
  // min4 = ldf min in base
  Rsh_Fir_reg_min4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r81 = dyn min4(n19, p39)
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_n19_;
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg_p39_;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min4_, 2, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L0(r81)
  // L0(r81)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r81_;
  goto L0_;

L2_:;
  // r79 = dyn base13(<sym n>, <sym p>)
  SEXP Rsh_Fir_array_args145[2];
  Rsh_Fir_array_args145[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args145[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 2, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L0(r79)
  // L0(r79)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r79_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
