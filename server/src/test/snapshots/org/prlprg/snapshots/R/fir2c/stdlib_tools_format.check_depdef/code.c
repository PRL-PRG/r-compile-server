#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2044426018_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_18(SEXP CCP, SEXP RHO);
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
  // r = clos inner2044426018
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2044426018_, RHO, CCP);
  // st `format.check_depdef` = r
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
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2044426018 dynamic dispatch ([x, `...`])

  return Rsh_Fir_user_version_inner2044426018_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2044426018 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2044426018/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_ngettext;  // ngettext
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_strwrap;  // strwrap
  SEXP Rsh_Fir_reg_msg;  // msg
  SEXP Rsh_Fir_reg_msg1_;  // msg1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg__pretty_format;  // _pretty_format
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_ngettext1_;  // ngettext1
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_x20_;  // x20
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_out;  // out
  SEXP Rsh_Fir_reg_out1_;  // out1
  SEXP Rsh_Fir_reg_strwrap1_;  // strwrap1
  SEXP Rsh_Fir_reg_msg2_;  // msg2
  SEXP Rsh_Fir_reg_msg3_;  // msg3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg__pretty_format1_;  // _pretty_format1
  SEXP Rsh_Fir_reg_x21_;  // x21
  SEXP Rsh_Fir_reg_x22_;  // x22
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_x24_;  // x24
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_x25_;  // x25
  SEXP Rsh_Fir_reg_x26_;  // x26
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_x28_;  // x28
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_length4_;  // length4
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_ngettext2_;  // ngettext2
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_x29_;  // x29
  SEXP Rsh_Fir_reg_x30_;  // x30
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_x32_;  // x32
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_length5_;  // length5
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_out2_;  // out2
  SEXP Rsh_Fir_reg_out3_;  // out3
  SEXP Rsh_Fir_reg_strwrap2_;  // strwrap2
  SEXP Rsh_Fir_reg_msg4_;  // msg4
  SEXP Rsh_Fir_reg_msg5_;  // msg5
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg__pretty_format2_;  // _pretty_format2
  SEXP Rsh_Fir_reg_x33_;  // x33
  SEXP Rsh_Fir_reg_x34_;  // x34
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_x36_;  // x36
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_x37_;  // x37
  SEXP Rsh_Fir_reg_x38_;  // x38
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_x40_;  // x40
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_length6_;  // length6
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_ngettext3_;  // ngettext3
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_x41_;  // x41
  SEXP Rsh_Fir_reg_x42_;  // x42
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_x44_;  // x44
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_length7_;  // length7
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_out4_;  // out4
  SEXP Rsh_Fir_reg_out5_;  // out5
  SEXP Rsh_Fir_reg_strwrap3_;  // strwrap3
  SEXP Rsh_Fir_reg_msg6_;  // msg6
  SEXP Rsh_Fir_reg_msg7_;  // msg7
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg__pretty_format3_;  // _pretty_format3
  SEXP Rsh_Fir_reg_x45_;  // x45
  SEXP Rsh_Fir_reg_x46_;  // x46
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_x48_;  // x48
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_x49_;  // x49
  SEXP Rsh_Fir_reg_x50_;  // x50
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_x52_;  // x52
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_length8_;  // length8
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_ngettext4_;  // ngettext4
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_x53_;  // x53
  SEXP Rsh_Fir_reg_x54_;  // x54
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_x56_;  // x56
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_length9_;  // length9
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_out6_;  // out6
  SEXP Rsh_Fir_reg_out7_;  // out7
  SEXP Rsh_Fir_reg_strwrap4_;  // strwrap4
  SEXP Rsh_Fir_reg_msg8_;  // msg8
  SEXP Rsh_Fir_reg_msg9_;  // msg9
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg__pretty_format4_;  // _pretty_format4
  SEXP Rsh_Fir_reg_x57_;  // x57
  SEXP Rsh_Fir_reg_x58_;  // x58
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_x60_;  // x60
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_x61_;  // x61
  SEXP Rsh_Fir_reg_x62_;  // x62
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_x64_;  // x64
  SEXP Rsh_Fir_reg_dr30_;  // dr30
  SEXP Rsh_Fir_reg_dc15_;  // dc15
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_length10_;  // length10
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_ngettext5_;  // ngettext5
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_x65_;  // x65
  SEXP Rsh_Fir_reg_x66_;  // x66
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_x68_;  // x68
  SEXP Rsh_Fir_reg_dr32_;  // dr32
  SEXP Rsh_Fir_reg_dc16_;  // dc16
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_length11_;  // length11
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg_out8_;  // out8
  SEXP Rsh_Fir_reg_out9_;  // out9
  SEXP Rsh_Fir_reg_strwrap5_;  // strwrap5
  SEXP Rsh_Fir_reg_msg10_;  // msg10
  SEXP Rsh_Fir_reg_msg11_;  // msg11
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg__pretty_format5_;  // _pretty_format5
  SEXP Rsh_Fir_reg_x69_;  // x69
  SEXP Rsh_Fir_reg_x70_;  // x70
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_x72_;  // x72
  SEXP Rsh_Fir_reg_dr34_;  // dr34
  SEXP Rsh_Fir_reg_dc17_;  // dc17
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_r110_;  // r110
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_r112_;  // r112
  SEXP Rsh_Fir_reg_strwrap6_;  // strwrap6
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_r113_;  // r113
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_r115_;  // r115
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_r116_;  // r116
  SEXP Rsh_Fir_reg_out10_;  // out10
  SEXP Rsh_Fir_reg_out11_;  // out11

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L0_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c1 then L32() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L32()
    goto L32_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L43() else D9()
  // L43()
  goto L43_;

L2_:;
  // goto L3(r11)
  // L3(r11)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r11_;
  goto L3_;

L3_:;
  // st out = r18
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard3 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L4_:;
  // c6 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c6 then L53() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L53()
    goto L53_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L7()
  // L7()
  goto L7_;

L6_:;
  // st out = r31
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard6 then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L8_:;
  // c11 = `as.logical`(r40)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c11 then L73() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L73()
    goto L73_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // goto L11()
  // L11()
  goto L11_;

L10_:;
  // st out = r50
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // sym9 = ldf length
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base9 = ldf length in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard9 then L85() else L86()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L85()
    goto L85_;
  } else {
  // L86()
    goto L86_;
  }

L12_:;
  // c16 = `as.logical`(r59)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c16 then L93() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L93()
    goto L93_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // goto L15()
  // L15()
  goto L15_;

L14_:;
  // st out = r69
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r69_, RHO);
  (void)(Rsh_Fir_reg_r69_);
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // sym12 = ldf length
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base12 = ldf length in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard12 then L105() else L106()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L105()
    goto L105_;
  } else {
  // L106()
    goto L106_;
  }

L16_:;
  // c21 = `as.logical`(r78)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c21 then L113() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L113()
    goto L113_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // goto L19()
  // L19()
  goto L19_;

L18_:;
  // st out = r88
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r88_, RHO);
  (void)(Rsh_Fir_reg_r88_);
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // sym15 = ldf length
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base15 = ldf length in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard15 then L125() else L126()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L125()
    goto L125_;
  } else {
  // L126()
    goto L126_;
  }

L20_:;
  // c26 = `as.logical`(r97)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c26 then L133() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L133()
    goto L133_;
  } else {
  // L21()
    goto L21_;
  }

L21_:;
  // goto L23()
  // L23()
  goto L23_;

L22_:;
  // st out = r107
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r107_, RHO);
  (void)(Rsh_Fir_reg_r107_);
  // goto L23()
  // L23()
  goto L23_;

L23_:;
  // out10 = ld out
  Rsh_Fir_reg_out10_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L147() else D63()
  // L147()
  goto L147_;

L24_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L26() else D0()
  // L26()
  goto L26_;

L25_:;
  // r = dyn base(<lang `$`(x, bad_closures)>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L26_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c then L28() else L29(x2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L28()
    goto L28_;
  } else {
  // L29(x2)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_x2_;
    goto L29_;
  }

