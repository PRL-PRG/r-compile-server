#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_8(SEXP CCP, SEXP RHO);
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
  // r = clos inner2501545716
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st `.format_check_package_description_authors_at_R_field_results` = r
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
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_gettext;  // gettext
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_bad;  // bad
  SEXP Rsh_Fir_reg_bad1_;  // bad1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_gettext1_;  // gettext1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_paste1_;  // paste1
  SEXP Rsh_Fir_reg_bad2_;  // bad2
  SEXP Rsh_Fir_reg_bad3_;  // bad3
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_gettext2_;  // gettext2
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_gettext3_;  // gettext3
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_paste2_;  // paste2
  SEXP Rsh_Fir_reg_bad4_;  // bad4
  SEXP Rsh_Fir_reg_bad5_;  // bad5
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_x20_;  // x20
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_length4_;  // length4
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_gettext4_;  // gettext4
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_paste3_;  // paste3
  SEXP Rsh_Fir_reg_bad6_;  // bad6
  SEXP Rsh_Fir_reg_bad7_;  // bad7
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_x21_;  // x21
  SEXP Rsh_Fir_reg_x22_;  // x22
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_x24_;  // x24
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_length5_;  // length5
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_gettext5_;  // gettext5
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_x25_;  // x25
  SEXP Rsh_Fir_reg_x26_;  // x26
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_x28_;  // x28
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_length6_;  // length6
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_gettext6_;  // gettext6
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_paste4_;  // paste4
  SEXP Rsh_Fir_reg_bad8_;  // bad8
  SEXP Rsh_Fir_reg_bad9_;  // bad9
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_x29_;  // x29
  SEXP Rsh_Fir_reg_x30_;  // x30
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_x32_;  // x32
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_length7_;  // length7
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_gettext7_;  // gettext7
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_paste5_;  // paste5
  SEXP Rsh_Fir_reg_bad10_;  // bad10
  SEXP Rsh_Fir_reg_bad11_;  // bad11
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_x33_;  // x33
  SEXP Rsh_Fir_reg_x34_;  // x34
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_x36_;  // x36
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_length8_;  // length8
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_strwrap;  // strwrap
  SEXP Rsh_Fir_reg_gettext8_;  // gettext8
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_x37_;  // x37
  SEXP Rsh_Fir_reg_x38_;  // x38
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_x40_;  // x40
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_length9_;  // length9
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_gettext9_;  // gettext9
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_paste6_;  // paste6
  SEXP Rsh_Fir_reg_bad12_;  // bad12
  SEXP Rsh_Fir_reg_bad13_;  // bad13
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_sym18_;  // sym18
  SEXP Rsh_Fir_reg_base18_;  // base18
  SEXP Rsh_Fir_reg_guard18_;  // guard18
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_x41_;  // x41
  SEXP Rsh_Fir_reg_x42_;  // x42
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_x44_;  // x44
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg___10_;  // __10
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_length10_;  // length10
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_sym19_;  // sym19
  SEXP Rsh_Fir_reg_base19_;  // base19
  SEXP Rsh_Fir_reg_guard19_;  // guard19
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_gettext10_;  // gettext10
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_paste7_;  // paste7
  SEXP Rsh_Fir_reg_bad14_;  // bad14
  SEXP Rsh_Fir_reg_bad15_;  // bad15
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_r110_;  // r110
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_r111_;  // r111

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // c1 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c1 then L64() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L64()
    goto L64_;
  } else {
  // L3()
    goto L3_;
  }

L2_:;
  // st bad = dx1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r6 = dyn length(dx1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L63() else D3()
  // L63()
  goto L63_;

L3_:;
  // goto L5(NULL)
  // L5(NULL)
  Rsh_Fir_reg_r13_ = Rsh_const(CCP, 5);
  goto L5_;

L4_:;
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r8_;
  goto L5_;

L5_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard3 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

L6_:;
  // c4 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c4 then L80() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L80()
    goto L80_;
  } else {
  // L8()
    goto L8_;
  }

L7_:;
  // st bad = dx3
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r17 = dyn length1(dx3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L79() else D10()
  // L79()
  goto L79_;

L8_:;
  // goto L10(NULL)
  // L10(NULL)
  Rsh_Fir_reg_r24_ = Rsh_const(CCP, 5);
  goto L10_;

L9_:;
  // goto L10(r19)
  // L10(r19)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r19_;
  goto L10_;

L10_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard5 then L89() else L90()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L89()
    goto L89_;
  } else {
  // L90()
    goto L90_;
  }

L11_:;
  // c7 = `as.logical`(r26)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c7 then L96() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L96()
    goto L96_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r28 = dyn length2(dx5)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L95() else D17()
  // L95()
  goto L95_;

L13_:;
  // goto L14(NULL)
  // L14(NULL)
  Rsh_Fir_reg_r30_ = Rsh_const(CCP, 5);
  goto L14_;

L14_:;
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard6 then L100() else L101()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L100()
    goto L100_;
  } else {
  // L101()
    goto L101_;
  }

L15_:;
  // c9 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c9 then L107() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L107()
    goto L107_;
  } else {
  // L17()
    goto L17_;
  }

L16_:;
  // st bad = dx7
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r34 = dyn length3(dx7)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L106() else D21()
  // L106()
  goto L106_;

L17_:;
  // goto L19(NULL)
  // L19(NULL)
  Rsh_Fir_reg_r41_ = Rsh_const(CCP, 5);
  goto L19_;

L18_:;
  // goto L19(r36)
  // L19(r36)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r36_;
  goto L19_;

L19_:;
  // sym8 = ldf length
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base8 = ldf length in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard8 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

L20_:;
  // c12 = `as.logical`(r43)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c12 then L123() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L123()
    goto L123_;
  } else {
  // L22()
    goto L22_;
  }

L21_:;
  // st bad = dx9
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r45 = dyn length4(dx9)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L122() else D28()
  // L122()
  goto L122_;

L22_:;
  // goto L24(NULL)
  // L24(NULL)
  Rsh_Fir_reg_r52_ = Rsh_const(CCP, 5);
  goto L24_;

L23_:;
  // goto L24(r47)
  // L24(r47)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r47_;
  goto L24_;

L24_:;
  // sym10 = ldf length
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base10 = ldf length in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard10 then L132() else L133()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L132()
    goto L132_;
  } else {
  // L133()
    goto L133_;
  }

L25_:;
  // c15 = `as.logical`(r54)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c15 then L139() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L139()
    goto L139_;
  } else {
  // L27()
    goto L27_;
  }

