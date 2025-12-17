#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1911462521_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1911462521_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1911462521_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1911462521_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1911462521_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1911462521_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1911462521_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1911462521_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1911462521_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1911462521_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1911462521_8(SEXP CCP, SEXP RHO);
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
  // r = clos inner1911462521
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1911462521_, RHO, CCP);
  // st blank_out_character_ranges = r
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
SEXP Rsh_Fir_user_function_inner1911462521_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1911462521 dynamic dispatch ([s, ranges])

  return Rsh_Fir_user_version_inner1911462521_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1911462521_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1911462521 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1911462521/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_ranges;  // ranges
  SEXP Rsh_Fir_reg_ranges1_;  // ranges1
  SEXP Rsh_Fir_reg_ranges2_;  // ranges2
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_strrep;  // strrep
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_i24_;  // i24
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_i26_;  // i26
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_substring__;  // substring__
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_i28_;  // i28
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_i30_;  // i30
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_l16_;  // l16
  SEXP Rsh_Fir_reg_l17_;  // l17
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_i31_;  // i31
  SEXP Rsh_Fir_reg_l18_;  // l18
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_i33_;  // i33
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_l21_;  // l21
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_l22_;  // l22
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_i35_;  // i35
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_l24_;  // l24
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_l25_;  // l25
  SEXP Rsh_Fir_reg_l26_;  // l26
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_substring__1_;  // substring__1
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_s2_;  // s2
  SEXP Rsh_Fir_reg_s3_;  // s3
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_s5_;  // s5
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_l27_;  // l27
  SEXP Rsh_Fir_reg_l28_;  // l28
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_nchar;  // nchar
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_i37_;  // i37
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_l30_;  // l30
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_i39_;  // i39
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_l31_;  // l31
  SEXP Rsh_Fir_reg_l32_;  // l32
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_seq;  // seq
  SEXP Rsh_Fir_reg_l33_;  // l33
  SEXP Rsh_Fir_reg_l34_;  // l34
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_l35_;  // l35
  SEXP Rsh_Fir_reg_l36_;  // l36
  SEXP Rsh_Fir_reg_l37_;  // l37
  SEXP Rsh_Fir_reg_l38_;  // l38
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_s6_;  // s6
  SEXP Rsh_Fir_reg_l39_;  // l39
  SEXP Rsh_Fir_reg_i40_;  // i40
  SEXP Rsh_Fir_reg_i41_;  // i41
  SEXP Rsh_Fir_reg_i42_;  // i42
  SEXP Rsh_Fir_reg_i43_;  // i43
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_l40_;  // l40
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_i50_;  // i50
  SEXP Rsh_Fir_reg_i51_;  // i51
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_l42_;  // l42
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_i54_;  // i54
  SEXP Rsh_Fir_reg_i55_;  // i55
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_i56_;  // i56
  SEXP Rsh_Fir_reg_i57_;  // i57
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_strrep1_;  // strrep1
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_l43_;  // l43
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_i59_;  // i59
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_l46_;  // l46
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_l47_;  // l47
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_i61_;  // i61
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_l49_;  // l49
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_l50_;  // l50
  SEXP Rsh_Fir_reg_l51_;  // l51
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_substring__2_;  // substring__2
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_i63_;  // i63
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_l53_;  // l53
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_i65_;  // i65
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_l54_;  // l54
  SEXP Rsh_Fir_reg_l55_;  // l55
  SEXP Rsh_Fir_reg____3_;  // ___3
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_s7_;  // s7
  SEXP Rsh_Fir_reg_s8_;  // s8

  // Bind parameters
  Rsh_Fir_reg_s = PARAMS[0];
  Rsh_Fir_reg_ranges = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st s = s
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_s, RHO);
  (void)(Rsh_Fir_reg_s);
  // st ranges = ranges
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ranges, RHO);
  (void)(Rsh_Fir_reg_ranges);
  // ranges1 = ld ranges
  Rsh_Fir_reg_ranges1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L17() else D0()
  // L17()
  goto L17_;

L0_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if c then L18() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L18()
    goto L18_;
  } else {
  // L16()
    goto L16_;
  }

L1_:;
  // st l1 = dx1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // r5 = ld r
  Rsh_Fir_reg_r5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L23() else D2()
  // L23()
  goto L23_;

L2_:;
  // st c1 = dx3
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // r10 = ld r
  Rsh_Fir_reg_r10_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L27() else D3()
  // L27()
  goto L27_;

L3_:;
  // st l2 = dx5
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // r15 = ld r
  Rsh_Fir_reg_r15_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L31() else D4()
  // L31()
  goto L31_;

L4_:;
  // st c2 = dx7
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // l1 = ld l1
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L35() else D5()
  // L35()
  goto L35_;

