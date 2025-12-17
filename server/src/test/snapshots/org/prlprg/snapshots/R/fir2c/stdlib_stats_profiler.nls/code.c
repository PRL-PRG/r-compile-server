#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner468771924_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner468771924_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner468771924_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner468771924_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2827293414_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2827293414_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2827293414_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2827293414_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2827293414_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2827293414_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2827293414_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2827293414_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2827293414_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2827293414_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2827293414_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner1246119658_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1246119658_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1246119658_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_18(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_19(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1246119658_20(SEXP CCP, SEXP RHO);
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
  // r = clos inner468771924
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner468771924_, RHO, CCP);
  // st `profiler.nls` = r
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
SEXP Rsh_Fir_user_function_inner468771924_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner468771924 dynamic dispatch ([fitted, `...`])

  return Rsh_Fir_user_version_inner468771924_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner468771924_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner468771924 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner468771924/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_fitted;  // fitted
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_fitted1_;  // fitted1
  SEXP Rsh_Fir_reg_fitted2_;  // fitted2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_fitted4_;  // fitted4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_fitted5_;  // fitted5
  SEXP Rsh_Fir_reg_fitted6_;  // fitted6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_fitted8_;  // fitted8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_fitted9_;  // fitted9
  SEXP Rsh_Fir_reg_fitted10_;  // fitted10
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_fitted12_;  // fitted12
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_fitted13_;  // fitted13
  SEXP Rsh_Fir_reg_fitted14_;  // fitted14
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_fitted16_;  // fitted16
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_fittedModel;  // fittedModel
  SEXP Rsh_Fir_reg_fittedModel1_;  // fittedModel1
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_fittedModel3_;  // fittedModel3
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_fitted17_;  // fitted17
  SEXP Rsh_Fir_reg_fitted18_;  // fitted18
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_fitted20_;  // fitted20
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_lower;  // lower
  SEXP Rsh_Fir_reg_lower1_;  // lower1
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_lower2_;  // lower2
  SEXP Rsh_Fir_reg_lower3_;  // lower3
  SEXP Rsh_Fir_reg_as_double;  // as_double
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_defaultPars;  // defaultPars
  SEXP Rsh_Fir_reg_defaultPars1_;  // defaultPars1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_rep_len;  // rep_len
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_fitted21_;  // fitted21
  SEXP Rsh_Fir_reg_fitted22_;  // fitted22
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_fitted24_;  // fitted24
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_upper;  // upper
  SEXP Rsh_Fir_reg_upper1_;  // upper1
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_upper2_;  // upper2
  SEXP Rsh_Fir_reg_upper3_;  // upper3
  SEXP Rsh_Fir_reg_as_double1_;  // as_double1
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_defaultPars2_;  // defaultPars2
  SEXP Rsh_Fir_reg_defaultPars3_;  // defaultPars3
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_rep_len1_;  // rep_len1
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_defaultPars4_;  // defaultPars4
  SEXP Rsh_Fir_reg_defaultPars5_;  // defaultPars5
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_rep_int;  // rep_int
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_deviance;  // deviance
  SEXP Rsh_Fir_reg_fitted25_;  // fitted25
  SEXP Rsh_Fir_reg_fitted26_;  // fitted26
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_summary;  // summary
  SEXP Rsh_Fir_reg_fitted27_;  // fitted27
  SEXP Rsh_Fir_reg_fitted28_;  // fitted28
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_on_exit;  // on_exit
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_prof;  // prof
  SEXP Rsh_Fir_reg_prof1_;  // prof1

  // Bind parameters
  Rsh_Fir_reg_fitted = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st fitted = fitted
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_fitted, RHO);
  (void)(Rsh_Fir_reg_fitted);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // fitted1 = ld fitted
  Rsh_Fir_reg_fitted1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L17() else D0()
  // L17()
  goto L17_;

L0_:;
  // st lower = r12
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // fitted21 = ld fitted
  Rsh_Fir_reg_fitted21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L80() else D13()
  // L80()
  goto L80_;

L1_:;
  // r15 = `!`(r14)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // c11 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c11 then L69() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L69()
    goto L69_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L4(+Infinity)
  // L4(+Infinity)
  Rsh_Fir_reg_r19_ = Rsh_const(CCP, 4);
  goto L4_;

L3_:;
  // goto L4(r17)
  // L4(r17)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r17_;
  goto L4_;

L4_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard3 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L5_:;
  // rep_len = ldf rep_len in base
  Rsh_Fir_reg_rep_len = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r23 = dyn rep_len(r19, r21)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_len, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L79() else D12()
  // L79()
  goto L79_;

L6_:;
  // st upper = r27
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // sym8 = ldf `rep.int`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base8 = ldf `rep.int` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard8 then L105() else L106()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L105()
    goto L105_;
  } else {
  // L106()
    goto L106_;
  }

L7_:;
  // r30 = `!`(r29)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c15 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c15 then L94() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L94()
    goto L94_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L10(+Infinity)
  // L10(+Infinity)
  Rsh_Fir_reg_r34_ = Rsh_const(CCP, 4);
  goto L10_;

L9_:;
  // goto L10(r32)
  // L10(r32)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r32_;
  goto L10_;

L10_:;
  // sym7 = ldf length
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base7 = ldf length in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard7 then L100() else L101()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L100()
    goto L100_;
  } else {
  // L101()
    goto L101_;
  }

L11_:;
  // rep_len1 = ldf rep_len in base
  Rsh_Fir_reg_rep_len1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r38 = dyn rep_len1(r34, r36)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_len1_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L104() else D19()
  // L104()
  goto L104_;

L12_:;
  // st defaultVary = r40
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // deviance = ldf deviance
  Rsh_Fir_reg_deviance = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L112() else D23()
  // L112()
  goto L112_;

L13_:;
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r44 = dyn rep_int(TRUE, r42)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L111() else D22()
  // L111()
  goto L111_;

L14_:;
  // sym11 = ldf list
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base11 = ldf list in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard11 then L122() else L123()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L122()
    goto L122_;
  } else {
  // L123()
    goto L123_;
  }

L15_:;
  // st prof = r57
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r57_, RHO);
  (void)(Rsh_Fir_reg_r57_);
  // sym12 = ldf c
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base12 = ldf c in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard12 then L125() else L126()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L125()
    goto L125_;
  } else {
  // L126()
    goto L126_;
  }

L16_:;
  // l = ld prof
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L128() else D29()
  // L128()
  goto L128_;

D0_:;
  // deopt 0 [fitted1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_fitted1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L17_:;
  // fitted2 = force? fitted1
  Rsh_Fir_reg_fitted2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fitted1_);
  // checkMissing(fitted2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_fitted2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c = `is.object`(fitted2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_fitted2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c then L19() else L20(fitted2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L19()
    goto L19_;
  } else {
  // L20(fitted2)
    Rsh_Fir_reg_fitted4_ = Rsh_Fir_reg_fitted2_;
    goto L20_;
  }

L18_:;
  // st fittedModel = dx1
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // fitted5 = ld fitted
  Rsh_Fir_reg_fitted5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L22() else D1()
  // L22()
  goto L22_;

L19_:;
  // dr = tryDispatchBuiltin.1("$", fitted2)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_fitted2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args14);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if dc then L21() else L20(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L21()
    goto L21_;
  } else {
  // L20(dr)
    Rsh_Fir_reg_fitted4_ = Rsh_Fir_reg_dr;
    goto L20_;
  }

L20_:;
  // r = `$`(fitted4, <sym m>)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_fitted4_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L18(r)
  // L18(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1;
  goto L18_;

L21_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L18(dx)
  // L18(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L18_;

D1_:;
  // deopt 4 [fitted5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_fitted5_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L22_:;
  // fitted6 = force? fitted5
  Rsh_Fir_reg_fitted6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fitted5_);
  // checkMissing(fitted6)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_fitted6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(fitted6)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_fitted6_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c1 then L24() else L25(fitted6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L24()
    goto L24_;
  } else {
  // L25(fitted6)
    Rsh_Fir_reg_fitted8_ = Rsh_Fir_reg_fitted6_;
    goto L25_;
  }

L23_:;
  // c2 = `is.object`(dx3)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c2 then L28() else L29(dx3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L28()
    goto L28_;
  } else {
  // L29(dx3)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    goto L29_;
  }

L24_:;
  // dr2 = tryDispatchBuiltin.1("$", fitted6)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_fitted6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc1 then L26() else L25(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L26()
    goto L26_;
  } else {
  // L25(dr2)
    Rsh_Fir_reg_fitted8_ = Rsh_Fir_reg_dr2_;
    goto L25_;
  }

L25_:;
  // r1 = `$`(fitted8, <sym call>)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_fitted8_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L23(r1)
  // L23(r1)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r1_;
  goto L23_;

L26_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L23(dx2)
  // L23(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L23_;

L27_:;
  // st algorithm = dx7
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // fitted9 = ld fitted
  Rsh_Fir_reg_fitted9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L31() else D2()
  // L31()
  goto L31_;

L28_:;
  // dr4 = tryDispatchBuiltin.1("$", dx3)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args25);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if dc2 then L30() else L29(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L30()
    goto L30_;
  } else {
  // L29(dr4)
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dr4_;
    goto L29_;
  }

L29_:;
  // r2 = `$`(dx5, <sym algorithm>)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L27(r2)
  // L27(r2)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r2_;
  goto L27_;

L30_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L27(dx6)
  // L27(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L27_;

D2_:;
  // deopt 9 [fitted9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_fitted9_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L31_:;
  // fitted10 = force? fitted9
  Rsh_Fir_reg_fitted10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fitted9_);
  // checkMissing(fitted10)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_fitted10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(fitted10)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_fitted10_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c3 then L33() else L34(fitted10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L33()
    goto L33_;
  } else {
  // L34(fitted10)
    Rsh_Fir_reg_fitted12_ = Rsh_Fir_reg_fitted10_;
    goto L34_;
  }

L32_:;
  // c4 = `is.object`(dx9)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c4 then L37() else L38(dx9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L37()
    goto L37_;
  } else {
  // L38(dx9)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx9_;
    goto L38_;
  }

L33_:;
  // dr6 = tryDispatchBuiltin.1("$", fitted10)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_fitted10_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args32);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if dc3 then L35() else L34(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L35()
    goto L35_;
  } else {
  // L34(dr6)
    Rsh_Fir_reg_fitted12_ = Rsh_Fir_reg_dr6_;
    goto L34_;
  }

L34_:;
  // r3 = `$`(fitted12, <sym call>)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_fitted12_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L32(r3)
  // L32(r3)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r3_;
  goto L32_;

L35_:;
  // dx8 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L32(dx8)
  // L32(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L32_;

L36_:;
  // st ctrl = dx13
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // fitted13 = ld fitted
  Rsh_Fir_reg_fitted13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L40() else D3()
  // L40()
  goto L40_;

L37_:;
  // dr8 = tryDispatchBuiltin.1("$", dx9)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args36);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if dc4 then L39() else L38(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L39()
    goto L39_;
  } else {
  // L38(dr8)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dr8_;
    goto L38_;
  }

L38_:;
  // r4 = `$`(dx11, <sym control>)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L36(r4)
  // L36(r4)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r4_;
  goto L36_;

L39_:;
  // dx12 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L36(dx12)
  // L36(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L36_;

D3_:;
  // deopt 14 [fitted13]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_fitted13_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L40_:;
  // fitted14 = force? fitted13
  Rsh_Fir_reg_fitted14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fitted13_);
  // checkMissing(fitted14)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_fitted14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(fitted14)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_fitted14_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c5 then L42() else L43(fitted14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L42()
    goto L42_;
  } else {
  // L43(fitted14)
    Rsh_Fir_reg_fitted16_ = Rsh_Fir_reg_fitted14_;
    goto L43_;
  }

L41_:;
  // c6 = `is.object`(dx15)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c6 then L46() else L47(dx15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L46()
    goto L46_;
  } else {
  // L47(dx15)
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
    goto L47_;
  }

L42_:;
  // dr10 = tryDispatchBuiltin.1("$", fitted14)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_fitted14_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args43);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc5 then L44() else L43(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L44()
    goto L44_;
  } else {
  // L43(dr10)
    Rsh_Fir_reg_fitted16_ = Rsh_Fir_reg_dr10_;
    goto L43_;
  }

L43_:;
  // r5 = `$`(fitted16, <sym call>)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_fitted16_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L41(r5)
  // L41(r5)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r5_;
  goto L41_;

L44_:;
  // dx14 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L41(dx14)
  // L41(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L41_;

L45_:;
  // st trace = dx19
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // fittedModel = ld fittedModel
  Rsh_Fir_reg_fittedModel = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L49() else D4()
  // L49()
  goto L49_;

L46_:;
  // dr12 = tryDispatchBuiltin.1("$", dx15)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args47);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if dc6 then L48() else L47(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L48()
    goto L48_;
  } else {
  // L47(dr12)
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dr12_;
    goto L47_;
  }

L47_:;
  // r6 = `$`(dx17, <sym trace>)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L45(r6)
  // L45(r6)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r6_;
  goto L45_;

L48_:;
  // dx18 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L45(dx18)
  // L45(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L45_;

D4_:;
  // deopt 19 [fittedModel]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_fittedModel;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L49_:;
  // fittedModel1 = force? fittedModel
  Rsh_Fir_reg_fittedModel1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedModel);
  // checkMissing(fittedModel1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_fittedModel1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(fittedModel1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_fittedModel1_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if c7 then L51() else L52(fittedModel1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L51()
    goto L51_;
  } else {
  // L52(fittedModel1)
    Rsh_Fir_reg_fittedModel3_ = Rsh_Fir_reg_fittedModel1_;
    goto L52_;
  }

L50_:;
  // checkFun.0(dx21)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dx21_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args53));
  // dx22 = dx21 as cls
  Rsh_Fir_reg_dx22_ = Rsh_Fir_cast(Rsh_Fir_reg_dx21_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r8 = dyn dx22()
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dx22_, 0, NULL, NULL, CCP, RHO);
  // check L54() else D5()
  // L54()
  goto L54_;

L51_:;
  // dr14 = tryDispatchBuiltin.1("$", fittedModel1)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_fittedModel1_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args54);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if dc7 then L53() else L52(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L53()
    goto L53_;
  } else {
  // L52(dr14)
    Rsh_Fir_reg_fittedModel3_ = Rsh_Fir_reg_dr14_;
    goto L52_;
  }

L52_:;
  // r7 = `$`(fittedModel3, <sym getPars>)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_fittedModel3_;
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L50(r7)
  // L50(r7)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r7_;
  goto L50_;

L53_:;
  // dx20 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // goto L50(dx20)
  // L50(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L50_;

D5_:;
  // deopt 23 [r8]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L54_:;
  // st fittedPars = r8
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // st defaultPars = r8
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // fitted17 = ld fitted
  Rsh_Fir_reg_fitted17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L55() else D6()
  // L55()
  goto L55_;

D6_:;
  // deopt 26 [fitted17]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_fitted17_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L55_:;
  // fitted18 = force? fitted17
  Rsh_Fir_reg_fitted18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fitted17_);
  // checkMissing(fitted18)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_fitted18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(fitted18)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_fitted18_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if c8 then L57() else L58(fitted18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L57()
    goto L57_;
  } else {
  // L58(fitted18)
    Rsh_Fir_reg_fitted20_ = Rsh_Fir_reg_fitted18_;
    goto L58_;
  }

L56_:;
  // c9 = `is.object`(dx24)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dx24_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if c9 then L61() else L62(dx24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L61()
    goto L61_;
  } else {
  // L62(dx24)
    Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx24_;
    goto L62_;
  }

L57_:;
  // dr16 = tryDispatchBuiltin.1("$", fitted18)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_fitted18_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args61);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if dc8 then L59() else L58(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L59()
    goto L59_;
  } else {
  // L58(dr16)
    Rsh_Fir_reg_fitted20_ = Rsh_Fir_reg_dr16_;
    goto L58_;
  }

L58_:;
  // r9 = `$`(fitted20, <sym call>)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_fitted20_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L56(r9)
  // L56(r9)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_r9_;
  goto L56_;

L59_:;
  // dx23 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L56(dx23)
  // L56(dx23)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx23_;
  goto L56_;

L60_:;
  // st lower = dx28
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx28_, RHO);
  (void)(Rsh_Fir_reg_dx28_);
  // sym = ldf rep_len
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf rep_len in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args65);
  // if guard then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

L61_:;
  // dr18 = tryDispatchBuiltin.1("$", dx24)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_dx24_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args66);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if dc9 then L63() else L62(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L63()
    goto L63_;
  } else {
  // L62(dr18)
    Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dr18_;
    goto L62_;
  }

L62_:;
  // r10 = `$`(dx26, <sym lower>)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dx26_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L60(r10)
  // L60(r10)
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_r10_;
  goto L60_;

L63_:;
  // dx27 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L60(dx27)
  // L60(dx27)
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx27_;
  goto L60_;

L64_:;
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard1 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L65_:;
  // r11 = dyn base(<lang if(`!`(is.null(lower)), as.double(lower), +Infinity)>, <lang length(defaultPars)>)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args71[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L0_;

L66_:;
  // lower = ld lower
  Rsh_Fir_reg_lower = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L68() else D7()
  // L68()
  goto L68_;

L67_:;
  // r13 = dyn base1(<sym lower>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r13)
  // L1(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L1_;

D7_:;
  // deopt 34 [lower]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_lower;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L68_:;
  // lower1 = force? lower
  Rsh_Fir_reg_lower1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower);
  // checkMissing(lower1)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_lower1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // c10 = `==`(lower1, NULL)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_lower1_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // goto L1(c10)
  // L1(c10)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_c10_;
  goto L1_;

L69_:;
  // sym2 = ldf `as.double`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base2 = ldf `as.double` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard2 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L70_:;
  // lower2 = ld lower
  Rsh_Fir_reg_lower2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L72() else D8()
  // L72()
  goto L72_;

L71_:;
  // r16 = dyn base2(<sym lower>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r16)
  // L3(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L3_;

D8_:;
  // deopt 40 [lower2]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_lower2_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L72_:;
  // lower3 = force? lower2
  Rsh_Fir_reg_lower3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower2_);
  // checkMissing(lower3)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_lower3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // as_double = ldf `as.double` in base
  Rsh_Fir_reg_as_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r18 = dyn as_double(lower3)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_lower3_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L73() else D9()
  // L73()
  goto L73_;

D9_:;
  // deopt 43 [r18]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L73_:;
  // goto L3(r18)
  // L3(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L3_;

L75_:;
  // defaultPars = ld defaultPars
  Rsh_Fir_reg_defaultPars = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L77() else D10()
  // L77()
  goto L77_;

L76_:;
  // r20 = dyn base3(<sym defaultPars>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(r20)
  // L5(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L5_;

D10_:;
  // deopt 48 [defaultPars]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_defaultPars;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L77_:;
  // defaultPars1 = force? defaultPars
  Rsh_Fir_reg_defaultPars1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_defaultPars);
  // checkMissing(defaultPars1)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_defaultPars1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r22 = dyn length(defaultPars1)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_defaultPars1_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L78() else D11()
  // L78()
  goto L78_;

D11_:;
  // deopt 51 [r22]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L78_:;
  // goto L5(r22)
  // L5(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L5_;

D12_:;
  // deopt 53 [r23]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L79_:;
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r23_;
  goto L0_;

D13_:;
  // deopt 55 [fitted21]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_fitted21_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L80_:;
  // fitted22 = force? fitted21
  Rsh_Fir_reg_fitted22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fitted21_);
  // checkMissing(fitted22)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_fitted22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(fitted22)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_fitted22_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if c12 then L82() else L83(fitted22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L82()
    goto L82_;
  } else {
  // L83(fitted22)
    Rsh_Fir_reg_fitted24_ = Rsh_Fir_reg_fitted22_;
    goto L83_;
  }

L81_:;
  // c13 = `is.object`(dx30)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dx30_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if c13 then L86() else L87(dx30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L86()
    goto L86_;
  } else {
  // L87(dx30)
    Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx30_;
    goto L87_;
  }

L82_:;
  // dr20 = tryDispatchBuiltin.1("$", fitted22)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_fitted22_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args85);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if dc10 then L84() else L83(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L84()
    goto L84_;
  } else {
  // L83(dr20)
    Rsh_Fir_reg_fitted24_ = Rsh_Fir_reg_dr20_;
    goto L83_;
  }

L83_:;
  // r24 = `$`(fitted24, <sym call>)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_fitted24_;
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L81(r24)
  // L81(r24)
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_r24_;
  goto L81_;

L84_:;
  // dx29 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // goto L81(dx29)
  // L81(dx29)
  Rsh_Fir_reg_dx30_ = Rsh_Fir_reg_dx29_;
  goto L81_;

L85_:;
  // st upper = dx34
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx34_, RHO);
  (void)(Rsh_Fir_reg_dx34_);
  // sym4 = ldf rep_len
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base4 = ldf rep_len in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args89);
  // if guard4 then L89() else L90()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L89()
    goto L89_;
  } else {
  // L90()
    goto L90_;
  }

L86_:;
  // dr22 = tryDispatchBuiltin.1("$", dx30)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_dx30_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args90);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if dc11 then L88() else L87(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L88()
    goto L88_;
  } else {
  // L87(dr22)
    Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dr22_;
    goto L87_;
  }

L87_:;
  // r25 = `$`(dx32, <sym upper>)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dx32_;
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // goto L85(r25)
  // L85(r25)
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_r25_;
  goto L85_;

L88_:;
  // dx33 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // goto L85(dx33)
  // L85(dx33)
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_dx33_;
  goto L85_;

L89_:;
  // sym5 = ldf `is.null`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base5 = ldf `is.null` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args94);
  // if guard5 then L91() else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L91()
    goto L91_;
  } else {
  // L92()
    goto L92_;
  }

L90_:;
  // r26 = dyn base4(<lang if(`!`(is.null(upper)), as.double(upper), +Infinity)>, <lang length(defaultPars)>)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L6(r26)
  // L6(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L6_;

L91_:;
  // upper = ld upper
  Rsh_Fir_reg_upper = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L93() else D14()
  // L93()
  goto L93_;

L92_:;
  // r28 = dyn base5(<sym upper>)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L7(r28)
  // L7(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L7_;

D14_:;
  // deopt 63 [upper]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_upper;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L93_:;
  // upper1 = force? upper
  Rsh_Fir_reg_upper1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_upper);
  // checkMissing(upper1)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_upper1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // c14 = `==`(upper1, NULL)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_upper1_;
  Rsh_Fir_array_args98[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // goto L7(c14)
  // L7(c14)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_c14_;
  goto L7_;

L94_:;
  // sym6 = ldf `as.double`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base6 = ldf `as.double` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args99);
  // if guard6 then L95() else L96()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L95()
    goto L95_;
  } else {
  // L96()
    goto L96_;
  }

L95_:;
  // upper2 = ld upper
  Rsh_Fir_reg_upper2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L97() else D15()
  // L97()
  goto L97_;

L96_:;
  // r31 = dyn base6(<sym upper>)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L9(r31)
  // L9(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L9_;

D15_:;
  // deopt 69 [upper2]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_upper2_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L97_:;
  // upper3 = force? upper2
  Rsh_Fir_reg_upper3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_upper2_);
  // checkMissing(upper3)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_upper3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // as_double1 = ldf `as.double` in base
  Rsh_Fir_reg_as_double1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r33 = dyn as_double1(upper3)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_upper3_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double1_, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L98() else D16()
  // L98()
  goto L98_;

D16_:;
  // deopt 72 [r33]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L98_:;
  // goto L9(r33)
  // L9(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L9_;

L100_:;
  // defaultPars2 = ld defaultPars
  Rsh_Fir_reg_defaultPars2_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L102() else D17()
  // L102()
  goto L102_;

L101_:;
  // r35 = dyn base7(<sym defaultPars>)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L11(r35)
  // L11(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L11_;

D17_:;
  // deopt 77 [defaultPars2]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_defaultPars2_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L102_:;
  // defaultPars3 = force? defaultPars2
  Rsh_Fir_reg_defaultPars3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_defaultPars2_);
  // checkMissing(defaultPars3)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_defaultPars3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r37 = dyn length1(defaultPars3)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_defaultPars3_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L103() else D18()
  // L103()
  goto L103_;

D18_:;
  // deopt 80 [r37]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L103_:;
  // goto L11(r37)
  // L11(r37)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L11_;

D19_:;
  // deopt 82 [r38]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L104_:;
  // goto L6(r38)
  // L6(r38)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r38_;
  goto L6_;

L105_:;
  // sym9 = ldf length
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base9 = ldf length in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args106);
  // if guard9 then L107() else L108()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L107()
    goto L107_;
  } else {
  // L108()
    goto L108_;
  }

L106_:;
  // r39 = dyn base8(TRUE, <lang length(defaultPars)>)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L12(r39)
  // L12(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L12_;

L107_:;
  // defaultPars4 = ld defaultPars
  Rsh_Fir_reg_defaultPars4_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L109() else D20()
  // L109()
  goto L109_;

L108_:;
  // r41 = dyn base9(<sym defaultPars>)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L13(r41)
  // L13(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L13_;

D20_:;
  // deopt 89 [defaultPars4]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_defaultPars4_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L109_:;
  // defaultPars5 = force? defaultPars4
  Rsh_Fir_reg_defaultPars5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_defaultPars4_);
  // checkMissing(defaultPars5)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_defaultPars5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r43 = dyn length2(defaultPars5)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_defaultPars5_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L110() else D21()
  // L110()
  goto L110_;

D21_:;
  // deopt 92 [r43]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L110_:;
  // goto L13(r43)
  // L13(r43)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r43_;
  goto L13_;

D22_:;
  // deopt 94 [r44]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L111_:;
  // goto L12(r44)
  // L12(r44)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r44_;
  goto L12_;

D23_:;
  // deopt 97 []
  Rsh_Fir_deopt(97, 0, NULL, CCP, RHO);
  return R_NilValue;

L112_:;
  // p = prom<V +>{
  //   fitted25 = ld fitted;
  //   fitted26 = force? fitted25;
  //   checkMissing(fitted26);
  //   return fitted26;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner468771924_, CCP, RHO);
  // r46 = dyn deviance(p)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deviance, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L113() else D24()
  // L113()
  goto L113_;

D24_:;
  // deopt 99 [r46]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L113_:;
  // st `S.hat` = r46
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // summary = ldf summary
  Rsh_Fir_reg_summary = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L114() else D25()
  // L114()
  goto L114_;

D25_:;
  // deopt 102 []
  Rsh_Fir_deopt(102, 0, NULL, CCP, RHO);
  return R_NilValue;

L114_:;
  // p1 = prom<V +>{
  //   fitted27 = ld fitted;
  //   fitted28 = force? fitted27;
  //   checkMissing(fitted28);
  //   return fitted28;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner468771924_1, CCP, RHO);
  // r48 = dyn summary(p1)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_summary, 1, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L115() else D26()
  // L115()
  goto L115_;

D26_:;
  // deopt 104 [r48]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L115_:;
  // c16 = `is.object`(r48)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // if c16 then L117() else L118(r48)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L117()
    goto L117_;
  } else {
  // L118(r48)
    Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r48_;
    goto L118_;
  }

L116_:;
  // r52 = `^`(dx36, 2.0)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_dx36_;
  Rsh_Fir_array_args116[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(70, CCP, RHO, 2, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // st `s2.hat` = r52
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r52_, RHO);
  (void)(Rsh_Fir_reg_r52_);
  // sym10 = ldf `on.exit`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base10 = ldf `on.exit` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args117);
  // if guard10 then L120() else L121()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L120()
    goto L120_;
  } else {
  // L121()
    goto L121_;
  }

L117_:;
  // dr24 = tryDispatchBuiltin.1("$", r48)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args118);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // if dc12 then L119() else L118(dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L119()
    goto L119_;
  } else {
  // L118(dr24)
    Rsh_Fir_reg_r50_ = Rsh_Fir_reg_dr24_;
    goto L118_;
  }

L118_:;
  // r51 = `$`(r50, <sym sigma>)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_args120[1] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // goto L116(r51)
  // L116(r51)
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_r51_;
  goto L116_;

L119_:;
  // dx35 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // goto L116(dx35)
  // L116(dx35)
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_dx35_;
  goto L116_;

L120_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r55 = dyn on_exit(<lang remove(fitted)>)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L14()
  // L14()
  goto L14_;

L121_:;
  // r53 = dyn base10(<lang remove(fitted)>)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L14()
  // L14()
  goto L14_;

L122_:;
  // r58 = clos inner2708337952
  Rsh_Fir_reg_r58_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // r59 = clos inner2708337952
  Rsh_Fir_reg_r59_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // r60 = clos inner2827293414
  Rsh_Fir_reg_r60_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2827293414_, RHO, CCP);
  // r61 = clos inner1246119658
  Rsh_Fir_reg_r61_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1246119658_, RHO, CCP);
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r62 = dyn list(r58, r59, r60, r61)
  SEXP Rsh_Fir_array_args124[4];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_args124[2] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_args124[3] = Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_array_arg_names22[4];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 4, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L124() else D27()
  // L124()
  goto L124_;