L26_:;
  // length5 = ldf length in base
  Rsh_Fir_reg_length5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r56 = dyn length5(dx11)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length5_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L138() else D35()
  // L138()
  goto L138_;

L27_:;
  // goto L28(NULL)
  // L28(NULL)
  Rsh_Fir_reg_r58_ = Rsh_const(CCP, 5);
  goto L28_;

L28_:;
  // sym11 = ldf length
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base11 = ldf length in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard11 then L143() else L144()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L143()
    goto L143_;
  } else {
  // L144()
    goto L144_;
  }

L29_:;
  // c17 = `as.logical`(r60)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c17 then L150() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L150()
    goto L150_;
  } else {
  // L31()
    goto L31_;
  }

L30_:;
  // st bad = dx13
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // length6 = ldf length in base
  Rsh_Fir_reg_length6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r62 = dyn length6(dx13)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length6_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L149() else D39()
  // L149()
  goto L149_;

L31_:;
  // goto L33(NULL)
  // L33(NULL)
  Rsh_Fir_reg_r69_ = Rsh_const(CCP, 5);
  goto L33_;

L32_:;
  // goto L33(r64)
  // L33(r64)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r64_;
  goto L33_;

L33_:;
  // sym13 = ldf length
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base13 = ldf length in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard13 then L159() else L160()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L159()
    goto L159_;
  } else {
  // L160()
    goto L160_;
  }

L34_:;
  // c20 = `as.logical`(r71)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c20 then L166() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L166()
    goto L166_;
  } else {
  // L36()
    goto L36_;
  }

L35_:;
  // st bad = dx15
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx15_, RHO);
  (void)(Rsh_Fir_reg_dx15_);
  // length7 = ldf length in base
  Rsh_Fir_reg_length7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r73 = dyn length7(dx15)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length7_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L165() else D46()
  // L165()
  goto L165_;

L36_:;
  // goto L38(NULL)
  // L38(NULL)
  Rsh_Fir_reg_r80_ = Rsh_const(CCP, 5);
  goto L38_;

L37_:;
  // goto L38(r75)
  // L38(r75)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r75_;
  goto L38_;

L38_:;
  // sym15 = ldf length
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base15 = ldf length in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard15 then L175() else L176()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L175()
    goto L175_;
  } else {
  // L176()
    goto L176_;
  }

L39_:;
  // c23 = `as.logical`(r82)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c23 then L182() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L182()
    goto L182_;
  } else {
  // L41()
    goto L41_;
  }

L40_:;
  // length8 = ldf length in base
  Rsh_Fir_reg_length8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r84 = dyn length8(dx17)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length8_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L181() else D53()
  // L181()
  goto L181_;

L41_:;
  // goto L42(NULL)
  // L42(NULL)
  Rsh_Fir_reg_r88_ = Rsh_const(CCP, 5);
  goto L42_;

L42_:;
  // sym16 = ldf length
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base16 = ldf length in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard16 then L186() else L187()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L186()
    goto L186_;
  } else {
  // L187()
    goto L187_;
  }

L43_:;
  // c25 = `as.logical`(r90)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c25 then L193() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L193()
    goto L193_;
  } else {
  // L45()
    goto L45_;
  }

L44_:;
  // st bad = dx19
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // length9 = ldf length in base
  Rsh_Fir_reg_length9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r92 = dyn length9(dx19)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length9_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L192() else D57()
  // L192()
  goto L192_;

L45_:;
  // goto L47(NULL)
  // L47(NULL)
  Rsh_Fir_reg_r99_ = Rsh_const(CCP, 5);
  goto L47_;

L46_:;
  // goto L47(r94)
  // L47(r94)
  Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r94_;
  goto L47_;

L47_:;
  // sym18 = ldf length
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base18 = ldf length in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard18 then L202() else L203()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L202()
    goto L202_;
  } else {
  // L203()
    goto L203_;
  }

L48_:;
  // c28 = `as.logical`(r101)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c28 then L209() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L209()
    goto L209_;
  } else {
  // L50()
    goto L50_;
  }

L49_:;
  // st bad = dx21
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // length10 = ldf length in base
  Rsh_Fir_reg_length10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r103 = dyn length10(dx21)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length10_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L208() else D64()
  // L208()
  goto L208_;

L50_:;
  // goto L52(NULL)
  // L52(NULL)
  Rsh_Fir_reg_r110_ = Rsh_const(CCP, 5);
  goto L52_;

L51_:;
  // goto L52(r105)
  // L52(r105)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r105_;
  goto L52_;

L52_:;
  // c30 = ldf c in base
  Rsh_Fir_reg_c30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r111 = dyn c30(r2, r13, r24, r30, r41, r52, r58, r69, r80, r88, r99, r110)
  SEXP Rsh_Fir_array_args33[12];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args33[2] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args33[3] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_args33[4] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_args33[5] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_args33[6] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_args33[7] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_args33[8] = Rsh_Fir_reg_r80_;
  Rsh_Fir_array_args33[9] = Rsh_Fir_reg_r88_;
  Rsh_Fir_array_args33[10] = Rsh_Fir_reg_r99_;
  Rsh_Fir_array_args33[11] = Rsh_Fir_reg_r110_;
  SEXP Rsh_Fir_array_arg_names11[12];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_array_arg_names11[4] = R_MissingArg;
  Rsh_Fir_array_arg_names11[5] = R_MissingArg;
  Rsh_Fir_array_arg_names11[6] = R_MissingArg;
  Rsh_Fir_array_arg_names11[7] = R_MissingArg;
  Rsh_Fir_array_arg_names11[8] = R_MissingArg;
  Rsh_Fir_array_arg_names11[9] = R_MissingArg;
  Rsh_Fir_array_arg_names11[10] = R_MissingArg;
  Rsh_Fir_array_arg_names11[11] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c30_, 12, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L218() else D70()
  // L218()
  goto L218_;

L53_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L55() else D0()
  // L55()
  goto L55_;