L5_:;
  // l18 = ld s
  Rsh_Fir_reg_l18_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c16 = `is.object`(l18)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c16 then L51() else L52(i20, "", l18, "", l18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L51()
    goto L51_;
  } else {
  // L52(i20, "", l18, "", l18)
    Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i20_;
    Rsh_Fir_reg_r45_ = Rsh_const(CCP, 9);
    Rsh_Fir_reg_l21_ = Rsh_Fir_reg_l18_;
    Rsh_Fir_reg_r46_ = Rsh_const(CCP, 9);
    Rsh_Fir_reg_l22_ = Rsh_Fir_reg_l18_;
    goto L52_;
  }

L6_:;
  // substring__ = ldf `substring<-`
  Rsh_Fir_reg_substring__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L44() else D10()
  // L44()
  goto L44_;

L7_:;
  // st s = dx11
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // goto L8(i30)
  // L8(i30)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i30_;
  goto L8_;

L8_:;
  // goto L0(i31)
  // L0(i31)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i31_;
  goto L0_;

L9_:;
  // substring__1 = ldf `substring<-`
  Rsh_Fir_reg_substring__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L55() else D14()
  // L55()
  goto L55_;

L10_:;
  // st s = dx17
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // seq = ldf seq
  Rsh_Fir_reg_seq = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L61() else D17()
  // L61()
  goto L61_;

L11_:;
  // i43 = `+`.1(i42, 1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_i42_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_i43_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // c21 = `<`.1(l39, i43)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l39_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_i43_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if c21 then L63() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L63()
    goto L63_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // st s = dx19
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // goto L11(i54, i55)
  // L11(i54, i55)
  Rsh_Fir_reg_i41_ = Rsh_Fir_reg_i54_;
  Rsh_Fir_reg_i42_ = Rsh_Fir_reg_i55_;
  goto L11_;

L13_:;
  // x1 = `[[`(s6, i43, NULL, TRUE)
  SEXP Rsh_Fir_array_args5[4];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_s6_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_i43_;
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args5[3] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_x1_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // st i = x1
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // l40 = ld s
  Rsh_Fir_reg_l40_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c22 = `is.object`(l40)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_l40_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c22 then L64() else L65(i41, i43, "", l40)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L64()
    goto L64_;
  } else {
  // L65(i41, i43, "", l40)
    Rsh_Fir_reg_i50_ = Rsh_Fir_reg_i41_;
    Rsh_Fir_reg_i51_ = Rsh_Fir_reg_i43_;
    Rsh_Fir_reg_r71_ = Rsh_const(CCP, 9);
    Rsh_Fir_reg_l42_ = Rsh_Fir_reg_l40_;
    goto L65_;
  }

L14_:;
  // substring__2 = ldf `substring<-`
  Rsh_Fir_reg_substring__2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L74() else D23()
  // L74()
  goto L74_;

L15_:;
  // st s = dx23
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx23_, RHO);
  (void)(Rsh_Fir_reg_dx23_);
  // goto L8(i65)
  // L8(i65)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i65_;
  goto L8_;

L16_:;
  // x = `[[`(s1, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args7[4];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args7[3] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // st r = x
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // r = ld r
  Rsh_Fir_reg_r1 = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L19() else D1()
  // L19()
  goto L19_;

D0_:;
  // deopt 0 [ranges1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_ranges1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L17_:;
  // ranges2 = force? ranges1
  Rsh_Fir_reg_ranges2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ranges1_);
  // checkMissing(ranges2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_ranges2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // s1 = toForSeq(ranges2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_ranges2_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // l = length(s1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 15);
  // goto L0(i)
  // L0(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L0_;

L18_:;
  // s7 = ld s
  Rsh_Fir_reg_s7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L80() else D26()
  // L80()
  goto L80_;

D1_:;
  // deopt 2 [i2, r]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L19_:;
  // r1 = force? r
  Rsh_Fir_reg_r1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r1);
  // checkMissing(r1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(r1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c1 then L20() else L21(i2, r1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L20()
    goto L20_;
  } else {
  // L21(i2, r1)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r1_;
    goto L21_;
  }

L20_:;
  // dr = tryDispatchBuiltin.1("[", r1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args13);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if dc then L22() else L21(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L22()
    goto L22_;
  } else {
  // L21(i2, dr)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r3_ = Rsh_Fir_reg_dr;
    goto L21_;
  }

L21_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r4 = dyn __(r3, 1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(i6, r4)
  // L1(i6, r4)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r4_;
  goto L1_;

L22_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L1(i2, dx)
  // L1(i2, dx)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

D2_:;
  // deopt 8 [i8, r5]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(8, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L23_:;
  // r6 = force? r5
  Rsh_Fir_reg_r6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r5_);
  // checkMissing(r6)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(r6)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c2 then L24() else L25(i8, r6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L24()
    goto L24_;
  } else {
  // L25(i8, r6)
    Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r6_;
    goto L25_;
  }

L24_:;
  // dr2 = tryDispatchBuiltin.1("[", r6)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args19);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc1 then L26() else L25(i8, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L26()
    goto L26_;
  } else {
  // L25(i8, dr2)
    Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_r8_ = Rsh_Fir_reg_dr2_;
    goto L25_;
  }