L27_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r3 = dyn length(dx1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L31() else D1()
  // L31()
  goto L31_;

L28_:;
  // dr = tryDispatchBuiltin.1("$", x2)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if dc then L30() else L29(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L30()
    goto L30_;
  } else {
  // L29(dr)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_dr;
    goto L29_;
  }

L29_:;
  // r2 = `$`(x4, <sym bad_closures>)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L27(r2)
  // L27(r2)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r2_;
  goto L27_;

L30_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L27(dx)
  // L27(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L27_;

D1_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r3_;
  goto L0_;

L32_:;
  // ngettext = ldf ngettext
  Rsh_Fir_reg_ngettext = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L33() else D2()
  // L33()
  goto L33_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // p = prom<V +>{
  //   sym1 = ldf length;
  //   base1 = ldf length in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r5):
  //   return r5;
  // L1():
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   c2 = `is.object`(x6);
  //   if c2 then L4() else L5(x6);
  // L2():
  //   r4 = dyn base1(<lang `$`(x, bad_closures)>);
  //   goto L0(r4);
  // L3(dx3):
  //   length1 = ldf length in base;
  //   r7 = dyn length1(dx3);
  //   goto L0(r7);
  // L4():
  //   dr2 = tryDispatchBuiltin.1("$", x6);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L6() else L5(dr2);
  // L5(x8):
  //   r6 = `$`(x8, <sym bad_closures>);
  //   goto L3(r6);
  // L6():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L3(dx2);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_, CCP, RHO);
  // r9 = dyn ngettext(p, "Found an obsolete/platform-specific call in the following function:", "Found an obsolete/platform-specific call in the following functions:")
  SEXP Rsh_Fir_array_args29[3];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args29[2] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ngettext, 3, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L34() else D3()
  // L34()
  goto L34_;

D3_:;
  // deopt 12 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L34_:;
  // st msg = r9
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard2 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L35_:;
  // strwrap = ldf strwrap
  Rsh_Fir_reg_strwrap = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L37() else D4()
  // L37()
  goto L37_;

L36_:;
  // r10 = dyn base2(<lang strwrap(msg)>, <lang .pretty_format(`$`(x, bad_closures))>)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r10)
  // L2(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L2_;

D4_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L37_:;
  // p1 = prom<V +>{
  //   msg = ld msg;
  //   msg1 = force? msg;
  //   checkMissing(msg1);
  //   return msg1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_1, CCP, RHO);
  // r13 = dyn strwrap(p1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strwrap, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L38() else D5()
  // L38()
  goto L38_;

D5_:;
  // deopt 19 [r13]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L38_:;
  // _pretty_format = ldf `.pretty_format`
  Rsh_Fir_reg__pretty_format = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L39() else D6()
  // L39()
  goto L39_;

D6_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // p2 = prom<V +>{
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   c3 = `is.object`(x10);
  //   if c3 then L1() else L2(x10);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("$", x10);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(x12):
  //   r14 = `$`(x12, <sym bad_closures>);
  //   goto L0(r14);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_2, CCP, RHO);
  // r16 = dyn _pretty_format(p2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__pretty_format, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L40() else D7()
  // L40()
  goto L40_;

D7_:;
  // deopt 23 [r16]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L40_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r17 = dyn c4(r13, r16)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L41() else D8()
  // L41()
  goto L41_;

D8_:;
  // deopt 25 [r17]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L41_:;
  // goto L2(r17)
  // L2(r17)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r17_;
  goto L2_;

D9_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L43_:;
  // r19 = dyn character()
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L44() else D10()
  // L44()
  goto L44_;

D10_:;
  // deopt 28 [r19]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L3(r19)
  // L3(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L3_;

L45_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L47() else D11()
  // L47()
  goto L47_;

L46_:;
  // r20 = dyn base3(<lang `$`(x, bad_S4methods)>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L4(r20)
  // L4(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L4_;

D11_:;
  // deopt 32 [x13]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L47_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(x14)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c5 then L49() else L50(x14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L49()
    goto L49_;
  } else {
  // L50(x14)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_x14_;
    goto L50_;
  }

L48_:;
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r23 = dyn length2(dx7)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L52() else D12()
  // L52()
  goto L52_;

L49_:;
  // dr6 = tryDispatchBuiltin.1("$", x14)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args46);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if dc3 then L51() else L50(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L51()
    goto L51_;
  } else {
  // L50(dr6)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_dr6_;
    goto L50_;
  }

L50_:;
  // r22 = `$`(x16, <sym bad_S4methods>)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L48(r22)
  // L48(r22)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r22_;
  goto L48_;

L51_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L48(dx6)
  // L48(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L48_;

D12_:;
  // deopt 36 [r23]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L52_:;
  // goto L4(r23)
  // L4(r23)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r23_;
  goto L4_;

L53_:;
  // ngettext1 = ldf ngettext
  Rsh_Fir_reg_ngettext1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L54() else D13()
  // L54()
  goto L54_;

D13_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // p3 = prom<V +>{
  //   sym4 = ldf length;
  //   base4 = ldf length in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r25):
  //   return r25;
  // L1():
  //   x17 = ld x;
  //   x18 = force? x17;
  //   checkMissing(x18);
  //   c7 = `is.object`(x18);
  //   if c7 then L4() else L5(x18);
  // L2():
  //   r24 = dyn base4(<lang `$`(x, bad_S4methods)>);
  //   goto L0(r24);
  // L3(dx9):
  //   length3 = ldf length in base;
  //   r27 = dyn length3(dx9);
  //   goto L0(r27);
  // L4():
  //   dr8 = tryDispatchBuiltin.1("$", x18);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L6() else L5(dr8);
  // L5(x20):
  //   r26 = `$`(x20, <sym bad_S4methods>);
  //   goto L3(r26);
  // L6():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L3(dx8);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_3, CCP, RHO);
  // r29 = dyn ngettext1(p3, "Found an obsolete/platform-specific call in methods for the following S4 generic:", "Found an obsolete/platform-specific call in methods for the following S4 generics:")
  SEXP Rsh_Fir_array_args59[3];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args59[2] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ngettext1_, 3, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L55() else D14()
  // L55()
  goto L55_;

D14_:;
  // deopt 42 [r29]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L55_:;
  // st msg = r29
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard5 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L56_:;
  // out = ld out
  Rsh_Fir_reg_out = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L58() else D15()
  // L58()
  goto L58_;

L57_:;
  // r30 = dyn base5(<sym out>, <lang strwrap(msg)>, <lang .pretty_format(`$`(x, bad_S4methods))>)
  SEXP Rsh_Fir_array_args61[3];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args61[2] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 3, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L6(r30)
  // L6(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L6_;

D15_:;
  // deopt 46 [out]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_out;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L58_:;
  // out1 = force? out
  Rsh_Fir_reg_out1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_out);
  // checkMissing(out1)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_out1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // strwrap1 = ldf strwrap
  Rsh_Fir_reg_strwrap1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L59() else D16()
  // L59()
  goto L59_;

D16_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

L59_:;
  // p4 = prom<V +>{
  //   msg2 = ld msg;
  //   msg3 = force? msg2;
  //   checkMissing(msg3);
  //   return msg3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_4, CCP, RHO);
  // r33 = dyn strwrap1(p4)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strwrap1_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L60() else D17()
  // L60()
  goto L60_;

D17_:;
  // deopt 51 [r33]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L60_:;
  // _pretty_format1 = ldf `.pretty_format`
  Rsh_Fir_reg__pretty_format1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L61() else D18()
  // L61()
  goto L61_;

