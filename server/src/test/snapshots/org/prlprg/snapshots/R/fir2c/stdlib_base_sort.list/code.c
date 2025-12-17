#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner584326924_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner584326924_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner584326924_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner584326924_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner584326924_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner584326924_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner584326924_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner584326924_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner584326924_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner584326924_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner584326924_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner584326924_9(SEXP CCP, SEXP RHO);
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
  // r = clos inner584326924
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner584326924_, RHO, CCP);
  // st `sort.list` = r
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
SEXP Rsh_Fir_user_function_inner584326924_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner584326924 dynamic dispatch ([x, partial, `na.last`, decreasing, method])

  return Rsh_Fir_user_version_inner584326924_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner584326924_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner584326924 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner584326924/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_partial;  // partial
  SEXP Rsh_Fir_reg_na_last;  // na_last
  SEXP Rsh_Fir_reg_decreasing;  // decreasing
  SEXP Rsh_Fir_reg_method;  // method
  SEXP Rsh_Fir_reg_partial_isMissing;  // partial_isMissing
  SEXP Rsh_Fir_reg_partial_orDefault;  // partial_orDefault
  SEXP Rsh_Fir_reg_na_last_isMissing;  // na_last_isMissing
  SEXP Rsh_Fir_reg_na_last_orDefault;  // na_last_orDefault
  SEXP Rsh_Fir_reg_decreasing_isMissing;  // decreasing_isMissing
  SEXP Rsh_Fir_reg_decreasing_orDefault;  // decreasing_orDefault
  SEXP Rsh_Fir_reg_method_isMissing;  // method_isMissing
  SEXP Rsh_Fir_reg_method_orDefault;  // method_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_decreasing1_;  // decreasing1
  SEXP Rsh_Fir_reg_decreasing2_;  // decreasing2
  SEXP Rsh_Fir_reg_as_logical;  // as_logical
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_partial1_;  // partial1
  SEXP Rsh_Fir_reg_partial2_;  // partial2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_decreasing3_;  // decreasing3
  SEXP Rsh_Fir_reg_decreasing4_;  // decreasing4
  SEXP Rsh_Fir_reg_na_last1_;  // na_last1
  SEXP Rsh_Fir_reg_na_last2_;  // na_last2
  SEXP Rsh_Fir_reg_sorted_fpass;  // sorted_fpass
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_match_arg;  // match_arg
  SEXP Rsh_Fir_reg_method1_;  // method1
  SEXP Rsh_Fir_reg_method2_;  // method2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_method3_;  // method3
  SEXP Rsh_Fir_reg_method4_;  // method4
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_is_numeric1_;  // is_numeric1
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_is_factor;  // is_factor
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_c48_;  // c48
  SEXP Rsh_Fir_reg_c49_;  // c49
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_c56_;  // c56
  SEXP Rsh_Fir_reg_c57_;  // c57
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_c58_;  // c58
  SEXP Rsh_Fir_reg_c59_;  // c59
  SEXP Rsh_Fir_reg_c60_;  // c60
  SEXP Rsh_Fir_reg_c63_;  // c63
  SEXP Rsh_Fir_reg_c64_;  // c64
  SEXP Rsh_Fir_reg_c65_;  // c65
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c72_;  // c72
  SEXP Rsh_Fir_reg_c73_;  // c73
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_c74_;  // c74
  SEXP Rsh_Fir_reg_c75_;  // c75
  SEXP Rsh_Fir_reg_c79_;  // c79
  SEXP Rsh_Fir_reg_c80_;  // c80
  SEXP Rsh_Fir_reg_c81_;  // c81
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_c88_;  // c88
  SEXP Rsh_Fir_reg_c89_;  // c89
  SEXP Rsh_Fir_reg_c90_;  // c90
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_x19_;  // x19
  SEXP Rsh_Fir_reg_x20_;  // x20
  SEXP Rsh_Fir_reg_is_atomic;  // is_atomic
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_c91_;  // c91
  SEXP Rsh_Fir_reg_c92_;  // c92
  SEXP Rsh_Fir_reg_c96_;  // c96
  SEXP Rsh_Fir_reg_c97_;  // c97
  SEXP Rsh_Fir_reg_c100_;  // c100
  SEXP Rsh_Fir_reg_c101_;  // c101
  SEXP Rsh_Fir_reg_c103_;  // c103
  SEXP Rsh_Fir_reg_c105_;  // c105
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_c108_;  // c108
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_c111_;  // c111
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_x21_;  // x21
  SEXP Rsh_Fir_reg_x22_;  // x22
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_c112_;  // c112
  SEXP Rsh_Fir_reg_c113_;  // c113
  SEXP Rsh_Fir_reg_c114_;  // c114
  SEXP Rsh_Fir_reg_c116_;  // c116
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_partial3_;  // partial3
  SEXP Rsh_Fir_reg_partial4_;  // partial4
  SEXP Rsh_Fir_reg_c117_;  // c117
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_c118_;  // c118
  SEXP Rsh_Fir_reg__NotYetUsed;  // _NotYetUsed
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_method5_;  // method5
  SEXP Rsh_Fir_reg_method6_;  // method6
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_c119_;  // c119
  SEXP Rsh_Fir_reg_is_factor1_;  // is_factor1
  SEXP Rsh_Fir_reg_x23_;  // x23
  SEXP Rsh_Fir_reg_x24_;  // x24
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_c120_;  // c120
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_x25_;  // x25
  SEXP Rsh_Fir_reg_x26_;  // x26
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_x27_;  // x27
  SEXP Rsh_Fir_reg_x28_;  // x28
  SEXP Rsh_Fir_reg_is_numeric2_;  // is_numeric2
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_c121_;  // c121
  SEXP Rsh_Fir_reg_sort;  // sort
  SEXP Rsh_Fir_reg_x29_;  // x29
  SEXP Rsh_Fir_reg_x30_;  // x30
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_na_last3_;  // na_last3
  SEXP Rsh_Fir_reg_na_last4_;  // na_last4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_decreasing5_;  // decreasing5
  SEXP Rsh_Fir_reg_decreasing6_;  // decreasing6
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_c122_;  // c122
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_na_last5_;  // na_last5
  SEXP Rsh_Fir_reg_na_last6_;  // na_last6
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_c123_;  // c123
  SEXP Rsh_Fir_reg_x31_;  // x31
  SEXP Rsh_Fir_reg_x32_;  // x32
  SEXP Rsh_Fir_reg_c124_;  // c124
  SEXP Rsh_Fir_reg_x34_;  // x34
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_sym18_;  // sym18
  SEXP Rsh_Fir_reg_base18_;  // base18
  SEXP Rsh_Fir_reg_guard18_;  // guard18
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_x37_;  // x37
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_x38_;  // x38
  SEXP Rsh_Fir_reg_x39_;  // x39
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_method7_;  // method7
  SEXP Rsh_Fir_reg_method8_;  // method8
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_c125_;  // c125
  SEXP Rsh_Fir_reg_order;  // order
  SEXP Rsh_Fir_reg_x40_;  // x40
  SEXP Rsh_Fir_reg_x41_;  // x41
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_na_last7_;  // na_last7
  SEXP Rsh_Fir_reg_na_last8_;  // na_last8
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_decreasing7_;  // decreasing7
  SEXP Rsh_Fir_reg_decreasing8_;  // decreasing8
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_sym19_;  // sym19
  SEXP Rsh_Fir_reg_base19_;  // base19
  SEXP Rsh_Fir_reg_guard19_;  // guard19
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_x42_;  // x42
  SEXP Rsh_Fir_reg_x43_;  // x43
  SEXP Rsh_Fir_reg_is_atomic1_;  // is_atomic1
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_c126_;  // c126
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_sym20_;  // sym20
  SEXP Rsh_Fir_reg_base20_;  // base20
  SEXP Rsh_Fir_reg_guard20_;  // guard20
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_na_last9_;  // na_last9
  SEXP Rsh_Fir_reg_na_last10_;  // na_last10
  SEXP Rsh_Fir_reg_decreasing9_;  // decreasing9
  SEXP Rsh_Fir_reg_decreasing10_;  // decreasing10
  SEXP Rsh_Fir_reg_x44_;  // x44
  SEXP Rsh_Fir_reg_x45_;  // x45
  SEXP Rsh_Fir_reg_order1_;  // order1
  SEXP Rsh_Fir_reg_r100_;  // r100

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_partial = PARAMS[1];
  Rsh_Fir_reg_na_last = PARAMS[2];
  Rsh_Fir_reg_decreasing = PARAMS[3];
  Rsh_Fir_reg_method = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // partial_isMissing = missing.0(partial)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_partial;
  Rsh_Fir_reg_partial_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if partial_isMissing then L0(NULL) else L0(partial)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_partial_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_partial_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(partial)
    Rsh_Fir_reg_partial_orDefault = Rsh_Fir_reg_partial;
    goto L0_;
  }