L25_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r9 = dyn __1(r8, 2)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(i10, r9)
  // L2(i10, r9)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i10_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r9_;
  goto L2_;

L26_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L2(i8, dx2)
  // L2(i8, dx2)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L2_;

D3_:;
  // deopt 14 [i12, r10]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L27_:;
  // r11 = force? r10
  Rsh_Fir_reg_r11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r10_);
  // checkMissing(r11)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(r11)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c3 then L28() else L29(i12, r11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L28()
    goto L28_;
  } else {
  // L29(i12, r11)
    Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i12_;
    Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r11_;
    goto L29_;
  }

L28_:;
  // dr4 = tryDispatchBuiltin.1("[", r11)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args25);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if dc2 then L30() else L29(i12, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L30()
    goto L30_;
  } else {
  // L29(i12, dr4)
    Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i12_;
    Rsh_Fir_reg_r13_ = Rsh_Fir_reg_dr4_;
    goto L29_;
  }

L29_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r14 = dyn __2(r13, 3)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(i14, r14)
  // L3(i14, r14)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r14_;
  goto L3_;

L30_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L3(i12, dx4)
  // L3(i12, dx4)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L3_;

D4_:;
  // deopt 20 [i16, r15]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(20, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L31_:;
  // r16 = force? r15
  Rsh_Fir_reg_r16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r15_);
  // checkMissing(r16)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(r16)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c4 then L32() else L33(i16, r16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L32()
    goto L32_;
  } else {
  // L33(i16, r16)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i16_;
    Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r16_;
    goto L33_;
  }

L32_:;
  // dr6 = tryDispatchBuiltin.1("[", r16)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args31);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if dc3 then L34() else L33(i16, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L34()
    goto L34_;
  } else {
  // L33(i16, dr6)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i16_;
    Rsh_Fir_reg_r18_ = Rsh_Fir_reg_dr6_;
    goto L33_;
  }

L33_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r19 = dyn __3(r18, 4)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L4(i18, r19)
  // L4(i18, r19)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r19_;
  goto L4_;

L34_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L4(i16, dx6)
  // L4(i16, dx6)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L4_;

D5_:;
  // deopt 26 [i20, l1]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_deopt(26, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L35_:;
  // l2 = force? l1
  Rsh_Fir_reg_l2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l1_);
  // checkMissing(l2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_l2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // l3 = ld l2
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L36() else D6()
  // L36()
  goto L36_;

D6_:;
  // deopt 27 [i20, l2, l3]
  SEXP Rsh_Fir_array_deopt_stack6[3];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_deopt(27, 3, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L36_:;
  // l4 = force? l3
  Rsh_Fir_reg_l4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l3_);
  // checkMissing(l4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_l4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // r20 = `==`(l2, l4)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // c5 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c5 then L37() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L37()
    goto L37_;
  } else {
  // L5()
    goto L5_;
  }

L37_:;
  // strrep = ldf strrep
  Rsh_Fir_reg_strrep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L38() else D7()
  // L38()
  goto L38_;

D7_:;
  // deopt 31 [i20]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L38_:;
  // p = prom<V +>{
  //   c6 = ld c2;
  //   c7 = force? c6;
  //   checkMissing(c7);
  //   c8 = ld c1;
  //   c9 = force? c8;
  //   checkMissing(c9);
  //   r21 = `-`(c7, c9);
  //   r22 = `+`(r21, 1);
  //   return r22;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1911462521_, CCP, RHO);
  // r24 = dyn strrep(" ", p)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strrep, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L39() else D8()
  // L39()
  goto L39_;

D8_:;
  // deopt 34 [i20, r24]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L39_:;
  // l5 = ld s
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c10 = `is.object`(l5)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c10 then L40() else L41(i20, r24, l5, r24, l5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L40()
    goto L40_;
  } else {
  // L41(i20, r24, l5, r24, l5)
    Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i20_;
    Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r24_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l5_;
    Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r24_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l5_;
    goto L41_;
  }

L40_:;
  // dr8 = tryDispatchBuiltin.1("[", l5)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args45);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if dc4 then L42() else L41(i20, r24, l5, r24, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L42()
    goto L42_;
  } else {
  // L41(i20, r24, l5, r24, dr8)
    Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i20_;
    Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r24_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l5_;
    Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r24_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_dr8_;
    goto L41_;
  }

L41_:;
  // l12 = ld l1
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L43() else D9()
  // L43()
  goto L43_;

L42_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L6(i20, r24, l5, r24, dx8)
  // L6(i20, r24, l5, r24, dx8)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L6_;

