#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1515340230_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1515340230_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1515340230_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1515340230_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1515340230_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1515340230_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1515340230_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1515340230_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1515340230_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1515340230_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1515340230_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1515340230_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1515340230_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1515340230_11(SEXP CCP, SEXP RHO);
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
  // r = clos inner1515340230
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1515340230_, RHO, CCP);
  // st mirror2html = r
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
SEXP Rsh_Fir_user_function_inner1515340230_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1515340230 dynamic dispatch ([mirrors, file, head, foot])

  return Rsh_Fir_user_version_inner1515340230_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1515340230_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1515340230 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner1515340230/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_mirrors;  // mirrors
  SEXP Rsh_Fir_reg_file;  // file
  SEXP Rsh_Fir_reg_head;  // head
  SEXP Rsh_Fir_reg_foot;  // foot
  SEXP Rsh_Fir_reg_mirrors_isMissing;  // mirrors_isMissing
  SEXP Rsh_Fir_reg_mirrors_orDefault;  // mirrors_orDefault
  SEXP Rsh_Fir_reg_file_isMissing;  // file_isMissing
  SEXP Rsh_Fir_reg_file_orDefault;  // file_orDefault
  SEXP Rsh_Fir_reg_head_isMissing;  // head_isMissing
  SEXP Rsh_Fir_reg_head_orDefault;  // head_orDefault
  SEXP Rsh_Fir_reg_foot_isMissing;  // foot_isMissing
  SEXP Rsh_Fir_reg_foot_orDefault;  // foot_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_mirrors1_;  // mirrors1
  SEXP Rsh_Fir_reg_mirrors2_;  // mirrors2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_getCRANmirrors;  // getCRANmirrors
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_gsub;  // gsub
  SEXP Rsh_Fir_reg_mirrors3_;  // mirrors3
  SEXP Rsh_Fir_reg_mirrors4_;  // mirrors4
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_mirrors6_;  // mirrors6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_file_exists;  // file_exists
  SEXP Rsh_Fir_reg_head1_;  // head1
  SEXP Rsh_Fir_reg_head2_;  // head2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_readLines;  // readLines
  SEXP Rsh_Fir_reg_head3_;  // head3
  SEXP Rsh_Fir_reg_head4_;  // head4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_unique;  // unique
  SEXP Rsh_Fir_reg_mirrors7_;  // mirrors7
  SEXP Rsh_Fir_reg_mirrors8_;  // mirrors8
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_mirrors10_;  // mirrors10
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_mirrors11_;  // mirrors11
  SEXP Rsh_Fir_reg_mirrors12_;  // mirrors12
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_mirrors14_;  // mirrors14
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_mirrors15_;  // mirrors15
  SEXP Rsh_Fir_reg_mirrors16_;  // mirrors16
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_mirrors19_;  // mirrors19
  SEXP Rsh_Fir_reg_mirrors20_;  // mirrors20
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_mirrors22_;  // mirrors22
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_country;  // country
  SEXP Rsh_Fir_reg_country1_;  // country1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_z2_;  // z2
  SEXP Rsh_Fir_reg_z3_;  // z3
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_country2_;  // country2
  SEXP Rsh_Fir_reg_country3_;  // country3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_nrow;  // nrow
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_i31_;  // i31
  SEXP Rsh_Fir_reg_i32_;  // i32
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_z4_;  // z4
  SEXP Rsh_Fir_reg_z5_;  // z5
  SEXP Rsh_Fir_reg_sprintf;  // sprintf
  SEXP Rsh_Fir_reg_m2_;  // m2
  SEXP Rsh_Fir_reg_m3_;  // m3
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_m5_;  // m5
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_k;  // k
  SEXP Rsh_Fir_reg_k1_;  // k1
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_m6_;  // m6
  SEXP Rsh_Fir_reg_m7_;  // m7
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_m9_;  // m9
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_k2_;  // k2
  SEXP Rsh_Fir_reg_k3_;  // k3
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_m10_;  // m10
  SEXP Rsh_Fir_reg_m11_;  // m11
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_i35_;  // i35
  SEXP Rsh_Fir_reg_i36_;  // i36
  SEXP Rsh_Fir_reg_m13_;  // m13
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_i39_;  // i39
  SEXP Rsh_Fir_reg_i40_;  // i40
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_i43_;  // i43
  SEXP Rsh_Fir_reg_i44_;  // i44
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_i47_;  // i47
  SEXP Rsh_Fir_reg_i48_;  // i48
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_k4_;  // k4
  SEXP Rsh_Fir_reg_k5_;  // k5
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_i51_;  // i51
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_z6_;  // z6
  SEXP Rsh_Fir_reg_z7_;  // z7
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_z8_;  // z8
  SEXP Rsh_Fir_reg_z9_;  // z9
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_file_exists1_;  // file_exists1
  SEXP Rsh_Fir_reg_foot1_;  // foot1
  SEXP Rsh_Fir_reg_foot2_;  // foot2
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_z10_;  // z10
  SEXP Rsh_Fir_reg_z11_;  // z11
  SEXP Rsh_Fir_reg_readLines1_;  // readLines1
  SEXP Rsh_Fir_reg_foot3_;  // foot3
  SEXP Rsh_Fir_reg_foot4_;  // foot4
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_file1_;  // file1
  SEXP Rsh_Fir_reg_file2_;  // file2
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_writeLines;  // writeLines
  SEXP Rsh_Fir_reg_z12_;  // z12
  SEXP Rsh_Fir_reg_z13_;  // z13
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_file3_;  // file3
  SEXP Rsh_Fir_reg_file4_;  // file4
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_z14_;  // z14
  SEXP Rsh_Fir_reg_z15_;  // z15
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r69_;  // r69

  // Bind parameters
  Rsh_Fir_reg_mirrors = PARAMS[0];
  Rsh_Fir_reg_file = PARAMS[1];
  Rsh_Fir_reg_head = PARAMS[2];
  Rsh_Fir_reg_foot = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // mirrors_isMissing = missing.0(mirrors)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_mirrors;
  Rsh_Fir_reg_mirrors_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if mirrors_isMissing then L0(NULL) else L0(mirrors)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_mirrors_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_mirrors_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(mirrors)
    Rsh_Fir_reg_mirrors_orDefault = Rsh_Fir_reg_mirrors;
    goto L0_;
  }