L0_:;
  // st partial = partial_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_partial_orDefault, RHO);
  (void)(Rsh_Fir_reg_partial_orDefault);
  // na_last_isMissing = missing.0(na_last)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_na_last;
  Rsh_Fir_reg_na_last_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if na_last_isMissing then L1(TRUE) else L1(na_last)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_na_last_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_na_last_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(na_last)
    Rsh_Fir_reg_na_last_orDefault = Rsh_Fir_reg_na_last;
    goto L1_;
  }

L1_:;
  // st `na.last` = na_last_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_na_last_orDefault, RHO);
  (void)(Rsh_Fir_reg_na_last_orDefault);
  // decreasing_isMissing = missing.0(decreasing)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_decreasing;
  Rsh_Fir_reg_decreasing_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if decreasing_isMissing then L2(FALSE) else L2(decreasing)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_decreasing_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_decreasing_orDefault = Rsh_const(CCP, 6);
    goto L2_;
  } else {
  // L2(decreasing)
    Rsh_Fir_reg_decreasing_orDefault = Rsh_Fir_reg_decreasing;
    goto L2_;
  }

L2_:;
  // st decreasing = decreasing_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_decreasing_orDefault, RHO);
  (void)(Rsh_Fir_reg_decreasing_orDefault);
  // method_isMissing = missing.0(method)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_method;
  Rsh_Fir_reg_method_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if method_isMissing then L3() else L4(method)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_method_isMissing)) {
  // L3()
    goto L3_;
  } else {
  // L4(method)
    Rsh_Fir_reg_method_orDefault = Rsh_Fir_reg_method;
    goto L4_;
  }

L3_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("auto", "shell", "quick", "radix");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("auto", "shell", "quick", "radix");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner584326924_, CCP, RHO);
  // goto L4(p)
  // L4(p)
  Rsh_Fir_reg_method_orDefault = Rsh_Fir_reg_p;
  goto L4_;

L4_:;
  // st method = method_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_method_orDefault, RHO);
  (void)(Rsh_Fir_reg_method_orDefault);
  // sym1 = ldf `as.logical`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf `as.logical` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard1 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L5_:;
  // st decreasing = r5
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard2 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L6_:;
  // c2 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c2 then L62() else L7(c2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L62()
    goto L62_;
  } else {
  // L7(c2)
    Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c2_;
    goto L7_;
  }

L7_:;
  // c11 = `as.logical`(c4)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c11 then L68() else L9(c11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L68()
    goto L68_;
  } else {
  // L9(c11)
    Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c11_;
    goto L9_;
  }

L8_:;
  // c8 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // c9 = `&&`(c7, c8)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L7(c9)
  // L7(c9)
  Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c9_;
  goto L7_;

L9_:;
  // c21 = `as.logical`(c13)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c21 then L73() else L11(c21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L73()
    goto L73_;
  } else {
  // L11(c21)
    Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c21_;
    goto L11_;
  }

L10_:;
  // r14 = `!`(r13)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c18 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // c19 = `&&`(c16, c18)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L9(c19)
  // L9(c19)
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c19_;
  goto L9_;

L11_:;
  // c30 = `as.logical`(c23)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c30 then L79() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L79()
    goto L79_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // r18 = `>`(r16, 0.0)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // c27 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // c28 = `&&`(c26, c27)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L11(c28)
  // L11(c28)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c28_;
  goto L11_;

L13_:;
  // goto L18()
  // L18()
  goto L18_;

L14_:;
  // c31 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c31 then L86() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L86()
    goto L86_;
  } else {
  // L15()
    goto L15_;
  }

L15_:;
  // goto L18()
  // L18()
  goto L18_;

L16_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r23
  return Rsh_Fir_reg_r23_;

L18_:;
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L93() else D13()
  // L93()
  goto L93_;

L19_:;
  // c103 = `as.logical`(c34)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_c34_;
  Rsh_Fir_reg_c103_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c103 then L122() else L28(c103)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c103_)) {
  // L122()
    goto L122_;
  } else {
  // L28(c103)
    Rsh_Fir_reg_c105_ = Rsh_Fir_reg_c103_;
    goto L28_;
  }

L20_:;
  // c38 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c38 then L21(c37, c38) else L101()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L21(c37, c38)
    Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c37_;
    Rsh_Fir_reg_c40_ = Rsh_Fir_reg_c38_;
    goto L21_;
  } else {
  // L101()
    goto L101_;
  }

L21_:;
  // c47 = `as.logical`(c40)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_c40_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c47 then L22(c39, c47) else L105()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L22(c39, c47)
    Rsh_Fir_reg_c48_ = Rsh_Fir_reg_c39_;
    Rsh_Fir_reg_c49_ = Rsh_Fir_reg_c47_;
    goto L22_;
  } else {
  // L105()
    goto L105_;
  }