L54_:;
  // r = dyn base(<lang character()>, <lang if(length(`<-`(bad, `[[`(x, "bad_authors_at_R_field"))), {
  //     c(gettext("Malformed Authors@R field:"), paste0("  ", bad))
  //   })>, <lang if(length(`<-`(bad, `[[`(x, "bad_authors_at_R_field_for_author"))), {
  //     c(gettext("Cannot extract Author field from Authors@R field:"), paste0("  ", bad))
  //   })>, <lang if(length(`[[`(x, "bad_authors_at_R_field_has_no_author")), {
  //     gettext("Authors@R field gives no person with name and roles.")
  //   })>, <lang if(length(`<-`(bad, `[[`(x, "bad_authors_at_R_field_has_persons_with_no_name"))), {
  //     c(gettext("Authors@R field gives persons with no name:"), paste0("  ", bad))
  //   })>, <lang if(length(`<-`(bad, `[[`(x, "bad_authors_at_R_field_has_persons_with_no_role"))), {
  //     c(gettext("Authors@R field gives persons with no role:"), paste0("  ", bad))
  //   })>, <lang if(length(`[[`(x, "bad_authors_at_R_field_has_no_author_roles")), {
  //     gettext("Authors@R field gives no person with name and author role")
  //   })>, <lang if(length(`<-`(bad, `[[`(x, "bad_authors_at_R_field_for_maintainer"))), {
  //     c(gettext("Cannot extract Maintainer field from Authors@R field:"), paste0("  ", bad))
  //   })>, <lang if(length(`<-`(bad, `[[`(x, "bad_authors_at_R_field_too_many_maintainers"))), {
  //     c(gettext("Authors@R field gives more than one person with maintainer role:"), paste0("  ", bad))
  //   })>, <lang if(length(`[[`(x, "bad_authors_at_R_field_has_no_valid_maintainer")), {
  //     strwrap(gettext("Authors@R field gives no person with maintainer role, valid email address and non-empty name."))
  //   })>, <lang if(length(`<-`(bad, `[[`(x, "bad_authors_at_R_field_has_persons_with_bad_ORCID_identifiers"))), {
  //     c(gettext("Authors@R field gives persons with invalid ORCID identifiers:"), paste0("  ", bad))
  //   })>, <lang if(length(`<-`(bad, `[[`(x, "bad_authors_at_R_field_has_persons_with_dup_ORCID_identifiers"))), {
  //     c(gettext("Authors@R field gives persons with duplicated ORCID identifiers:"), paste0("  ", bad))
  //   })>)
  SEXP Rsh_Fir_array_args34[12];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args34[3] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args34[4] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args34[5] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args34[6] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args34[7] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args34[8] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args34[9] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args34[10] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args34[11] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names12[12];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_array_arg_names12[3] = R_MissingArg;
  Rsh_Fir_array_arg_names12[4] = R_MissingArg;
  Rsh_Fir_array_arg_names12[5] = R_MissingArg;
  Rsh_Fir_array_arg_names12[6] = R_MissingArg;
  Rsh_Fir_array_arg_names12[7] = R_MissingArg;
  Rsh_Fir_array_arg_names12[8] = R_MissingArg;
  Rsh_Fir_array_arg_names12[9] = R_MissingArg;
  Rsh_Fir_array_arg_names12[10] = R_MissingArg;
  Rsh_Fir_array_arg_names12[11] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 12, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

L55_:;
  // r2 = dyn character()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L56() else D1()
  // L56()
  goto L56_;

D1_:;
  // deopt 4 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L56_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard1 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L57_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L59() else D2()
  // L59()
  goto L59_;

L58_:;
  // r3 = dyn base1(<lang `<-`(bad, `[[`(x, "bad_authors_at_R_field"))>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 7 [x1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L59_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c then L60() else L61(x2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L60()
    goto L60_;
  } else {
  // L61(x2)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_x2_;
    goto L61_;
  }

L60_:;
  // dr = tryDispatchBuiltin.1("[[", x2)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args39);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if dc then L62() else L61(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L62()
    goto L62_;
  } else {
  // L61(dr)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_dr;
    goto L61_;
  }

L61_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r5 = dyn __(x4, "bad_authors_at_R_field")
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r5_;
  goto L2_;

L62_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L2(dx)
  // L2(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L2_;

D3_:;
  // deopt 14 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L63_:;
  // goto L1(r6)
  // L1(r6)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r6_;
  goto L1_;

L64_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard2 then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L65_:;
  // gettext = ldf gettext
  Rsh_Fir_reg_gettext = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L67() else D4()
  // L67()
  goto L67_;

L66_:;
  // r7 = dyn base2(<lang gettext("Malformed Authors@R field:")>, <lang paste0("  ", bad)>)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L4(r7)
  // L4(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L4_;

D4_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L67_:;
  // r9 = dyn gettext("Malformed Authors@R field:")
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L68() else D5()
  // L68()
  goto L68_;

D5_:;
  // deopt 20 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L68_:;
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L69() else D6()
  // L69()
  goto L69_;

D6_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L69_:;
  // p = prom<V +>{
  //   bad = ld bad;
  //   bad1 = force? bad;
  //   checkMissing(bad1);
  //   return bad1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_, CCP, RHO);
  // r11 = dyn paste0("  ", p)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L70() else D7()
  // L70()
  goto L70_;

D7_:;
  // deopt 25 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L70_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r12 = dyn c2(r9, r11)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L71() else D8()
  // L71()
  goto L71_;

D8_:;
  // deopt 27 [r12]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L71_:;
  // goto L4(r12)
  // L4(r12)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r12_;
  goto L4_;

L73_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L75() else D9()
  // L75()
  goto L75_;

L74_:;
  // r14 = dyn base3(<lang `<-`(bad, `[[`(x, "bad_authors_at_R_field_for_author"))>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L6(r14)
  // L6(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L6_;

D9_:;
  // deopt 32 [x5]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L75_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(x6)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if c3 then L76() else L77(x6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L76()
    goto L76_;
  } else {
  // L77(x6)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_x6_;
    goto L77_;
  }

L76_:;
  // dr2 = tryDispatchBuiltin.1("[[", x6)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args52);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if dc1 then L78() else L77(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L78()
    goto L78_;
  } else {
  // L77(dr2)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_dr2_;
    goto L77_;
  }

L77_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r16 = dyn __1(x8, "bad_authors_at_R_field_for_author")
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L7(r16)
  // L7(r16)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r16_;
  goto L7_;

L78_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L7(dx2)
  // L7(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L7_;

D10_:;
  // deopt 39 [r17]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L79_:;
  // goto L6(r17)
  // L6(r17)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r17_;
  goto L6_;

L80_:;
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard4 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L81_:;
  // gettext1 = ldf gettext
  Rsh_Fir_reg_gettext1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L83() else D11()
  // L83()
  goto L83_;

L82_:;
  // r18 = dyn base4(<lang gettext("Cannot extract Author field from Authors@R field:")>, <lang paste0("  ", bad)>)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L9(r18)
  // L9(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L9_;

D11_:;
  // deopt 43 []
  Rsh_Fir_deopt(43, 0, NULL, CCP, RHO);
  return R_NilValue;

L83_:;
  // r20 = dyn gettext1("Cannot extract Author field from Authors@R field:")
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext1_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L84() else D12()
  // L84()
  goto L84_;

