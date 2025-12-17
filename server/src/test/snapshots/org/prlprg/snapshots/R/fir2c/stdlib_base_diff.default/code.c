#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2057109278_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2057109278_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2057109278_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2057109278_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner2057109278
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2057109278_, RHO, CCP);
  // st `diff.default` = r
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
SEXP Rsh_Fir_user_function_inner2057109278_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2057109278 dynamic dispatch ([x, lag, differences, `...`])

  return Rsh_Fir_user_version_inner2057109278_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2057109278_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2057109278 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner2057109278/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_lag;  // lag
  SEXP Rsh_Fir_reg_differences;  // differences
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_lag_isMissing;  // lag_isMissing
  SEXP Rsh_Fir_reg_lag_orDefault;  // lag_orDefault
  SEXP Rsh_Fir_reg_differences_isMissing;  // differences_isMissing
  SEXP Rsh_Fir_reg_differences_orDefault;  // differences_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_is_matrix;  // is_matrix
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_ismat;  // ismat
  SEXP Rsh_Fir_reg_ismat1_;  // ismat1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_dim;  // dim
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_lag1_;  // lag1
  SEXP Rsh_Fir_reg_lag2_;  // lag2
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_differences1_;  // differences1
  SEXP Rsh_Fir_reg_differences2_;  // differences2
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_lag3_;  // lag3
  SEXP Rsh_Fir_reg_lag4_;  // lag4
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_differences3_;  // differences3
  SEXP Rsh_Fir_reg_differences4_;  // differences4
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_lag5_;  // lag5
  SEXP Rsh_Fir_reg_lag6_;  // lag6
  SEXP Rsh_Fir_reg_differences5_;  // differences5
  SEXP Rsh_Fir_reg_differences6_;  // differences6
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_xlen;  // xlen
  SEXP Rsh_Fir_reg_xlen1_;  // xlen1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_unclass;  // unclass
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_lag7_;  // lag7
  SEXP Rsh_Fir_reg_lag8_;  // lag8
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_ismat2_;  // ismat2
  SEXP Rsh_Fir_reg_ismat3_;  // ismat3
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_differences7_;  // differences7
  SEXP Rsh_Fir_reg_differences8_;  // differences8
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_nrow;  // nrow
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_nrow1_;  // nrow1
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_lag9_;  // lag9
  SEXP Rsh_Fir_reg_lag10_;  // lag10
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_differences9_;  // differences9
  SEXP Rsh_Fir_reg_differences10_;  // differences10
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_i24_;  // i24
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_i25_;  // i25
  SEXP Rsh_Fir_reg_i26_;  // i26
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_i28_;  // i28
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_i30_;  // i30
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_i33_;  // i33
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_i36_;  // i36
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_length4_;  // length4
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_lag11_;  // lag11
  SEXP Rsh_Fir_reg_lag12_;  // lag12
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_oldClass;  // oldClass
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_r105_;  // r105

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_lag = PARAMS[1];
  Rsh_Fir_reg_differences = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // lag_isMissing = missing.0(lag)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_lag;
  Rsh_Fir_reg_lag_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if lag_isMissing then L0(1) else L0(lag)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lag_isMissing)) {
  // L0(1)
    Rsh_Fir_reg_lag_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(lag)
    Rsh_Fir_reg_lag_orDefault = Rsh_Fir_reg_lag;
    goto L0_;
  }

L0_:;
  // st lag = lag_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_lag_orDefault, RHO);
  (void)(Rsh_Fir_reg_lag_orDefault);
  // differences_isMissing = missing.0(differences)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_differences;
  Rsh_Fir_reg_differences_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if differences_isMissing then L1(1) else L1(differences)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_differences_isMissing)) {
  // L1(1)
    Rsh_Fir_reg_differences_orDefault = Rsh_const(CCP, 2);
    goto L1_;
  } else {
  // L1(differences)
    Rsh_Fir_reg_differences_orDefault = Rsh_Fir_reg_differences;
    goto L1_;
  }

L1_:;
  // st differences = differences_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_differences_orDefault, RHO);
  (void)(Rsh_Fir_reg_differences_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `is.matrix`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf `is.matrix` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L2_:;
  // st ismat = r1
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // ismat = ld ismat
  Rsh_Fir_reg_ismat = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L38() else D2()
  // L38()
  goto L38_;

L3_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard2 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L4_:;
  // c1 = `is.object`(r4)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c1 then L44() else L45(r4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L44()
    goto L44_;
  } else {
  // L45(r4)
    Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r4_;
    goto L45_;
  }