L123_:;
  // r56 = dyn base11[getFittedPars, getFittedModel, setDefault, getProfile](<lang function(NULL, fittedPars, NULL)>, <lang function(NULL, fittedModel, NULL)>, <lang function((varying=, params=), {
  //     if(`&&`(missing(params), missing(varying)), {
  //         `$`(fittedModel, setVarying)();
  //         `$`(fittedModel, setPars)(fittedPars);
  //         `<<-`(defaultPars, fittedPars);
  //         `<<-`(defaultVary, rep.int(TRUE, length(defaultPars)))
  //       }, {
  //         if(`!`(missing(params)), {
  //             if(`!=`(length(params), length(fittedPars)), stop("'params' has wrong length"));
  //             `<<-`(defaultPars, params)
  //           });
  //         if(`!`(missing(varying)), {
  //             if(is.numeric(varying), {
  //                 if(`!`(all(`%in%`(varying, seq_along(fittedPars)))), stop("'varying' must be in seq_along(pars)"));
  //                 `<-`(varying, `!`(`(`(`%in%`(`(`(seq_along(fittedPars)), varying))))
  //               }, if(is.logical(varying), {
  //                   if(`!=`(length(varying), length(fittedPars)), stop("'varying' has wrong length"))
  //                 }, if(is.character(varying), {
  //                     if(`!`(all(`%in%`(varying, names(fittedPars)))), stop("'varying' must be in seq_along(pars)"));
  //                     `<-`(varying, `!`(`(`(`%in%`(names(fittedPars), varying))))
  //                   }, stop("'varying' must be logical, integer or character"))));
  //             `<<-`(defaultVary, varying)
  //           })
  //       })
  //   }, NULL)>, <lang function((...=), {
  //     `<-`(args, list(...));
  //     if(`==`(length(args), 0), {
  //         `<-`(vary, defaultVary);
  //         `<-`(startPars, defaultPars)
  //       }, if(`&&`(`==`(length(args), 2), is.logical(`[[`(args, 1))), {
  //           `<-`(vary, `[[`(args, 1));
  //           `<-`(params, unlist(`[[`(args, 2)));
  //           `<-`(startPars, defaultPars);
  //           `<-`(`[`(startPars, `!`(vary)), params)
  //         }, {
  //           if(`&&`(`==`(length(args), 1.0), is.list(`[[`(args, 1))), {
  //               `<-`(params, unlist(`[[`(args, 1)))
  //             }, if(all(sapply(args, is.numeric)), {
  //                 `<-`(params, unlist(args))
  //               }, stop("invalid argument to 'getProfile'")));
  //           if(`!`(all(`%in%`(names(params), names(fittedPars)))), stop("cannot recognize parameter name"));
  //           `<-`(startPars, defaultPars);
  //           `<-`(vary, `!`(`(`(`%in%`(names(fittedPars), names(params)))));
  //           `<-`(`[`(startPars, `!`(vary)), params)
  //         }));
  //     `$`(fittedModel, setVarying)();
  //     `$`(fittedModel, setPars)(startPars);
  //     `$`(fittedModel, setVarying)(vary);
  //     `$`(fittedModel, setPars)(`[`(startPars, vary));
  //     if(`!=`(algorithm, "port"), {
  //         if(sum(vary), .Call(C_nls_iter, fittedModel, ctrl, trace));
  //         `<-`(dev, `$`(fittedModel, deviance)())
  //       }, {
  //         `<-`(iv, nls_port_fit(fittedModel, `[`(startPars, vary), `[`(lower, vary), `[`(upper, vary), ctrl, trace));
  //         `<-`(dev, if(`!`(`%in%`(`[`(iv, 1), `:`(3.0, 6.0))), NA_REAL, `$`(fittedModel, deviance)()))
  //       });
  //     `<-`(profiledModel, fittedModel);
  //     `<-`(fstat, `/`(`(`(`-`(dev, S.hat)), s2.hat));
  //     `$`(fittedModel, setVarying)();
  //     `<-`(ans, list(fstat=fstat, parameters=`$`(profiledModel, getAllPars)(), varying=vary));
  //     `$`(fittedModel, setPars)(defaultPars);
  //     ans
  //   }, NULL)>)
  SEXP Rsh_Fir_array_args125[4];
  Rsh_Fir_array_args125[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args125[1] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args125[2] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args125[3] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names23[4];
  Rsh_Fir_array_arg_names23[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_arg_names23[1] = Rsh_const(CCP, 45);
  Rsh_Fir_array_arg_names23[2] = Rsh_const(CCP, 46);
  Rsh_Fir_array_arg_names23[3] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 4, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L15(r56)
  // L15(r56)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L15_;

D27_:;
  // deopt 127 [r62]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L124_:;
  // goto L15(r62)
  // L15(r62)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r62_;
  goto L15_;

L125_:;
  // c17 = ldf c in base
  Rsh_Fir_reg_c17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r65 = dyn c17("profiler.nls", "profiler")
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args126[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c17_, 2, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L127() else D28()
  // L127()
  goto L127_;

L126_:;
  // r63 = dyn base12("profiler.nls", "profiler")
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args127[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 2, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L16(r63)
  // L16(r63)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r63_;
  goto L16_;

D28_:;
  // deopt 134 [r65]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L127_:;
  // goto L16(r65)
  // L16(r65)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r65_;
  goto L16_;

D29_:;
  // deopt 136 [r64, l, r64]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(136, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L128_:;
  // r66 = dyn class__(l, NULL, r64)
  SEXP Rsh_Fir_array_args128[3];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args128[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args128[2] = Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L129() else D30()
  // L129()
  goto L129_;

D30_:;
  // deopt 138 [r64, r66]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(138, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L129_:;
  // st prof = r66
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r66_, RHO);
  (void)(Rsh_Fir_reg_r66_);
  // prof = ld prof
  Rsh_Fir_reg_prof = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L130() else D31()
  // L130()
  goto L130_;

D31_:;
  // deopt 140 [prof]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_prof;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L130_:;
  // prof1 = force? prof
  Rsh_Fir_reg_prof1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prof);
  // checkMissing(prof1)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_prof1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return prof1
  return Rsh_Fir_reg_prof1_;
}
SEXP Rsh_Fir_user_promise_inner468771924_(SEXP CCP, SEXP RHO) {
  // fitted25 = ld fitted
  Rsh_Fir_reg_fitted25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // fitted26 = force? fitted25
  Rsh_Fir_reg_fitted26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fitted25_);
  // checkMissing(fitted26)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_fitted26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // return fitted26
  return Rsh_Fir_reg_fitted26_;
}
SEXP Rsh_Fir_user_promise_inner468771924_1(SEXP CCP, SEXP RHO) {
  // fitted27 = ld fitted
  Rsh_Fir_reg_fitted27_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // fitted28 = force? fitted27
  Rsh_Fir_reg_fitted28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fitted27_);
  // checkMissing(fitted28)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_fitted28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // return fitted28
  return Rsh_Fir_reg_fitted28_;
}
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2708337952 dynamic dispatch ([])

  return Rsh_Fir_user_version_inner2708337952_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2708337952 version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for inner2708337952/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_fittedPars;  // fittedPars
  SEXP Rsh_Fir_reg_fittedPars1_;  // fittedPars1

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // fittedPars = ld fittedPars
  Rsh_Fir_reg_fittedPars = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 0 [fittedPars]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_fittedPars;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L0_:;
  // fittedPars1 = force? fittedPars
  Rsh_Fir_reg_fittedPars1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedPars);
  // checkMissing(fittedPars1)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_fittedPars1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return fittedPars1
  return Rsh_Fir_reg_fittedPars1_;
}
SEXP Rsh_Fir_user_function_inner2827293414_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2827293414 dynamic dispatch ([varying, params])

  return Rsh_Fir_user_version_inner2827293414_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2827293414_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2827293414 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2827293414/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_varying;  // varying
  SEXP Rsh_Fir_reg_params;  // params
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_c2_1;  // c2
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_c5_1;  // c5
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_missing1_;  // missing1
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_c6_1;  // c6
  SEXP Rsh_Fir_reg_c7_1;  // c7
  SEXP Rsh_Fir_reg_c9_1;  // c9
  SEXP Rsh_Fir_reg_fittedModel1;  // fittedModel
  SEXP Rsh_Fir_reg_fittedModel1_1;  // fittedModel1
  SEXP Rsh_Fir_reg_c10_1;  // c10
  SEXP Rsh_Fir_reg_fittedModel3_1;  // fittedModel3
  SEXP Rsh_Fir_reg_dr1;  // dr
  SEXP Rsh_Fir_reg_dc1;  // dc
  SEXP Rsh_Fir_reg_dx1;  // dx
  SEXP Rsh_Fir_reg_dx1_1;  // dx1
  SEXP Rsh_Fir_reg_r6_1;  // r6
  SEXP Rsh_Fir_reg_dx2_1;  // dx2
  SEXP Rsh_Fir_reg_r7_1;  // r7
  SEXP Rsh_Fir_reg_fittedModel4_;  // fittedModel4
  SEXP Rsh_Fir_reg_fittedModel5_;  // fittedModel5
  SEXP Rsh_Fir_reg_c11_1;  // c11
  SEXP Rsh_Fir_reg_fittedModel7_;  // fittedModel7
  SEXP Rsh_Fir_reg_dr2_1;  // dr2
  SEXP Rsh_Fir_reg_dc1_1;  // dc1
  SEXP Rsh_Fir_reg_dx3_1;  // dx3
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_r8_1;  // r8
  SEXP Rsh_Fir_reg_dx5_1;  // dx5
  SEXP Rsh_Fir_reg_fittedPars1;  // fittedPars
  SEXP Rsh_Fir_reg_fittedPars1_1;  // fittedPars1
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r10_1;  // r10
  SEXP Rsh_Fir_reg_fittedPars2_;  // fittedPars2
  SEXP Rsh_Fir_reg_fittedPars3_;  // fittedPars3
  SEXP Rsh_Fir_reg_sym2_1;  // sym2
  SEXP Rsh_Fir_reg_base2_1;  // base2
  SEXP Rsh_Fir_reg_guard2_1;  // guard2
  SEXP Rsh_Fir_reg_r11_1;  // r11
  SEXP Rsh_Fir_reg_r12_1;  // r12
  SEXP Rsh_Fir_reg_sym3_1;  // sym3
  SEXP Rsh_Fir_reg_base3_1;  // base3
  SEXP Rsh_Fir_reg_guard3_1;  // guard3
  SEXP Rsh_Fir_reg_r13_1;  // r13
  SEXP Rsh_Fir_reg_r14_1;  // r14
  SEXP Rsh_Fir_reg_defaultPars1;  // defaultPars
  SEXP Rsh_Fir_reg_defaultPars1_1;  // defaultPars1
  SEXP Rsh_Fir_reg_length1;  // length
  SEXP Rsh_Fir_reg_r15_1;  // r15
  SEXP Rsh_Fir_reg_rep_int1;  // rep_int
  SEXP Rsh_Fir_reg_r16_1;  // r16
  SEXP Rsh_Fir_reg_sym4_1;  // sym4
  SEXP Rsh_Fir_reg_base4_1;  // base4
  SEXP Rsh_Fir_reg_guard4_1;  // guard4
  SEXP Rsh_Fir_reg_r17_1;  // r17
  SEXP Rsh_Fir_reg_r18_1;  // r18
  SEXP Rsh_Fir_reg_missing2_;  // missing2
  SEXP Rsh_Fir_reg_r19_1;  // r19
  SEXP Rsh_Fir_reg_r20_1;  // r20
  SEXP Rsh_Fir_reg_c12_1;  // c12
  SEXP Rsh_Fir_reg_sym5_1;  // sym5
  SEXP Rsh_Fir_reg_base5_1;  // base5
  SEXP Rsh_Fir_reg_guard5_1;  // guard5
  SEXP Rsh_Fir_reg_r21_1;  // r21
  SEXP Rsh_Fir_reg_r22_1;  // r22
  SEXP Rsh_Fir_reg_params1_;  // params1
  SEXP Rsh_Fir_reg_params2_;  // params2
  SEXP Rsh_Fir_reg_length1_1;  // length1
  SEXP Rsh_Fir_reg_r23_1;  // r23
  SEXP Rsh_Fir_reg_sym6_1;  // sym6
  SEXP Rsh_Fir_reg_base6_1;  // base6
  SEXP Rsh_Fir_reg_guard6_1;  // guard6
  SEXP Rsh_Fir_reg_r26_1;  // r26
  SEXP Rsh_Fir_reg_r27_1;  // r27
  SEXP Rsh_Fir_reg_r28_1;  // r28
  SEXP Rsh_Fir_reg_fittedPars4_;  // fittedPars4
  SEXP Rsh_Fir_reg_fittedPars5_;  // fittedPars5
  SEXP Rsh_Fir_reg_length2_1;  // length2
  SEXP Rsh_Fir_reg_r29_1;  // r29
  SEXP Rsh_Fir_reg_r30_1;  // r30
  SEXP Rsh_Fir_reg_c13_1;  // c13
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r31_1;  // r31
  SEXP Rsh_Fir_reg_params3_;  // params3
  SEXP Rsh_Fir_reg_params4_;  // params4
  SEXP Rsh_Fir_reg_sym7_1;  // sym7
  SEXP Rsh_Fir_reg_base7_1;  // base7
  SEXP Rsh_Fir_reg_guard7_1;  // guard7
  SEXP Rsh_Fir_reg_r33_1;  // r33
  SEXP Rsh_Fir_reg_r34_1;  // r34
  SEXP Rsh_Fir_reg_missing3_;  // missing3
  SEXP Rsh_Fir_reg_r35_1;  // r35
  SEXP Rsh_Fir_reg_r36_1;  // r36
  SEXP Rsh_Fir_reg_c14_1;  // c14
  SEXP Rsh_Fir_reg_sym8_1;  // sym8
  SEXP Rsh_Fir_reg_base8_1;  // base8
  SEXP Rsh_Fir_reg_guard8_1;  // guard8
  SEXP Rsh_Fir_reg_r37_1;  // r37
  SEXP Rsh_Fir_reg_r38_1;  // r38
  SEXP Rsh_Fir_reg_varying1_;  // varying1
  SEXP Rsh_Fir_reg_varying2_;  // varying2
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r39_1;  // r39
  SEXP Rsh_Fir_reg_c15_1;  // c15
  SEXP Rsh_Fir_reg_sym9_1;  // sym9
  SEXP Rsh_Fir_reg_base9_1;  // base9
  SEXP Rsh_Fir_reg_guard9_1;  // guard9
  SEXP Rsh_Fir_reg_r40_1;  // r40
  SEXP Rsh_Fir_reg_r41_1;  // r41
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_varying3_;  // varying3
  SEXP Rsh_Fir_reg_varying4_;  // varying4
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_sym10_1;  // sym10
  SEXP Rsh_Fir_reg_base10_1;  // base10
  SEXP Rsh_Fir_reg_guard10_1;  // guard10
  SEXP Rsh_Fir_reg_r43_1;  // r43
  SEXP Rsh_Fir_reg_r44_1;  // r44
  SEXP Rsh_Fir_reg_fittedPars6_;  // fittedPars6
  SEXP Rsh_Fir_reg_fittedPars7_;  // fittedPars7
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_all;  // all
  SEXP Rsh_Fir_reg_r48_1;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_c16_1;  // c16
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r50_1;  // r50
  SEXP Rsh_Fir_reg__in_1_;  // _in_1
  SEXP Rsh_Fir_reg_sym11_1;  // sym11
  SEXP Rsh_Fir_reg_base11_1;  // base11
  SEXP Rsh_Fir_reg_guard11_1;  // guard11
  SEXP Rsh_Fir_reg_r52_1;  // r52
  SEXP Rsh_Fir_reg_r53_1;  // r53
  SEXP Rsh_Fir_reg_fittedPars8_;  // fittedPars8
  SEXP Rsh_Fir_reg_fittedPars9_;  // fittedPars9
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_varying5_;  // varying5
  SEXP Rsh_Fir_reg_varying6_;  // varying6
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r57_1;  // r57
  SEXP Rsh_Fir_reg_r58_1;  // r58
  SEXP Rsh_Fir_reg_sym12_1;  // sym12
  SEXP Rsh_Fir_reg_base12_1;  // base12
  SEXP Rsh_Fir_reg_guard12_1;  // guard12
  SEXP Rsh_Fir_reg_r60_1;  // r60
  SEXP Rsh_Fir_reg_r61_1;  // r61
  SEXP Rsh_Fir_reg_varying7_;  // varying7
  SEXP Rsh_Fir_reg_varying8_;  // varying8
  SEXP Rsh_Fir_reg_c17_1;  // c17
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r62_1;  // r62
  SEXP Rsh_Fir_reg_r63_1;  // r63
  SEXP Rsh_Fir_reg_varying9_;  // varying9
  SEXP Rsh_Fir_reg_varying10_;  // varying10
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r64_1;  // r64
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_fittedPars10_;  // fittedPars10
  SEXP Rsh_Fir_reg_fittedPars11_;  // fittedPars11
  SEXP Rsh_Fir_reg_length4_;  // length4
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_varying11_;  // varying11
  SEXP Rsh_Fir_reg_varying12_;  // varying12
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg__in_2_;  // _in_2
  SEXP Rsh_Fir_reg_varying13_;  // varying13
  SEXP Rsh_Fir_reg_varying14_;  // varying14
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_fittedPars12_;  // fittedPars12
  SEXP Rsh_Fir_reg_fittedPars13_;  // fittedPars13
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_all1_;  // all1
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_stop3_;  // stop3
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg__in_3_;  // _in_3
  SEXP Rsh_Fir_reg_sym18_;  // sym18
  SEXP Rsh_Fir_reg_base18_;  // base18
  SEXP Rsh_Fir_reg_guard18_;  // guard18
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_fittedPars14_;  // fittedPars14
  SEXP Rsh_Fir_reg_fittedPars15_;  // fittedPars15
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_varying15_;  // varying15
  SEXP Rsh_Fir_reg_varying16_;  // varying16
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_stop4_;  // stop4
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_varying17_;  // varying17
  SEXP Rsh_Fir_reg_varying18_;  // varying18

  // Bind parameters
  Rsh_Fir_reg_varying = PARAMS[0];
  Rsh_Fir_reg_params = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st varying = varying
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_varying, RHO);
  (void)(Rsh_Fir_reg_varying);
  // st params = params
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_params, RHO);
  (void)(Rsh_Fir_reg_params);
  // sym = ldf missing
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args131);
  // if guard then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // if c then L34() else L1(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L34()
    goto L34_;
  } else {
  // L1(c)
    Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c1;
    goto L1_;
  }

L1_:;
  // c9 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_c2_1;
  Rsh_Fir_reg_c9_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // if c9 then L38() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_1)) {
  // L38()
    goto L38_;
  } else {
  // L3()
    goto L3_;
  }

L2_:;
  // c6 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_reg_c6_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // c7 = `&&`(c5, c6)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_c5_1;
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_c6_1;
  Rsh_Fir_reg_c7_1 = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // goto L1(c7)
  // L1(c7)
  Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c7_1;
  goto L1_;

L3_:;
  // sym4 = ldf missing
  Rsh_Fir_reg_sym4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base4 = ldf missing in base
  Rsh_Fir_reg_base4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_sym4_1;
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_base4_1;
  Rsh_Fir_reg_guard4_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args136);
  // if guard4 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_1)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L4_:;
  // sst defaultVary = r12
  Rsh_Fir_super_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r12_1, RHO);
  (void)(Rsh_Fir_reg_r12_1);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r12
  return Rsh_Fir_reg_r12_1;

L5_:;
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r16 = dyn rep_int(TRUE, r14)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int1, 2, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L58() else D7()
  // L58()
  goto L58_;

L6_:;
  // r20 = `!`(r18)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_r18_1;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // c12 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_r20_1;
  Rsh_Fir_reg_c12_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // if c12 then L62() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_1)) {
  // L62()
    goto L62_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // goto L12()
  // L12()
  goto L12_;

L8_:;
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_sym6_1;
  Rsh_Fir_array_args140[1] = Rsh_Fir_reg_base6_1;
  Rsh_Fir_reg_guard6_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args140);
  // if guard6 then L67() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_1)) {
  // L67()
    goto L67_;
  } else {
  // L68()
    goto L68_;
  }

L9_:;
  // r30 = `!=`(r27, r28)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_r27_1;
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_r28_1;
  Rsh_Fir_reg_r30_1 = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // c13 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_r30_1;
  Rsh_Fir_reg_c13_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // if c13 then L71() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_1)) {
  // L71()
    goto L71_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // params3 = ld params
  Rsh_Fir_reg_params3_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L75() else D14()
  // L75()
  goto L75_;

L12_:;
  // sym7 = ldf missing
  Rsh_Fir_reg_sym7_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base7 = ldf missing in base
  Rsh_Fir_reg_base7_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_sym7_1;
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_base7_1;
  Rsh_Fir_reg_guard7_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args143);
  // if guard7 then L77() else L78()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_1)) {
  // L77()
    goto L77_;
  } else {
  // L78()
    goto L78_;
  }

L13_:;
  // r36 = `!`(r34)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_r34_1;
  Rsh_Fir_reg_r36_1 = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // c14 = `as.logical`(r36)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_r36_1;
  Rsh_Fir_reg_c14_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // if c14 then L79() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_1)) {
  // L79()
    goto L79_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 30);

L15_:;
  // c15 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_r38_1;
  Rsh_Fir_reg_c15_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // if c15 then L84() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_1)) {
  // L84()
    goto L84_;
  } else {
  // L16()
    goto L16_;
  }

L16_:;
  // sym12 = ldf `is.logical`
  Rsh_Fir_reg_sym12_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // base12 = ldf `is.logical` in base
  Rsh_Fir_reg_base12_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_sym12_1;
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_base12_1;
  Rsh_Fir_reg_guard12_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args147);
  // if guard12 then L97() else L98()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_1)) {
  // L97()
    goto L97_;
  } else {
  // L98()
    goto L98_;
  }

L17_:;
  // r49 = `!`(r41)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_r41_1;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // c16 = `as.logical`(r49)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_c16_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty());
  // if c16 then L90() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_1)) {
  // L90()
    goto L90_;
  } else {
  // L18()
    goto L18_;
  }

L18_:;
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // _in_1 = ldf `%in%`
  Rsh_Fir_reg__in_1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L94() else D22()
  // L94()
  goto L94_;

L20_:;
  // varying17 = ld varying
  Rsh_Fir_reg_varying17_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L132() else D41()
  // L132()
  goto L132_;

L21_:;
  // c18 = `as.logical`(r61)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_r61_1;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty());
  // if c18 then L100() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L100()
    goto L100_;
  } else {
  // L22()
    goto L22_;
  }

L22_:;
  // sym15 = ldf `is.character`
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // base15 = ldf `is.character` in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args151);
  // if guard15 then L114() else L115()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L114()
    goto L114_;
  } else {
  // L115()
    goto L115_;
  }

L23_:;
  // sym14 = ldf length
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base14 = ldf length in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args152);
  // if guard14 then L105() else L106()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L105()
    goto L105_;
  } else {
  // L106()
    goto L106_;
  }

L24_:;
  // r71 = `!=`(r68, r69)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_args153[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // c19 = `as.logical`(r71)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // if c19 then L109() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L109()
    goto L109_;
  } else {
  // L25()
    goto L25_;
  }

L25_:;
  // goto L26(NULL)
  // L26(NULL)
  Rsh_Fir_reg_r73_ = Rsh_const(CCP, 30);
  goto L26_;

L26_:;
  // goto L20()
  // L20()
  goto L20_;

L27_:;
  // c21 = `as.logical`(r75)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty());
  // if c21 then L117() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L117()
    goto L117_;
  } else {
  // L28()
    goto L28_;
  }

L28_:;
  // stop4 = ldf stop
  Rsh_Fir_reg_stop4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // check L130() else D39()
  // L130()
  goto L130_;

L29_:;
  // r85 = `!`(r77)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty());
  // c22 = `as.logical`(r85)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // if c22 then L123() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L123()
    goto L123_;
  } else {
  // L30()
    goto L30_;
  }

L30_:;
  // goto L31()
  // L31()
  goto L31_;

L31_:;
  // _in_3 = ldf `%in%`
  Rsh_Fir_reg__in_3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L127() else D37()
  // L127()
  goto L127_;

L32_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r2 = dyn missing(<sym params>)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L33_:;
  // r = dyn base(<sym params>)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args159, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2;
  goto L0_;

L34_:;
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args160[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args160);
  // if guard1 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L35_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r5 = dyn missing1(<sym varying>)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args161, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L2(c, r5)
  // L2(c, r5)
  Rsh_Fir_reg_c5_1 = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r5_1;
  goto L2_;

L36_:;
  // r3 = dyn base1(<sym varying>)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args162, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L2(c, r3)
  // L2(c, r3)
  Rsh_Fir_reg_c5_1 = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_1;
  goto L2_;

L38_:;
  // fittedModel = ld fittedModel
  Rsh_Fir_reg_fittedModel1 = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L39() else D0()
  // L39()
  goto L39_;

D0_:;
  // deopt 7 [fittedModel]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_fittedModel1;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L39_:;
  // fittedModel1 = force? fittedModel
  Rsh_Fir_reg_fittedModel1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedModel1);
  // checkMissing(fittedModel1)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_fittedModel1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(fittedModel1)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_fittedModel1_1;
  Rsh_Fir_reg_c10_1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty());
  // if c10 then L41() else L42(fittedModel1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_1)) {
  // L41()
    goto L41_;
  } else {
  // L42(fittedModel1)
    Rsh_Fir_reg_fittedModel3_1 = Rsh_Fir_reg_fittedModel1_1;
    goto L42_;
  }

L40_:;
  // checkFun.0(dx1)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_dx1_1;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args165));
  // dx2 = dx1 as cls
  Rsh_Fir_reg_dx2_1 = Rsh_Fir_cast(Rsh_Fir_reg_dx1_1, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r7 = dyn dx2()
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dx2_1, 0, NULL, NULL, CCP, RHO);
  // check L44() else D1()
  // L44()
  goto L44_;

L41_:;
  // dr = tryDispatchBuiltin.1("$", fittedModel1)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_fittedModel1_1;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args166);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty());
  // if dc then L43() else L42(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L43()
    goto L43_;
  } else {
  // L42(dr)
    Rsh_Fir_reg_fittedModel3_1 = Rsh_Fir_reg_dr1;
    goto L42_;
  }

L42_:;
  // r6 = `$`(fittedModel3, <sym setVarying>)
  SEXP Rsh_Fir_array_args168[2];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_fittedModel3_1;
  Rsh_Fir_array_args168[1] = Rsh_const(CCP, 57);
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty());
  // goto L40(r6)
  // L40(r6)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r6_1;
  goto L40_;

L43_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // goto L40(dx)
  // L40(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L40_;

D1_:;
  // deopt 11 [r7]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L44_:;
  // fittedModel4 = ld fittedModel
  Rsh_Fir_reg_fittedModel4_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L45() else D2()
  // L45()
  goto L45_;

D2_:;
  // deopt 12 [fittedModel4]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_fittedModel4_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L45_:;
  // fittedModel5 = force? fittedModel4
  Rsh_Fir_reg_fittedModel5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedModel4_);
  // checkMissing(fittedModel5)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_fittedModel5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(fittedModel5)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_fittedModel5_;
  Rsh_Fir_reg_c11_1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty());
  // if c11 then L47() else L48(fittedModel5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_1)) {
  // L47()
    goto L47_;
  } else {
  // L48(fittedModel5)
    Rsh_Fir_reg_fittedModel7_ = Rsh_Fir_reg_fittedModel5_;
    goto L48_;
  }

L46_:;
  // checkFun.0(dx4)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_dx4_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args172));
  // dx5 = dx4 as cls
  Rsh_Fir_reg_dx5_1 = Rsh_Fir_cast(Rsh_Fir_reg_dx4_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p = prom<V +>{
  //   fittedPars = ld fittedPars;
  //   fittedPars1 = force? fittedPars;
  //   checkMissing(fittedPars1);
  //   return fittedPars1;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2827293414_, CCP, RHO);
  // r10 = dyn dx5(p)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dx5_1, 1, Rsh_Fir_array_args174, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L50() else D3()
  // L50()
  goto L50_;

L47_:;
  // dr2 = tryDispatchBuiltin.1("$", fittedModel5)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_fittedModel5_;
  Rsh_Fir_reg_dr2_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args175);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dc1_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty());
  // if dc1 then L49() else L48(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_1)) {
  // L49()
    goto L49_;
  } else {
  // L48(dr2)
    Rsh_Fir_reg_fittedModel7_ = Rsh_Fir_reg_dr2_1;
    goto L48_;
  }

L48_:;
  // r8 = `$`(fittedModel7, <sym setPars>)
  SEXP Rsh_Fir_array_args177[2];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_fittedModel7_;
  Rsh_Fir_array_args177[1] = Rsh_const(CCP, 58);
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // goto L46(r8)
  // L46(r8)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r8_1;
  goto L46_;

L49_:;
  // dx3 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty());
  // goto L46(dx3)
  // L46(dx3)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_1;
  goto L46_;

D3_:;
  // deopt 17 [r10]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L50_:;
  // fittedPars2 = ld fittedPars
  Rsh_Fir_reg_fittedPars2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L51() else D4()
  // L51()
  goto L51_;

D4_:;
  // deopt 18 [fittedPars2]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_fittedPars2_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L51_:;
  // fittedPars3 = force? fittedPars2
  Rsh_Fir_reg_fittedPars3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedPars2_);
  // checkMissing(fittedPars3)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_fittedPars3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty()));
  // sst defaultPars = fittedPars3
  Rsh_Fir_super_store(Rsh_const(CCP, 26), Rsh_Fir_reg_fittedPars3_, RHO);
  (void)(Rsh_Fir_reg_fittedPars3_);
  // sym2 = ldf `rep.int`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf `rep.int` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args180[2];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args180[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args180);
  // if guard2 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L52_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args181[2];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args181[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args181);
  // if guard3 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L53_:;
  // r11 = dyn base2(TRUE, <lang length(defaultPars)>)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args182[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 2, Rsh_Fir_array_args182, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L4(r11)
  // L4(r11)
  Rsh_Fir_reg_r12_1 = Rsh_Fir_reg_r11_1;
  goto L4_;

L54_:;
  // defaultPars = ld defaultPars
  Rsh_Fir_reg_defaultPars1 = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L56() else D5()
  // L56()
  goto L56_;

L55_:;
  // r13 = dyn base3(<sym defaultPars>)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args183, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L5(r13)
  // L5(r13)
  Rsh_Fir_reg_r14_1 = Rsh_Fir_reg_r13_1;
  goto L5_;

D5_:;
  // deopt 26 [defaultPars]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_defaultPars1;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L56_:;
  // defaultPars1 = force? defaultPars
  Rsh_Fir_reg_defaultPars1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_defaultPars1);
  // checkMissing(defaultPars1)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_defaultPars1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r15 = dyn length(defaultPars1)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_defaultPars1_1;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1, 1, Rsh_Fir_array_args185, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L57() else D6()
  // L57()
  goto L57_;

D6_:;
  // deopt 29 [r15]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L5(r15)
  // L5(r15)
  Rsh_Fir_reg_r14_1 = Rsh_Fir_reg_r15_1;
  goto L5_;

D7_:;
  // deopt 31 [r16]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r16_1;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L4(r16)
  // L4(r16)
  Rsh_Fir_reg_r12_1 = Rsh_Fir_reg_r16_1;
  goto L4_;

L60_:;
  // missing2 = ldf missing in base
  Rsh_Fir_reg_missing2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r19 = dyn missing2(<sym params>)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing2_, 1, Rsh_Fir_array_args186, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L6(r19)
  // L6(r19)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r19_1;
  goto L6_;

L61_:;
  // r17 = dyn base4(<sym params>)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_1, 1, Rsh_Fir_array_args187, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L6(r17)
  // L6(r17)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r17_1;
  goto L6_;

L62_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args188[2];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_sym5_1;
  Rsh_Fir_array_args188[1] = Rsh_Fir_reg_base5_1;
  Rsh_Fir_reg_guard5_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args188);
  // if guard5 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_1)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L63_:;
  // params1 = ld params
  Rsh_Fir_reg_params1_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L65() else D8()
  // L65()
  goto L65_;

L64_:;
  // r21 = dyn base5(<sym params>)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_1, 1, Rsh_Fir_array_args189, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L8(r21)
  // L8(r21)
  Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_r21_1;
  goto L8_;

D8_:;
  // deopt 40 [params1]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_params1_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L65_:;
  // params2 = force? params1
  Rsh_Fir_reg_params2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_params1_);
  // checkMissing(params2)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_params2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r23 = dyn length1(params2)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_params2_;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r23_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_1, 1, Rsh_Fir_array_args191, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L66() else D9()
  // L66()
  goto L66_;

D9_:;
  // deopt 43 [r23]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r23_1;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L8(r23)
  // L8(r23)
  Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_r23_1;
  goto L8_;

L67_:;
  // fittedPars4 = ld fittedPars
  Rsh_Fir_reg_fittedPars4_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L69() else D10()
  // L69()
  goto L69_;

L68_:;
  // r26 = dyn base6(<sym fittedPars>)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r26_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_1, 1, Rsh_Fir_array_args192, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L9(r22, r26)
  // L9(r22, r26)
  Rsh_Fir_reg_r27_1 = Rsh_Fir_reg_r22_1;
  Rsh_Fir_reg_r28_1 = Rsh_Fir_reg_r26_1;
  goto L9_;

D10_:;
  // deopt 45 [r22, fittedPars4]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r22_1;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_fittedPars4_;
  Rsh_Fir_deopt(45, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L69_:;
  // fittedPars5 = force? fittedPars4
  Rsh_Fir_reg_fittedPars5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedPars4_);
  // checkMissing(fittedPars5)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_fittedPars5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r29 = dyn length2(fittedPars5)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_fittedPars5_;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r29_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_1, 1, Rsh_Fir_array_args194, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L70() else D11()
  // L70()
  goto L70_;

D11_:;
  // deopt 48 [r22, r29]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r22_1;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_r29_1;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L70_:;
  // goto L9(r22, r29)
  // L9(r22, r29)
  Rsh_Fir_reg_r27_1 = Rsh_Fir_reg_r22_1;
  Rsh_Fir_reg_r28_1 = Rsh_Fir_reg_r29_1;
  goto L9_;

L71_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // check L72() else D12()
  // L72()
  goto L72_;

D12_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L72_:;
  // r31 = dyn stop("'params' has wrong length")
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r31_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args195, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L73() else D13()
  // L73()
  goto L73_;

D13_:;
  // deopt 53 [r31]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r31_1;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L73_:;
  // goto L11()
  // L11()
  goto L11_;

D14_:;
  // deopt 56 [params3]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_params3_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L75_:;
  // params4 = force? params3
  Rsh_Fir_reg_params4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_params3_);
  // checkMissing(params4)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_params4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty()));
  // sst defaultPars = params4
  Rsh_Fir_super_store(Rsh_const(CCP, 26), Rsh_Fir_reg_params4_, RHO);
  (void)(Rsh_Fir_reg_params4_);
  // goto L12()
  // L12()
  goto L12_;

L77_:;
  // missing3 = ldf missing in base
  Rsh_Fir_reg_missing3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r35 = dyn missing3(<sym varying>)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r35_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing3_, 1, Rsh_Fir_array_args197, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L13(r35)
  // L13(r35)
  Rsh_Fir_reg_r34_1 = Rsh_Fir_reg_r35_1;
  goto L13_;

L78_:;
  // r33 = dyn base7(<sym varying>)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r33_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_1, 1, Rsh_Fir_array_args198, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L13(r33)
  // L13(r33)
  Rsh_Fir_reg_r34_1 = Rsh_Fir_reg_r33_1;
  goto L13_;

L79_:;
  // sym8 = ldf `is.numeric`
  Rsh_Fir_reg_sym8_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base8 = ldf `is.numeric` in base
  Rsh_Fir_reg_base8_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args199[2];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_sym8_1;
  Rsh_Fir_array_args199[1] = Rsh_Fir_reg_base8_1;
  Rsh_Fir_reg_guard8_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args199);
  // if guard8 then L80() else L81()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_1)) {
  // L80()
    goto L80_;
  } else {
  // L81()
    goto L81_;
  }

L80_:;
  // varying1 = ld varying
  Rsh_Fir_reg_varying1_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L82() else D15()
  // L82()
  goto L82_;

L81_:;
  // r37 = dyn base8(<sym varying>)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r37_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_1, 1, Rsh_Fir_array_args200, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L15(r37)
  // L15(r37)
  Rsh_Fir_reg_r38_1 = Rsh_Fir_reg_r37_1;
  goto L15_;

D15_:;
  // deopt 67 [varying1]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_varying1_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L82_:;
  // varying2 = force? varying1
  Rsh_Fir_reg_varying2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_varying1_);
  // checkMissing(varying2)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_varying2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r39 = dyn is_numeric(varying2)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_varying2_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r39_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args202, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L83() else D16()
  // L83()
  goto L83_;

D16_:;
  // deopt 70 [r39]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r39_1;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L83_:;
  // goto L15(r39)
  // L15(r39)
  Rsh_Fir_reg_r38_1 = Rsh_Fir_reg_r39_1;
  goto L15_;

L84_:;
  // sym9 = ldf all
  Rsh_Fir_reg_sym9_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // base9 = ldf all in base
  Rsh_Fir_reg_base9_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args203[2];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_sym9_1;
  Rsh_Fir_array_args203[1] = Rsh_Fir_reg_base9_1;
  Rsh_Fir_reg_guard9_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args203);
  // if guard9 then L85() else L86()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_1)) {
  // L85()
    goto L85_;
  } else {
  // L86()
    goto L86_;
  }

L85_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L87() else D17()
  // L87()
  goto L87_;

L86_:;
  // r40 = dyn base9(<lang `%in%`(varying, seq_along(fittedPars))>)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r40_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_1, 1, Rsh_Fir_array_args204, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L17(r40)
  // L17(r40)
  Rsh_Fir_reg_r41_1 = Rsh_Fir_reg_r40_1;
  goto L17_;

D17_:;
  // deopt 74 []
  Rsh_Fir_deopt(74, 0, NULL, CCP, RHO);
  return R_NilValue;