D12_:;
  // deopt 45 [r20]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L84_:;
  // paste1 = ldf paste0
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L85() else D13()
  // L85()
  goto L85_;

D13_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L85_:;
  // p1 = prom<V +>{
  //   bad2 = ld bad;
  //   bad3 = force? bad2;
  //   checkMissing(bad3);
  //   return bad3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_1, CCP, RHO);
  // r22 = dyn paste1("  ", p1)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L86() else D14()
  // L86()
  goto L86_;

D14_:;
  // deopt 50 [r22]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L86_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r23 = dyn c5(r20, r22)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L87() else D15()
  // L87()
  goto L87_;

D15_:;
  // deopt 52 [r23]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L87_:;
  // goto L9(r23)
  // L9(r23)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r23_;
  goto L9_;

L89_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L91() else D16()
  // L91()
  goto L91_;

L90_:;
  // r25 = dyn base5(<lang `[[`(x, "bad_authors_at_R_field_has_no_author")>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L11(r25)
  // L11(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L11_;

D16_:;
  // deopt 57 [x9]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L91_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(x10)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if c6 then L92() else L93(x10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L92()
    goto L92_;
  } else {
  // L93(x10)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    goto L93_;
  }

L92_:;
  // dr4 = tryDispatchBuiltin.1("[[", x10)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args65);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if dc2 then L94() else L93(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L94()
    goto L94_;
  } else {
  // L93(dr4)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_dr4_;
    goto L93_;
  }

L93_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r27 = dyn __2(x12, "bad_authors_at_R_field_has_no_author")
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L12(r27)
  // L12(r27)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r27_;
  goto L12_;

L94_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L12(dx4)
  // L12(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L12_;

D17_:;
  // deopt 63 [r28]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L95_:;
  // goto L11(r28)
  // L11(r28)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r28_;
  goto L11_;

L96_:;
  // gettext2 = ldf gettext
  Rsh_Fir_reg_gettext2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L97() else D18()
  // L97()
  goto L97_;

D18_:;
  // deopt 65 []
  Rsh_Fir_deopt(65, 0, NULL, CCP, RHO);
  return R_NilValue;

L97_:;
  // r29 = dyn gettext2("Authors@R field gives no person with name and roles.")
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext2_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L98() else D19()
  // L98()
  goto L98_;

D19_:;
  // deopt 67 [r29]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L98_:;
  // goto L14(r29)
  // L14(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L14_;

L100_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L102() else D20()
  // L102()
  goto L102_;

L101_:;
  // r31 = dyn base6(<lang `<-`(bad, `[[`(x, "bad_authors_at_R_field_has_persons_with_no_name"))>)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L15(r31)
  // L15(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L15_;

D20_:;
  // deopt 72 [x13]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L102_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(x14)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if c8 then L103() else L104(x14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L103()
    goto L103_;
  } else {
  // L104(x14)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_x14_;
    goto L104_;
  }

L103_:;
  // dr6 = tryDispatchBuiltin.1("[[", x14)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args73);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc3 then L105() else L104(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L105()
    goto L105_;
  } else {
  // L104(dr6)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_dr6_;
    goto L104_;
  }

L104_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r33 = dyn __3(x16, "bad_authors_at_R_field_has_persons_with_no_name")
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L16(r33)
  // L16(r33)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r33_;
  goto L16_;

L105_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L16(dx6)
  // L16(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L16_;

D21_:;
  // deopt 79 [r34]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L106_:;
  // goto L15(r34)
  // L15(r34)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r34_;
  goto L15_;

L107_:;
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args77);
  // if guard7 then L108() else L109()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L108()
    goto L108_;
  } else {
  // L109()
    goto L109_;
  }

L108_:;
  // gettext3 = ldf gettext
  Rsh_Fir_reg_gettext3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L110() else D22()
  // L110()
  goto L110_;

L109_:;
  // r35 = dyn base7(<lang gettext("Authors@R field gives persons with no name:")>, <lang paste0("  ", bad)>)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L18(r35)
  // L18(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L18_;

D22_:;
  // deopt 83 []
  Rsh_Fir_deopt(83, 0, NULL, CCP, RHO);
  return R_NilValue;

L110_:;
  // r37 = dyn gettext3("Authors@R field gives persons with no name:")
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext3_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L111() else D23()
  // L111()
  goto L111_;

D23_:;
  // deopt 85 [r37]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L111_:;
  // paste2 = ldf paste0
  Rsh_Fir_reg_paste2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L112() else D24()
  // L112()
  goto L112_;

D24_:;
  // deopt 87 []
  Rsh_Fir_deopt(87, 0, NULL, CCP, RHO);
  return R_NilValue;

L112_:;
  // p2 = prom<V +>{
  //   bad4 = ld bad;
  //   bad5 = force? bad4;
  //   checkMissing(bad5);
  //   return bad5;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_2, CCP, RHO);
  // r39 = dyn paste2("  ", p2)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste2_, 2, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L113() else D25()
  // L113()
  goto L113_;

D25_:;
  // deopt 90 [r39]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L113_:;
  // c10 = ldf c in base
  Rsh_Fir_reg_c10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r40 = dyn c10(r37, r39)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c10_, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L114() else D26()
  // L114()
  goto L114_;

D26_:;
  // deopt 92 [r40]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L114_:;
  // goto L18(r40)
  // L18(r40)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r40_;
  goto L18_;

L116_:;
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L118() else D27()
  // L118()
  goto L118_;

L117_:;
  // r42 = dyn base8(<lang `<-`(bad, `[[`(x, "bad_authors_at_R_field_has_persons_with_no_role"))>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L20(r42)
  // L20(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L20_;

D27_:;
  // deopt 97 [x17]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L118_:;
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(x18)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if c11 then L119() else L120(x18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L119()
    goto L119_;
  } else {
  // L120(x18)
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_x18_;
    goto L120_;
  }

L119_:;
  // dr8 = tryDispatchBuiltin.1("[[", x18)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args86);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if dc4 then L121() else L120(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L121()
    goto L121_;
  } else {
  // L120(dr8)
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_dr8_;
    goto L120_;
  }

L120_:;
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r44 = dyn __4(x20, "bad_authors_at_R_field_has_persons_with_no_role")
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L21(r44)
  // L21(r44)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r44_;
  goto L21_;

L121_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L21(dx8)
  // L21(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L21_;

D28_:;
  // deopt 104 [r45]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L122_:;
  // goto L20(r45)
  // L20(r45)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r45_;
  goto L20_;