L5_:;
  // goto L6(dx1)
  // L6(dx1)
  Rsh_Fir_reg_dx2_ = Rsh_Fir_reg_dx1_;
  goto L6_;

L6_:;
  // st xlen = dx2
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx2_, RHO);
  (void)(Rsh_Fir_reg_dx2_);
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard3 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L7_:;
  // r14 = `!=`(r12, 1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c2 then L8(c2) else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L8(c2)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c2_;
    goto L8_;
  } else {
  // L56()
    goto L56_;
  }

L8_:;
  // c11 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c11 then L10(c11) else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L10(c11)
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c11_;
    goto L10_;
  } else {
  // L62()
    goto L62_;
  }

L9_:;
  // r18 = `!=`(r16, 1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c8 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c9 = `||`(c7, c8)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L8(c9)
  // L8(c9)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c9_;
  goto L8_;

L10_:;
  // c17 = `as.logical`(c12)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c17 then L11(c17) else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L11(c17)
    Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c17_;
    goto L11_;
  } else {
  // L65()
    goto L65_;
  }

L11_:;
  // c23 = `as.logical`(c18)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c23 then L68() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L68()
    goto L68_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // lag5 = ld lag
  Rsh_Fir_reg_lag5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L72() else D15()
  // L72()
  goto L72_;

L14_:;
  // sym5 = ldf unclass
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base5 = ldf unclass in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard5 then L82() else L83()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L82()
    goto L82_;
  } else {
  // L83()
    goto L83_;
  }

L15_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx4
  return Rsh_Fir_reg_dx4_;

L17_:;
  // st r = r29
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // sym6 = ldf seq_len
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base6 = ldf seq_len in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard6 then L86() else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L86()
    goto L86_;
  } else {
  // L87()
    goto L87_;
  }

L18_:;
  // r34 = `-`(<missing>, r32)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // st i1 = r34
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // ismat2 = ld ismat
  Rsh_Fir_reg_ismat2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L89() else D22()
  // L89()
  goto L89_;

L19_:;
  // sym8 = ldf seq_len
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base8 = ldf seq_len in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard8 then L110() else L111()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L110()
    goto L110_;
  } else {
  // L111()
    goto L111_;
  }

L20_:;
  // s = toForSeq(r36)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 15);
  // goto L21(i)
  // L21(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L21_;

L21_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args20);
  // c27 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if c27 then L94() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L94()
    goto L94_;
  } else {
  // L24()
    goto L24_;
  }

L22_:;
  // r43 = ld r
  Rsh_Fir_reg_r43_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L100() else D26()
  // L100()
  goto L100_;

L23_:;
  // r61 = `-`(dx11, dx12)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // st r = r61
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r61_, RHO);
  (void)(Rsh_Fir_reg_r61_);
  // goto L21(i14)
  // L21(i14)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i14_;
  goto L21_;

L24_:;
  // x13 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args23[4];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args23[3] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_x13_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // st i = x13
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_x13_, RHO);
  (void)(Rsh_Fir_reg_x13_);
  // r38 = ld r
  Rsh_Fir_reg_r38_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L95() else D24()
  // L95()
  goto L95_;

L25_:;
  // sym11 = ldf oldClass
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base11 = ldf oldClass in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard11 then L132() else L133()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L132()
    goto L132_;
  } else {
  // L133()
    goto L133_;
  }

L26_:;
  // s1 = toForSeq(r63)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // l1 = length(s1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // i16 = 0
  Rsh_Fir_reg_i16_ = Rsh_const(CCP, 15);
  // goto L27(i16)
  // L27(i16)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i16_;
  goto L27_;

L27_:;
  // i18 = `+`.1(i17, 1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_i18_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args27);
  // c30 = `<`.1(l1, i18)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if c30 then L113() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L113()
    goto L113_;
  } else {
  // L32()
    goto L32_;
  }

L28_:;
  // r70 = ld r
  Rsh_Fir_reg_r70_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L119() else D35()
  // L119()
  goto L119_;

L29_:;
  // r99 = `-`(dx19, dx20)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // st r = r99
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r99_, RHO);
  (void)(Rsh_Fir_reg_r99_);
  // goto L27(i30)
  // L27(i30)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i30_;
  goto L27_;