L22_:;
  // c63 = `as.logical`(c49)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_c49_;
  Rsh_Fir_reg_c63_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c63 then L24(c48, c63) else L110()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c63_)) {
  // L24(c48, c63)
    Rsh_Fir_reg_c64_ = Rsh_Fir_reg_c48_;
    Rsh_Fir_reg_c65_ = Rsh_Fir_reg_c63_;
    goto L24_;
  } else {
  // L110()
    goto L110_;
  }

L23_:;
  // c59 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // c60 = `||`(c57, c59)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_c57_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_c59_;
  Rsh_Fir_reg_c60_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L22(c56, c60)
  // L22(c56, c60)
  Rsh_Fir_reg_c48_ = Rsh_Fir_reg_c56_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_reg_c60_;
  goto L22_;

L24_:;
  // c100 = `as.logical`(c65)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_c65_;
  Rsh_Fir_reg_c100_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // c101 = `&&`(c64, c100)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_c64_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_c100_;
  Rsh_Fir_reg_c101_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L19(c101)
  // L19(c101)
  Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c101_;
  goto L19_;

L25_:;
  // c75 = `as.logical`(r39)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_c75_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c75 then L114() else L26(c72, c73, c75)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c75_)) {
  // L114()
    goto L114_;
  } else {
  // L26(c72, c73, c75)
    Rsh_Fir_reg_c79_ = Rsh_Fir_reg_c72_;
    Rsh_Fir_reg_c80_ = Rsh_Fir_reg_c73_;
    Rsh_Fir_reg_c81_ = Rsh_Fir_reg_c75_;
    goto L26_;
  }

L26_:;
  // c96 = `as.logical`(c81)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_c81_;
  Rsh_Fir_reg_c96_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // c97 = `||`(c80, c96)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_c80_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_c96_;
  Rsh_Fir_reg_c97_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L24(c79, c97)
  // L24(c79, c97)
  Rsh_Fir_reg_c64_ = Rsh_Fir_reg_c79_;
  Rsh_Fir_reg_c65_ = Rsh_Fir_reg_c97_;
  goto L24_;

L27_:;
  // r43 = `!`(r41)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // c91 = `as.logical`(r43)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_c91_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // c92 = `&&`(c90, c91)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_c90_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_c91_;
  Rsh_Fir_reg_c92_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L26(c88, c89, c92)
  // L26(c88, c89, c92)
  Rsh_Fir_reg_c79_ = Rsh_Fir_reg_c88_;
  Rsh_Fir_reg_c80_ = Rsh_Fir_reg_c89_;
  Rsh_Fir_reg_c81_ = Rsh_Fir_reg_c92_;
  goto L26_;

L28_:;
  // c116 = `as.logical`(c105)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_c105_;
  Rsh_Fir_reg_c116_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if c116 then L130() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c116_)) {
  // L130()
    goto L130_;
  } else {
  // L31()
    goto L31_;
  }

L29_:;
  // c113 = `as.logical`(r45)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_c113_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // c114 = `&&`(c108, c113)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_c108_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_c113_;
  Rsh_Fir_reg_c114_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L28(c114)
  // L28(c114)
  Rsh_Fir_reg_c105_ = Rsh_Fir_reg_c114_;
  goto L28_;

L30_:;
  // c112 = `is.integer`(r47)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_c112_ = Rsh_Fir_call_builtin(386, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L29(c111, c112)
  // L29(c111, c112)
  Rsh_Fir_reg_c108_ = Rsh_Fir_reg_c111_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_c112_;
  goto L29_;

L31_:;
  // goto L32()
  // L32()
  goto L32_;

L32_:;
  // sym14 = ldf `is.null`
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base14 = ldf `is.null` in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard14 then L132() else L133()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L132()
    goto L132_;
  } else {
  // L133()
    goto L133_;
  }

L33_:;
  // r52 = `!`(r51)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // c118 = `as.logical`(r52)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_c118_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c118 then L135() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c118_)) {
  // L135()
    goto L135_;
  } else {
  // L34()
    goto L34_;
  }

L34_:;
  // goto L35()
  // L35()
  goto L35_;

L35_:;
  // method5 = ld method
  Rsh_Fir_reg_method5_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L139() else D29()
  // L139()
  goto L139_;

L36_:;
  // goto L43()
  // L43()
  goto L43_;

L37_:;
  // goto L39()
  // L39()
  goto L39_;

L38_:;
  // st x = r59
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r59_, RHO);
  (void)(Rsh_Fir_reg_r59_);
  // goto L39()
  // L39()
  goto L39_;

L39_:;
  // sym16 = ldf `is.numeric`
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base16 = ldf `is.numeric` in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard16 then L149() else L150()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L149()
    goto L149_;
  } else {
  // L150()
    goto L150_;
  }

L40_:;
  // c121 = `as.logical`(r63)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_c121_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c121 then L153() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c121_)) {
  // L153()
    goto L153_;
  } else {
  // L41()
    goto L41_;
  }

L41_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L162() else D38()
  // L162()
  goto L162_;

L43_:;
  // sym17 = ldf `is.na`
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base17 = ldf `is.na` in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard17 then L165() else L166()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L165()
    goto L165_;
  } else {
  // L166()
    goto L166_;
  }

L44_:;
  // c123 = `as.logical`(r77)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_reg_c123_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if c123 then L169() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c123_)) {
  // L169()
    goto L169_;
  } else {
  // L45()
    goto L45_;
  }

L45_:;
  // goto L48()
  // L48()
  goto L48_;

L46_:;
  // st x = dx3
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // st `na.last` = TRUE
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_const(CCP, 4), RHO);
  (void)(Rsh_const(CCP, 4));
  // goto L48()
  // L48()
  goto L48_;

L47_:;
  // r82 = `!`(r80)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r83 = dyn __(x37, r82)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_x37_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L46(r83)
  // L46(r83)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r83_;
  goto L46_;

L48_:;
  // method7 = ld method
  Rsh_Fir_reg_method7_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L179() else D45()
  // L179()
  goto L179_;

L49_:;
  // sym19 = ldf `is.atomic`
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base19 = ldf `is.atomic` in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard19 then L185() else L186()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L185()
    goto L185_;
  } else {
  // L186()
    goto L186_;
  }

L51_:;
  // r95 = `!`(r93)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // c126 = `as.logical`(r95)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_reg_c126_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if c126 then L189() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c126_)) {
  // L189()
    goto L189_;
  } else {
  // L52()
    goto L52_;
  }

L52_:;
  // goto L53()
  // L53()
  goto L53_;

L53_:;
  // sym20 = ldf `.Internal`
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base20 = ldf `.Internal` in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard20 then L193() else L194()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L193()
    goto L193_;
  } else {
  // L194()
    goto L194_;
  }