L87_:;
  // p1 = prom<V +>{
  //   varying3 = ld varying;
  //   varying4 = force? varying3;
  //   checkMissing(varying4);
  //   return varying4;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2827293414_1, CCP, RHO);
  // p2 = prom<V +>{
  //   sym10 = ldf seq_along;
  //   base10 = ldf seq_along in base;
  //   guard10 = `==`.4(sym10, base10);
  //   if guard10 then L1() else L2();
  // L0(r44):
  //   return r44;
  // L1():
  //   fittedPars6 = ld fittedPars;
  //   fittedPars7 = force? fittedPars6;
  //   checkMissing(fittedPars7);
  //   r45 = seq_along(fittedPars7);
  //   goto L0(r45);
  // L2():
  //   r43 = dyn base10(<sym fittedPars>);
  //   goto L0(r43);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2827293414_2, CCP, RHO);
  // r47 = dyn _in_(p1, p2)
  SEXP Rsh_Fir_array_args210[2];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args210[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names49[2];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args210, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L88() else D18()
  // L88()
  goto L88_;

D18_:;
  // deopt 77 [r47]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L88_:;
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // r48 = dyn all(r47)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r48_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args211, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L89() else D19()
  // L89()
  goto L89_;

D19_:;
  // deopt 79 [r48]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r48_1;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L89_:;
  // goto L17(r48)
  // L17(r48)
  Rsh_Fir_reg_r41_1 = Rsh_Fir_reg_r48_1;
  goto L17_;

L90_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // check L91() else D20()
  // L91()
  goto L91_;

D20_:;
  // deopt 82 []
  Rsh_Fir_deopt(82, 0, NULL, CCP, RHO);
  return R_NilValue;

L91_:;
  // r50 = dyn stop1("'varying' must be in seq_along(pars)")
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r50_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args212, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L92() else D21()
  // L92()
  goto L92_;

D21_:;
  // deopt 84 [r50]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r50_1;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L92_:;
  // goto L19()
  // L19()
  goto L19_;

D22_:;
  // deopt 88 []
  Rsh_Fir_deopt(88, 0, NULL, CCP, RHO);
  return R_NilValue;

L94_:;
  // p3 = prom<V +>{
  //   sym11 = ldf seq_along;
  //   base11 = ldf seq_along in base;
  //   guard11 = `==`.4(sym11, base11);
  //   if guard11 then L1() else L2();
  // L0(r53):
  //   visible.0();
  //   return r53;
  // L1():
  //   fittedPars8 = ld fittedPars;
  //   fittedPars9 = force? fittedPars8;
  //   checkMissing(fittedPars9);
  //   r54 = seq_along(fittedPars9);
  //   goto L0(r54);
  // L2():
  //   r52 = dyn base11(<sym fittedPars>);
  //   goto L0(r52);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2827293414_3, CCP, RHO);
  // p4 = prom<V +>{
  //   varying5 = ld varying;
  //   varying6 = force? varying5;
  //   checkMissing(varying6);
  //   return varying6;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2827293414_4, CCP, RHO);
  // r57 = dyn _in_1(p3, p4)
  SEXP Rsh_Fir_array_args218[2];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args218[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names53[2];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_reg_r57_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_1_, 2, Rsh_Fir_array_args218, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L95() else D23()
  // L95()
  goto L95_;

D23_:;
  // deopt 91 [r57]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r57_1;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L95_:;
  // r58 = `!`(r57)
  SEXP Rsh_Fir_array_args219[1];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_r57_1;
  Rsh_Fir_reg_r58_1 = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args219, Rsh_Fir_param_types_empty());
  // st varying = r58
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_r58_1, RHO);
  (void)(Rsh_Fir_reg_r58_1);
  // goto L20()
  // L20()
  goto L20_;

L97_:;
  // varying7 = ld varying
  Rsh_Fir_reg_varying7_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L99() else D24()
  // L99()
  goto L99_;

L98_:;
  // r60 = dyn base12(<sym varying>)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r60_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_1, 1, Rsh_Fir_array_args220, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L21(r60)
  // L21(r60)
  Rsh_Fir_reg_r61_1 = Rsh_Fir_reg_r60_1;
  goto L21_;

D24_:;
  // deopt 95 [varying7]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_varying7_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L99_:;
  // varying8 = force? varying7
  Rsh_Fir_reg_varying8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_varying7_);
  // checkMissing(varying8)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_varying8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args221, Rsh_Fir_param_types_empty()));
  // c17 = `is.logical`(varying8)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_varying8_;
  Rsh_Fir_reg_c17_1 = Rsh_Fir_call_builtin(385, CCP, RHO, 1, Rsh_Fir_array_args222, Rsh_Fir_param_types_empty());
  // goto L21(c17)
  // L21(c17)
  Rsh_Fir_reg_r61_1 = Rsh_Fir_reg_c17_1;
  goto L21_;

L100_:;
  // sym13 = ldf length
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base13 = ldf length in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args223[2];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args223[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args223);
  // if guard13 then L101() else L102()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L101()
    goto L101_;
  } else {
  // L102()
    goto L102_;
  }

L101_:;
  // varying9 = ld varying
  Rsh_Fir_reg_varying9_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L103() else D25()
  // L103()
  goto L103_;

L102_:;
  // r62 = dyn base13(<sym varying>)
  SEXP Rsh_Fir_array_args224[1];
  Rsh_Fir_array_args224[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names55[1];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_reg_r62_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args224, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L23(r62)
  // L23(r62)
  Rsh_Fir_reg_r63_1 = Rsh_Fir_reg_r62_1;
  goto L23_;

D25_:;
  // deopt 100 [varying9]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_varying9_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L103_:;
  // varying10 = force? varying9
  Rsh_Fir_reg_varying10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_varying9_);
  // checkMissing(varying10)
  SEXP Rsh_Fir_array_args225[1];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_varying10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args225, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r64 = dyn length3(varying10)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_varying10_;
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r64_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args226, Rsh_Fir_array_arg_names56, CCP, RHO);
  // check L104() else D26()
  // L104()
  goto L104_;

D26_:;
  // deopt 103 [r64]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r64_1;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L104_:;
  // goto L23(r64)
  // L23(r64)
  Rsh_Fir_reg_r63_1 = Rsh_Fir_reg_r64_1;
  goto L23_;

L105_:;
  // fittedPars10 = ld fittedPars
  Rsh_Fir_reg_fittedPars10_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L107() else D27()
  // L107()
  goto L107_;

L106_:;
  // r67 = dyn base14(<sym fittedPars>)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names57[1];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args227, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L24(r63, r67)
  // L24(r63, r67)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r63_1;
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r67_;
  goto L24_;

D27_:;
  // deopt 105 [r63, fittedPars10]
  SEXP Rsh_Fir_array_deopt_stack54[2];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_r63_1;
  Rsh_Fir_array_deopt_stack54[1] = Rsh_Fir_reg_fittedPars10_;
  Rsh_Fir_deopt(105, 2, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L107_:;
  // fittedPars11 = force? fittedPars10
  Rsh_Fir_reg_fittedPars11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedPars10_);
  // checkMissing(fittedPars11)
  SEXP Rsh_Fir_array_args228[1];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_fittedPars11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args228, Rsh_Fir_param_types_empty()));
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r70 = dyn length4(fittedPars11)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_fittedPars11_;
  SEXP Rsh_Fir_array_arg_names58[1];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args229, Rsh_Fir_array_arg_names58, CCP, RHO);
  // check L108() else D28()
  // L108()
  goto L108_;

D28_:;
  // deopt 108 [r63, r70]
  SEXP Rsh_Fir_array_deopt_stack55[2];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r63_1;
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_r70_;
  Rsh_Fir_deopt(108, 2, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L108_:;
  // goto L24(r63, r70)
  // L24(r63, r70)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r63_1;
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r70_;
  goto L24_;

L109_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // check L110() else D29()
  // L110()
  goto L110_;

D29_:;
  // deopt 111 []
  Rsh_Fir_deopt(111, 0, NULL, CCP, RHO);
  return R_NilValue;

L110_:;
  // r72 = dyn stop2("'varying' has wrong length")
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names59[1];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args230, Rsh_Fir_array_arg_names59, CCP, RHO);
  // check L111() else D30()
  // L111()
  goto L111_;

D30_:;
  // deopt 113 [r72]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L111_:;
  // goto L26(r72)
  // L26(r72)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r72_;
  goto L26_;

L114_:;
  // varying11 = ld varying
  Rsh_Fir_reg_varying11_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // check L116() else D31()
  // L116()
  goto L116_;

L115_:;
  // r74 = dyn base15(<sym varying>)
  SEXP Rsh_Fir_array_args231[1];
  Rsh_Fir_array_args231[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names60[1];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args231, Rsh_Fir_array_arg_names60, CCP, RHO);
  // goto L27(r74)
  // L27(r74)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r74_;
  goto L27_;

D31_:;
  // deopt 117 [varying11]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_varying11_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L116_:;
  // varying12 = force? varying11
  Rsh_Fir_reg_varying12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_varying11_);
  // checkMissing(varying12)
  SEXP Rsh_Fir_array_args232[1];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_varying12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args232, Rsh_Fir_param_types_empty()));
  // c20 = `is.character`(varying12)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_varying12_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty());
  // goto L27(c20)
  // L27(c20)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_c20_;
  goto L27_;

L117_:;
  // sym16 = ldf all
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // base16 = ldf all in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args234[2];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args234[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args234);
  // if guard16 then L118() else L119()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L118()
    goto L118_;
  } else {
  // L119()
    goto L119_;
  }

L118_:;
  // _in_2 = ldf `%in%`
  Rsh_Fir_reg__in_2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L120() else D32()
  // L120()
  goto L120_;

L119_:;
  // r76 = dyn base16(<lang `%in%`(varying, names(fittedPars))>)
  SEXP Rsh_Fir_array_args235[1];
  Rsh_Fir_array_args235[0] = Rsh_const(CCP, 66);
  SEXP Rsh_Fir_array_arg_names61[1];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args235, Rsh_Fir_array_arg_names61, CCP, RHO);
  // goto L29(r76)
  // L29(r76)
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r76_;
  goto L29_;

D32_:;
  // deopt 123 []
  Rsh_Fir_deopt(123, 0, NULL, CCP, RHO);
  return R_NilValue;

L120_:;
  // p5 = prom<V +>{
  //   varying13 = ld varying;
  //   varying14 = force? varying13;
  //   checkMissing(varying14);
  //   return varying14;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2827293414_5, CCP, RHO);
  // p6 = prom<V +>{
  //   sym17 = ldf names;
  //   base17 = ldf names in base;
  //   guard17 = `==`.4(sym17, base17);
  //   if guard17 then L1() else L2();
  // L0(r80):
  //   return r80;
  // L1():
  //   fittedPars12 = ld fittedPars;
  //   fittedPars13 = force? fittedPars12;
  //   checkMissing(fittedPars13);
  //   names = ldf names in base;
  //   r81 = dyn names(fittedPars13);
  //   goto L0(r81);
  // L2():
  //   r79 = dyn base17(<sym fittedPars>);
  //   goto L0(r79);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2827293414_6, CCP, RHO);
  // r83 = dyn _in_2(p5, p6)
  SEXP Rsh_Fir_array_args241[2];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args241[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names64[2];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_2_, 2, Rsh_Fir_array_args241, Rsh_Fir_array_arg_names64, CCP, RHO);
  // check L121() else D33()
  // L121()
  goto L121_;

D33_:;
  // deopt 126 [r83]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L121_:;
  // all1 = ldf all in base
  Rsh_Fir_reg_all1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // r84 = dyn all1(r83)
  SEXP Rsh_Fir_array_args242[1];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_array_arg_names65[1];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all1_, 1, Rsh_Fir_array_args242, Rsh_Fir_array_arg_names65, CCP, RHO);
  // check L122() else D34()
  // L122()
  goto L122_;

D34_:;
  // deopt 128 [r84]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_deopt(128, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L122_:;
  // goto L29(r84)
  // L29(r84)
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r84_;
  goto L29_;

L123_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // check L124() else D35()
  // L124()
  goto L124_;

D35_:;
  // deopt 131 []
  Rsh_Fir_deopt(131, 0, NULL, CCP, RHO);
  return R_NilValue;

L124_:;
  // r86 = dyn stop3("'varying' must be in seq_along(pars)")
  SEXP Rsh_Fir_array_args243[1];
  Rsh_Fir_array_args243[0] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names66[1];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args243, Rsh_Fir_array_arg_names66, CCP, RHO);
  // check L125() else D36()
  // L125()
  goto L125_;

D36_:;
  // deopt 133 [r86]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L125_:;
  // goto L31()
  // L31()
  goto L31_;

D37_:;
  // deopt 137 []
  Rsh_Fir_deopt(137, 0, NULL, CCP, RHO);
  return R_NilValue;

L127_:;
  // p7 = prom<V +>{
  //   sym18 = ldf names;
  //   base18 = ldf names in base;
  //   guard18 = `==`.4(sym18, base18);
  //   if guard18 then L1() else L2();
  // L0(r89):
  //   return r89;
  // L1():
  //   fittedPars14 = ld fittedPars;
  //   fittedPars15 = force? fittedPars14;
  //   checkMissing(fittedPars15);
  //   names1 = ldf names in base;
  //   r90 = dyn names1(fittedPars15);
  //   goto L0(r90);
  // L2():
  //   r88 = dyn base18(<sym fittedPars>);
  //   goto L0(r88);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2827293414_7, CCP, RHO);
  // p8 = prom<V +>{
  //   varying15 = ld varying;
  //   varying16 = force? varying15;
  //   checkMissing(varying16);
  //   return varying16;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2827293414_8, CCP, RHO);
  // r93 = dyn _in_3(p7, p8)
  SEXP Rsh_Fir_array_args249[2];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args249[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names69[2];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_array_arg_names69[1] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_3_, 2, Rsh_Fir_array_args249, Rsh_Fir_array_arg_names69, CCP, RHO);
  // check L128() else D38()
  // L128()
  goto L128_;

D38_:;
  // deopt 140 [r93]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L128_:;
  // r94 = `!`(r93)
  SEXP Rsh_Fir_array_args250[1];
  Rsh_Fir_array_args250[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args250, Rsh_Fir_param_types_empty());
  // st varying = r94
  Rsh_Fir_store(Rsh_const(CCP, 50), Rsh_Fir_reg_r94_, RHO);
  (void)(Rsh_Fir_reg_r94_);
  // goto L20()
  // L20()
  goto L20_;

D39_:;
  // deopt 144 []
  Rsh_Fir_deopt(144, 0, NULL, CCP, RHO);
  return R_NilValue;

L130_:;
  // r95 = dyn stop4("'varying' must be logical, integer or character")
  SEXP Rsh_Fir_array_args251[1];
  Rsh_Fir_array_args251[0] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names70[1];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop4_, 1, Rsh_Fir_array_args251, Rsh_Fir_array_arg_names70, CCP, RHO);
  // check L131() else D40()
  // L131()
  goto L131_;

D40_:;
  // deopt 146 [r95]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L131_:;
  // goto L20()
  // L20()
  goto L20_;

D41_:;
  // deopt 147 [varying17]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_varying17_;
  Rsh_Fir_deopt(147, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L132_:;
  // varying18 = force? varying17
  Rsh_Fir_reg_varying18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_varying17_);
  // checkMissing(varying18)
  SEXP Rsh_Fir_array_args252[1];
  Rsh_Fir_array_args252[0] = Rsh_Fir_reg_varying18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args252, Rsh_Fir_param_types_empty()));
  // sst defaultVary = varying18
  Rsh_Fir_super_store(Rsh_const(CCP, 9), Rsh_Fir_reg_varying18_, RHO);
  (void)(Rsh_Fir_reg_varying18_);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return varying18
  return Rsh_Fir_reg_varying18_;
}
SEXP Rsh_Fir_user_promise_inner2827293414_(SEXP CCP, SEXP RHO) {
  // fittedPars = ld fittedPars
  Rsh_Fir_reg_fittedPars1 = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // fittedPars1 = force? fittedPars
  Rsh_Fir_reg_fittedPars1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedPars1);
  // checkMissing(fittedPars1)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_fittedPars1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty()));
  // return fittedPars1
  return Rsh_Fir_reg_fittedPars1_1;
}
SEXP Rsh_Fir_user_promise_inner2827293414_1(SEXP CCP, SEXP RHO) {
  // varying3 = ld varying
  Rsh_Fir_reg_varying3_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // varying4 = force? varying3
  Rsh_Fir_reg_varying4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_varying3_);
  // checkMissing(varying4)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_varying4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args205, Rsh_Fir_param_types_empty()));
  // return varying4
  return Rsh_Fir_reg_varying4_;
}
SEXP Rsh_Fir_user_promise_inner2827293414_2(SEXP CCP, SEXP RHO) {
  // sym10 = ldf seq_along
  Rsh_Fir_reg_sym10_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // base10 = ldf seq_along in base
  Rsh_Fir_reg_base10_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args206[2];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_sym10_1;
  Rsh_Fir_array_args206[1] = Rsh_Fir_reg_base10_1;
  Rsh_Fir_reg_guard10_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args206);
  // if guard10 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r44
  return Rsh_Fir_reg_r44_1;

L1_:;
  // fittedPars6 = ld fittedPars
  Rsh_Fir_reg_fittedPars6_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // fittedPars7 = force? fittedPars6
  Rsh_Fir_reg_fittedPars7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedPars6_);
  // checkMissing(fittedPars7)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_fittedPars7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args207, Rsh_Fir_param_types_empty()));
  // r45 = seq_along(fittedPars7)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_fittedPars7_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty());
  // goto L0(r45)
  // L0(r45)
  Rsh_Fir_reg_r44_1 = Rsh_Fir_reg_r45_;
  goto L0_;

L2_:;
  // r43 = dyn base10(<sym fittedPars>)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r43_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_1, 1, Rsh_Fir_array_args209, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L0(r43)
  // L0(r43)
  Rsh_Fir_reg_r44_1 = Rsh_Fir_reg_r43_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2827293414_3(SEXP CCP, SEXP RHO) {
  // sym11 = ldf seq_along
  Rsh_Fir_reg_sym11_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // base11 = ldf seq_along in base
  Rsh_Fir_reg_base11_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args213[2];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_sym11_1;
  Rsh_Fir_array_args213[1] = Rsh_Fir_reg_base11_1;
  Rsh_Fir_reg_guard11_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args213);
  // if guard11 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // visible.0()
  (void)(Rsh_Fir_intrinsic_visible_v0(CCP, RHO, 0, NULL));
  // return r53
  return Rsh_Fir_reg_r53_1;

L1_:;
  // fittedPars8 = ld fittedPars
  Rsh_Fir_reg_fittedPars8_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // fittedPars9 = force? fittedPars8
  Rsh_Fir_reg_fittedPars9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedPars8_);
  // checkMissing(fittedPars9)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_fittedPars9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty()));
  // r54 = seq_along(fittedPars9)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_fittedPars9_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty());
  // goto L0(r54)
  // L0(r54)
  Rsh_Fir_reg_r53_1 = Rsh_Fir_reg_r54_;
  goto L0_;

L2_:;
  // r52 = dyn base11(<sym fittedPars>)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r52_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_1, 1, Rsh_Fir_array_args216, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L0(r52)
  // L0(r52)
  Rsh_Fir_reg_r53_1 = Rsh_Fir_reg_r52_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2827293414_4(SEXP CCP, SEXP RHO) {
  // varying5 = ld varying
  Rsh_Fir_reg_varying5_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // varying6 = force? varying5
  Rsh_Fir_reg_varying6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_varying5_);
  // checkMissing(varying6)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_varying6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args217, Rsh_Fir_param_types_empty()));
  // return varying6
  return Rsh_Fir_reg_varying6_;
}
SEXP Rsh_Fir_user_promise_inner2827293414_5(SEXP CCP, SEXP RHO) {
  // varying13 = ld varying
  Rsh_Fir_reg_varying13_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // varying14 = force? varying13
  Rsh_Fir_reg_varying14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_varying13_);
  // checkMissing(varying14)
  SEXP Rsh_Fir_array_args236[1];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_varying14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args236, Rsh_Fir_param_types_empty()));
  // return varying14
  return Rsh_Fir_reg_varying14_;
}
SEXP Rsh_Fir_user_promise_inner2827293414_6(SEXP CCP, SEXP RHO) {
  // sym17 = ldf names
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // base17 = ldf names in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args237[2];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args237[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args237);
  // if guard17 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
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
  // fittedPars12 = ld fittedPars
  Rsh_Fir_reg_fittedPars12_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // fittedPars13 = force? fittedPars12
  Rsh_Fir_reg_fittedPars13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedPars12_);
  // checkMissing(fittedPars13)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_fittedPars13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args238, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r81 = dyn names(fittedPars13)
  SEXP Rsh_Fir_array_args239[1];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_fittedPars13_;
  SEXP Rsh_Fir_array_arg_names62[1];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args239, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L0(r81)
  // L0(r81)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r81_;
  goto L0_;

L2_:;
  // r79 = dyn base17(<sym fittedPars>)
  SEXP Rsh_Fir_array_args240[1];
  Rsh_Fir_array_args240[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names63[1];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args240, Rsh_Fir_array_arg_names63, CCP, RHO);
  // goto L0(r79)
  // L0(r79)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r79_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2827293414_7(SEXP CCP, SEXP RHO) {
  // sym18 = ldf names
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // base18 = ldf names in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args244[2];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args244[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args244);
  // if guard18 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r89
  return Rsh_Fir_reg_r89_;

L1_:;
  // fittedPars14 = ld fittedPars
  Rsh_Fir_reg_fittedPars14_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // fittedPars15 = force? fittedPars14
  Rsh_Fir_reg_fittedPars15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedPars14_);
  // checkMissing(fittedPars15)
  SEXP Rsh_Fir_array_args245[1];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_fittedPars15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args245, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r90 = dyn names1(fittedPars15)
  SEXP Rsh_Fir_array_args246[1];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_fittedPars15_;
  SEXP Rsh_Fir_array_arg_names67[1];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args246, Rsh_Fir_array_arg_names67, CCP, RHO);
  // goto L0(r90)
  // L0(r90)
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r90_;
  goto L0_;