L30_:;
  // r82 = `-`(<missing>, r78)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_r78_;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // sym10 = ldf length
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base10 = ldf length in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard10 then L127() else L128()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L127()
    goto L127_;
  } else {
  // L128()
    goto L128_;
  }

L31_:;
  // lag11 = ld lag
  Rsh_Fir_reg_lag11_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L131() else D40()
  // L131()
  goto L131_;

L32_:;
  // x14 = `[[`(s1, i18, NULL, TRUE)
  SEXP Rsh_Fir_array_args32[4];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args32[3] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_x14_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // st i = x14
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_x14_, RHO);
  (void)(Rsh_Fir_reg_x14_);
  // r65 = ld r
  Rsh_Fir_reg_r65_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L114() else D33()
  // L114()
  goto L114_;

L33_:;
  // l2 = ld r
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L136() else D43()
  // L136()
  goto L136_;

L34_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L36() else D0()
  // L36()
  goto L36_;

L35_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L36_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn is_matrix(x2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L37() else D1()
  // L37()
  goto L37_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L2_;

D2_:;
  // deopt 7 [ismat]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_ismat;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L38_:;
  // ismat1 = force? ismat
  Rsh_Fir_reg_ismat1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ismat);
  // checkMissing(ismat1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_ismat1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(ismat1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_ismat1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if c then L39() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L39()
    goto L39_;
  } else {
  // L3()
    goto L3_;
  }

L39_:;
  // sym1 = ldf dim
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base1 = ldf dim in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard1 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L40_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L42() else D3()
  // L42()
  goto L42_;

L41_:;
  // r3 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L4(r3)
  // L4(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L4_;

D3_:;
  // deopt 11 [x3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L42_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r5 = dyn dim(x4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L43() else D4()
  // L43()
  goto L43_;

D4_:;
  // deopt 14 [r5]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L4(r5)
  // L4(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L4_;

L44_:;
  // dr = tryDispatchBuiltin.1("[", r4)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args42);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc then L46() else L45(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L46()
    goto L46_;
  } else {
  // L45(dr)
    Rsh_Fir_reg_r7_ = Rsh_Fir_reg_dr;
    goto L45_;
  }

L45_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r8 = dyn __(r7, 1)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r8_;
  goto L5_;

L46_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L5(dx)
  // L5(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L5_;

L48_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L50() else D5()
  // L50()
  goto L50_;

L49_:;
  // r9 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L6(r9)
  // L6(r9)
  Rsh_Fir_reg_dx2_ = Rsh_Fir_reg_r9_;
  goto L6_;

D5_:;
  // deopt 20 [x5]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L50_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r10 = dyn length(x6)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L51() else D6()
  // L51()
  goto L51_;

D6_:;
  // deopt 23 [r10]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L6(r10)
  // L6(r10)
  Rsh_Fir_reg_dx2_ = Rsh_Fir_reg_r10_;
  goto L6_;

L52_:;
  // lag1 = ld lag
  Rsh_Fir_reg_lag1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L54() else D7()
  // L54()
  goto L54_;

L53_:;
  // r11 = dyn base3(<sym lag>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L7(r11)
  // L7(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L7_;

D7_:;
  // deopt 27 [lag1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_lag1_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L54_:;
  // lag2 = force? lag1
  Rsh_Fir_reg_lag2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag1_);
  // checkMissing(lag2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_lag2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r13 = dyn length1(lag2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_lag2_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L55() else D8()
  // L55()
  goto L55_;

D8_:;
  // deopt 30 [r13]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L55_:;
  // goto L7(r13)
  // L7(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L7_;

L56_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard4 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L57_:;
  // differences1 = ld differences
  Rsh_Fir_reg_differences1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L59() else D9()
  // L59()
  goto L59_;

L58_:;
  // r15 = dyn base4(<sym differences>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L9(c2, r15)
  // L9(c2, r15)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L9_;

D9_:;
  // deopt 35 [c2, differences1]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_differences1_;
  Rsh_Fir_deopt(35, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L59_:;
  // differences2 = force? differences1
  Rsh_Fir_reg_differences2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_differences1_);
  // checkMissing(differences2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_differences2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r17 = dyn length2(differences2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_differences2_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L60() else D10()
  // L60()
  goto L60_;

D10_:;
  // deopt 38 [c2, r17]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L60_:;
  // goto L9(c2, r17)
  // L9(c2, r17)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L9_;

