#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1301552337_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1301552337_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1301552337_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1301552337_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1301552337_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1301552337_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner1301552337
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1301552337_, RHO, CCP);
  // st `.TAOCP1997init` = r
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
SEXP Rsh_Fir_user_function_inner1301552337_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1301552337 dynamic dispatch ([seed])

  return Rsh_Fir_user_version_inner1301552337_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1301552337_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1301552337 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1301552337/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_seed;  // seed
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_KK;  // KK
  SEXP Rsh_Fir_reg_KK1_;  // KK1
  SEXP Rsh_Fir_reg_KK2_;  // KK2
  SEXP Rsh_Fir_reg_KK3_;  // KK3
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_KK4_;  // KK4
  SEXP Rsh_Fir_reg_KK5_;  // KK5
  SEXP Rsh_Fir_reg_LL;  // LL
  SEXP Rsh_Fir_reg_LL1_;  // LL1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_seed1_;  // seed1
  SEXP Rsh_Fir_reg_seed2_;  // seed2
  SEXP Rsh_Fir_reg_seed3_;  // seed3
  SEXP Rsh_Fir_reg_seed4_;  // seed4
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_integer;  // integer
  SEXP Rsh_Fir_reg_KKK;  // KKK
  SEXP Rsh_Fir_reg_KKK1_;  // KKK1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_KK6_;  // KK6
  SEXP Rsh_Fir_reg_KK7_;  // KK7
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_ss;  // ss
  SEXP Rsh_Fir_reg_ss1_;  // ss1
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_ss3_;  // ss3
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_j;  // j
  SEXP Rsh_Fir_reg_j1_;  // j1
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_ss6_;  // ss6
  SEXP Rsh_Fir_reg_ss7_;  // ss7
  SEXP Rsh_Fir_reg_ss8_;  // ss8
  SEXP Rsh_Fir_reg_ss9_;  // ss9
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_ss10_;  // ss10
  SEXP Rsh_Fir_reg_ss11_;  // ss11
  SEXP Rsh_Fir_reg_MM;  // MM
  SEXP Rsh_Fir_reg_MM1_;  // MM1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_ss12_;  // ss12
  SEXP Rsh_Fir_reg_ss13_;  // ss13
  SEXP Rsh_Fir_reg_MM2_;  // MM2
  SEXP Rsh_Fir_reg_MM3_;  // MM3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_X;  // X
  SEXP Rsh_Fir_reg_X1_;  // X1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_X3_;  // X3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_seed5_;  // seed5
  SEXP Rsh_Fir_reg_seed6_;  // seed6
  SEXP Rsh_Fir_reg_T;  // T
  SEXP Rsh_Fir_reg_T1_;  // T1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_KK8_;  // KK8
  SEXP Rsh_Fir_reg_KK9_;  // KK9
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_X4_;  // X4
  SEXP Rsh_Fir_reg_X5_;  // X5
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_X7_;  // X7
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_j2_;  // j2
  SEXP Rsh_Fir_reg_j3_;  // j3
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_i24_;  // i24
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_j4_;  // j4
  SEXP Rsh_Fir_reg_j5_;  // j5
  SEXP Rsh_Fir_reg_j6_;  // j6
  SEXP Rsh_Fir_reg_j7_;  // j7
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_seq;  // seq
  SEXP Rsh_Fir_reg_KKK2_;  // KKK2
  SEXP Rsh_Fir_reg_KKK3_;  // KKK3
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_KKL;  // KKL
  SEXP Rsh_Fir_reg_KKL1_;  // KKL1
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_s2_;  // s2
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_i25_;  // i25
  SEXP Rsh_Fir_reg_i26_;  // i26
  SEXP Rsh_Fir_reg_i27_;  // i27
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_X8_;  // X8
  SEXP Rsh_Fir_reg_X9_;  // X9
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_i31_;  // i31
  SEXP Rsh_Fir_reg_X11_;  // X11
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_i33_;  // i33
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_j8_;  // j8
  SEXP Rsh_Fir_reg_j9_;  // j9
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_X12_;  // X12
  SEXP Rsh_Fir_reg_X13_;  // X13
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_i35_;  // i35
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_X15_;  // X15
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_i37_;  // i37
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_j10_;  // j10
  SEXP Rsh_Fir_reg_j11_;  // j11
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_i39_;  // i39
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_i41_;  // i41
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_KKK4_;  // KKK4
  SEXP Rsh_Fir_reg_KKK5_;  // KKK5
  SEXP Rsh_Fir_reg_j12_;  // j12
  SEXP Rsh_Fir_reg_j13_;  // j13
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg____3_;  // ___3
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_KKK6_;  // KKK6
  SEXP Rsh_Fir_reg_KKK7_;  // KKK7
  SEXP Rsh_Fir_reg_KK10_;  // KK10
  SEXP Rsh_Fir_reg_KK11_;  // KK11
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_s3_;  // s3
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_i42_;  // i42
  SEXP Rsh_Fir_reg_i43_;  // i43
  SEXP Rsh_Fir_reg_i44_;  // i44
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_X16_;  // X16
  SEXP Rsh_Fir_reg_X17_;  // X17
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_i48_;  // i48
  SEXP Rsh_Fir_reg_X19_;  // X19
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_i50_;  // i50
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_j14_;  // j14
  SEXP Rsh_Fir_reg_j15_;  // j15
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_X20_;  // X20
  SEXP Rsh_Fir_reg_X21_;  // X21
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_i54_;  // i54
  SEXP Rsh_Fir_reg_X23_;  // X23
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_i56_;  // i56
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_j16_;  // j16
  SEXP Rsh_Fir_reg_j17_;  // j17
  SEXP Rsh_Fir_reg_KKL2_;  // KKL2
  SEXP Rsh_Fir_reg_KKL3_;  // KKL3
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_X24_;  // X24
  SEXP Rsh_Fir_reg_X25_;  // X25
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_i58_;  // i58
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_X27_;  // X27
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_i60_;  // i60
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_j18_;  // j18
  SEXP Rsh_Fir_reg_j19_;  // j19
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_MM4_;  // MM4
  SEXP Rsh_Fir_reg_MM5_;  // MM5
  SEXP Rsh_Fir_reg___10_;  // __10
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_l16_;  // l16
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_i62_;  // i62
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_l18_;  // l18
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_i64_;  // i64
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_j20_;  // j20
  SEXP Rsh_Fir_reg_j21_;  // j21
  SEXP Rsh_Fir_reg_KKL4_;  // KKL4
  SEXP Rsh_Fir_reg_KKL5_;  // KKL5
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg____4_;  // ___4
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_X28_;  // X28
  SEXP Rsh_Fir_reg_X29_;  // X29
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_i66_;  // i66
  SEXP Rsh_Fir_reg_X31_;  // X31
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_i68_;  // i68
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_j22_;  // j22
  SEXP Rsh_Fir_reg_j23_;  // j23
  SEXP Rsh_Fir_reg_KK12_;  // KK12
  SEXP Rsh_Fir_reg_KK13_;  // KK13
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg___11_;  // __11
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_X32_;  // X32
  SEXP Rsh_Fir_reg_X33_;  // X33
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_i70_;  // i70
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg_X35_;  // X35
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg_i72_;  // i72
  SEXP Rsh_Fir_reg_dx42_;  // dx42
  SEXP Rsh_Fir_reg_dx43_;  // dx43
  SEXP Rsh_Fir_reg_j24_;  // j24
  SEXP Rsh_Fir_reg_j25_;  // j25
  SEXP Rsh_Fir_reg___12_;  // __12
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_MM6_;  // MM6
  SEXP Rsh_Fir_reg_MM7_;  // MM7
  SEXP Rsh_Fir_reg___13_;  // __13
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_l19_;  // l19
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_i74_;  // i74
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_l21_;  // l21
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx44_;  // dx44
  SEXP Rsh_Fir_reg_i76_;  // i76
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_dx45_;  // dx45
  SEXP Rsh_Fir_reg_j26_;  // j26
  SEXP Rsh_Fir_reg_j27_;  // j27
  SEXP Rsh_Fir_reg_KK14_;  // KK14
  SEXP Rsh_Fir_reg_KK15_;  // KK15
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg____5_;  // ___5
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_i77_;  // i77
  SEXP Rsh_Fir_reg_ss14_;  // ss14
  SEXP Rsh_Fir_reg_ss15_;  // ss15
  SEXP Rsh_Fir_reg___14_;  // __14
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_KK16_;  // KK16
  SEXP Rsh_Fir_reg_KK17_;  // KK17
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_s4_;  // s4
  SEXP Rsh_Fir_reg_l22_;  // l22
  SEXP Rsh_Fir_reg_i78_;  // i78
  SEXP Rsh_Fir_reg_i79_;  // i79
  SEXP Rsh_Fir_reg_i80_;  // i80
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_X36_;  // X36
  SEXP Rsh_Fir_reg_X37_;  // X37
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_i84_;  // i84
  SEXP Rsh_Fir_reg_X39_;  // X39
  SEXP Rsh_Fir_reg_dr30_;  // dr30
  SEXP Rsh_Fir_reg_dc15_;  // dc15
  SEXP Rsh_Fir_reg_dx46_;  // dx46
  SEXP Rsh_Fir_reg_i86_;  // i86
  SEXP Rsh_Fir_reg_dx47_;  // dx47
  SEXP Rsh_Fir_reg_j28_;  // j28
  SEXP Rsh_Fir_reg_j29_;  // j29
  SEXP Rsh_Fir_reg___15_;  // __15
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_l23_;  // l23
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_i88_;  // i88
  SEXP Rsh_Fir_reg_dx49_;  // dx49
  SEXP Rsh_Fir_reg_l25_;  // l25
  SEXP Rsh_Fir_reg_dr32_;  // dr32
  SEXP Rsh_Fir_reg_dc16_;  // dc16
  SEXP Rsh_Fir_reg_dx51_;  // dx51
  SEXP Rsh_Fir_reg_i90_;  // i90
  SEXP Rsh_Fir_reg_dx53_;  // dx53
  SEXP Rsh_Fir_reg_j30_;  // j30
  SEXP Rsh_Fir_reg_j31_;  // j31
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg____6_;  // ___6
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_X40_;  // X40
  SEXP Rsh_Fir_reg_X41_;  // X41
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_X43_;  // X43
  SEXP Rsh_Fir_reg_dr34_;  // dr34
  SEXP Rsh_Fir_reg_dc17_;  // dc17
  SEXP Rsh_Fir_reg_dx54_;  // dx54
  SEXP Rsh_Fir_reg_dx55_;  // dx55
  SEXP Rsh_Fir_reg_KK18_;  // KK18
  SEXP Rsh_Fir_reg_KK19_;  // KK19
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg___16_;  // __16
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_l26_;  // l26
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_dx57_;  // dx57
  SEXP Rsh_Fir_reg_l28_;  // l28
  SEXP Rsh_Fir_reg_dr36_;  // dr36
  SEXP Rsh_Fir_reg_dc18_;  // dc18
  SEXP Rsh_Fir_reg_dx59_;  // dx59
  SEXP Rsh_Fir_reg_dx61_;  // dx61
  SEXP Rsh_Fir_reg____7_;  // ___7
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_X44_;  // X44
  SEXP Rsh_Fir_reg_X45_;  // X45
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_X47_;  // X47
  SEXP Rsh_Fir_reg_dr38_;  // dr38
  SEXP Rsh_Fir_reg_dc19_;  // dc19
  SEXP Rsh_Fir_reg_dx62_;  // dx62
  SEXP Rsh_Fir_reg_dx63_;  // dx63
  SEXP Rsh_Fir_reg_KK20_;  // KK20
  SEXP Rsh_Fir_reg_KK21_;  // KK21
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg___17_;  // __17
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg___18_;  // __18
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_X48_;  // X48
  SEXP Rsh_Fir_reg_X49_;  // X49
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_X51_;  // X51
  SEXP Rsh_Fir_reg_dr40_;  // dr40
  SEXP Rsh_Fir_reg_dc20_;  // dc20
  SEXP Rsh_Fir_reg_dx64_;  // dx64
  SEXP Rsh_Fir_reg_dx65_;  // dx65
  SEXP Rsh_Fir_reg_LL2_;  // LL2
  SEXP Rsh_Fir_reg_LL3_;  // LL3
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg___19_;  // __19
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_X52_;  // X52
  SEXP Rsh_Fir_reg_X53_;  // X53
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_dx67_;  // dx67
  SEXP Rsh_Fir_reg_X55_;  // X55
  SEXP Rsh_Fir_reg_dr42_;  // dr42
  SEXP Rsh_Fir_reg_dc21_;  // dc21
  SEXP Rsh_Fir_reg_dx69_;  // dx69
  SEXP Rsh_Fir_reg_dx70_;  // dx70
  SEXP Rsh_Fir_reg_dx71_;  // dx71
  SEXP Rsh_Fir_reg_KK22_;  // KK22
  SEXP Rsh_Fir_reg_KK23_;  // KK23
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg___20_;  // __20
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_MM8_;  // MM8
  SEXP Rsh_Fir_reg_MM9_;  // MM9
  SEXP Rsh_Fir_reg___21_;  // __21
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_l29_;  // l29
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_l31_;  // l31
  SEXP Rsh_Fir_reg_dr44_;  // dr44
  SEXP Rsh_Fir_reg_dc22_;  // dc22
  SEXP Rsh_Fir_reg_dx72_;  // dx72
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_dx73_;  // dx73
  SEXP Rsh_Fir_reg_LL4_;  // LL4
  SEXP Rsh_Fir_reg_LL5_;  // LL5
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg____8_;  // ___8
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_ss16_;  // ss16
  SEXP Rsh_Fir_reg_ss17_;  // ss17
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_ss18_;  // ss18
  SEXP Rsh_Fir_reg_ss19_;  // ss19
  SEXP Rsh_Fir_reg____9_;  // ___9
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_T2_;  // T2
  SEXP Rsh_Fir_reg_T3_;  // T3
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_X56_;  // X56
  SEXP Rsh_Fir_reg_X57_;  // X57
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_X59_;  // X59
  SEXP Rsh_Fir_reg_dr46_;  // dr46
  SEXP Rsh_Fir_reg_dc23_;  // dc23
  SEXP Rsh_Fir_reg_dx74_;  // dx74
  SEXP Rsh_Fir_reg_dx75_;  // dx75
  SEXP Rsh_Fir_reg_LL6_;  // LL6
  SEXP Rsh_Fir_reg_LL7_;  // LL7
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg_KK24_;  // KK24
  SEXP Rsh_Fir_reg_KK25_;  // KK25
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg___22_;  // __22
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_X60_;  // X60
  SEXP Rsh_Fir_reg_X61_;  // X61
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_X63_;  // X63
  SEXP Rsh_Fir_reg_dr48_;  // dr48
  SEXP Rsh_Fir_reg_dc24_;  // dc24
  SEXP Rsh_Fir_reg_dx76_;  // dx76
  SEXP Rsh_Fir_reg_dx77_;  // dx77
  SEXP Rsh_Fir_reg_LL8_;  // LL8
  SEXP Rsh_Fir_reg_LL9_;  // LL9
  SEXP Rsh_Fir_reg_r110_;  // r110
  SEXP Rsh_Fir_reg___23_;  // __23
  SEXP Rsh_Fir_reg_r111_;  // r111
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_r112_;  // r112
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r113_;  // r113
  SEXP Rsh_Fir_reg_r114_;  // r114
  SEXP Rsh_Fir_reg_rs;  // rs
  SEXP Rsh_Fir_reg_rs1_;  // rs1
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r115_;  // r115

  // Bind parameters
  Rsh_Fir_reg_seed = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st seed = seed
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_seed, RHO);
  (void)(Rsh_Fir_reg_seed);
  // st KK = 100
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_const(CCP, 2), RHO);
  (void)(Rsh_const(CCP, 2));
  // st LL = 37
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_const(CCP, 4), RHO);
  (void)(Rsh_const(CCP, 4));
  // sym = ldf `as.integer`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf `as.integer` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L0_:;
  // st MM = r1
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // KK = ld KK
  Rsh_Fir_reg_KK = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L53() else D1()
  // L53()
  goto L53_;