L2_:;
  // r88 = dyn base18(<sym fittedPars>)
  SEXP Rsh_Fir_array_args247[1];
  Rsh_Fir_array_args247[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names68[1];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args247, Rsh_Fir_array_arg_names68, CCP, RHO);
  // goto L0(r88)
  // L0(r88)
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r88_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2827293414_8(SEXP CCP, SEXP RHO) {
  // varying15 = ld varying
  Rsh_Fir_reg_varying15_ = Rsh_Fir_load(Rsh_const(CCP, 50), RHO);
  // varying16 = force? varying15
  Rsh_Fir_reg_varying16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_varying15_);
  // checkMissing(varying16)
  SEXP Rsh_Fir_array_args248[1];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_varying16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args248, Rsh_Fir_param_types_empty()));
  // return varying16
  return Rsh_Fir_reg_varying16_;
}
SEXP Rsh_Fir_user_function_inner1246119658_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1246119658 dynamic dispatch ([`...`])

  return Rsh_Fir_user_version_inner1246119658_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1246119658_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1246119658 version 0 (dots -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1246119658/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_ddd1;  // ddd
  SEXP Rsh_Fir_reg_sym2;  // sym
  SEXP Rsh_Fir_reg_base2;  // base
  SEXP Rsh_Fir_reg_guard2;  // guard
  SEXP Rsh_Fir_reg_r3;  // r
  SEXP Rsh_Fir_reg_r1_2;  // r1
  SEXP Rsh_Fir_reg_list1;  // list
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r2_2;  // r2
  SEXP Rsh_Fir_reg_sym1_2;  // sym1
  SEXP Rsh_Fir_reg_base1_2;  // base1
  SEXP Rsh_Fir_reg_guard1_2;  // guard1
  SEXP Rsh_Fir_reg_r3_2;  // r3
  SEXP Rsh_Fir_reg_r4_2;  // r4
  SEXP Rsh_Fir_reg_args;  // args
  SEXP Rsh_Fir_reg_args1_;  // args1
  SEXP Rsh_Fir_reg_length2;  // length
  SEXP Rsh_Fir_reg_r5_2;  // r5
  SEXP Rsh_Fir_reg_r6_2;  // r6
  SEXP Rsh_Fir_reg_c2;  // c
  SEXP Rsh_Fir_reg_defaultVary;  // defaultVary
  SEXP Rsh_Fir_reg_defaultVary1_;  // defaultVary1
  SEXP Rsh_Fir_reg_defaultPars2;  // defaultPars
  SEXP Rsh_Fir_reg_defaultPars1_2;  // defaultPars1
  SEXP Rsh_Fir_reg_sym2_2;  // sym2
  SEXP Rsh_Fir_reg_base2_2;  // base2
  SEXP Rsh_Fir_reg_guard2_2;  // guard2
  SEXP Rsh_Fir_reg_r7_2;  // r7
  SEXP Rsh_Fir_reg_r8_2;  // r8
  SEXP Rsh_Fir_reg_args2_;  // args2
  SEXP Rsh_Fir_reg_args3_;  // args3
  SEXP Rsh_Fir_reg_length1_2;  // length1
  SEXP Rsh_Fir_reg_r9_1;  // r9
  SEXP Rsh_Fir_reg_r10_2;  // r10
  SEXP Rsh_Fir_reg_c1_1;  // c1
  SEXP Rsh_Fir_reg_c3_1;  // c3
  SEXP Rsh_Fir_reg_sym3_2;  // sym3
  SEXP Rsh_Fir_reg_base3_2;  // base3
  SEXP Rsh_Fir_reg_guard3_2;  // guard3
  SEXP Rsh_Fir_reg_r11_2;  // r11
  SEXP Rsh_Fir_reg_c6_2;  // c6
  SEXP Rsh_Fir_reg_r12_2;  // r12
  SEXP Rsh_Fir_reg_args4_;  // args4
  SEXP Rsh_Fir_reg_args5_;  // args5
  SEXP Rsh_Fir_reg_c7_2;  // c7
  SEXP Rsh_Fir_reg_c9_2;  // c9
  SEXP Rsh_Fir_reg_args7_;  // args7
  SEXP Rsh_Fir_reg_dr2;  // dr
  SEXP Rsh_Fir_reg_dc2;  // dc
  SEXP Rsh_Fir_reg_dx2;  // dx
  SEXP Rsh_Fir_reg_c11_2;  // c11
  SEXP Rsh_Fir_reg_dx1_2;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r13_2;  // r13
  SEXP Rsh_Fir_reg_c12_2;  // c12
  SEXP Rsh_Fir_reg_c13_2;  // c13
  SEXP Rsh_Fir_reg_c14_2;  // c14
  SEXP Rsh_Fir_reg_c16_2;  // c16
  SEXP Rsh_Fir_reg_args8_;  // args8
  SEXP Rsh_Fir_reg_args9_;  // args9
  SEXP Rsh_Fir_reg_c17_2;  // c17
  SEXP Rsh_Fir_reg_args11_;  // args11
  SEXP Rsh_Fir_reg_dr2_2;  // dr2
  SEXP Rsh_Fir_reg_dc1_2;  // dc1
  SEXP Rsh_Fir_reg_dx2_2;  // dx2
  SEXP Rsh_Fir_reg_dx3_2;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r14_2;  // r14
  SEXP Rsh_Fir_reg_unlist;  // unlist
  SEXP Rsh_Fir_reg_args12_;  // args12
  SEXP Rsh_Fir_reg_args13_;  // args13
  SEXP Rsh_Fir_reg_c18_1;  // c18
  SEXP Rsh_Fir_reg_args15_;  // args15
  SEXP Rsh_Fir_reg_dr4_1;  // dr4
  SEXP Rsh_Fir_reg_dc2_1;  // dc2
  SEXP Rsh_Fir_reg_dx4_1;  // dx4
  SEXP Rsh_Fir_reg_dx5_2;  // dx5
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r15_2;  // r15
  SEXP Rsh_Fir_reg_p2;  // p
  SEXP Rsh_Fir_reg_r17_2;  // r17
  SEXP Rsh_Fir_reg_defaultPars3_1;  // defaultPars3
  SEXP Rsh_Fir_reg_defaultPars4_1;  // defaultPars4
  SEXP Rsh_Fir_reg_params1;  // params
  SEXP Rsh_Fir_reg_params1_1;  // params1
  SEXP Rsh_Fir_reg_l1;  // l
  SEXP Rsh_Fir_reg_c19_1;  // c19
  SEXP Rsh_Fir_reg_params3_1;  // params3
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr6_1;  // dr6
  SEXP Rsh_Fir_reg_dc3_1;  // dc3
  SEXP Rsh_Fir_reg_dx6_1;  // dx6
  SEXP Rsh_Fir_reg_params5_;  // params5
  SEXP Rsh_Fir_reg_dx7_1;  // dx7
  SEXP Rsh_Fir_reg_vary;  // vary
  SEXP Rsh_Fir_reg_vary1_;  // vary1
  SEXP Rsh_Fir_reg_r18_2;  // r18
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r19_2;  // r19
  SEXP Rsh_Fir_reg_sym4_2;  // sym4
  SEXP Rsh_Fir_reg_base4_2;  // base4
  SEXP Rsh_Fir_reg_guard4_2;  // guard4
  SEXP Rsh_Fir_reg_r20_2;  // r20
  SEXP Rsh_Fir_reg_r21_2;  // r21
  SEXP Rsh_Fir_reg_args16_;  // args16
  SEXP Rsh_Fir_reg_args17_;  // args17
  SEXP Rsh_Fir_reg_length2_2;  // length2
  SEXP Rsh_Fir_reg_r22_2;  // r22
  SEXP Rsh_Fir_reg_r23_2;  // r23
  SEXP Rsh_Fir_reg_c20_1;  // c20
  SEXP Rsh_Fir_reg_c22_1;  // c22
  SEXP Rsh_Fir_reg_sym5_2;  // sym5
  SEXP Rsh_Fir_reg_base5_2;  // base5
  SEXP Rsh_Fir_reg_guard5_2;  // guard5
  SEXP Rsh_Fir_reg_r24_1;  // r24
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_r25_1;  // r25
  SEXP Rsh_Fir_reg_args18_;  // args18
  SEXP Rsh_Fir_reg_args19_;  // args19
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_args21_;  // args21
  SEXP Rsh_Fir_reg_dr8_1;  // dr8
  SEXP Rsh_Fir_reg_dc4_1;  // dc4
  SEXP Rsh_Fir_reg_dx8_1;  // dx8
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_dx9_1;  // dx9
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r26_2;  // r26
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r27_2;  // r27
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_unlist1_;  // unlist1
  SEXP Rsh_Fir_reg_args22_;  // args22
  SEXP Rsh_Fir_reg_args23_;  // args23
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_args25_;  // args25
  SEXP Rsh_Fir_reg_dr10_1;  // dr10
  SEXP Rsh_Fir_reg_dc5_1;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_1;  // dx11
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r28_2;  // r28
  SEXP Rsh_Fir_reg_p1_2;  // p1
  SEXP Rsh_Fir_reg_r30_2;  // r30
  SEXP Rsh_Fir_reg_sym6_2;  // sym6
  SEXP Rsh_Fir_reg_base6_2;  // base6
  SEXP Rsh_Fir_reg_guard6_2;  // guard6
  SEXP Rsh_Fir_reg_r32_1;  // r32
  SEXP Rsh_Fir_reg_r33_2;  // r33
  SEXP Rsh_Fir_reg_sapply;  // sapply
  SEXP Rsh_Fir_reg_args26_;  // args26
  SEXP Rsh_Fir_reg_args27_;  // args27
  SEXP Rsh_Fir_reg_p2_1;  // p2
  SEXP Rsh_Fir_reg_is_numeric1;  // is_numeric
  SEXP Rsh_Fir_reg_is_numeric1_;  // is_numeric1
  SEXP Rsh_Fir_reg_p3_1;  // p3
  SEXP Rsh_Fir_reg_r36_2;  // r36
  SEXP Rsh_Fir_reg_all1;  // all
  SEXP Rsh_Fir_reg_r37_2;  // r37
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_unlist2_;  // unlist2
  SEXP Rsh_Fir_reg_args28_;  // args28
  SEXP Rsh_Fir_reg_args29_;  // args29
  SEXP Rsh_Fir_reg_p4_1;  // p4
  SEXP Rsh_Fir_reg_r39_2;  // r39
  SEXP Rsh_Fir_reg_stop1;  // stop
  SEXP Rsh_Fir_reg_r40_2;  // r40
  SEXP Rsh_Fir_reg_sym7_2;  // sym7
  SEXP Rsh_Fir_reg_base7_2;  // base7
  SEXP Rsh_Fir_reg_guard7_2;  // guard7
  SEXP Rsh_Fir_reg_r41_2;  // r41
  SEXP Rsh_Fir_reg_r42_1;  // r42
  SEXP Rsh_Fir_reg__in_1;  // _in_
  SEXP Rsh_Fir_reg_sym8_2;  // sym8
  SEXP Rsh_Fir_reg_base8_2;  // base8
  SEXP Rsh_Fir_reg_guard8_2;  // guard8
  SEXP Rsh_Fir_reg_r43_2;  // r43
  SEXP Rsh_Fir_reg_r44_2;  // r44
  SEXP Rsh_Fir_reg_params6_;  // params6
  SEXP Rsh_Fir_reg_params7_;  // params7
  SEXP Rsh_Fir_reg_names1;  // names
  SEXP Rsh_Fir_reg_r45_1;  // r45
  SEXP Rsh_Fir_reg_p5_1;  // p5
  SEXP Rsh_Fir_reg_sym9_2;  // sym9
  SEXP Rsh_Fir_reg_base9_2;  // base9
  SEXP Rsh_Fir_reg_guard9_2;  // guard9
  SEXP Rsh_Fir_reg_r47_1;  // r47
  SEXP Rsh_Fir_reg_r48_2;  // r48
  SEXP Rsh_Fir_reg_fittedPars2;  // fittedPars
  SEXP Rsh_Fir_reg_fittedPars1_2;  // fittedPars1
  SEXP Rsh_Fir_reg_names1_1;  // names1
  SEXP Rsh_Fir_reg_r49_1;  // r49
  SEXP Rsh_Fir_reg_p6_1;  // p6
  SEXP Rsh_Fir_reg_r51_1;  // r51
  SEXP Rsh_Fir_reg_all1_1;  // all1
  SEXP Rsh_Fir_reg_r52_2;  // r52
  SEXP Rsh_Fir_reg_r53_2;  // r53
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_stop1_1;  // stop1
  SEXP Rsh_Fir_reg_r54_1;  // r54
  SEXP Rsh_Fir_reg_defaultPars5_1;  // defaultPars5
  SEXP Rsh_Fir_reg_defaultPars6_;  // defaultPars6
  SEXP Rsh_Fir_reg__in_1_1;  // _in_1
  SEXP Rsh_Fir_reg_sym10_2;  // sym10
  SEXP Rsh_Fir_reg_base10_2;  // base10
  SEXP Rsh_Fir_reg_guard10_2;  // guard10
  SEXP Rsh_Fir_reg_r56_1;  // r56
  SEXP Rsh_Fir_reg_r57_2;  // r57
  SEXP Rsh_Fir_reg_fittedPars2_1;  // fittedPars2
  SEXP Rsh_Fir_reg_fittedPars3_1;  // fittedPars3
  SEXP Rsh_Fir_reg_names2_;  // names2
  SEXP Rsh_Fir_reg_r58_2;  // r58
  SEXP Rsh_Fir_reg_p7_1;  // p7
  SEXP Rsh_Fir_reg_sym11_2;  // sym11
  SEXP Rsh_Fir_reg_base11_2;  // base11
  SEXP Rsh_Fir_reg_guard11_2;  // guard11
  SEXP Rsh_Fir_reg_r60_2;  // r60
  SEXP Rsh_Fir_reg_r61_2;  // r61
  SEXP Rsh_Fir_reg_params8_;  // params8
  SEXP Rsh_Fir_reg_params9_;  // params9
  SEXP Rsh_Fir_reg_names3_;  // names3
  SEXP Rsh_Fir_reg_r62_2;  // r62
  SEXP Rsh_Fir_reg_p8_1;  // p8
  SEXP Rsh_Fir_reg_r64_2;  // r64
  SEXP Rsh_Fir_reg_r65_1;  // r65
  SEXP Rsh_Fir_reg_params10_;  // params10
  SEXP Rsh_Fir_reg_params11_;  // params11
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_params13_;  // params13
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr12_1;  // dr12
  SEXP Rsh_Fir_reg_dc6_1;  // dc6
  SEXP Rsh_Fir_reg_dx12_1;  // dx12
  SEXP Rsh_Fir_reg_params15_;  // params15
  SEXP Rsh_Fir_reg_dx13_1;  // dx13
  SEXP Rsh_Fir_reg_vary2_;  // vary2
  SEXP Rsh_Fir_reg_vary3_;  // vary3
  SEXP Rsh_Fir_reg_r66_1;  // r66
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r67_1;  // r67
  SEXP Rsh_Fir_reg_fittedModel2;  // fittedModel
  SEXP Rsh_Fir_reg_fittedModel1_2;  // fittedModel1
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_fittedModel3_2;  // fittedModel3
  SEXP Rsh_Fir_reg_dr14_1;  // dr14
  SEXP Rsh_Fir_reg_dc7_1;  // dc7
  SEXP Rsh_Fir_reg_dx14_1;  // dx14
  SEXP Rsh_Fir_reg_dx15_1;  // dx15
  SEXP Rsh_Fir_reg_r68_1;  // r68
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_r69_1;  // r69
  SEXP Rsh_Fir_reg_fittedModel4_1;  // fittedModel4
  SEXP Rsh_Fir_reg_fittedModel5_1;  // fittedModel5
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_fittedModel7_1;  // fittedModel7
  SEXP Rsh_Fir_reg_dr16_1;  // dr16
  SEXP Rsh_Fir_reg_dc8_1;  // dc8
  SEXP Rsh_Fir_reg_dx17_1;  // dx17
  SEXP Rsh_Fir_reg_dx18_1;  // dx18
  SEXP Rsh_Fir_reg_r70_1;  // r70
  SEXP Rsh_Fir_reg_dx19_1;  // dx19
  SEXP Rsh_Fir_reg_startPars;  // startPars
  SEXP Rsh_Fir_reg_startPars1_;  // startPars1
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r72_1;  // r72
  SEXP Rsh_Fir_reg_fittedModel8_;  // fittedModel8
  SEXP Rsh_Fir_reg_fittedModel9_;  // fittedModel9
  SEXP Rsh_Fir_reg_c41_;  // c41
  SEXP Rsh_Fir_reg_fittedModel11_;  // fittedModel11
  SEXP Rsh_Fir_reg_dr18_1;  // dr18
  SEXP Rsh_Fir_reg_dc9_1;  // dc9
  SEXP Rsh_Fir_reg_dx20_1;  // dx20
  SEXP Rsh_Fir_reg_dx21_1;  // dx21
  SEXP Rsh_Fir_reg_r73_1;  // r73
  SEXP Rsh_Fir_reg_dx22_1;  // dx22
  SEXP Rsh_Fir_reg_vary4_;  // vary4
  SEXP Rsh_Fir_reg_vary5_;  // vary5
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r75_1;  // r75
  SEXP Rsh_Fir_reg_fittedModel12_;  // fittedModel12
  SEXP Rsh_Fir_reg_fittedModel13_;  // fittedModel13
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_fittedModel15_;  // fittedModel15
  SEXP Rsh_Fir_reg_dr20_1;  // dr20
  SEXP Rsh_Fir_reg_dc10_1;  // dc10
  SEXP Rsh_Fir_reg_dx23_1;  // dx23
  SEXP Rsh_Fir_reg_dx24_1;  // dx24
  SEXP Rsh_Fir_reg_r76_1;  // r76
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_startPars2_;  // startPars2
  SEXP Rsh_Fir_reg_startPars3_;  // startPars3
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_startPars5_;  // startPars5
  SEXP Rsh_Fir_reg_dr22_1;  // dr22
  SEXP Rsh_Fir_reg_dc11_1;  // dc11
  SEXP Rsh_Fir_reg_dx26_1;  // dx26
  SEXP Rsh_Fir_reg_dx27_1;  // dx27
  SEXP Rsh_Fir_reg_vary6_;  // vary6
  SEXP Rsh_Fir_reg_vary7_;  // vary7
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r77_1;  // r77
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r79_1;  // r79
  SEXP Rsh_Fir_reg_algorithm;  // algorithm
  SEXP Rsh_Fir_reg_algorithm1_;  // algorithm1
  SEXP Rsh_Fir_reg_r80_1;  // r80
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_sym12_2;  // sym12
  SEXP Rsh_Fir_reg_base12_2;  // base12
  SEXP Rsh_Fir_reg_guard12_2;  // guard12
  SEXP Rsh_Fir_reg_r81_1;  // r81
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_vary8_;  // vary8
  SEXP Rsh_Fir_reg_vary9_;  // vary9
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r83_1;  // r83
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_sym13_1;  // sym13
  SEXP Rsh_Fir_reg_base13_1;  // base13
  SEXP Rsh_Fir_reg_guard13_1;  // guard13
  SEXP Rsh_Fir_reg_r84_1;  // r84
  SEXP Rsh_Fir_reg_r85_1;  // r85
  SEXP Rsh_Fir_reg_C_nls_iter;  // C_nls_iter
  SEXP Rsh_Fir_reg_C_nls_iter1_;  // C_nls_iter1
  SEXP Rsh_Fir_reg_fittedModel16_;  // fittedModel16
  SEXP Rsh_Fir_reg_fittedModel17_;  // fittedModel17
  SEXP Rsh_Fir_reg_ctrl;  // ctrl
  SEXP Rsh_Fir_reg_ctrl1_;  // ctrl1
  SEXP Rsh_Fir_reg_trace;  // trace
  SEXP Rsh_Fir_reg_trace1_;  // trace1
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r86_1;  // r86
  SEXP Rsh_Fir_reg_fittedModel18_;  // fittedModel18
  SEXP Rsh_Fir_reg_fittedModel19_;  // fittedModel19
  SEXP Rsh_Fir_reg_c46_;  // c46
  SEXP Rsh_Fir_reg_fittedModel21_;  // fittedModel21
  SEXP Rsh_Fir_reg_dr24_1;  // dr24
  SEXP Rsh_Fir_reg_dc12_1;  // dc12
  SEXP Rsh_Fir_reg_dx28_1;  // dx28
  SEXP Rsh_Fir_reg_dx29_1;  // dx29
  SEXP Rsh_Fir_reg_r88_1;  // r88
  SEXP Rsh_Fir_reg_dx30_1;  // dx30
  SEXP Rsh_Fir_reg_r89_1;  // r89
  SEXP Rsh_Fir_reg_nls_port_fit;  // nls_port_fit
  SEXP Rsh_Fir_reg_fittedModel22_;  // fittedModel22
  SEXP Rsh_Fir_reg_fittedModel23_;  // fittedModel23
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_startPars6_;  // startPars6
  SEXP Rsh_Fir_reg_startPars7_;  // startPars7
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_startPars9_;  // startPars9
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_dx32_1;  // dx32
  SEXP Rsh_Fir_reg_vary10_;  // vary10
  SEXP Rsh_Fir_reg_vary11_;  // vary11
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_lower1;  // lower
  SEXP Rsh_Fir_reg_lower1_1;  // lower1
  SEXP Rsh_Fir_reg_c48_;  // c48
  SEXP Rsh_Fir_reg_lower3_1;  // lower3
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx33_1;  // dx33
  SEXP Rsh_Fir_reg_dx34_1;  // dx34
  SEXP Rsh_Fir_reg_vary12_;  // vary12
  SEXP Rsh_Fir_reg_vary13_;  // vary13
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r94_1;  // r94
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_upper1;  // upper
  SEXP Rsh_Fir_reg_upper1_1;  // upper1
  SEXP Rsh_Fir_reg_c49_;  // c49
  SEXP Rsh_Fir_reg_upper3_1;  // upper3
  SEXP Rsh_Fir_reg_dr30_;  // dr30
  SEXP Rsh_Fir_reg_dc15_;  // dc15
  SEXP Rsh_Fir_reg_dx35_1;  // dx35
  SEXP Rsh_Fir_reg_dx36_1;  // dx36
  SEXP Rsh_Fir_reg_vary14_;  // vary14
  SEXP Rsh_Fir_reg_vary15_;  // vary15
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_ctrl2_;  // ctrl2
  SEXP Rsh_Fir_reg_ctrl3_;  // ctrl3
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_trace2_;  // trace2
  SEXP Rsh_Fir_reg_trace3_;  // trace3
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg__in_2_1;  // _in_2
  SEXP Rsh_Fir_reg_iv;  // iv
  SEXP Rsh_Fir_reg_iv1_;  // iv1
  SEXP Rsh_Fir_reg_c50_;  // c50
  SEXP Rsh_Fir_reg_iv3_;  // iv3
  SEXP Rsh_Fir_reg_dr32_;  // dr32
  SEXP Rsh_Fir_reg_dc16_;  // dc16
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_p19_;  // p19
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_c51_;  // c51
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_fittedModel24_;  // fittedModel24
  SEXP Rsh_Fir_reg_fittedModel25_;  // fittedModel25
  SEXP Rsh_Fir_reg_c52_;  // c52
  SEXP Rsh_Fir_reg_fittedModel27_;  // fittedModel27
  SEXP Rsh_Fir_reg_dr34_;  // dr34
  SEXP Rsh_Fir_reg_dc17_;  // dc17
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg_dx40_;  // dx40
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg_fittedModel28_;  // fittedModel28
  SEXP Rsh_Fir_reg_fittedModel29_;  // fittedModel29
  SEXP Rsh_Fir_reg_dev;  // dev
  SEXP Rsh_Fir_reg_dev1_;  // dev1
  SEXP Rsh_Fir_reg_S_hat;  // S_hat
  SEXP Rsh_Fir_reg_S_hat1_;  // S_hat1
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_s2_hat;  // s2_hat
  SEXP Rsh_Fir_reg_s2_hat1_;  // s2_hat1
  SEXP Rsh_Fir_reg_r110_;  // r110
  SEXP Rsh_Fir_reg_fittedModel30_;  // fittedModel30
  SEXP Rsh_Fir_reg_fittedModel31_;  // fittedModel31
  SEXP Rsh_Fir_reg_c53_;  // c53
  SEXP Rsh_Fir_reg_fittedModel33_;  // fittedModel33
  SEXP Rsh_Fir_reg_dr36_;  // dr36
  SEXP Rsh_Fir_reg_dc18_;  // dc18
  SEXP Rsh_Fir_reg_dx42_;  // dx42
  SEXP Rsh_Fir_reg_dx43_;  // dx43
  SEXP Rsh_Fir_reg_r111_;  // r111
  SEXP Rsh_Fir_reg_dx44_;  // dx44
  SEXP Rsh_Fir_reg_r112_;  // r112
  SEXP Rsh_Fir_reg_sym14_1;  // sym14
  SEXP Rsh_Fir_reg_base14_1;  // base14
  SEXP Rsh_Fir_reg_guard14_1;  // guard14
  SEXP Rsh_Fir_reg_r113_;  // r113
  SEXP Rsh_Fir_reg_r114_;  // r114
  SEXP Rsh_Fir_reg_fstat;  // fstat
  SEXP Rsh_Fir_reg_fstat1_;  // fstat1
  SEXP Rsh_Fir_reg_profiledModel;  // profiledModel
  SEXP Rsh_Fir_reg_profiledModel1_;  // profiledModel1
  SEXP Rsh_Fir_reg_c54_;  // c54
  SEXP Rsh_Fir_reg_profiledModel3_;  // profiledModel3
  SEXP Rsh_Fir_reg_dr38_;  // dr38
  SEXP Rsh_Fir_reg_dc19_;  // dc19
  SEXP Rsh_Fir_reg_dx45_;  // dx45
  SEXP Rsh_Fir_reg_dx46_;  // dx46
  SEXP Rsh_Fir_reg_r115_;  // r115
  SEXP Rsh_Fir_reg_dx47_;  // dx47
  SEXP Rsh_Fir_reg_r116_;  // r116
  SEXP Rsh_Fir_reg_vary16_;  // vary16
  SEXP Rsh_Fir_reg_vary17_;  // vary17
  SEXP Rsh_Fir_reg_list1_;  // list1
  SEXP Rsh_Fir_reg_r117_;  // r117
  SEXP Rsh_Fir_reg_fittedModel34_;  // fittedModel34
  SEXP Rsh_Fir_reg_fittedModel35_;  // fittedModel35
  SEXP Rsh_Fir_reg_c55_;  // c55
  SEXP Rsh_Fir_reg_fittedModel37_;  // fittedModel37
  SEXP Rsh_Fir_reg_dr40_;  // dr40
  SEXP Rsh_Fir_reg_dc20_;  // dc20
  SEXP Rsh_Fir_reg_dx48_;  // dx48
  SEXP Rsh_Fir_reg_dx49_;  // dx49
  SEXP Rsh_Fir_reg_r118_;  // r118
  SEXP Rsh_Fir_reg_dx50_;  // dx50
  SEXP Rsh_Fir_reg_defaultPars7_;  // defaultPars7
  SEXP Rsh_Fir_reg_defaultPars8_;  // defaultPars8
  SEXP Rsh_Fir_reg_p20_;  // p20
  SEXP Rsh_Fir_reg_r120_;  // r120
  SEXP Rsh_Fir_reg_ans;  // ans
  SEXP Rsh_Fir_reg_ans1_;  // ans1

  // Bind parameters
  Rsh_Fir_reg_ddd1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd1, RHO);
  (void)(Rsh_Fir_reg_ddd1);
  // sym = ldf list
  Rsh_Fir_reg_sym2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args253[2];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_sym2;
  Rsh_Fir_array_args253[1] = Rsh_Fir_reg_base2;
  Rsh_Fir_reg_guard2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args253);
  // if guard then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L0_:;
  // st args = r1
  Rsh_Fir_store(Rsh_const(CCP, 69), Rsh_Fir_reg_r1_2, RHO);
  (void)(Rsh_Fir_reg_r1_2);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args254[2];
  Rsh_Fir_array_args254[0] = Rsh_Fir_reg_sym1_2;
  Rsh_Fir_array_args254[1] = Rsh_Fir_reg_base1_2;
  Rsh_Fir_reg_guard1_2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args254);
  // if guard1 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_2)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L1_:;
  // r6 = `==`(r4, 0)
  SEXP Rsh_Fir_array_args255[2];
  Rsh_Fir_array_args255[0] = Rsh_Fir_reg_r4_2;
  Rsh_Fir_array_args255[1] = Rsh_const(CCP, 70);
  Rsh_Fir_reg_r6_2 = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args255, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args256[1];
  Rsh_Fir_array_args256[0] = Rsh_Fir_reg_r6_2;
  Rsh_Fir_reg_c2 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args256, Rsh_Fir_param_types_empty());
  // if c then L40() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2)) {
  // L40()
    goto L40_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args257[2];
  Rsh_Fir_array_args257[0] = Rsh_Fir_reg_sym2_2;
  Rsh_Fir_array_args257[1] = Rsh_Fir_reg_base2_2;
  Rsh_Fir_reg_guard2_2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args257);
  // if guard2 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_2)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L3_:;
  // fittedModel = ld fittedModel
  Rsh_Fir_reg_fittedModel2 = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L115() else D38()
  // L115()
  goto L115_;

L4_:;
  // r10 = `==`(r8, 2)
  SEXP Rsh_Fir_array_args258[2];
  Rsh_Fir_array_args258[0] = Rsh_Fir_reg_r8_2;
  Rsh_Fir_array_args258[1] = Rsh_const(CCP, 71);
  Rsh_Fir_reg_r10_2 = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args258, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args259[1];
  Rsh_Fir_array_args259[0] = Rsh_Fir_reg_r10_2;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args259, Rsh_Fir_param_types_empty());
  // if c1 then L48() else L5(c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L48()
    goto L48_;
  } else {
  // L5(c1)
    Rsh_Fir_reg_c3_1 = Rsh_Fir_reg_c1_1;
    goto L5_;
  }

L5_:;
  // c16 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args260[1];
  Rsh_Fir_array_args260[0] = Rsh_Fir_reg_c3_1;
  Rsh_Fir_reg_c16_2 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args260, Rsh_Fir_param_types_empty());
  // if c16 then L56() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_2)) {
  // L56()
    goto L56_;
  } else {
  // L8()
    goto L8_;
  }

L6_:;
  // c13 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args261[1];
  Rsh_Fir_array_args261[0] = Rsh_Fir_reg_r12_2;
  Rsh_Fir_reg_c13_2 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args261, Rsh_Fir_param_types_empty());
  // c14 = `&&`(c6, c13)
  SEXP Rsh_Fir_array_args262[2];
  Rsh_Fir_array_args262[0] = Rsh_Fir_reg_c6_2;
  Rsh_Fir_array_args262[1] = Rsh_Fir_reg_c13_2;
  Rsh_Fir_reg_c14_2 = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args262, Rsh_Fir_param_types_empty());
  // goto L5(c14)
  // L5(c14)
  Rsh_Fir_reg_c3_1 = Rsh_Fir_reg_c14_2;
  goto L5_;

L7_:;
  // c12 = `is.logical`(dx1)
  SEXP Rsh_Fir_array_args263[1];
  Rsh_Fir_array_args263[0] = Rsh_Fir_reg_dx1_2;
  Rsh_Fir_reg_c12_2 = Rsh_Fir_call_builtin(385, CCP, RHO, 1, Rsh_Fir_array_args263, Rsh_Fir_param_types_empty());
  // goto L6(c11, c12)
  // L6(c11, c12)
  Rsh_Fir_reg_c6_2 = Rsh_Fir_reg_c11_2;
  Rsh_Fir_reg_r12_2 = Rsh_Fir_reg_c12_2;
  goto L6_;

L8_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args264[2];
  Rsh_Fir_array_args264[0] = Rsh_Fir_reg_sym4_2;
  Rsh_Fir_array_args264[1] = Rsh_Fir_reg_base4_2;
  Rsh_Fir_reg_guard4_2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args264);
  // if guard4 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_2)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L9_:;
  // st vary = dx3
  Rsh_Fir_store(Rsh_const(CCP, 72), Rsh_Fir_reg_dx3_2, RHO);
  (void)(Rsh_Fir_reg_dx3_2);
  // unlist = ldf unlist
  Rsh_Fir_reg_unlist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 73), RHO);
  // check L61() else D10()
  // L61()
  goto L61_;

L10_:;
  // st startPars = dx7
  Rsh_Fir_store(Rsh_const(CCP, 74), Rsh_Fir_reg_dx7_1, RHO);
  (void)(Rsh_Fir_reg_dx7_1);
  // goto L3()
  // L3()
  goto L3_;

L11_:;
  // r23 = `==`(r21, 1.0)
  SEXP Rsh_Fir_array_args265[2];
  Rsh_Fir_array_args265[0] = Rsh_Fir_reg_r21_2;
  Rsh_Fir_array_args265[1] = Rsh_const(CCP, 75);
  Rsh_Fir_reg_r23_2 = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args265, Rsh_Fir_param_types_empty());
  // c20 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args266[1];
  Rsh_Fir_array_args266[0] = Rsh_Fir_reg_r23_2;
  Rsh_Fir_reg_c20_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args266, Rsh_Fir_param_types_empty());
  // if c20 then L74() else L12(c20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_1)) {
  // L74()
    goto L74_;
  } else {
  // L12(c20)
    Rsh_Fir_reg_c22_1 = Rsh_Fir_reg_c20_1;
    goto L12_;
  }

L12_:;
  // c34 = `as.logical`(c22)
  SEXP Rsh_Fir_array_args267[1];
  Rsh_Fir_array_args267[0] = Rsh_Fir_reg_c22_1;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args267, Rsh_Fir_param_types_empty());
  // if c34 then L83() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L83()
    goto L83_;
  } else {
  // L15()
    goto L15_;
  }

L13_:;
  // c31 = `as.logical`(r25)
  SEXP Rsh_Fir_array_args268[1];
  Rsh_Fir_array_args268[0] = Rsh_Fir_reg_r25_1;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args268, Rsh_Fir_param_types_empty());
  // c32 = `&&`(c25, c31)
  SEXP Rsh_Fir_array_args269[2];
  Rsh_Fir_array_args269[0] = Rsh_Fir_reg_c25_;
  Rsh_Fir_array_args269[1] = Rsh_Fir_reg_c31_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args269, Rsh_Fir_param_types_empty());
  // goto L12(c32)
  // L12(c32)
  Rsh_Fir_reg_c22_1 = Rsh_Fir_reg_c32_;
  goto L12_;

L14_:;
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 76), RHO);
  // r27 = dyn is_list(dx9)
  SEXP Rsh_Fir_array_args270[1];
  Rsh_Fir_array_args270[0] = Rsh_Fir_reg_dx9_1;
  SEXP Rsh_Fir_array_arg_names71[1];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_reg_r27_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args270, Rsh_Fir_array_arg_names71, CCP, RHO);
  // check L81() else D18()
  // L81()
  goto L81_;

L15_:;
  // sym6 = ldf all
  Rsh_Fir_reg_sym6_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // base6 = ldf all in base
  Rsh_Fir_reg_base6_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args271[2];
  Rsh_Fir_array_args271[0] = Rsh_Fir_reg_sym6_2;
  Rsh_Fir_array_args271[1] = Rsh_Fir_reg_base6_2;
  Rsh_Fir_reg_guard6_2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args271);
  // if guard6 then L87() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_2)) {
  // L87()
    goto L87_;
  } else {
  // L88()
    goto L88_;
  }

L16_:;
  // sym7 = ldf all
  Rsh_Fir_reg_sym7_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 61), RHO);
  // base7 = ldf all in base
  Rsh_Fir_reg_base7_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args272[2];
  Rsh_Fir_array_args272[0] = Rsh_Fir_reg_sym7_2;
  Rsh_Fir_array_args272[1] = Rsh_Fir_reg_base7_2;
  Rsh_Fir_reg_guard7_2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args272);
  // if guard7 then L98() else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_2)) {
  // L98()
    goto L98_;
  } else {
  // L99()
    goto L99_;
  }

L17_:;
  // c36 = `as.logical`(r33)
  SEXP Rsh_Fir_array_args273[1];
  Rsh_Fir_array_args273[0] = Rsh_Fir_reg_r33_2;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args273, Rsh_Fir_param_types_empty());
  // if c36 then L92() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L92()
    goto L92_;
  } else {
  // L18()
    goto L18_;
  }

L18_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // check L96() else D26()
  // L96()
  goto L96_;

L19_:;
  // r53 = `!`(r42)
  SEXP Rsh_Fir_array_args274[1];
  Rsh_Fir_array_args274[0] = Rsh_Fir_reg_r42_1;
  Rsh_Fir_reg_r53_2 = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args274, Rsh_Fir_param_types_empty());
  // c37 = `as.logical`(r53)
  SEXP Rsh_Fir_array_args275[1];
  Rsh_Fir_array_args275[0] = Rsh_Fir_reg_r53_2;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args275, Rsh_Fir_param_types_empty());
  // if c37 then L103() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L103()
    goto L103_;
  } else {
  // L20()
    goto L20_;
  }

L20_:;
  // goto L21()
  // L21()
  goto L21_;

L21_:;
  // defaultPars5 = ld defaultPars
  Rsh_Fir_reg_defaultPars5_1 = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L107() else D33()
  // L107()
  goto L107_;

L22_:;
  // st startPars = dx13
  Rsh_Fir_store(Rsh_const(CCP, 74), Rsh_Fir_reg_dx13_1, RHO);
  (void)(Rsh_Fir_reg_dx13_1);
  // goto L3()
  // L3()
  goto L3_;

L23_:;
  // nls_port_fit = ldf nls_port_fit
  Rsh_Fir_reg_nls_port_fit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 77), RHO);
  // check L160() else D55()
  // L160()
  goto L160_;

L24_:;
  // c45 = `as.logical`(r82)
  SEXP Rsh_Fir_array_args276[1];
  Rsh_Fir_array_args276[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args276, Rsh_Fir_param_types_empty());
  // if c45 then L145() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L145()
    goto L145_;
  } else {
  // L25()
    goto L25_;
  }

L25_:;
  // goto L27()
  // L27()
  goto L27_;

L26_:;
  // goto L27()
  // L27()
  goto L27_;

L27_:;
  // fittedModel18 = ld fittedModel
  Rsh_Fir_reg_fittedModel18_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L153() else D53()
  // L153()
  goto L153_;

L28_:;
  // fittedModel28 = ld fittedModel
  Rsh_Fir_reg_fittedModel28_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L172() else D61()
  // L172()
  goto L172_;

L29_:;
  // fittedModel24 = ld fittedModel
  Rsh_Fir_reg_fittedModel24_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L166() else D59()
  // L166()
  goto L166_;

L30_:;
  // st dev = r106
  Rsh_Fir_store(Rsh_const(CCP, 78), Rsh_Fir_reg_r106_, RHO);
  (void)(Rsh_Fir_reg_r106_);
  // goto L28()
  // L28()
  goto L28_;

L31_:;
  // st ans = r114
  Rsh_Fir_store(Rsh_const(CCP, 79), Rsh_Fir_reg_r114_, RHO);
  (void)(Rsh_Fir_reg_r114_);
  // fittedModel34 = ld fittedModel
  Rsh_Fir_reg_fittedModel34_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L193() else D72()
  // L193()
  goto L193_;

L32_:;
  // list = ldf list
  Rsh_Fir_reg_list1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L34() else D0()
  // L34()
  goto L34_;

L33_:;
  // r = dyn base(<sym ...>)
  SEXP Rsh_Fir_array_args277[1];
  Rsh_Fir_array_args277[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names72[1];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_reg_r3 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2, 1, Rsh_Fir_array_args277, Rsh_Fir_array_arg_names72, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_2 = Rsh_Fir_reg_r3;
  goto L0_;

D0_:;
  // deopt 2 []
  Rsh_Fir_deopt(2, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // r2 = dyn list[`...`](ddd1)
  SEXP Rsh_Fir_array_args278[1];
  Rsh_Fir_array_args278[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names73[1];
  Rsh_Fir_array_arg_names73[0] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r2_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1, 1, Rsh_Fir_array_args278, Rsh_Fir_array_arg_names73, CCP, RHO);
  // check L35() else D1()
  // L35()
  goto L35_;

D1_:;
  // deopt 4 [r2]
  SEXP Rsh_Fir_array_deopt_stack64[1];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_r2_2;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_2 = Rsh_Fir_reg_r2_2;
  goto L0_;

L36_:;
  // args = ld args
  Rsh_Fir_reg_args = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // check L38() else D2()
  // L38()
  goto L38_;

L37_:;
  // r3 = dyn base1(<sym args>)
  SEXP Rsh_Fir_array_args279[1];
  Rsh_Fir_array_args279[0] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names74[1];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_reg_r3_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_2, 1, Rsh_Fir_array_args279, Rsh_Fir_array_arg_names74, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_2 = Rsh_Fir_reg_r3_2;
  goto L1_;

D2_:;
  // deopt 8 [args]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_args;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L38_:;
  // args1 = force? args
  Rsh_Fir_reg_args1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args);
  // checkMissing(args1)
  SEXP Rsh_Fir_array_args280[1];
  Rsh_Fir_array_args280[0] = Rsh_Fir_reg_args1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args280, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r5 = dyn length(args1)
  SEXP Rsh_Fir_array_args281[1];
  Rsh_Fir_array_args281[0] = Rsh_Fir_reg_args1_;
  SEXP Rsh_Fir_array_arg_names75[1];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_reg_r5_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2, 1, Rsh_Fir_array_args281, Rsh_Fir_array_arg_names75, CCP, RHO);
  // check L39() else D3()
  // L39()
  goto L39_;

D3_:;
  // deopt 11 [r5]
  SEXP Rsh_Fir_array_deopt_stack66[1];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_r5_2;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_2 = Rsh_Fir_reg_r5_2;
  goto L1_;

L40_:;
  // defaultVary = ld defaultVary
  Rsh_Fir_reg_defaultVary = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L41() else D4()
  // L41()
  goto L41_;

D4_:;
  // deopt 14 [defaultVary]
  SEXP Rsh_Fir_array_deopt_stack67[1];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_defaultVary;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L41_:;
  // defaultVary1 = force? defaultVary
  Rsh_Fir_reg_defaultVary1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_defaultVary);
  // checkMissing(defaultVary1)
  SEXP Rsh_Fir_array_args282[1];
  Rsh_Fir_array_args282[0] = Rsh_Fir_reg_defaultVary1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args282, Rsh_Fir_param_types_empty()));
  // st vary = defaultVary1
  Rsh_Fir_store(Rsh_const(CCP, 72), Rsh_Fir_reg_defaultVary1_, RHO);
  (void)(Rsh_Fir_reg_defaultVary1_);
  // defaultPars = ld defaultPars
  Rsh_Fir_reg_defaultPars2 = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L42() else D5()
  // L42()
  goto L42_;

D5_:;
  // deopt 17 [defaultPars]
  SEXP Rsh_Fir_array_deopt_stack68[1];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_defaultPars2;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L42_:;
  // defaultPars1 = force? defaultPars
  Rsh_Fir_reg_defaultPars1_2 = Rsh_Fir_maybe_force(Rsh_Fir_reg_defaultPars2);
  // checkMissing(defaultPars1)
  SEXP Rsh_Fir_array_args283[1];
  Rsh_Fir_array_args283[0] = Rsh_Fir_reg_defaultPars1_2;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args283, Rsh_Fir_param_types_empty()));
  // st startPars = defaultPars1
  Rsh_Fir_store(Rsh_const(CCP, 74), Rsh_Fir_reg_defaultPars1_2, RHO);
  (void)(Rsh_Fir_reg_defaultPars1_2);
  // goto L3()
  // L3()
  goto L3_;

L44_:;
  // args2 = ld args
  Rsh_Fir_reg_args2_ = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // check L46() else D6()
  // L46()
  goto L46_;

L45_:;
  // r7 = dyn base2(<sym args>)
  SEXP Rsh_Fir_array_args284[1];
  Rsh_Fir_array_args284[0] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names76[1];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_reg_r7_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_2, 1, Rsh_Fir_array_args284, Rsh_Fir_array_arg_names76, CCP, RHO);
  // goto L4(r7)
  // L4(r7)
  Rsh_Fir_reg_r8_2 = Rsh_Fir_reg_r7_2;
  goto L4_;

D6_:;
  // deopt 22 [args2]
  SEXP Rsh_Fir_array_deopt_stack69[1];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_args2_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L46_:;
  // args3 = force? args2
  Rsh_Fir_reg_args3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args2_);
  // checkMissing(args3)
  SEXP Rsh_Fir_array_args285[1];
  Rsh_Fir_array_args285[0] = Rsh_Fir_reg_args3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args285, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r9 = dyn length1(args3)
  SEXP Rsh_Fir_array_args286[1];
  Rsh_Fir_array_args286[0] = Rsh_Fir_reg_args3_;
  SEXP Rsh_Fir_array_arg_names77[1];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_2, 1, Rsh_Fir_array_args286, Rsh_Fir_array_arg_names77, CCP, RHO);
  // check L47() else D7()
  // L47()
  goto L47_;

D7_:;
  // deopt 25 [r9]
  SEXP Rsh_Fir_array_deopt_stack70[1];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L4(r9)
  // L4(r9)
  Rsh_Fir_reg_r8_2 = Rsh_Fir_reg_r9_1;
  goto L4_;

L48_:;
  // sym3 = ldf `is.logical`
  Rsh_Fir_reg_sym3_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // base3 = ldf `is.logical` in base
  Rsh_Fir_reg_base3_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args287[2];
  Rsh_Fir_array_args287[0] = Rsh_Fir_reg_sym3_2;
  Rsh_Fir_array_args287[1] = Rsh_Fir_reg_base3_2;
  Rsh_Fir_reg_guard3_2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args287);
  // if guard3 then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_2)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L49_:;
  // args4 = ld args
  Rsh_Fir_reg_args4_ = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // check L51() else D8()
  // L51()
  goto L51_;

L50_:;
  // r11 = dyn base3(<lang `[[`(args, 1)>)
  SEXP Rsh_Fir_array_args288[1];
  Rsh_Fir_array_args288[0] = Rsh_const(CCP, 80);
  SEXP Rsh_Fir_array_arg_names78[1];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_reg_r11_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_2, 1, Rsh_Fir_array_args288, Rsh_Fir_array_arg_names78, CCP, RHO);
  // goto L6(c1, r11)
  // L6(c1, r11)
  Rsh_Fir_reg_c6_2 = Rsh_Fir_reg_c1_1;
  Rsh_Fir_reg_r12_2 = Rsh_Fir_reg_r11_2;
  goto L6_;

D8_:;
  // deopt 29 [c1, args4]
  SEXP Rsh_Fir_array_deopt_stack71[2];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_c1_1;
  Rsh_Fir_array_deopt_stack71[1] = Rsh_Fir_reg_args4_;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L51_:;
  // args5 = force? args4
  Rsh_Fir_reg_args5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args4_);
  // checkMissing(args5)
  SEXP Rsh_Fir_array_args289[1];
  Rsh_Fir_array_args289[0] = Rsh_Fir_reg_args5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args289, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(args5)
  SEXP Rsh_Fir_array_args290[1];
  Rsh_Fir_array_args290[0] = Rsh_Fir_reg_args5_;
  Rsh_Fir_reg_c7_2 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args290, Rsh_Fir_param_types_empty());
  // if c7 then L52() else L53(c1, args5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_2)) {
  // L52()
    goto L52_;
  } else {
  // L53(c1, args5)
    Rsh_Fir_reg_c9_2 = Rsh_Fir_reg_c1_1;
    Rsh_Fir_reg_args7_ = Rsh_Fir_reg_args5_;
    goto L53_;
  }

L52_:;
  // dr = tryDispatchBuiltin.1("[[", args5)
  SEXP Rsh_Fir_array_args291[2];
  Rsh_Fir_array_args291[0] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args291[1] = Rsh_Fir_reg_args5_;
  Rsh_Fir_reg_dr2 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args291);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args292[1];
  Rsh_Fir_array_args292[0] = Rsh_Fir_reg_dr2;
  Rsh_Fir_reg_dc2 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args292, Rsh_Fir_param_types_empty());
  // if dc then L54() else L53(c1, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2)) {
  // L54()
    goto L54_;
  } else {
  // L53(c1, dr)
    Rsh_Fir_reg_c9_2 = Rsh_Fir_reg_c1_1;
    Rsh_Fir_reg_args7_ = Rsh_Fir_reg_dr2;
    goto L53_;
  }