L54_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r99
  return Rsh_Fir_reg_r99_;

L55_:;
  // decreasing1 = ld decreasing
  Rsh_Fir_reg_decreasing1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L57() else D0()
  // L57()
  goto L57_;

L56_:;
  // r4 = dyn base1(<sym decreasing>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L5(r4)
  // L5(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L5_;

D0_:;
  // deopt 2 [decreasing1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_decreasing1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L57_:;
  // decreasing2 = force? decreasing1
  Rsh_Fir_reg_decreasing2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_decreasing1_);
  // checkMissing(decreasing2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_decreasing2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // as_logical = ldf `as.logical` in base
  Rsh_Fir_reg_as_logical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r6 = dyn as_logical(decreasing2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_decreasing2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_logical, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L58() else D1()
  // L58()
  goto L58_;

D1_:;
  // deopt 5 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L5(r6)
  // L5(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L5_;

L59_:;
  // partial1 = ld partial
  Rsh_Fir_reg_partial1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L61() else D2()
  // L61()
  goto L61_;

L60_:;
  // r7 = dyn base2(<sym partial>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L6(r7)
  // L6(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L6_;

D2_:;
  // deopt 8 [partial1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_partial1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L61_:;
  // partial2 = force? partial1
  Rsh_Fir_reg_partial2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_partial1_);
  // checkMissing(partial2)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_partial2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // c1 = `==`(partial2, NULL)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_partial2_;
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L6(c1)
  // L6(c1)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_c1_;
  goto L6_;

L62_:;
  // sym3 = ldf `is.numeric`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base3 = ldf `is.numeric` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard3 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L63_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L65() else D3()
  // L65()
  goto L65_;

L64_:;
  // r9 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L8(c2, r9)
  // L8(c2, r9)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L8_;

D3_:;
  // deopt 13 [c2, x1]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(13, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L65_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r11 = dyn is_numeric(x2)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L66() else D4()
  // L66()
  goto L66_;

D4_:;
  // deopt 16 [c2, r11]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L8(c2, r11)
  // L8(c2, r11)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L8_;

L68_:;
  // sym4 = ldf `is.object`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base4 = ldf `is.object` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args63);
  // if guard4 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L69_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L71() else D5()
  // L71()
  goto L71_;

L70_:;
  // r12 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L10(c11, r12)
  // L10(c11, r12)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L10_;

D5_:;
  // deopt 19 [c11, x3]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L71_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(x4)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L10(c11, c17)
  // L10(c11, c17)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_c17_;
  goto L10_;

L73_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard5 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L74_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L76() else D6()
  // L76()
  goto L76_;

L75_:;
  // r15 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L12(c21, r15)
  // L12(c21, r15)
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L12_;

D6_:;
  // deopt 26 [c21, x5]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(26, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L76_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r17 = dyn length(x6)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L77() else D7()
  // L77()
  goto L77_;

D7_:;
  // deopt 29 [c21, r17]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L77_:;
  // goto L12(c21, r17)
  // L12(c21, r17)
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L12_;

L79_:;
  // sym6 = ldf `.Internal`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base6 = ldf `.Internal` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args71);
  // if guard6 then L80() else L81()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L80()
    goto L80_;
  } else {
  // L81()
    goto L81_;
  }

L80_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L82() else D8()
  // L82()
  goto L82_;

L81_:;
  // r19 = dyn base6(<lang sorted_fpass(x, decreasing, na.last)>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L14(r19)
  // L14(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L14_;

D8_:;
  // deopt 35 [x7]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L82_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // decreasing3 = ld decreasing
  Rsh_Fir_reg_decreasing3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L83() else D9()
  // L83()
  goto L83_;

D9_:;
  // deopt 37 [decreasing3]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_decreasing3_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L83_:;
  // decreasing4 = force? decreasing3
  Rsh_Fir_reg_decreasing4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_decreasing3_);
  // checkMissing(decreasing4)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_decreasing4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // na_last1 = ld `na.last`
  Rsh_Fir_reg_na_last1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L84() else D10()
  // L84()
  goto L84_;

D10_:;
  // deopt 39 [na_last1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_na_last1_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L84_:;
  // na_last2 = force? na_last1
  Rsh_Fir_reg_na_last2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_last1_);
  // checkMissing(na_last2)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_na_last2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // sorted_fpass = ldf sorted_fpass in base
  Rsh_Fir_reg_sorted_fpass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r21 = dyn sorted_fpass(x8, decreasing4, na_last2)
  SEXP Rsh_Fir_array_args76[3];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_decreasing4_;
  Rsh_Fir_array_args76[2] = Rsh_Fir_reg_na_last2_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sorted_fpass, 3, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L85() else D11()
  // L85()
  goto L85_;

D11_:;
  // deopt 42 [r21]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L85_:;
  // goto L14(r21)
  // L14(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_;
  goto L14_;

L86_:;
  // sym7 = ldf seq_along
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base7 = ldf seq_along in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args77);
  // if guard7 then L87() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L87()
    goto L87_;
  } else {
  // L88()
    goto L88_;
  }

L87_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L89() else D12()
  // L89()
  goto L89_;

L88_:;
  // r22 = dyn base7(<sym x>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L16(r22)
  // L16(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L16_;

D12_:;
  // deopt 44 [x9]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L89_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // r24 = seq_along(x10)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L16(r24)
  // L16(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L16_;

D13_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L93_:;
  // p1 = prom<V +>{
  //   method1 = ld method;
  //   method2 = force? method1;
  //   checkMissing(method2);
  //   return method2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner584326924_1, CCP, RHO);
  // r29 = dyn match_arg(p1)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L94() else D14()
  // L94()
  goto L94_;

D14_:;
  // deopt 55 [r29]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L94_:;
  // st method = r29
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // method3 = ld method
  Rsh_Fir_reg_method3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L95() else D15()
  // L95()
  goto L95_;

D15_:;
  // deopt 57 [method3]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_method3_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L95_:;
  // method4 = force? method3
  Rsh_Fir_reg_method4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method3_);
  // checkMissing(method4)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_method4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // r30 = `==`(method4, "auto")
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_method4_;
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // c32 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if c32 then L96() else L19(c32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L96()
    goto L96_;
  } else {
  // L19(c32)
    Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c32_;
    goto L19_;
  }

L96_:;
  // sym8 = ldf `is.numeric`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base8 = ldf `is.numeric` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args86);
  // if guard8 then L97() else L98()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L97()
    goto L97_;
  } else {
  // L98()
    goto L98_;
  }

L97_:;
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L99() else D16()
  // L99()
  goto L99_;

L98_:;
  // r31 = dyn base8(<sym x>)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L20(c32, r31)
  // L20(c32, r31)
  Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L20_;