L1_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args1);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if c then L63() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L63()
    goto L63_;
  } else {
  // L5()
    goto L5_;
  }

L2_:;
  // st X = dx1
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // ss6 = ld ss
  Rsh_Fir_reg_ss6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L69() else D13()
  // L69()
  goto L69_;

L3_:;
  // goto L4(i8)
  // L4(i8)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i8_;
  goto L4_;

L4_:;
  // goto L1(i11)
  // L1(i11)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i11_;
  goto L1_;

L5_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args3[4];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args3[3] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // st j = x
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // ss = ld ss
  Rsh_Fir_reg_ss = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L64() else D11()
  // L64()
  goto L64_;

L6_:;
  // r19 = `+`(dx3, 1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // l4 = ld X
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c4 = `is.object`(l4)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c4 then L81() else L82(r19, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L81()
    goto L81_;
  } else {
  // L82(r19, l4)
    Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r19_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L82_;
  }

L7_:;
  // st X = dx5
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // seed5 = ld seed
  Rsh_Fir_reg_seed5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L84() else D20()
  // L84()
  goto L84_;

L8_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L219() else L220()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L219()
    goto L219_;
  } else {
  // L220()
    goto L220_;
  }

L9_:;
  // i14 = `+`.1(i13, 1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_i14_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args7);
  // c6 = `<`.1(l7, i14)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if c6 then L88() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L88()
    goto L88_;
  } else {
  // L12()
    goto L12_;
  }

L10_:;
  // l8 = ld X
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c8 = `is.object`(l8)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c8 then L94() else L95(i20, dx7, l8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L94()
    goto L94_;
  } else {
  // L95(i20, dx7, l8)
    Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i20_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l8_;
    goto L95_;
  }

L11_:;
  // st X = dx13
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // goto L9(i24)
  // L9(i24)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i24_;
  goto L9_;

L12_:;
  // x1 = `[[`(s1, i14, NULL, TRUE)
  SEXP Rsh_Fir_array_args10[4];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args10[3] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_x1_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // st j = x1
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // X4 = ld X
  Rsh_Fir_reg_X4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L89() else D23()
  // L89()
  goto L89_;

L13_:;
  // i27 = `+`.1(i26, 1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_i26_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_i27_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // c9 = `<`.1(l11, i27)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if c9 then L101() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L101()
    goto L101_;
  } else {
  // L17()
    goto L17_;
  }

L14_:;
  // X12 = ld X
  Rsh_Fir_reg_X12_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L107() else D31()
  // L107()
  goto L107_;

L15_:;
  // __5 = ldf `%%` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r38 = dyn __5(dx21, 2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L112() else D33()
  // L112()
  goto L112_;

L16_:;
  // st X = dx23
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx23_, RHO);
  (void)(Rsh_Fir_reg_dx23_);
  // goto L13(i41)
  // L13(i41)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i41_;
  goto L13_;

L17_:;
  // x2 = `[[`(s2, i27, NULL, TRUE)
  SEXP Rsh_Fir_array_args14[4];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_s2_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_i27_;
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args14[3] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_x2_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // st j = x2
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_x2_, RHO);
  (void)(Rsh_Fir_reg_x2_);
  // X8 = ld X
  Rsh_Fir_reg_X8_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L102() else D29()
  // L102()
  goto L102_;

L18_:;
  // i44 = `+`.1(i43, 1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_i43_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_i44_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args15);
  // c13 = `<`.1(l15, i44)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_i44_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if c13 then L120() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L120()
    goto L120_;
  } else {
  // L28()
    goto L28_;
  }

L19_:;
  // __7 = ldf `%%` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r50 = dyn __7(dx25, 2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L126() else D40()
  // L126()
  goto L126_;

L20_:;
  // goto L27(i50)
  // L27(i50)
  Rsh_Fir_reg_i77_ = Rsh_Fir_reg_i50_;
  goto L27_;

L21_:;
  // X24 = ld X
  Rsh_Fir_reg_X24_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L134() else D44()
  // L134()
  goto L134_;

L22_:;
  // r55 = `-`(dx32, dx33)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dx32_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_dx33_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // MM4 = ld MM
  Rsh_Fir_reg_MM4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L139() else D46()
  // L139()
  goto L139_;

L23_:;
  // st X = dx35
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx35_, RHO);
  (void)(Rsh_Fir_reg_dx35_);
  // X28 = ld X
  Rsh_Fir_reg_X28_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L146() else D50()
  // L146()
  goto L146_;

L24_:;
  // X32 = ld X
  Rsh_Fir_reg_X32_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L152() else D53()
  // L152()
  goto L152_;

L25_:;
  // r66 = `-`(dx42, dx43)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dx42_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_dx43_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // MM6 = ld MM
  Rsh_Fir_reg_MM6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L157() else D55()
  // L157()
  goto L157_;

L26_:;
  // st X = dx45
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx45_, RHO);
  (void)(Rsh_Fir_reg_dx45_);
  // goto L27(i76)
  // L27(i76)
  Rsh_Fir_reg_i77_ = Rsh_Fir_reg_i76_;
  goto L27_;

L27_:;
  // goto L18(i77)
  // L18(i77)
  Rsh_Fir_reg_i43_ = Rsh_Fir_reg_i77_;
  goto L18_;

L28_:;
  // x3 = `[[`(s3, i44, NULL, TRUE)
  SEXP Rsh_Fir_array_args20[4];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_i44_;
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args20[3] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_x3_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // st j = x3
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_x3_, RHO);
  (void)(Rsh_Fir_reg_x3_);
  // X16 = ld X
  Rsh_Fir_reg_X16_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L121() else D38()
  // L121()
  goto L121_;

L29_:;
  // goto L42()
  // L42()
  goto L42_;

L30_:;
  // i80 = `+`.1(i79, 1)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_i79_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_i80_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // c23 = `<`.1(l22, i80)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_i80_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if c23 then L169() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L169()
    goto L169_;
  } else {
  // L33()
    goto L33_;
  }

L31_:;
  // l23 = ld X
  Rsh_Fir_reg_l23_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c25 = `is.object`(l23)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_l23_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c25 then L175() else L176(i86, dx47, l23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L175()
    goto L175_;
  } else {
  // L176(i86, dx47, l23)
    Rsh_Fir_reg_i88_ = Rsh_Fir_reg_i86_;
    Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_dx47_;
    Rsh_Fir_reg_l25_ = Rsh_Fir_reg_l23_;
    goto L176_;
  }

L32_:;
  // st X = dx53
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx53_, RHO);
  (void)(Rsh_Fir_reg_dx53_);
  // goto L30(i90)
  // L30(i90)
  Rsh_Fir_reg_i79_ = Rsh_Fir_reg_i90_;
  goto L30_;

L33_:;
  // x4 = `[[`(s4, i80, NULL, TRUE)
  SEXP Rsh_Fir_array_args24[4];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_s4_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_i80_;
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args24[3] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_x4_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // st j = x4
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_x4_, RHO);
  (void)(Rsh_Fir_reg_x4_);
  // X36 = ld X
  Rsh_Fir_reg_X36_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L170() else D62()
  // L170()
  goto L170_;

L34_:;
  // l26 = ld X
  Rsh_Fir_reg_l26_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c27 = `is.object`(l26)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_l26_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c27 then L184() else L185(dx55, l26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L184()
    goto L184_;
  } else {
  // L185(dx55, l26)
    Rsh_Fir_reg_dx57_ = Rsh_Fir_reg_dx55_;
    Rsh_Fir_reg_l28_ = Rsh_Fir_reg_l26_;
    goto L185_;
  }

L35_:;
  // st X = dx61
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx61_, RHO);
  (void)(Rsh_Fir_reg_dx61_);
  // X44 = ld X
  Rsh_Fir_reg_X44_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L187() else D67()
  // L187()
  goto L187_;

L36_:;
  // __18 = ldf `%%` in base
  Rsh_Fir_reg___18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r86 = dyn __18(dx63, 2)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dx63_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___18_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L192() else D69()
  // L192()
  goto L192_;

L37_:;
  // goto L41(NULL)
  // L41(NULL)
  Rsh_Fir_reg_r100_ = Rsh_const(CCP, 11);
  goto L41_;

L38_:;
  // X52 = ld X
  Rsh_Fir_reg_X52_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L199() else D72()
  // L199()
  goto L199_;

L39_:;
  // r92 = `-`(dx70, dx71)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dx70_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_dx71_;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // MM8 = ld MM
  Rsh_Fir_reg_MM8_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L204() else D74()
  // L204()
  goto L204_;

L40_:;
  // st X = dx73
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx73_, RHO);
  (void)(Rsh_Fir_reg_dx73_);
  // goto L41(r97)
  // L41(r97)
  Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r97_;
  goto L41_;

L41_:;
  // goto L42()
  // L42()
  goto L42_;

L42_:;
  // ss16 = ld ss
  Rsh_Fir_reg_ss16_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L212() else D77()
  // L212()
  goto L212_;

L43_:;
  // T2 = ld T
  Rsh_Fir_reg_T2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L217() else D80()
  // L217()
  goto L217_;

L44_:;
  // goto L45()
  // L45()
  goto L45_;

L45_:;
  // T = ld T
  Rsh_Fir_reg_T = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L85() else D21()
  // L85()
  goto L85_;

L46_:;
  // st rs = r106
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r106_, RHO);
  (void)(Rsh_Fir_reg_r106_);
  // sym2 = ldf invisible
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base2 = ldf invisible in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard2 then L233() else L234()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L233()
    goto L233_;
  } else {
  // L234()
    goto L234_;
  }

L47_:;
  // X60 = ld X
  Rsh_Fir_reg_X60_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L227() else D84()
  // L227()
  goto L227_;

L48_:;
  // c36 = ldf c in base
  Rsh_Fir_reg_c36_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r112 = dyn c36(dx75, dx77)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dx75_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_dx77_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c36_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L232() else D86()
  // L232()
  goto L232_;

L49_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r114
  return Rsh_Fir_reg_r114_;

L50_:;
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn as_integer(1.073741824E9)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L52() else D0()
  // L52()
  goto L52_;

L51_:;
  // r = dyn base(<lang `^`(2.0, 30.0)>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 11 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L52_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

D1_:;
  // deopt 13 [KK]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_KK;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L53_:;
  // KK1 = force? KK
  Rsh_Fir_reg_KK1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KK);
  // checkMissing(KK1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_KK1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // KK2 = ld KK
  Rsh_Fir_reg_KK2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L54() else D2()
  // L54()
  goto L54_;

D2_:;
  // deopt 14 [KK1, KK2]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_KK1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_KK2_;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L54_:;
  // KK3 = force? KK2
  Rsh_Fir_reg_KK3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KK2_);
  // checkMissing(KK3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_KK3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // r3 = `+`(KK1, KK3)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_KK1_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_KK3_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // r4 = `-`(r3, 1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // st KKK = r4
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // KK4 = ld KK
  Rsh_Fir_reg_KK4_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L55() else D3()
  // L55()
  goto L55_;

D3_:;
  // deopt 20 [KK4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_KK4_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L55_:;
  // KK5 = force? KK4
  Rsh_Fir_reg_KK5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KK4_);
  // checkMissing(KK5)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_KK5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // LL = ld LL
  Rsh_Fir_reg_LL = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L56() else D4()
  // L56()
  goto L56_;

D4_:;
  // deopt 21 [KK5, LL]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_KK5_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_LL;
  Rsh_Fir_deopt(21, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L56_:;
  // LL1 = force? LL
  Rsh_Fir_reg_LL1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LL);
  // checkMissing(LL1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_LL1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // r5 = `-`(KK5, LL1)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_KK5_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_LL1_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // st KKL = r5
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // seed1 = ld seed
  Rsh_Fir_reg_seed1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L57() else D5()
  // L57()
  goto L57_;

D5_:;
  // deopt 25 [seed1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_seed1_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L57_:;
  // seed2 = force? seed1
  Rsh_Fir_reg_seed2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_seed1_);
  // checkMissing(seed2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_seed2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // seed3 = ld seed
  Rsh_Fir_reg_seed3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L58() else D6()
  // L58()
  goto L58_;

D6_:;
  // deopt 27 [seed2, seed3]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_seed2_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_seed3_;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L58_:;
  // seed4 = force? seed3
  Rsh_Fir_reg_seed4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_seed3_);
  // checkMissing(seed4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_seed4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // __ = ldf `%%` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r6 = dyn __(seed4, 2)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_seed4_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L59() else D7()
  // L59()
  goto L59_;

D7_:;
  // deopt 31 [seed2, r6]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_seed2_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(31, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L59_:;
  // r7 = `-`(seed2, r6)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_seed2_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // r8 = `+`(r7, 2)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // st ss = r8
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // integer = ldf integer
  Rsh_Fir_reg_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L60() else D8()
  // L60()
  goto L60_;

D8_:;
  // deopt 37 []
  Rsh_Fir_deopt(37, 0, NULL, CCP, RHO);
  return R_NilValue;

L60_:;
  // p = prom<V +>{
  //   KKK = ld KKK;
  //   KKK1 = force? KKK;
  //   checkMissing(KKK1);
  //   return KKK1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1301552337_, CCP, RHO);
  // r10 = dyn integer(p)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_integer, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L61() else D9()
  // L61()
  goto L61_;