D18_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L61_:;
  // p5 = prom<V +>{
  //   x21 = ld x;
  //   x22 = force? x21;
  //   checkMissing(x22);
  //   c8 = `is.object`(x22);
  //   if c8 then L1() else L2(x22);
  // L0(dx11):
  //   return dx11;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("$", x22);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(x24):
  //   r34 = `$`(x24, <sym bad_S4methods>);
  //   goto L0(r34);
  // L3():
  //   dx10 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx10);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_5, CCP, RHO);
  // r36 = dyn _pretty_format1(p5)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__pretty_format1_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L62() else D19()
  // L62()
  goto L62_;

D19_:;
  // deopt 55 [r36]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L62_:;
  // c9 = ldf c in base
  Rsh_Fir_reg_c9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r37 = dyn c9(out1, r33, r36)
  SEXP Rsh_Fir_array_args72[3];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_out1_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args72[2] = Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c9_, 3, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L63() else D20()
  // L63()
  goto L63_;

D20_:;
  // deopt 57 [r37]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L63_:;
  // goto L6(r37)
  // L6(r37)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r37_;
  goto L6_;

L65_:;
  // x25 = ld x
  Rsh_Fir_reg_x25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L67() else D21()
  // L67()
  goto L67_;

L66_:;
  // r39 = dyn base6(<lang `$`(x, bad_refs)>)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L8(r39)
  // L8(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L8_;

D21_:;
  // deopt 63 [x25]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_x25_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L67_:;
  // x26 = force? x25
  Rsh_Fir_reg_x26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x25_);
  // checkMissing(x26)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_x26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(x26)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if c10 then L69() else L70(x26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L69()
    goto L69_;
  } else {
  // L70(x26)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_x26_;
    goto L70_;
  }

L68_:;
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r42 = dyn length4(dx13)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L72() else D22()
  // L72()
  goto L72_;

L69_:;
  // dr12 = tryDispatchBuiltin.1("$", x26)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args77);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if dc6 then L71() else L70(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L71()
    goto L71_;
  } else {
  // L70(dr12)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_dr12_;
    goto L70_;
  }

L70_:;
  // r41 = `$`(x28, <sym bad_refs>)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // goto L68(r41)
  // L68(r41)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r41_;
  goto L68_;

L71_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L68(dx12)
  // L68(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L68_;

D22_:;
  // deopt 67 [r42]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L8(r42)
  // L8(r42)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r42_;
  goto L8_;

L73_:;
  // ngettext2 = ldf ngettext
  Rsh_Fir_reg_ngettext2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L74() else D23()
  // L74()
  goto L74_;

D23_:;
  // deopt 69 []
  Rsh_Fir_deopt(69, 0, NULL, CCP, RHO);
  return R_NilValue;

L74_:;
  // p6 = prom<V +>{
  //   sym7 = ldf length;
  //   base7 = ldf length in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r44):
  //   return r44;
  // L1():
  //   x29 = ld x;
  //   x30 = force? x29;
  //   checkMissing(x30);
  //   c12 = `is.object`(x30);
  //   if c12 then L4() else L5(x30);
  // L2():
  //   r43 = dyn base7(<lang `$`(x, bad_refs)>);
  //   goto L0(r43);
  // L3(dx15):
  //   length5 = ldf length in base;
  //   r46 = dyn length5(dx15);
  //   goto L0(r46);
  // L4():
  //   dr14 = tryDispatchBuiltin.1("$", x30);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L6() else L5(dr14);
  // L5(x32):
  //   r45 = `$`(x32, <sym bad_refs>);
  //   goto L3(r45);
  // L6():
  //   dx14 = getTryDispatchBuiltinValue(dr14);
  //   goto L3(dx14);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_6, CCP, RHO);
  // r48 = dyn ngettext2(p6, "Found an obsolete/platform-specific call in methods for the following reference class:", "Found an obsolete/platform-specific call in methods for the following reference classes:")
  SEXP Rsh_Fir_array_args90[3];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args90[2] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ngettext2_, 3, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L75() else D24()
  // L75()
  goto L75_;

D24_:;
  // deopt 73 [r48]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L75_:;
  // st msg = r48
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r48_, RHO);
  (void)(Rsh_Fir_reg_r48_);
  // sym8 = ldf c
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base8 = ldf c in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args91);
  // if guard8 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L76_:;
  // out2 = ld out
  Rsh_Fir_reg_out2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L78() else D25()
  // L78()
  goto L78_;

L77_:;
  // r49 = dyn base8(<sym out>, <lang strwrap(msg)>, <lang .pretty_format(`$`(x, bad_refs))>)
  SEXP Rsh_Fir_array_args92[3];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args92[2] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 3, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L10(r49)
  // L10(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L10_;

D25_:;
  // deopt 77 [out2]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_out2_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L78_:;
  // out3 = force? out2
  Rsh_Fir_reg_out3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_out2_);
  // checkMissing(out3)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_out3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // strwrap2 = ldf strwrap
  Rsh_Fir_reg_strwrap2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L79() else D26()
  // L79()
  goto L79_;

D26_:;
  // deopt 80 []
  Rsh_Fir_deopt(80, 0, NULL, CCP, RHO);
  return R_NilValue;

L79_:;
  // p7 = prom<V +>{
  //   msg4 = ld msg;
  //   msg5 = force? msg4;
  //   checkMissing(msg5);
  //   return msg5;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_7, CCP, RHO);
  // r52 = dyn strwrap2(p7)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strwrap2_, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L80() else D27()
  // L80()
  goto L80_;

D27_:;
  // deopt 82 [r52]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L80_:;
  // _pretty_format2 = ldf `.pretty_format`
  Rsh_Fir_reg__pretty_format2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L81() else D28()
  // L81()
  goto L81_;

D28_:;
  // deopt 84 []
  Rsh_Fir_deopt(84, 0, NULL, CCP, RHO);
  return R_NilValue;

L81_:;
  // p8 = prom<V +>{
  //   x33 = ld x;
  //   x34 = force? x33;
  //   checkMissing(x34);
  //   c13 = `is.object`(x34);
  //   if c13 then L1() else L2(x34);
  // L0(dx17):
  //   return dx17;
  // L1():
  //   dr16 = tryDispatchBuiltin.1("$", x34);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L3() else L2(dr16);
  // L2(x36):
  //   r53 = `$`(x36, <sym bad_refs>);
  //   goto L0(r53);
  // L3():
  //   dx16 = getTryDispatchBuiltinValue(dr16);
  //   goto L0(dx16);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_8, CCP, RHO);
  // r55 = dyn _pretty_format2(p8)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__pretty_format2_, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L82() else D29()
  // L82()
  goto L82_;

D29_:;
  // deopt 86 [r55]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L82_:;
  // c14 = ldf c in base
  Rsh_Fir_reg_c14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r56 = dyn c14(out3, r52, r55)
  SEXP Rsh_Fir_array_args103[3];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_out3_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_args103[2] = Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c14_, 3, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L83() else D30()
  // L83()
  goto L83_;

D30_:;
  // deopt 88 [r56]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L83_:;
  // goto L10(r56)
  // L10(r56)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r56_;
  goto L10_;

L85_:;
  // x37 = ld x
  Rsh_Fir_reg_x37_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L87() else D31()
  // L87()
  goto L87_;

L86_:;
  // r58 = dyn base9(<lang `$`(x, deprecated)>)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L12(r58)
  // L12(r58)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r58_;
  goto L12_;

D31_:;
  // deopt 94 [x37]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_x37_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L87_:;
  // x38 = force? x37
  Rsh_Fir_reg_x38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x37_);
  // checkMissing(x38)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_x38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(x38)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_x38_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if c15 then L89() else L90(x38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L89()
    goto L89_;
  } else {
  // L90(x38)
    Rsh_Fir_reg_x40_ = Rsh_Fir_reg_x38_;
    goto L90_;
  }

L88_:;
  // length6 = ldf length in base
  Rsh_Fir_reg_length6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r61 = dyn length6(dx19)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length6_, 1, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L92() else D32()
  // L92()
  goto L92_;