L123_:;
  // sym9 = ldf c
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base9 = ldf c in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args90);
  // if guard9 then L124() else L125()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L124()
    goto L124_;
  } else {
  // L125()
    goto L125_;
  }

L124_:;
  // gettext4 = ldf gettext
  Rsh_Fir_reg_gettext4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L126() else D29()
  // L126()
  goto L126_;

L125_:;
  // r46 = dyn base9(<lang gettext("Authors@R field gives persons with no role:")>, <lang paste0("  ", bad)>)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args91[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L23(r46)
  // L23(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L23_;

D29_:;
  // deopt 108 []
  Rsh_Fir_deopt(108, 0, NULL, CCP, RHO);
  return R_NilValue;

L126_:;
  // r48 = dyn gettext4("Authors@R field gives persons with no role:")
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext4_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L127() else D30()
  // L127()
  goto L127_;

D30_:;
  // deopt 110 [r48]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L127_:;
  // paste3 = ldf paste0
  Rsh_Fir_reg_paste3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L128() else D31()
  // L128()
  goto L128_;

D31_:;
  // deopt 112 []
  Rsh_Fir_deopt(112, 0, NULL, CCP, RHO);
  return R_NilValue;

L128_:;
  // p3 = prom<V +>{
  //   bad6 = ld bad;
  //   bad7 = force? bad6;
  //   checkMissing(bad7);
  //   return bad7;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_3, CCP, RHO);
  // r50 = dyn paste3("  ", p3)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste3_, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L129() else D32()
  // L129()
  goto L129_;

D32_:;
  // deopt 115 [r50]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L129_:;
  // c13 = ldf c in base
  Rsh_Fir_reg_c13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r51 = dyn c13(r48, r50)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c13_, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L130() else D33()
  // L130()
  goto L130_;

D33_:;
  // deopt 117 [r51]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L130_:;
  // goto L23(r51)
  // L23(r51)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r51_;
  goto L23_;

L132_:;
  // x21 = ld x
  Rsh_Fir_reg_x21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L134() else D34()
  // L134()
  goto L134_;

L133_:;
  // r53 = dyn base10(<lang `[[`(x, "bad_authors_at_R_field_has_no_author_roles")>)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L25(r53)
  // L25(r53)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L25_;

D34_:;
  // deopt 122 [x21]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_x21_;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L134_:;
  // x22 = force? x21
  Rsh_Fir_reg_x22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x21_);
  // checkMissing(x22)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_x22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(x22)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // if c14 then L135() else L136(x22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L135()
    goto L135_;
  } else {
  // L136(x22)
    Rsh_Fir_reg_x24_ = Rsh_Fir_reg_x22_;
    goto L136_;
  }

L135_:;
  // dr10 = tryDispatchBuiltin.1("[[", x22)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args99);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // if dc5 then L137() else L136(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L137()
    goto L137_;
  } else {
  // L136(dr10)
    Rsh_Fir_reg_x24_ = Rsh_Fir_reg_dr10_;
    goto L136_;
  }

L136_:;
  // __5 = ldf `[[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r55 = dyn __5(x24, "bad_authors_at_R_field_has_no_author_roles")
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_args101[1] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L26(r55)
  // L26(r55)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r55_;
  goto L26_;

L137_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // goto L26(dx10)
  // L26(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L26_;

D35_:;
  // deopt 128 [r56]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(128, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L138_:;
  // goto L25(r56)
  // L25(r56)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r56_;
  goto L25_;

L139_:;
  // gettext5 = ldf gettext
  Rsh_Fir_reg_gettext5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L140() else D36()
  // L140()
  goto L140_;

D36_:;
  // deopt 130 []
  Rsh_Fir_deopt(130, 0, NULL, CCP, RHO);
  return R_NilValue;

L140_:;
  // r57 = dyn gettext5("Authors@R field gives no person with name and author role")
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext5_, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L141() else D37()
  // L141()
  goto L141_;

D37_:;
  // deopt 132 [r57]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L141_:;
  // goto L28(r57)
  // L28(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L28_;

L143_:;
  // x25 = ld x
  Rsh_Fir_reg_x25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L145() else D38()
  // L145()
  goto L145_;

L144_:;
  // r59 = dyn base11(<lang `<-`(bad, `[[`(x, "bad_authors_at_R_field_for_maintainer"))>)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L29(r59)
  // L29(r59)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L29_;

D38_:;
  // deopt 137 [x25]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_x25_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L145_:;
  // x26 = force? x25
  Rsh_Fir_reg_x26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x25_);
  // checkMissing(x26)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_x26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(x26)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if c16 then L146() else L147(x26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L146()
    goto L146_;
  } else {
  // L147(x26)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_x26_;
    goto L147_;
  }

L146_:;
  // dr12 = tryDispatchBuiltin.1("[[", x26)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args107);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // if dc6 then L148() else L147(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L148()
    goto L148_;
  } else {
  // L147(dr12)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_dr12_;
    goto L147_;
  }

L147_:;
  // __6 = ldf `[[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r61 = dyn __6(x28, "bad_authors_at_R_field_for_maintainer")
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_array_args109[1] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L30(r61)
  // L30(r61)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r61_;
  goto L30_;

L148_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // goto L30(dx12)
  // L30(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L30_;

D39_:;
  // deopt 144 [r62]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(144, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L149_:;
  // goto L29(r62)
  // L29(r62)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r62_;
  goto L29_;

L150_:;
  // sym12 = ldf c
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base12 = ldf c in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args111);
  // if guard12 then L151() else L152()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L151()
    goto L151_;
  } else {
  // L152()
    goto L152_;
  }

L151_:;
  // gettext6 = ldf gettext
  Rsh_Fir_reg_gettext6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L153() else D40()
  // L153()
  goto L153_;

L152_:;
  // r63 = dyn base12(<lang gettext("Cannot extract Maintainer field from Authors@R field:")>, <lang paste0("  ", bad)>)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args112[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 2, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L32(r63)
  // L32(r63)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r63_;
  goto L32_;

D40_:;
  // deopt 148 []
  Rsh_Fir_deopt(148, 0, NULL, CCP, RHO);
  return R_NilValue;

L153_:;
  // r65 = dyn gettext6("Cannot extract Maintainer field from Authors@R field:")
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext6_, 1, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L154() else D41()
  // L154()
  goto L154_;

D41_:;
  // deopt 150 [r65]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(150, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L154_:;
  // paste4 = ldf paste0
  Rsh_Fir_reg_paste4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L155() else D42()
  // L155()
  goto L155_;

D42_:;
  // deopt 152 []
  Rsh_Fir_deopt(152, 0, NULL, CCP, RHO);
  return R_NilValue;