D9_:;
  // deopt 39 [r10]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L61_:;
  // st X = r10
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // KK6 = ld KK
  Rsh_Fir_reg_KK6_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L62() else D10()
  // L62()
  goto L62_;

D10_:;
  // deopt 42 [1, KK6]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_KK6_;
  Rsh_Fir_deopt(42, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L62_:;
  // KK7 = force? KK6
  Rsh_Fir_reg_KK7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KK6_);
  // checkMissing(KK7)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_KK7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // r11 = `:`(1, KK7)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_KK7_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // s = toForSeq(r11)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 25);
  // goto L1(i)
  // L1(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L1_;

L63_:;
  // X = ld X
  Rsh_Fir_reg_X = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L77() else D19()
  // L77()
  goto L77_;

D11_:;
  // deopt 45 [i2, ss]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_ss;
  Rsh_Fir_deopt(45, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L64_:;
  // ss1 = force? ss
  Rsh_Fir_reg_ss1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ss);
  // checkMissing(ss1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_ss1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // l1 = ld X
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c1 = `is.object`(l1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if c1 then L65() else L66(i2, ss1, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L65()
    goto L65_;
  } else {
  // L66(i2, ss1, l1)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_ss3_ = Rsh_Fir_reg_ss1_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L66_;
  }

L65_:;
  // dr = tryDispatchBuiltin.0("[<-", l1, ss1)
  SEXP Rsh_Fir_array_args52[3];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args52[2] = Rsh_Fir_reg_ss1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args52);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if dc then L67() else L66(i2, ss1, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L67()
    goto L67_;
  } else {
  // L66(i2, ss1, dr)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_ss3_ = Rsh_Fir_reg_ss1_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr;
    goto L66_;
  }

L66_:;
  // j = ld j
  Rsh_Fir_reg_j = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L68() else D12()
  // L68()
  goto L68_;

L67_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L2(i2, dx)
  // L2(i2, dx)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L2_;

D12_:;
  // deopt 48 [i6, ss3, l3, ss1, j]
  SEXP Rsh_Fir_array_deopt_stack11[5];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_ss3_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack11[3] = Rsh_Fir_reg_ss1_;
  Rsh_Fir_array_deopt_stack11[4] = Rsh_Fir_reg_j;
  Rsh_Fir_deopt(48, 5, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L68_:;
  // j1 = force? j
  Rsh_Fir_reg_j1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r12 = dyn ___(l3, ss1, j1)
  SEXP Rsh_Fir_array_args55[3];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_ss1_;
  Rsh_Fir_array_args55[2] = Rsh_Fir_reg_j1_;
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L2(i6, r12)
  // L2(i6, r12)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r12_;
  goto L2_;

D13_:;
  // deopt 52 [i8, ss6]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_ss6_;
  Rsh_Fir_deopt(52, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L69_:;
  // ss7 = force? ss6
  Rsh_Fir_reg_ss7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ss6_);
  // checkMissing(ss7)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_ss7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // ss8 = ld ss
  Rsh_Fir_reg_ss8_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L70() else D14()
  // L70()
  goto L70_;

D14_:;
  // deopt 53 [i8, ss7, ss8]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_ss7_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_ss8_;
  Rsh_Fir_deopt(53, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L70_:;
  // ss9 = force? ss8
  Rsh_Fir_reg_ss9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ss8_);
  // checkMissing(ss9)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_ss9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // r13 = `+`(ss7, ss9)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_ss7_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_ss9_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // st ss = r13
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // ss10 = ld ss
  Rsh_Fir_reg_ss10_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L71() else D15()
  // L71()
  goto L71_;

D15_:;
  // deopt 57 [i8, ss10]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_ss10_;
  Rsh_Fir_deopt(57, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L71_:;
  // ss11 = force? ss10
  Rsh_Fir_reg_ss11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ss10_);
  // checkMissing(ss11)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_ss11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // MM = ld MM
  Rsh_Fir_reg_MM = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L72() else D16()
  // L72()
  goto L72_;

D16_:;
  // deopt 58 [i8, ss11, MM]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_ss11_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_MM;
  Rsh_Fir_deopt(58, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L72_:;
  // MM1 = force? MM
  Rsh_Fir_reg_MM1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MM);
  // checkMissing(MM1)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_MM1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // r14 = `>=`(ss11, MM1)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_ss11_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_MM1_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if c2 then L73() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L73()
    goto L73_;
  } else {
  // L3()
    goto L3_;
  }

L73_:;
  // ss12 = ld ss
  Rsh_Fir_reg_ss12_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L74() else D17()
  // L74()
  goto L74_;

D17_:;
  // deopt 61 [i8, ss12]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_ss12_;
  Rsh_Fir_deopt(61, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L74_:;
  // ss13 = force? ss12
  Rsh_Fir_reg_ss13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ss12_);
  // checkMissing(ss13)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_ss13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // MM2 = ld MM
  Rsh_Fir_reg_MM2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L75() else D18()
  // L75()
  goto L75_;

D18_:;
  // deopt 62 [i8, ss13, MM2]
  SEXP Rsh_Fir_array_deopt_stack17[3];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_ss13_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_MM2_;
  Rsh_Fir_deopt(62, 3, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L75_:;
  // MM3 = force? MM2
  Rsh_Fir_reg_MM3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MM2_);
  // checkMissing(MM3)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_MM3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // r15 = `-`(ss13, MM3)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_ss13_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_MM3_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // r16 = `+`(r15, 2)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // st ss = r16
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // goto L4(i8)
  // L4(i8)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i8_;
  goto L4_;

D19_:;
  // deopt 73 [X]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_X;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L77_:;
  // X1 = force? X
  Rsh_Fir_reg_X1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X);
  // checkMissing(X1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_X1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(X1)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_X1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if c3 then L78() else L79(X1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L78()
    goto L78_;
  } else {
  // L79(X1)
    Rsh_Fir_reg_X3_ = Rsh_Fir_reg_X1_;
    goto L79_;
  }

L78_:;
  // dr2 = tryDispatchBuiltin.1("[", X1)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_X1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args69);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if dc1 then L80() else L79(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L80()
    goto L80_;
  } else {
  // L79(dr2)
    Rsh_Fir_reg_X3_ = Rsh_Fir_reg_dr2_;
    goto L79_;
  }

L79_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r18 = dyn __1(X3, 2)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_X3_;
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L6(r18)
  // L6(r18)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r18_;
  goto L6_;

L80_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L6(dx2)
  // L6(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L6_;

L81_:;
  // dr4 = tryDispatchBuiltin.0("[<-", l4, r19)
  SEXP Rsh_Fir_array_args73[3];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args73[2] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args73);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc2 then L83() else L82(r19, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L83()
    goto L83_;
  } else {
  // L82(r19, dr4)
    Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r19_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr4_;
    goto L82_;
  }

L82_:;
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r24 = dyn ___1(l6, r19, 2)
  SEXP Rsh_Fir_array_args75[3];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args75[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L7(r24)
  // L7(r24)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r24_;
  goto L7_;

L83_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L7(dx4)
  // L7(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L7_;

D20_:;
  // deopt 85 [seed5]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_seed5_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L84_:;
  // seed6 = force? seed5
  Rsh_Fir_reg_seed6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_seed5_);
  // checkMissing(seed6)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_seed6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // st ss = seed6
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_seed6_, RHO);
  (void)(Rsh_Fir_reg_seed6_);
  // st T = 69
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_const(CCP, 30), RHO);
  (void)(Rsh_const(CCP, 30));
  // goto L45()
  // L45()
  goto L45_;

D21_:;
  // deopt 91 [T]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_T;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L85_:;
  // T1 = force? T
  Rsh_Fir_reg_T1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_T);
  // checkMissing(T1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_T1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // r25 = `>`(T1, 0.0)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_T1_;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // c5 = `as.logical`(r25)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if c5 then L86() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L86()
    goto L86_;
  } else {
  // L8()
    goto L8_;
  }

L86_:;
  // KK8 = ld KK
  Rsh_Fir_reg_KK8_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L87() else D22()
  // L87()
  goto L87_;

D22_:;
  // deopt 95 [KK8]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_KK8_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L87_:;
  // KK9 = force? KK8
  Rsh_Fir_reg_KK9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KK8_);
  // checkMissing(KK9)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_KK9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // r26 = `:`(KK9, 2)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_KK9_;
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // s1 = toForSeq(r26)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // l7 = length(s1)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l7_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // i12 = 0
  Rsh_Fir_reg_i12_ = Rsh_const(CCP, 25);
  // goto L9(i12)
  // L9(i12)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i12_;
  goto L9_;

L88_:;
  // seq = ldf seq
  Rsh_Fir_reg_seq = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L99() else D27()
  // L99()
  goto L99_;

D23_:;
  // deopt 99 [i14, X4]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_X4_;
  Rsh_Fir_deopt(99, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L89_:;
  // X5 = force? X4
  Rsh_Fir_reg_X5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X4_);
  // checkMissing(X5)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_X5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(X5)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_X5_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if c7 then L90() else L91(i14, X5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L90()
    goto L90_;
  } else {
  // L91(i14, X5)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i14_;
    Rsh_Fir_reg_X7_ = Rsh_Fir_reg_X5_;
    goto L91_;
  }

L90_:;
  // dr6 = tryDispatchBuiltin.1("[", X5)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_X5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args87);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if dc3 then L92() else L91(i14, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L92()
    goto L92_;
  } else {
  // L91(i14, dr6)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i14_;
    Rsh_Fir_reg_X7_ = Rsh_Fir_reg_dr6_;
    goto L91_;
  }

L91_:;
  // j2 = ld j
  Rsh_Fir_reg_j2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L93() else D24()
  // L93()
  goto L93_;

L92_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L10(i14, dx6)
  // L10(i14, dx6)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L10_;

D24_:;
  // deopt 101 [i18, X7, j2]
  SEXP Rsh_Fir_array_deopt_stack23[3];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_X7_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_j2_;
  Rsh_Fir_deopt(101, 3, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L93_:;
  // j3 = force? j2
  Rsh_Fir_reg_j3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j2_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r27 = dyn __2(X7, j3)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_X7_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_j3_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L10(i18, r27)
  // L10(i18, r27)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r27_;
  goto L10_;

L94_:;
  // dr8 = tryDispatchBuiltin.0("[<-", l8, dx7)
  SEXP Rsh_Fir_array_args91[3];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args91[2] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args91);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // if dc4 then L96() else L95(i20, dx7, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L96()
    goto L96_;
  } else {
  // L95(i20, dx7, dr8)
    Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i20_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_dr8_;
    goto L95_;
  }

L95_:;
  // j4 = ld j
  Rsh_Fir_reg_j4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L97() else D25()
  // L97()
  goto L97_;

L96_:;
  // dx11 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // goto L11(i20, dx11)
  // L11(i20, dx11)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
  goto L11_;

D25_:;
  // deopt 105 [i22, dx9, l10, dx7, j4]
  SEXP Rsh_Fir_array_deopt_stack24[5];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack24[3] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_deopt_stack24[4] = Rsh_Fir_reg_j4_;
  Rsh_Fir_deopt(105, 5, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L97_:;
  // j5 = force? j4
  Rsh_Fir_reg_j5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j4_);
  // checkMissing(j5)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_j5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // j6 = ld j
  Rsh_Fir_reg_j6_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L98() else D26()
  // L98()
  goto L98_;

D26_:;
  // deopt 106 [i22, dx9, l10, dx7, j5, j6]
  SEXP Rsh_Fir_array_deopt_stack25[6];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack25[3] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_deopt_stack25[4] = Rsh_Fir_reg_j5_;
  Rsh_Fir_array_deopt_stack25[5] = Rsh_Fir_reg_j6_;
  Rsh_Fir_deopt(106, 6, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L98_:;
  // j7 = force? j6
  Rsh_Fir_reg_j7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j6_);
  // checkMissing(j7)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_j7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // r28 = `+`(j5, j7)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_j5_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_j7_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // r29 = `-`(r28, 1)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args97[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r30 = dyn ___2(l10, dx7, r29)
  SEXP Rsh_Fir_array_args98[3];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args98[2] = Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L11(i22, r30)
  // L11(i22, r30)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i22_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r30_;
  goto L11_;

D27_:;
  // deopt 117 []
  Rsh_Fir_deopt(117, 0, NULL, CCP, RHO);
  return R_NilValue;

L99_:;
  // p1 = prom<V +>{
  //   KKK2 = ld KKK;
  //   KKK3 = force? KKK2;
  //   checkMissing(KKK3);
  //   return KKK3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1301552337_1, CCP, RHO);
  // p2 = prom<V +>{
  //   KKL = ld KKL;
  //   KKL1 = force? KKL;
  //   checkMissing(KKL1);
  //   r32 = `+`(KKL1, 1);
  //   return r32;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1301552337_2, CCP, RHO);
  // p3 = prom<V +>{
  //   return -2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1301552337_3, CCP, RHO);
  // r35 = dyn seq(p1, p2, p3)
  SEXP Rsh_Fir_array_args102[3];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args102[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq, 3, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L100() else D28()
  // L100()
  goto L100_;

D28_:;
  // deopt 121 [r35]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L100_:;
  // s2 = toForSeq(r35)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_s2_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // l11 = length(s2)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_s2_;
  Rsh_Fir_reg_l11_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // i25 = 0
  Rsh_Fir_reg_i25_ = Rsh_const(CCP, 25);
  // goto L13(i25)
  // L13(i25)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i25_;
  goto L13_;

L101_:;
  // KKK6 = ld KKK
  Rsh_Fir_reg_KKK6_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L118() else D36()
  // L118()
  goto L118_;

D29_:;
  // deopt 122 [i27, X8]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i27_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_X8_;
  Rsh_Fir_deopt(122, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L102_:;
  // X9 = force? X8
  Rsh_Fir_reg_X9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X8_);
  // checkMissing(X9)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_X9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(X9)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_X9_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if c10 then L103() else L104(i27, X9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L103()
    goto L103_;
  } else {
  // L104(i27, X9)
    Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i27_;
    Rsh_Fir_reg_X11_ = Rsh_Fir_reg_X9_;
    goto L104_;
  }

L103_:;
  // dr10 = tryDispatchBuiltin.1("[", X9)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_X9_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args107);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // if dc5 then L105() else L104(i27, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L105()
    goto L105_;
  } else {
  // L104(i27, dr10)
    Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i27_;
    Rsh_Fir_reg_X11_ = Rsh_Fir_reg_dr10_;
    goto L104_;
  }

L104_:;
  // j8 = ld j
  Rsh_Fir_reg_j8_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L106() else D30()
  // L106()
  goto L106_;