D16_:;
  // deopt 63 [c32, x11]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_x11_;
  Rsh_Fir_deopt(63, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L99_:;
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // is_numeric1 = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r33 = dyn is_numeric1(x12)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric1_, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L100() else D17()
  // L100()
  goto L100_;

D17_:;
  // deopt 66 [c32, r33]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L100_:;
  // goto L20(c32, r33)
  // L20(c32, r33)
  Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L20_;

L101_:;
  // is_factor = ldf `is.factor`
  Rsh_Fir_reg_is_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L102() else D18()
  // L102()
  goto L102_;

D18_:;
  // deopt 68 [c37, c38]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_c37_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_c38_;
  Rsh_Fir_deopt(68, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L102_:;
  // p2 = prom<V +>{
  //   x13 = ld x;
  //   x14 = force? x13;
  //   checkMissing(x14);
  //   return x14;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner584326924_2, CCP, RHO);
  // r35 = dyn is_factor(p2)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_factor, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L103() else D19()
  // L103()
  goto L103_;

D19_:;
  // deopt 70 [c37, c38, r35]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_c37_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(70, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L103_:;
  // c43 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // c44 = `||`(c38, c43)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_c38_;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_c43_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // goto L21(c37, c44)
  // L21(c37, c44)
  Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c37_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_reg_c44_;
  goto L21_;

L105_:;
  // sym9 = ldf `is.logical`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base9 = ldf `is.logical` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args94);
  // if guard9 then L106() else L107()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L106()
    goto L106_;
  } else {
  // L107()
    goto L107_;
  }

L106_:;
  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L108() else D20()
  // L108()
  goto L108_;

L107_:;
  // r36 = dyn base9(<sym x>)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L23(c39, c47, r36)
  // L23(c39, c47, r36)
  Rsh_Fir_reg_c56_ = Rsh_Fir_reg_c39_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_reg_c47_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L23_;

D20_:;
  // deopt 73 [c39, c47, x15]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_c39_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_c47_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_x15_;
  Rsh_Fir_deopt(73, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L108_:;
  // x16 = force? x15
  Rsh_Fir_reg_x16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_x16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // c58 = `is.logical`(x16)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_reg_c58_ = Rsh_Fir_call_builtin(385, CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L23(c39, c47, c58)
  // L23(c39, c47, c58)
  Rsh_Fir_reg_c56_ = Rsh_Fir_reg_c39_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_reg_c47_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_c58_;
  goto L23_;

L110_:;
  // sym10 = ldf `is.object`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base10 = ldf `is.object` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args98);
  // if guard10 then L111() else L112()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L111()
    goto L111_;
  } else {
  // L112()
    goto L112_;
  }

L111_:;
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L113() else D21()
  // L113()
  goto L113_;

L112_:;
  // r38 = dyn base10(<sym x>)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L25(c48, c63, r38)
  // L25(c48, c63, r38)
  Rsh_Fir_reg_c72_ = Rsh_Fir_reg_c48_;
  Rsh_Fir_reg_c73_ = Rsh_Fir_reg_c63_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L25_;

D21_:;
  // deopt 78 [c48, c63, x17]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_c48_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_c63_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_x17_;
  Rsh_Fir_deopt(78, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L113_:;
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // c74 = `is.object`(x18)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_c74_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // goto L25(c48, c63, c74)
  // L25(c48, c63, c74)
  Rsh_Fir_reg_c72_ = Rsh_Fir_reg_c48_;
  Rsh_Fir_reg_c73_ = Rsh_Fir_reg_c63_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_c74_;
  goto L25_;

L114_:;
  // sym11 = ldf `is.atomic`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base11 = ldf `is.atomic` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args102);
  // if guard11 then L115() else L116()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L115()
    goto L115_;
  } else {
  // L116()
    goto L116_;
  }

L115_:;
  // x19 = ld x
  Rsh_Fir_reg_x19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L117() else D22()
  // L117()
  goto L117_;

L116_:;
  // r40 = dyn base11(<sym x>)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L27(c72, c73, c75, r40)
  // L27(c72, c73, c75, r40)
  Rsh_Fir_reg_c88_ = Rsh_Fir_reg_c72_;
  Rsh_Fir_reg_c89_ = Rsh_Fir_reg_c73_;
  Rsh_Fir_reg_c90_ = Rsh_Fir_reg_c75_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L27_;

D22_:;
  // deopt 83 [c72, c73, c75, x19]
  SEXP Rsh_Fir_array_deopt_stack21[4];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_c72_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_c73_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_c75_;
  Rsh_Fir_array_deopt_stack21[3] = Rsh_Fir_reg_x19_;
  Rsh_Fir_deopt(83, 4, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L117_:;
  // x20 = force? x19
  Rsh_Fir_reg_x20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x19_);
  // checkMissing(x20)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_x20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // is_atomic = ldf `is.atomic` in base
  Rsh_Fir_reg_is_atomic = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r42 = dyn is_atomic(x20)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_x20_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_atomic, 1, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L118() else D23()
  // L118()
  goto L118_;

D23_:;
  // deopt 86 [c72, c73, c75, r42]
  SEXP Rsh_Fir_array_deopt_stack22[4];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_c72_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_c73_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_c75_;
  Rsh_Fir_array_deopt_stack22[3] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(86, 4, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L118_:;
  // goto L27(c72, c73, c75, r42)
  // L27(c72, c73, c75, r42)
  Rsh_Fir_reg_c88_ = Rsh_Fir_reg_c72_;
  Rsh_Fir_reg_c89_ = Rsh_Fir_reg_c73_;
  Rsh_Fir_reg_c90_ = Rsh_Fir_reg_c75_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L27_;

L122_:;
  // sym12 = ldf `is.integer`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base12 = ldf `is.integer` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args106);
  // if guard12 then L123() else L124()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L123()
    goto L123_;
  } else {
  // L124()
    goto L124_;
  }

L123_:;
  // sym13 = ldf length
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base13 = ldf length in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args107);
  // if guard13 then L125() else L126()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L125()
    goto L125_;
  } else {
  // L126()
    goto L126_;
  }

L124_:;
  // r44 = dyn base12(<lang length(x)>)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L29(c103, r44)
  // L29(c103, r44)
  Rsh_Fir_reg_c108_ = Rsh_Fir_reg_c103_;
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L29_;

L125_:;
  // x21 = ld x
  Rsh_Fir_reg_x21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L127() else D24()
  // L127()
  goto L127_;

L126_:;
  // r46 = dyn base13(<sym x>)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L30(c103, r46)
  // L30(c103, r46)
  Rsh_Fir_reg_c111_ = Rsh_Fir_reg_c103_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L30_;

D24_:;
  // deopt 94 [c103, x21]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_c103_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_x21_;
  Rsh_Fir_deopt(94, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L127_:;
  // x22 = force? x21
  Rsh_Fir_reg_x22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x21_);
  // checkMissing(x22)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_x22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r48 = dyn length1(x22)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_x22_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L128() else D25()
  // L128()
  goto L128_;