L89_:;
  // dr18 = tryDispatchBuiltin.1("$", x38)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_x38_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args108);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // if dc9 then L91() else L90(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L91()
    goto L91_;
  } else {
  // L90(dr18)
    Rsh_Fir_reg_x40_ = Rsh_Fir_reg_dr18_;
    goto L90_;
  }

L90_:;
  // r60 = `$`(x40, <sym deprecated>)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_x40_;
  Rsh_Fir_array_args110[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // goto L88(r60)
  // L88(r60)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r60_;
  goto L88_;

L91_:;
  // dx18 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // goto L88(dx18)
  // L88(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L88_;

D32_:;
  // deopt 98 [r61]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L92_:;
  // goto L12(r61)
  // L12(r61)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r61_;
  goto L12_;

L93_:;
  // ngettext3 = ldf ngettext
  Rsh_Fir_reg_ngettext3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L94() else D33()
  // L94()
  goto L94_;

D33_:;
  // deopt 100 []
  Rsh_Fir_deopt(100, 0, NULL, CCP, RHO);
  return R_NilValue;

L94_:;
  // p9 = prom<V +>{
  //   sym10 = ldf length;
  //   base10 = ldf length in base;
  //   guard10 = `==`.4(sym10, base10);
  //   if guard10 then L1() else L2();
  // L0(r63):
  //   return r63;
  // L1():
  //   x41 = ld x;
  //   x42 = force? x41;
  //   checkMissing(x42);
  //   c17 = `is.object`(x42);
  //   if c17 then L4() else L5(x42);
  // L2():
  //   r62 = dyn base10(<lang `$`(x, deprecated)>);
  //   goto L0(r62);
  // L3(dx21):
  //   length7 = ldf length in base;
  //   r65 = dyn length7(dx21);
  //   goto L0(r65);
  // L4():
  //   dr20 = tryDispatchBuiltin.1("$", x42);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L6() else L5(dr20);
  // L5(x44):
  //   r64 = `$`(x44, <sym deprecated>);
  //   goto L3(r64);
  // L6():
  //   dx20 = getTryDispatchBuiltinValue(dr20);
  //   goto L3(dx20);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_9, CCP, RHO);
  // r67 = dyn ngettext3(p9, "Found the deprecated function:", "Found the deprecated functions:")
  SEXP Rsh_Fir_array_args121[3];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args121[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args121[2] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ngettext3_, 3, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L95() else D34()
  // L95()
  goto L95_;

D34_:;
  // deopt 104 [r67]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L95_:;
  // st msg = r67
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r67_, RHO);
  (void)(Rsh_Fir_reg_r67_);
  // sym11 = ldf c
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base11 = ldf c in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args122);
  // if guard11 then L96() else L97()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L96()
    goto L96_;
  } else {
  // L97()
    goto L97_;
  }

L96_:;
  // out4 = ld out
  Rsh_Fir_reg_out4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L98() else D35()
  // L98()
  goto L98_;

L97_:;
  // r68 = dyn base11(<sym out>, <lang strwrap(msg)>, <lang .pretty_format(`$`(x, deprecated))>)
  SEXP Rsh_Fir_array_args123[3];
  Rsh_Fir_array_args123[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args123[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args123[2] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 3, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L14(r68)
  // L14(r68)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r68_;
  goto L14_;

D35_:;
  // deopt 108 [out4]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_out4_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L98_:;
  // out5 = force? out4
  Rsh_Fir_reg_out5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_out4_);
  // checkMissing(out5)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_out5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // strwrap3 = ldf strwrap
  Rsh_Fir_reg_strwrap3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L99() else D36()
  // L99()
  goto L99_;

D36_:;
  // deopt 111 []
  Rsh_Fir_deopt(111, 0, NULL, CCP, RHO);
  return R_NilValue;

L99_:;
  // p10 = prom<V +>{
  //   msg6 = ld msg;
  //   msg7 = force? msg6;
  //   checkMissing(msg7);
  //   return msg7;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_10, CCP, RHO);
  // r71 = dyn strwrap3(p10)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strwrap3_, 1, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L100() else D37()
  // L100()
  goto L100_;

D37_:;
  // deopt 113 [r71]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L100_:;
  // _pretty_format3 = ldf `.pretty_format`
  Rsh_Fir_reg__pretty_format3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L101() else D38()
  // L101()
  goto L101_;

D38_:;
  // deopt 115 []
  Rsh_Fir_deopt(115, 0, NULL, CCP, RHO);
  return R_NilValue;

L101_:;
  // p11 = prom<V +>{
  //   x45 = ld x;
  //   x46 = force? x45;
  //   checkMissing(x46);
  //   c18 = `is.object`(x46);
  //   if c18 then L1() else L2(x46);
  // L0(dx23):
  //   return dx23;
  // L1():
  //   dr22 = tryDispatchBuiltin.1("$", x46);
  //   dc11 = getTryDispatchBuiltinDispatched(dr22);
  //   if dc11 then L3() else L2(dr22);
  // L2(x48):
  //   r72 = `$`(x48, <sym deprecated>);
  //   goto L0(r72);
  // L3():
  //   dx22 = getTryDispatchBuiltinValue(dr22);
  //   goto L0(dx22);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_11, CCP, RHO);
  // r74 = dyn _pretty_format3(p11)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__pretty_format3_, 1, Rsh_Fir_array_args133, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L102() else D39()
  // L102()
  goto L102_;

D39_:;
  // deopt 117 [r74]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L102_:;
  // c19 = ldf c in base
  Rsh_Fir_reg_c19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r75 = dyn c19(out5, r71, r74)
  SEXP Rsh_Fir_array_args134[3];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_out5_;
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_r71_;
  Rsh_Fir_array_args134[2] = Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c19_, 3, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L103() else D40()
  // L103()
  goto L103_;

D40_:;
  // deopt 119 [r75]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L103_:;
  // goto L14(r75)
  // L14(r75)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r75_;
  goto L14_;

L105_:;
  // x49 = ld x
  Rsh_Fir_reg_x49_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L107() else D41()
  // L107()
  goto L107_;

L106_:;
  // r77 = dyn base12(<lang `$`(x, defunct)>)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L16(r77)
  // L16(r77)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r77_;
  goto L16_;

D41_:;
  // deopt 125 [x49]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_x49_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L107_:;
  // x50 = force? x49
  Rsh_Fir_reg_x50_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x49_);
  // checkMissing(x50)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_x50_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(x50)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_x50_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // if c20 then L109() else L110(x50)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L109()
    goto L109_;
  } else {
  // L110(x50)
    Rsh_Fir_reg_x52_ = Rsh_Fir_reg_x50_;
    goto L110_;
  }

L108_:;
  // length8 = ldf length in base
  Rsh_Fir_reg_length8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r80 = dyn length8(dx25)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_dx25_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length8_, 1, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L112() else D42()
  // L112()
  goto L112_;

L109_:;
  // dr24 = tryDispatchBuiltin.1("$", x50)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args139[1] = Rsh_Fir_reg_x50_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args139);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // if dc12 then L111() else L110(dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L111()
    goto L111_;
  } else {
  // L110(dr24)
    Rsh_Fir_reg_x52_ = Rsh_Fir_reg_dr24_;
    goto L110_;
  }

L110_:;
  // r79 = `$`(x52, <sym defunct>)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_x52_;
  Rsh_Fir_array_args141[1] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // goto L108(r79)
  // L108(r79)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r79_;
  goto L108_;

L111_:;
  // dx24 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // goto L108(dx24)
  // L108(dx24)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L108_;

D42_:;
  // deopt 129 [r80]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(129, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L112_:;
  // goto L16(r80)
  // L16(r80)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r80_;
  goto L16_;

L113_:;
  // ngettext4 = ldf ngettext
  Rsh_Fir_reg_ngettext4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L114() else D43()
  // L114()
  goto L114_;

D43_:;
  // deopt 131 []
  Rsh_Fir_deopt(131, 0, NULL, CCP, RHO);
  return R_NilValue;