L105_:;
  // dx14 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // goto L14(i27, dx14)
  // L14(i27, dx14)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L14_;

D30_:;
  // deopt 124 [i31, X11, j8]
  SEXP Rsh_Fir_array_deopt_stack28[3];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i31_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_X11_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_j8_;
  Rsh_Fir_deopt(124, 3, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L106_:;
  // j9 = force? j8
  Rsh_Fir_reg_j9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j8_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r36 = dyn __3(X11, j9)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_X11_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_j9_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L14(i31, r36)
  // L14(i31, r36)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i31_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r36_;
  goto L14_;

D31_:;
  // deopt 127 [i33, dx15, X12]
  SEXP Rsh_Fir_array_deopt_stack29[3];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i33_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_X12_;
  Rsh_Fir_deopt(127, 3, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L107_:;
  // X13 = force? X12
  Rsh_Fir_reg_X13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X12_);
  // checkMissing(X13)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_X13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(X13)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_X13_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // if c11 then L108() else L109(i33, dx15, X13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L108()
    goto L108_;
  } else {
  // L109(i33, dx15, X13)
    Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i33_;
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
    Rsh_Fir_reg_X15_ = Rsh_Fir_reg_X13_;
    goto L109_;
  }

L108_:;
  // dr12 = tryDispatchBuiltin.1("[", X13)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_X13_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args113);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if dc6 then L110() else L109(i33, dx15, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L110()
    goto L110_;
  } else {
  // L109(i33, dx15, dr12)
    Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i33_;
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
    Rsh_Fir_reg_X15_ = Rsh_Fir_reg_dr12_;
    goto L109_;
  }

L109_:;
  // j10 = ld j
  Rsh_Fir_reg_j10_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L111() else D32()
  // L111()
  goto L111_;

L110_:;
  // dx19 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // goto L15(i33, dx15, dx19)
  // L15(i33, dx15, dx19)
  Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i33_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx19_;
  goto L15_;

D32_:;
  // deopt 129 [i35, dx17, X15, j10]
  SEXP Rsh_Fir_array_deopt_stack30[4];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_X15_;
  Rsh_Fir_array_deopt_stack30[3] = Rsh_Fir_reg_j10_;
  Rsh_Fir_deopt(129, 4, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L111_:;
  // j11 = force? j10
  Rsh_Fir_reg_j11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j10_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r37 = dyn __4(X15, j11)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_X15_;
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_j11_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L15(i35, dx17, r37)
  // L15(i35, dx17, r37)
  Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i35_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r37_;
  goto L15_;

D33_:;
  // deopt 134 [i37, dx20, r38]
  SEXP Rsh_Fir_array_deopt_stack31[3];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i37_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(134, 3, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L112_:;
  // r39 = `-`(dx20, r38)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // l12 = ld X
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c12 = `is.object`(l12)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // if c12 then L113() else L114(i37, r39, l12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L113()
    goto L113_;
  } else {
  // L114(i37, r39, l12)
    Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i37_;
    Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r39_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l12_;
    goto L114_;
  }

L113_:;
  // dr14 = tryDispatchBuiltin.0("[<-", l12, r39)
  SEXP Rsh_Fir_array_args119[3];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args119[2] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args119);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // if dc7 then L115() else L114(i37, r39, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L115()
    goto L115_;
  } else {
  // L114(i37, r39, dr14)
    Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i37_;
    Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r39_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_dr14_;
    goto L114_;
  }

L114_:;
  // KKK4 = ld KKK
  Rsh_Fir_reg_KKK4_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L116() else D34()
  // L116()
  goto L116_;

L115_:;
  // dx22 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // goto L16(i37, dx22)
  // L16(i37, dx22)
  Rsh_Fir_reg_i41_ = Rsh_Fir_reg_i37_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L16_;

D34_:;
  // deopt 137 [i39, r41, l14, r39, KKK4]
  SEXP Rsh_Fir_array_deopt_stack32[5];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i39_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack32[3] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack32[4] = Rsh_Fir_reg_KKK4_;
  Rsh_Fir_deopt(137, 5, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L116_:;
  // KKK5 = force? KKK4
  Rsh_Fir_reg_KKK5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KKK4_);
  // checkMissing(KKK5)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_KKK5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // j12 = ld j
  Rsh_Fir_reg_j12_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L117() else D35()
  // L117()
  goto L117_;

D35_:;
  // deopt 138 [i39, r41, l14, r39, KKK5, j12]
  SEXP Rsh_Fir_array_deopt_stack33[6];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i39_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack33[3] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack33[4] = Rsh_Fir_reg_KKK5_;
  Rsh_Fir_array_deopt_stack33[5] = Rsh_Fir_reg_j12_;
  Rsh_Fir_deopt(138, 6, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L117_:;
  // j13 = force? j12
  Rsh_Fir_reg_j13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j12_);
  // checkMissing(j13)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_j13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // r44 = `-`(KKK5, j13)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_KKK5_;
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_j13_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // r45 = `+`(r44, 2)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_args125[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // ___3 = ldf `[<-` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r46 = dyn ___3(l14, r39, r45)
  SEXP Rsh_Fir_array_args126[3];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_args126[2] = Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 3, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L16(i39, r46)
  // L16(i39, r46)
  Rsh_Fir_reg_i41_ = Rsh_Fir_reg_i39_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r46_;
  goto L16_;

D36_:;
  // deopt 148 [KKK6]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_KKK6_;
  Rsh_Fir_deopt(148, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L118_:;
  // KKK7 = force? KKK6
  Rsh_Fir_reg_KKK7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KKK6_);
  // checkMissing(KKK7)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_KKK7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // KK10 = ld KK
  Rsh_Fir_reg_KK10_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L119() else D37()
  // L119()
  goto L119_;

D37_:;
  // deopt 149 [KKK7, KK10]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_KKK7_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_KK10_;
  Rsh_Fir_deopt(149, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L119_:;
  // KK11 = force? KK10
  Rsh_Fir_reg_KK11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KK10_);
  // checkMissing(KK11)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_KK11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // r47 = `+`(KK11, 1)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_KK11_;
  Rsh_Fir_array_args129[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // r48 = `:`(KKK7, r47)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_KKK7_;
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // s3 = toForSeq(r48)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_s3_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // l15 = length(s3)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_reg_l15_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // i42 = 0
  Rsh_Fir_reg_i42_ = Rsh_const(CCP, 25);
  // goto L18(i42)
  // L18(i42)
  Rsh_Fir_reg_i43_ = Rsh_Fir_reg_i42_;
  goto L18_;

L120_:;
  // ss14 = ld ss
  Rsh_Fir_reg_ss14_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L165() else D59()
  // L165()
  goto L165_;

D38_:;
  // deopt 155 [i44, X16]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_i44_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_X16_;
  Rsh_Fir_deopt(155, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L121_:;
  // X17 = force? X16
  Rsh_Fir_reg_X17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X16_);
  // checkMissing(X17)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_X17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(X17)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_X17_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if c14 then L122() else L123(i44, X17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L122()
    goto L122_;
  } else {
  // L123(i44, X17)
    Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i44_;
    Rsh_Fir_reg_X19_ = Rsh_Fir_reg_X17_;
    goto L123_;
  }

L122_:;
  // dr16 = tryDispatchBuiltin.1("[", X17)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_X17_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args135);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // if dc8 then L124() else L123(i44, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L124()
    goto L124_;
  } else {
  // L123(i44, dr16)
    Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i44_;
    Rsh_Fir_reg_X19_ = Rsh_Fir_reg_dr16_;
    goto L123_;
  }

L123_:;
  // j14 = ld j
  Rsh_Fir_reg_j14_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L125() else D39()
  // L125()
  goto L125_;

L124_:;
  // dx24 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // goto L19(i44, dx24)
  // L19(i44, dx24)
  Rsh_Fir_reg_i50_ = Rsh_Fir_reg_i44_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L19_;

D39_:;
  // deopt 157 [i48, X19, j14]
  SEXP Rsh_Fir_array_deopt_stack37[3];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_i48_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_X19_;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_j14_;
  Rsh_Fir_deopt(157, 3, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L125_:;
  // j15 = force? j14
  Rsh_Fir_reg_j15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j14_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r49 = dyn __6(X19, j15)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_X19_;
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_j15_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L19(i48, r49)
  // L19(i48, r49)
  Rsh_Fir_reg_i50_ = Rsh_Fir_reg_i48_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r49_;
  goto L19_;

D40_:;
  // deopt 162 [i50, r50]
  SEXP Rsh_Fir_array_deopt_stack38[2];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_i50_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(162, 2, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L126_:;
  // r51 = `==`(r50, 1)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_args139[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // c15 = `as.logical`(r51)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // if c15 then L127() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L127()
    goto L127_;
  } else {
  // L20()
    goto L20_;
  }

L127_:;
  // X20 = ld X
  Rsh_Fir_reg_X20_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L128() else D41()
  // L128()
  goto L128_;

D41_:;
  // deopt 166 [i50, X20]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_i50_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_X20_;
  Rsh_Fir_deopt(166, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L128_:;
  // X21 = force? X20
  Rsh_Fir_reg_X21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X20_);
  // checkMissing(X21)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_X21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(X21)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_X21_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // if c16 then L129() else L130(i50, X21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L129()
    goto L129_;
  } else {
  // L130(i50, X21)
    Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i50_;
    Rsh_Fir_reg_X23_ = Rsh_Fir_reg_X21_;
    goto L130_;
  }

L129_:;
  // dr18 = tryDispatchBuiltin.1("[", X21)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_X21_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args143);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // if dc9 then L131() else L130(i50, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L131()
    goto L131_;
  } else {
  // L130(i50, dr18)
    Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i50_;
    Rsh_Fir_reg_X23_ = Rsh_Fir_reg_dr18_;
    goto L130_;
  }

L130_:;
  // j16 = ld j
  Rsh_Fir_reg_j16_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L132() else D42()
  // L132()
  goto L132_;

L131_:;
  // dx26 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // goto L21(i50, dx26)
  // L21(i50, dx26)
  Rsh_Fir_reg_i56_ = Rsh_Fir_reg_i50_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L21_;

D42_:;
  // deopt 168 [i54, X23, j16]
  SEXP Rsh_Fir_array_deopt_stack40[3];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_i54_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_X23_;
  Rsh_Fir_array_deopt_stack40[2] = Rsh_Fir_reg_j16_;
  Rsh_Fir_deopt(168, 3, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L132_:;
  // j17 = force? j16
  Rsh_Fir_reg_j17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j16_);
  // checkMissing(j17)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_j17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty()));
  // KKL2 = ld KKL
  Rsh_Fir_reg_KKL2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L133() else D43()
  // L133()
  goto L133_;

D43_:;
  // deopt 169 [i54, X23, j17, KKL2]
  SEXP Rsh_Fir_array_deopt_stack41[4];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_i54_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_X23_;
  Rsh_Fir_array_deopt_stack41[2] = Rsh_Fir_reg_j17_;
  Rsh_Fir_array_deopt_stack41[3] = Rsh_Fir_reg_KKL2_;
  Rsh_Fir_deopt(169, 4, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L133_:;
  // KKL3 = force? KKL2
  Rsh_Fir_reg_KKL3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KKL2_);
  // checkMissing(KKL3)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_KKL3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty()));
  // r52 = `-`(j17, KKL3)
  SEXP Rsh_Fir_array_args148[2];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_j17_;
  Rsh_Fir_array_args148[1] = Rsh_Fir_reg_KKL3_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r53 = dyn __8(X23, r52)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_X23_;
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L21(i54, r53)
  // L21(i54, r53)
  Rsh_Fir_reg_i56_ = Rsh_Fir_reg_i54_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r53_;
  goto L21_;

D44_:;
  // deopt 172 [i56, dx27, X24]
  SEXP Rsh_Fir_array_deopt_stack42[3];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_i56_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_X24_;
  Rsh_Fir_deopt(172, 3, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L134_:;
  // X25 = force? X24
  Rsh_Fir_reg_X25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X24_);
  // checkMissing(X25)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_X25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(X25)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_X25_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty());
  // if c17 then L135() else L136(i56, dx27, X25)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L135()
    goto L135_;
  } else {
  // L136(i56, dx27, X25)
    Rsh_Fir_reg_i58_ = Rsh_Fir_reg_i56_;
    Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx27_;
    Rsh_Fir_reg_X27_ = Rsh_Fir_reg_X25_;
    goto L136_;
  }

L135_:;
  // dr20 = tryDispatchBuiltin.1("[", X25)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_X25_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args152);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // if dc10 then L137() else L136(i56, dx27, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L137()
    goto L137_;
  } else {
  // L136(i56, dx27, dr20)
    Rsh_Fir_reg_i58_ = Rsh_Fir_reg_i56_;
    Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx27_;
    Rsh_Fir_reg_X27_ = Rsh_Fir_reg_dr20_;
    goto L136_;
  }

L136_:;
  // j18 = ld j
  Rsh_Fir_reg_j18_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L138() else D45()
  // L138()
  goto L138_;

L137_:;
  // dx31 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // goto L22(i56, dx27, dx31)
  // L22(i56, dx27, dx31)
  Rsh_Fir_reg_i60_ = Rsh_Fir_reg_i56_;
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx27_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx31_;
  goto L22_;

D45_:;
  // deopt 174 [i58, dx29, X27, j18]
  SEXP Rsh_Fir_array_deopt_stack43[4];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_i58_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_dx29_;
  Rsh_Fir_array_deopt_stack43[2] = Rsh_Fir_reg_X27_;
  Rsh_Fir_array_deopt_stack43[3] = Rsh_Fir_reg_j18_;
  Rsh_Fir_deopt(174, 4, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L138_:;
  // j19 = force? j18
  Rsh_Fir_reg_j19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j18_);
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r54 = dyn __9(X27, j19)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_X27_;
  Rsh_Fir_array_args155[1] = Rsh_Fir_reg_j19_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L22(i58, dx29, r54)
  // L22(i58, dx29, r54)
  Rsh_Fir_reg_i60_ = Rsh_Fir_reg_i58_;
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx29_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_r54_;
  goto L22_;

D46_:;
  // deopt 178 [i60, MM4]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_i60_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_MM4_;
  Rsh_Fir_deopt(178, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L139_:;
  // MM5 = force? MM4
  Rsh_Fir_reg_MM5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MM4_);
  // checkMissing(MM5)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_MM5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // __10 = ldf `%%` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r56 = dyn __10(r55, MM5)
  SEXP Rsh_Fir_array_args157[2];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_args157[1] = Rsh_Fir_reg_MM5_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 2, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L140() else D47()
  // L140()
  goto L140_;