L62_:;
  // lag3 = ld lag
  Rsh_Fir_reg_lag3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L63() else D11()
  // L63()
  goto L63_;

D11_:;
  // deopt 42 [c11, lag3]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_lag3_;
  Rsh_Fir_deopt(42, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L63_:;
  // lag4 = force? lag3
  Rsh_Fir_reg_lag4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag3_);
  // checkMissing(lag4)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_lag4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // r19 = `<`(lag4, 1)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_lag4_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // c14 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // c15 = `||`(c11, c14)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L10(c15)
  // L10(c15)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c15_;
  goto L10_;

L65_:;
  // differences3 = ld differences
  Rsh_Fir_reg_differences3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L66() else D12()
  // L66()
  goto L66_;

D12_:;
  // deopt 47 [c17, differences3]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_differences3_;
  Rsh_Fir_deopt(47, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L66_:;
  // differences4 = force? differences3
  Rsh_Fir_reg_differences4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_differences3_);
  // checkMissing(differences4)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_differences4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // r20 = `<`(differences4, 1)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_differences4_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // c20 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // c21 = `||`(c17, c20)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L11(c21)
  // L11(c21)
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c21_;
  goto L11_;

L68_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L69() else D13()
  // L69()
  goto L69_;

D13_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L69_:;
  // r21 = dyn stop("'lag' and 'differences' must be integers >= 1")
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L70() else D14()
  // L70()
  goto L70_;

D14_:;
  // deopt 55 [r21]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L70_:;
  // goto L13()
  // L13()
  goto L13_;

D15_:;
  // deopt 58 [lag5]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_lag5_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L72_:;
  // lag6 = force? lag5
  Rsh_Fir_reg_lag6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag5_);
  // checkMissing(lag6)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_lag6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // differences5 = ld differences
  Rsh_Fir_reg_differences5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L73() else D16()
  // L73()
  goto L73_;

D16_:;
  // deopt 59 [lag6, differences5]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_lag6_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_differences5_;
  Rsh_Fir_deopt(59, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L73_:;
  // differences6 = force? differences5
  Rsh_Fir_reg_differences6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_differences5_);
  // checkMissing(differences6)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_differences6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // r23 = `*`(lag6, differences6)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_lag6_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_differences6_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // xlen = ld xlen
  Rsh_Fir_reg_xlen = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L74() else D17()
  // L74()
  goto L74_;

D17_:;
  // deopt 61 [r23, xlen]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_xlen;
  Rsh_Fir_deopt(61, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L74_:;
  // xlen1 = force? xlen
  Rsh_Fir_reg_xlen1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xlen);
  // checkMissing(xlen1)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_xlen1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // r24 = `>=`(r23, xlen1)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_xlen1_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // c24 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if c24 then L75() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L75()
    goto L75_;
  } else {
  // L14()
    goto L14_;
  }

L75_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L76() else D18()
  // L76()
  goto L76_;

D18_:;
  // deopt 64 [x7]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L76_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(x8)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if c25 then L77() else L78(x8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L77()
    goto L77_;
  } else {
  // L78(x8)
    Rsh_Fir_reg_x10_ = Rsh_Fir_reg_x8_;
    goto L78_;
  }

L77_:;
  // dr2 = tryDispatchBuiltin.1("[", x8)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_x8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args73);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc1 then L79() else L78(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L79()
    goto L79_;
  } else {
  // L78(dr2)
    Rsh_Fir_reg_x10_ = Rsh_Fir_reg_dr2_;
    goto L78_;
  }

L78_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r25 = dyn __1(x10, 0)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L15(r25)
  // L15(r25)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r25_;
  goto L15_;

L79_:;
  // dx3 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L15(dx3)
  // L15(dx3)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L15_;

L82_:;
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L84() else D19()
  // L84()
  goto L84_;

L83_:;
  // r28 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L17(r28)
  // L17(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L17_;

D19_:;
  // deopt 74 [x11]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L84_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // unclass = ldf unclass in base
  Rsh_Fir_reg_unclass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r30 = dyn unclass(x12)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L85() else D20()
  // L85()
  goto L85_;

D20_:;
  // deopt 77 [r30]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L85_:;
  // goto L17(r30)
  // L17(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L17_;

L86_:;
  // lag7 = ld lag
  Rsh_Fir_reg_lag7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L88() else D21()
  // L88()
  goto L88_;