L114_:;
  // p12 = prom<V +>{
  //   sym13 = ldf length;
  //   base13 = ldf length in base;
  //   guard13 = `==`.4(sym13, base13);
  //   if guard13 then L1() else L2();
  // L0(r82):
  //   return r82;
  // L1():
  //   x53 = ld x;
  //   x54 = force? x53;
  //   checkMissing(x54);
  //   c22 = `is.object`(x54);
  //   if c22 then L4() else L5(x54);
  // L2():
  //   r81 = dyn base13(<lang `$`(x, defunct)>);
  //   goto L0(r81);
  // L3(dx27):
  //   length9 = ldf length in base;
  //   r84 = dyn length9(dx27);
  //   goto L0(r84);
  // L4():
  //   dr26 = tryDispatchBuiltin.1("$", x54);
  //   dc13 = getTryDispatchBuiltinDispatched(dr26);
  //   if dc13 then L6() else L5(dr26);
  // L5(x56):
  //   r83 = `$`(x56, <sym defunct>);
  //   goto L3(r83);
  // L6():
  //   dx26 = getTryDispatchBuiltinValue(dr26);
  //   goto L3(dx26);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_12, CCP, RHO);
  // r86 = dyn ngettext4(p12, "Found the defunct/removed function:", "Found the defunct/removed functions:")
  SEXP Rsh_Fir_array_args152[3];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args152[1] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args152[2] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names40[3];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_array_arg_names40[2] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ngettext4_, 3, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L115() else D44()
  // L115()
  goto L115_;

D44_:;
  // deopt 135 [r86]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(135, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L115_:;
  // st msg = r86
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r86_, RHO);
  (void)(Rsh_Fir_reg_r86_);
  // sym14 = ldf c
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base14 = ldf c in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args153[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args153);
  // if guard14 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

L116_:;
  // out6 = ld out
  Rsh_Fir_reg_out6_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L118() else D45()
  // L118()
  goto L118_;

L117_:;
  // r87 = dyn base14(<sym out>, <lang strwrap(msg)>, <lang .pretty_format(`$`(x, defunct))>)
  SEXP Rsh_Fir_array_args154[3];
  Rsh_Fir_array_args154[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args154[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args154[2] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names41[3];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_array_arg_names41[2] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 3, Rsh_Fir_array_args154, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L18(r87)
  // L18(r87)
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r87_;
  goto L18_;

D45_:;
  // deopt 139 [out6]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_out6_;
  Rsh_Fir_deopt(139, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L118_:;
  // out7 = force? out6
  Rsh_Fir_reg_out7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_out6_);
  // checkMissing(out7)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_out7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty()));
  // strwrap4 = ldf strwrap
  Rsh_Fir_reg_strwrap4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L119() else D46()
  // L119()
  goto L119_;

D46_:;
  // deopt 142 []
  Rsh_Fir_deopt(142, 0, NULL, CCP, RHO);
  return R_NilValue;

L119_:;
  // p13 = prom<V +>{
  //   msg8 = ld msg;
  //   msg9 = force? msg8;
  //   checkMissing(msg9);
  //   return msg9;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_13, CCP, RHO);
  // r90 = dyn strwrap4(p13)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strwrap4_, 1, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L120() else D47()
  // L120()
  goto L120_;

D47_:;
  // deopt 144 [r90]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_deopt(144, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L120_:;
  // _pretty_format4 = ldf `.pretty_format`
  Rsh_Fir_reg__pretty_format4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L121() else D48()
  // L121()
  goto L121_;

D48_:;
  // deopt 146 []
  Rsh_Fir_deopt(146, 0, NULL, CCP, RHO);
  return R_NilValue;

L121_:;
  // p14 = prom<V +>{
  //   x57 = ld x;
  //   x58 = force? x57;
  //   checkMissing(x58);
  //   c23 = `is.object`(x58);
  //   if c23 then L1() else L2(x58);
  // L0(dx29):
  //   return dx29;
  // L1():
  //   dr28 = tryDispatchBuiltin.1("$", x58);
  //   dc14 = getTryDispatchBuiltinDispatched(dr28);
  //   if dc14 then L3() else L2(dr28);
  // L2(x60):
  //   r91 = `$`(x60, <sym defunct>);
  //   goto L0(r91);
  // L3():
  //   dx28 = getTryDispatchBuiltinValue(dr28);
  //   goto L0(dx28);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_14, CCP, RHO);
  // r93 = dyn _pretty_format4(p14)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__pretty_format4_, 1, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L122() else D49()
  // L122()
  goto L122_;

D49_:;
  // deopt 148 [r93]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_deopt(148, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L122_:;
  // c24 = ldf c in base
  Rsh_Fir_reg_c24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r94 = dyn c24(out7, r90, r93)
  SEXP Rsh_Fir_array_args165[3];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_out7_;
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_r90_;
  Rsh_Fir_array_args165[2] = Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_array_arg_names44[3];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_array_arg_names44[2] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c24_, 3, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L123() else D50()
  // L123()
  goto L123_;

D50_:;
  // deopt 150 [r94]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_deopt(150, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L123_:;
  // goto L18(r94)
  // L18(r94)
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r94_;
  goto L18_;

L125_:;
  // x61 = ld x
  Rsh_Fir_reg_x61_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L127() else D51()
  // L127()
  goto L127_;

L126_:;
  // r96 = dyn base15(<lang `$`(x, devices)>)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args166, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L20(r96)
  // L20(r96)
  Rsh_Fir_reg_r97_ = Rsh_Fir_reg_r96_;
  goto L20_;

D51_:;
  // deopt 156 [x61]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_x61_;
  Rsh_Fir_deopt(156, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L127_:;
  // x62 = force? x61
  Rsh_Fir_reg_x62_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x61_);
  // checkMissing(x62)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_x62_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(x62)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_x62_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty());
  // if c25 then L129() else L130(x62)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L129()
    goto L129_;
  } else {
  // L130(x62)
    Rsh_Fir_reg_x64_ = Rsh_Fir_reg_x62_;
    goto L130_;
  }

L128_:;
  // length10 = ldf length in base
  Rsh_Fir_reg_length10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r99 = dyn length10(dx31)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_dx31_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length10_, 1, Rsh_Fir_array_args169, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L132() else D52()
  // L132()
  goto L132_;

L129_:;
  // dr30 = tryDispatchBuiltin.1("$", x62)
  SEXP Rsh_Fir_array_args170[2];
  Rsh_Fir_array_args170[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args170[1] = Rsh_Fir_reg_x62_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args170);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty());
  // if dc15 then L131() else L130(dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L131()
    goto L131_;
  } else {
  // L130(dr30)
    Rsh_Fir_reg_x64_ = Rsh_Fir_reg_dr30_;
    goto L130_;
  }

L130_:;
  // r98 = `$`(x64, <sym devices>)
  SEXP Rsh_Fir_array_args172[2];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_x64_;
  Rsh_Fir_array_args172[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty());
  // goto L128(r98)
  // L128(r98)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r98_;
  goto L128_;

L131_:;
  // dx30 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // goto L128(dx30)
  // L128(dx30)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L128_;