L53_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 82), RHO);
  // r13 = dyn __(args7, 1)
  SEXP Rsh_Fir_array_args293[2];
  Rsh_Fir_array_args293[0] = Rsh_Fir_reg_args7_;
  Rsh_Fir_array_args293[1] = Rsh_const(CCP, 83);
  SEXP Rsh_Fir_array_arg_names79[2];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_array_arg_names79[1] = R_MissingArg;
  Rsh_Fir_reg_r13_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args293, Rsh_Fir_array_arg_names79, CCP, RHO);
  // goto L7(c9, r13)
  // L7(c9, r13)
  Rsh_Fir_reg_c11_2 = Rsh_Fir_reg_c9_2;
  Rsh_Fir_reg_dx1_2 = Rsh_Fir_reg_r13_2;
  goto L7_;

L54_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args294[1];
  Rsh_Fir_array_args294[0] = Rsh_Fir_reg_dr2;
  Rsh_Fir_reg_dx2 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args294, Rsh_Fir_param_types_empty());
  // goto L7(c1, dx)
  // L7(c1, dx)
  Rsh_Fir_reg_c11_2 = Rsh_Fir_reg_c1_1;
  Rsh_Fir_reg_dx1_2 = Rsh_Fir_reg_dx2;
  goto L7_;

L56_:;
  // args8 = ld args
  Rsh_Fir_reg_args8_ = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // check L57() else D9()
  // L57()
  goto L57_;

D9_:;
  // deopt 36 [args8]
  SEXP Rsh_Fir_array_deopt_stack72[1];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_args8_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L57_:;
  // args9 = force? args8
  Rsh_Fir_reg_args9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args8_);
  // checkMissing(args9)
  SEXP Rsh_Fir_array_args295[1];
  Rsh_Fir_array_args295[0] = Rsh_Fir_reg_args9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args295, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(args9)
  SEXP Rsh_Fir_array_args296[1];
  Rsh_Fir_array_args296[0] = Rsh_Fir_reg_args9_;
  Rsh_Fir_reg_c17_2 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args296, Rsh_Fir_param_types_empty());
  // if c17 then L58() else L59(args9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_2)) {
  // L58()
    goto L58_;
  } else {
  // L59(args9)
    Rsh_Fir_reg_args11_ = Rsh_Fir_reg_args9_;
    goto L59_;
  }

L58_:;
  // dr2 = tryDispatchBuiltin.1("[[", args9)
  SEXP Rsh_Fir_array_args297[2];
  Rsh_Fir_array_args297[0] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args297[1] = Rsh_Fir_reg_args9_;
  Rsh_Fir_reg_dr2_2 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args297);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args298[1];
  Rsh_Fir_array_args298[0] = Rsh_Fir_reg_dr2_2;
  Rsh_Fir_reg_dc1_2 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args298, Rsh_Fir_param_types_empty());
  // if dc1 then L60() else L59(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_2)) {
  // L60()
    goto L60_;
  } else {
  // L59(dr2)
    Rsh_Fir_reg_args11_ = Rsh_Fir_reg_dr2_2;
    goto L59_;
  }

L59_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 82), RHO);
  // r14 = dyn __1(args11, 1)
  SEXP Rsh_Fir_array_args299[2];
  Rsh_Fir_array_args299[0] = Rsh_Fir_reg_args11_;
  Rsh_Fir_array_args299[1] = Rsh_const(CCP, 83);
  SEXP Rsh_Fir_array_arg_names80[2];
  Rsh_Fir_array_arg_names80[0] = R_MissingArg;
  Rsh_Fir_array_arg_names80[1] = R_MissingArg;
  Rsh_Fir_reg_r14_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args299, Rsh_Fir_array_arg_names80, CCP, RHO);
  // goto L9(r14)
  // L9(r14)
  Rsh_Fir_reg_dx3_2 = Rsh_Fir_reg_r14_2;
  goto L9_;

L60_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args300[1];
  Rsh_Fir_array_args300[0] = Rsh_Fir_reg_dr2_2;
  Rsh_Fir_reg_dx2_2 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args300, Rsh_Fir_param_types_empty());
  // goto L9(dx2)
  // L9(dx2)
  Rsh_Fir_reg_dx3_2 = Rsh_Fir_reg_dx2_2;
  goto L9_;

D10_:;
  // deopt 43 []
  Rsh_Fir_deopt(43, 0, NULL, CCP, RHO);
  return R_NilValue;

L61_:;
  // p = prom<V +>{
  //   args12 = ld args;
  //   args13 = force? args12;
  //   checkMissing(args13);
  //   c18 = `is.object`(args13);
  //   if c18 then L1() else L2(args13);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[[", args13);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(args15):
  //   __2 = ldf `[[` in base;
  //   r15 = dyn __2(args15, 2);
  //   goto L0(r15);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_, CCP, RHO);
  // r17 = dyn unlist(p)
  SEXP Rsh_Fir_array_args307[1];
  Rsh_Fir_array_args307[0] = Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_array_arg_names82[1];
  Rsh_Fir_array_arg_names82[0] = R_MissingArg;
  Rsh_Fir_reg_r17_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlist, 1, Rsh_Fir_array_args307, Rsh_Fir_array_arg_names82, CCP, RHO);
  // check L62() else D11()
  // L62()
  goto L62_;

D11_:;
  // deopt 45 [r17]
  SEXP Rsh_Fir_array_deopt_stack73[1];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_r17_2;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L62_:;
  // st params = r17
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r17_2, RHO);
  (void)(Rsh_Fir_reg_r17_2);
  // defaultPars3 = ld defaultPars
  Rsh_Fir_reg_defaultPars3_1 = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L63() else D12()
  // L63()
  goto L63_;

D12_:;
  // deopt 47 [defaultPars3]
  SEXP Rsh_Fir_array_deopt_stack74[1];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_defaultPars3_1;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L63_:;
  // defaultPars4 = force? defaultPars3
  Rsh_Fir_reg_defaultPars4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_defaultPars3_1);
  // checkMissing(defaultPars4)
  SEXP Rsh_Fir_array_args308[1];
  Rsh_Fir_array_args308[0] = Rsh_Fir_reg_defaultPars4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args308, Rsh_Fir_param_types_empty()));
  // st startPars = defaultPars4
  Rsh_Fir_store(Rsh_const(CCP, 74), Rsh_Fir_reg_defaultPars4_1, RHO);
  (void)(Rsh_Fir_reg_defaultPars4_1);
  // params = ld params
  Rsh_Fir_reg_params1 = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L64() else D13()
  // L64()
  goto L64_;

D13_:;
  // deopt 50 [params]
  SEXP Rsh_Fir_array_deopt_stack75[1];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_params1;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L64_:;
  // params1 = force? params
  Rsh_Fir_reg_params1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_params1);
  // checkMissing(params1)
  SEXP Rsh_Fir_array_args309[1];
  Rsh_Fir_array_args309[0] = Rsh_Fir_reg_params1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args309, Rsh_Fir_param_types_empty()));
  // l = ld startPars
  Rsh_Fir_reg_l1 = Rsh_Fir_load(Rsh_const(CCP, 74), RHO);
  // c19 = `is.object`(l)
  SEXP Rsh_Fir_array_args310[1];
  Rsh_Fir_array_args310[0] = Rsh_Fir_reg_l1;
  Rsh_Fir_reg_c19_1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args310, Rsh_Fir_param_types_empty());
  // if c19 then L65() else L66(params1, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_1)) {
  // L65()
    goto L65_;
  } else {
  // L66(params1, l)
    Rsh_Fir_reg_params3_1 = Rsh_Fir_reg_params1_1;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l1;
    goto L66_;
  }

L65_:;
  // dr6 = tryDispatchBuiltin.0("[<-", l, params1)
  SEXP Rsh_Fir_array_args311[3];
  Rsh_Fir_array_args311[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args311[1] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_args311[2] = Rsh_Fir_reg_params1_1;
  Rsh_Fir_reg_dr6_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args311);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args312[1];
  Rsh_Fir_array_args312[0] = Rsh_Fir_reg_dr6_1;
  Rsh_Fir_reg_dc3_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args312, Rsh_Fir_param_types_empty());
  // if dc3 then L67() else L66(params1, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_1)) {
  // L67()
    goto L67_;
  } else {
  // L66(params1, dr6)
    Rsh_Fir_reg_params3_1 = Rsh_Fir_reg_params1_1;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr6_1;
    goto L66_;
  }

L66_:;
  // vary = ld vary
  Rsh_Fir_reg_vary = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // check L68() else D14()
  // L68()
  goto L68_;

L67_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args313[1];
  Rsh_Fir_array_args313[0] = Rsh_Fir_reg_dr6_1;
  Rsh_Fir_reg_dx6_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args313, Rsh_Fir_param_types_empty());
  // goto L10(params1, dx6)
  // L10(params1, dx6)
  Rsh_Fir_reg_params5_ = Rsh_Fir_reg_params1_1;
  Rsh_Fir_reg_dx7_1 = Rsh_Fir_reg_dx6_1;
  goto L10_;

D14_:;
  // deopt 53 [params3, l2, params1, vary]
  SEXP Rsh_Fir_array_deopt_stack76[4];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_params3_1;
  Rsh_Fir_array_deopt_stack76[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack76[2] = Rsh_Fir_reg_params1_1;
  Rsh_Fir_array_deopt_stack76[3] = Rsh_Fir_reg_vary;
  Rsh_Fir_deopt(53, 4, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

L68_:;
  // vary1 = force? vary
  Rsh_Fir_reg_vary1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vary);
  // checkMissing(vary1)
  SEXP Rsh_Fir_array_args314[1];
  Rsh_Fir_array_args314[0] = Rsh_Fir_reg_vary1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args314, Rsh_Fir_param_types_empty()));
  // r18 = `!`(vary1)
  SEXP Rsh_Fir_array_args315[1];
  Rsh_Fir_array_args315[0] = Rsh_Fir_reg_vary1_;
  Rsh_Fir_reg_r18_2 = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args315, Rsh_Fir_param_types_empty());
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // r19 = dyn ___(l2, params1, r18)
  SEXP Rsh_Fir_array_args316[3];
  Rsh_Fir_array_args316[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args316[1] = Rsh_Fir_reg_params1_1;
  Rsh_Fir_array_args316[2] = Rsh_Fir_reg_r18_2;
  SEXP Rsh_Fir_array_arg_names83[3];
  Rsh_Fir_array_arg_names83[0] = R_MissingArg;
  Rsh_Fir_array_arg_names83[1] = R_MissingArg;
  Rsh_Fir_array_arg_names83[2] = R_MissingArg;
  Rsh_Fir_reg_r19_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args316, Rsh_Fir_array_arg_names83, CCP, RHO);
  // goto L10(params3, r19)
  // L10(params3, r19)
  Rsh_Fir_reg_params5_ = Rsh_Fir_reg_params3_1;
  Rsh_Fir_reg_dx7_1 = Rsh_Fir_reg_r19_2;
  goto L10_;

L70_:;
  // args16 = ld args
  Rsh_Fir_reg_args16_ = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // check L72() else D15()
  // L72()
  goto L72_;

L71_:;
  // r20 = dyn base4(<sym args>)
  SEXP Rsh_Fir_array_args317[1];
  Rsh_Fir_array_args317[0] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names84[1];
  Rsh_Fir_array_arg_names84[0] = R_MissingArg;
  Rsh_Fir_reg_r20_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_2, 1, Rsh_Fir_array_args317, Rsh_Fir_array_arg_names84, CCP, RHO);
  // goto L11(r20)
  // L11(r20)
  Rsh_Fir_reg_r21_2 = Rsh_Fir_reg_r20_2;
  goto L11_;

D15_:;
  // deopt 60 [args16]
  SEXP Rsh_Fir_array_deopt_stack77[1];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_args16_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

L72_:;
  // args17 = force? args16
  Rsh_Fir_reg_args17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args16_);
  // checkMissing(args17)
  SEXP Rsh_Fir_array_args318[1];
  Rsh_Fir_array_args318[0] = Rsh_Fir_reg_args17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args318, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r22 = dyn length2(args17)
  SEXP Rsh_Fir_array_args319[1];
  Rsh_Fir_array_args319[0] = Rsh_Fir_reg_args17_;
  SEXP Rsh_Fir_array_arg_names85[1];
  Rsh_Fir_array_arg_names85[0] = R_MissingArg;
  Rsh_Fir_reg_r22_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_2, 1, Rsh_Fir_array_args319, Rsh_Fir_array_arg_names85, CCP, RHO);
  // check L73() else D16()
  // L73()
  goto L73_;

D16_:;
  // deopt 63 [r22]
  SEXP Rsh_Fir_array_deopt_stack78[1];
  Rsh_Fir_array_deopt_stack78[0] = Rsh_Fir_reg_r22_2;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack78, CCP, RHO);
  return R_NilValue;

L73_:;
  // goto L11(r22)
  // L11(r22)
  Rsh_Fir_reg_r21_2 = Rsh_Fir_reg_r22_2;
  goto L11_;

L74_:;
  // sym5 = ldf `is.list`
  Rsh_Fir_reg_sym5_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 76), RHO);
  // base5 = ldf `is.list` in base
  Rsh_Fir_reg_base5_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 76), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args320[2];
  Rsh_Fir_array_args320[0] = Rsh_Fir_reg_sym5_2;
  Rsh_Fir_array_args320[1] = Rsh_Fir_reg_base5_2;
  Rsh_Fir_reg_guard5_2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args320);
  // if guard5 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_2)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L75_:;
  // args18 = ld args
  Rsh_Fir_reg_args18_ = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // check L77() else D17()
  // L77()
  goto L77_;

L76_:;
  // r24 = dyn base5(<lang `[[`(args, 1)>)
  SEXP Rsh_Fir_array_args321[1];
  Rsh_Fir_array_args321[0] = Rsh_const(CCP, 80);
  SEXP Rsh_Fir_array_arg_names86[1];
  Rsh_Fir_array_arg_names86[0] = R_MissingArg;
  Rsh_Fir_reg_r24_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_2, 1, Rsh_Fir_array_args321, Rsh_Fir_array_arg_names86, CCP, RHO);
  // goto L13(c20, r24)
  // L13(c20, r24)
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c20_1;
  Rsh_Fir_reg_r25_1 = Rsh_Fir_reg_r24_1;
  goto L13_;

D17_:;
  // deopt 68 [c20, args18]
  SEXP Rsh_Fir_array_deopt_stack79[2];
  Rsh_Fir_array_deopt_stack79[0] = Rsh_Fir_reg_c20_1;
  Rsh_Fir_array_deopt_stack79[1] = Rsh_Fir_reg_args18_;
  Rsh_Fir_deopt(68, 2, Rsh_Fir_array_deopt_stack79, CCP, RHO);
  return R_NilValue;

L77_:;
  // args19 = force? args18
  Rsh_Fir_reg_args19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args18_);
  // checkMissing(args19)
  SEXP Rsh_Fir_array_args322[1];
  Rsh_Fir_array_args322[0] = Rsh_Fir_reg_args19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args322, Rsh_Fir_param_types_empty()));
  // c26 = `is.object`(args19)
  SEXP Rsh_Fir_array_args323[1];
  Rsh_Fir_array_args323[0] = Rsh_Fir_reg_args19_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args323, Rsh_Fir_param_types_empty());
  // if c26 then L78() else L79(c20, args19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L78()
    goto L78_;
  } else {
  // L79(c20, args19)
    Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c20_1;
    Rsh_Fir_reg_args21_ = Rsh_Fir_reg_args19_;
    goto L79_;
  }

L78_:;
  // dr8 = tryDispatchBuiltin.1("[[", args19)
  SEXP Rsh_Fir_array_args324[2];
  Rsh_Fir_array_args324[0] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args324[1] = Rsh_Fir_reg_args19_;
  Rsh_Fir_reg_dr8_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args324);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args325[1];
  Rsh_Fir_array_args325[0] = Rsh_Fir_reg_dr8_1;
  Rsh_Fir_reg_dc4_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args325, Rsh_Fir_param_types_empty());
  // if dc4 then L80() else L79(c20, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_1)) {
  // L80()
    goto L80_;
  } else {
  // L79(c20, dr8)
    Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c20_1;
    Rsh_Fir_reg_args21_ = Rsh_Fir_reg_dr8_1;
    goto L79_;
  }

L79_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 82), RHO);
  // r26 = dyn __3(args21, 1)
  SEXP Rsh_Fir_array_args326[2];
  Rsh_Fir_array_args326[0] = Rsh_Fir_reg_args21_;
  Rsh_Fir_array_args326[1] = Rsh_const(CCP, 83);
  SEXP Rsh_Fir_array_arg_names87[2];
  Rsh_Fir_array_arg_names87[0] = R_MissingArg;
  Rsh_Fir_array_arg_names87[1] = R_MissingArg;
  Rsh_Fir_reg_r26_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args326, Rsh_Fir_array_arg_names87, CCP, RHO);
  // goto L14(c28, r26)
  // L14(c28, r26)
  Rsh_Fir_reg_c30_ = Rsh_Fir_reg_c28_;
  Rsh_Fir_reg_dx9_1 = Rsh_Fir_reg_r26_2;
  goto L14_;

L80_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args327[1];
  Rsh_Fir_array_args327[0] = Rsh_Fir_reg_dr8_1;
  Rsh_Fir_reg_dx8_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args327, Rsh_Fir_param_types_empty());
  // goto L14(c20, dx8)
  // L14(c20, dx8)
  Rsh_Fir_reg_c30_ = Rsh_Fir_reg_c20_1;
  Rsh_Fir_reg_dx9_1 = Rsh_Fir_reg_dx8_1;
  goto L14_;

D18_:;
  // deopt 74 [c30, r27]
  SEXP Rsh_Fir_array_deopt_stack80[2];
  Rsh_Fir_array_deopt_stack80[0] = Rsh_Fir_reg_c30_;
  Rsh_Fir_array_deopt_stack80[1] = Rsh_Fir_reg_r27_2;
  Rsh_Fir_deopt(74, 2, Rsh_Fir_array_deopt_stack80, CCP, RHO);
  return R_NilValue;

L81_:;
  // goto L13(c30, r27)
  // L13(c30, r27)
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c30_;
  Rsh_Fir_reg_r25_1 = Rsh_Fir_reg_r27_2;
  goto L13_;

L83_:;
  // unlist1 = ldf unlist
  Rsh_Fir_reg_unlist1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 73), RHO);
  // check L84() else D19()
  // L84()
  goto L84_;

D19_:;
  // deopt 77 []
  Rsh_Fir_deopt(77, 0, NULL, CCP, RHO);
  return R_NilValue;

L84_:;
  // p1 = prom<V +>{
  //   args22 = ld args;
  //   args23 = force? args22;
  //   checkMissing(args23);
  //   c35 = `is.object`(args23);
  //   if c35 then L1() else L2(args23);
  // L0(dx11):
  //   return dx11;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("[[", args23);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(args25):
  //   __4 = ldf `[[` in base;
  //   r28 = dyn __4(args25, 1);
  //   goto L0(r28);
  // L3():
  //   dx10 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx10);
  // }
  Rsh_Fir_reg_p1_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_1, CCP, RHO);
  // r30 = dyn unlist1(p1)
  SEXP Rsh_Fir_array_args334[1];
  Rsh_Fir_array_args334[0] = Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_array_arg_names89[1];
  Rsh_Fir_array_arg_names89[0] = R_MissingArg;
  Rsh_Fir_reg_r30_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlist1_, 1, Rsh_Fir_array_args334, Rsh_Fir_array_arg_names89, CCP, RHO);
  // check L85() else D20()
  // L85()
  goto L85_;

D20_:;
  // deopt 79 [r30]
  SEXP Rsh_Fir_array_deopt_stack81[1];
  Rsh_Fir_array_deopt_stack81[0] = Rsh_Fir_reg_r30_2;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack81, CCP, RHO);
  return R_NilValue;

L85_:;
  // st params = r30
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r30_2, RHO);
  (void)(Rsh_Fir_reg_r30_2);
  // goto L16()
  // L16()
  goto L16_;

L87_:;
  // sapply = ldf sapply
  Rsh_Fir_reg_sapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 86), RHO);
  // check L89() else D21()
  // L89()
  goto L89_;

L88_:;
  // r32 = dyn base6(<lang sapply(args, is.numeric)>)
  SEXP Rsh_Fir_array_args335[1];
  Rsh_Fir_array_args335[0] = Rsh_const(CCP, 87);
  SEXP Rsh_Fir_array_arg_names90[1];
  Rsh_Fir_array_arg_names90[0] = R_MissingArg;
  Rsh_Fir_reg_r32_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_2, 1, Rsh_Fir_array_args335, Rsh_Fir_array_arg_names90, CCP, RHO);
  // goto L17(r32)
  // L17(r32)
  Rsh_Fir_reg_r33_2 = Rsh_Fir_reg_r32_1;
  goto L17_;

D21_:;
  // deopt 84 []
  Rsh_Fir_deopt(84, 0, NULL, CCP, RHO);
  return R_NilValue;

L89_:;
  // p2 = prom<V +>{
  //   args26 = ld args;
  //   args27 = force? args26;
  //   checkMissing(args27);
  //   return args27;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_2, CCP, RHO);
  // p3 = prom<V +>{
  //   is_numeric = ld `is.numeric`;
  //   is_numeric1 = force? is_numeric;
  //   checkMissing(is_numeric1);
  //   return is_numeric1;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_3, CCP, RHO);
  // r36 = dyn sapply(p2, p3)
  SEXP Rsh_Fir_array_args338[2];
  Rsh_Fir_array_args338[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args338[1] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names91[2];
  Rsh_Fir_array_arg_names91[0] = R_MissingArg;
  Rsh_Fir_array_arg_names91[1] = R_MissingArg;
  Rsh_Fir_reg_r36_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sapply, 2, Rsh_Fir_array_args338, Rsh_Fir_array_arg_names91, CCP, RHO);
  // check L90() else D22()
  // L90()
  goto L90_;

D22_:;
  // deopt 87 [r36]
  SEXP Rsh_Fir_array_deopt_stack82[1];
  Rsh_Fir_array_deopt_stack82[0] = Rsh_Fir_reg_r36_2;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack82, CCP, RHO);
  return R_NilValue;

L90_:;
  // all = ldf all in base
  Rsh_Fir_reg_all1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // r37 = dyn all(r36)
  SEXP Rsh_Fir_array_args339[1];
  Rsh_Fir_array_args339[0] = Rsh_Fir_reg_r36_2;
  SEXP Rsh_Fir_array_arg_names92[1];
  Rsh_Fir_array_arg_names92[0] = R_MissingArg;
  Rsh_Fir_reg_r37_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all1, 1, Rsh_Fir_array_args339, Rsh_Fir_array_arg_names92, CCP, RHO);
  // check L91() else D23()
  // L91()
  goto L91_;

D23_:;
  // deopt 89 [r37]
  SEXP Rsh_Fir_array_deopt_stack83[1];
  Rsh_Fir_array_deopt_stack83[0] = Rsh_Fir_reg_r37_2;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack83, CCP, RHO);
  return R_NilValue;

L91_:;
  // goto L17(r37)
  // L17(r37)
  Rsh_Fir_reg_r33_2 = Rsh_Fir_reg_r37_2;
  goto L17_;

L92_:;
  // unlist2 = ldf unlist
  Rsh_Fir_reg_unlist2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 73), RHO);
  // check L93() else D24()
  // L93()
  goto L93_;

D24_:;
  // deopt 91 []
  Rsh_Fir_deopt(91, 0, NULL, CCP, RHO);
  return R_NilValue;

L93_:;
  // p4 = prom<V +>{
  //   args28 = ld args;
  //   args29 = force? args28;
  //   checkMissing(args29);
  //   return args29;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_4, CCP, RHO);
  // r39 = dyn unlist2(p4)
  SEXP Rsh_Fir_array_args341[1];
  Rsh_Fir_array_args341[0] = Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_array_arg_names93[1];
  Rsh_Fir_array_arg_names93[0] = R_MissingArg;
  Rsh_Fir_reg_r39_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlist2_, 1, Rsh_Fir_array_args341, Rsh_Fir_array_arg_names93, CCP, RHO);
  // check L94() else D25()
  // L94()
  goto L94_;

D25_:;
  // deopt 93 [r39]
  SEXP Rsh_Fir_array_deopt_stack84[1];
  Rsh_Fir_array_deopt_stack84[0] = Rsh_Fir_reg_r39_2;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack84, CCP, RHO);
  return R_NilValue;

L94_:;
  // st params = r39
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r39_2, RHO);
  (void)(Rsh_Fir_reg_r39_2);
  // goto L16()
  // L16()
  goto L16_;

D26_:;
  // deopt 96 []
  Rsh_Fir_deopt(96, 0, NULL, CCP, RHO);
  return R_NilValue;

L96_:;
  // r40 = dyn stop("invalid argument to 'getProfile'")
  SEXP Rsh_Fir_array_args342[1];
  Rsh_Fir_array_args342[0] = Rsh_const(CCP, 88);
  SEXP Rsh_Fir_array_arg_names94[1];
  Rsh_Fir_array_arg_names94[0] = R_MissingArg;
  Rsh_Fir_reg_r40_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1, 1, Rsh_Fir_array_args342, Rsh_Fir_array_arg_names94, CCP, RHO);
  // check L97() else D27()
  // L97()
  goto L97_;

D27_:;
  // deopt 98 [r40]
  SEXP Rsh_Fir_array_deopt_stack85[1];
  Rsh_Fir_array_deopt_stack85[0] = Rsh_Fir_reg_r40_2;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack85, CCP, RHO);
  return R_NilValue;

L97_:;
  // goto L16()
  // L16()
  goto L16_;

L98_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L100() else D28()
  // L100()
  goto L100_;

L99_:;
  // r41 = dyn base7(<lang `%in%`(names(params), names(fittedPars))>)
  SEXP Rsh_Fir_array_args343[1];
  Rsh_Fir_array_args343[0] = Rsh_const(CCP, 89);
  SEXP Rsh_Fir_array_arg_names95[1];
  Rsh_Fir_array_arg_names95[0] = R_MissingArg;
  Rsh_Fir_reg_r41_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_2, 1, Rsh_Fir_array_args343, Rsh_Fir_array_arg_names95, CCP, RHO);
  // goto L19(r41)
  // L19(r41)
  Rsh_Fir_reg_r42_1 = Rsh_Fir_reg_r41_2;
  goto L19_;

D28_:;
  // deopt 102 []
  Rsh_Fir_deopt(102, 0, NULL, CCP, RHO);
  return R_NilValue;

L100_:;
  // p5 = prom<V +>{
  //   sym8 = ldf names;
  //   base8 = ldf names in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L1() else L2();
  // L0(r44):
  //   return r44;
  // L1():
  //   params6 = ld params;
  //   params7 = force? params6;
  //   checkMissing(params7);
  //   names = ldf names in base;
  //   r45 = dyn names(params7);
  //   goto L0(r45);
  // L2():
  //   r43 = dyn base8(<sym params>);
  //   goto L0(r43);
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_5, CCP, RHO);
  // p6 = prom<V +>{
  //   sym9 = ldf names;
  //   base9 = ldf names in base;
  //   guard9 = `==`.4(sym9, base9);
  //   if guard9 then L1() else L2();
  // L0(r48):
  //   return r48;
  // L1():
  //   fittedPars = ld fittedPars;
  //   fittedPars1 = force? fittedPars;
  //   checkMissing(fittedPars1);
  //   names1 = ldf names in base;
  //   r49 = dyn names1(fittedPars1);
  //   goto L0(r49);
  // L2():
  //   r47 = dyn base9(<sym fittedPars>);
  //   goto L0(r47);
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_6, CCP, RHO);
  // r51 = dyn _in_(p5, p6)
  SEXP Rsh_Fir_array_args352[2];
  Rsh_Fir_array_args352[0] = Rsh_Fir_reg_p5_1;
  Rsh_Fir_array_args352[1] = Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_array_arg_names100[2];
  Rsh_Fir_array_arg_names100[0] = R_MissingArg;
  Rsh_Fir_array_arg_names100[1] = R_MissingArg;
  Rsh_Fir_reg_r51_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_1, 2, Rsh_Fir_array_args352, Rsh_Fir_array_arg_names100, CCP, RHO);
  // check L101() else D29()
  // L101()
  goto L101_;

D29_:;
  // deopt 105 [r51]
  SEXP Rsh_Fir_array_deopt_stack86[1];
  Rsh_Fir_array_deopt_stack86[0] = Rsh_Fir_reg_r51_1;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack86, CCP, RHO);
  return R_NilValue;

L101_:;
  // all1 = ldf all in base
  Rsh_Fir_reg_all1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // r52 = dyn all1(r51)
  SEXP Rsh_Fir_array_args353[1];
  Rsh_Fir_array_args353[0] = Rsh_Fir_reg_r51_1;
  SEXP Rsh_Fir_array_arg_names101[1];
  Rsh_Fir_array_arg_names101[0] = R_MissingArg;
  Rsh_Fir_reg_r52_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all1_1, 1, Rsh_Fir_array_args353, Rsh_Fir_array_arg_names101, CCP, RHO);
  // check L102() else D30()
  // L102()
  goto L102_;

D30_:;
  // deopt 107 [r52]
  SEXP Rsh_Fir_array_deopt_stack87[1];
  Rsh_Fir_array_deopt_stack87[0] = Rsh_Fir_reg_r52_2;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack87, CCP, RHO);
  return R_NilValue;

L102_:;
  // goto L19(r52)
  // L19(r52)
  Rsh_Fir_reg_r42_1 = Rsh_Fir_reg_r52_2;
  goto L19_;

L103_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // check L104() else D31()
  // L104()
  goto L104_;

D31_:;
  // deopt 110 []
  Rsh_Fir_deopt(110, 0, NULL, CCP, RHO);
  return R_NilValue;

L104_:;
  // r54 = dyn stop1("cannot recognize parameter name")
  SEXP Rsh_Fir_array_args354[1];
  Rsh_Fir_array_args354[0] = Rsh_const(CCP, 90);
  SEXP Rsh_Fir_array_arg_names102[1];
  Rsh_Fir_array_arg_names102[0] = R_MissingArg;
  Rsh_Fir_reg_r54_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_1, 1, Rsh_Fir_array_args354, Rsh_Fir_array_arg_names102, CCP, RHO);
  // check L105() else D32()
  // L105()
  goto L105_;

D32_:;
  // deopt 112 [r54]
  SEXP Rsh_Fir_array_deopt_stack88[1];
  Rsh_Fir_array_deopt_stack88[0] = Rsh_Fir_reg_r54_1;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack88, CCP, RHO);
  return R_NilValue;

L105_:;
  // goto L21()
  // L21()
  goto L21_;

D33_:;
  // deopt 115 [defaultPars5]
  SEXP Rsh_Fir_array_deopt_stack89[1];
  Rsh_Fir_array_deopt_stack89[0] = Rsh_Fir_reg_defaultPars5_1;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack89, CCP, RHO);
  return R_NilValue;

L107_:;
  // defaultPars6 = force? defaultPars5
  Rsh_Fir_reg_defaultPars6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_defaultPars5_1);
  // checkMissing(defaultPars6)
  SEXP Rsh_Fir_array_args355[1];
  Rsh_Fir_array_args355[0] = Rsh_Fir_reg_defaultPars6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args355, Rsh_Fir_param_types_empty()));
  // st startPars = defaultPars6
  Rsh_Fir_store(Rsh_const(CCP, 74), Rsh_Fir_reg_defaultPars6_, RHO);
  (void)(Rsh_Fir_reg_defaultPars6_);
  // _in_1 = ldf `%in%`
  Rsh_Fir_reg__in_1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L108() else D34()
  // L108()
  goto L108_;

D34_:;
  // deopt 119 []
  Rsh_Fir_deopt(119, 0, NULL, CCP, RHO);
  return R_NilValue;

L108_:;
  // p7 = prom<V +>{
  //   sym10 = ldf names;
  //   base10 = ldf names in base;
  //   guard10 = `==`.4(sym10, base10);
  //   if guard10 then L1() else L2();
  // L0(r57):
  //   return r57;
  // L1():
  //   fittedPars2 = ld fittedPars;
  //   fittedPars3 = force? fittedPars2;
  //   checkMissing(fittedPars3);
  //   names2 = ldf names in base;
  //   r58 = dyn names2(fittedPars3);
  //   goto L0(r58);
  // L2():
  //   r56 = dyn base10(<sym fittedPars>);
  //   goto L0(r56);
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_7, CCP, RHO);
  // p8 = prom<V +>{
  //   sym11 = ldf names;
  //   base11 = ldf names in base;
  //   guard11 = `==`.4(sym11, base11);
  //   if guard11 then L1() else L2();
  // L0(r61):
  //   return r61;
  // L1():
  //   params8 = ld params;
  //   params9 = force? params8;
  //   checkMissing(params9);
  //   names3 = ldf names in base;
  //   r62 = dyn names3(params9);
  //   goto L0(r62);
  // L2():
  //   r60 = dyn base11(<sym params>);
  //   goto L0(r60);
  // }
  Rsh_Fir_reg_p8_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_8, CCP, RHO);
  // r64 = dyn _in_1(p7, p8)
  SEXP Rsh_Fir_array_args364[2];
  Rsh_Fir_array_args364[0] = Rsh_Fir_reg_p7_1;
  Rsh_Fir_array_args364[1] = Rsh_Fir_reg_p8_1;
  SEXP Rsh_Fir_array_arg_names107[2];
  Rsh_Fir_array_arg_names107[0] = R_MissingArg;
  Rsh_Fir_array_arg_names107[1] = R_MissingArg;
  Rsh_Fir_reg_r64_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_1_1, 2, Rsh_Fir_array_args364, Rsh_Fir_array_arg_names107, CCP, RHO);
  // check L109() else D35()
  // L109()
  goto L109_;

D35_:;
  // deopt 122 [r64]
  SEXP Rsh_Fir_array_deopt_stack90[1];
  Rsh_Fir_array_deopt_stack90[0] = Rsh_Fir_reg_r64_2;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack90, CCP, RHO);
  return R_NilValue;