L87_:;
  // r31 = dyn base6(<sym lag>)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L18(r31)
  // L18(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L18_;

D21_:;
  // deopt 80 [lag7]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_lag7_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L88_:;
  // lag8 = force? lag7
  Rsh_Fir_reg_lag8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag7_);
  // checkMissing(lag8)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_lag8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // r33 = seq_len(lag8)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_lag8_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // goto L18(r33)
  // L18(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L18_;

D22_:;
  // deopt 85 [ismat2]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_ismat2_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L89_:;
  // ismat3 = force? ismat2
  Rsh_Fir_reg_ismat3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ismat2_);
  // checkMissing(ismat3)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_ismat3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // c26 = `as.logical`(ismat3)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_ismat3_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if c26 then L90() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L90()
    goto L90_;
  } else {
  // L19()
    goto L19_;
  }

L90_:;
  // sym7 = ldf seq_len
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base7 = ldf seq_len in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args85);
  // if guard7 then L91() else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L91()
    goto L91_;
  } else {
  // L92()
    goto L92_;
  }

L91_:;
  // differences7 = ld differences
  Rsh_Fir_reg_differences7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L93() else D23()
  // L93()
  goto L93_;

L92_:;
  // r35 = dyn base7(<sym differences>)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L20(r35)
  // L20(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L20_;

D23_:;
  // deopt 88 [differences7]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_differences7_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L93_:;
  // differences8 = force? differences7
  Rsh_Fir_reg_differences8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_differences7_);
  // checkMissing(differences8)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_differences8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // r37 = seq_len(differences8)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_differences8_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // goto L20(r37)
  // L20(r37)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L20_;

L94_:;
  // goto L25()
  // L25()
  goto L25_;

D24_:;
  // deopt 91 [i2, r38]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(91, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L95_:;
  // r39 = force? r38
  Rsh_Fir_reg_r39_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r38_);
  // checkMissing(r39)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_r39_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // c28 = `is.object`(r39)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // if c28 then L96() else L97(i2, r39)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L96()
    goto L96_;
  } else {
  // L97(i2, r39)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r39_;
    goto L97_;
  }

L96_:;
  // dr4 = tryDispatchBuiltin.1("[", r39)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args91);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // if dc2 then L98() else L97(i2, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L98()
    goto L98_;
  } else {
  // L97(i2, dr4)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r41_ = Rsh_Fir_reg_dr4_;
    goto L97_;
  }

L97_:;
  // i9 = ld i1
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L99() else D25()
  // L99()
  goto L99_;

L98_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // goto L22(i2, dx5)
  // L22(i2, dx5)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L22_;

D25_:;
  // deopt 93 [i6, r41, i9]
  SEXP Rsh_Fir_array_deopt_stack24[3];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(93, 3, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L99_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r42 = dyn __2(r39, i10, <missing>, FALSE)
  SEXP Rsh_Fir_array_args94[4];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_args94[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args94[3] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names17[4];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 4, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L22(i6, r42)
  // L22(i6, r42)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r42_;
  goto L22_;

D26_:;
  // deopt 99 [i8, dx6, r43]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_dx6_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(99, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L100_:;
  // r44 = force? r43
  Rsh_Fir_reg_r44_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r43_);
  // checkMissing(r44)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_r44_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // c29 = `is.object`(r44)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // if c29 then L101() else L102(i8, dx6, r44)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L101()
    goto L101_;
  } else {
  // L102(i8, dx6, r44)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx6_;
    Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r44_;
    goto L102_;
  }

L101_:;
  // dr6 = tryDispatchBuiltin.1("[", r44)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args97);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // if dc3 then L103() else L102(i8, dx6, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L103()
    goto L103_;
  } else {
  // L102(i8, dx6, dr6)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx6_;
    Rsh_Fir_reg_r46_ = Rsh_Fir_reg_dr6_;
    goto L102_;
  }

L102_:;
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L104() else D27()
  // L104()
  goto L104_;

L103_:;
  // dx10 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // goto L23(i8, dx6, dx10)
  // L23(i8, dx6, dx10)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx6_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx10_;
  goto L23_;