D9_:;
  // deopt 37 [i24, r27, l8, r28, l9, l12]
  SEXP Rsh_Fir_array_deopt_stack9[6];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i24_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack9[3] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_deopt_stack9[4] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack9[5] = Rsh_Fir_reg_l12_;
  Rsh_Fir_deopt(37, 6, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L43_:;
  // l13 = force? l12
  Rsh_Fir_reg_l13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l12_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r33 = dyn __4(l9, l13)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_l13_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L6(i24, r27, l8, r28, r33)
  // L6(i24, r27, l8, r28, r33)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i24_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r33_;
  goto L6_;

D10_:;
  // deopt 41 [i26, r31, l11, dx9, r32]
  SEXP Rsh_Fir_array_deopt_stack10[5];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i26_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_deopt_stack10[4] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(41, 5, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L44_:;
  // p1 = prom<V +>{
  //   c11 = ld c1;
  //   c12 = force? c11;
  //   checkMissing(c12);
  //   return c12;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1911462521_1, CCP, RHO);
  // p2 = prom<V +>{
  //   c13 = ld c2;
  //   c14 = force? c13;
  //   checkMissing(c14);
  //   return c14;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1911462521_2, CCP, RHO);
  // r36 = dyn substring__(dx9, NULL, p1, p2, r32)
  SEXP Rsh_Fir_array_args51[5];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args51[2] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args51[3] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args51[4] = Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_array_arg_names6[5];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_array_arg_names6[4] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substring__, 5, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L45() else D11()
  // L45()
  goto L45_;

D11_:;
  // deopt 45 [i26, r31, l11, r36]
  SEXP Rsh_Fir_array_deopt_stack11[4];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i26_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack11[3] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(45, 4, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L45_:;
  // c15 = `is.object`(l11)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if c15 then L46() else L47(i26, r31, l11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L46()
    goto L46_;
  } else {
  // L47(i26, r31, l11)
    Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i26_;
    Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r31_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_l11_;
    goto L47_;
  }

L46_:;
  // dr10 = tryDispatchBuiltin.0("[<-", l11, r36)
  SEXP Rsh_Fir_array_args53[3];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args53[2] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args53);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if dc5 then L48() else L47(i26, r31, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L48()
    goto L48_;
  } else {
  // L47(i26, r31, dr10)
    Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i26_;
    Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r31_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_dr10_;
    goto L47_;
  }

L47_:;
  // l16 = ld l1
  Rsh_Fir_reg_l16_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L49() else D12()
  // L49()
  goto L49_;

L48_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L7(i26, r31, dx10)
  // L7(i26, r31, dx10)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i26_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L7_;

D12_:;
  // deopt 46 [i28, r38, l15, r36, l16]
  SEXP Rsh_Fir_array_deopt_stack12[5];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i28_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_deopt_stack12[3] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_deopt_stack12[4] = Rsh_Fir_reg_l16_;
  Rsh_Fir_deopt(46, 5, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L49_:;
  // l17 = force? l16
  Rsh_Fir_reg_l17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l16_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r41 = dyn ___(l15, r36, l17)
  SEXP Rsh_Fir_array_args56[3];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_args56[2] = Rsh_Fir_reg_l17_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L7(i28, r38, r41)
  // L7(i28, r38, r41)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i28_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r41_;
  goto L7_;

L51_:;
  // dr12 = tryDispatchBuiltin.1("[", l18)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_l18_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args57);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if dc6 then L53() else L52(i20, "", l18, "", dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L53()
    goto L53_;
  } else {
  // L52(i20, "", l18, "", dr12)
    Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i20_;
    Rsh_Fir_reg_r45_ = Rsh_const(CCP, 9);
    Rsh_Fir_reg_l21_ = Rsh_Fir_reg_l18_;
    Rsh_Fir_reg_r46_ = Rsh_const(CCP, 9);
    Rsh_Fir_reg_l22_ = Rsh_Fir_reg_dr12_;
    goto L52_;
  }

L52_:;
  // l25 = ld l1
  Rsh_Fir_reg_l25_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L54() else D13()
  // L54()
  goto L54_;

L53_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L9(i20, "", l18, "", dx12)
  // L9(i20, "", l18, "", dx12)
  Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_r49_ = Rsh_const(CCP, 9);
  Rsh_Fir_reg_l24_ = Rsh_Fir_reg_l18_;
  Rsh_Fir_reg_r50_ = Rsh_const(CCP, 9);
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L9_;

D13_:;
  // deopt 54 [i33, r45, l21, r46, l22, l25]
  SEXP Rsh_Fir_array_deopt_stack13[6];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i33_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r45_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_l21_;
  Rsh_Fir_array_deopt_stack13[3] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_deopt_stack13[4] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_deopt_stack13[5] = Rsh_Fir_reg_l25_;
  Rsh_Fir_deopt(54, 6, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L54_:;
  // l26 = force? l25
  Rsh_Fir_reg_l26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l25_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r51 = dyn __5(l22, l26)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_l26_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L9(i33, r45, l21, r46, r51)
  // L9(i33, r45, l21, r46, r51)
  Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i33_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_l24_ = Rsh_Fir_reg_l21_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r51_;
  goto L9_;

D14_:;
  // deopt 58 [i35, r49, l24, dx13, r50]
  SEXP Rsh_Fir_array_deopt_stack14[5];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_deopt_stack14[3] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_deopt_stack14[4] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(58, 5, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L55_:;
  // p3 = prom<V +>{
  //   c17 = ld c1;
  //   c18 = force? c17;
  //   checkMissing(c18);
  //   return c18;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1911462521_3, CCP, RHO);
  // p4 = prom<V +>{
  //   sym = ldf nchar;
  //   base = ldf nchar in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L2() else L3();
  // L0(r54):
  //   return r54;
  // L2():
  //   s2 = ld s;
  //   s3 = force? s2;
  //   checkMissing(s3);
  //   c19 = `is.object`(s3);
  //   if c19 then L4() else L5(s3);
  // L3():
  //   r53 = dyn base(<lang `[`(s, l1)>);
  //   goto L0(r53);
  // L1(dx15):
  //   nchar = ldf nchar in base;
  //   r56 = dyn nchar(dx15, "chars", FALSE, NA_LGL);
  //   goto L0(r56);
  // L4():
  //   dr14 = tryDispatchBuiltin.1("[", s3);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L6() else L5(dr14);
  // L5(s5):
  //   l27 = ld l1;
  //   l28 = force? l27;
  //   __6 = ldf `[` in base;
  //   r55 = dyn __6(s5, l28);
  //   goto L1(r55);
  // L6():
  //   dx14 = getTryDispatchBuiltinValue(dr14);
  //   goto L1(dx14);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1911462521_4, CCP, RHO);
  // r58 = dyn substring__1(dx13, NULL, p3, p4, r50)
  SEXP Rsh_Fir_array_args71[5];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args71[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args71[3] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args71[4] = Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_array_arg_names12[5];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_array_arg_names12[4] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substring__1_, 5, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L56() else D15()
  // L56()
  goto L56_;

D15_:;
  // deopt 62 [i35, r49, l24, r58]
  SEXP Rsh_Fir_array_deopt_stack15[4];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_deopt_stack15[3] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(62, 4, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L56_:;
  // c20 = `is.object`(l24)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_l24_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if c20 then L57() else L58(i35, r49, l24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L57()
    goto L57_;
  } else {
  // L58(i35, r49, l24)
    Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i35_;
    Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r49_;
    Rsh_Fir_reg_l30_ = Rsh_Fir_reg_l24_;
    goto L58_;
  }

L57_:;
  // dr16 = tryDispatchBuiltin.0("[<-", l24, r58)
  SEXP Rsh_Fir_array_args73[3];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_args73[2] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args73);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc8 then L59() else L58(i35, r49, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L59()
    goto L59_;
  } else {
  // L58(i35, r49, dr16)
    Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i35_;
    Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r49_;
    Rsh_Fir_reg_l30_ = Rsh_Fir_reg_dr16_;
    goto L58_;
  }

L58_:;
  // l31 = ld l1
  Rsh_Fir_reg_l31_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L60() else D16()
  // L60()
  goto L60_;

L59_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L10(i35, dx16)
  // L10(i35, dx16)
  Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i35_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L10_;

D16_:;
  // deopt 63 [i37, r60, l30, r58, l31]
  SEXP Rsh_Fir_array_deopt_stack16[5];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i37_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_l30_;
  Rsh_Fir_array_deopt_stack16[3] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_deopt_stack16[4] = Rsh_Fir_reg_l31_;
  Rsh_Fir_deopt(63, 5, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L60_:;
  // l32 = force? l31
  Rsh_Fir_reg_l32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l31_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r63 = dyn ___1(l30, r58, l32)
  SEXP Rsh_Fir_array_args76[3];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_l30_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_args76[2] = Rsh_Fir_reg_l32_;
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L10(i37, r63)
  // L10(i37, r63)
  Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i37_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r63_;
  goto L10_;

D17_:;
  // deopt 68 [i39]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i39_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L61_:;
  // p5 = prom<V +>{
  //   l33 = ld l1;
  //   l34 = force? l33;
  //   checkMissing(l34);
  //   r64 = `+`(l34, 1);
  //   return r64;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1911462521_5, CCP, RHO);
  // p6 = prom<V +>{
  //   l35 = ld l2;
  //   l36 = force? l35;
  //   checkMissing(l36);
  //   l37 = ld l1;
  //   l38 = force? l37;
  //   checkMissing(l38);
  //   r66 = `-`(l36, l38);
  //   r67 = `-`(r66, 1);
  //   return r67;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1911462521_6, CCP, RHO);
  // r69 = dyn seq[, `length.out`](p5, p6)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L62() else D18()
  // L62()
  goto L62_;

D18_:;
  // deopt 72 [i39, r69]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i39_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(72, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L62_:;
  // s6 = toForSeq(r69)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_s6_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // l39 = length(s6)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_s6_;
  Rsh_Fir_reg_l39_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // i40 = 0
  Rsh_Fir_reg_i40_ = Rsh_const(CCP, 15);
  // goto L11(i39, i40)
  // L11(i39, i40)
  Rsh_Fir_reg_i41_ = Rsh_Fir_reg_i39_;
  Rsh_Fir_reg_i42_ = Rsh_Fir_reg_i40_;
  goto L11_;

L63_:;
  // strrep1 = ldf strrep
  Rsh_Fir_reg_strrep1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L68() else D20()
  // L68()
  goto L68_;

L64_:;
  // dr18 = tryDispatchBuiltin.0("[<-", l40, "")
  SEXP Rsh_Fir_array_args86[3];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_l40_;
  Rsh_Fir_array_args86[2] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args86);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if dc9 then L66() else L65(i41, i43, "", dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L66()
    goto L66_;
  } else {
  // L65(i41, i43, "", dr18)
    Rsh_Fir_reg_i50_ = Rsh_Fir_reg_i41_;
    Rsh_Fir_reg_i51_ = Rsh_Fir_reg_i43_;
    Rsh_Fir_reg_r71_ = Rsh_const(CCP, 9);
    Rsh_Fir_reg_l42_ = Rsh_Fir_reg_dr18_;
    goto L65_;
  }

L65_:;
  // i56 = ld i
  Rsh_Fir_reg_i56_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L67() else D19()
  // L67()
  goto L67_;

L66_:;
  // dx18 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // goto L12(i41, i43, dx18)
  // L12(i41, i43, dx18)
  Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i41_;
  Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i43_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L12_;

D19_:;
  // deopt 76 [i50, i51, r71, l42, "", i56]
  SEXP Rsh_Fir_array_deopt_stack19[6];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i50_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_i51_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_r71_;
  Rsh_Fir_array_deopt_stack19[3] = Rsh_Fir_reg_l42_;
  Rsh_Fir_array_deopt_stack19[4] = Rsh_const(CCP, 9);
  Rsh_Fir_array_deopt_stack19[5] = Rsh_Fir_reg_i56_;
  Rsh_Fir_deopt(76, 6, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L67_:;
  // i57 = force? i56
  Rsh_Fir_reg_i57_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i56_);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r74 = dyn ___2(l42, "", i57)
  SEXP Rsh_Fir_array_args89[3];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_l42_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args89[2] = Rsh_Fir_reg_i57_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L12(i50, i51, r74)
  // L12(i50, i51, r74)
  Rsh_Fir_reg_i54_ = Rsh_Fir_reg_i50_;
  Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i51_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r74_;
  goto L12_;

D20_:;
  // deopt 84 [i41]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i41_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L68_:;
  // p7 = prom<V +>{
  //   c23 = ld c2;
  //   c24 = force? c23;
  //   checkMissing(c24);
  //   return c24;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1911462521_7, CCP, RHO);
  // r76 = dyn strrep1(" ", p7)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strrep1_, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L69() else D21()
  // L69()
  goto L69_;

D21_:;
  // deopt 87 [i41, r76]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i41_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(87, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L69_:;
  // l43 = ld s
  Rsh_Fir_reg_l43_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c25 = `is.object`(l43)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_l43_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // if c25 then L70() else L71(i41, r76, l43, r76, l43)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L70()
    goto L70_;
  } else {
  // L71(i41, r76, l43, r76, l43)
    Rsh_Fir_reg_i59_ = Rsh_Fir_reg_i41_;
    Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r76_;
    Rsh_Fir_reg_l46_ = Rsh_Fir_reg_l43_;
    Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r76_;
    Rsh_Fir_reg_l47_ = Rsh_Fir_reg_l43_;
    goto L71_;
  }

L70_:;
  // dr20 = tryDispatchBuiltin.1("[", l43)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_l43_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args93);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if dc10 then L72() else L71(i41, r76, l43, r76, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L72()
    goto L72_;
  } else {
  // L71(i41, r76, l43, r76, dr20)
    Rsh_Fir_reg_i59_ = Rsh_Fir_reg_i41_;
    Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r76_;
    Rsh_Fir_reg_l46_ = Rsh_Fir_reg_l43_;
    Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r76_;
    Rsh_Fir_reg_l47_ = Rsh_Fir_reg_dr20_;
    goto L71_;
  }

L71_:;
  // l50 = ld l2
  Rsh_Fir_reg_l50_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L73() else D22()
  // L73()
  goto L73_;

L72_:;
  // dx20 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // goto L14(i41, r76, l43, r76, dx20)
  // L14(i41, r76, l43, r76, dx20)
  Rsh_Fir_reg_i61_ = Rsh_Fir_reg_i41_;
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r76_;
  Rsh_Fir_reg_l49_ = Rsh_Fir_reg_l43_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r76_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L14_;

D22_:;
  // deopt 90 [i59, r79, l46, r80, l47, l50]
  SEXP Rsh_Fir_array_deopt_stack22[6];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i59_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r79_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_l46_;
  Rsh_Fir_array_deopt_stack22[3] = Rsh_Fir_reg_r80_;
  Rsh_Fir_array_deopt_stack22[4] = Rsh_Fir_reg_l47_;
  Rsh_Fir_array_deopt_stack22[5] = Rsh_Fir_reg_l50_;
  Rsh_Fir_deopt(90, 6, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L73_:;
  // l51 = force? l50
  Rsh_Fir_reg_l51_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l50_);
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r85 = dyn __7(l47, l51)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_l47_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_l51_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L14(i59, r79, l46, r80, r85)
  // L14(i59, r79, l46, r80, r85)
  Rsh_Fir_reg_i61_ = Rsh_Fir_reg_i59_;
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r79_;
  Rsh_Fir_reg_l49_ = Rsh_Fir_reg_l46_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r80_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r85_;
  goto L14_;

D23_:;
  // deopt 94 [i61, r83, l49, dx21, r84]
  SEXP Rsh_Fir_array_deopt_stack23[5];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i61_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r83_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_l49_;
  Rsh_Fir_array_deopt_stack23[3] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_deopt_stack23[4] = Rsh_Fir_reg_r84_;
  Rsh_Fir_deopt(94, 5, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L74_:;
  // p8 = prom<V +>{
  //   c26 = ld c2;
  //   c27 = force? c26;
  //   checkMissing(c27);
  //   return c27;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1911462521_8, CCP, RHO);
  // r87 = dyn substring__2(dx21, NULL, 1, p8, r84)
  SEXP Rsh_Fir_array_args98[5];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_args98[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args98[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args98[3] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args98[4] = Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_array_arg_names18[5];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_array_arg_names18[4] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substring__2_, 5, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L75() else D24()
  // L75()
  goto L75_;

D24_:;
  // deopt 98 [i61, r83, l49, r87]
  SEXP Rsh_Fir_array_deopt_stack24[4];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i61_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r83_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_l49_;
  Rsh_Fir_array_deopt_stack24[3] = Rsh_Fir_reg_r87_;
  Rsh_Fir_deopt(98, 4, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L75_:;
  // c28 = `is.object`(l49)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_l49_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if c28 then L76() else L77(i61, r83, l49)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L76()
    goto L76_;
  } else {
  // L77(i61, r83, l49)
    Rsh_Fir_reg_i63_ = Rsh_Fir_reg_i61_;
    Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r83_;
    Rsh_Fir_reg_l53_ = Rsh_Fir_reg_l49_;
    goto L77_;
  }

L76_:;
  // dr22 = tryDispatchBuiltin.0("[<-", l49, r87)
  SEXP Rsh_Fir_array_args100[3];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_l49_;
  Rsh_Fir_array_args100[2] = Rsh_Fir_reg_r87_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args100);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if dc11 then L78() else L77(i61, r83, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L78()
    goto L78_;
  } else {
  // L77(i61, r83, dr22)
    Rsh_Fir_reg_i63_ = Rsh_Fir_reg_i61_;
    Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r83_;
    Rsh_Fir_reg_l53_ = Rsh_Fir_reg_dr22_;
    goto L77_;
  }

L77_:;
  // l54 = ld l2
  Rsh_Fir_reg_l54_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L79() else D25()
  // L79()
  goto L79_;

L78_:;
  // dx22 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // goto L15(i61, r83, dx22)
  // L15(i61, r83, dx22)
  Rsh_Fir_reg_i65_ = Rsh_Fir_reg_i61_;
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r83_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L15_;

D25_:;
  // deopt 99 [i63, r89, l53, r87, l54]
  SEXP Rsh_Fir_array_deopt_stack25[5];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i63_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r89_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_l53_;
  Rsh_Fir_array_deopt_stack25[3] = Rsh_Fir_reg_r87_;
  Rsh_Fir_array_deopt_stack25[4] = Rsh_Fir_reg_l54_;
  Rsh_Fir_deopt(99, 5, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L79_:;
  // l55 = force? l54
  Rsh_Fir_reg_l55_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l54_);
  // ___3 = ldf `[<-` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r92 = dyn ___3(l53, r87, l55)
  SEXP Rsh_Fir_array_args103[3];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_l53_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_r87_;
  Rsh_Fir_array_args103[2] = Rsh_Fir_reg_l55_;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 3, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L15(i63, r89, r92)
  // L15(i63, r89, r92)
  Rsh_Fir_reg_i65_ = Rsh_Fir_reg_i63_;
  Rsh_Fir_reg_r91_ = Rsh_Fir_reg_r89_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r92_;
  goto L15_;

D26_:;
  // deopt 106 [s7]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_s7_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L80_:;
  // s8 = force? s7
  Rsh_Fir_reg_s8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s7_);
  // checkMissing(s8)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_s8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return s8
  return Rsh_Fir_reg_s8_;
}
SEXP Rsh_Fir_user_promise_inner1911462521_(SEXP CCP, SEXP RHO) {
  // c6 = ld c2
  Rsh_Fir_reg_c6_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // c7 = force? c6
  Rsh_Fir_reg_c7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c6_);
  // checkMissing(c7)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_c7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c8 = ld c1
  Rsh_Fir_reg_c8_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c9 = force? c8
  Rsh_Fir_reg_c9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c8_);
  // checkMissing(c9)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_c9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // r21 = `-`(c7, c9)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // r22 = `+`(r21, 1)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // return r22
  return Rsh_Fir_reg_r22_;
}
SEXP Rsh_Fir_user_promise_inner1911462521_1(SEXP CCP, SEXP RHO) {
  // c11 = ld c1
  Rsh_Fir_reg_c11_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c12 = force? c11
  Rsh_Fir_reg_c12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c11_);
  // checkMissing(c12)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_c12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // return c12
  return Rsh_Fir_reg_c12_;
}
SEXP Rsh_Fir_user_promise_inner1911462521_2(SEXP CCP, SEXP RHO) {
  // c13 = ld c2
  Rsh_Fir_reg_c13_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // c14 = force? c13
  Rsh_Fir_reg_c14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c13_);
  // checkMissing(c14)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_c14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // return c14
  return Rsh_Fir_reg_c14_;
}
SEXP Rsh_Fir_user_promise_inner1911462521_3(SEXP CCP, SEXP RHO) {
  // c17 = ld c1
  Rsh_Fir_reg_c17_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c18 = force? c17
  Rsh_Fir_reg_c18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c17_);
  // checkMissing(c18)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_c18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // return c18
  return Rsh_Fir_reg_c18_;
}
SEXP Rsh_Fir_user_promise_inner1911462521_4(SEXP CCP, SEXP RHO) {
  // sym = ldf nchar
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base = ldf nchar in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r54
  return Rsh_Fir_reg_r54_;

L1_:;
  // nchar = ldf nchar in base
  Rsh_Fir_reg_nchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r56 = dyn nchar(dx15, "chars", FALSE, NA_LGL)
  SEXP Rsh_Fir_array_args63[4];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args63[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args63[3] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names9[4];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nchar, 4, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r56)
  // L0(r56)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r56_;
  goto L0_;

L2_:;
  // s2 = ld s
  Rsh_Fir_reg_s2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // s3 = force? s2
  Rsh_Fir_reg_s3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s2_);
  // checkMissing(s3)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_s3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(s3)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if c19 then L4() else L5(s3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L4()
    goto L4_;
  } else {
  // L5(s3)
    Rsh_Fir_reg_s5_ = Rsh_Fir_reg_s3_;
    goto L5_;
  }