L109_:;
  // r65 = `!`(r64)
  SEXP Rsh_Fir_array_args365[1];
  Rsh_Fir_array_args365[0] = Rsh_Fir_reg_r64_2;
  Rsh_Fir_reg_r65_1 = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args365, Rsh_Fir_param_types_empty());
  // st vary = r65
  Rsh_Fir_store(Rsh_const(CCP, 72), Rsh_Fir_reg_r65_1, RHO);
  (void)(Rsh_Fir_reg_r65_1);
  // params10 = ld params
  Rsh_Fir_reg_params10_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L110() else D36()
  // L110()
  goto L110_;

D36_:;
  // deopt 125 [params10]
  SEXP Rsh_Fir_array_deopt_stack91[1];
  Rsh_Fir_array_deopt_stack91[0] = Rsh_Fir_reg_params10_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack91, CCP, RHO);
  return R_NilValue;

L110_:;
  // params11 = force? params10
  Rsh_Fir_reg_params11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_params10_);
  // checkMissing(params11)
  SEXP Rsh_Fir_array_args366[1];
  Rsh_Fir_array_args366[0] = Rsh_Fir_reg_params11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args366, Rsh_Fir_param_types_empty()));
  // l3 = ld startPars
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 74), RHO);
  // c38 = `is.object`(l3)
  SEXP Rsh_Fir_array_args367[1];
  Rsh_Fir_array_args367[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args367, Rsh_Fir_param_types_empty());
  // if c38 then L111() else L112(params11, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L111()
    goto L111_;
  } else {
  // L112(params11, l3)
    Rsh_Fir_reg_params13_ = Rsh_Fir_reg_params11_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L112_;
  }

L111_:;
  // dr12 = tryDispatchBuiltin.0("[<-", l3, params11)
  SEXP Rsh_Fir_array_args368[3];
  Rsh_Fir_array_args368[0] = Rsh_const(CCP, 84);
  Rsh_Fir_array_args368[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args368[2] = Rsh_Fir_reg_params11_;
  Rsh_Fir_reg_dr12_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args368);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args369[1];
  Rsh_Fir_array_args369[0] = Rsh_Fir_reg_dr12_1;
  Rsh_Fir_reg_dc6_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args369, Rsh_Fir_param_types_empty());
  // if dc6 then L113() else L112(params11, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_1)) {
  // L113()
    goto L113_;
  } else {
  // L112(params11, dr12)
    Rsh_Fir_reg_params13_ = Rsh_Fir_reg_params11_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr12_1;
    goto L112_;
  }

L112_:;
  // vary2 = ld vary
  Rsh_Fir_reg_vary2_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // check L114() else D37()
  // L114()
  goto L114_;

L113_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args370[1];
  Rsh_Fir_array_args370[0] = Rsh_Fir_reg_dr12_1;
  Rsh_Fir_reg_dx12_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args370, Rsh_Fir_param_types_empty());
  // goto L22(params11, dx12)
  // L22(params11, dx12)
  Rsh_Fir_reg_params15_ = Rsh_Fir_reg_params11_;
  Rsh_Fir_reg_dx13_1 = Rsh_Fir_reg_dx12_1;
  goto L22_;

D37_:;
  // deopt 128 [params13, l5, params11, vary2]
  SEXP Rsh_Fir_array_deopt_stack92[4];
  Rsh_Fir_array_deopt_stack92[0] = Rsh_Fir_reg_params13_;
  Rsh_Fir_array_deopt_stack92[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack92[2] = Rsh_Fir_reg_params11_;
  Rsh_Fir_array_deopt_stack92[3] = Rsh_Fir_reg_vary2_;
  Rsh_Fir_deopt(128, 4, Rsh_Fir_array_deopt_stack92, CCP, RHO);
  return R_NilValue;

L114_:;
  // vary3 = force? vary2
  Rsh_Fir_reg_vary3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vary2_);
  // checkMissing(vary3)
  SEXP Rsh_Fir_array_args371[1];
  Rsh_Fir_array_args371[0] = Rsh_Fir_reg_vary3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args371, Rsh_Fir_param_types_empty()));
  // r66 = `!`(vary3)
  SEXP Rsh_Fir_array_args372[1];
  Rsh_Fir_array_args372[0] = Rsh_Fir_reg_vary3_;
  Rsh_Fir_reg_r66_1 = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args372, Rsh_Fir_param_types_empty());
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // r67 = dyn ___1(l5, params11, r66)
  SEXP Rsh_Fir_array_args373[3];
  Rsh_Fir_array_args373[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args373[1] = Rsh_Fir_reg_params11_;
  Rsh_Fir_array_args373[2] = Rsh_Fir_reg_r66_1;
  SEXP Rsh_Fir_array_arg_names108[3];
  Rsh_Fir_array_arg_names108[0] = R_MissingArg;
  Rsh_Fir_array_arg_names108[1] = R_MissingArg;
  Rsh_Fir_array_arg_names108[2] = R_MissingArg;
  Rsh_Fir_reg_r67_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args373, Rsh_Fir_array_arg_names108, CCP, RHO);
  // goto L22(params13, r67)
  // L22(params13, r67)
  Rsh_Fir_reg_params15_ = Rsh_Fir_reg_params13_;
  Rsh_Fir_reg_dx13_1 = Rsh_Fir_reg_r67_1;
  goto L22_;

D38_:;
  // deopt 133 [fittedModel]
  SEXP Rsh_Fir_array_deopt_stack93[1];
  Rsh_Fir_array_deopt_stack93[0] = Rsh_Fir_reg_fittedModel2;
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack93, CCP, RHO);
  return R_NilValue;

L115_:;
  // fittedModel1 = force? fittedModel
  Rsh_Fir_reg_fittedModel1_2 = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedModel2);
  // checkMissing(fittedModel1)
  SEXP Rsh_Fir_array_args374[1];
  Rsh_Fir_array_args374[0] = Rsh_Fir_reg_fittedModel1_2;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args374, Rsh_Fir_param_types_empty()));
  // c39 = `is.object`(fittedModel1)
  SEXP Rsh_Fir_array_args375[1];
  Rsh_Fir_array_args375[0] = Rsh_Fir_reg_fittedModel1_2;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args375, Rsh_Fir_param_types_empty());
  // if c39 then L117() else L118(fittedModel1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L117()
    goto L117_;
  } else {
  // L118(fittedModel1)
    Rsh_Fir_reg_fittedModel3_2 = Rsh_Fir_reg_fittedModel1_2;
    goto L118_;
  }

L116_:;
  // checkFun.0(dx15)
  SEXP Rsh_Fir_array_args376[1];
  Rsh_Fir_array_args376[0] = Rsh_Fir_reg_dx15_1;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args376));
  // dx16 = dx15 as cls
  Rsh_Fir_reg_dx16_ = Rsh_Fir_cast(Rsh_Fir_reg_dx15_1, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r69 = dyn dx16()
  Rsh_Fir_reg_r69_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dx16_, 0, NULL, NULL, CCP, RHO);
  // check L120() else D39()
  // L120()
  goto L120_;

L117_:;
  // dr14 = tryDispatchBuiltin.1("$", fittedModel1)
  SEXP Rsh_Fir_array_args377[2];
  Rsh_Fir_array_args377[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args377[1] = Rsh_Fir_reg_fittedModel1_2;
  Rsh_Fir_reg_dr14_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args377);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args378[1];
  Rsh_Fir_array_args378[0] = Rsh_Fir_reg_dr14_1;
  Rsh_Fir_reg_dc7_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args378, Rsh_Fir_param_types_empty());
  // if dc7 then L119() else L118(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_1)) {
  // L119()
    goto L119_;
  } else {
  // L118(dr14)
    Rsh_Fir_reg_fittedModel3_2 = Rsh_Fir_reg_dr14_1;
    goto L118_;
  }

L118_:;
  // r68 = `$`(fittedModel3, <sym setVarying>)
  SEXP Rsh_Fir_array_args379[2];
  Rsh_Fir_array_args379[0] = Rsh_Fir_reg_fittedModel3_2;
  Rsh_Fir_array_args379[1] = Rsh_const(CCP, 57);
  Rsh_Fir_reg_r68_1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args379, Rsh_Fir_param_types_empty());
  // goto L116(r68)
  // L116(r68)
  Rsh_Fir_reg_dx15_1 = Rsh_Fir_reg_r68_1;
  goto L116_;

L119_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args380[1];
  Rsh_Fir_array_args380[0] = Rsh_Fir_reg_dr14_1;
  Rsh_Fir_reg_dx14_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args380, Rsh_Fir_param_types_empty());
  // goto L116(dx14)
  // L116(dx14)
  Rsh_Fir_reg_dx15_1 = Rsh_Fir_reg_dx14_1;
  goto L116_;

D39_:;
  // deopt 137 [r69]
  SEXP Rsh_Fir_array_deopt_stack94[1];
  Rsh_Fir_array_deopt_stack94[0] = Rsh_Fir_reg_r69_1;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack94, CCP, RHO);
  return R_NilValue;

L120_:;
  // fittedModel4 = ld fittedModel
  Rsh_Fir_reg_fittedModel4_1 = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L121() else D40()
  // L121()
  goto L121_;

D40_:;
  // deopt 138 [fittedModel4]
  SEXP Rsh_Fir_array_deopt_stack95[1];
  Rsh_Fir_array_deopt_stack95[0] = Rsh_Fir_reg_fittedModel4_1;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack95, CCP, RHO);
  return R_NilValue;

L121_:;
  // fittedModel5 = force? fittedModel4
  Rsh_Fir_reg_fittedModel5_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedModel4_1);
  // checkMissing(fittedModel5)
  SEXP Rsh_Fir_array_args381[1];
  Rsh_Fir_array_args381[0] = Rsh_Fir_reg_fittedModel5_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args381, Rsh_Fir_param_types_empty()));
  // c40 = `is.object`(fittedModel5)
  SEXP Rsh_Fir_array_args382[1];
  Rsh_Fir_array_args382[0] = Rsh_Fir_reg_fittedModel5_1;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args382, Rsh_Fir_param_types_empty());
  // if c40 then L123() else L124(fittedModel5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L123()
    goto L123_;
  } else {
  // L124(fittedModel5)
    Rsh_Fir_reg_fittedModel7_1 = Rsh_Fir_reg_fittedModel5_1;
    goto L124_;
  }

L122_:;
  // checkFun.0(dx18)
  SEXP Rsh_Fir_array_args383[1];
  Rsh_Fir_array_args383[0] = Rsh_Fir_reg_dx18_1;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args383));
  // dx19 = dx18 as cls
  Rsh_Fir_reg_dx19_1 = Rsh_Fir_cast(Rsh_Fir_reg_dx18_1, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p9 = prom<V +>{
  //   startPars = ld startPars;
  //   startPars1 = force? startPars;
  //   checkMissing(startPars1);
  //   return startPars1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_9, CCP, RHO);
  // r72 = dyn dx19(p9)
  SEXP Rsh_Fir_array_args385[1];
  Rsh_Fir_array_args385[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names109[1];
  Rsh_Fir_array_arg_names109[0] = R_MissingArg;
  Rsh_Fir_reg_r72_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dx19_1, 1, Rsh_Fir_array_args385, Rsh_Fir_array_arg_names109, CCP, RHO);
  // check L126() else D41()
  // L126()
  goto L126_;

L123_:;
  // dr16 = tryDispatchBuiltin.1("$", fittedModel5)
  SEXP Rsh_Fir_array_args386[2];
  Rsh_Fir_array_args386[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args386[1] = Rsh_Fir_reg_fittedModel5_1;
  Rsh_Fir_reg_dr16_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args386);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args387[1];
  Rsh_Fir_array_args387[0] = Rsh_Fir_reg_dr16_1;
  Rsh_Fir_reg_dc8_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args387, Rsh_Fir_param_types_empty());
  // if dc8 then L125() else L124(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_1)) {
  // L125()
    goto L125_;
  } else {
  // L124(dr16)
    Rsh_Fir_reg_fittedModel7_1 = Rsh_Fir_reg_dr16_1;
    goto L124_;
  }

L124_:;
  // r70 = `$`(fittedModel7, <sym setPars>)
  SEXP Rsh_Fir_array_args388[2];
  Rsh_Fir_array_args388[0] = Rsh_Fir_reg_fittedModel7_1;
  Rsh_Fir_array_args388[1] = Rsh_const(CCP, 58);
  Rsh_Fir_reg_r70_1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args388, Rsh_Fir_param_types_empty());
  // goto L122(r70)
  // L122(r70)
  Rsh_Fir_reg_dx18_1 = Rsh_Fir_reg_r70_1;
  goto L122_;

L125_:;
  // dx17 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args389[1];
  Rsh_Fir_array_args389[0] = Rsh_Fir_reg_dr16_1;
  Rsh_Fir_reg_dx17_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args389, Rsh_Fir_param_types_empty());
  // goto L122(dx17)
  // L122(dx17)
  Rsh_Fir_reg_dx18_1 = Rsh_Fir_reg_dx17_1;
  goto L122_;

D41_:;
  // deopt 143 [r72]
  SEXP Rsh_Fir_array_deopt_stack96[1];
  Rsh_Fir_array_deopt_stack96[0] = Rsh_Fir_reg_r72_1;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack96, CCP, RHO);
  return R_NilValue;

L126_:;
  // fittedModel8 = ld fittedModel
  Rsh_Fir_reg_fittedModel8_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L127() else D42()
  // L127()
  goto L127_;

D42_:;
  // deopt 144 [fittedModel8]
  SEXP Rsh_Fir_array_deopt_stack97[1];
  Rsh_Fir_array_deopt_stack97[0] = Rsh_Fir_reg_fittedModel8_;
  Rsh_Fir_deopt(144, 1, Rsh_Fir_array_deopt_stack97, CCP, RHO);
  return R_NilValue;

L127_:;
  // fittedModel9 = force? fittedModel8
  Rsh_Fir_reg_fittedModel9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedModel8_);
  // checkMissing(fittedModel9)
  SEXP Rsh_Fir_array_args390[1];
  Rsh_Fir_array_args390[0] = Rsh_Fir_reg_fittedModel9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args390, Rsh_Fir_param_types_empty()));
  // c41 = `is.object`(fittedModel9)
  SEXP Rsh_Fir_array_args391[1];
  Rsh_Fir_array_args391[0] = Rsh_Fir_reg_fittedModel9_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args391, Rsh_Fir_param_types_empty());
  // if c41 then L129() else L130(fittedModel9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c41_)) {
  // L129()
    goto L129_;
  } else {
  // L130(fittedModel9)
    Rsh_Fir_reg_fittedModel11_ = Rsh_Fir_reg_fittedModel9_;
    goto L130_;
  }

L128_:;
  // checkFun.0(dx21)
  SEXP Rsh_Fir_array_args392[1];
  Rsh_Fir_array_args392[0] = Rsh_Fir_reg_dx21_1;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args392));
  // dx22 = dx21 as cls
  Rsh_Fir_reg_dx22_1 = Rsh_Fir_cast(Rsh_Fir_reg_dx21_1, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p10 = prom<V +>{
  //   vary4 = ld vary;
  //   vary5 = force? vary4;
  //   checkMissing(vary5);
  //   return vary5;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_10, CCP, RHO);
  // r75 = dyn dx22(p10)
  SEXP Rsh_Fir_array_args394[1];
  Rsh_Fir_array_args394[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names110[1];
  Rsh_Fir_array_arg_names110[0] = R_MissingArg;
  Rsh_Fir_reg_r75_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dx22_1, 1, Rsh_Fir_array_args394, Rsh_Fir_array_arg_names110, CCP, RHO);
  // check L132() else D43()
  // L132()
  goto L132_;

L129_:;
  // dr18 = tryDispatchBuiltin.1("$", fittedModel9)
  SEXP Rsh_Fir_array_args395[2];
  Rsh_Fir_array_args395[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args395[1] = Rsh_Fir_reg_fittedModel9_;
  Rsh_Fir_reg_dr18_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args395);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args396[1];
  Rsh_Fir_array_args396[0] = Rsh_Fir_reg_dr18_1;
  Rsh_Fir_reg_dc9_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args396, Rsh_Fir_param_types_empty());
  // if dc9 then L131() else L130(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_1)) {
  // L131()
    goto L131_;
  } else {
  // L130(dr18)
    Rsh_Fir_reg_fittedModel11_ = Rsh_Fir_reg_dr18_1;
    goto L130_;
  }

L130_:;
  // r73 = `$`(fittedModel11, <sym setVarying>)
  SEXP Rsh_Fir_array_args397[2];
  Rsh_Fir_array_args397[0] = Rsh_Fir_reg_fittedModel11_;
  Rsh_Fir_array_args397[1] = Rsh_const(CCP, 57);
  Rsh_Fir_reg_r73_1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args397, Rsh_Fir_param_types_empty());
  // goto L128(r73)
  // L128(r73)
  Rsh_Fir_reg_dx21_1 = Rsh_Fir_reg_r73_1;
  goto L128_;

L131_:;
  // dx20 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args398[1];
  Rsh_Fir_array_args398[0] = Rsh_Fir_reg_dr18_1;
  Rsh_Fir_reg_dx20_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args398, Rsh_Fir_param_types_empty());
  // goto L128(dx20)
  // L128(dx20)
  Rsh_Fir_reg_dx21_1 = Rsh_Fir_reg_dx20_1;
  goto L128_;

D43_:;
  // deopt 149 [r75]
  SEXP Rsh_Fir_array_deopt_stack98[1];
  Rsh_Fir_array_deopt_stack98[0] = Rsh_Fir_reg_r75_1;
  Rsh_Fir_deopt(149, 1, Rsh_Fir_array_deopt_stack98, CCP, RHO);
  return R_NilValue;

L132_:;
  // fittedModel12 = ld fittedModel
  Rsh_Fir_reg_fittedModel12_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L133() else D44()
  // L133()
  goto L133_;

D44_:;
  // deopt 150 [fittedModel12]
  SEXP Rsh_Fir_array_deopt_stack99[1];
  Rsh_Fir_array_deopt_stack99[0] = Rsh_Fir_reg_fittedModel12_;
  Rsh_Fir_deopt(150, 1, Rsh_Fir_array_deopt_stack99, CCP, RHO);
  return R_NilValue;

L133_:;
  // fittedModel13 = force? fittedModel12
  Rsh_Fir_reg_fittedModel13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedModel12_);
  // checkMissing(fittedModel13)
  SEXP Rsh_Fir_array_args399[1];
  Rsh_Fir_array_args399[0] = Rsh_Fir_reg_fittedModel13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args399, Rsh_Fir_param_types_empty()));
  // c42 = `is.object`(fittedModel13)
  SEXP Rsh_Fir_array_args400[1];
  Rsh_Fir_array_args400[0] = Rsh_Fir_reg_fittedModel13_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args400, Rsh_Fir_param_types_empty());
  // if c42 then L135() else L136(fittedModel13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L135()
    goto L135_;
  } else {
  // L136(fittedModel13)
    Rsh_Fir_reg_fittedModel15_ = Rsh_Fir_reg_fittedModel13_;
    goto L136_;
  }

L134_:;
  // checkFun.0(dx24)
  SEXP Rsh_Fir_array_args401[1];
  Rsh_Fir_array_args401[0] = Rsh_Fir_reg_dx24_1;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args401));
  // dx25 = dx24 as cls
  Rsh_Fir_reg_dx25_ = Rsh_Fir_cast(Rsh_Fir_reg_dx24_1, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p11 = prom<V +>{
  //   startPars2 = ld startPars;
  //   startPars3 = force? startPars2;
  //   checkMissing(startPars3);
  //   c43 = `is.object`(startPars3);
  //   if c43 then L1() else L2(startPars3);
  // L0(dx27):
  //   return dx27;
  // L1():
  //   dr22 = tryDispatchBuiltin.1("[", startPars3);
  //   dc11 = getTryDispatchBuiltinDispatched(dr22);
  //   if dc11 then L3() else L2(dr22);
  // L2(startPars5):
  //   vary6 = ld vary;
  //   vary7 = force? vary6;
  //   __5 = ldf `[` in base;
  //   r77 = dyn __5(startPars5, vary7);
  //   goto L0(r77);
  // L3():
  //   dx26 = getTryDispatchBuiltinValue(dr22);
  //   goto L0(dx26);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_11, CCP, RHO);
  // r79 = dyn dx25(p11)
  SEXP Rsh_Fir_array_args408[1];
  Rsh_Fir_array_args408[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names112[1];
  Rsh_Fir_array_arg_names112[0] = R_MissingArg;
  Rsh_Fir_reg_r79_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dx25_, 1, Rsh_Fir_array_args408, Rsh_Fir_array_arg_names112, CCP, RHO);
  // check L138() else D45()
  // L138()
  goto L138_;

L135_:;
  // dr20 = tryDispatchBuiltin.1("$", fittedModel13)
  SEXP Rsh_Fir_array_args409[2];
  Rsh_Fir_array_args409[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args409[1] = Rsh_Fir_reg_fittedModel13_;
  Rsh_Fir_reg_dr20_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args409);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args410[1];
  Rsh_Fir_array_args410[0] = Rsh_Fir_reg_dr20_1;
  Rsh_Fir_reg_dc10_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args410, Rsh_Fir_param_types_empty());
  // if dc10 then L137() else L136(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_1)) {
  // L137()
    goto L137_;
  } else {
  // L136(dr20)
    Rsh_Fir_reg_fittedModel15_ = Rsh_Fir_reg_dr20_1;
    goto L136_;
  }

L136_:;
  // r76 = `$`(fittedModel15, <sym setPars>)
  SEXP Rsh_Fir_array_args411[2];
  Rsh_Fir_array_args411[0] = Rsh_Fir_reg_fittedModel15_;
  Rsh_Fir_array_args411[1] = Rsh_const(CCP, 58);
  Rsh_Fir_reg_r76_1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args411, Rsh_Fir_param_types_empty());
  // goto L134(r76)
  // L134(r76)
  Rsh_Fir_reg_dx24_1 = Rsh_Fir_reg_r76_1;
  goto L134_;

L137_:;
  // dx23 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args412[1];
  Rsh_Fir_array_args412[0] = Rsh_Fir_reg_dr20_1;
  Rsh_Fir_reg_dx23_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args412, Rsh_Fir_param_types_empty());
  // goto L134(dx23)
  // L134(dx23)
  Rsh_Fir_reg_dx24_1 = Rsh_Fir_reg_dx23_1;
  goto L134_;

D45_:;
  // deopt 155 [r79]
  SEXP Rsh_Fir_array_deopt_stack100[1];
  Rsh_Fir_array_deopt_stack100[0] = Rsh_Fir_reg_r79_1;
  Rsh_Fir_deopt(155, 1, Rsh_Fir_array_deopt_stack100, CCP, RHO);
  return R_NilValue;

L138_:;
  // algorithm = ld algorithm
  Rsh_Fir_reg_algorithm = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L139() else D46()
  // L139()
  goto L139_;

D46_:;
  // deopt 156 [algorithm]
  SEXP Rsh_Fir_array_deopt_stack101[1];
  Rsh_Fir_array_deopt_stack101[0] = Rsh_Fir_reg_algorithm;
  Rsh_Fir_deopt(156, 1, Rsh_Fir_array_deopt_stack101, CCP, RHO);
  return R_NilValue;

L139_:;
  // algorithm1 = force? algorithm
  Rsh_Fir_reg_algorithm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_algorithm);
  // checkMissing(algorithm1)
  SEXP Rsh_Fir_array_args413[1];
  Rsh_Fir_array_args413[0] = Rsh_Fir_reg_algorithm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args413, Rsh_Fir_param_types_empty()));
  // r80 = `!=`(algorithm1, "port")
  SEXP Rsh_Fir_array_args414[2];
  Rsh_Fir_array_args414[0] = Rsh_Fir_reg_algorithm1_;
  Rsh_Fir_array_args414[1] = Rsh_const(CCP, 93);
  Rsh_Fir_reg_r80_1 = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args414, Rsh_Fir_param_types_empty());
  // c44 = `as.logical`(r80)
  SEXP Rsh_Fir_array_args415[1];
  Rsh_Fir_array_args415[0] = Rsh_Fir_reg_r80_1;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args415, Rsh_Fir_param_types_empty());
  // if c44 then L140() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c44_)) {
  // L140()
    goto L140_;
  } else {
  // L23()
    goto L23_;
  }

L140_:;
  // sym12 = ldf sum
  Rsh_Fir_reg_sym12_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 94), RHO);
  // base12 = ldf sum in base
  Rsh_Fir_reg_base12_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 94), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args416[2];
  Rsh_Fir_array_args416[0] = Rsh_Fir_reg_sym12_2;
  Rsh_Fir_array_args416[1] = Rsh_Fir_reg_base12_2;
  Rsh_Fir_reg_guard12_2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args416);
  // if guard12 then L141() else L142()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_2)) {
  // L141()
    goto L141_;
  } else {
  // L142()
    goto L142_;
  }

L141_:;
  // vary8 = ld vary
  Rsh_Fir_reg_vary8_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // check L143() else D47()
  // L143()
  goto L143_;

L142_:;
  // r81 = dyn base12(<sym vary>)
  SEXP Rsh_Fir_array_args417[1];
  Rsh_Fir_array_args417[0] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names113[1];
  Rsh_Fir_array_arg_names113[0] = R_MissingArg;
  Rsh_Fir_reg_r81_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_2, 1, Rsh_Fir_array_args417, Rsh_Fir_array_arg_names113, CCP, RHO);
  // goto L24(r81)
  // L24(r81)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r81_1;
  goto L24_;

D47_:;
  // deopt 162 [vary8]
  SEXP Rsh_Fir_array_deopt_stack102[1];
  Rsh_Fir_array_deopt_stack102[0] = Rsh_Fir_reg_vary8_;
  Rsh_Fir_deopt(162, 1, Rsh_Fir_array_deopt_stack102, CCP, RHO);
  return R_NilValue;

L143_:;
  // vary9 = force? vary8
  Rsh_Fir_reg_vary9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vary8_);
  // checkMissing(vary9)
  SEXP Rsh_Fir_array_args418[1];
  Rsh_Fir_array_args418[0] = Rsh_Fir_reg_vary9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args418, Rsh_Fir_param_types_empty()));
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 94), RHO);
  // r83 = dyn sum(vary9)
  SEXP Rsh_Fir_array_args419[1];
  Rsh_Fir_array_args419[0] = Rsh_Fir_reg_vary9_;
  SEXP Rsh_Fir_array_arg_names114[1];
  Rsh_Fir_array_arg_names114[0] = R_MissingArg;
  Rsh_Fir_reg_r83_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args419, Rsh_Fir_array_arg_names114, CCP, RHO);
  // check L144() else D48()
  // L144()
  goto L144_;

D48_:;
  // deopt 165 [r83]
  SEXP Rsh_Fir_array_deopt_stack103[1];
  Rsh_Fir_array_deopt_stack103[0] = Rsh_Fir_reg_r83_1;
  Rsh_Fir_deopt(165, 1, Rsh_Fir_array_deopt_stack103, CCP, RHO);
  return R_NilValue;

L144_:;
  // goto L24(r83)
  // L24(r83)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r83_1;
  goto L24_;

L145_:;
  // sym13 = ldf `.Call`
  Rsh_Fir_reg_sym13_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 95), RHO);
  // base13 = ldf `.Call` in base
  Rsh_Fir_reg_base13_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 95), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args420[2];
  Rsh_Fir_array_args420[0] = Rsh_Fir_reg_sym13_1;
  Rsh_Fir_array_args420[1] = Rsh_Fir_reg_base13_1;
  Rsh_Fir_reg_guard13_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args420);
  // if guard13 then L146() else L147()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_1)) {
  // L146()
    goto L146_;
  } else {
  // L147()
    goto L147_;
  }

L146_:;
  // C_nls_iter = ld C_nls_iter
  Rsh_Fir_reg_C_nls_iter = Rsh_Fir_load(Rsh_const(CCP, 96), RHO);
  // check L148() else D49()
  // L148()
  goto L148_;

L147_:;
  // r84 = dyn base13(<sym C_nls_iter>, <sym fittedModel>, <sym ctrl>, <sym trace>)
  SEXP Rsh_Fir_array_args421[4];
  Rsh_Fir_array_args421[0] = Rsh_const(CCP, 96);
  Rsh_Fir_array_args421[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args421[2] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args421[3] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names115[4];
  Rsh_Fir_array_arg_names115[0] = R_MissingArg;
  Rsh_Fir_array_arg_names115[1] = R_MissingArg;
  Rsh_Fir_array_arg_names115[2] = R_MissingArg;
  Rsh_Fir_array_arg_names115[3] = R_MissingArg;
  Rsh_Fir_reg_r84_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_1, 4, Rsh_Fir_array_args421, Rsh_Fir_array_arg_names115, CCP, RHO);
  // goto L26(r84)
  // L26(r84)
  Rsh_Fir_reg_r85_1 = Rsh_Fir_reg_r84_1;
  goto L26_;

D49_:;
  // deopt 167 [C_nls_iter]
  SEXP Rsh_Fir_array_deopt_stack104[1];
  Rsh_Fir_array_deopt_stack104[0] = Rsh_Fir_reg_C_nls_iter;
  Rsh_Fir_deopt(167, 1, Rsh_Fir_array_deopt_stack104, CCP, RHO);
  return R_NilValue;

L148_:;
  // C_nls_iter1 = force? C_nls_iter
  Rsh_Fir_reg_C_nls_iter1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_nls_iter);
  // checkMissing(C_nls_iter1)
  SEXP Rsh_Fir_array_args422[1];
  Rsh_Fir_array_args422[0] = Rsh_Fir_reg_C_nls_iter1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args422, Rsh_Fir_param_types_empty()));
  // fittedModel16 = ld fittedModel
  Rsh_Fir_reg_fittedModel16_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L149() else D50()
  // L149()
  goto L149_;

D50_:;
  // deopt 168 [C_nls_iter1, fittedModel16]
  SEXP Rsh_Fir_array_deopt_stack105[2];
  Rsh_Fir_array_deopt_stack105[0] = Rsh_Fir_reg_C_nls_iter1_;
  Rsh_Fir_array_deopt_stack105[1] = Rsh_Fir_reg_fittedModel16_;
  Rsh_Fir_deopt(168, 2, Rsh_Fir_array_deopt_stack105, CCP, RHO);
  return R_NilValue;

L149_:;
  // fittedModel17 = force? fittedModel16
  Rsh_Fir_reg_fittedModel17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedModel16_);
  // checkMissing(fittedModel17)
  SEXP Rsh_Fir_array_args423[1];
  Rsh_Fir_array_args423[0] = Rsh_Fir_reg_fittedModel17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args423, Rsh_Fir_param_types_empty()));
  // ctrl = ld ctrl
  Rsh_Fir_reg_ctrl = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L150() else D51()
  // L150()
  goto L150_;

D51_:;
  // deopt 169 [C_nls_iter1, fittedModel17, ctrl]
  SEXP Rsh_Fir_array_deopt_stack106[3];
  Rsh_Fir_array_deopt_stack106[0] = Rsh_Fir_reg_C_nls_iter1_;
  Rsh_Fir_array_deopt_stack106[1] = Rsh_Fir_reg_fittedModel17_;
  Rsh_Fir_array_deopt_stack106[2] = Rsh_Fir_reg_ctrl;
  Rsh_Fir_deopt(169, 3, Rsh_Fir_array_deopt_stack106, CCP, RHO);
  return R_NilValue;

L150_:;
  // ctrl1 = force? ctrl
  Rsh_Fir_reg_ctrl1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ctrl);
  // checkMissing(ctrl1)
  SEXP Rsh_Fir_array_args424[1];
  Rsh_Fir_array_args424[0] = Rsh_Fir_reg_ctrl1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args424, Rsh_Fir_param_types_empty()));
  // trace = ld trace
  Rsh_Fir_reg_trace = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L151() else D52()
  // L151()
  goto L151_;

D52_:;
  // deopt 170 [C_nls_iter1, fittedModel17, ctrl1, trace]
  SEXP Rsh_Fir_array_deopt_stack107[4];
  Rsh_Fir_array_deopt_stack107[0] = Rsh_Fir_reg_C_nls_iter1_;
  Rsh_Fir_array_deopt_stack107[1] = Rsh_Fir_reg_fittedModel17_;
  Rsh_Fir_array_deopt_stack107[2] = Rsh_Fir_reg_ctrl1_;
  Rsh_Fir_array_deopt_stack107[3] = Rsh_Fir_reg_trace;
  Rsh_Fir_deopt(170, 4, Rsh_Fir_array_deopt_stack107, CCP, RHO);
  return R_NilValue;

L151_:;
  // trace1 = force? trace
  Rsh_Fir_reg_trace1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_trace);
  // checkMissing(trace1)
  SEXP Rsh_Fir_array_args425[1];
  Rsh_Fir_array_args425[0] = Rsh_Fir_reg_trace1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args425, Rsh_Fir_param_types_empty()));
  // vargs = dots[fittedModel17, ctrl1, trace1]
  SEXP Rsh_Fir_array_vector_values[3];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_fittedModel17_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_ctrl1_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_trace1_;
  SEXP Rsh_Fir_array_vector_names[3];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 3, Rsh_Fir_array_vector_values, NULL);
  // r86 = `.Call`(C_nls_iter1, vargs, <missing>)
  SEXP Rsh_Fir_array_args426[3];
  Rsh_Fir_array_args426[0] = Rsh_Fir_reg_C_nls_iter1_;
  Rsh_Fir_array_args426[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args426[2] = Rsh_const(CCP, 97);
  Rsh_Fir_reg_r86_1 = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args426, Rsh_Fir_param_types_empty());
  // goto L26(r86)
  // L26(r86)
  Rsh_Fir_reg_r85_1 = Rsh_Fir_reg_r86_1;
  goto L26_;

D53_:;
  // deopt 175 [fittedModel18]
  SEXP Rsh_Fir_array_deopt_stack108[1];
  Rsh_Fir_array_deopt_stack108[0] = Rsh_Fir_reg_fittedModel18_;
  Rsh_Fir_deopt(175, 1, Rsh_Fir_array_deopt_stack108, CCP, RHO);
  return R_NilValue;