L155_:;
  // p4 = prom<V +>{
  //   bad8 = ld bad;
  //   bad9 = force? bad8;
  //   checkMissing(bad9);
  //   return bad9;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_4, CCP, RHO);
  // r67 = dyn paste4("  ", p4)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste4_, 2, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L156() else D43()
  // L156()
  goto L156_;

D43_:;
  // deopt 155 [r67]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(155, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L156_:;
  // c18 = ldf c in base
  Rsh_Fir_reg_c18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r68 = dyn c18(r65, r67)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c18_, 2, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L157() else D44()
  // L157()
  goto L157_;

D44_:;
  // deopt 157 [r68]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L157_:;
  // goto L32(r68)
  // L32(r68)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r68_;
  goto L32_;

L159_:;
  // x29 = ld x
  Rsh_Fir_reg_x29_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L161() else D45()
  // L161()
  goto L161_;

L160_:;
  // r70 = dyn base13(<lang `<-`(bad, `[[`(x, "bad_authors_at_R_field_too_many_maintainers"))>)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L34(r70)
  // L34(r70)
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r70_;
  goto L34_;

D45_:;
  // deopt 162 [x29]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_x29_;
  Rsh_Fir_deopt(162, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L161_:;
  // x30 = force? x29
  Rsh_Fir_reg_x30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x29_);
  // checkMissing(x30)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_x30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(x30)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_x30_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // if c19 then L162() else L163(x30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L162()
    goto L162_;
  } else {
  // L163(x30)
    Rsh_Fir_reg_x32_ = Rsh_Fir_reg_x30_;
    goto L163_;
  }

L162_:;
  // dr14 = tryDispatchBuiltin.1("[[", x30)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_x30_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args120);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if dc7 then L164() else L163(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L164()
    goto L164_;
  } else {
  // L163(dr14)
    Rsh_Fir_reg_x32_ = Rsh_Fir_reg_dr14_;
    goto L163_;
  }

L163_:;
  // __7 = ldf `[[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r72 = dyn __7(x32, "bad_authors_at_R_field_too_many_maintainers")
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_x32_;
  Rsh_Fir_array_args122[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names50[2];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L35(r72)
  // L35(r72)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r72_;
  goto L35_;

L164_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // goto L35(dx14)
  // L35(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L35_;

D46_:;
  // deopt 169 [r73]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L165_:;
  // goto L34(r73)
  // L34(r73)
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r73_;
  goto L34_;

L166_:;
  // sym14 = ldf c
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base14 = ldf c in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args124);
  // if guard14 then L167() else L168()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L167()
    goto L167_;
  } else {
  // L168()
    goto L168_;
  }

L167_:;
  // gettext7 = ldf gettext
  Rsh_Fir_reg_gettext7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L169() else D47()
  // L169()
  goto L169_;

L168_:;
  // r74 = dyn base14(<lang gettext("Authors@R field gives more than one person with maintainer role:")>, <lang paste0("  ", bad)>)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args125[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names51[2];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 2, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L37(r74)
  // L37(r74)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r74_;
  goto L37_;

D47_:;
  // deopt 173 []
  Rsh_Fir_deopt(173, 0, NULL, CCP, RHO);
  return R_NilValue;

L169_:;
  // r76 = dyn gettext7("Authors@R field gives more than one person with maintainer role:")
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext7_, 1, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L170() else D48()
  // L170()
  goto L170_;

D48_:;
  // deopt 175 [r76]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(175, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L170_:;
  // paste5 = ldf paste0
  Rsh_Fir_reg_paste5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L171() else D49()
  // L171()
  goto L171_;

D49_:;
  // deopt 177 []
  Rsh_Fir_deopt(177, 0, NULL, CCP, RHO);
  return R_NilValue;

L171_:;
  // p5 = prom<V +>{
  //   bad10 = ld bad;
  //   bad11 = force? bad10;
  //   checkMissing(bad11);
  //   return bad11;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_5, CCP, RHO);
  // r78 = dyn paste5("  ", p5)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names53[2];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste5_, 2, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L172() else D50()
  // L172()
  goto L172_;

D50_:;
  // deopt 180 [r78]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(180, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L172_:;
  // c21 = ldf c in base
  Rsh_Fir_reg_c21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r79 = dyn c21(r76, r78)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_array_arg_names54[2];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c21_, 2, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names54, CCP, RHO);
  // check L173() else D51()
  // L173()
  goto L173_;

D51_:;
  // deopt 182 [r79]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_deopt(182, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L173_:;
  // goto L37(r79)
  // L37(r79)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r79_;
  goto L37_;

L175_:;
  // x33 = ld x
  Rsh_Fir_reg_x33_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L177() else D52()
  // L177()
  goto L177_;

L176_:;
  // r81 = dyn base15(<lang `[[`(x, "bad_authors_at_R_field_has_no_valid_maintainer")>)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names55[1];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L39(r81)
  // L39(r81)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r81_;
  goto L39_;

D52_:;
  // deopt 187 [x33]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_x33_;
  Rsh_Fir_deopt(187, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L177_:;
  // x34 = force? x33
  Rsh_Fir_reg_x34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x33_);
  // checkMissing(x34)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_x34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(x34)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_x34_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // if c22 then L178() else L179(x34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L178()
    goto L178_;
  } else {
  // L179(x34)
    Rsh_Fir_reg_x36_ = Rsh_Fir_reg_x34_;
    goto L179_;
  }

L178_:;
  // dr16 = tryDispatchBuiltin.1("[[", x34)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_x34_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args133);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if dc8 then L180() else L179(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L180()
    goto L180_;
  } else {
  // L179(dr16)
    Rsh_Fir_reg_x36_ = Rsh_Fir_reg_dr16_;
    goto L179_;
  }

L179_:;
  // __8 = ldf `[[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r83 = dyn __8(x36, "bad_authors_at_R_field_has_no_valid_maintainer")
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_x36_;
  Rsh_Fir_array_args135[1] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names56[2];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L40(r83)
  // L40(r83)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r83_;
  goto L40_;

L180_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // goto L40(dx16)
  // L40(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L40_;

D53_:;
  // deopt 193 [r84]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_deopt(193, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L181_:;
  // goto L39(r84)
  // L39(r84)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r84_;
  goto L39_;

L182_:;
  // strwrap = ldf strwrap
  Rsh_Fir_reg_strwrap = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // check L183() else D54()
  // L183()
  goto L183_;

D54_:;
  // deopt 195 []
  Rsh_Fir_deopt(195, 0, NULL, CCP, RHO);
  return R_NilValue;