D25_:;
  // deopt 97 [c103, r48]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_c103_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(97, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L128_:;
  // goto L30(c103, r48)
  // L30(c103, r48)
  Rsh_Fir_reg_c111_ = Rsh_Fir_reg_c103_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L30_;

L130_:;
  // st method = "radix"
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_const(CCP, 12), RHO);
  (void)(Rsh_const(CCP, 12));
  // goto L32()
  // L32()
  goto L32_;

L132_:;
  // partial3 = ld partial
  Rsh_Fir_reg_partial3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L134() else D26()
  // L134()
  goto L134_;

L133_:;
  // r50 = dyn base14(<sym partial>)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L33(r50)
  // L33(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L33_;

D26_:;
  // deopt 106 [partial3]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_partial3_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L134_:;
  // partial4 = force? partial3
  Rsh_Fir_reg_partial4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_partial3_);
  // checkMissing(partial4)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_partial4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // c117 = `==`(partial4, NULL)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_partial4_;
  Rsh_Fir_array_args114[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c117_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // goto L33(c117)
  // L33(c117)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_c117_;
  goto L33_;

L135_:;
  // _NotYetUsed = ldf `.NotYetUsed`
  Rsh_Fir_reg__NotYetUsed = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L136() else D27()
  // L136()
  goto L136_;

D27_:;
  // deopt 111 []
  Rsh_Fir_deopt(111, 0, NULL, CCP, RHO);
  return R_NilValue;

L136_:;
  // r53 = dyn _NotYetUsed("partial != NULL")
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__NotYetUsed, 1, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L137() else D28()
  // L137()
  goto L137_;

D28_:;
  // deopt 113 [r53]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L137_:;
  // goto L35()
  // L35()
  goto L35_;

D29_:;
  // deopt 116 [method5]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_method5_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L139_:;
  // method6 = force? method5
  Rsh_Fir_reg_method6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method5_);
  // checkMissing(method6)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_method6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // r55 = `==`(method6, "quick")
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_method6_;
  Rsh_Fir_array_args117[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // c119 = `as.logical`(r55)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_c119_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // if c119 then L140() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c119_)) {
  // L140()
    goto L140_;
  } else {
  // L36()
    goto L36_;
  }

L140_:;
  // is_factor1 = ldf `is.factor`
  Rsh_Fir_reg_is_factor1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L141() else D30()
  // L141()
  goto L141_;

D30_:;
  // deopt 121 []
  Rsh_Fir_deopt(121, 0, NULL, CCP, RHO);
  return R_NilValue;

L141_:;
  // p3 = prom<V +>{
  //   x23 = ld x;
  //   x24 = force? x23;
  //   checkMissing(x24);
  //   return x24;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner584326924_3, CCP, RHO);
  // r57 = dyn is_factor1(p3)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_factor1_, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L142() else D31()
  // L142()
  goto L142_;

D31_:;
  // deopt 123 [r57]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L142_:;
  // c120 = `as.logical`(r57)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_c120_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if c120 then L143() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c120_)) {
  // L143()
    goto L143_;
  } else {
  // L37()
    goto L37_;
  }

L143_:;
  // sym15 = ldf `as.integer`
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base15 = ldf `as.integer` in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args122);
  // if guard15 then L144() else L145()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L144()
    goto L144_;
  } else {
  // L145()
    goto L145_;
  }

L144_:;
  // x25 = ld x
  Rsh_Fir_reg_x25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L146() else D32()
  // L146()
  goto L146_;

L145_:;
  // r58 = dyn base15(<sym x>)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L38(r58)
  // L38(r58)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r58_;
  goto L38_;

D32_:;
  // deopt 126 [x25]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_x25_;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L146_:;
  // x26 = force? x25
  Rsh_Fir_reg_x26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x25_);
  // checkMissing(x26)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_x26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r60 = dyn as_integer(x26)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_x26_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L147() else D33()
  // L147()
  goto L147_;

D33_:;
  // deopt 129 [r60]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(129, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L147_:;
  // goto L38(r60)
  // L38(r60)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r60_;
  goto L38_;

L149_:;
  // x27 = ld x
  Rsh_Fir_reg_x27_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L151() else D34()
  // L151()
  goto L151_;

L150_:;
  // r62 = dyn base16(<sym x>)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L40(r62)
  // L40(r62)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r62_;
  goto L40_;

D34_:;
  // deopt 135 [x27]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_x27_;
  Rsh_Fir_deopt(135, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L151_:;
  // x28 = force? x27
  Rsh_Fir_reg_x28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x27_);
  // checkMissing(x28)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_x28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // is_numeric2 = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r64 = dyn is_numeric2(x28)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_x28_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric2_, 1, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L152() else D35()
  // L152()
  goto L152_;

D35_:;
  // deopt 138 [r64]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L152_:;
  // goto L40(r64)
  // L40(r64)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r64_;
  goto L40_;

L153_:;
  // sort = ldf sort
  Rsh_Fir_reg_sort = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L154() else D36()
  // L154()
  goto L154_;

D36_:;
  // deopt 140 []
  Rsh_Fir_deopt(140, 0, NULL, CCP, RHO);
  return R_NilValue;

L154_:;
  // p4 = prom<V +>{
  //   x29 = ld x;
  //   x30 = force? x29;
  //   checkMissing(x30);
  //   return x30;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner584326924_4, CCP, RHO);
  // p5 = prom<V +>{
  //   na_last3 = ld `na.last`;
  //   na_last4 = force? na_last3;
  //   checkMissing(na_last4);
  //   return na_last4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner584326924_5, CCP, RHO);
  // p6 = prom<V +>{
  //   decreasing5 = ld decreasing;
  //   decreasing6 = force? decreasing5;
  //   checkMissing(decreasing6);
  //   return decreasing6;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner584326924_6, CCP, RHO);
  // r68 = dyn sort[, `na.last`, decreasing, method, `index.return`](p4, p5, p6, "quick", TRUE)
  SEXP Rsh_Fir_array_args132[5];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args132[2] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args132[3] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args132[4] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names32[5];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names32[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names32[3] = Rsh_const(CCP, 13);
  Rsh_Fir_array_arg_names32[4] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort, 5, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L155() else D37()
  // L155()
  goto L155_;

D37_:;
  // deopt 150 [r68]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(150, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L155_:;
  // c122 = `is.object`(r68)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_c122_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // if c122 then L157() else L158(r68)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c122_)) {
  // L157()
    goto L157_;
  } else {
  // L158(r68)
    Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r68_;
    goto L158_;
  }

L156_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_;

L157_:;
  // dr = tryDispatchBuiltin.1("$", r68)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args134);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // if dc then L159() else L158(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L159()
    goto L159_;
  } else {
  // L158(dr)
    Rsh_Fir_reg_r70_ = Rsh_Fir_reg_dr;
    goto L158_;
  }