L153_:;
  // fittedModel19 = force? fittedModel18
  Rsh_Fir_reg_fittedModel19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedModel18_);
  // checkMissing(fittedModel19)
  SEXP Rsh_Fir_array_args427[1];
  Rsh_Fir_array_args427[0] = Rsh_Fir_reg_fittedModel19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args427, Rsh_Fir_param_types_empty()));
  // c46 = `is.object`(fittedModel19)
  SEXP Rsh_Fir_array_args428[1];
  Rsh_Fir_array_args428[0] = Rsh_Fir_reg_fittedModel19_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args428, Rsh_Fir_param_types_empty());
  // if c46 then L155() else L156(fittedModel19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L155()
    goto L155_;
  } else {
  // L156(fittedModel19)
    Rsh_Fir_reg_fittedModel21_ = Rsh_Fir_reg_fittedModel19_;
    goto L156_;
  }

L154_:;
  // checkFun.0(dx29)
  SEXP Rsh_Fir_array_args429[1];
  Rsh_Fir_array_args429[0] = Rsh_Fir_reg_dx29_1;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args429));
  // dx30 = dx29 as cls
  Rsh_Fir_reg_dx30_1 = Rsh_Fir_cast(Rsh_Fir_reg_dx29_1, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r89 = dyn dx30()
  Rsh_Fir_reg_r89_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dx30_1, 0, NULL, NULL, CCP, RHO);
  // check L158() else D54()
  // L158()
  goto L158_;

L155_:;
  // dr24 = tryDispatchBuiltin.1("$", fittedModel19)
  SEXP Rsh_Fir_array_args430[2];
  Rsh_Fir_array_args430[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args430[1] = Rsh_Fir_reg_fittedModel19_;
  Rsh_Fir_reg_dr24_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args430);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args431[1];
  Rsh_Fir_array_args431[0] = Rsh_Fir_reg_dr24_1;
  Rsh_Fir_reg_dc12_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args431, Rsh_Fir_param_types_empty());
  // if dc12 then L157() else L156(dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_1)) {
  // L157()
    goto L157_;
  } else {
  // L156(dr24)
    Rsh_Fir_reg_fittedModel21_ = Rsh_Fir_reg_dr24_1;
    goto L156_;
  }

L156_:;
  // r88 = `$`(fittedModel21, <sym deviance>)
  SEXP Rsh_Fir_array_args432[2];
  Rsh_Fir_array_args432[0] = Rsh_Fir_reg_fittedModel21_;
  Rsh_Fir_array_args432[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r88_1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args432, Rsh_Fir_param_types_empty());
  // goto L154(r88)
  // L154(r88)
  Rsh_Fir_reg_dx29_1 = Rsh_Fir_reg_r88_1;
  goto L154_;

L157_:;
  // dx28 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args433[1];
  Rsh_Fir_array_args433[0] = Rsh_Fir_reg_dr24_1;
  Rsh_Fir_reg_dx28_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args433, Rsh_Fir_param_types_empty());
  // goto L154(dx28)
  // L154(dx28)
  Rsh_Fir_reg_dx29_1 = Rsh_Fir_reg_dx28_1;
  goto L154_;

D54_:;
  // deopt 179 [r89]
  SEXP Rsh_Fir_array_deopt_stack109[1];
  Rsh_Fir_array_deopt_stack109[0] = Rsh_Fir_reg_r89_1;
  Rsh_Fir_deopt(179, 1, Rsh_Fir_array_deopt_stack109, CCP, RHO);
  return R_NilValue;

L158_:;
  // st dev = r89
  Rsh_Fir_store(Rsh_const(CCP, 78), Rsh_Fir_reg_r89_1, RHO);
  (void)(Rsh_Fir_reg_r89_1);
  // goto L28()
  // L28()
  goto L28_;

D55_:;
  // deopt 182 []
  Rsh_Fir_deopt(182, 0, NULL, CCP, RHO);
  return R_NilValue;

L160_:;
  // p12 = prom<V +>{
  //   fittedModel22 = ld fittedModel;
  //   fittedModel23 = force? fittedModel22;
  //   checkMissing(fittedModel23);
  //   return fittedModel23;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_12, CCP, RHO);
  // p13 = prom<V +>{
  //   startPars6 = ld startPars;
  //   startPars7 = force? startPars6;
  //   checkMissing(startPars7);
  //   c47 = `is.object`(startPars7);
  //   if c47 then L1() else L2(startPars7);
  // L0(dx32):
  //   return dx32;
  // L1():
  //   dr26 = tryDispatchBuiltin.1("[", startPars7);
  //   dc13 = getTryDispatchBuiltinDispatched(dr26);
  //   if dc13 then L3() else L2(dr26);
  // L2(startPars9):
  //   vary10 = ld vary;
  //   vary11 = force? vary10;
  //   __6 = ldf `[` in base;
  //   r92 = dyn __6(startPars9, vary11);
  //   goto L0(r92);
  // L3():
  //   dx31 = getTryDispatchBuiltinValue(dr26);
  //   goto L0(dx31);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_13, CCP, RHO);
  // p14 = prom<V +>{
  //   lower = ld lower;
  //   lower1 = force? lower;
  //   checkMissing(lower1);
  //   c48 = `is.object`(lower1);
  //   if c48 then L1() else L2(lower1);
  // L0(dx34):
  //   return dx34;
  // L1():
  //   dr28 = tryDispatchBuiltin.1("[", lower1);
  //   dc14 = getTryDispatchBuiltinDispatched(dr28);
  //   if dc14 then L3() else L2(dr28);
  // L2(lower3):
  //   vary12 = ld vary;
  //   vary13 = force? vary12;
  //   __7 = ldf `[` in base;
  //   r94 = dyn __7(lower3, vary13);
  //   goto L0(r94);
  // L3():
  //   dx33 = getTryDispatchBuiltinValue(dr28);
  //   goto L0(dx33);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_14, CCP, RHO);
  // p15 = prom<V +>{
  //   upper = ld upper;
  //   upper1 = force? upper;
  //   checkMissing(upper1);
  //   c49 = `is.object`(upper1);
  //   if c49 then L1() else L2(upper1);
  // L0(dx36):
  //   return dx36;
  // L1():
  //   dr30 = tryDispatchBuiltin.1("[", upper1);
  //   dc15 = getTryDispatchBuiltinDispatched(dr30);
  //   if dc15 then L3() else L2(dr30);
  // L2(upper3):
  //   vary14 = ld vary;
  //   vary15 = force? vary14;
  //   __8 = ldf `[` in base;
  //   r96 = dyn __8(upper3, vary15);
  //   goto L0(r96);
  // L3():
  //   dx35 = getTryDispatchBuiltinValue(dr30);
  //   goto L0(dx35);
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_15, CCP, RHO);
  // p16 = prom<V +>{
  //   ctrl2 = ld ctrl;
  //   ctrl3 = force? ctrl2;
  //   checkMissing(ctrl3);
  //   return ctrl3;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_16, CCP, RHO);
  // p17 = prom<V +>{
  //   trace2 = ld trace;
  //   trace3 = force? trace2;
  //   checkMissing(trace3);
  //   return trace3;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_17, CCP, RHO);
  // r100 = dyn nls_port_fit(p12, p13, p14, p15, p16, p17)
  SEXP Rsh_Fir_array_args455[6];
  Rsh_Fir_array_args455[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args455[1] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args455[2] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args455[3] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args455[4] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args455[5] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names119[6];
  Rsh_Fir_array_arg_names119[0] = R_MissingArg;
  Rsh_Fir_array_arg_names119[1] = R_MissingArg;
  Rsh_Fir_array_arg_names119[2] = R_MissingArg;
  Rsh_Fir_array_arg_names119[3] = R_MissingArg;
  Rsh_Fir_array_arg_names119[4] = R_MissingArg;
  Rsh_Fir_array_arg_names119[5] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nls_port_fit, 6, Rsh_Fir_array_args455, Rsh_Fir_array_arg_names119, CCP, RHO);
  // check L161() else D56()
  // L161()
  goto L161_;

D56_:;
  // deopt 189 [r100]
  SEXP Rsh_Fir_array_deopt_stack110[1];
  Rsh_Fir_array_deopt_stack110[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_deopt(189, 1, Rsh_Fir_array_deopt_stack110, CCP, RHO);
  return R_NilValue;

L161_:;
  // st iv = r100
  Rsh_Fir_store(Rsh_const(CCP, 98), Rsh_Fir_reg_r100_, RHO);
  (void)(Rsh_Fir_reg_r100_);
  // _in_2 = ldf `%in%`
  Rsh_Fir_reg__in_2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L162() else D57()
  // L162()
  goto L162_;

D57_:;
  // deopt 192 []
  Rsh_Fir_deopt(192, 0, NULL, CCP, RHO);
  return R_NilValue;

L162_:;
  // p18 = prom<V +>{
  //   iv = ld iv;
  //   iv1 = force? iv;
  //   checkMissing(iv1);
  //   c50 = `is.object`(iv1);
  //   if c50 then L1() else L2(iv1);
  // L0(dx38):
  //   return dx38;
  // L1():
  //   dr32 = tryDispatchBuiltin.1("[", iv1);
  //   dc16 = getTryDispatchBuiltinDispatched(dr32);
  //   if dc16 then L3() else L2(dr32);
  // L2(iv3):
  //   __9 = ldf `[` in base;
  //   r101 = dyn __9(iv3, 1);
  //   goto L0(r101);
  // L3():
  //   dx37 = getTryDispatchBuiltinValue(dr32);
  //   goto L0(dx37);
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_18, CCP, RHO);
  // p19 = prom<V +>{
  //   return <int 3, 4, 5, 6>;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_19, CCP, RHO);
  // r104 = dyn _in_2(p18, p19)
  SEXP Rsh_Fir_array_args462[2];
  Rsh_Fir_array_args462[0] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args462[1] = Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_array_arg_names121[2];
  Rsh_Fir_array_arg_names121[0] = R_MissingArg;
  Rsh_Fir_array_arg_names121[1] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_2_1, 2, Rsh_Fir_array_args462, Rsh_Fir_array_arg_names121, CCP, RHO);
  // check L163() else D58()
  // L163()
  goto L163_;

D58_:;
  // deopt 195 [r104]
  SEXP Rsh_Fir_array_deopt_stack111[1];
  Rsh_Fir_array_deopt_stack111[0] = Rsh_Fir_reg_r104_;
  Rsh_Fir_deopt(195, 1, Rsh_Fir_array_deopt_stack111, CCP, RHO);
  return R_NilValue;

L163_:;
  // r105 = `!`(r104)
  SEXP Rsh_Fir_array_args463[1];
  Rsh_Fir_array_args463[0] = Rsh_Fir_reg_r104_;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args463, Rsh_Fir_param_types_empty());
  // c51 = `as.logical`(r105)
  SEXP Rsh_Fir_array_args464[1];
  Rsh_Fir_array_args464[0] = Rsh_Fir_reg_r105_;
  Rsh_Fir_reg_c51_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args464, Rsh_Fir_param_types_empty());
  // if c51 then L164() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c51_)) {
  // L164()
    goto L164_;
  } else {
  // L29()
    goto L29_;
  }

L164_:;
  // goto L30(NA_REAL)
  // L30(NA_REAL)
  Rsh_Fir_reg_r106_ = Rsh_const(CCP, 100);
  goto L30_;

D59_:;
  // deopt 199 [fittedModel24]
  SEXP Rsh_Fir_array_deopt_stack112[1];
  Rsh_Fir_array_deopt_stack112[0] = Rsh_Fir_reg_fittedModel24_;
  Rsh_Fir_deopt(199, 1, Rsh_Fir_array_deopt_stack112, CCP, RHO);
  return R_NilValue;

L166_:;
  // fittedModel25 = force? fittedModel24
  Rsh_Fir_reg_fittedModel25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedModel24_);
  // checkMissing(fittedModel25)
  SEXP Rsh_Fir_array_args465[1];
  Rsh_Fir_array_args465[0] = Rsh_Fir_reg_fittedModel25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args465, Rsh_Fir_param_types_empty()));
  // c52 = `is.object`(fittedModel25)
  SEXP Rsh_Fir_array_args466[1];
  Rsh_Fir_array_args466[0] = Rsh_Fir_reg_fittedModel25_;
  Rsh_Fir_reg_c52_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args466, Rsh_Fir_param_types_empty());
  // if c52 then L168() else L169(fittedModel25)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c52_)) {
  // L168()
    goto L168_;
  } else {
  // L169(fittedModel25)
    Rsh_Fir_reg_fittedModel27_ = Rsh_Fir_reg_fittedModel25_;
    goto L169_;
  }

L167_:;
  // checkFun.0(dx40)
  SEXP Rsh_Fir_array_args467[1];
  Rsh_Fir_array_args467[0] = Rsh_Fir_reg_dx40_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args467));
  // dx41 = dx40 as cls
  Rsh_Fir_reg_dx41_ = Rsh_Fir_cast(Rsh_Fir_reg_dx40_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r108 = dyn dx41()
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dx41_, 0, NULL, NULL, CCP, RHO);
  // check L171() else D60()
  // L171()
  goto L171_;

L168_:;
  // dr34 = tryDispatchBuiltin.1("$", fittedModel25)
  SEXP Rsh_Fir_array_args468[2];
  Rsh_Fir_array_args468[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args468[1] = Rsh_Fir_reg_fittedModel25_;
  Rsh_Fir_reg_dr34_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args468);
  // dc17 = getTryDispatchBuiltinDispatched(dr34)
  SEXP Rsh_Fir_array_args469[1];
  Rsh_Fir_array_args469[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dc17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args469, Rsh_Fir_param_types_empty());
  // if dc17 then L170() else L169(dr34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc17_)) {
  // L170()
    goto L170_;
  } else {
  // L169(dr34)
    Rsh_Fir_reg_fittedModel27_ = Rsh_Fir_reg_dr34_;
    goto L169_;
  }

L169_:;
  // r107 = `$`(fittedModel27, <sym deviance>)
  SEXP Rsh_Fir_array_args470[2];
  Rsh_Fir_array_args470[0] = Rsh_Fir_reg_fittedModel27_;
  Rsh_Fir_array_args470[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args470, Rsh_Fir_param_types_empty());
  // goto L167(r107)
  // L167(r107)
  Rsh_Fir_reg_dx40_ = Rsh_Fir_reg_r107_;
  goto L167_;

L170_:;
  // dx39 = getTryDispatchBuiltinValue(dr34)
  SEXP Rsh_Fir_array_args471[1];
  Rsh_Fir_array_args471[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dx39_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args471, Rsh_Fir_param_types_empty());
  // goto L167(dx39)
  // L167(dx39)
  Rsh_Fir_reg_dx40_ = Rsh_Fir_reg_dx39_;
  goto L167_;

D60_:;
  // deopt 203 [r108]
  SEXP Rsh_Fir_array_deopt_stack113[1];
  Rsh_Fir_array_deopt_stack113[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_deopt(203, 1, Rsh_Fir_array_deopt_stack113, CCP, RHO);
  return R_NilValue;

L171_:;
  // goto L30(r108)
  // L30(r108)
  Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r108_;
  goto L30_;

D61_:;
  // deopt 205 [fittedModel28]
  SEXP Rsh_Fir_array_deopt_stack114[1];
  Rsh_Fir_array_deopt_stack114[0] = Rsh_Fir_reg_fittedModel28_;
  Rsh_Fir_deopt(205, 1, Rsh_Fir_array_deopt_stack114, CCP, RHO);
  return R_NilValue;

L172_:;
  // fittedModel29 = force? fittedModel28
  Rsh_Fir_reg_fittedModel29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedModel28_);
  // checkMissing(fittedModel29)
  SEXP Rsh_Fir_array_args472[1];
  Rsh_Fir_array_args472[0] = Rsh_Fir_reg_fittedModel29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args472, Rsh_Fir_param_types_empty()));
  // st profiledModel = fittedModel29
  Rsh_Fir_store(Rsh_const(CCP, 101), Rsh_Fir_reg_fittedModel29_, RHO);
  (void)(Rsh_Fir_reg_fittedModel29_);
  // dev = ld dev
  Rsh_Fir_reg_dev = Rsh_Fir_load(Rsh_const(CCP, 78), RHO);
  // check L173() else D62()
  // L173()
  goto L173_;

D62_:;
  // deopt 208 [dev]
  SEXP Rsh_Fir_array_deopt_stack115[1];
  Rsh_Fir_array_deopt_stack115[0] = Rsh_Fir_reg_dev;
  Rsh_Fir_deopt(208, 1, Rsh_Fir_array_deopt_stack115, CCP, RHO);
  return R_NilValue;

L173_:;
  // dev1 = force? dev
  Rsh_Fir_reg_dev1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dev);
  // checkMissing(dev1)
  SEXP Rsh_Fir_array_args473[1];
  Rsh_Fir_array_args473[0] = Rsh_Fir_reg_dev1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args473, Rsh_Fir_param_types_empty()));
  // S_hat = ld `S.hat`
  Rsh_Fir_reg_S_hat = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L174() else D63()
  // L174()
  goto L174_;

D63_:;
  // deopt 209 [dev1, S_hat]
  SEXP Rsh_Fir_array_deopt_stack116[2];
  Rsh_Fir_array_deopt_stack116[0] = Rsh_Fir_reg_dev1_;
  Rsh_Fir_array_deopt_stack116[1] = Rsh_Fir_reg_S_hat;
  Rsh_Fir_deopt(209, 2, Rsh_Fir_array_deopt_stack116, CCP, RHO);
  return R_NilValue;

L174_:;
  // S_hat1 = force? S_hat
  Rsh_Fir_reg_S_hat1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S_hat);
  // checkMissing(S_hat1)
  SEXP Rsh_Fir_array_args474[1];
  Rsh_Fir_array_args474[0] = Rsh_Fir_reg_S_hat1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args474, Rsh_Fir_param_types_empty()));
  // r109 = `-`(dev1, S_hat1)
  SEXP Rsh_Fir_array_args475[2];
  Rsh_Fir_array_args475[0] = Rsh_Fir_reg_dev1_;
  Rsh_Fir_array_args475[1] = Rsh_Fir_reg_S_hat1_;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args475, Rsh_Fir_param_types_empty());
  // s2_hat = ld `s2.hat`
  Rsh_Fir_reg_s2_hat = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L175() else D64()
  // L175()
  goto L175_;

D64_:;
  // deopt 211 [r109, s2_hat]
  SEXP Rsh_Fir_array_deopt_stack117[2];
  Rsh_Fir_array_deopt_stack117[0] = Rsh_Fir_reg_r109_;
  Rsh_Fir_array_deopt_stack117[1] = Rsh_Fir_reg_s2_hat;
  Rsh_Fir_deopt(211, 2, Rsh_Fir_array_deopt_stack117, CCP, RHO);
  return R_NilValue;

L175_:;
  // s2_hat1 = force? s2_hat
  Rsh_Fir_reg_s2_hat1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s2_hat);
  // checkMissing(s2_hat1)
  SEXP Rsh_Fir_array_args476[1];
  Rsh_Fir_array_args476[0] = Rsh_Fir_reg_s2_hat1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args476, Rsh_Fir_param_types_empty()));
  // r110 = `/`(r109, s2_hat1)
  SEXP Rsh_Fir_array_args477[2];
  Rsh_Fir_array_args477[0] = Rsh_Fir_reg_r109_;
  Rsh_Fir_array_args477[1] = Rsh_Fir_reg_s2_hat1_;
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args477, Rsh_Fir_param_types_empty());
  // st fstat = r110
  Rsh_Fir_store(Rsh_const(CCP, 102), Rsh_Fir_reg_r110_, RHO);
  (void)(Rsh_Fir_reg_r110_);
  // fittedModel30 = ld fittedModel
  Rsh_Fir_reg_fittedModel30_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L176() else D65()
  // L176()
  goto L176_;

D65_:;
  // deopt 215 [fittedModel30]
  SEXP Rsh_Fir_array_deopt_stack118[1];
  Rsh_Fir_array_deopt_stack118[0] = Rsh_Fir_reg_fittedModel30_;
  Rsh_Fir_deopt(215, 1, Rsh_Fir_array_deopt_stack118, CCP, RHO);
  return R_NilValue;

L176_:;
  // fittedModel31 = force? fittedModel30
  Rsh_Fir_reg_fittedModel31_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedModel30_);
  // checkMissing(fittedModel31)
  SEXP Rsh_Fir_array_args478[1];
  Rsh_Fir_array_args478[0] = Rsh_Fir_reg_fittedModel31_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args478, Rsh_Fir_param_types_empty()));
  // c53 = `is.object`(fittedModel31)
  SEXP Rsh_Fir_array_args479[1];
  Rsh_Fir_array_args479[0] = Rsh_Fir_reg_fittedModel31_;
  Rsh_Fir_reg_c53_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args479, Rsh_Fir_param_types_empty());
  // if c53 then L178() else L179(fittedModel31)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c53_)) {
  // L178()
    goto L178_;
  } else {
  // L179(fittedModel31)
    Rsh_Fir_reg_fittedModel33_ = Rsh_Fir_reg_fittedModel31_;
    goto L179_;
  }

L177_:;
  // checkFun.0(dx43)
  SEXP Rsh_Fir_array_args480[1];
  Rsh_Fir_array_args480[0] = Rsh_Fir_reg_dx43_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args480));
  // dx44 = dx43 as cls
  Rsh_Fir_reg_dx44_ = Rsh_Fir_cast(Rsh_Fir_reg_dx43_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r112 = dyn dx44()
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dx44_, 0, NULL, NULL, CCP, RHO);
  // check L181() else D66()
  // L181()
  goto L181_;

L178_:;
  // dr36 = tryDispatchBuiltin.1("$", fittedModel31)
  SEXP Rsh_Fir_array_args481[2];
  Rsh_Fir_array_args481[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args481[1] = Rsh_Fir_reg_fittedModel31_;
  Rsh_Fir_reg_dr36_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args481);
  // dc18 = getTryDispatchBuiltinDispatched(dr36)
  SEXP Rsh_Fir_array_args482[1];
  Rsh_Fir_array_args482[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dc18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args482, Rsh_Fir_param_types_empty());
  // if dc18 then L180() else L179(dr36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc18_)) {
  // L180()
    goto L180_;
  } else {
  // L179(dr36)
    Rsh_Fir_reg_fittedModel33_ = Rsh_Fir_reg_dr36_;
    goto L179_;
  }

L179_:;
  // r111 = `$`(fittedModel33, <sym setVarying>)
  SEXP Rsh_Fir_array_args483[2];
  Rsh_Fir_array_args483[0] = Rsh_Fir_reg_fittedModel33_;
  Rsh_Fir_array_args483[1] = Rsh_const(CCP, 57);
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args483, Rsh_Fir_param_types_empty());
  // goto L177(r111)
  // L177(r111)
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_r111_;
  goto L177_;

L180_:;
  // dx42 = getTryDispatchBuiltinValue(dr36)
  SEXP Rsh_Fir_array_args484[1];
  Rsh_Fir_array_args484[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args484, Rsh_Fir_param_types_empty());
  // goto L177(dx42)
  // L177(dx42)
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx42_;
  goto L177_;

D66_:;
  // deopt 219 [r112]
  SEXP Rsh_Fir_array_deopt_stack119[1];
  Rsh_Fir_array_deopt_stack119[0] = Rsh_Fir_reg_r112_;
  Rsh_Fir_deopt(219, 1, Rsh_Fir_array_deopt_stack119, CCP, RHO);
  return R_NilValue;

L181_:;
  // sym14 = ldf list
  Rsh_Fir_reg_sym14_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base14 = ldf list in base
  Rsh_Fir_reg_base14_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args485[2];
  Rsh_Fir_array_args485[0] = Rsh_Fir_reg_sym14_1;
  Rsh_Fir_array_args485[1] = Rsh_Fir_reg_base14_1;
  Rsh_Fir_reg_guard14_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args485);
  // if guard14 then L182() else L183()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_1)) {
  // L182()
    goto L182_;
  } else {
  // L183()
    goto L183_;
  }

L182_:;
  // fstat = ld fstat
  Rsh_Fir_reg_fstat = Rsh_Fir_load(Rsh_const(CCP, 102), RHO);
  // check L184() else D67()
  // L184()
  goto L184_;

L183_:;
  // r113 = dyn base14[fstat, parameters, varying](<sym fstat>, <lang `$`(profiledModel, getAllPars)()>, <sym vary>)
  SEXP Rsh_Fir_array_args486[3];
  Rsh_Fir_array_args486[0] = Rsh_const(CCP, 102);
  Rsh_Fir_array_args486[1] = Rsh_const(CCP, 103);
  Rsh_Fir_array_args486[2] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names122[3];
  Rsh_Fir_array_arg_names122[0] = Rsh_const(CCP, 102);
  Rsh_Fir_array_arg_names122[1] = Rsh_const(CCP, 104);
  Rsh_Fir_array_arg_names122[2] = Rsh_const(CCP, 50);
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_1, 3, Rsh_Fir_array_args486, Rsh_Fir_array_arg_names122, CCP, RHO);
  // goto L31(r113)
  // L31(r113)
  Rsh_Fir_reg_r114_ = Rsh_Fir_reg_r113_;
  goto L31_;

D67_:;
  // deopt 222 [fstat]
  SEXP Rsh_Fir_array_deopt_stack120[1];
  Rsh_Fir_array_deopt_stack120[0] = Rsh_Fir_reg_fstat;
  Rsh_Fir_deopt(222, 1, Rsh_Fir_array_deopt_stack120, CCP, RHO);
  return R_NilValue;

L184_:;
  // fstat1 = force? fstat
  Rsh_Fir_reg_fstat1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fstat);
  // checkMissing(fstat1)
  SEXP Rsh_Fir_array_args487[1];
  Rsh_Fir_array_args487[0] = Rsh_Fir_reg_fstat1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args487, Rsh_Fir_param_types_empty()));
  // profiledModel = ld profiledModel
  Rsh_Fir_reg_profiledModel = Rsh_Fir_load(Rsh_const(CCP, 101), RHO);
  // check L185() else D68()
  // L185()
  goto L185_;

D68_:;
  // deopt 225 [profiledModel]
  SEXP Rsh_Fir_array_deopt_stack121[1];
  Rsh_Fir_array_deopt_stack121[0] = Rsh_Fir_reg_profiledModel;
  Rsh_Fir_deopt(225, 1, Rsh_Fir_array_deopt_stack121, CCP, RHO);
  return R_NilValue;

L185_:;
  // profiledModel1 = force? profiledModel
  Rsh_Fir_reg_profiledModel1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_profiledModel);
  // checkMissing(profiledModel1)
  SEXP Rsh_Fir_array_args488[1];
  Rsh_Fir_array_args488[0] = Rsh_Fir_reg_profiledModel1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args488, Rsh_Fir_param_types_empty()));
  // c54 = `is.object`(profiledModel1)
  SEXP Rsh_Fir_array_args489[1];
  Rsh_Fir_array_args489[0] = Rsh_Fir_reg_profiledModel1_;
  Rsh_Fir_reg_c54_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args489, Rsh_Fir_param_types_empty());
  // if c54 then L187() else L188(profiledModel1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c54_)) {
  // L187()
    goto L187_;
  } else {
  // L188(profiledModel1)
    Rsh_Fir_reg_profiledModel3_ = Rsh_Fir_reg_profiledModel1_;
    goto L188_;
  }

L186_:;
  // checkFun.0(dx46)
  SEXP Rsh_Fir_array_args490[1];
  Rsh_Fir_array_args490[0] = Rsh_Fir_reg_dx46_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args490));
  // dx47 = dx46 as cls
  Rsh_Fir_reg_dx47_ = Rsh_Fir_cast(Rsh_Fir_reg_dx46_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r116 = dyn dx47()
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dx47_, 0, NULL, NULL, CCP, RHO);
  // check L190() else D69()
  // L190()
  goto L190_;

L187_:;
  // dr38 = tryDispatchBuiltin.1("$", profiledModel1)
  SEXP Rsh_Fir_array_args491[2];
  Rsh_Fir_array_args491[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args491[1] = Rsh_Fir_reg_profiledModel1_;
  Rsh_Fir_reg_dr38_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args491);
  // dc19 = getTryDispatchBuiltinDispatched(dr38)
  SEXP Rsh_Fir_array_args492[1];
  Rsh_Fir_array_args492[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dc19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args492, Rsh_Fir_param_types_empty());
  // if dc19 then L189() else L188(dr38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc19_)) {
  // L189()
    goto L189_;
  } else {
  // L188(dr38)
    Rsh_Fir_reg_profiledModel3_ = Rsh_Fir_reg_dr38_;
    goto L188_;
  }

L188_:;
  // r115 = `$`(profiledModel3, <sym getAllPars>)
  SEXP Rsh_Fir_array_args493[2];
  Rsh_Fir_array_args493[0] = Rsh_Fir_reg_profiledModel3_;
  Rsh_Fir_array_args493[1] = Rsh_const(CCP, 105);
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args493, Rsh_Fir_param_types_empty());
  // goto L186(r115)
  // L186(r115)
  Rsh_Fir_reg_dx46_ = Rsh_Fir_reg_r115_;
  goto L186_;

L189_:;
  // dx45 = getTryDispatchBuiltinValue(dr38)
  SEXP Rsh_Fir_array_args494[1];
  Rsh_Fir_array_args494[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dx45_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args494, Rsh_Fir_param_types_empty());
  // goto L186(dx45)
  // L186(dx45)
  Rsh_Fir_reg_dx46_ = Rsh_Fir_reg_dx45_;
  goto L186_;

D69_:;
  // deopt 229 [r116]
  SEXP Rsh_Fir_array_deopt_stack122[1];
  Rsh_Fir_array_deopt_stack122[0] = Rsh_Fir_reg_r116_;
  Rsh_Fir_deopt(229, 1, Rsh_Fir_array_deopt_stack122, CCP, RHO);
  return R_NilValue;

L190_:;
  // vary16 = ld vary
  Rsh_Fir_reg_vary16_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // check L191() else D70()
  // L191()
  goto L191_;

D70_:;
  // deopt 231 [vary16]
  SEXP Rsh_Fir_array_deopt_stack123[1];
  Rsh_Fir_array_deopt_stack123[0] = Rsh_Fir_reg_vary16_;
  Rsh_Fir_deopt(231, 1, Rsh_Fir_array_deopt_stack123, CCP, RHO);
  return R_NilValue;

L191_:;
  // vary17 = force? vary16
  Rsh_Fir_reg_vary17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vary16_);
  // checkMissing(vary17)
  SEXP Rsh_Fir_array_args495[1];
  Rsh_Fir_array_args495[0] = Rsh_Fir_reg_vary17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args495, Rsh_Fir_param_types_empty()));
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r117 = dyn list1(fstat1, r116, vary17)
  SEXP Rsh_Fir_array_args496[3];
  Rsh_Fir_array_args496[0] = Rsh_Fir_reg_fstat1_;
  Rsh_Fir_array_args496[1] = Rsh_Fir_reg_r116_;
  Rsh_Fir_array_args496[2] = Rsh_Fir_reg_vary17_;
  SEXP Rsh_Fir_array_arg_names123[3];
  Rsh_Fir_array_arg_names123[0] = R_MissingArg;
  Rsh_Fir_array_arg_names123[1] = R_MissingArg;
  Rsh_Fir_array_arg_names123[2] = R_MissingArg;
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 3, Rsh_Fir_array_args496, Rsh_Fir_array_arg_names123, CCP, RHO);
  // check L192() else D71()
  // L192()
  goto L192_;

D71_:;
  // deopt 235 [r117]
  SEXP Rsh_Fir_array_deopt_stack124[1];
  Rsh_Fir_array_deopt_stack124[0] = Rsh_Fir_reg_r117_;
  Rsh_Fir_deopt(235, 1, Rsh_Fir_array_deopt_stack124, CCP, RHO);
  return R_NilValue;

L192_:;
  // goto L31(r117)
  // L31(r117)
  Rsh_Fir_reg_r114_ = Rsh_Fir_reg_r117_;
  goto L31_;

D72_:;
  // deopt 237 [fittedModel34]
  SEXP Rsh_Fir_array_deopt_stack125[1];
  Rsh_Fir_array_deopt_stack125[0] = Rsh_Fir_reg_fittedModel34_;
  Rsh_Fir_deopt(237, 1, Rsh_Fir_array_deopt_stack125, CCP, RHO);
  return R_NilValue;

L193_:;
  // fittedModel35 = force? fittedModel34
  Rsh_Fir_reg_fittedModel35_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedModel34_);
  // checkMissing(fittedModel35)
  SEXP Rsh_Fir_array_args497[1];
  Rsh_Fir_array_args497[0] = Rsh_Fir_reg_fittedModel35_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args497, Rsh_Fir_param_types_empty()));
  // c55 = `is.object`(fittedModel35)
  SEXP Rsh_Fir_array_args498[1];
  Rsh_Fir_array_args498[0] = Rsh_Fir_reg_fittedModel35_;
  Rsh_Fir_reg_c55_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args498, Rsh_Fir_param_types_empty());
  // if c55 then L195() else L196(fittedModel35)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c55_)) {
  // L195()
    goto L195_;
  } else {
  // L196(fittedModel35)
    Rsh_Fir_reg_fittedModel37_ = Rsh_Fir_reg_fittedModel35_;
    goto L196_;
  }

L194_:;
  // checkFun.0(dx49)
  SEXP Rsh_Fir_array_args499[1];
  Rsh_Fir_array_args499[0] = Rsh_Fir_reg_dx49_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args499));
  // dx50 = dx49 as cls
  Rsh_Fir_reg_dx50_ = Rsh_Fir_cast(Rsh_Fir_reg_dx49_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p20 = prom<V +>{
  //   defaultPars7 = ld defaultPars;
  //   defaultPars8 = force? defaultPars7;
  //   checkMissing(defaultPars8);
  //   return defaultPars8;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_20, CCP, RHO);
  // r120 = dyn dx50(p20)
  SEXP Rsh_Fir_array_args501[1];
  Rsh_Fir_array_args501[0] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names124[1];
  Rsh_Fir_array_arg_names124[0] = R_MissingArg;
  Rsh_Fir_reg_r120_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dx50_, 1, Rsh_Fir_array_args501, Rsh_Fir_array_arg_names124, CCP, RHO);
  // check L198() else D73()
  // L198()
  goto L198_;

L195_:;
  // dr40 = tryDispatchBuiltin.1("$", fittedModel35)
  SEXP Rsh_Fir_array_args502[2];
  Rsh_Fir_array_args502[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args502[1] = Rsh_Fir_reg_fittedModel35_;
  Rsh_Fir_reg_dr40_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args502);
  // dc20 = getTryDispatchBuiltinDispatched(dr40)
  SEXP Rsh_Fir_array_args503[1];
  Rsh_Fir_array_args503[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dc20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args503, Rsh_Fir_param_types_empty());
  // if dc20 then L197() else L196(dr40)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc20_)) {
  // L197()
    goto L197_;
  } else {
  // L196(dr40)
    Rsh_Fir_reg_fittedModel37_ = Rsh_Fir_reg_dr40_;
    goto L196_;
  }