D47_:;
  // deopt 181 [i60, r56]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_i60_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(181, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L140_:;
  // l16 = ld X
  Rsh_Fir_reg_l16_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c18 = `is.object`(l16)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_l16_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty());
  // if c18 then L141() else L142(i60, r56, l16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L141()
    goto L141_;
  } else {
  // L142(i60, r56, l16)
    Rsh_Fir_reg_i62_ = Rsh_Fir_reg_i60_;
    Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r56_;
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_l16_;
    goto L142_;
  }

L141_:;
  // dr22 = tryDispatchBuiltin.0("[<-", l16, r56)
  SEXP Rsh_Fir_array_args159[3];
  Rsh_Fir_array_args159[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args159[1] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_args159[2] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args159);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty());
  // if dc11 then L143() else L142(i60, r56, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L143()
    goto L143_;
  } else {
  // L142(i60, r56, dr22)
    Rsh_Fir_reg_i62_ = Rsh_Fir_reg_i60_;
    Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r56_;
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_dr22_;
    goto L142_;
  }

L142_:;
  // j20 = ld j
  Rsh_Fir_reg_j20_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L144() else D48()
  // L144()
  goto L144_;

L143_:;
  // dx34 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty());
  // goto L23(i60, dx34)
  // L23(i60, dx34)
  Rsh_Fir_reg_i64_ = Rsh_Fir_reg_i60_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx34_;
  goto L23_;

D48_:;
  // deopt 183 [i62, r58, l18, r56, j20]
  SEXP Rsh_Fir_array_deopt_stack46[5];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_i62_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_deopt_stack46[2] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_deopt_stack46[3] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_deopt_stack46[4] = Rsh_Fir_reg_j20_;
  Rsh_Fir_deopt(183, 5, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L144_:;
  // j21 = force? j20
  Rsh_Fir_reg_j21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j20_);
  // checkMissing(j21)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_j21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty()));
  // KKL4 = ld KKL
  Rsh_Fir_reg_KKL4_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L145() else D49()
  // L145()
  goto L145_;

D49_:;
  // deopt 184 [i62, r58, l18, r56, j21, KKL4]
  SEXP Rsh_Fir_array_deopt_stack47[6];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_i62_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_deopt_stack47[2] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_deopt_stack47[3] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_deopt_stack47[4] = Rsh_Fir_reg_j21_;
  Rsh_Fir_array_deopt_stack47[5] = Rsh_Fir_reg_KKL4_;
  Rsh_Fir_deopt(184, 6, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L145_:;
  // KKL5 = force? KKL4
  Rsh_Fir_reg_KKL5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KKL4_);
  // checkMissing(KKL5)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_KKL5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty()));
  // r61 = `-`(j21, KKL5)
  SEXP Rsh_Fir_array_args164[2];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_j21_;
  Rsh_Fir_array_args164[1] = Rsh_Fir_reg_KKL5_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty());
  // ___4 = ldf `[<-` in base
  Rsh_Fir_reg____4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r62 = dyn ___4(l18, r56, r61)
  SEXP Rsh_Fir_array_args165[3];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_args165[2] = Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____4_, 3, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L23(i62, r62)
  // L23(i62, r62)
  Rsh_Fir_reg_i64_ = Rsh_Fir_reg_i62_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_r62_;
  goto L23_;

D50_:;
  // deopt 190 [i64, X28]
  SEXP Rsh_Fir_array_deopt_stack48[2];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_i64_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_X28_;
  Rsh_Fir_deopt(190, 2, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L146_:;
  // X29 = force? X28
  Rsh_Fir_reg_X29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X28_);
  // checkMissing(X29)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_X29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(X29)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_X29_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty());
  // if c19 then L147() else L148(i64, X29)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L147()
    goto L147_;
  } else {
  // L148(i64, X29)
    Rsh_Fir_reg_i66_ = Rsh_Fir_reg_i64_;
    Rsh_Fir_reg_X31_ = Rsh_Fir_reg_X29_;
    goto L148_;
  }

L147_:;
  // dr24 = tryDispatchBuiltin.1("[", X29)
  SEXP Rsh_Fir_array_args168[2];
  Rsh_Fir_array_args168[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args168[1] = Rsh_Fir_reg_X29_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args168);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // if dc12 then L149() else L148(i64, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L149()
    goto L149_;
  } else {
  // L148(i64, dr24)
    Rsh_Fir_reg_i66_ = Rsh_Fir_reg_i64_;
    Rsh_Fir_reg_X31_ = Rsh_Fir_reg_dr24_;
    goto L148_;
  }

L148_:;
  // j22 = ld j
  Rsh_Fir_reg_j22_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L150() else D51()
  // L150()
  goto L150_;

L149_:;
  // dx36 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty());
  // goto L24(i64, dx36)
  // L24(i64, dx36)
  Rsh_Fir_reg_i68_ = Rsh_Fir_reg_i64_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx36_;
  goto L24_;

D51_:;
  // deopt 192 [i66, X31, j22]
  SEXP Rsh_Fir_array_deopt_stack49[3];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_i66_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_X31_;
  Rsh_Fir_array_deopt_stack49[2] = Rsh_Fir_reg_j22_;
  Rsh_Fir_deopt(192, 3, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L150_:;
  // j23 = force? j22
  Rsh_Fir_reg_j23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j22_);
  // checkMissing(j23)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_j23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty()));
  // KK12 = ld KK
  Rsh_Fir_reg_KK12_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L151() else D52()
  // L151()
  goto L151_;

D52_:;
  // deopt 193 [i66, X31, j23, KK12]
  SEXP Rsh_Fir_array_deopt_stack50[4];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_i66_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_X31_;
  Rsh_Fir_array_deopt_stack50[2] = Rsh_Fir_reg_j23_;
  Rsh_Fir_array_deopt_stack50[3] = Rsh_Fir_reg_KK12_;
  Rsh_Fir_deopt(193, 4, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L151_:;
  // KK13 = force? KK12
  Rsh_Fir_reg_KK13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KK12_);
  // checkMissing(KK13)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_KK13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty()));
  // r63 = `-`(j23, KK13)
  SEXP Rsh_Fir_array_args173[2];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_j23_;
  Rsh_Fir_array_args173[1] = Rsh_Fir_reg_KK13_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // __11 = ldf `[` in base
  Rsh_Fir_reg___11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r64 = dyn __11(X31, r63)
  SEXP Rsh_Fir_array_args174[2];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_X31_;
  Rsh_Fir_array_args174[1] = Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___11_, 2, Rsh_Fir_array_args174, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L24(i66, r64)
  // L24(i66, r64)
  Rsh_Fir_reg_i68_ = Rsh_Fir_reg_i66_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_r64_;
  goto L24_;

D53_:;
  // deopt 196 [i68, dx37, X32]
  SEXP Rsh_Fir_array_deopt_stack51[3];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_i68_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_dx37_;
  Rsh_Fir_array_deopt_stack51[2] = Rsh_Fir_reg_X32_;
  Rsh_Fir_deopt(196, 3, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L152_:;
  // X33 = force? X32
  Rsh_Fir_reg_X33_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X32_);
  // checkMissing(X33)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_X33_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(X33)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_X33_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty());
  // if c20 then L153() else L154(i68, dx37, X33)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L153()
    goto L153_;
  } else {
  // L154(i68, dx37, X33)
    Rsh_Fir_reg_i70_ = Rsh_Fir_reg_i68_;
    Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx37_;
    Rsh_Fir_reg_X35_ = Rsh_Fir_reg_X33_;
    goto L154_;
  }

L153_:;
  // dr26 = tryDispatchBuiltin.1("[", X33)
  SEXP Rsh_Fir_array_args177[2];
  Rsh_Fir_array_args177[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args177[1] = Rsh_Fir_reg_X33_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args177);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty());
  // if dc13 then L155() else L154(i68, dx37, dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L155()
    goto L155_;
  } else {
  // L154(i68, dx37, dr26)
    Rsh_Fir_reg_i70_ = Rsh_Fir_reg_i68_;
    Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx37_;
    Rsh_Fir_reg_X35_ = Rsh_Fir_reg_dr26_;
    goto L154_;
  }

L154_:;
  // j24 = ld j
  Rsh_Fir_reg_j24_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L156() else D54()
  // L156()
  goto L156_;

L155_:;
  // dx41 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx41_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty());
  // goto L25(i68, dx37, dx41)
  // L25(i68, dx37, dx41)
  Rsh_Fir_reg_i72_ = Rsh_Fir_reg_i68_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_reg_dx37_;
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx41_;
  goto L25_;

D54_:;
  // deopt 198 [i70, dx39, X35, j24]
  SEXP Rsh_Fir_array_deopt_stack52[4];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_i70_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_dx39_;
  Rsh_Fir_array_deopt_stack52[2] = Rsh_Fir_reg_X35_;
  Rsh_Fir_array_deopt_stack52[3] = Rsh_Fir_reg_j24_;
  Rsh_Fir_deopt(198, 4, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L156_:;
  // j25 = force? j24
  Rsh_Fir_reg_j25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j24_);
  // __12 = ldf `[` in base
  Rsh_Fir_reg___12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r65 = dyn __12(X35, j25)
  SEXP Rsh_Fir_array_args180[2];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_X35_;
  Rsh_Fir_array_args180[1] = Rsh_Fir_reg_j25_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___12_, 2, Rsh_Fir_array_args180, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L25(i70, dx39, r65)
  // L25(i70, dx39, r65)
  Rsh_Fir_reg_i72_ = Rsh_Fir_reg_i70_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_reg_dx39_;
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_r65_;
  goto L25_;

D55_:;
  // deopt 202 [i72, MM6]
  SEXP Rsh_Fir_array_deopt_stack53[2];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_i72_;
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_MM6_;
  Rsh_Fir_deopt(202, 2, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L157_:;
  // MM7 = force? MM6
  Rsh_Fir_reg_MM7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MM6_);
  // checkMissing(MM7)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_MM7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty()));
  // __13 = ldf `%%` in base
  Rsh_Fir_reg___13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r67 = dyn __13(r66, MM7)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_MM7_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___13_, 2, Rsh_Fir_array_args182, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L158() else D56()
  // L158()
  goto L158_;

D56_:;
  // deopt 205 [i72, r67]
  SEXP Rsh_Fir_array_deopt_stack54[2];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_i72_;
  Rsh_Fir_array_deopt_stack54[1] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(205, 2, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L158_:;
  // l19 = ld X
  Rsh_Fir_reg_l19_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c21 = `is.object`(l19)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_l19_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty());
  // if c21 then L159() else L160(i72, r67, l19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L159()
    goto L159_;
  } else {
  // L160(i72, r67, l19)
    Rsh_Fir_reg_i74_ = Rsh_Fir_reg_i72_;
    Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r67_;
    Rsh_Fir_reg_l21_ = Rsh_Fir_reg_l19_;
    goto L160_;
  }

L159_:;
  // dr28 = tryDispatchBuiltin.0("[<-", l19, r67)
  SEXP Rsh_Fir_array_args184[3];
  Rsh_Fir_array_args184[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args184[1] = Rsh_Fir_reg_l19_;
  Rsh_Fir_array_args184[2] = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args184);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty());
  // if dc14 then L161() else L160(i72, r67, dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L161()
    goto L161_;
  } else {
  // L160(i72, r67, dr28)
    Rsh_Fir_reg_i74_ = Rsh_Fir_reg_i72_;
    Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r67_;
    Rsh_Fir_reg_l21_ = Rsh_Fir_reg_dr28_;
    goto L160_;
  }

L160_:;
  // j26 = ld j
  Rsh_Fir_reg_j26_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L162() else D57()
  // L162()
  goto L162_;

L161_:;
  // dx44 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx44_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty());
  // goto L26(i72, r67, dx44)
  // L26(i72, r67, dx44)
  Rsh_Fir_reg_i76_ = Rsh_Fir_reg_i72_;
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_dx44_;
  goto L26_;

D57_:;
  // deopt 207 [i74, r69, l21, r67, j26]
  SEXP Rsh_Fir_array_deopt_stack55[5];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_i74_;
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_deopt_stack55[2] = Rsh_Fir_reg_l21_;
  Rsh_Fir_array_deopt_stack55[3] = Rsh_Fir_reg_r67_;
  Rsh_Fir_array_deopt_stack55[4] = Rsh_Fir_reg_j26_;
  Rsh_Fir_deopt(207, 5, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L162_:;
  // j27 = force? j26
  Rsh_Fir_reg_j27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j26_);
  // checkMissing(j27)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_j27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty()));
  // KK14 = ld KK
  Rsh_Fir_reg_KK14_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L163() else D58()
  // L163()
  goto L163_;

D58_:;
  // deopt 208 [i74, r69, l21, r67, j27, KK14]
  SEXP Rsh_Fir_array_deopt_stack56[6];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_i74_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_deopt_stack56[2] = Rsh_Fir_reg_l21_;
  Rsh_Fir_array_deopt_stack56[3] = Rsh_Fir_reg_r67_;
  Rsh_Fir_array_deopt_stack56[4] = Rsh_Fir_reg_j27_;
  Rsh_Fir_array_deopt_stack56[5] = Rsh_Fir_reg_KK14_;
  Rsh_Fir_deopt(208, 6, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L163_:;
  // KK15 = force? KK14
  Rsh_Fir_reg_KK15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KK14_);
  // checkMissing(KK15)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_KK15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty()));
  // r72 = `-`(j27, KK15)
  SEXP Rsh_Fir_array_args189[2];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_j27_;
  Rsh_Fir_array_args189[1] = Rsh_Fir_reg_KK15_;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty());
  // ___5 = ldf `[<-` in base
  Rsh_Fir_reg____5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r73 = dyn ___5(l21, r67, r72)
  SEXP Rsh_Fir_array_args190[3];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_l21_;
  Rsh_Fir_array_args190[1] = Rsh_Fir_reg_r67_;
  Rsh_Fir_array_args190[2] = Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____5_, 3, Rsh_Fir_array_args190, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L26(i74, r69, r73)
  // L26(i74, r69, r73)
  Rsh_Fir_reg_i76_ = Rsh_Fir_reg_i74_;
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_r73_;
  goto L26_;

D59_:;
  // deopt 219 [ss14]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_ss14_;
  Rsh_Fir_deopt(219, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L165_:;
  // ss15 = force? ss14
  Rsh_Fir_reg_ss15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ss14_);
  // checkMissing(ss15)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_ss15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args191, Rsh_Fir_param_types_empty()));
  // __14 = ldf `%%` in base
  Rsh_Fir_reg___14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r75 = dyn __14(ss15, 2)
  SEXP Rsh_Fir_array_args192[2];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_ss15_;
  Rsh_Fir_array_args192[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___14_, 2, Rsh_Fir_array_args192, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L166() else D60()
  // L166()
  goto L166_;

D60_:;
  // deopt 223 [r75]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(223, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L166_:;
  // r76 = `==`(r75, 1)
  SEXP Rsh_Fir_array_args193[2];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_array_args193[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty());
  // c22 = `as.logical`(r76)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args194, Rsh_Fir_param_types_empty());
  // if c22 then L167() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L167()
    goto L167_;
  } else {
  // L29()
    goto L29_;
  }