D27_:;
  // deopt 102 [i12, dx8, r46]
  SEXP Rsh_Fir_array_deopt_stack26[3];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_array_deopt_stack26[2] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(102, 3, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L104_:;
  // p = prom<V +>{
  //   r47 = ld r;
  //   r48 = force? r47;
  //   checkMissing(r48);
  //   return r48;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2057109278_, CCP, RHO);
  // r50 = dyn nrow(p)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L105() else D28()
  // L105()
  goto L105_;

D28_:;
  // deopt 104 [i12, dx8, r46, r50]
  SEXP Rsh_Fir_array_deopt_stack27[4];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_deopt_stack27[3] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(104, 4, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L105_:;
  // r51 = `-`(<missing>, r50)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // nrow1 = ldf nrow
  Rsh_Fir_reg_nrow1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L106() else D29()
  // L106()
  goto L106_;

D29_:;
  // deopt 106 [i12, dx8, r46, r51]
  SEXP Rsh_Fir_array_deopt_stack28[4];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_deopt_stack28[3] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(106, 4, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L106_:;
  // p1 = prom<V +>{
  //   r52 = ld r;
  //   r53 = force? r52;
  //   checkMissing(r53);
  //   return r53;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2057109278_1, CCP, RHO);
  // r55 = dyn nrow1(p1)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow1_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L107() else D30()
  // L107()
  goto L107_;

D30_:;
  // deopt 108 [i12, dx8, r46, r51, r55]
  SEXP Rsh_Fir_array_deopt_stack29[5];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_deopt_stack29[3] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_deopt_stack29[4] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(108, 5, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L107_:;
  // lag9 = ld lag
  Rsh_Fir_reg_lag9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L108() else D31()
  // L108()
  goto L108_;

D31_:;
  // deopt 108 [i12, dx8, r46, r51, r55, lag9]
  SEXP Rsh_Fir_array_deopt_stack30[6];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_deopt_stack30[3] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_deopt_stack30[4] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_deopt_stack30[5] = Rsh_Fir_reg_lag9_;
  Rsh_Fir_deopt(108, 6, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L108_:;
  // lag10 = force? lag9
  Rsh_Fir_reg_lag10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag9_);
  // checkMissing(lag10)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_lag10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // r56 = `-`(r55, lag10)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_lag10_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // r57 = `+`(r56, 1)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // r58 = `-`(<missing>, r57)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // r59 = `:`(r51, r58)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r60 = dyn __3(r44, r59, <missing>, FALSE)
  SEXP Rsh_Fir_array_args110[4];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_args110[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args110[3] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names20[4];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_array_arg_names20[3] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 4, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L23(i12, dx8, r60)
  // L23(i12, dx8, r60)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx8_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r60_;
  goto L23_;

L110_:;
  // differences9 = ld differences
  Rsh_Fir_reg_differences9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L112() else D32()
  // L112()
  goto L112_;

L111_:;
  // r62 = dyn base8(<sym differences>)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L26(r62)
  // L26(r62)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r62_;
  goto L26_;

D32_:;
  // deopt 126 [differences9]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_differences9_;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L112_:;
  // differences10 = force? differences9
  Rsh_Fir_reg_differences10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_differences9_);
  // checkMissing(differences10)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_differences10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // r64 = seq_len(differences10)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_differences10_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // goto L26(r64)
  // L26(r64)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r64_;
  goto L26_;

L113_:;
  // goto L25()
  // L25()
  goto L25_;

D33_:;
  // deopt 129 [i18, r65]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(129, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L114_:;
  // r66 = force? r65
  Rsh_Fir_reg_r66_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r65_);
  // checkMissing(r66)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_r66_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(r66)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // if c31 then L115() else L116(i18, r66)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L115()
    goto L115_;
  } else {
  // L116(i18, r66)
    Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i18_;
    Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r66_;
    goto L116_;
  }

L115_:;
  // dr8 = tryDispatchBuiltin.1("[", r66)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args116);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // if dc4 then L117() else L116(i18, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L117()
    goto L117_;
  } else {
  // L116(i18, dr8)
    Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i18_;
    Rsh_Fir_reg_r68_ = Rsh_Fir_reg_dr8_;
    goto L116_;
  }

L116_:;
  // i25 = ld i1
  Rsh_Fir_reg_i25_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L118() else D34()
  // L118()
  goto L118_;

L117_:;
  // dx13 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // goto L28(i18, dx13)
  // L28(i18, dx13)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx13_;
  goto L28_;

D34_:;
  // deopt 131 [i22, r68, i25]
  SEXP Rsh_Fir_array_deopt_stack33[3];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_i25_;
  Rsh_Fir_deopt(131, 3, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L118_:;
  // i26 = force? i25
  Rsh_Fir_reg_i26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i25_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r69 = dyn __4(r68, i26)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_i26_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L28(i22, r69)
  // L28(i22, r69)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i22_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_r69_;
  goto L28_;

D35_:;
  // deopt 133 [i24, dx14, r70]
  SEXP Rsh_Fir_array_deopt_stack34[3];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_i24_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_dx14_;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_Fir_reg_r70_;
  Rsh_Fir_deopt(133, 3, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L119_:;
  // r71 = force? r70
  Rsh_Fir_reg_r71_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r70_);
  // checkMissing(r71)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_r71_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // c32 = `is.object`(r71)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if c32 then L120() else L121(i24, dx14, r71)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L120()
    goto L120_;
  } else {
  // L121(i24, dx14, r71)
    Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i24_;
    Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx14_;
    Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r71_;
    goto L121_;
  }

L120_:;
  // dr10 = tryDispatchBuiltin.1("[", r71)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_r71_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args122);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // if dc5 then L122() else L121(i24, dx14, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L122()
    goto L122_;
  } else {
  // L121(i24, dx14, dr10)
    Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i24_;
    Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx14_;
    Rsh_Fir_reg_r73_ = Rsh_Fir_reg_dr10_;
    goto L121_;
  }