L0_:;
  // st mirrors = mirrors_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_mirrors_orDefault, RHO);
  (void)(Rsh_Fir_reg_mirrors_orDefault);
  // file_isMissing = missing.0(file)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_file;
  Rsh_Fir_reg_file_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if file_isMissing then L1("mirrors.html") else L1(file)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_file_isMissing)) {
  // L1("mirrors.html")
    Rsh_Fir_reg_file_orDefault = Rsh_const(CCP, 3);
    goto L1_;
  } else {
  // L1(file)
    Rsh_Fir_reg_file_orDefault = Rsh_Fir_reg_file;
    goto L1_;
  }

L1_:;
  // st file = file_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_file_orDefault, RHO);
  (void)(Rsh_Fir_reg_file_orDefault);
  // head_isMissing = missing.0(head)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_head;
  Rsh_Fir_reg_head_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if head_isMissing then L2("mirrors-head.html") else L2(head)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_head_isMissing)) {
  // L2("mirrors-head.html")
    Rsh_Fir_reg_head_orDefault = Rsh_const(CCP, 5);
    goto L2_;
  } else {
  // L2(head)
    Rsh_Fir_reg_head_orDefault = Rsh_Fir_reg_head;
    goto L2_;
  }

L2_:;
  // st head = head_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_head_orDefault, RHO);
  (void)(Rsh_Fir_reg_head_orDefault);
  // foot_isMissing = missing.0(foot)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_foot;
  Rsh_Fir_reg_foot_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if foot_isMissing then L3("mirrors-foot.html") else L3(foot)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_foot_isMissing)) {
  // L3("mirrors-foot.html")
    Rsh_Fir_reg_foot_orDefault = Rsh_const(CCP, 7);
    goto L3_;
  } else {
  // L3(foot)
    Rsh_Fir_reg_foot_orDefault = Rsh_Fir_reg_foot;
    goto L3_;
  }

L3_:;
  // st foot = foot_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_foot_orDefault, RHO);
  (void)(Rsh_Fir_reg_foot_orDefault);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L4_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c1 then L30() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L30()
    goto L30_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // gsub = ldf gsub
  Rsh_Fir_reg_gsub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L34() else D3()
  // L34()
  goto L34_;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L9_:;
  // st z = r18
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L50() else D11()
  // L50()
  goto L50_;

L10_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args7);
  // c7 = `<`.1(l3, i2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if c7 then L52() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L52()
    goto L52_;
  } else {
  // L19()
    goto L19_;
  }

L11_:;
  // st m = dx7
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard2 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L12_:;
  // st z = r27
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // sym3 = ldf seq_len
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base3 = ldf seq_len in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard3 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L13_:;
  // s1 = toForSeq(r32)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // l4 = length(s1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // i19 = 0
  Rsh_Fir_reg_i19_ = Rsh_const(CCP, 17);
  // goto L14(i18, i19)
  // L14(i18, i19)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i19_;
  goto L14_;

L14_:;
  // i22 = `+`.1(i21, 1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_i22_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args13);
  // c11 = `<`.1(l4, i22)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_i22_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if c11 then L73() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L73()
    goto L73_;
  } else {
  // L17()
    goto L17_;
  }

L15_:;
  // st z = r37
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // goto L14(i31, i32)
  // L14(i31, i32)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i31_;
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i32_;
  goto L14_;

L16_:;
  // c18 = ldf c in base
  Rsh_Fir_reg_c18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r47 = dyn c18(z5, "<tr>", "<td style=\"width: 45%;\">", r44, "</td>\n", "<td>", dx27, "</td>", "</tr>")
  SEXP Rsh_Fir_array_args15[9];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_z5_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args15[3] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_args15[4] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args15[5] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args15[6] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_array_args15[7] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args15[8] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names[9];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_array_arg_names[5] = R_MissingArg;
  Rsh_Fir_array_arg_names[6] = R_MissingArg;
  Rsh_Fir_array_arg_names[7] = R_MissingArg;
  Rsh_Fir_array_arg_names[8] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c18_, 9, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L88() else D27()
  // L88()
  goto L88_;

L17_:;
  // x1 = `[[`(s1, i22, NULL, TRUE)
  SEXP Rsh_Fir_array_args16[4];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args16[3] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_x1_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // st k = x1
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard4 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L18_:;
  // st z = r49
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r49_, RHO);
  (void)(Rsh_Fir_reg_r49_);
  // goto L10(i51)
  // L10(i51)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i51_;
  goto L10_;

L19_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args18[4];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args18[3] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // st country = x
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // mirrors11 = ld mirrors
  Rsh_Fir_reg_mirrors11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L53() else D13()
  // L53()
  goto L53_;

L20_:;
  // st z = r52
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r52_, RHO);
  (void)(Rsh_Fir_reg_r52_);
  // file_exists1 = ldf `file.exists`
  Rsh_Fir_reg_file_exists1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L97() else D32()
  // L97()
  goto L97_;

L21_:;
  // goto L23()
  // L23()
  goto L23_;

L22_:;
  // st z = r57
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r57_, RHO);
  (void)(Rsh_Fir_reg_r57_);
  // goto L23()
  // L23()
  goto L23_;