L167_:;
  // KK16 = ld KK
  Rsh_Fir_reg_KK16_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L168() else D61()
  // L168()
  goto L168_;

D61_:;
  // deopt 226 [KK16]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_KK16_;
  Rsh_Fir_deopt(226, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L168_:;
  // KK17 = force? KK16
  Rsh_Fir_reg_KK17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KK16_);
  // checkMissing(KK17)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_KK17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty()));
  // r77 = `:`(KK17, 1)
  SEXP Rsh_Fir_array_args196[2];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_KK17_;
  Rsh_Fir_array_args196[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty());
  // s4 = toForSeq(r77)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_reg_s4_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty());
  // l22 = length(s4)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_s4_;
  Rsh_Fir_reg_l22_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty());
  // i78 = 0
  Rsh_Fir_reg_i78_ = Rsh_const(CCP, 25);
  // goto L30(i78)
  // L30(i78)
  Rsh_Fir_reg_i79_ = Rsh_Fir_reg_i78_;
  goto L30_;

L169_:;
  // X40 = ld X
  Rsh_Fir_reg_X40_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L179() else D65()
  // L179()
  goto L179_;

D62_:;
  // deopt 230 [i80, X36]
  SEXP Rsh_Fir_array_deopt_stack60[2];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_i80_;
  Rsh_Fir_array_deopt_stack60[1] = Rsh_Fir_reg_X36_;
  Rsh_Fir_deopt(230, 2, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L170_:;
  // X37 = force? X36
  Rsh_Fir_reg_X37_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X36_);
  // checkMissing(X37)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_X37_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args199, Rsh_Fir_param_types_empty()));
  // c24 = `is.object`(X37)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_X37_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty());
  // if c24 then L171() else L172(i80, X37)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L171()
    goto L171_;
  } else {
  // L172(i80, X37)
    Rsh_Fir_reg_i84_ = Rsh_Fir_reg_i80_;
    Rsh_Fir_reg_X39_ = Rsh_Fir_reg_X37_;
    goto L172_;
  }

L171_:;
  // dr30 = tryDispatchBuiltin.1("[", X37)
  SEXP Rsh_Fir_array_args201[2];
  Rsh_Fir_array_args201[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args201[1] = Rsh_Fir_reg_X37_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args201);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty());
  // if dc15 then L173() else L172(i80, dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L173()
    goto L173_;
  } else {
  // L172(i80, dr30)
    Rsh_Fir_reg_i84_ = Rsh_Fir_reg_i80_;
    Rsh_Fir_reg_X39_ = Rsh_Fir_reg_dr30_;
    goto L172_;
  }

L172_:;
  // j28 = ld j
  Rsh_Fir_reg_j28_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L174() else D63()
  // L174()
  goto L174_;

L173_:;
  // dx46 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx46_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args203, Rsh_Fir_param_types_empty());
  // goto L31(i80, dx46)
  // L31(i80, dx46)
  Rsh_Fir_reg_i86_ = Rsh_Fir_reg_i80_;
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_dx46_;
  goto L31_;

D63_:;
  // deopt 232 [i84, X39, j28]
  SEXP Rsh_Fir_array_deopt_stack61[3];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_i84_;
  Rsh_Fir_array_deopt_stack61[1] = Rsh_Fir_reg_X39_;
  Rsh_Fir_array_deopt_stack61[2] = Rsh_Fir_reg_j28_;
  Rsh_Fir_deopt(232, 3, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L174_:;
  // j29 = force? j28
  Rsh_Fir_reg_j29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j28_);
  // __15 = ldf `[` in base
  Rsh_Fir_reg___15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r78 = dyn __15(X39, j29)
  SEXP Rsh_Fir_array_args204[2];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_X39_;
  Rsh_Fir_array_args204[1] = Rsh_Fir_reg_j29_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___15_, 2, Rsh_Fir_array_args204, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L31(i84, r78)
  // L31(i84, r78)
  Rsh_Fir_reg_i86_ = Rsh_Fir_reg_i84_;
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_r78_;
  goto L31_;

L175_:;
  // dr32 = tryDispatchBuiltin.0("[<-", l23, dx47)
  SEXP Rsh_Fir_array_args205[3];
  Rsh_Fir_array_args205[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args205[1] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_args205[2] = Rsh_Fir_reg_dx47_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args205);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty());
  // if dc16 then L177() else L176(i86, dx47, dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L177()
    goto L177_;
  } else {
  // L176(i86, dx47, dr32)
    Rsh_Fir_reg_i88_ = Rsh_Fir_reg_i86_;
    Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_dx47_;
    Rsh_Fir_reg_l25_ = Rsh_Fir_reg_dr32_;
    goto L176_;
  }

L176_:;
  // j30 = ld j
  Rsh_Fir_reg_j30_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L178() else D64()
  // L178()
  goto L178_;

L177_:;
  // dx51 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx51_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args207, Rsh_Fir_param_types_empty());
  // goto L32(i86, dx51)
  // L32(i86, dx51)
  Rsh_Fir_reg_i90_ = Rsh_Fir_reg_i86_;
  Rsh_Fir_reg_dx53_ = Rsh_Fir_reg_dx51_;
  goto L32_;

D64_:;
  // deopt 236 [i88, dx49, l25, dx47, j30]
  SEXP Rsh_Fir_array_deopt_stack62[5];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_i88_;
  Rsh_Fir_array_deopt_stack62[1] = Rsh_Fir_reg_dx49_;
  Rsh_Fir_array_deopt_stack62[2] = Rsh_Fir_reg_l25_;
  Rsh_Fir_array_deopt_stack62[3] = Rsh_Fir_reg_dx47_;
  Rsh_Fir_array_deopt_stack62[4] = Rsh_Fir_reg_j30_;
  Rsh_Fir_deopt(236, 5, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L178_:;
  // j31 = force? j30
  Rsh_Fir_reg_j31_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_j30_);
  // checkMissing(j31)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_j31_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty()));
  // r79 = `+`(j31, 1)
  SEXP Rsh_Fir_array_args209[2];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_j31_;
  Rsh_Fir_array_args209[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty());
  // ___6 = ldf `[<-` in base
  Rsh_Fir_reg____6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r80 = dyn ___6(l25, dx47, r79)
  SEXP Rsh_Fir_array_args210[3];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_l25_;
  Rsh_Fir_array_args210[1] = Rsh_Fir_reg_dx47_;
  Rsh_Fir_array_args210[2] = Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_array_arg_names28[3];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____6_, 3, Rsh_Fir_array_args210, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L32(i88, r80)
  // L32(i88, r80)
  Rsh_Fir_reg_i90_ = Rsh_Fir_reg_i88_;
  Rsh_Fir_reg_dx53_ = Rsh_Fir_reg_r80_;
  goto L32_;

D65_:;
  // deopt 245 [X40]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_X40_;
  Rsh_Fir_deopt(245, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L179_:;
  // X41 = force? X40
  Rsh_Fir_reg_X41_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X40_);
  // checkMissing(X41)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_X41_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty()));
  // c26 = `is.object`(X41)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_X41_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args212, Rsh_Fir_param_types_empty());
  // if c26 then L180() else L181(X41)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L180()
    goto L180_;
  } else {
  // L181(X41)
    Rsh_Fir_reg_X43_ = Rsh_Fir_reg_X41_;
    goto L181_;
  }

L180_:;
  // dr34 = tryDispatchBuiltin.1("[", X41)
  SEXP Rsh_Fir_array_args213[2];
  Rsh_Fir_array_args213[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args213[1] = Rsh_Fir_reg_X41_;
  Rsh_Fir_reg_dr34_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args213);
  // dc17 = getTryDispatchBuiltinDispatched(dr34)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dc17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty());
  // if dc17 then L182() else L181(dr34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc17_)) {
  // L182()
    goto L182_;
  } else {
  // L181(dr34)
    Rsh_Fir_reg_X43_ = Rsh_Fir_reg_dr34_;
    goto L181_;
  }

L181_:;
  // KK18 = ld KK
  Rsh_Fir_reg_KK18_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L183() else D66()
  // L183()
  goto L183_;

L182_:;
  // dx54 = getTryDispatchBuiltinValue(dr34)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dx54_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty());
  // goto L34(dx54)
  // L34(dx54)
  Rsh_Fir_reg_dx55_ = Rsh_Fir_reg_dx54_;
  goto L34_;

D66_:;
  // deopt 247 [X43, KK18]
  SEXP Rsh_Fir_array_deopt_stack64[2];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_X43_;
  Rsh_Fir_array_deopt_stack64[1] = Rsh_Fir_reg_KK18_;
  Rsh_Fir_deopt(247, 2, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L183_:;
  // KK19 = force? KK18
  Rsh_Fir_reg_KK19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KK18_);
  // checkMissing(KK19)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_KK19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args216, Rsh_Fir_param_types_empty()));
  // r81 = `+`(KK19, 1)
  SEXP Rsh_Fir_array_args217[2];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_KK19_;
  Rsh_Fir_array_args217[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args217, Rsh_Fir_param_types_empty());
  // __16 = ldf `[` in base
  Rsh_Fir_reg___16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r82 = dyn __16(X43, r81)
  SEXP Rsh_Fir_array_args218[2];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_X43_;
  Rsh_Fir_array_args218[1] = Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___16_, 2, Rsh_Fir_array_args218, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L34(r82)
  // L34(r82)
  Rsh_Fir_reg_dx55_ = Rsh_Fir_reg_r82_;
  goto L34_;

L184_:;
  // dr36 = tryDispatchBuiltin.0("[<-", l26, dx55)
  SEXP Rsh_Fir_array_args219[3];
  Rsh_Fir_array_args219[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args219[1] = Rsh_Fir_reg_l26_;
  Rsh_Fir_array_args219[2] = Rsh_Fir_reg_dx55_;
  Rsh_Fir_reg_dr36_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args219);
  // dc18 = getTryDispatchBuiltinDispatched(dr36)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dc18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args220, Rsh_Fir_param_types_empty());
  // if dc18 then L186() else L185(dx55, dr36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc18_)) {
  // L186()
    goto L186_;
  } else {
  // L185(dx55, dr36)
    Rsh_Fir_reg_dx57_ = Rsh_Fir_reg_dx55_;
    Rsh_Fir_reg_l28_ = Rsh_Fir_reg_dr36_;
    goto L185_;
  }

L185_:;
  // ___7 = ldf `[<-` in base
  Rsh_Fir_reg____7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r83 = dyn ___7(l28, dx55, 1)
  SEXP Rsh_Fir_array_args221[3];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_l28_;
  Rsh_Fir_array_args221[1] = Rsh_Fir_reg_dx55_;
  Rsh_Fir_array_args221[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____7_, 3, Rsh_Fir_array_args221, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L35(r83)
  // L35(r83)
  Rsh_Fir_reg_dx61_ = Rsh_Fir_reg_r83_;
  goto L35_;

L186_:;
  // dx59 = getTryDispatchBuiltinValue(dr36)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dx59_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args222, Rsh_Fir_param_types_empty());
  // goto L35(dx59)
  // L35(dx59)
  Rsh_Fir_reg_dx61_ = Rsh_Fir_reg_dx59_;
  goto L35_;

D67_:;
  // deopt 258 [X44]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_X44_;
  Rsh_Fir_deopt(258, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L187_:;
  // X45 = force? X44
  Rsh_Fir_reg_X45_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X44_);
  // checkMissing(X45)
  SEXP Rsh_Fir_array_args223[1];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_X45_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty()));
  // c28 = `is.object`(X45)
  SEXP Rsh_Fir_array_args224[1];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_X45_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args224, Rsh_Fir_param_types_empty());
  // if c28 then L188() else L189(X45)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L188()
    goto L188_;
  } else {
  // L189(X45)
    Rsh_Fir_reg_X47_ = Rsh_Fir_reg_X45_;
    goto L189_;
  }

L188_:;
  // dr38 = tryDispatchBuiltin.1("[", X45)
  SEXP Rsh_Fir_array_args225[2];
  Rsh_Fir_array_args225[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args225[1] = Rsh_Fir_reg_X45_;
  Rsh_Fir_reg_dr38_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args225);
  // dc19 = getTryDispatchBuiltinDispatched(dr38)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dc19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty());
  // if dc19 then L190() else L189(dr38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc19_)) {
  // L190()
    goto L190_;
  } else {
  // L189(dr38)
    Rsh_Fir_reg_X47_ = Rsh_Fir_reg_dr38_;
    goto L189_;
  }

L189_:;
  // KK20 = ld KK
  Rsh_Fir_reg_KK20_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L191() else D68()
  // L191()
  goto L191_;

L190_:;
  // dx62 = getTryDispatchBuiltinValue(dr38)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dx62_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args227, Rsh_Fir_param_types_empty());
  // goto L36(dx62)
  // L36(dx62)
  Rsh_Fir_reg_dx63_ = Rsh_Fir_reg_dx62_;
  goto L36_;

D68_:;
  // deopt 260 [X47, KK20]
  SEXP Rsh_Fir_array_deopt_stack66[2];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_X47_;
  Rsh_Fir_array_deopt_stack66[1] = Rsh_Fir_reg_KK20_;
  Rsh_Fir_deopt(260, 2, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L191_:;
  // KK21 = force? KK20
  Rsh_Fir_reg_KK21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KK20_);
  // checkMissing(KK21)
  SEXP Rsh_Fir_array_args228[1];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_KK21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args228, Rsh_Fir_param_types_empty()));
  // r84 = `+`(KK21, 1)
  SEXP Rsh_Fir_array_args229[2];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_KK21_;
  Rsh_Fir_array_args229[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args229, Rsh_Fir_param_types_empty());
  // __17 = ldf `[` in base
  Rsh_Fir_reg___17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r85 = dyn __17(X47, r84)
  SEXP Rsh_Fir_array_args230[2];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_X47_;
  Rsh_Fir_array_args230[1] = Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___17_, 2, Rsh_Fir_array_args230, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L36(r85)
  // L36(r85)
  Rsh_Fir_reg_dx63_ = Rsh_Fir_reg_r85_;
  goto L36_;