L121_:;
  // sym9 = ldf length
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base9 = ldf length in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args124);
  // if guard9 then L123() else L124()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L123()
    goto L123_;
  } else {
  // L124()
    goto L124_;
  }

L122_:;
  // dx18 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // goto L29(i24, dx14, dx18)
  // L29(i24, dx14, dx18)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i24_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx14_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx18_;
  goto L29_;

L123_:;
  // r79 = ld r
  Rsh_Fir_reg_r79_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L125() else D36()
  // L125()
  goto L125_;

L124_:;
  // r76 = dyn base9(<sym r>)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L30(i28, dx16, r73, r76)
  // L30(i28, dx16, r73, r76)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i28_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx16_;
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r73_;
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r76_;
  goto L30_;

D36_:;
  // deopt 137 [i28, dx16, r73, r79]
  SEXP Rsh_Fir_array_deopt_stack35[4];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i28_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_r73_;
  Rsh_Fir_array_deopt_stack35[3] = Rsh_Fir_reg_r79_;
  Rsh_Fir_deopt(137, 4, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L125_:;
  // r80 = force? r79
  Rsh_Fir_reg_r80_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r79_);
  // checkMissing(r80)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_r80_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r81 = dyn length3(r80)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L126() else D37()
  // L126()
  goto L126_;