L23_:;
  // file1 = ld file
  Rsh_Fir_reg_file1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L107() else D38()
  // L107()
  goto L107_;

L24_:;
  // goto L25()
  // L25()
  goto L25_;

L25_:;
  // sym8 = ldf invisible
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base8 = ldf invisible in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard8 then L112() else L113()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L112()
    goto L112_;
  } else {
  // L113()
    goto L113_;
  }

L26_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r68
  return Rsh_Fir_reg_r68_;

L27_:;
  // mirrors1 = ld mirrors
  Rsh_Fir_reg_mirrors1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L29() else D0()
  // L29()
  goto L29_;

L28_:;
  // r = dyn base(<sym mirrors>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L4(r)
  // L4(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L4_;

D0_:;
  // deopt 1 [mirrors1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_mirrors1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L29_:;
  // mirrors2 = force? mirrors1
  Rsh_Fir_reg_mirrors2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mirrors1_);
  // checkMissing(mirrors2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_mirrors2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c = `==`(mirrors2, NULL)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_mirrors2_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L4(c)
  // L4(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L4_;

L30_:;
  // getCRANmirrors = ldf getCRANmirrors
  Rsh_Fir_reg_getCRANmirrors = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L31() else D1()
  // L31()
  goto L31_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // r2 = dyn getCRANmirrors[all, `local.only`](FALSE, TRUE)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getCRANmirrors, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L32() else D2()
  // L32()
  goto L32_;

D2_:;
  // deopt 10 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L32_:;
  // st mirrors = r2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // goto L6()
  // L6()
  goto L6_;

D3_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p = prom<V +>{
  //   mirrors3 = ld mirrors;
  //   mirrors4 = force? mirrors3;
  //   checkMissing(mirrors4);
  //   c2 = `is.object`(mirrors4);
  //   if c2 then L1() else L2(mirrors4);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", mirrors4);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(mirrors6):
  //   r4 = `$`(mirrors6, <sym Host>);
  //   goto L0(r4);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1515340230_, CCP, RHO);
  // r6 = dyn gsub[, , , fixed]("&", "&amp;", p, TRUE)
  SEXP Rsh_Fir_array_args30[4];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args30[2] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args30[3] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub, 4, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L35() else D4()
  // L35()
  goto L35_;

D4_:;
  // deopt 21 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L35_:;
  // l = ld mirrors
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // c3 = `is.object`(l)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c3 then L37() else L38(r6, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L37()
    goto L37_;
  } else {
  // L38(r6, l)
    Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r6_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L38_;
  }

L36_:;
  // st mirrors = dx3
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // st z = NULL
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_const(CCP, 1), RHO);
  (void)(Rsh_const(CCP, 1));
  // file_exists = ldf `file.exists`
  Rsh_Fir_reg_file_exists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L40() else D5()
  // L40()
  goto L40_;

L37_:;
  // dr2 = tryDispatchBuiltin.0("$<-", l, r6)
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args32[2] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args32);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if dc1 then L39() else L38(r6, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L39()
    goto L39_;
  } else {
  // L38(r6, dr2)
    Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r6_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L38_;
  }

L38_:;
  // r11 = `$<-`(l2, <sym Host>, r6)
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args34[2] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L36(r11)
  // L36(r11)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r11_;
  goto L36_;

L39_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L36(dx2)
  // L36(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L36_;

D5_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p1 = prom<V +>{
  //   head1 = ld head;
  //   head2 = force? head1;
  //   checkMissing(head2);
  //   return head2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1515340230_1, CCP, RHO);
  // r13 = dyn file_exists(p1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_exists, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L41() else D6()
  // L41()
  goto L41_;

D6_:;
  // deopt 31 [r13]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L41_:;
  // c4 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c4 then L42() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L42()
    goto L42_;
  } else {
  // L7()
    goto L7_;
  }

L42_:;
  // readLines = ldf readLines
  Rsh_Fir_reg_readLines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L43() else D7()
  // L43()
  goto L43_;

D7_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L43_:;
  // p2 = prom<V +>{
  //   head3 = ld head;
  //   head4 = force? head3;
  //   checkMissing(head4);
  //   return head4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1515340230_2, CCP, RHO);
  // r15 = dyn readLines(p2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readLines, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L44() else D8()
  // L44()
  goto L44_;

D8_:;
  // deopt 35 [r15]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L44_:;
  // st z = r15
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // goto L8()
  // L8()
  goto L8_;

L46_:;
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L48() else D9()
  // L48()
  goto L48_;

L47_:;
  // r17 = dyn base1(<sym z>, "<dl>")
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L9(r17)
  // L9(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L9_;

D9_:;
  // deopt 41 [z]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L48_:;
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r19 = dyn c5(z1, "<dl>")
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_z1_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L49() else D10()
  // L49()
  goto L49_;

D10_:;
  // deopt 45 [r19]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L49_:;
  // goto L9(r19)
  // L9(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L9_;

D11_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

L50_:;
  // p3 = prom<V +>{
  //   mirrors7 = ld mirrors;
  //   mirrors8 = force? mirrors7;
  //   checkMissing(mirrors8);
  //   c6 = `is.object`(mirrors8);
  //   if c6 then L1() else L2(mirrors8);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("$", mirrors8);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(mirrors10):
  //   r20 = `$`(mirrors10, <sym Country>);
  //   goto L0(r20);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1515340230_3, CCP, RHO);
  // r22 = dyn unique(p3)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L51() else D12()
  // L51()
  goto L51_;

D12_:;
  // deopt 50 [r22]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L51_:;
  // s = toForSeq(r22)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // l3 = length(s)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l3_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 17);
  // goto L10(i)
  // L10(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L10_;

L52_:;
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard6 then L93() else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L93()
    goto L93_;
  } else {
  // L94()
    goto L94_;
  }