L196_:;
  // r118 = `$`(fittedModel37, <sym setPars>)
  SEXP Rsh_Fir_array_args504[2];
  Rsh_Fir_array_args504[0] = Rsh_Fir_reg_fittedModel37_;
  Rsh_Fir_array_args504[1] = Rsh_const(CCP, 58);
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args504, Rsh_Fir_param_types_empty());
  // goto L194(r118)
  // L194(r118)
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_r118_;
  goto L194_;

L197_:;
  // dx48 = getTryDispatchBuiltinValue(dr40)
  SEXP Rsh_Fir_array_args505[1];
  Rsh_Fir_array_args505[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dx48_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args505, Rsh_Fir_param_types_empty());
  // goto L194(dx48)
  // L194(dx48)
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_dx48_;
  goto L194_;

D73_:;
  // deopt 242 [r120]
  SEXP Rsh_Fir_array_deopt_stack126[1];
  Rsh_Fir_array_deopt_stack126[0] = Rsh_Fir_reg_r120_;
  Rsh_Fir_deopt(242, 1, Rsh_Fir_array_deopt_stack126, CCP, RHO);
  return R_NilValue;

L198_:;
  // ans = ld ans
  Rsh_Fir_reg_ans = Rsh_Fir_load(Rsh_const(CCP, 79), RHO);
  // check L199() else D74()
  // L199()
  goto L199_;

D74_:;
  // deopt 243 [ans]
  SEXP Rsh_Fir_array_deopt_stack127[1];
  Rsh_Fir_array_deopt_stack127[0] = Rsh_Fir_reg_ans;
  Rsh_Fir_deopt(243, 1, Rsh_Fir_array_deopt_stack127, CCP, RHO);
  return R_NilValue;

L199_:;
  // ans1 = force? ans
  Rsh_Fir_reg_ans1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ans);
  // checkMissing(ans1)
  SEXP Rsh_Fir_array_args506[1];
  Rsh_Fir_array_args506[0] = Rsh_Fir_reg_ans1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args506, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ans1
  return Rsh_Fir_reg_ans1_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_(SEXP CCP, SEXP RHO) {
  // args12 = ld args
  Rsh_Fir_reg_args12_ = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // args13 = force? args12
  Rsh_Fir_reg_args13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args12_);
  // checkMissing(args13)
  SEXP Rsh_Fir_array_args301[1];
  Rsh_Fir_array_args301[0] = Rsh_Fir_reg_args13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args301, Rsh_Fir_param_types_empty()));
  // c18 = `is.object`(args13)
  SEXP Rsh_Fir_array_args302[1];
  Rsh_Fir_array_args302[0] = Rsh_Fir_reg_args13_;
  Rsh_Fir_reg_c18_1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args302, Rsh_Fir_param_types_empty());
  // if c18 then L1() else L2(args13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_1)) {
  // L1()
    goto L1_;
  } else {
  // L2(args13)
    Rsh_Fir_reg_args15_ = Rsh_Fir_reg_args13_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_2;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[[", args13)
  SEXP Rsh_Fir_array_args303[2];
  Rsh_Fir_array_args303[0] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args303[1] = Rsh_Fir_reg_args13_;
  Rsh_Fir_reg_dr4_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args303);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args304[1];
  Rsh_Fir_array_args304[0] = Rsh_Fir_reg_dr4_1;
  Rsh_Fir_reg_dc2_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args304, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_1)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_args15_ = Rsh_Fir_reg_dr4_1;
    goto L2_;
  }

L2_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 82), RHO);
  // r15 = dyn __2(args15, 2)
  SEXP Rsh_Fir_array_args305[2];
  Rsh_Fir_array_args305[0] = Rsh_Fir_reg_args15_;
  Rsh_Fir_array_args305[1] = Rsh_const(CCP, 71);
  SEXP Rsh_Fir_array_arg_names81[2];
  Rsh_Fir_array_arg_names81[0] = R_MissingArg;
  Rsh_Fir_array_arg_names81[1] = R_MissingArg;
  Rsh_Fir_reg_r15_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args305, Rsh_Fir_array_arg_names81, CCP, RHO);
  // goto L0(r15)
  // L0(r15)
  Rsh_Fir_reg_dx5_2 = Rsh_Fir_reg_r15_2;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args306[1];
  Rsh_Fir_array_args306[0] = Rsh_Fir_reg_dr4_1;
  Rsh_Fir_reg_dx4_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args306, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_2 = Rsh_Fir_reg_dx4_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_1(SEXP CCP, SEXP RHO) {
  // args22 = ld args
  Rsh_Fir_reg_args22_ = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // args23 = force? args22
  Rsh_Fir_reg_args23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args22_);
  // checkMissing(args23)
  SEXP Rsh_Fir_array_args328[1];
  Rsh_Fir_array_args328[0] = Rsh_Fir_reg_args23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args328, Rsh_Fir_param_types_empty()));
  // c35 = `is.object`(args23)
  SEXP Rsh_Fir_array_args329[1];
  Rsh_Fir_array_args329[0] = Rsh_Fir_reg_args23_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args329, Rsh_Fir_param_types_empty());
  // if c35 then L1() else L2(args23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L1()
    goto L1_;
  } else {
  // L2(args23)
    Rsh_Fir_reg_args25_ = Rsh_Fir_reg_args23_;
    goto L2_;
  }

L0_:;
  // return dx11
  return Rsh_Fir_reg_dx11_1;

L1_:;
  // dr10 = tryDispatchBuiltin.1("[[", args23)
  SEXP Rsh_Fir_array_args330[2];
  Rsh_Fir_array_args330[0] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args330[1] = Rsh_Fir_reg_args23_;
  Rsh_Fir_reg_dr10_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args330);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args331[1];
  Rsh_Fir_array_args331[0] = Rsh_Fir_reg_dr10_1;
  Rsh_Fir_reg_dc5_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args331, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_1)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_args25_ = Rsh_Fir_reg_dr10_1;
    goto L2_;
  }

L2_:;
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 82), RHO);
  // r28 = dyn __4(args25, 1)
  SEXP Rsh_Fir_array_args332[2];
  Rsh_Fir_array_args332[0] = Rsh_Fir_reg_args25_;
  Rsh_Fir_array_args332[1] = Rsh_const(CCP, 83);
  SEXP Rsh_Fir_array_arg_names88[2];
  Rsh_Fir_array_arg_names88[0] = R_MissingArg;
  Rsh_Fir_array_arg_names88[1] = R_MissingArg;
  Rsh_Fir_reg_r28_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args332, Rsh_Fir_array_arg_names88, CCP, RHO);
  // goto L0(r28)
  // L0(r28)
  Rsh_Fir_reg_dx11_1 = Rsh_Fir_reg_r28_2;
  goto L0_;

L3_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args333[1];
  Rsh_Fir_array_args333[0] = Rsh_Fir_reg_dr10_1;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args333, Rsh_Fir_param_types_empty());
  // goto L0(dx10)
  // L0(dx10)
  Rsh_Fir_reg_dx11_1 = Rsh_Fir_reg_dx10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_2(SEXP CCP, SEXP RHO) {
  // args26 = ld args
  Rsh_Fir_reg_args26_ = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // args27 = force? args26
  Rsh_Fir_reg_args27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args26_);
  // checkMissing(args27)
  SEXP Rsh_Fir_array_args336[1];
  Rsh_Fir_array_args336[0] = Rsh_Fir_reg_args27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args336, Rsh_Fir_param_types_empty()));
  // return args27
  return Rsh_Fir_reg_args27_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_3(SEXP CCP, SEXP RHO) {
  // is_numeric = ld `is.numeric`
  Rsh_Fir_reg_is_numeric1 = Rsh_Fir_load(Rsh_const(CCP, 60), RHO);
  // is_numeric1 = force? is_numeric
  Rsh_Fir_reg_is_numeric1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_is_numeric1);
  // checkMissing(is_numeric1)
  SEXP Rsh_Fir_array_args337[1];
  Rsh_Fir_array_args337[0] = Rsh_Fir_reg_is_numeric1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args337, Rsh_Fir_param_types_empty()));
  // return is_numeric1
  return Rsh_Fir_reg_is_numeric1_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_4(SEXP CCP, SEXP RHO) {
  // args28 = ld args
  Rsh_Fir_reg_args28_ = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // args29 = force? args28
  Rsh_Fir_reg_args29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args28_);
  // checkMissing(args29)
  SEXP Rsh_Fir_array_args340[1];
  Rsh_Fir_array_args340[0] = Rsh_Fir_reg_args29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args340, Rsh_Fir_param_types_empty()));
  // return args29
  return Rsh_Fir_reg_args29_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_5(SEXP CCP, SEXP RHO) {
  // sym8 = ldf names
  Rsh_Fir_reg_sym8_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // base8 = ldf names in base
  Rsh_Fir_reg_base8_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args344[2];
  Rsh_Fir_array_args344[0] = Rsh_Fir_reg_sym8_2;
  Rsh_Fir_array_args344[1] = Rsh_Fir_reg_base8_2;
  Rsh_Fir_reg_guard8_2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args344);
  // if guard8 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_2)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r44
  return Rsh_Fir_reg_r44_2;

L1_:;
  // params6 = ld params
  Rsh_Fir_reg_params6_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // params7 = force? params6
  Rsh_Fir_reg_params7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_params6_);
  // checkMissing(params7)
  SEXP Rsh_Fir_array_args345[1];
  Rsh_Fir_array_args345[0] = Rsh_Fir_reg_params7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args345, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r45 = dyn names(params7)
  SEXP Rsh_Fir_array_args346[1];
  Rsh_Fir_array_args346[0] = Rsh_Fir_reg_params7_;
  SEXP Rsh_Fir_array_arg_names96[1];
  Rsh_Fir_array_arg_names96[0] = R_MissingArg;
  Rsh_Fir_reg_r45_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1, 1, Rsh_Fir_array_args346, Rsh_Fir_array_arg_names96, CCP, RHO);
  // goto L0(r45)
  // L0(r45)
  Rsh_Fir_reg_r44_2 = Rsh_Fir_reg_r45_1;
  goto L0_;

L2_:;
  // r43 = dyn base8(<sym params>)
  SEXP Rsh_Fir_array_args347[1];
  Rsh_Fir_array_args347[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names97[1];
  Rsh_Fir_array_arg_names97[0] = R_MissingArg;
  Rsh_Fir_reg_r43_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_2, 1, Rsh_Fir_array_args347, Rsh_Fir_array_arg_names97, CCP, RHO);
  // goto L0(r43)
  // L0(r43)
  Rsh_Fir_reg_r44_2 = Rsh_Fir_reg_r43_2;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_6(SEXP CCP, SEXP RHO) {
  // sym9 = ldf names
  Rsh_Fir_reg_sym9_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // base9 = ldf names in base
  Rsh_Fir_reg_base9_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args348[2];
  Rsh_Fir_array_args348[0] = Rsh_Fir_reg_sym9_2;
  Rsh_Fir_array_args348[1] = Rsh_Fir_reg_base9_2;
  Rsh_Fir_reg_guard9_2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args348);
  // if guard9 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_2)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r48
  return Rsh_Fir_reg_r48_2;

L1_:;
  // fittedPars = ld fittedPars
  Rsh_Fir_reg_fittedPars2 = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // fittedPars1 = force? fittedPars
  Rsh_Fir_reg_fittedPars1_2 = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedPars2);
  // checkMissing(fittedPars1)
  SEXP Rsh_Fir_array_args349[1];
  Rsh_Fir_array_args349[0] = Rsh_Fir_reg_fittedPars1_2;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args349, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r49 = dyn names1(fittedPars1)
  SEXP Rsh_Fir_array_args350[1];
  Rsh_Fir_array_args350[0] = Rsh_Fir_reg_fittedPars1_2;
  SEXP Rsh_Fir_array_arg_names98[1];
  Rsh_Fir_array_arg_names98[0] = R_MissingArg;
  Rsh_Fir_reg_r49_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_1, 1, Rsh_Fir_array_args350, Rsh_Fir_array_arg_names98, CCP, RHO);
  // goto L0(r49)
  // L0(r49)
  Rsh_Fir_reg_r48_2 = Rsh_Fir_reg_r49_1;
  goto L0_;

L2_:;
  // r47 = dyn base9(<sym fittedPars>)
  SEXP Rsh_Fir_array_args351[1];
  Rsh_Fir_array_args351[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names99[1];
  Rsh_Fir_array_arg_names99[0] = R_MissingArg;
  Rsh_Fir_reg_r47_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_2, 1, Rsh_Fir_array_args351, Rsh_Fir_array_arg_names99, CCP, RHO);
  // goto L0(r47)
  // L0(r47)
  Rsh_Fir_reg_r48_2 = Rsh_Fir_reg_r47_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_7(SEXP CCP, SEXP RHO) {
  // sym10 = ldf names
  Rsh_Fir_reg_sym10_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // base10 = ldf names in base
  Rsh_Fir_reg_base10_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args356[2];
  Rsh_Fir_array_args356[0] = Rsh_Fir_reg_sym10_2;
  Rsh_Fir_array_args356[1] = Rsh_Fir_reg_base10_2;
  Rsh_Fir_reg_guard10_2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args356);
  // if guard10 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_2)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r57
  return Rsh_Fir_reg_r57_2;

L1_:;
  // fittedPars2 = ld fittedPars
  Rsh_Fir_reg_fittedPars2_1 = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // fittedPars3 = force? fittedPars2
  Rsh_Fir_reg_fittedPars3_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedPars2_1);
  // checkMissing(fittedPars3)
  SEXP Rsh_Fir_array_args357[1];
  Rsh_Fir_array_args357[0] = Rsh_Fir_reg_fittedPars3_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args357, Rsh_Fir_param_types_empty()));
  // names2 = ldf names in base
  Rsh_Fir_reg_names2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r58 = dyn names2(fittedPars3)
  SEXP Rsh_Fir_array_args358[1];
  Rsh_Fir_array_args358[0] = Rsh_Fir_reg_fittedPars3_1;
  SEXP Rsh_Fir_array_arg_names103[1];
  Rsh_Fir_array_arg_names103[0] = R_MissingArg;
  Rsh_Fir_reg_r58_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names2_, 1, Rsh_Fir_array_args358, Rsh_Fir_array_arg_names103, CCP, RHO);
  // goto L0(r58)
  // L0(r58)
  Rsh_Fir_reg_r57_2 = Rsh_Fir_reg_r58_2;
  goto L0_;

L2_:;
  // r56 = dyn base10(<sym fittedPars>)
  SEXP Rsh_Fir_array_args359[1];
  Rsh_Fir_array_args359[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names104[1];
  Rsh_Fir_array_arg_names104[0] = R_MissingArg;
  Rsh_Fir_reg_r56_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_2, 1, Rsh_Fir_array_args359, Rsh_Fir_array_arg_names104, CCP, RHO);
  // goto L0(r56)
  // L0(r56)
  Rsh_Fir_reg_r57_2 = Rsh_Fir_reg_r56_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_8(SEXP CCP, SEXP RHO) {
  // sym11 = ldf names
  Rsh_Fir_reg_sym11_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // base11 = ldf names in base
  Rsh_Fir_reg_base11_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args360[2];
  Rsh_Fir_array_args360[0] = Rsh_Fir_reg_sym11_2;
  Rsh_Fir_array_args360[1] = Rsh_Fir_reg_base11_2;
  Rsh_Fir_reg_guard11_2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args360);
  // if guard11 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_2)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r61
  return Rsh_Fir_reg_r61_2;

L1_:;
  // params8 = ld params
  Rsh_Fir_reg_params8_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // params9 = force? params8
  Rsh_Fir_reg_params9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_params8_);
  // checkMissing(params9)
  SEXP Rsh_Fir_array_args361[1];
  Rsh_Fir_array_args361[0] = Rsh_Fir_reg_params9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args361, Rsh_Fir_param_types_empty()));
  // names3 = ldf names in base
  Rsh_Fir_reg_names3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r62 = dyn names3(params9)
  SEXP Rsh_Fir_array_args362[1];
  Rsh_Fir_array_args362[0] = Rsh_Fir_reg_params9_;
  SEXP Rsh_Fir_array_arg_names105[1];
  Rsh_Fir_array_arg_names105[0] = R_MissingArg;
  Rsh_Fir_reg_r62_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names3_, 1, Rsh_Fir_array_args362, Rsh_Fir_array_arg_names105, CCP, RHO);
  // goto L0(r62)
  // L0(r62)
  Rsh_Fir_reg_r61_2 = Rsh_Fir_reg_r62_2;
  goto L0_;

L2_:;
  // r60 = dyn base11(<sym params>)
  SEXP Rsh_Fir_array_args363[1];
  Rsh_Fir_array_args363[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names106[1];
  Rsh_Fir_array_arg_names106[0] = R_MissingArg;
  Rsh_Fir_reg_r60_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_2, 1, Rsh_Fir_array_args363, Rsh_Fir_array_arg_names106, CCP, RHO);
  // goto L0(r60)
  // L0(r60)
  Rsh_Fir_reg_r61_2 = Rsh_Fir_reg_r60_2;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_9(SEXP CCP, SEXP RHO) {
  // startPars = ld startPars
  Rsh_Fir_reg_startPars = Rsh_Fir_load(Rsh_const(CCP, 74), RHO);
  // startPars1 = force? startPars
  Rsh_Fir_reg_startPars1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_startPars);
  // checkMissing(startPars1)
  SEXP Rsh_Fir_array_args384[1];
  Rsh_Fir_array_args384[0] = Rsh_Fir_reg_startPars1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args384, Rsh_Fir_param_types_empty()));
  // return startPars1
  return Rsh_Fir_reg_startPars1_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_10(SEXP CCP, SEXP RHO) {
  // vary4 = ld vary
  Rsh_Fir_reg_vary4_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // vary5 = force? vary4
  Rsh_Fir_reg_vary5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vary4_);
  // checkMissing(vary5)
  SEXP Rsh_Fir_array_args393[1];
  Rsh_Fir_array_args393[0] = Rsh_Fir_reg_vary5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args393, Rsh_Fir_param_types_empty()));
  // return vary5
  return Rsh_Fir_reg_vary5_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_11(SEXP CCP, SEXP RHO) {
  // startPars2 = ld startPars
  Rsh_Fir_reg_startPars2_ = Rsh_Fir_load(Rsh_const(CCP, 74), RHO);
  // startPars3 = force? startPars2
  Rsh_Fir_reg_startPars3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_startPars2_);
  // checkMissing(startPars3)
  SEXP Rsh_Fir_array_args402[1];
  Rsh_Fir_array_args402[0] = Rsh_Fir_reg_startPars3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args402, Rsh_Fir_param_types_empty()));
  // c43 = `is.object`(startPars3)
  SEXP Rsh_Fir_array_args403[1];
  Rsh_Fir_array_args403[0] = Rsh_Fir_reg_startPars3_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args403, Rsh_Fir_param_types_empty());
  // if c43 then L1() else L2(startPars3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L1()
    goto L1_;
  } else {
  // L2(startPars3)
    Rsh_Fir_reg_startPars5_ = Rsh_Fir_reg_startPars3_;
    goto L2_;
  }

L0_:;
  // return dx27
  return Rsh_Fir_reg_dx27_1;

L1_:;
  // dr22 = tryDispatchBuiltin.1("[", startPars3)
  SEXP Rsh_Fir_array_args404[2];
  Rsh_Fir_array_args404[0] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args404[1] = Rsh_Fir_reg_startPars3_;
  Rsh_Fir_reg_dr22_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args404);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args405[1];
  Rsh_Fir_array_args405[0] = Rsh_Fir_reg_dr22_1;
  Rsh_Fir_reg_dc11_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args405, Rsh_Fir_param_types_empty());
  // if dc11 then L3() else L2(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_1)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr22)
    Rsh_Fir_reg_startPars5_ = Rsh_Fir_reg_dr22_1;
    goto L2_;
  }

L2_:;
  // vary6 = ld vary
  Rsh_Fir_reg_vary6_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // vary7 = force? vary6
  Rsh_Fir_reg_vary7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vary6_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 92), RHO);
  // r77 = dyn __5(startPars5, vary7)
  SEXP Rsh_Fir_array_args406[2];
  Rsh_Fir_array_args406[0] = Rsh_Fir_reg_startPars5_;
  Rsh_Fir_array_args406[1] = Rsh_Fir_reg_vary7_;
  SEXP Rsh_Fir_array_arg_names111[2];
  Rsh_Fir_array_arg_names111[0] = R_MissingArg;
  Rsh_Fir_array_arg_names111[1] = R_MissingArg;
  Rsh_Fir_reg_r77_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args406, Rsh_Fir_array_arg_names111, CCP, RHO);
  // goto L0(r77)
  // L0(r77)
  Rsh_Fir_reg_dx27_1 = Rsh_Fir_reg_r77_1;
  goto L0_;

L3_:;
  // dx26 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args407[1];
  Rsh_Fir_array_args407[0] = Rsh_Fir_reg_dr22_1;
  Rsh_Fir_reg_dx26_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args407, Rsh_Fir_param_types_empty());
  // goto L0(dx26)
  // L0(dx26)
  Rsh_Fir_reg_dx27_1 = Rsh_Fir_reg_dx26_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_12(SEXP CCP, SEXP RHO) {
  // fittedModel22 = ld fittedModel
  Rsh_Fir_reg_fittedModel22_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // fittedModel23 = force? fittedModel22
  Rsh_Fir_reg_fittedModel23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fittedModel22_);
  // checkMissing(fittedModel23)
  SEXP Rsh_Fir_array_args434[1];
  Rsh_Fir_array_args434[0] = Rsh_Fir_reg_fittedModel23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args434, Rsh_Fir_param_types_empty()));
  // return fittedModel23
  return Rsh_Fir_reg_fittedModel23_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_13(SEXP CCP, SEXP RHO) {
  // startPars6 = ld startPars
  Rsh_Fir_reg_startPars6_ = Rsh_Fir_load(Rsh_const(CCP, 74), RHO);
  // startPars7 = force? startPars6
  Rsh_Fir_reg_startPars7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_startPars6_);
  // checkMissing(startPars7)
  SEXP Rsh_Fir_array_args435[1];
  Rsh_Fir_array_args435[0] = Rsh_Fir_reg_startPars7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args435, Rsh_Fir_param_types_empty()));
  // c47 = `is.object`(startPars7)
  SEXP Rsh_Fir_array_args436[1];
  Rsh_Fir_array_args436[0] = Rsh_Fir_reg_startPars7_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args436, Rsh_Fir_param_types_empty());
  // if c47 then L1() else L2(startPars7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L1()
    goto L1_;
  } else {
  // L2(startPars7)
    Rsh_Fir_reg_startPars9_ = Rsh_Fir_reg_startPars7_;
    goto L2_;
  }

L0_:;
  // return dx32
  return Rsh_Fir_reg_dx32_1;

L1_:;
  // dr26 = tryDispatchBuiltin.1("[", startPars7)
  SEXP Rsh_Fir_array_args437[2];
  Rsh_Fir_array_args437[0] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args437[1] = Rsh_Fir_reg_startPars7_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args437);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args438[1];
  Rsh_Fir_array_args438[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args438, Rsh_Fir_param_types_empty());
  // if dc13 then L3() else L2(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr26)
    Rsh_Fir_reg_startPars9_ = Rsh_Fir_reg_dr26_;
    goto L2_;
  }

L2_:;
  // vary10 = ld vary
  Rsh_Fir_reg_vary10_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // vary11 = force? vary10
  Rsh_Fir_reg_vary11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vary10_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 92), RHO);
  // r92 = dyn __6(startPars9, vary11)
  SEXP Rsh_Fir_array_args439[2];
  Rsh_Fir_array_args439[0] = Rsh_Fir_reg_startPars9_;
  Rsh_Fir_array_args439[1] = Rsh_Fir_reg_vary11_;
  SEXP Rsh_Fir_array_arg_names116[2];
  Rsh_Fir_array_arg_names116[0] = R_MissingArg;
  Rsh_Fir_array_arg_names116[1] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args439, Rsh_Fir_array_arg_names116, CCP, RHO);
  // goto L0(r92)
  // L0(r92)
  Rsh_Fir_reg_dx32_1 = Rsh_Fir_reg_r92_;
  goto L0_;

L3_:;
  // dx31 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args440[1];
  Rsh_Fir_array_args440[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args440, Rsh_Fir_param_types_empty());
  // goto L0(dx31)
  // L0(dx31)
  Rsh_Fir_reg_dx32_1 = Rsh_Fir_reg_dx31_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_14(SEXP CCP, SEXP RHO) {
  // lower = ld lower
  Rsh_Fir_reg_lower1 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // lower1 = force? lower
  Rsh_Fir_reg_lower1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower1);
  // checkMissing(lower1)
  SEXP Rsh_Fir_array_args441[1];
  Rsh_Fir_array_args441[0] = Rsh_Fir_reg_lower1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args441, Rsh_Fir_param_types_empty()));
  // c48 = `is.object`(lower1)
  SEXP Rsh_Fir_array_args442[1];
  Rsh_Fir_array_args442[0] = Rsh_Fir_reg_lower1_1;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args442, Rsh_Fir_param_types_empty());
  // if c48 then L1() else L2(lower1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c48_)) {
  // L1()
    goto L1_;
  } else {
  // L2(lower1)
    Rsh_Fir_reg_lower3_1 = Rsh_Fir_reg_lower1_1;
    goto L2_;
  }

L0_:;
  // return dx34
  return Rsh_Fir_reg_dx34_1;

L1_:;
  // dr28 = tryDispatchBuiltin.1("[", lower1)
  SEXP Rsh_Fir_array_args443[2];
  Rsh_Fir_array_args443[0] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args443[1] = Rsh_Fir_reg_lower1_1;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args443);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args444[1];
  Rsh_Fir_array_args444[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args444, Rsh_Fir_param_types_empty());
  // if dc14 then L3() else L2(dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr28)
    Rsh_Fir_reg_lower3_1 = Rsh_Fir_reg_dr28_;
    goto L2_;
  }

L2_:;
  // vary12 = ld vary
  Rsh_Fir_reg_vary12_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // vary13 = force? vary12
  Rsh_Fir_reg_vary13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vary12_);
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 92), RHO);
  // r94 = dyn __7(lower3, vary13)
  SEXP Rsh_Fir_array_args445[2];
  Rsh_Fir_array_args445[0] = Rsh_Fir_reg_lower3_1;
  Rsh_Fir_array_args445[1] = Rsh_Fir_reg_vary13_;
  SEXP Rsh_Fir_array_arg_names117[2];
  Rsh_Fir_array_arg_names117[0] = R_MissingArg;
  Rsh_Fir_array_arg_names117[1] = R_MissingArg;
  Rsh_Fir_reg_r94_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args445, Rsh_Fir_array_arg_names117, CCP, RHO);
  // goto L0(r94)
  // L0(r94)
  Rsh_Fir_reg_dx34_1 = Rsh_Fir_reg_r94_1;
  goto L0_;

L3_:;
  // dx33 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args446[1];
  Rsh_Fir_array_args446[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx33_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args446, Rsh_Fir_param_types_empty());
  // goto L0(dx33)
  // L0(dx33)
  Rsh_Fir_reg_dx34_1 = Rsh_Fir_reg_dx33_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_15(SEXP CCP, SEXP RHO) {
  // upper = ld upper
  Rsh_Fir_reg_upper1 = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // upper1 = force? upper
  Rsh_Fir_reg_upper1_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_upper1);
  // checkMissing(upper1)
  SEXP Rsh_Fir_array_args447[1];
  Rsh_Fir_array_args447[0] = Rsh_Fir_reg_upper1_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args447, Rsh_Fir_param_types_empty()));
  // c49 = `is.object`(upper1)
  SEXP Rsh_Fir_array_args448[1];
  Rsh_Fir_array_args448[0] = Rsh_Fir_reg_upper1_1;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args448, Rsh_Fir_param_types_empty());
  // if c49 then L1() else L2(upper1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c49_)) {
  // L1()
    goto L1_;
  } else {
  // L2(upper1)
    Rsh_Fir_reg_upper3_1 = Rsh_Fir_reg_upper1_1;
    goto L2_;
  }

L0_:;
  // return dx36
  return Rsh_Fir_reg_dx36_1;

L1_:;
  // dr30 = tryDispatchBuiltin.1("[", upper1)
  SEXP Rsh_Fir_array_args449[2];
  Rsh_Fir_array_args449[0] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args449[1] = Rsh_Fir_reg_upper1_1;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args449);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args450[1];
  Rsh_Fir_array_args450[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args450, Rsh_Fir_param_types_empty());
  // if dc15 then L3() else L2(dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr30)
    Rsh_Fir_reg_upper3_1 = Rsh_Fir_reg_dr30_;
    goto L2_;
  }

L2_:;
  // vary14 = ld vary
  Rsh_Fir_reg_vary14_ = Rsh_Fir_load(Rsh_const(CCP, 72), RHO);
  // vary15 = force? vary14
  Rsh_Fir_reg_vary15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vary14_);
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 92), RHO);
  // r96 = dyn __8(upper3, vary15)
  SEXP Rsh_Fir_array_args451[2];
  Rsh_Fir_array_args451[0] = Rsh_Fir_reg_upper3_1;
  Rsh_Fir_array_args451[1] = Rsh_Fir_reg_vary15_;
  SEXP Rsh_Fir_array_arg_names118[2];
  Rsh_Fir_array_arg_names118[0] = R_MissingArg;
  Rsh_Fir_array_arg_names118[1] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args451, Rsh_Fir_array_arg_names118, CCP, RHO);
  // goto L0(r96)
  // L0(r96)
  Rsh_Fir_reg_dx36_1 = Rsh_Fir_reg_r96_;
  goto L0_;

L3_:;
  // dx35 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args452[1];
  Rsh_Fir_array_args452[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx35_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args452, Rsh_Fir_param_types_empty());
  // goto L0(dx35)
  // L0(dx35)
  Rsh_Fir_reg_dx36_1 = Rsh_Fir_reg_dx35_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_16(SEXP CCP, SEXP RHO) {
  // ctrl2 = ld ctrl
  Rsh_Fir_reg_ctrl2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // ctrl3 = force? ctrl2
  Rsh_Fir_reg_ctrl3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ctrl2_);
  // checkMissing(ctrl3)
  SEXP Rsh_Fir_array_args453[1];
  Rsh_Fir_array_args453[0] = Rsh_Fir_reg_ctrl3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args453, Rsh_Fir_param_types_empty()));
  // return ctrl3
  return Rsh_Fir_reg_ctrl3_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_17(SEXP CCP, SEXP RHO) {
  // trace2 = ld trace
  Rsh_Fir_reg_trace2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // trace3 = force? trace2
  Rsh_Fir_reg_trace3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_trace2_);
  // checkMissing(trace3)
  SEXP Rsh_Fir_array_args454[1];
  Rsh_Fir_array_args454[0] = Rsh_Fir_reg_trace3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args454, Rsh_Fir_param_types_empty()));
  // return trace3
  return Rsh_Fir_reg_trace3_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_18(SEXP CCP, SEXP RHO) {
  // iv = ld iv
  Rsh_Fir_reg_iv = Rsh_Fir_load(Rsh_const(CCP, 98), RHO);
  // iv1 = force? iv
  Rsh_Fir_reg_iv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_iv);
  // checkMissing(iv1)
  SEXP Rsh_Fir_array_args456[1];
  Rsh_Fir_array_args456[0] = Rsh_Fir_reg_iv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args456, Rsh_Fir_param_types_empty()));
  // c50 = `is.object`(iv1)
  SEXP Rsh_Fir_array_args457[1];
  Rsh_Fir_array_args457[0] = Rsh_Fir_reg_iv1_;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args457, Rsh_Fir_param_types_empty());
  // if c50 then L1() else L2(iv1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c50_)) {
  // L1()
    goto L1_;
  } else {
  // L2(iv1)
    Rsh_Fir_reg_iv3_ = Rsh_Fir_reg_iv1_;
    goto L2_;
  }

L0_:;
  // return dx38
  return Rsh_Fir_reg_dx38_;

L1_:;
  // dr32 = tryDispatchBuiltin.1("[", iv1)
  SEXP Rsh_Fir_array_args458[2];
  Rsh_Fir_array_args458[0] = Rsh_const(CCP, 91);
  Rsh_Fir_array_args458[1] = Rsh_Fir_reg_iv1_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args458);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args459[1];
  Rsh_Fir_array_args459[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args459, Rsh_Fir_param_types_empty());
  // if dc16 then L3() else L2(dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr32)
    Rsh_Fir_reg_iv3_ = Rsh_Fir_reg_dr32_;
    goto L2_;
  }

L2_:;
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 92), RHO);
  // r101 = dyn __9(iv3, 1)
  SEXP Rsh_Fir_array_args460[2];
  Rsh_Fir_array_args460[0] = Rsh_Fir_reg_iv3_;
  Rsh_Fir_array_args460[1] = Rsh_const(CCP, 83);
  SEXP Rsh_Fir_array_arg_names120[2];
  Rsh_Fir_array_arg_names120[0] = R_MissingArg;
  Rsh_Fir_array_arg_names120[1] = R_MissingArg;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args460, Rsh_Fir_array_arg_names120, CCP, RHO);
  // goto L0(r101)
  // L0(r101)
  Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_r101_;
  goto L0_;

L3_:;
  // dx37 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args461[1];
  Rsh_Fir_array_args461[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args461, Rsh_Fir_param_types_empty());
  // goto L0(dx37)
  // L0(dx37)
  Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_dx37_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_19(SEXP CCP, SEXP RHO) {
  // return <int 3, 4, 5, 6>
  return Rsh_const(CCP, 99);
}
SEXP Rsh_Fir_user_promise_inner1246119658_20(SEXP CCP, SEXP RHO) {
  // defaultPars7 = ld defaultPars
  Rsh_Fir_reg_defaultPars7_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // defaultPars8 = force? defaultPars7
  Rsh_Fir_reg_defaultPars8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_defaultPars7_);
  // checkMissing(defaultPars8)
  SEXP Rsh_Fir_array_args500[1];
  Rsh_Fir_array_args500[0] = Rsh_Fir_reg_defaultPars8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args500, Rsh_Fir_param_types_empty()));
  // return defaultPars8
  return Rsh_Fir_reg_defaultPars8_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