D69_:;
  // deopt 267 [r86]
  SEXP Rsh_Fir_array_deopt_stack67[1];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(267, 1, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L192_:;
  // r87 = `==`(r86, 1)
  SEXP Rsh_Fir_array_args231[2];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_array_args231[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args231, Rsh_Fir_param_types_empty());
  // c29 = `as.logical`(r87)
  SEXP Rsh_Fir_array_args232[1];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args232, Rsh_Fir_param_types_empty());
  // if c29 then L193() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L193()
    goto L193_;
  } else {
  // L37()
    goto L37_;
  }

L193_:;
  // X48 = ld X
  Rsh_Fir_reg_X48_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L194() else D70()
  // L194()
  goto L194_;

D70_:;
  // deopt 271 [X48]
  SEXP Rsh_Fir_array_deopt_stack68[1];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_X48_;
  Rsh_Fir_deopt(271, 1, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L194_:;
  // X49 = force? X48
  Rsh_Fir_reg_X49_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X48_);
  // checkMissing(X49)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_X49_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(X49)
  SEXP Rsh_Fir_array_args234[1];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_X49_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args234, Rsh_Fir_param_types_empty());
  // if c30 then L195() else L196(X49)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L195()
    goto L195_;
  } else {
  // L196(X49)
    Rsh_Fir_reg_X51_ = Rsh_Fir_reg_X49_;
    goto L196_;
  }

L195_:;
  // dr40 = tryDispatchBuiltin.1("[", X49)
  SEXP Rsh_Fir_array_args235[2];
  Rsh_Fir_array_args235[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args235[1] = Rsh_Fir_reg_X49_;
  Rsh_Fir_reg_dr40_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args235);
  // dc20 = getTryDispatchBuiltinDispatched(dr40)
  SEXP Rsh_Fir_array_args236[1];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dc20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args236, Rsh_Fir_param_types_empty());
  // if dc20 then L197() else L196(dr40)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc20_)) {
  // L197()
    goto L197_;
  } else {
  // L196(dr40)
    Rsh_Fir_reg_X51_ = Rsh_Fir_reg_dr40_;
    goto L196_;
  }

L196_:;
  // LL2 = ld LL
  Rsh_Fir_reg_LL2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L198() else D71()
  // L198()
  goto L198_;

L197_:;
  // dx64 = getTryDispatchBuiltinValue(dr40)
  SEXP Rsh_Fir_array_args237[1];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dx64_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args237, Rsh_Fir_param_types_empty());
  // goto L38(dx64)
  // L38(dx64)
  Rsh_Fir_reg_dx65_ = Rsh_Fir_reg_dx64_;
  goto L38_;

D71_:;
  // deopt 273 [X51, LL2]
  SEXP Rsh_Fir_array_deopt_stack69[2];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_X51_;
  Rsh_Fir_array_deopt_stack69[1] = Rsh_Fir_reg_LL2_;
  Rsh_Fir_deopt(273, 2, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L198_:;
  // LL3 = force? LL2
  Rsh_Fir_reg_LL3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LL2_);
  // checkMissing(LL3)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_LL3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args238, Rsh_Fir_param_types_empty()));
  // r88 = `+`(LL3, 1)
  SEXP Rsh_Fir_array_args239[2];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_LL3_;
  Rsh_Fir_array_args239[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args239, Rsh_Fir_param_types_empty());
  // __19 = ldf `[` in base
  Rsh_Fir_reg___19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r89 = dyn __19(X51, r88)
  SEXP Rsh_Fir_array_args240[2];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_X51_;
  Rsh_Fir_array_args240[1] = Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___19_, 2, Rsh_Fir_array_args240, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L38(r89)
  // L38(r89)
  Rsh_Fir_reg_dx65_ = Rsh_Fir_reg_r89_;
  goto L38_;

D72_:;
  // deopt 277 [dx65, X52]
  SEXP Rsh_Fir_array_deopt_stack70[2];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_dx65_;
  Rsh_Fir_array_deopt_stack70[1] = Rsh_Fir_reg_X52_;
  Rsh_Fir_deopt(277, 2, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L199_:;
  // X53 = force? X52
  Rsh_Fir_reg_X53_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X52_);
  // checkMissing(X53)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_X53_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args241, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(X53)
  SEXP Rsh_Fir_array_args242[1];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_X53_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args242, Rsh_Fir_param_types_empty());
  // if c31 then L200() else L201(dx65, X53)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L200()
    goto L200_;
  } else {
  // L201(dx65, X53)
    Rsh_Fir_reg_dx67_ = Rsh_Fir_reg_dx65_;
    Rsh_Fir_reg_X55_ = Rsh_Fir_reg_X53_;
    goto L201_;
  }

L200_:;
  // dr42 = tryDispatchBuiltin.1("[", X53)
  SEXP Rsh_Fir_array_args243[2];
  Rsh_Fir_array_args243[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args243[1] = Rsh_Fir_reg_X53_;
  Rsh_Fir_reg_dr42_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args243);
  // dc21 = getTryDispatchBuiltinDispatched(dr42)
  SEXP Rsh_Fir_array_args244[1];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dc21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args244, Rsh_Fir_param_types_empty());
  // if dc21 then L202() else L201(dx65, dr42)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc21_)) {
  // L202()
    goto L202_;
  } else {
  // L201(dx65, dr42)
    Rsh_Fir_reg_dx67_ = Rsh_Fir_reg_dx65_;
    Rsh_Fir_reg_X55_ = Rsh_Fir_reg_dr42_;
    goto L201_;
  }

L201_:;
  // KK22 = ld KK
  Rsh_Fir_reg_KK22_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L203() else D73()
  // L203()
  goto L203_;

L202_:;
  // dx69 = getTryDispatchBuiltinValue(dr42)
  SEXP Rsh_Fir_array_args245[1];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dx69_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args245, Rsh_Fir_param_types_empty());
  // goto L39(dx65, dx69)
  // L39(dx65, dx69)
  Rsh_Fir_reg_dx70_ = Rsh_Fir_reg_dx65_;
  Rsh_Fir_reg_dx71_ = Rsh_Fir_reg_dx69_;
  goto L39_;

D73_:;
  // deopt 279 [dx67, X55, KK22]
  SEXP Rsh_Fir_array_deopt_stack71[3];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_dx67_;
  Rsh_Fir_array_deopt_stack71[1] = Rsh_Fir_reg_X55_;
  Rsh_Fir_array_deopt_stack71[2] = Rsh_Fir_reg_KK22_;
  Rsh_Fir_deopt(279, 3, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L203_:;
  // KK23 = force? KK22
  Rsh_Fir_reg_KK23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KK22_);
  // checkMissing(KK23)
  SEXP Rsh_Fir_array_args246[1];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_KK23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args246, Rsh_Fir_param_types_empty()));
  // r90 = `+`(KK23, 1)
  SEXP Rsh_Fir_array_args247[2];
  Rsh_Fir_array_args247[0] = Rsh_Fir_reg_KK23_;
  Rsh_Fir_array_args247[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args247, Rsh_Fir_param_types_empty());
  // __20 = ldf `[` in base
  Rsh_Fir_reg___20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r91 = dyn __20(X55, r90)
  SEXP Rsh_Fir_array_args248[2];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_X55_;
  Rsh_Fir_array_args248[1] = Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___20_, 2, Rsh_Fir_array_args248, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L39(dx67, r91)
  // L39(dx67, r91)
  Rsh_Fir_reg_dx70_ = Rsh_Fir_reg_dx67_;
  Rsh_Fir_reg_dx71_ = Rsh_Fir_reg_r91_;
  goto L39_;

D74_:;
  // deopt 285 [MM8]
  SEXP Rsh_Fir_array_deopt_stack72[1];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_MM8_;
  Rsh_Fir_deopt(285, 1, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L204_:;
  // MM9 = force? MM8
  Rsh_Fir_reg_MM9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MM8_);
  // checkMissing(MM9)
  SEXP Rsh_Fir_array_args249[1];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_MM9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args249, Rsh_Fir_param_types_empty()));
  // __21 = ldf `%%` in base
  Rsh_Fir_reg___21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r93 = dyn __21(r92, MM9)
  SEXP Rsh_Fir_array_args250[2];
  Rsh_Fir_array_args250[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_array_args250[1] = Rsh_Fir_reg_MM9_;
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___21_, 2, Rsh_Fir_array_args250, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L205() else D75()
  // L205()
  goto L205_;

D75_:;
  // deopt 288 [r93]
  SEXP Rsh_Fir_array_deopt_stack73[1];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_deopt(288, 1, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L205_:;
  // l29 = ld X
  Rsh_Fir_reg_l29_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c32 = `is.object`(l29)
  SEXP Rsh_Fir_array_args251[1];
  Rsh_Fir_array_args251[0] = Rsh_Fir_reg_l29_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args251, Rsh_Fir_param_types_empty());
  // if c32 then L206() else L207(r93, l29)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L206()
    goto L206_;
  } else {
  // L207(r93, l29)
    Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r93_;
    Rsh_Fir_reg_l31_ = Rsh_Fir_reg_l29_;
    goto L207_;
  }

L206_:;
  // dr44 = tryDispatchBuiltin.0("[<-", l29, r93)
  SEXP Rsh_Fir_array_args252[3];
  Rsh_Fir_array_args252[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args252[1] = Rsh_Fir_reg_l29_;
  Rsh_Fir_array_args252[2] = Rsh_Fir_reg_r93_;
  Rsh_Fir_reg_dr44_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args252);
  // dc22 = getTryDispatchBuiltinDispatched(dr44)
  SEXP Rsh_Fir_array_args253[1];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dc22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args253, Rsh_Fir_param_types_empty());
  // if dc22 then L208() else L207(r93, dr44)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc22_)) {
  // L208()
    goto L208_;
  } else {
  // L207(r93, dr44)
    Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r93_;
    Rsh_Fir_reg_l31_ = Rsh_Fir_reg_dr44_;
    goto L207_;
  }

L207_:;
  // LL4 = ld LL
  Rsh_Fir_reg_LL4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L209() else D76()
  // L209()
  goto L209_;

L208_:;
  // dx72 = getTryDispatchBuiltinValue(dr44)
  SEXP Rsh_Fir_array_args254[1];
  Rsh_Fir_array_args254[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dx72_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args254, Rsh_Fir_param_types_empty());
  // goto L40(r93, dx72)
  // L40(r93, dx72)
  Rsh_Fir_reg_r97_ = Rsh_Fir_reg_r93_;
  Rsh_Fir_reg_dx73_ = Rsh_Fir_reg_dx72_;
  goto L40_;

D76_:;
  // deopt 290 [r95, l31, r93, LL4]
  SEXP Rsh_Fir_array_deopt_stack74[4];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_array_deopt_stack74[1] = Rsh_Fir_reg_l31_;
  Rsh_Fir_array_deopt_stack74[2] = Rsh_Fir_reg_r93_;
  Rsh_Fir_array_deopt_stack74[3] = Rsh_Fir_reg_LL4_;
  Rsh_Fir_deopt(290, 4, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L209_:;
  // LL5 = force? LL4
  Rsh_Fir_reg_LL5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LL4_);
  // checkMissing(LL5)
  SEXP Rsh_Fir_array_args255[1];
  Rsh_Fir_array_args255[0] = Rsh_Fir_reg_LL5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args255, Rsh_Fir_param_types_empty()));
  // r98 = `+`(LL5, 1)
  SEXP Rsh_Fir_array_args256[2];
  Rsh_Fir_array_args256[0] = Rsh_Fir_reg_LL5_;
  Rsh_Fir_array_args256[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args256, Rsh_Fir_param_types_empty());
  // ___8 = ldf `[<-` in base
  Rsh_Fir_reg____8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r99 = dyn ___8(l31, r93, r98)
  SEXP Rsh_Fir_array_args257[3];
  Rsh_Fir_array_args257[0] = Rsh_Fir_reg_l31_;
  Rsh_Fir_array_args257[1] = Rsh_Fir_reg_r93_;
  Rsh_Fir_array_args257[2] = Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____8_, 3, Rsh_Fir_array_args257, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L40(r95, r99)
  // L40(r95, r99)
  Rsh_Fir_reg_r97_ = Rsh_Fir_reg_r95_;
  Rsh_Fir_reg_dx73_ = Rsh_Fir_reg_r99_;
  goto L40_;

D77_:;
  // deopt 300 [ss16]
  SEXP Rsh_Fir_array_deopt_stack75[1];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_ss16_;
  Rsh_Fir_deopt(300, 1, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L212_:;
  // ss17 = force? ss16
  Rsh_Fir_reg_ss17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ss16_);
  // checkMissing(ss17)
  SEXP Rsh_Fir_array_args258[1];
  Rsh_Fir_array_args258[0] = Rsh_Fir_reg_ss17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args258, Rsh_Fir_param_types_empty()));
  // c33 = `as.logical`(ss17)
  SEXP Rsh_Fir_array_args259[1];
  Rsh_Fir_array_args259[0] = Rsh_Fir_reg_ss17_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args259, Rsh_Fir_param_types_empty());
  // if c33 then L213() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L213()
    goto L213_;
  } else {
  // L43()
    goto L43_;
  }

L213_:;
  // ss18 = ld ss
  Rsh_Fir_reg_ss18_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L214() else D78()
  // L214()
  goto L214_;

D78_:;
  // deopt 303 [ss18]
  SEXP Rsh_Fir_array_deopt_stack76[1];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_ss18_;
  Rsh_Fir_deopt(303, 1, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

L214_:;
  // ss19 = force? ss18
  Rsh_Fir_reg_ss19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ss18_);
  // checkMissing(ss19)
  SEXP Rsh_Fir_array_args260[1];
  Rsh_Fir_array_args260[0] = Rsh_Fir_reg_ss19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args260, Rsh_Fir_param_types_empty()));
  // ___9 = ldf `%/%` in base
  Rsh_Fir_reg____9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r102 = dyn ___9(ss19, 2)
  SEXP Rsh_Fir_array_args261[2];
  Rsh_Fir_array_args261[0] = Rsh_Fir_reg_ss19_;
  Rsh_Fir_array_args261[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____9_, 2, Rsh_Fir_array_args261, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L215() else D79()
  // L215()
  goto L215_;

D79_:;
  // deopt 307 [r102]
  SEXP Rsh_Fir_array_deopt_stack77[1];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_deopt(307, 1, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

L215_:;
  // st ss = r102
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r102_, RHO);
  (void)(Rsh_Fir_reg_r102_);
  // goto L44()
  // L44()
  goto L44_;

D80_:;
  // deopt 309 [T2]
  SEXP Rsh_Fir_array_deopt_stack78[1];
  Rsh_Fir_array_deopt_stack78[0] = Rsh_Fir_reg_T2_;
  Rsh_Fir_deopt(309, 1, Rsh_Fir_array_deopt_stack78, CCP, RHO);
  return R_NilValue;

L217_:;
  // T3 = force? T2
  Rsh_Fir_reg_T3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_T2_);
  // checkMissing(T3)
  SEXP Rsh_Fir_array_args262[1];
  Rsh_Fir_array_args262[0] = Rsh_Fir_reg_T3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args262, Rsh_Fir_param_types_empty()));
  // r104 = `-`(T3, 1)
  SEXP Rsh_Fir_array_args263[2];
  Rsh_Fir_array_args263[0] = Rsh_Fir_reg_T3_;
  Rsh_Fir_array_args263[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args263, Rsh_Fir_param_types_empty());
  // st T = r104
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r104_, RHO);
  (void)(Rsh_Fir_reg_r104_);
  // goto L44()
  // L44()
  goto L44_;