L183_:;
  // p6 = prom<V +>{
  //   gettext8 = ldf gettext;
  //   r85 = dyn gettext8("Authors@R field gives no person with maintainer role, valid email address and non-empty name.");
  //   return r85;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_6, CCP, RHO);
  // r87 = dyn strwrap(p6)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names58[1];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strwrap, 1, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names58, CCP, RHO);
  // check L184() else D55()
  // L184()
  goto L184_;

D55_:;
  // deopt 197 [r87]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_deopt(197, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L184_:;
  // goto L42(r87)
  // L42(r87)
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r87_;
  goto L42_;

L186_:;
  // x37 = ld x
  Rsh_Fir_reg_x37_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L188() else D56()
  // L188()
  goto L188_;

L187_:;
  // r89 = dyn base16(<lang `<-`(bad, `[[`(x, "bad_authors_at_R_field_has_persons_with_bad_ORCID_identifiers"))>)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names59[1];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names59, CCP, RHO);
  // goto L43(r89)
  // L43(r89)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r89_;
  goto L43_;

D56_:;
  // deopt 202 [x37]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_x37_;
  Rsh_Fir_deopt(202, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L188_:;
  // x38 = force? x37
  Rsh_Fir_reg_x38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x37_);
  // checkMissing(x38)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_x38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty()));
  // c24 = `is.object`(x38)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_x38_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // if c24 then L189() else L190(x38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L189()
    goto L189_;
  } else {
  // L190(x38)
    Rsh_Fir_reg_x40_ = Rsh_Fir_reg_x38_;
    goto L190_;
  }

L189_:;
  // dr18 = tryDispatchBuiltin.1("[[", x38)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_x38_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args142);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // if dc9 then L191() else L190(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L191()
    goto L191_;
  } else {
  // L190(dr18)
    Rsh_Fir_reg_x40_ = Rsh_Fir_reg_dr18_;
    goto L190_;
  }

L190_:;
  // __9 = ldf `[[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r91 = dyn __9(x40, "bad_authors_at_R_field_has_persons_with_bad_ORCID_identifiers")
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_x40_;
  Rsh_Fir_array_args144[1] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names60[2];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names60, CCP, RHO);
  // goto L44(r91)
  // L44(r91)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r91_;
  goto L44_;

L191_:;
  // dx18 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // goto L44(dx18)
  // L44(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L44_;

D57_:;
  // deopt 209 [r92]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_deopt(209, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L192_:;
  // goto L43(r92)
  // L43(r92)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r92_;
  goto L43_;

L193_:;
  // sym17 = ldf c
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base17 = ldf c in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args146[2];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args146[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args146);
  // if guard17 then L194() else L195()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L194()
    goto L194_;
  } else {
  // L195()
    goto L195_;
  }

L194_:;
  // gettext9 = ldf gettext
  Rsh_Fir_reg_gettext9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L196() else D58()
  // L196()
  goto L196_;

L195_:;
  // r93 = dyn base17(<lang gettext("Authors@R field gives persons with invalid ORCID identifiers:")>, <lang paste0("  ", bad)>)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args147[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names61[2];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_array_arg_names61[1] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 2, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names61, CCP, RHO);
  // goto L46(r93)
  // L46(r93)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r93_;
  goto L46_;

D58_:;
  // deopt 213 []
  Rsh_Fir_deopt(213, 0, NULL, CCP, RHO);
  return R_NilValue;

L196_:;
  // r95 = dyn gettext9("Authors@R field gives persons with invalid ORCID identifiers:")
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names62[1];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext9_, 1, Rsh_Fir_array_args148, Rsh_Fir_array_arg_names62, CCP, RHO);
  // check L197() else D59()
  // L197()
  goto L197_;

D59_:;
  // deopt 215 [r95]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_deopt(215, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L197_:;
  // paste6 = ldf paste0
  Rsh_Fir_reg_paste6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L198() else D60()
  // L198()
  goto L198_;

D60_:;
  // deopt 217 []
  Rsh_Fir_deopt(217, 0, NULL, CCP, RHO);
  return R_NilValue;

L198_:;
  // p7 = prom<V +>{
  //   bad12 = ld bad;
  //   bad13 = force? bad12;
  //   checkMissing(bad13);
  //   return bad13;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_7, CCP, RHO);
  // r97 = dyn paste6("  ", p7)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args150[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names63[2];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_array_arg_names63[1] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste6_, 2, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names63, CCP, RHO);
  // check L199() else D61()
  // L199()
  goto L199_;

D61_:;
  // deopt 220 [r97]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_deopt(220, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L199_:;
  // c26 = ldf c in base
  Rsh_Fir_reg_c26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r98 = dyn c26(r95, r97)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_array_arg_names64[2];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c26_, 2, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names64, CCP, RHO);
  // check L200() else D62()
  // L200()
  goto L200_;

D62_:;
  // deopt 222 [r98]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r98_;
  Rsh_Fir_deopt(222, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L200_:;
  // goto L46(r98)
  // L46(r98)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r98_;
  goto L46_;

L202_:;
  // x41 = ld x
  Rsh_Fir_reg_x41_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L204() else D63()
  // L204()
  goto L204_;

L203_:;
  // r100 = dyn base18(<lang `<-`(bad, `[[`(x, "bad_authors_at_R_field_has_persons_with_dup_ORCID_identifiers"))>)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 63);
  SEXP Rsh_Fir_array_arg_names65[1];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names65, CCP, RHO);
  // goto L48(r100)
  // L48(r100)
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r100_;
  goto L48_;

D63_:;
  // deopt 227 [x41]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_x41_;
  Rsh_Fir_deopt(227, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L204_:;
  // x42 = force? x41
  Rsh_Fir_reg_x42_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x41_);
  // checkMissing(x42)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_x42_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty()));
  // c27 = `is.object`(x42)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_x42_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // if c27 then L205() else L206(x42)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L205()
    goto L205_;
  } else {
  // L206(x42)
    Rsh_Fir_reg_x44_ = Rsh_Fir_reg_x42_;
    goto L206_;
  }

L205_:;
  // dr20 = tryDispatchBuiltin.1("[[", x42)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args155[1] = Rsh_Fir_reg_x42_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args155);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty());
  // if dc10 then L207() else L206(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L207()
    goto L207_;
  } else {
  // L206(dr20)
    Rsh_Fir_reg_x44_ = Rsh_Fir_reg_dr20_;
    goto L206_;
  }

L206_:;
  // __10 = ldf `[[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r102 = dyn __10(x44, "bad_authors_at_R_field_has_persons_with_dup_ORCID_identifiers")
  SEXP Rsh_Fir_array_args157[2];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_x44_;
  Rsh_Fir_array_args157[1] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names66[2];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_array_arg_names66[1] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 2, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names66, CCP, RHO);
  // goto L49(r102)
  // L49(r102)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r102_;
  goto L49_;

