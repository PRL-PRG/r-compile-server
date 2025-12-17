#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3182225035_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3182225035_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3182225035_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3182225035_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3182225035_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3182225035_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3182225035_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3182225035_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3182225035_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3182225035_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3182225035_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3182225035_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3182225035_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3182225035_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3182225035_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3182225035_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3182225035_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3182225035_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3182225035_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3182225035_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3182225035_18(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3182225035_19(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner2680913962_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2680913962_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner3182225035
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3182225035_, RHO, CCP);
  // st `seq.default` = r
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
SEXP Rsh_Fir_user_function_inner3182225035_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3182225035 dynamic dispatch ([from, to, by, `length.out`, `along.with`, `...`])

  return Rsh_Fir_user_version_inner3182225035_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3182225035_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3182225035 version 0 (*, *, *, *, *, dots -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner3182225035/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_from;  // from
  SEXP Rsh_Fir_reg_to;  // to
  SEXP Rsh_Fir_reg_by;  // by
  SEXP Rsh_Fir_reg_length_out;  // length_out
  SEXP Rsh_Fir_reg_along_with;  // along_with
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_from_isMissing;  // from_isMissing
  SEXP Rsh_Fir_reg_from_orDefault;  // from_orDefault
  SEXP Rsh_Fir_reg_to_isMissing;  // to_isMissing
  SEXP Rsh_Fir_reg_to_orDefault;  // to_orDefault
  SEXP Rsh_Fir_reg_by_isMissing;  // by_isMissing
  SEXP Rsh_Fir_reg_by_orDefault;  // by_orDefault
  SEXP Rsh_Fir_reg_to1_;  // to1
  SEXP Rsh_Fir_reg_to2_;  // to2
  SEXP Rsh_Fir_reg_from1_;  // from1
  SEXP Rsh_Fir_reg_from2_;  // from2
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_length_out1_;  // length_out1
  SEXP Rsh_Fir_reg_length_out2_;  // length_out2
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_length_out_isMissing;  // length_out_isMissing
  SEXP Rsh_Fir_reg_length_out_orDefault;  // length_out_orDefault
  SEXP Rsh_Fir_reg_along_with_isMissing;  // along_with_isMissing
  SEXP Rsh_Fir_reg_along_with_orDefault;  // along_with_orDefault
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_nargs;  // nargs
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_from3_;  // from3
  SEXP Rsh_Fir_reg_from4_;  // from4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_mode;  // mode
  SEXP Rsh_Fir_reg_from5_;  // from5
  SEXP Rsh_Fir_reg_from6_;  // from6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_lf;  // lf
  SEXP Rsh_Fir_reg_lf1_;  // lf1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_from7_;  // from7
  SEXP Rsh_Fir_reg_from8_;  // from8
  SEXP Rsh_Fir_reg_is_finite;  // is_finite
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_from9_;  // from9
  SEXP Rsh_Fir_reg_from10_;  // from10
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_lf2_;  // lf2
  SEXP Rsh_Fir_reg_lf3_;  // lf3
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_lf4_;  // lf4
  SEXP Rsh_Fir_reg_lf5_;  // lf5
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_integer;  // integer
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_missing1_;  // missing1
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_along_with1_;  // along_with1
  SEXP Rsh_Fir_reg_along_with2_;  // along_with2
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_One;  // One
  SEXP Rsh_Fir_reg_One1_;  // One1
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_length_out3_;  // length_out3
  SEXP Rsh_Fir_reg_length_out4_;  // length_out4
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_length_out5_;  // length_out5
  SEXP Rsh_Fir_reg_length_out6_;  // length_out6
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_integer1_;  // integer1
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_length_out7_;  // length_out7
  SEXP Rsh_Fir_reg_length_out8_;  // length_out8
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_missing2_;  // missing2
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_length_out9_;  // length_out9
  SEXP Rsh_Fir_reg_length_out10_;  // length_out10
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_len;  // len
  SEXP Rsh_Fir_reg_len1_;  // len1
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_len2_;  // len2
  SEXP Rsh_Fir_reg_len3_;  // len3
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_length_out11_;  // length_out11
  SEXP Rsh_Fir_reg_length_out12_;  // length_out12
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_length_out14_;  // length_out14
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_is_logint;  // is_logint
  SEXP Rsh_Fir_reg_length_out15_;  // length_out15
  SEXP Rsh_Fir_reg_length_out16_;  // length_out16
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_length_out17_;  // length_out17
  SEXP Rsh_Fir_reg_length_out18_;  // length_out18
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_as_numeric;  // as_numeric
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_chkDots;  // chkDots
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_missing3_;  // missing3
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_from11_;  // from11
  SEXP Rsh_Fir_reg_from12_;  // from12
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_missing4_;  // missing4
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_to3_;  // to3
  SEXP Rsh_Fir_reg_to4_;  // to4
  SEXP Rsh_Fir_reg_length4_;  // length4
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_stop3_;  // stop3
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_missing5_;  // missing5
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_c48_;  // c48
  SEXP Rsh_Fir_reg_c50_;  // c50
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_c53_;  // c53
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_sym18_;  // sym18
  SEXP Rsh_Fir_reg_base18_;  // base18
  SEXP Rsh_Fir_reg_guard18_;  // guard18
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_c56_;  // c56
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_from13_;  // from13
  SEXP Rsh_Fir_reg_from14_;  // from14
  SEXP Rsh_Fir_reg_c57_;  // c57
  SEXP Rsh_Fir_reg_c58_;  // c58
  SEXP Rsh_Fir_reg_sym19_;  // sym19
  SEXP Rsh_Fir_reg_base19_;  // base19
  SEXP Rsh_Fir_reg_guard19_;  // guard19
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_c63_;  // c63
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_from15_;  // from15
  SEXP Rsh_Fir_reg_from16_;  // from16
  SEXP Rsh_Fir_reg_as_numeric1_;  // as_numeric1
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_c64_;  // c64
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_from17_;  // from17
  SEXP Rsh_Fir_reg_from18_;  // from18
  SEXP Rsh_Fir_reg_is_finite1_;  // is_finite1
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_c65_;  // c65
  SEXP Rsh_Fir_reg_c66_;  // c66
  SEXP Rsh_Fir_reg_c68_;  // c68
  SEXP Rsh_Fir_reg_stop4_;  // stop4
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg_sym20_;  // sym20
  SEXP Rsh_Fir_reg_base20_;  // base20
  SEXP Rsh_Fir_reg_guard20_;  // guard20
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_r110_;  // r110
  SEXP Rsh_Fir_reg_missing6_;  // missing6
  SEXP Rsh_Fir_reg_r111_;  // r111
  SEXP Rsh_Fir_reg_r112_;  // r112
  SEXP Rsh_Fir_reg_c69_;  // c69
  SEXP Rsh_Fir_reg_c71_;  // c71
  SEXP Rsh_Fir_reg_sym21_;  // sym21
  SEXP Rsh_Fir_reg_base21_;  // base21
  SEXP Rsh_Fir_reg_guard21_;  // guard21
  SEXP Rsh_Fir_reg_r113_;  // r113
  SEXP Rsh_Fir_reg_c74_;  // c74
  SEXP Rsh_Fir_reg_r114_;  // r114
  SEXP Rsh_Fir_reg_sym22_;  // sym22
  SEXP Rsh_Fir_reg_base22_;  // base22
  SEXP Rsh_Fir_reg_guard22_;  // guard22
  SEXP Rsh_Fir_reg_r115_;  // r115
  SEXP Rsh_Fir_reg_c77_;  // c77
  SEXP Rsh_Fir_reg_r116_;  // r116
  SEXP Rsh_Fir_reg_to5_;  // to5
  SEXP Rsh_Fir_reg_to6_;  // to6
  SEXP Rsh_Fir_reg_c78_;  // c78
  SEXP Rsh_Fir_reg_c79_;  // c79
  SEXP Rsh_Fir_reg_sym23_;  // sym23
  SEXP Rsh_Fir_reg_base23_;  // base23
  SEXP Rsh_Fir_reg_guard23_;  // guard23
  SEXP Rsh_Fir_reg_r117_;  // r117
  SEXP Rsh_Fir_reg_c84_;  // c84
  SEXP Rsh_Fir_reg_r118_;  // r118
  SEXP Rsh_Fir_reg_to7_;  // to7
  SEXP Rsh_Fir_reg_to8_;  // to8
  SEXP Rsh_Fir_reg_as_numeric2_;  // as_numeric2
  SEXP Rsh_Fir_reg_r119_;  // r119
  SEXP Rsh_Fir_reg_c85_;  // c85
  SEXP Rsh_Fir_reg_r120_;  // r120
  SEXP Rsh_Fir_reg_to9_;  // to9
  SEXP Rsh_Fir_reg_to10_;  // to10
  SEXP Rsh_Fir_reg_is_finite2_;  // is_finite2
  SEXP Rsh_Fir_reg_r121_;  // r121
  SEXP Rsh_Fir_reg_r122_;  // r122
  SEXP Rsh_Fir_reg_c86_;  // c86
  SEXP Rsh_Fir_reg_c87_;  // c87
  SEXP Rsh_Fir_reg_c89_;  // c89
  SEXP Rsh_Fir_reg_stop5_;  // stop5
  SEXP Rsh_Fir_reg_r123_;  // r123
  SEXP Rsh_Fir_reg_sym24_;  // sym24
  SEXP Rsh_Fir_reg_base24_;  // base24
  SEXP Rsh_Fir_reg_guard24_;  // guard24
  SEXP Rsh_Fir_reg_r125_;  // r125
  SEXP Rsh_Fir_reg_r126_;  // r126
  SEXP Rsh_Fir_reg_length_out19_;  // length_out19
  SEXP Rsh_Fir_reg_length_out20_;  // length_out20
  SEXP Rsh_Fir_reg_c90_;  // c90
  SEXP Rsh_Fir_reg_c91_;  // c91
  SEXP Rsh_Fir_reg_sym25_;  // sym25
  SEXP Rsh_Fir_reg_base25_;  // base25
  SEXP Rsh_Fir_reg_guard25_;  // guard25
  SEXP Rsh_Fir_reg_r127_;  // r127
  SEXP Rsh_Fir_reg_r128_;  // r128
  SEXP Rsh_Fir_reg_missing7_;  // missing7
  SEXP Rsh_Fir_reg_r129_;  // r129
  SEXP Rsh_Fir_reg_c92_;  // c92
  SEXP Rsh_Fir_reg_from19_;  // from19
  SEXP Rsh_Fir_reg_from20_;  // from20
  SEXP Rsh_Fir_reg_to11_;  // to11
  SEXP Rsh_Fir_reg_to12_;  // to12
  SEXP Rsh_Fir_reg_r130_;  // r130
  SEXP Rsh_Fir_reg_is_logint1_;  // is_logint1
  SEXP Rsh_Fir_reg_from21_;  // from21
  SEXP Rsh_Fir_reg_from22_;  // from22
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r132_;  // r132
  SEXP Rsh_Fir_reg_c93_;  // c93
  SEXP Rsh_Fir_reg_c95_;  // c95
  SEXP Rsh_Fir_reg_is_logint2_;  // is_logint2
  SEXP Rsh_Fir_reg_to13_;  // to13
  SEXP Rsh_Fir_reg_to14_;  // to14
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r134_;  // r134
  SEXP Rsh_Fir_reg_c96_;  // c96
  SEXP Rsh_Fir_reg_c97_;  // c97
  SEXP Rsh_Fir_reg_to15_;  // to15
  SEXP Rsh_Fir_reg_to16_;  // to16
  SEXP Rsh_Fir_reg_int;  // int
  SEXP Rsh_Fir_reg_int1_;  // int1
  SEXP Rsh_Fir_reg_c99_;  // c99
  SEXP Rsh_Fir_reg_sym26_;  // sym26
  SEXP Rsh_Fir_reg_base26_;  // base26
  SEXP Rsh_Fir_reg_guard26_;  // guard26
  SEXP Rsh_Fir_reg_r135_;  // r135
  SEXP Rsh_Fir_reg_to21_;  // to21
  SEXP Rsh_Fir_reg_r136_;  // r136
  SEXP Rsh_Fir_reg_from23_;  // from23
  SEXP Rsh_Fir_reg_from24_;  // from24
  SEXP Rsh_Fir_reg_as_double;  // as_double
  SEXP Rsh_Fir_reg_r137_;  // r137
  SEXP Rsh_Fir_reg_to22_;  // to22
  SEXP Rsh_Fir_reg_r138_;  // r138
  SEXP Rsh_Fir_reg_from25_;  // from25
  SEXP Rsh_Fir_reg_from26_;  // from26
  SEXP Rsh_Fir_reg_r139_;  // r139
  SEXP Rsh_Fir_reg_del;  // del
  SEXP Rsh_Fir_reg_del1_;  // del1
  SEXP Rsh_Fir_reg_r140_;  // r140
  SEXP Rsh_Fir_reg_c100_;  // c100
  SEXP Rsh_Fir_reg_c102_;  // c102
  SEXP Rsh_Fir_reg_to23_;  // to23
  SEXP Rsh_Fir_reg_to24_;  // to24
  SEXP Rsh_Fir_reg_r141_;  // r141
  SEXP Rsh_Fir_reg_c103_;  // c103
  SEXP Rsh_Fir_reg_c104_;  // c104
  SEXP Rsh_Fir_reg_c106_;  // c106
  SEXP Rsh_Fir_reg_to25_;  // to25
  SEXP Rsh_Fir_reg_to26_;  // to26
  SEXP Rsh_Fir_reg_sym27_;  // sym27
  SEXP Rsh_Fir_reg_base27_;  // base27
  SEXP Rsh_Fir_reg_guard27_;  // guard27
  SEXP Rsh_Fir_reg_r144_;  // r144
  SEXP Rsh_Fir_reg_r145_;  // r145
  SEXP Rsh_Fir_reg_by1_;  // by1
  SEXP Rsh_Fir_reg_by2_;  // by2
  SEXP Rsh_Fir_reg_length5_;  // length5
  SEXP Rsh_Fir_reg_r146_;  // r146
  SEXP Rsh_Fir_reg_r147_;  // r147
  SEXP Rsh_Fir_reg_c107_;  // c107
  SEXP Rsh_Fir_reg_stop6_;  // stop6
  SEXP Rsh_Fir_reg_r148_;  // r148
  SEXP Rsh_Fir_reg_is_logint3_;  // is_logint3
  SEXP Rsh_Fir_reg_by3_;  // by3
  SEXP Rsh_Fir_reg_by4_;  // by4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r151_;  // r151
  SEXP Rsh_Fir_reg_r152_;  // r152
  SEXP Rsh_Fir_reg_c108_;  // c108
  SEXP Rsh_Fir_reg_int2_;  // int2
  SEXP Rsh_Fir_reg_int3_;  // int3
  SEXP Rsh_Fir_reg_r154_;  // r154
  SEXP Rsh_Fir_reg_c109_;  // c109
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_storage_mode__;  // storage_mode__
  SEXP Rsh_Fir_reg_r155_;  // r155
  SEXP Rsh_Fir_reg_sym28_;  // sym28
  SEXP Rsh_Fir_reg_base28_;  // base28
  SEXP Rsh_Fir_reg_guard28_;  // guard28
  SEXP Rsh_Fir_reg_r156_;  // r156
  SEXP Rsh_Fir_reg_r157_;  // r157
  SEXP Rsh_Fir_reg_del2_;  // del2
  SEXP Rsh_Fir_reg_del3_;  // del3
  SEXP Rsh_Fir_reg_is_finite3_;  // is_finite3
  SEXP Rsh_Fir_reg_r158_;  // r158
  SEXP Rsh_Fir_reg_c110_;  // c110
  SEXP Rsh_Fir_reg_del4_;  // del4
  SEXP Rsh_Fir_reg_del5_;  // del5
  SEXP Rsh_Fir_reg_by5_;  // by5
  SEXP Rsh_Fir_reg_by6_;  // by6
  SEXP Rsh_Fir_reg_r159_;  // r159
  SEXP Rsh_Fir_reg_r160_;  // r160
  SEXP Rsh_Fir_reg_to27_;  // to27
  SEXP Rsh_Fir_reg_to28_;  // to28
  SEXP Rsh_Fir_reg_by7_;  // by7
  SEXP Rsh_Fir_reg_by8_;  // by8
  SEXP Rsh_Fir_reg_r161_;  // r161
  SEXP Rsh_Fir_reg_from27_;  // from27
  SEXP Rsh_Fir_reg_from28_;  // from28
  SEXP Rsh_Fir_reg_by9_;  // by9
  SEXP Rsh_Fir_reg_by10_;  // by10
  SEXP Rsh_Fir_reg_r162_;  // r162
  SEXP Rsh_Fir_reg_r163_;  // r163
  SEXP Rsh_Fir_reg_sym29_;  // sym29
  SEXP Rsh_Fir_reg_base29_;  // base29
  SEXP Rsh_Fir_reg_guard29_;  // guard29
  SEXP Rsh_Fir_reg_r164_;  // r164
  SEXP Rsh_Fir_reg_r165_;  // r165
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_is_finite4_;  // is_finite4
  SEXP Rsh_Fir_reg_r166_;  // r166
  SEXP Rsh_Fir_reg_r167_;  // r167
  SEXP Rsh_Fir_reg_c111_;  // c111
  SEXP Rsh_Fir_reg_sym30_;  // sym30
  SEXP Rsh_Fir_reg_base30_;  // base30
  SEXP Rsh_Fir_reg_guard30_;  // guard30
  SEXP Rsh_Fir_reg_r168_;  // r168
  SEXP Rsh_Fir_reg_r169_;  // r169
  SEXP Rsh_Fir_reg_by11_;  // by11
  SEXP Rsh_Fir_reg_by12_;  // by12
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r170_;  // r170
  SEXP Rsh_Fir_reg_r171_;  // r171
  SEXP Rsh_Fir_reg_c112_;  // c112
  SEXP Rsh_Fir_reg_c114_;  // c114
  SEXP Rsh_Fir_reg_by13_;  // by13
  SEXP Rsh_Fir_reg_by14_;  // by14
  SEXP Rsh_Fir_reg_r172_;  // r172
  SEXP Rsh_Fir_reg_c115_;  // c115
  SEXP Rsh_Fir_reg_c116_;  // c116
  SEXP Rsh_Fir_reg_c118_;  // c118
  SEXP Rsh_Fir_reg_c120_;  // c120
  SEXP Rsh_Fir_reg_del6_;  // del6
  SEXP Rsh_Fir_reg_del7_;  // del7
  SEXP Rsh_Fir_reg_r173_;  // r173
  SEXP Rsh_Fir_reg_c121_;  // c121
  SEXP Rsh_Fir_reg_c122_;  // c122
  SEXP Rsh_Fir_reg_c124_;  // c124
  SEXP Rsh_Fir_reg_from29_;  // from29
  SEXP Rsh_Fir_reg_from30_;  // from30
  SEXP Rsh_Fir_reg_stop7_;  // stop7
  SEXP Rsh_Fir_reg_r176_;  // r176
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_r178_;  // r178
  SEXP Rsh_Fir_reg_c125_;  // c125
  SEXP Rsh_Fir_reg_stop8_;  // stop8
  SEXP Rsh_Fir_reg_r179_;  // r179
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg__Machine;  // _Machine
  SEXP Rsh_Fir_reg__Machine1_;  // _Machine1
  SEXP Rsh_Fir_reg_c126_;  // c126
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg__Machine3_;  // _Machine3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_n9_;  // n9
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_r181_;  // r181
  SEXP Rsh_Fir_reg_r182_;  // r182
  SEXP Rsh_Fir_reg_c127_;  // c127
  SEXP Rsh_Fir_reg_stop9_;  // stop9
  SEXP Rsh_Fir_reg_r183_;  // r183
  SEXP Rsh_Fir_reg_finite_del;  // finite_del
  SEXP Rsh_Fir_reg_finite_del1_;  // finite_del1
  SEXP Rsh_Fir_reg_c128_;  // c128
  SEXP Rsh_Fir_reg_c130_;  // c130
  SEXP Rsh_Fir_reg_sym31_;  // sym31
  SEXP Rsh_Fir_reg_base31_;  // base31
  SEXP Rsh_Fir_reg_guard31_;  // guard31
  SEXP Rsh_Fir_reg_r185_;  // r185
  SEXP Rsh_Fir_reg_c133_;  // c133
  SEXP Rsh_Fir_reg_r186_;  // r186
  SEXP Rsh_Fir_reg_del8_;  // del8
  SEXP Rsh_Fir_reg_del9_;  // del9
  SEXP Rsh_Fir_reg_abs;  // abs
  SEXP Rsh_Fir_reg_r187_;  // r187
  SEXP Rsh_Fir_reg_sym32_;  // sym32
  SEXP Rsh_Fir_reg_base32_;  // base32
  SEXP Rsh_Fir_reg_guard32_;  // guard32
  SEXP Rsh_Fir_reg_r190_;  // r190
  SEXP Rsh_Fir_reg_c136_;  // c136
  SEXP Rsh_Fir_reg_r191_;  // r191
  SEXP Rsh_Fir_reg_r192_;  // r192
  SEXP Rsh_Fir_reg_sym33_;  // sym33
  SEXP Rsh_Fir_reg_base33_;  // base33
  SEXP Rsh_Fir_reg_guard33_;  // guard33
  SEXP Rsh_Fir_reg_r195_;  // r195
  SEXP Rsh_Fir_reg_c139_;  // c139
  SEXP Rsh_Fir_reg_r196_;  // r196
  SEXP Rsh_Fir_reg_r197_;  // r197
  SEXP Rsh_Fir_reg_to29_;  // to29
  SEXP Rsh_Fir_reg_to30_;  // to30
  SEXP Rsh_Fir_reg_abs1_;  // abs1
  SEXP Rsh_Fir_reg_r198_;  // r198
  SEXP Rsh_Fir_reg_sym34_;  // sym34
  SEXP Rsh_Fir_reg_base34_;  // base34
  SEXP Rsh_Fir_reg_guard34_;  // guard34
  SEXP Rsh_Fir_reg_r201_;  // r201
  SEXP Rsh_Fir_reg_c142_;  // c142
  SEXP Rsh_Fir_reg_r202_;  // r202
  SEXP Rsh_Fir_reg_r203_;  // r203
  SEXP Rsh_Fir_reg_from31_;  // from31
  SEXP Rsh_Fir_reg_from32_;  // from32
  SEXP Rsh_Fir_reg_abs2_;  // abs2
  SEXP Rsh_Fir_reg_r204_;  // r204
  SEXP Rsh_Fir_reg_max;  // max
  SEXP Rsh_Fir_reg_r205_;  // r205
  SEXP Rsh_Fir_reg_r206_;  // r206
  SEXP Rsh_Fir_reg__Machine4_;  // _Machine4
  SEXP Rsh_Fir_reg__Machine5_;  // _Machine5
  SEXP Rsh_Fir_reg_c143_;  // c143
  SEXP Rsh_Fir_reg_c145_;  // c145
  SEXP Rsh_Fir_reg_r209_;  // r209
  SEXP Rsh_Fir_reg_r210_;  // r210
  SEXP Rsh_Fir_reg__Machine7_;  // _Machine7
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_c147_;  // c147
  SEXP Rsh_Fir_reg_r213_;  // r213
  SEXP Rsh_Fir_reg_r214_;  // r214
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r215_;  // r215
  SEXP Rsh_Fir_reg_r216_;  // r216
  SEXP Rsh_Fir_reg_r217_;  // r217
  SEXP Rsh_Fir_reg_c148_;  // c148
  SEXP Rsh_Fir_reg_c149_;  // c149
  SEXP Rsh_Fir_reg_c151_;  // c151
  SEXP Rsh_Fir_reg_from33_;  // from33
  SEXP Rsh_Fir_reg_from34_;  // from34
  SEXP Rsh_Fir_reg_int4_;  // int4
  SEXP Rsh_Fir_reg_int5_;  // int5
  SEXP Rsh_Fir_reg_c152_;  // c152
  SEXP Rsh_Fir_reg_sym35_;  // sym35
  SEXP Rsh_Fir_reg_base35_;  // base35
  SEXP Rsh_Fir_reg_guard35_;  // guard35
  SEXP Rsh_Fir_reg_r220_;  // r220
  SEXP Rsh_Fir_reg_r221_;  // r221
  SEXP Rsh_Fir_reg_n10_;  // n10
  SEXP Rsh_Fir_reg_n11_;  // n11
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r222_;  // r222
  SEXP Rsh_Fir_reg_n12_;  // n12
  SEXP Rsh_Fir_reg_n13_;  // n13
  SEXP Rsh_Fir_reg_r223_;  // r223
  SEXP Rsh_Fir_reg_c153_;  // c153
  SEXP Rsh_Fir_reg_sym36_;  // sym36
  SEXP Rsh_Fir_reg_base36_;  // base36
  SEXP Rsh_Fir_reg_guard36_;  // guard36
  SEXP Rsh_Fir_reg_r224_;  // r224
  SEXP Rsh_Fir_reg_r225_;  // r225
  SEXP Rsh_Fir_reg_sym37_;  // sym37
  SEXP Rsh_Fir_reg_base37_;  // base37
  SEXP Rsh_Fir_reg_guard37_;  // guard37
  SEXP Rsh_Fir_reg_r226_;  // r226
  SEXP Rsh_Fir_reg_r227_;  // r227
  SEXP Rsh_Fir_reg_sym38_;  // sym38
  SEXP Rsh_Fir_reg_base38_;  // base38
  SEXP Rsh_Fir_reg_guard38_;  // guard38
  SEXP Rsh_Fir_reg_r228_;  // r228
  SEXP Rsh_Fir_reg_r229_;  // r229
  SEXP Rsh_Fir_reg_from35_;  // from35
  SEXP Rsh_Fir_reg_from36_;  // from36
  SEXP Rsh_Fir_reg_by15_;  // by15
  SEXP Rsh_Fir_reg_by16_;  // by16
  SEXP Rsh_Fir_reg_c154_;  // c154
  SEXP Rsh_Fir_reg_r230_;  // r230
  SEXP Rsh_Fir_reg_sym39_;  // sym39
  SEXP Rsh_Fir_reg_base39_;  // base39
  SEXP Rsh_Fir_reg_guard39_;  // guard39
  SEXP Rsh_Fir_reg_r231_;  // r231
  SEXP Rsh_Fir_reg_r232_;  // r232
  SEXP Rsh_Fir_reg_n14_;  // n14
  SEXP Rsh_Fir_reg_n15_;  // n15
  SEXP Rsh_Fir_reg_c155_;  // c155
  SEXP Rsh_Fir_reg_r233_;  // r233
  SEXP Rsh_Fir_reg_rep_int;  // rep_int
  SEXP Rsh_Fir_reg_r234_;  // r234
  SEXP Rsh_Fir_reg_cumsum;  // cumsum
  SEXP Rsh_Fir_reg_r235_;  // r235
  SEXP Rsh_Fir_reg_from37_;  // from37
  SEXP Rsh_Fir_reg_from38_;  // from38
  SEXP Rsh_Fir_reg_n16_;  // n16
  SEXP Rsh_Fir_reg_n17_;  // n17
  SEXP Rsh_Fir_reg_r236_;  // r236
  SEXP Rsh_Fir_reg_by17_;  // by17
  SEXP Rsh_Fir_reg_by18_;  // by18
  SEXP Rsh_Fir_reg_r237_;  // r237
  SEXP Rsh_Fir_reg_r238_;  // r238
  SEXP Rsh_Fir_reg_sym40_;  // sym40
  SEXP Rsh_Fir_reg_base40_;  // base40
  SEXP Rsh_Fir_reg_guard40_;  // guard40
  SEXP Rsh_Fir_reg_r239_;  // r239
  SEXP Rsh_Fir_reg_r240_;  // r240
  SEXP Rsh_Fir_reg_n18_;  // n18
  SEXP Rsh_Fir_reg_n19_;  // n19
  SEXP Rsh_Fir_reg_r241_;  // r241
  SEXP Rsh_Fir_reg_as_integer1_;  // as_integer1
  SEXP Rsh_Fir_reg_r242_;  // r242
  SEXP Rsh_Fir_reg_finite_del2_;  // finite_del2
  SEXP Rsh_Fir_reg_finite_del3_;  // finite_del3
  SEXP Rsh_Fir_reg_c156_;  // c156
  SEXP Rsh_Fir_reg_from39_;  // from39
  SEXP Rsh_Fir_reg_from40_;  // from40
  SEXP Rsh_Fir_reg_n20_;  // n20
  SEXP Rsh_Fir_reg_n21_;  // n21
  SEXP Rsh_Fir_reg_r243_;  // r243
  SEXP Rsh_Fir_reg_by19_;  // by19
  SEXP Rsh_Fir_reg_by20_;  // by20
  SEXP Rsh_Fir_reg_r244_;  // r244
  SEXP Rsh_Fir_reg_r245_;  // r245
  SEXP Rsh_Fir_reg_r246_;  // r246
  SEXP Rsh_Fir_reg_from41_;  // from41
  SEXP Rsh_Fir_reg_from42_;  // from42
  SEXP Rsh_Fir_reg_r247_;  // r247
  SEXP Rsh_Fir_reg_n22_;  // n22
  SEXP Rsh_Fir_reg_n23_;  // n23
  SEXP Rsh_Fir_reg_r248_;  // r248
  SEXP Rsh_Fir_reg_by21_;  // by21
  SEXP Rsh_Fir_reg_by22_;  // by22
  SEXP Rsh_Fir_reg_r249_;  // r249
  SEXP Rsh_Fir_reg_r250_;  // r250
  SEXP Rsh_Fir_reg_r251_;  // r251
  SEXP Rsh_Fir_reg_r252_;  // r252
  SEXP Rsh_Fir_reg_by23_;  // by23
  SEXP Rsh_Fir_reg_by24_;  // by24
  SEXP Rsh_Fir_reg_r253_;  // r253
  SEXP Rsh_Fir_reg_c157_;  // c157
  SEXP Rsh_Fir_reg_pmin;  // pmin
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_to31_;  // to31
  SEXP Rsh_Fir_reg_to32_;  // to32
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r256_;  // r256
  SEXP Rsh_Fir_reg_pmax;  // pmax
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_to33_;  // to33
  SEXP Rsh_Fir_reg_to34_;  // to34
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r259_;  // r259
  SEXP Rsh_Fir_reg_sym41_;  // sym41
  SEXP Rsh_Fir_reg_base41_;  // base41
  SEXP Rsh_Fir_reg_guard41_;  // guard41
  SEXP Rsh_Fir_reg_r260_;  // r260
  SEXP Rsh_Fir_reg_r261_;  // r261
  SEXP Rsh_Fir_reg_length_out21_;  // length_out21
  SEXP Rsh_Fir_reg_length_out22_;  // length_out22
  SEXP Rsh_Fir_reg_is_finite5_;  // is_finite5
  SEXP Rsh_Fir_reg_r262_;  // r262
  SEXP Rsh_Fir_reg_r263_;  // r263
  SEXP Rsh_Fir_reg_c158_;  // c158
  SEXP Rsh_Fir_reg_c159_;  // c159
  SEXP Rsh_Fir_reg_length_out23_;  // length_out23
  SEXP Rsh_Fir_reg_length_out24_;  // length_out24
  SEXP Rsh_Fir_reg_r264_;  // r264
  SEXP Rsh_Fir_reg_c161_;  // c161
  SEXP Rsh_Fir_reg_c162_;  // c162
  SEXP Rsh_Fir_reg_c164_;  // c164
  SEXP Rsh_Fir_reg_stop10_;  // stop10
  SEXP Rsh_Fir_reg_r265_;  // r265
  SEXP Rsh_Fir_reg_length_out25_;  // length_out25
  SEXP Rsh_Fir_reg_length_out26_;  // length_out26
  SEXP Rsh_Fir_reg_r266_;  // r266
  SEXP Rsh_Fir_reg_c165_;  // c165
  SEXP Rsh_Fir_reg_integer2_;  // integer2
  SEXP Rsh_Fir_reg_r267_;  // r267
  SEXP Rsh_Fir_reg_One2_;  // One2
  SEXP Rsh_Fir_reg_One3_;  // One3
  SEXP Rsh_Fir_reg_c166_;  // c166
  SEXP Rsh_Fir_reg_sym42_;  // sym42
  SEXP Rsh_Fir_reg_base42_;  // base42
  SEXP Rsh_Fir_reg_guard42_;  // guard42
  SEXP Rsh_Fir_reg_r268_;  // r268
  SEXP Rsh_Fir_reg_r269_;  // r269
  SEXP Rsh_Fir_reg_length_out27_;  // length_out27
  SEXP Rsh_Fir_reg_length_out28_;  // length_out28
  SEXP Rsh_Fir_reg_r270_;  // r270
  SEXP Rsh_Fir_reg_sym43_;  // sym43
  SEXP Rsh_Fir_reg_base43_;  // base43
  SEXP Rsh_Fir_reg_guard43_;  // guard43
  SEXP Rsh_Fir_reg_r271_;  // r271
  SEXP Rsh_Fir_reg_r272_;  // r272
  SEXP Rsh_Fir_reg_missing8_;  // missing8
  SEXP Rsh_Fir_reg_r273_;  // r273
  SEXP Rsh_Fir_reg_c167_;  // c167
  SEXP Rsh_Fir_reg_sym44_;  // sym44
  SEXP Rsh_Fir_reg_base44_;  // base44
  SEXP Rsh_Fir_reg_guard44_;  // guard44
  SEXP Rsh_Fir_reg_r274_;  // r274
  SEXP Rsh_Fir_reg_r275_;  // r275
  SEXP Rsh_Fir_reg_missing9_;  // missing9
  SEXP Rsh_Fir_reg_r276_;  // r276
  SEXP Rsh_Fir_reg_c168_;  // c168
  SEXP Rsh_Fir_reg_from43_;  // from43
  SEXP Rsh_Fir_reg_from44_;  // from44
  SEXP Rsh_Fir_reg_length_out29_;  // length_out29
  SEXP Rsh_Fir_reg_length_out30_;  // length_out30
  SEXP Rsh_Fir_reg_r277_;  // r277
  SEXP Rsh_Fir_reg_r278_;  // r278
  SEXP Rsh_Fir_reg_intn1_;  // intn1
  SEXP Rsh_Fir_reg_intn2_;  // intn2
  SEXP Rsh_Fir_reg_c169_;  // c169
  SEXP Rsh_Fir_reg_c171_;  // c171
  SEXP Rsh_Fir_reg_is_logint4_;  // is_logint4
  SEXP Rsh_Fir_reg_from45_;  // from45
  SEXP Rsh_Fir_reg_from46_;  // from46
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r280_;  // r280
  SEXP Rsh_Fir_reg_c172_;  // c172
  SEXP Rsh_Fir_reg_c173_;  // c173
  SEXP Rsh_Fir_reg_c175_;  // c175
  SEXP Rsh_Fir_reg_c177_;  // c177
  SEXP Rsh_Fir_reg_to35_;  // to35
  SEXP Rsh_Fir_reg_to36_;  // to36
  SEXP Rsh_Fir_reg__Machine8_;  // _Machine8
  SEXP Rsh_Fir_reg__Machine9_;  // _Machine9
  SEXP Rsh_Fir_reg_c178_;  // c178
  SEXP Rsh_Fir_reg_c180_;  // c180
  SEXP Rsh_Fir_reg_to38_;  // to38
  SEXP Rsh_Fir_reg__Machine11_;  // _Machine11
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_c182_;  // c182
  SEXP Rsh_Fir_reg_to40_;  // to40
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_r281_;  // r281
  SEXP Rsh_Fir_reg_r282_;  // r282
  SEXP Rsh_Fir_reg_c183_;  // c183
  SEXP Rsh_Fir_reg_c184_;  // c184
  SEXP Rsh_Fir_reg_intdel;  // intdel
  SEXP Rsh_Fir_reg_intdel1_;  // intdel1
  SEXP Rsh_Fir_reg_c186_;  // c186
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_storage_mode__1_;  // storage_mode__1
  SEXP Rsh_Fir_reg_r283_;  // r283
  SEXP Rsh_Fir_reg_r284_;  // r284
  SEXP Rsh_Fir_reg_is_logint5_;  // is_logint5
  SEXP Rsh_Fir_reg_to41_;  // to41
  SEXP Rsh_Fir_reg_to42_;  // to42
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r287_;  // r287
  SEXP Rsh_Fir_reg_sym45_;  // sym45
  SEXP Rsh_Fir_reg_base45_;  // base45
  SEXP Rsh_Fir_reg_guard45_;  // guard45
  SEXP Rsh_Fir_reg_r288_;  // r288
  SEXP Rsh_Fir_reg_r289_;  // r289
  SEXP Rsh_Fir_reg_missing10_;  // missing10
  SEXP Rsh_Fir_reg_r290_;  // r290
  SEXP Rsh_Fir_reg_c187_;  // c187
  SEXP Rsh_Fir_reg_to43_;  // to43
  SEXP Rsh_Fir_reg_to44_;  // to44
  SEXP Rsh_Fir_reg_length_out31_;  // length_out31
  SEXP Rsh_Fir_reg_length_out32_;  // length_out32
  SEXP Rsh_Fir_reg_r291_;  // r291
  SEXP Rsh_Fir_reg_r292_;  // r292
  SEXP Rsh_Fir_reg_intdel2_;  // intdel2
  SEXP Rsh_Fir_reg_intdel3_;  // intdel3
  SEXP Rsh_Fir_reg_c188_;  // c188
  SEXP Rsh_Fir_reg_intn3_;  // intn3
  SEXP Rsh_Fir_reg_intn4_;  // intn4
  SEXP Rsh_Fir_reg_c189_;  // c189
  SEXP Rsh_Fir_reg_c191_;  // c191
  SEXP Rsh_Fir_reg_from47_;  // from47
  SEXP Rsh_Fir_reg_from48_;  // from48
  SEXP Rsh_Fir_reg__Machine12_;  // _Machine12
  SEXP Rsh_Fir_reg__Machine13_;  // _Machine13
  SEXP Rsh_Fir_reg_c192_;  // c192
  SEXP Rsh_Fir_reg_c194_;  // c194
  SEXP Rsh_Fir_reg_from50_;  // from50
  SEXP Rsh_Fir_reg__Machine15_;  // _Machine15
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_c196_;  // c196
  SEXP Rsh_Fir_reg_from52_;  // from52
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_r293_;  // r293
  SEXP Rsh_Fir_reg_r294_;  // r294
  SEXP Rsh_Fir_reg_r295_;  // r295
  SEXP Rsh_Fir_reg_c197_;  // c197
  SEXP Rsh_Fir_reg_c198_;  // c198
  SEXP Rsh_Fir_reg_intdel4_;  // intdel4
  SEXP Rsh_Fir_reg_intdel5_;  // intdel5
  SEXP Rsh_Fir_reg_c200_;  // c200
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_storage_mode__2_;  // storage_mode__2
  SEXP Rsh_Fir_reg_r296_;  // r296
  SEXP Rsh_Fir_reg_r297_;  // r297
  SEXP Rsh_Fir_reg_r298_;  // r298
  SEXP Rsh_Fir_reg_intdel6_;  // intdel6
  SEXP Rsh_Fir_reg_intdel7_;  // intdel7
  SEXP Rsh_Fir_reg_c201_;  // c201
  SEXP Rsh_Fir_reg_is_logint6_;  // is_logint6
  SEXP Rsh_Fir_reg_from53_;  // from53
  SEXP Rsh_Fir_reg_from54_;  // from54
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r301_;  // r301
  SEXP Rsh_Fir_reg_length_out33_;  // length_out33
  SEXP Rsh_Fir_reg_length_out34_;  // length_out34
  SEXP Rsh_Fir_reg_r302_;  // r302
  SEXP Rsh_Fir_reg_c202_;  // c202
  SEXP Rsh_Fir_reg_from55_;  // from55
  SEXP Rsh_Fir_reg_from56_;  // from56
  SEXP Rsh_Fir_reg_to45_;  // to45
  SEXP Rsh_Fir_reg_to46_;  // to46
  SEXP Rsh_Fir_reg_r303_;  // r303
  SEXP Rsh_Fir_reg_c203_;  // c203
  SEXP Rsh_Fir_reg_sym46_;  // sym46
  SEXP Rsh_Fir_reg_base46_;  // base46
  SEXP Rsh_Fir_reg_guard46_;  // guard46
  SEXP Rsh_Fir_reg_r304_;  // r304
  SEXP Rsh_Fir_reg_r305_;  // r305
  SEXP Rsh_Fir_reg_from57_;  // from57
  SEXP Rsh_Fir_reg_from58_;  // from58
  SEXP Rsh_Fir_reg_length_out35_;  // length_out35
  SEXP Rsh_Fir_reg_length_out36_;  // length_out36
  SEXP Rsh_Fir_reg_rep_int1_;  // rep_int1
  SEXP Rsh_Fir_reg_r306_;  // r306
  SEXP Rsh_Fir_reg_length_out37_;  // length_out37
  SEXP Rsh_Fir_reg_length_out38_;  // length_out38
  SEXP Rsh_Fir_reg_r307_;  // r307
  SEXP Rsh_Fir_reg_intdel8_;  // intdel8
  SEXP Rsh_Fir_reg_intdel9_;  // intdel9
  SEXP Rsh_Fir_reg_c204_;  // c204
  SEXP Rsh_Fir_reg_c206_;  // c206
  SEXP Rsh_Fir_reg_intn5_;  // intn5
  SEXP Rsh_Fir_reg_intn6_;  // intn6
  SEXP Rsh_Fir_reg_c207_;  // c207
  SEXP Rsh_Fir_reg_c208_;  // c208
  SEXP Rsh_Fir_reg_c210_;  // c210
  SEXP Rsh_Fir_reg_c212_;  // c212
  SEXP Rsh_Fir_reg_from59_;  // from59
  SEXP Rsh_Fir_reg_from60_;  // from60
  SEXP Rsh_Fir_reg_n24_;  // n24
  SEXP Rsh_Fir_reg_n25_;  // n25
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r308_;  // r308
  SEXP Rsh_Fir_reg_to47_;  // to47
  SEXP Rsh_Fir_reg_to48_;  // to48
  SEXP Rsh_Fir_reg_n26_;  // n26
  SEXP Rsh_Fir_reg_n27_;  // n27
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r309_;  // r309
  SEXP Rsh_Fir_reg_r310_;  // r310
  SEXP Rsh_Fir_reg_c213_;  // c213
  SEXP Rsh_Fir_reg_c214_;  // c214
  SEXP Rsh_Fir_reg_c216_;  // c216
  SEXP Rsh_Fir_reg_to49_;  // to49
  SEXP Rsh_Fir_reg_to50_;  // to50
  SEXP Rsh_Fir_reg_n28_;  // n28
  SEXP Rsh_Fir_reg_n29_;  // n29
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r311_;  // r311
  SEXP Rsh_Fir_reg_from61_;  // from61
  SEXP Rsh_Fir_reg_from62_;  // from62
  SEXP Rsh_Fir_reg_n30_;  // n30
  SEXP Rsh_Fir_reg_n31_;  // n31
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r312_;  // r312
  SEXP Rsh_Fir_reg_r313_;  // r313
  SEXP Rsh_Fir_reg_sym47_;  // sym47
  SEXP Rsh_Fir_reg_base47_;  // base47
  SEXP Rsh_Fir_reg_guard47_;  // guard47
  SEXP Rsh_Fir_reg_r314_;  // r314
  SEXP Rsh_Fir_reg_r315_;  // r315
  SEXP Rsh_Fir_reg_sym48_;  // sym48
  SEXP Rsh_Fir_reg_base48_;  // base48
  SEXP Rsh_Fir_reg_guard48_;  // guard48
  SEXP Rsh_Fir_reg_r316_;  // r316
  SEXP Rsh_Fir_reg_r317_;  // r317
  SEXP Rsh_Fir_reg_sym49_;  // sym49
  SEXP Rsh_Fir_reg_base49_;  // base49
  SEXP Rsh_Fir_reg_guard49_;  // guard49
  SEXP Rsh_Fir_reg_r318_;  // r318
  SEXP Rsh_Fir_reg_r319_;  // r319
  SEXP Rsh_Fir_reg_from63_;  // from63
  SEXP Rsh_Fir_reg_from64_;  // from64
  SEXP Rsh_Fir_reg_by25_;  // by25
  SEXP Rsh_Fir_reg_by26_;  // by26
  SEXP Rsh_Fir_reg_c217_;  // c217
  SEXP Rsh_Fir_reg_r320_;  // r320
  SEXP Rsh_Fir_reg_sym50_;  // sym50
  SEXP Rsh_Fir_reg_base50_;  // base50
  SEXP Rsh_Fir_reg_guard50_;  // guard50
  SEXP Rsh_Fir_reg_r321_;  // r321
  SEXP Rsh_Fir_reg_r322_;  // r322
  SEXP Rsh_Fir_reg_n32_;  // n32
  SEXP Rsh_Fir_reg_n33_;  // n33
  SEXP Rsh_Fir_reg_c218_;  // c218
  SEXP Rsh_Fir_reg_r323_;  // r323
  SEXP Rsh_Fir_reg_rep_int2_;  // rep_int2
  SEXP Rsh_Fir_reg_r324_;  // r324
  SEXP Rsh_Fir_reg_cumsum1_;  // cumsum1
  SEXP Rsh_Fir_reg_r325_;  // r325
  SEXP Rsh_Fir_reg_intdel10_;  // intdel10
  SEXP Rsh_Fir_reg_intdel11_;  // intdel11
  SEXP Rsh_Fir_reg_c219_;  // c219
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_storage_mode__3_;  // storage_mode__3
  SEXP Rsh_Fir_reg_r326_;  // r326
  SEXP Rsh_Fir_reg_to51_;  // to51
  SEXP Rsh_Fir_reg_to52_;  // to52
  SEXP Rsh_Fir_reg_from65_;  // from65
  SEXP Rsh_Fir_reg_from66_;  // from66
  SEXP Rsh_Fir_reg_r328_;  // r328
  SEXP Rsh_Fir_reg_sym51_;  // sym51
  SEXP Rsh_Fir_reg_base51_;  // base51
  SEXP Rsh_Fir_reg_guard51_;  // guard51
  SEXP Rsh_Fir_reg_r329_;  // r329
  SEXP Rsh_Fir_reg_r330_;  // r330
  SEXP Rsh_Fir_reg_del10_;  // del10
  SEXP Rsh_Fir_reg_del11_;  // del11
  SEXP Rsh_Fir_reg_is_finite6_;  // is_finite6
  SEXP Rsh_Fir_reg_r331_;  // r331
  SEXP Rsh_Fir_reg_c220_;  // c220
  SEXP Rsh_Fir_reg_as_vector;  // as_vector
  SEXP Rsh_Fir_reg_sym52_;  // sym52
  SEXP Rsh_Fir_reg_base52_;  // base52
  SEXP Rsh_Fir_reg_guard52_;  // guard52
  SEXP Rsh_Fir_reg_r332_;  // r332
  SEXP Rsh_Fir_reg_r333_;  // r333
  SEXP Rsh_Fir_reg_from67_;  // from67
  SEXP Rsh_Fir_reg_from68_;  // from68
  SEXP Rsh_Fir_reg_from69_;  // from69
  SEXP Rsh_Fir_reg_from70_;  // from70
  SEXP Rsh_Fir_reg_sym53_;  // sym53
  SEXP Rsh_Fir_reg_base53_;  // base53
  SEXP Rsh_Fir_reg_guard53_;  // guard53
  SEXP Rsh_Fir_reg_r334_;  // r334
  SEXP Rsh_Fir_reg_from73_;  // from73
  SEXP Rsh_Fir_reg_r335_;  // r335
  SEXP Rsh_Fir_reg_length_out39_;  // length_out39
  SEXP Rsh_Fir_reg_length_out40_;  // length_out40
  SEXP Rsh_Fir_reg_r336_;  // r336
  SEXP Rsh_Fir_reg_r337_;  // r337
  SEXP Rsh_Fir_reg_del12_;  // del12
  SEXP Rsh_Fir_reg_del13_;  // del13
  SEXP Rsh_Fir_reg_n34_;  // n34
  SEXP Rsh_Fir_reg_n35_;  // n35
  SEXP Rsh_Fir_reg_r338_;  // r338
  SEXP Rsh_Fir_reg_r339_;  // r339
  SEXP Rsh_Fir_reg_r340_;  // r340
  SEXP Rsh_Fir_reg_to53_;  // to53
  SEXP Rsh_Fir_reg_to54_;  // to54
  SEXP Rsh_Fir_reg_c221_;  // c221
  SEXP Rsh_Fir_reg_r341_;  // r341
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r343_;  // r343
  SEXP Rsh_Fir_reg_from74_;  // from74
  SEXP Rsh_Fir_reg_from75_;  // from75
  SEXP Rsh_Fir_reg_r344_;  // r344
  SEXP Rsh_Fir_reg_to55_;  // to55
  SEXP Rsh_Fir_reg_to56_;  // to56
  SEXP Rsh_Fir_reg_r345_;  // r345
  SEXP Rsh_Fir_reg_as_vector1_;  // as_vector1
  SEXP Rsh_Fir_reg_sym54_;  // sym54
  SEXP Rsh_Fir_reg_base54_;  // base54
  SEXP Rsh_Fir_reg_guard54_;  // guard54
  SEXP Rsh_Fir_reg_r346_;  // r346
  SEXP Rsh_Fir_reg_r347_;  // r347
  SEXP Rsh_Fir_reg_from76_;  // from76
  SEXP Rsh_Fir_reg_from77_;  // from77
  SEXP Rsh_Fir_reg_from78_;  // from78
  SEXP Rsh_Fir_reg_from79_;  // from79
  SEXP Rsh_Fir_reg_sym55_;  // sym55
  SEXP Rsh_Fir_reg_base55_;  // base55
  SEXP Rsh_Fir_reg_guard55_;  // guard55
  SEXP Rsh_Fir_reg_r348_;  // r348
  SEXP Rsh_Fir_reg_from82_;  // from82
  SEXP Rsh_Fir_reg_r349_;  // r349
  SEXP Rsh_Fir_reg_length_out41_;  // length_out41
  SEXP Rsh_Fir_reg_length_out42_;  // length_out42
  SEXP Rsh_Fir_reg_r350_;  // r350
  SEXP Rsh_Fir_reg_r351_;  // r351
  SEXP Rsh_Fir_reg_to57_;  // to57
  SEXP Rsh_Fir_reg_to58_;  // to58
  SEXP Rsh_Fir_reg_from83_;  // from83
  SEXP Rsh_Fir_reg_from84_;  // from84
  SEXP Rsh_Fir_reg_r352_;  // r352
  SEXP Rsh_Fir_reg_n36_;  // n36
  SEXP Rsh_Fir_reg_n37_;  // n37
  SEXP Rsh_Fir_reg_r353_;  // r353
  SEXP Rsh_Fir_reg_r354_;  // r354
  SEXP Rsh_Fir_reg_r355_;  // r355
  SEXP Rsh_Fir_reg_to59_;  // to59
  SEXP Rsh_Fir_reg_to60_;  // to60
  SEXP Rsh_Fir_reg_c222_;  // c222
  SEXP Rsh_Fir_reg_r356_;  // r356
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r358_;  // r358
  SEXP Rsh_Fir_reg_r359_;  // r359
  SEXP Rsh_Fir_reg_as_vector2_;  // as_vector2
  SEXP Rsh_Fir_reg_sym56_;  // sym56
  SEXP Rsh_Fir_reg_base56_;  // base56
  SEXP Rsh_Fir_reg_guard56_;  // guard56
  SEXP Rsh_Fir_reg_r360_;  // r360
  SEXP Rsh_Fir_reg_r361_;  // r361
  SEXP Rsh_Fir_reg_from85_;  // from85
  SEXP Rsh_Fir_reg_from86_;  // from86
  SEXP Rsh_Fir_reg_to61_;  // to61
  SEXP Rsh_Fir_reg_to62_;  // to62
  SEXP Rsh_Fir_reg_c223_;  // c223
  SEXP Rsh_Fir_reg_r362_;  // r362
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_r364_;  // r364
  SEXP Rsh_Fir_reg_c224_;  // c224
  SEXP Rsh_Fir_reg_r366_;  // r366
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_sym57_;  // sym57
  SEXP Rsh_Fir_reg_base57_;  // base57
  SEXP Rsh_Fir_reg_guard57_;  // guard57
  SEXP Rsh_Fir_reg_r369_;  // r369
  SEXP Rsh_Fir_reg_r370_;  // r370
  SEXP Rsh_Fir_reg_r371_;  // r371
  SEXP Rsh_Fir_reg_length_out43_;  // length_out43
  SEXP Rsh_Fir_reg_length_out44_;  // length_out44
  SEXP Rsh_Fir_reg_r372_;  // r372
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r373_;  // r373
  SEXP Rsh_Fir_reg_sym58_;  // sym58
  SEXP Rsh_Fir_reg_base58_;  // base58
  SEXP Rsh_Fir_reg_guard58_;  // guard58
  SEXP Rsh_Fir_reg_r374_;  // r374
  SEXP Rsh_Fir_reg_r375_;  // r375
  SEXP Rsh_Fir_reg_missing11_;  // missing11
  SEXP Rsh_Fir_reg_r376_;  // r376
  SEXP Rsh_Fir_reg_c225_;  // c225
  SEXP Rsh_Fir_reg_is_logint7_;  // is_logint7
  SEXP Rsh_Fir_reg_by27_;  // by27
  SEXP Rsh_Fir_reg_by28_;  // by28
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_r378_;  // r378
  SEXP Rsh_Fir_reg_c226_;  // c226
  SEXP Rsh_Fir_reg_c228_;  // c228
  SEXP Rsh_Fir_reg_is_logint8_;  // is_logint8
  SEXP Rsh_Fir_reg_from87_;  // from87
  SEXP Rsh_Fir_reg_from88_;  // from88
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_r380_;  // r380
  SEXP Rsh_Fir_reg_c229_;  // c229
  SEXP Rsh_Fir_reg_c230_;  // c230
  SEXP Rsh_Fir_reg_c232_;  // c232
  SEXP Rsh_Fir_reg_c234_;  // c234
  SEXP Rsh_Fir_reg_sym59_;  // sym59
  SEXP Rsh_Fir_reg_base59_;  // base59
  SEXP Rsh_Fir_reg_guard59_;  // guard59
  SEXP Rsh_Fir_reg_r381_;  // r381
  SEXP Rsh_Fir_reg_c237_;  // c237
  SEXP Rsh_Fir_reg_r382_;  // r382
  SEXP Rsh_Fir_reg_by29_;  // by29
  SEXP Rsh_Fir_reg_by30_;  // by30
  SEXP Rsh_Fir_reg_length6_;  // length6
  SEXP Rsh_Fir_reg_r383_;  // r383
  SEXP Rsh_Fir_reg_r384_;  // r384
  SEXP Rsh_Fir_reg_c238_;  // c238
  SEXP Rsh_Fir_reg_c239_;  // c239
  SEXP Rsh_Fir_reg_c240_;  // c240
  SEXP Rsh_Fir_reg_sym60_;  // sym60
  SEXP Rsh_Fir_reg_base60_;  // base60
  SEXP Rsh_Fir_reg_guard60_;  // guard60
  SEXP Rsh_Fir_reg_r385_;  // r385
  SEXP Rsh_Fir_reg_c247_;  // c247
  SEXP Rsh_Fir_reg_c248_;  // c248
  SEXP Rsh_Fir_reg_r386_;  // r386
  SEXP Rsh_Fir_reg_by31_;  // by31
  SEXP Rsh_Fir_reg_by32_;  // by32
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r387_;  // r387
  SEXP Rsh_Fir_reg_c249_;  // c249
  SEXP Rsh_Fir_reg_c250_;  // c250
  SEXP Rsh_Fir_reg_c253_;  // c253
  SEXP Rsh_Fir_reg_c254_;  // c254
  SEXP Rsh_Fir_reg_c255_;  // c255
  SEXP Rsh_Fir_reg_from89_;  // from89
  SEXP Rsh_Fir_reg_from90_;  // from90
  SEXP Rsh_Fir_reg_length_out45_;  // length_out45
  SEXP Rsh_Fir_reg_length_out46_;  // length_out46
  SEXP Rsh_Fir_reg_r388_;  // r388
  SEXP Rsh_Fir_reg_by33_;  // by33
  SEXP Rsh_Fir_reg_by34_;  // by34
  SEXP Rsh_Fir_reg_r389_;  // r389
  SEXP Rsh_Fir_reg_r390_;  // r390
  SEXP Rsh_Fir_reg__Machine16_;  // _Machine16
  SEXP Rsh_Fir_reg__Machine17_;  // _Machine17
  SEXP Rsh_Fir_reg_c258_;  // c258
  SEXP Rsh_Fir_reg_c261_;  // c261
  SEXP Rsh_Fir_reg_c262_;  // c262
  SEXP Rsh_Fir_reg_r392_;  // r392
  SEXP Rsh_Fir_reg__Machine19_;  // _Machine19
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_c265_;  // c265
  SEXP Rsh_Fir_reg_c266_;  // c266
  SEXP Rsh_Fir_reg_r394_;  // r394
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_r395_;  // r395
  SEXP Rsh_Fir_reg_r396_;  // r396
  SEXP Rsh_Fir_reg_c267_;  // c267
  SEXP Rsh_Fir_reg_c271_;  // c271
  SEXP Rsh_Fir_reg_c272_;  // c272
  SEXP Rsh_Fir_reg_c273_;  // c273
  SEXP Rsh_Fir_reg_to63_;  // to63
  SEXP Rsh_Fir_reg_to64_;  // to64
  SEXP Rsh_Fir_reg__Machine20_;  // _Machine20
  SEXP Rsh_Fir_reg__Machine21_;  // _Machine21
  SEXP Rsh_Fir_reg_c274_;  // c274
  SEXP Rsh_Fir_reg_c278_;  // c278
  SEXP Rsh_Fir_reg_c279_;  // c279
  SEXP Rsh_Fir_reg_c280_;  // c280
  SEXP Rsh_Fir_reg_to66_;  // to66
  SEXP Rsh_Fir_reg__Machine23_;  // _Machine23
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_c284_;  // c284
  SEXP Rsh_Fir_reg_c285_;  // c285
  SEXP Rsh_Fir_reg_c286_;  // c286
  SEXP Rsh_Fir_reg_to68_;  // to68
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_r397_;  // r397
  SEXP Rsh_Fir_reg_r398_;  // r398
  SEXP Rsh_Fir_reg_r399_;  // r399
  SEXP Rsh_Fir_reg_c287_;  // c287
  SEXP Rsh_Fir_reg_c288_;  // c288
  SEXP Rsh_Fir_reg_c292_;  // c292
  SEXP Rsh_Fir_reg_c293_;  // c293
  SEXP Rsh_Fir_reg_c296_;  // c296
  SEXP Rsh_Fir_reg_c297_;  // c297
  SEXP Rsh_Fir_reg_int6_;  // int6
  SEXP Rsh_Fir_reg_int7_;  // int7
  SEXP Rsh_Fir_reg_c299_;  // c299
  SEXP Rsh_Fir_reg_c301_;  // c301
  SEXP Rsh_Fir_reg_length_out47_;  // length_out47
  SEXP Rsh_Fir_reg_length_out48_;  // length_out48
  SEXP Rsh_Fir_reg_r400_;  // r400
  SEXP Rsh_Fir_reg_c302_;  // c302
  SEXP Rsh_Fir_reg_c303_;  // c303
  SEXP Rsh_Fir_reg_c305_;  // c305
  SEXP Rsh_Fir_reg_c307_;  // c307
  SEXP Rsh_Fir_reg_nby;  // nby
  SEXP Rsh_Fir_reg_nby1_;  // nby1
  SEXP Rsh_Fir_reg_r401_;  // r401
  SEXP Rsh_Fir_reg_c308_;  // c308
  SEXP Rsh_Fir_reg_c309_;  // c309
  SEXP Rsh_Fir_reg_c311_;  // c311
  SEXP Rsh_Fir_reg_c313_;  // c313
  SEXP Rsh_Fir_reg_naby;  // naby
  SEXP Rsh_Fir_reg_naby1_;  // naby1
  SEXP Rsh_Fir_reg_r402_;  // r402
  SEXP Rsh_Fir_reg_c314_;  // c314
  SEXP Rsh_Fir_reg_c315_;  // c315
  SEXP Rsh_Fir_reg_c317_;  // c317
  SEXP Rsh_Fir_reg_sym61_;  // sym61
  SEXP Rsh_Fir_reg_base61_;  // base61
  SEXP Rsh_Fir_reg_guard61_;  // guard61
  SEXP Rsh_Fir_reg_r403_;  // r403
  SEXP Rsh_Fir_reg_r404_;  // r404
  SEXP Rsh_Fir_reg_sym62_;  // sym62
  SEXP Rsh_Fir_reg_base62_;  // base62
  SEXP Rsh_Fir_reg_guard62_;  // guard62
  SEXP Rsh_Fir_reg_r405_;  // r405
  SEXP Rsh_Fir_reg_r406_;  // r406
  SEXP Rsh_Fir_reg_sym63_;  // sym63
  SEXP Rsh_Fir_reg_base63_;  // base63
  SEXP Rsh_Fir_reg_guard63_;  // guard63
  SEXP Rsh_Fir_reg_r407_;  // r407
  SEXP Rsh_Fir_reg_r408_;  // r408
  SEXP Rsh_Fir_reg_from91_;  // from91
  SEXP Rsh_Fir_reg_from92_;  // from92
  SEXP Rsh_Fir_reg_by35_;  // by35
  SEXP Rsh_Fir_reg_by36_;  // by36
  SEXP Rsh_Fir_reg_c318_;  // c318
  SEXP Rsh_Fir_reg_r409_;  // r409
  SEXP Rsh_Fir_reg_sym64_;  // sym64
  SEXP Rsh_Fir_reg_base64_;  // base64
  SEXP Rsh_Fir_reg_guard64_;  // guard64
  SEXP Rsh_Fir_reg_r410_;  // r410
  SEXP Rsh_Fir_reg_r411_;  // r411
  SEXP Rsh_Fir_reg_length_out49_;  // length_out49
  SEXP Rsh_Fir_reg_length_out50_;  // length_out50
  SEXP Rsh_Fir_reg_r412_;  // r412
  SEXP Rsh_Fir_reg_c319_;  // c319
  SEXP Rsh_Fir_reg_r413_;  // r413
  SEXP Rsh_Fir_reg_rep_int3_;  // rep_int3
  SEXP Rsh_Fir_reg_r414_;  // r414
  SEXP Rsh_Fir_reg_cumsum2_;  // cumsum2
  SEXP Rsh_Fir_reg_r415_;  // r415
  SEXP Rsh_Fir_reg_intby;  // intby
  SEXP Rsh_Fir_reg_intby1_;  // intby1
  SEXP Rsh_Fir_reg_c320_;  // c320
  SEXP Rsh_Fir_reg_c322_;  // c322
  SEXP Rsh_Fir_reg_int8_;  // int8
  SEXP Rsh_Fir_reg_int9_;  // int9
  SEXP Rsh_Fir_reg_c323_;  // c323
  SEXP Rsh_Fir_reg_c324_;  // c324
  SEXP Rsh_Fir_reg_c325_;  // c325
  SEXP Rsh_Fir_reg_sym65_;  // sym65
  SEXP Rsh_Fir_reg_base65_;  // base65
  SEXP Rsh_Fir_reg_guard65_;  // guard65
  SEXP Rsh_Fir_reg_r416_;  // r416
  SEXP Rsh_Fir_reg_c332_;  // c332
  SEXP Rsh_Fir_reg_c333_;  // c333
  SEXP Rsh_Fir_reg_r417_;  // r417
  SEXP Rsh_Fir_reg_from93_;  // from93
  SEXP Rsh_Fir_reg_from94_;  // from94
  SEXP Rsh_Fir_reg_c334_;  // c334
  SEXP Rsh_Fir_reg_c335_;  // c335
  SEXP Rsh_Fir_reg_c336_;  // c336
  SEXP Rsh_Fir_reg_r418_;  // r418
  SEXP Rsh_Fir_reg_c339_;  // c339
  SEXP Rsh_Fir_reg_c340_;  // c340
  SEXP Rsh_Fir_reg_c342_;  // c342
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_storage_mode__4_;  // storage_mode__4
  SEXP Rsh_Fir_reg_r419_;  // r419
  SEXP Rsh_Fir_reg_from95_;  // from95
  SEXP Rsh_Fir_reg_from96_;  // from96
  SEXP Rsh_Fir_reg_length_out51_;  // length_out51
  SEXP Rsh_Fir_reg_length_out52_;  // length_out52
  SEXP Rsh_Fir_reg_r421_;  // r421
  SEXP Rsh_Fir_reg_r422_;  // r422
  SEXP Rsh_Fir_reg_by37_;  // by37
  SEXP Rsh_Fir_reg_by38_;  // by38
  SEXP Rsh_Fir_reg_r423_;  // r423
  SEXP Rsh_Fir_reg_r424_;  // r424
  SEXP Rsh_Fir_reg_sym66_;  // sym66
  SEXP Rsh_Fir_reg_base66_;  // base66
  SEXP Rsh_Fir_reg_guard66_;  // guard66
  SEXP Rsh_Fir_reg_r425_;  // r425
  SEXP Rsh_Fir_reg_r426_;  // r426
  SEXP Rsh_Fir_reg_missing12_;  // missing12
  SEXP Rsh_Fir_reg_r427_;  // r427
  SEXP Rsh_Fir_reg_c343_;  // c343
  SEXP Rsh_Fir_reg_is_logint9_;  // is_logint9
  SEXP Rsh_Fir_reg_by39_;  // by39
  SEXP Rsh_Fir_reg_by40_;  // by40
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_r429_;  // r429
  SEXP Rsh_Fir_reg_c344_;  // c344
  SEXP Rsh_Fir_reg_c346_;  // c346
  SEXP Rsh_Fir_reg_is_logint10_;  // is_logint10
  SEXP Rsh_Fir_reg_to69_;  // to69
  SEXP Rsh_Fir_reg_to70_;  // to70
  SEXP Rsh_Fir_reg_p19_;  // p19
  SEXP Rsh_Fir_reg_r431_;  // r431
  SEXP Rsh_Fir_reg_c347_;  // c347
  SEXP Rsh_Fir_reg_c348_;  // c348
  SEXP Rsh_Fir_reg_c350_;  // c350
  SEXP Rsh_Fir_reg_c352_;  // c352
  SEXP Rsh_Fir_reg_sym67_;  // sym67
  SEXP Rsh_Fir_reg_base67_;  // base67
  SEXP Rsh_Fir_reg_guard67_;  // guard67
  SEXP Rsh_Fir_reg_r432_;  // r432
  SEXP Rsh_Fir_reg_c355_;  // c355
  SEXP Rsh_Fir_reg_r433_;  // r433
  SEXP Rsh_Fir_reg_by41_;  // by41
  SEXP Rsh_Fir_reg_by42_;  // by42
  SEXP Rsh_Fir_reg_length7_;  // length7
  SEXP Rsh_Fir_reg_r434_;  // r434
  SEXP Rsh_Fir_reg_r435_;  // r435
  SEXP Rsh_Fir_reg_c356_;  // c356
  SEXP Rsh_Fir_reg_c357_;  // c357
  SEXP Rsh_Fir_reg_c358_;  // c358
  SEXP Rsh_Fir_reg_sym68_;  // sym68
  SEXP Rsh_Fir_reg_base68_;  // base68
  SEXP Rsh_Fir_reg_guard68_;  // guard68
  SEXP Rsh_Fir_reg_r436_;  // r436
  SEXP Rsh_Fir_reg_c365_;  // c365
  SEXP Rsh_Fir_reg_c366_;  // c366
  SEXP Rsh_Fir_reg_r437_;  // r437
  SEXP Rsh_Fir_reg_by43_;  // by43
  SEXP Rsh_Fir_reg_by44_;  // by44
  SEXP Rsh_Fir_reg_is_na2_;  // is_na2
  SEXP Rsh_Fir_reg_r438_;  // r438
  SEXP Rsh_Fir_reg_c367_;  // c367
  SEXP Rsh_Fir_reg_c368_;  // c368
  SEXP Rsh_Fir_reg_c371_;  // c371
  SEXP Rsh_Fir_reg_c372_;  // c372
  SEXP Rsh_Fir_reg_c373_;  // c373
  SEXP Rsh_Fir_reg_to71_;  // to71
  SEXP Rsh_Fir_reg_to72_;  // to72
  SEXP Rsh_Fir_reg_length_out53_;  // length_out53
  SEXP Rsh_Fir_reg_length_out54_;  // length_out54
  SEXP Rsh_Fir_reg_r439_;  // r439
  SEXP Rsh_Fir_reg_by45_;  // by45
  SEXP Rsh_Fir_reg_by46_;  // by46
  SEXP Rsh_Fir_reg_r440_;  // r440
  SEXP Rsh_Fir_reg_r441_;  // r441
  SEXP Rsh_Fir_reg__Machine24_;  // _Machine24
  SEXP Rsh_Fir_reg__Machine25_;  // _Machine25
  SEXP Rsh_Fir_reg_c376_;  // c376
  SEXP Rsh_Fir_reg_c379_;  // c379
  SEXP Rsh_Fir_reg_c380_;  // c380
  SEXP Rsh_Fir_reg_r443_;  // r443
  SEXP Rsh_Fir_reg__Machine27_;  // _Machine27
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_c383_;  // c383
  SEXP Rsh_Fir_reg_c384_;  // c384
  SEXP Rsh_Fir_reg_r445_;  // r445
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_r446_;  // r446
  SEXP Rsh_Fir_reg_r447_;  // r447
  SEXP Rsh_Fir_reg_r448_;  // r448
  SEXP Rsh_Fir_reg_c385_;  // c385
  SEXP Rsh_Fir_reg_c389_;  // c389
  SEXP Rsh_Fir_reg_c390_;  // c390
  SEXP Rsh_Fir_reg_c391_;  // c391
  SEXP Rsh_Fir_reg_from97_;  // from97
  SEXP Rsh_Fir_reg_from98_;  // from98
  SEXP Rsh_Fir_reg__Machine28_;  // _Machine28
  SEXP Rsh_Fir_reg__Machine29_;  // _Machine29
  SEXP Rsh_Fir_reg_c392_;  // c392
  SEXP Rsh_Fir_reg_c396_;  // c396
  SEXP Rsh_Fir_reg_c397_;  // c397
  SEXP Rsh_Fir_reg_c398_;  // c398
  SEXP Rsh_Fir_reg_from100_;  // from100
  SEXP Rsh_Fir_reg__Machine31_;  // _Machine31
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_c402_;  // c402
  SEXP Rsh_Fir_reg_c403_;  // c403
  SEXP Rsh_Fir_reg_c404_;  // c404
  SEXP Rsh_Fir_reg_from102_;  // from102
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_r449_;  // r449
  SEXP Rsh_Fir_reg_r450_;  // r450
  SEXP Rsh_Fir_reg_c405_;  // c405
  SEXP Rsh_Fir_reg_c406_;  // c406
  SEXP Rsh_Fir_reg_c410_;  // c410
  SEXP Rsh_Fir_reg_c411_;  // c411
  SEXP Rsh_Fir_reg_c414_;  // c414
  SEXP Rsh_Fir_reg_c415_;  // c415
  SEXP Rsh_Fir_reg_int10_;  // int10
  SEXP Rsh_Fir_reg_int11_;  // int11
  SEXP Rsh_Fir_reg_c417_;  // c417
  SEXP Rsh_Fir_reg_c419_;  // c419
  SEXP Rsh_Fir_reg_length_out55_;  // length_out55
  SEXP Rsh_Fir_reg_length_out56_;  // length_out56
  SEXP Rsh_Fir_reg_r451_;  // r451
  SEXP Rsh_Fir_reg_c420_;  // c420
  SEXP Rsh_Fir_reg_c421_;  // c421
  SEXP Rsh_Fir_reg_c423_;  // c423
  SEXP Rsh_Fir_reg_c425_;  // c425
  SEXP Rsh_Fir_reg_nby2_;  // nby2
  SEXP Rsh_Fir_reg_nby3_;  // nby3
  SEXP Rsh_Fir_reg_r452_;  // r452
  SEXP Rsh_Fir_reg_c426_;  // c426
  SEXP Rsh_Fir_reg_c427_;  // c427
  SEXP Rsh_Fir_reg_c429_;  // c429
  SEXP Rsh_Fir_reg_c431_;  // c431
  SEXP Rsh_Fir_reg_naby2_;  // naby2
  SEXP Rsh_Fir_reg_naby3_;  // naby3
  SEXP Rsh_Fir_reg_r453_;  // r453
  SEXP Rsh_Fir_reg_c432_;  // c432
  SEXP Rsh_Fir_reg_c433_;  // c433
  SEXP Rsh_Fir_reg_c435_;  // c435
  SEXP Rsh_Fir_reg_sym69_;  // sym69
  SEXP Rsh_Fir_reg_base69_;  // base69
  SEXP Rsh_Fir_reg_guard69_;  // guard69
  SEXP Rsh_Fir_reg_r454_;  // r454
  SEXP Rsh_Fir_reg_r455_;  // r455
  SEXP Rsh_Fir_reg_sym70_;  // sym70
  SEXP Rsh_Fir_reg_base70_;  // base70
  SEXP Rsh_Fir_reg_guard70_;  // guard70
  SEXP Rsh_Fir_reg_r456_;  // r456
  SEXP Rsh_Fir_reg_r457_;  // r457
  SEXP Rsh_Fir_reg_sym71_;  // sym71
  SEXP Rsh_Fir_reg_base71_;  // base71
  SEXP Rsh_Fir_reg_guard71_;  // guard71
  SEXP Rsh_Fir_reg_r458_;  // r458
  SEXP Rsh_Fir_reg_r459_;  // r459
  SEXP Rsh_Fir_reg_sym72_;  // sym72
  SEXP Rsh_Fir_reg_base72_;  // base72
  SEXP Rsh_Fir_reg_guard72_;  // guard72
  SEXP Rsh_Fir_reg_r460_;  // r460
  SEXP Rsh_Fir_reg_r461_;  // r461
  SEXP Rsh_Fir_reg_from103_;  // from103
  SEXP Rsh_Fir_reg_from104_;  // from104
  SEXP Rsh_Fir_reg_as_integer2_;  // as_integer2
  SEXP Rsh_Fir_reg_r462_;  // r462
  SEXP Rsh_Fir_reg_by47_;  // by47
  SEXP Rsh_Fir_reg_by48_;  // by48
  SEXP Rsh_Fir_reg_c436_;  // c436
  SEXP Rsh_Fir_reg_r463_;  // r463
  SEXP Rsh_Fir_reg_sym73_;  // sym73
  SEXP Rsh_Fir_reg_base73_;  // base73
  SEXP Rsh_Fir_reg_guard73_;  // guard73
  SEXP Rsh_Fir_reg_r464_;  // r464
  SEXP Rsh_Fir_reg_r465_;  // r465
  SEXP Rsh_Fir_reg_length_out57_;  // length_out57
  SEXP Rsh_Fir_reg_length_out58_;  // length_out58
  SEXP Rsh_Fir_reg_r466_;  // r466
  SEXP Rsh_Fir_reg_c437_;  // c437
  SEXP Rsh_Fir_reg_r467_;  // r467
  SEXP Rsh_Fir_reg_rep_int4_;  // rep_int4
  SEXP Rsh_Fir_reg_r468_;  // r468
  SEXP Rsh_Fir_reg_cumsum3_;  // cumsum3
  SEXP Rsh_Fir_reg_r469_;  // r469
  SEXP Rsh_Fir_reg_intby2_;  // intby2
  SEXP Rsh_Fir_reg_intby3_;  // intby3
  SEXP Rsh_Fir_reg_c438_;  // c438
  SEXP Rsh_Fir_reg_c440_;  // c440
  SEXP Rsh_Fir_reg_int12_;  // int12
  SEXP Rsh_Fir_reg_int13_;  // int13
  SEXP Rsh_Fir_reg_c441_;  // c441
  SEXP Rsh_Fir_reg_c442_;  // c442
  SEXP Rsh_Fir_reg_c443_;  // c443
  SEXP Rsh_Fir_reg_sym74_;  // sym74
  SEXP Rsh_Fir_reg_base74_;  // base74
  SEXP Rsh_Fir_reg_guard74_;  // guard74
  SEXP Rsh_Fir_reg_r470_;  // r470
  SEXP Rsh_Fir_reg_c450_;  // c450
  SEXP Rsh_Fir_reg_c451_;  // c451
  SEXP Rsh_Fir_reg_r471_;  // r471
  SEXP Rsh_Fir_reg_to73_;  // to73
  SEXP Rsh_Fir_reg_to74_;  // to74
  SEXP Rsh_Fir_reg_c452_;  // c452
  SEXP Rsh_Fir_reg_c453_;  // c453
  SEXP Rsh_Fir_reg_c454_;  // c454
  SEXP Rsh_Fir_reg_r472_;  // r472
  SEXP Rsh_Fir_reg_c457_;  // c457
  SEXP Rsh_Fir_reg_c458_;  // c458
  SEXP Rsh_Fir_reg_c460_;  // c460
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_storage_mode__5_;  // storage_mode__5
  SEXP Rsh_Fir_reg_r473_;  // r473
  SEXP Rsh_Fir_reg_to75_;  // to75
  SEXP Rsh_Fir_reg_to76_;  // to76
  SEXP Rsh_Fir_reg_length_out59_;  // length_out59
  SEXP Rsh_Fir_reg_length_out60_;  // length_out60
  SEXP Rsh_Fir_reg_r475_;  // r475
  SEXP Rsh_Fir_reg_r476_;  // r476
  SEXP Rsh_Fir_reg_by49_;  // by49
  SEXP Rsh_Fir_reg_by50_;  // by50
  SEXP Rsh_Fir_reg_r477_;  // r477
  SEXP Rsh_Fir_reg_r478_;  // r478
  SEXP Rsh_Fir_reg_stop11_;  // stop11
  SEXP Rsh_Fir_reg_r479_;  // r479

  // Bind parameters
  Rsh_Fir_reg_from = PARAMS[0];
  Rsh_Fir_reg_to = PARAMS[1];
  Rsh_Fir_reg_by = PARAMS[2];
  Rsh_Fir_reg_length_out = PARAMS[3];
  Rsh_Fir_reg_along_with = PARAMS[4];
  Rsh_Fir_reg_ddd = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // from_isMissing = missing.0(from)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_from;
  Rsh_Fir_reg_from_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if from_isMissing then L0(1.0) else L0(from)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_from_isMissing)) {
  // L0(1.0)
    Rsh_Fir_reg_from_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(from)
    Rsh_Fir_reg_from_orDefault = Rsh_Fir_reg_from;
    goto L0_;
  }

L0_:;
  // st from = from_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_from_orDefault, RHO);
  (void)(Rsh_Fir_reg_from_orDefault);
  // to_isMissing = missing.0(to)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_to;
  Rsh_Fir_reg_to_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if to_isMissing then L1(1.0) else L1(to)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_to_isMissing)) {
  // L1(1.0)
    Rsh_Fir_reg_to_orDefault = Rsh_const(CCP, 1);
    goto L1_;
  } else {
  // L1(to)
    Rsh_Fir_reg_to_orDefault = Rsh_Fir_reg_to;
    goto L1_;
  }

L1_:;
  // st to = to_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_to_orDefault, RHO);
  (void)(Rsh_Fir_reg_to_orDefault);
  // by_isMissing = missing.0(by)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_by;
  Rsh_Fir_reg_by_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if by_isMissing then L2() else L3(by)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_by_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(by)
    Rsh_Fir_reg_by_orDefault = Rsh_Fir_reg_by;
    goto L3_;
  }

L2_:;
  // p = prom<V +>{
  //   to1 = ld to;
  //   to2 = force? to1;
  //   checkMissing(to2);
  //   from1 = ld from;
  //   from2 = force? from1;
  //   checkMissing(from2);
  //   r = `-`(to2, from2);
  //   length_out1 = ld `length.out`;
  //   length_out2 = force? length_out1;
  //   checkMissing(length_out2);
  //   r1 = `-`(length_out2, 1.0);
  //   r2 = `/`(r, r1);
  //   visible.0();
  //   return r2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3182225035_, CCP, RHO);
  // goto L3(p)
  // L3(p)
  Rsh_Fir_reg_by_orDefault = Rsh_Fir_reg_p;
  goto L3_;

L3_:;
  // st by = by_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_by_orDefault, RHO);
  (void)(Rsh_Fir_reg_by_orDefault);
  // length_out_isMissing = missing.0(length_out)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_length_out;
  Rsh_Fir_reg_length_out_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if length_out_isMissing then L4(NULL) else L4(length_out)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_length_out_isMissing)) {
  // L4(NULL)
    Rsh_Fir_reg_length_out_orDefault = Rsh_const(CCP, 6);
    goto L4_;
  } else {
  // L4(length_out)
    Rsh_Fir_reg_length_out_orDefault = Rsh_Fir_reg_length_out;
    goto L4_;
  }

L4_:;
  // st `length.out` = length_out_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_length_out_orDefault, RHO);
  (void)(Rsh_Fir_reg_length_out_orDefault);
  // along_with_isMissing = missing.0(along_with)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_along_with;
  Rsh_Fir_reg_along_with_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args10);
  // if along_with_isMissing then L5(NULL) else L5(along_with)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_along_with_isMissing)) {
  // L5(NULL)
    Rsh_Fir_reg_along_with_orDefault = Rsh_const(CCP, 6);
    goto L5_;
  } else {
  // L5(along_with)
    Rsh_Fir_reg_along_with_orDefault = Rsh_Fir_reg_along_with;
    goto L5_;
  }

L5_:;
  // st `along.with` = along_with_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_along_with_orDefault, RHO);
  (void)(Rsh_Fir_reg_along_with_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // r4 = clos inner2680913962
  Rsh_Fir_reg_r4_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2680913962_, RHO, CCP);
  // st `is.logint` = r4
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym = ldf nargs
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base = ldf nargs in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard then L204() else L205()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L204()
    goto L204_;
  } else {
  // L205()
    goto L205_;
  }

L6_:;
  // r8 = `==`(r6, 1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // st One = r8
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // c = `as.logical`(r8)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c then L207() else L7(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L207()
    goto L207_;
  } else {
  // L7(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c;
    goto L7_;
  }

L7_:;
  // c9 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c9 then L211() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L211()
    goto L211_;
  } else {
  // L9()
    goto L9_;
  }

L8_:;
  // r12 = `!`(r10)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // c7 = `&&`(c5, c6)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L7(c7)
  // L7(c7)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c7_;
  goto L7_;

L9_:;
  // sym4 = ldf missing
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base4 = ldf missing in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard4 then L240() else L241()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L240()
    goto L240_;
  } else {
  // L241()
    goto L241_;
  }

L10_:;
  // st lf = r14
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // mode = ldf mode
  Rsh_Fir_reg_mode = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L216() else D3()
  // L216()
  goto L216_;

L11_:;
  // c16 = `as.logical`(c12)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c16 then L221() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L221()
    goto L221_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // lf2 = ld lf
  Rsh_Fir_reg_lf2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L232() else D11()
  // L232()
  goto L232_;

L13_:;
  // r23 = `!`(r21)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // c17 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c17 then L226() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L226()
    goto L226_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // from9 = ld from
  Rsh_Fir_reg_from9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L230() else D10()
  // L230()
  goto L230_;

L16_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r27
  return Rsh_Fir_reg_r27_;

L17_:;
  // integer = ldf integer
  Rsh_Fir_reg_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L236() else D13()
  // L236()
  goto L236_;

L19_:;
  // r35 = `!`(r33)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // c19 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c19 then L242() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L242()
    goto L242_;
  } else {
  // L20()
    goto L20_;
  }

L20_:;
  // sym8 = ldf missing
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base8 = ldf missing in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard8 then L263() else L264()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L263()
    goto L263_;
  } else {
  // L264()
    goto L264_;
  }

L21_:;
  // st `length.out` = r37
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r37_, RHO);
  (void)(Rsh_Fir_reg_r37_);
  // One = ld One
  Rsh_Fir_reg_One = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L247() else D17()
  // L247()
  goto L247_;

L22_:;
  // sym7 = ldf `is.integer`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base7 = ldf `is.integer` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard7 then L259() else L260()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L259()
    goto L259_;
  } else {
  // L260()
    goto L260_;
  }

L23_:;
  // integer1 = ldf integer
  Rsh_Fir_reg_integer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L255() else D20()
  // L255()
  goto L255_;

L24_:;
  // goto L25(r40)
  // L25(r40)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r40_;
  goto L25_;

L25_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r42
  return Rsh_Fir_reg_r42_;

L27_:;
  // st intn1 = r47
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r47_, RHO);
  (void)(Rsh_Fir_reg_r47_);
  // goto L28()
  // L28()
  goto L28_;

L28_:;
  // chkDots = ldf chkDots
  Rsh_Fir_reg_chkDots = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L295() else D36()
  // L295()
  goto L295_;

L29_:;
  // r52 = `!`(r50)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // c23 = `as.logical`(r52)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c23 then L265() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L265()
    goto L265_;
  } else {
  // L30()
    goto L30_;
  }

L30_:;
  // goto L28()
  // L28()
  goto L28_;

L31_:;
  // st len = r54
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // len = ld len
  Rsh_Fir_reg_len = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L270() else D25()
  // L270()
  goto L270_;

L32_:;
  // goto L33()
  // L33()
  goto L33_;

L33_:;
  // len2 = ld len
  Rsh_Fir_reg_len2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L275() else D28()
  // L275()
  goto L275_;

L34_:;
  // goto L36()
  // L36()
  goto L36_;

L35_:;
  // st `length.out` = dx1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L36()
  // L36()
  goto L36_;

L36_:;
  // is_logint = ldf `is.logint`
  Rsh_Fir_reg_is_logint = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L284() else D32()
  // L284()
  goto L284_;

L37_:;
  // goto L40(NULL)
  // L40(NULL)
  Rsh_Fir_reg_r71_ = Rsh_const(CCP, 6);
  goto L40_;

L38_:;
  // st `length.out` = r66
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r66_, RHO);
  (void)(Rsh_Fir_reg_r66_);
  // goto L40(r66)
  // L40(r66)
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r66_;
  goto L40_;

L39_:;
  // as_numeric = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r70 = dyn as_numeric(r68)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L292() else D35()
  // L292()
  goto L292_;

L40_:;
  // goto L28()
  // L28()
  goto L28_;

L41_:;
  // r76 = `!`(r74)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // c28 = `as.logical`(r76)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c28 then L299() else L42(c28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L299()
    goto L299_;
  } else {
  // L42(c28)
    Rsh_Fir_reg_c30_ = Rsh_Fir_reg_c28_;
    goto L42_;
  }

L42_:;
  // c37 = `as.logical`(c30)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_c30_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c37 then L305() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L305()
    goto L305_;
  } else {
  // L44()
    goto L44_;
  }

L43_:;
  // r80 = `!=`(r78, 1)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // c34 = `as.logical`(r80)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // c35 = `&&`(c33, c34)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_c33_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_c34_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L42(c35)
  // L42(c35)
  Rsh_Fir_reg_c30_ = Rsh_Fir_reg_c35_;
  goto L42_;

L44_:;
  // goto L45()
  // L45()
  goto L45_;

L45_:;
  // sym14 = ldf missing
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base14 = ldf missing in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard14 then L309() else L310()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L309()
    goto L309_;
  } else {
  // L310()
    goto L310_;
  }

L46_:;
  // r86 = `!`(r84)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // c38 = `as.logical`(r86)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if c38 then L311() else L47(c38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L311()
    goto L311_;
  } else {
  // L47(c38)
    Rsh_Fir_reg_c40_ = Rsh_Fir_reg_c38_;
    goto L47_;
  }

L47_:;
  // c47 = `as.logical`(c40)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_c40_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c47 then L317() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L317()
    goto L317_;
  } else {
  // L49()
    goto L49_;
  }

L48_:;
  // r90 = `!=`(r88, 1)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // c44 = `as.logical`(r90)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // c45 = `&&`(c43, c44)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_c43_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_c44_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L47(c45)
  // L47(c45)
  Rsh_Fir_reg_c40_ = Rsh_Fir_reg_c45_;
  goto L47_;

L49_:;
  // goto L50()
  // L50()
  goto L50_;

L50_:;
  // sym16 = ldf missing
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base16 = ldf missing in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard16 then L321() else L322()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L321()
    goto L321_;
  } else {
  // L322()
    goto L322_;
  }

L51_:;
  // r96 = `!`(r94)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // c48 = `as.logical`(r96)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c48 then L323() else L52(c48)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c48_)) {
  // L323()
    goto L323_;
  } else {
  // L52(c48)
    Rsh_Fir_reg_c50_ = Rsh_Fir_reg_c48_;
    goto L52_;
  }

L52_:;
  // c68 = `as.logical`(c50)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_c50_;
  Rsh_Fir_reg_c68_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if c68 then L338() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c68_)) {
  // L338()
    goto L338_;
  } else {
  // L58()
    goto L58_;
  }

L53_:;
  // r106 = `!`(r98)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r98_;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // c65 = `as.logical`(r106)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r106_;
  Rsh_Fir_reg_c65_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // c66 = `&&`(c53, c65)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_c53_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_c65_;
  Rsh_Fir_reg_c66_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L52(c66)
  // L52(c66)
  Rsh_Fir_reg_c50_ = Rsh_Fir_reg_c66_;
  goto L52_;

L54_:;
  // c58 = `as.logical`(r100)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_reg_c58_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if c58 then L329() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c58_)) {
  // L329()
    goto L329_;
  } else {
  // L55()
    goto L55_;
  }

L55_:;
  // from17 = ld from
  Rsh_Fir_reg_from17_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L335() else D49()
  // L335()
  goto L335_;

L56_:;
  // st from = r102
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r102_, RHO);
  (void)(Rsh_Fir_reg_r102_);
  // goto L57(c63, r102)
  // L57(c63, r102)
  Rsh_Fir_reg_c64_ = Rsh_Fir_reg_c63_;
  Rsh_Fir_reg_r104_ = Rsh_Fir_reg_r102_;
  goto L57_;

L57_:;
  // is_finite1 = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r105 = dyn is_finite1(r104)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite1_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L336() else D50()
  // L336()
  goto L336_;

L58_:;
  // goto L59()
  // L59()
  goto L59_;

L59_:;
  // sym20 = ldf missing
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base20 = ldf missing in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard20 then L342() else L343()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L342()
    goto L342_;
  } else {
  // L343()
    goto L343_;
  }

L60_:;
  // r112 = `!`(r110)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r110_;
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // c69 = `as.logical`(r112)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r112_;
  Rsh_Fir_reg_c69_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if c69 then L344() else L61(c69)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c69_)) {
  // L344()
    goto L344_;
  } else {
  // L61(c69)
    Rsh_Fir_reg_c71_ = Rsh_Fir_reg_c69_;
    goto L61_;
  }

L61_:;
  // c89 = `as.logical`(c71)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_c71_;
  Rsh_Fir_reg_c89_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if c89 then L359() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c89_)) {
  // L359()
    goto L359_;
  } else {
  // L67()
    goto L67_;
  }

L62_:;
  // r122 = `!`(r114)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r114_;
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // c86 = `as.logical`(r122)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r122_;
  Rsh_Fir_reg_c86_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // c87 = `&&`(c74, c86)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_c74_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_c86_;
  Rsh_Fir_reg_c87_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // goto L61(c87)
  // L61(c87)
  Rsh_Fir_reg_c71_ = Rsh_Fir_reg_c87_;
  goto L61_;

L63_:;
  // c79 = `as.logical`(r116)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r116_;
  Rsh_Fir_reg_c79_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if c79 then L350() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c79_)) {
  // L350()
    goto L350_;
  } else {
  // L64()
    goto L64_;
  }

L64_:;
  // to9 = ld to
  Rsh_Fir_reg_to9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L356() else D56()
  // L356()
  goto L356_;

L65_:;
  // st to = r118
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r118_, RHO);
  (void)(Rsh_Fir_reg_r118_);
  // goto L66(c84, r118)
  // L66(c84, r118)
  Rsh_Fir_reg_c85_ = Rsh_Fir_reg_c84_;
  Rsh_Fir_reg_r120_ = Rsh_Fir_reg_r118_;
  goto L66_;

L66_:;
  // is_finite2 = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r121 = dyn is_finite2(r120)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r120_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite2_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L357() else D57()
  // L357()
  goto L357_;

L67_:;
  // goto L68()
  // L68()
  goto L68_;

L68_:;
  // sym24 = ldf `is.null`
  Rsh_Fir_reg_sym24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base24 = ldf `is.null` in base
  Rsh_Fir_reg_base24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard24 = `==`.4(sym24, base24)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym24_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base24_;
  Rsh_Fir_reg_guard24_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard24 then L363() else L364()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard24_)) {
  // L363()
    goto L363_;
  } else {
  // L364()
    goto L364_;
  }

L69_:;
  // c91 = `as.logical`(r126)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r126_;
  Rsh_Fir_reg_c91_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if c91 then L366() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c91_)) {
  // L366()
    goto L366_;
  } else {
  // L70()
    goto L70_;
  }

L70_:;
  // sym41 = ldf `is.finite`
  Rsh_Fir_reg_sym41_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base41 = ldf `is.finite` in base
  Rsh_Fir_reg_base41_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard41 = `==`.4(sym41, base41)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym41_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base41_;
  Rsh_Fir_reg_guard41_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard41 then L538() else L539()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard41_)) {
  // L538()
    goto L538_;
  } else {
  // L539()
    goto L539_;
  }

L71_:;
  // c92 = `as.logical`(r128)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r128_;
  Rsh_Fir_reg_c92_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if c92 then L369() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c92_)) {
  // L369()
    goto L369_;
  } else {
  // L72()
    goto L72_;
  }

L72_:;
  // is_logint1 = ldf `is.logint`
  Rsh_Fir_reg_is_logint1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L373() else D63()
  // L373()
  goto L373_;

L73_:;
  // st int = c95
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_c95_, RHO);
  (void)(Rsh_Fir_reg_c95_);
  // to15 = ld to
  Rsh_Fir_reg_to15_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L379() else D67()
  // L379()
  goto L379_;

L74_:;
  // from25 = ld from
  Rsh_Fir_reg_from25_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L387() else D71()
  // L387()
  goto L387_;

L75_:;
  // goto L76(to21, r136)
  // L76(to21, r136)
  Rsh_Fir_reg_to22_ = Rsh_Fir_reg_to21_;
  Rsh_Fir_reg_r138_ = Rsh_Fir_reg_r136_;
  goto L76_;

L76_:;
  // r139 = `-`(to22, r138)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_to22_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_r138_;
  Rsh_Fir_reg_r139_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // st del = r139
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r139_, RHO);
  (void)(Rsh_Fir_reg_r139_);
  // del = ld del
  Rsh_Fir_reg_del = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L388() else D72()
  // L388()
  goto L388_;

L77_:;
  // c106 = `as.logical`(c102)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_c102_;
  Rsh_Fir_reg_c106_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if c106 then L392() else L78()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c106_)) {
  // L392()
    goto L392_;
  } else {
  // L78()
    goto L78_;
  }

L78_:;
  // sym27 = ldf length
  Rsh_Fir_reg_sym27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base27 = ldf length in base
  Rsh_Fir_reg_base27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard27 = `==`.4(sym27, base27)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_sym27_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_base27_;
  Rsh_Fir_reg_guard27_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args66);
  // if guard27 then L396() else L397()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard27_)) {
  // L396()
    goto L396_;
  } else {
  // L397()
    goto L397_;
  }

L80_:;
  // r147 = `!=`(r145, 1)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_r145_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r147_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // c107 = `as.logical`(r147)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r147_;
  Rsh_Fir_reg_c107_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if c107 then L400() else L81()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c107_)) {
  // L400()
    goto L400_;
  } else {
  // L81()
    goto L81_;
  }

L81_:;
  // goto L82()
  // L82()
  goto L82_;

L82_:;
  // is_logint3 = ldf `is.logint`
  Rsh_Fir_reg_is_logint3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L404() else D79()
  // L404()
  goto L404_;

L83_:;
  // int2 = ld int
  Rsh_Fir_reg_int2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L408() else D81()
  // L408()
  goto L408_;

L84_:;
  // sym28 = ldf `is.finite`
  Rsh_Fir_reg_sym28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base28 = ldf `is.finite` in base
  Rsh_Fir_reg_base28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard28 = `==`.4(sym28, base28)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_sym28_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_base28_;
  Rsh_Fir_reg_guard28_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args69);
  // if guard28 then L413() else L414()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard28_)) {
  // L413()
    goto L413_;
  } else {
  // L414()
    goto L414_;
  }

L85_:;
  // goto L84()
  // L84()
  goto L84_;

L86_:;
  // st `finite.del` = r157
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r157_, RHO);
  (void)(Rsh_Fir_reg_r157_);
  // c110 = `as.logical`(r157)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_r157_;
  Rsh_Fir_reg_c110_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if c110 then L417() else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c110_)) {
  // L417()
    goto L417_;
  } else {
  // L87()
    goto L87_;
  }

L87_:;
  // to27 = ld to
  Rsh_Fir_reg_to27_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L421() else D88()
  // L421()
  goto L421_;

L88_:;
  // st n = r160
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r160_, RHO);
  (void)(Rsh_Fir_reg_r160_);
  // sym29 = ldf `is.finite`
  Rsh_Fir_reg_sym29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base29 = ldf `is.finite` in base
  Rsh_Fir_reg_base29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard29 = `==`.4(sym29, base29)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_sym29_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_base29_;
  Rsh_Fir_reg_guard29_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args71);
  // if guard29 then L425() else L426()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard29_)) {
  // L425()
    goto L425_;
  } else {
  // L426()
    goto L426_;
  }

L89_:;
  // r167 = `!`(r165)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r165_;
  Rsh_Fir_reg_r167_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // c111 = `as.logical`(r167)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_r167_;
  Rsh_Fir_reg_c111_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if c111 then L429() else L90()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c111_)) {
  // L429()
    goto L429_;
  } else {
  // L90()
    goto L90_;
  }

L90_:;
  // goto L96()
  // L96()
  goto L96_;

L91_:;
  // r171 = `!`(r169)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_r169_;
  Rsh_Fir_reg_r171_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // c112 = `as.logical`(r171)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_r171_;
  Rsh_Fir_reg_c112_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if c112 then L434() else L92(c112)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c112_)) {
  // L434()
    goto L434_;
  } else {
  // L92(c112)
    Rsh_Fir_reg_c114_ = Rsh_Fir_reg_c112_;
    goto L92_;
  }

L92_:;
  // c118 = `as.logical`(c114)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_c114_;
  Rsh_Fir_reg_c118_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if c118 then L437() else L93(c118)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c118_)) {
  // L437()
    goto L437_;
  } else {
  // L93(c118)
    Rsh_Fir_reg_c120_ = Rsh_Fir_reg_c118_;
    goto L93_;
  }

L93_:;
  // c124 = `as.logical`(c120)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_c120_;
  Rsh_Fir_reg_c124_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // if c124 then L440() else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c124_)) {
  // L440()
    goto L440_;
  } else {
  // L94()
    goto L94_;
  }

L94_:;
  // stop7 = ldf stop
  Rsh_Fir_reg_stop7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L444() else D99()
  // L444()
  goto L444_;

L96_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L447() else D101()
  // L447()
  goto L447_;

L97_:;
  // goto L98()
  // L98()
  goto L98_;

L98_:;
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L452() else D104()
  // L452()
  goto L452_;

L99_:;
  // goto L100()
  // L100()
  goto L100_;

L100_:;
  // finite_del = ld `finite.del`
  Rsh_Fir_reg_finite_del = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L462() else D108()
  // L462()
  goto L462_;

L101_:;
  // c151 = `as.logical`(c130)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_c130_;
  Rsh_Fir_reg_c151_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if c151 then L485() else L106()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c151_)) {
  // L485()
    goto L485_;
  } else {
  // L106()
    goto L106_;
  }

L102_:;
  // sym32 = ldf max
  Rsh_Fir_reg_sym32_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base32 = ldf max in base
  Rsh_Fir_reg_base32_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard32 = `==`.4(sym32, base32)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_sym32_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_base32_;
  Rsh_Fir_reg_guard32_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args79);
  // if guard32 then L468() else L469()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard32_)) {
  // L468()
    goto L468_;
  } else {
  // L469()
    goto L469_;
  }

L103_:;
  // r206 = `/`(r191, r192)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_r191_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_r192_;
  Rsh_Fir_reg_r206_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // _Machine4 = ld `.Machine`
  Rsh_Fir_reg__Machine4_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L479() else D116()
  // L479()
  goto L479_;

L104_:;
  // sym34 = ldf abs
  Rsh_Fir_reg_sym34_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base34 = ldf abs in base
  Rsh_Fir_reg_base34_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard34 = `==`.4(sym34, base34)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_sym34_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_base34_;
  Rsh_Fir_reg_guard34_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args81);
  // if guard34 then L474() else L475()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard34_)) {
  // L474()
    goto L474_;
  } else {
  // L475()
    goto L475_;
  }

L105_:;
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r205 = dyn max(r197, r203)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_r197_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_r203_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r205_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L478() else D115()
  // L478()
  goto L478_;

L106_:;
  // int4 = ld int
  Rsh_Fir_reg_int4_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L489() else D118()
  // L489()
  goto L489_;

L108_:;
  // sym40 = ldf `as.integer`
  Rsh_Fir_reg_sym40_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base40 = ldf `as.integer` in base
  Rsh_Fir_reg_base40_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard40 = `==`.4(sym40, base40)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_sym40_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_base40_;
  Rsh_Fir_reg_guard40_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args83);
  // if guard40 then L517() else L518()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard40_)) {
  // L517()
    goto L517_;
  } else {
  // L518()
    goto L518_;
  }

L109_:;
  // st n = r221
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r221_, RHO);
  (void)(Rsh_Fir_reg_r221_);
  // n12 = ld n
  Rsh_Fir_reg_n12_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L495() else D121()
  // L495()
  goto L495_;

L110_:;
  // from37 = ld from
  Rsh_Fir_reg_from37_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L513() else D129()
  // L513()
  goto L513_;

L111_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r225
  return Rsh_Fir_reg_r225_;

L112_:;
  // cumsum = ldf cumsum in base
  Rsh_Fir_reg_cumsum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r235 = dyn cumsum(r227)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_r227_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r235_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cumsum, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L511() else D128()
  // L511()
  goto L511_;

L113_:;
  // sym39 = ldf c
  Rsh_Fir_reg_sym39_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base39 = ldf c in base
  Rsh_Fir_reg_base39_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard39 = `==`.4(sym39, base39)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_sym39_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_base39_;
  Rsh_Fir_reg_guard39_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args85);
  // if guard39 then L506() else L507()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard39_)) {
  // L506()
    goto L506_;
  } else {
  // L507()
    goto L507_;
  }

L114_:;
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r234 = dyn rep_int(r229, r232)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_r229_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_r232_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r234_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L510() else D127()
  // L510()
  goto L510_;

L115_:;
  // st n = r240
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r240_, RHO);
  (void)(Rsh_Fir_reg_r240_);
  // finite_del2 = ld `finite.del`
  Rsh_Fir_reg_finite_del2_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L521() else D134()
  // L521()
  goto L521_;

L116_:;
  // from41 = ld from
  Rsh_Fir_reg_from41_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L527() else D138()
  // L527()
  goto L527_;

L117_:;
  // st x = r246
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r246_, RHO);
  (void)(Rsh_Fir_reg_r246_);
  // by23 = ld by
  Rsh_Fir_reg_by23_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L530() else D141()
  // L530()
  goto L530_;

L118_:;
  // pmax = ldf pmax
  Rsh_Fir_reg_pmax = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L535() else D144()
  // L535()
  goto L535_;

L119_:;
  // r263 = `!`(r261)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_r261_;
  Rsh_Fir_reg_r263_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // c158 = `as.logical`(r263)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_r263_;
  Rsh_Fir_reg_c158_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if c158 then L120(c158) else L542()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c158_)) {
  // L120(c158)
    Rsh_Fir_reg_c159_ = Rsh_Fir_reg_c158_;
    goto L120_;
  } else {
  // L542()
    goto L542_;
  }

L120_:;
  // c164 = `as.logical`(c159)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_c159_;
  Rsh_Fir_reg_c164_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // if c164 then L545() else L121()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c164_)) {
  // L545()
    goto L545_;
  } else {
  // L121()
    goto L121_;
  }

L121_:;
  // length_out25 = ld `length.out`
  Rsh_Fir_reg_length_out25_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L549() else D151()
  // L549()
  goto L549_;

L122_:;
  // One2 = ld One
  Rsh_Fir_reg_One2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L554() else D154()
  // L554()
  goto L554_;

L123_:;
  // sym43 = ldf missing
  Rsh_Fir_reg_sym43_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base43 = ldf missing in base
  Rsh_Fir_reg_base43_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard43 = `==`.4(sym43, base43)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_sym43_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_base43_;
  Rsh_Fir_reg_guard43_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args90);
  // if guard43 then L560() else L561()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard43_)) {
  // L560()
    goto L560_;
  } else {
  // L561()
    goto L561_;
  }

L124_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r269
  return Rsh_Fir_reg_r269_;

L125_:;
  // c167 = `as.logical`(r272)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_r272_;
  Rsh_Fir_reg_c167_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if c167 then L562() else L126()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c167_)) {
  // L562()
    goto L562_;
  } else {
  // L126()
    goto L126_;
  }

L126_:;
  // sym58 = ldf missing
  Rsh_Fir_reg_sym58_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base58 = ldf missing in base
  Rsh_Fir_reg_base58_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard58 = `==`.4(sym58, base58)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_sym58_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_base58_;
  Rsh_Fir_reg_guard58_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args92);
  // if guard58 then L693() else L694()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard58_)) {
  // L693()
    goto L693_;
  } else {
  // L694()
    goto L694_;
  }

L127_:;
  // c168 = `as.logical`(r275)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_r275_;
  Rsh_Fir_reg_c168_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if c168 then L565() else L128()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c168_)) {
  // L565()
    goto L565_;
  } else {
  // L128()
    goto L128_;
  }

L128_:;
  // is_logint5 = ldf `is.logint`
  Rsh_Fir_reg_is_logint5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L587() else D166()
  // L587()
  goto L587_;

L129_:;
  // c175 = `as.logical`(c171)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_c171_;
  Rsh_Fir_reg_c175_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if c175 then L573() else L130(c175)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c175_)) {
  // L573()
    goto L573_;
  } else {
  // L130(c175)
    Rsh_Fir_reg_c177_ = Rsh_Fir_reg_c175_;
    goto L130_;
  }

L130_:;
  // st intdel = c177
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_c177_, RHO);
  (void)(Rsh_Fir_reg_c177_);
  // intdel = ld intdel
  Rsh_Fir_reg_intdel = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L581() else D163()
  // L581()
  goto L581_;

L131_:;
  // goto L132(NULL)
  // L132(NULL)
  Rsh_Fir_reg_r284_ = Rsh_const(CCP, 6);
  goto L132_;

L132_:;
  // goto L133()
  // L133()
  goto L133_;

L133_:;
  // sym45 = ldf missing
  Rsh_Fir_reg_sym45_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base45 = ldf missing in base
  Rsh_Fir_reg_base45_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard45 = `==`.4(sym45, base45)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_sym45_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_base45_;
  Rsh_Fir_reg_guard45_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args95);
  // if guard45 then L589() else L590()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard45_)) {
  // L589()
    goto L589_;
  } else {
  // L590()
    goto L590_;
  }

L134_:;
  // c187 = `as.logical`(r289)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r289_;
  Rsh_Fir_reg_c187_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // if c187 then L591() else L135()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c187_)) {
  // L591()
    goto L591_;
  } else {
  // L135()
    goto L135_;
  }

L135_:;
  // intdel6 = ld intdel
  Rsh_Fir_reg_intdel6_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L612() else D177()
  // L612()
  goto L612_;

L136_:;
  // goto L140(NULL)
  // L140(NULL)
  Rsh_Fir_reg_r298_ = Rsh_const(CCP, 6);
  goto L140_;

L137_:;
  // st intdel = c191
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_c191_, RHO);
  (void)(Rsh_Fir_reg_c191_);
  // intdel4 = ld intdel
  Rsh_Fir_reg_intdel4_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L605() else D174()
  // L605()
  goto L605_;

L138_:;
  // goto L139(NULL)
  // L139(NULL)
  Rsh_Fir_reg_r297_ = Rsh_const(CCP, 6);
  goto L139_;

L139_:;
  // goto L140(r297)
  // L140(r297)
  Rsh_Fir_reg_r298_ = Rsh_Fir_reg_r297_;
  goto L140_;

L140_:;
  // goto L141()
  // L141()
  goto L141_;

L141_:;
  // length_out33 = ld `length.out`
  Rsh_Fir_reg_length_out33_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L617() else D180()
  // L617()
  goto L617_;

L142_:;
  // goto L141()
  // L141()
  goto L141_;

L143_:;
  // as_vector2 = ldf `as.vector`
  Rsh_Fir_reg_as_vector2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L684() else D221()
  // L684()
  goto L684_;

L144_:;
  // length_out37 = ld `length.out`
  Rsh_Fir_reg_length_out37_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L628() else D186()
  // L628()
  goto L628_;

L145_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r305
  return Rsh_Fir_reg_r305_;

L146_:;
  // c210 = `as.logical`(c206)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_c206_;
  Rsh_Fir_reg_c210_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if c210 then L633() else L147(c210)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c210_)) {
  // L633()
    goto L633_;
  } else {
  // L147(c210)
    Rsh_Fir_reg_c212_ = Rsh_Fir_reg_c210_;
    goto L147_;
  }

L147_:;
  // c216 = `as.logical`(c212)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_c212_;
  Rsh_Fir_reg_c216_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // if c216 then L641() else L148()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c216_)) {
  // L641()
    goto L641_;
  } else {
  // L148()
    goto L148_;
  }

L148_:;
  // intdel10 = ld intdel
  Rsh_Fir_reg_intdel10_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L664() else D208()
  // L664()
  goto L664_;

L149_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r315
  return Rsh_Fir_reg_r315_;

L150_:;
  // cumsum1 = ldf cumsum in base
  Rsh_Fir_reg_cumsum1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r325 = dyn cumsum1(r317)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_r317_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r325_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cumsum1_, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L662() else D207()
  // L662()
  goto L662_;

L151_:;
  // sym50 = ldf c
  Rsh_Fir_reg_sym50_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base50 = ldf c in base
  Rsh_Fir_reg_base50_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard50 = `==`.4(sym50, base50)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_sym50_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_base50_;
  Rsh_Fir_reg_guard50_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args100);
  // if guard50 then L657() else L658()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard50_)) {
  // L657()
    goto L657_;
  } else {
  // L658()
    goto L658_;
  }

L152_:;
  // rep_int2 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r324 = dyn rep_int2(r319, r322)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_r319_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_r322_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r324_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int2_, 2, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L661() else D206()
  // L661()
  goto L661_;

L153_:;
  // goto L154()
  // L154()
  goto L154_;

L154_:;
  // to51 = ld to
  Rsh_Fir_reg_to51_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L669() else D211()
  // L669()
  goto L669_;

L155_:;
  // c220 = `as.logical`(r330)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_r330_;
  Rsh_Fir_reg_c220_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // if c220 then L675() else L156()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c220_)) {
  // L675()
    goto L675_;
  } else {
  // L156()
    goto L156_;
  }

L156_:;
  // from74 = ld from
  Rsh_Fir_reg_from74_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L679() else D217()
  // L679()
  goto L679_;

L157_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx12
  return Rsh_Fir_reg_dx12_;

L158_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r373 = dyn __3(r370, r371)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_r370_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_r371_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r373_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L157(r373)
  // L157(r373)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r373_;
  goto L157_;

L159_:;
  // c225 = `as.logical`(r375)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_r375_;
  Rsh_Fir_reg_c225_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // if c225 then L695() else L160()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c225_)) {
  // L695()
    goto L695_;
  } else {
  // L160()
    goto L160_;
  }

L160_:;
  // sym66 = ldf missing
  Rsh_Fir_reg_sym66_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base66 = ldf missing in base
  Rsh_Fir_reg_base66_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard66 = `==`.4(sym66, base66)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_sym66_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_base66_;
  Rsh_Fir_reg_guard66_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args105);
  // if guard66 then L776() else L777()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard66_)) {
  // L776()
    goto L776_;
  } else {
  // L777()
    goto L777_;
  }

L161_:;
  // c232 = `as.logical`(c228)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_c228_;
  Rsh_Fir_reg_c232_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if c232 then L702() else L162(c232)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c232_)) {
  // L702()
    goto L702_;
  } else {
  // L162(c232)
    Rsh_Fir_reg_c234_ = Rsh_Fir_reg_c232_;
    goto L162_;
  }

L162_:;
  // st int = c234
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_c234_, RHO);
  (void)(Rsh_Fir_reg_c234_);
  // int6 = ld int
  Rsh_Fir_reg_int6_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L732() else D238()
  // L732()
  goto L732_;

L163_:;
  // st nby = r382
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_r382_, RHO);
  (void)(Rsh_Fir_reg_r382_);
  // r384 = `!`(r382)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_r382_;
  Rsh_Fir_reg_r384_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // c238 = `as.logical`(r384)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_r384_;
  Rsh_Fir_reg_c238_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // if c238 then L164(c237, c238) else L707()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c238_)) {
  // L164(c237, c238)
    Rsh_Fir_reg_c239_ = Rsh_Fir_reg_c237_;
    Rsh_Fir_reg_c240_ = Rsh_Fir_reg_c238_;
    goto L164_;
  } else {
  // L707()
    goto L707_;
  }

L164_:;
  // c253 = `as.logical`(c240)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_c240_;
  Rsh_Fir_reg_c253_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // if c253 then L166(c239, c253) else L713()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c253_)) {
  // L166(c239, c253)
    Rsh_Fir_reg_c254_ = Rsh_Fir_reg_c239_;
    Rsh_Fir_reg_c255_ = Rsh_Fir_reg_c253_;
    goto L166_;
  } else {
  // L713()
    goto L713_;
  }

L165_:;
  // st naby = r386
  Rsh_Fir_store(Rsh_const(CCP, 43), Rsh_Fir_reg_r386_, RHO);
  (void)(Rsh_Fir_reg_r386_);
  // c249 = `as.logical`(r386)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_r386_;
  Rsh_Fir_reg_c249_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // c250 = `||`(c248, c249)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_c248_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_c249_;
  Rsh_Fir_reg_c250_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // goto L164(c247, c250)
  // L164(c247, c250)
  Rsh_Fir_reg_c239_ = Rsh_Fir_reg_c247_;
  Rsh_Fir_reg_c240_ = Rsh_Fir_reg_c250_;
  goto L164_;

L166_:;
  // c296 = `as.logical`(c255)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_c255_;
  Rsh_Fir_reg_c296_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // c297 = `&&`(c254, c296)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_c254_;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_c296_;
  Rsh_Fir_reg_c297_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // goto L162(c297)
  // L162(c297)
  Rsh_Fir_reg_c234_ = Rsh_Fir_reg_c297_;
  goto L162_;

L167_:;
  // c292 = `as.logical`(c273)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_c273_;
  Rsh_Fir_reg_c292_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // c293 = `||`(c272, c292)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_c272_;
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_c292_;
  Rsh_Fir_reg_c293_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // goto L166(c271, c293)
  // L166(c271, c293)
  Rsh_Fir_reg_c254_ = Rsh_Fir_reg_c271_;
  Rsh_Fir_reg_c255_ = Rsh_Fir_reg_c293_;
  goto L166_;

L168_:;
  // c305 = `as.logical`(c301)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_c301_;
  Rsh_Fir_reg_c305_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // if c305 then L736() else L169(c305)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c305_)) {
  // L736()
    goto L736_;
  } else {
  // L169(c305)
    Rsh_Fir_reg_c307_ = Rsh_Fir_reg_c305_;
    goto L169_;
  }

L169_:;
  // c311 = `as.logical`(c307)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_c307_;
  Rsh_Fir_reg_c311_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // if c311 then L739() else L170(c311)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c311_)) {
  // L739()
    goto L739_;
  } else {
  // L170(c311)
    Rsh_Fir_reg_c313_ = Rsh_Fir_reg_c311_;
    goto L170_;
  }

L170_:;
  // c317 = `as.logical`(c313)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_c313_;
  Rsh_Fir_reg_c317_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // if c317 then L742() else L171()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c317_)) {
  // L742()
    goto L742_;
  } else {
  // L171()
    goto L171_;
  }

L171_:;
  // intby = ld intby
  Rsh_Fir_reg_intby = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L759() else D249()
  // L759()
  goto L759_;

L172_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r404
  return Rsh_Fir_reg_r404_;

L173_:;
  // cumsum2 = ldf cumsum in base
  Rsh_Fir_reg_cumsum2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r415 = dyn cumsum2(r406)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_r406_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r415_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cumsum2_, 1, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L757() else D248()
  // L757()
  goto L757_;

L174_:;
  // sym64 = ldf c
  Rsh_Fir_reg_sym64_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base64 = ldf c in base
  Rsh_Fir_reg_base64_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard64 = `==`.4(sym64, base64)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_sym64_;
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_base64_;
  Rsh_Fir_reg_guard64_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args120);
  // if guard64 then L752() else L753()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard64_)) {
  // L752()
    goto L752_;
  } else {
  // L753()
    goto L753_;
  }

L175_:;
  // rep_int3 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r414 = dyn rep_int3(r408, r411)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_r408_;
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_r411_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r414_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int3_, 2, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L756() else D247()
  // L756()
  goto L756_;

L176_:;
  // c342 = `as.logical`(c322)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_c322_;
  Rsh_Fir_reg_c342_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // if c342 then L768() else L179()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c342_)) {
  // L768()
    goto L768_;
  } else {
  // L179()
    goto L179_;
  }

L177_:;
  // r418 = `!`(c325)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_c325_;
  Rsh_Fir_reg_r418_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // c339 = `as.logical`(r418)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_r418_;
  Rsh_Fir_reg_c339_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // c340 = `&&`(c324, c339)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_c324_;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_c339_;
  Rsh_Fir_reg_c340_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // goto L176(c340)
  // L176(c340)
  Rsh_Fir_reg_c322_ = Rsh_Fir_reg_c340_;
  goto L176_;

L178_:;
  // c335 = `as.logical`(r417)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_r417_;
  Rsh_Fir_reg_c335_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // c336 = `||`(c333, c335)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_c333_;
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_c335_;
  Rsh_Fir_reg_c336_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // goto L177(c332, c336)
  // L177(c332, c336)
  Rsh_Fir_reg_c324_ = Rsh_Fir_reg_c332_;
  Rsh_Fir_reg_c325_ = Rsh_Fir_reg_c336_;
  goto L177_;

L179_:;
  // goto L180()
  // L180()
  goto L180_;

L180_:;
  // from95 = ld from
  Rsh_Fir_reg_from95_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L772() else D254()
  // L772()
  goto L772_;

L181_:;
  // c343 = `as.logical`(r426)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_r426_;
  Rsh_Fir_reg_c343_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // if c343 then L778() else L182()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c343_)) {
  // L778()
    goto L778_;
  } else {
  // L182()
    goto L182_;
  }

L182_:;
  // stop11 = ldf stop
  Rsh_Fir_reg_stop11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L862() else D291()
  // L862()
  goto L862_;

L183_:;
  // c350 = `as.logical`(c346)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_c346_;
  Rsh_Fir_reg_c350_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // if c350 then L785() else L184(c350)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c350_)) {
  // L785()
    goto L785_;
  } else {
  // L184(c350)
    Rsh_Fir_reg_c352_ = Rsh_Fir_reg_c350_;
    goto L184_;
  }

L184_:;
  // st int = c352
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_c352_, RHO);
  (void)(Rsh_Fir_reg_c352_);
  // int10 = ld int
  Rsh_Fir_reg_int10_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L815() else D271()
  // L815()
  goto L815_;

L185_:;
  // st nby = r433
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_r433_, RHO);
  (void)(Rsh_Fir_reg_r433_);
  // r435 = `!`(r433)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_r433_;
  Rsh_Fir_reg_r435_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // c356 = `as.logical`(r435)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_r435_;
  Rsh_Fir_reg_c356_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // if c356 then L186(c355, c356) else L790()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c356_)) {
  // L186(c355, c356)
    Rsh_Fir_reg_c357_ = Rsh_Fir_reg_c355_;
    Rsh_Fir_reg_c358_ = Rsh_Fir_reg_c356_;
    goto L186_;
  } else {
  // L790()
    goto L790_;
  }

L186_:;
  // c371 = `as.logical`(c358)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_c358_;
  Rsh_Fir_reg_c371_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // if c371 then L188(c357, c371) else L796()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c371_)) {
  // L188(c357, c371)
    Rsh_Fir_reg_c372_ = Rsh_Fir_reg_c357_;
    Rsh_Fir_reg_c373_ = Rsh_Fir_reg_c371_;
    goto L188_;
  } else {
  // L796()
    goto L796_;
  }

L187_:;
  // st naby = r437
  Rsh_Fir_store(Rsh_const(CCP, 43), Rsh_Fir_reg_r437_, RHO);
  (void)(Rsh_Fir_reg_r437_);
  // c367 = `as.logical`(r437)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_r437_;
  Rsh_Fir_reg_c367_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // c368 = `||`(c366, c367)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_c366_;
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_c367_;
  Rsh_Fir_reg_c368_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // goto L186(c365, c368)
  // L186(c365, c368)
  Rsh_Fir_reg_c357_ = Rsh_Fir_reg_c365_;
  Rsh_Fir_reg_c358_ = Rsh_Fir_reg_c368_;
  goto L186_;

L188_:;
  // c414 = `as.logical`(c373)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_c373_;
  Rsh_Fir_reg_c414_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // c415 = `&&`(c372, c414)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_c372_;
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_c414_;
  Rsh_Fir_reg_c415_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // goto L184(c415)
  // L184(c415)
  Rsh_Fir_reg_c352_ = Rsh_Fir_reg_c415_;
  goto L184_;

L189_:;
  // c410 = `as.logical`(c391)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_c391_;
  Rsh_Fir_reg_c410_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // c411 = `||`(c390, c410)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_c390_;
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_c410_;
  Rsh_Fir_reg_c411_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // goto L188(c389, c411)
  // L188(c389, c411)
  Rsh_Fir_reg_c372_ = Rsh_Fir_reg_c389_;
  Rsh_Fir_reg_c373_ = Rsh_Fir_reg_c411_;
  goto L188_;

L190_:;
  // c423 = `as.logical`(c419)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_c419_;
  Rsh_Fir_reg_c423_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // if c423 then L819() else L191(c423)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c423_)) {
  // L819()
    goto L819_;
  } else {
  // L191(c423)
    Rsh_Fir_reg_c425_ = Rsh_Fir_reg_c423_;
    goto L191_;
  }

L191_:;
  // c429 = `as.logical`(c425)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_c425_;
  Rsh_Fir_reg_c429_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // if c429 then L822() else L192(c429)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c429_)) {
  // L822()
    goto L822_;
  } else {
  // L192(c429)
    Rsh_Fir_reg_c431_ = Rsh_Fir_reg_c429_;
    goto L192_;
  }

L192_:;
  // c435 = `as.logical`(c431)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_c431_;
  Rsh_Fir_reg_c435_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // if c435 then L825() else L193()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c435_)) {
  // L825()
    goto L825_;
  } else {
  // L193()
    goto L193_;
  }

L193_:;
  // intby2 = ld intby
  Rsh_Fir_reg_intby2_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L845() else D283()
  // L845()
  goto L845_;

L194_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r455
  return Rsh_Fir_reg_r455_;

L195_:;
  // cumsum3 = ldf cumsum in base
  Rsh_Fir_reg_cumsum3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r469 = dyn cumsum3(r457)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_r457_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r469_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cumsum3_, 1, Rsh_Fir_array_args142, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L843() else D282()
  // L843()
  goto L843_;

L196_:;
  // sym73 = ldf c
  Rsh_Fir_reg_sym73_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base73 = ldf c in base
  Rsh_Fir_reg_base73_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard73 = `==`.4(sym73, base73)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_sym73_;
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_base73_;
  Rsh_Fir_reg_guard73_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args143);
  // if guard73 then L838() else L839()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard73_)) {
  // L838()
    goto L838_;
  } else {
  // L839()
    goto L839_;
  }

L197_:;
  // by47 = ld by
  Rsh_Fir_reg_by47_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L836() else D277()
  // L836()
  goto L836_;

L198_:;
  // rep_int4 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r468 = dyn rep_int4(r459, r465)
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_r459_;
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg_r465_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r468_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int4_, 2, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L842() else D281()
  // L842()
  goto L842_;

L199_:;
  // c460 = `as.logical`(c440)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_c440_;
  Rsh_Fir_reg_c460_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // if c460 then L854() else L202()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c460_)) {
  // L854()
    goto L854_;
  } else {
  // L202()
    goto L202_;
  }

L200_:;
  // r472 = `!`(c443)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_c443_;
  Rsh_Fir_reg_r472_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // c457 = `as.logical`(r472)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_r472_;
  Rsh_Fir_reg_c457_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // c458 = `&&`(c442, c457)
  SEXP Rsh_Fir_array_args148[2];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_c442_;
  Rsh_Fir_array_args148[1] = Rsh_Fir_reg_c457_;
  Rsh_Fir_reg_c458_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // goto L199(c458)
  // L199(c458)
  Rsh_Fir_reg_c440_ = Rsh_Fir_reg_c458_;
  goto L199_;

L201_:;
  // c453 = `as.logical`(r471)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_r471_;
  Rsh_Fir_reg_c453_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty());
  // c454 = `||`(c451, c453)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_c451_;
  Rsh_Fir_array_args150[1] = Rsh_Fir_reg_c453_;
  Rsh_Fir_reg_c454_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty());
  // goto L200(c450, c454)
  // L200(c450, c454)
  Rsh_Fir_reg_c442_ = Rsh_Fir_reg_c450_;
  Rsh_Fir_reg_c443_ = Rsh_Fir_reg_c454_;
  goto L200_;

L202_:;
  // goto L203()
  // L203()
  goto L203_;

L203_:;
  // to75 = ld to
  Rsh_Fir_reg_to75_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L858() else D288()
  // L858()
  goto L858_;

L204_:;
  // nargs = ldf nargs in base
  Rsh_Fir_reg_nargs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r7 = dyn nargs()
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nargs, 0, NULL, NULL, CCP, RHO);
  // check L206() else D0()
  // L206()
  goto L206_;

L205_:;
  // r5 = dyn base()
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L6(r5)
  // L6(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L6_;

D0_:;
  // deopt 6 [r7]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L206_:;
  // goto L6(r7)
  // L6(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L6_;

L207_:;
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args151);
  // if guard1 then L208() else L209()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L208()
    goto L208_;
  } else {
  // L209()
    goto L209_;
  }

L208_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r11 = dyn missing(<sym from>)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L8(c, r11)
  // L8(c, r11)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L8_;

L209_:;
  // r9 = dyn base1(<sym from>)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L8(c, r9)
  // L8(c, r9)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L8_;

L211_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args154[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args154);
  // if guard2 then L212() else L213()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L212()
    goto L212_;
  } else {
  // L213()
    goto L213_;
  }

L212_:;
  // from3 = ld from
  Rsh_Fir_reg_from3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L214() else D1()
  // L214()
  goto L214_;

L213_:;
  // r13 = dyn base2(<sym from>)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L10(r13)
  // L10(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L10_;

D1_:;
  // deopt 17 [from3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_from3_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L214_:;
  // from4 = force? from3
  Rsh_Fir_reg_from4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from3_);
  // checkMissing(from4)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_from4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r15 = dyn length(from4)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_from4_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L215() else D2()
  // L215()
  goto L215_;

D2_:;
  // deopt 20 [r15]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L215_:;
  // goto L10(r15)
  // L10(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L10_;

D3_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L216_:;
  // p1 = prom<V +>{
  //   from5 = ld from;
  //   from6 = force? from5;
  //   checkMissing(from6);
  //   return from6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3182225035_1, CCP, RHO);
  // r17 = dyn mode(p1)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mode, 1, Rsh_Fir_array_args159, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L217() else D4()
  // L217()
  goto L217_;

D4_:;
  // deopt 25 [r17]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L217_:;
  // r18 = `==`(r17, "numeric")
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_args160[1] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty());
  // if c10 then L218() else L11(c10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L218()
    goto L218_;
  } else {
  // L11(c10)
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c10_;
    goto L11_;
  }

L218_:;
  // lf = ld lf
  Rsh_Fir_reg_lf = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L219() else D5()
  // L219()
  goto L219_;

D5_:;
  // deopt 28 [c10, lf]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_lf;
  Rsh_Fir_deopt(28, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L219_:;
  // lf1 = force? lf
  Rsh_Fir_reg_lf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lf);
  // checkMissing(lf1)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_lf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty()));
  // r19 = `==`(lf1, 1)
  SEXP Rsh_Fir_array_args163[2];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_lf1_;
  Rsh_Fir_array_args163[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // c13 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty());
  // c14 = `&&`(c10, c13)
  SEXP Rsh_Fir_array_args165[2];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty());
  // goto L11(c14)
  // L11(c14)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c14_;
  goto L11_;

L221_:;
  // sym3 = ldf `is.finite`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base3 = ldf `is.finite` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args166);
  // if guard3 then L222() else L223()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L222()
    goto L222_;
  } else {
  // L223()
    goto L223_;
  }

L222_:;
  // from7 = ld from
  Rsh_Fir_reg_from7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L224() else D6()
  // L224()
  goto L224_;

L223_:;
  // r20 = dyn base3(<sym from>)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args167, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L13(r20)
  // L13(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L13_;

D6_:;
  // deopt 35 [from7]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_from7_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L224_:;
  // from8 = force? from7
  Rsh_Fir_reg_from8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from7_);
  // checkMissing(from8)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_from8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty()));
  // is_finite = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r22 = dyn is_finite(from8)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_from8_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite, 1, Rsh_Fir_array_args169, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L225() else D7()
  // L225()
  goto L225_;

D7_:;
  // deopt 38 [r22]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L225_:;
  // goto L13(r22)
  // L13(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L13_;

L226_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L227() else D8()
  // L227()
  goto L227_;

D8_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L227_:;
  // r24 = dyn stop("'from' must be a finite number")
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args170, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L228() else D9()
  // L228()
  goto L228_;

D9_:;
  // deopt 43 [r24]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L228_:;
  // goto L15()
  // L15()
  goto L15_;

D10_:;
  // deopt 47 [1, from9]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_from9_;
  Rsh_Fir_deopt(47, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L230_:;
  // from10 = force? from9
  Rsh_Fir_reg_from10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from9_);
  // checkMissing(from10)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_from10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty()));
  // r26 = `:`(1, from10)
  SEXP Rsh_Fir_array_args172[2];
  Rsh_Fir_array_args172[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args172[1] = Rsh_Fir_reg_from10_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty());
  // goto L16(r26)
  // L16(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L16_;

D11_:;
  // deopt 50 [lf2]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_lf2_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L232_:;
  // lf3 = force? lf2
  Rsh_Fir_reg_lf3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lf2_);
  // checkMissing(lf3)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_lf3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty()));
  // c18 = `as.logical`(lf3)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_lf3_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty());
  // if c18 then L233() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L233()
    goto L233_;
  } else {
  // L17()
    goto L17_;
  }

L233_:;
  // lf4 = ld lf
  Rsh_Fir_reg_lf4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L234() else D12()
  // L234()
  goto L234_;

D12_:;
  // deopt 53 [1, lf4]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_lf4_;
  Rsh_Fir_deopt(53, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L234_:;
  // lf5 = force? lf4
  Rsh_Fir_reg_lf5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lf4_);
  // checkMissing(lf5)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_lf5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty()));
  // r28 = `:`(1, lf5)
  SEXP Rsh_Fir_array_args176[2];
  Rsh_Fir_array_args176[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args176[1] = Rsh_Fir_reg_lf5_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty());
  // goto L16(r28)
  // L16(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L16_;

D13_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L236_:;
  // r29 = dyn integer()
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_integer, 0, NULL, NULL, CCP, RHO);
  // check L237() else D14()
  // L237()
  goto L237_;

D14_:;
  // deopt 58 [r29]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L237_:;
  // goto L16(r29)
  // L16(r29)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r29_;
  goto L16_;

L240_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r34 = dyn missing1(<sym along.with>)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args177, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L19(r34)
  // L19(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L19_;

L241_:;
  // r32 = dyn base4(<sym along.with>)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args178, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L19(r32)
  // L19(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L19_;

L242_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args179[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args179);
  // if guard5 then L243() else L244()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L243()
    goto L243_;
  } else {
  // L244()
    goto L244_;
  }

L243_:;
  // along_with1 = ld `along.with`
  Rsh_Fir_reg_along_with1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L245() else D15()
  // L245()
  goto L245_;

L244_:;
  // r36 = dyn base5(<sym along.with>)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args180, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L21(r36)
  // L21(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L21_;

D15_:;
  // deopt 68 [along_with1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_along_with1_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L245_:;
  // along_with2 = force? along_with1
  Rsh_Fir_reg_along_with2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_along_with1_);
  // checkMissing(along_with2)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_along_with2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r38 = dyn length1(along_with2)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_along_with2_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args182, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L246() else D16()
  // L246()
  goto L246_;

D16_:;
  // deopt 71 [r38]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L246_:;
  // goto L21(r38)
  // L21(r38)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L21_;

D17_:;
  // deopt 73 [One]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_One;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L247_:;
  // One1 = force? One
  Rsh_Fir_reg_One1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_One);
  // checkMissing(One1)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_One1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty()));
  // c20 = `as.logical`(One1)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_One1_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty());
  // if c20 then L248() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L248()
    goto L248_;
  } else {
  // L22()
    goto L22_;
  }

L248_:;
  // length_out3 = ld `length.out`
  Rsh_Fir_reg_length_out3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L249() else D18()
  // L249()
  goto L249_;

D18_:;
  // deopt 75 [length_out3]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_length_out3_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L249_:;
  // length_out4 = force? length_out3
  Rsh_Fir_reg_length_out4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out3_);
  // checkMissing(length_out4)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_length_out4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty()));
  // c21 = `as.logical`(length_out4)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_length_out4_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty());
  // if c21 then L250() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L250()
    goto L250_;
  } else {
  // L23()
    goto L23_;
  }

L250_:;
  // sym6 = ldf seq_len
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base6 = ldf seq_len in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args187[2];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args187[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args187);
  // if guard6 then L251() else L252()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L251()
    goto L251_;
  } else {
  // L252()
    goto L252_;
  }

L251_:;
  // length_out5 = ld `length.out`
  Rsh_Fir_reg_length_out5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L253() else D19()
  // L253()
  goto L253_;

L252_:;
  // r39 = dyn base6(<sym length.out>)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args188, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L24(r39)
  // L24(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L24_;

D19_:;
  // deopt 78 [length_out5]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_length_out5_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L253_:;
  // length_out6 = force? length_out5
  Rsh_Fir_reg_length_out6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out5_);
  // checkMissing(length_out6)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_length_out6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty()));
  // r41 = seq_len(length_out6)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_length_out6_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty());
  // goto L24(r41)
  // L24(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L24_;

D20_:;
  // deopt 82 []
  Rsh_Fir_deopt(82, 0, NULL, CCP, RHO);
  return R_NilValue;

L255_:;
  // r43 = dyn integer1()
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_integer1_, 0, NULL, NULL, CCP, RHO);
  // check L256() else D21()
  // L256()
  goto L256_;

D21_:;
  // deopt 83 [r43]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L256_:;
  // goto L25(r43)
  // L25(r43)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r43_;
  goto L25_;

L259_:;
  // length_out7 = ld `length.out`
  Rsh_Fir_reg_length_out7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L261() else D22()
  // L261()
  goto L261_;

L260_:;
  // r46 = dyn base7(<sym length.out>)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args191, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L27(r46)
  // L27(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L27_;

D22_:;
  // deopt 88 [length_out7]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_length_out7_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L261_:;
  // length_out8 = force? length_out7
  Rsh_Fir_reg_length_out8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out7_);
  // checkMissing(length_out8)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_length_out8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty()));
  // c22 = `is.integer`(length_out8)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_length_out8_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(386, CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty());
  // goto L27(c22)
  // L27(c22)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_c22_;
  goto L27_;

L263_:;
  // missing2 = ldf missing in base
  Rsh_Fir_reg_missing2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r51 = dyn missing2(<sym length.out>)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing2_, 1, Rsh_Fir_array_args194, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L29(r51)
  // L29(r51)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r51_;
  goto L29_;

L264_:;
  // r49 = dyn base8(<sym length.out>)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args195, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L29(r49)
  // L29(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L29_;

L265_:;
  // sym9 = ldf length
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base9 = ldf length in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args196[2];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args196[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args196);
  // if guard9 then L266() else L267()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L266()
    goto L266_;
  } else {
  // L267()
    goto L267_;
  }

L266_:;
  // length_out9 = ld `length.out`
  Rsh_Fir_reg_length_out9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L268() else D23()
  // L268()
  goto L268_;

L267_:;
  // r53 = dyn base9(<sym length.out>)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args197, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L31(r53)
  // L31(r53)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L31_;

D23_:;
  // deopt 98 [length_out9]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_length_out9_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L268_:;
  // length_out10 = force? length_out9
  Rsh_Fir_reg_length_out10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out9_);
  // checkMissing(length_out10)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_length_out10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r55 = dyn length2(length_out10)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_length_out10_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args199, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L269() else D24()
  // L269()
  goto L269_;

D24_:;
  // deopt 101 [r55]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L269_:;
  // goto L31(r55)
  // L31(r55)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r55_;
  goto L31_;

D25_:;
  // deopt 103 [len]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_len;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L270_:;
  // len1 = force? len
  Rsh_Fir_reg_len1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_len);
  // checkMissing(len1)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_len1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty()));
  // r56 = `!`(len1)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_len1_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty());
  // c24 = `as.logical`(r56)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty());
  // if c24 then L271() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L271()
    goto L271_;
  } else {
  // L32()
    goto L32_;
  }

L271_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L272() else D26()
  // L272()
  goto L272_;

D26_:;
  // deopt 107 []
  Rsh_Fir_deopt(107, 0, NULL, CCP, RHO);
  return R_NilValue;

L272_:;
  // r57 = dyn stop1("argument 'length.out' must be of length 1")
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args203, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L273() else D27()
  // L273()
  goto L273_;

D27_:;
  // deopt 109 [r57]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L273_:;
  // goto L33()
  // L33()
  goto L33_;

D28_:;
  // deopt 112 [len2]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_len2_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L275_:;
  // len3 = force? len2
  Rsh_Fir_reg_len3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_len2_);
  // checkMissing(len3)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_len3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty()));
  // r59 = `>`(len3, 1)
  SEXP Rsh_Fir_array_args205[2];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_len3_;
  Rsh_Fir_array_args205[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args205, Rsh_Fir_param_types_empty());
  // c25 = `as.logical`(r59)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty());
  // if c25 then L276() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L276()
    goto L276_;
  } else {
  // L34()
    goto L34_;
  }

L276_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // check L277() else D29()
  // L277()
  goto L277_;

D29_:;
  // deopt 117 []
  Rsh_Fir_deopt(117, 0, NULL, CCP, RHO);
  return R_NilValue;

L277_:;
  // r60 = dyn warning("first element used of 'length.out' argument")
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args207, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L278() else D30()
  // L278()
  goto L278_;

D30_:;
  // deopt 119 [r60]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L278_:;
  // length_out11 = ld `length.out`
  Rsh_Fir_reg_length_out11_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L279() else D31()
  // L279()
  goto L279_;

D31_:;
  // deopt 120 [length_out11]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_length_out11_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L279_:;
  // length_out12 = force? length_out11
  Rsh_Fir_reg_length_out12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out11_);
  // checkMissing(length_out12)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_length_out12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty()));
  // c26 = `is.object`(length_out12)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_length_out12_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty());
  // if c26 then L280() else L281(length_out12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L280()
    goto L280_;
  } else {
  // L281(length_out12)
    Rsh_Fir_reg_length_out14_ = Rsh_Fir_reg_length_out12_;
    goto L281_;
  }

L280_:;
  // dr = tryDispatchBuiltin.1("[", length_out12)
  SEXP Rsh_Fir_array_args210[2];
  Rsh_Fir_array_args210[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args210[1] = Rsh_Fir_reg_length_out12_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args210);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty());
  // if dc then L282() else L281(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L282()
    goto L282_;
  } else {
  // L281(dr)
    Rsh_Fir_reg_length_out14_ = Rsh_Fir_reg_dr;
    goto L281_;
  }

L281_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r61 = dyn __(length_out14, 1)
  SEXP Rsh_Fir_array_args212[2];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_length_out14_;
  Rsh_Fir_array_args212[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args212, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L35(r61)
  // L35(r61)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r61_;
  goto L35_;

L282_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args213, Rsh_Fir_param_types_empty());
  // goto L35(dx)
  // L35(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L35_;

D32_:;
  // deopt 129 []
  Rsh_Fir_deopt(129, 0, NULL, CCP, RHO);
  return R_NilValue;

L284_:;
  // p2 = prom<V +>{
  //   length_out15 = ld `length.out`;
  //   length_out16 = force? length_out15;
  //   checkMissing(length_out16);
  //   return length_out16;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3182225035_2, CCP, RHO);
  // r63 = dyn is_logint(p2)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_logint, 1, Rsh_Fir_array_args215, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L285() else D33()
  // L285()
  goto L285_;

D33_:;
  // deopt 131 [r63]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L285_:;
  // st intn1 = r63
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r63_, RHO);
  (void)(Rsh_Fir_reg_r63_);
  // r64 = `!`(r63)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args216, Rsh_Fir_param_types_empty());
  // c27 = `as.logical`(r64)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args217, Rsh_Fir_param_types_empty());
  // if c27 then L286() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L286()
    goto L286_;
  } else {
  // L37()
    goto L37_;
  }

L286_:;
  // sym10 = ldf `as.numeric`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base10 = ldf `as.numeric` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args218[2];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args218[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args218);
  // if guard10 then L287() else L288()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L287()
    goto L287_;
  } else {
  // L288()
    goto L288_;
  }

L287_:;
  // sym11 = ldf ceiling
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base11 = ldf ceiling in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args219[2];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args219[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args219);
  // if guard11 then L289() else L290()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L289()
    goto L289_;
  } else {
  // L290()
    goto L290_;
  }

L288_:;
  // r65 = dyn base10(<lang ceiling(length.out)>)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args220, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L38(r65)
  // L38(r65)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r65_;
  goto L38_;

L289_:;
  // length_out17 = ld `length.out`
  Rsh_Fir_reg_length_out17_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L291() else D34()
  // L291()
  goto L291_;

L290_:;
  // r67 = dyn base11(<sym length.out>)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args221, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L39(r67)
  // L39(r67)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r67_;
  goto L39_;

D34_:;
  // deopt 137 [length_out17]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_length_out17_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L291_:;
  // length_out18 = force? length_out17
  Rsh_Fir_reg_length_out18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out17_);
  // checkMissing(length_out18)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_length_out18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args222, Rsh_Fir_param_types_empty()));
  // r69 = ceiling(length_out18)
  SEXP Rsh_Fir_array_args223[1];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_length_out18_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_builtin(168, CCP, RHO, 1, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty());
  // goto L39(r69)
  // L39(r69)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r69_;
  goto L39_;

D35_:;
  // deopt 141 [r70]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L292_:;
  // goto L38(r70)
  // L38(r70)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r70_;
  goto L38_;

D36_:;
  // deopt 148 []
  Rsh_Fir_deopt(148, 0, NULL, CCP, RHO);
  return R_NilValue;

L295_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // r72 = dyn chkDots[`...`](ddd1)
  SEXP Rsh_Fir_array_args224[1];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_chkDots, 1, Rsh_Fir_array_args224, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L296() else D37()
  // L296()
  goto L296_;

D37_:;
  // deopt 150 [r72]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(150, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L296_:;
  // sym12 = ldf missing
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base12 = ldf missing in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args225[2];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args225[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args225);
  // if guard12 then L297() else L298()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L297()
    goto L297_;
  } else {
  // L298()
    goto L298_;
  }

L297_:;
  // missing3 = ldf missing in base
  Rsh_Fir_reg_missing3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r75 = dyn missing3(<sym from>)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing3_, 1, Rsh_Fir_array_args226, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L41(r75)
  // L41(r75)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r75_;
  goto L41_;

L298_:;
  // r73 = dyn base12(<sym from>)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args227, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L41(r73)
  // L41(r73)
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r73_;
  goto L41_;

L299_:;
  // sym13 = ldf length
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base13 = ldf length in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args228[2];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args228[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args228);
  // if guard13 then L300() else L301()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L300()
    goto L300_;
  } else {
  // L301()
    goto L301_;
  }

L300_:;
  // from11 = ld from
  Rsh_Fir_reg_from11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L302() else D38()
  // L302()
  goto L302_;

L301_:;
  // r77 = dyn base13(<sym from>)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args229, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L43(c28, r77)
  // L43(c28, r77)
  Rsh_Fir_reg_c33_ = Rsh_Fir_reg_c28_;
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r77_;
  goto L43_;

D38_:;
  // deopt 157 [c28, from11]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_c28_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_from11_;
  Rsh_Fir_deopt(157, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L302_:;
  // from12 = force? from11
  Rsh_Fir_reg_from12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from11_);
  // checkMissing(from12)
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_from12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args230, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r79 = dyn length3(from12)
  SEXP Rsh_Fir_array_args231[1];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_from12_;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args231, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L303() else D39()
  // L303()
  goto L303_;

D39_:;
  // deopt 160 [c28, r79]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_c28_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r79_;
  Rsh_Fir_deopt(160, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L303_:;
  // goto L43(c28, r79)
  // L43(c28, r79)
  Rsh_Fir_reg_c33_ = Rsh_Fir_reg_c28_;
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r79_;
  goto L43_;

L305_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L306() else D40()
  // L306()
  goto L306_;

D40_:;
  // deopt 165 []
  Rsh_Fir_deopt(165, 0, NULL, CCP, RHO);
  return R_NilValue;

L306_:;
  // r81 = dyn stop2("'from' must be of length 1")
  SEXP Rsh_Fir_array_args232[1];
  Rsh_Fir_array_args232[0] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args232, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L307() else D41()
  // L307()
  goto L307_;

D41_:;
  // deopt 167 [r81]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_deopt(167, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L307_:;
  // goto L45()
  // L45()
  goto L45_;

L309_:;
  // missing4 = ldf missing in base
  Rsh_Fir_reg_missing4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r85 = dyn missing4(<sym to>)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing4_, 1, Rsh_Fir_array_args233, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L46(r85)
  // L46(r85)
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r85_;
  goto L46_;

L310_:;
  // r83 = dyn base14(<sym to>)
  SEXP Rsh_Fir_array_args234[1];
  Rsh_Fir_array_args234[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args234, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L46(r83)
  // L46(r83)
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r83_;
  goto L46_;

L311_:;
  // sym15 = ldf length
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base15 = ldf length in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args235[2];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args235[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args235);
  // if guard15 then L312() else L313()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L312()
    goto L312_;
  } else {
  // L313()
    goto L313_;
  }

L312_:;
  // to3 = ld to
  Rsh_Fir_reg_to3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L314() else D42()
  // L314()
  goto L314_;

L313_:;
  // r87 = dyn base15(<sym to>)
  SEXP Rsh_Fir_array_args236[1];
  Rsh_Fir_array_args236[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args236, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L48(c38, r87)
  // L48(c38, r87)
  Rsh_Fir_reg_c43_ = Rsh_Fir_reg_c38_;
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r87_;
  goto L48_;

D42_:;
  // deopt 176 [c38, to3]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_to3_;
  Rsh_Fir_deopt(176, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L314_:;
  // to4 = force? to3
  Rsh_Fir_reg_to4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to3_);
  // checkMissing(to4)
  SEXP Rsh_Fir_array_args237[1];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_to4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args237, Rsh_Fir_param_types_empty()));
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r89 = dyn length4(to4)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_to4_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args238, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L315() else D43()
  // L315()
  goto L315_;

D43_:;
  // deopt 179 [c38, r89]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(179, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L315_:;
  // goto L48(c38, r89)
  // L48(c38, r89)
  Rsh_Fir_reg_c43_ = Rsh_Fir_reg_c38_;
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r89_;
  goto L48_;

L317_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L318() else D44()
  // L318()
  goto L318_;

D44_:;
  // deopt 184 []
  Rsh_Fir_deopt(184, 0, NULL, CCP, RHO);
  return R_NilValue;

L318_:;
  // r91 = dyn stop3("'to' must be of length 1")
  SEXP Rsh_Fir_array_args239[1];
  Rsh_Fir_array_args239[0] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args239, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L319() else D45()
  // L319()
  goto L319_;

D45_:;
  // deopt 186 [r91]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_deopt(186, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L319_:;
  // goto L50()
  // L50()
  goto L50_;

L321_:;
  // missing5 = ldf missing in base
  Rsh_Fir_reg_missing5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r95 = dyn missing5(<sym from>)
  SEXP Rsh_Fir_array_args240[1];
  Rsh_Fir_array_args240[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing5_, 1, Rsh_Fir_array_args240, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L51(r95)
  // L51(r95)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r95_;
  goto L51_;

L322_:;
  // r93 = dyn base16(<sym from>)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args241, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L51(r93)
  // L51(r93)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r93_;
  goto L51_;

L323_:;
  // sym17 = ldf `is.finite`
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base17 = ldf `is.finite` in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args242[2];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args242[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args242);
  // if guard17 then L324() else L325()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L324()
    goto L324_;
  } else {
  // L325()
    goto L325_;
  }

L324_:;
  // sym18 = ldf `is.character`
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // base18 = ldf `is.character` in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args243[2];
  Rsh_Fir_array_args243[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args243[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args243);
  // if guard18 then L326() else L327()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L326()
    goto L326_;
  } else {
  // L327()
    goto L327_;
  }

L325_:;
  // r97 = dyn base17(<lang if(is.character(from), `<-`(from, as.numeric(from)), from)>)
  SEXP Rsh_Fir_array_args244[1];
  Rsh_Fir_array_args244[0] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args244, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L53(c48, r97)
  // L53(c48, r97)
  Rsh_Fir_reg_c53_ = Rsh_Fir_reg_c48_;
  Rsh_Fir_reg_r98_ = Rsh_Fir_reg_r97_;
  goto L53_;

L326_:;
  // from13 = ld from
  Rsh_Fir_reg_from13_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L328() else D46()
  // L328()
  goto L328_;

L327_:;
  // r99 = dyn base18(<sym from>)
  SEXP Rsh_Fir_array_args245[1];
  Rsh_Fir_array_args245[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args245, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L54(c48, r99)
  // L54(c48, r99)
  Rsh_Fir_reg_c56_ = Rsh_Fir_reg_c48_;
  Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r99_;
  goto L54_;

D46_:;
  // deopt 196 [c48, from13]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_c48_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_from13_;
  Rsh_Fir_deopt(196, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L328_:;
  // from14 = force? from13
  Rsh_Fir_reg_from14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from13_);
  // checkMissing(from14)
  SEXP Rsh_Fir_array_args246[1];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_from14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args246, Rsh_Fir_param_types_empty()));
  // c57 = `is.character`(from14)
  SEXP Rsh_Fir_array_args247[1];
  Rsh_Fir_array_args247[0] = Rsh_Fir_reg_from14_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args247, Rsh_Fir_param_types_empty());
  // goto L54(c48, c57)
  // L54(c48, c57)
  Rsh_Fir_reg_c56_ = Rsh_Fir_reg_c48_;
  Rsh_Fir_reg_r100_ = Rsh_Fir_reg_c57_;
  goto L54_;

L329_:;
  // sym19 = ldf `as.numeric`
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base19 = ldf `as.numeric` in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args248[2];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args248[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args248);
  // if guard19 then L330() else L331()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L330()
    goto L330_;
  } else {
  // L331()
    goto L331_;
  }

L330_:;
  // from15 = ld from
  Rsh_Fir_reg_from15_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L332() else D47()
  // L332()
  goto L332_;

L331_:;
  // r101 = dyn base19(<sym from>)
  SEXP Rsh_Fir_array_args249[1];
  Rsh_Fir_array_args249[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args249, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L56(c56, r101)
  // L56(c56, r101)
  Rsh_Fir_reg_c63_ = Rsh_Fir_reg_c56_;
  Rsh_Fir_reg_r102_ = Rsh_Fir_reg_r101_;
  goto L56_;

D47_:;
  // deopt 201 [c56, from15]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_c56_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_from15_;
  Rsh_Fir_deopt(201, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L332_:;
  // from16 = force? from15
  Rsh_Fir_reg_from16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from15_);
  // checkMissing(from16)
  SEXP Rsh_Fir_array_args250[1];
  Rsh_Fir_array_args250[0] = Rsh_Fir_reg_from16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args250, Rsh_Fir_param_types_empty()));
  // as_numeric1 = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r103 = dyn as_numeric1(from16)
  SEXP Rsh_Fir_array_args251[1];
  Rsh_Fir_array_args251[0] = Rsh_Fir_reg_from16_;
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric1_, 1, Rsh_Fir_array_args251, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L333() else D48()
  // L333()
  goto L333_;

D48_:;
  // deopt 204 [c56, r103]
  SEXP Rsh_Fir_array_deopt_stack38[2];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_c56_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_r103_;
  Rsh_Fir_deopt(204, 2, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L333_:;
  // goto L56(c56, r103)
  // L56(c56, r103)
  Rsh_Fir_reg_c63_ = Rsh_Fir_reg_c56_;
  Rsh_Fir_reg_r102_ = Rsh_Fir_reg_r103_;
  goto L56_;

D49_:;
  // deopt 206 [c56, from17]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_c56_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_from17_;
  Rsh_Fir_deopt(206, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L335_:;
  // from18 = force? from17
  Rsh_Fir_reg_from18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from17_);
  // checkMissing(from18)
  SEXP Rsh_Fir_array_args252[1];
  Rsh_Fir_array_args252[0] = Rsh_Fir_reg_from18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args252, Rsh_Fir_param_types_empty()));
  // goto L57(c56, from18)
  // L57(c56, from18)
  Rsh_Fir_reg_c64_ = Rsh_Fir_reg_c56_;
  Rsh_Fir_reg_r104_ = Rsh_Fir_reg_from18_;
  goto L57_;

D50_:;
  // deopt 209 [c64, r105]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_c64_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_r105_;
  Rsh_Fir_deopt(209, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L336_:;
  // goto L53(c64, r105)
  // L53(c64, r105)
  Rsh_Fir_reg_c53_ = Rsh_Fir_reg_c64_;
  Rsh_Fir_reg_r98_ = Rsh_Fir_reg_r105_;
  goto L53_;

L338_:;
  // stop4 = ldf stop
  Rsh_Fir_reg_stop4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L339() else D51()
  // L339()
  goto L339_;

D51_:;
  // deopt 213 []
  Rsh_Fir_deopt(213, 0, NULL, CCP, RHO);
  return R_NilValue;

L339_:;
  // r107 = dyn stop4("'from' must be a finite number")
  SEXP Rsh_Fir_array_args253[1];
  Rsh_Fir_array_args253[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop4_, 1, Rsh_Fir_array_args253, Rsh_Fir_array_arg_names54, CCP, RHO);
  // check L340() else D52()
  // L340()
  goto L340_;

D52_:;
  // deopt 215 [r107]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r107_;
  Rsh_Fir_deopt(215, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L340_:;
  // goto L59()
  // L59()
  goto L59_;

L342_:;
  // missing6 = ldf missing in base
  Rsh_Fir_reg_missing6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r111 = dyn missing6(<sym to>)
  SEXP Rsh_Fir_array_args254[1];
  Rsh_Fir_array_args254[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names55[1];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing6_, 1, Rsh_Fir_array_args254, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L60(r111)
  // L60(r111)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r111_;
  goto L60_;

L343_:;
  // r109 = dyn base20(<sym to>)
  SEXP Rsh_Fir_array_args255[1];
  Rsh_Fir_array_args255[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 1, Rsh_Fir_array_args255, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L60(r109)
  // L60(r109)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r109_;
  goto L60_;

L344_:;
  // sym21 = ldf `is.finite`
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base21 = ldf `is.finite` in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args256[2];
  Rsh_Fir_array_args256[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args256[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args256);
  // if guard21 then L345() else L346()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L345()
    goto L345_;
  } else {
  // L346()
    goto L346_;
  }

L345_:;
  // sym22 = ldf `is.character`
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // base22 = ldf `is.character` in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 56), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args257[2];
  Rsh_Fir_array_args257[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args257[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args257);
  // if guard22 then L347() else L348()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L347()
    goto L347_;
  } else {
  // L348()
    goto L348_;
  }

L346_:;
  // r113 = dyn base21(<lang if(is.character(to), `<-`(to, as.numeric(to)), to)>)
  SEXP Rsh_Fir_array_args258[1];
  Rsh_Fir_array_args258[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names57[1];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 1, Rsh_Fir_array_args258, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L62(c69, r113)
  // L62(c69, r113)
  Rsh_Fir_reg_c74_ = Rsh_Fir_reg_c69_;
  Rsh_Fir_reg_r114_ = Rsh_Fir_reg_r113_;
  goto L62_;

L347_:;
  // to5 = ld to
  Rsh_Fir_reg_to5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L349() else D53()
  // L349()
  goto L349_;

L348_:;
  // r115 = dyn base22(<sym to>)
  SEXP Rsh_Fir_array_args259[1];
  Rsh_Fir_array_args259[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names58[1];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 1, Rsh_Fir_array_args259, Rsh_Fir_array_arg_names58, CCP, RHO);
  // goto L63(c69, r115)
  // L63(c69, r115)
  Rsh_Fir_reg_c77_ = Rsh_Fir_reg_c69_;
  Rsh_Fir_reg_r116_ = Rsh_Fir_reg_r115_;
  goto L63_;

D53_:;
  // deopt 225 [c69, to5]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_c69_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_to5_;
  Rsh_Fir_deopt(225, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L349_:;
  // to6 = force? to5
  Rsh_Fir_reg_to6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to5_);
  // checkMissing(to6)
  SEXP Rsh_Fir_array_args260[1];
  Rsh_Fir_array_args260[0] = Rsh_Fir_reg_to6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args260, Rsh_Fir_param_types_empty()));
  // c78 = `is.character`(to6)
  SEXP Rsh_Fir_array_args261[1];
  Rsh_Fir_array_args261[0] = Rsh_Fir_reg_to6_;
  Rsh_Fir_reg_c78_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args261, Rsh_Fir_param_types_empty());
  // goto L63(c69, c78)
  // L63(c69, c78)
  Rsh_Fir_reg_c77_ = Rsh_Fir_reg_c69_;
  Rsh_Fir_reg_r116_ = Rsh_Fir_reg_c78_;
  goto L63_;

L350_:;
  // sym23 = ldf `as.numeric`
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base23 = ldf `as.numeric` in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args262[2];
  Rsh_Fir_array_args262[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args262[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args262);
  // if guard23 then L351() else L352()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L351()
    goto L351_;
  } else {
  // L352()
    goto L352_;
  }

L351_:;
  // to7 = ld to
  Rsh_Fir_reg_to7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L353() else D54()
  // L353()
  goto L353_;

L352_:;
  // r117 = dyn base23(<sym to>)
  SEXP Rsh_Fir_array_args263[1];
  Rsh_Fir_array_args263[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names59[1];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 1, Rsh_Fir_array_args263, Rsh_Fir_array_arg_names59, CCP, RHO);
  // goto L65(c77, r117)
  // L65(c77, r117)
  Rsh_Fir_reg_c84_ = Rsh_Fir_reg_c77_;
  Rsh_Fir_reg_r118_ = Rsh_Fir_reg_r117_;
  goto L65_;

D54_:;
  // deopt 230 [c77, to7]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_c77_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_to7_;
  Rsh_Fir_deopt(230, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L353_:;
  // to8 = force? to7
  Rsh_Fir_reg_to8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to7_);
  // checkMissing(to8)
  SEXP Rsh_Fir_array_args264[1];
  Rsh_Fir_array_args264[0] = Rsh_Fir_reg_to8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args264, Rsh_Fir_param_types_empty()));
  // as_numeric2 = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r119 = dyn as_numeric2(to8)
  SEXP Rsh_Fir_array_args265[1];
  Rsh_Fir_array_args265[0] = Rsh_Fir_reg_to8_;
  SEXP Rsh_Fir_array_arg_names60[1];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric2_, 1, Rsh_Fir_array_args265, Rsh_Fir_array_arg_names60, CCP, RHO);
  // check L354() else D55()
  // L354()
  goto L354_;

D55_:;
  // deopt 233 [c77, r119]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_c77_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_r119_;
  Rsh_Fir_deopt(233, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L354_:;
  // goto L65(c77, r119)
  // L65(c77, r119)
  Rsh_Fir_reg_c84_ = Rsh_Fir_reg_c77_;
  Rsh_Fir_reg_r118_ = Rsh_Fir_reg_r119_;
  goto L65_;

D56_:;
  // deopt 235 [c77, to9]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_c77_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_to9_;
  Rsh_Fir_deopt(235, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L356_:;
  // to10 = force? to9
  Rsh_Fir_reg_to10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to9_);
  // checkMissing(to10)
  SEXP Rsh_Fir_array_args266[1];
  Rsh_Fir_array_args266[0] = Rsh_Fir_reg_to10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args266, Rsh_Fir_param_types_empty()));
  // goto L66(c77, to10)
  // L66(c77, to10)
  Rsh_Fir_reg_c85_ = Rsh_Fir_reg_c77_;
  Rsh_Fir_reg_r120_ = Rsh_Fir_reg_to10_;
  goto L66_;

D57_:;
  // deopt 238 [c85, r121]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_c85_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_r121_;
  Rsh_Fir_deopt(238, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L357_:;
  // goto L62(c85, r121)
  // L62(c85, r121)
  Rsh_Fir_reg_c74_ = Rsh_Fir_reg_c85_;
  Rsh_Fir_reg_r114_ = Rsh_Fir_reg_r121_;
  goto L62_;

L359_:;
  // stop5 = ldf stop
  Rsh_Fir_reg_stop5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L360() else D58()
  // L360()
  goto L360_;

D58_:;
  // deopt 242 []
  Rsh_Fir_deopt(242, 0, NULL, CCP, RHO);
  return R_NilValue;

L360_:;
  // r123 = dyn stop5("'to' must be a finite number")
  SEXP Rsh_Fir_array_args267[1];
  Rsh_Fir_array_args267[0] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names61[1];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_reg_r123_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop5_, 1, Rsh_Fir_array_args267, Rsh_Fir_array_arg_names61, CCP, RHO);
  // check L361() else D59()
  // L361()
  goto L361_;

D59_:;
  // deopt 244 [r123]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r123_;
  Rsh_Fir_deopt(244, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L361_:;
  // goto L68()
  // L68()
  goto L68_;

L363_:;
  // length_out19 = ld `length.out`
  Rsh_Fir_reg_length_out19_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L365() else D60()
  // L365()
  goto L365_;

L364_:;
  // r125 = dyn base24(<sym length.out>)
  SEXP Rsh_Fir_array_args268[1];
  Rsh_Fir_array_args268[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names62[1];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_reg_r125_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base24_, 1, Rsh_Fir_array_args268, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L69(r125)
  // L69(r125)
  Rsh_Fir_reg_r126_ = Rsh_Fir_reg_r125_;
  goto L69_;

D60_:;
  // deopt 248 [length_out19]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_length_out19_;
  Rsh_Fir_deopt(248, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L365_:;
  // length_out20 = force? length_out19
  Rsh_Fir_reg_length_out20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out19_);
  // checkMissing(length_out20)
  SEXP Rsh_Fir_array_args269[1];
  Rsh_Fir_array_args269[0] = Rsh_Fir_reg_length_out20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args269, Rsh_Fir_param_types_empty()));
  // c90 = `==`(length_out20, NULL)
  SEXP Rsh_Fir_array_args270[2];
  Rsh_Fir_array_args270[0] = Rsh_Fir_reg_length_out20_;
  Rsh_Fir_array_args270[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_c90_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args270, Rsh_Fir_param_types_empty());
  // goto L69(c90)
  // L69(c90)
  Rsh_Fir_reg_r126_ = Rsh_Fir_reg_c90_;
  goto L69_;

L366_:;
  // sym25 = ldf missing
  Rsh_Fir_reg_sym25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base25 = ldf missing in base
  Rsh_Fir_reg_base25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard25 = `==`.4(sym25, base25)
  SEXP Rsh_Fir_array_args271[2];
  Rsh_Fir_array_args271[0] = Rsh_Fir_reg_sym25_;
  Rsh_Fir_array_args271[1] = Rsh_Fir_reg_base25_;
  Rsh_Fir_reg_guard25_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args271);
  // if guard25 then L367() else L368()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard25_)) {
  // L367()
    goto L367_;
  } else {
  // L368()
    goto L368_;
  }

L367_:;
  // missing7 = ldf missing in base
  Rsh_Fir_reg_missing7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r129 = dyn missing7(<sym by>)
  SEXP Rsh_Fir_array_args272[1];
  Rsh_Fir_array_args272[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names63[1];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_reg_r129_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing7_, 1, Rsh_Fir_array_args272, Rsh_Fir_array_arg_names63, CCP, RHO);
  // goto L71(r129)
  // L71(r129)
  Rsh_Fir_reg_r128_ = Rsh_Fir_reg_r129_;
  goto L71_;

L368_:;
  // r127 = dyn base25(<sym by>)
  SEXP Rsh_Fir_array_args273[1];
  Rsh_Fir_array_args273[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names64[1];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base25_, 1, Rsh_Fir_array_args273, Rsh_Fir_array_arg_names64, CCP, RHO);
  // goto L71(r127)
  // L71(r127)
  Rsh_Fir_reg_r128_ = Rsh_Fir_reg_r127_;
  goto L71_;

L369_:;
  // from19 = ld from
  Rsh_Fir_reg_from19_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L370() else D61()
  // L370()
  goto L370_;

D61_:;
  // deopt 254 [from19]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_from19_;
  Rsh_Fir_deopt(254, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L370_:;
  // from20 = force? from19
  Rsh_Fir_reg_from20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from19_);
  // checkMissing(from20)
  SEXP Rsh_Fir_array_args274[1];
  Rsh_Fir_array_args274[0] = Rsh_Fir_reg_from20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args274, Rsh_Fir_param_types_empty()));
  // to11 = ld to
  Rsh_Fir_reg_to11_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L371() else D62()
  // L371()
  goto L371_;

D62_:;
  // deopt 255 [from20, to11]
  SEXP Rsh_Fir_array_deopt_stack50[2];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_from20_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_to11_;
  Rsh_Fir_deopt(255, 2, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L371_:;
  // to12 = force? to11
  Rsh_Fir_reg_to12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to11_);
  // checkMissing(to12)
  SEXP Rsh_Fir_array_args275[1];
  Rsh_Fir_array_args275[0] = Rsh_Fir_reg_to12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args275, Rsh_Fir_param_types_empty()));
  // r130 = `:`(from20, to12)
  SEXP Rsh_Fir_array_args276[2];
  Rsh_Fir_array_args276[0] = Rsh_Fir_reg_from20_;
  Rsh_Fir_array_args276[1] = Rsh_Fir_reg_to12_;
  Rsh_Fir_reg_r130_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args276, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r130
  return Rsh_Fir_reg_r130_;

D63_:;
  // deopt 259 []
  Rsh_Fir_deopt(259, 0, NULL, CCP, RHO);
  return R_NilValue;

L373_:;
  // p3 = prom<V +>{
  //   from21 = ld from;
  //   from22 = force? from21;
  //   checkMissing(from22);
  //   return from22;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3182225035_3, CCP, RHO);
  // r132 = dyn is_logint1(p3)
  SEXP Rsh_Fir_array_args278[1];
  Rsh_Fir_array_args278[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names65[1];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_reg_r132_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_logint1_, 1, Rsh_Fir_array_args278, Rsh_Fir_array_arg_names65, CCP, RHO);
  // check L374() else D64()
  // L374()
  goto L374_;

D64_:;
  // deopt 261 [r132]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r132_;
  Rsh_Fir_deopt(261, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L374_:;
  // c93 = `as.logical`(r132)
  SEXP Rsh_Fir_array_args279[1];
  Rsh_Fir_array_args279[0] = Rsh_Fir_reg_r132_;
  Rsh_Fir_reg_c93_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args279, Rsh_Fir_param_types_empty());
  // if c93 then L375() else L73(c93)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c93_)) {
  // L375()
    goto L375_;
  } else {
  // L73(c93)
    Rsh_Fir_reg_c95_ = Rsh_Fir_reg_c93_;
    goto L73_;
  }

L375_:;
  // is_logint2 = ldf `is.logint`
  Rsh_Fir_reg_is_logint2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L376() else D65()
  // L376()
  goto L376_;

D65_:;
  // deopt 263 [c93]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_c93_;
  Rsh_Fir_deopt(263, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L376_:;
  // p4 = prom<V +>{
  //   to13 = ld to;
  //   to14 = force? to13;
  //   checkMissing(to14);
  //   return to14;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3182225035_4, CCP, RHO);
  // r134 = dyn is_logint2(p4)
  SEXP Rsh_Fir_array_args281[1];
  Rsh_Fir_array_args281[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names66[1];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_reg_r134_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_logint2_, 1, Rsh_Fir_array_args281, Rsh_Fir_array_arg_names66, CCP, RHO);
  // check L377() else D66()
  // L377()
  goto L377_;

D66_:;
  // deopt 265 [c93, r134]
  SEXP Rsh_Fir_array_deopt_stack53[2];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_c93_;
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_r134_;
  Rsh_Fir_deopt(265, 2, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L377_:;
  // c96 = `as.logical`(r134)
  SEXP Rsh_Fir_array_args282[1];
  Rsh_Fir_array_args282[0] = Rsh_Fir_reg_r134_;
  Rsh_Fir_reg_c96_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args282, Rsh_Fir_param_types_empty());
  // c97 = `&&`(c93, c96)
  SEXP Rsh_Fir_array_args283[2];
  Rsh_Fir_array_args283[0] = Rsh_Fir_reg_c93_;
  Rsh_Fir_array_args283[1] = Rsh_Fir_reg_c96_;
  Rsh_Fir_reg_c97_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args283, Rsh_Fir_param_types_empty());
  // goto L73(c97)
  // L73(c97)
  Rsh_Fir_reg_c95_ = Rsh_Fir_reg_c97_;
  goto L73_;

D67_:;
  // deopt 268 [to15]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_to15_;
  Rsh_Fir_deopt(268, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L379_:;
  // to16 = force? to15
  Rsh_Fir_reg_to16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to15_);
  // checkMissing(to16)
  SEXP Rsh_Fir_array_args284[1];
  Rsh_Fir_array_args284[0] = Rsh_Fir_reg_to16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args284, Rsh_Fir_param_types_empty()));
  // int = ld int
  Rsh_Fir_reg_int = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L380() else D68()
  // L380()
  goto L380_;

D68_:;
  // deopt 269 [to16, int]
  SEXP Rsh_Fir_array_deopt_stack55[2];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_to16_;
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_int;
  Rsh_Fir_deopt(269, 2, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L380_:;
  // int1 = force? int
  Rsh_Fir_reg_int1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_int);
  // checkMissing(int1)
  SEXP Rsh_Fir_array_args285[1];
  Rsh_Fir_array_args285[0] = Rsh_Fir_reg_int1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args285, Rsh_Fir_param_types_empty()));
  // c99 = `as.logical`(int1)
  SEXP Rsh_Fir_array_args286[1];
  Rsh_Fir_array_args286[0] = Rsh_Fir_reg_int1_;
  Rsh_Fir_reg_c99_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args286, Rsh_Fir_param_types_empty());
  // if c99 then L381() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c99_)) {
  // L381()
    goto L381_;
  } else {
  // L74()
    goto L74_;
  }

L381_:;
  // sym26 = ldf `as.double`
  Rsh_Fir_reg_sym26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base26 = ldf `as.double` in base
  Rsh_Fir_reg_base26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard26 = `==`.4(sym26, base26)
  SEXP Rsh_Fir_array_args287[2];
  Rsh_Fir_array_args287[0] = Rsh_Fir_reg_sym26_;
  Rsh_Fir_array_args287[1] = Rsh_Fir_reg_base26_;
  Rsh_Fir_reg_guard26_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args287);
  // if guard26 then L382() else L383()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard26_)) {
  // L382()
    goto L382_;
  } else {
  // L383()
    goto L383_;
  }

L382_:;
  // from23 = ld from
  Rsh_Fir_reg_from23_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L384() else D69()
  // L384()
  goto L384_;

L383_:;
  // r135 = dyn base26(<sym from>)
  SEXP Rsh_Fir_array_args288[1];
  Rsh_Fir_array_args288[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names67[1];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_reg_r135_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base26_, 1, Rsh_Fir_array_args288, Rsh_Fir_array_arg_names67, CCP, RHO);
  // goto L75(to16, r135)
  // L75(to16, r135)
  Rsh_Fir_reg_to21_ = Rsh_Fir_reg_to16_;
  Rsh_Fir_reg_r136_ = Rsh_Fir_reg_r135_;
  goto L75_;

D69_:;
  // deopt 273 [to16, from23]
  SEXP Rsh_Fir_array_deopt_stack56[2];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_to16_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_from23_;
  Rsh_Fir_deopt(273, 2, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L384_:;
  // from24 = force? from23
  Rsh_Fir_reg_from24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from23_);
  // checkMissing(from24)
  SEXP Rsh_Fir_array_args289[1];
  Rsh_Fir_array_args289[0] = Rsh_Fir_reg_from24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args289, Rsh_Fir_param_types_empty()));
  // as_double = ldf `as.double` in base
  Rsh_Fir_reg_as_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r137 = dyn as_double(from24)
  SEXP Rsh_Fir_array_args290[1];
  Rsh_Fir_array_args290[0] = Rsh_Fir_reg_from24_;
  SEXP Rsh_Fir_array_arg_names68[1];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_reg_r137_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double, 1, Rsh_Fir_array_args290, Rsh_Fir_array_arg_names68, CCP, RHO);
  // check L385() else D70()
  // L385()
  goto L385_;

D70_:;
  // deopt 276 [to16, r137]
  SEXP Rsh_Fir_array_deopt_stack57[2];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_to16_;
  Rsh_Fir_array_deopt_stack57[1] = Rsh_Fir_reg_r137_;
  Rsh_Fir_deopt(276, 2, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L385_:;
  // goto L75(to16, r137)
  // L75(to16, r137)
  Rsh_Fir_reg_to21_ = Rsh_Fir_reg_to16_;
  Rsh_Fir_reg_r136_ = Rsh_Fir_reg_r137_;
  goto L75_;

D71_:;
  // deopt 277 [to16, from25]
  SEXP Rsh_Fir_array_deopt_stack58[2];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_to16_;
  Rsh_Fir_array_deopt_stack58[1] = Rsh_Fir_reg_from25_;
  Rsh_Fir_deopt(277, 2, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L387_:;
  // from26 = force? from25
  Rsh_Fir_reg_from26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from25_);
  // checkMissing(from26)
  SEXP Rsh_Fir_array_args291[1];
  Rsh_Fir_array_args291[0] = Rsh_Fir_reg_from26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args291, Rsh_Fir_param_types_empty()));
  // goto L76(to16, from26)
  // L76(to16, from26)
  Rsh_Fir_reg_to22_ = Rsh_Fir_reg_to16_;
  Rsh_Fir_reg_r138_ = Rsh_Fir_reg_from26_;
  goto L76_;

D72_:;
  // deopt 281 [del]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_del;
  Rsh_Fir_deopt(281, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L388_:;
  // del1 = force? del
  Rsh_Fir_reg_del1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_del);
  // checkMissing(del1)
  SEXP Rsh_Fir_array_args292[1];
  Rsh_Fir_array_args292[0] = Rsh_Fir_reg_del1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args292, Rsh_Fir_param_types_empty()));
  // r140 = `==`(del1, 0.0)
  SEXP Rsh_Fir_array_args293[2];
  Rsh_Fir_array_args293[0] = Rsh_Fir_reg_del1_;
  Rsh_Fir_array_args293[1] = Rsh_const(CCP, 61);
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args293, Rsh_Fir_param_types_empty());
  // c100 = `as.logical`(r140)
  SEXP Rsh_Fir_array_args294[1];
  Rsh_Fir_array_args294[0] = Rsh_Fir_reg_r140_;
  Rsh_Fir_reg_c100_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args294, Rsh_Fir_param_types_empty());
  // if c100 then L389() else L77(c100)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c100_)) {
  // L389()
    goto L389_;
  } else {
  // L77(c100)
    Rsh_Fir_reg_c102_ = Rsh_Fir_reg_c100_;
    goto L77_;
  }

L389_:;
  // to23 = ld to
  Rsh_Fir_reg_to23_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L390() else D73()
  // L390()
  goto L390_;

D73_:;
  // deopt 285 [c100, to23]
  SEXP Rsh_Fir_array_deopt_stack60[2];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_c100_;
  Rsh_Fir_array_deopt_stack60[1] = Rsh_Fir_reg_to23_;
  Rsh_Fir_deopt(285, 2, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L390_:;
  // to24 = force? to23
  Rsh_Fir_reg_to24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to23_);
  // checkMissing(to24)
  SEXP Rsh_Fir_array_args295[1];
  Rsh_Fir_array_args295[0] = Rsh_Fir_reg_to24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args295, Rsh_Fir_param_types_empty()));
  // r141 = `==`(to24, 0.0)
  SEXP Rsh_Fir_array_args296[2];
  Rsh_Fir_array_args296[0] = Rsh_Fir_reg_to24_;
  Rsh_Fir_array_args296[1] = Rsh_const(CCP, 61);
  Rsh_Fir_reg_r141_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args296, Rsh_Fir_param_types_empty());
  // c103 = `as.logical`(r141)
  SEXP Rsh_Fir_array_args297[1];
  Rsh_Fir_array_args297[0] = Rsh_Fir_reg_r141_;
  Rsh_Fir_reg_c103_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args297, Rsh_Fir_param_types_empty());
  // c104 = `&&`(c100, c103)
  SEXP Rsh_Fir_array_args298[2];
  Rsh_Fir_array_args298[0] = Rsh_Fir_reg_c100_;
  Rsh_Fir_array_args298[1] = Rsh_Fir_reg_c103_;
  Rsh_Fir_reg_c104_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args298, Rsh_Fir_param_types_empty());
  // goto L77(c104)
  // L77(c104)
  Rsh_Fir_reg_c102_ = Rsh_Fir_reg_c104_;
  goto L77_;

L392_:;
  // to25 = ld to
  Rsh_Fir_reg_to25_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L393() else D74()
  // L393()
  goto L393_;

D74_:;
  // deopt 290 [to25]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_to25_;
  Rsh_Fir_deopt(290, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L393_:;
  // to26 = force? to25
  Rsh_Fir_reg_to26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to25_);
  // checkMissing(to26)
  SEXP Rsh_Fir_array_args299[1];
  Rsh_Fir_array_args299[0] = Rsh_Fir_reg_to26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args299, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return to26
  return Rsh_Fir_reg_to26_;

L396_:;
  // by1 = ld by
  Rsh_Fir_reg_by1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L398() else D75()
  // L398()
  goto L398_;

L397_:;
  // r144 = dyn base27(<sym by>)
  SEXP Rsh_Fir_array_args300[1];
  Rsh_Fir_array_args300[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names69[1];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_reg_r144_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base27_, 1, Rsh_Fir_array_args300, Rsh_Fir_array_arg_names69, CCP, RHO);
  // goto L80(r144)
  // L80(r144)
  Rsh_Fir_reg_r145_ = Rsh_Fir_reg_r144_;
  goto L80_;

D75_:;
  // deopt 297 [by1]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_by1_;
  Rsh_Fir_deopt(297, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L398_:;
  // by2 = force? by1
  Rsh_Fir_reg_by2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by1_);
  // checkMissing(by2)
  SEXP Rsh_Fir_array_args301[1];
  Rsh_Fir_array_args301[0] = Rsh_Fir_reg_by2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args301, Rsh_Fir_param_types_empty()));
  // length5 = ldf length in base
  Rsh_Fir_reg_length5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r146 = dyn length5(by2)
  SEXP Rsh_Fir_array_args302[1];
  Rsh_Fir_array_args302[0] = Rsh_Fir_reg_by2_;
  SEXP Rsh_Fir_array_arg_names70[1];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_reg_r146_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length5_, 1, Rsh_Fir_array_args302, Rsh_Fir_array_arg_names70, CCP, RHO);
  // check L399() else D76()
  // L399()
  goto L399_;

D76_:;
  // deopt 300 [r146]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_r146_;
  Rsh_Fir_deopt(300, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L399_:;
  // goto L80(r146)
  // L80(r146)
  Rsh_Fir_reg_r145_ = Rsh_Fir_reg_r146_;
  goto L80_;

L400_:;
  // stop6 = ldf stop
  Rsh_Fir_reg_stop6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L401() else D77()
  // L401()
  goto L401_;

D77_:;
  // deopt 304 []
  Rsh_Fir_deopt(304, 0, NULL, CCP, RHO);
  return R_NilValue;

L401_:;
  // r148 = dyn stop6("'by' must be of length 1")
  SEXP Rsh_Fir_array_args303[1];
  Rsh_Fir_array_args303[0] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names71[1];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_reg_r148_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop6_, 1, Rsh_Fir_array_args303, Rsh_Fir_array_arg_names71, CCP, RHO);
  // check L402() else D78()
  // L402()
  goto L402_;

D78_:;
  // deopt 306 [r148]
  SEXP Rsh_Fir_array_deopt_stack64[1];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_r148_;
  Rsh_Fir_deopt(306, 1, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L402_:;
  // goto L82()
  // L82()
  goto L82_;

D79_:;
  // deopt 310 []
  Rsh_Fir_deopt(310, 0, NULL, CCP, RHO);
  return R_NilValue;

L404_:;
  // p5 = prom<V +>{
  //   by3 = ld by;
  //   by4 = force? by3;
  //   checkMissing(by4);
  //   return by4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3182225035_5, CCP, RHO);
  // r151 = dyn is_logint3(p5)
  SEXP Rsh_Fir_array_args305[1];
  Rsh_Fir_array_args305[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names72[1];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_reg_r151_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_logint3_, 1, Rsh_Fir_array_args305, Rsh_Fir_array_arg_names72, CCP, RHO);
  // check L405() else D80()
  // L405()
  goto L405_;

D80_:;
  // deopt 312 [r151]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_r151_;
  Rsh_Fir_deopt(312, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L405_:;
  // r152 = `!`(r151)
  SEXP Rsh_Fir_array_args306[1];
  Rsh_Fir_array_args306[0] = Rsh_Fir_reg_r151_;
  Rsh_Fir_reg_r152_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args306, Rsh_Fir_param_types_empty());
  // c108 = `as.logical`(r152)
  SEXP Rsh_Fir_array_args307[1];
  Rsh_Fir_array_args307[0] = Rsh_Fir_reg_r152_;
  Rsh_Fir_reg_c108_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args307, Rsh_Fir_param_types_empty());
  // if c108 then L406() else L83()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c108_)) {
  // L406()
    goto L406_;
  } else {
  // L83()
    goto L83_;
  }

L406_:;
  // st int = FALSE
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_const(CCP, 63), RHO);
  (void)(Rsh_const(CCP, 63));
  // goto L84()
  // L84()
  goto L84_;

D81_:;
  // deopt 317 [int2]
  SEXP Rsh_Fir_array_deopt_stack66[1];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_int2_;
  Rsh_Fir_deopt(317, 1, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L408_:;
  // int3 = force? int2
  Rsh_Fir_reg_int3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_int2_);
  // checkMissing(int3)
  SEXP Rsh_Fir_array_args308[1];
  Rsh_Fir_array_args308[0] = Rsh_Fir_reg_int3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args308, Rsh_Fir_param_types_empty()));
  // r154 = `!`(int3)
  SEXP Rsh_Fir_array_args309[1];
  Rsh_Fir_array_args309[0] = Rsh_Fir_reg_int3_;
  Rsh_Fir_reg_r154_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args309, Rsh_Fir_param_types_empty());
  // c109 = `as.logical`(r154)
  SEXP Rsh_Fir_array_args310[1];
  Rsh_Fir_array_args310[0] = Rsh_Fir_reg_r154_;
  Rsh_Fir_reg_c109_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args310, Rsh_Fir_param_types_empty());
  // if c109 then L409() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c109_)) {
  // L409()
    goto L409_;
  } else {
  // L85()
    goto L85_;
  }

L409_:;
  // l = ld by
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // storage_mode__ = ldf `storage.mode<-`
  Rsh_Fir_reg_storage_mode__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 64), RHO);
  // check L410() else D82()
  // L410()
  goto L410_;

D82_:;
  // deopt 323 ["double", l, "double"]
  SEXP Rsh_Fir_array_deopt_stack67[3];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_const(CCP, 65);
  Rsh_Fir_array_deopt_stack67[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack67[2] = Rsh_const(CCP, 65);
  Rsh_Fir_deopt(323, 3, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L410_:;
  // r155 = dyn storage_mode__(l, NULL, "double")
  SEXP Rsh_Fir_array_args311[3];
  Rsh_Fir_array_args311[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args311[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args311[2] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names73[3];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_array_arg_names73[1] = R_MissingArg;
  Rsh_Fir_array_arg_names73[2] = R_MissingArg;
  Rsh_Fir_reg_r155_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode__, 3, Rsh_Fir_array_args311, Rsh_Fir_array_arg_names73, CCP, RHO);
  // check L411() else D83()
  // L411()
  goto L411_;

D83_:;
  // deopt 325 ["double", r155]
  SEXP Rsh_Fir_array_deopt_stack68[2];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_const(CCP, 65);
  Rsh_Fir_array_deopt_stack68[1] = Rsh_Fir_reg_r155_;
  Rsh_Fir_deopt(325, 2, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L411_:;
  // st by = r155
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r155_, RHO);
  (void)(Rsh_Fir_reg_r155_);
  // goto L84()
  // L84()
  goto L84_;

L413_:;
  // del2 = ld del
  Rsh_Fir_reg_del2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L415() else D84()
  // L415()
  goto L415_;

L414_:;
  // r156 = dyn base28(<sym del>)
  SEXP Rsh_Fir_array_args312[1];
  Rsh_Fir_array_args312[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names74[1];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_reg_r156_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base28_, 1, Rsh_Fir_array_args312, Rsh_Fir_array_arg_names74, CCP, RHO);
  // goto L86(r156)
  // L86(r156)
  Rsh_Fir_reg_r157_ = Rsh_Fir_reg_r156_;
  goto L86_;

D84_:;
  // deopt 331 [del2]
  SEXP Rsh_Fir_array_deopt_stack69[1];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_del2_;
  Rsh_Fir_deopt(331, 1, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L415_:;
  // del3 = force? del2
  Rsh_Fir_reg_del3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_del2_);
  // checkMissing(del3)
  SEXP Rsh_Fir_array_args313[1];
  Rsh_Fir_array_args313[0] = Rsh_Fir_reg_del3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args313, Rsh_Fir_param_types_empty()));
  // is_finite3 = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r158 = dyn is_finite3(del3)
  SEXP Rsh_Fir_array_args314[1];
  Rsh_Fir_array_args314[0] = Rsh_Fir_reg_del3_;
  SEXP Rsh_Fir_array_arg_names75[1];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_reg_r158_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite3_, 1, Rsh_Fir_array_args314, Rsh_Fir_array_arg_names75, CCP, RHO);
  // check L416() else D85()
  // L416()
  goto L416_;

D85_:;
  // deopt 334 [r158]
  SEXP Rsh_Fir_array_deopt_stack70[1];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_r158_;
  Rsh_Fir_deopt(334, 1, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L416_:;
  // goto L86(r158)
  // L86(r158)
  Rsh_Fir_reg_r157_ = Rsh_Fir_reg_r158_;
  goto L86_;

L417_:;
  // del4 = ld del
  Rsh_Fir_reg_del4_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L418() else D86()
  // L418()
  goto L418_;

D86_:;
  // deopt 336 [del4]
  SEXP Rsh_Fir_array_deopt_stack71[1];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_del4_;
  Rsh_Fir_deopt(336, 1, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L418_:;
  // del5 = force? del4
  Rsh_Fir_reg_del5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_del4_);
  // checkMissing(del5)
  SEXP Rsh_Fir_array_args315[1];
  Rsh_Fir_array_args315[0] = Rsh_Fir_reg_del5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args315, Rsh_Fir_param_types_empty()));
  // by5 = ld by
  Rsh_Fir_reg_by5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L419() else D87()
  // L419()
  goto L419_;

D87_:;
  // deopt 337 [del5, by5]
  SEXP Rsh_Fir_array_deopt_stack72[2];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_del5_;
  Rsh_Fir_array_deopt_stack72[1] = Rsh_Fir_reg_by5_;
  Rsh_Fir_deopt(337, 2, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L419_:;
  // by6 = force? by5
  Rsh_Fir_reg_by6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by5_);
  // checkMissing(by6)
  SEXP Rsh_Fir_array_args316[1];
  Rsh_Fir_array_args316[0] = Rsh_Fir_reg_by6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args316, Rsh_Fir_param_types_empty()));
  // r159 = `/`(del5, by6)
  SEXP Rsh_Fir_array_args317[2];
  Rsh_Fir_array_args317[0] = Rsh_Fir_reg_del5_;
  Rsh_Fir_array_args317[1] = Rsh_Fir_reg_by6_;
  Rsh_Fir_reg_r159_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args317, Rsh_Fir_param_types_empty());
  // goto L88(r159)
  // L88(r159)
  Rsh_Fir_reg_r160_ = Rsh_Fir_reg_r159_;
  goto L88_;

D88_:;
  // deopt 340 [to27]
  SEXP Rsh_Fir_array_deopt_stack73[1];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_to27_;
  Rsh_Fir_deopt(340, 1, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L421_:;
  // to28 = force? to27
  Rsh_Fir_reg_to28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to27_);
  // checkMissing(to28)
  SEXP Rsh_Fir_array_args318[1];
  Rsh_Fir_array_args318[0] = Rsh_Fir_reg_to28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args318, Rsh_Fir_param_types_empty()));
  // by7 = ld by
  Rsh_Fir_reg_by7_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L422() else D89()
  // L422()
  goto L422_;

D89_:;
  // deopt 341 [to28, by7]
  SEXP Rsh_Fir_array_deopt_stack74[2];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_to28_;
  Rsh_Fir_array_deopt_stack74[1] = Rsh_Fir_reg_by7_;
  Rsh_Fir_deopt(341, 2, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L422_:;
  // by8 = force? by7
  Rsh_Fir_reg_by8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by7_);
  // checkMissing(by8)
  SEXP Rsh_Fir_array_args319[1];
  Rsh_Fir_array_args319[0] = Rsh_Fir_reg_by8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args319, Rsh_Fir_param_types_empty()));
  // r161 = `/`(to28, by8)
  SEXP Rsh_Fir_array_args320[2];
  Rsh_Fir_array_args320[0] = Rsh_Fir_reg_to28_;
  Rsh_Fir_array_args320[1] = Rsh_Fir_reg_by8_;
  Rsh_Fir_reg_r161_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args320, Rsh_Fir_param_types_empty());
  // from27 = ld from
  Rsh_Fir_reg_from27_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L423() else D90()
  // L423()
  goto L423_;

D90_:;
  // deopt 343 [r161, from27]
  SEXP Rsh_Fir_array_deopt_stack75[2];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_r161_;
  Rsh_Fir_array_deopt_stack75[1] = Rsh_Fir_reg_from27_;
  Rsh_Fir_deopt(343, 2, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L423_:;
  // from28 = force? from27
  Rsh_Fir_reg_from28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from27_);
  // checkMissing(from28)
  SEXP Rsh_Fir_array_args321[1];
  Rsh_Fir_array_args321[0] = Rsh_Fir_reg_from28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args321, Rsh_Fir_param_types_empty()));
  // by9 = ld by
  Rsh_Fir_reg_by9_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L424() else D91()
  // L424()
  goto L424_;

D91_:;
  // deopt 344 [r161, from28, by9]
  SEXP Rsh_Fir_array_deopt_stack76[3];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_r161_;
  Rsh_Fir_array_deopt_stack76[1] = Rsh_Fir_reg_from28_;
  Rsh_Fir_array_deopt_stack76[2] = Rsh_Fir_reg_by9_;
  Rsh_Fir_deopt(344, 3, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

L424_:;
  // by10 = force? by9
  Rsh_Fir_reg_by10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by9_);
  // checkMissing(by10)
  SEXP Rsh_Fir_array_args322[1];
  Rsh_Fir_array_args322[0] = Rsh_Fir_reg_by10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args322, Rsh_Fir_param_types_empty()));
  // r162 = `/`(from28, by10)
  SEXP Rsh_Fir_array_args323[2];
  Rsh_Fir_array_args323[0] = Rsh_Fir_reg_from28_;
  Rsh_Fir_array_args323[1] = Rsh_Fir_reg_by10_;
  Rsh_Fir_reg_r162_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args323, Rsh_Fir_param_types_empty());
  // r163 = `-`(r161, r162)
  SEXP Rsh_Fir_array_args324[2];
  Rsh_Fir_array_args324[0] = Rsh_Fir_reg_r161_;
  Rsh_Fir_array_args324[1] = Rsh_Fir_reg_r162_;
  Rsh_Fir_reg_r163_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args324, Rsh_Fir_param_types_empty());
  // goto L88(r163)
  // L88(r163)
  Rsh_Fir_reg_r160_ = Rsh_Fir_reg_r163_;
  goto L88_;

L425_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L427() else D92()
  // L427()
  goto L427_;

L426_:;
  // r164 = dyn base29(<sym n>)
  SEXP Rsh_Fir_array_args325[1];
  Rsh_Fir_array_args325[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names76[1];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_reg_r164_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base29_, 1, Rsh_Fir_array_args325, Rsh_Fir_array_arg_names76, CCP, RHO);
  // goto L89(r164)
  // L89(r164)
  Rsh_Fir_reg_r165_ = Rsh_Fir_reg_r164_;
  goto L89_;

D92_:;
  // deopt 351 [n]
  SEXP Rsh_Fir_array_deopt_stack77[1];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(351, 1, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

L427_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args326[1];
  Rsh_Fir_array_args326[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args326, Rsh_Fir_param_types_empty()));
  // is_finite4 = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r166 = dyn is_finite4(n1)
  SEXP Rsh_Fir_array_args327[1];
  Rsh_Fir_array_args327[0] = Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_array_arg_names77[1];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_reg_r166_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite4_, 1, Rsh_Fir_array_args327, Rsh_Fir_array_arg_names77, CCP, RHO);
  // check L428() else D93()
  // L428()
  goto L428_;

D93_:;
  // deopt 354 [r166]
  SEXP Rsh_Fir_array_deopt_stack78[1];
  Rsh_Fir_array_deopt_stack78[0] = Rsh_Fir_reg_r166_;
  Rsh_Fir_deopt(354, 1, Rsh_Fir_array_deopt_stack78, CCP, RHO);
  return R_NilValue;

L428_:;
  // goto L89(r166)
  // L89(r166)
  Rsh_Fir_reg_r165_ = Rsh_Fir_reg_r166_;
  goto L89_;

L429_:;
  // sym30 = ldf `is.na`
  Rsh_Fir_reg_sym30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base30 = ldf `is.na` in base
  Rsh_Fir_reg_base30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard30 = `==`.4(sym30, base30)
  SEXP Rsh_Fir_array_args328[2];
  Rsh_Fir_array_args328[0] = Rsh_Fir_reg_sym30_;
  Rsh_Fir_array_args328[1] = Rsh_Fir_reg_base30_;
  Rsh_Fir_reg_guard30_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args328);
  // if guard30 then L430() else L431()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard30_)) {
  // L430()
    goto L430_;
  } else {
  // L431()
    goto L431_;
  }

L430_:;
  // by11 = ld by
  Rsh_Fir_reg_by11_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L432() else D94()
  // L432()
  goto L432_;

L431_:;
  // r168 = dyn base30(<sym by>)
  SEXP Rsh_Fir_array_args329[1];
  Rsh_Fir_array_args329[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names78[1];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_reg_r168_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base30_, 1, Rsh_Fir_array_args329, Rsh_Fir_array_arg_names78, CCP, RHO);
  // goto L91(r168)
  // L91(r168)
  Rsh_Fir_reg_r169_ = Rsh_Fir_reg_r168_;
  goto L91_;

D94_:;
  // deopt 358 [by11]
  SEXP Rsh_Fir_array_deopt_stack79[1];
  Rsh_Fir_array_deopt_stack79[0] = Rsh_Fir_reg_by11_;
  Rsh_Fir_deopt(358, 1, Rsh_Fir_array_deopt_stack79, CCP, RHO);
  return R_NilValue;

L432_:;
  // by12 = force? by11
  Rsh_Fir_reg_by12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by11_);
  // checkMissing(by12)
  SEXP Rsh_Fir_array_args330[1];
  Rsh_Fir_array_args330[0] = Rsh_Fir_reg_by12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args330, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r170 = dyn is_na(by12)
  SEXP Rsh_Fir_array_args331[1];
  Rsh_Fir_array_args331[0] = Rsh_Fir_reg_by12_;
  SEXP Rsh_Fir_array_arg_names79[1];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_reg_r170_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args331, Rsh_Fir_array_arg_names79, CCP, RHO);
  // check L433() else D95()
  // L433()
  goto L433_;

D95_:;
  // deopt 361 [r170]
  SEXP Rsh_Fir_array_deopt_stack80[1];
  Rsh_Fir_array_deopt_stack80[0] = Rsh_Fir_reg_r170_;
  Rsh_Fir_deopt(361, 1, Rsh_Fir_array_deopt_stack80, CCP, RHO);
  return R_NilValue;

L433_:;
  // goto L91(r170)
  // L91(r170)
  Rsh_Fir_reg_r169_ = Rsh_Fir_reg_r170_;
  goto L91_;

L434_:;
  // by13 = ld by
  Rsh_Fir_reg_by13_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L435() else D96()
  // L435()
  goto L435_;

D96_:;
  // deopt 363 [c112, by13]
  SEXP Rsh_Fir_array_deopt_stack81[2];
  Rsh_Fir_array_deopt_stack81[0] = Rsh_Fir_reg_c112_;
  Rsh_Fir_array_deopt_stack81[1] = Rsh_Fir_reg_by13_;
  Rsh_Fir_deopt(363, 2, Rsh_Fir_array_deopt_stack81, CCP, RHO);
  return R_NilValue;

L435_:;
  // by14 = force? by13
  Rsh_Fir_reg_by14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by13_);
  // checkMissing(by14)
  SEXP Rsh_Fir_array_args332[1];
  Rsh_Fir_array_args332[0] = Rsh_Fir_reg_by14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args332, Rsh_Fir_param_types_empty()));
  // r172 = `==`(by14, 0.0)
  SEXP Rsh_Fir_array_args333[2];
  Rsh_Fir_array_args333[0] = Rsh_Fir_reg_by14_;
  Rsh_Fir_array_args333[1] = Rsh_const(CCP, 61);
  Rsh_Fir_reg_r172_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args333, Rsh_Fir_param_types_empty());
  // c115 = `as.logical`(r172)
  SEXP Rsh_Fir_array_args334[1];
  Rsh_Fir_array_args334[0] = Rsh_Fir_reg_r172_;
  Rsh_Fir_reg_c115_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args334, Rsh_Fir_param_types_empty());
  // c116 = `&&`(c112, c115)
  SEXP Rsh_Fir_array_args335[2];
  Rsh_Fir_array_args335[0] = Rsh_Fir_reg_c112_;
  Rsh_Fir_array_args335[1] = Rsh_Fir_reg_c115_;
  Rsh_Fir_reg_c116_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args335, Rsh_Fir_param_types_empty());
  // goto L92(c116)
  // L92(c116)
  Rsh_Fir_reg_c114_ = Rsh_Fir_reg_c116_;
  goto L92_;

L437_:;
  // del6 = ld del
  Rsh_Fir_reg_del6_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L438() else D97()
  // L438()
  goto L438_;

D97_:;
  // deopt 368 [c118, del6]
  SEXP Rsh_Fir_array_deopt_stack82[2];
  Rsh_Fir_array_deopt_stack82[0] = Rsh_Fir_reg_c118_;
  Rsh_Fir_array_deopt_stack82[1] = Rsh_Fir_reg_del6_;
  Rsh_Fir_deopt(368, 2, Rsh_Fir_array_deopt_stack82, CCP, RHO);
  return R_NilValue;

L438_:;
  // del7 = force? del6
  Rsh_Fir_reg_del7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_del6_);
  // checkMissing(del7)
  SEXP Rsh_Fir_array_args336[1];
  Rsh_Fir_array_args336[0] = Rsh_Fir_reg_del7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args336, Rsh_Fir_param_types_empty()));
  // r173 = `==`(del7, 0.0)
  SEXP Rsh_Fir_array_args337[2];
  Rsh_Fir_array_args337[0] = Rsh_Fir_reg_del7_;
  Rsh_Fir_array_args337[1] = Rsh_const(CCP, 61);
  Rsh_Fir_reg_r173_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args337, Rsh_Fir_param_types_empty());
  // c121 = `as.logical`(r173)
  SEXP Rsh_Fir_array_args338[1];
  Rsh_Fir_array_args338[0] = Rsh_Fir_reg_r173_;
  Rsh_Fir_reg_c121_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args338, Rsh_Fir_param_types_empty());
  // c122 = `&&`(c118, c121)
  SEXP Rsh_Fir_array_args339[2];
  Rsh_Fir_array_args339[0] = Rsh_Fir_reg_c118_;
  Rsh_Fir_array_args339[1] = Rsh_Fir_reg_c121_;
  Rsh_Fir_reg_c122_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args339, Rsh_Fir_param_types_empty());
  // goto L93(c122)
  // L93(c122)
  Rsh_Fir_reg_c120_ = Rsh_Fir_reg_c122_;
  goto L93_;

L440_:;
  // from29 = ld from
  Rsh_Fir_reg_from29_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L441() else D98()
  // L441()
  goto L441_;

D98_:;
  // deopt 373 [from29]
  SEXP Rsh_Fir_array_deopt_stack83[1];
  Rsh_Fir_array_deopt_stack83[0] = Rsh_Fir_reg_from29_;
  Rsh_Fir_deopt(373, 1, Rsh_Fir_array_deopt_stack83, CCP, RHO);
  return R_NilValue;

L441_:;
  // from30 = force? from29
  Rsh_Fir_reg_from30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from29_);
  // checkMissing(from30)
  SEXP Rsh_Fir_array_args340[1];
  Rsh_Fir_array_args340[0] = Rsh_Fir_reg_from30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args340, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return from30
  return Rsh_Fir_reg_from30_;

D99_:;
  // deopt 379 []
  Rsh_Fir_deopt(379, 0, NULL, CCP, RHO);
  return R_NilValue;

L444_:;
  // r176 = dyn stop7("invalid '(to - from)/by'")
  SEXP Rsh_Fir_array_args341[1];
  Rsh_Fir_array_args341[0] = Rsh_const(CCP, 67);
  SEXP Rsh_Fir_array_arg_names80[1];
  Rsh_Fir_array_arg_names80[0] = R_MissingArg;
  Rsh_Fir_reg_r176_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop7_, 1, Rsh_Fir_array_args341, Rsh_Fir_array_arg_names80, CCP, RHO);
  // check L445() else D100()
  // L445()
  goto L445_;

D100_:;
  // deopt 381 [r176]
  SEXP Rsh_Fir_array_deopt_stack84[1];
  Rsh_Fir_array_deopt_stack84[0] = Rsh_Fir_reg_r176_;
  Rsh_Fir_deopt(381, 1, Rsh_Fir_array_deopt_stack84, CCP, RHO);
  return R_NilValue;

L445_:;
  // goto L96()
  // L96()
  goto L96_;

D101_:;
  // deopt 384 [n2]
  SEXP Rsh_Fir_array_deopt_stack85[1];
  Rsh_Fir_array_deopt_stack85[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(384, 1, Rsh_Fir_array_deopt_stack85, CCP, RHO);
  return R_NilValue;

L447_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args342[1];
  Rsh_Fir_array_args342[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args342, Rsh_Fir_param_types_empty()));
  // r178 = `<`(n3, 0)
  SEXP Rsh_Fir_array_args343[2];
  Rsh_Fir_array_args343[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_array_args343[1] = Rsh_const(CCP, 68);
  Rsh_Fir_reg_r178_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args343, Rsh_Fir_param_types_empty());
  // c125 = `as.logical`(r178)
  SEXP Rsh_Fir_array_args344[1];
  Rsh_Fir_array_args344[0] = Rsh_Fir_reg_r178_;
  Rsh_Fir_reg_c125_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args344, Rsh_Fir_param_types_empty());
  // if c125 then L448() else L97()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c125_)) {
  // L448()
    goto L448_;
  } else {
  // L97()
    goto L97_;
  }

L448_:;
  // stop8 = ldf stop
  Rsh_Fir_reg_stop8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L449() else D102()
  // L449()
  goto L449_;

D102_:;
  // deopt 389 []
  Rsh_Fir_deopt(389, 0, NULL, CCP, RHO);
  return R_NilValue;

L449_:;
  // r179 = dyn stop8("wrong sign in 'by' argument")
  SEXP Rsh_Fir_array_args345[1];
  Rsh_Fir_array_args345[0] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names81[1];
  Rsh_Fir_array_arg_names81[0] = R_MissingArg;
  Rsh_Fir_reg_r179_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop8_, 1, Rsh_Fir_array_args345, Rsh_Fir_array_arg_names81, CCP, RHO);
  // check L450() else D103()
  // L450()
  goto L450_;

D103_:;
  // deopt 391 [r179]
  SEXP Rsh_Fir_array_deopt_stack86[1];
  Rsh_Fir_array_deopt_stack86[0] = Rsh_Fir_reg_r179_;
  Rsh_Fir_deopt(391, 1, Rsh_Fir_array_deopt_stack86, CCP, RHO);
  return R_NilValue;

L450_:;
  // goto L98()
  // L98()
  goto L98_;

D104_:;
  // deopt 394 [n4]
  SEXP Rsh_Fir_array_deopt_stack87[1];
  Rsh_Fir_array_deopt_stack87[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(394, 1, Rsh_Fir_array_deopt_stack87, CCP, RHO);
  return R_NilValue;

L452_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args346[1];
  Rsh_Fir_array_args346[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args346, Rsh_Fir_param_types_empty()));
  // _Machine = ld `.Machine`
  Rsh_Fir_reg__Machine = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L453() else D105()
  // L453()
  goto L453_;

D105_:;
  // deopt 395 [n5, _Machine]
  SEXP Rsh_Fir_array_deopt_stack88[2];
  Rsh_Fir_array_deopt_stack88[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_array_deopt_stack88[1] = Rsh_Fir_reg__Machine;
  Rsh_Fir_deopt(395, 2, Rsh_Fir_array_deopt_stack88, CCP, RHO);
  return R_NilValue;

L453_:;
  // _Machine1 = force? _Machine
  Rsh_Fir_reg__Machine1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Machine);
  // checkMissing(_Machine1)
  SEXP Rsh_Fir_array_args347[1];
  Rsh_Fir_array_args347[0] = Rsh_Fir_reg__Machine1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args347, Rsh_Fir_param_types_empty()));
  // c126 = `is.object`(_Machine1)
  SEXP Rsh_Fir_array_args348[1];
  Rsh_Fir_array_args348[0] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_c126_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args348, Rsh_Fir_param_types_empty());
  // if c126 then L455() else L456(n5, _Machine1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c126_)) {
  // L455()
    goto L455_;
  } else {
  // L456(n5, _Machine1)
    Rsh_Fir_reg_n7_ = Rsh_Fir_reg_n5_;
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg__Machine1_;
    goto L456_;
  }

L454_:;
  // r182 = `>`(n9, dx4)
  SEXP Rsh_Fir_array_args349[2];
  Rsh_Fir_array_args349[0] = Rsh_Fir_reg_n9_;
  Rsh_Fir_array_args349[1] = Rsh_Fir_reg_dx4_;
  Rsh_Fir_reg_r182_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args349, Rsh_Fir_param_types_empty());
  // c127 = `as.logical`(r182)
  SEXP Rsh_Fir_array_args350[1];
  Rsh_Fir_array_args350[0] = Rsh_Fir_reg_r182_;
  Rsh_Fir_reg_c127_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args350, Rsh_Fir_param_types_empty());
  // if c127 then L458() else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c127_)) {
  // L458()
    goto L458_;
  } else {
  // L99()
    goto L99_;
  }

L455_:;
  // dr2 = tryDispatchBuiltin.1("$", _Machine1)
  SEXP Rsh_Fir_array_args351[2];
  Rsh_Fir_array_args351[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args351[1] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args351);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args352[1];
  Rsh_Fir_array_args352[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args352, Rsh_Fir_param_types_empty());
  // if dc1 then L457() else L456(n5, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L457()
    goto L457_;
  } else {
  // L456(n5, dr2)
    Rsh_Fir_reg_n7_ = Rsh_Fir_reg_n5_;
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg_dr2_;
    goto L456_;
  }

L456_:;
  // r181 = `$`(_Machine3, <sym integer.max>)
  SEXP Rsh_Fir_array_args353[2];
  Rsh_Fir_array_args353[0] = Rsh_Fir_reg__Machine3_;
  Rsh_Fir_array_args353[1] = Rsh_const(CCP, 71);
  Rsh_Fir_reg_r181_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args353, Rsh_Fir_param_types_empty());
  // goto L454(n7, r181)
  // L454(n7, r181)
  Rsh_Fir_reg_n9_ = Rsh_Fir_reg_n7_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r181_;
  goto L454_;

L457_:;
  // dx3 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args354[1];
  Rsh_Fir_array_args354[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args354, Rsh_Fir_param_types_empty());
  // goto L454(n5, dx3)
  // L454(n5, dx3)
  Rsh_Fir_reg_n9_ = Rsh_Fir_reg_n5_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L454_;

L458_:;
  // stop9 = ldf stop
  Rsh_Fir_reg_stop9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L459() else D106()
  // L459()
  goto L459_;

D106_:;
  // deopt 400 []
  Rsh_Fir_deopt(400, 0, NULL, CCP, RHO);
  return R_NilValue;

L459_:;
  // r183 = dyn stop9("'by' argument is much too small")
  SEXP Rsh_Fir_array_args355[1];
  Rsh_Fir_array_args355[0] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names82[1];
  Rsh_Fir_array_arg_names82[0] = R_MissingArg;
  Rsh_Fir_reg_r183_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop9_, 1, Rsh_Fir_array_args355, Rsh_Fir_array_arg_names82, CCP, RHO);
  // check L460() else D107()
  // L460()
  goto L460_;

D107_:;
  // deopt 402 [r183]
  SEXP Rsh_Fir_array_deopt_stack89[1];
  Rsh_Fir_array_deopt_stack89[0] = Rsh_Fir_reg_r183_;
  Rsh_Fir_deopt(402, 1, Rsh_Fir_array_deopt_stack89, CCP, RHO);
  return R_NilValue;

L460_:;
  // goto L100()
  // L100()
  goto L100_;

D108_:;
  // deopt 405 [finite_del]
  SEXP Rsh_Fir_array_deopt_stack90[1];
  Rsh_Fir_array_deopt_stack90[0] = Rsh_Fir_reg_finite_del;
  Rsh_Fir_deopt(405, 1, Rsh_Fir_array_deopt_stack90, CCP, RHO);
  return R_NilValue;

L462_:;
  // finite_del1 = force? finite_del
  Rsh_Fir_reg_finite_del1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_finite_del);
  // checkMissing(finite_del1)
  SEXP Rsh_Fir_array_args356[1];
  Rsh_Fir_array_args356[0] = Rsh_Fir_reg_finite_del1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args356, Rsh_Fir_param_types_empty()));
  // c128 = `as.logical`(finite_del1)
  SEXP Rsh_Fir_array_args357[1];
  Rsh_Fir_array_args357[0] = Rsh_Fir_reg_finite_del1_;
  Rsh_Fir_reg_c128_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args357, Rsh_Fir_param_types_empty());
  // if c128 then L463() else L101(c128)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c128_)) {
  // L463()
    goto L463_;
  } else {
  // L101(c128)
    Rsh_Fir_reg_c130_ = Rsh_Fir_reg_c128_;
    goto L101_;
  }

L463_:;
  // sym31 = ldf abs
  Rsh_Fir_reg_sym31_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base31 = ldf abs in base
  Rsh_Fir_reg_base31_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard31 = `==`.4(sym31, base31)
  SEXP Rsh_Fir_array_args358[2];
  Rsh_Fir_array_args358[0] = Rsh_Fir_reg_sym31_;
  Rsh_Fir_array_args358[1] = Rsh_Fir_reg_base31_;
  Rsh_Fir_reg_guard31_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args358);
  // if guard31 then L464() else L465()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard31_)) {
  // L464()
    goto L464_;
  } else {
  // L465()
    goto L465_;
  }

L464_:;
  // del8 = ld del
  Rsh_Fir_reg_del8_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L466() else D109()
  // L466()
  goto L466_;

L465_:;
  // r185 = dyn base31(<sym del>)
  SEXP Rsh_Fir_array_args359[1];
  Rsh_Fir_array_args359[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names83[1];
  Rsh_Fir_array_arg_names83[0] = R_MissingArg;
  Rsh_Fir_reg_r185_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base31_, 1, Rsh_Fir_array_args359, Rsh_Fir_array_arg_names83, CCP, RHO);
  // goto L102(c128, r185)
  // L102(c128, r185)
  Rsh_Fir_reg_c133_ = Rsh_Fir_reg_c128_;
  Rsh_Fir_reg_r186_ = Rsh_Fir_reg_r185_;
  goto L102_;

D109_:;
  // deopt 409 [c128, del8]
  SEXP Rsh_Fir_array_deopt_stack91[2];
  Rsh_Fir_array_deopt_stack91[0] = Rsh_Fir_reg_c128_;
  Rsh_Fir_array_deopt_stack91[1] = Rsh_Fir_reg_del8_;
  Rsh_Fir_deopt(409, 2, Rsh_Fir_array_deopt_stack91, CCP, RHO);
  return R_NilValue;

L466_:;
  // del9 = force? del8
  Rsh_Fir_reg_del9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_del8_);
  // checkMissing(del9)
  SEXP Rsh_Fir_array_args360[1];
  Rsh_Fir_array_args360[0] = Rsh_Fir_reg_del9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args360, Rsh_Fir_param_types_empty()));
  // abs = ldf abs in base
  Rsh_Fir_reg_abs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r187 = dyn abs(del9)
  SEXP Rsh_Fir_array_args361[1];
  Rsh_Fir_array_args361[0] = Rsh_Fir_reg_del9_;
  SEXP Rsh_Fir_array_arg_names84[1];
  Rsh_Fir_array_arg_names84[0] = R_MissingArg;
  Rsh_Fir_reg_r187_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs, 1, Rsh_Fir_array_args361, Rsh_Fir_array_arg_names84, CCP, RHO);
  // check L467() else D110()
  // L467()
  goto L467_;

D110_:;
  // deopt 412 [c128, r187]
  SEXP Rsh_Fir_array_deopt_stack92[2];
  Rsh_Fir_array_deopt_stack92[0] = Rsh_Fir_reg_c128_;
  Rsh_Fir_array_deopt_stack92[1] = Rsh_Fir_reg_r187_;
  Rsh_Fir_deopt(412, 2, Rsh_Fir_array_deopt_stack92, CCP, RHO);
  return R_NilValue;

L467_:;
  // goto L102(c128, r187)
  // L102(c128, r187)
  Rsh_Fir_reg_c133_ = Rsh_Fir_reg_c128_;
  Rsh_Fir_reg_r186_ = Rsh_Fir_reg_r187_;
  goto L102_;

L468_:;
  // sym33 = ldf abs
  Rsh_Fir_reg_sym33_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base33 = ldf abs in base
  Rsh_Fir_reg_base33_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard33 = `==`.4(sym33, base33)
  SEXP Rsh_Fir_array_args362[2];
  Rsh_Fir_array_args362[0] = Rsh_Fir_reg_sym33_;
  Rsh_Fir_array_args362[1] = Rsh_Fir_reg_base33_;
  Rsh_Fir_reg_guard33_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args362);
  // if guard33 then L470() else L471()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard33_)) {
  // L470()
    goto L470_;
  } else {
  // L471()
    goto L471_;
  }

L469_:;
  // r190 = dyn base32(<lang abs(to)>, <lang abs(from)>)
  SEXP Rsh_Fir_array_args363[2];
  Rsh_Fir_array_args363[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args363[1] = Rsh_const(CCP, 74);
  SEXP Rsh_Fir_array_arg_names85[2];
  Rsh_Fir_array_arg_names85[0] = R_MissingArg;
  Rsh_Fir_array_arg_names85[1] = R_MissingArg;
  Rsh_Fir_reg_r190_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base32_, 2, Rsh_Fir_array_args363, Rsh_Fir_array_arg_names85, CCP, RHO);
  // goto L103(c133, r186, r190)
  // L103(c133, r186, r190)
  Rsh_Fir_reg_c136_ = Rsh_Fir_reg_c133_;
  Rsh_Fir_reg_r191_ = Rsh_Fir_reg_r186_;
  Rsh_Fir_reg_r192_ = Rsh_Fir_reg_r190_;
  goto L103_;

L470_:;
  // to29 = ld to
  Rsh_Fir_reg_to29_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L472() else D111()
  // L472()
  goto L472_;

L471_:;
  // r195 = dyn base33(<sym to>)
  SEXP Rsh_Fir_array_args364[1];
  Rsh_Fir_array_args364[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names86[1];
  Rsh_Fir_array_arg_names86[0] = R_MissingArg;
  Rsh_Fir_reg_r195_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base33_, 1, Rsh_Fir_array_args364, Rsh_Fir_array_arg_names86, CCP, RHO);
  // goto L104(c133, r186, r195)
  // L104(c133, r186, r195)
  Rsh_Fir_reg_c139_ = Rsh_Fir_reg_c133_;
  Rsh_Fir_reg_r196_ = Rsh_Fir_reg_r186_;
  Rsh_Fir_reg_r197_ = Rsh_Fir_reg_r195_;
  goto L104_;

D111_:;
  // deopt 416 [c133, r186, to29]
  SEXP Rsh_Fir_array_deopt_stack93[3];
  Rsh_Fir_array_deopt_stack93[0] = Rsh_Fir_reg_c133_;
  Rsh_Fir_array_deopt_stack93[1] = Rsh_Fir_reg_r186_;
  Rsh_Fir_array_deopt_stack93[2] = Rsh_Fir_reg_to29_;
  Rsh_Fir_deopt(416, 3, Rsh_Fir_array_deopt_stack93, CCP, RHO);
  return R_NilValue;

L472_:;
  // to30 = force? to29
  Rsh_Fir_reg_to30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to29_);
  // checkMissing(to30)
  SEXP Rsh_Fir_array_args365[1];
  Rsh_Fir_array_args365[0] = Rsh_Fir_reg_to30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args365, Rsh_Fir_param_types_empty()));
  // abs1 = ldf abs in base
  Rsh_Fir_reg_abs1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r198 = dyn abs1(to30)
  SEXP Rsh_Fir_array_args366[1];
  Rsh_Fir_array_args366[0] = Rsh_Fir_reg_to30_;
  SEXP Rsh_Fir_array_arg_names87[1];
  Rsh_Fir_array_arg_names87[0] = R_MissingArg;
  Rsh_Fir_reg_r198_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs1_, 1, Rsh_Fir_array_args366, Rsh_Fir_array_arg_names87, CCP, RHO);
  // check L473() else D112()
  // L473()
  goto L473_;

D112_:;
  // deopt 419 [c133, r186, r198]
  SEXP Rsh_Fir_array_deopt_stack94[3];
  Rsh_Fir_array_deopt_stack94[0] = Rsh_Fir_reg_c133_;
  Rsh_Fir_array_deopt_stack94[1] = Rsh_Fir_reg_r186_;
  Rsh_Fir_array_deopt_stack94[2] = Rsh_Fir_reg_r198_;
  Rsh_Fir_deopt(419, 3, Rsh_Fir_array_deopt_stack94, CCP, RHO);
  return R_NilValue;

L473_:;
  // goto L104(c133, r186, r198)
  // L104(c133, r186, r198)
  Rsh_Fir_reg_c139_ = Rsh_Fir_reg_c133_;
  Rsh_Fir_reg_r196_ = Rsh_Fir_reg_r186_;
  Rsh_Fir_reg_r197_ = Rsh_Fir_reg_r198_;
  goto L104_;

L474_:;
  // from31 = ld from
  Rsh_Fir_reg_from31_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L476() else D113()
  // L476()
  goto L476_;

L475_:;
  // r201 = dyn base34(<sym from>)
  SEXP Rsh_Fir_array_args367[1];
  Rsh_Fir_array_args367[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names88[1];
  Rsh_Fir_array_arg_names88[0] = R_MissingArg;
  Rsh_Fir_reg_r201_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base34_, 1, Rsh_Fir_array_args367, Rsh_Fir_array_arg_names88, CCP, RHO);
  // goto L105(c139, r196, r201)
  // L105(c139, r196, r201)
  Rsh_Fir_reg_c142_ = Rsh_Fir_reg_c139_;
  Rsh_Fir_reg_r202_ = Rsh_Fir_reg_r196_;
  Rsh_Fir_reg_r203_ = Rsh_Fir_reg_r201_;
  goto L105_;

D113_:;
  // deopt 422 [c139, r196, from31]
  SEXP Rsh_Fir_array_deopt_stack95[3];
  Rsh_Fir_array_deopt_stack95[0] = Rsh_Fir_reg_c139_;
  Rsh_Fir_array_deopt_stack95[1] = Rsh_Fir_reg_r196_;
  Rsh_Fir_array_deopt_stack95[2] = Rsh_Fir_reg_from31_;
  Rsh_Fir_deopt(422, 3, Rsh_Fir_array_deopt_stack95, CCP, RHO);
  return R_NilValue;

L476_:;
  // from32 = force? from31
  Rsh_Fir_reg_from32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from31_);
  // checkMissing(from32)
  SEXP Rsh_Fir_array_args368[1];
  Rsh_Fir_array_args368[0] = Rsh_Fir_reg_from32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args368, Rsh_Fir_param_types_empty()));
  // abs2 = ldf abs in base
  Rsh_Fir_reg_abs2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r204 = dyn abs2(from32)
  SEXP Rsh_Fir_array_args369[1];
  Rsh_Fir_array_args369[0] = Rsh_Fir_reg_from32_;
  SEXP Rsh_Fir_array_arg_names89[1];
  Rsh_Fir_array_arg_names89[0] = R_MissingArg;
  Rsh_Fir_reg_r204_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs2_, 1, Rsh_Fir_array_args369, Rsh_Fir_array_arg_names89, CCP, RHO);
  // check L477() else D114()
  // L477()
  goto L477_;

D114_:;
  // deopt 425 [c139, r196, r204]
  SEXP Rsh_Fir_array_deopt_stack96[3];
  Rsh_Fir_array_deopt_stack96[0] = Rsh_Fir_reg_c139_;
  Rsh_Fir_array_deopt_stack96[1] = Rsh_Fir_reg_r196_;
  Rsh_Fir_array_deopt_stack96[2] = Rsh_Fir_reg_r204_;
  Rsh_Fir_deopt(425, 3, Rsh_Fir_array_deopt_stack96, CCP, RHO);
  return R_NilValue;

L477_:;
  // goto L105(c139, r196, r204)
  // L105(c139, r196, r204)
  Rsh_Fir_reg_c142_ = Rsh_Fir_reg_c139_;
  Rsh_Fir_reg_r202_ = Rsh_Fir_reg_r196_;
  Rsh_Fir_reg_r203_ = Rsh_Fir_reg_r204_;
  goto L105_;

D115_:;
  // deopt 427 [c142, r202, r205]
  SEXP Rsh_Fir_array_deopt_stack97[3];
  Rsh_Fir_array_deopt_stack97[0] = Rsh_Fir_reg_c142_;
  Rsh_Fir_array_deopt_stack97[1] = Rsh_Fir_reg_r202_;
  Rsh_Fir_array_deopt_stack97[2] = Rsh_Fir_reg_r205_;
  Rsh_Fir_deopt(427, 3, Rsh_Fir_array_deopt_stack97, CCP, RHO);
  return R_NilValue;

L478_:;
  // goto L103(c142, r202, r205)
  // L103(c142, r202, r205)
  Rsh_Fir_reg_c136_ = Rsh_Fir_reg_c142_;
  Rsh_Fir_reg_r191_ = Rsh_Fir_reg_r202_;
  Rsh_Fir_reg_r192_ = Rsh_Fir_reg_r205_;
  goto L103_;

D116_:;
  // deopt 429 [c136, r206, 100.0, _Machine4]
  SEXP Rsh_Fir_array_deopt_stack98[4];
  Rsh_Fir_array_deopt_stack98[0] = Rsh_Fir_reg_c136_;
  Rsh_Fir_array_deopt_stack98[1] = Rsh_Fir_reg_r206_;
  Rsh_Fir_array_deopt_stack98[2] = Rsh_const(CCP, 75);
  Rsh_Fir_array_deopt_stack98[3] = Rsh_Fir_reg__Machine4_;
  Rsh_Fir_deopt(429, 4, Rsh_Fir_array_deopt_stack98, CCP, RHO);
  return R_NilValue;

L479_:;
  // _Machine5 = force? _Machine4
  Rsh_Fir_reg__Machine5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Machine4_);
  // checkMissing(_Machine5)
  SEXP Rsh_Fir_array_args370[1];
  Rsh_Fir_array_args370[0] = Rsh_Fir_reg__Machine5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args370, Rsh_Fir_param_types_empty()));
  // c143 = `is.object`(_Machine5)
  SEXP Rsh_Fir_array_args371[1];
  Rsh_Fir_array_args371[0] = Rsh_Fir_reg__Machine5_;
  Rsh_Fir_reg_c143_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args371, Rsh_Fir_param_types_empty());
  // if c143 then L481() else L482(c136, r206, 100.0, _Machine5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c143_)) {
  // L481()
    goto L481_;
  } else {
  // L482(c136, r206, 100.0, _Machine5)
    Rsh_Fir_reg_c145_ = Rsh_Fir_reg_c136_;
    Rsh_Fir_reg_r209_ = Rsh_Fir_reg_r206_;
    Rsh_Fir_reg_r210_ = Rsh_const(CCP, 75);
    Rsh_Fir_reg__Machine7_ = Rsh_Fir_reg__Machine5_;
    goto L482_;
  }

L480_:;
  // r216 = `*`(r214, dx6)
  SEXP Rsh_Fir_array_args372[2];
  Rsh_Fir_array_args372[0] = Rsh_Fir_reg_r214_;
  Rsh_Fir_array_args372[1] = Rsh_Fir_reg_dx6_;
  Rsh_Fir_reg_r216_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args372, Rsh_Fir_param_types_empty());
  // r217 = `<`(r213, r216)
  SEXP Rsh_Fir_array_args373[2];
  Rsh_Fir_array_args373[0] = Rsh_Fir_reg_r213_;
  Rsh_Fir_array_args373[1] = Rsh_Fir_reg_r216_;
  Rsh_Fir_reg_r217_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args373, Rsh_Fir_param_types_empty());
  // c148 = `as.logical`(r217)
  SEXP Rsh_Fir_array_args374[1];
  Rsh_Fir_array_args374[0] = Rsh_Fir_reg_r217_;
  Rsh_Fir_reg_c148_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args374, Rsh_Fir_param_types_empty());
  // c149 = `&&`(c147, c148)
  SEXP Rsh_Fir_array_args375[2];
  Rsh_Fir_array_args375[0] = Rsh_Fir_reg_c147_;
  Rsh_Fir_array_args375[1] = Rsh_Fir_reg_c148_;
  Rsh_Fir_reg_c149_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args375, Rsh_Fir_param_types_empty());
  // goto L101(c149)
  // L101(c149)
  Rsh_Fir_reg_c130_ = Rsh_Fir_reg_c149_;
  goto L101_;

L481_:;
  // dr4 = tryDispatchBuiltin.1("$", _Machine5)
  SEXP Rsh_Fir_array_args376[2];
  Rsh_Fir_array_args376[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args376[1] = Rsh_Fir_reg__Machine5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args376);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args377[1];
  Rsh_Fir_array_args377[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args377, Rsh_Fir_param_types_empty());
  // if dc2 then L483() else L482(c136, r206, 100.0, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L483()
    goto L483_;
  } else {
  // L482(c136, r206, 100.0, dr4)
    Rsh_Fir_reg_c145_ = Rsh_Fir_reg_c136_;
    Rsh_Fir_reg_r209_ = Rsh_Fir_reg_r206_;
    Rsh_Fir_reg_r210_ = Rsh_const(CCP, 75);
    Rsh_Fir_reg__Machine7_ = Rsh_Fir_reg_dr4_;
    goto L482_;
  }

L482_:;
  // r215 = `$`(_Machine7, <sym double.eps>)
  SEXP Rsh_Fir_array_args378[2];
  Rsh_Fir_array_args378[0] = Rsh_Fir_reg__Machine7_;
  Rsh_Fir_array_args378[1] = Rsh_const(CCP, 76);
  Rsh_Fir_reg_r215_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args378, Rsh_Fir_param_types_empty());
  // goto L480(c145, r209, r210, r215)
  // L480(c145, r209, r210, r215)
  Rsh_Fir_reg_c147_ = Rsh_Fir_reg_c145_;
  Rsh_Fir_reg_r213_ = Rsh_Fir_reg_r209_;
  Rsh_Fir_reg_r214_ = Rsh_Fir_reg_r210_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r215_;
  goto L480_;

L483_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args379[1];
  Rsh_Fir_array_args379[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args379, Rsh_Fir_param_types_empty());
  // goto L480(c136, r206, 100.0, dx5)
  // L480(c136, r206, 100.0, dx5)
  Rsh_Fir_reg_c147_ = Rsh_Fir_reg_c136_;
  Rsh_Fir_reg_r213_ = Rsh_Fir_reg_r206_;
  Rsh_Fir_reg_r214_ = Rsh_const(CCP, 75);
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L480_;

L485_:;
  // from33 = ld from
  Rsh_Fir_reg_from33_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L486() else D117()
  // L486()
  goto L486_;

D117_:;
  // deopt 435 [from33]
  SEXP Rsh_Fir_array_deopt_stack99[1];
  Rsh_Fir_array_deopt_stack99[0] = Rsh_Fir_reg_from33_;
  Rsh_Fir_deopt(435, 1, Rsh_Fir_array_deopt_stack99, CCP, RHO);
  return R_NilValue;

L486_:;
  // from34 = force? from33
  Rsh_Fir_reg_from34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from33_);
  // checkMissing(from34)
  SEXP Rsh_Fir_array_args380[1];
  Rsh_Fir_array_args380[0] = Rsh_Fir_reg_from34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args380, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return from34
  return Rsh_Fir_reg_from34_;

D118_:;
  // deopt 440 [int4]
  SEXP Rsh_Fir_array_deopt_stack100[1];
  Rsh_Fir_array_deopt_stack100[0] = Rsh_Fir_reg_int4_;
  Rsh_Fir_deopt(440, 1, Rsh_Fir_array_deopt_stack100, CCP, RHO);
  return R_NilValue;

L489_:;
  // int5 = force? int4
  Rsh_Fir_reg_int5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_int4_);
  // checkMissing(int5)
  SEXP Rsh_Fir_array_args381[1];
  Rsh_Fir_array_args381[0] = Rsh_Fir_reg_int5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args381, Rsh_Fir_param_types_empty()));
  // c152 = `as.logical`(int5)
  SEXP Rsh_Fir_array_args382[1];
  Rsh_Fir_array_args382[0] = Rsh_Fir_reg_int5_;
  Rsh_Fir_reg_c152_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args382, Rsh_Fir_param_types_empty());
  // if c152 then L490() else L108()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c152_)) {
  // L490()
    goto L490_;
  } else {
  // L108()
    goto L108_;
  }

L490_:;
  // sym35 = ldf `as.integer`
  Rsh_Fir_reg_sym35_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base35 = ldf `as.integer` in base
  Rsh_Fir_reg_base35_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard35 = `==`.4(sym35, base35)
  SEXP Rsh_Fir_array_args383[2];
  Rsh_Fir_array_args383[0] = Rsh_Fir_reg_sym35_;
  Rsh_Fir_array_args383[1] = Rsh_Fir_reg_base35_;
  Rsh_Fir_reg_guard35_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args383);
  // if guard35 then L491() else L492()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard35_)) {
  // L491()
    goto L491_;
  } else {
  // L492()
    goto L492_;
  }

L491_:;
  // n10 = ld n
  Rsh_Fir_reg_n10_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L493() else D119()
  // L493()
  goto L493_;

L492_:;
  // r220 = dyn base35(<sym n>)
  SEXP Rsh_Fir_array_args384[1];
  Rsh_Fir_array_args384[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names90[1];
  Rsh_Fir_array_arg_names90[0] = R_MissingArg;
  Rsh_Fir_reg_r220_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base35_, 1, Rsh_Fir_array_args384, Rsh_Fir_array_arg_names90, CCP, RHO);
  // goto L109(r220)
  // L109(r220)
  Rsh_Fir_reg_r221_ = Rsh_Fir_reg_r220_;
  goto L109_;

D119_:;
  // deopt 444 [n10]
  SEXP Rsh_Fir_array_deopt_stack101[1];
  Rsh_Fir_array_deopt_stack101[0] = Rsh_Fir_reg_n10_;
  Rsh_Fir_deopt(444, 1, Rsh_Fir_array_deopt_stack101, CCP, RHO);
  return R_NilValue;

L493_:;
  // n11 = force? n10
  Rsh_Fir_reg_n11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n10_);
  // checkMissing(n11)
  SEXP Rsh_Fir_array_args385[1];
  Rsh_Fir_array_args385[0] = Rsh_Fir_reg_n11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args385, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r222 = dyn as_integer(n11)
  SEXP Rsh_Fir_array_args386[1];
  Rsh_Fir_array_args386[0] = Rsh_Fir_reg_n11_;
  SEXP Rsh_Fir_array_arg_names91[1];
  Rsh_Fir_array_arg_names91[0] = R_MissingArg;
  Rsh_Fir_reg_r222_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args386, Rsh_Fir_array_arg_names91, CCP, RHO);
  // check L494() else D120()
  // L494()
  goto L494_;

D120_:;
  // deopt 447 [r222]
  SEXP Rsh_Fir_array_deopt_stack102[1];
  Rsh_Fir_array_deopt_stack102[0] = Rsh_Fir_reg_r222_;
  Rsh_Fir_deopt(447, 1, Rsh_Fir_array_deopt_stack102, CCP, RHO);
  return R_NilValue;

L494_:;
  // goto L109(r222)
  // L109(r222)
  Rsh_Fir_reg_r221_ = Rsh_Fir_reg_r222_;
  goto L109_;

D121_:;
  // deopt 449 [n12]
  SEXP Rsh_Fir_array_deopt_stack103[1];
  Rsh_Fir_array_deopt_stack103[0] = Rsh_Fir_reg_n12_;
  Rsh_Fir_deopt(449, 1, Rsh_Fir_array_deopt_stack103, CCP, RHO);
  return R_NilValue;

L495_:;
  // n13 = force? n12
  Rsh_Fir_reg_n13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n12_);
  // checkMissing(n13)
  SEXP Rsh_Fir_array_args387[1];
  Rsh_Fir_array_args387[0] = Rsh_Fir_reg_n13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args387, Rsh_Fir_param_types_empty()));
  // r223 = `>=`(n13, 2)
  SEXP Rsh_Fir_array_args388[2];
  Rsh_Fir_array_args388[0] = Rsh_Fir_reg_n13_;
  Rsh_Fir_array_args388[1] = Rsh_const(CCP, 77);
  Rsh_Fir_reg_r223_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args388, Rsh_Fir_param_types_empty());
  // c153 = `as.logical`(r223)
  SEXP Rsh_Fir_array_args389[1];
  Rsh_Fir_array_args389[0] = Rsh_Fir_reg_r223_;
  Rsh_Fir_reg_c153_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args389, Rsh_Fir_param_types_empty());
  // if c153 then L496() else L110()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c153_)) {
  // L496()
    goto L496_;
  } else {
  // L110()
    goto L110_;
  }

L496_:;
  // sym36 = ldf cumsum
  Rsh_Fir_reg_sym36_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base36 = ldf cumsum in base
  Rsh_Fir_reg_base36_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard36 = `==`.4(sym36, base36)
  SEXP Rsh_Fir_array_args390[2];
  Rsh_Fir_array_args390[0] = Rsh_Fir_reg_sym36_;
  Rsh_Fir_array_args390[1] = Rsh_Fir_reg_base36_;
  Rsh_Fir_reg_guard36_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args390);
  // if guard36 then L497() else L498()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard36_)) {
  // L497()
    goto L497_;
  } else {
  // L498()
    goto L498_;
  }

L497_:;
  // sym37 = ldf `rep.int`
  Rsh_Fir_reg_sym37_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base37 = ldf `rep.int` in base
  Rsh_Fir_reg_base37_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard37 = `==`.4(sym37, base37)
  SEXP Rsh_Fir_array_args391[2];
  Rsh_Fir_array_args391[0] = Rsh_Fir_reg_sym37_;
  Rsh_Fir_array_args391[1] = Rsh_Fir_reg_base37_;
  Rsh_Fir_reg_guard37_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args391);
  // if guard37 then L499() else L500()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard37_)) {
  // L499()
    goto L499_;
  } else {
  // L500()
    goto L500_;
  }

L498_:;
  // r224 = dyn base36(<lang rep.int(c(from, by), c(1, n))>)
  SEXP Rsh_Fir_array_args392[1];
  Rsh_Fir_array_args392[0] = Rsh_const(CCP, 78);
  SEXP Rsh_Fir_array_arg_names92[1];
  Rsh_Fir_array_arg_names92[0] = R_MissingArg;
  Rsh_Fir_reg_r224_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base36_, 1, Rsh_Fir_array_args392, Rsh_Fir_array_arg_names92, CCP, RHO);
  // goto L111(r224)
  // L111(r224)
  Rsh_Fir_reg_r225_ = Rsh_Fir_reg_r224_;
  goto L111_;

L499_:;
  // sym38 = ldf c
  Rsh_Fir_reg_sym38_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base38 = ldf c in base
  Rsh_Fir_reg_base38_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard38 = `==`.4(sym38, base38)
  SEXP Rsh_Fir_array_args393[2];
  Rsh_Fir_array_args393[0] = Rsh_Fir_reg_sym38_;
  Rsh_Fir_array_args393[1] = Rsh_Fir_reg_base38_;
  Rsh_Fir_reg_guard38_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args393);
  // if guard38 then L501() else L502()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard38_)) {
  // L501()
    goto L501_;
  } else {
  // L502()
    goto L502_;
  }

L500_:;
  // r226 = dyn base37(<lang c(from, by)>, <lang c(1, n)>)
  SEXP Rsh_Fir_array_args394[2];
  Rsh_Fir_array_args394[0] = Rsh_const(CCP, 79);
  Rsh_Fir_array_args394[1] = Rsh_const(CCP, 80);
  SEXP Rsh_Fir_array_arg_names93[2];
  Rsh_Fir_array_arg_names93[0] = R_MissingArg;
  Rsh_Fir_array_arg_names93[1] = R_MissingArg;
  Rsh_Fir_reg_r226_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base37_, 2, Rsh_Fir_array_args394, Rsh_Fir_array_arg_names93, CCP, RHO);
  // goto L112(r226)
  // L112(r226)
  Rsh_Fir_reg_r227_ = Rsh_Fir_reg_r226_;
  goto L112_;

L501_:;
  // from35 = ld from
  Rsh_Fir_reg_from35_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L503() else D122()
  // L503()
  goto L503_;

L502_:;
  // r228 = dyn base38(<sym from>, <sym by>)
  SEXP Rsh_Fir_array_args395[2];
  Rsh_Fir_array_args395[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args395[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names94[2];
  Rsh_Fir_array_arg_names94[0] = R_MissingArg;
  Rsh_Fir_array_arg_names94[1] = R_MissingArg;
  Rsh_Fir_reg_r228_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base38_, 2, Rsh_Fir_array_args395, Rsh_Fir_array_arg_names94, CCP, RHO);
  // goto L113(r228)
  // L113(r228)
  Rsh_Fir_reg_r229_ = Rsh_Fir_reg_r228_;
  goto L113_;

D122_:;
  // deopt 459 [from35]
  SEXP Rsh_Fir_array_deopt_stack104[1];
  Rsh_Fir_array_deopt_stack104[0] = Rsh_Fir_reg_from35_;
  Rsh_Fir_deopt(459, 1, Rsh_Fir_array_deopt_stack104, CCP, RHO);
  return R_NilValue;

L503_:;
  // from36 = force? from35
  Rsh_Fir_reg_from36_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from35_);
  // checkMissing(from36)
  SEXP Rsh_Fir_array_args396[1];
  Rsh_Fir_array_args396[0] = Rsh_Fir_reg_from36_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args396, Rsh_Fir_param_types_empty()));
  // by15 = ld by
  Rsh_Fir_reg_by15_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L504() else D123()
  // L504()
  goto L504_;

D123_:;
  // deopt 461 [by15]
  SEXP Rsh_Fir_array_deopt_stack105[1];
  Rsh_Fir_array_deopt_stack105[0] = Rsh_Fir_reg_by15_;
  Rsh_Fir_deopt(461, 1, Rsh_Fir_array_deopt_stack105, CCP, RHO);
  return R_NilValue;

L504_:;
  // by16 = force? by15
  Rsh_Fir_reg_by16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by15_);
  // checkMissing(by16)
  SEXP Rsh_Fir_array_args397[1];
  Rsh_Fir_array_args397[0] = Rsh_Fir_reg_by16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args397, Rsh_Fir_param_types_empty()));
  // c154 = ldf c in base
  Rsh_Fir_reg_c154_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r230 = dyn c154(from36, by16)
  SEXP Rsh_Fir_array_args398[2];
  Rsh_Fir_array_args398[0] = Rsh_Fir_reg_from36_;
  Rsh_Fir_array_args398[1] = Rsh_Fir_reg_by16_;
  SEXP Rsh_Fir_array_arg_names95[2];
  Rsh_Fir_array_arg_names95[0] = R_MissingArg;
  Rsh_Fir_array_arg_names95[1] = R_MissingArg;
  Rsh_Fir_reg_r230_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c154_, 2, Rsh_Fir_array_args398, Rsh_Fir_array_arg_names95, CCP, RHO);
  // check L505() else D124()
  // L505()
  goto L505_;

D124_:;
  // deopt 464 [r230]
  SEXP Rsh_Fir_array_deopt_stack106[1];
  Rsh_Fir_array_deopt_stack106[0] = Rsh_Fir_reg_r230_;
  Rsh_Fir_deopt(464, 1, Rsh_Fir_array_deopt_stack106, CCP, RHO);
  return R_NilValue;

L505_:;
  // goto L113(r230)
  // L113(r230)
  Rsh_Fir_reg_r229_ = Rsh_Fir_reg_r230_;
  goto L113_;

L506_:;
  // n14 = ld n
  Rsh_Fir_reg_n14_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L508() else D125()
  // L508()
  goto L508_;

L507_:;
  // r231 = dyn base39(1, <sym n>)
  SEXP Rsh_Fir_array_args399[2];
  Rsh_Fir_array_args399[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args399[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names96[2];
  Rsh_Fir_array_arg_names96[0] = R_MissingArg;
  Rsh_Fir_array_arg_names96[1] = R_MissingArg;
  Rsh_Fir_reg_r231_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base39_, 2, Rsh_Fir_array_args399, Rsh_Fir_array_arg_names96, CCP, RHO);
  // goto L114(r231)
  // L114(r231)
  Rsh_Fir_reg_r232_ = Rsh_Fir_reg_r231_;
  goto L114_;

D125_:;
  // deopt 468 [n14]
  SEXP Rsh_Fir_array_deopt_stack107[1];
  Rsh_Fir_array_deopt_stack107[0] = Rsh_Fir_reg_n14_;
  Rsh_Fir_deopt(468, 1, Rsh_Fir_array_deopt_stack107, CCP, RHO);
  return R_NilValue;

L508_:;
  // n15 = force? n14
  Rsh_Fir_reg_n15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n14_);
  // checkMissing(n15)
  SEXP Rsh_Fir_array_args400[1];
  Rsh_Fir_array_args400[0] = Rsh_Fir_reg_n15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args400, Rsh_Fir_param_types_empty()));
  // c155 = ldf c in base
  Rsh_Fir_reg_c155_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r233 = dyn c155(1, n15)
  SEXP Rsh_Fir_array_args401[2];
  Rsh_Fir_array_args401[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args401[1] = Rsh_Fir_reg_n15_;
  SEXP Rsh_Fir_array_arg_names97[2];
  Rsh_Fir_array_arg_names97[0] = R_MissingArg;
  Rsh_Fir_array_arg_names97[1] = R_MissingArg;
  Rsh_Fir_reg_r233_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c155_, 2, Rsh_Fir_array_args401, Rsh_Fir_array_arg_names97, CCP, RHO);
  // check L509() else D126()
  // L509()
  goto L509_;

D126_:;
  // deopt 471 [r233]
  SEXP Rsh_Fir_array_deopt_stack108[1];
  Rsh_Fir_array_deopt_stack108[0] = Rsh_Fir_reg_r233_;
  Rsh_Fir_deopt(471, 1, Rsh_Fir_array_deopt_stack108, CCP, RHO);
  return R_NilValue;

L509_:;
  // goto L114(r233)
  // L114(r233)
  Rsh_Fir_reg_r232_ = Rsh_Fir_reg_r233_;
  goto L114_;

D127_:;
  // deopt 473 [r234]
  SEXP Rsh_Fir_array_deopt_stack109[1];
  Rsh_Fir_array_deopt_stack109[0] = Rsh_Fir_reg_r234_;
  Rsh_Fir_deopt(473, 1, Rsh_Fir_array_deopt_stack109, CCP, RHO);
  return R_NilValue;

L510_:;
  // goto L112(r234)
  // L112(r234)
  Rsh_Fir_reg_r227_ = Rsh_Fir_reg_r234_;
  goto L112_;

D128_:;
  // deopt 475 [r235]
  SEXP Rsh_Fir_array_deopt_stack110[1];
  Rsh_Fir_array_deopt_stack110[0] = Rsh_Fir_reg_r235_;
  Rsh_Fir_deopt(475, 1, Rsh_Fir_array_deopt_stack110, CCP, RHO);
  return R_NilValue;

L511_:;
  // goto L111(r235)
  // L111(r235)
  Rsh_Fir_reg_r225_ = Rsh_Fir_reg_r235_;
  goto L111_;

D129_:;
  // deopt 476 [from37]
  SEXP Rsh_Fir_array_deopt_stack111[1];
  Rsh_Fir_array_deopt_stack111[0] = Rsh_Fir_reg_from37_;
  Rsh_Fir_deopt(476, 1, Rsh_Fir_array_deopt_stack111, CCP, RHO);
  return R_NilValue;

L513_:;
  // from38 = force? from37
  Rsh_Fir_reg_from38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from37_);
  // checkMissing(from38)
  SEXP Rsh_Fir_array_args402[1];
  Rsh_Fir_array_args402[0] = Rsh_Fir_reg_from38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args402, Rsh_Fir_param_types_empty()));
  // n16 = ld n
  Rsh_Fir_reg_n16_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L514() else D130()
  // L514()
  goto L514_;

D130_:;
  // deopt 478 [from38, 0, n16]
  SEXP Rsh_Fir_array_deopt_stack112[3];
  Rsh_Fir_array_deopt_stack112[0] = Rsh_Fir_reg_from38_;
  Rsh_Fir_array_deopt_stack112[1] = Rsh_const(CCP, 68);
  Rsh_Fir_array_deopt_stack112[2] = Rsh_Fir_reg_n16_;
  Rsh_Fir_deopt(478, 3, Rsh_Fir_array_deopt_stack112, CCP, RHO);
  return R_NilValue;

L514_:;
  // n17 = force? n16
  Rsh_Fir_reg_n17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n16_);
  // checkMissing(n17)
  SEXP Rsh_Fir_array_args403[1];
  Rsh_Fir_array_args403[0] = Rsh_Fir_reg_n17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args403, Rsh_Fir_param_types_empty()));
  // r236 = `:`(0, n17)
  SEXP Rsh_Fir_array_args404[2];
  Rsh_Fir_array_args404[0] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args404[1] = Rsh_Fir_reg_n17_;
  Rsh_Fir_reg_r236_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args404, Rsh_Fir_param_types_empty());
  // by17 = ld by
  Rsh_Fir_reg_by17_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L515() else D131()
  // L515()
  goto L515_;

D131_:;
  // deopt 480 [from38, r236, by17]
  SEXP Rsh_Fir_array_deopt_stack113[3];
  Rsh_Fir_array_deopt_stack113[0] = Rsh_Fir_reg_from38_;
  Rsh_Fir_array_deopt_stack113[1] = Rsh_Fir_reg_r236_;
  Rsh_Fir_array_deopt_stack113[2] = Rsh_Fir_reg_by17_;
  Rsh_Fir_deopt(480, 3, Rsh_Fir_array_deopt_stack113, CCP, RHO);
  return R_NilValue;

L515_:;
  // by18 = force? by17
  Rsh_Fir_reg_by18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by17_);
  // checkMissing(by18)
  SEXP Rsh_Fir_array_args405[1];
  Rsh_Fir_array_args405[0] = Rsh_Fir_reg_by18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args405, Rsh_Fir_param_types_empty()));
  // r237 = `*`(r236, by18)
  SEXP Rsh_Fir_array_args406[2];
  Rsh_Fir_array_args406[0] = Rsh_Fir_reg_r236_;
  Rsh_Fir_array_args406[1] = Rsh_Fir_reg_by18_;
  Rsh_Fir_reg_r237_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args406, Rsh_Fir_param_types_empty());
  // r238 = `+`(from38, r237)
  SEXP Rsh_Fir_array_args407[2];
  Rsh_Fir_array_args407[0] = Rsh_Fir_reg_from38_;
  Rsh_Fir_array_args407[1] = Rsh_Fir_reg_r237_;
  Rsh_Fir_reg_r238_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args407, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r238
  return Rsh_Fir_reg_r238_;

L517_:;
  // n18 = ld n
  Rsh_Fir_reg_n18_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L519() else D132()
  // L519()
  goto L519_;

L518_:;
  // r239 = dyn base40(<lang `+`(n, 1.0E-10)>)
  SEXP Rsh_Fir_array_args408[1];
  Rsh_Fir_array_args408[0] = Rsh_const(CCP, 81);
  SEXP Rsh_Fir_array_arg_names98[1];
  Rsh_Fir_array_arg_names98[0] = R_MissingArg;
  Rsh_Fir_reg_r239_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base40_, 1, Rsh_Fir_array_args408, Rsh_Fir_array_arg_names98, CCP, RHO);
  // goto L115(r239)
  // L115(r239)
  Rsh_Fir_reg_r240_ = Rsh_Fir_reg_r239_;
  goto L115_;

D132_:;
  // deopt 486 [n18]
  SEXP Rsh_Fir_array_deopt_stack114[1];
  Rsh_Fir_array_deopt_stack114[0] = Rsh_Fir_reg_n18_;
  Rsh_Fir_deopt(486, 1, Rsh_Fir_array_deopt_stack114, CCP, RHO);
  return R_NilValue;

L519_:;
  // n19 = force? n18
  Rsh_Fir_reg_n19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n18_);
  // checkMissing(n19)
  SEXP Rsh_Fir_array_args409[1];
  Rsh_Fir_array_args409[0] = Rsh_Fir_reg_n19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args409, Rsh_Fir_param_types_empty()));
  // r241 = `+`(n19, 1.0E-10)
  SEXP Rsh_Fir_array_args410[2];
  Rsh_Fir_array_args410[0] = Rsh_Fir_reg_n19_;
  Rsh_Fir_array_args410[1] = Rsh_const(CCP, 82);
  Rsh_Fir_reg_r241_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args410, Rsh_Fir_param_types_empty());
  // as_integer1 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r242 = dyn as_integer1(r241)
  SEXP Rsh_Fir_array_args411[1];
  Rsh_Fir_array_args411[0] = Rsh_Fir_reg_r241_;
  SEXP Rsh_Fir_array_arg_names99[1];
  Rsh_Fir_array_arg_names99[0] = R_MissingArg;
  Rsh_Fir_reg_r242_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer1_, 1, Rsh_Fir_array_args411, Rsh_Fir_array_arg_names99, CCP, RHO);
  // check L520() else D133()
  // L520()
  goto L520_;

D133_:;
  // deopt 491 [r242]
  SEXP Rsh_Fir_array_deopt_stack115[1];
  Rsh_Fir_array_deopt_stack115[0] = Rsh_Fir_reg_r242_;
  Rsh_Fir_deopt(491, 1, Rsh_Fir_array_deopt_stack115, CCP, RHO);
  return R_NilValue;

L520_:;
  // goto L115(r242)
  // L115(r242)
  Rsh_Fir_reg_r240_ = Rsh_Fir_reg_r242_;
  goto L115_;

D134_:;
  // deopt 493 [finite_del2]
  SEXP Rsh_Fir_array_deopt_stack116[1];
  Rsh_Fir_array_deopt_stack116[0] = Rsh_Fir_reg_finite_del2_;
  Rsh_Fir_deopt(493, 1, Rsh_Fir_array_deopt_stack116, CCP, RHO);
  return R_NilValue;

L521_:;
  // finite_del3 = force? finite_del2
  Rsh_Fir_reg_finite_del3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_finite_del2_);
  // checkMissing(finite_del3)
  SEXP Rsh_Fir_array_args412[1];
  Rsh_Fir_array_args412[0] = Rsh_Fir_reg_finite_del3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args412, Rsh_Fir_param_types_empty()));
  // c156 = `as.logical`(finite_del3)
  SEXP Rsh_Fir_array_args413[1];
  Rsh_Fir_array_args413[0] = Rsh_Fir_reg_finite_del3_;
  Rsh_Fir_reg_c156_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args413, Rsh_Fir_param_types_empty());
  // if c156 then L522() else L116()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c156_)) {
  // L522()
    goto L522_;
  } else {
  // L116()
    goto L116_;
  }

L522_:;
  // from39 = ld from
  Rsh_Fir_reg_from39_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L523() else D135()
  // L523()
  goto L523_;

D135_:;
  // deopt 495 [from39]
  SEXP Rsh_Fir_array_deopt_stack117[1];
  Rsh_Fir_array_deopt_stack117[0] = Rsh_Fir_reg_from39_;
  Rsh_Fir_deopt(495, 1, Rsh_Fir_array_deopt_stack117, CCP, RHO);
  return R_NilValue;

L523_:;
  // from40 = force? from39
  Rsh_Fir_reg_from40_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from39_);
  // checkMissing(from40)
  SEXP Rsh_Fir_array_args414[1];
  Rsh_Fir_array_args414[0] = Rsh_Fir_reg_from40_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args414, Rsh_Fir_param_types_empty()));
  // n20 = ld n
  Rsh_Fir_reg_n20_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L524() else D136()
  // L524()
  goto L524_;

D136_:;
  // deopt 497 [from40, 0, n20]
  SEXP Rsh_Fir_array_deopt_stack118[3];
  Rsh_Fir_array_deopt_stack118[0] = Rsh_Fir_reg_from40_;
  Rsh_Fir_array_deopt_stack118[1] = Rsh_const(CCP, 68);
  Rsh_Fir_array_deopt_stack118[2] = Rsh_Fir_reg_n20_;
  Rsh_Fir_deopt(497, 3, Rsh_Fir_array_deopt_stack118, CCP, RHO);
  return R_NilValue;

L524_:;
  // n21 = force? n20
  Rsh_Fir_reg_n21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n20_);
  // checkMissing(n21)
  SEXP Rsh_Fir_array_args415[1];
  Rsh_Fir_array_args415[0] = Rsh_Fir_reg_n21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args415, Rsh_Fir_param_types_empty()));
  // r243 = `:`(0, n21)
  SEXP Rsh_Fir_array_args416[2];
  Rsh_Fir_array_args416[0] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args416[1] = Rsh_Fir_reg_n21_;
  Rsh_Fir_reg_r243_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args416, Rsh_Fir_param_types_empty());
  // by19 = ld by
  Rsh_Fir_reg_by19_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L525() else D137()
  // L525()
  goto L525_;

D137_:;
  // deopt 499 [from40, r243, by19]
  SEXP Rsh_Fir_array_deopt_stack119[3];
  Rsh_Fir_array_deopt_stack119[0] = Rsh_Fir_reg_from40_;
  Rsh_Fir_array_deopt_stack119[1] = Rsh_Fir_reg_r243_;
  Rsh_Fir_array_deopt_stack119[2] = Rsh_Fir_reg_by19_;
  Rsh_Fir_deopt(499, 3, Rsh_Fir_array_deopt_stack119, CCP, RHO);
  return R_NilValue;

L525_:;
  // by20 = force? by19
  Rsh_Fir_reg_by20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by19_);
  // checkMissing(by20)
  SEXP Rsh_Fir_array_args417[1];
  Rsh_Fir_array_args417[0] = Rsh_Fir_reg_by20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args417, Rsh_Fir_param_types_empty()));
  // r244 = `*`(r243, by20)
  SEXP Rsh_Fir_array_args418[2];
  Rsh_Fir_array_args418[0] = Rsh_Fir_reg_r243_;
  Rsh_Fir_array_args418[1] = Rsh_Fir_reg_by20_;
  Rsh_Fir_reg_r244_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args418, Rsh_Fir_param_types_empty());
  // r245 = `+`(from40, r244)
  SEXP Rsh_Fir_array_args419[2];
  Rsh_Fir_array_args419[0] = Rsh_Fir_reg_from40_;
  Rsh_Fir_array_args419[1] = Rsh_Fir_reg_r244_;
  Rsh_Fir_reg_r245_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args419, Rsh_Fir_param_types_empty());
  // goto L117(r245)
  // L117(r245)
  Rsh_Fir_reg_r246_ = Rsh_Fir_reg_r245_;
  goto L117_;

D138_:;
  // deopt 503 [from41]
  SEXP Rsh_Fir_array_deopt_stack120[1];
  Rsh_Fir_array_deopt_stack120[0] = Rsh_Fir_reg_from41_;
  Rsh_Fir_deopt(503, 1, Rsh_Fir_array_deopt_stack120, CCP, RHO);
  return R_NilValue;

L527_:;
  // from42 = force? from41
  Rsh_Fir_reg_from42_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from41_);
  // checkMissing(from42)
  SEXP Rsh_Fir_array_args420[1];
  Rsh_Fir_array_args420[0] = Rsh_Fir_reg_from42_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args420, Rsh_Fir_param_types_empty()));
  // r247 = `/`(from42, 4.0)
  SEXP Rsh_Fir_array_args421[2];
  Rsh_Fir_array_args421[0] = Rsh_Fir_reg_from42_;
  Rsh_Fir_array_args421[1] = Rsh_const(CCP, 83);
  Rsh_Fir_reg_r247_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args421, Rsh_Fir_param_types_empty());
  // n22 = ld n
  Rsh_Fir_reg_n22_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L528() else D139()
  // L528()
  goto L528_;

D139_:;
  // deopt 507 [r247, 0, n22]
  SEXP Rsh_Fir_array_deopt_stack121[3];
  Rsh_Fir_array_deopt_stack121[0] = Rsh_Fir_reg_r247_;
  Rsh_Fir_array_deopt_stack121[1] = Rsh_const(CCP, 68);
  Rsh_Fir_array_deopt_stack121[2] = Rsh_Fir_reg_n22_;
  Rsh_Fir_deopt(507, 3, Rsh_Fir_array_deopt_stack121, CCP, RHO);
  return R_NilValue;

L528_:;
  // n23 = force? n22
  Rsh_Fir_reg_n23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n22_);
  // checkMissing(n23)
  SEXP Rsh_Fir_array_args422[1];
  Rsh_Fir_array_args422[0] = Rsh_Fir_reg_n23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args422, Rsh_Fir_param_types_empty()));
  // r248 = `:`(0, n23)
  SEXP Rsh_Fir_array_args423[2];
  Rsh_Fir_array_args423[0] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args423[1] = Rsh_Fir_reg_n23_;
  Rsh_Fir_reg_r248_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args423, Rsh_Fir_param_types_empty());
  // by21 = ld by
  Rsh_Fir_reg_by21_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L529() else D140()
  // L529()
  goto L529_;

D140_:;
  // deopt 509 [r247, r248, by21]
  SEXP Rsh_Fir_array_deopt_stack122[3];
  Rsh_Fir_array_deopt_stack122[0] = Rsh_Fir_reg_r247_;
  Rsh_Fir_array_deopt_stack122[1] = Rsh_Fir_reg_r248_;
  Rsh_Fir_array_deopt_stack122[2] = Rsh_Fir_reg_by21_;
  Rsh_Fir_deopt(509, 3, Rsh_Fir_array_deopt_stack122, CCP, RHO);
  return R_NilValue;

L529_:;
  // by22 = force? by21
  Rsh_Fir_reg_by22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by21_);
  // checkMissing(by22)
  SEXP Rsh_Fir_array_args424[1];
  Rsh_Fir_array_args424[0] = Rsh_Fir_reg_by22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args424, Rsh_Fir_param_types_empty()));
  // r249 = `/`(by22, 4.0)
  SEXP Rsh_Fir_array_args425[2];
  Rsh_Fir_array_args425[0] = Rsh_Fir_reg_by22_;
  Rsh_Fir_array_args425[1] = Rsh_const(CCP, 83);
  Rsh_Fir_reg_r249_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args425, Rsh_Fir_param_types_empty());
  // r250 = `*`(r248, r249)
  SEXP Rsh_Fir_array_args426[2];
  Rsh_Fir_array_args426[0] = Rsh_Fir_reg_r248_;
  Rsh_Fir_array_args426[1] = Rsh_Fir_reg_r249_;
  Rsh_Fir_reg_r250_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args426, Rsh_Fir_param_types_empty());
  // r251 = `+`(r247, r250)
  SEXP Rsh_Fir_array_args427[2];
  Rsh_Fir_array_args427[0] = Rsh_Fir_reg_r247_;
  Rsh_Fir_array_args427[1] = Rsh_Fir_reg_r250_;
  Rsh_Fir_reg_r251_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args427, Rsh_Fir_param_types_empty());
  // r252 = `*`(r251, 4.0)
  SEXP Rsh_Fir_array_args428[2];
  Rsh_Fir_array_args428[0] = Rsh_Fir_reg_r251_;
  Rsh_Fir_array_args428[1] = Rsh_const(CCP, 83);
  Rsh_Fir_reg_r252_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args428, Rsh_Fir_param_types_empty());
  // goto L117(r252)
  // L117(r252)
  Rsh_Fir_reg_r246_ = Rsh_Fir_reg_r252_;
  goto L117_;

D141_:;
  // deopt 518 [by23]
  SEXP Rsh_Fir_array_deopt_stack123[1];
  Rsh_Fir_array_deopt_stack123[0] = Rsh_Fir_reg_by23_;
  Rsh_Fir_deopt(518, 1, Rsh_Fir_array_deopt_stack123, CCP, RHO);
  return R_NilValue;

L530_:;
  // by24 = force? by23
  Rsh_Fir_reg_by24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by23_);
  // checkMissing(by24)
  SEXP Rsh_Fir_array_args429[1];
  Rsh_Fir_array_args429[0] = Rsh_Fir_reg_by24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args429, Rsh_Fir_param_types_empty()));
  // r253 = `>`(by24, 0.0)
  SEXP Rsh_Fir_array_args430[2];
  Rsh_Fir_array_args430[0] = Rsh_Fir_reg_by24_;
  Rsh_Fir_array_args430[1] = Rsh_const(CCP, 61);
  Rsh_Fir_reg_r253_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args430, Rsh_Fir_param_types_empty());
  // c157 = `as.logical`(r253)
  SEXP Rsh_Fir_array_args431[1];
  Rsh_Fir_array_args431[0] = Rsh_Fir_reg_r253_;
  Rsh_Fir_reg_c157_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args431, Rsh_Fir_param_types_empty());
  // if c157 then L531() else L118()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c157_)) {
  // L531()
    goto L531_;
  } else {
  // L118()
    goto L118_;
  }

L531_:;
  // pmin = ldf pmin
  Rsh_Fir_reg_pmin = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 84), RHO);
  // check L532() else D142()
  // L532()
  goto L532_;

D142_:;
  // deopt 523 []
  Rsh_Fir_deopt(523, 0, NULL, CCP, RHO);
  return R_NilValue;

L532_:;
  // p6 = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3182225035_6, CCP, RHO);
  // p7 = prom<V +>{
  //   to31 = ld to;
  //   to32 = force? to31;
  //   checkMissing(to32);
  //   return to32;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3182225035_7, CCP, RHO);
  // r256 = dyn pmin(p6, p7)
  SEXP Rsh_Fir_array_args434[2];
  Rsh_Fir_array_args434[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args434[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names100[2];
  Rsh_Fir_array_arg_names100[0] = R_MissingArg;
  Rsh_Fir_array_arg_names100[1] = R_MissingArg;
  Rsh_Fir_reg_r256_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmin, 2, Rsh_Fir_array_args434, Rsh_Fir_array_arg_names100, CCP, RHO);
  // check L533() else D143()
  // L533()
  goto L533_;

D143_:;
  // deopt 526 [r256]
  SEXP Rsh_Fir_array_deopt_stack124[1];
  Rsh_Fir_array_deopt_stack124[0] = Rsh_Fir_reg_r256_;
  Rsh_Fir_deopt(526, 1, Rsh_Fir_array_deopt_stack124, CCP, RHO);
  return R_NilValue;

L533_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r256
  return Rsh_Fir_reg_r256_;

D144_:;
  // deopt 528 []
  Rsh_Fir_deopt(528, 0, NULL, CCP, RHO);
  return R_NilValue;

L535_:;
  // p8 = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   return x3;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3182225035_8, CCP, RHO);
  // p9 = prom<V +>{
  //   to33 = ld to;
  //   to34 = force? to33;
  //   checkMissing(to34);
  //   return to34;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3182225035_9, CCP, RHO);
  // r259 = dyn pmax(p8, p9)
  SEXP Rsh_Fir_array_args437[2];
  Rsh_Fir_array_args437[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args437[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names101[2];
  Rsh_Fir_array_arg_names101[0] = R_MissingArg;
  Rsh_Fir_array_arg_names101[1] = R_MissingArg;
  Rsh_Fir_reg_r259_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmax, 2, Rsh_Fir_array_args437, Rsh_Fir_array_arg_names101, CCP, RHO);
  // check L536() else D145()
  // L536()
  goto L536_;

D145_:;
  // deopt 531 [r259]
  SEXP Rsh_Fir_array_deopt_stack125[1];
  Rsh_Fir_array_deopt_stack125[0] = Rsh_Fir_reg_r259_;
  Rsh_Fir_deopt(531, 1, Rsh_Fir_array_deopt_stack125, CCP, RHO);
  return R_NilValue;

L536_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r259
  return Rsh_Fir_reg_r259_;

L538_:;
  // length_out21 = ld `length.out`
  Rsh_Fir_reg_length_out21_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L540() else D146()
  // L540()
  goto L540_;

L539_:;
  // r260 = dyn base41(<sym length.out>)
  SEXP Rsh_Fir_array_args438[1];
  Rsh_Fir_array_args438[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names102[1];
  Rsh_Fir_array_arg_names102[0] = R_MissingArg;
  Rsh_Fir_reg_r260_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base41_, 1, Rsh_Fir_array_args438, Rsh_Fir_array_arg_names102, CCP, RHO);
  // goto L119(r260)
  // L119(r260)
  Rsh_Fir_reg_r261_ = Rsh_Fir_reg_r260_;
  goto L119_;

D146_:;
  // deopt 534 [length_out21]
  SEXP Rsh_Fir_array_deopt_stack126[1];
  Rsh_Fir_array_deopt_stack126[0] = Rsh_Fir_reg_length_out21_;
  Rsh_Fir_deopt(534, 1, Rsh_Fir_array_deopt_stack126, CCP, RHO);
  return R_NilValue;

L540_:;
  // length_out22 = force? length_out21
  Rsh_Fir_reg_length_out22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out21_);
  // checkMissing(length_out22)
  SEXP Rsh_Fir_array_args439[1];
  Rsh_Fir_array_args439[0] = Rsh_Fir_reg_length_out22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args439, Rsh_Fir_param_types_empty()));
  // is_finite5 = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r262 = dyn is_finite5(length_out22)
  SEXP Rsh_Fir_array_args440[1];
  Rsh_Fir_array_args440[0] = Rsh_Fir_reg_length_out22_;
  SEXP Rsh_Fir_array_arg_names103[1];
  Rsh_Fir_array_arg_names103[0] = R_MissingArg;
  Rsh_Fir_reg_r262_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite5_, 1, Rsh_Fir_array_args440, Rsh_Fir_array_arg_names103, CCP, RHO);
  // check L541() else D147()
  // L541()
  goto L541_;

D147_:;
  // deopt 537 [r262]
  SEXP Rsh_Fir_array_deopt_stack127[1];
  Rsh_Fir_array_deopt_stack127[0] = Rsh_Fir_reg_r262_;
  Rsh_Fir_deopt(537, 1, Rsh_Fir_array_deopt_stack127, CCP, RHO);
  return R_NilValue;

L541_:;
  // goto L119(r262)
  // L119(r262)
  Rsh_Fir_reg_r261_ = Rsh_Fir_reg_r262_;
  goto L119_;

L542_:;
  // length_out23 = ld `length.out`
  Rsh_Fir_reg_length_out23_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L543() else D148()
  // L543()
  goto L543_;

D148_:;
  // deopt 539 [c158, length_out23]
  SEXP Rsh_Fir_array_deopt_stack128[2];
  Rsh_Fir_array_deopt_stack128[0] = Rsh_Fir_reg_c158_;
  Rsh_Fir_array_deopt_stack128[1] = Rsh_Fir_reg_length_out23_;
  Rsh_Fir_deopt(539, 2, Rsh_Fir_array_deopt_stack128, CCP, RHO);
  return R_NilValue;

L543_:;
  // length_out24 = force? length_out23
  Rsh_Fir_reg_length_out24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out23_);
  // checkMissing(length_out24)
  SEXP Rsh_Fir_array_args441[1];
  Rsh_Fir_array_args441[0] = Rsh_Fir_reg_length_out24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args441, Rsh_Fir_param_types_empty()));
  // r264 = `<`(length_out24, 0)
  SEXP Rsh_Fir_array_args442[2];
  Rsh_Fir_array_args442[0] = Rsh_Fir_reg_length_out24_;
  Rsh_Fir_array_args442[1] = Rsh_const(CCP, 68);
  Rsh_Fir_reg_r264_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args442, Rsh_Fir_param_types_empty());
  // c161 = `as.logical`(r264)
  SEXP Rsh_Fir_array_args443[1];
  Rsh_Fir_array_args443[0] = Rsh_Fir_reg_r264_;
  Rsh_Fir_reg_c161_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args443, Rsh_Fir_param_types_empty());
  // c162 = `||`(c158, c161)
  SEXP Rsh_Fir_array_args444[2];
  Rsh_Fir_array_args444[0] = Rsh_Fir_reg_c158_;
  Rsh_Fir_array_args444[1] = Rsh_Fir_reg_c161_;
  Rsh_Fir_reg_c162_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args444, Rsh_Fir_param_types_empty());
  // goto L120(c162)
  // L120(c162)
  Rsh_Fir_reg_c159_ = Rsh_Fir_reg_c162_;
  goto L120_;

L545_:;
  // stop10 = ldf stop
  Rsh_Fir_reg_stop10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L546() else D149()
  // L546()
  goto L546_;

D149_:;
  // deopt 545 []
  Rsh_Fir_deopt(545, 0, NULL, CCP, RHO);
  return R_NilValue;

L546_:;
  // r265 = dyn stop10("'length.out' must be a non-negative number")
  SEXP Rsh_Fir_array_args445[1];
  Rsh_Fir_array_args445[0] = Rsh_const(CCP, 85);
  SEXP Rsh_Fir_array_arg_names104[1];
  Rsh_Fir_array_arg_names104[0] = R_MissingArg;
  Rsh_Fir_reg_r265_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop10_, 1, Rsh_Fir_array_args445, Rsh_Fir_array_arg_names104, CCP, RHO);
  // check L547() else D150()
  // L547()
  goto L547_;

D150_:;
  // deopt 547 [r265]
  SEXP Rsh_Fir_array_deopt_stack129[1];
  Rsh_Fir_array_deopt_stack129[0] = Rsh_Fir_reg_r265_;
  Rsh_Fir_deopt(547, 1, Rsh_Fir_array_deopt_stack129, CCP, RHO);
  return R_NilValue;

L547_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r265
  return Rsh_Fir_reg_r265_;

D151_:;
  // deopt 548 [length_out25]
  SEXP Rsh_Fir_array_deopt_stack130[1];
  Rsh_Fir_array_deopt_stack130[0] = Rsh_Fir_reg_length_out25_;
  Rsh_Fir_deopt(548, 1, Rsh_Fir_array_deopt_stack130, CCP, RHO);
  return R_NilValue;

L549_:;
  // length_out26 = force? length_out25
  Rsh_Fir_reg_length_out26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out25_);
  // checkMissing(length_out26)
  SEXP Rsh_Fir_array_args446[1];
  Rsh_Fir_array_args446[0] = Rsh_Fir_reg_length_out26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args446, Rsh_Fir_param_types_empty()));
  // r266 = `==`(length_out26, 0)
  SEXP Rsh_Fir_array_args447[2];
  Rsh_Fir_array_args447[0] = Rsh_Fir_reg_length_out26_;
  Rsh_Fir_array_args447[1] = Rsh_const(CCP, 68);
  Rsh_Fir_reg_r266_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args447, Rsh_Fir_param_types_empty());
  // c165 = `as.logical`(r266)
  SEXP Rsh_Fir_array_args448[1];
  Rsh_Fir_array_args448[0] = Rsh_Fir_reg_r266_;
  Rsh_Fir_reg_c165_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args448, Rsh_Fir_param_types_empty());
  // if c165 then L550() else L122()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c165_)) {
  // L550()
    goto L550_;
  } else {
  // L122()
    goto L122_;
  }

L550_:;
  // integer2 = ldf integer
  Rsh_Fir_reg_integer2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L551() else D152()
  // L551()
  goto L551_;

D152_:;
  // deopt 553 []
  Rsh_Fir_deopt(553, 0, NULL, CCP, RHO);
  return R_NilValue;

L551_:;
  // r267 = dyn integer2()
  Rsh_Fir_reg_r267_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_integer2_, 0, NULL, NULL, CCP, RHO);
  // check L552() else D153()
  // L552()
  goto L552_;

D153_:;
  // deopt 554 [r267]
  SEXP Rsh_Fir_array_deopt_stack131[1];
  Rsh_Fir_array_deopt_stack131[0] = Rsh_Fir_reg_r267_;
  Rsh_Fir_deopt(554, 1, Rsh_Fir_array_deopt_stack131, CCP, RHO);
  return R_NilValue;

L552_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r267
  return Rsh_Fir_reg_r267_;

D154_:;
  // deopt 555 [One2]
  SEXP Rsh_Fir_array_deopt_stack132[1];
  Rsh_Fir_array_deopt_stack132[0] = Rsh_Fir_reg_One2_;
  Rsh_Fir_deopt(555, 1, Rsh_Fir_array_deopt_stack132, CCP, RHO);
  return R_NilValue;

L554_:;
  // One3 = force? One2
  Rsh_Fir_reg_One3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_One2_);
  // checkMissing(One3)
  SEXP Rsh_Fir_array_args449[1];
  Rsh_Fir_array_args449[0] = Rsh_Fir_reg_One3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args449, Rsh_Fir_param_types_empty()));
  // c166 = `as.logical`(One3)
  SEXP Rsh_Fir_array_args450[1];
  Rsh_Fir_array_args450[0] = Rsh_Fir_reg_One3_;
  Rsh_Fir_reg_c166_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args450, Rsh_Fir_param_types_empty());
  // if c166 then L555() else L123()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c166_)) {
  // L555()
    goto L555_;
  } else {
  // L123()
    goto L123_;
  }

L555_:;
  // sym42 = ldf seq_len
  Rsh_Fir_reg_sym42_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base42 = ldf seq_len in base
  Rsh_Fir_reg_base42_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard42 = `==`.4(sym42, base42)
  SEXP Rsh_Fir_array_args451[2];
  Rsh_Fir_array_args451[0] = Rsh_Fir_reg_sym42_;
  Rsh_Fir_array_args451[1] = Rsh_Fir_reg_base42_;
  Rsh_Fir_reg_guard42_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args451);
  // if guard42 then L556() else L557()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard42_)) {
  // L556()
    goto L556_;
  } else {
  // L557()
    goto L557_;
  }

L556_:;
  // length_out27 = ld `length.out`
  Rsh_Fir_reg_length_out27_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L558() else D155()
  // L558()
  goto L558_;

L557_:;
  // r268 = dyn base42(<sym length.out>)
  SEXP Rsh_Fir_array_args452[1];
  Rsh_Fir_array_args452[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names105[1];
  Rsh_Fir_array_arg_names105[0] = R_MissingArg;
  Rsh_Fir_reg_r268_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base42_, 1, Rsh_Fir_array_args452, Rsh_Fir_array_arg_names105, CCP, RHO);
  // goto L124(r268)
  // L124(r268)
  Rsh_Fir_reg_r269_ = Rsh_Fir_reg_r268_;
  goto L124_;

D155_:;
  // deopt 558 [length_out27]
  SEXP Rsh_Fir_array_deopt_stack133[1];
  Rsh_Fir_array_deopt_stack133[0] = Rsh_Fir_reg_length_out27_;
  Rsh_Fir_deopt(558, 1, Rsh_Fir_array_deopt_stack133, CCP, RHO);
  return R_NilValue;

L558_:;
  // length_out28 = force? length_out27
  Rsh_Fir_reg_length_out28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out27_);
  // checkMissing(length_out28)
  SEXP Rsh_Fir_array_args453[1];
  Rsh_Fir_array_args453[0] = Rsh_Fir_reg_length_out28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args453, Rsh_Fir_param_types_empty()));
  // r270 = seq_len(length_out28)
  SEXP Rsh_Fir_array_args454[1];
  Rsh_Fir_array_args454[0] = Rsh_Fir_reg_length_out28_;
  Rsh_Fir_reg_r270_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args454, Rsh_Fir_param_types_empty());
  // goto L124(r270)
  // L124(r270)
  Rsh_Fir_reg_r269_ = Rsh_Fir_reg_r270_;
  goto L124_;

L560_:;
  // missing8 = ldf missing in base
  Rsh_Fir_reg_missing8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r273 = dyn missing8(<sym by>)
  SEXP Rsh_Fir_array_args455[1];
  Rsh_Fir_array_args455[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names106[1];
  Rsh_Fir_array_arg_names106[0] = R_MissingArg;
  Rsh_Fir_reg_r273_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing8_, 1, Rsh_Fir_array_args455, Rsh_Fir_array_arg_names106, CCP, RHO);
  // goto L125(r273)
  // L125(r273)
  Rsh_Fir_reg_r272_ = Rsh_Fir_reg_r273_;
  goto L125_;

L561_:;
  // r271 = dyn base43(<sym by>)
  SEXP Rsh_Fir_array_args456[1];
  Rsh_Fir_array_args456[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names107[1];
  Rsh_Fir_array_arg_names107[0] = R_MissingArg;
  Rsh_Fir_reg_r271_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base43_, 1, Rsh_Fir_array_args456, Rsh_Fir_array_arg_names107, CCP, RHO);
  // goto L125(r271)
  // L125(r271)
  Rsh_Fir_reg_r272_ = Rsh_Fir_reg_r271_;
  goto L125_;

L562_:;
  // sym44 = ldf missing
  Rsh_Fir_reg_sym44_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base44 = ldf missing in base
  Rsh_Fir_reg_base44_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard44 = `==`.4(sym44, base44)
  SEXP Rsh_Fir_array_args457[2];
  Rsh_Fir_array_args457[0] = Rsh_Fir_reg_sym44_;
  Rsh_Fir_array_args457[1] = Rsh_Fir_reg_base44_;
  Rsh_Fir_reg_guard44_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args457);
  // if guard44 then L563() else L564()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard44_)) {
  // L563()
    goto L563_;
  } else {
  // L564()
    goto L564_;
  }

L563_:;
  // missing9 = ldf missing in base
  Rsh_Fir_reg_missing9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r276 = dyn missing9(<sym to>)
  SEXP Rsh_Fir_array_args458[1];
  Rsh_Fir_array_args458[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names108[1];
  Rsh_Fir_array_arg_names108[0] = R_MissingArg;
  Rsh_Fir_reg_r276_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing9_, 1, Rsh_Fir_array_args458, Rsh_Fir_array_arg_names108, CCP, RHO);
  // goto L127(r276)
  // L127(r276)
  Rsh_Fir_reg_r275_ = Rsh_Fir_reg_r276_;
  goto L127_;

L564_:;
  // r274 = dyn base44(<sym to>)
  SEXP Rsh_Fir_array_args459[1];
  Rsh_Fir_array_args459[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names109[1];
  Rsh_Fir_array_arg_names109[0] = R_MissingArg;
  Rsh_Fir_reg_r274_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base44_, 1, Rsh_Fir_array_args459, Rsh_Fir_array_arg_names109, CCP, RHO);
  // goto L127(r274)
  // L127(r274)
  Rsh_Fir_reg_r275_ = Rsh_Fir_reg_r274_;
  goto L127_;

L565_:;
  // from43 = ld from
  Rsh_Fir_reg_from43_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L566() else D156()
  // L566()
  goto L566_;

D156_:;
  // deopt 567 [from43]
  SEXP Rsh_Fir_array_deopt_stack134[1];
  Rsh_Fir_array_deopt_stack134[0] = Rsh_Fir_reg_from43_;
  Rsh_Fir_deopt(567, 1, Rsh_Fir_array_deopt_stack134, CCP, RHO);
  return R_NilValue;

L566_:;
  // from44 = force? from43
  Rsh_Fir_reg_from44_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from43_);
  // checkMissing(from44)
  SEXP Rsh_Fir_array_args460[1];
  Rsh_Fir_array_args460[0] = Rsh_Fir_reg_from44_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args460, Rsh_Fir_param_types_empty()));
  // length_out29 = ld `length.out`
  Rsh_Fir_reg_length_out29_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L567() else D157()
  // L567()
  goto L567_;

D157_:;
  // deopt 568 [from44, length_out29]
  SEXP Rsh_Fir_array_deopt_stack135[2];
  Rsh_Fir_array_deopt_stack135[0] = Rsh_Fir_reg_from44_;
  Rsh_Fir_array_deopt_stack135[1] = Rsh_Fir_reg_length_out29_;
  Rsh_Fir_deopt(568, 2, Rsh_Fir_array_deopt_stack135, CCP, RHO);
  return R_NilValue;

L567_:;
  // length_out30 = force? length_out29
  Rsh_Fir_reg_length_out30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out29_);
  // checkMissing(length_out30)
  SEXP Rsh_Fir_array_args461[1];
  Rsh_Fir_array_args461[0] = Rsh_Fir_reg_length_out30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args461, Rsh_Fir_param_types_empty()));
  // r277 = `-`(length_out30, 1.0)
  SEXP Rsh_Fir_array_args462[2];
  Rsh_Fir_array_args462[0] = Rsh_Fir_reg_length_out30_;
  Rsh_Fir_array_args462[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r277_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args462, Rsh_Fir_param_types_empty());
  // r278 = `+`(from44, r277)
  SEXP Rsh_Fir_array_args463[2];
  Rsh_Fir_array_args463[0] = Rsh_Fir_reg_from44_;
  Rsh_Fir_array_args463[1] = Rsh_Fir_reg_r277_;
  Rsh_Fir_reg_r278_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args463, Rsh_Fir_param_types_empty());
  // st to = r278
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r278_, RHO);
  (void)(Rsh_Fir_reg_r278_);
  // intn1 = ld intn1
  Rsh_Fir_reg_intn1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L568() else D158()
  // L568()
  goto L568_;

D158_:;
  // deopt 574 [intn1]
  SEXP Rsh_Fir_array_deopt_stack136[1];
  Rsh_Fir_array_deopt_stack136[0] = Rsh_Fir_reg_intn1_;
  Rsh_Fir_deopt(574, 1, Rsh_Fir_array_deopt_stack136, CCP, RHO);
  return R_NilValue;

L568_:;
  // intn2 = force? intn1
  Rsh_Fir_reg_intn2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_intn1_);
  // checkMissing(intn2)
  SEXP Rsh_Fir_array_args464[1];
  Rsh_Fir_array_args464[0] = Rsh_Fir_reg_intn2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args464, Rsh_Fir_param_types_empty()));
  // c169 = `as.logical`(intn2)
  SEXP Rsh_Fir_array_args465[1];
  Rsh_Fir_array_args465[0] = Rsh_Fir_reg_intn2_;
  Rsh_Fir_reg_c169_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args465, Rsh_Fir_param_types_empty());
  // if c169 then L569() else L129(c169)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c169_)) {
  // L569()
    goto L569_;
  } else {
  // L129(c169)
    Rsh_Fir_reg_c171_ = Rsh_Fir_reg_c169_;
    goto L129_;
  }

L569_:;
  // is_logint4 = ldf `is.logint`
  Rsh_Fir_reg_is_logint4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L570() else D159()
  // L570()
  goto L570_;

D159_:;
  // deopt 577 [c169]
  SEXP Rsh_Fir_array_deopt_stack137[1];
  Rsh_Fir_array_deopt_stack137[0] = Rsh_Fir_reg_c169_;
  Rsh_Fir_deopt(577, 1, Rsh_Fir_array_deopt_stack137, CCP, RHO);
  return R_NilValue;

L570_:;
  // p10 = prom<V +>{
  //   from45 = ld from;
  //   from46 = force? from45;
  //   checkMissing(from46);
  //   return from46;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3182225035_10, CCP, RHO);
  // r280 = dyn is_logint4(p10)
  SEXP Rsh_Fir_array_args467[1];
  Rsh_Fir_array_args467[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names110[1];
  Rsh_Fir_array_arg_names110[0] = R_MissingArg;
  Rsh_Fir_reg_r280_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_logint4_, 1, Rsh_Fir_array_args467, Rsh_Fir_array_arg_names110, CCP, RHO);
  // check L571() else D160()
  // L571()
  goto L571_;

D160_:;
  // deopt 579 [c169, r280]
  SEXP Rsh_Fir_array_deopt_stack138[2];
  Rsh_Fir_array_deopt_stack138[0] = Rsh_Fir_reg_c169_;
  Rsh_Fir_array_deopt_stack138[1] = Rsh_Fir_reg_r280_;
  Rsh_Fir_deopt(579, 2, Rsh_Fir_array_deopt_stack138, CCP, RHO);
  return R_NilValue;

L571_:;
  // c172 = `as.logical`(r280)
  SEXP Rsh_Fir_array_args468[1];
  Rsh_Fir_array_args468[0] = Rsh_Fir_reg_r280_;
  Rsh_Fir_reg_c172_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args468, Rsh_Fir_param_types_empty());
  // c173 = `&&`(c169, c172)
  SEXP Rsh_Fir_array_args469[2];
  Rsh_Fir_array_args469[0] = Rsh_Fir_reg_c169_;
  Rsh_Fir_array_args469[1] = Rsh_Fir_reg_c172_;
  Rsh_Fir_reg_c173_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args469, Rsh_Fir_param_types_empty());
  // goto L129(c173)
  // L129(c173)
  Rsh_Fir_reg_c171_ = Rsh_Fir_reg_c173_;
  goto L129_;

L573_:;
  // to35 = ld to
  Rsh_Fir_reg_to35_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L574() else D161()
  // L574()
  goto L574_;

D161_:;
  // deopt 581 [c175, to35]
  SEXP Rsh_Fir_array_deopt_stack139[2];
  Rsh_Fir_array_deopt_stack139[0] = Rsh_Fir_reg_c175_;
  Rsh_Fir_array_deopt_stack139[1] = Rsh_Fir_reg_to35_;
  Rsh_Fir_deopt(581, 2, Rsh_Fir_array_deopt_stack139, CCP, RHO);
  return R_NilValue;

L574_:;
  // to36 = force? to35
  Rsh_Fir_reg_to36_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to35_);
  // checkMissing(to36)
  SEXP Rsh_Fir_array_args470[1];
  Rsh_Fir_array_args470[0] = Rsh_Fir_reg_to36_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args470, Rsh_Fir_param_types_empty()));
  // _Machine8 = ld `.Machine`
  Rsh_Fir_reg__Machine8_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L575() else D162()
  // L575()
  goto L575_;

D162_:;
  // deopt 582 [c175, to36, _Machine8]
  SEXP Rsh_Fir_array_deopt_stack140[3];
  Rsh_Fir_array_deopt_stack140[0] = Rsh_Fir_reg_c175_;
  Rsh_Fir_array_deopt_stack140[1] = Rsh_Fir_reg_to36_;
  Rsh_Fir_array_deopt_stack140[2] = Rsh_Fir_reg__Machine8_;
  Rsh_Fir_deopt(582, 3, Rsh_Fir_array_deopt_stack140, CCP, RHO);
  return R_NilValue;

L575_:;
  // _Machine9 = force? _Machine8
  Rsh_Fir_reg__Machine9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Machine8_);
  // checkMissing(_Machine9)
  SEXP Rsh_Fir_array_args471[1];
  Rsh_Fir_array_args471[0] = Rsh_Fir_reg__Machine9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args471, Rsh_Fir_param_types_empty()));
  // c178 = `is.object`(_Machine9)
  SEXP Rsh_Fir_array_args472[1];
  Rsh_Fir_array_args472[0] = Rsh_Fir_reg__Machine9_;
  Rsh_Fir_reg_c178_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args472, Rsh_Fir_param_types_empty());
  // if c178 then L577() else L578(c175, to36, _Machine9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c178_)) {
  // L577()
    goto L577_;
  } else {
  // L578(c175, to36, _Machine9)
    Rsh_Fir_reg_c180_ = Rsh_Fir_reg_c175_;
    Rsh_Fir_reg_to38_ = Rsh_Fir_reg_to36_;
    Rsh_Fir_reg__Machine11_ = Rsh_Fir_reg__Machine9_;
    goto L578_;
  }

L576_:;
  // r282 = `<=`(to40, dx8)
  SEXP Rsh_Fir_array_args473[2];
  Rsh_Fir_array_args473[0] = Rsh_Fir_reg_to40_;
  Rsh_Fir_array_args473[1] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_reg_r282_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args473, Rsh_Fir_param_types_empty());
  // c183 = `as.logical`(r282)
  SEXP Rsh_Fir_array_args474[1];
  Rsh_Fir_array_args474[0] = Rsh_Fir_reg_r282_;
  Rsh_Fir_reg_c183_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args474, Rsh_Fir_param_types_empty());
  // c184 = `&&`(c182, c183)
  SEXP Rsh_Fir_array_args475[2];
  Rsh_Fir_array_args475[0] = Rsh_Fir_reg_c182_;
  Rsh_Fir_array_args475[1] = Rsh_Fir_reg_c183_;
  Rsh_Fir_reg_c184_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args475, Rsh_Fir_param_types_empty());
  // goto L130(c184)
  // L130(c184)
  Rsh_Fir_reg_c177_ = Rsh_Fir_reg_c184_;
  goto L130_;

L577_:;
  // dr6 = tryDispatchBuiltin.1("$", _Machine9)
  SEXP Rsh_Fir_array_args476[2];
  Rsh_Fir_array_args476[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args476[1] = Rsh_Fir_reg__Machine9_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args476);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args477[1];
  Rsh_Fir_array_args477[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args477, Rsh_Fir_param_types_empty());
  // if dc3 then L579() else L578(c175, to36, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L579()
    goto L579_;
  } else {
  // L578(c175, to36, dr6)
    Rsh_Fir_reg_c180_ = Rsh_Fir_reg_c175_;
    Rsh_Fir_reg_to38_ = Rsh_Fir_reg_to36_;
    Rsh_Fir_reg__Machine11_ = Rsh_Fir_reg_dr6_;
    goto L578_;
  }

L578_:;
  // r281 = `$`(_Machine11, <sym integer.max>)
  SEXP Rsh_Fir_array_args478[2];
  Rsh_Fir_array_args478[0] = Rsh_Fir_reg__Machine11_;
  Rsh_Fir_array_args478[1] = Rsh_const(CCP, 71);
  Rsh_Fir_reg_r281_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args478, Rsh_Fir_param_types_empty());
  // goto L576(c180, to38, r281)
  // L576(c180, to38, r281)
  Rsh_Fir_reg_c182_ = Rsh_Fir_reg_c180_;
  Rsh_Fir_reg_to40_ = Rsh_Fir_reg_to38_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r281_;
  goto L576_;

L579_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args479[1];
  Rsh_Fir_array_args479[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args479, Rsh_Fir_param_types_empty());
  // goto L576(c175, to36, dx7)
  // L576(c175, to36, dx7)
  Rsh_Fir_reg_c182_ = Rsh_Fir_reg_c175_;
  Rsh_Fir_reg_to40_ = Rsh_Fir_reg_to36_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L576_;

D163_:;
  // deopt 588 [intdel]
  SEXP Rsh_Fir_array_deopt_stack141[1];
  Rsh_Fir_array_deopt_stack141[0] = Rsh_Fir_reg_intdel;
  Rsh_Fir_deopt(588, 1, Rsh_Fir_array_deopt_stack141, CCP, RHO);
  return R_NilValue;

L581_:;
  // intdel1 = force? intdel
  Rsh_Fir_reg_intdel1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_intdel);
  // checkMissing(intdel1)
  SEXP Rsh_Fir_array_args480[1];
  Rsh_Fir_array_args480[0] = Rsh_Fir_reg_intdel1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args480, Rsh_Fir_param_types_empty()));
  // c186 = `as.logical`(intdel1)
  SEXP Rsh_Fir_array_args481[1];
  Rsh_Fir_array_args481[0] = Rsh_Fir_reg_intdel1_;
  Rsh_Fir_reg_c186_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args481, Rsh_Fir_param_types_empty());
  // if c186 then L582() else L131()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c186_)) {
  // L582()
    goto L582_;
  } else {
  // L131()
    goto L131_;
  }

L582_:;
  // l1 = ld to
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // storage_mode__1 = ldf `storage.mode<-`
  Rsh_Fir_reg_storage_mode__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 64), RHO);
  // check L583() else D164()
  // L583()
  goto L583_;

D164_:;
  // deopt 593 ["integer", l1, "integer"]
  SEXP Rsh_Fir_array_deopt_stack142[3];
  Rsh_Fir_array_deopt_stack142[0] = Rsh_const(CCP, 86);
  Rsh_Fir_array_deopt_stack142[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack142[2] = Rsh_const(CCP, 86);
  Rsh_Fir_deopt(593, 3, Rsh_Fir_array_deopt_stack142, CCP, RHO);
  return R_NilValue;

L583_:;
  // r283 = dyn storage_mode__1(l1, NULL, "integer")
  SEXP Rsh_Fir_array_args482[3];
  Rsh_Fir_array_args482[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args482[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args482[2] = Rsh_const(CCP, 86);
  SEXP Rsh_Fir_array_arg_names111[3];
  Rsh_Fir_array_arg_names111[0] = R_MissingArg;
  Rsh_Fir_array_arg_names111[1] = R_MissingArg;
  Rsh_Fir_array_arg_names111[2] = R_MissingArg;
  Rsh_Fir_reg_r283_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode__1_, 3, Rsh_Fir_array_args482, Rsh_Fir_array_arg_names111, CCP, RHO);
  // check L584() else D165()
  // L584()
  goto L584_;

D165_:;
  // deopt 595 ["integer", r283]
  SEXP Rsh_Fir_array_deopt_stack143[2];
  Rsh_Fir_array_deopt_stack143[0] = Rsh_const(CCP, 86);
  Rsh_Fir_array_deopt_stack143[1] = Rsh_Fir_reg_r283_;
  Rsh_Fir_deopt(595, 2, Rsh_Fir_array_deopt_stack143, CCP, RHO);
  return R_NilValue;

L584_:;
  // st to = r283
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r283_, RHO);
  (void)(Rsh_Fir_reg_r283_);
  // goto L132("integer")
  // L132("integer")
  Rsh_Fir_reg_r284_ = Rsh_const(CCP, 86);
  goto L132_;

D166_:;
  // deopt 600 []
  Rsh_Fir_deopt(600, 0, NULL, CCP, RHO);
  return R_NilValue;

L587_:;
  // p11 = prom<V +>{
  //   to41 = ld to;
  //   to42 = force? to41;
  //   checkMissing(to42);
  //   return to42;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3182225035_11, CCP, RHO);
  // r287 = dyn is_logint5(p11)
  SEXP Rsh_Fir_array_args484[1];
  Rsh_Fir_array_args484[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names112[1];
  Rsh_Fir_array_arg_names112[0] = R_MissingArg;
  Rsh_Fir_reg_r287_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_logint5_, 1, Rsh_Fir_array_args484, Rsh_Fir_array_arg_names112, CCP, RHO);
  // check L588() else D167()
  // L588()
  goto L588_;

D167_:;
  // deopt 602 [r287]
  SEXP Rsh_Fir_array_deopt_stack144[1];
  Rsh_Fir_array_deopt_stack144[0] = Rsh_Fir_reg_r287_;
  Rsh_Fir_deopt(602, 1, Rsh_Fir_array_deopt_stack144, CCP, RHO);
  return R_NilValue;

L588_:;
  // st intdel = r287
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r287_, RHO);
  (void)(Rsh_Fir_reg_r287_);
  // goto L133()
  // L133()
  goto L133_;

L589_:;
  // missing10 = ldf missing in base
  Rsh_Fir_reg_missing10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r290 = dyn missing10(<sym from>)
  SEXP Rsh_Fir_array_args485[1];
  Rsh_Fir_array_args485[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names113[1];
  Rsh_Fir_array_arg_names113[0] = R_MissingArg;
  Rsh_Fir_reg_r290_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing10_, 1, Rsh_Fir_array_args485, Rsh_Fir_array_arg_names113, CCP, RHO);
  // goto L134(r290)
  // L134(r290)
  Rsh_Fir_reg_r289_ = Rsh_Fir_reg_r290_;
  goto L134_;

L590_:;
  // r288 = dyn base45(<sym from>)
  SEXP Rsh_Fir_array_args486[1];
  Rsh_Fir_array_args486[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names114[1];
  Rsh_Fir_array_arg_names114[0] = R_MissingArg;
  Rsh_Fir_reg_r288_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base45_, 1, Rsh_Fir_array_args486, Rsh_Fir_array_arg_names114, CCP, RHO);
  // goto L134(r288)
  // L134(r288)
  Rsh_Fir_reg_r289_ = Rsh_Fir_reg_r288_;
  goto L134_;

L591_:;
  // to43 = ld to
  Rsh_Fir_reg_to43_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L592() else D168()
  // L592()
  goto L592_;

D168_:;
  // deopt 607 [to43]
  SEXP Rsh_Fir_array_deopt_stack145[1];
  Rsh_Fir_array_deopt_stack145[0] = Rsh_Fir_reg_to43_;
  Rsh_Fir_deopt(607, 1, Rsh_Fir_array_deopt_stack145, CCP, RHO);
  return R_NilValue;

L592_:;
  // to44 = force? to43
  Rsh_Fir_reg_to44_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to43_);
  // checkMissing(to44)
  SEXP Rsh_Fir_array_args487[1];
  Rsh_Fir_array_args487[0] = Rsh_Fir_reg_to44_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args487, Rsh_Fir_param_types_empty()));
  // length_out31 = ld `length.out`
  Rsh_Fir_reg_length_out31_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L593() else D169()
  // L593()
  goto L593_;

D169_:;
  // deopt 608 [to44, length_out31]
  SEXP Rsh_Fir_array_deopt_stack146[2];
  Rsh_Fir_array_deopt_stack146[0] = Rsh_Fir_reg_to44_;
  Rsh_Fir_array_deopt_stack146[1] = Rsh_Fir_reg_length_out31_;
  Rsh_Fir_deopt(608, 2, Rsh_Fir_array_deopt_stack146, CCP, RHO);
  return R_NilValue;

L593_:;
  // length_out32 = force? length_out31
  Rsh_Fir_reg_length_out32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out31_);
  // checkMissing(length_out32)
  SEXP Rsh_Fir_array_args488[1];
  Rsh_Fir_array_args488[0] = Rsh_Fir_reg_length_out32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args488, Rsh_Fir_param_types_empty()));
  // r291 = `-`(length_out32, 1.0)
  SEXP Rsh_Fir_array_args489[2];
  Rsh_Fir_array_args489[0] = Rsh_Fir_reg_length_out32_;
  Rsh_Fir_array_args489[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r291_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args489, Rsh_Fir_param_types_empty());
  // r292 = `-`(to44, r291)
  SEXP Rsh_Fir_array_args490[2];
  Rsh_Fir_array_args490[0] = Rsh_Fir_reg_to44_;
  Rsh_Fir_array_args490[1] = Rsh_Fir_reg_r291_;
  Rsh_Fir_reg_r292_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args490, Rsh_Fir_param_types_empty());
  // st from = r292
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r292_, RHO);
  (void)(Rsh_Fir_reg_r292_);
  // intdel2 = ld intdel
  Rsh_Fir_reg_intdel2_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L594() else D170()
  // L594()
  goto L594_;

D170_:;
  // deopt 614 [intdel2]
  SEXP Rsh_Fir_array_deopt_stack147[1];
  Rsh_Fir_array_deopt_stack147[0] = Rsh_Fir_reg_intdel2_;
  Rsh_Fir_deopt(614, 1, Rsh_Fir_array_deopt_stack147, CCP, RHO);
  return R_NilValue;

L594_:;
  // intdel3 = force? intdel2
  Rsh_Fir_reg_intdel3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_intdel2_);
  // checkMissing(intdel3)
  SEXP Rsh_Fir_array_args491[1];
  Rsh_Fir_array_args491[0] = Rsh_Fir_reg_intdel3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args491, Rsh_Fir_param_types_empty()));
  // c188 = `as.logical`(intdel3)
  SEXP Rsh_Fir_array_args492[1];
  Rsh_Fir_array_args492[0] = Rsh_Fir_reg_intdel3_;
  Rsh_Fir_reg_c188_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args492, Rsh_Fir_param_types_empty());
  // if c188 then L595() else L136()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c188_)) {
  // L595()
    goto L595_;
  } else {
  // L136()
    goto L136_;
  }

L595_:;
  // intn3 = ld intn1
  Rsh_Fir_reg_intn3_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L596() else D171()
  // L596()
  goto L596_;

D171_:;
  // deopt 616 [intn3]
  SEXP Rsh_Fir_array_deopt_stack148[1];
  Rsh_Fir_array_deopt_stack148[0] = Rsh_Fir_reg_intn3_;
  Rsh_Fir_deopt(616, 1, Rsh_Fir_array_deopt_stack148, CCP, RHO);
  return R_NilValue;

L596_:;
  // intn4 = force? intn3
  Rsh_Fir_reg_intn4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_intn3_);
  // checkMissing(intn4)
  SEXP Rsh_Fir_array_args493[1];
  Rsh_Fir_array_args493[0] = Rsh_Fir_reg_intn4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args493, Rsh_Fir_param_types_empty()));
  // c189 = `as.logical`(intn4)
  SEXP Rsh_Fir_array_args494[1];
  Rsh_Fir_array_args494[0] = Rsh_Fir_reg_intn4_;
  Rsh_Fir_reg_c189_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args494, Rsh_Fir_param_types_empty());
  // if c189 then L597() else L137(c189)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c189_)) {
  // L597()
    goto L597_;
  } else {
  // L137(c189)
    Rsh_Fir_reg_c191_ = Rsh_Fir_reg_c189_;
    goto L137_;
  }

L597_:;
  // from47 = ld from
  Rsh_Fir_reg_from47_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L598() else D172()
  // L598()
  goto L598_;

D172_:;
  // deopt 618 [c189, from47]
  SEXP Rsh_Fir_array_deopt_stack149[2];
  Rsh_Fir_array_deopt_stack149[0] = Rsh_Fir_reg_c189_;
  Rsh_Fir_array_deopt_stack149[1] = Rsh_Fir_reg_from47_;
  Rsh_Fir_deopt(618, 2, Rsh_Fir_array_deopt_stack149, CCP, RHO);
  return R_NilValue;

L598_:;
  // from48 = force? from47
  Rsh_Fir_reg_from48_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from47_);
  // checkMissing(from48)
  SEXP Rsh_Fir_array_args495[1];
  Rsh_Fir_array_args495[0] = Rsh_Fir_reg_from48_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args495, Rsh_Fir_param_types_empty()));
  // _Machine12 = ld `.Machine`
  Rsh_Fir_reg__Machine12_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L599() else D173()
  // L599()
  goto L599_;

D173_:;
  // deopt 619 [c189, from48, _Machine12]
  SEXP Rsh_Fir_array_deopt_stack150[3];
  Rsh_Fir_array_deopt_stack150[0] = Rsh_Fir_reg_c189_;
  Rsh_Fir_array_deopt_stack150[1] = Rsh_Fir_reg_from48_;
  Rsh_Fir_array_deopt_stack150[2] = Rsh_Fir_reg__Machine12_;
  Rsh_Fir_deopt(619, 3, Rsh_Fir_array_deopt_stack150, CCP, RHO);
  return R_NilValue;

L599_:;
  // _Machine13 = force? _Machine12
  Rsh_Fir_reg__Machine13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Machine12_);
  // checkMissing(_Machine13)
  SEXP Rsh_Fir_array_args496[1];
  Rsh_Fir_array_args496[0] = Rsh_Fir_reg__Machine13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args496, Rsh_Fir_param_types_empty()));
  // c192 = `is.object`(_Machine13)
  SEXP Rsh_Fir_array_args497[1];
  Rsh_Fir_array_args497[0] = Rsh_Fir_reg__Machine13_;
  Rsh_Fir_reg_c192_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args497, Rsh_Fir_param_types_empty());
  // if c192 then L601() else L602(c189, from48, _Machine13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c192_)) {
  // L601()
    goto L601_;
  } else {
  // L602(c189, from48, _Machine13)
    Rsh_Fir_reg_c194_ = Rsh_Fir_reg_c189_;
    Rsh_Fir_reg_from50_ = Rsh_Fir_reg_from48_;
    Rsh_Fir_reg__Machine15_ = Rsh_Fir_reg__Machine13_;
    goto L602_;
  }

L600_:;
  // r294 = `-`(<missing>, dx10)
  SEXP Rsh_Fir_array_args498[2];
  Rsh_Fir_array_args498[0] = Rsh_const(CCP, 87);
  Rsh_Fir_array_args498[1] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_reg_r294_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args498, Rsh_Fir_param_types_empty());
  // r295 = `>=`(from52, r294)
  SEXP Rsh_Fir_array_args499[2];
  Rsh_Fir_array_args499[0] = Rsh_Fir_reg_from52_;
  Rsh_Fir_array_args499[1] = Rsh_Fir_reg_r294_;
  Rsh_Fir_reg_r295_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args499, Rsh_Fir_param_types_empty());
  // c197 = `as.logical`(r295)
  SEXP Rsh_Fir_array_args500[1];
  Rsh_Fir_array_args500[0] = Rsh_Fir_reg_r295_;
  Rsh_Fir_reg_c197_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args500, Rsh_Fir_param_types_empty());
  // c198 = `&&`(c196, c197)
  SEXP Rsh_Fir_array_args501[2];
  Rsh_Fir_array_args501[0] = Rsh_Fir_reg_c196_;
  Rsh_Fir_array_args501[1] = Rsh_Fir_reg_c197_;
  Rsh_Fir_reg_c198_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args501, Rsh_Fir_param_types_empty());
  // goto L137(c198)
  // L137(c198)
  Rsh_Fir_reg_c191_ = Rsh_Fir_reg_c198_;
  goto L137_;

L601_:;
  // dr8 = tryDispatchBuiltin.1("$", _Machine13)
  SEXP Rsh_Fir_array_args502[2];
  Rsh_Fir_array_args502[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args502[1] = Rsh_Fir_reg__Machine13_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args502);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args503[1];
  Rsh_Fir_array_args503[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args503, Rsh_Fir_param_types_empty());
  // if dc4 then L603() else L602(c189, from48, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L603()
    goto L603_;
  } else {
  // L602(c189, from48, dr8)
    Rsh_Fir_reg_c194_ = Rsh_Fir_reg_c189_;
    Rsh_Fir_reg_from50_ = Rsh_Fir_reg_from48_;
    Rsh_Fir_reg__Machine15_ = Rsh_Fir_reg_dr8_;
    goto L602_;
  }

L602_:;
  // r293 = `$`(_Machine15, <sym integer.max>)
  SEXP Rsh_Fir_array_args504[2];
  Rsh_Fir_array_args504[0] = Rsh_Fir_reg__Machine15_;
  Rsh_Fir_array_args504[1] = Rsh_const(CCP, 71);
  Rsh_Fir_reg_r293_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args504, Rsh_Fir_param_types_empty());
  // goto L600(c194, from50, r293)
  // L600(c194, from50, r293)
  Rsh_Fir_reg_c196_ = Rsh_Fir_reg_c194_;
  Rsh_Fir_reg_from52_ = Rsh_Fir_reg_from50_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r293_;
  goto L600_;

L603_:;
  // dx9 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args505[1];
  Rsh_Fir_array_args505[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args505, Rsh_Fir_param_types_empty());
  // goto L600(c189, from48, dx9)
  // L600(c189, from48, dx9)
  Rsh_Fir_reg_c196_ = Rsh_Fir_reg_c189_;
  Rsh_Fir_reg_from52_ = Rsh_Fir_reg_from48_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L600_;

D174_:;
  // deopt 626 [intdel4]
  SEXP Rsh_Fir_array_deopt_stack151[1];
  Rsh_Fir_array_deopt_stack151[0] = Rsh_Fir_reg_intdel4_;
  Rsh_Fir_deopt(626, 1, Rsh_Fir_array_deopt_stack151, CCP, RHO);
  return R_NilValue;

L605_:;
  // intdel5 = force? intdel4
  Rsh_Fir_reg_intdel5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_intdel4_);
  // checkMissing(intdel5)
  SEXP Rsh_Fir_array_args506[1];
  Rsh_Fir_array_args506[0] = Rsh_Fir_reg_intdel5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args506, Rsh_Fir_param_types_empty()));
  // c200 = `as.logical`(intdel5)
  SEXP Rsh_Fir_array_args507[1];
  Rsh_Fir_array_args507[0] = Rsh_Fir_reg_intdel5_;
  Rsh_Fir_reg_c200_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args507, Rsh_Fir_param_types_empty());
  // if c200 then L606() else L138()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c200_)) {
  // L606()
    goto L606_;
  } else {
  // L138()
    goto L138_;
  }

L606_:;
  // l2 = ld from
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // storage_mode__2 = ldf `storage.mode<-`
  Rsh_Fir_reg_storage_mode__2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 64), RHO);
  // check L607() else D175()
  // L607()
  goto L607_;

D175_:;
  // deopt 631 ["integer", l2, "integer"]
  SEXP Rsh_Fir_array_deopt_stack152[3];
  Rsh_Fir_array_deopt_stack152[0] = Rsh_const(CCP, 86);
  Rsh_Fir_array_deopt_stack152[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack152[2] = Rsh_const(CCP, 86);
  Rsh_Fir_deopt(631, 3, Rsh_Fir_array_deopt_stack152, CCP, RHO);
  return R_NilValue;

L607_:;
  // r296 = dyn storage_mode__2(l2, NULL, "integer")
  SEXP Rsh_Fir_array_args508[3];
  Rsh_Fir_array_args508[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args508[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args508[2] = Rsh_const(CCP, 86);
  SEXP Rsh_Fir_array_arg_names115[3];
  Rsh_Fir_array_arg_names115[0] = R_MissingArg;
  Rsh_Fir_array_arg_names115[1] = R_MissingArg;
  Rsh_Fir_array_arg_names115[2] = R_MissingArg;
  Rsh_Fir_reg_r296_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode__2_, 3, Rsh_Fir_array_args508, Rsh_Fir_array_arg_names115, CCP, RHO);
  // check L608() else D176()
  // L608()
  goto L608_;

D176_:;
  // deopt 633 ["integer", r296]
  SEXP Rsh_Fir_array_deopt_stack153[2];
  Rsh_Fir_array_deopt_stack153[0] = Rsh_const(CCP, 86);
  Rsh_Fir_array_deopt_stack153[1] = Rsh_Fir_reg_r296_;
  Rsh_Fir_deopt(633, 2, Rsh_Fir_array_deopt_stack153, CCP, RHO);
  return R_NilValue;

L608_:;
  // st from = r296
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r296_, RHO);
  (void)(Rsh_Fir_reg_r296_);
  // goto L139("integer")
  // L139("integer")
  Rsh_Fir_reg_r297_ = Rsh_const(CCP, 86);
  goto L139_;

D177_:;
  // deopt 639 [intdel6]
  SEXP Rsh_Fir_array_deopt_stack154[1];
  Rsh_Fir_array_deopt_stack154[0] = Rsh_Fir_reg_intdel6_;
  Rsh_Fir_deopt(639, 1, Rsh_Fir_array_deopt_stack154, CCP, RHO);
  return R_NilValue;

L612_:;
  // intdel7 = force? intdel6
  Rsh_Fir_reg_intdel7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_intdel6_);
  // checkMissing(intdel7)
  SEXP Rsh_Fir_array_args509[1];
  Rsh_Fir_array_args509[0] = Rsh_Fir_reg_intdel7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args509, Rsh_Fir_param_types_empty()));
  // c201 = `as.logical`(intdel7)
  SEXP Rsh_Fir_array_args510[1];
  Rsh_Fir_array_args510[0] = Rsh_Fir_reg_intdel7_;
  Rsh_Fir_reg_c201_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args510, Rsh_Fir_param_types_empty());
  // if c201 then L613() else L142()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c201_)) {
  // L613()
    goto L613_;
  } else {
  // L142()
    goto L142_;
  }

L613_:;
  // is_logint6 = ldf `is.logint`
  Rsh_Fir_reg_is_logint6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L614() else D178()
  // L614()
  goto L614_;

D178_:;
  // deopt 642 []
  Rsh_Fir_deopt(642, 0, NULL, CCP, RHO);
  return R_NilValue;

L614_:;
  // p12 = prom<V +>{
  //   from53 = ld from;
  //   from54 = force? from53;
  //   checkMissing(from54);
  //   return from54;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3182225035_12, CCP, RHO);
  // r301 = dyn is_logint6(p12)
  SEXP Rsh_Fir_array_args512[1];
  Rsh_Fir_array_args512[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names116[1];
  Rsh_Fir_array_arg_names116[0] = R_MissingArg;
  Rsh_Fir_reg_r301_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_logint6_, 1, Rsh_Fir_array_args512, Rsh_Fir_array_arg_names116, CCP, RHO);
  // check L615() else D179()
  // L615()
  goto L615_;

D179_:;
  // deopt 644 [r301]
  SEXP Rsh_Fir_array_deopt_stack155[1];
  Rsh_Fir_array_deopt_stack155[0] = Rsh_Fir_reg_r301_;
  Rsh_Fir_deopt(644, 1, Rsh_Fir_array_deopt_stack155, CCP, RHO);
  return R_NilValue;

L615_:;
  // st intdel = r301
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r301_, RHO);
  (void)(Rsh_Fir_reg_r301_);
  // goto L141()
  // L141()
  goto L141_;

D180_:;
  // deopt 648 [length_out33]
  SEXP Rsh_Fir_array_deopt_stack156[1];
  Rsh_Fir_array_deopt_stack156[0] = Rsh_Fir_reg_length_out33_;
  Rsh_Fir_deopt(648, 1, Rsh_Fir_array_deopt_stack156, CCP, RHO);
  return R_NilValue;

L617_:;
  // length_out34 = force? length_out33
  Rsh_Fir_reg_length_out34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out33_);
  // checkMissing(length_out34)
  SEXP Rsh_Fir_array_args513[1];
  Rsh_Fir_array_args513[0] = Rsh_Fir_reg_length_out34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args513, Rsh_Fir_param_types_empty()));
  // r302 = `>`(length_out34, 2)
  SEXP Rsh_Fir_array_args514[2];
  Rsh_Fir_array_args514[0] = Rsh_Fir_reg_length_out34_;
  Rsh_Fir_array_args514[1] = Rsh_const(CCP, 77);
  Rsh_Fir_reg_r302_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args514, Rsh_Fir_param_types_empty());
  // c202 = `as.logical`(r302)
  SEXP Rsh_Fir_array_args515[1];
  Rsh_Fir_array_args515[0] = Rsh_Fir_reg_r302_;
  Rsh_Fir_reg_c202_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args515, Rsh_Fir_param_types_empty());
  // if c202 then L618() else L143()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c202_)) {
  // L618()
    goto L618_;
  } else {
  // L143()
    goto L143_;
  }

L618_:;
  // from55 = ld from
  Rsh_Fir_reg_from55_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L619() else D181()
  // L619()
  goto L619_;

D181_:;
  // deopt 652 [from55]
  SEXP Rsh_Fir_array_deopt_stack157[1];
  Rsh_Fir_array_deopt_stack157[0] = Rsh_Fir_reg_from55_;
  Rsh_Fir_deopt(652, 1, Rsh_Fir_array_deopt_stack157, CCP, RHO);
  return R_NilValue;

L619_:;
  // from56 = force? from55
  Rsh_Fir_reg_from56_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from55_);
  // checkMissing(from56)
  SEXP Rsh_Fir_array_args516[1];
  Rsh_Fir_array_args516[0] = Rsh_Fir_reg_from56_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args516, Rsh_Fir_param_types_empty()));
  // to45 = ld to
  Rsh_Fir_reg_to45_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L620() else D182()
  // L620()
  goto L620_;

D182_:;
  // deopt 653 [from56, to45]
  SEXP Rsh_Fir_array_deopt_stack158[2];
  Rsh_Fir_array_deopt_stack158[0] = Rsh_Fir_reg_from56_;
  Rsh_Fir_array_deopt_stack158[1] = Rsh_Fir_reg_to45_;
  Rsh_Fir_deopt(653, 2, Rsh_Fir_array_deopt_stack158, CCP, RHO);
  return R_NilValue;

L620_:;
  // to46 = force? to45
  Rsh_Fir_reg_to46_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to45_);
  // checkMissing(to46)
  SEXP Rsh_Fir_array_args517[1];
  Rsh_Fir_array_args517[0] = Rsh_Fir_reg_to46_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args517, Rsh_Fir_param_types_empty()));
  // r303 = `==`(from56, to46)
  SEXP Rsh_Fir_array_args518[2];
  Rsh_Fir_array_args518[0] = Rsh_Fir_reg_from56_;
  Rsh_Fir_array_args518[1] = Rsh_Fir_reg_to46_;
  Rsh_Fir_reg_r303_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args518, Rsh_Fir_param_types_empty());
  // c203 = `as.logical`(r303)
  SEXP Rsh_Fir_array_args519[1];
  Rsh_Fir_array_args519[0] = Rsh_Fir_reg_r303_;
  Rsh_Fir_reg_c203_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args519, Rsh_Fir_param_types_empty());
  // if c203 then L621() else L144()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c203_)) {
  // L621()
    goto L621_;
  } else {
  // L144()
    goto L144_;
  }

L621_:;
  // sym46 = ldf `rep.int`
  Rsh_Fir_reg_sym46_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base46 = ldf `rep.int` in base
  Rsh_Fir_reg_base46_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard46 = `==`.4(sym46, base46)
  SEXP Rsh_Fir_array_args520[2];
  Rsh_Fir_array_args520[0] = Rsh_Fir_reg_sym46_;
  Rsh_Fir_array_args520[1] = Rsh_Fir_reg_base46_;
  Rsh_Fir_reg_guard46_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args520);
  // if guard46 then L622() else L623()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard46_)) {
  // L622()
    goto L622_;
  } else {
  // L623()
    goto L623_;
  }

L622_:;
  // from57 = ld from
  Rsh_Fir_reg_from57_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L624() else D183()
  // L624()
  goto L624_;

L623_:;
  // r304 = dyn base46(<sym from>, <sym length.out>)
  SEXP Rsh_Fir_array_args521[2];
  Rsh_Fir_array_args521[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args521[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names117[2];
  Rsh_Fir_array_arg_names117[0] = R_MissingArg;
  Rsh_Fir_array_arg_names117[1] = R_MissingArg;
  Rsh_Fir_reg_r304_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base46_, 2, Rsh_Fir_array_args521, Rsh_Fir_array_arg_names117, CCP, RHO);
  // goto L145(r304)
  // L145(r304)
  Rsh_Fir_reg_r305_ = Rsh_Fir_reg_r304_;
  goto L145_;

D183_:;
  // deopt 658 [from57]
  SEXP Rsh_Fir_array_deopt_stack159[1];
  Rsh_Fir_array_deopt_stack159[0] = Rsh_Fir_reg_from57_;
  Rsh_Fir_deopt(658, 1, Rsh_Fir_array_deopt_stack159, CCP, RHO);
  return R_NilValue;

L624_:;
  // from58 = force? from57
  Rsh_Fir_reg_from58_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from57_);
  // checkMissing(from58)
  SEXP Rsh_Fir_array_args522[1];
  Rsh_Fir_array_args522[0] = Rsh_Fir_reg_from58_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args522, Rsh_Fir_param_types_empty()));
  // length_out35 = ld `length.out`
  Rsh_Fir_reg_length_out35_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L625() else D184()
  // L625()
  goto L625_;

D184_:;
  // deopt 660 [length_out35]
  SEXP Rsh_Fir_array_deopt_stack160[1];
  Rsh_Fir_array_deopt_stack160[0] = Rsh_Fir_reg_length_out35_;
  Rsh_Fir_deopt(660, 1, Rsh_Fir_array_deopt_stack160, CCP, RHO);
  return R_NilValue;

L625_:;
  // length_out36 = force? length_out35
  Rsh_Fir_reg_length_out36_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out35_);
  // checkMissing(length_out36)
  SEXP Rsh_Fir_array_args523[1];
  Rsh_Fir_array_args523[0] = Rsh_Fir_reg_length_out36_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args523, Rsh_Fir_param_types_empty()));
  // rep_int1 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r306 = dyn rep_int1(from58, length_out36)
  SEXP Rsh_Fir_array_args524[2];
  Rsh_Fir_array_args524[0] = Rsh_Fir_reg_from58_;
  Rsh_Fir_array_args524[1] = Rsh_Fir_reg_length_out36_;
  SEXP Rsh_Fir_array_arg_names118[2];
  Rsh_Fir_array_arg_names118[0] = R_MissingArg;
  Rsh_Fir_array_arg_names118[1] = R_MissingArg;
  Rsh_Fir_reg_r306_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int1_, 2, Rsh_Fir_array_args524, Rsh_Fir_array_arg_names118, CCP, RHO);
  // check L626() else D185()
  // L626()
  goto L626_;

D185_:;
  // deopt 663 [r306]
  SEXP Rsh_Fir_array_deopt_stack161[1];
  Rsh_Fir_array_deopt_stack161[0] = Rsh_Fir_reg_r306_;
  Rsh_Fir_deopt(663, 1, Rsh_Fir_array_deopt_stack161, CCP, RHO);
  return R_NilValue;

L626_:;
  // goto L145(r306)
  // L145(r306)
  Rsh_Fir_reg_r305_ = Rsh_Fir_reg_r306_;
  goto L145_;

D186_:;
  // deopt 664 [length_out37]
  SEXP Rsh_Fir_array_deopt_stack162[1];
  Rsh_Fir_array_deopt_stack162[0] = Rsh_Fir_reg_length_out37_;
  Rsh_Fir_deopt(664, 1, Rsh_Fir_array_deopt_stack162, CCP, RHO);
  return R_NilValue;

L628_:;
  // length_out38 = force? length_out37
  Rsh_Fir_reg_length_out38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out37_);
  // checkMissing(length_out38)
  SEXP Rsh_Fir_array_args525[1];
  Rsh_Fir_array_args525[0] = Rsh_Fir_reg_length_out38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args525, Rsh_Fir_param_types_empty()));
  // r307 = `-`(length_out38, 1)
  SEXP Rsh_Fir_array_args526[2];
  Rsh_Fir_array_args526[0] = Rsh_Fir_reg_length_out38_;
  Rsh_Fir_array_args526[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r307_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args526, Rsh_Fir_param_types_empty());
  // st n1 = r307
  Rsh_Fir_store(Rsh_const(CCP, 88), Rsh_Fir_reg_r307_, RHO);
  (void)(Rsh_Fir_reg_r307_);
  // intdel8 = ld intdel
  Rsh_Fir_reg_intdel8_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L629() else D187()
  // L629()
  goto L629_;

D187_:;
  // deopt 669 [intdel8]
  SEXP Rsh_Fir_array_deopt_stack163[1];
  Rsh_Fir_array_deopt_stack163[0] = Rsh_Fir_reg_intdel8_;
  Rsh_Fir_deopt(669, 1, Rsh_Fir_array_deopt_stack163, CCP, RHO);
  return R_NilValue;

L629_:;
  // intdel9 = force? intdel8
  Rsh_Fir_reg_intdel9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_intdel8_);
  // checkMissing(intdel9)
  SEXP Rsh_Fir_array_args527[1];
  Rsh_Fir_array_args527[0] = Rsh_Fir_reg_intdel9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args527, Rsh_Fir_param_types_empty()));
  // c204 = `as.logical`(intdel9)
  SEXP Rsh_Fir_array_args528[1];
  Rsh_Fir_array_args528[0] = Rsh_Fir_reg_intdel9_;
  Rsh_Fir_reg_c204_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args528, Rsh_Fir_param_types_empty());
  // if c204 then L630() else L146(c204)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c204_)) {
  // L630()
    goto L630_;
  } else {
  // L146(c204)
    Rsh_Fir_reg_c206_ = Rsh_Fir_reg_c204_;
    goto L146_;
  }

L630_:;
  // intn5 = ld intn1
  Rsh_Fir_reg_intn5_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L631() else D188()
  // L631()
  goto L631_;

D188_:;
  // deopt 671 [c204, intn5]
  SEXP Rsh_Fir_array_deopt_stack164[2];
  Rsh_Fir_array_deopt_stack164[0] = Rsh_Fir_reg_c204_;
  Rsh_Fir_array_deopt_stack164[1] = Rsh_Fir_reg_intn5_;
  Rsh_Fir_deopt(671, 2, Rsh_Fir_array_deopt_stack164, CCP, RHO);
  return R_NilValue;

L631_:;
  // intn6 = force? intn5
  Rsh_Fir_reg_intn6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_intn5_);
  // checkMissing(intn6)
  SEXP Rsh_Fir_array_args529[1];
  Rsh_Fir_array_args529[0] = Rsh_Fir_reg_intn6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args529, Rsh_Fir_param_types_empty()));
  // c207 = `as.logical`(intn6)
  SEXP Rsh_Fir_array_args530[1];
  Rsh_Fir_array_args530[0] = Rsh_Fir_reg_intn6_;
  Rsh_Fir_reg_c207_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args530, Rsh_Fir_param_types_empty());
  // c208 = `&&`(c204, c207)
  SEXP Rsh_Fir_array_args531[2];
  Rsh_Fir_array_args531[0] = Rsh_Fir_reg_c204_;
  Rsh_Fir_array_args531[1] = Rsh_Fir_reg_c207_;
  Rsh_Fir_reg_c208_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args531, Rsh_Fir_param_types_empty());
  // goto L146(c208)
  // L146(c208)
  Rsh_Fir_reg_c206_ = Rsh_Fir_reg_c208_;
  goto L146_;

L633_:;
  // from59 = ld from
  Rsh_Fir_reg_from59_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L634() else D189()
  // L634()
  goto L634_;

D189_:;
  // deopt 675 [c210, from59]
  SEXP Rsh_Fir_array_deopt_stack165[2];
  Rsh_Fir_array_deopt_stack165[0] = Rsh_Fir_reg_c210_;
  Rsh_Fir_array_deopt_stack165[1] = Rsh_Fir_reg_from59_;
  Rsh_Fir_deopt(675, 2, Rsh_Fir_array_deopt_stack165, CCP, RHO);
  return R_NilValue;

L634_:;
  // from60 = force? from59
  Rsh_Fir_reg_from60_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from59_);
  // checkMissing(from60)
  SEXP Rsh_Fir_array_args532[1];
  Rsh_Fir_array_args532[0] = Rsh_Fir_reg_from60_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args532, Rsh_Fir_param_types_empty()));
  // n24 = ld n1
  Rsh_Fir_reg_n24_ = Rsh_Fir_load(Rsh_const(CCP, 88), RHO);
  // check L635() else D190()
  // L635()
  goto L635_;

D190_:;
  // deopt 677 [c210, n24]
  SEXP Rsh_Fir_array_deopt_stack166[2];
  Rsh_Fir_array_deopt_stack166[0] = Rsh_Fir_reg_c210_;
  Rsh_Fir_array_deopt_stack166[1] = Rsh_Fir_reg_n24_;
  Rsh_Fir_deopt(677, 2, Rsh_Fir_array_deopt_stack166, CCP, RHO);
  return R_NilValue;

L635_:;
  // n25 = force? n24
  Rsh_Fir_reg_n25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n24_);
  // checkMissing(n25)
  SEXP Rsh_Fir_array_args533[1];
  Rsh_Fir_array_args533[0] = Rsh_Fir_reg_n25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args533, Rsh_Fir_param_types_empty()));
  // __1 = ldf `%%` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 89), RHO);
  // r308 = dyn __1(from60, n25)
  SEXP Rsh_Fir_array_args534[2];
  Rsh_Fir_array_args534[0] = Rsh_Fir_reg_from60_;
  Rsh_Fir_array_args534[1] = Rsh_Fir_reg_n25_;
  SEXP Rsh_Fir_array_arg_names119[2];
  Rsh_Fir_array_arg_names119[0] = R_MissingArg;
  Rsh_Fir_array_arg_names119[1] = R_MissingArg;
  Rsh_Fir_reg_r308_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args534, Rsh_Fir_array_arg_names119, CCP, RHO);
  // check L636() else D191()
  // L636()
  goto L636_;

D191_:;
  // deopt 680 [c210, r308]
  SEXP Rsh_Fir_array_deopt_stack167[2];
  Rsh_Fir_array_deopt_stack167[0] = Rsh_Fir_reg_c210_;
  Rsh_Fir_array_deopt_stack167[1] = Rsh_Fir_reg_r308_;
  Rsh_Fir_deopt(680, 2, Rsh_Fir_array_deopt_stack167, CCP, RHO);
  return R_NilValue;

L636_:;
  // to47 = ld to
  Rsh_Fir_reg_to47_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L637() else D192()
  // L637()
  goto L637_;

D192_:;
  // deopt 681 [c210, r308, to47]
  SEXP Rsh_Fir_array_deopt_stack168[3];
  Rsh_Fir_array_deopt_stack168[0] = Rsh_Fir_reg_c210_;
  Rsh_Fir_array_deopt_stack168[1] = Rsh_Fir_reg_r308_;
  Rsh_Fir_array_deopt_stack168[2] = Rsh_Fir_reg_to47_;
  Rsh_Fir_deopt(681, 3, Rsh_Fir_array_deopt_stack168, CCP, RHO);
  return R_NilValue;

L637_:;
  // to48 = force? to47
  Rsh_Fir_reg_to48_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to47_);
  // checkMissing(to48)
  SEXP Rsh_Fir_array_args535[1];
  Rsh_Fir_array_args535[0] = Rsh_Fir_reg_to48_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args535, Rsh_Fir_param_types_empty()));
  // n26 = ld n1
  Rsh_Fir_reg_n26_ = Rsh_Fir_load(Rsh_const(CCP, 88), RHO);
  // check L638() else D193()
  // L638()
  goto L638_;

D193_:;
  // deopt 683 [c210, r308, n26]
  SEXP Rsh_Fir_array_deopt_stack169[3];
  Rsh_Fir_array_deopt_stack169[0] = Rsh_Fir_reg_c210_;
  Rsh_Fir_array_deopt_stack169[1] = Rsh_Fir_reg_r308_;
  Rsh_Fir_array_deopt_stack169[2] = Rsh_Fir_reg_n26_;
  Rsh_Fir_deopt(683, 3, Rsh_Fir_array_deopt_stack169, CCP, RHO);
  return R_NilValue;

L638_:;
  // n27 = force? n26
  Rsh_Fir_reg_n27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n26_);
  // checkMissing(n27)
  SEXP Rsh_Fir_array_args536[1];
  Rsh_Fir_array_args536[0] = Rsh_Fir_reg_n27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args536, Rsh_Fir_param_types_empty()));
  // __2 = ldf `%%` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 89), RHO);
  // r309 = dyn __2(to48, n27)
  SEXP Rsh_Fir_array_args537[2];
  Rsh_Fir_array_args537[0] = Rsh_Fir_reg_to48_;
  Rsh_Fir_array_args537[1] = Rsh_Fir_reg_n27_;
  SEXP Rsh_Fir_array_arg_names120[2];
  Rsh_Fir_array_arg_names120[0] = R_MissingArg;
  Rsh_Fir_array_arg_names120[1] = R_MissingArg;
  Rsh_Fir_reg_r309_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args537, Rsh_Fir_array_arg_names120, CCP, RHO);
  // check L639() else D194()
  // L639()
  goto L639_;

D194_:;
  // deopt 686 [c210, r308, r309]
  SEXP Rsh_Fir_array_deopt_stack170[3];
  Rsh_Fir_array_deopt_stack170[0] = Rsh_Fir_reg_c210_;
  Rsh_Fir_array_deopt_stack170[1] = Rsh_Fir_reg_r308_;
  Rsh_Fir_array_deopt_stack170[2] = Rsh_Fir_reg_r309_;
  Rsh_Fir_deopt(686, 3, Rsh_Fir_array_deopt_stack170, CCP, RHO);
  return R_NilValue;

L639_:;
  // r310 = `==`(r308, r309)
  SEXP Rsh_Fir_array_args538[2];
  Rsh_Fir_array_args538[0] = Rsh_Fir_reg_r308_;
  Rsh_Fir_array_args538[1] = Rsh_Fir_reg_r309_;
  Rsh_Fir_reg_r310_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args538, Rsh_Fir_param_types_empty());
  // c213 = `as.logical`(r310)
  SEXP Rsh_Fir_array_args539[1];
  Rsh_Fir_array_args539[0] = Rsh_Fir_reg_r310_;
  Rsh_Fir_reg_c213_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args539, Rsh_Fir_param_types_empty());
  // c214 = `&&`(c210, c213)
  SEXP Rsh_Fir_array_args540[2];
  Rsh_Fir_array_args540[0] = Rsh_Fir_reg_c210_;
  Rsh_Fir_array_args540[1] = Rsh_Fir_reg_c213_;
  Rsh_Fir_reg_c214_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args540, Rsh_Fir_param_types_empty());
  // goto L147(c214)
  // L147(c214)
  Rsh_Fir_reg_c212_ = Rsh_Fir_reg_c214_;
  goto L147_;

L641_:;
  // to49 = ld to
  Rsh_Fir_reg_to49_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L642() else D195()
  // L642()
  goto L642_;

D195_:;
  // deopt 690 [to49]
  SEXP Rsh_Fir_array_deopt_stack171[1];
  Rsh_Fir_array_deopt_stack171[0] = Rsh_Fir_reg_to49_;
  Rsh_Fir_deopt(690, 1, Rsh_Fir_array_deopt_stack171, CCP, RHO);
  return R_NilValue;

L642_:;
  // to50 = force? to49
  Rsh_Fir_reg_to50_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to49_);
  // checkMissing(to50)
  SEXP Rsh_Fir_array_args541[1];
  Rsh_Fir_array_args541[0] = Rsh_Fir_reg_to50_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args541, Rsh_Fir_param_types_empty()));
  // n28 = ld n1
  Rsh_Fir_reg_n28_ = Rsh_Fir_load(Rsh_const(CCP, 88), RHO);
  // check L643() else D196()
  // L643()
  goto L643_;

D196_:;
  // deopt 692 [n28]
  SEXP Rsh_Fir_array_deopt_stack172[1];
  Rsh_Fir_array_deopt_stack172[0] = Rsh_Fir_reg_n28_;
  Rsh_Fir_deopt(692, 1, Rsh_Fir_array_deopt_stack172, CCP, RHO);
  return R_NilValue;

L643_:;
  // n29 = force? n28
  Rsh_Fir_reg_n29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n28_);
  // checkMissing(n29)
  SEXP Rsh_Fir_array_args542[1];
  Rsh_Fir_array_args542[0] = Rsh_Fir_reg_n29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args542, Rsh_Fir_param_types_empty()));
  // ___ = ldf `%/%` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 90), RHO);
  // r311 = dyn ___(to50, n29)
  SEXP Rsh_Fir_array_args543[2];
  Rsh_Fir_array_args543[0] = Rsh_Fir_reg_to50_;
  Rsh_Fir_array_args543[1] = Rsh_Fir_reg_n29_;
  SEXP Rsh_Fir_array_arg_names121[2];
  Rsh_Fir_array_arg_names121[0] = R_MissingArg;
  Rsh_Fir_array_arg_names121[1] = R_MissingArg;
  Rsh_Fir_reg_r311_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args543, Rsh_Fir_array_arg_names121, CCP, RHO);
  // check L644() else D197()
  // L644()
  goto L644_;

D197_:;
  // deopt 695 [r311]
  SEXP Rsh_Fir_array_deopt_stack173[1];
  Rsh_Fir_array_deopt_stack173[0] = Rsh_Fir_reg_r311_;
  Rsh_Fir_deopt(695, 1, Rsh_Fir_array_deopt_stack173, CCP, RHO);
  return R_NilValue;

L644_:;
  // from61 = ld from
  Rsh_Fir_reg_from61_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L645() else D198()
  // L645()
  goto L645_;

D198_:;
  // deopt 696 [r311, from61]
  SEXP Rsh_Fir_array_deopt_stack174[2];
  Rsh_Fir_array_deopt_stack174[0] = Rsh_Fir_reg_r311_;
  Rsh_Fir_array_deopt_stack174[1] = Rsh_Fir_reg_from61_;
  Rsh_Fir_deopt(696, 2, Rsh_Fir_array_deopt_stack174, CCP, RHO);
  return R_NilValue;

L645_:;
  // from62 = force? from61
  Rsh_Fir_reg_from62_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from61_);
  // checkMissing(from62)
  SEXP Rsh_Fir_array_args544[1];
  Rsh_Fir_array_args544[0] = Rsh_Fir_reg_from62_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args544, Rsh_Fir_param_types_empty()));
  // n30 = ld n1
  Rsh_Fir_reg_n30_ = Rsh_Fir_load(Rsh_const(CCP, 88), RHO);
  // check L646() else D199()
  // L646()
  goto L646_;

D199_:;
  // deopt 698 [r311, n30]
  SEXP Rsh_Fir_array_deopt_stack175[2];
  Rsh_Fir_array_deopt_stack175[0] = Rsh_Fir_reg_r311_;
  Rsh_Fir_array_deopt_stack175[1] = Rsh_Fir_reg_n30_;
  Rsh_Fir_deopt(698, 2, Rsh_Fir_array_deopt_stack175, CCP, RHO);
  return R_NilValue;

L646_:;
  // n31 = force? n30
  Rsh_Fir_reg_n31_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n30_);
  // checkMissing(n31)
  SEXP Rsh_Fir_array_args545[1];
  Rsh_Fir_array_args545[0] = Rsh_Fir_reg_n31_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args545, Rsh_Fir_param_types_empty()));
  // ___1 = ldf `%/%` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 90), RHO);
  // r312 = dyn ___1(from62, n31)
  SEXP Rsh_Fir_array_args546[2];
  Rsh_Fir_array_args546[0] = Rsh_Fir_reg_from62_;
  Rsh_Fir_array_args546[1] = Rsh_Fir_reg_n31_;
  SEXP Rsh_Fir_array_arg_names122[2];
  Rsh_Fir_array_arg_names122[0] = R_MissingArg;
  Rsh_Fir_array_arg_names122[1] = R_MissingArg;
  Rsh_Fir_reg_r312_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 2, Rsh_Fir_array_args546, Rsh_Fir_array_arg_names122, CCP, RHO);
  // check L647() else D200()
  // L647()
  goto L647_;

D200_:;
  // deopt 701 [r311, r312]
  SEXP Rsh_Fir_array_deopt_stack176[2];
  Rsh_Fir_array_deopt_stack176[0] = Rsh_Fir_reg_r311_;
  Rsh_Fir_array_deopt_stack176[1] = Rsh_Fir_reg_r312_;
  Rsh_Fir_deopt(701, 2, Rsh_Fir_array_deopt_stack176, CCP, RHO);
  return R_NilValue;

L647_:;
  // r313 = `-`(r311, r312)
  SEXP Rsh_Fir_array_args547[2];
  Rsh_Fir_array_args547[0] = Rsh_Fir_reg_r311_;
  Rsh_Fir_array_args547[1] = Rsh_Fir_reg_r312_;
  Rsh_Fir_reg_r313_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args547, Rsh_Fir_param_types_empty());
  // st by = r313
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r313_, RHO);
  (void)(Rsh_Fir_reg_r313_);
  // sym47 = ldf cumsum
  Rsh_Fir_reg_sym47_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base47 = ldf cumsum in base
  Rsh_Fir_reg_base47_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard47 = `==`.4(sym47, base47)
  SEXP Rsh_Fir_array_args548[2];
  Rsh_Fir_array_args548[0] = Rsh_Fir_reg_sym47_;
  Rsh_Fir_array_args548[1] = Rsh_Fir_reg_base47_;
  Rsh_Fir_reg_guard47_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args548);
  // if guard47 then L648() else L649()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard47_)) {
  // L648()
    goto L648_;
  } else {
  // L649()
    goto L649_;
  }

L648_:;
  // sym48 = ldf `rep.int`
  Rsh_Fir_reg_sym48_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base48 = ldf `rep.int` in base
  Rsh_Fir_reg_base48_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard48 = `==`.4(sym48, base48)
  SEXP Rsh_Fir_array_args549[2];
  Rsh_Fir_array_args549[0] = Rsh_Fir_reg_sym48_;
  Rsh_Fir_array_args549[1] = Rsh_Fir_reg_base48_;
  Rsh_Fir_reg_guard48_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args549);
  // if guard48 then L650() else L651()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard48_)) {
  // L650()
    goto L650_;
  } else {
  // L651()
    goto L651_;
  }

L649_:;
  // r314 = dyn base47(<lang rep.int(c(from, by), c(1, n1))>)
  SEXP Rsh_Fir_array_args550[1];
  Rsh_Fir_array_args550[0] = Rsh_const(CCP, 91);
  SEXP Rsh_Fir_array_arg_names123[1];
  Rsh_Fir_array_arg_names123[0] = R_MissingArg;
  Rsh_Fir_reg_r314_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base47_, 1, Rsh_Fir_array_args550, Rsh_Fir_array_arg_names123, CCP, RHO);
  // goto L149(r314)
  // L149(r314)
  Rsh_Fir_reg_r315_ = Rsh_Fir_reg_r314_;
  goto L149_;

L650_:;
  // sym49 = ldf c
  Rsh_Fir_reg_sym49_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base49 = ldf c in base
  Rsh_Fir_reg_base49_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard49 = `==`.4(sym49, base49)
  SEXP Rsh_Fir_array_args551[2];
  Rsh_Fir_array_args551[0] = Rsh_Fir_reg_sym49_;
  Rsh_Fir_array_args551[1] = Rsh_Fir_reg_base49_;
  Rsh_Fir_reg_guard49_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args551);
  // if guard49 then L652() else L653()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard49_)) {
  // L652()
    goto L652_;
  } else {
  // L653()
    goto L653_;
  }

L651_:;
  // r316 = dyn base48(<lang c(from, by)>, <lang c(1, n1)>)
  SEXP Rsh_Fir_array_args552[2];
  Rsh_Fir_array_args552[0] = Rsh_const(CCP, 79);
  Rsh_Fir_array_args552[1] = Rsh_const(CCP, 92);
  SEXP Rsh_Fir_array_arg_names124[2];
  Rsh_Fir_array_arg_names124[0] = R_MissingArg;
  Rsh_Fir_array_arg_names124[1] = R_MissingArg;
  Rsh_Fir_reg_r316_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base48_, 2, Rsh_Fir_array_args552, Rsh_Fir_array_arg_names124, CCP, RHO);
  // goto L150(r316)
  // L150(r316)
  Rsh_Fir_reg_r317_ = Rsh_Fir_reg_r316_;
  goto L150_;

L652_:;
  // from63 = ld from
  Rsh_Fir_reg_from63_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L654() else D201()
  // L654()
  goto L654_;

L653_:;
  // r318 = dyn base49(<sym from>, <sym by>)
  SEXP Rsh_Fir_array_args553[2];
  Rsh_Fir_array_args553[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args553[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names125[2];
  Rsh_Fir_array_arg_names125[0] = R_MissingArg;
  Rsh_Fir_array_arg_names125[1] = R_MissingArg;
  Rsh_Fir_reg_r318_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base49_, 2, Rsh_Fir_array_args553, Rsh_Fir_array_arg_names125, CCP, RHO);
  // goto L151(r318)
  // L151(r318)
  Rsh_Fir_reg_r319_ = Rsh_Fir_reg_r318_;
  goto L151_;

D201_:;
  // deopt 710 [from63]
  SEXP Rsh_Fir_array_deopt_stack177[1];
  Rsh_Fir_array_deopt_stack177[0] = Rsh_Fir_reg_from63_;
  Rsh_Fir_deopt(710, 1, Rsh_Fir_array_deopt_stack177, CCP, RHO);
  return R_NilValue;

L654_:;
  // from64 = force? from63
  Rsh_Fir_reg_from64_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from63_);
  // checkMissing(from64)
  SEXP Rsh_Fir_array_args554[1];
  Rsh_Fir_array_args554[0] = Rsh_Fir_reg_from64_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args554, Rsh_Fir_param_types_empty()));
  // by25 = ld by
  Rsh_Fir_reg_by25_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L655() else D202()
  // L655()
  goto L655_;

D202_:;
  // deopt 712 [by25]
  SEXP Rsh_Fir_array_deopt_stack178[1];
  Rsh_Fir_array_deopt_stack178[0] = Rsh_Fir_reg_by25_;
  Rsh_Fir_deopt(712, 1, Rsh_Fir_array_deopt_stack178, CCP, RHO);
  return R_NilValue;

L655_:;
  // by26 = force? by25
  Rsh_Fir_reg_by26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by25_);
  // checkMissing(by26)
  SEXP Rsh_Fir_array_args555[1];
  Rsh_Fir_array_args555[0] = Rsh_Fir_reg_by26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args555, Rsh_Fir_param_types_empty()));
  // c217 = ldf c in base
  Rsh_Fir_reg_c217_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r320 = dyn c217(from64, by26)
  SEXP Rsh_Fir_array_args556[2];
  Rsh_Fir_array_args556[0] = Rsh_Fir_reg_from64_;
  Rsh_Fir_array_args556[1] = Rsh_Fir_reg_by26_;
  SEXP Rsh_Fir_array_arg_names126[2];
  Rsh_Fir_array_arg_names126[0] = R_MissingArg;
  Rsh_Fir_array_arg_names126[1] = R_MissingArg;
  Rsh_Fir_reg_r320_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c217_, 2, Rsh_Fir_array_args556, Rsh_Fir_array_arg_names126, CCP, RHO);
  // check L656() else D203()
  // L656()
  goto L656_;

D203_:;
  // deopt 715 [r320]
  SEXP Rsh_Fir_array_deopt_stack179[1];
  Rsh_Fir_array_deopt_stack179[0] = Rsh_Fir_reg_r320_;
  Rsh_Fir_deopt(715, 1, Rsh_Fir_array_deopt_stack179, CCP, RHO);
  return R_NilValue;

L656_:;
  // goto L151(r320)
  // L151(r320)
  Rsh_Fir_reg_r319_ = Rsh_Fir_reg_r320_;
  goto L151_;

L657_:;
  // n32 = ld n1
  Rsh_Fir_reg_n32_ = Rsh_Fir_load(Rsh_const(CCP, 88), RHO);
  // check L659() else D204()
  // L659()
  goto L659_;

L658_:;
  // r321 = dyn base50(1, <sym n1>)
  SEXP Rsh_Fir_array_args557[2];
  Rsh_Fir_array_args557[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args557[1] = Rsh_const(CCP, 88);
  SEXP Rsh_Fir_array_arg_names127[2];
  Rsh_Fir_array_arg_names127[0] = R_MissingArg;
  Rsh_Fir_array_arg_names127[1] = R_MissingArg;
  Rsh_Fir_reg_r321_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base50_, 2, Rsh_Fir_array_args557, Rsh_Fir_array_arg_names127, CCP, RHO);
  // goto L152(r321)
  // L152(r321)
  Rsh_Fir_reg_r322_ = Rsh_Fir_reg_r321_;
  goto L152_;

D204_:;
  // deopt 719 [n32]
  SEXP Rsh_Fir_array_deopt_stack180[1];
  Rsh_Fir_array_deopt_stack180[0] = Rsh_Fir_reg_n32_;
  Rsh_Fir_deopt(719, 1, Rsh_Fir_array_deopt_stack180, CCP, RHO);
  return R_NilValue;

L659_:;
  // n33 = force? n32
  Rsh_Fir_reg_n33_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n32_);
  // checkMissing(n33)
  SEXP Rsh_Fir_array_args558[1];
  Rsh_Fir_array_args558[0] = Rsh_Fir_reg_n33_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args558, Rsh_Fir_param_types_empty()));
  // c218 = ldf c in base
  Rsh_Fir_reg_c218_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r323 = dyn c218(1, n33)
  SEXP Rsh_Fir_array_args559[2];
  Rsh_Fir_array_args559[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args559[1] = Rsh_Fir_reg_n33_;
  SEXP Rsh_Fir_array_arg_names128[2];
  Rsh_Fir_array_arg_names128[0] = R_MissingArg;
  Rsh_Fir_array_arg_names128[1] = R_MissingArg;
  Rsh_Fir_reg_r323_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c218_, 2, Rsh_Fir_array_args559, Rsh_Fir_array_arg_names128, CCP, RHO);
  // check L660() else D205()
  // L660()
  goto L660_;

D205_:;
  // deopt 722 [r323]
  SEXP Rsh_Fir_array_deopt_stack181[1];
  Rsh_Fir_array_deopt_stack181[0] = Rsh_Fir_reg_r323_;
  Rsh_Fir_deopt(722, 1, Rsh_Fir_array_deopt_stack181, CCP, RHO);
  return R_NilValue;

L660_:;
  // goto L152(r323)
  // L152(r323)
  Rsh_Fir_reg_r322_ = Rsh_Fir_reg_r323_;
  goto L152_;

D206_:;
  // deopt 724 [r324]
  SEXP Rsh_Fir_array_deopt_stack182[1];
  Rsh_Fir_array_deopt_stack182[0] = Rsh_Fir_reg_r324_;
  Rsh_Fir_deopt(724, 1, Rsh_Fir_array_deopt_stack182, CCP, RHO);
  return R_NilValue;

L661_:;
  // goto L150(r324)
  // L150(r324)
  Rsh_Fir_reg_r317_ = Rsh_Fir_reg_r324_;
  goto L150_;

D207_:;
  // deopt 726 [r325]
  SEXP Rsh_Fir_array_deopt_stack183[1];
  Rsh_Fir_array_deopt_stack183[0] = Rsh_Fir_reg_r325_;
  Rsh_Fir_deopt(726, 1, Rsh_Fir_array_deopt_stack183, CCP, RHO);
  return R_NilValue;

L662_:;
  // goto L149(r325)
  // L149(r325)
  Rsh_Fir_reg_r315_ = Rsh_Fir_reg_r325_;
  goto L149_;

D208_:;
  // deopt 727 [intdel10]
  SEXP Rsh_Fir_array_deopt_stack184[1];
  Rsh_Fir_array_deopt_stack184[0] = Rsh_Fir_reg_intdel10_;
  Rsh_Fir_deopt(727, 1, Rsh_Fir_array_deopt_stack184, CCP, RHO);
  return R_NilValue;

L664_:;
  // intdel11 = force? intdel10
  Rsh_Fir_reg_intdel11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_intdel10_);
  // checkMissing(intdel11)
  SEXP Rsh_Fir_array_args560[1];
  Rsh_Fir_array_args560[0] = Rsh_Fir_reg_intdel11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args560, Rsh_Fir_param_types_empty()));
  // c219 = `as.logical`(intdel11)
  SEXP Rsh_Fir_array_args561[1];
  Rsh_Fir_array_args561[0] = Rsh_Fir_reg_intdel11_;
  Rsh_Fir_reg_c219_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args561, Rsh_Fir_param_types_empty());
  // if c219 then L665() else L153()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c219_)) {
  // L665()
    goto L665_;
  } else {
  // L153()
    goto L153_;
  }

L665_:;
  // l3 = ld from
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // storage_mode__3 = ldf `storage.mode<-`
  Rsh_Fir_reg_storage_mode__3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 64), RHO);
  // check L666() else D209()
  // L666()
  goto L666_;

D209_:;
  // deopt 732 ["double", l3, "double"]
  SEXP Rsh_Fir_array_deopt_stack185[3];
  Rsh_Fir_array_deopt_stack185[0] = Rsh_const(CCP, 65);
  Rsh_Fir_array_deopt_stack185[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack185[2] = Rsh_const(CCP, 65);
  Rsh_Fir_deopt(732, 3, Rsh_Fir_array_deopt_stack185, CCP, RHO);
  return R_NilValue;

L666_:;
  // r326 = dyn storage_mode__3(l3, NULL, "double")
  SEXP Rsh_Fir_array_args562[3];
  Rsh_Fir_array_args562[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args562[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args562[2] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names129[3];
  Rsh_Fir_array_arg_names129[0] = R_MissingArg;
  Rsh_Fir_array_arg_names129[1] = R_MissingArg;
  Rsh_Fir_array_arg_names129[2] = R_MissingArg;
  Rsh_Fir_reg_r326_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode__3_, 3, Rsh_Fir_array_args562, Rsh_Fir_array_arg_names129, CCP, RHO);
  // check L667() else D210()
  // L667()
  goto L667_;

D210_:;
  // deopt 734 ["double", r326]
  SEXP Rsh_Fir_array_deopt_stack186[2];
  Rsh_Fir_array_deopt_stack186[0] = Rsh_const(CCP, 65);
  Rsh_Fir_array_deopt_stack186[1] = Rsh_Fir_reg_r326_;
  Rsh_Fir_deopt(734, 2, Rsh_Fir_array_deopt_stack186, CCP, RHO);
  return R_NilValue;

L667_:;
  // st from = r326
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r326_, RHO);
  (void)(Rsh_Fir_reg_r326_);
  // goto L154()
  // L154()
  goto L154_;

D211_:;
  // deopt 738 [to51]
  SEXP Rsh_Fir_array_deopt_stack187[1];
  Rsh_Fir_array_deopt_stack187[0] = Rsh_Fir_reg_to51_;
  Rsh_Fir_deopt(738, 1, Rsh_Fir_array_deopt_stack187, CCP, RHO);
  return R_NilValue;

L669_:;
  // to52 = force? to51
  Rsh_Fir_reg_to52_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to51_);
  // checkMissing(to52)
  SEXP Rsh_Fir_array_args563[1];
  Rsh_Fir_array_args563[0] = Rsh_Fir_reg_to52_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args563, Rsh_Fir_param_types_empty()));
  // from65 = ld from
  Rsh_Fir_reg_from65_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L670() else D212()
  // L670()
  goto L670_;

D212_:;
  // deopt 739 [to52, from65]
  SEXP Rsh_Fir_array_deopt_stack188[2];
  Rsh_Fir_array_deopt_stack188[0] = Rsh_Fir_reg_to52_;
  Rsh_Fir_array_deopt_stack188[1] = Rsh_Fir_reg_from65_;
  Rsh_Fir_deopt(739, 2, Rsh_Fir_array_deopt_stack188, CCP, RHO);
  return R_NilValue;

L670_:;
  // from66 = force? from65
  Rsh_Fir_reg_from66_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from65_);
  // checkMissing(from66)
  SEXP Rsh_Fir_array_args564[1];
  Rsh_Fir_array_args564[0] = Rsh_Fir_reg_from66_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args564, Rsh_Fir_param_types_empty()));
  // r328 = `-`(to52, from66)
  SEXP Rsh_Fir_array_args565[2];
  Rsh_Fir_array_args565[0] = Rsh_Fir_reg_to52_;
  Rsh_Fir_array_args565[1] = Rsh_Fir_reg_from66_;
  Rsh_Fir_reg_r328_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args565, Rsh_Fir_param_types_empty());
  // st del = r328
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r328_, RHO);
  (void)(Rsh_Fir_reg_r328_);
  // sym51 = ldf `is.finite`
  Rsh_Fir_reg_sym51_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base51 = ldf `is.finite` in base
  Rsh_Fir_reg_base51_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard51 = `==`.4(sym51, base51)
  SEXP Rsh_Fir_array_args566[2];
  Rsh_Fir_array_args566[0] = Rsh_Fir_reg_sym51_;
  Rsh_Fir_array_args566[1] = Rsh_Fir_reg_base51_;
  Rsh_Fir_reg_guard51_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args566);
  // if guard51 then L671() else L672()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard51_)) {
  // L671()
    goto L671_;
  } else {
  // L672()
    goto L672_;
  }

L671_:;
  // del10 = ld del
  Rsh_Fir_reg_del10_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L673() else D213()
  // L673()
  goto L673_;

L672_:;
  // r329 = dyn base51(<sym del>)
  SEXP Rsh_Fir_array_args567[1];
  Rsh_Fir_array_args567[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names130[1];
  Rsh_Fir_array_arg_names130[0] = R_MissingArg;
  Rsh_Fir_reg_r329_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base51_, 1, Rsh_Fir_array_args567, Rsh_Fir_array_arg_names130, CCP, RHO);
  // goto L155(r329)
  // L155(r329)
  Rsh_Fir_reg_r330_ = Rsh_Fir_reg_r329_;
  goto L155_;

D213_:;
  // deopt 745 [del10]
  SEXP Rsh_Fir_array_deopt_stack189[1];
  Rsh_Fir_array_deopt_stack189[0] = Rsh_Fir_reg_del10_;
  Rsh_Fir_deopt(745, 1, Rsh_Fir_array_deopt_stack189, CCP, RHO);
  return R_NilValue;

L673_:;
  // del11 = force? del10
  Rsh_Fir_reg_del11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_del10_);
  // checkMissing(del11)
  SEXP Rsh_Fir_array_args568[1];
  Rsh_Fir_array_args568[0] = Rsh_Fir_reg_del11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args568, Rsh_Fir_param_types_empty()));
  // is_finite6 = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r331 = dyn is_finite6(del11)
  SEXP Rsh_Fir_array_args569[1];
  Rsh_Fir_array_args569[0] = Rsh_Fir_reg_del11_;
  SEXP Rsh_Fir_array_arg_names131[1];
  Rsh_Fir_array_arg_names131[0] = R_MissingArg;
  Rsh_Fir_reg_r331_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite6_, 1, Rsh_Fir_array_args569, Rsh_Fir_array_arg_names131, CCP, RHO);
  // check L674() else D214()
  // L674()
  goto L674_;

D214_:;
  // deopt 748 [r331]
  SEXP Rsh_Fir_array_deopt_stack190[1];
  Rsh_Fir_array_deopt_stack190[0] = Rsh_Fir_reg_r331_;
  Rsh_Fir_deopt(748, 1, Rsh_Fir_array_deopt_stack190, CCP, RHO);
  return R_NilValue;

L674_:;
  // goto L155(r331)
  // L155(r331)
  Rsh_Fir_reg_r330_ = Rsh_Fir_reg_r331_;
  goto L155_;

L675_:;
  // as_vector = ldf `as.vector`
  Rsh_Fir_reg_as_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L676() else D215()
  // L676()
  goto L676_;

D215_:;
  // deopt 750 []
  Rsh_Fir_deopt(750, 0, NULL, CCP, RHO);
  return R_NilValue;

L676_:;
  // p13 = prom<V +>{
  //   sym52 = ldf c;
  //   base52 = ldf c in base;
  //   guard52 = `==`.4(sym52, base52);
  //   if guard52 then L2() else L3();
  // L0(r333):
  //   return r333;
  // L2():
  //   from67 = ld from;
  //   from68 = force? from67;
  //   checkMissing(from68);
  //   from69 = ld from;
  //   from70 = force? from69;
  //   checkMissing(from70);
  //   sym53 = ldf seq_len;
  //   base53 = ldf seq_len in base;
  //   guard53 = `==`.4(sym53, base53);
  //   if guard53 then L4() else L5();
  // L3():
  //   r332 = dyn base52(<sym from>, <lang `+`(from, `*`(seq_len(`-`(length.out, 2)), `(`(`/`(del, n1))))>, <sym to>);
  //   goto L0(r332);
  // L1(from73, r335):
  //   del12 = ld del;
  //   del13 = force? del12;
  //   checkMissing(del13);
  //   n34 = ld n1;
  //   n35 = force? n34;
  //   checkMissing(n35);
  //   r338 = `/`(del13, n35);
  //   r339 = `*`(r335, r338);
  //   r340 = `+`(from73, r339);
  //   to53 = ld to;
  //   to54 = force? to53;
  //   checkMissing(to54);
  //   c221 = ldf c in base;
  //   r341 = dyn c221(from68, r340, to54);
  //   goto L0(r341);
  // L4():
  //   length_out39 = ld `length.out`;
  //   length_out40 = force? length_out39;
  //   checkMissing(length_out40);
  //   r336 = `-`(length_out40, 2);
  //   r337 = seq_len(r336);
  //   goto L1(from70, r337);
  // L5():
  //   r334 = dyn base53(<lang `-`(length.out, 2)>);
  //   goto L1(from70, r334);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3182225035_13, CCP, RHO);
  // r343 = dyn as_vector(p13)
  SEXP Rsh_Fir_array_args586[1];
  Rsh_Fir_array_args586[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names135[1];
  Rsh_Fir_array_arg_names135[0] = R_MissingArg;
  Rsh_Fir_reg_r343_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_vector, 1, Rsh_Fir_array_args586, Rsh_Fir_array_arg_names135, CCP, RHO);
  // check L677() else D216()
  // L677()
  goto L677_;

D216_:;
  // deopt 752 [r343]
  SEXP Rsh_Fir_array_deopt_stack191[1];
  Rsh_Fir_array_deopt_stack191[0] = Rsh_Fir_reg_r343_;
  Rsh_Fir_deopt(752, 1, Rsh_Fir_array_deopt_stack191, CCP, RHO);
  return R_NilValue;

L677_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r343
  return Rsh_Fir_reg_r343_;

D217_:;
  // deopt 753 [from74]
  SEXP Rsh_Fir_array_deopt_stack192[1];
  Rsh_Fir_array_deopt_stack192[0] = Rsh_Fir_reg_from74_;
  Rsh_Fir_deopt(753, 1, Rsh_Fir_array_deopt_stack192, CCP, RHO);
  return R_NilValue;

L679_:;
  // from75 = force? from74
  Rsh_Fir_reg_from75_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from74_);
  // checkMissing(from75)
  SEXP Rsh_Fir_array_args587[1];
  Rsh_Fir_array_args587[0] = Rsh_Fir_reg_from75_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args587, Rsh_Fir_param_types_empty()));
  // r344 = `/`(from75, 4.0)
  SEXP Rsh_Fir_array_args588[2];
  Rsh_Fir_array_args588[0] = Rsh_Fir_reg_from75_;
  Rsh_Fir_array_args588[1] = Rsh_const(CCP, 83);
  Rsh_Fir_reg_r344_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args588, Rsh_Fir_param_types_empty());
  // st from = r344
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r344_, RHO);
  (void)(Rsh_Fir_reg_r344_);
  // to55 = ld to
  Rsh_Fir_reg_to55_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L680() else D218()
  // L680()
  goto L680_;

D218_:;
  // deopt 758 [to55]
  SEXP Rsh_Fir_array_deopt_stack193[1];
  Rsh_Fir_array_deopt_stack193[0] = Rsh_Fir_reg_to55_;
  Rsh_Fir_deopt(758, 1, Rsh_Fir_array_deopt_stack193, CCP, RHO);
  return R_NilValue;

L680_:;
  // to56 = force? to55
  Rsh_Fir_reg_to56_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to55_);
  // checkMissing(to56)
  SEXP Rsh_Fir_array_args589[1];
  Rsh_Fir_array_args589[0] = Rsh_Fir_reg_to56_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args589, Rsh_Fir_param_types_empty()));
  // r345 = `/`(to56, 4.0)
  SEXP Rsh_Fir_array_args590[2];
  Rsh_Fir_array_args590[0] = Rsh_Fir_reg_to56_;
  Rsh_Fir_array_args590[1] = Rsh_const(CCP, 83);
  Rsh_Fir_reg_r345_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args590, Rsh_Fir_param_types_empty());
  // st to = r345
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r345_, RHO);
  (void)(Rsh_Fir_reg_r345_);
  // as_vector1 = ldf `as.vector`
  Rsh_Fir_reg_as_vector1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L681() else D219()
  // L681()
  goto L681_;

D219_:;
  // deopt 764 []
  Rsh_Fir_deopt(764, 0, NULL, CCP, RHO);
  return R_NilValue;

L681_:;
  // p14 = prom<V +>{
  //   sym54 = ldf c;
  //   base54 = ldf c in base;
  //   guard54 = `==`.4(sym54, base54);
  //   if guard54 then L2() else L3();
  // L0(r347):
  //   return r347;
  // L2():
  //   from76 = ld from;
  //   from77 = force? from76;
  //   checkMissing(from77);
  //   from78 = ld from;
  //   from79 = force? from78;
  //   checkMissing(from79);
  //   sym55 = ldf seq_len;
  //   base55 = ldf seq_len in base;
  //   guard55 = `==`.4(sym55, base55);
  //   if guard55 then L4() else L5();
  // L3():
  //   r346 = dyn base54(<sym from>, <lang `+`(from, `*`(seq_len(`-`(length.out, 2)), `(`(`/`(`(`(`-`(to, from)), n1))))>, <sym to>);
  //   goto L0(r346);
  // L1(from82, r349):
  //   to57 = ld to;
  //   to58 = force? to57;
  //   checkMissing(to58);
  //   from83 = ld from;
  //   from84 = force? from83;
  //   checkMissing(from84);
  //   r352 = `-`(to58, from84);
  //   n36 = ld n1;
  //   n37 = force? n36;
  //   checkMissing(n37);
  //   r353 = `/`(r352, n37);
  //   r354 = `*`(r349, r353);
  //   r355 = `+`(from82, r354);
  //   to59 = ld to;
  //   to60 = force? to59;
  //   checkMissing(to60);
  //   c222 = ldf c in base;
  //   r356 = dyn c222(from77, r355, to60);
  //   goto L0(r356);
  // L4():
  //   length_out41 = ld `length.out`;
  //   length_out42 = force? length_out41;
  //   checkMissing(length_out42);
  //   r350 = `-`(length_out42, 2);
  //   r351 = seq_len(r350);
  //   goto L1(from79, r351);
  // L5():
  //   r348 = dyn base55(<lang `-`(length.out, 2)>);
  //   goto L1(from79, r348);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3182225035_14, CCP, RHO);
  // r358 = dyn as_vector1(p14)
  SEXP Rsh_Fir_array_args609[1];
  Rsh_Fir_array_args609[0] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names139[1];
  Rsh_Fir_array_arg_names139[0] = R_MissingArg;
  Rsh_Fir_reg_r358_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_vector1_, 1, Rsh_Fir_array_args609, Rsh_Fir_array_arg_names139, CCP, RHO);
  // check L682() else D220()
  // L682()
  goto L682_;

D220_:;
  // deopt 766 [r358]
  SEXP Rsh_Fir_array_deopt_stack194[1];
  Rsh_Fir_array_deopt_stack194[0] = Rsh_Fir_reg_r358_;
  Rsh_Fir_deopt(766, 1, Rsh_Fir_array_deopt_stack194, CCP, RHO);
  return R_NilValue;

L682_:;
  // r359 = `*`(r358, 4.0)
  SEXP Rsh_Fir_array_args610[2];
  Rsh_Fir_array_args610[0] = Rsh_Fir_reg_r358_;
  Rsh_Fir_array_args610[1] = Rsh_const(CCP, 83);
  Rsh_Fir_reg_r359_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args610, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r359
  return Rsh_Fir_reg_r359_;

D221_:;
  // deopt 770 []
  Rsh_Fir_deopt(770, 0, NULL, CCP, RHO);
  return R_NilValue;

L684_:;
  // p15 = prom<V +>{
  //   sym56 = ldf c;
  //   base56 = ldf c in base;
  //   guard56 = `==`.4(sym56, base56);
  //   if guard56 then L1() else L2();
  // L0(r361):
  //   return r361;
  // L1():
  //   from85 = ld from;
  //   from86 = force? from85;
  //   checkMissing(from86);
  //   to61 = ld to;
  //   to62 = force? to61;
  //   checkMissing(to62);
  //   c223 = ldf c in base;
  //   r362 = dyn c223(from86, to62);
  //   goto L0(r362);
  // L2():
  //   r360 = dyn base56(<sym from>, <sym to>);
  //   goto L0(r360);
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3182225035_15, CCP, RHO);
  // r364 = dyn as_vector2(p15)
  SEXP Rsh_Fir_array_args616[1];
  Rsh_Fir_array_args616[0] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names142[1];
  Rsh_Fir_array_arg_names142[0] = R_MissingArg;
  Rsh_Fir_reg_r364_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_vector2_, 1, Rsh_Fir_array_args616, Rsh_Fir_array_arg_names142, CCP, RHO);
  // check L685() else D222()
  // L685()
  goto L685_;

D222_:;
  // deopt 772 [r364]
  SEXP Rsh_Fir_array_deopt_stack195[1];
  Rsh_Fir_array_deopt_stack195[0] = Rsh_Fir_reg_r364_;
  Rsh_Fir_deopt(772, 1, Rsh_Fir_array_deopt_stack195, CCP, RHO);
  return R_NilValue;

L685_:;
  // c224 = `is.object`(r364)
  SEXP Rsh_Fir_array_args617[1];
  Rsh_Fir_array_args617[0] = Rsh_Fir_reg_r364_;
  Rsh_Fir_reg_c224_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args617, Rsh_Fir_param_types_empty());
  // if c224 then L686() else L687(r364)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c224_)) {
  // L686()
    goto L686_;
  } else {
  // L687(r364)
    Rsh_Fir_reg_r366_ = Rsh_Fir_reg_r364_;
    goto L687_;
  }

L686_:;
  // dr10 = tryDispatchBuiltin.1("[", r364)
  SEXP Rsh_Fir_array_args618[2];
  Rsh_Fir_array_args618[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args618[1] = Rsh_Fir_reg_r364_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args618);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args619[1];
  Rsh_Fir_array_args619[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args619, Rsh_Fir_param_types_empty());
  // if dc5 then L688() else L687(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L688()
    goto L688_;
  } else {
  // L687(dr10)
    Rsh_Fir_reg_r366_ = Rsh_Fir_reg_dr10_;
    goto L687_;
  }

L687_:;
  // sym57 = ldf seq_len
  Rsh_Fir_reg_sym57_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base57 = ldf seq_len in base
  Rsh_Fir_reg_base57_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard57 = `==`.4(sym57, base57)
  SEXP Rsh_Fir_array_args620[2];
  Rsh_Fir_array_args620[0] = Rsh_Fir_reg_sym57_;
  Rsh_Fir_array_args620[1] = Rsh_Fir_reg_base57_;
  Rsh_Fir_reg_guard57_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args620);
  // if guard57 then L689() else L690()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard57_)) {
  // L689()
    goto L689_;
  } else {
  // L690()
    goto L690_;
  }

L688_:;
  // dx11 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args621[1];
  Rsh_Fir_array_args621[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args621, Rsh_Fir_param_types_empty());
  // goto L157(dx11)
  // L157(dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L157_;

L689_:;
  // length_out43 = ld `length.out`
  Rsh_Fir_reg_length_out43_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L691() else D223()
  // L691()
  goto L691_;

L690_:;
  // r369 = dyn base57(<sym length.out>)
  SEXP Rsh_Fir_array_args622[1];
  Rsh_Fir_array_args622[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names143[1];
  Rsh_Fir_array_arg_names143[0] = R_MissingArg;
  Rsh_Fir_reg_r369_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base57_, 1, Rsh_Fir_array_args622, Rsh_Fir_array_arg_names143, CCP, RHO);
  // goto L158(r366, r369)
  // L158(r366, r369)
  Rsh_Fir_reg_r370_ = Rsh_Fir_reg_r366_;
  Rsh_Fir_reg_r371_ = Rsh_Fir_reg_r369_;
  goto L158_;

D223_:;
  // deopt 774 [r366, length_out43]
  SEXP Rsh_Fir_array_deopt_stack196[2];
  Rsh_Fir_array_deopt_stack196[0] = Rsh_Fir_reg_r366_;
  Rsh_Fir_array_deopt_stack196[1] = Rsh_Fir_reg_length_out43_;
  Rsh_Fir_deopt(774, 2, Rsh_Fir_array_deopt_stack196, CCP, RHO);
  return R_NilValue;

L691_:;
  // length_out44 = force? length_out43
  Rsh_Fir_reg_length_out44_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out43_);
  // checkMissing(length_out44)
  SEXP Rsh_Fir_array_args623[1];
  Rsh_Fir_array_args623[0] = Rsh_Fir_reg_length_out44_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args623, Rsh_Fir_param_types_empty()));
  // r372 = seq_len(length_out44)
  SEXP Rsh_Fir_array_args624[1];
  Rsh_Fir_array_args624[0] = Rsh_Fir_reg_length_out44_;
  Rsh_Fir_reg_r372_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args624, Rsh_Fir_param_types_empty());
  // goto L158(r366, r372)
  // L158(r366, r372)
  Rsh_Fir_reg_r370_ = Rsh_Fir_reg_r366_;
  Rsh_Fir_reg_r371_ = Rsh_Fir_reg_r372_;
  goto L158_;

L693_:;
  // missing11 = ldf missing in base
  Rsh_Fir_reg_missing11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r376 = dyn missing11(<sym to>)
  SEXP Rsh_Fir_array_args625[1];
  Rsh_Fir_array_args625[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names144[1];
  Rsh_Fir_array_arg_names144[0] = R_MissingArg;
  Rsh_Fir_reg_r376_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing11_, 1, Rsh_Fir_array_args625, Rsh_Fir_array_arg_names144, CCP, RHO);
  // goto L159(r376)
  // L159(r376)
  Rsh_Fir_reg_r375_ = Rsh_Fir_reg_r376_;
  goto L159_;

L694_:;
  // r374 = dyn base58(<sym to>)
  SEXP Rsh_Fir_array_args626[1];
  Rsh_Fir_array_args626[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names145[1];
  Rsh_Fir_array_arg_names145[0] = R_MissingArg;
  Rsh_Fir_reg_r374_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base58_, 1, Rsh_Fir_array_args626, Rsh_Fir_array_arg_names145, CCP, RHO);
  // goto L159(r374)
  // L159(r374)
  Rsh_Fir_reg_r375_ = Rsh_Fir_reg_r374_;
  goto L159_;

L695_:;
  // is_logint7 = ldf `is.logint`
  Rsh_Fir_reg_is_logint7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L696() else D224()
  // L696()
  goto L696_;

D224_:;
  // deopt 782 []
  Rsh_Fir_deopt(782, 0, NULL, CCP, RHO);
  return R_NilValue;

L696_:;
  // p16 = prom<V +>{
  //   by27 = ld by;
  //   by28 = force? by27;
  //   checkMissing(by28);
  //   return by28;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3182225035_16, CCP, RHO);
  // r378 = dyn is_logint7(p16)
  SEXP Rsh_Fir_array_args628[1];
  Rsh_Fir_array_args628[0] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names146[1];
  Rsh_Fir_array_arg_names146[0] = R_MissingArg;
  Rsh_Fir_reg_r378_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_logint7_, 1, Rsh_Fir_array_args628, Rsh_Fir_array_arg_names146, CCP, RHO);
  // check L697() else D225()
  // L697()
  goto L697_;

D225_:;
  // deopt 784 [r378]
  SEXP Rsh_Fir_array_deopt_stack197[1];
  Rsh_Fir_array_deopt_stack197[0] = Rsh_Fir_reg_r378_;
  Rsh_Fir_deopt(784, 1, Rsh_Fir_array_deopt_stack197, CCP, RHO);
  return R_NilValue;

L697_:;
  // st intby = r378
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r378_, RHO);
  (void)(Rsh_Fir_reg_r378_);
  // c226 = `as.logical`(r378)
  SEXP Rsh_Fir_array_args629[1];
  Rsh_Fir_array_args629[0] = Rsh_Fir_reg_r378_;
  Rsh_Fir_reg_c226_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args629, Rsh_Fir_param_types_empty());
  // if c226 then L698() else L161(c226)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c226_)) {
  // L698()
    goto L698_;
  } else {
  // L161(c226)
    Rsh_Fir_reg_c228_ = Rsh_Fir_reg_c226_;
    goto L161_;
  }

L698_:;
  // is_logint8 = ldf `is.logint`
  Rsh_Fir_reg_is_logint8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L699() else D226()
  // L699()
  goto L699_;

D226_:;
  // deopt 787 [c226]
  SEXP Rsh_Fir_array_deopt_stack198[1];
  Rsh_Fir_array_deopt_stack198[0] = Rsh_Fir_reg_c226_;
  Rsh_Fir_deopt(787, 1, Rsh_Fir_array_deopt_stack198, CCP, RHO);
  return R_NilValue;

L699_:;
  // p17 = prom<V +>{
  //   from87 = ld from;
  //   from88 = force? from87;
  //   checkMissing(from88);
  //   return from88;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3182225035_17, CCP, RHO);
  // r380 = dyn is_logint8(p17)
  SEXP Rsh_Fir_array_args631[1];
  Rsh_Fir_array_args631[0] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names147[1];
  Rsh_Fir_array_arg_names147[0] = R_MissingArg;
  Rsh_Fir_reg_r380_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_logint8_, 1, Rsh_Fir_array_args631, Rsh_Fir_array_arg_names147, CCP, RHO);
  // check L700() else D227()
  // L700()
  goto L700_;

D227_:;
  // deopt 789 [c226, r380]
  SEXP Rsh_Fir_array_deopt_stack199[2];
  Rsh_Fir_array_deopt_stack199[0] = Rsh_Fir_reg_c226_;
  Rsh_Fir_array_deopt_stack199[1] = Rsh_Fir_reg_r380_;
  Rsh_Fir_deopt(789, 2, Rsh_Fir_array_deopt_stack199, CCP, RHO);
  return R_NilValue;

L700_:;
  // c229 = `as.logical`(r380)
  SEXP Rsh_Fir_array_args632[1];
  Rsh_Fir_array_args632[0] = Rsh_Fir_reg_r380_;
  Rsh_Fir_reg_c229_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args632, Rsh_Fir_param_types_empty());
  // c230 = `&&`(c226, c229)
  SEXP Rsh_Fir_array_args633[2];
  Rsh_Fir_array_args633[0] = Rsh_Fir_reg_c226_;
  Rsh_Fir_array_args633[1] = Rsh_Fir_reg_c229_;
  Rsh_Fir_reg_c230_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args633, Rsh_Fir_param_types_empty());
  // goto L161(c230)
  // L161(c230)
  Rsh_Fir_reg_c228_ = Rsh_Fir_reg_c230_;
  goto L161_;

L702_:;
  // sym59 = ldf length
  Rsh_Fir_reg_sym59_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base59 = ldf length in base
  Rsh_Fir_reg_base59_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard59 = `==`.4(sym59, base59)
  SEXP Rsh_Fir_array_args634[2];
  Rsh_Fir_array_args634[0] = Rsh_Fir_reg_sym59_;
  Rsh_Fir_array_args634[1] = Rsh_Fir_reg_base59_;
  Rsh_Fir_reg_guard59_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args634);
  // if guard59 then L703() else L704()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard59_)) {
  // L703()
    goto L703_;
  } else {
  // L704()
    goto L704_;
  }

L703_:;
  // by29 = ld by
  Rsh_Fir_reg_by29_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L705() else D228()
  // L705()
  goto L705_;

L704_:;
  // r381 = dyn base59(<sym by>)
  SEXP Rsh_Fir_array_args635[1];
  Rsh_Fir_array_args635[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names148[1];
  Rsh_Fir_array_arg_names148[0] = R_MissingArg;
  Rsh_Fir_reg_r381_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base59_, 1, Rsh_Fir_array_args635, Rsh_Fir_array_arg_names148, CCP, RHO);
  // goto L163(c232, r381)
  // L163(c232, r381)
  Rsh_Fir_reg_c237_ = Rsh_Fir_reg_c232_;
  Rsh_Fir_reg_r382_ = Rsh_Fir_reg_r381_;
  goto L163_;

D228_:;
  // deopt 793 [c232, by29]
  SEXP Rsh_Fir_array_deopt_stack200[2];
  Rsh_Fir_array_deopt_stack200[0] = Rsh_Fir_reg_c232_;
  Rsh_Fir_array_deopt_stack200[1] = Rsh_Fir_reg_by29_;
  Rsh_Fir_deopt(793, 2, Rsh_Fir_array_deopt_stack200, CCP, RHO);
  return R_NilValue;

L705_:;
  // by30 = force? by29
  Rsh_Fir_reg_by30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by29_);
  // checkMissing(by30)
  SEXP Rsh_Fir_array_args636[1];
  Rsh_Fir_array_args636[0] = Rsh_Fir_reg_by30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args636, Rsh_Fir_param_types_empty()));
  // length6 = ldf length in base
  Rsh_Fir_reg_length6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r383 = dyn length6(by30)
  SEXP Rsh_Fir_array_args637[1];
  Rsh_Fir_array_args637[0] = Rsh_Fir_reg_by30_;
  SEXP Rsh_Fir_array_arg_names149[1];
  Rsh_Fir_array_arg_names149[0] = R_MissingArg;
  Rsh_Fir_reg_r383_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length6_, 1, Rsh_Fir_array_args637, Rsh_Fir_array_arg_names149, CCP, RHO);
  // check L706() else D229()
  // L706()
  goto L706_;

D229_:;
  // deopt 796 [c232, r383]
  SEXP Rsh_Fir_array_deopt_stack201[2];
  Rsh_Fir_array_deopt_stack201[0] = Rsh_Fir_reg_c232_;
  Rsh_Fir_array_deopt_stack201[1] = Rsh_Fir_reg_r383_;
  Rsh_Fir_deopt(796, 2, Rsh_Fir_array_deopt_stack201, CCP, RHO);
  return R_NilValue;

L706_:;
  // goto L163(c232, r383)
  // L163(c232, r383)
  Rsh_Fir_reg_c237_ = Rsh_Fir_reg_c232_;
  Rsh_Fir_reg_r382_ = Rsh_Fir_reg_r383_;
  goto L163_;

L707_:;
  // sym60 = ldf `is.na`
  Rsh_Fir_reg_sym60_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base60 = ldf `is.na` in base
  Rsh_Fir_reg_base60_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard60 = `==`.4(sym60, base60)
  SEXP Rsh_Fir_array_args638[2];
  Rsh_Fir_array_args638[0] = Rsh_Fir_reg_sym60_;
  Rsh_Fir_array_args638[1] = Rsh_Fir_reg_base60_;
  Rsh_Fir_reg_guard60_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args638);
  // if guard60 then L708() else L709()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard60_)) {
  // L708()
    goto L708_;
  } else {
  // L709()
    goto L709_;
  }

L708_:;
  // by31 = ld by
  Rsh_Fir_reg_by31_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L710() else D230()
  // L710()
  goto L710_;

L709_:;
  // r385 = dyn base60(<sym by>)
  SEXP Rsh_Fir_array_args639[1];
  Rsh_Fir_array_args639[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names150[1];
  Rsh_Fir_array_arg_names150[0] = R_MissingArg;
  Rsh_Fir_reg_r385_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base60_, 1, Rsh_Fir_array_args639, Rsh_Fir_array_arg_names150, CCP, RHO);
  // goto L165(c237, c238, r385)
  // L165(c237, c238, r385)
  Rsh_Fir_reg_c247_ = Rsh_Fir_reg_c237_;
  Rsh_Fir_reg_c248_ = Rsh_Fir_reg_c238_;
  Rsh_Fir_reg_r386_ = Rsh_Fir_reg_r385_;
  goto L165_;

D230_:;
  // deopt 801 [c237, c238, by31]
  SEXP Rsh_Fir_array_deopt_stack202[3];
  Rsh_Fir_array_deopt_stack202[0] = Rsh_Fir_reg_c237_;
  Rsh_Fir_array_deopt_stack202[1] = Rsh_Fir_reg_c238_;
  Rsh_Fir_array_deopt_stack202[2] = Rsh_Fir_reg_by31_;
  Rsh_Fir_deopt(801, 3, Rsh_Fir_array_deopt_stack202, CCP, RHO);
  return R_NilValue;

L710_:;
  // by32 = force? by31
  Rsh_Fir_reg_by32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by31_);
  // checkMissing(by32)
  SEXP Rsh_Fir_array_args640[1];
  Rsh_Fir_array_args640[0] = Rsh_Fir_reg_by32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args640, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r387 = dyn is_na1(by32)
  SEXP Rsh_Fir_array_args641[1];
  Rsh_Fir_array_args641[0] = Rsh_Fir_reg_by32_;
  SEXP Rsh_Fir_array_arg_names151[1];
  Rsh_Fir_array_arg_names151[0] = R_MissingArg;
  Rsh_Fir_reg_r387_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args641, Rsh_Fir_array_arg_names151, CCP, RHO);
  // check L711() else D231()
  // L711()
  goto L711_;

D231_:;
  // deopt 804 [c237, c238, r387]
  SEXP Rsh_Fir_array_deopt_stack203[3];
  Rsh_Fir_array_deopt_stack203[0] = Rsh_Fir_reg_c237_;
  Rsh_Fir_array_deopt_stack203[1] = Rsh_Fir_reg_c238_;
  Rsh_Fir_array_deopt_stack203[2] = Rsh_Fir_reg_r387_;
  Rsh_Fir_deopt(804, 3, Rsh_Fir_array_deopt_stack203, CCP, RHO);
  return R_NilValue;

L711_:;
  // goto L165(c237, c238, r387)
  // L165(c237, c238, r387)
  Rsh_Fir_reg_c247_ = Rsh_Fir_reg_c237_;
  Rsh_Fir_reg_c248_ = Rsh_Fir_reg_c238_;
  Rsh_Fir_reg_r386_ = Rsh_Fir_reg_r387_;
  goto L165_;

L713_:;
  // from89 = ld from
  Rsh_Fir_reg_from89_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L714() else D232()
  // L714()
  goto L714_;

D232_:;
  // deopt 807 [c239, c253, from89]
  SEXP Rsh_Fir_array_deopt_stack204[3];
  Rsh_Fir_array_deopt_stack204[0] = Rsh_Fir_reg_c239_;
  Rsh_Fir_array_deopt_stack204[1] = Rsh_Fir_reg_c253_;
  Rsh_Fir_array_deopt_stack204[2] = Rsh_Fir_reg_from89_;
  Rsh_Fir_deopt(807, 3, Rsh_Fir_array_deopt_stack204, CCP, RHO);
  return R_NilValue;

L714_:;
  // from90 = force? from89
  Rsh_Fir_reg_from90_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from89_);
  // checkMissing(from90)
  SEXP Rsh_Fir_array_args642[1];
  Rsh_Fir_array_args642[0] = Rsh_Fir_reg_from90_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args642, Rsh_Fir_param_types_empty()));
  // length_out45 = ld `length.out`
  Rsh_Fir_reg_length_out45_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L715() else D233()
  // L715()
  goto L715_;

D233_:;
  // deopt 808 [c239, c253, from90, length_out45]
  SEXP Rsh_Fir_array_deopt_stack205[4];
  Rsh_Fir_array_deopt_stack205[0] = Rsh_Fir_reg_c239_;
  Rsh_Fir_array_deopt_stack205[1] = Rsh_Fir_reg_c253_;
  Rsh_Fir_array_deopt_stack205[2] = Rsh_Fir_reg_from90_;
  Rsh_Fir_array_deopt_stack205[3] = Rsh_Fir_reg_length_out45_;
  Rsh_Fir_deopt(808, 4, Rsh_Fir_array_deopt_stack205, CCP, RHO);
  return R_NilValue;

L715_:;
  // length_out46 = force? length_out45
  Rsh_Fir_reg_length_out46_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out45_);
  // checkMissing(length_out46)
  SEXP Rsh_Fir_array_args643[1];
  Rsh_Fir_array_args643[0] = Rsh_Fir_reg_length_out46_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args643, Rsh_Fir_param_types_empty()));
  // r388 = `-`(length_out46, 1.0)
  SEXP Rsh_Fir_array_args644[2];
  Rsh_Fir_array_args644[0] = Rsh_Fir_reg_length_out46_;
  Rsh_Fir_array_args644[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r388_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args644, Rsh_Fir_param_types_empty());
  // by33 = ld by
  Rsh_Fir_reg_by33_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L716() else D234()
  // L716()
  goto L716_;

D234_:;
  // deopt 811 [c239, c253, from90, r388, by33]
  SEXP Rsh_Fir_array_deopt_stack206[5];
  Rsh_Fir_array_deopt_stack206[0] = Rsh_Fir_reg_c239_;
  Rsh_Fir_array_deopt_stack206[1] = Rsh_Fir_reg_c253_;
  Rsh_Fir_array_deopt_stack206[2] = Rsh_Fir_reg_from90_;
  Rsh_Fir_array_deopt_stack206[3] = Rsh_Fir_reg_r388_;
  Rsh_Fir_array_deopt_stack206[4] = Rsh_Fir_reg_by33_;
  Rsh_Fir_deopt(811, 5, Rsh_Fir_array_deopt_stack206, CCP, RHO);
  return R_NilValue;

L716_:;
  // by34 = force? by33
  Rsh_Fir_reg_by34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by33_);
  // checkMissing(by34)
  SEXP Rsh_Fir_array_args645[1];
  Rsh_Fir_array_args645[0] = Rsh_Fir_reg_by34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args645, Rsh_Fir_param_types_empty()));
  // r389 = `*`(r388, by34)
  SEXP Rsh_Fir_array_args646[2];
  Rsh_Fir_array_args646[0] = Rsh_Fir_reg_r388_;
  Rsh_Fir_array_args646[1] = Rsh_Fir_reg_by34_;
  Rsh_Fir_reg_r389_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args646, Rsh_Fir_param_types_empty());
  // r390 = `+`(from90, r389)
  SEXP Rsh_Fir_array_args647[2];
  Rsh_Fir_array_args647[0] = Rsh_Fir_reg_from90_;
  Rsh_Fir_array_args647[1] = Rsh_Fir_reg_r389_;
  Rsh_Fir_reg_r390_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args647, Rsh_Fir_param_types_empty());
  // st to = r390
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r390_, RHO);
  (void)(Rsh_Fir_reg_r390_);
  // _Machine16 = ld `.Machine`
  Rsh_Fir_reg__Machine16_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L717() else D235()
  // L717()
  goto L717_;

D235_:;
  // deopt 815 [c239, c253, r390, _Machine16]
  SEXP Rsh_Fir_array_deopt_stack207[4];
  Rsh_Fir_array_deopt_stack207[0] = Rsh_Fir_reg_c239_;
  Rsh_Fir_array_deopt_stack207[1] = Rsh_Fir_reg_c253_;
  Rsh_Fir_array_deopt_stack207[2] = Rsh_Fir_reg_r390_;
  Rsh_Fir_array_deopt_stack207[3] = Rsh_Fir_reg__Machine16_;
  Rsh_Fir_deopt(815, 4, Rsh_Fir_array_deopt_stack207, CCP, RHO);
  return R_NilValue;

L717_:;
  // _Machine17 = force? _Machine16
  Rsh_Fir_reg__Machine17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Machine16_);
  // checkMissing(_Machine17)
  SEXP Rsh_Fir_array_args648[1];
  Rsh_Fir_array_args648[0] = Rsh_Fir_reg__Machine17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args648, Rsh_Fir_param_types_empty()));
  // c258 = `is.object`(_Machine17)
  SEXP Rsh_Fir_array_args649[1];
  Rsh_Fir_array_args649[0] = Rsh_Fir_reg__Machine17_;
  Rsh_Fir_reg_c258_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args649, Rsh_Fir_param_types_empty());
  // if c258 then L719() else L720(c239, c253, r390, _Machine17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c258_)) {
  // L719()
    goto L719_;
  } else {
  // L720(c239, c253, r390, _Machine17)
    Rsh_Fir_reg_c261_ = Rsh_Fir_reg_c239_;
    Rsh_Fir_reg_c262_ = Rsh_Fir_reg_c253_;
    Rsh_Fir_reg_r392_ = Rsh_Fir_reg_r390_;
    Rsh_Fir_reg__Machine19_ = Rsh_Fir_reg__Machine17_;
    goto L720_;
  }

L718_:;
  // r396 = `<=`(r394, dx14)
  SEXP Rsh_Fir_array_args650[2];
  Rsh_Fir_array_args650[0] = Rsh_Fir_reg_r394_;
  Rsh_Fir_array_args650[1] = Rsh_Fir_reg_dx14_;
  Rsh_Fir_reg_r396_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args650, Rsh_Fir_param_types_empty());
  // c267 = `as.logical`(r396)
  SEXP Rsh_Fir_array_args651[1];
  Rsh_Fir_array_args651[0] = Rsh_Fir_reg_r396_;
  Rsh_Fir_reg_c267_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args651, Rsh_Fir_param_types_empty());
  // if c267 then L722() else L167(c265, c266, c267)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c267_)) {
  // L722()
    goto L722_;
  } else {
  // L167(c265, c266, c267)
    Rsh_Fir_reg_c271_ = Rsh_Fir_reg_c265_;
    Rsh_Fir_reg_c272_ = Rsh_Fir_reg_c266_;
    Rsh_Fir_reg_c273_ = Rsh_Fir_reg_c267_;
    goto L167_;
  }

L719_:;
  // dr12 = tryDispatchBuiltin.1("$", _Machine17)
  SEXP Rsh_Fir_array_args652[2];
  Rsh_Fir_array_args652[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args652[1] = Rsh_Fir_reg__Machine17_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args652);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args653[1];
  Rsh_Fir_array_args653[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args653, Rsh_Fir_param_types_empty());
  // if dc6 then L721() else L720(c239, c253, r390, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L721()
    goto L721_;
  } else {
  // L720(c239, c253, r390, dr12)
    Rsh_Fir_reg_c261_ = Rsh_Fir_reg_c239_;
    Rsh_Fir_reg_c262_ = Rsh_Fir_reg_c253_;
    Rsh_Fir_reg_r392_ = Rsh_Fir_reg_r390_;
    Rsh_Fir_reg__Machine19_ = Rsh_Fir_reg_dr12_;
    goto L720_;
  }

L720_:;
  // r395 = `$`(_Machine19, <sym integer.max>)
  SEXP Rsh_Fir_array_args654[2];
  Rsh_Fir_array_args654[0] = Rsh_Fir_reg__Machine19_;
  Rsh_Fir_array_args654[1] = Rsh_const(CCP, 71);
  Rsh_Fir_reg_r395_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args654, Rsh_Fir_param_types_empty());
  // goto L718(c261, c262, r392, r395)
  // L718(c261, c262, r392, r395)
  Rsh_Fir_reg_c265_ = Rsh_Fir_reg_c261_;
  Rsh_Fir_reg_c266_ = Rsh_Fir_reg_c262_;
  Rsh_Fir_reg_r394_ = Rsh_Fir_reg_r392_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_r395_;
  goto L718_;

L721_:;
  // dx13 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args655[1];
  Rsh_Fir_array_args655[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args655, Rsh_Fir_param_types_empty());
  // goto L718(c239, c253, r390, dx13)
  // L718(c239, c253, r390, dx13)
  Rsh_Fir_reg_c265_ = Rsh_Fir_reg_c239_;
  Rsh_Fir_reg_c266_ = Rsh_Fir_reg_c253_;
  Rsh_Fir_reg_r394_ = Rsh_Fir_reg_r390_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx13_;
  goto L718_;

L722_:;
  // to63 = ld to
  Rsh_Fir_reg_to63_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L723() else D236()
  // L723()
  goto L723_;

D236_:;
  // deopt 819 [c265, c266, c267, to63]
  SEXP Rsh_Fir_array_deopt_stack208[4];
  Rsh_Fir_array_deopt_stack208[0] = Rsh_Fir_reg_c265_;
  Rsh_Fir_array_deopt_stack208[1] = Rsh_Fir_reg_c266_;
  Rsh_Fir_array_deopt_stack208[2] = Rsh_Fir_reg_c267_;
  Rsh_Fir_array_deopt_stack208[3] = Rsh_Fir_reg_to63_;
  Rsh_Fir_deopt(819, 4, Rsh_Fir_array_deopt_stack208, CCP, RHO);
  return R_NilValue;

L723_:;
  // to64 = force? to63
  Rsh_Fir_reg_to64_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to63_);
  // checkMissing(to64)
  SEXP Rsh_Fir_array_args656[1];
  Rsh_Fir_array_args656[0] = Rsh_Fir_reg_to64_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args656, Rsh_Fir_param_types_empty()));
  // _Machine20 = ld `.Machine`
  Rsh_Fir_reg__Machine20_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L724() else D237()
  // L724()
  goto L724_;

D237_:;
  // deopt 820 [c265, c266, c267, to64, _Machine20]
  SEXP Rsh_Fir_array_deopt_stack209[5];
  Rsh_Fir_array_deopt_stack209[0] = Rsh_Fir_reg_c265_;
  Rsh_Fir_array_deopt_stack209[1] = Rsh_Fir_reg_c266_;
  Rsh_Fir_array_deopt_stack209[2] = Rsh_Fir_reg_c267_;
  Rsh_Fir_array_deopt_stack209[3] = Rsh_Fir_reg_to64_;
  Rsh_Fir_array_deopt_stack209[4] = Rsh_Fir_reg__Machine20_;
  Rsh_Fir_deopt(820, 5, Rsh_Fir_array_deopt_stack209, CCP, RHO);
  return R_NilValue;

L724_:;
  // _Machine21 = force? _Machine20
  Rsh_Fir_reg__Machine21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Machine20_);
  // checkMissing(_Machine21)
  SEXP Rsh_Fir_array_args657[1];
  Rsh_Fir_array_args657[0] = Rsh_Fir_reg__Machine21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args657, Rsh_Fir_param_types_empty()));
  // c274 = `is.object`(_Machine21)
  SEXP Rsh_Fir_array_args658[1];
  Rsh_Fir_array_args658[0] = Rsh_Fir_reg__Machine21_;
  Rsh_Fir_reg_c274_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args658, Rsh_Fir_param_types_empty());
  // if c274 then L726() else L727(c265, c266, c267, to64, _Machine21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c274_)) {
  // L726()
    goto L726_;
  } else {
  // L727(c265, c266, c267, to64, _Machine21)
    Rsh_Fir_reg_c278_ = Rsh_Fir_reg_c265_;
    Rsh_Fir_reg_c279_ = Rsh_Fir_reg_c266_;
    Rsh_Fir_reg_c280_ = Rsh_Fir_reg_c267_;
    Rsh_Fir_reg_to66_ = Rsh_Fir_reg_to64_;
    Rsh_Fir_reg__Machine23_ = Rsh_Fir_reg__Machine21_;
    goto L727_;
  }

L725_:;
  // r398 = `-`(<missing>, dx16)
  SEXP Rsh_Fir_array_args659[2];
  Rsh_Fir_array_args659[0] = Rsh_const(CCP, 87);
  Rsh_Fir_array_args659[1] = Rsh_Fir_reg_dx16_;
  Rsh_Fir_reg_r398_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args659, Rsh_Fir_param_types_empty());
  // r399 = `>=`(to68, r398)
  SEXP Rsh_Fir_array_args660[2];
  Rsh_Fir_array_args660[0] = Rsh_Fir_reg_to68_;
  Rsh_Fir_array_args660[1] = Rsh_Fir_reg_r398_;
  Rsh_Fir_reg_r399_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args660, Rsh_Fir_param_types_empty());
  // c287 = `as.logical`(r399)
  SEXP Rsh_Fir_array_args661[1];
  Rsh_Fir_array_args661[0] = Rsh_Fir_reg_r399_;
  Rsh_Fir_reg_c287_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args661, Rsh_Fir_param_types_empty());
  // c288 = `&&`(c286, c287)
  SEXP Rsh_Fir_array_args662[2];
  Rsh_Fir_array_args662[0] = Rsh_Fir_reg_c286_;
  Rsh_Fir_array_args662[1] = Rsh_Fir_reg_c287_;
  Rsh_Fir_reg_c288_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args662, Rsh_Fir_param_types_empty());
  // goto L167(c284, c285, c288)
  // L167(c284, c285, c288)
  Rsh_Fir_reg_c271_ = Rsh_Fir_reg_c284_;
  Rsh_Fir_reg_c272_ = Rsh_Fir_reg_c285_;
  Rsh_Fir_reg_c273_ = Rsh_Fir_reg_c288_;
  goto L167_;

L726_:;
  // dr14 = tryDispatchBuiltin.1("$", _Machine21)
  SEXP Rsh_Fir_array_args663[2];
  Rsh_Fir_array_args663[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args663[1] = Rsh_Fir_reg__Machine21_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args663);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args664[1];
  Rsh_Fir_array_args664[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args664, Rsh_Fir_param_types_empty());
  // if dc7 then L728() else L727(c265, c266, c267, to64, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L728()
    goto L728_;
  } else {
  // L727(c265, c266, c267, to64, dr14)
    Rsh_Fir_reg_c278_ = Rsh_Fir_reg_c265_;
    Rsh_Fir_reg_c279_ = Rsh_Fir_reg_c266_;
    Rsh_Fir_reg_c280_ = Rsh_Fir_reg_c267_;
    Rsh_Fir_reg_to66_ = Rsh_Fir_reg_to64_;
    Rsh_Fir_reg__Machine23_ = Rsh_Fir_reg_dr14_;
    goto L727_;
  }

L727_:;
  // r397 = `$`(_Machine23, <sym integer.max>)
  SEXP Rsh_Fir_array_args665[2];
  Rsh_Fir_array_args665[0] = Rsh_Fir_reg__Machine23_;
  Rsh_Fir_array_args665[1] = Rsh_const(CCP, 71);
  Rsh_Fir_reg_r397_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args665, Rsh_Fir_param_types_empty());
  // goto L725(c278, c279, c280, to66, r397)
  // L725(c278, c279, c280, to66, r397)
  Rsh_Fir_reg_c284_ = Rsh_Fir_reg_c278_;
  Rsh_Fir_reg_c285_ = Rsh_Fir_reg_c279_;
  Rsh_Fir_reg_c286_ = Rsh_Fir_reg_c280_;
  Rsh_Fir_reg_to68_ = Rsh_Fir_reg_to66_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_r397_;
  goto L725_;

L728_:;
  // dx15 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args666[1];
  Rsh_Fir_array_args666[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args666, Rsh_Fir_param_types_empty());
  // goto L725(c265, c266, c267, to64, dx15)
  // L725(c265, c266, c267, to64, dx15)
  Rsh_Fir_reg_c284_ = Rsh_Fir_reg_c265_;
  Rsh_Fir_reg_c285_ = Rsh_Fir_reg_c266_;
  Rsh_Fir_reg_c286_ = Rsh_Fir_reg_c267_;
  Rsh_Fir_reg_to68_ = Rsh_Fir_reg_to64_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx15_;
  goto L725_;

D238_:;
  // deopt 829 [int6]
  SEXP Rsh_Fir_array_deopt_stack210[1];
  Rsh_Fir_array_deopt_stack210[0] = Rsh_Fir_reg_int6_;
  Rsh_Fir_deopt(829, 1, Rsh_Fir_array_deopt_stack210, CCP, RHO);
  return R_NilValue;

L732_:;
  // int7 = force? int6
  Rsh_Fir_reg_int7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_int6_);
  // checkMissing(int7)
  SEXP Rsh_Fir_array_args667[1];
  Rsh_Fir_array_args667[0] = Rsh_Fir_reg_int7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args667, Rsh_Fir_param_types_empty()));
  // c299 = `as.logical`(int7)
  SEXP Rsh_Fir_array_args668[1];
  Rsh_Fir_array_args668[0] = Rsh_Fir_reg_int7_;
  Rsh_Fir_reg_c299_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args668, Rsh_Fir_param_types_empty());
  // if c299 then L733() else L168(c299)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c299_)) {
  // L733()
    goto L733_;
  } else {
  // L168(c299)
    Rsh_Fir_reg_c301_ = Rsh_Fir_reg_c299_;
    goto L168_;
  }

L733_:;
  // length_out47 = ld `length.out`
  Rsh_Fir_reg_length_out47_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L734() else D239()
  // L734()
  goto L734_;

D239_:;
  // deopt 831 [c299, length_out47]
  SEXP Rsh_Fir_array_deopt_stack211[2];
  Rsh_Fir_array_deopt_stack211[0] = Rsh_Fir_reg_c299_;
  Rsh_Fir_array_deopt_stack211[1] = Rsh_Fir_reg_length_out47_;
  Rsh_Fir_deopt(831, 2, Rsh_Fir_array_deopt_stack211, CCP, RHO);
  return R_NilValue;

L734_:;
  // length_out48 = force? length_out47
  Rsh_Fir_reg_length_out48_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out47_);
  // checkMissing(length_out48)
  SEXP Rsh_Fir_array_args669[1];
  Rsh_Fir_array_args669[0] = Rsh_Fir_reg_length_out48_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args669, Rsh_Fir_param_types_empty()));
  // r400 = `>`(length_out48, 2)
  SEXP Rsh_Fir_array_args670[2];
  Rsh_Fir_array_args670[0] = Rsh_Fir_reg_length_out48_;
  Rsh_Fir_array_args670[1] = Rsh_const(CCP, 77);
  Rsh_Fir_reg_r400_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args670, Rsh_Fir_param_types_empty());
  // c302 = `as.logical`(r400)
  SEXP Rsh_Fir_array_args671[1];
  Rsh_Fir_array_args671[0] = Rsh_Fir_reg_r400_;
  Rsh_Fir_reg_c302_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args671, Rsh_Fir_param_types_empty());
  // c303 = `&&`(c299, c302)
  SEXP Rsh_Fir_array_args672[2];
  Rsh_Fir_array_args672[0] = Rsh_Fir_reg_c299_;
  Rsh_Fir_array_args672[1] = Rsh_Fir_reg_c302_;
  Rsh_Fir_reg_c303_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args672, Rsh_Fir_param_types_empty());
  // goto L168(c303)
  // L168(c303)
  Rsh_Fir_reg_c301_ = Rsh_Fir_reg_c303_;
  goto L168_;

L736_:;
  // nby = ld nby
  Rsh_Fir_reg_nby = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L737() else D240()
  // L737()
  goto L737_;

D240_:;
  // deopt 836 [c305, nby]
  SEXP Rsh_Fir_array_deopt_stack212[2];
  Rsh_Fir_array_deopt_stack212[0] = Rsh_Fir_reg_c305_;
  Rsh_Fir_array_deopt_stack212[1] = Rsh_Fir_reg_nby;
  Rsh_Fir_deopt(836, 2, Rsh_Fir_array_deopt_stack212, CCP, RHO);
  return R_NilValue;

L737_:;
  // nby1 = force? nby
  Rsh_Fir_reg_nby1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nby);
  // checkMissing(nby1)
  SEXP Rsh_Fir_array_args673[1];
  Rsh_Fir_array_args673[0] = Rsh_Fir_reg_nby1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args673, Rsh_Fir_param_types_empty()));
  // r401 = `==`(nby1, 1)
  SEXP Rsh_Fir_array_args674[2];
  Rsh_Fir_array_args674[0] = Rsh_Fir_reg_nby1_;
  Rsh_Fir_array_args674[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r401_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args674, Rsh_Fir_param_types_empty());
  // c308 = `as.logical`(r401)
  SEXP Rsh_Fir_array_args675[1];
  Rsh_Fir_array_args675[0] = Rsh_Fir_reg_r401_;
  Rsh_Fir_reg_c308_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args675, Rsh_Fir_param_types_empty());
  // c309 = `&&`(c305, c308)
  SEXP Rsh_Fir_array_args676[2];
  Rsh_Fir_array_args676[0] = Rsh_Fir_reg_c305_;
  Rsh_Fir_array_args676[1] = Rsh_Fir_reg_c308_;
  Rsh_Fir_reg_c309_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args676, Rsh_Fir_param_types_empty());
  // goto L169(c309)
  // L169(c309)
  Rsh_Fir_reg_c307_ = Rsh_Fir_reg_c309_;
  goto L169_;

L739_:;
  // naby = ld naby
  Rsh_Fir_reg_naby = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // check L740() else D241()
  // L740()
  goto L740_;

D241_:;
  // deopt 841 [c311, naby]
  SEXP Rsh_Fir_array_deopt_stack213[2];
  Rsh_Fir_array_deopt_stack213[0] = Rsh_Fir_reg_c311_;
  Rsh_Fir_array_deopt_stack213[1] = Rsh_Fir_reg_naby;
  Rsh_Fir_deopt(841, 2, Rsh_Fir_array_deopt_stack213, CCP, RHO);
  return R_NilValue;

L740_:;
  // naby1 = force? naby
  Rsh_Fir_reg_naby1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_naby);
  // checkMissing(naby1)
  SEXP Rsh_Fir_array_args677[1];
  Rsh_Fir_array_args677[0] = Rsh_Fir_reg_naby1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args677, Rsh_Fir_param_types_empty()));
  // r402 = `!`(naby1)
  SEXP Rsh_Fir_array_args678[1];
  Rsh_Fir_array_args678[0] = Rsh_Fir_reg_naby1_;
  Rsh_Fir_reg_r402_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args678, Rsh_Fir_param_types_empty());
  // c314 = `as.logical`(r402)
  SEXP Rsh_Fir_array_args679[1];
  Rsh_Fir_array_args679[0] = Rsh_Fir_reg_r402_;
  Rsh_Fir_reg_c314_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args679, Rsh_Fir_param_types_empty());
  // c315 = `&&`(c311, c314)
  SEXP Rsh_Fir_array_args680[2];
  Rsh_Fir_array_args680[0] = Rsh_Fir_reg_c311_;
  Rsh_Fir_array_args680[1] = Rsh_Fir_reg_c314_;
  Rsh_Fir_reg_c315_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args680, Rsh_Fir_param_types_empty());
  // goto L170(c315)
  // L170(c315)
  Rsh_Fir_reg_c313_ = Rsh_Fir_reg_c315_;
  goto L170_;

L742_:;
  // sym61 = ldf cumsum
  Rsh_Fir_reg_sym61_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base61 = ldf cumsum in base
  Rsh_Fir_reg_base61_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard61 = `==`.4(sym61, base61)
  SEXP Rsh_Fir_array_args681[2];
  Rsh_Fir_array_args681[0] = Rsh_Fir_reg_sym61_;
  Rsh_Fir_array_args681[1] = Rsh_Fir_reg_base61_;
  Rsh_Fir_reg_guard61_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args681);
  // if guard61 then L743() else L744()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard61_)) {
  // L743()
    goto L743_;
  } else {
  // L744()
    goto L744_;
  }

L743_:;
  // sym62 = ldf `rep.int`
  Rsh_Fir_reg_sym62_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base62 = ldf `rep.int` in base
  Rsh_Fir_reg_base62_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard62 = `==`.4(sym62, base62)
  SEXP Rsh_Fir_array_args682[2];
  Rsh_Fir_array_args682[0] = Rsh_Fir_reg_sym62_;
  Rsh_Fir_array_args682[1] = Rsh_Fir_reg_base62_;
  Rsh_Fir_reg_guard62_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args682);
  // if guard62 then L745() else L746()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard62_)) {
  // L745()
    goto L745_;
  } else {
  // L746()
    goto L746_;
  }

L744_:;
  // r403 = dyn base61(<lang rep.int(c(from, by), c(1, `-`(length.out, 1)))>)
  SEXP Rsh_Fir_array_args683[1];
  Rsh_Fir_array_args683[0] = Rsh_const(CCP, 96);
  SEXP Rsh_Fir_array_arg_names152[1];
  Rsh_Fir_array_arg_names152[0] = R_MissingArg;
  Rsh_Fir_reg_r403_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base61_, 1, Rsh_Fir_array_args683, Rsh_Fir_array_arg_names152, CCP, RHO);
  // goto L172(r403)
  // L172(r403)
  Rsh_Fir_reg_r404_ = Rsh_Fir_reg_r403_;
  goto L172_;

L745_:;
  // sym63 = ldf c
  Rsh_Fir_reg_sym63_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base63 = ldf c in base
  Rsh_Fir_reg_base63_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard63 = `==`.4(sym63, base63)
  SEXP Rsh_Fir_array_args684[2];
  Rsh_Fir_array_args684[0] = Rsh_Fir_reg_sym63_;
  Rsh_Fir_array_args684[1] = Rsh_Fir_reg_base63_;
  Rsh_Fir_reg_guard63_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args684);
  // if guard63 then L747() else L748()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard63_)) {
  // L747()
    goto L747_;
  } else {
  // L748()
    goto L748_;
  }

L746_:;
  // r405 = dyn base62(<lang c(from, by)>, <lang c(1, `-`(length.out, 1))>)
  SEXP Rsh_Fir_array_args685[2];
  Rsh_Fir_array_args685[0] = Rsh_const(CCP, 79);
  Rsh_Fir_array_args685[1] = Rsh_const(CCP, 97);
  SEXP Rsh_Fir_array_arg_names153[2];
  Rsh_Fir_array_arg_names153[0] = R_MissingArg;
  Rsh_Fir_array_arg_names153[1] = R_MissingArg;
  Rsh_Fir_reg_r405_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base62_, 2, Rsh_Fir_array_args685, Rsh_Fir_array_arg_names153, CCP, RHO);
  // goto L173(r405)
  // L173(r405)
  Rsh_Fir_reg_r406_ = Rsh_Fir_reg_r405_;
  goto L173_;

L747_:;
  // from91 = ld from
  Rsh_Fir_reg_from91_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L749() else D242()
  // L749()
  goto L749_;

L748_:;
  // r407 = dyn base63(<sym from>, <sym by>)
  SEXP Rsh_Fir_array_args686[2];
  Rsh_Fir_array_args686[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args686[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names154[2];
  Rsh_Fir_array_arg_names154[0] = R_MissingArg;
  Rsh_Fir_array_arg_names154[1] = R_MissingArg;
  Rsh_Fir_reg_r407_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base63_, 2, Rsh_Fir_array_args686, Rsh_Fir_array_arg_names154, CCP, RHO);
  // goto L174(r407)
  // L174(r407)
  Rsh_Fir_reg_r408_ = Rsh_Fir_reg_r407_;
  goto L174_;

D242_:;
  // deopt 851 [from91]
  SEXP Rsh_Fir_array_deopt_stack214[1];
  Rsh_Fir_array_deopt_stack214[0] = Rsh_Fir_reg_from91_;
  Rsh_Fir_deopt(851, 1, Rsh_Fir_array_deopt_stack214, CCP, RHO);
  return R_NilValue;

L749_:;
  // from92 = force? from91
  Rsh_Fir_reg_from92_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from91_);
  // checkMissing(from92)
  SEXP Rsh_Fir_array_args687[1];
  Rsh_Fir_array_args687[0] = Rsh_Fir_reg_from92_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args687, Rsh_Fir_param_types_empty()));
  // by35 = ld by
  Rsh_Fir_reg_by35_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L750() else D243()
  // L750()
  goto L750_;

D243_:;
  // deopt 853 [by35]
  SEXP Rsh_Fir_array_deopt_stack215[1];
  Rsh_Fir_array_deopt_stack215[0] = Rsh_Fir_reg_by35_;
  Rsh_Fir_deopt(853, 1, Rsh_Fir_array_deopt_stack215, CCP, RHO);
  return R_NilValue;

L750_:;
  // by36 = force? by35
  Rsh_Fir_reg_by36_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by35_);
  // checkMissing(by36)
  SEXP Rsh_Fir_array_args688[1];
  Rsh_Fir_array_args688[0] = Rsh_Fir_reg_by36_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args688, Rsh_Fir_param_types_empty()));
  // c318 = ldf c in base
  Rsh_Fir_reg_c318_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r409 = dyn c318(from92, by36)
  SEXP Rsh_Fir_array_args689[2];
  Rsh_Fir_array_args689[0] = Rsh_Fir_reg_from92_;
  Rsh_Fir_array_args689[1] = Rsh_Fir_reg_by36_;
  SEXP Rsh_Fir_array_arg_names155[2];
  Rsh_Fir_array_arg_names155[0] = R_MissingArg;
  Rsh_Fir_array_arg_names155[1] = R_MissingArg;
  Rsh_Fir_reg_r409_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c318_, 2, Rsh_Fir_array_args689, Rsh_Fir_array_arg_names155, CCP, RHO);
  // check L751() else D244()
  // L751()
  goto L751_;

D244_:;
  // deopt 856 [r409]
  SEXP Rsh_Fir_array_deopt_stack216[1];
  Rsh_Fir_array_deopt_stack216[0] = Rsh_Fir_reg_r409_;
  Rsh_Fir_deopt(856, 1, Rsh_Fir_array_deopt_stack216, CCP, RHO);
  return R_NilValue;

L751_:;
  // goto L174(r409)
  // L174(r409)
  Rsh_Fir_reg_r408_ = Rsh_Fir_reg_r409_;
  goto L174_;

L752_:;
  // length_out49 = ld `length.out`
  Rsh_Fir_reg_length_out49_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L754() else D245()
  // L754()
  goto L754_;

L753_:;
  // r410 = dyn base64(1, <lang `-`(length.out, 1)>)
  SEXP Rsh_Fir_array_args690[2];
  Rsh_Fir_array_args690[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args690[1] = Rsh_const(CCP, 98);
  SEXP Rsh_Fir_array_arg_names156[2];
  Rsh_Fir_array_arg_names156[0] = R_MissingArg;
  Rsh_Fir_array_arg_names156[1] = R_MissingArg;
  Rsh_Fir_reg_r410_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base64_, 2, Rsh_Fir_array_args690, Rsh_Fir_array_arg_names156, CCP, RHO);
  // goto L175(r410)
  // L175(r410)
  Rsh_Fir_reg_r411_ = Rsh_Fir_reg_r410_;
  goto L175_;

D245_:;
  // deopt 860 [length_out49]
  SEXP Rsh_Fir_array_deopt_stack217[1];
  Rsh_Fir_array_deopt_stack217[0] = Rsh_Fir_reg_length_out49_;
  Rsh_Fir_deopt(860, 1, Rsh_Fir_array_deopt_stack217, CCP, RHO);
  return R_NilValue;

L754_:;
  // length_out50 = force? length_out49
  Rsh_Fir_reg_length_out50_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out49_);
  // checkMissing(length_out50)
  SEXP Rsh_Fir_array_args691[1];
  Rsh_Fir_array_args691[0] = Rsh_Fir_reg_length_out50_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args691, Rsh_Fir_param_types_empty()));
  // r412 = `-`(length_out50, 1)
  SEXP Rsh_Fir_array_args692[2];
  Rsh_Fir_array_args692[0] = Rsh_Fir_reg_length_out50_;
  Rsh_Fir_array_args692[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r412_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args692, Rsh_Fir_param_types_empty());
  // c319 = ldf c in base
  Rsh_Fir_reg_c319_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r413 = dyn c319(1, r412)
  SEXP Rsh_Fir_array_args693[2];
  Rsh_Fir_array_args693[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args693[1] = Rsh_Fir_reg_r412_;
  SEXP Rsh_Fir_array_arg_names157[2];
  Rsh_Fir_array_arg_names157[0] = R_MissingArg;
  Rsh_Fir_array_arg_names157[1] = R_MissingArg;
  Rsh_Fir_reg_r413_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c319_, 2, Rsh_Fir_array_args693, Rsh_Fir_array_arg_names157, CCP, RHO);
  // check L755() else D246()
  // L755()
  goto L755_;

D246_:;
  // deopt 865 [r413]
  SEXP Rsh_Fir_array_deopt_stack218[1];
  Rsh_Fir_array_deopt_stack218[0] = Rsh_Fir_reg_r413_;
  Rsh_Fir_deopt(865, 1, Rsh_Fir_array_deopt_stack218, CCP, RHO);
  return R_NilValue;

L755_:;
  // goto L175(r413)
  // L175(r413)
  Rsh_Fir_reg_r411_ = Rsh_Fir_reg_r413_;
  goto L175_;

D247_:;
  // deopt 867 [r414]
  SEXP Rsh_Fir_array_deopt_stack219[1];
  Rsh_Fir_array_deopt_stack219[0] = Rsh_Fir_reg_r414_;
  Rsh_Fir_deopt(867, 1, Rsh_Fir_array_deopt_stack219, CCP, RHO);
  return R_NilValue;

L756_:;
  // goto L173(r414)
  // L173(r414)
  Rsh_Fir_reg_r406_ = Rsh_Fir_reg_r414_;
  goto L173_;

D248_:;
  // deopt 869 [r415]
  SEXP Rsh_Fir_array_deopt_stack220[1];
  Rsh_Fir_array_deopt_stack220[0] = Rsh_Fir_reg_r415_;
  Rsh_Fir_deopt(869, 1, Rsh_Fir_array_deopt_stack220, CCP, RHO);
  return R_NilValue;

L757_:;
  // goto L172(r415)
  // L172(r415)
  Rsh_Fir_reg_r404_ = Rsh_Fir_reg_r415_;
  goto L172_;

D249_:;
  // deopt 870 [intby]
  SEXP Rsh_Fir_array_deopt_stack221[1];
  Rsh_Fir_array_deopt_stack221[0] = Rsh_Fir_reg_intby;
  Rsh_Fir_deopt(870, 1, Rsh_Fir_array_deopt_stack221, CCP, RHO);
  return R_NilValue;

L759_:;
  // intby1 = force? intby
  Rsh_Fir_reg_intby1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_intby);
  // checkMissing(intby1)
  SEXP Rsh_Fir_array_args694[1];
  Rsh_Fir_array_args694[0] = Rsh_Fir_reg_intby1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args694, Rsh_Fir_param_types_empty()));
  // c320 = `as.logical`(intby1)
  SEXP Rsh_Fir_array_args695[1];
  Rsh_Fir_array_args695[0] = Rsh_Fir_reg_intby1_;
  Rsh_Fir_reg_c320_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args695, Rsh_Fir_param_types_empty());
  // if c320 then L760() else L176(c320)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c320_)) {
  // L760()
    goto L760_;
  } else {
  // L176(c320)
    Rsh_Fir_reg_c322_ = Rsh_Fir_reg_c320_;
    goto L176_;
  }

L760_:;
  // int8 = ld int
  Rsh_Fir_reg_int8_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L761() else D250()
  // L761()
  goto L761_;

D250_:;
  // deopt 872 [c320, int8]
  SEXP Rsh_Fir_array_deopt_stack222[2];
  Rsh_Fir_array_deopt_stack222[0] = Rsh_Fir_reg_c320_;
  Rsh_Fir_array_deopt_stack222[1] = Rsh_Fir_reg_int8_;
  Rsh_Fir_deopt(872, 2, Rsh_Fir_array_deopt_stack222, CCP, RHO);
  return R_NilValue;

L761_:;
  // int9 = force? int8
  Rsh_Fir_reg_int9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_int8_);
  // checkMissing(int9)
  SEXP Rsh_Fir_array_args696[1];
  Rsh_Fir_array_args696[0] = Rsh_Fir_reg_int9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args696, Rsh_Fir_param_types_empty()));
  // c323 = `as.logical`(int9)
  SEXP Rsh_Fir_array_args697[1];
  Rsh_Fir_array_args697[0] = Rsh_Fir_reg_int9_;
  Rsh_Fir_reg_c323_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args697, Rsh_Fir_param_types_empty());
  // if c323 then L177(c320, c323) else L762()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c323_)) {
  // L177(c320, c323)
    Rsh_Fir_reg_c324_ = Rsh_Fir_reg_c320_;
    Rsh_Fir_reg_c325_ = Rsh_Fir_reg_c323_;
    goto L177_;
  } else {
  // L762()
    goto L762_;
  }

L762_:;
  // sym65 = ldf `is.object`
  Rsh_Fir_reg_sym65_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 99), RHO);
  // base65 = ldf `is.object` in base
  Rsh_Fir_reg_base65_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 99), RHO);
  // guard65 = `==`.4(sym65, base65)
  SEXP Rsh_Fir_array_args698[2];
  Rsh_Fir_array_args698[0] = Rsh_Fir_reg_sym65_;
  Rsh_Fir_array_args698[1] = Rsh_Fir_reg_base65_;
  Rsh_Fir_reg_guard65_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args698);
  // if guard65 then L763() else L764()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard65_)) {
  // L763()
    goto L763_;
  } else {
  // L764()
    goto L764_;
  }

L763_:;
  // from93 = ld from
  Rsh_Fir_reg_from93_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L765() else D251()
  // L765()
  goto L765_;

L764_:;
  // r416 = dyn base65(<sym from>)
  SEXP Rsh_Fir_array_args699[1];
  Rsh_Fir_array_args699[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names158[1];
  Rsh_Fir_array_arg_names158[0] = R_MissingArg;
  Rsh_Fir_reg_r416_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base65_, 1, Rsh_Fir_array_args699, Rsh_Fir_array_arg_names158, CCP, RHO);
  // goto L178(c320, c323, r416)
  // L178(c320, c323, r416)
  Rsh_Fir_reg_c332_ = Rsh_Fir_reg_c320_;
  Rsh_Fir_reg_c333_ = Rsh_Fir_reg_c323_;
  Rsh_Fir_reg_r417_ = Rsh_Fir_reg_r416_;
  goto L178_;

D251_:;
  // deopt 875 [c320, c323, from93]
  SEXP Rsh_Fir_array_deopt_stack223[3];
  Rsh_Fir_array_deopt_stack223[0] = Rsh_Fir_reg_c320_;
  Rsh_Fir_array_deopt_stack223[1] = Rsh_Fir_reg_c323_;
  Rsh_Fir_array_deopt_stack223[2] = Rsh_Fir_reg_from93_;
  Rsh_Fir_deopt(875, 3, Rsh_Fir_array_deopt_stack223, CCP, RHO);
  return R_NilValue;

L765_:;
  // from94 = force? from93
  Rsh_Fir_reg_from94_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from93_);
  // checkMissing(from94)
  SEXP Rsh_Fir_array_args700[1];
  Rsh_Fir_array_args700[0] = Rsh_Fir_reg_from94_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args700, Rsh_Fir_param_types_empty()));
  // c334 = `is.object`(from94)
  SEXP Rsh_Fir_array_args701[1];
  Rsh_Fir_array_args701[0] = Rsh_Fir_reg_from94_;
  Rsh_Fir_reg_c334_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args701, Rsh_Fir_param_types_empty());
  // goto L178(c320, c323, c334)
  // L178(c320, c323, c334)
  Rsh_Fir_reg_c332_ = Rsh_Fir_reg_c320_;
  Rsh_Fir_reg_c333_ = Rsh_Fir_reg_c323_;
  Rsh_Fir_reg_r417_ = Rsh_Fir_reg_c334_;
  goto L178_;

L768_:;
  // l4 = ld by
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // storage_mode__4 = ldf `storage.mode<-`
  Rsh_Fir_reg_storage_mode__4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 64), RHO);
  // check L769() else D252()
  // L769()
  goto L769_;

D252_:;
  // deopt 884 ["double", l4, "double"]
  SEXP Rsh_Fir_array_deopt_stack224[3];
  Rsh_Fir_array_deopt_stack224[0] = Rsh_const(CCP, 65);
  Rsh_Fir_array_deopt_stack224[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack224[2] = Rsh_const(CCP, 65);
  Rsh_Fir_deopt(884, 3, Rsh_Fir_array_deopt_stack224, CCP, RHO);
  return R_NilValue;

L769_:;
  // r419 = dyn storage_mode__4(l4, NULL, "double")
  SEXP Rsh_Fir_array_args702[3];
  Rsh_Fir_array_args702[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args702[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args702[2] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names159[3];
  Rsh_Fir_array_arg_names159[0] = R_MissingArg;
  Rsh_Fir_array_arg_names159[1] = R_MissingArg;
  Rsh_Fir_array_arg_names159[2] = R_MissingArg;
  Rsh_Fir_reg_r419_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode__4_, 3, Rsh_Fir_array_args702, Rsh_Fir_array_arg_names159, CCP, RHO);
  // check L770() else D253()
  // L770()
  goto L770_;

D253_:;
  // deopt 886 ["double", r419]
  SEXP Rsh_Fir_array_deopt_stack225[2];
  Rsh_Fir_array_deopt_stack225[0] = Rsh_const(CCP, 65);
  Rsh_Fir_array_deopt_stack225[1] = Rsh_Fir_reg_r419_;
  Rsh_Fir_deopt(886, 2, Rsh_Fir_array_deopt_stack225, CCP, RHO);
  return R_NilValue;

L770_:;
  // st by = r419
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r419_, RHO);
  (void)(Rsh_Fir_reg_r419_);
  // goto L180()
  // L180()
  goto L180_;

D254_:;
  // deopt 890 [from95]
  SEXP Rsh_Fir_array_deopt_stack226[1];
  Rsh_Fir_array_deopt_stack226[0] = Rsh_Fir_reg_from95_;
  Rsh_Fir_deopt(890, 1, Rsh_Fir_array_deopt_stack226, CCP, RHO);
  return R_NilValue;

L772_:;
  // from96 = force? from95
  Rsh_Fir_reg_from96_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from95_);
  // checkMissing(from96)
  SEXP Rsh_Fir_array_args703[1];
  Rsh_Fir_array_args703[0] = Rsh_Fir_reg_from96_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args703, Rsh_Fir_param_types_empty()));
  // length_out51 = ld `length.out`
  Rsh_Fir_reg_length_out51_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L773() else D255()
  // L773()
  goto L773_;

D255_:;
  // deopt 892 [from96, 0, length_out51]
  SEXP Rsh_Fir_array_deopt_stack227[3];
  Rsh_Fir_array_deopt_stack227[0] = Rsh_Fir_reg_from96_;
  Rsh_Fir_array_deopt_stack227[1] = Rsh_const(CCP, 68);
  Rsh_Fir_array_deopt_stack227[2] = Rsh_Fir_reg_length_out51_;
  Rsh_Fir_deopt(892, 3, Rsh_Fir_array_deopt_stack227, CCP, RHO);
  return R_NilValue;

L773_:;
  // length_out52 = force? length_out51
  Rsh_Fir_reg_length_out52_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out51_);
  // checkMissing(length_out52)
  SEXP Rsh_Fir_array_args704[1];
  Rsh_Fir_array_args704[0] = Rsh_Fir_reg_length_out52_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args704, Rsh_Fir_param_types_empty()));
  // r421 = `-`(length_out52, 1)
  SEXP Rsh_Fir_array_args705[2];
  Rsh_Fir_array_args705[0] = Rsh_Fir_reg_length_out52_;
  Rsh_Fir_array_args705[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r421_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args705, Rsh_Fir_param_types_empty());
  // r422 = `:`(0, r421)
  SEXP Rsh_Fir_array_args706[2];
  Rsh_Fir_array_args706[0] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args706[1] = Rsh_Fir_reg_r421_;
  Rsh_Fir_reg_r422_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args706, Rsh_Fir_param_types_empty());
  // by37 = ld by
  Rsh_Fir_reg_by37_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L774() else D256()
  // L774()
  goto L774_;

D256_:;
  // deopt 896 [from96, r422, by37]
  SEXP Rsh_Fir_array_deopt_stack228[3];
  Rsh_Fir_array_deopt_stack228[0] = Rsh_Fir_reg_from96_;
  Rsh_Fir_array_deopt_stack228[1] = Rsh_Fir_reg_r422_;
  Rsh_Fir_array_deopt_stack228[2] = Rsh_Fir_reg_by37_;
  Rsh_Fir_deopt(896, 3, Rsh_Fir_array_deopt_stack228, CCP, RHO);
  return R_NilValue;

L774_:;
  // by38 = force? by37
  Rsh_Fir_reg_by38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by37_);
  // checkMissing(by38)
  SEXP Rsh_Fir_array_args707[1];
  Rsh_Fir_array_args707[0] = Rsh_Fir_reg_by38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args707, Rsh_Fir_param_types_empty()));
  // r423 = `*`(r422, by38)
  SEXP Rsh_Fir_array_args708[2];
  Rsh_Fir_array_args708[0] = Rsh_Fir_reg_r422_;
  Rsh_Fir_array_args708[1] = Rsh_Fir_reg_by38_;
  Rsh_Fir_reg_r423_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args708, Rsh_Fir_param_types_empty());
  // r424 = `+`(from96, r423)
  SEXP Rsh_Fir_array_args709[2];
  Rsh_Fir_array_args709[0] = Rsh_Fir_reg_from96_;
  Rsh_Fir_array_args709[1] = Rsh_Fir_reg_r423_;
  Rsh_Fir_reg_r424_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args709, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r424
  return Rsh_Fir_reg_r424_;

L776_:;
  // missing12 = ldf missing in base
  Rsh_Fir_reg_missing12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r427 = dyn missing12(<sym from>)
  SEXP Rsh_Fir_array_args710[1];
  Rsh_Fir_array_args710[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names160[1];
  Rsh_Fir_array_arg_names160[0] = R_MissingArg;
  Rsh_Fir_reg_r427_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing12_, 1, Rsh_Fir_array_args710, Rsh_Fir_array_arg_names160, CCP, RHO);
  // goto L181(r427)
  // L181(r427)
  Rsh_Fir_reg_r426_ = Rsh_Fir_reg_r427_;
  goto L181_;

L777_:;
  // r425 = dyn base66(<sym from>)
  SEXP Rsh_Fir_array_args711[1];
  Rsh_Fir_array_args711[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names161[1];
  Rsh_Fir_array_arg_names161[0] = R_MissingArg;
  Rsh_Fir_reg_r425_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base66_, 1, Rsh_Fir_array_args711, Rsh_Fir_array_arg_names161, CCP, RHO);
  // goto L181(r425)
  // L181(r425)
  Rsh_Fir_reg_r426_ = Rsh_Fir_reg_r425_;
  goto L181_;

L778_:;
  // is_logint9 = ldf `is.logint`
  Rsh_Fir_reg_is_logint9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L779() else D257()
  // L779()
  goto L779_;

D257_:;
  // deopt 904 []
  Rsh_Fir_deopt(904, 0, NULL, CCP, RHO);
  return R_NilValue;

L779_:;
  // p18 = prom<V +>{
  //   by39 = ld by;
  //   by40 = force? by39;
  //   checkMissing(by40);
  //   return by40;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3182225035_18, CCP, RHO);
  // r429 = dyn is_logint9(p18)
  SEXP Rsh_Fir_array_args713[1];
  Rsh_Fir_array_args713[0] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names162[1];
  Rsh_Fir_array_arg_names162[0] = R_MissingArg;
  Rsh_Fir_reg_r429_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_logint9_, 1, Rsh_Fir_array_args713, Rsh_Fir_array_arg_names162, CCP, RHO);
  // check L780() else D258()
  // L780()
  goto L780_;

D258_:;
  // deopt 906 [r429]
  SEXP Rsh_Fir_array_deopt_stack229[1];
  Rsh_Fir_array_deopt_stack229[0] = Rsh_Fir_reg_r429_;
  Rsh_Fir_deopt(906, 1, Rsh_Fir_array_deopt_stack229, CCP, RHO);
  return R_NilValue;

L780_:;
  // st intby = r429
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r429_, RHO);
  (void)(Rsh_Fir_reg_r429_);
  // c344 = `as.logical`(r429)
  SEXP Rsh_Fir_array_args714[1];
  Rsh_Fir_array_args714[0] = Rsh_Fir_reg_r429_;
  Rsh_Fir_reg_c344_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args714, Rsh_Fir_param_types_empty());
  // if c344 then L781() else L183(c344)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c344_)) {
  // L781()
    goto L781_;
  } else {
  // L183(c344)
    Rsh_Fir_reg_c346_ = Rsh_Fir_reg_c344_;
    goto L183_;
  }

L781_:;
  // is_logint10 = ldf `is.logint`
  Rsh_Fir_reg_is_logint10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L782() else D259()
  // L782()
  goto L782_;

D259_:;
  // deopt 909 [c344]
  SEXP Rsh_Fir_array_deopt_stack230[1];
  Rsh_Fir_array_deopt_stack230[0] = Rsh_Fir_reg_c344_;
  Rsh_Fir_deopt(909, 1, Rsh_Fir_array_deopt_stack230, CCP, RHO);
  return R_NilValue;

L782_:;
  // p19 = prom<V +>{
  //   to69 = ld to;
  //   to70 = force? to69;
  //   checkMissing(to70);
  //   return to70;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3182225035_19, CCP, RHO);
  // r431 = dyn is_logint10(p19)
  SEXP Rsh_Fir_array_args716[1];
  Rsh_Fir_array_args716[0] = Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_array_arg_names163[1];
  Rsh_Fir_array_arg_names163[0] = R_MissingArg;
  Rsh_Fir_reg_r431_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_logint10_, 1, Rsh_Fir_array_args716, Rsh_Fir_array_arg_names163, CCP, RHO);
  // check L783() else D260()
  // L783()
  goto L783_;

D260_:;
  // deopt 911 [c344, r431]
  SEXP Rsh_Fir_array_deopt_stack231[2];
  Rsh_Fir_array_deopt_stack231[0] = Rsh_Fir_reg_c344_;
  Rsh_Fir_array_deopt_stack231[1] = Rsh_Fir_reg_r431_;
  Rsh_Fir_deopt(911, 2, Rsh_Fir_array_deopt_stack231, CCP, RHO);
  return R_NilValue;

L783_:;
  // c347 = `as.logical`(r431)
  SEXP Rsh_Fir_array_args717[1];
  Rsh_Fir_array_args717[0] = Rsh_Fir_reg_r431_;
  Rsh_Fir_reg_c347_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args717, Rsh_Fir_param_types_empty());
  // c348 = `&&`(c344, c347)
  SEXP Rsh_Fir_array_args718[2];
  Rsh_Fir_array_args718[0] = Rsh_Fir_reg_c344_;
  Rsh_Fir_array_args718[1] = Rsh_Fir_reg_c347_;
  Rsh_Fir_reg_c348_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args718, Rsh_Fir_param_types_empty());
  // goto L183(c348)
  // L183(c348)
  Rsh_Fir_reg_c346_ = Rsh_Fir_reg_c348_;
  goto L183_;

L785_:;
  // sym67 = ldf length
  Rsh_Fir_reg_sym67_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base67 = ldf length in base
  Rsh_Fir_reg_base67_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard67 = `==`.4(sym67, base67)
  SEXP Rsh_Fir_array_args719[2];
  Rsh_Fir_array_args719[0] = Rsh_Fir_reg_sym67_;
  Rsh_Fir_array_args719[1] = Rsh_Fir_reg_base67_;
  Rsh_Fir_reg_guard67_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args719);
  // if guard67 then L786() else L787()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard67_)) {
  // L786()
    goto L786_;
  } else {
  // L787()
    goto L787_;
  }

L786_:;
  // by41 = ld by
  Rsh_Fir_reg_by41_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L788() else D261()
  // L788()
  goto L788_;

L787_:;
  // r432 = dyn base67(<sym by>)
  SEXP Rsh_Fir_array_args720[1];
  Rsh_Fir_array_args720[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names164[1];
  Rsh_Fir_array_arg_names164[0] = R_MissingArg;
  Rsh_Fir_reg_r432_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base67_, 1, Rsh_Fir_array_args720, Rsh_Fir_array_arg_names164, CCP, RHO);
  // goto L185(c350, r432)
  // L185(c350, r432)
  Rsh_Fir_reg_c355_ = Rsh_Fir_reg_c350_;
  Rsh_Fir_reg_r433_ = Rsh_Fir_reg_r432_;
  goto L185_;

D261_:;
  // deopt 915 [c350, by41]
  SEXP Rsh_Fir_array_deopt_stack232[2];
  Rsh_Fir_array_deopt_stack232[0] = Rsh_Fir_reg_c350_;
  Rsh_Fir_array_deopt_stack232[1] = Rsh_Fir_reg_by41_;
  Rsh_Fir_deopt(915, 2, Rsh_Fir_array_deopt_stack232, CCP, RHO);
  return R_NilValue;

L788_:;
  // by42 = force? by41
  Rsh_Fir_reg_by42_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by41_);
  // checkMissing(by42)
  SEXP Rsh_Fir_array_args721[1];
  Rsh_Fir_array_args721[0] = Rsh_Fir_reg_by42_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args721, Rsh_Fir_param_types_empty()));
  // length7 = ldf length in base
  Rsh_Fir_reg_length7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r434 = dyn length7(by42)
  SEXP Rsh_Fir_array_args722[1];
  Rsh_Fir_array_args722[0] = Rsh_Fir_reg_by42_;
  SEXP Rsh_Fir_array_arg_names165[1];
  Rsh_Fir_array_arg_names165[0] = R_MissingArg;
  Rsh_Fir_reg_r434_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length7_, 1, Rsh_Fir_array_args722, Rsh_Fir_array_arg_names165, CCP, RHO);
  // check L789() else D262()
  // L789()
  goto L789_;

D262_:;
  // deopt 918 [c350, r434]
  SEXP Rsh_Fir_array_deopt_stack233[2];
  Rsh_Fir_array_deopt_stack233[0] = Rsh_Fir_reg_c350_;
  Rsh_Fir_array_deopt_stack233[1] = Rsh_Fir_reg_r434_;
  Rsh_Fir_deopt(918, 2, Rsh_Fir_array_deopt_stack233, CCP, RHO);
  return R_NilValue;

L789_:;
  // goto L185(c350, r434)
  // L185(c350, r434)
  Rsh_Fir_reg_c355_ = Rsh_Fir_reg_c350_;
  Rsh_Fir_reg_r433_ = Rsh_Fir_reg_r434_;
  goto L185_;

L790_:;
  // sym68 = ldf `is.na`
  Rsh_Fir_reg_sym68_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base68 = ldf `is.na` in base
  Rsh_Fir_reg_base68_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard68 = `==`.4(sym68, base68)
  SEXP Rsh_Fir_array_args723[2];
  Rsh_Fir_array_args723[0] = Rsh_Fir_reg_sym68_;
  Rsh_Fir_array_args723[1] = Rsh_Fir_reg_base68_;
  Rsh_Fir_reg_guard68_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args723);
  // if guard68 then L791() else L792()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard68_)) {
  // L791()
    goto L791_;
  } else {
  // L792()
    goto L792_;
  }

L791_:;
  // by43 = ld by
  Rsh_Fir_reg_by43_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L793() else D263()
  // L793()
  goto L793_;

L792_:;
  // r436 = dyn base68(<sym by>)
  SEXP Rsh_Fir_array_args724[1];
  Rsh_Fir_array_args724[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names166[1];
  Rsh_Fir_array_arg_names166[0] = R_MissingArg;
  Rsh_Fir_reg_r436_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base68_, 1, Rsh_Fir_array_args724, Rsh_Fir_array_arg_names166, CCP, RHO);
  // goto L187(c355, c356, r436)
  // L187(c355, c356, r436)
  Rsh_Fir_reg_c365_ = Rsh_Fir_reg_c355_;
  Rsh_Fir_reg_c366_ = Rsh_Fir_reg_c356_;
  Rsh_Fir_reg_r437_ = Rsh_Fir_reg_r436_;
  goto L187_;

D263_:;
  // deopt 923 [c355, c356, by43]
  SEXP Rsh_Fir_array_deopt_stack234[3];
  Rsh_Fir_array_deopt_stack234[0] = Rsh_Fir_reg_c355_;
  Rsh_Fir_array_deopt_stack234[1] = Rsh_Fir_reg_c356_;
  Rsh_Fir_array_deopt_stack234[2] = Rsh_Fir_reg_by43_;
  Rsh_Fir_deopt(923, 3, Rsh_Fir_array_deopt_stack234, CCP, RHO);
  return R_NilValue;

L793_:;
  // by44 = force? by43
  Rsh_Fir_reg_by44_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by43_);
  // checkMissing(by44)
  SEXP Rsh_Fir_array_args725[1];
  Rsh_Fir_array_args725[0] = Rsh_Fir_reg_by44_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args725, Rsh_Fir_param_types_empty()));
  // is_na2 = ldf `is.na` in base
  Rsh_Fir_reg_is_na2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r438 = dyn is_na2(by44)
  SEXP Rsh_Fir_array_args726[1];
  Rsh_Fir_array_args726[0] = Rsh_Fir_reg_by44_;
  SEXP Rsh_Fir_array_arg_names167[1];
  Rsh_Fir_array_arg_names167[0] = R_MissingArg;
  Rsh_Fir_reg_r438_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na2_, 1, Rsh_Fir_array_args726, Rsh_Fir_array_arg_names167, CCP, RHO);
  // check L794() else D264()
  // L794()
  goto L794_;

D264_:;
  // deopt 926 [c355, c356, r438]
  SEXP Rsh_Fir_array_deopt_stack235[3];
  Rsh_Fir_array_deopt_stack235[0] = Rsh_Fir_reg_c355_;
  Rsh_Fir_array_deopt_stack235[1] = Rsh_Fir_reg_c356_;
  Rsh_Fir_array_deopt_stack235[2] = Rsh_Fir_reg_r438_;
  Rsh_Fir_deopt(926, 3, Rsh_Fir_array_deopt_stack235, CCP, RHO);
  return R_NilValue;

L794_:;
  // goto L187(c355, c356, r438)
  // L187(c355, c356, r438)
  Rsh_Fir_reg_c365_ = Rsh_Fir_reg_c355_;
  Rsh_Fir_reg_c366_ = Rsh_Fir_reg_c356_;
  Rsh_Fir_reg_r437_ = Rsh_Fir_reg_r438_;
  goto L187_;

L796_:;
  // to71 = ld to
  Rsh_Fir_reg_to71_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L797() else D265()
  // L797()
  goto L797_;

D265_:;
  // deopt 929 [c357, c371, to71]
  SEXP Rsh_Fir_array_deopt_stack236[3];
  Rsh_Fir_array_deopt_stack236[0] = Rsh_Fir_reg_c357_;
  Rsh_Fir_array_deopt_stack236[1] = Rsh_Fir_reg_c371_;
  Rsh_Fir_array_deopt_stack236[2] = Rsh_Fir_reg_to71_;
  Rsh_Fir_deopt(929, 3, Rsh_Fir_array_deopt_stack236, CCP, RHO);
  return R_NilValue;

L797_:;
  // to72 = force? to71
  Rsh_Fir_reg_to72_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to71_);
  // checkMissing(to72)
  SEXP Rsh_Fir_array_args727[1];
  Rsh_Fir_array_args727[0] = Rsh_Fir_reg_to72_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args727, Rsh_Fir_param_types_empty()));
  // length_out53 = ld `length.out`
  Rsh_Fir_reg_length_out53_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L798() else D266()
  // L798()
  goto L798_;

D266_:;
  // deopt 930 [c357, c371, to72, length_out53]
  SEXP Rsh_Fir_array_deopt_stack237[4];
  Rsh_Fir_array_deopt_stack237[0] = Rsh_Fir_reg_c357_;
  Rsh_Fir_array_deopt_stack237[1] = Rsh_Fir_reg_c371_;
  Rsh_Fir_array_deopt_stack237[2] = Rsh_Fir_reg_to72_;
  Rsh_Fir_array_deopt_stack237[3] = Rsh_Fir_reg_length_out53_;
  Rsh_Fir_deopt(930, 4, Rsh_Fir_array_deopt_stack237, CCP, RHO);
  return R_NilValue;

L798_:;
  // length_out54 = force? length_out53
  Rsh_Fir_reg_length_out54_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out53_);
  // checkMissing(length_out54)
  SEXP Rsh_Fir_array_args728[1];
  Rsh_Fir_array_args728[0] = Rsh_Fir_reg_length_out54_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args728, Rsh_Fir_param_types_empty()));
  // r439 = `-`(length_out54, 1.0)
  SEXP Rsh_Fir_array_args729[2];
  Rsh_Fir_array_args729[0] = Rsh_Fir_reg_length_out54_;
  Rsh_Fir_array_args729[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r439_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args729, Rsh_Fir_param_types_empty());
  // by45 = ld by
  Rsh_Fir_reg_by45_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L799() else D267()
  // L799()
  goto L799_;

D267_:;
  // deopt 933 [c357, c371, to72, r439, by45]
  SEXP Rsh_Fir_array_deopt_stack238[5];
  Rsh_Fir_array_deopt_stack238[0] = Rsh_Fir_reg_c357_;
  Rsh_Fir_array_deopt_stack238[1] = Rsh_Fir_reg_c371_;
  Rsh_Fir_array_deopt_stack238[2] = Rsh_Fir_reg_to72_;
  Rsh_Fir_array_deopt_stack238[3] = Rsh_Fir_reg_r439_;
  Rsh_Fir_array_deopt_stack238[4] = Rsh_Fir_reg_by45_;
  Rsh_Fir_deopt(933, 5, Rsh_Fir_array_deopt_stack238, CCP, RHO);
  return R_NilValue;

L799_:;
  // by46 = force? by45
  Rsh_Fir_reg_by46_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by45_);
  // checkMissing(by46)
  SEXP Rsh_Fir_array_args730[1];
  Rsh_Fir_array_args730[0] = Rsh_Fir_reg_by46_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args730, Rsh_Fir_param_types_empty()));
  // r440 = `*`(r439, by46)
  SEXP Rsh_Fir_array_args731[2];
  Rsh_Fir_array_args731[0] = Rsh_Fir_reg_r439_;
  Rsh_Fir_array_args731[1] = Rsh_Fir_reg_by46_;
  Rsh_Fir_reg_r440_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args731, Rsh_Fir_param_types_empty());
  // r441 = `-`(to72, r440)
  SEXP Rsh_Fir_array_args732[2];
  Rsh_Fir_array_args732[0] = Rsh_Fir_reg_to72_;
  Rsh_Fir_array_args732[1] = Rsh_Fir_reg_r440_;
  Rsh_Fir_reg_r441_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args732, Rsh_Fir_param_types_empty());
  // st from = r441
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r441_, RHO);
  (void)(Rsh_Fir_reg_r441_);
  // _Machine24 = ld `.Machine`
  Rsh_Fir_reg__Machine24_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L800() else D268()
  // L800()
  goto L800_;

D268_:;
  // deopt 937 [c357, c371, r441, _Machine24]
  SEXP Rsh_Fir_array_deopt_stack239[4];
  Rsh_Fir_array_deopt_stack239[0] = Rsh_Fir_reg_c357_;
  Rsh_Fir_array_deopt_stack239[1] = Rsh_Fir_reg_c371_;
  Rsh_Fir_array_deopt_stack239[2] = Rsh_Fir_reg_r441_;
  Rsh_Fir_array_deopt_stack239[3] = Rsh_Fir_reg__Machine24_;
  Rsh_Fir_deopt(937, 4, Rsh_Fir_array_deopt_stack239, CCP, RHO);
  return R_NilValue;

L800_:;
  // _Machine25 = force? _Machine24
  Rsh_Fir_reg__Machine25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Machine24_);
  // checkMissing(_Machine25)
  SEXP Rsh_Fir_array_args733[1];
  Rsh_Fir_array_args733[0] = Rsh_Fir_reg__Machine25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args733, Rsh_Fir_param_types_empty()));
  // c376 = `is.object`(_Machine25)
  SEXP Rsh_Fir_array_args734[1];
  Rsh_Fir_array_args734[0] = Rsh_Fir_reg__Machine25_;
  Rsh_Fir_reg_c376_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args734, Rsh_Fir_param_types_empty());
  // if c376 then L802() else L803(c357, c371, r441, _Machine25)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c376_)) {
  // L802()
    goto L802_;
  } else {
  // L803(c357, c371, r441, _Machine25)
    Rsh_Fir_reg_c379_ = Rsh_Fir_reg_c357_;
    Rsh_Fir_reg_c380_ = Rsh_Fir_reg_c371_;
    Rsh_Fir_reg_r443_ = Rsh_Fir_reg_r441_;
    Rsh_Fir_reg__Machine27_ = Rsh_Fir_reg__Machine25_;
    goto L803_;
  }

L801_:;
  // r447 = `-`(<missing>, dx18)
  SEXP Rsh_Fir_array_args735[2];
  Rsh_Fir_array_args735[0] = Rsh_const(CCP, 87);
  Rsh_Fir_array_args735[1] = Rsh_Fir_reg_dx18_;
  Rsh_Fir_reg_r447_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args735, Rsh_Fir_param_types_empty());
  // r448 = `>=`(r445, r447)
  SEXP Rsh_Fir_array_args736[2];
  Rsh_Fir_array_args736[0] = Rsh_Fir_reg_r445_;
  Rsh_Fir_array_args736[1] = Rsh_Fir_reg_r447_;
  Rsh_Fir_reg_r448_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args736, Rsh_Fir_param_types_empty());
  // c385 = `as.logical`(r448)
  SEXP Rsh_Fir_array_args737[1];
  Rsh_Fir_array_args737[0] = Rsh_Fir_reg_r448_;
  Rsh_Fir_reg_c385_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args737, Rsh_Fir_param_types_empty());
  // if c385 then L805() else L189(c383, c384, c385)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c385_)) {
  // L805()
    goto L805_;
  } else {
  // L189(c383, c384, c385)
    Rsh_Fir_reg_c389_ = Rsh_Fir_reg_c383_;
    Rsh_Fir_reg_c390_ = Rsh_Fir_reg_c384_;
    Rsh_Fir_reg_c391_ = Rsh_Fir_reg_c385_;
    goto L189_;
  }

L802_:;
  // dr16 = tryDispatchBuiltin.1("$", _Machine25)
  SEXP Rsh_Fir_array_args738[2];
  Rsh_Fir_array_args738[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args738[1] = Rsh_Fir_reg__Machine25_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args738);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args739[1];
  Rsh_Fir_array_args739[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args739, Rsh_Fir_param_types_empty());
  // if dc8 then L804() else L803(c357, c371, r441, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L804()
    goto L804_;
  } else {
  // L803(c357, c371, r441, dr16)
    Rsh_Fir_reg_c379_ = Rsh_Fir_reg_c357_;
    Rsh_Fir_reg_c380_ = Rsh_Fir_reg_c371_;
    Rsh_Fir_reg_r443_ = Rsh_Fir_reg_r441_;
    Rsh_Fir_reg__Machine27_ = Rsh_Fir_reg_dr16_;
    goto L803_;
  }

L803_:;
  // r446 = `$`(_Machine27, <sym integer.max>)
  SEXP Rsh_Fir_array_args740[2];
  Rsh_Fir_array_args740[0] = Rsh_Fir_reg__Machine27_;
  Rsh_Fir_array_args740[1] = Rsh_const(CCP, 71);
  Rsh_Fir_reg_r446_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args740, Rsh_Fir_param_types_empty());
  // goto L801(c379, c380, r443, r446)
  // L801(c379, c380, r443, r446)
  Rsh_Fir_reg_c383_ = Rsh_Fir_reg_c379_;
  Rsh_Fir_reg_c384_ = Rsh_Fir_reg_c380_;
  Rsh_Fir_reg_r445_ = Rsh_Fir_reg_r443_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_r446_;
  goto L801_;

L804_:;
  // dx17 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args741[1];
  Rsh_Fir_array_args741[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args741, Rsh_Fir_param_types_empty());
  // goto L801(c357, c371, r441, dx17)
  // L801(c357, c371, r441, dx17)
  Rsh_Fir_reg_c383_ = Rsh_Fir_reg_c357_;
  Rsh_Fir_reg_c384_ = Rsh_Fir_reg_c371_;
  Rsh_Fir_reg_r445_ = Rsh_Fir_reg_r441_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx17_;
  goto L801_;

L805_:;
  // from97 = ld from
  Rsh_Fir_reg_from97_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L806() else D269()
  // L806()
  goto L806_;

D269_:;
  // deopt 942 [c383, c384, c385, from97]
  SEXP Rsh_Fir_array_deopt_stack240[4];
  Rsh_Fir_array_deopt_stack240[0] = Rsh_Fir_reg_c383_;
  Rsh_Fir_array_deopt_stack240[1] = Rsh_Fir_reg_c384_;
  Rsh_Fir_array_deopt_stack240[2] = Rsh_Fir_reg_c385_;
  Rsh_Fir_array_deopt_stack240[3] = Rsh_Fir_reg_from97_;
  Rsh_Fir_deopt(942, 4, Rsh_Fir_array_deopt_stack240, CCP, RHO);
  return R_NilValue;

L806_:;
  // from98 = force? from97
  Rsh_Fir_reg_from98_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from97_);
  // checkMissing(from98)
  SEXP Rsh_Fir_array_args742[1];
  Rsh_Fir_array_args742[0] = Rsh_Fir_reg_from98_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args742, Rsh_Fir_param_types_empty()));
  // _Machine28 = ld `.Machine`
  Rsh_Fir_reg__Machine28_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L807() else D270()
  // L807()
  goto L807_;

D270_:;
  // deopt 943 [c383, c384, c385, from98, _Machine28]
  SEXP Rsh_Fir_array_deopt_stack241[5];
  Rsh_Fir_array_deopt_stack241[0] = Rsh_Fir_reg_c383_;
  Rsh_Fir_array_deopt_stack241[1] = Rsh_Fir_reg_c384_;
  Rsh_Fir_array_deopt_stack241[2] = Rsh_Fir_reg_c385_;
  Rsh_Fir_array_deopt_stack241[3] = Rsh_Fir_reg_from98_;
  Rsh_Fir_array_deopt_stack241[4] = Rsh_Fir_reg__Machine28_;
  Rsh_Fir_deopt(943, 5, Rsh_Fir_array_deopt_stack241, CCP, RHO);
  return R_NilValue;

L807_:;
  // _Machine29 = force? _Machine28
  Rsh_Fir_reg__Machine29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Machine28_);
  // checkMissing(_Machine29)
  SEXP Rsh_Fir_array_args743[1];
  Rsh_Fir_array_args743[0] = Rsh_Fir_reg__Machine29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args743, Rsh_Fir_param_types_empty()));
  // c392 = `is.object`(_Machine29)
  SEXP Rsh_Fir_array_args744[1];
  Rsh_Fir_array_args744[0] = Rsh_Fir_reg__Machine29_;
  Rsh_Fir_reg_c392_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args744, Rsh_Fir_param_types_empty());
  // if c392 then L809() else L810(c383, c384, c385, from98, _Machine29)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c392_)) {
  // L809()
    goto L809_;
  } else {
  // L810(c383, c384, c385, from98, _Machine29)
    Rsh_Fir_reg_c396_ = Rsh_Fir_reg_c383_;
    Rsh_Fir_reg_c397_ = Rsh_Fir_reg_c384_;
    Rsh_Fir_reg_c398_ = Rsh_Fir_reg_c385_;
    Rsh_Fir_reg_from100_ = Rsh_Fir_reg_from98_;
    Rsh_Fir_reg__Machine31_ = Rsh_Fir_reg__Machine29_;
    goto L810_;
  }

L808_:;
  // r450 = `<=`(from102, dx20)
  SEXP Rsh_Fir_array_args745[2];
  Rsh_Fir_array_args745[0] = Rsh_Fir_reg_from102_;
  Rsh_Fir_array_args745[1] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_reg_r450_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args745, Rsh_Fir_param_types_empty());
  // c405 = `as.logical`(r450)
  SEXP Rsh_Fir_array_args746[1];
  Rsh_Fir_array_args746[0] = Rsh_Fir_reg_r450_;
  Rsh_Fir_reg_c405_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args746, Rsh_Fir_param_types_empty());
  // c406 = `&&`(c404, c405)
  SEXP Rsh_Fir_array_args747[2];
  Rsh_Fir_array_args747[0] = Rsh_Fir_reg_c404_;
  Rsh_Fir_array_args747[1] = Rsh_Fir_reg_c405_;
  Rsh_Fir_reg_c406_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args747, Rsh_Fir_param_types_empty());
  // goto L189(c402, c403, c406)
  // L189(c402, c403, c406)
  Rsh_Fir_reg_c389_ = Rsh_Fir_reg_c402_;
  Rsh_Fir_reg_c390_ = Rsh_Fir_reg_c403_;
  Rsh_Fir_reg_c391_ = Rsh_Fir_reg_c406_;
  goto L189_;

L809_:;
  // dr18 = tryDispatchBuiltin.1("$", _Machine29)
  SEXP Rsh_Fir_array_args748[2];
  Rsh_Fir_array_args748[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args748[1] = Rsh_Fir_reg__Machine29_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args748);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args749[1];
  Rsh_Fir_array_args749[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args749, Rsh_Fir_param_types_empty());
  // if dc9 then L811() else L810(c383, c384, c385, from98, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L811()
    goto L811_;
  } else {
  // L810(c383, c384, c385, from98, dr18)
    Rsh_Fir_reg_c396_ = Rsh_Fir_reg_c383_;
    Rsh_Fir_reg_c397_ = Rsh_Fir_reg_c384_;
    Rsh_Fir_reg_c398_ = Rsh_Fir_reg_c385_;
    Rsh_Fir_reg_from100_ = Rsh_Fir_reg_from98_;
    Rsh_Fir_reg__Machine31_ = Rsh_Fir_reg_dr18_;
    goto L810_;
  }

L810_:;
  // r449 = `$`(_Machine31, <sym integer.max>)
  SEXP Rsh_Fir_array_args750[2];
  Rsh_Fir_array_args750[0] = Rsh_Fir_reg__Machine31_;
  Rsh_Fir_array_args750[1] = Rsh_const(CCP, 71);
  Rsh_Fir_reg_r449_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args750, Rsh_Fir_param_types_empty());
  // goto L808(c396, c397, c398, from100, r449)
  // L808(c396, c397, c398, from100, r449)
  Rsh_Fir_reg_c402_ = Rsh_Fir_reg_c396_;
  Rsh_Fir_reg_c403_ = Rsh_Fir_reg_c397_;
  Rsh_Fir_reg_c404_ = Rsh_Fir_reg_c398_;
  Rsh_Fir_reg_from102_ = Rsh_Fir_reg_from100_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_r449_;
  goto L808_;

L811_:;
  // dx19 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args751[1];
  Rsh_Fir_array_args751[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args751, Rsh_Fir_param_types_empty());
  // goto L808(c383, c384, c385, from98, dx19)
  // L808(c383, c384, c385, from98, dx19)
  Rsh_Fir_reg_c402_ = Rsh_Fir_reg_c383_;
  Rsh_Fir_reg_c403_ = Rsh_Fir_reg_c384_;
  Rsh_Fir_reg_c404_ = Rsh_Fir_reg_c385_;
  Rsh_Fir_reg_from102_ = Rsh_Fir_reg_from98_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx19_;
  goto L808_;

D271_:;
  // deopt 951 [int10]
  SEXP Rsh_Fir_array_deopt_stack242[1];
  Rsh_Fir_array_deopt_stack242[0] = Rsh_Fir_reg_int10_;
  Rsh_Fir_deopt(951, 1, Rsh_Fir_array_deopt_stack242, CCP, RHO);
  return R_NilValue;

L815_:;
  // int11 = force? int10
  Rsh_Fir_reg_int11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_int10_);
  // checkMissing(int11)
  SEXP Rsh_Fir_array_args752[1];
  Rsh_Fir_array_args752[0] = Rsh_Fir_reg_int11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args752, Rsh_Fir_param_types_empty()));
  // c417 = `as.logical`(int11)
  SEXP Rsh_Fir_array_args753[1];
  Rsh_Fir_array_args753[0] = Rsh_Fir_reg_int11_;
  Rsh_Fir_reg_c417_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args753, Rsh_Fir_param_types_empty());
  // if c417 then L816() else L190(c417)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c417_)) {
  // L816()
    goto L816_;
  } else {
  // L190(c417)
    Rsh_Fir_reg_c419_ = Rsh_Fir_reg_c417_;
    goto L190_;
  }

L816_:;
  // length_out55 = ld `length.out`
  Rsh_Fir_reg_length_out55_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L817() else D272()
  // L817()
  goto L817_;

D272_:;
  // deopt 953 [c417, length_out55]
  SEXP Rsh_Fir_array_deopt_stack243[2];
  Rsh_Fir_array_deopt_stack243[0] = Rsh_Fir_reg_c417_;
  Rsh_Fir_array_deopt_stack243[1] = Rsh_Fir_reg_length_out55_;
  Rsh_Fir_deopt(953, 2, Rsh_Fir_array_deopt_stack243, CCP, RHO);
  return R_NilValue;

L817_:;
  // length_out56 = force? length_out55
  Rsh_Fir_reg_length_out56_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out55_);
  // checkMissing(length_out56)
  SEXP Rsh_Fir_array_args754[1];
  Rsh_Fir_array_args754[0] = Rsh_Fir_reg_length_out56_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args754, Rsh_Fir_param_types_empty()));
  // r451 = `>`(length_out56, 2)
  SEXP Rsh_Fir_array_args755[2];
  Rsh_Fir_array_args755[0] = Rsh_Fir_reg_length_out56_;
  Rsh_Fir_array_args755[1] = Rsh_const(CCP, 77);
  Rsh_Fir_reg_r451_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args755, Rsh_Fir_param_types_empty());
  // c420 = `as.logical`(r451)
  SEXP Rsh_Fir_array_args756[1];
  Rsh_Fir_array_args756[0] = Rsh_Fir_reg_r451_;
  Rsh_Fir_reg_c420_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args756, Rsh_Fir_param_types_empty());
  // c421 = `&&`(c417, c420)
  SEXP Rsh_Fir_array_args757[2];
  Rsh_Fir_array_args757[0] = Rsh_Fir_reg_c417_;
  Rsh_Fir_array_args757[1] = Rsh_Fir_reg_c420_;
  Rsh_Fir_reg_c421_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args757, Rsh_Fir_param_types_empty());
  // goto L190(c421)
  // L190(c421)
  Rsh_Fir_reg_c419_ = Rsh_Fir_reg_c421_;
  goto L190_;

L819_:;
  // nby2 = ld nby
  Rsh_Fir_reg_nby2_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L820() else D273()
  // L820()
  goto L820_;

D273_:;
  // deopt 958 [c423, nby2]
  SEXP Rsh_Fir_array_deopt_stack244[2];
  Rsh_Fir_array_deopt_stack244[0] = Rsh_Fir_reg_c423_;
  Rsh_Fir_array_deopt_stack244[1] = Rsh_Fir_reg_nby2_;
  Rsh_Fir_deopt(958, 2, Rsh_Fir_array_deopt_stack244, CCP, RHO);
  return R_NilValue;

L820_:;
  // nby3 = force? nby2
  Rsh_Fir_reg_nby3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nby2_);
  // checkMissing(nby3)
  SEXP Rsh_Fir_array_args758[1];
  Rsh_Fir_array_args758[0] = Rsh_Fir_reg_nby3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args758, Rsh_Fir_param_types_empty()));
  // r452 = `==`(nby3, 1)
  SEXP Rsh_Fir_array_args759[2];
  Rsh_Fir_array_args759[0] = Rsh_Fir_reg_nby3_;
  Rsh_Fir_array_args759[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r452_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args759, Rsh_Fir_param_types_empty());
  // c426 = `as.logical`(r452)
  SEXP Rsh_Fir_array_args760[1];
  Rsh_Fir_array_args760[0] = Rsh_Fir_reg_r452_;
  Rsh_Fir_reg_c426_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args760, Rsh_Fir_param_types_empty());
  // c427 = `&&`(c423, c426)
  SEXP Rsh_Fir_array_args761[2];
  Rsh_Fir_array_args761[0] = Rsh_Fir_reg_c423_;
  Rsh_Fir_array_args761[1] = Rsh_Fir_reg_c426_;
  Rsh_Fir_reg_c427_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args761, Rsh_Fir_param_types_empty());
  // goto L191(c427)
  // L191(c427)
  Rsh_Fir_reg_c425_ = Rsh_Fir_reg_c427_;
  goto L191_;

L822_:;
  // naby2 = ld naby
  Rsh_Fir_reg_naby2_ = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // check L823() else D274()
  // L823()
  goto L823_;

D274_:;
  // deopt 963 [c429, naby2]
  SEXP Rsh_Fir_array_deopt_stack245[2];
  Rsh_Fir_array_deopt_stack245[0] = Rsh_Fir_reg_c429_;
  Rsh_Fir_array_deopt_stack245[1] = Rsh_Fir_reg_naby2_;
  Rsh_Fir_deopt(963, 2, Rsh_Fir_array_deopt_stack245, CCP, RHO);
  return R_NilValue;

L823_:;
  // naby3 = force? naby2
  Rsh_Fir_reg_naby3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_naby2_);
  // checkMissing(naby3)
  SEXP Rsh_Fir_array_args762[1];
  Rsh_Fir_array_args762[0] = Rsh_Fir_reg_naby3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args762, Rsh_Fir_param_types_empty()));
  // r453 = `!`(naby3)
  SEXP Rsh_Fir_array_args763[1];
  Rsh_Fir_array_args763[0] = Rsh_Fir_reg_naby3_;
  Rsh_Fir_reg_r453_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args763, Rsh_Fir_param_types_empty());
  // c432 = `as.logical`(r453)
  SEXP Rsh_Fir_array_args764[1];
  Rsh_Fir_array_args764[0] = Rsh_Fir_reg_r453_;
  Rsh_Fir_reg_c432_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args764, Rsh_Fir_param_types_empty());
  // c433 = `&&`(c429, c432)
  SEXP Rsh_Fir_array_args765[2];
  Rsh_Fir_array_args765[0] = Rsh_Fir_reg_c429_;
  Rsh_Fir_array_args765[1] = Rsh_Fir_reg_c432_;
  Rsh_Fir_reg_c433_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args765, Rsh_Fir_param_types_empty());
  // goto L192(c433)
  // L192(c433)
  Rsh_Fir_reg_c431_ = Rsh_Fir_reg_c433_;
  goto L192_;

L825_:;
  // sym69 = ldf cumsum
  Rsh_Fir_reg_sym69_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base69 = ldf cumsum in base
  Rsh_Fir_reg_base69_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard69 = `==`.4(sym69, base69)
  SEXP Rsh_Fir_array_args766[2];
  Rsh_Fir_array_args766[0] = Rsh_Fir_reg_sym69_;
  Rsh_Fir_array_args766[1] = Rsh_Fir_reg_base69_;
  Rsh_Fir_reg_guard69_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args766);
  // if guard69 then L826() else L827()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard69_)) {
  // L826()
    goto L826_;
  } else {
  // L827()
    goto L827_;
  }

L826_:;
  // sym70 = ldf `rep.int`
  Rsh_Fir_reg_sym70_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base70 = ldf `rep.int` in base
  Rsh_Fir_reg_base70_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard70 = `==`.4(sym70, base70)
  SEXP Rsh_Fir_array_args767[2];
  Rsh_Fir_array_args767[0] = Rsh_Fir_reg_sym70_;
  Rsh_Fir_array_args767[1] = Rsh_Fir_reg_base70_;
  Rsh_Fir_reg_guard70_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args767);
  // if guard70 then L828() else L829()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard70_)) {
  // L828()
    goto L828_;
  } else {
  // L829()
    goto L829_;
  }

L827_:;
  // r454 = dyn base69(<lang rep.int(c(as.integer(from), by), c(1, `-`(length.out, 1)))>)
  SEXP Rsh_Fir_array_args768[1];
  Rsh_Fir_array_args768[0] = Rsh_const(CCP, 100);
  SEXP Rsh_Fir_array_arg_names168[1];
  Rsh_Fir_array_arg_names168[0] = R_MissingArg;
  Rsh_Fir_reg_r454_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base69_, 1, Rsh_Fir_array_args768, Rsh_Fir_array_arg_names168, CCP, RHO);
  // goto L194(r454)
  // L194(r454)
  Rsh_Fir_reg_r455_ = Rsh_Fir_reg_r454_;
  goto L194_;

L828_:;
  // sym71 = ldf c
  Rsh_Fir_reg_sym71_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base71 = ldf c in base
  Rsh_Fir_reg_base71_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard71 = `==`.4(sym71, base71)
  SEXP Rsh_Fir_array_args769[2];
  Rsh_Fir_array_args769[0] = Rsh_Fir_reg_sym71_;
  Rsh_Fir_array_args769[1] = Rsh_Fir_reg_base71_;
  Rsh_Fir_reg_guard71_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args769);
  // if guard71 then L830() else L831()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard71_)) {
  // L830()
    goto L830_;
  } else {
  // L831()
    goto L831_;
  }

L829_:;
  // r456 = dyn base70(<lang c(as.integer(from), by)>, <lang c(1, `-`(length.out, 1))>)
  SEXP Rsh_Fir_array_args770[2];
  Rsh_Fir_array_args770[0] = Rsh_const(CCP, 101);
  Rsh_Fir_array_args770[1] = Rsh_const(CCP, 97);
  SEXP Rsh_Fir_array_arg_names169[2];
  Rsh_Fir_array_arg_names169[0] = R_MissingArg;
  Rsh_Fir_array_arg_names169[1] = R_MissingArg;
  Rsh_Fir_reg_r456_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base70_, 2, Rsh_Fir_array_args770, Rsh_Fir_array_arg_names169, CCP, RHO);
  // goto L195(r456)
  // L195(r456)
  Rsh_Fir_reg_r457_ = Rsh_Fir_reg_r456_;
  goto L195_;

L830_:;
  // sym72 = ldf `as.integer`
  Rsh_Fir_reg_sym72_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base72 = ldf `as.integer` in base
  Rsh_Fir_reg_base72_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard72 = `==`.4(sym72, base72)
  SEXP Rsh_Fir_array_args771[2];
  Rsh_Fir_array_args771[0] = Rsh_Fir_reg_sym72_;
  Rsh_Fir_array_args771[1] = Rsh_Fir_reg_base72_;
  Rsh_Fir_reg_guard72_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args771);
  // if guard72 then L832() else L833()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard72_)) {
  // L832()
    goto L832_;
  } else {
  // L833()
    goto L833_;
  }

L831_:;
  // r458 = dyn base71(<lang as.integer(from)>, <sym by>)
  SEXP Rsh_Fir_array_args772[2];
  Rsh_Fir_array_args772[0] = Rsh_const(CCP, 102);
  Rsh_Fir_array_args772[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names170[2];
  Rsh_Fir_array_arg_names170[0] = R_MissingArg;
  Rsh_Fir_array_arg_names170[1] = R_MissingArg;
  Rsh_Fir_reg_r458_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base71_, 2, Rsh_Fir_array_args772, Rsh_Fir_array_arg_names170, CCP, RHO);
  // goto L196(r458)
  // L196(r458)
  Rsh_Fir_reg_r459_ = Rsh_Fir_reg_r458_;
  goto L196_;

L832_:;
  // from103 = ld from
  Rsh_Fir_reg_from103_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L834() else D275()
  // L834()
  goto L834_;

L833_:;
  // r460 = dyn base72(<sym from>)
  SEXP Rsh_Fir_array_args773[1];
  Rsh_Fir_array_args773[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names171[1];
  Rsh_Fir_array_arg_names171[0] = R_MissingArg;
  Rsh_Fir_reg_r460_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base72_, 1, Rsh_Fir_array_args773, Rsh_Fir_array_arg_names171, CCP, RHO);
  // goto L197(r460)
  // L197(r460)
  Rsh_Fir_reg_r461_ = Rsh_Fir_reg_r460_;
  goto L197_;

D275_:;
  // deopt 975 [from103]
  SEXP Rsh_Fir_array_deopt_stack246[1];
  Rsh_Fir_array_deopt_stack246[0] = Rsh_Fir_reg_from103_;
  Rsh_Fir_deopt(975, 1, Rsh_Fir_array_deopt_stack246, CCP, RHO);
  return R_NilValue;

L834_:;
  // from104 = force? from103
  Rsh_Fir_reg_from104_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from103_);
  // checkMissing(from104)
  SEXP Rsh_Fir_array_args774[1];
  Rsh_Fir_array_args774[0] = Rsh_Fir_reg_from104_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args774, Rsh_Fir_param_types_empty()));
  // as_integer2 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r462 = dyn as_integer2(from104)
  SEXP Rsh_Fir_array_args775[1];
  Rsh_Fir_array_args775[0] = Rsh_Fir_reg_from104_;
  SEXP Rsh_Fir_array_arg_names172[1];
  Rsh_Fir_array_arg_names172[0] = R_MissingArg;
  Rsh_Fir_reg_r462_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer2_, 1, Rsh_Fir_array_args775, Rsh_Fir_array_arg_names172, CCP, RHO);
  // check L835() else D276()
  // L835()
  goto L835_;

D276_:;
  // deopt 978 [r462]
  SEXP Rsh_Fir_array_deopt_stack247[1];
  Rsh_Fir_array_deopt_stack247[0] = Rsh_Fir_reg_r462_;
  Rsh_Fir_deopt(978, 1, Rsh_Fir_array_deopt_stack247, CCP, RHO);
  return R_NilValue;

L835_:;
  // goto L197(r462)
  // L197(r462)
  Rsh_Fir_reg_r461_ = Rsh_Fir_reg_r462_;
  goto L197_;

D277_:;
  // deopt 979 [by47]
  SEXP Rsh_Fir_array_deopt_stack248[1];
  Rsh_Fir_array_deopt_stack248[0] = Rsh_Fir_reg_by47_;
  Rsh_Fir_deopt(979, 1, Rsh_Fir_array_deopt_stack248, CCP, RHO);
  return R_NilValue;

L836_:;
  // by48 = force? by47
  Rsh_Fir_reg_by48_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by47_);
  // checkMissing(by48)
  SEXP Rsh_Fir_array_args776[1];
  Rsh_Fir_array_args776[0] = Rsh_Fir_reg_by48_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args776, Rsh_Fir_param_types_empty()));
  // c436 = ldf c in base
  Rsh_Fir_reg_c436_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r463 = dyn c436(r461, by48)
  SEXP Rsh_Fir_array_args777[2];
  Rsh_Fir_array_args777[0] = Rsh_Fir_reg_r461_;
  Rsh_Fir_array_args777[1] = Rsh_Fir_reg_by48_;
  SEXP Rsh_Fir_array_arg_names173[2];
  Rsh_Fir_array_arg_names173[0] = R_MissingArg;
  Rsh_Fir_array_arg_names173[1] = R_MissingArg;
  Rsh_Fir_reg_r463_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c436_, 2, Rsh_Fir_array_args777, Rsh_Fir_array_arg_names173, CCP, RHO);
  // check L837() else D278()
  // L837()
  goto L837_;

D278_:;
  // deopt 982 [r463]
  SEXP Rsh_Fir_array_deopt_stack249[1];
  Rsh_Fir_array_deopt_stack249[0] = Rsh_Fir_reg_r463_;
  Rsh_Fir_deopt(982, 1, Rsh_Fir_array_deopt_stack249, CCP, RHO);
  return R_NilValue;

L837_:;
  // goto L196(r463)
  // L196(r463)
  Rsh_Fir_reg_r459_ = Rsh_Fir_reg_r463_;
  goto L196_;

L838_:;
  // length_out57 = ld `length.out`
  Rsh_Fir_reg_length_out57_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L840() else D279()
  // L840()
  goto L840_;

L839_:;
  // r464 = dyn base73(1, <lang `-`(length.out, 1)>)
  SEXP Rsh_Fir_array_args778[2];
  Rsh_Fir_array_args778[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args778[1] = Rsh_const(CCP, 98);
  SEXP Rsh_Fir_array_arg_names174[2];
  Rsh_Fir_array_arg_names174[0] = R_MissingArg;
  Rsh_Fir_array_arg_names174[1] = R_MissingArg;
  Rsh_Fir_reg_r464_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base73_, 2, Rsh_Fir_array_args778, Rsh_Fir_array_arg_names174, CCP, RHO);
  // goto L198(r464)
  // L198(r464)
  Rsh_Fir_reg_r465_ = Rsh_Fir_reg_r464_;
  goto L198_;

D279_:;
  // deopt 986 [length_out57]
  SEXP Rsh_Fir_array_deopt_stack250[1];
  Rsh_Fir_array_deopt_stack250[0] = Rsh_Fir_reg_length_out57_;
  Rsh_Fir_deopt(986, 1, Rsh_Fir_array_deopt_stack250, CCP, RHO);
  return R_NilValue;

L840_:;
  // length_out58 = force? length_out57
  Rsh_Fir_reg_length_out58_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out57_);
  // checkMissing(length_out58)
  SEXP Rsh_Fir_array_args779[1];
  Rsh_Fir_array_args779[0] = Rsh_Fir_reg_length_out58_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args779, Rsh_Fir_param_types_empty()));
  // r466 = `-`(length_out58, 1)
  SEXP Rsh_Fir_array_args780[2];
  Rsh_Fir_array_args780[0] = Rsh_Fir_reg_length_out58_;
  Rsh_Fir_array_args780[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r466_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args780, Rsh_Fir_param_types_empty());
  // c437 = ldf c in base
  Rsh_Fir_reg_c437_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r467 = dyn c437(1, r466)
  SEXP Rsh_Fir_array_args781[2];
  Rsh_Fir_array_args781[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args781[1] = Rsh_Fir_reg_r466_;
  SEXP Rsh_Fir_array_arg_names175[2];
  Rsh_Fir_array_arg_names175[0] = R_MissingArg;
  Rsh_Fir_array_arg_names175[1] = R_MissingArg;
  Rsh_Fir_reg_r467_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c437_, 2, Rsh_Fir_array_args781, Rsh_Fir_array_arg_names175, CCP, RHO);
  // check L841() else D280()
  // L841()
  goto L841_;

D280_:;
  // deopt 991 [r467]
  SEXP Rsh_Fir_array_deopt_stack251[1];
  Rsh_Fir_array_deopt_stack251[0] = Rsh_Fir_reg_r467_;
  Rsh_Fir_deopt(991, 1, Rsh_Fir_array_deopt_stack251, CCP, RHO);
  return R_NilValue;

L841_:;
  // goto L198(r467)
  // L198(r467)
  Rsh_Fir_reg_r465_ = Rsh_Fir_reg_r467_;
  goto L198_;

D281_:;
  // deopt 993 [r468]
  SEXP Rsh_Fir_array_deopt_stack252[1];
  Rsh_Fir_array_deopt_stack252[0] = Rsh_Fir_reg_r468_;
  Rsh_Fir_deopt(993, 1, Rsh_Fir_array_deopt_stack252, CCP, RHO);
  return R_NilValue;

L842_:;
  // goto L195(r468)
  // L195(r468)
  Rsh_Fir_reg_r457_ = Rsh_Fir_reg_r468_;
  goto L195_;

D282_:;
  // deopt 995 [r469]
  SEXP Rsh_Fir_array_deopt_stack253[1];
  Rsh_Fir_array_deopt_stack253[0] = Rsh_Fir_reg_r469_;
  Rsh_Fir_deopt(995, 1, Rsh_Fir_array_deopt_stack253, CCP, RHO);
  return R_NilValue;

L843_:;
  // goto L194(r469)
  // L194(r469)
  Rsh_Fir_reg_r455_ = Rsh_Fir_reg_r469_;
  goto L194_;

D283_:;
  // deopt 996 [intby2]
  SEXP Rsh_Fir_array_deopt_stack254[1];
  Rsh_Fir_array_deopt_stack254[0] = Rsh_Fir_reg_intby2_;
  Rsh_Fir_deopt(996, 1, Rsh_Fir_array_deopt_stack254, CCP, RHO);
  return R_NilValue;

L845_:;
  // intby3 = force? intby2
  Rsh_Fir_reg_intby3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_intby2_);
  // checkMissing(intby3)
  SEXP Rsh_Fir_array_args782[1];
  Rsh_Fir_array_args782[0] = Rsh_Fir_reg_intby3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args782, Rsh_Fir_param_types_empty()));
  // c438 = `as.logical`(intby3)
  SEXP Rsh_Fir_array_args783[1];
  Rsh_Fir_array_args783[0] = Rsh_Fir_reg_intby3_;
  Rsh_Fir_reg_c438_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args783, Rsh_Fir_param_types_empty());
  // if c438 then L846() else L199(c438)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c438_)) {
  // L846()
    goto L846_;
  } else {
  // L199(c438)
    Rsh_Fir_reg_c440_ = Rsh_Fir_reg_c438_;
    goto L199_;
  }

L846_:;
  // int12 = ld int
  Rsh_Fir_reg_int12_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L847() else D284()
  // L847()
  goto L847_;

D284_:;
  // deopt 998 [c438, int12]
  SEXP Rsh_Fir_array_deopt_stack255[2];
  Rsh_Fir_array_deopt_stack255[0] = Rsh_Fir_reg_c438_;
  Rsh_Fir_array_deopt_stack255[1] = Rsh_Fir_reg_int12_;
  Rsh_Fir_deopt(998, 2, Rsh_Fir_array_deopt_stack255, CCP, RHO);
  return R_NilValue;

L847_:;
  // int13 = force? int12
  Rsh_Fir_reg_int13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_int12_);
  // checkMissing(int13)
  SEXP Rsh_Fir_array_args784[1];
  Rsh_Fir_array_args784[0] = Rsh_Fir_reg_int13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args784, Rsh_Fir_param_types_empty()));
  // c441 = `as.logical`(int13)
  SEXP Rsh_Fir_array_args785[1];
  Rsh_Fir_array_args785[0] = Rsh_Fir_reg_int13_;
  Rsh_Fir_reg_c441_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args785, Rsh_Fir_param_types_empty());
  // if c441 then L200(c438, c441) else L848()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c441_)) {
  // L200(c438, c441)
    Rsh_Fir_reg_c442_ = Rsh_Fir_reg_c438_;
    Rsh_Fir_reg_c443_ = Rsh_Fir_reg_c441_;
    goto L200_;
  } else {
  // L848()
    goto L848_;
  }

L848_:;
  // sym74 = ldf `is.object`
  Rsh_Fir_reg_sym74_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 99), RHO);
  // base74 = ldf `is.object` in base
  Rsh_Fir_reg_base74_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 99), RHO);
  // guard74 = `==`.4(sym74, base74)
  SEXP Rsh_Fir_array_args786[2];
  Rsh_Fir_array_args786[0] = Rsh_Fir_reg_sym74_;
  Rsh_Fir_array_args786[1] = Rsh_Fir_reg_base74_;
  Rsh_Fir_reg_guard74_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args786);
  // if guard74 then L849() else L850()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard74_)) {
  // L849()
    goto L849_;
  } else {
  // L850()
    goto L850_;
  }

L849_:;
  // to73 = ld to
  Rsh_Fir_reg_to73_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L851() else D285()
  // L851()
  goto L851_;

L850_:;
  // r470 = dyn base74(<sym to>)
  SEXP Rsh_Fir_array_args787[1];
  Rsh_Fir_array_args787[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names176[1];
  Rsh_Fir_array_arg_names176[0] = R_MissingArg;
  Rsh_Fir_reg_r470_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base74_, 1, Rsh_Fir_array_args787, Rsh_Fir_array_arg_names176, CCP, RHO);
  // goto L201(c438, c441, r470)
  // L201(c438, c441, r470)
  Rsh_Fir_reg_c450_ = Rsh_Fir_reg_c438_;
  Rsh_Fir_reg_c451_ = Rsh_Fir_reg_c441_;
  Rsh_Fir_reg_r471_ = Rsh_Fir_reg_r470_;
  goto L201_;

D285_:;
  // deopt 1001 [c438, c441, to73]
  SEXP Rsh_Fir_array_deopt_stack256[3];
  Rsh_Fir_array_deopt_stack256[0] = Rsh_Fir_reg_c438_;
  Rsh_Fir_array_deopt_stack256[1] = Rsh_Fir_reg_c441_;
  Rsh_Fir_array_deopt_stack256[2] = Rsh_Fir_reg_to73_;
  Rsh_Fir_deopt(1001, 3, Rsh_Fir_array_deopt_stack256, CCP, RHO);
  return R_NilValue;

L851_:;
  // to74 = force? to73
  Rsh_Fir_reg_to74_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to73_);
  // checkMissing(to74)
  SEXP Rsh_Fir_array_args788[1];
  Rsh_Fir_array_args788[0] = Rsh_Fir_reg_to74_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args788, Rsh_Fir_param_types_empty()));
  // c452 = `is.object`(to74)
  SEXP Rsh_Fir_array_args789[1];
  Rsh_Fir_array_args789[0] = Rsh_Fir_reg_to74_;
  Rsh_Fir_reg_c452_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args789, Rsh_Fir_param_types_empty());
  // goto L201(c438, c441, c452)
  // L201(c438, c441, c452)
  Rsh_Fir_reg_c450_ = Rsh_Fir_reg_c438_;
  Rsh_Fir_reg_c451_ = Rsh_Fir_reg_c441_;
  Rsh_Fir_reg_r471_ = Rsh_Fir_reg_c452_;
  goto L201_;

L854_:;
  // l5 = ld by
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // storage_mode__5 = ldf `storage.mode<-`
  Rsh_Fir_reg_storage_mode__5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 64), RHO);
  // check L855() else D286()
  // L855()
  goto L855_;

D286_:;
  // deopt 1010 ["double", l5, "double"]
  SEXP Rsh_Fir_array_deopt_stack257[3];
  Rsh_Fir_array_deopt_stack257[0] = Rsh_const(CCP, 65);
  Rsh_Fir_array_deopt_stack257[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack257[2] = Rsh_const(CCP, 65);
  Rsh_Fir_deopt(1010, 3, Rsh_Fir_array_deopt_stack257, CCP, RHO);
  return R_NilValue;

L855_:;
  // r473 = dyn storage_mode__5(l5, NULL, "double")
  SEXP Rsh_Fir_array_args790[3];
  Rsh_Fir_array_args790[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args790[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args790[2] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names177[3];
  Rsh_Fir_array_arg_names177[0] = R_MissingArg;
  Rsh_Fir_array_arg_names177[1] = R_MissingArg;
  Rsh_Fir_array_arg_names177[2] = R_MissingArg;
  Rsh_Fir_reg_r473_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode__5_, 3, Rsh_Fir_array_args790, Rsh_Fir_array_arg_names177, CCP, RHO);
  // check L856() else D287()
  // L856()
  goto L856_;

D287_:;
  // deopt 1012 ["double", r473]
  SEXP Rsh_Fir_array_deopt_stack258[2];
  Rsh_Fir_array_deopt_stack258[0] = Rsh_const(CCP, 65);
  Rsh_Fir_array_deopt_stack258[1] = Rsh_Fir_reg_r473_;
  Rsh_Fir_deopt(1012, 2, Rsh_Fir_array_deopt_stack258, CCP, RHO);
  return R_NilValue;

L856_:;
  // st by = r473
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r473_, RHO);
  (void)(Rsh_Fir_reg_r473_);
  // goto L203()
  // L203()
  goto L203_;

D288_:;
  // deopt 1016 [to75]
  SEXP Rsh_Fir_array_deopt_stack259[1];
  Rsh_Fir_array_deopt_stack259[0] = Rsh_Fir_reg_to75_;
  Rsh_Fir_deopt(1016, 1, Rsh_Fir_array_deopt_stack259, CCP, RHO);
  return R_NilValue;

L858_:;
  // to76 = force? to75
  Rsh_Fir_reg_to76_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to75_);
  // checkMissing(to76)
  SEXP Rsh_Fir_array_args791[1];
  Rsh_Fir_array_args791[0] = Rsh_Fir_reg_to76_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args791, Rsh_Fir_param_types_empty()));
  // length_out59 = ld `length.out`
  Rsh_Fir_reg_length_out59_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L859() else D289()
  // L859()
  goto L859_;

D289_:;
  // deopt 1017 [to76, length_out59]
  SEXP Rsh_Fir_array_deopt_stack260[2];
  Rsh_Fir_array_deopt_stack260[0] = Rsh_Fir_reg_to76_;
  Rsh_Fir_array_deopt_stack260[1] = Rsh_Fir_reg_length_out59_;
  Rsh_Fir_deopt(1017, 2, Rsh_Fir_array_deopt_stack260, CCP, RHO);
  return R_NilValue;

L859_:;
  // length_out60 = force? length_out59
  Rsh_Fir_reg_length_out60_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out59_);
  // checkMissing(length_out60)
  SEXP Rsh_Fir_array_args792[1];
  Rsh_Fir_array_args792[0] = Rsh_Fir_reg_length_out60_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args792, Rsh_Fir_param_types_empty()));
  // r475 = `-`(length_out60, 1)
  SEXP Rsh_Fir_array_args793[2];
  Rsh_Fir_array_args793[0] = Rsh_Fir_reg_length_out60_;
  Rsh_Fir_array_args793[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r475_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args793, Rsh_Fir_param_types_empty());
  // r476 = `:`(r475, 0)
  SEXP Rsh_Fir_array_args794[2];
  Rsh_Fir_array_args794[0] = Rsh_Fir_reg_r475_;
  Rsh_Fir_array_args794[1] = Rsh_const(CCP, 68);
  Rsh_Fir_reg_r476_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args794, Rsh_Fir_param_types_empty());
  // by49 = ld by
  Rsh_Fir_reg_by49_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L860() else D290()
  // L860()
  goto L860_;

D290_:;
  // deopt 1022 [to76, r476, by49]
  SEXP Rsh_Fir_array_deopt_stack261[3];
  Rsh_Fir_array_deopt_stack261[0] = Rsh_Fir_reg_to76_;
  Rsh_Fir_array_deopt_stack261[1] = Rsh_Fir_reg_r476_;
  Rsh_Fir_array_deopt_stack261[2] = Rsh_Fir_reg_by49_;
  Rsh_Fir_deopt(1022, 3, Rsh_Fir_array_deopt_stack261, CCP, RHO);
  return R_NilValue;

L860_:;
  // by50 = force? by49
  Rsh_Fir_reg_by50_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by49_);
  // checkMissing(by50)
  SEXP Rsh_Fir_array_args795[1];
  Rsh_Fir_array_args795[0] = Rsh_Fir_reg_by50_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args795, Rsh_Fir_param_types_empty()));
  // r477 = `*`(r476, by50)
  SEXP Rsh_Fir_array_args796[2];
  Rsh_Fir_array_args796[0] = Rsh_Fir_reg_r476_;
  Rsh_Fir_array_args796[1] = Rsh_Fir_reg_by50_;
  Rsh_Fir_reg_r477_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args796, Rsh_Fir_param_types_empty());
  // r478 = `-`(to76, r477)
  SEXP Rsh_Fir_array_args797[2];
  Rsh_Fir_array_args797[0] = Rsh_Fir_reg_to76_;
  Rsh_Fir_array_args797[1] = Rsh_Fir_reg_r477_;
  Rsh_Fir_reg_r478_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args797, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r478
  return Rsh_Fir_reg_r478_;

D291_:;
  // deopt 1027 []
  Rsh_Fir_deopt(1027, 0, NULL, CCP, RHO);
  return R_NilValue;

L862_:;
  // r479 = dyn stop11("too many arguments")
  SEXP Rsh_Fir_array_args798[1];
  Rsh_Fir_array_args798[0] = Rsh_const(CCP, 103);
  SEXP Rsh_Fir_array_arg_names178[1];
  Rsh_Fir_array_arg_names178[0] = R_MissingArg;
  Rsh_Fir_reg_r479_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop11_, 1, Rsh_Fir_array_args798, Rsh_Fir_array_arg_names178, CCP, RHO);
  // check L863() else D292()
  // L863()
  goto L863_;

D292_:;
  // deopt 1029 [r479]
  SEXP Rsh_Fir_array_deopt_stack262[1];
  Rsh_Fir_array_deopt_stack262[0] = Rsh_Fir_reg_r479_;
  Rsh_Fir_deopt(1029, 1, Rsh_Fir_array_deopt_stack262, CCP, RHO);
  return R_NilValue;

L863_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r479
  return Rsh_Fir_reg_r479_;
}
SEXP Rsh_Fir_user_promise_inner3182225035_(SEXP CCP, SEXP RHO) {
  // to1 = ld to
  Rsh_Fir_reg_to1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // to2 = force? to1
  Rsh_Fir_reg_to2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to1_);
  // checkMissing(to2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_to2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // from1 = ld from
  Rsh_Fir_reg_from1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // from2 = force? from1
  Rsh_Fir_reg_from2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from1_);
  // checkMissing(from2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_from2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // r = `-`(to2, from2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_to2_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_from2_;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // length_out1 = ld `length.out`
  Rsh_Fir_reg_length_out1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // length_out2 = force? length_out1
  Rsh_Fir_reg_length_out2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out1_);
  // checkMissing(length_out2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_length_out2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // r1 = `-`(length_out2, 1.0)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_length_out2_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // r2 = `/`(r, r1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // visible.0()
  (void)(Rsh_Fir_intrinsic_visible_v0(CCP, RHO, 0, NULL));
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_inner3182225035_1(SEXP CCP, SEXP RHO) {
  // from5 = ld from
  Rsh_Fir_reg_from5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // from6 = force? from5
  Rsh_Fir_reg_from6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from5_);
  // checkMissing(from6)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_from6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // return from6
  return Rsh_Fir_reg_from6_;
}
SEXP Rsh_Fir_user_promise_inner3182225035_2(SEXP CCP, SEXP RHO) {
  // length_out15 = ld `length.out`
  Rsh_Fir_reg_length_out15_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // length_out16 = force? length_out15
  Rsh_Fir_reg_length_out16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out15_);
  // checkMissing(length_out16)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_length_out16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty()));
  // return length_out16
  return Rsh_Fir_reg_length_out16_;
}
SEXP Rsh_Fir_user_promise_inner3182225035_3(SEXP CCP, SEXP RHO) {
  // from21 = ld from
  Rsh_Fir_reg_from21_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // from22 = force? from21
  Rsh_Fir_reg_from22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from21_);
  // checkMissing(from22)
  SEXP Rsh_Fir_array_args277[1];
  Rsh_Fir_array_args277[0] = Rsh_Fir_reg_from22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args277, Rsh_Fir_param_types_empty()));
  // return from22
  return Rsh_Fir_reg_from22_;
}
SEXP Rsh_Fir_user_promise_inner3182225035_4(SEXP CCP, SEXP RHO) {
  // to13 = ld to
  Rsh_Fir_reg_to13_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // to14 = force? to13
  Rsh_Fir_reg_to14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to13_);
  // checkMissing(to14)
  SEXP Rsh_Fir_array_args280[1];
  Rsh_Fir_array_args280[0] = Rsh_Fir_reg_to14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args280, Rsh_Fir_param_types_empty()));
  // return to14
  return Rsh_Fir_reg_to14_;
}
SEXP Rsh_Fir_user_promise_inner3182225035_5(SEXP CCP, SEXP RHO) {
  // by3 = ld by
  Rsh_Fir_reg_by3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // by4 = force? by3
  Rsh_Fir_reg_by4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by3_);
  // checkMissing(by4)
  SEXP Rsh_Fir_array_args304[1];
  Rsh_Fir_array_args304[0] = Rsh_Fir_reg_by4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args304, Rsh_Fir_param_types_empty()));
  // return by4
  return Rsh_Fir_reg_by4_;
}
SEXP Rsh_Fir_user_promise_inner3182225035_6(SEXP CCP, SEXP RHO) {
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args432[1];
  Rsh_Fir_array_args432[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args432, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_inner3182225035_7(SEXP CCP, SEXP RHO) {
  // to31 = ld to
  Rsh_Fir_reg_to31_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // to32 = force? to31
  Rsh_Fir_reg_to32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to31_);
  // checkMissing(to32)
  SEXP Rsh_Fir_array_args433[1];
  Rsh_Fir_array_args433[0] = Rsh_Fir_reg_to32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args433, Rsh_Fir_param_types_empty()));
  // return to32
  return Rsh_Fir_reg_to32_;
}
SEXP Rsh_Fir_user_promise_inner3182225035_8(SEXP CCP, SEXP RHO) {
  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args435[1];
  Rsh_Fir_array_args435[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args435, Rsh_Fir_param_types_empty()));
  // return x3
  return Rsh_Fir_reg_x3_;
}
SEXP Rsh_Fir_user_promise_inner3182225035_9(SEXP CCP, SEXP RHO) {
  // to33 = ld to
  Rsh_Fir_reg_to33_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // to34 = force? to33
  Rsh_Fir_reg_to34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to33_);
  // checkMissing(to34)
  SEXP Rsh_Fir_array_args436[1];
  Rsh_Fir_array_args436[0] = Rsh_Fir_reg_to34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args436, Rsh_Fir_param_types_empty()));
  // return to34
  return Rsh_Fir_reg_to34_;
}
SEXP Rsh_Fir_user_promise_inner3182225035_10(SEXP CCP, SEXP RHO) {
  // from45 = ld from
  Rsh_Fir_reg_from45_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // from46 = force? from45
  Rsh_Fir_reg_from46_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from45_);
  // checkMissing(from46)
  SEXP Rsh_Fir_array_args466[1];
  Rsh_Fir_array_args466[0] = Rsh_Fir_reg_from46_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args466, Rsh_Fir_param_types_empty()));
  // return from46
  return Rsh_Fir_reg_from46_;
}
SEXP Rsh_Fir_user_promise_inner3182225035_11(SEXP CCP, SEXP RHO) {
  // to41 = ld to
  Rsh_Fir_reg_to41_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // to42 = force? to41
  Rsh_Fir_reg_to42_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to41_);
  // checkMissing(to42)
  SEXP Rsh_Fir_array_args483[1];
  Rsh_Fir_array_args483[0] = Rsh_Fir_reg_to42_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args483, Rsh_Fir_param_types_empty()));
  // return to42
  return Rsh_Fir_reg_to42_;
}
SEXP Rsh_Fir_user_promise_inner3182225035_12(SEXP CCP, SEXP RHO) {
  // from53 = ld from
  Rsh_Fir_reg_from53_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // from54 = force? from53
  Rsh_Fir_reg_from54_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from53_);
  // checkMissing(from54)
  SEXP Rsh_Fir_array_args511[1];
  Rsh_Fir_array_args511[0] = Rsh_Fir_reg_from54_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args511, Rsh_Fir_param_types_empty()));
  // return from54
  return Rsh_Fir_reg_from54_;
}
SEXP Rsh_Fir_user_promise_inner3182225035_13(SEXP CCP, SEXP RHO) {
  // sym52 = ldf c
  Rsh_Fir_reg_sym52_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base52 = ldf c in base
  Rsh_Fir_reg_base52_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard52 = `==`.4(sym52, base52)
  SEXP Rsh_Fir_array_args570[2];
  Rsh_Fir_array_args570[0] = Rsh_Fir_reg_sym52_;
  Rsh_Fir_array_args570[1] = Rsh_Fir_reg_base52_;
  Rsh_Fir_reg_guard52_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args570);
  // if guard52 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard52_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r333
  return Rsh_Fir_reg_r333_;

L1_:;
  // del12 = ld del
  Rsh_Fir_reg_del12_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // del13 = force? del12
  Rsh_Fir_reg_del13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_del12_);
  // checkMissing(del13)
  SEXP Rsh_Fir_array_args571[1];
  Rsh_Fir_array_args571[0] = Rsh_Fir_reg_del13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args571, Rsh_Fir_param_types_empty()));
  // n34 = ld n1
  Rsh_Fir_reg_n34_ = Rsh_Fir_load(Rsh_const(CCP, 88), RHO);
  // n35 = force? n34
  Rsh_Fir_reg_n35_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n34_);
  // checkMissing(n35)
  SEXP Rsh_Fir_array_args572[1];
  Rsh_Fir_array_args572[0] = Rsh_Fir_reg_n35_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args572, Rsh_Fir_param_types_empty()));
  // r338 = `/`(del13, n35)
  SEXP Rsh_Fir_array_args573[2];
  Rsh_Fir_array_args573[0] = Rsh_Fir_reg_del13_;
  Rsh_Fir_array_args573[1] = Rsh_Fir_reg_n35_;
  Rsh_Fir_reg_r338_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args573, Rsh_Fir_param_types_empty());
  // r339 = `*`(r335, r338)
  SEXP Rsh_Fir_array_args574[2];
  Rsh_Fir_array_args574[0] = Rsh_Fir_reg_r335_;
  Rsh_Fir_array_args574[1] = Rsh_Fir_reg_r338_;
  Rsh_Fir_reg_r339_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args574, Rsh_Fir_param_types_empty());
  // r340 = `+`(from73, r339)
  SEXP Rsh_Fir_array_args575[2];
  Rsh_Fir_array_args575[0] = Rsh_Fir_reg_from73_;
  Rsh_Fir_array_args575[1] = Rsh_Fir_reg_r339_;
  Rsh_Fir_reg_r340_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args575, Rsh_Fir_param_types_empty());
  // to53 = ld to
  Rsh_Fir_reg_to53_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // to54 = force? to53
  Rsh_Fir_reg_to54_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to53_);
  // checkMissing(to54)
  SEXP Rsh_Fir_array_args576[1];
  Rsh_Fir_array_args576[0] = Rsh_Fir_reg_to54_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args576, Rsh_Fir_param_types_empty()));
  // c221 = ldf c in base
  Rsh_Fir_reg_c221_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r341 = dyn c221(from68, r340, to54)
  SEXP Rsh_Fir_array_args577[3];
  Rsh_Fir_array_args577[0] = Rsh_Fir_reg_from68_;
  Rsh_Fir_array_args577[1] = Rsh_Fir_reg_r340_;
  Rsh_Fir_array_args577[2] = Rsh_Fir_reg_to54_;
  SEXP Rsh_Fir_array_arg_names132[3];
  Rsh_Fir_array_arg_names132[0] = R_MissingArg;
  Rsh_Fir_array_arg_names132[1] = R_MissingArg;
  Rsh_Fir_array_arg_names132[2] = R_MissingArg;
  Rsh_Fir_reg_r341_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c221_, 3, Rsh_Fir_array_args577, Rsh_Fir_array_arg_names132, CCP, RHO);
  // goto L0(r341)
  // L0(r341)
  Rsh_Fir_reg_r333_ = Rsh_Fir_reg_r341_;
  goto L0_;

L2_:;
  // from67 = ld from
  Rsh_Fir_reg_from67_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // from68 = force? from67
  Rsh_Fir_reg_from68_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from67_);
  // checkMissing(from68)
  SEXP Rsh_Fir_array_args578[1];
  Rsh_Fir_array_args578[0] = Rsh_Fir_reg_from68_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args578, Rsh_Fir_param_types_empty()));
  // from69 = ld from
  Rsh_Fir_reg_from69_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // from70 = force? from69
  Rsh_Fir_reg_from70_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from69_);
  // checkMissing(from70)
  SEXP Rsh_Fir_array_args579[1];
  Rsh_Fir_array_args579[0] = Rsh_Fir_reg_from70_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args579, Rsh_Fir_param_types_empty()));
  // sym53 = ldf seq_len
  Rsh_Fir_reg_sym53_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base53 = ldf seq_len in base
  Rsh_Fir_reg_base53_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard53 = `==`.4(sym53, base53)
  SEXP Rsh_Fir_array_args580[2];
  Rsh_Fir_array_args580[0] = Rsh_Fir_reg_sym53_;
  Rsh_Fir_array_args580[1] = Rsh_Fir_reg_base53_;
  Rsh_Fir_reg_guard53_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args580);
  // if guard53 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard53_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r332 = dyn base52(<sym from>, <lang `+`(from, `*`(seq_len(`-`(length.out, 2)), `(`(`/`(del, n1))))>, <sym to>)
  SEXP Rsh_Fir_array_args581[3];
  Rsh_Fir_array_args581[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args581[1] = Rsh_const(CCP, 93);
  Rsh_Fir_array_args581[2] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names133[3];
  Rsh_Fir_array_arg_names133[0] = R_MissingArg;
  Rsh_Fir_array_arg_names133[1] = R_MissingArg;
  Rsh_Fir_array_arg_names133[2] = R_MissingArg;
  Rsh_Fir_reg_r332_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base52_, 3, Rsh_Fir_array_args581, Rsh_Fir_array_arg_names133, CCP, RHO);
  // goto L0(r332)
  // L0(r332)
  Rsh_Fir_reg_r333_ = Rsh_Fir_reg_r332_;
  goto L0_;

L4_:;
  // length_out39 = ld `length.out`
  Rsh_Fir_reg_length_out39_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // length_out40 = force? length_out39
  Rsh_Fir_reg_length_out40_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out39_);
  // checkMissing(length_out40)
  SEXP Rsh_Fir_array_args582[1];
  Rsh_Fir_array_args582[0] = Rsh_Fir_reg_length_out40_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args582, Rsh_Fir_param_types_empty()));
  // r336 = `-`(length_out40, 2)
  SEXP Rsh_Fir_array_args583[2];
  Rsh_Fir_array_args583[0] = Rsh_Fir_reg_length_out40_;
  Rsh_Fir_array_args583[1] = Rsh_const(CCP, 77);
  Rsh_Fir_reg_r336_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args583, Rsh_Fir_param_types_empty());
  // r337 = seq_len(r336)
  SEXP Rsh_Fir_array_args584[1];
  Rsh_Fir_array_args584[0] = Rsh_Fir_reg_r336_;
  Rsh_Fir_reg_r337_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args584, Rsh_Fir_param_types_empty());
  // goto L1(from70, r337)
  // L1(from70, r337)
  Rsh_Fir_reg_from73_ = Rsh_Fir_reg_from70_;
  Rsh_Fir_reg_r335_ = Rsh_Fir_reg_r337_;
  goto L1_;

L5_:;
  // r334 = dyn base53(<lang `-`(length.out, 2)>)
  SEXP Rsh_Fir_array_args585[1];
  Rsh_Fir_array_args585[0] = Rsh_const(CCP, 94);
  SEXP Rsh_Fir_array_arg_names134[1];
  Rsh_Fir_array_arg_names134[0] = R_MissingArg;
  Rsh_Fir_reg_r334_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base53_, 1, Rsh_Fir_array_args585, Rsh_Fir_array_arg_names134, CCP, RHO);
  // goto L1(from70, r334)
  // L1(from70, r334)
  Rsh_Fir_reg_from73_ = Rsh_Fir_reg_from70_;
  Rsh_Fir_reg_r335_ = Rsh_Fir_reg_r334_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3182225035_14(SEXP CCP, SEXP RHO) {
  // sym54 = ldf c
  Rsh_Fir_reg_sym54_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base54 = ldf c in base
  Rsh_Fir_reg_base54_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard54 = `==`.4(sym54, base54)
  SEXP Rsh_Fir_array_args591[2];
  Rsh_Fir_array_args591[0] = Rsh_Fir_reg_sym54_;
  Rsh_Fir_array_args591[1] = Rsh_Fir_reg_base54_;
  Rsh_Fir_reg_guard54_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args591);
  // if guard54 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard54_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r347
  return Rsh_Fir_reg_r347_;

L1_:;
  // to57 = ld to
  Rsh_Fir_reg_to57_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // to58 = force? to57
  Rsh_Fir_reg_to58_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to57_);
  // checkMissing(to58)
  SEXP Rsh_Fir_array_args592[1];
  Rsh_Fir_array_args592[0] = Rsh_Fir_reg_to58_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args592, Rsh_Fir_param_types_empty()));
  // from83 = ld from
  Rsh_Fir_reg_from83_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // from84 = force? from83
  Rsh_Fir_reg_from84_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from83_);
  // checkMissing(from84)
  SEXP Rsh_Fir_array_args593[1];
  Rsh_Fir_array_args593[0] = Rsh_Fir_reg_from84_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args593, Rsh_Fir_param_types_empty()));
  // r352 = `-`(to58, from84)
  SEXP Rsh_Fir_array_args594[2];
  Rsh_Fir_array_args594[0] = Rsh_Fir_reg_to58_;
  Rsh_Fir_array_args594[1] = Rsh_Fir_reg_from84_;
  Rsh_Fir_reg_r352_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args594, Rsh_Fir_param_types_empty());
  // n36 = ld n1
  Rsh_Fir_reg_n36_ = Rsh_Fir_load(Rsh_const(CCP, 88), RHO);
  // n37 = force? n36
  Rsh_Fir_reg_n37_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n36_);
  // checkMissing(n37)
  SEXP Rsh_Fir_array_args595[1];
  Rsh_Fir_array_args595[0] = Rsh_Fir_reg_n37_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args595, Rsh_Fir_param_types_empty()));
  // r353 = `/`(r352, n37)
  SEXP Rsh_Fir_array_args596[2];
  Rsh_Fir_array_args596[0] = Rsh_Fir_reg_r352_;
  Rsh_Fir_array_args596[1] = Rsh_Fir_reg_n37_;
  Rsh_Fir_reg_r353_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args596, Rsh_Fir_param_types_empty());
  // r354 = `*`(r349, r353)
  SEXP Rsh_Fir_array_args597[2];
  Rsh_Fir_array_args597[0] = Rsh_Fir_reg_r349_;
  Rsh_Fir_array_args597[1] = Rsh_Fir_reg_r353_;
  Rsh_Fir_reg_r354_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args597, Rsh_Fir_param_types_empty());
  // r355 = `+`(from82, r354)
  SEXP Rsh_Fir_array_args598[2];
  Rsh_Fir_array_args598[0] = Rsh_Fir_reg_from82_;
  Rsh_Fir_array_args598[1] = Rsh_Fir_reg_r354_;
  Rsh_Fir_reg_r355_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args598, Rsh_Fir_param_types_empty());
  // to59 = ld to
  Rsh_Fir_reg_to59_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // to60 = force? to59
  Rsh_Fir_reg_to60_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to59_);
  // checkMissing(to60)
  SEXP Rsh_Fir_array_args599[1];
  Rsh_Fir_array_args599[0] = Rsh_Fir_reg_to60_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args599, Rsh_Fir_param_types_empty()));
  // c222 = ldf c in base
  Rsh_Fir_reg_c222_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r356 = dyn c222(from77, r355, to60)
  SEXP Rsh_Fir_array_args600[3];
  Rsh_Fir_array_args600[0] = Rsh_Fir_reg_from77_;
  Rsh_Fir_array_args600[1] = Rsh_Fir_reg_r355_;
  Rsh_Fir_array_args600[2] = Rsh_Fir_reg_to60_;
  SEXP Rsh_Fir_array_arg_names136[3];
  Rsh_Fir_array_arg_names136[0] = R_MissingArg;
  Rsh_Fir_array_arg_names136[1] = R_MissingArg;
  Rsh_Fir_array_arg_names136[2] = R_MissingArg;
  Rsh_Fir_reg_r356_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c222_, 3, Rsh_Fir_array_args600, Rsh_Fir_array_arg_names136, CCP, RHO);
  // goto L0(r356)
  // L0(r356)
  Rsh_Fir_reg_r347_ = Rsh_Fir_reg_r356_;
  goto L0_;

L2_:;
  // from76 = ld from
  Rsh_Fir_reg_from76_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // from77 = force? from76
  Rsh_Fir_reg_from77_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from76_);
  // checkMissing(from77)
  SEXP Rsh_Fir_array_args601[1];
  Rsh_Fir_array_args601[0] = Rsh_Fir_reg_from77_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args601, Rsh_Fir_param_types_empty()));
  // from78 = ld from
  Rsh_Fir_reg_from78_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // from79 = force? from78
  Rsh_Fir_reg_from79_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from78_);
  // checkMissing(from79)
  SEXP Rsh_Fir_array_args602[1];
  Rsh_Fir_array_args602[0] = Rsh_Fir_reg_from79_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args602, Rsh_Fir_param_types_empty()));
  // sym55 = ldf seq_len
  Rsh_Fir_reg_sym55_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base55 = ldf seq_len in base
  Rsh_Fir_reg_base55_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard55 = `==`.4(sym55, base55)
  SEXP Rsh_Fir_array_args603[2];
  Rsh_Fir_array_args603[0] = Rsh_Fir_reg_sym55_;
  Rsh_Fir_array_args603[1] = Rsh_Fir_reg_base55_;
  Rsh_Fir_reg_guard55_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args603);
  // if guard55 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard55_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r346 = dyn base54(<sym from>, <lang `+`(from, `*`(seq_len(`-`(length.out, 2)), `(`(`/`(`(`(`-`(to, from)), n1))))>, <sym to>)
  SEXP Rsh_Fir_array_args604[3];
  Rsh_Fir_array_args604[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args604[1] = Rsh_const(CCP, 95);
  Rsh_Fir_array_args604[2] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names137[3];
  Rsh_Fir_array_arg_names137[0] = R_MissingArg;
  Rsh_Fir_array_arg_names137[1] = R_MissingArg;
  Rsh_Fir_array_arg_names137[2] = R_MissingArg;
  Rsh_Fir_reg_r346_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base54_, 3, Rsh_Fir_array_args604, Rsh_Fir_array_arg_names137, CCP, RHO);
  // goto L0(r346)
  // L0(r346)
  Rsh_Fir_reg_r347_ = Rsh_Fir_reg_r346_;
  goto L0_;

L4_:;
  // length_out41 = ld `length.out`
  Rsh_Fir_reg_length_out41_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // length_out42 = force? length_out41
  Rsh_Fir_reg_length_out42_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out41_);
  // checkMissing(length_out42)
  SEXP Rsh_Fir_array_args605[1];
  Rsh_Fir_array_args605[0] = Rsh_Fir_reg_length_out42_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args605, Rsh_Fir_param_types_empty()));
  // r350 = `-`(length_out42, 2)
  SEXP Rsh_Fir_array_args606[2];
  Rsh_Fir_array_args606[0] = Rsh_Fir_reg_length_out42_;
  Rsh_Fir_array_args606[1] = Rsh_const(CCP, 77);
  Rsh_Fir_reg_r350_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args606, Rsh_Fir_param_types_empty());
  // r351 = seq_len(r350)
  SEXP Rsh_Fir_array_args607[1];
  Rsh_Fir_array_args607[0] = Rsh_Fir_reg_r350_;
  Rsh_Fir_reg_r351_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args607, Rsh_Fir_param_types_empty());
  // goto L1(from79, r351)
  // L1(from79, r351)
  Rsh_Fir_reg_from82_ = Rsh_Fir_reg_from79_;
  Rsh_Fir_reg_r349_ = Rsh_Fir_reg_r351_;
  goto L1_;

L5_:;
  // r348 = dyn base55(<lang `-`(length.out, 2)>)
  SEXP Rsh_Fir_array_args608[1];
  Rsh_Fir_array_args608[0] = Rsh_const(CCP, 94);
  SEXP Rsh_Fir_array_arg_names138[1];
  Rsh_Fir_array_arg_names138[0] = R_MissingArg;
  Rsh_Fir_reg_r348_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base55_, 1, Rsh_Fir_array_args608, Rsh_Fir_array_arg_names138, CCP, RHO);
  // goto L1(from79, r348)
  // L1(from79, r348)
  Rsh_Fir_reg_from82_ = Rsh_Fir_reg_from79_;
  Rsh_Fir_reg_r349_ = Rsh_Fir_reg_r348_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3182225035_15(SEXP CCP, SEXP RHO) {
  // sym56 = ldf c
  Rsh_Fir_reg_sym56_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base56 = ldf c in base
  Rsh_Fir_reg_base56_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard56 = `==`.4(sym56, base56)
  SEXP Rsh_Fir_array_args611[2];
  Rsh_Fir_array_args611[0] = Rsh_Fir_reg_sym56_;
  Rsh_Fir_array_args611[1] = Rsh_Fir_reg_base56_;
  Rsh_Fir_reg_guard56_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args611);
  // if guard56 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard56_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r361
  return Rsh_Fir_reg_r361_;

L1_:;
  // from85 = ld from
  Rsh_Fir_reg_from85_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // from86 = force? from85
  Rsh_Fir_reg_from86_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from85_);
  // checkMissing(from86)
  SEXP Rsh_Fir_array_args612[1];
  Rsh_Fir_array_args612[0] = Rsh_Fir_reg_from86_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args612, Rsh_Fir_param_types_empty()));
  // to61 = ld to
  Rsh_Fir_reg_to61_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // to62 = force? to61
  Rsh_Fir_reg_to62_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to61_);
  // checkMissing(to62)
  SEXP Rsh_Fir_array_args613[1];
  Rsh_Fir_array_args613[0] = Rsh_Fir_reg_to62_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args613, Rsh_Fir_param_types_empty()));
  // c223 = ldf c in base
  Rsh_Fir_reg_c223_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r362 = dyn c223(from86, to62)
  SEXP Rsh_Fir_array_args614[2];
  Rsh_Fir_array_args614[0] = Rsh_Fir_reg_from86_;
  Rsh_Fir_array_args614[1] = Rsh_Fir_reg_to62_;
  SEXP Rsh_Fir_array_arg_names140[2];
  Rsh_Fir_array_arg_names140[0] = R_MissingArg;
  Rsh_Fir_array_arg_names140[1] = R_MissingArg;
  Rsh_Fir_reg_r362_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c223_, 2, Rsh_Fir_array_args614, Rsh_Fir_array_arg_names140, CCP, RHO);
  // goto L0(r362)
  // L0(r362)
  Rsh_Fir_reg_r361_ = Rsh_Fir_reg_r362_;
  goto L0_;

L2_:;
  // r360 = dyn base56(<sym from>, <sym to>)
  SEXP Rsh_Fir_array_args615[2];
  Rsh_Fir_array_args615[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args615[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names141[2];
  Rsh_Fir_array_arg_names141[0] = R_MissingArg;
  Rsh_Fir_array_arg_names141[1] = R_MissingArg;
  Rsh_Fir_reg_r360_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base56_, 2, Rsh_Fir_array_args615, Rsh_Fir_array_arg_names141, CCP, RHO);
  // goto L0(r360)
  // L0(r360)
  Rsh_Fir_reg_r361_ = Rsh_Fir_reg_r360_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3182225035_16(SEXP CCP, SEXP RHO) {
  // by27 = ld by
  Rsh_Fir_reg_by27_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // by28 = force? by27
  Rsh_Fir_reg_by28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by27_);
  // checkMissing(by28)
  SEXP Rsh_Fir_array_args627[1];
  Rsh_Fir_array_args627[0] = Rsh_Fir_reg_by28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args627, Rsh_Fir_param_types_empty()));
  // return by28
  return Rsh_Fir_reg_by28_;
}
SEXP Rsh_Fir_user_promise_inner3182225035_17(SEXP CCP, SEXP RHO) {
  // from87 = ld from
  Rsh_Fir_reg_from87_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // from88 = force? from87
  Rsh_Fir_reg_from88_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from87_);
  // checkMissing(from88)
  SEXP Rsh_Fir_array_args630[1];
  Rsh_Fir_array_args630[0] = Rsh_Fir_reg_from88_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args630, Rsh_Fir_param_types_empty()));
  // return from88
  return Rsh_Fir_reg_from88_;
}
SEXP Rsh_Fir_user_promise_inner3182225035_18(SEXP CCP, SEXP RHO) {
  // by39 = ld by
  Rsh_Fir_reg_by39_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // by40 = force? by39
  Rsh_Fir_reg_by40_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_by39_);
  // checkMissing(by40)
  SEXP Rsh_Fir_array_args712[1];
  Rsh_Fir_array_args712[0] = Rsh_Fir_reg_by40_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args712, Rsh_Fir_param_types_empty()));
  // return by40
  return Rsh_Fir_reg_by40_;
}
SEXP Rsh_Fir_user_promise_inner3182225035_19(SEXP CCP, SEXP RHO) {
  // to69 = ld to
  Rsh_Fir_reg_to69_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // to70 = force? to69
  Rsh_Fir_reg_to70_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to69_);
  // checkMissing(to70)
  SEXP Rsh_Fir_array_args715[1];
  Rsh_Fir_array_args715[0] = Rsh_Fir_reg_to70_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args715, Rsh_Fir_param_types_empty()));
  // return to70
  return Rsh_Fir_reg_to70_;
}
SEXP Rsh_Fir_user_function_inner2680913962_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2680913962 dynamic dispatch ([`.`])

  return Rsh_Fir_user_version_inner2680913962_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2680913962_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2680913962 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2680913962/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg___1;  // __
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg___1_1;  // __1
  SEXP Rsh_Fir_reg___2_1;  // __2
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_1;  // c2
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_c6_1;  // c6
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg___3_1;  // __3
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_c7_1;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c9_1;  // c9
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c13_1;  // c13
  SEXP Rsh_Fir_reg_sym2_1;  // sym2
  SEXP Rsh_Fir_reg_base2_1;  // base2
  SEXP Rsh_Fir_reg_guard2_1;  // guard2
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_c16_1;  // c16
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_c17_1;  // c17
  SEXP Rsh_Fir_reg_r6_1;  // r6
  SEXP Rsh_Fir_reg_c18_1;  // c18
  SEXP Rsh_Fir_reg_c19_1;  // c19

  // Bind parameters
  Rsh_Fir_reg___1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `.` = __
  Rsh_Fir_store(Rsh_const(CCP, 104), Rsh_Fir_reg___1, RHO);
  (void)(Rsh_Fir_reg___1);
  // sym = ldf `is.integer`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base = ldf `is.integer` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args799[2];
  Rsh_Fir_array_args799[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args799[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args799);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L0_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args800[1];
  Rsh_Fir_array_args800[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args800, Rsh_Fir_param_types_empty());
  // if c1 then L1(c1) else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1(c1)
    Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c1_;
    goto L1_;
  } else {
  // L8()
    goto L8_;
  }

L1_:;
  // c11 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args801[1];
  Rsh_Fir_array_args801[0] = Rsh_Fir_reg_c2_1;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args801, Rsh_Fir_param_types_empty());
  // if c11 then L13() else L3(c11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L13()
    goto L13_;
  } else {
  // L3(c11)
    Rsh_Fir_reg_c13_1 = Rsh_Fir_reg_c11_;
    goto L3_;
  }

L2_:;
  // c8 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args802[1];
  Rsh_Fir_array_args802[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args802, Rsh_Fir_param_types_empty());
  // c9 = `||`(c6, c8)
  SEXP Rsh_Fir_array_args803[2];
  Rsh_Fir_array_args803[0] = Rsh_Fir_reg_c6_1;
  Rsh_Fir_array_args803[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c9_1 = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args803, Rsh_Fir_param_types_empty());
  // goto L1(c9)
  // L1(c9)
  Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c9_1;
  goto L1_;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return c13
  return Rsh_Fir_reg_c13_1;

L4_:;
  // r6 = `!`(r5)
  SEXP Rsh_Fir_array_args804[1];
  Rsh_Fir_array_args804[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args804, Rsh_Fir_param_types_empty());
  // c18 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args805[1];
  Rsh_Fir_array_args805[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_reg_c18_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args805, Rsh_Fir_param_types_empty());
  // c19 = `&&`(c16, c18)
  SEXP Rsh_Fir_array_args806[2];
  Rsh_Fir_array_args806[0] = Rsh_Fir_reg_c16_1;
  Rsh_Fir_array_args806[1] = Rsh_Fir_reg_c18_1;
  Rsh_Fir_reg_c19_1 = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args806, Rsh_Fir_param_types_empty());
  // goto L3(c19)
  // L3(c19)
  Rsh_Fir_reg_c13_1 = Rsh_Fir_reg_c19_1;
  goto L3_;

L5_:;
  // __1 = ld `.`
  Rsh_Fir_reg___1_1 = Rsh_Fir_load(Rsh_const(CCP, 104), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L6_:;
  // r = dyn base(<sym .>)
  SEXP Rsh_Fir_array_args807[1];
  Rsh_Fir_array_args807[0] = Rsh_const(CCP, 104);
  SEXP Rsh_Fir_array_arg_names179[1];
  Rsh_Fir_array_arg_names179[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args807, Rsh_Fir_array_arg_names179, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2;
  goto L0_;

D0_:;
  // deopt 1 [__1]
  SEXP Rsh_Fir_array_deopt_stack263[1];
  Rsh_Fir_array_deopt_stack263[0] = Rsh_Fir_reg___1_1;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack263, CCP, RHO);
  return R_NilValue;

L7_:;
  // __2 = force? __1
  Rsh_Fir_reg___2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg___1_1);
  // checkMissing(__2)
  SEXP Rsh_Fir_array_args808[1];
  Rsh_Fir_array_args808[0] = Rsh_Fir_reg___2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args808, Rsh_Fir_param_types_empty()));
  // c = `is.integer`(__2)
  SEXP Rsh_Fir_array_args809[1];
  Rsh_Fir_array_args809[0] = Rsh_Fir_reg___2_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(386, CCP, RHO, 1, Rsh_Fir_array_args809, Rsh_Fir_param_types_empty());
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_c1;
  goto L0_;

L8_:;
  // sym1 = ldf `is.logical`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 105), RHO);
  // base1 = ldf `is.logical` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 105), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args810[2];
  Rsh_Fir_array_args810[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args810[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args810);
  // if guard1 then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L9_:;
  // __3 = ld `.`
  Rsh_Fir_reg___3_1 = Rsh_Fir_load(Rsh_const(CCP, 104), RHO);
  // check L11() else D1()
  // L11()
  goto L11_;

L10_:;
  // r2 = dyn base1(<sym .>)
  SEXP Rsh_Fir_array_args811[1];
  Rsh_Fir_array_args811[0] = Rsh_const(CCP, 104);
  SEXP Rsh_Fir_array_arg_names180[1];
  Rsh_Fir_array_arg_names180[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args811, Rsh_Fir_array_arg_names180, CCP, RHO);
  // goto L2(c1, r2)
  // L2(c1, r2)
  Rsh_Fir_reg_c6_1 = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_1;
  goto L2_;

D1_:;
  // deopt 5 [c1, __3]
  SEXP Rsh_Fir_array_deopt_stack264[2];
  Rsh_Fir_array_deopt_stack264[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack264[1] = Rsh_Fir_reg___3_1;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack264, CCP, RHO);
  return R_NilValue;

L11_:;
  // __4 = force? __3
  Rsh_Fir_reg___4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___3_1);
  // checkMissing(__4)
  SEXP Rsh_Fir_array_args812[1];
  Rsh_Fir_array_args812[0] = Rsh_Fir_reg___4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args812, Rsh_Fir_param_types_empty()));
  // c7 = `is.logical`(__4)
  SEXP Rsh_Fir_array_args813[1];
  Rsh_Fir_array_args813[0] = Rsh_Fir_reg___4_;
  Rsh_Fir_reg_c7_1 = Rsh_Fir_call_builtin(385, CCP, RHO, 1, Rsh_Fir_array_args813, Rsh_Fir_param_types_empty());
  // goto L2(c1, c7)
  // L2(c1, c7)
  Rsh_Fir_reg_c6_1 = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_c7_1;
  goto L2_;

L13_:;
  // sym2 = ldf `is.object`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 99), RHO);
  // base2 = ldf `is.object` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 99), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args814[2];
  Rsh_Fir_array_args814[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args814[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args814);
  // if guard2 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L14_:;
  // __5 = ld `.`
  Rsh_Fir_reg___5_ = Rsh_Fir_load(Rsh_const(CCP, 104), RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

L15_:;
  // r4 = dyn base2(<sym .>)
  SEXP Rsh_Fir_array_args815[1];
  Rsh_Fir_array_args815[0] = Rsh_const(CCP, 104);
  SEXP Rsh_Fir_array_arg_names181[1];
  Rsh_Fir_array_arg_names181[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args815, Rsh_Fir_array_arg_names181, CCP, RHO);
  // goto L4(c11, r4)
  // L4(c11, r4)
  Rsh_Fir_reg_c16_1 = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_1;
  goto L4_;

D2_:;
  // deopt 10 [c11, __5]
  SEXP Rsh_Fir_array_deopt_stack265[2];
  Rsh_Fir_array_deopt_stack265[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack265[1] = Rsh_Fir_reg___5_;
  Rsh_Fir_deopt(10, 2, Rsh_Fir_array_deopt_stack265, CCP, RHO);
  return R_NilValue;

L16_:;
  // __6 = force? __5
  Rsh_Fir_reg___6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___5_);
  // checkMissing(__6)
  SEXP Rsh_Fir_array_args816[1];
  Rsh_Fir_array_args816[0] = Rsh_Fir_reg___6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args816, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(__6)
  SEXP Rsh_Fir_array_args817[1];
  Rsh_Fir_array_args817[0] = Rsh_Fir_reg___6_;
  Rsh_Fir_reg_c17_1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args817, Rsh_Fir_param_types_empty());
  // goto L4(c11, c17)
  // L4(c11, c17)
  Rsh_Fir_reg_c16_1 = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_c17_1;
  goto L4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