L3_:;
  // r53 = dyn base(<lang `[`(s, l1)>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r53)
  // L0(r53)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L0_;

L4_:;
  // dr14 = tryDispatchBuiltin.1("[", s3)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_s3_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args67);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc7 then L6() else L5(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr14)
    Rsh_Fir_reg_s5_ = Rsh_Fir_reg_dr14_;
    goto L5_;
  }

L5_:;
  // l27 = ld l1
  Rsh_Fir_reg_l27_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // l28 = force? l27
  Rsh_Fir_reg_l28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l27_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r55 = dyn __6(s5, l28)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_s5_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_l28_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L1(r55)
  // L1(r55)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r55_;
  goto L1_;

L6_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // goto L1(dx14)
  // L1(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner1911462521_5(SEXP CCP, SEXP RHO) {
  // l33 = ld l1
  Rsh_Fir_reg_l33_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // l34 = force? l33
  Rsh_Fir_reg_l34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l33_);
  // checkMissing(l34)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_l34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // r64 = `+`(l34, 1)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_l34_;
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // return r64
  return Rsh_Fir_reg_r64_;
}
SEXP Rsh_Fir_user_promise_inner1911462521_6(SEXP CCP, SEXP RHO) {
  // l35 = ld l2
  Rsh_Fir_reg_l35_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // l36 = force? l35
  Rsh_Fir_reg_l36_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l35_);
  // checkMissing(l36)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_l36_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // l37 = ld l1
  Rsh_Fir_reg_l37_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // l38 = force? l37
  Rsh_Fir_reg_l38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l37_);
  // checkMissing(l38)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_l38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // r66 = `-`(l36, l38)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_l36_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_l38_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // r67 = `-`(r66, 1)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // return r67
  return Rsh_Fir_reg_r67_;
}
SEXP Rsh_Fir_user_promise_inner1911462521_7(SEXP CCP, SEXP RHO) {
  // c23 = ld c2
  Rsh_Fir_reg_c23_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // c24 = force? c23
  Rsh_Fir_reg_c24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c23_);
  // checkMissing(c24)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_c24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // return c24
  return Rsh_Fir_reg_c24_;
}
SEXP Rsh_Fir_user_promise_inner1911462521_8(SEXP CCP, SEXP RHO) {
  // c26 = ld c2
  Rsh_Fir_reg_c26_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // c27 = force? c26
  Rsh_Fir_reg_c27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_c26_);
  // checkMissing(c27)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_c27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // return c27
  return Rsh_Fir_reg_c27_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