D13_:;
  // deopt 51 [i2, mirrors11]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_mirrors11_;
  Rsh_Fir_deopt(51, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L53_:;
  // mirrors12 = force? mirrors11
  Rsh_Fir_reg_mirrors12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mirrors11_);
  // checkMissing(mirrors12)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_mirrors12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(mirrors12)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_mirrors12_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if c8 then L54() else L55(i2, mirrors12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L54()
    goto L54_;
  } else {
  // L55(i2, mirrors12)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_mirrors14_ = Rsh_Fir_reg_mirrors12_;
    goto L55_;
  }

L54_:;
  // dr6 = tryDispatchBuiltin.1("[", mirrors12)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_mirrors12_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args56);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if dc3 then L56() else L55(i2, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L56()
    goto L56_;
  } else {
  // L55(i2, dr6)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_mirrors14_ = Rsh_Fir_reg_dr6_;
    goto L55_;
  }

L55_:;
  // mirrors15 = ld mirrors
  Rsh_Fir_reg_mirrors15_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L57() else D14()
  // L57()
  goto L57_;

L56_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L11(i2, dx6)
  // L11(i2, dx6)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L11_;

D14_:;
  // deopt 53 [i6, mirrors14, mirrors15]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_mirrors14_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_mirrors15_;
  Rsh_Fir_deopt(53, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L57_:;
  // mirrors16 = force? mirrors15
  Rsh_Fir_reg_mirrors16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mirrors15_);
  // checkMissing(mirrors16)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_mirrors16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(mirrors16)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_mirrors16_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if c9 then L59() else L60(i6, mirrors14, mirrors16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L59()
    goto L59_;
  } else {
  // L60(i6, mirrors14, mirrors16)
    Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i6_;
    Rsh_Fir_reg_mirrors19_ = Rsh_Fir_reg_mirrors14_;
    Rsh_Fir_reg_mirrors20_ = Rsh_Fir_reg_mirrors16_;
    goto L60_;
  }

L58_:;
  // country = ld country
  Rsh_Fir_reg_country = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L62() else D15()
  // L62()
  goto L62_;

L59_:;
  // dr8 = tryDispatchBuiltin.1("$", mirrors16)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_mirrors16_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args61);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if dc4 then L61() else L60(i6, mirrors14, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L61()
    goto L61_;
  } else {
  // L60(i6, mirrors14, dr8)
    Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i6_;
    Rsh_Fir_reg_mirrors19_ = Rsh_Fir_reg_mirrors14_;
    Rsh_Fir_reg_mirrors20_ = Rsh_Fir_reg_dr8_;
    goto L60_;
  }

L60_:;
  // r23 = `$`(mirrors20, <sym Country>)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_mirrors20_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L58(i10, mirrors19, r23)
  // L58(i10, mirrors19, r23)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i10_;
  Rsh_Fir_reg_mirrors22_ = Rsh_Fir_reg_mirrors19_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r23_;
  goto L58_;

L61_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L58(i6, mirrors14, dx8)
  // L58(i6, mirrors14, dx8)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_mirrors22_ = Rsh_Fir_reg_mirrors14_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L58_;

D15_:;
  // deopt 55 [i12, mirrors22, dx9, country]
  SEXP Rsh_Fir_array_deopt_stack10[4];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_mirrors22_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_country;
  Rsh_Fir_deopt(55, 4, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L62_:;
  // country1 = force? country
  Rsh_Fir_reg_country1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_country);
  // checkMissing(country1)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_country1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // r24 = `==`(dx9, country1)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_country1_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r25 = dyn __(mirrors12, r24, <missing>)
  SEXP Rsh_Fir_array_args67[3];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_mirrors12_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args67[2] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L11(i12, r25)
  // L11(i12, r25)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r25_;
  goto L11_;

L63_:;
  // z2 = ld z
  Rsh_Fir_reg_z2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L65() else D16()
  // L65()
  goto L65_;

L64_:;
  // r26 = dyn base2(<sym z>, <lang paste0("<dt>", country, "</dt>")>, "<dd>", "<table border=0 style=\"width: 90%;\">")
  SEXP Rsh_Fir_array_args68[4];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args68[2] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args68[3] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names10[4];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 4, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L12(i8, r26)
  // L12(i8, r26)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L12_;

D16_:;
  // deopt 64 [i8, z2]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_z2_;
  Rsh_Fir_deopt(64, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L65_:;
  // z3 = force? z2
  Rsh_Fir_reg_z3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z2_);
  // checkMissing(z3)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_z3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L66() else D17()
  // L66()
  goto L66_;

D17_:;
  // deopt 67 [i8]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L66_:;
  // p4 = prom<V +>{
  //   country2 = ld country;
  //   country3 = force? country2;
  //   checkMissing(country3);
  //   return country3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1515340230_4, CCP, RHO);
  // r29 = dyn paste0("<dt>", p4, "</dt>")
  SEXP Rsh_Fir_array_args71[3];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args71[2] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 3, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L67() else D18()
  // L67()
  goto L67_;

D18_:;
  // deopt 71 [i8, r29]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(71, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L67_:;
  // c10 = ldf c in base
  Rsh_Fir_reg_c10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r30 = dyn c10(z3, r29, "<dd>", "<table border=0 style=\"width: 90%;\">")
  SEXP Rsh_Fir_array_args72[4];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_z3_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_args72[2] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args72[3] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names12[4];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c10_, 4, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L68() else D19()
  // L68()
  goto L68_;

D19_:;
  // deopt 75 [i8, r30]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(75, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L12(i8, r30)
  // L12(i8, r30)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r30_;
  goto L12_;

L69_:;
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // check L71() else D20()
  // L71()
  goto L71_;

L70_:;
  // r31 = dyn base3(<lang nrow(m)>)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L13(i15, r31)
  // L13(i15, r31)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L13_;