L219_:;
  // X56 = ld X
  Rsh_Fir_reg_X56_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L221() else D81()
  // L221()
  goto L221_;

L220_:;
  // r105 = dyn base1(<lang `[`(X, `:`(`(`(`+`(LL, 1)), KK))>, <lang `[`(X, `:`(1, LL))>)
  SEXP Rsh_Fir_array_args264[2];
  Rsh_Fir_array_args264[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args264[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args264, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L46(r105)
  // L46(r105)
  Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r105_;
  goto L46_;

D81_:;
  // deopt 319 [X56]
  SEXP Rsh_Fir_array_deopt_stack79[1];
  Rsh_Fir_array_deopt_stack79[0] = Rsh_Fir_reg_X56_;
  Rsh_Fir_deopt(319, 1, Rsh_Fir_array_deopt_stack79, CCP, RHO);
  return R_NilValue;

L221_:;
  // X57 = force? X56
  Rsh_Fir_reg_X57_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X56_);
  // checkMissing(X57)
  SEXP Rsh_Fir_array_args265[1];
  Rsh_Fir_array_args265[0] = Rsh_Fir_reg_X57_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args265, Rsh_Fir_param_types_empty()));
  // c34 = `is.object`(X57)
  SEXP Rsh_Fir_array_args266[1];
  Rsh_Fir_array_args266[0] = Rsh_Fir_reg_X57_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args266, Rsh_Fir_param_types_empty());
  // if c34 then L222() else L223(X57)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L222()
    goto L222_;
  } else {
  // L223(X57)
    Rsh_Fir_reg_X59_ = Rsh_Fir_reg_X57_;
    goto L223_;
  }

L222_:;
  // dr46 = tryDispatchBuiltin.1("[", X57)
  SEXP Rsh_Fir_array_args267[2];
  Rsh_Fir_array_args267[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args267[1] = Rsh_Fir_reg_X57_;
  Rsh_Fir_reg_dr46_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args267);
  // dc23 = getTryDispatchBuiltinDispatched(dr46)
  SEXP Rsh_Fir_array_args268[1];
  Rsh_Fir_array_args268[0] = Rsh_Fir_reg_dr46_;
  Rsh_Fir_reg_dc23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args268, Rsh_Fir_param_types_empty());
  // if dc23 then L224() else L223(dr46)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc23_)) {
  // L224()
    goto L224_;
  } else {
  // L223(dr46)
    Rsh_Fir_reg_X59_ = Rsh_Fir_reg_dr46_;
    goto L223_;
  }

L223_:;
  // LL6 = ld LL
  Rsh_Fir_reg_LL6_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L225() else D82()
  // L225()
  goto L225_;

L224_:;
  // dx74 = getTryDispatchBuiltinValue(dr46)
  SEXP Rsh_Fir_array_args269[1];
  Rsh_Fir_array_args269[0] = Rsh_Fir_reg_dr46_;
  Rsh_Fir_reg_dx74_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args269, Rsh_Fir_param_types_empty());
  // goto L47(dx74)
  // L47(dx74)
  Rsh_Fir_reg_dx75_ = Rsh_Fir_reg_dx74_;
  goto L47_;

D82_:;
  // deopt 321 [X59, LL6]
  SEXP Rsh_Fir_array_deopt_stack80[2];
  Rsh_Fir_array_deopt_stack80[0] = Rsh_Fir_reg_X59_;
  Rsh_Fir_array_deopt_stack80[1] = Rsh_Fir_reg_LL6_;
  Rsh_Fir_deopt(321, 2, Rsh_Fir_array_deopt_stack80, CCP, RHO);
  return R_NilValue;

L225_:;
  // LL7 = force? LL6
  Rsh_Fir_reg_LL7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LL6_);
  // checkMissing(LL7)
  SEXP Rsh_Fir_array_args270[1];
  Rsh_Fir_array_args270[0] = Rsh_Fir_reg_LL7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args270, Rsh_Fir_param_types_empty()));
  // r107 = `+`(LL7, 1)
  SEXP Rsh_Fir_array_args271[2];
  Rsh_Fir_array_args271[0] = Rsh_Fir_reg_LL7_;
  Rsh_Fir_array_args271[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args271, Rsh_Fir_param_types_empty());
  // KK24 = ld KK
  Rsh_Fir_reg_KK24_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L226() else D83()
  // L226()
  goto L226_;

D83_:;
  // deopt 324 [X59, r107, KK24]
  SEXP Rsh_Fir_array_deopt_stack81[3];
  Rsh_Fir_array_deopt_stack81[0] = Rsh_Fir_reg_X59_;
  Rsh_Fir_array_deopt_stack81[1] = Rsh_Fir_reg_r107_;
  Rsh_Fir_array_deopt_stack81[2] = Rsh_Fir_reg_KK24_;
  Rsh_Fir_deopt(324, 3, Rsh_Fir_array_deopt_stack81, CCP, RHO);
  return R_NilValue;

L226_:;
  // KK25 = force? KK24
  Rsh_Fir_reg_KK25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KK24_);
  // checkMissing(KK25)
  SEXP Rsh_Fir_array_args272[1];
  Rsh_Fir_array_args272[0] = Rsh_Fir_reg_KK25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args272, Rsh_Fir_param_types_empty()));
  // r108 = `:`(r107, KK25)
  SEXP Rsh_Fir_array_args273[2];
  Rsh_Fir_array_args273[0] = Rsh_Fir_reg_r107_;
  Rsh_Fir_array_args273[1] = Rsh_Fir_reg_KK25_;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args273, Rsh_Fir_param_types_empty());
  // __22 = ldf `[` in base
  Rsh_Fir_reg___22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r109 = dyn __22(X59, r108)
  SEXP Rsh_Fir_array_args274[2];
  Rsh_Fir_array_args274[0] = Rsh_Fir_reg_X59_;
  Rsh_Fir_array_args274[1] = Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___22_, 2, Rsh_Fir_array_args274, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L47(r109)
  // L47(r109)
  Rsh_Fir_reg_dx75_ = Rsh_Fir_reg_r109_;
  goto L47_;

D84_:;
  // deopt 328 [X60]
  SEXP Rsh_Fir_array_deopt_stack82[1];
  Rsh_Fir_array_deopt_stack82[0] = Rsh_Fir_reg_X60_;
  Rsh_Fir_deopt(328, 1, Rsh_Fir_array_deopt_stack82, CCP, RHO);
  return R_NilValue;

L227_:;
  // X61 = force? X60
  Rsh_Fir_reg_X61_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X60_);
  // checkMissing(X61)
  SEXP Rsh_Fir_array_args275[1];
  Rsh_Fir_array_args275[0] = Rsh_Fir_reg_X61_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args275, Rsh_Fir_param_types_empty()));
  // c35 = `is.object`(X61)
  SEXP Rsh_Fir_array_args276[1];
  Rsh_Fir_array_args276[0] = Rsh_Fir_reg_X61_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args276, Rsh_Fir_param_types_empty());
  // if c35 then L228() else L229(X61)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L228()
    goto L228_;
  } else {
  // L229(X61)
    Rsh_Fir_reg_X63_ = Rsh_Fir_reg_X61_;
    goto L229_;
  }

L228_:;
  // dr48 = tryDispatchBuiltin.1("[", X61)
  SEXP Rsh_Fir_array_args277[2];
  Rsh_Fir_array_args277[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args277[1] = Rsh_Fir_reg_X61_;
  Rsh_Fir_reg_dr48_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args277);
  // dc24 = getTryDispatchBuiltinDispatched(dr48)
  SEXP Rsh_Fir_array_args278[1];
  Rsh_Fir_array_args278[0] = Rsh_Fir_reg_dr48_;
  Rsh_Fir_reg_dc24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args278, Rsh_Fir_param_types_empty());
  // if dc24 then L230() else L229(dr48)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc24_)) {
  // L230()
    goto L230_;
  } else {
  // L229(dr48)
    Rsh_Fir_reg_X63_ = Rsh_Fir_reg_dr48_;
    goto L229_;
  }

L229_:;
  // LL8 = ld LL
  Rsh_Fir_reg_LL8_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L231() else D85()
  // L231()
  goto L231_;

L230_:;
  // dx76 = getTryDispatchBuiltinValue(dr48)
  SEXP Rsh_Fir_array_args279[1];
  Rsh_Fir_array_args279[0] = Rsh_Fir_reg_dr48_;
  Rsh_Fir_reg_dx76_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args279, Rsh_Fir_param_types_empty());
  // goto L48(dx76)
  // L48(dx76)
  Rsh_Fir_reg_dx77_ = Rsh_Fir_reg_dx76_;
  goto L48_;

D85_:;
  // deopt 331 [X63, 1, LL8]
  SEXP Rsh_Fir_array_deopt_stack83[3];
  Rsh_Fir_array_deopt_stack83[0] = Rsh_Fir_reg_X63_;
  Rsh_Fir_array_deopt_stack83[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_deopt_stack83[2] = Rsh_Fir_reg_LL8_;
  Rsh_Fir_deopt(331, 3, Rsh_Fir_array_deopt_stack83, CCP, RHO);
  return R_NilValue;

L231_:;
  // LL9 = force? LL8
  Rsh_Fir_reg_LL9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LL8_);
  // checkMissing(LL9)
  SEXP Rsh_Fir_array_args280[1];
  Rsh_Fir_array_args280[0] = Rsh_Fir_reg_LL9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args280, Rsh_Fir_param_types_empty()));
  // r110 = `:`(1, LL9)
  SEXP Rsh_Fir_array_args281[2];
  Rsh_Fir_array_args281[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args281[1] = Rsh_Fir_reg_LL9_;
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args281, Rsh_Fir_param_types_empty());
  // __23 = ldf `[` in base
  Rsh_Fir_reg___23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r111 = dyn __23(X63, r110)
  SEXP Rsh_Fir_array_args282[2];
  Rsh_Fir_array_args282[0] = Rsh_Fir_reg_X63_;
  Rsh_Fir_array_args282[1] = Rsh_Fir_reg_r110_;
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___23_, 2, Rsh_Fir_array_args282, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L48(r111)
  // L48(r111)
  Rsh_Fir_reg_dx77_ = Rsh_Fir_reg_r111_;
  goto L48_;

D86_:;
  // deopt 336 [r112]
  SEXP Rsh_Fir_array_deopt_stack84[1];
  Rsh_Fir_array_deopt_stack84[0] = Rsh_Fir_reg_r112_;
  Rsh_Fir_deopt(336, 1, Rsh_Fir_array_deopt_stack84, CCP, RHO);
  return R_NilValue;

L232_:;
  // goto L46(r112)
  // L46(r112)
  Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r112_;
  goto L46_;

L233_:;
  // rs = ld rs
  Rsh_Fir_reg_rs = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L235() else D87()
  // L235()
  goto L235_;

L234_:;
  // r113 = dyn base2(<sym rs>)
  SEXP Rsh_Fir_array_args283[1];
  Rsh_Fir_array_args283[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args283, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L49(r113)
  // L49(r113)
  Rsh_Fir_reg_r114_ = Rsh_Fir_reg_r113_;
  goto L49_;

D87_:;
  // deopt 340 [rs]
  SEXP Rsh_Fir_array_deopt_stack85[1];
  Rsh_Fir_array_deopt_stack85[0] = Rsh_Fir_reg_rs;
  Rsh_Fir_deopt(340, 1, Rsh_Fir_array_deopt_stack85, CCP, RHO);
  return R_NilValue;

L235_:;
  // rs1 = force? rs
  Rsh_Fir_reg_rs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rs);
  // checkMissing(rs1)
  SEXP Rsh_Fir_array_args284[1];
  Rsh_Fir_array_args284[0] = Rsh_Fir_reg_rs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args284, Rsh_Fir_param_types_empty()));
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r115 = dyn invisible(rs1)
  SEXP Rsh_Fir_array_args285[1];
  Rsh_Fir_array_args285[0] = Rsh_Fir_reg_rs1_;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args285, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L236() else D88()
  // L236()
  goto L236_;

D88_:;
  // deopt 343 [r115]
  SEXP Rsh_Fir_array_deopt_stack86[1];
  Rsh_Fir_array_deopt_stack86[0] = Rsh_Fir_reg_r115_;
  Rsh_Fir_deopt(343, 1, Rsh_Fir_array_deopt_stack86, CCP, RHO);
  return R_NilValue;

L236_:;
  // goto L49(r115)
  // L49(r115)
  Rsh_Fir_reg_r114_ = Rsh_Fir_reg_r115_;
  goto L49_;
}
SEXP Rsh_Fir_user_promise_inner1301552337_(SEXP CCP, SEXP RHO) {
  // KKK = ld KKK
  Rsh_Fir_reg_KKK = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // KKK1 = force? KKK
  Rsh_Fir_reg_KKK1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KKK);
  // checkMissing(KKK1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_KKK1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return KKK1
  return Rsh_Fir_reg_KKK1_;
}
SEXP Rsh_Fir_user_promise_inner1301552337_1(SEXP CCP, SEXP RHO) {
  // KKK2 = ld KKK
  Rsh_Fir_reg_KKK2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // KKK3 = force? KKK2
  Rsh_Fir_reg_KKK3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KKK2_);
  // checkMissing(KKK3)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_KKK3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // return KKK3
  return Rsh_Fir_reg_KKK3_;
}
SEXP Rsh_Fir_user_promise_inner1301552337_2(SEXP CCP, SEXP RHO) {
  // KKL = ld KKL
  Rsh_Fir_reg_KKL = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // KKL1 = force? KKL
  Rsh_Fir_reg_KKL1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_KKL);
  // checkMissing(KKL1)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_KKL1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // r32 = `+`(KKL1, 1)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_KKL1_;
  Rsh_Fir_array_args101[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // return r32
  return Rsh_Fir_reg_r32_;
}
SEXP Rsh_Fir_user_promise_inner1301552337_3(SEXP CCP, SEXP RHO) {
  // return -2
  return Rsh_const(CCP, 33);
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