D52_:;
  // deopt 160 [r99]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r99_;
  Rsh_Fir_deopt(160, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L132_:;
  // goto L20(r99)
  // L20(r99)
  Rsh_Fir_reg_r97_ = Rsh_Fir_reg_r99_;
  goto L20_;

L133_:;
  // ngettext5 = ldf ngettext
  Rsh_Fir_reg_ngettext5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L134() else D53()
  // L134()
  goto L134_;

D53_:;
  // deopt 162 []
  Rsh_Fir_deopt(162, 0, NULL, CCP, RHO);
  return R_NilValue;

L134_:;
  // p15 = prom<V +>{
  //   sym16 = ldf length;
  //   base16 = ldf length in base;
  //   guard16 = `==`.4(sym16, base16);
  //   if guard16 then L1() else L2();
  // L0(r101):
  //   return r101;
  // L1():
  //   x65 = ld x;
  //   x66 = force? x65;
  //   checkMissing(x66);
  //   c27 = `is.object`(x66);
  //   if c27 then L4() else L5(x66);
  // L2():
  //   r100 = dyn base16(<lang `$`(x, devices)>);
  //   goto L0(r100);
  // L3(dx33):
  //   length11 = ldf length in base;
  //   r103 = dyn length11(dx33);
  //   goto L0(r103);
  // L4():
  //   dr32 = tryDispatchBuiltin.1("$", x66);
  //   dc16 = getTryDispatchBuiltinDispatched(dr32);
  //   if dc16 then L6() else L5(dr32);
  // L5(x68):
  //   r102 = `$`(x68, <sym devices>);
  //   goto L3(r102);
  // L6():
  //   dx32 = getTryDispatchBuiltinValue(dr32);
  //   goto L3(dx32);
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_15, CCP, RHO);
  // r105 = dyn ngettext5(p15, "Found the platform-specific device:", "Found the platform-specific devices:")
  SEXP Rsh_Fir_array_args183[3];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args183[1] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args183[2] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names49[3];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_array_arg_names49[2] = R_MissingArg;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ngettext5_, 3, Rsh_Fir_array_args183, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L135() else D54()
  // L135()
  goto L135_;

D54_:;
  // deopt 166 [r105]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r105_;
  Rsh_Fir_deopt(166, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L135_:;
  // st msg = r105
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r105_, RHO);
  (void)(Rsh_Fir_reg_r105_);
  // sym17 = ldf c
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base17 = ldf c in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args184[2];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args184[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args184);
  // if guard17 then L136() else L137()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L136()
    goto L136_;
  } else {
  // L137()
    goto L137_;
  }

L136_:;
  // out8 = ld out
  Rsh_Fir_reg_out8_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L138() else D55()
  // L138()
  goto L138_;

L137_:;
  // r106 = dyn base17(<sym out>, <lang strwrap(msg)>, <lang .pretty_format(`$`(x, devices))>, <lang strwrap(paste("dev.new() is the preferred way to open a new device,", "in the unlikely event one is needed.", collapse=" "))>)
  SEXP Rsh_Fir_array_args185[4];
  Rsh_Fir_array_args185[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args185[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args185[2] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args185[3] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names50[4];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_array_arg_names50[2] = R_MissingArg;
  Rsh_Fir_array_arg_names50[3] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 4, Rsh_Fir_array_args185, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L22(r106)
  // L22(r106)
  Rsh_Fir_reg_r107_ = Rsh_Fir_reg_r106_;
  goto L22_;

D55_:;
  // deopt 170 [out8]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_out8_;
  Rsh_Fir_deopt(170, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L138_:;
  // out9 = force? out8
  Rsh_Fir_reg_out9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_out8_);
  // checkMissing(out9)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_out9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty()));
  // strwrap5 = ldf strwrap
  Rsh_Fir_reg_strwrap5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L139() else D56()
  // L139()
  goto L139_;

D56_:;
  // deopt 173 []
  Rsh_Fir_deopt(173, 0, NULL, CCP, RHO);
  return R_NilValue;

L139_:;
  // p16 = prom<V +>{
  //   msg10 = ld msg;
  //   msg11 = force? msg10;
  //   checkMissing(msg11);
  //   return msg11;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_16, CCP, RHO);
  // r109 = dyn strwrap5(p16)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strwrap5_, 1, Rsh_Fir_array_args188, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L140() else D57()
  // L140()
  goto L140_;

D57_:;
  // deopt 175 [r109]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r109_;
  Rsh_Fir_deopt(175, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L140_:;
  // _pretty_format5 = ldf `.pretty_format`
  Rsh_Fir_reg__pretty_format5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L141() else D58()
  // L141()
  goto L141_;

D58_:;
  // deopt 177 []
  Rsh_Fir_deopt(177, 0, NULL, CCP, RHO);
  return R_NilValue;

L141_:;
  // p17 = prom<V +>{
  //   x69 = ld x;
  //   x70 = force? x69;
  //   checkMissing(x70);
  //   c28 = `is.object`(x70);
  //   if c28 then L1() else L2(x70);
  // L0(dx35):
  //   return dx35;
  // L1():
  //   dr34 = tryDispatchBuiltin.1("$", x70);
  //   dc17 = getTryDispatchBuiltinDispatched(dr34);
  //   if dc17 then L3() else L2(dr34);
  // L2(x72):
  //   r110 = `$`(x72, <sym devices>);
  //   goto L0(r110);
  // L3():
  //   dx34 = getTryDispatchBuiltinValue(dr34);
  //   goto L0(dx34);
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_17, CCP, RHO);
  // r112 = dyn _pretty_format5(p17)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__pretty_format5_, 1, Rsh_Fir_array_args195, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L142() else D59()
  // L142()
  goto L142_;

D59_:;
  // deopt 179 [r112]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r112_;
  Rsh_Fir_deopt(179, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L142_:;
  // strwrap6 = ldf strwrap
  Rsh_Fir_reg_strwrap6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L143() else D60()
  // L143()
  goto L143_;

D60_:;
  // deopt 181 []
  Rsh_Fir_deopt(181, 0, NULL, CCP, RHO);
  return R_NilValue;

L143_:;
  // p18 = prom<V +>{
  //   paste = ldf paste;
  //   r113 = dyn paste[, , collapse]("dev.new() is the preferred way to open a new device,", "in the unlikely event one is needed.", " ");
  //   return r113;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_18, CCP, RHO);
  // r115 = dyn strwrap6(p18)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strwrap6_, 1, Rsh_Fir_array_args197, Rsh_Fir_array_arg_names54, CCP, RHO);
  // check L144() else D61()
  // L144()
  goto L144_;

D61_:;
  // deopt 183 [r115]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r115_;
  Rsh_Fir_deopt(183, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L144_:;
  // c29 = ldf c in base
  Rsh_Fir_reg_c29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r116 = dyn c29(out9, r109, r112, r115)
  SEXP Rsh_Fir_array_args198[4];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_out9_;
  Rsh_Fir_array_args198[1] = Rsh_Fir_reg_r109_;
  Rsh_Fir_array_args198[2] = Rsh_Fir_reg_r112_;
  Rsh_Fir_array_args198[3] = Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_array_arg_names55[4];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_array_arg_names55[2] = R_MissingArg;
  Rsh_Fir_array_arg_names55[3] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c29_, 4, Rsh_Fir_array_args198, Rsh_Fir_array_arg_names55, CCP, RHO);
  // check L145() else D62()
  // L145()
  goto L145_;

D62_:;
  // deopt 185 [r116]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r116_;
  Rsh_Fir_deopt(185, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L145_:;
  // goto L22(r116)
  // L22(r116)
  Rsh_Fir_reg_r107_ = Rsh_Fir_reg_r116_;
  goto L22_;

D63_:;
  // deopt 189 [out10]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_out10_;
  Rsh_Fir_deopt(189, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L147_:;
  // out11 = force? out10
  Rsh_Fir_reg_out11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_out10_);
  // checkMissing(out11)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_out11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args199, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return out11
  return Rsh_Fir_reg_out11_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_(SEXP CCP, SEXP RHO) {
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
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
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(x6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c2 then L4() else L5(x6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L4()
    goto L4_;
  } else {
  // L5(x6)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_x6_;
    goto L5_;
  }

L2_:;
  // r4 = dyn base1(<lang `$`(x, bad_closures)>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L0_;

L3_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r7 = dyn length1(dx3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r7_;
  goto L0_;

L4_:;
  // dr2 = tryDispatchBuiltin.1("$", x6)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args25);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if dc1 then L6() else L5(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr2)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_dr2_;
    goto L5_;
  }

L5_:;
  // r6 = `$`(x8, <sym bad_closures>)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r6_;
  goto L3_;

L6_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L3(dx2)
  // L3(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_1(SEXP CCP, SEXP RHO) {
  // msg = ld msg
  Rsh_Fir_reg_msg = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // msg1 = force? msg
  Rsh_Fir_reg_msg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg);
  // checkMissing(msg1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_msg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return msg1
  return Rsh_Fir_reg_msg1_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_2(SEXP CCP, SEXP RHO) {
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(x10)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c3 then L1() else L2(x10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x10)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("$", x10)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args36);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // r14 = `$`(x12, <sym bad_closures>)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r14_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_3(SEXP CCP, SEXP RHO) {
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r25
  return Rsh_Fir_reg_r25_;

L1_:;
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(x18)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if c7 then L4() else L5(x18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L4()
    goto L4_;
  } else {
  // L5(x18)
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_x18_;
    goto L5_;
  }

L2_:;
  // r24 = dyn base4(<lang `$`(x, bad_S4methods)>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L0_;

L3_:;
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r27 = dyn length3(dx9)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r27_;
  goto L0_;

L4_:;
  // dr8 = tryDispatchBuiltin.1("$", x18)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args55);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if dc4 then L6() else L5(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr8)
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_dr8_;
    goto L5_;
  }

L5_:;
  // r26 = `$`(x20, <sym bad_S4methods>)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // goto L3(r26)
  // L3(r26)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r26_;
  goto L3_;

L6_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L3(dx8)
  // L3(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_4(SEXP CCP, SEXP RHO) {
  // msg2 = ld msg
  Rsh_Fir_reg_msg2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // msg3 = force? msg2
  Rsh_Fir_reg_msg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg2_);
  // checkMissing(msg3)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_msg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // return msg3
  return Rsh_Fir_reg_msg3_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_5(SEXP CCP, SEXP RHO) {
  // x21 = ld x
  Rsh_Fir_reg_x21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x22 = force? x21
  Rsh_Fir_reg_x22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x21_);
  // checkMissing(x22)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_x22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(x22)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if c8 then L1() else L2(x22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x22)
    Rsh_Fir_reg_x24_ = Rsh_Fir_reg_x22_;
    goto L2_;
  }

L0_:;
  // return dx11
  return Rsh_Fir_reg_dx11_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("$", x22)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args67);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_x24_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // r34 = `$`(x24, <sym bad_S4methods>)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r34_;
  goto L0_;

L3_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // goto L0(dx10)
  // L0(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_6(SEXP CCP, SEXP RHO) {
  // sym7 = ldf length
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base7 = ldf length in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args81);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r44
  return Rsh_Fir_reg_r44_;