D20_:;
  // deopt 79 [i15]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L71_:;
  // p5 = prom<V +>{
  //   m = ld m;
  //   m1 = force? m;
  //   checkMissing(m1);
  //   return m1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1515340230_5, CCP, RHO);
  // r34 = dyn nrow(p5)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L72() else D21()
  // L72()
  goto L72_;

D21_:;
  // deopt 81 [i15, r34]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(81, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L72_:;
  // r35 = seq_len(r34)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L13(i15, r35)
  // L13(i15, r35)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r35_;
  goto L13_;

L73_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args77);
  // if guard5 then L89() else L90()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L89()
    goto L89_;
  } else {
  // L90()
    goto L90_;
  }

L74_:;
  // z4 = ld z
  Rsh_Fir_reg_z4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L76() else D22()
  // L76()
  goto L76_;

L75_:;
  // r36 = dyn base4(<sym z>, "<tr>", "<td style=\"width: 45%;\">", <lang sprintf("<a href=\"%s\" target=\"_top\">%s</a>", `[`(`$`(m, URL), k), `[`(`$`(m, URL), k))>, "</td>\n", "<td>", <lang `[`(`$`(m, Host), k)>, "</td>", "</tr>")
  SEXP Rsh_Fir_array_args78[9];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args78[2] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args78[3] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args78[4] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args78[5] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args78[6] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args78[7] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args78[8] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names15[9];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_array_arg_names15[4] = R_MissingArg;
  Rsh_Fir_array_arg_names15[5] = R_MissingArg;
  Rsh_Fir_array_arg_names15[6] = R_MissingArg;
  Rsh_Fir_array_arg_names15[7] = R_MissingArg;
  Rsh_Fir_array_arg_names15[8] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 9, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L15(i20, i22, r36)
  // L15(i20, i22, r36)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i22_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L15_;

D22_:;
  // deopt 85 [i20, i22, z4]
  SEXP Rsh_Fir_array_deopt_stack17[3];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_z4_;
  Rsh_Fir_deopt(85, 3, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L76_:;
  // z5 = force? z4
  Rsh_Fir_reg_z5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z4_);
  // checkMissing(z5)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_z5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L77() else D23()
  // L77()
  goto L77_;

D23_:;
  // deopt 90 [i20, i22]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_i22_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L77_:;
  // p6 = prom<V +>{
  //   m2 = ld m;
  //   m3 = force? m2;
  //   checkMissing(m3);
  //   c12 = `is.object`(m3);
  //   if c12 then L2() else L3(m3);
  // L1(dx11):
  //   c13 = `is.object`(dx11);
  //   if c13 then L5() else L6(dx11);
  // L2():
  //   dr10 = tryDispatchBuiltin.1("$", m3);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L4() else L3(dr10);
  // L3(m5):
  //   r38 = `$`(m5, <sym URL>);
  //   goto L1(r38);
  // L0(dx15):
  //   return dx15;
  // L4():
  //   dx10 = getTryDispatchBuiltinValue(dr10);
  //   goto L1(dx10);
  // L5():
  //   dr12 = tryDispatchBuiltin.1("[", dx11);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L7() else L6(dr12);
  // L6(dx13):
  //   k = ld k;
  //   k1 = force? k;
  //   __1 = ldf `[` in base;
  //   r39 = dyn __1(dx13, k1);
  //   goto L0(r39);
  // L7():
  //   dx14 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx14);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1515340230_6, CCP, RHO);
  // p7 = prom<V +>{
  //   m6 = ld m;
  //   m7 = force? m6;
  //   checkMissing(m7);
  //   c14 = `is.object`(m7);
  //   if c14 then L2() else L3(m7);
  // L1(dx17):
  //   c15 = `is.object`(dx17);
  //   if c15 then L5() else L6(dx17);
  // L2():
  //   dr14 = tryDispatchBuiltin.1("$", m7);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L4() else L3(dr14);
  // L3(m9):
  //   r41 = `$`(m9, <sym URL>);
  //   goto L1(r41);
  // L0(dx21):
  //   return dx21;
  // L4():
  //   dx16 = getTryDispatchBuiltinValue(dr14);
  //   goto L1(dx16);
  // L5():
  //   dr16 = tryDispatchBuiltin.1("[", dx17);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L7() else L6(dr16);
  // L6(dx19):
  //   k2 = ld k;
  //   k3 = force? k2;
  //   __2 = ldf `[` in base;
  //   r42 = dyn __2(dx19, k3);
  //   goto L0(r42);
  // L7():
  //   dx20 = getTryDispatchBuiltinValue(dr16);
  //   goto L0(dx20);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1515340230_7, CCP, RHO);
  // r44 = dyn sprintf("<a href=\"%s\" target=\"_top\">%s</a>", p6, p7)
  SEXP Rsh_Fir_array_args102[3];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args102[2] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 3, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L78() else D24()
  // L78()
  goto L78_;

D24_:;
  // deopt 94 [i20, i22, r44]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(94, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L78_:;
  // m10 = ld m
  Rsh_Fir_reg_m10_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L79() else D25()
  // L79()
  goto L79_;

D25_:;
  // deopt 97 [i20, i22, m10]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_m10_;
  Rsh_Fir_deopt(97, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L79_:;
  // m11 = force? m10
  Rsh_Fir_reg_m11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m10_);
  // checkMissing(m11)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_m11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(m11)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_m11_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // if c16 then L81() else L82(i20, i22, m11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L81()
    goto L81_;
  } else {
  // L82(i20, i22, m11)
    Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i20_;
    Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i22_;
    Rsh_Fir_reg_m13_ = Rsh_Fir_reg_m11_;
    goto L82_;
  }