L158_:;
  // r71 = `$`(r70, <sym ix>)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_array_args136[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // goto L156(r71)
  // L156(r71)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r71_;
  goto L156_;

L159_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // goto L156(dx)
  // L156(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L156_;

D38_:;
  // deopt 154 []
  Rsh_Fir_deopt(154, 0, NULL, CCP, RHO);
  return R_NilValue;

L162_:;
  // r74 = dyn stop("method = \"quick\" is only for numeric 'x'")
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L163() else D39()
  // L163()
  goto L163_;

D39_:;
  // deopt 156 [r74]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(156, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L163_:;
  // goto L43()
  // L43()
  goto L43_;

L165_:;
  // na_last5 = ld `na.last`
  Rsh_Fir_reg_na_last5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L167() else D40()
  // L167()
  goto L167_;

L166_:;
  // r76 = dyn base17(<sym na.last>)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L44(r76)
  // L44(r76)
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r76_;
  goto L44_;

D40_:;
  // deopt 161 [na_last5]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_na_last5_;
  Rsh_Fir_deopt(161, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L167_:;
  // na_last6 = force? na_last5
  Rsh_Fir_reg_na_last6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_last5_);
  // checkMissing(na_last6)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_na_last6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r78 = dyn is_na(na_last6)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_na_last6_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L168() else D41()
  // L168()
  goto L168_;

D41_:;
  // deopt 164 [r78]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(164, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L168_:;
  // goto L44(r78)
  // L44(r78)
  Rsh_Fir_reg_r77_ = Rsh_Fir_reg_r78_;
  goto L44_;

L169_:;
  // x31 = ld x
  Rsh_Fir_reg_x31_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L170() else D42()
  // L170()
  goto L170_;

D42_:;
  // deopt 165 [x31]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_x31_;
  Rsh_Fir_deopt(165, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L170_:;
  // x32 = force? x31
  Rsh_Fir_reg_x32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x31_);
  // checkMissing(x32)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_x32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // c124 = `is.object`(x32)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_x32_;
  Rsh_Fir_reg_c124_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // if c124 then L171() else L172(x32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c124_)) {
  // L171()
    goto L171_;
  } else {
  // L172(x32)
    Rsh_Fir_reg_x34_ = Rsh_Fir_reg_x32_;
    goto L172_;
  }

L171_:;
  // dr2 = tryDispatchBuiltin.1("[", x32)
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg_x32_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args144);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // if dc1 then L173() else L172(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L173()
    goto L173_;
  } else {
  // L172(dr2)
    Rsh_Fir_reg_x34_ = Rsh_Fir_reg_dr2_;
    goto L172_;
  }

L172_:;
  // sym18 = ldf `is.na`
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base18 = ldf `is.na` in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args146[2];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args146[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args146);
  // if guard18 then L174() else L175()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L174()
    goto L174_;
  } else {
  // L175()
    goto L175_;
  }

L173_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // goto L46(dx2)
  // L46(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L46_;

L174_:;
  // x38 = ld x
  Rsh_Fir_reg_x38_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L176() else D43()
  // L176()
  goto L176_;

L175_:;
  // r79 = dyn base18(<sym x>)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args148, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L47(x34, r79)
  // L47(x34, r79)
  Rsh_Fir_reg_x37_ = Rsh_Fir_reg_x34_;
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r79_;
  goto L47_;

D43_:;
  // deopt 169 [x34, x38]
  SEXP Rsh_Fir_array_deopt_stack38[2];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_x34_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_x38_;
  Rsh_Fir_deopt(169, 2, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L176_:;
  // x39 = force? x38
  Rsh_Fir_reg_x39_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x38_);
  // checkMissing(x39)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_x39_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r81 = dyn is_na1(x39)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_x39_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L177() else D44()
  // L177()
  goto L177_;

D44_:;
  // deopt 172 [x34, r81]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_x34_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_r81_;
  Rsh_Fir_deopt(172, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L177_:;
  // goto L47(x34, r81)
  // L47(x34, r81)
  Rsh_Fir_reg_x37_ = Rsh_Fir_reg_x34_;
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r81_;
  goto L47_;

D45_:;
  // deopt 181 [method7]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_method7_;
  Rsh_Fir_deopt(181, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L179_:;
  // method8 = force? method7
  Rsh_Fir_reg_method8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method7_);
  // checkMissing(method8)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_method8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty()));
  // r85 = `==`(method8, "radix")
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_method8_;
  Rsh_Fir_array_args152[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty());
  // c125 = `as.logical`(r85)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_reg_c125_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // if c125 then L180() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c125_)) {
  // L180()
    goto L180_;
  } else {
  // L49()
    goto L49_;
  }

L180_:;
  // order = ldf order
  Rsh_Fir_reg_order = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // check L181() else D46()
  // L181()
  goto L181_;

D46_:;
  // deopt 186 []
  Rsh_Fir_deopt(186, 0, NULL, CCP, RHO);
  return R_NilValue;