L207_:;
  // dx20 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty());
  // goto L49(dx20)
  // L49(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L49_;

D64_:;
  // deopt 234 [r103]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r103_;
  Rsh_Fir_deopt(234, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L208_:;
  // goto L48(r103)
  // L48(r103)
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r103_;
  goto L48_;

L209_:;
  // sym19 = ldf c
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base19 = ldf c in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args159[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args159);
  // if guard19 then L210() else L211()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L210()
    goto L210_;
  } else {
  // L211()
    goto L211_;
  }

L210_:;
  // gettext10 = ldf gettext
  Rsh_Fir_reg_gettext10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L212() else D65()
  // L212()
  goto L212_;

L211_:;
  // r104 = dyn base19(<lang gettext("Authors@R field gives persons with duplicated ORCID identifiers:")>, <lang paste0("  ", bad)>)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args160[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names67[2];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_array_arg_names67[1] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 2, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names67, CCP, RHO);
  // goto L51(r104)
  // L51(r104)
  Rsh_Fir_reg_r105_ = Rsh_Fir_reg_r104_;
  goto L51_;

D65_:;
  // deopt 238 []
  Rsh_Fir_deopt(238, 0, NULL, CCP, RHO);
  return R_NilValue;

L212_:;
  // r106 = dyn gettext10("Authors@R field gives persons with duplicated ORCID identifiers:")
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_const(CCP, 66);
  SEXP Rsh_Fir_array_arg_names68[1];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext10_, 1, Rsh_Fir_array_args161, Rsh_Fir_array_arg_names68, CCP, RHO);
  // check L213() else D66()
  // L213()
  goto L213_;

D66_:;
  // deopt 240 [r106]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r106_;
  Rsh_Fir_deopt(240, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L213_:;
  // paste7 = ldf paste0
  Rsh_Fir_reg_paste7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L214() else D67()
  // L214()
  goto L214_;

D67_:;
  // deopt 242 []
  Rsh_Fir_deopt(242, 0, NULL, CCP, RHO);
  return R_NilValue;

L214_:;
  // p8 = prom<V +>{
  //   bad14 = ld bad;
  //   bad15 = force? bad14;
  //   checkMissing(bad15);
  //   return bad15;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_8, CCP, RHO);
  // r108 = dyn paste7("  ", p8)
  SEXP Rsh_Fir_array_args163[2];
  Rsh_Fir_array_args163[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args163[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names69[2];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_array_arg_names69[1] = R_MissingArg;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste7_, 2, Rsh_Fir_array_args163, Rsh_Fir_array_arg_names69, CCP, RHO);
  // check L215() else D68()
  // L215()
  goto L215_;

D68_:;
  // deopt 245 [r108]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_deopt(245, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L215_:;
  // c29 = ldf c in base
  Rsh_Fir_reg_c29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r109 = dyn c29(r106, r108)
  SEXP Rsh_Fir_array_args164[2];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_r106_;
  Rsh_Fir_array_args164[1] = Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_array_arg_names70[2];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_array_arg_names70[1] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c29_, 2, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names70, CCP, RHO);
  // check L216() else D69()
  // L216()
  goto L216_;

D69_:;
  // deopt 247 [r109]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r109_;
  Rsh_Fir_deopt(247, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L216_:;
  // goto L51(r109)
  // L51(r109)
  Rsh_Fir_reg_r105_ = Rsh_Fir_reg_r109_;
  goto L51_;

D70_:;
  // deopt 251 [r111]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_deopt(251, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L218_:;
  // goto L0(r111)
  // L0(r111)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r111_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO) {
  // bad = ld bad
  Rsh_Fir_reg_bad = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // bad1 = force? bad
  Rsh_Fir_reg_bad1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bad);
  // checkMissing(bad1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_bad1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return bad1
  return Rsh_Fir_reg_bad1_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO) {
  // bad2 = ld bad
  Rsh_Fir_reg_bad2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // bad3 = force? bad2
  Rsh_Fir_reg_bad3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bad2_);
  // checkMissing(bad3)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_bad3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return bad3
  return Rsh_Fir_reg_bad3_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_2(SEXP CCP, SEXP RHO) {
  // bad4 = ld bad
  Rsh_Fir_reg_bad4_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // bad5 = force? bad4
  Rsh_Fir_reg_bad5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bad4_);
  // checkMissing(bad5)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_bad5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // return bad5
  return Rsh_Fir_reg_bad5_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_3(SEXP CCP, SEXP RHO) {
  // bad6 = ld bad
  Rsh_Fir_reg_bad6_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // bad7 = force? bad6
  Rsh_Fir_reg_bad7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bad6_);
  // checkMissing(bad7)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_bad7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // return bad7
  return Rsh_Fir_reg_bad7_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_4(SEXP CCP, SEXP RHO) {
  // bad8 = ld bad
  Rsh_Fir_reg_bad8_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // bad9 = force? bad8
  Rsh_Fir_reg_bad9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bad8_);
  // checkMissing(bad9)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_bad9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // return bad9
  return Rsh_Fir_reg_bad9_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_5(SEXP CCP, SEXP RHO) {
  // bad10 = ld bad
  Rsh_Fir_reg_bad10_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // bad11 = force? bad10
  Rsh_Fir_reg_bad11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bad10_);
  // checkMissing(bad11)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_bad11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // return bad11
  return Rsh_Fir_reg_bad11_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_6(SEXP CCP, SEXP RHO) {
  // gettext8 = ldf gettext
  Rsh_Fir_reg_gettext8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // r85 = dyn gettext8("Authors@R field gives no person with maintainer role, valid email address and non-empty name.")
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names57[1];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettext8_, 1, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names57, CCP, RHO);
  // return r85
  return Rsh_Fir_reg_r85_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_7(SEXP CCP, SEXP RHO) {
  // bad12 = ld bad
  Rsh_Fir_reg_bad12_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // bad13 = force? bad12
  Rsh_Fir_reg_bad13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bad12_);
  // checkMissing(bad13)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_bad13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty()));
  // return bad13
  return Rsh_Fir_reg_bad13_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_8(SEXP CCP, SEXP RHO) {
  // bad14 = ld bad
  Rsh_Fir_reg_bad14_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // bad15 = force? bad14
  Rsh_Fir_reg_bad15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bad14_);
  // checkMissing(bad15)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_bad15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty()));
  // return bad15
  return Rsh_Fir_reg_bad15_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