L80_:;
  // c17 = `is.object`(dx23)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if c17 then L84() else L85(i39, i40, dx23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L84()
    goto L84_;
  } else {
  // L85(i39, i40, dx23)
    Rsh_Fir_reg_i43_ = Rsh_Fir_reg_i39_;
    Rsh_Fir_reg_i44_ = Rsh_Fir_reg_i40_;
    Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx23_;
    goto L85_;
  }

L81_:;
  // dr18 = tryDispatchBuiltin.1("$", m11)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_m11_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args106);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // if dc9 then L83() else L82(i20, i22, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L83()
    goto L83_;
  } else {
  // L82(i20, i22, dr18)
    Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i20_;
    Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i22_;
    Rsh_Fir_reg_m13_ = Rsh_Fir_reg_dr18_;
    goto L82_;
  }

L82_:;
  // r45 = `$`(m13, <sym Host>)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_m13_;
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // goto L80(i35, i36, r45)
  // L80(i35, i36, r45)
  Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i35_;
  Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i36_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r45_;
  goto L80_;

L83_:;
  // dx22 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // goto L80(i20, i22, dx22)
  // L80(i20, i22, dx22)
  Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i22_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L80_;

L84_:;
  // dr20 = tryDispatchBuiltin.1("[", dx23)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args110);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // if dc10 then L86() else L85(i39, i40, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L86()
    goto L86_;
  } else {
  // L85(i39, i40, dr20)
    Rsh_Fir_reg_i43_ = Rsh_Fir_reg_i39_;
    Rsh_Fir_reg_i44_ = Rsh_Fir_reg_i40_;
    Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dr20_;
    goto L85_;
  }

L85_:;
  // k4 = ld k
  Rsh_Fir_reg_k4_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L87() else D26()
  // L87()
  goto L87_;

L86_:;
  // dx26 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // goto L16(i39, i40, dx26)
  // L16(i39, i40, dx26)
  Rsh_Fir_reg_i47_ = Rsh_Fir_reg_i39_;
  Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i40_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L16_;

D26_:;
  // deopt 100 [i43, i44, dx25, k4]
  SEXP Rsh_Fir_array_deopt_stack21[4];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i43_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_i44_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_array_deopt_stack21[3] = Rsh_Fir_reg_k4_;
  Rsh_Fir_deopt(100, 4, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L87_:;
  // k5 = force? k4
  Rsh_Fir_reg_k5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k4_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r46 = dyn __3(dx25, k5)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_k5_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L16(i43, i44, r46)
  // L16(i43, i44, r46)
  Rsh_Fir_reg_i47_ = Rsh_Fir_reg_i43_;
  Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i44_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r46_;
  goto L16_;

D27_:;
  // deopt 106 [i47, i48, r47]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i47_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_i48_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(106, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L88_:;
  // goto L15(i47, i48, r47)
  // L15(i47, i48, r47)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i47_;
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i48_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r47_;
  goto L15_;

L89_:;
  // z6 = ld z
  Rsh_Fir_reg_z6_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L91() else D28()
  // L91()
  goto L91_;

L90_:;
  // r48 = dyn base5(<sym z>, "</table>", "</dd>")
  SEXP Rsh_Fir_array_args114[3];
  Rsh_Fir_array_args114[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args114[1] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args114[2] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 3, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L18(i20, r48)
  // L18(i20, r48)
  Rsh_Fir_reg_i51_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L18_;

D28_:;
  // deopt 113 [i20, z6]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_z6_;
  Rsh_Fir_deopt(113, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L91_:;
  // z7 = force? z6
  Rsh_Fir_reg_z7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z6_);
  // checkMissing(z7)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_z7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // c19 = ldf c in base
  Rsh_Fir_reg_c19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r50 = dyn c19(z7, "</table>", "</dd>")
  SEXP Rsh_Fir_array_args116[3];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_z7_;
  Rsh_Fir_array_args116[1] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args116[2] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c19_, 3, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L92() else D29()
  // L92()
  goto L92_;

D29_:;
  // deopt 118 [i20, r50]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(118, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L92_:;
  // goto L18(i20, r50)
  // L18(i20, r50)
  Rsh_Fir_reg_i51_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L18_;

L93_:;
  // z8 = ld z
  Rsh_Fir_reg_z8_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L95() else D30()
  // L95()
  goto L95_;

L94_:;
  // r51 = dyn base6(<sym z>, "</dl>")
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args117[1] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L20(r51)
  // L20(r51)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L20_;

D30_:;
  // deopt 125 [z8]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_z8_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L95_:;
  // z9 = force? z8
  Rsh_Fir_reg_z9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z8_);
  // checkMissing(z9)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_z9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // c20 = ldf c in base
  Rsh_Fir_reg_c20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r53 = dyn c20(z9, "</dl>")
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_z9_;
  Rsh_Fir_array_args119[1] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c20_, 2, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L96() else D31()
  // L96()
  goto L96_;

D31_:;
  // deopt 129 [r53]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(129, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L96_:;
  // goto L20(r53)
  // L20(r53)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r53_;
  goto L20_;

D32_:;
  // deopt 132 []
  Rsh_Fir_deopt(132, 0, NULL, CCP, RHO);
  return R_NilValue;

L97_:;
  // p8 = prom<V +>{
  //   foot1 = ld foot;
  //   foot2 = force? foot1;
  //   checkMissing(foot2);
  //   return foot2;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1515340230_8, CCP, RHO);
  // r55 = dyn file_exists1(p8)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_exists1_, 1, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L98() else D33()
  // L98()
  goto L98_;

D33_:;
  // deopt 134 [r55]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L98_:;
  // c21 = `as.logical`(r55)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // if c21 then L99() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L99()
    goto L99_;
  } else {
  // L21()
    goto L21_;
  }

L99_:;
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args123);
  // if guard7 then L100() else L101()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L100()
    goto L100_;
  } else {
  // L101()
    goto L101_;
  }