L181_:;
  // p7 = prom<V +>{
  //   x40 = ld x;
  //   x41 = force? x40;
  //   checkMissing(x41);
  //   return x41;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner584326924_7, CCP, RHO);
  // p8 = prom<V +>{
  //   na_last7 = ld `na.last`;
  //   na_last8 = force? na_last7;
  //   checkMissing(na_last8);
  //   return na_last8;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner584326924_8, CCP, RHO);
  // p9 = prom<V +>{
  //   decreasing7 = ld decreasing;
  //   decreasing8 = force? decreasing7;
  //   checkMissing(decreasing8);
  //   return decreasing8;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner584326924_9, CCP, RHO);
  // r89 = dyn order[, `na.last`, decreasing, method](p7, p8, p9, "radix")
  SEXP Rsh_Fir_array_args157[4];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args157[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args157[2] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args157[3] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names38[4];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names38[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names38[3] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_order, 4, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L182() else D47()
  // L182()
  goto L182_;

D47_:;
  // deopt 194 [r89]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(194, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L182_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r89
  return Rsh_Fir_reg_r89_;

L185_:;
  // x42 = ld x
  Rsh_Fir_reg_x42_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L187() else D48()
  // L187()
  goto L187_;

L186_:;
  // r92 = dyn base19(<sym x>)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L51(r92)
  // L51(r92)
  Rsh_Fir_reg_r93_ = Rsh_Fir_reg_r92_;
  goto L51_;

D48_:;
  // deopt 200 [x42]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_x42_;
  Rsh_Fir_deopt(200, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L187_:;
  // x43 = force? x42
  Rsh_Fir_reg_x43_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x42_);
  // checkMissing(x43)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_x43_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // is_atomic1 = ldf `is.atomic` in base
  Rsh_Fir_reg_is_atomic1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r94 = dyn is_atomic1(x43)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_x43_;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_atomic1_, 1, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L188() else D49()
  // L188()
  goto L188_;

D49_:;
  // deopt 203 [r94]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_deopt(203, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L188_:;
  // goto L51(r94)
  // L51(r94)
  Rsh_Fir_reg_r93_ = Rsh_Fir_reg_r94_;
  goto L51_;

L189_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L190() else D50()
  // L190()
  goto L190_;

D50_:;
  // deopt 206 []
  Rsh_Fir_deopt(206, 0, NULL, CCP, RHO);
  return R_NilValue;

L190_:;
  // r96 = dyn stop1("'x' must be atomic for 'sort.list', method \"shell\" and \"quick\"\nHave you called 'sort' on a list?")
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args161, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L191() else D51()
  // L191()
  goto L191_;

D51_:;
  // deopt 208 [r96]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_deopt(208, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L191_:;
  // goto L53()
  // L53()
  goto L53_;

L193_:;
  // na_last9 = ld `na.last`
  Rsh_Fir_reg_na_last9_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L195() else D52()
  // L195()
  goto L195_;

L194_:;
  // r98 = dyn base20(<lang order(na.last, decreasing, x)>)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 1, Rsh_Fir_array_args162, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L54(r98)
  // L54(r98)
  Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r98_;
  goto L54_;

D52_:;
  // deopt 213 [na_last9]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_na_last9_;
  Rsh_Fir_deopt(213, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L195_:;
  // na_last10 = force? na_last9
  Rsh_Fir_reg_na_last10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_last9_);
  // checkMissing(na_last10)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_na_last10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty()));
  // decreasing9 = ld decreasing
  Rsh_Fir_reg_decreasing9_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L196() else D53()
  // L196()
  goto L196_;

D53_:;
  // deopt 215 [decreasing9]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_decreasing9_;
  Rsh_Fir_deopt(215, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L196_:;
  // decreasing10 = force? decreasing9
  Rsh_Fir_reg_decreasing10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_decreasing9_);
  // checkMissing(decreasing10)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_decreasing10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // x44 = ld x
  Rsh_Fir_reg_x44_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L197() else D54()
  // L197()
  goto L197_;

D54_:;
  // deopt 217 [x44]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_x44_;
  Rsh_Fir_deopt(217, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L197_:;
  // x45 = force? x44
  Rsh_Fir_reg_x45_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x44_);
  // checkMissing(x45)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_x45_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty()));
  // order1 = ldf order in base
  Rsh_Fir_reg_order1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r100 = dyn order1(na_last10, decreasing10, x45)
  SEXP Rsh_Fir_array_args166[3];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_na_last10_;
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_decreasing10_;
  Rsh_Fir_array_args166[2] = Rsh_Fir_reg_x45_;
  SEXP Rsh_Fir_array_arg_names43[3];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_array_arg_names43[2] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_order1_, 3, Rsh_Fir_array_args166, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L198() else D55()
  // L198()
  goto L198_;

D55_:;
  // deopt 220 [r100]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_deopt(220, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L198_:;
  // goto L54(r100)
  // L54(r100)
  Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r100_;
  goto L54_;
}
SEXP Rsh_Fir_user_promise_inner584326924_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
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
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r2 = dyn c("auto", "shell", "quick", "radix")
  SEXP Rsh_Fir_array_args5[4];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args5[3] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 4, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("auto", "shell", "quick", "radix")
  SEXP Rsh_Fir_array_args6[4];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args6[3] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner584326924_1(SEXP CCP, SEXP RHO) {
  // method1 = ld method
  Rsh_Fir_reg_method1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // method2 = force? method1
  Rsh_Fir_reg_method2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_method1_);
  // checkMissing(method2)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_method2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // return method2
  return Rsh_Fir_reg_method2_;
}
SEXP Rsh_Fir_user_promise_inner584326924_2(SEXP CCP, SEXP RHO) {
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // return x14
  return Rsh_Fir_reg_x14_;
}
SEXP Rsh_Fir_user_promise_inner584326924_3(SEXP CCP, SEXP RHO) {
  // x23 = ld x
  Rsh_Fir_reg_x23_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x24 = force? x23
  Rsh_Fir_reg_x24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x23_);
  // checkMissing(x24)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_x24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // return x24
  return Rsh_Fir_reg_x24_;
}
SEXP Rsh_Fir_user_promise_inner584326924_4(SEXP CCP, SEXP RHO) {
  // x29 = ld x
  Rsh_Fir_reg_x29_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x30 = force? x29
  Rsh_Fir_reg_x30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x29_);
  // checkMissing(x30)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_x30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty()));
  // return x30
  return Rsh_Fir_reg_x30_;
}
SEXP Rsh_Fir_user_promise_inner584326924_5(SEXP CCP, SEXP RHO) {
  // na_last3 = ld `na.last`
  Rsh_Fir_reg_na_last3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // na_last4 = force? na_last3
  Rsh_Fir_reg_na_last4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_last3_);
  // checkMissing(na_last4)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_na_last4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // return na_last4
  return Rsh_Fir_reg_na_last4_;
}
SEXP Rsh_Fir_user_promise_inner584326924_6(SEXP CCP, SEXP RHO) {
  // decreasing5 = ld decreasing
  Rsh_Fir_reg_decreasing5_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // decreasing6 = force? decreasing5
  Rsh_Fir_reg_decreasing6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_decreasing5_);
  // checkMissing(decreasing6)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_decreasing6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // return decreasing6
  return Rsh_Fir_reg_decreasing6_;
}
SEXP Rsh_Fir_user_promise_inner584326924_7(SEXP CCP, SEXP RHO) {
  // x40 = ld x
  Rsh_Fir_reg_x40_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x41 = force? x40
  Rsh_Fir_reg_x41_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x40_);
  // checkMissing(x41)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_x41_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty()));
  // return x41
  return Rsh_Fir_reg_x41_;
}
SEXP Rsh_Fir_user_promise_inner584326924_8(SEXP CCP, SEXP RHO) {
  // na_last7 = ld `na.last`
  Rsh_Fir_reg_na_last7_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // na_last8 = force? na_last7
  Rsh_Fir_reg_na_last8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_last7_);
  // checkMissing(na_last8)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_na_last8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty()));
  // return na_last8
  return Rsh_Fir_reg_na_last8_;
}
SEXP Rsh_Fir_user_promise_inner584326924_9(SEXP CCP, SEXP RHO) {
  // decreasing7 = ld decreasing
  Rsh_Fir_reg_decreasing7_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // decreasing8 = force? decreasing7
  Rsh_Fir_reg_decreasing8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_decreasing7_);
  // checkMissing(decreasing8)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_decreasing8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // return decreasing8
  return Rsh_Fir_reg_decreasing8_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