D37_:;
  // deopt 140 [i28, dx16, r73, r81]
  SEXP Rsh_Fir_array_deopt_stack36[4];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_i28_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_array_deopt_stack36[2] = Rsh_Fir_reg_r73_;
  Rsh_Fir_array_deopt_stack36[3] = Rsh_Fir_reg_r81_;
  Rsh_Fir_deopt(140, 4, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L126_:;
  // goto L30(i28, dx16, r73, r81)
  // L30(i28, dx16, r73, r81)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i28_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx16_;
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r73_;
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r81_;
  goto L30_;

L127_:;
  // r91 = ld r
  Rsh_Fir_reg_r91_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L129() else D38()
  // L129()
  goto L129_;

L128_:;
  // r87 = dyn base10(<sym r>)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L31(i33, dx23, r77, r82, r87)
  // L31(i33, dx23, r77, r82, r87)
  Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i33_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx23_;
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r77_;
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r87_;
  goto L31_;

D38_:;
  // deopt 143 [i33, dx23, r77, r82, r91]
  SEXP Rsh_Fir_array_deopt_stack37[5];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_i33_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_r77_;
  Rsh_Fir_array_deopt_stack37[3] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_deopt_stack37[4] = Rsh_Fir_reg_r91_;
  Rsh_Fir_deopt(143, 5, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L129_:;
  // r92 = force? r91
  Rsh_Fir_reg_r92_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r91_);
  // checkMissing(r92)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_r92_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r93 = dyn length4(r92)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L130() else D39()
  // L130()
  goto L130_;

D39_:;
  // deopt 146 [i33, dx23, r77, r82, r93]
  SEXP Rsh_Fir_array_deopt_stack38[5];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_i33_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_deopt_stack38[2] = Rsh_Fir_reg_r77_;
  Rsh_Fir_array_deopt_stack38[3] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_deopt_stack38[4] = Rsh_Fir_reg_r93_;
  Rsh_Fir_deopt(146, 5, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L130_:;
  // goto L31(i33, dx23, r77, r82, r93)
  // L31(i33, dx23, r77, r82, r93)
  Rsh_Fir_reg_i36_ = Rsh_Fir_reg_i33_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx23_;
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r77_;
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r93_;
  goto L31_;

D40_:;
  // deopt 146 [i36, dx26, r88, r89, r90, lag11]
  SEXP Rsh_Fir_array_deopt_stack39[6];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_i36_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_dx26_;
  Rsh_Fir_array_deopt_stack39[2] = Rsh_Fir_reg_r88_;
  Rsh_Fir_array_deopt_stack39[3] = Rsh_Fir_reg_r89_;
  Rsh_Fir_array_deopt_stack39[4] = Rsh_Fir_reg_r90_;
  Rsh_Fir_array_deopt_stack39[5] = Rsh_Fir_reg_lag11_;
  Rsh_Fir_deopt(146, 6, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L131_:;
  // lag12 = force? lag11
  Rsh_Fir_reg_lag12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lag11_);
  // checkMissing(lag12)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_lag12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty()));
  // r94 = `-`(r90, lag12)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_lag12_;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // r95 = `+`(r94, 1)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_array_args134[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // r96 = `-`(<missing>, r95)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_r95_;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // r97 = `:`(r89, r96)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r98 = dyn __5(r88, r97)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L29(i36, dx26, r98)
  // L29(i36, dx26, r98)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i36_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx26_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_r98_;
  goto L29_;

L132_:;
  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L134() else D41()
  // L134()
  goto L134_;

L133_:;
  // r100 = dyn base11(<sym x>)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L33(r100)
  // L33(r100)
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r100_;
  goto L33_;

D41_:;
  // deopt 161 [x15]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_x15_;
  Rsh_Fir_deopt(161, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L134_:;
  // x16 = force? x15
  Rsh_Fir_reg_x16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_x16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // oldClass = ldf oldClass in base
  Rsh_Fir_reg_oldClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r102 = dyn oldClass(x16)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_oldClass, 1, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L135() else D42()
  // L135()
  goto L135_;

D42_:;
  // deopt 164 [r102]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_deopt(164, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L135_:;
  // goto L33(r102)
  // L33(r102)
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r102_;
  goto L33_;

D43_:;
  // deopt 166 [r101, l2, r101]
  SEXP Rsh_Fir_array_deopt_stack42[3];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_r101_;
  Rsh_Fir_deopt(166, 3, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L136_:;
  // r103 = dyn class__(l2, NULL, r101)
  SEXP Rsh_Fir_array_args141[3];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args141[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args141[2] = Rsh_Fir_reg_r101_;
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L137() else D44()
  // L137()
  goto L137_;

D44_:;
  // deopt 168 [r101, r103]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_r103_;
  Rsh_Fir_deopt(168, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L137_:;
  // st r = r103
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r103_, RHO);
  (void)(Rsh_Fir_reg_r103_);
  // r104 = ld r
  Rsh_Fir_reg_r104_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L138() else D45()
  // L138()
  goto L138_;

D45_:;
  // deopt 170 [r104]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r104_;
  Rsh_Fir_deopt(170, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L138_:;
  // r105 = force? r104
  Rsh_Fir_reg_r105_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r104_);
  // checkMissing(r105)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_r105_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r105
  return Rsh_Fir_reg_r105_;
}
SEXP Rsh_Fir_user_promise_inner2057109278_(SEXP CCP, SEXP RHO) {
  // r47 = ld r
  Rsh_Fir_reg_r47_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // r48 = force? r47
  Rsh_Fir_reg_r48_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r47_);
  // checkMissing(r48)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_r48_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // return r48
  return Rsh_Fir_reg_r48_;
}
SEXP Rsh_Fir_user_promise_inner2057109278_1(SEXP CCP, SEXP RHO) {
  // r52 = ld r
  Rsh_Fir_reg_r52_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // r53 = force? r52
  Rsh_Fir_reg_r53_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r52_);
  // checkMissing(r53)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_r53_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty()));
  // return r53
  return Rsh_Fir_reg_r53_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