L100_:;
  // z10 = ld z
  Rsh_Fir_reg_z10_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L102() else D34()
  // L102()
  goto L102_;

L101_:;
  // r56 = dyn base7(<sym z>, <lang readLines(foot)>)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args124[1] = Rsh_const(CCP, 61);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L22(r56)
  // L22(r56)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L22_;

D34_:;
  // deopt 137 [z10]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_z10_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L102_:;
  // z11 = force? z10
  Rsh_Fir_reg_z11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z10_);
  // checkMissing(z11)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_z11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // readLines1 = ldf readLines
  Rsh_Fir_reg_readLines1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L103() else D35()
  // L103()
  goto L103_;

D35_:;
  // deopt 140 []
  Rsh_Fir_deopt(140, 0, NULL, CCP, RHO);
  return R_NilValue;

L103_:;
  // p9 = prom<V +>{
  //   foot3 = ld foot;
  //   foot4 = force? foot3;
  //   checkMissing(foot4);
  //   return foot4;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1515340230_9, CCP, RHO);
  // r59 = dyn readLines1(p9)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readLines1_, 1, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L104() else D36()
  // L104()
  goto L104_;

D36_:;
  // deopt 142 [r59]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(142, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L104_:;
  // c22 = ldf c in base
  Rsh_Fir_reg_c22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r60 = dyn c22(z11, r59)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_z11_;
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c22_, 2, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L105() else D37()
  // L105()
  goto L105_;

D37_:;
  // deopt 144 [r60]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(144, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L105_:;
  // goto L22(r60)
  // L22(r60)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r60_;
  goto L22_;

D38_:;
  // deopt 148 [file1]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_file1_;
  Rsh_Fir_deopt(148, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L107_:;
  // file2 = force? file1
  Rsh_Fir_reg_file2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file1_);
  // checkMissing(file2)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_file2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty()));
  // r62 = `!=`(file2, "")
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_file2_;
  Rsh_Fir_array_args130[1] = Rsh_const(CCP, 62);
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // c23 = `as.logical`(r62)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // if c23 then L108() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L108()
    goto L108_;
  } else {
  // L24()
    goto L24_;
  }

L108_:;
  // writeLines = ldf writeLines
  Rsh_Fir_reg_writeLines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // check L109() else D39()
  // L109()
  goto L109_;

D39_:;
  // deopt 153 []
  Rsh_Fir_deopt(153, 0, NULL, CCP, RHO);
  return R_NilValue;

L109_:;
  // p10 = prom<V +>{
  //   z12 = ld z;
  //   z13 = force? z12;
  //   checkMissing(z13);
  //   return z13;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1515340230_10, CCP, RHO);
  // p11 = prom<V +>{
  //   file3 = ld file;
  //   file4 = force? file3;
  //   checkMissing(file4);
  //   return file4;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1515340230_11, CCP, RHO);
  // r65 = dyn writeLines(p10, p11)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_writeLines, 2, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L110() else D40()
  // L110()
  goto L110_;

D40_:;
  // deopt 156 [r65]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(156, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L110_:;
  // goto L25()
  // L25()
  goto L25_;

L112_:;
  // z14 = ld z
  Rsh_Fir_reg_z14_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L114() else D41()
  // L114()
  goto L114_;

L113_:;
  // r67 = dyn base8(<sym z>)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L26(r67)
  // L26(r67)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r67_;
  goto L26_;

D41_:;
  // deopt 161 [z14]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_z14_;
  Rsh_Fir_deopt(161, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L114_:;
  // z15 = force? z14
  Rsh_Fir_reg_z15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z14_);
  // checkMissing(z15)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_z15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r69 = dyn invisible(z15)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_z15_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L115() else D42()
  // L115()
  goto L115_;

D42_:;
  // deopt 164 [r69]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(164, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L115_:;
  // goto L26(r69)
  // L26(r69)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r69_;
  goto L26_;
}
SEXP Rsh_Fir_user_promise_inner1515340230_(SEXP CCP, SEXP RHO) {
  // mirrors3 = ld mirrors
  Rsh_Fir_reg_mirrors3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // mirrors4 = force? mirrors3
  Rsh_Fir_reg_mirrors4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mirrors3_);
  // checkMissing(mirrors4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_mirrors4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(mirrors4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_mirrors4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c2 then L1() else L2(mirrors4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L1()
    goto L1_;
  } else {
  // L2(mirrors4)
    Rsh_Fir_reg_mirrors6_ = Rsh_Fir_reg_mirrors4_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", mirrors4)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_mirrors4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args26);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_mirrors6_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r4 = `$`(mirrors6, <sym Host>)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_mirrors6_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r4_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1515340230_1(SEXP CCP, SEXP RHO) {
  // head1 = ld head
  Rsh_Fir_reg_head1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // head2 = force? head1
  Rsh_Fir_reg_head2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_head1_);
  // checkMissing(head2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_head2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return head2
  return Rsh_Fir_reg_head2_;
}
SEXP Rsh_Fir_user_promise_inner1515340230_2(SEXP CCP, SEXP RHO) {
  // head3 = ld head
  Rsh_Fir_reg_head3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // head4 = force? head3
  Rsh_Fir_reg_head4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_head3_);
  // checkMissing(head4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_head4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return head4
  return Rsh_Fir_reg_head4_;
}
SEXP Rsh_Fir_user_promise_inner1515340230_3(SEXP CCP, SEXP RHO) {
  // mirrors7 = ld mirrors
  Rsh_Fir_reg_mirrors7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // mirrors8 = force? mirrors7
  Rsh_Fir_reg_mirrors8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mirrors7_);
  // checkMissing(mirrors8)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_mirrors8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(mirrors8)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_mirrors8_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if c6 then L1() else L2(mirrors8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L1()
    goto L1_;
  } else {
  // L2(mirrors8)
    Rsh_Fir_reg_mirrors10_ = Rsh_Fir_reg_mirrors8_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("$", mirrors8)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_mirrors8_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args46);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_mirrors10_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // r20 = `$`(mirrors10, <sym Country>)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_mirrors10_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r20_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1515340230_4(SEXP CCP, SEXP RHO) {
  // country2 = ld country
  Rsh_Fir_reg_country2_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // country3 = force? country2
  Rsh_Fir_reg_country3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_country2_);
  // checkMissing(country3)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_country3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // return country3
  return Rsh_Fir_reg_country3_;
}
SEXP Rsh_Fir_user_promise_inner1515340230_5(SEXP CCP, SEXP RHO) {
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // return m1
  return Rsh_Fir_reg_m1_;
}
SEXP Rsh_Fir_user_promise_inner1515340230_6(SEXP CCP, SEXP RHO) {
  // m2 = ld m
  Rsh_Fir_reg_m2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // m3 = force? m2
  Rsh_Fir_reg_m3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m2_);
  // checkMissing(m3)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_m3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(m3)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_m3_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if c12 then L2() else L3(m3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L2()
    goto L2_;
  } else {
  // L3(m3)
    Rsh_Fir_reg_m5_ = Rsh_Fir_reg_m3_;
    goto L3_;
  }