L1_:;
  // x29 = ld x
  Rsh_Fir_reg_x29_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x30 = force? x29
  Rsh_Fir_reg_x30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x29_);
  // checkMissing(x30)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_x30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(x30)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_x30_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if c12 then L4() else L5(x30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L4()
    goto L4_;
  } else {
  // L5(x30)
    Rsh_Fir_reg_x32_ = Rsh_Fir_reg_x30_;
    goto L5_;
  }

L2_:;
  // r43 = dyn base7(<lang `$`(x, bad_refs)>)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r43)
  // L0(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L0_;

L3_:;
  // length5 = ldf length in base
  Rsh_Fir_reg_length5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r46 = dyn length5(dx15)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length5_, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r46)
  // L0(r46)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r46_;
  goto L0_;

L4_:;
  // dr14 = tryDispatchBuiltin.1("$", x30)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_x30_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args86);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if dc7 then L6() else L5(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr14)
    Rsh_Fir_reg_x32_ = Rsh_Fir_reg_dr14_;
    goto L5_;
  }

L5_:;
  // r45 = `$`(x32, <sym bad_refs>)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_x32_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // goto L3(r45)
  // L3(r45)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r45_;
  goto L3_;

L6_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L3(dx14)
  // L3(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_7(SEXP CCP, SEXP RHO) {
  // msg4 = ld msg
  Rsh_Fir_reg_msg4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // msg5 = force? msg4
  Rsh_Fir_reg_msg5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg4_);
  // checkMissing(msg5)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_msg5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // return msg5
  return Rsh_Fir_reg_msg5_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_8(SEXP CCP, SEXP RHO) {
  // x33 = ld x
  Rsh_Fir_reg_x33_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x34 = force? x33
  Rsh_Fir_reg_x34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x33_);
  // checkMissing(x34)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_x34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(x34)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_x34_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if c13 then L1() else L2(x34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x34)
    Rsh_Fir_reg_x36_ = Rsh_Fir_reg_x34_;
    goto L2_;
  }

L0_:;
  // return dx17
  return Rsh_Fir_reg_dx17_;

L1_:;
  // dr16 = tryDispatchBuiltin.1("$", x34)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_x34_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args98);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if dc8 then L3() else L2(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr16)
    Rsh_Fir_reg_x36_ = Rsh_Fir_reg_dr16_;
    goto L2_;
  }

L2_:;
  // r53 = `$`(x36, <sym bad_refs>)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_x36_;
  Rsh_Fir_array_args100[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // goto L0(r53)
  // L0(r53)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r53_;
  goto L0_;

L3_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // goto L0(dx16)
  // L0(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_9(SEXP CCP, SEXP RHO) {
  // sym10 = ldf length
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base10 = ldf length in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args112);
  // if guard10 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r63
  return Rsh_Fir_reg_r63_;

L1_:;
  // x41 = ld x
  Rsh_Fir_reg_x41_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x42 = force? x41
  Rsh_Fir_reg_x42_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x41_);
  // checkMissing(x42)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_x42_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(x42)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_x42_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if c17 then L4() else L5(x42)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L4()
    goto L4_;
  } else {
  // L5(x42)
    Rsh_Fir_reg_x44_ = Rsh_Fir_reg_x42_;
    goto L5_;
  }

L2_:;
  // r62 = dyn base10(<lang `$`(x, deprecated)>)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L0(r62)
  // L0(r62)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r62_;
  goto L0_;

L3_:;
  // length7 = ldf length in base
  Rsh_Fir_reg_length7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r65 = dyn length7(dx21)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length7_, 1, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L0(r65)
  // L0(r65)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r65_;
  goto L0_;

L4_:;
  // dr20 = tryDispatchBuiltin.1("$", x42)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_x42_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args117);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // if dc10 then L6() else L5(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr20)
    Rsh_Fir_reg_x44_ = Rsh_Fir_reg_dr20_;
    goto L5_;
  }

L5_:;
  // r64 = `$`(x44, <sym deprecated>)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_x44_;
  Rsh_Fir_array_args119[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // goto L3(r64)
  // L3(r64)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r64_;
  goto L3_;

L6_:;
  // dx20 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // goto L3(dx20)
  // L3(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_10(SEXP CCP, SEXP RHO) {
  // msg6 = ld msg
  Rsh_Fir_reg_msg6_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // msg7 = force? msg6
  Rsh_Fir_reg_msg7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg6_);
  // checkMissing(msg7)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_msg7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // return msg7
  return Rsh_Fir_reg_msg7_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_11(SEXP CCP, SEXP RHO) {
  // x45 = ld x
  Rsh_Fir_reg_x45_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x46 = force? x45
  Rsh_Fir_reg_x46_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x45_);
  // checkMissing(x46)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_x46_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // c18 = `is.object`(x46)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_x46_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // if c18 then L1() else L2(x46)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x46)
    Rsh_Fir_reg_x48_ = Rsh_Fir_reg_x46_;
    goto L2_;
  }

L0_:;
  // return dx23
  return Rsh_Fir_reg_dx23_;

L1_:;
  // dr22 = tryDispatchBuiltin.1("$", x46)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_x46_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args129);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // if dc11 then L3() else L2(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr22)
    Rsh_Fir_reg_x48_ = Rsh_Fir_reg_dr22_;
    goto L2_;
  }