L0_:;
  // return dx15
  return Rsh_Fir_reg_dx15_;

L1_:;
  // c13 = `is.object`(dx11)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // if c13 then L5() else L6(dx11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx11)
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
    goto L6_;
  }

L2_:;
  // dr10 = tryDispatchBuiltin.1("$", m3)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_m3_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args83);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if dc5 then L4() else L3(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr10)
    Rsh_Fir_reg_m5_ = Rsh_Fir_reg_dr10_;
    goto L3_;
  }

L3_:;
  // r38 = `$`(m5, <sym URL>)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_m5_;
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // goto L1(r38)
  // L1(r38)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r38_;
  goto L1_;

L4_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // goto L1(dx10)
  // L1(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L1_;

L5_:;
  // dr12 = tryDispatchBuiltin.1("[", dx11)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args87);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if dc6 then L7() else L6(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr12)
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dr12_;
    goto L6_;
  }

L6_:;
  // k = ld k
  Rsh_Fir_reg_k = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // k1 = force? k
  Rsh_Fir_reg_k1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r39 = dyn __1(dx13, k1)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_k1_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r39)
  // L0(r39)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r39_;
  goto L0_;

L7_:;
  // dx14 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // goto L0(dx14)
  // L0(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1515340230_7(SEXP CCP, SEXP RHO) {
  // m6 = ld m
  Rsh_Fir_reg_m6_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // m7 = force? m6
  Rsh_Fir_reg_m7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m6_);
  // checkMissing(m7)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_m7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(m7)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_m7_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // if c14 then L2() else L3(m7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L2()
    goto L2_;
  } else {
  // L3(m7)
    Rsh_Fir_reg_m9_ = Rsh_Fir_reg_m7_;
    goto L3_;
  }

L0_:;
  // return dx21
  return Rsh_Fir_reg_dx21_;

L1_:;
  // c15 = `is.object`(dx17)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if c15 then L5() else L6(dx17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx17)
    Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx17_;
    goto L6_;
  }

L2_:;
  // dr14 = tryDispatchBuiltin.1("$", m7)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_m7_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args94);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // if dc7 then L4() else L3(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr14)
    Rsh_Fir_reg_m9_ = Rsh_Fir_reg_dr14_;
    goto L3_;
  }

L3_:;
  // r41 = `$`(m9, <sym URL>)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_m9_;
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // goto L1(r41)
  // L1(r41)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r41_;
  goto L1_;

L4_:;
  // dx16 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L1(dx16)
  // L1(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L1_;

L5_:;
  // dr16 = tryDispatchBuiltin.1("[", dx17)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args98);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if dc8 then L7() else L6(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr16)
    Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dr16_;
    goto L6_;
  }

L6_:;
  // k2 = ld k
  Rsh_Fir_reg_k2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // k3 = force? k2
  Rsh_Fir_reg_k3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_k2_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r42 = dyn __2(dx19, k3)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_k3_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r42_;
  goto L0_;

L7_:;
  // dx20 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // goto L0(dx20)
  // L0(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1515340230_8(SEXP CCP, SEXP RHO) {
  // foot1 = ld foot
  Rsh_Fir_reg_foot1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // foot2 = force? foot1
  Rsh_Fir_reg_foot2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_foot1_);
  // checkMissing(foot2)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_foot2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // return foot2
  return Rsh_Fir_reg_foot2_;
}
SEXP Rsh_Fir_user_promise_inner1515340230_9(SEXP CCP, SEXP RHO) {
  // foot3 = ld foot
  Rsh_Fir_reg_foot3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // foot4 = force? foot3
  Rsh_Fir_reg_foot4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_foot3_);
  // checkMissing(foot4)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_foot4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // return foot4
  return Rsh_Fir_reg_foot4_;
}
SEXP Rsh_Fir_user_promise_inner1515340230_10(SEXP CCP, SEXP RHO) {
  // z12 = ld z
  Rsh_Fir_reg_z12_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // z13 = force? z12
  Rsh_Fir_reg_z13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z12_);
  // checkMissing(z13)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_z13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty()));
  // return z13
  return Rsh_Fir_reg_z13_;
}
SEXP Rsh_Fir_user_promise_inner1515340230_11(SEXP CCP, SEXP RHO) {
  // file3 = ld file
  Rsh_Fir_reg_file3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // file4 = force? file3
  Rsh_Fir_reg_file4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file3_);
  // checkMissing(file4)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_file4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // return file4
  return Rsh_Fir_reg_file4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