L2_:;
  // r72 = `$`(x48, <sym deprecated>)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_x48_;
  Rsh_Fir_array_args131[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // goto L0(r72)
  // L0(r72)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r72_;
  goto L0_;

L3_:;
  // dx22 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // goto L0(dx22)
  // L0(dx22)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_12(SEXP CCP, SEXP RHO) {
  // sym13 = ldf length
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base13 = ldf length in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args143);
  // if guard13 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r82
  return Rsh_Fir_reg_r82_;

L1_:;
  // x53 = ld x
  Rsh_Fir_reg_x53_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x54 = force? x53
  Rsh_Fir_reg_x54_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x53_);
  // checkMissing(x54)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_x54_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(x54)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_x54_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // if c22 then L4() else L5(x54)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L4()
    goto L4_;
  } else {
  // L5(x54)
    Rsh_Fir_reg_x56_ = Rsh_Fir_reg_x54_;
    goto L5_;
  }

L2_:;
  // r81 = dyn base13(<lang `$`(x, defunct)>)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args146, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L0(r81)
  // L0(r81)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r81_;
  goto L0_;

L3_:;
  // length9 = ldf length in base
  Rsh_Fir_reg_length9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r84 = dyn length9(dx27)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_dx27_;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length9_, 1, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L0(r84)
  // L0(r84)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r84_;
  goto L0_;

L4_:;
  // dr26 = tryDispatchBuiltin.1("$", x54)
  SEXP Rsh_Fir_array_args148[2];
  Rsh_Fir_array_args148[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args148[1] = Rsh_Fir_reg_x54_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args148);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty());
  // if dc13 then L6() else L5(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr26)
    Rsh_Fir_reg_x56_ = Rsh_Fir_reg_dr26_;
    goto L5_;
  }

L5_:;
  // r83 = `$`(x56, <sym defunct>)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_x56_;
  Rsh_Fir_array_args150[1] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty());
  // goto L3(r83)
  // L3(r83)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r83_;
  goto L3_;

L6_:;
  // dx26 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty());
  // goto L3(dx26)
  // L3(dx26)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_13(SEXP CCP, SEXP RHO) {
  // msg8 = ld msg
  Rsh_Fir_reg_msg8_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // msg9 = force? msg8
  Rsh_Fir_reg_msg9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg8_);
  // checkMissing(msg9)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_msg9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // return msg9
  return Rsh_Fir_reg_msg9_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_14(SEXP CCP, SEXP RHO) {
  // x57 = ld x
  Rsh_Fir_reg_x57_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x58 = force? x57
  Rsh_Fir_reg_x58_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x57_);
  // checkMissing(x58)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_x58_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // c23 = `is.object`(x58)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_x58_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty());
  // if c23 then L1() else L2(x58)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x58)
    Rsh_Fir_reg_x60_ = Rsh_Fir_reg_x58_;
    goto L2_;
  }

L0_:;
  // return dx29
  return Rsh_Fir_reg_dx29_;

L1_:;
  // dr28 = tryDispatchBuiltin.1("$", x58)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args160[1] = Rsh_Fir_reg_x58_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args160);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty());
  // if dc14 then L3() else L2(dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr28)
    Rsh_Fir_reg_x60_ = Rsh_Fir_reg_dr28_;
    goto L2_;
  }

L2_:;
  // r91 = `$`(x60, <sym defunct>)
  SEXP Rsh_Fir_array_args162[2];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_x60_;
  Rsh_Fir_array_args162[1] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty());
  // goto L0(r91)
  // L0(r91)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r91_;
  goto L0_;

L3_:;
  // dx28 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // goto L0(dx28)
  // L0(dx28)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_15(SEXP CCP, SEXP RHO) {
  // sym16 = ldf length
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base16 = ldf length in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args174[2];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args174[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args174);
  // if guard16 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r101
  return Rsh_Fir_reg_r101_;

L1_:;
  // x65 = ld x
  Rsh_Fir_reg_x65_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x66 = force? x65
  Rsh_Fir_reg_x66_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x65_);
  // checkMissing(x66)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_x66_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty()));
  // c27 = `is.object`(x66)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_x66_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty());
  // if c27 then L4() else L5(x66)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L4()
    goto L4_;
  } else {
  // L5(x66)
    Rsh_Fir_reg_x68_ = Rsh_Fir_reg_x66_;
    goto L5_;
  }

L2_:;
  // r100 = dyn base16(<lang `$`(x, devices)>)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args177, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L0(r100)
  // L0(r100)
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r100_;
  goto L0_;

L3_:;
  // length11 = ldf length in base
  Rsh_Fir_reg_length11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r103 = dyn length11(dx33)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_dx33_;
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length11_, 1, Rsh_Fir_array_args178, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L0(r103)
  // L0(r103)
  Rsh_Fir_reg_r101_ = Rsh_Fir_reg_r103_;
  goto L0_;

L4_:;
  // dr32 = tryDispatchBuiltin.1("$", x66)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args179[1] = Rsh_Fir_reg_x66_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args179);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty());
  // if dc16 then L6() else L5(dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr32)
    Rsh_Fir_reg_x68_ = Rsh_Fir_reg_dr32_;
    goto L5_;
  }

L5_:;
  // r102 = `$`(x68, <sym devices>)
  SEXP Rsh_Fir_array_args181[2];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_x68_;
  Rsh_Fir_array_args181[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty());
  // goto L3(r102)
  // L3(r102)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_r102_;
  goto L3_;

L6_:;
  // dx32 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx32_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty());
  // goto L3(dx32)
  // L3(dx32)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx32_;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_16(SEXP CCP, SEXP RHO) {
  // msg10 = ld msg
  Rsh_Fir_reg_msg10_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // msg11 = force? msg10
  Rsh_Fir_reg_msg11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg10_);
  // checkMissing(msg11)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_msg11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty()));
  // return msg11
  return Rsh_Fir_reg_msg11_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_17(SEXP CCP, SEXP RHO) {
  // x69 = ld x
  Rsh_Fir_reg_x69_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x70 = force? x69
  Rsh_Fir_reg_x70_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x69_);
  // checkMissing(x70)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_x70_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty()));
  // c28 = `is.object`(x70)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_x70_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty());
  // if c28 then L1() else L2(x70)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x70)
    Rsh_Fir_reg_x72_ = Rsh_Fir_reg_x70_;
    goto L2_;
  }

L0_:;
  // return dx35
  return Rsh_Fir_reg_dx35_;

L1_:;
  // dr34 = tryDispatchBuiltin.1("$", x70)
  SEXP Rsh_Fir_array_args191[2];
  Rsh_Fir_array_args191[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args191[1] = Rsh_Fir_reg_x70_;
  Rsh_Fir_reg_dr34_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args191);
  // dc17 = getTryDispatchBuiltinDispatched(dr34)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dc17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty());
  // if dc17 then L3() else L2(dr34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc17_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr34)
    Rsh_Fir_reg_x72_ = Rsh_Fir_reg_dr34_;
    goto L2_;
  }

L2_:;
  // r110 = `$`(x72, <sym devices>)
  SEXP Rsh_Fir_array_args193[2];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_x72_;
  Rsh_Fir_array_args193[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty());
  // goto L0(r110)
  // L0(r110)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_r110_;
  goto L0_;

L3_:;
  // dx34 = getTryDispatchBuiltinValue(dr34)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args194, Rsh_Fir_param_types_empty());
  // goto L0(dx34)
  // L0(dx34)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx34_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_18(SEXP CCP, SEXP RHO) {
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // r113 = dyn paste[, , collapse]("dev.new() is the preferred way to open a new device,", "in the unlikely event one is needed.", " ")
  SEXP Rsh_Fir_array_args196[3];
  Rsh_Fir_array_args196[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args196[1] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args196[2] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names53[3];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_array_arg_names53[2] = Rsh_const(CCP, 48);
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 3, Rsh_Fir_array_args196, Rsh_Fir_array_arg_names53, CCP, RHO);
  // return r113
  return Rsh_Fir_reg_r113_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
