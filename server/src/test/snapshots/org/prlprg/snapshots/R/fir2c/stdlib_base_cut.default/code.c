#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3545019636_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3545019636_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3545019636_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3545019636_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3545019636_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3545019636_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3545019636_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3545019636_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3545019636_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3545019636_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3545019636_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3545019636_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3545019636_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3545019636_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3545019636_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3545019636_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3545019636_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3545019636_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3545019636_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3545019636_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3545019636_18(SEXP CCP, SEXP RHO);
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
  // r = clos inner3545019636
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3545019636_, RHO, CCP);
  // st `cut.default` = r
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
SEXP Rsh_Fir_user_function_inner3545019636_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3545019636 dynamic dispatch ([x, breaks, labels, `include.lowest`, right, `dig.lab`, ordered_result, `...`])

  return Rsh_Fir_user_version_inner3545019636_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3545019636_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3545019636 version 0 (*, *, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 8) Rsh_error("FIŘ arity mismatch for inner3545019636/0: expected 8, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_breaks;  // breaks
  SEXP Rsh_Fir_reg_labels;  // labels
  SEXP Rsh_Fir_reg_include_lowest;  // include_lowest
  SEXP Rsh_Fir_reg_right;  // right
  SEXP Rsh_Fir_reg_dig_lab;  // dig_lab
  SEXP Rsh_Fir_reg_ordered_result;  // ordered_result
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_labels_isMissing;  // labels_isMissing
  SEXP Rsh_Fir_reg_labels_orDefault;  // labels_orDefault
  SEXP Rsh_Fir_reg_include_lowest_isMissing;  // include_lowest_isMissing
  SEXP Rsh_Fir_reg_include_lowest_orDefault;  // include_lowest_orDefault
  SEXP Rsh_Fir_reg_right_isMissing;  // right_isMissing
  SEXP Rsh_Fir_reg_right_orDefault;  // right_orDefault
  SEXP Rsh_Fir_reg_dig_lab_isMissing;  // dig_lab_isMissing
  SEXP Rsh_Fir_reg_dig_lab_orDefault;  // dig_lab_orDefault
  SEXP Rsh_Fir_reg_ordered_result_isMissing;  // ordered_result_isMissing
  SEXP Rsh_Fir_reg_ordered_result_orDefault;  // ordered_result_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_breaks1_;  // breaks1
  SEXP Rsh_Fir_reg_breaks2_;  // breaks2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_breaks3_;  // breaks3
  SEXP Rsh_Fir_reg_breaks4_;  // breaks4
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_breaks5_;  // breaks5
  SEXP Rsh_Fir_reg_breaks6_;  // breaks6
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_breaks7_;  // breaks7
  SEXP Rsh_Fir_reg_breaks8_;  // breaks8
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_diff;  // diff
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_range;  // range
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_rx;  // rx
  SEXP Rsh_Fir_reg_rx1_;  // rx1
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_rx3_;  // rx3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_rx4_;  // rx4
  SEXP Rsh_Fir_reg_rx5_;  // rx5
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_rx7_;  // rx7
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_abs;  // abs
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_rx8_;  // rx8
  SEXP Rsh_Fir_reg_rx9_;  // rx9
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_rx11_;  // rx11
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_rx12_;  // rx12
  SEXP Rsh_Fir_reg_rx13_;  // rx13
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_rx15_;  // rx15
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_nb;  // nb
  SEXP Rsh_Fir_reg_nb1_;  // nb1
  SEXP Rsh_Fir_reg_seq_int;  // seq_int
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_rx16_;  // rx16
  SEXP Rsh_Fir_reg_rx17_;  // rx17
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_rx19_;  // rx19
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_rx20_;  // rx20
  SEXP Rsh_Fir_reg_rx21_;  // rx21
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_rx23_;  // rx23
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_nb2_;  // nb2
  SEXP Rsh_Fir_reg_nb3_;  // nb3
  SEXP Rsh_Fir_reg_seq_int1_;  // seq_int1
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_rx24_;  // rx24
  SEXP Rsh_Fir_reg_rx25_;  // rx25
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_rx27_;  // rx27
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_rx28_;  // rx28
  SEXP Rsh_Fir_reg_rx29_;  // rx29
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_rx31_;  // rx31
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_nb4_;  // nb4
  SEXP Rsh_Fir_reg_nb5_;  // nb5
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_sort_int;  // sort_int
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_breaks9_;  // breaks9
  SEXP Rsh_Fir_reg_breaks10_;  // breaks10
  SEXP Rsh_Fir_reg_as_double;  // as_double
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_anyDuplicated;  // anyDuplicated
  SEXP Rsh_Fir_reg_breaks11_;  // breaks11
  SEXP Rsh_Fir_reg_breaks12_;  // breaks12
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_labels1_;  // labels1
  SEXP Rsh_Fir_reg_labels2_;  // labels2
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_dig_lab1_;  // dig_lab1
  SEXP Rsh_Fir_reg_dig_lab2_;  // dig_lab2
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_dig_lab5_;  // dig_lab5
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_dig_lab6_;  // dig_lab6
  SEXP Rsh_Fir_reg_dig_lab7_;  // dig_lab7
  SEXP Rsh_Fir_reg_max;  // max
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_formatC;  // formatC
  SEXP Rsh_Fir_reg_breaks13_;  // breaks13
  SEXP Rsh_Fir_reg_breaks14_;  // breaks14
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_dig;  // dig
  SEXP Rsh_Fir_reg_dig1_;  // dig1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_ch_br;  // ch_br
  SEXP Rsh_Fir_reg_ch_br1_;  // ch_br1
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_ch_br3_;  // ch_br3
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_ch_br4_;  // ch_br4
  SEXP Rsh_Fir_reg_ch_br5_;  // ch_br5
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_ch_br7_;  // ch_br7
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_nb6_;  // nb6
  SEXP Rsh_Fir_reg_nb7_;  // nb7
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_all;  // all
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_ok;  // ok
  SEXP Rsh_Fir_reg_ok1_;  // ok1
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_right1_;  // right1
  SEXP Rsh_Fir_reg_right2_;  // right2
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_ch_br8_;  // ch_br8
  SEXP Rsh_Fir_reg_ch_br9_;  // ch_br9
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_ch_br11_;  // ch_br11
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_nb8_;  // nb8
  SEXP Rsh_Fir_reg_nb9_;  // nb9
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg___10_;  // __10
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_ch_br12_;  // ch_br12
  SEXP Rsh_Fir_reg_ch_br13_;  // ch_br13
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_ch_br15_;  // ch_br15
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg___11_;  // __11
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_right3_;  // right3
  SEXP Rsh_Fir_reg_right4_;  // right4
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_r110_;  // r110
  SEXP Rsh_Fir_reg_paste1_;  // paste1
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r111_;  // r111
  SEXP Rsh_Fir_reg_r112_;  // r112
  SEXP Rsh_Fir_reg_nb10_;  // nb10
  SEXP Rsh_Fir_reg_nb11_;  // nb11
  SEXP Rsh_Fir_reg_r113_;  // r113
  SEXP Rsh_Fir_reg_r114_;  // r114
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r116_;  // r116
  SEXP Rsh_Fir_reg_ok2_;  // ok2
  SEXP Rsh_Fir_reg_ok3_;  // ok3
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_include_lowest1_;  // include_lowest1
  SEXP Rsh_Fir_reg_include_lowest2_;  // include_lowest2
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_right5_;  // right5
  SEXP Rsh_Fir_reg_right6_;  // right6
  SEXP Rsh_Fir_reg_c41_;  // c41
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_r119_;  // r119
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_r120_;  // r120
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx40_;  // dx40
  SEXP Rsh_Fir_reg_r123_;  // r123
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_r124_;  // r124
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg___12_;  // __12
  SEXP Rsh_Fir_reg_r125_;  // r125
  SEXP Rsh_Fir_reg_substr__;  // substr__
  SEXP Rsh_Fir_reg_r126_;  // r126
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_r128_;  // r128
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx42_;  // dx42
  SEXP Rsh_Fir_reg_r130_;  // r130
  SEXP Rsh_Fir_reg_dx43_;  // dx43
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r131_;  // r131
  SEXP Rsh_Fir_reg_r132_;  // r132
  SEXP Rsh_Fir_reg_l16_;  // l16
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_r135_;  // r135
  SEXP Rsh_Fir_reg_l19_;  // l19
  SEXP Rsh_Fir_reg_r136_;  // r136
  SEXP Rsh_Fir_reg_l20_;  // l20
  SEXP Rsh_Fir_reg_dr30_;  // dr30
  SEXP Rsh_Fir_reg_dc15_;  // dc15
  SEXP Rsh_Fir_reg_dx44_;  // dx44
  SEXP Rsh_Fir_reg_r139_;  // r139
  SEXP Rsh_Fir_reg_l22_;  // l22
  SEXP Rsh_Fir_reg_r140_;  // r140
  SEXP Rsh_Fir_reg_dx45_;  // dx45
  SEXP Rsh_Fir_reg_nb12_;  // nb12
  SEXP Rsh_Fir_reg_nb13_;  // nb13
  SEXP Rsh_Fir_reg_r141_;  // r141
  SEXP Rsh_Fir_reg___13_;  // __13
  SEXP Rsh_Fir_reg_r142_;  // r142
  SEXP Rsh_Fir_reg_substring__;  // substring__
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r143_;  // r143
  SEXP Rsh_Fir_reg_r144_;  // r144
  SEXP Rsh_Fir_reg_labels3_;  // labels3
  SEXP Rsh_Fir_reg_labels4_;  // labels4
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_labels6_;  // labels6
  SEXP Rsh_Fir_reg_dr32_;  // dr32
  SEXP Rsh_Fir_reg_dc16_;  // dc16
  SEXP Rsh_Fir_reg_dx46_;  // dx46
  SEXP Rsh_Fir_reg_dx47_;  // dx47
  SEXP Rsh_Fir_reg_nb14_;  // nb14
  SEXP Rsh_Fir_reg_nb15_;  // nb15
  SEXP Rsh_Fir_reg_r145_;  // r145
  SEXP Rsh_Fir_reg___14_;  // __14
  SEXP Rsh_Fir_reg_r146_;  // r146
  SEXP Rsh_Fir_reg_nchar;  // nchar
  SEXP Rsh_Fir_reg_r147_;  // r147
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r149_;  // r149
  SEXP Rsh_Fir_reg_c46_;  // c46
  SEXP Rsh_Fir_reg_r151_;  // r151
  SEXP Rsh_Fir_reg_l24_;  // l24
  SEXP Rsh_Fir_reg_dr34_;  // dr34
  SEXP Rsh_Fir_reg_dc17_;  // dc17
  SEXP Rsh_Fir_reg_dx48_;  // dx48
  SEXP Rsh_Fir_reg_r153_;  // r153
  SEXP Rsh_Fir_reg_dx49_;  // dx49
  SEXP Rsh_Fir_reg_nb16_;  // nb16
  SEXP Rsh_Fir_reg_nb17_;  // nb17
  SEXP Rsh_Fir_reg_r154_;  // r154
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r155_;  // r155
  SEXP Rsh_Fir_reg_r156_;  // r156
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r158_;  // r158
  SEXP Rsh_Fir_reg_r159_;  // r159
  SEXP Rsh_Fir_reg_labels7_;  // labels7
  SEXP Rsh_Fir_reg_labels8_;  // labels8
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_c48_;  // c48
  SEXP Rsh_Fir_reg_c50_;  // c50
  SEXP Rsh_Fir_reg_labels9_;  // labels9
  SEXP Rsh_Fir_reg_labels10_;  // labels10
  SEXP Rsh_Fir_reg_r160_;  // r160
  SEXP Rsh_Fir_reg_c51_;  // c51
  SEXP Rsh_Fir_reg_c52_;  // c52
  SEXP Rsh_Fir_reg_c54_;  // c54
  SEXP Rsh_Fir_reg_sym18_;  // sym18
  SEXP Rsh_Fir_reg_base18_;  // base18
  SEXP Rsh_Fir_reg_guard18_;  // guard18
  SEXP Rsh_Fir_reg_r161_;  // r161
  SEXP Rsh_Fir_reg_r162_;  // r162
  SEXP Rsh_Fir_reg_labels11_;  // labels11
  SEXP Rsh_Fir_reg_labels12_;  // labels12
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r163_;  // r163
  SEXP Rsh_Fir_reg_nb18_;  // nb18
  SEXP Rsh_Fir_reg_nb19_;  // nb19
  SEXP Rsh_Fir_reg_r164_;  // r164
  SEXP Rsh_Fir_reg_r165_;  // r165
  SEXP Rsh_Fir_reg_c55_;  // c55
  SEXP Rsh_Fir_reg_stop3_;  // stop3
  SEXP Rsh_Fir_reg_r166_;  // r166
  SEXP Rsh_Fir_reg__bincode;  // _bincode
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_breaks15_;  // breaks15
  SEXP Rsh_Fir_reg_breaks16_;  // breaks16
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_right7_;  // right7
  SEXP Rsh_Fir_reg_right8_;  // right8
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_include_lowest3_;  // include_lowest3
  SEXP Rsh_Fir_reg_include_lowest4_;  // include_lowest4
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r171_;  // r171
  SEXP Rsh_Fir_reg_codes_only;  // codes_only
  SEXP Rsh_Fir_reg_codes_only1_;  // codes_only1
  SEXP Rsh_Fir_reg_c56_;  // c56
  SEXP Rsh_Fir_reg_code;  // code
  SEXP Rsh_Fir_reg_code1_;  // code1
  SEXP Rsh_Fir_reg_factor;  // factor
  SEXP Rsh_Fir_reg_code2_;  // code2
  SEXP Rsh_Fir_reg_code3_;  // code3
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_sym19_;  // sym19
  SEXP Rsh_Fir_reg_base19_;  // base19
  SEXP Rsh_Fir_reg_guard19_;  // guard19
  SEXP Rsh_Fir_reg_r173_;  // r173
  SEXP Rsh_Fir_reg_r174_;  // r174
  SEXP Rsh_Fir_reg_labels13_;  // labels13
  SEXP Rsh_Fir_reg_labels14_;  // labels14
  SEXP Rsh_Fir_reg_r175_;  // r175
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_labels15_;  // labels15
  SEXP Rsh_Fir_reg_labels16_;  // labels16
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_ordered_result1_;  // ordered_result1
  SEXP Rsh_Fir_reg_ordered_result2_;  // ordered_result2
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_r179_;  // r179

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_breaks = PARAMS[1];
  Rsh_Fir_reg_labels = PARAMS[2];
  Rsh_Fir_reg_include_lowest = PARAMS[3];
  Rsh_Fir_reg_right = PARAMS[4];
  Rsh_Fir_reg_dig_lab = PARAMS[5];
  Rsh_Fir_reg_ordered_result = PARAMS[6];
  Rsh_Fir_reg_ddd = PARAMS[7];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st breaks = breaks
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_breaks, RHO);
  (void)(Rsh_Fir_reg_breaks);
  // labels_isMissing = missing.0(labels)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_labels;
  Rsh_Fir_reg_labels_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if labels_isMissing then L0(NULL) else L0(labels)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_labels_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_labels_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(labels)
    Rsh_Fir_reg_labels_orDefault = Rsh_Fir_reg_labels;
    goto L0_;
  }

L0_:;
  // st labels = labels_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_labels_orDefault, RHO);
  (void)(Rsh_Fir_reg_labels_orDefault);
  // include_lowest_isMissing = missing.0(include_lowest)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_include_lowest;
  Rsh_Fir_reg_include_lowest_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if include_lowest_isMissing then L1(FALSE) else L1(include_lowest)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_include_lowest_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_include_lowest_orDefault = Rsh_const(CCP, 5);
    goto L1_;
  } else {
  // L1(include_lowest)
    Rsh_Fir_reg_include_lowest_orDefault = Rsh_Fir_reg_include_lowest;
    goto L1_;
  }

L1_:;
  // st `include.lowest` = include_lowest_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_include_lowest_orDefault, RHO);
  (void)(Rsh_Fir_reg_include_lowest_orDefault);
  // right_isMissing = missing.0(right)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_right;
  Rsh_Fir_reg_right_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if right_isMissing then L2(TRUE) else L2(right)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_right_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_right_orDefault = Rsh_const(CCP, 7);
    goto L2_;
  } else {
  // L2(right)
    Rsh_Fir_reg_right_orDefault = Rsh_Fir_reg_right;
    goto L2_;
  }

L2_:;
  // st right = right_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_right_orDefault, RHO);
  (void)(Rsh_Fir_reg_right_orDefault);
  // dig_lab_isMissing = missing.0(dig_lab)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_dig_lab;
  Rsh_Fir_reg_dig_lab_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if dig_lab_isMissing then L3(3) else L3(dig_lab)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dig_lab_isMissing)) {
  // L3(3)
    Rsh_Fir_reg_dig_lab_orDefault = Rsh_const(CCP, 9);
    goto L3_;
  } else {
  // L3(dig_lab)
    Rsh_Fir_reg_dig_lab_orDefault = Rsh_Fir_reg_dig_lab;
    goto L3_;
  }

L3_:;
  // st `dig.lab` = dig_lab_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dig_lab_orDefault, RHO);
  (void)(Rsh_Fir_reg_dig_lab_orDefault);
  // ordered_result_isMissing = missing.0(ordered_result)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_ordered_result;
  Rsh_Fir_reg_ordered_result_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if ordered_result_isMissing then L4(FALSE) else L4(ordered_result)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ordered_result_isMissing)) {
  // L4(FALSE)
    Rsh_Fir_reg_ordered_result_orDefault = Rsh_const(CCP, 5);
    goto L4_;
  } else {
  // L4(ordered_result)
    Rsh_Fir_reg_ordered_result_orDefault = Rsh_Fir_reg_ordered_result;
    goto L4_;
  }

L4_:;
  // st ordered_result = ordered_result_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_ordered_result_orDefault, RHO);
  (void)(Rsh_Fir_reg_ordered_result_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `is.numeric`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base = ldf `is.numeric` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L5_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c then L70() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L70()
    goto L70_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard1 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L8_:;
  // r9 = `==`(r7, 1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c1 then L78() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L78()
    goto L78_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // sym10 = ldf length
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base10 = ldf length in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard10 then L159() else L160()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L159()
    goto L159_;
  } else {
  // L160()
    goto L160_;
  }

L10_:;
  // c2 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c2 then L11(c2) else L83()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L11(c2)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c2_;
    goto L11_;
  } else {
  // L83()
    goto L83_;
  }

L11_:;
  // c8 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c8 then L86() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L86()
    goto L86_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // sym3 = ldf `as.integer`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base3 = ldf `as.integer` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard3 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L14_:;
  // st nb = r17
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // diff = ldf diff
  Rsh_Fir_reg_diff = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L94() else D13()
  // L94()
  goto L94_;

L15_:;
  // sym7 = ldf `seq.int`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base7 = ldf `seq.int` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard7 then L126() else L127()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L126()
    goto L126_;
  } else {
  // L127()
    goto L127_;
  }

L16_:;
  // r27 = `!=`(dx3, 0.0)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // c11 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c11 then L102() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L102()
    goto L102_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // goto L20(1.0)
  // L20(1.0)
  Rsh_Fir_reg_r32_ = Rsh_const(CCP, 21);
  goto L20_;

L18_:;
  // goto L20(r29)
  // L20(r29)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r29_;
  goto L20_;

L19_:;
  // abs = ldf abs in base
  Rsh_Fir_reg_abs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r31 = dyn abs(dx5)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L109() else D18()
  // L109()
  goto L109_;

L20_:;
  // st dx = r32
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // sym6 = ldf `seq.int`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base6 = ldf `seq.int` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard6 then L111() else L112()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L111()
    goto L111_;
  } else {
  // L112()
    goto L112_;
  }

L21_:;
  // st breaks = r34
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // goto L24(r34)
  // L24(r34)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r34_;
  goto L24_;

L22_:;
  // dx8 = ld dx
  Rsh_Fir_reg_dx8_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L117() else D20()
  // L117()
  goto L117_;

L23_:;
  // dx12 = ld dx
  Rsh_Fir_reg_dx12_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L122() else D22()
  // L122()
  goto L122_;

L24_:;
  // goto L33()
  // L33()
  goto L33_;

L25_:;
  // st breaks = r44
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // sym8 = ldf c
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base8 = ldf c in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard8 then L138() else L139()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L138()
    goto L138_;
  } else {
  // L139()
    goto L139_;
  }

L26_:;
  // rx20 = ld rx
  Rsh_Fir_reg_rx20_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L132() else D26()
  // L132()
  goto L132_;

L27_:;
  // nb2 = ld nb
  Rsh_Fir_reg_nb2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L136() else D27()
  // L136()
  goto L136_;

L28_:;
  // l = ld breaks
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // c20 = `is.object`(l)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c20 then L151() else L152(r49, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L151()
    goto L151_;
  } else {
  // L152(r49, l)
    Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r49_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L152_;
  }

L29_:;
  // dx20 = ld dx
  Rsh_Fir_reg_dx20_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L144() else D30()
  // L144()
  goto L144_;

L30_:;
  // dx24 = ld dx
  Rsh_Fir_reg_dx24_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L149() else D32()
  // L149()
  goto L149_;

L31_:;
  // st breaks = dx27
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx27_, RHO);
  (void)(Rsh_Fir_reg_dx27_);
  // goto L24(r60)
  // L24(r60)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r60_;
  goto L24_;

L32_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r70 = dyn ___(l5, r67, r68)
  SEXP Rsh_Fir_array_args22[3];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_r67_;
  Rsh_Fir_array_args22[2] = Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L31(r66, r70)
  // L31(r66, r70)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r70_;
  goto L31_;

L33_:;
  // anyDuplicated = ldf anyDuplicated
  Rsh_Fir_reg_anyDuplicated = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L164() else D39()
  // L164()
  goto L164_;

L34_:;
  // st nb = r73
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r73_, RHO);
  (void)(Rsh_Fir_reg_r73_);
  // goto L33()
  // L33()
  goto L33_;

L35_:;
  // goto L36()
  // L36()
  goto L36_;

L36_:;
  // st `codes.only` = FALSE
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_const(CCP, 5), RHO);
  (void)(Rsh_const(CCP, 5));
  // sym12 = ldf `is.null`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base12 = ldf `is.null` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard12 then L170() else L171()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L170()
    goto L170_;
  } else {
  // L171()
    goto L171_;
  }

L37_:;
  // c24 = `as.logical`(r85)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c24 then L173() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L173()
    goto L173_;
  } else {
  // L38()
    goto L38_;
  }

L38_:;
  // sym17 = ldf `is.logical`
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base17 = ldf `is.logical` in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard17 then L232() else L233()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L232()
    goto L232_;
  } else {
  // L233()
    goto L233_;
  }

L39_:;
  // r89 = `:`(dig_lab5, r87)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dig_lab5_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_r87_;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // s = toForSeq(r89)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // l6 = length(s)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l6_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 31);
  // goto L40(i)
  // L40(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L40_;

L40_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args29);
  // c25 = `<`.1(l6, i2)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if c25 then L179() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L179()
    goto L179_;
  } else {
  // L47()
    goto L47_;
  }

L41_:;
  // st ok = r95
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r95_, RHO);
  (void)(Rsh_Fir_reg_r95_);
  // c28 = `as.logical`(r95)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c28 then L194() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L194()
    goto L194_;
  } else {
  // L44()
    goto L44_;
  }

L42_:;
  // ch_br4 = ld `ch.br`
  Rsh_Fir_reg_ch_br4_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L188() else D50()
  // L188()
  goto L188_;

L43_:;
  // r99 = `!=`(dx34, dx35)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dx34_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_dx35_;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r100 = dyn all(r99)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L193() else D52()
  // L193()
  goto L193_;

L44_:;
  // goto L40(i7)
  // L40(i7)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i7_;
  goto L40_;

L45_:;
  // ok = ld ok
  Rsh_Fir_reg_ok = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L197() else D53()
  // L197()
  goto L197_;

L47_:;
  // x5 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args34[4];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args34[3] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_x5_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // st dig = x5
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_x5_, RHO);
  (void)(Rsh_Fir_reg_x5_);
  // formatC = ldf formatC
  Rsh_Fir_reg_formatC = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L180() else D47()
  // L180()
  goto L180_;

L48_:;
  // paste1 = ldf paste0
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L202() else D56()
  // L202()
  goto L202_;

L49_:;
  // st labels = r110
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r110_, RHO);
  (void)(Rsh_Fir_reg_r110_);
  // ok2 = ld ok
  Rsh_Fir_reg_ok2_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L204() else D58()
  // L204()
  goto L204_;

L50_:;
  // c40 = `as.logical`(c36)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_c36_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c40 then L208() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L208()
    goto L208_;
  } else {
  // L51()
    goto L51_;
  }

L51_:;
  // goto L58(NULL)
  // L58(NULL)
  Rsh_Fir_reg_r156_ = Rsh_const(CCP, 3);
  goto L58_;

L52_:;
  // l16 = ld labels
  Rsh_Fir_reg_l16_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c44 = `is.object`(l16)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_l16_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if c44 then L220() else L221("]", l16, "]", l16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c44_)) {
  // L220()
    goto L220_;
  } else {
  // L221("]", l16, "]", l16)
    Rsh_Fir_reg_r135_ = Rsh_const(CCP, 38);
    Rsh_Fir_reg_l19_ = Rsh_Fir_reg_l16_;
    Rsh_Fir_reg_r136_ = Rsh_const(CCP, 38);
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_l16_;
    goto L221_;
  }

L53_:;
  // substr__ = ldf `substr<-`
  Rsh_Fir_reg_substr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L214() else D61()
  // L214()
  goto L214_;

L54_:;
  // st labels = dx43
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx43_, RHO);
  (void)(Rsh_Fir_reg_dx43_);
  // goto L55(r130)
  // L55(r130)
  Rsh_Fir_reg_r132_ = Rsh_Fir_reg_r130_;
  goto L55_;

L55_:;
  // goto L58(r132)
  // L58(r132)
  Rsh_Fir_reg_r156_ = Rsh_Fir_reg_r132_;
  goto L58_;

L56_:;
  // substring__ = ldf `substring<-`
  Rsh_Fir_reg_substring__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L224() else D64()
  // L224()
  goto L224_;

L57_:;
  // st labels = dx49
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx49_, RHO);
  (void)(Rsh_Fir_reg_dx49_);
  // goto L55(r153)
  // L55(r153)
  Rsh_Fir_reg_r132_ = Rsh_Fir_reg_r153_;
  goto L55_;

L58_:;
  // goto L59()
  // L59()
  goto L59_;

L59_:;
  // _bincode = ldf `.bincode`
  Rsh_Fir_reg__bincode = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L249() else D74()
  // L249()
  goto L249_;

L60_:;
  // c48 = `as.logical`(r159)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r159_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if c48 then L235() else L61(c48)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c48_)) {
  // L235()
    goto L235_;
  } else {
  // L61(c48)
    Rsh_Fir_reg_c50_ = Rsh_Fir_reg_c48_;
    goto L61_;
  }

L61_:;
  // c54 = `as.logical`(c50)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_c50_;
  Rsh_Fir_reg_c54_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c54 then L238() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c54_)) {
  // L238()
    goto L238_;
  } else {
  // L62()
    goto L62_;
  }

L62_:;
  // sym18 = ldf length
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base18 = ldf length in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard18 then L240() else L241()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L240()
    goto L240_;
  } else {
  // L241()
    goto L241_;
  }

L63_:;
  // nb18 = ld nb
  Rsh_Fir_reg_nb18_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L244() else D71()
  // L244()
  goto L244_;

L64_:;
  // goto L59()
  // L59()
  goto L59_;

L65_:;
  // factor = ldf factor
  Rsh_Fir_reg_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // check L255() else D78()
  // L255()
  goto L255_;

L66_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L68() else D0()
  // L68()
  goto L68_;

L67_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L5(r)
  // L5(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L5_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L68_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r2 = dyn is_numeric(x2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L69() else D1()
  // L69()
  goto L69_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L69_:;
  // goto L5(r2)
  // L5(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L5_;

L70_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L71() else D2()
  // L71()
  goto L71_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L71_:;
  // r4 = dyn stop("'x' must be numeric")
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L72() else D3()
  // L72()
  goto L72_;

D3_:;
  // deopt 10 [r4]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L7()
  // L7()
  goto L7_;

L74_:;
  // breaks1 = ld breaks
  Rsh_Fir_reg_breaks1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L76() else D4()
  // L76()
  goto L76_;

L75_:;
  // r6 = dyn base1(<sym breaks>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L8(r6)
  // L8(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L8_;

D4_:;
  // deopt 15 [breaks1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_breaks1_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L76_:;
  // breaks2 = force? breaks1
  Rsh_Fir_reg_breaks2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_breaks1_);
  // checkMissing(breaks2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_breaks2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r8 = dyn length(breaks2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_breaks2_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L77() else D5()
  // L77()
  goto L77_;

D5_:;
  // deopt 18 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L77_:;
  // goto L8(r8)
  // L8(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L8_;

L78_:;
  // sym2 = ldf `is.na`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base2 = ldf `is.na` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard2 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L79_:;
  // breaks3 = ld breaks
  Rsh_Fir_reg_breaks3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L81() else D6()
  // L81()
  goto L81_;

L80_:;
  // r10 = dyn base2(<sym breaks>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L10(r10)
  // L10(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L10_;

D6_:;
  // deopt 23 [breaks3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_breaks3_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L81_:;
  // breaks4 = force? breaks3
  Rsh_Fir_reg_breaks4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_breaks3_);
  // checkMissing(breaks4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_breaks4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r12 = dyn is_na(breaks4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_breaks4_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L82() else D7()
  // L82()
  goto L82_;

D7_:;
  // deopt 26 [r12]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L82_:;
  // goto L10(r12)
  // L10(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L10_;

L83_:;
  // breaks5 = ld breaks
  Rsh_Fir_reg_breaks5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L84() else D8()
  // L84()
  goto L84_;

D8_:;
  // deopt 27 [c2, breaks5]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_breaks5_;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L84_:;
  // breaks6 = force? breaks5
  Rsh_Fir_reg_breaks6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_breaks5_);
  // checkMissing(breaks6)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_breaks6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // r13 = `<`(breaks6, 2)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_breaks6_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // c5 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // c6 = `||`(c2, c5)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L11(c6)
  // L11(c6)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c6_;
  goto L11_;

L86_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L87() else D9()
  // L87()
  goto L87_;

D9_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L87_:;
  // r14 = dyn stop1("invalid number of intervals")
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L88() else D10()
  // L88()
  goto L88_;

D10_:;
  // deopt 35 [r14]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L88_:;
  // goto L13()
  // L13()
  goto L13_;

L90_:;
  // breaks7 = ld breaks
  Rsh_Fir_reg_breaks7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L92() else D11()
  // L92()
  goto L92_;

L91_:;
  // r16 = dyn base3(<lang `+`(breaks, 1.0)>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L14(r16)
  // L14(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L14_;

D11_:;
  // deopt 40 [breaks7]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_breaks7_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L92_:;
  // breaks8 = force? breaks7
  Rsh_Fir_reg_breaks8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_breaks7_);
  // checkMissing(breaks8)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_breaks8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // r18 = `+`(breaks8, 1.0)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_breaks8_;
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r19 = dyn as_integer(r18)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L93() else D12()
  // L93()
  goto L93_;

D12_:;
  // deopt 45 [r19]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L93_:;
  // goto L14(r19)
  // L14(r19)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r19_;
  goto L14_;

D13_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

L94_:;
  // p = prom<V +>{
  //   sym4 = ldf range;
  //   base4 = ldf range in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r21):
  //   st rx = r21;
  //   invisible.0();
  //   return r21;
  // L1():
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   range = ldf range in base;
  //   r22 = dyn range(x4, TRUE);
  //   goto L0(r22);
  // L2():
  //   r20 = dyn base4[, `na.rm`](<sym x>, TRUE);
  //   goto L0(r20);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3545019636_, CCP, RHO);
  // r24 = dyn diff(p)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_diff, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L95() else D14()
  // L95()
  goto L95_;

D14_:;
  // deopt 50 [r24]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L95_:;
  // st dx = r24
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // dx = ld dx
  Rsh_Fir_reg_dx = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L96() else D15()
  // L96()
  goto L96_;

D15_:;
  // deopt 52 [dx]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_dx;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L96_:;
  // dx1 = force? dx
  Rsh_Fir_reg_dx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dx);
  // checkMissing(dx1)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // r25 = `==`(dx1, 0.0)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r25)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if c9 then L97() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L97()
    goto L97_;
  } else {
  // L15()
    goto L15_;
  }

L97_:;
  // rx = ld rx
  Rsh_Fir_reg_rx = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L98() else D16()
  // L98()
  goto L98_;

D16_:;
  // deopt 56 [rx]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_rx;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L98_:;
  // rx1 = force? rx
  Rsh_Fir_reg_rx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rx);
  // checkMissing(rx1)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_rx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(rx1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_rx1_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if c10 then L99() else L100(rx1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L99()
    goto L99_;
  } else {
  // L100(rx1)
    Rsh_Fir_reg_rx3_ = Rsh_Fir_reg_rx1_;
    goto L100_;
  }

L99_:;
  // dr = tryDispatchBuiltin.1("[", rx1)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_rx1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args70);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc then L101() else L100(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L101()
    goto L101_;
  } else {
  // L100(dr)
    Rsh_Fir_reg_rx3_ = Rsh_Fir_reg_dr;
    goto L100_;
  }

L100_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r26 = dyn __(rx3, 1)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_rx3_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L16(r26)
  // L16(r26)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r26_;
  goto L16_;

L101_:;
  // dx2 = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L16(dx2)
  // L16(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L16_;

L102_:;
  // sym5 = ldf abs
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base5 = ldf abs in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args74);
  // if guard5 then L103() else L104()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L103()
    goto L103_;
  } else {
  // L104()
    goto L104_;
  }

L103_:;
  // rx4 = ld rx
  Rsh_Fir_reg_rx4_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L105() else D17()
  // L105()
  goto L105_;

L104_:;
  // r28 = dyn base5(<lang `[`(rx, 1)>)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L18(r28)
  // L18(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L18_;

D17_:;
  // deopt 65 [rx4]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_rx4_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L105_:;
  // rx5 = force? rx4
  Rsh_Fir_reg_rx5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rx4_);
  // checkMissing(rx5)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_rx5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(rx5)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_rx5_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // if c12 then L106() else L107(rx5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L106()
    goto L106_;
  } else {
  // L107(rx5)
    Rsh_Fir_reg_rx7_ = Rsh_Fir_reg_rx5_;
    goto L107_;
  }

L106_:;
  // dr2 = tryDispatchBuiltin.1("[", rx5)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_rx5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args78);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if dc1 then L108() else L107(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L108()
    goto L108_;
  } else {
  // L107(dr2)
    Rsh_Fir_reg_rx7_ = Rsh_Fir_reg_dr2_;
    goto L107_;
  }

L107_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r30 = dyn __1(rx7, 1)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_rx7_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L19(r30)
  // L19(r30)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r30_;
  goto L19_;

L108_:;
  // dx4 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L19(dx4)
  // L19(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L19_;

D18_:;
  // deopt 71 [r31]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L109_:;
  // goto L18(r31)
  // L18(r31)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r31_;
  goto L18_;

L111_:;
  // rx8 = ld rx
  Rsh_Fir_reg_rx8_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L113() else D19()
  // L113()
  goto L113_;

L112_:;
  // r33 = dyn base6[, , `length.out`](<lang `-`(`[`(rx, 1), `/`(dx, 1000.0))>, <lang `+`(`[`(rx, 2), `/`(dx, 1000.0))>, <sym nb>)
  SEXP Rsh_Fir_array_args82[3];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args82[2] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 3, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L21(r33)
  // L21(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L21_;

D19_:;
  // deopt 77 [rx8]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_rx8_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L113_:;
  // rx9 = force? rx8
  Rsh_Fir_reg_rx9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rx8_);
  // checkMissing(rx9)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_rx9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(rx9)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_rx9_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if c13 then L114() else L115(rx9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L114()
    goto L114_;
  } else {
  // L115(rx9)
    Rsh_Fir_reg_rx11_ = Rsh_Fir_reg_rx9_;
    goto L115_;
  }

L114_:;
  // dr4 = tryDispatchBuiltin.1("[", rx9)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_rx9_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args85);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if dc2 then L116() else L115(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L116()
    goto L116_;
  } else {
  // L115(dr4)
    Rsh_Fir_reg_rx11_ = Rsh_Fir_reg_dr4_;
    goto L115_;
  }

L115_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r35 = dyn __2(rx11, 1)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_rx11_;
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L22(r35)
  // L22(r35)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r35_;
  goto L22_;

L116_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // goto L22(dx6)
  // L22(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L22_;

D20_:;
  // deopt 81 [dx7, dx8]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_deopt(81, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L117_:;
  // dx9 = force? dx8
  Rsh_Fir_reg_dx9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dx8_);
  // checkMissing(dx9)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dx9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // r36 = `/`(dx9, 1000.0)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 57);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // r37 = `-`(dx7, r36)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // rx12 = ld rx
  Rsh_Fir_reg_rx12_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L118() else D21()
  // L118()
  goto L118_;

D21_:;
  // deopt 86 [rx12]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_rx12_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L118_:;
  // rx13 = force? rx12
  Rsh_Fir_reg_rx13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rx12_);
  // checkMissing(rx13)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_rx13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(rx13)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_rx13_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if c14 then L119() else L120(rx13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L119()
    goto L119_;
  } else {
  // L120(rx13)
    Rsh_Fir_reg_rx15_ = Rsh_Fir_reg_rx13_;
    goto L120_;
  }

L119_:;
  // dr6 = tryDispatchBuiltin.1("[", rx13)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_rx13_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args94);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // if dc3 then L121() else L120(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L121()
    goto L121_;
  } else {
  // L120(dr6)
    Rsh_Fir_reg_rx15_ = Rsh_Fir_reg_dr6_;
    goto L120_;
  }

L120_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r38 = dyn __3(rx15, 2)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_rx15_;
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L23(r38)
  // L23(r38)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r38_;
  goto L23_;

L121_:;
  // dx10 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L23(dx10)
  // L23(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L23_;

D22_:;
  // deopt 90 [dx11, dx12]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L122_:;
  // dx13 = force? dx12
  Rsh_Fir_reg_dx13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dx12_);
  // checkMissing(dx13)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dx13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // r39 = `/`(dx13, 1000.0)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 57);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // r40 = `+`(dx11, r39)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // nb = ld nb
  Rsh_Fir_reg_nb = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L123() else D23()
  // L123()
  goto L123_;

D23_:;
  // deopt 95 [nb]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_nb;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L123_:;
  // nb1 = force? nb
  Rsh_Fir_reg_nb1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nb);
  // checkMissing(nb1)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_nb1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r41 = dyn seq_int(r37, r40, nb1)
  SEXP Rsh_Fir_array_args102[3];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_args102[2] = Rsh_Fir_reg_nb1_;
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 3, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L124() else D24()
  // L124()
  goto L124_;

D24_:;
  // deopt 99 [r41]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L124_:;
  // goto L21(r41)
  // L21(r41)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r41_;
  goto L21_;

L126_:;
  // rx16 = ld rx
  Rsh_Fir_reg_rx16_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L128() else D25()
  // L128()
  goto L128_;

L127_:;
  // r43 = dyn base7[, , `length.out`](<lang `[`(rx, 1)>, <lang `[`(rx, 2)>, <sym nb>)
  SEXP Rsh_Fir_array_args103[3];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args103[1] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args103[2] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 3, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L25(r43)
  // L25(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L25_;

D25_:;
  // deopt 103 [rx16]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_rx16_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L128_:;
  // rx17 = force? rx16
  Rsh_Fir_reg_rx17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rx16_);
  // checkMissing(rx17)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_rx17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(rx17)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_rx17_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if c15 then L129() else L130(rx17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L129()
    goto L129_;
  } else {
  // L130(rx17)
    Rsh_Fir_reg_rx19_ = Rsh_Fir_reg_rx17_;
    goto L130_;
  }

L129_:;
  // dr8 = tryDispatchBuiltin.1("[", rx17)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_rx17_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args106);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // if dc4 then L131() else L130(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L131()
    goto L131_;
  } else {
  // L130(dr8)
    Rsh_Fir_reg_rx19_ = Rsh_Fir_reg_dr8_;
    goto L130_;
  }

L130_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r45 = dyn __4(rx19, 1)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_rx19_;
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L26(r45)
  // L26(r45)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r45_;
  goto L26_;

L131_:;
  // dx14 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // goto L26(dx14)
  // L26(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L26_;

D26_:;
  // deopt 108 [rx20]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_rx20_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L132_:;
  // rx21 = force? rx20
  Rsh_Fir_reg_rx21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rx20_);
  // checkMissing(rx21)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_rx21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(rx21)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_rx21_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // if c16 then L133() else L134(rx21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L133()
    goto L133_;
  } else {
  // L134(rx21)
    Rsh_Fir_reg_rx23_ = Rsh_Fir_reg_rx21_;
    goto L134_;
  }

L133_:;
  // dr10 = tryDispatchBuiltin.1("[", rx21)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_rx21_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args112);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // if dc5 then L135() else L134(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L135()
    goto L135_;
  } else {
  // L134(dr10)
    Rsh_Fir_reg_rx23_ = Rsh_Fir_reg_dr10_;
    goto L134_;
  }

L134_:;
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r46 = dyn __5(rx23, 2)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_rx23_;
  Rsh_Fir_array_args114[1] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L27(r46)
  // L27(r46)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r46_;
  goto L27_;

L135_:;
  // dx16 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // goto L27(dx16)
  // L27(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L27_;

D27_:;
  // deopt 113 [nb2]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_nb2_;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L136_:;
  // nb3 = force? nb2
  Rsh_Fir_reg_nb3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nb2_);
  // checkMissing(nb3)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_nb3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // seq_int1 = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r47 = dyn seq_int1(dx15, dx17, nb3)
  SEXP Rsh_Fir_array_args117[3];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_array_args117[2] = Rsh_Fir_reg_nb3_;
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int1_, 3, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L137() else D28()
  // L137()
  goto L137_;

D28_:;
  // deopt 117 [r47]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L137_:;
  // goto L25(r47)
  // L25(r47)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r47_;
  goto L25_;

L138_:;
  // rx24 = ld rx
  Rsh_Fir_reg_rx24_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L140() else D29()
  // L140()
  goto L140_;

L139_:;
  // r48 = dyn base8(<lang `-`(`[`(rx, 1), `/`(dx, 1000.0))>, <lang `+`(`[`(rx, 2), `/`(dx, 1000.0))>)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args118[1] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L28(r48)
  // L28(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L28_;

D29_:;
  // deopt 121 [rx24]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_rx24_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L140_:;
  // rx25 = force? rx24
  Rsh_Fir_reg_rx25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rx24_);
  // checkMissing(rx25)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_rx25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(rx25)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_rx25_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // if c17 then L141() else L142(rx25)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L141()
    goto L141_;
  } else {
  // L142(rx25)
    Rsh_Fir_reg_rx27_ = Rsh_Fir_reg_rx25_;
    goto L142_;
  }

L141_:;
  // dr12 = tryDispatchBuiltin.1("[", rx25)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_rx25_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args121);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // if dc6 then L143() else L142(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L143()
    goto L143_;
  } else {
  // L142(dr12)
    Rsh_Fir_reg_rx27_ = Rsh_Fir_reg_dr12_;
    goto L142_;
  }

L142_:;
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r50 = dyn __6(rx27, 1)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_rx27_;
  Rsh_Fir_array_args123[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L29(r50)
  // L29(r50)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r50_;
  goto L29_;

L143_:;
  // dx18 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // goto L29(dx18)
  // L29(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L29_;

D30_:;
  // deopt 125 [dx19, dx20]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_deopt(125, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L144_:;
  // dx21 = force? dx20
  Rsh_Fir_reg_dx21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dx20_);
  // checkMissing(dx21)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_dx21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // r51 = `/`(dx21, 1000.0)
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_args126[1] = Rsh_const(CCP, 57);
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // r52 = `-`(dx19, r51)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // rx28 = ld rx
  Rsh_Fir_reg_rx28_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L145() else D31()
  // L145()
  goto L145_;

D31_:;
  // deopt 130 [rx28]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_rx28_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L145_:;
  // rx29 = force? rx28
  Rsh_Fir_reg_rx29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rx28_);
  // checkMissing(rx29)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_rx29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // c18 = `is.object`(rx29)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_rx29_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // if c18 then L146() else L147(rx29)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L146()
    goto L146_;
  } else {
  // L147(rx29)
    Rsh_Fir_reg_rx31_ = Rsh_Fir_reg_rx29_;
    goto L147_;
  }

L146_:;
  // dr14 = tryDispatchBuiltin.1("[", rx29)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_rx29_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args130);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // if dc7 then L148() else L147(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L148()
    goto L148_;
  } else {
  // L147(dr14)
    Rsh_Fir_reg_rx31_ = Rsh_Fir_reg_dr14_;
    goto L147_;
  }

L147_:;
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r53 = dyn __7(rx31, 2)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_rx31_;
  Rsh_Fir_array_args132[1] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L30(r53)
  // L30(r53)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r53_;
  goto L30_;

L148_:;
  // dx22 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // goto L30(dx22)
  // L30(dx22)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L30_;

D32_:;
  // deopt 134 [dx23, dx24]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_dx24_;
  Rsh_Fir_deopt(134, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L149_:;
  // dx25 = force? dx24
  Rsh_Fir_reg_dx25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dx24_);
  // checkMissing(dx25)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dx25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty()));
  // r54 = `/`(dx25, 1000.0)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_array_args135[1] = Rsh_const(CCP, 57);
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // r55 = `+`(dx23, r54)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // c19 = ldf c in base
  Rsh_Fir_reg_c19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r56 = dyn c19(r52, r55)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c19_, 2, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L150() else D33()
  // L150()
  goto L150_;

D33_:;
  // deopt 140 [r56]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L150_:;
  // goto L28(r56)
  // L28(r56)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r56_;
  goto L28_;

L151_:;
  // dr16 = tryDispatchBuiltin.0("[<-", l, r49)
  SEXP Rsh_Fir_array_args138[3];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args138[2] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args138);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // if dc8 then L153() else L152(r49, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L153()
    goto L153_;
  } else {
  // L152(r49, dr16)
    Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r49_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr16_;
    goto L152_;
  }

L152_:;
  // sym9 = ldf c
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base9 = ldf c in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args140[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args140);
  // if guard9 then L154() else L155()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L154()
    goto L154_;
  } else {
  // L155()
    goto L155_;
  }

L153_:;
  // dx26 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // goto L31(r49, dx26)
  // L31(r49, dx26)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L31_;

L154_:;
  // nb4 = ld nb
  Rsh_Fir_reg_nb4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L156() else D34()
  // L156()
  goto L156_;

L155_:;
  // r65 = dyn base9(1, <sym nb>)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args142[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args142, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L32(r58, l2, r49, r65)
  // L32(r58, l2, r49, r65)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r65_;
  goto L32_;

D34_:;
  // deopt 145 [r58, l2, r49, nb4]
  SEXP Rsh_Fir_array_deopt_stack31[4];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack31[2] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_deopt_stack31[3] = Rsh_Fir_reg_nb4_;
  Rsh_Fir_deopt(145, 4, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L156_:;
  // nb5 = force? nb4
  Rsh_Fir_reg_nb5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nb4_);
  // checkMissing(nb5)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_nb5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty()));
  // c21 = ldf c in base
  Rsh_Fir_reg_c21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r69 = dyn c21(1, nb5)
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg_nb5_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c21_, 2, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L157() else D35()
  // L157()
  goto L157_;

D35_:;
  // deopt 148 [r58, l2, r49, r69]
  SEXP Rsh_Fir_array_deopt_stack32[4];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_deopt_stack32[3] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(148, 4, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L157_:;
  // goto L32(r58, l2, r49, r69)
  // L32(r58, l2, r49, r69)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r69_;
  goto L32_;

L159_:;
  // sort_int = ldf `sort.int`
  Rsh_Fir_reg_sort_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // check L161() else D36()
  // L161()
  goto L161_;

L160_:;
  // r72 = dyn base10(<lang `<-`(breaks, sort.int(as.double(breaks)))>)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_const(CCP, 61);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L34(r72)
  // L34(r72)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r72_;
  goto L34_;

D36_:;
  // deopt 154 []
  Rsh_Fir_deopt(154, 0, NULL, CCP, RHO);
  return R_NilValue;

L161_:;
  // p1 = prom<V +>{
  //   sym11 = ldf `as.double`;
  //   base11 = ldf `as.double` in base;
  //   guard11 = `==`.4(sym11, base11);
  //   if guard11 then L1() else L2();
  // L0(r75):
  //   return r75;
  // L1():
  //   breaks9 = ld breaks;
  //   breaks10 = force? breaks9;
  //   checkMissing(breaks10);
  //   as_double = ldf `as.double` in base;
  //   r76 = dyn as_double(breaks10);
  //   goto L0(r76);
  // L2():
  //   r74 = dyn base11(<sym breaks>);
  //   goto L0(r74);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3545019636_1, CCP, RHO);
  // r78 = dyn sort_int(p1)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort_int, 1, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L162() else D37()
  // L162()
  goto L162_;

D37_:;
  // deopt 156 [r78]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(156, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L162_:;
  // st breaks = r78
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r78_, RHO);
  (void)(Rsh_Fir_reg_r78_);
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r79 = dyn length1(r78)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L163() else D38()
  // L163()
  goto L163_;

D38_:;
  // deopt 159 [r79]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_deopt(159, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L163_:;
  // goto L34(r79)
  // L34(r79)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r79_;
  goto L34_;

D39_:;
  // deopt 162 []
  Rsh_Fir_deopt(162, 0, NULL, CCP, RHO);
  return R_NilValue;

L164_:;
  // p2 = prom<V +>{
  //   breaks11 = ld breaks;
  //   breaks12 = force? breaks11;
  //   checkMissing(breaks12);
  //   return breaks12;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3545019636_2, CCP, RHO);
  // r81 = dyn anyDuplicated(p2)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyDuplicated, 1, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L165() else D40()
  // L165()
  goto L165_;

D40_:;
  // deopt 164 [r81]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_deopt(164, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L165_:;
  // c22 = `as.logical`(r81)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // if c22 then L166() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L166()
    goto L166_;
  } else {
  // L35()
    goto L35_;
  }

L166_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L167() else D41()
  // L167()
  goto L167_;

D41_:;
  // deopt 166 []
  Rsh_Fir_deopt(166, 0, NULL, CCP, RHO);
  return R_NilValue;

L167_:;
  // r82 = dyn stop2("'breaks' are not unique")
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_const(CCP, 63);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L168() else D42()
  // L168()
  goto L168_;

D42_:;
  // deopt 168 [r82]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(168, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L168_:;
  // goto L36()
  // L36()
  goto L36_;

L170_:;
  // labels1 = ld labels
  Rsh_Fir_reg_labels1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L172() else D43()
  // L172()
  goto L172_;

L171_:;
  // r84 = dyn base12(<sym labels>)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args156, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L37(r84)
  // L37(r84)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r84_;
  goto L37_;

D43_:;
  // deopt 175 [labels1]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_labels1_;
  Rsh_Fir_deopt(175, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L172_:;
  // labels2 = force? labels1
  Rsh_Fir_reg_labels2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels1_);
  // checkMissing(labels2)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_labels2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty()));
  // c23 = `==`(labels2, NULL)
  SEXP Rsh_Fir_array_args158[2];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_labels2_;
  Rsh_Fir_array_args158[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty());
  // goto L37(c23)
  // L37(c23)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_c23_;
  goto L37_;

L173_:;
  // dig_lab1 = ld `dig.lab`
  Rsh_Fir_reg_dig_lab1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L174() else D44()
  // L174()
  goto L174_;

D44_:;
  // deopt 178 [dig_lab1]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_dig_lab1_;
  Rsh_Fir_deopt(178, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L174_:;
  // dig_lab2 = force? dig_lab1
  Rsh_Fir_reg_dig_lab2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dig_lab1_);
  // checkMissing(dig_lab2)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_dig_lab2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // sym13 = ldf max
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 64), RHO);
  // base13 = ldf max in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args160[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args160);
  // if guard13 then L175() else L176()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L175()
    goto L175_;
  } else {
  // L176()
    goto L176_;
  }

L175_:;
  // dig_lab6 = ld `dig.lab`
  Rsh_Fir_reg_dig_lab6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L177() else D45()
  // L177()
  goto L177_;

L176_:;
  // r86 = dyn base13(12, <sym dig.lab>)
  SEXP Rsh_Fir_array_args161[2];
  Rsh_Fir_array_args161[0] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args161[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 2, Rsh_Fir_array_args161, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L39(dig_lab2, r86)
  // L39(dig_lab2, r86)
  Rsh_Fir_reg_dig_lab5_ = Rsh_Fir_reg_dig_lab2_;
  Rsh_Fir_reg_r87_ = Rsh_Fir_reg_r86_;
  goto L39_;

D45_:;
  // deopt 182 [dig_lab2, dig_lab6]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_dig_lab2_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_dig_lab6_;
  Rsh_Fir_deopt(182, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L177_:;
  // dig_lab7 = force? dig_lab6
  Rsh_Fir_reg_dig_lab7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dig_lab6_);
  // checkMissing(dig_lab7)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_dig_lab7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty()));
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 64), RHO);
  // r88 = dyn max(12, dig_lab7)
  SEXP Rsh_Fir_array_args163[2];
  Rsh_Fir_array_args163[0] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args163[1] = Rsh_Fir_reg_dig_lab7_;
  SEXP Rsh_Fir_array_arg_names42[2];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 2, Rsh_Fir_array_args163, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L178() else D46()
  // L178()
  goto L178_;

D46_:;
  // deopt 185 [dig_lab2, r88]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_dig_lab2_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_r88_;
  Rsh_Fir_deopt(185, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L178_:;
  // goto L39(dig_lab2, r88)
  // L39(dig_lab2, r88)
  Rsh_Fir_reg_dig_lab5_ = Rsh_Fir_reg_dig_lab2_;
  Rsh_Fir_reg_r87_ = Rsh_Fir_reg_r88_;
  goto L39_;

L179_:;
  // goto L45()
  // L45()
  goto L45_;

D47_:;
  // deopt 188 [i2]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(188, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L180_:;
  // p3 = prom<V +>{
  //   breaks13 = ld breaks;
  //   breaks14 = force? breaks13;
  //   checkMissing(breaks14);
  //   r90 = `+`(0.0, breaks14);
  //   return r90;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3545019636_3, CCP, RHO);
  // p4 = prom<V +>{
  //   dig = ld dig;
  //   dig1 = force? dig;
  //   checkMissing(dig1);
  //   return dig1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3545019636_4, CCP, RHO);
  // r93 = dyn formatC[, digits, width](p3, p4, 1)
  SEXP Rsh_Fir_array_args167[3];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args167[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names43[3];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = Rsh_const(CCP, 66);
  Rsh_Fir_array_arg_names43[2] = Rsh_const(CCP, 67);
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_formatC, 3, Rsh_Fir_array_args167, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L181() else D48()
  // L181()
  goto L181_;

D48_:;
  // deopt 194 [i2, r93]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_r93_;
  Rsh_Fir_deopt(194, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L181_:;
  // st `ch.br` = r93
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r93_, RHO);
  (void)(Rsh_Fir_reg_r93_);
  // sym14 = ldf all
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base14 = ldf all in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args168[2];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args168[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args168);
  // if guard14 then L182() else L183()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L182()
    goto L182_;
  } else {
  // L183()
    goto L183_;
  }

L182_:;
  // ch_br = ld `ch.br`
  Rsh_Fir_reg_ch_br = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L184() else D49()
  // L184()
  goto L184_;

L183_:;
  // r94 = dyn base14(<lang `!=`(`[`(ch.br, `-`(1)), `[`(ch.br, `-`(nb)))>)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args169, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L41(i2, r94)
  // L41(i2, r94)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r94_;
  goto L41_;

D49_:;
  // deopt 198 [i2, ch_br]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_ch_br;
  Rsh_Fir_deopt(198, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L184_:;
  // ch_br1 = force? ch_br
  Rsh_Fir_reg_ch_br1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ch_br);
  // checkMissing(ch_br1)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_ch_br1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty()));
  // c26 = `is.object`(ch_br1)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_ch_br1_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty());
  // if c26 then L185() else L186(i2, ch_br1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L185()
    goto L185_;
  } else {
  // L186(i2, ch_br1)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_ch_br3_ = Rsh_Fir_reg_ch_br1_;
    goto L186_;
  }

L185_:;
  // dr18 = tryDispatchBuiltin.1("[", ch_br1)
  SEXP Rsh_Fir_array_args172[2];
  Rsh_Fir_array_args172[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args172[1] = Rsh_Fir_reg_ch_br1_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args172);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // if dc9 then L187() else L186(i2, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L187()
    goto L187_;
  } else {
  // L186(i2, dr18)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_ch_br3_ = Rsh_Fir_reg_dr18_;
    goto L186_;
  }

L186_:;
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r96 = dyn __8(ch_br3, -1)
  SEXP Rsh_Fir_array_args174[2];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_ch_br3_;
  Rsh_Fir_array_args174[1] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args174, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L42(i9, r96)
  // L42(i9, r96)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r96_;
  goto L42_;

L187_:;
  // dx28 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty());
  // goto L42(i2, dx28)
  // L42(i2, dx28)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L42_;

D50_:;
  // deopt 202 [i11, dx29, ch_br4]
  SEXP Rsh_Fir_array_deopt_stack44[3];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_dx29_;
  Rsh_Fir_array_deopt_stack44[2] = Rsh_Fir_reg_ch_br4_;
  Rsh_Fir_deopt(202, 3, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L188_:;
  // ch_br5 = force? ch_br4
  Rsh_Fir_reg_ch_br5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ch_br4_);
  // checkMissing(ch_br5)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_ch_br5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty()));
  // c27 = `is.object`(ch_br5)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_ch_br5_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // if c27 then L189() else L190(i11, dx29, ch_br5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L189()
    goto L189_;
  } else {
  // L190(i11, dx29, ch_br5)
    Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i11_;
    Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx29_;
    Rsh_Fir_reg_ch_br7_ = Rsh_Fir_reg_ch_br5_;
    goto L190_;
  }

L189_:;
  // dr20 = tryDispatchBuiltin.1("[", ch_br5)
  SEXP Rsh_Fir_array_args178[2];
  Rsh_Fir_array_args178[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args178[1] = Rsh_Fir_reg_ch_br5_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args178);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty());
  // if dc10 then L191() else L190(i11, dx29, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L191()
    goto L191_;
  } else {
  // L190(i11, dx29, dr20)
    Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i11_;
    Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx29_;
    Rsh_Fir_reg_ch_br7_ = Rsh_Fir_reg_dr20_;
    goto L190_;
  }

L190_:;
  // nb6 = ld nb
  Rsh_Fir_reg_nb6_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L192() else D51()
  // L192()
  goto L192_;

L191_:;
  // dx33 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty());
  // goto L43(i11, dx29, dx33)
  // L43(i11, dx29, dx33)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_dx29_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx33_;
  goto L43_;

D51_:;
  // deopt 204 [i13, dx31, ch_br7, nb6]
  SEXP Rsh_Fir_array_deopt_stack45[4];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_dx31_;
  Rsh_Fir_array_deopt_stack45[2] = Rsh_Fir_reg_ch_br7_;
  Rsh_Fir_array_deopt_stack45[3] = Rsh_Fir_reg_nb6_;
  Rsh_Fir_deopt(204, 4, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L192_:;
  // nb7 = force? nb6
  Rsh_Fir_reg_nb7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nb6_);
  // checkMissing(nb7)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_nb7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty()));
  // r97 = `-`(<missing>, nb7)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_nb7_;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty());
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r98 = dyn __9(ch_br7, r97)
  SEXP Rsh_Fir_array_args183[2];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_ch_br7_;
  Rsh_Fir_array_args183[1] = Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_array_arg_names46[2];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args183, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L43(i13, dx31, r98)
  // L43(i13, dx31, r98)
  Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_reg_dx31_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_r98_;
  goto L43_;

D52_:;
  // deopt 210 [i15, r100]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_r100_;
  Rsh_Fir_deopt(210, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L193_:;
  // goto L41(i15, r100)
  // L41(i15, r100)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r100_;
  goto L41_;

L194_:;
  // goto L45()
  // L45()
  goto L45_;

D53_:;
  // deopt 219 [ok]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_ok;
  Rsh_Fir_deopt(219, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L197_:;
  // ok1 = force? ok
  Rsh_Fir_reg_ok1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok);
  // checkMissing(ok1)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_ok1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty()));
  // c29 = `as.logical`(ok1)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_ok1_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty());
  // if c29 then L198() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L198()
    goto L198_;
  } else {
  // L48()
    goto L48_;
  }

L198_:;
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L199() else D54()
  // L199()
  goto L199_;

D54_:;
  // deopt 222 []
  Rsh_Fir_deopt(222, 0, NULL, CCP, RHO);
  return R_NilValue;

L199_:;
  // p5 = prom<V +>{
  //   right1 = ld right;
  //   right2 = force? right1;
  //   checkMissing(right2);
  //   c30 = `as.logical`(right2);
  //   if c30 then L1() else L0();
  // L0():
  //   return "[";
  // L1():
  //   return "(";
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3545019636_5, CCP, RHO);
  // p6 = prom<V +>{
  //   ch_br8 = ld `ch.br`;
  //   ch_br9 = force? ch_br8;
  //   checkMissing(ch_br9);
  //   c31 = `is.object`(ch_br9);
  //   if c31 then L1() else L2(ch_br9);
  // L0(dx37):
  //   return dx37;
  // L1():
  //   dr22 = tryDispatchBuiltin.1("[", ch_br9);
  //   dc11 = getTryDispatchBuiltinDispatched(dr22);
  //   if dc11 then L3() else L2(dr22);
  // L2(ch_br11):
  //   nb8 = ld nb;
  //   nb9 = force? nb8;
  //   checkMissing(nb9);
  //   r103 = `-`(<missing>, nb9);
  //   __10 = ldf `[` in base;
  //   r104 = dyn __10(ch_br11, r103);
  //   goto L0(r104);
  // L3():
  //   dx36 = getTryDispatchBuiltinValue(dr22);
  //   goto L0(dx36);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3545019636_6, CCP, RHO);
  // p7 = prom<V +>{
  //   ch_br12 = ld `ch.br`;
  //   ch_br13 = force? ch_br12;
  //   checkMissing(ch_br13);
  //   c32 = `is.object`(ch_br13);
  //   if c32 then L1() else L2(ch_br13);
  // L0(dx39):
  //   return dx39;
  // L1():
  //   dr24 = tryDispatchBuiltin.1("[", ch_br13);
  //   dc12 = getTryDispatchBuiltinDispatched(dr24);
  //   if dc12 then L3() else L2(dr24);
  // L2(ch_br15):
  //   __11 = ldf `[` in base;
  //   r106 = dyn __11(ch_br15, -1);
  //   goto L0(r106);
  // L3():
  //   dx38 = getTryDispatchBuiltinValue(dr24);
  //   goto L0(dx38);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3545019636_7, CCP, RHO);
  // p8 = prom<V +>{
  //   right3 = ld right;
  //   right4 = force? right3;
  //   checkMissing(right4);
  //   c33 = `as.logical`(right4);
  //   if c33 then L1() else L0();
  // L0():
  //   return ")";
  // L1():
  //   return "]";
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3545019636_8, CCP, RHO);
  // r109 = dyn paste0(p5, p6, ",", p7, p8)
  SEXP Rsh_Fir_array_args204[5];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args204[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args204[2] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args204[3] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args204[4] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names49[5];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_array_arg_names49[2] = R_MissingArg;
  Rsh_Fir_array_arg_names49[3] = R_MissingArg;
  Rsh_Fir_array_arg_names49[4] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 5, Rsh_Fir_array_args204, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L200() else D55()
  // L200()
  goto L200_;

D55_:;
  // deopt 228 [r109]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r109_;
  Rsh_Fir_deopt(228, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L200_:;
  // goto L49(r109)
  // L49(r109)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r109_;
  goto L49_;

D56_:;
  // deopt 230 []
  Rsh_Fir_deopt(230, 0, NULL, CCP, RHO);
  return R_NilValue;

L202_:;
  // p9 = prom<V +>{
  //   sym15 = ldf seq_len;
  //   base15 = ldf seq_len in base;
  //   guard15 = `==`.4(sym15, base15);
  //   if guard15 then L1() else L2();
  // L0(r112):
  //   return r112;
  // L1():
  //   nb10 = ld nb;
  //   nb11 = force? nb10;
  //   checkMissing(nb11);
  //   r113 = `-`(nb11, 1);
  //   r114 = seq_len(r113);
  //   goto L0(r114);
  // L2():
  //   r111 = dyn base15(<lang `-`(nb, 1)>);
  //   goto L0(r111);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3545019636_9, CCP, RHO);
  // r116 = dyn paste1("Range_", p9)
  SEXP Rsh_Fir_array_args210[2];
  Rsh_Fir_array_args210[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_args210[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names51[2];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 2, Rsh_Fir_array_args210, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L203() else D57()
  // L203()
  goto L203_;

D57_:;
  // deopt 233 [r116]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r116_;
  Rsh_Fir_deopt(233, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L203_:;
  // goto L49(r116)
  // L49(r116)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r116_;
  goto L49_;

D58_:;
  // deopt 235 [ok2]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_ok2_;
  Rsh_Fir_deopt(235, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L204_:;
  // ok3 = force? ok2
  Rsh_Fir_reg_ok3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok2_);
  // checkMissing(ok3)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_ok3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty()));
  // c34 = `as.logical`(ok3)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_ok3_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args212, Rsh_Fir_param_types_empty());
  // if c34 then L205() else L50(c34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L205()
    goto L205_;
  } else {
  // L50(c34)
    Rsh_Fir_reg_c36_ = Rsh_Fir_reg_c34_;
    goto L50_;
  }

L205_:;
  // include_lowest1 = ld `include.lowest`
  Rsh_Fir_reg_include_lowest1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L206() else D59()
  // L206()
  goto L206_;

D59_:;
  // deopt 237 [c34, include_lowest1]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_c34_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_include_lowest1_;
  Rsh_Fir_deopt(237, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L206_:;
  // include_lowest2 = force? include_lowest1
  Rsh_Fir_reg_include_lowest2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_include_lowest1_);
  // checkMissing(include_lowest2)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_include_lowest2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args213, Rsh_Fir_param_types_empty()));
  // c37 = `as.logical`(include_lowest2)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_include_lowest2_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty());
  // c38 = `&&`(c34, c37)
  SEXP Rsh_Fir_array_args215[2];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_c34_;
  Rsh_Fir_array_args215[1] = Rsh_Fir_reg_c37_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty());
  // goto L50(c38)
  // L50(c38)
  Rsh_Fir_reg_c36_ = Rsh_Fir_reg_c38_;
  goto L50_;

L208_:;
  // right5 = ld right
  Rsh_Fir_reg_right5_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L209() else D60()
  // L209()
  goto L209_;

D60_:;
  // deopt 240 [right5]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_right5_;
  Rsh_Fir_deopt(240, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L209_:;
  // right6 = force? right5
  Rsh_Fir_reg_right6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_right5_);
  // checkMissing(right6)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_right6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args216, Rsh_Fir_param_types_empty()));
  // c41 = `as.logical`(right6)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_right6_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args217, Rsh_Fir_param_types_empty());
  // if c41 then L210() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c41_)) {
  // L210()
    goto L210_;
  } else {
  // L52()
    goto L52_;
  }

L210_:;
  // l7 = ld labels
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // c42 = `is.object`(l7)
  SEXP Rsh_Fir_array_args218[1];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args218, Rsh_Fir_param_types_empty());
  // if c42 then L211() else L212("[", l7, "[", l7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L211()
    goto L211_;
  } else {
  // L212("[", l7, "[", l7)
    Rsh_Fir_reg_r119_ = Rsh_const(CCP, 51);
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l7_;
    Rsh_Fir_reg_r120_ = Rsh_const(CCP, 51);
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l7_;
    goto L212_;
  }

L211_:;
  // dr26 = tryDispatchBuiltin.1("[", l7)
  SEXP Rsh_Fir_array_args219[2];
  Rsh_Fir_array_args219[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args219[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args219);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args220, Rsh_Fir_param_types_empty());
  // if dc13 then L213() else L212("[", l7, "[", dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L213()
    goto L213_;
  } else {
  // L212("[", l7, "[", dr26)
    Rsh_Fir_reg_r119_ = Rsh_const(CCP, 51);
    Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l7_;
    Rsh_Fir_reg_r120_ = Rsh_const(CCP, 51);
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_dr26_;
    goto L212_;
  }

L212_:;
  // __12 = ldf `[` in base
  Rsh_Fir_reg___12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r125 = dyn __12(l11, 1)
  SEXP Rsh_Fir_array_args221[2];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args221[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names52[2];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_reg_r125_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___12_, 2, Rsh_Fir_array_args221, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L53(r119, l10, r120, r125)
  // L53(r119, l10, r120, r125)
  Rsh_Fir_reg_r123_ = Rsh_Fir_reg_r119_;
  Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_r124_ = Rsh_Fir_reg_r120_;
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_r125_;
  goto L53_;

L213_:;
  // dx40 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx40_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args222, Rsh_Fir_param_types_empty());
  // goto L53("[", l7, "[", dx40)
  // L53("[", l7, "[", dx40)
  Rsh_Fir_reg_r123_ = Rsh_const(CCP, 51);
  Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_r124_ = Rsh_const(CCP, 51);
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx40_;
  goto L53_;

D61_:;
  // deopt 250 [r123, l13, dx41, r124]
  SEXP Rsh_Fir_array_deopt_stack53[4];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r123_;
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack53[2] = Rsh_Fir_reg_dx41_;
  Rsh_Fir_array_deopt_stack53[3] = Rsh_Fir_reg_r124_;
  Rsh_Fir_deopt(250, 4, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L214_:;
  // r126 = dyn substr__(dx41, NULL, 1, 1, r124)
  SEXP Rsh_Fir_array_args223[5];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_dx41_;
  Rsh_Fir_array_args223[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args223[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args223[3] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args223[4] = Rsh_Fir_reg_r124_;
  SEXP Rsh_Fir_array_arg_names53[5];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_array_arg_names53[2] = R_MissingArg;
  Rsh_Fir_array_arg_names53[3] = R_MissingArg;
  Rsh_Fir_array_arg_names53[4] = R_MissingArg;
  Rsh_Fir_reg_r126_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substr__, 5, Rsh_Fir_array_args223, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L215() else D62()
  // L215()
  goto L215_;

D62_:;
  // deopt 254 [r123, l13, r126]
  SEXP Rsh_Fir_array_deopt_stack54[3];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_r123_;
  Rsh_Fir_array_deopt_stack54[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack54[2] = Rsh_Fir_reg_r126_;
  Rsh_Fir_deopt(254, 3, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L215_:;
  // c43 = `is.object`(l13)
  SEXP Rsh_Fir_array_args224[1];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args224, Rsh_Fir_param_types_empty());
  // if c43 then L216() else L217(r123, l13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L216()
    goto L216_;
  } else {
  // L217(r123, l13)
    Rsh_Fir_reg_r128_ = Rsh_Fir_reg_r123_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_l13_;
    goto L217_;
  }

L216_:;
  // dr28 = tryDispatchBuiltin.0("[<-", l13, r126)
  SEXP Rsh_Fir_array_args225[3];
  Rsh_Fir_array_args225[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args225[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args225[2] = Rsh_Fir_reg_r126_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args225);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty());
  // if dc14 then L218() else L217(r123, dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L218()
    goto L218_;
  } else {
  // L217(r123, dr28)
    Rsh_Fir_reg_r128_ = Rsh_Fir_reg_r123_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_dr28_;
    goto L217_;
  }

L217_:;
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r131 = dyn ___1(l15, r126, 1)
  SEXP Rsh_Fir_array_args227[3];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args227[1] = Rsh_Fir_reg_r126_;
  Rsh_Fir_array_args227[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names54[3];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_array_arg_names54[2] = R_MissingArg;
  Rsh_Fir_reg_r131_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args227, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L54(r128, r131)
  // L54(r128, r131)
  Rsh_Fir_reg_r130_ = Rsh_Fir_reg_r128_;
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_r131_;
  goto L54_;

L218_:;
  // dx42 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args228[1];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args228, Rsh_Fir_param_types_empty());
  // goto L54(r123, dx42)
  // L54(r123, dx42)
  Rsh_Fir_reg_r130_ = Rsh_Fir_reg_r123_;
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx42_;
  goto L54_;

L220_:;
  // dr30 = tryDispatchBuiltin.1("[", l16)
  SEXP Rsh_Fir_array_args229[2];
  Rsh_Fir_array_args229[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args229[1] = Rsh_Fir_reg_l16_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args229);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args230, Rsh_Fir_param_types_empty());
  // if dc15 then L222() else L221("]", l16, "]", dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L222()
    goto L222_;
  } else {
  // L221("]", l16, "]", dr30)
    Rsh_Fir_reg_r135_ = Rsh_const(CCP, 38);
    Rsh_Fir_reg_l19_ = Rsh_Fir_reg_l16_;
    Rsh_Fir_reg_r136_ = Rsh_const(CCP, 38);
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_dr30_;
    goto L221_;
  }

L221_:;
  // nb12 = ld nb
  Rsh_Fir_reg_nb12_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L223() else D63()
  // L223()
  goto L223_;

L222_:;
  // dx44 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args231[1];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx44_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args231, Rsh_Fir_param_types_empty());
  // goto L56("]", l16, "]", dx44)
  // L56("]", l16, "]", dx44)
  Rsh_Fir_reg_r139_ = Rsh_const(CCP, 38);
  Rsh_Fir_reg_l22_ = Rsh_Fir_reg_l16_;
  Rsh_Fir_reg_r140_ = Rsh_const(CCP, 38);
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_dx44_;
  goto L56_;

D63_:;
  // deopt 263 [r135, l19, r136, l20, nb12]
  SEXP Rsh_Fir_array_deopt_stack55[5];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r135_;
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_l19_;
  Rsh_Fir_array_deopt_stack55[2] = Rsh_Fir_reg_r136_;
  Rsh_Fir_array_deopt_stack55[3] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_deopt_stack55[4] = Rsh_Fir_reg_nb12_;
  Rsh_Fir_deopt(263, 5, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L223_:;
  // nb13 = force? nb12
  Rsh_Fir_reg_nb13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nb12_);
  // checkMissing(nb13)
  SEXP Rsh_Fir_array_args232[1];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_nb13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args232, Rsh_Fir_param_types_empty()));
  // r141 = `-`(nb13, 1)
  SEXP Rsh_Fir_array_args233[2];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_nb13_;
  Rsh_Fir_array_args233[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r141_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty());
  // __13 = ldf `[` in base
  Rsh_Fir_reg___13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r142 = dyn __13(l20, r141)
  SEXP Rsh_Fir_array_args234[2];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_args234[1] = Rsh_Fir_reg_r141_;
  SEXP Rsh_Fir_array_arg_names55[2];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_reg_r142_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___13_, 2, Rsh_Fir_array_args234, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L56(r135, l19, r136, r142)
  // L56(r135, l19, r136, r142)
  Rsh_Fir_reg_r139_ = Rsh_Fir_reg_r135_;
  Rsh_Fir_reg_l22_ = Rsh_Fir_reg_l19_;
  Rsh_Fir_reg_r140_ = Rsh_Fir_reg_r136_;
  Rsh_Fir_reg_dx45_ = Rsh_Fir_reg_r142_;
  goto L56_;

D64_:;
  // deopt 269 [r139, l22, dx45, r140]
  SEXP Rsh_Fir_array_deopt_stack56[4];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_r139_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_deopt_stack56[2] = Rsh_Fir_reg_dx45_;
  Rsh_Fir_array_deopt_stack56[3] = Rsh_Fir_reg_r140_;
  Rsh_Fir_deopt(269, 4, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L224_:;
  // p10 = prom<V +>{
  //   sym16 = ldf nchar;
  //   base16 = ldf nchar in base;
  //   guard16 = `==`.4(sym16, base16);
  //   if guard16 then L2() else L3();
  // L0(r144):
  //   return r144;
  // L2():
  //   labels3 = ld labels;
  //   labels4 = force? labels3;
  //   checkMissing(labels4);
  //   c45 = `is.object`(labels4);
  //   if c45 then L4() else L5(labels4);
  // L3():
  //   r143 = dyn base16(<lang `[`(labels, `-`(nb, 1))>, "c");
  //   goto L0(r143);
  // L1(dx47):
  //   nchar = ldf nchar in base;
  //   r147 = dyn nchar(dx47, "c", FALSE, NA_LGL);
  //   goto L0(r147);
  // L4():
  //   dr32 = tryDispatchBuiltin.1("[", labels4);
  //   dc16 = getTryDispatchBuiltinDispatched(dr32);
  //   if dc16 then L6() else L5(dr32);
  // L5(labels6):
  //   nb14 = ld nb;
  //   nb15 = force? nb14;
  //   checkMissing(nb15);
  //   r145 = `-`(nb15, 1);
  //   __14 = ldf `[` in base;
  //   r146 = dyn __14(labels6, r145);
  //   goto L1(r146);
  // L6():
  //   dx46 = getTryDispatchBuiltinValue(dr32);
  //   goto L1(dx46);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3545019636_10, CCP, RHO);
  // r149 = dyn substring__(dx45, NULL, p10, r140)
  SEXP Rsh_Fir_array_args246[4];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_dx45_;
  Rsh_Fir_array_args246[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args246[2] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args246[3] = Rsh_Fir_reg_r140_;
  SEXP Rsh_Fir_array_arg_names59[4];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_array_arg_names59[1] = R_MissingArg;
  Rsh_Fir_array_arg_names59[2] = R_MissingArg;
  Rsh_Fir_array_arg_names59[3] = R_MissingArg;
  Rsh_Fir_reg_r149_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substring__, 4, Rsh_Fir_array_args246, Rsh_Fir_array_arg_names59, CCP, RHO);
  // check L225() else D65()
  // L225()
  goto L225_;

D65_:;
  // deopt 272 [r139, l22, r149]
  SEXP Rsh_Fir_array_deopt_stack57[3];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_r139_;
  Rsh_Fir_array_deopt_stack57[1] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_deopt_stack57[2] = Rsh_Fir_reg_r149_;
  Rsh_Fir_deopt(272, 3, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L225_:;
  // c46 = `is.object`(l22)
  SEXP Rsh_Fir_array_args247[1];
  Rsh_Fir_array_args247[0] = Rsh_Fir_reg_l22_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args247, Rsh_Fir_param_types_empty());
  // if c46 then L226() else L227(r139, l22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L226()
    goto L226_;
  } else {
  // L227(r139, l22)
    Rsh_Fir_reg_r151_ = Rsh_Fir_reg_r139_;
    Rsh_Fir_reg_l24_ = Rsh_Fir_reg_l22_;
    goto L227_;
  }

L226_:;
  // dr34 = tryDispatchBuiltin.0("[<-", l22, r149)
  SEXP Rsh_Fir_array_args248[3];
  Rsh_Fir_array_args248[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args248[1] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_args248[2] = Rsh_Fir_reg_r149_;
  Rsh_Fir_reg_dr34_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args248);
  // dc17 = getTryDispatchBuiltinDispatched(dr34)
  SEXP Rsh_Fir_array_args249[1];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dc17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args249, Rsh_Fir_param_types_empty());
  // if dc17 then L228() else L227(r139, dr34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc17_)) {
  // L228()
    goto L228_;
  } else {
  // L227(r139, dr34)
    Rsh_Fir_reg_r151_ = Rsh_Fir_reg_r139_;
    Rsh_Fir_reg_l24_ = Rsh_Fir_reg_dr34_;
    goto L227_;
  }

L227_:;
  // nb16 = ld nb
  Rsh_Fir_reg_nb16_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L229() else D66()
  // L229()
  goto L229_;

L228_:;
  // dx48 = getTryDispatchBuiltinValue(dr34)
  SEXP Rsh_Fir_array_args250[1];
  Rsh_Fir_array_args250[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dx48_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args250, Rsh_Fir_param_types_empty());
  // goto L57(r139, dx48)
  // L57(r139, dx48)
  Rsh_Fir_reg_r153_ = Rsh_Fir_reg_r139_;
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_dx48_;
  goto L57_;

D66_:;
  // deopt 273 [r151, l24, r149, nb16]
  SEXP Rsh_Fir_array_deopt_stack58[4];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r151_;
  Rsh_Fir_array_deopt_stack58[1] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_deopt_stack58[2] = Rsh_Fir_reg_r149_;
  Rsh_Fir_array_deopt_stack58[3] = Rsh_Fir_reg_nb16_;
  Rsh_Fir_deopt(273, 4, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L229_:;
  // nb17 = force? nb16
  Rsh_Fir_reg_nb17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nb16_);
  // checkMissing(nb17)
  SEXP Rsh_Fir_array_args251[1];
  Rsh_Fir_array_args251[0] = Rsh_Fir_reg_nb17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args251, Rsh_Fir_param_types_empty()));
  // r154 = `-`(nb17, 1)
  SEXP Rsh_Fir_array_args252[2];
  Rsh_Fir_array_args252[0] = Rsh_Fir_reg_nb17_;
  Rsh_Fir_array_args252[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r154_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args252, Rsh_Fir_param_types_empty());
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r155 = dyn ___2(l24, r149, r154)
  SEXP Rsh_Fir_array_args253[3];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_args253[1] = Rsh_Fir_reg_r149_;
  Rsh_Fir_array_args253[2] = Rsh_Fir_reg_r154_;
  SEXP Rsh_Fir_array_arg_names60[3];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_array_arg_names60[2] = R_MissingArg;
  Rsh_Fir_reg_r155_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args253, Rsh_Fir_array_arg_names60, CCP, RHO);
  // goto L57(r151, r155)
  // L57(r151, r155)
  Rsh_Fir_reg_r153_ = Rsh_Fir_reg_r151_;
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_r155_;
  goto L57_;

L232_:;
  // labels7 = ld labels
  Rsh_Fir_reg_labels7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L234() else D67()
  // L234()
  goto L234_;

L233_:;
  // r158 = dyn base17(<sym labels>)
  SEXP Rsh_Fir_array_args254[1];
  Rsh_Fir_array_args254[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names61[1];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_reg_r158_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args254, Rsh_Fir_array_arg_names61, CCP, RHO);
  // goto L60(r158)
  // L60(r158)
  Rsh_Fir_reg_r159_ = Rsh_Fir_reg_r158_;
  goto L60_;

D67_:;
  // deopt 282 [labels7]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_labels7_;
  Rsh_Fir_deopt(282, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L234_:;
  // labels8 = force? labels7
  Rsh_Fir_reg_labels8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels7_);
  // checkMissing(labels8)
  SEXP Rsh_Fir_array_args255[1];
  Rsh_Fir_array_args255[0] = Rsh_Fir_reg_labels8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args255, Rsh_Fir_param_types_empty()));
  // c47 = `is.logical`(labels8)
  SEXP Rsh_Fir_array_args256[1];
  Rsh_Fir_array_args256[0] = Rsh_Fir_reg_labels8_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(385, CCP, RHO, 1, Rsh_Fir_array_args256, Rsh_Fir_param_types_empty());
  // goto L60(c47)
  // L60(c47)
  Rsh_Fir_reg_r159_ = Rsh_Fir_reg_c47_;
  goto L60_;

L235_:;
  // labels9 = ld labels
  Rsh_Fir_reg_labels9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L236() else D68()
  // L236()
  goto L236_;

D68_:;
  // deopt 285 [c48, labels9]
  SEXP Rsh_Fir_array_deopt_stack60[2];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_c48_;
  Rsh_Fir_array_deopt_stack60[1] = Rsh_Fir_reg_labels9_;
  Rsh_Fir_deopt(285, 2, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L236_:;
  // labels10 = force? labels9
  Rsh_Fir_reg_labels10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels9_);
  // checkMissing(labels10)
  SEXP Rsh_Fir_array_args257[1];
  Rsh_Fir_array_args257[0] = Rsh_Fir_reg_labels10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args257, Rsh_Fir_param_types_empty()));
  // r160 = `!`(labels10)
  SEXP Rsh_Fir_array_args258[1];
  Rsh_Fir_array_args258[0] = Rsh_Fir_reg_labels10_;
  Rsh_Fir_reg_r160_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args258, Rsh_Fir_param_types_empty());
  // c51 = `as.logical`(r160)
  SEXP Rsh_Fir_array_args259[1];
  Rsh_Fir_array_args259[0] = Rsh_Fir_reg_r160_;
  Rsh_Fir_reg_c51_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args259, Rsh_Fir_param_types_empty());
  // c52 = `&&`(c48, c51)
  SEXP Rsh_Fir_array_args260[2];
  Rsh_Fir_array_args260[0] = Rsh_Fir_reg_c48_;
  Rsh_Fir_array_args260[1] = Rsh_Fir_reg_c51_;
  Rsh_Fir_reg_c52_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args260, Rsh_Fir_param_types_empty());
  // goto L61(c52)
  // L61(c52)
  Rsh_Fir_reg_c50_ = Rsh_Fir_reg_c52_;
  goto L61_;

L238_:;
  // st `codes.only` = TRUE
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_const(CCP, 7), RHO);
  (void)(Rsh_const(CCP, 7));
  // goto L59()
  // L59()
  goto L59_;

L240_:;
  // labels11 = ld labels
  Rsh_Fir_reg_labels11_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L242() else D69()
  // L242()
  goto L242_;

L241_:;
  // r161 = dyn base18(<sym labels>)
  SEXP Rsh_Fir_array_args261[1];
  Rsh_Fir_array_args261[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names62[1];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_reg_r161_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args261, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L63(r161)
  // L63(r161)
  Rsh_Fir_reg_r162_ = Rsh_Fir_reg_r161_;
  goto L63_;

D69_:;
  // deopt 294 [labels11]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_labels11_;
  Rsh_Fir_deopt(294, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L242_:;
  // labels12 = force? labels11
  Rsh_Fir_reg_labels12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels11_);
  // checkMissing(labels12)
  SEXP Rsh_Fir_array_args262[1];
  Rsh_Fir_array_args262[0] = Rsh_Fir_reg_labels12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args262, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r163 = dyn length2(labels12)
  SEXP Rsh_Fir_array_args263[1];
  Rsh_Fir_array_args263[0] = Rsh_Fir_reg_labels12_;
  SEXP Rsh_Fir_array_arg_names63[1];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_reg_r163_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args263, Rsh_Fir_array_arg_names63, CCP, RHO);
  // check L243() else D70()
  // L243()
  goto L243_;

D70_:;
  // deopt 297 [r163]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_r163_;
  Rsh_Fir_deopt(297, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L243_:;
  // goto L63(r163)
  // L63(r163)
  Rsh_Fir_reg_r162_ = Rsh_Fir_reg_r163_;
  goto L63_;

D71_:;
  // deopt 297 [r162, nb18]
  SEXP Rsh_Fir_array_deopt_stack63[2];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_r162_;
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_nb18_;
  Rsh_Fir_deopt(297, 2, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L244_:;
  // nb19 = force? nb18
  Rsh_Fir_reg_nb19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nb18_);
  // checkMissing(nb19)
  SEXP Rsh_Fir_array_args264[1];
  Rsh_Fir_array_args264[0] = Rsh_Fir_reg_nb19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args264, Rsh_Fir_param_types_empty()));
  // r164 = `-`(nb19, 1)
  SEXP Rsh_Fir_array_args265[2];
  Rsh_Fir_array_args265[0] = Rsh_Fir_reg_nb19_;
  Rsh_Fir_array_args265[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r164_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args265, Rsh_Fir_param_types_empty());
  // r165 = `!=`(r162, r164)
  SEXP Rsh_Fir_array_args266[2];
  Rsh_Fir_array_args266[0] = Rsh_Fir_reg_r162_;
  Rsh_Fir_array_args266[1] = Rsh_Fir_reg_r164_;
  Rsh_Fir_reg_r165_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args266, Rsh_Fir_param_types_empty());
  // c55 = `as.logical`(r165)
  SEXP Rsh_Fir_array_args267[1];
  Rsh_Fir_array_args267[0] = Rsh_Fir_reg_r165_;
  Rsh_Fir_reg_c55_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args267, Rsh_Fir_param_types_empty());
  // if c55 then L245() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c55_)) {
  // L245()
    goto L245_;
  } else {
  // L64()
    goto L64_;
  }

L245_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L246() else D72()
  // L246()
  goto L246_;

D72_:;
  // deopt 303 []
  Rsh_Fir_deopt(303, 0, NULL, CCP, RHO);
  return R_NilValue;

L246_:;
  // r166 = dyn stop3("number of intervals and length of 'labels' differ")
  SEXP Rsh_Fir_array_args268[1];
  Rsh_Fir_array_args268[0] = Rsh_const(CCP, 81);
  SEXP Rsh_Fir_array_arg_names64[1];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_reg_r166_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args268, Rsh_Fir_array_arg_names64, CCP, RHO);
  // check L247() else D73()
  // L247()
  goto L247_;

D73_:;
  // deopt 305 [r166]
  SEXP Rsh_Fir_array_deopt_stack64[1];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_r166_;
  Rsh_Fir_deopt(305, 1, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L247_:;
  // goto L59()
  // L59()
  goto L59_;

D74_:;
  // deopt 309 []
  Rsh_Fir_deopt(309, 0, NULL, CCP, RHO);
  return R_NilValue;

L249_:;
  // p11 = prom<V +>{
  //   x6 = ld x;
  //   x7 = force? x6;
  //   checkMissing(x7);
  //   return x7;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3545019636_11, CCP, RHO);
  // p12 = prom<V +>{
  //   breaks15 = ld breaks;
  //   breaks16 = force? breaks15;
  //   checkMissing(breaks16);
  //   return breaks16;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3545019636_12, CCP, RHO);
  // p13 = prom<V +>{
  //   right7 = ld right;
  //   right8 = force? right7;
  //   checkMissing(right8);
  //   return right8;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3545019636_13, CCP, RHO);
  // p14 = prom<V +>{
  //   include_lowest3 = ld `include.lowest`;
  //   include_lowest4 = force? include_lowest3;
  //   checkMissing(include_lowest4);
  //   return include_lowest4;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3545019636_14, CCP, RHO);
  // r171 = dyn _bincode(p11, p12, p13, p14)
  SEXP Rsh_Fir_array_args273[4];
  Rsh_Fir_array_args273[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args273[1] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args273[2] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args273[3] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names65[4];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_array_arg_names65[1] = R_MissingArg;
  Rsh_Fir_array_arg_names65[2] = R_MissingArg;
  Rsh_Fir_array_arg_names65[3] = R_MissingArg;
  Rsh_Fir_reg_r171_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__bincode, 4, Rsh_Fir_array_args273, Rsh_Fir_array_arg_names65, CCP, RHO);
  // check L250() else D75()
  // L250()
  goto L250_;

D75_:;
  // deopt 314 [r171]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_r171_;
  Rsh_Fir_deopt(314, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L250_:;
  // st code = r171
  Rsh_Fir_store(Rsh_const(CCP, 82), Rsh_Fir_reg_r171_, RHO);
  (void)(Rsh_Fir_reg_r171_);
  // codes_only = ld `codes.only`
  Rsh_Fir_reg_codes_only = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L251() else D76()
  // L251()
  goto L251_;

D76_:;
  // deopt 316 [codes_only]
  SEXP Rsh_Fir_array_deopt_stack66[1];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_codes_only;
  Rsh_Fir_deopt(316, 1, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L251_:;
  // codes_only1 = force? codes_only
  Rsh_Fir_reg_codes_only1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_codes_only);
  // checkMissing(codes_only1)
  SEXP Rsh_Fir_array_args274[1];
  Rsh_Fir_array_args274[0] = Rsh_Fir_reg_codes_only1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args274, Rsh_Fir_param_types_empty()));
  // c56 = `as.logical`(codes_only1)
  SEXP Rsh_Fir_array_args275[1];
  Rsh_Fir_array_args275[0] = Rsh_Fir_reg_codes_only1_;
  Rsh_Fir_reg_c56_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args275, Rsh_Fir_param_types_empty());
  // if c56 then L252() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c56_)) {
  // L252()
    goto L252_;
  } else {
  // L65()
    goto L65_;
  }

L252_:;
  // code = ld code
  Rsh_Fir_reg_code = Rsh_Fir_load(Rsh_const(CCP, 82), RHO);
  // check L253() else D77()
  // L253()
  goto L253_;

D77_:;
  // deopt 318 [code]
  SEXP Rsh_Fir_array_deopt_stack67[1];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_code;
  Rsh_Fir_deopt(318, 1, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L253_:;
  // code1 = force? code
  Rsh_Fir_reg_code1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_code);
  // checkMissing(code1)
  SEXP Rsh_Fir_array_args276[1];
  Rsh_Fir_array_args276[0] = Rsh_Fir_reg_code1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args276, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return code1
  return Rsh_Fir_reg_code1_;

D78_:;
  // deopt 321 []
  Rsh_Fir_deopt(321, 0, NULL, CCP, RHO);
  return R_NilValue;

L255_:;
  // p15 = prom<V +>{
  //   code2 = ld code;
  //   code3 = force? code2;
  //   checkMissing(code3);
  //   return code3;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3545019636_15, CCP, RHO);
  // p16 = prom<V +>{
  //   sym19 = ldf seq_along;
  //   base19 = ldf seq_along in base;
  //   guard19 = `==`.4(sym19, base19);
  //   if guard19 then L1() else L2();
  // L0(r174):
  //   return r174;
  // L1():
  //   labels13 = ld labels;
  //   labels14 = force? labels13;
  //   checkMissing(labels14);
  //   r175 = seq_along(labels14);
  //   goto L0(r175);
  // L2():
  //   r173 = dyn base19(<sym labels>);
  //   goto L0(r173);
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3545019636_16, CCP, RHO);
  // p17 = prom<V +>{
  //   labels15 = ld labels;
  //   labels16 = force? labels15;
  //   checkMissing(labels16);
  //   return labels16;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3545019636_17, CCP, RHO);
  // p18 = prom<V +>{
  //   ordered_result1 = ld ordered_result;
  //   ordered_result2 = force? ordered_result1;
  //   checkMissing(ordered_result2);
  //   return ordered_result2;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3545019636_18, CCP, RHO);
  // r179 = dyn factor[, , , ordered](p15, p16, p17, p18)
  SEXP Rsh_Fir_array_args284[4];
  Rsh_Fir_array_args284[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args284[1] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args284[2] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args284[3] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names67[4];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_array_arg_names67[1] = R_MissingArg;
  Rsh_Fir_array_arg_names67[2] = R_MissingArg;
  Rsh_Fir_array_arg_names67[3] = Rsh_const(CCP, 84);
  Rsh_Fir_reg_r179_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor, 4, Rsh_Fir_array_args284, Rsh_Fir_array_arg_names67, CCP, RHO);
  // check L256() else D79()
  // L256()
  goto L256_;

D79_:;
  // deopt 327 [r179]
  SEXP Rsh_Fir_array_deopt_stack68[1];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_r179_;
  Rsh_Fir_deopt(327, 1, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L256_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r179
  return Rsh_Fir_reg_r179_;
}
SEXP Rsh_Fir_user_promise_inner3545019636_(SEXP CCP, SEXP RHO) {
  // sym4 = ldf range
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // base4 = ldf range in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // st rx = r21
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // return r21
  return Rsh_Fir_reg_r21_;

L1_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // range = ldf range in base
  Rsh_Fir_reg_range = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // r22 = dyn range(x4, TRUE)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_range, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L0_;

L2_:;
  // r20 = dyn base4[, `na.rm`](<sym x>, TRUE)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = Rsh_const(CCP, 50);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3545019636_1(SEXP CCP, SEXP RHO) {
  // sym11 = ldf `as.double`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 62), RHO);
  // base11 = ldf `as.double` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 62), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args146[2];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args146[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args146);
  // if guard11 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r75
  return Rsh_Fir_reg_r75_;

L1_:;
  // breaks9 = ld breaks
  Rsh_Fir_reg_breaks9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // breaks10 = force? breaks9
  Rsh_Fir_reg_breaks10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_breaks9_);
  // checkMissing(breaks10)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_breaks10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty()));
  // as_double = ldf `as.double` in base
  Rsh_Fir_reg_as_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 62), RHO);
  // r76 = dyn as_double(breaks10)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_breaks10_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double, 1, Rsh_Fir_array_args148, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L0(r76)
  // L0(r76)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r76_;
  goto L0_;

L2_:;
  // r74 = dyn base11(<sym breaks>)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L0(r74)
  // L0(r74)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r74_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3545019636_2(SEXP CCP, SEXP RHO) {
  // breaks11 = ld breaks
  Rsh_Fir_reg_breaks11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // breaks12 = force? breaks11
  Rsh_Fir_reg_breaks12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_breaks11_);
  // checkMissing(breaks12)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_breaks12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty()));
  // return breaks12
  return Rsh_Fir_reg_breaks12_;
}
SEXP Rsh_Fir_user_promise_inner3545019636_3(SEXP CCP, SEXP RHO) {
  // breaks13 = ld breaks
  Rsh_Fir_reg_breaks13_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // breaks14 = force? breaks13
  Rsh_Fir_reg_breaks14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_breaks13_);
  // checkMissing(breaks14)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_breaks14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // r90 = `+`(0.0, breaks14)
  SEXP Rsh_Fir_array_args165[2];
  Rsh_Fir_array_args165[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_breaks14_;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty());
  // return r90
  return Rsh_Fir_reg_r90_;
}
SEXP Rsh_Fir_user_promise_inner3545019636_4(SEXP CCP, SEXP RHO) {
  // dig = ld dig
  Rsh_Fir_reg_dig = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // dig1 = force? dig
  Rsh_Fir_reg_dig1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dig);
  // checkMissing(dig1)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_dig1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty()));
  // return dig1
  return Rsh_Fir_reg_dig1_;
}
SEXP Rsh_Fir_user_promise_inner3545019636_5(SEXP CCP, SEXP RHO) {
  // right1 = ld right
  Rsh_Fir_reg_right1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // right2 = force? right1
  Rsh_Fir_reg_right2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_right1_);
  // checkMissing(right2)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_right2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty()));
  // c30 = `as.logical`(right2)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_right2_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty());
  // if c30 then L1() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L1()
    goto L1_;
  } else {
  // L0()
    goto L0_;
  }

L0_:;
  // return "["
  return Rsh_const(CCP, 51);

L1_:;
  // return "("
  return Rsh_const(CCP, 71);
}
SEXP Rsh_Fir_user_promise_inner3545019636_6(SEXP CCP, SEXP RHO) {
  // ch_br8 = ld `ch.br`
  Rsh_Fir_reg_ch_br8_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // ch_br9 = force? ch_br8
  Rsh_Fir_reg_ch_br9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ch_br8_);
  // checkMissing(ch_br9)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_ch_br9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(ch_br9)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_ch_br9_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty());
  // if c31 then L1() else L2(ch_br9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L1()
    goto L1_;
  } else {
  // L2(ch_br9)
    Rsh_Fir_reg_ch_br11_ = Rsh_Fir_reg_ch_br9_;
    goto L2_;
  }

L0_:;
  // return dx37
  return Rsh_Fir_reg_dx37_;

L1_:;
  // dr22 = tryDispatchBuiltin.1("[", ch_br9)
  SEXP Rsh_Fir_array_args190[2];
  Rsh_Fir_array_args190[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args190[1] = Rsh_Fir_reg_ch_br9_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args190);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args191, Rsh_Fir_param_types_empty());
  // if dc11 then L3() else L2(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr22)
    Rsh_Fir_reg_ch_br11_ = Rsh_Fir_reg_dr22_;
    goto L2_;
  }

L2_:;
  // nb8 = ld nb
  Rsh_Fir_reg_nb8_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // nb9 = force? nb8
  Rsh_Fir_reg_nb9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nb8_);
  // checkMissing(nb9)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_nb9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty()));
  // r103 = `-`(<missing>, nb9)
  SEXP Rsh_Fir_array_args193[2];
  Rsh_Fir_array_args193[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args193[1] = Rsh_Fir_reg_nb9_;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty());
  // __10 = ldf `[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r104 = dyn __10(ch_br11, r103)
  SEXP Rsh_Fir_array_args194[2];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_ch_br11_;
  Rsh_Fir_array_args194[1] = Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_array_arg_names47[2];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 2, Rsh_Fir_array_args194, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L0(r104)
  // L0(r104)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_r104_;
  goto L0_;

L3_:;
  // dx36 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty());
  // goto L0(dx36)
  // L0(dx36)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx36_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3545019636_7(SEXP CCP, SEXP RHO) {
  // ch_br12 = ld `ch.br`
  Rsh_Fir_reg_ch_br12_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // ch_br13 = force? ch_br12
  Rsh_Fir_reg_ch_br13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ch_br12_);
  // checkMissing(ch_br13)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_ch_br13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty()));
  // c32 = `is.object`(ch_br13)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_ch_br13_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args197, Rsh_Fir_param_types_empty());
  // if c32 then L1() else L2(ch_br13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L1()
    goto L1_;
  } else {
  // L2(ch_br13)
    Rsh_Fir_reg_ch_br15_ = Rsh_Fir_reg_ch_br13_;
    goto L2_;
  }

L0_:;
  // return dx39
  return Rsh_Fir_reg_dx39_;

L1_:;
  // dr24 = tryDispatchBuiltin.1("[", ch_br13)
  SEXP Rsh_Fir_array_args198[2];
  Rsh_Fir_array_args198[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args198[1] = Rsh_Fir_reg_ch_br13_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args198);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args199, Rsh_Fir_param_types_empty());
  // if dc12 then L3() else L2(dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr24)
    Rsh_Fir_reg_ch_br15_ = Rsh_Fir_reg_dr24_;
    goto L2_;
  }

L2_:;
  // __11 = ldf `[` in base
  Rsh_Fir_reg___11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r106 = dyn __11(ch_br15, -1)
  SEXP Rsh_Fir_array_args200[2];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_ch_br15_;
  Rsh_Fir_array_args200[1] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___11_, 2, Rsh_Fir_array_args200, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L0(r106)
  // L0(r106)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_r106_;
  goto L0_;

L3_:;
  // dx38 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty());
  // goto L0(dx38)
  // L0(dx38)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx38_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3545019636_8(SEXP CCP, SEXP RHO) {
  // right3 = ld right
  Rsh_Fir_reg_right3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // right4 = force? right3
  Rsh_Fir_reg_right4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_right3_);
  // checkMissing(right4)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_right4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty()));
  // c33 = `as.logical`(right4)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_right4_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args203, Rsh_Fir_param_types_empty());
  // if c33 then L1() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L1()
    goto L1_;
  } else {
  // L0()
    goto L0_;
  }

L0_:;
  // return ")"
  return Rsh_const(CCP, 72);

L1_:;
  // return "]"
  return Rsh_const(CCP, 38);
}
SEXP Rsh_Fir_user_promise_inner3545019636_9(SEXP CCP, SEXP RHO) {
  // sym15 = ldf seq_len
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 74), RHO);
  // base15 = ldf seq_len in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 74), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args205[2];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args205[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args205);
  // if guard15 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r112
  return Rsh_Fir_reg_r112_;

L1_:;
  // nb10 = ld nb
  Rsh_Fir_reg_nb10_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // nb11 = force? nb10
  Rsh_Fir_reg_nb11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nb10_);
  // checkMissing(nb11)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_nb11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty()));
  // r113 = `-`(nb11, 1)
  SEXP Rsh_Fir_array_args207[2];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_nb11_;
  Rsh_Fir_array_args207[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args207, Rsh_Fir_param_types_empty());
  // r114 = seq_len(r113)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_r113_;
  Rsh_Fir_reg_r114_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty());
  // goto L0(r114)
  // L0(r114)
  Rsh_Fir_reg_r112_ = Rsh_Fir_reg_r114_;
  goto L0_;

L2_:;
  // r111 = dyn base15(<lang `-`(nb, 1)>)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_const(CCP, 75);
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args209, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L0(r111)
  // L0(r111)
  Rsh_Fir_reg_r112_ = Rsh_Fir_reg_r111_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3545019636_10(SEXP CCP, SEXP RHO) {
  // sym16 = ldf nchar
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 77), RHO);
  // base16 = ldf nchar in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 77), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args235[2];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args235[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args235);
  // if guard16 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r144
  return Rsh_Fir_reg_r144_;

L1_:;
  // nchar = ldf nchar in base
  Rsh_Fir_reg_nchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 77), RHO);
  // r147 = dyn nchar(dx47, "c", FALSE, NA_LGL)
  SEXP Rsh_Fir_array_args236[4];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_dx47_;
  Rsh_Fir_array_args236[1] = Rsh_const(CCP, 78);
  Rsh_Fir_array_args236[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args236[3] = Rsh_const(CCP, 79);
  SEXP Rsh_Fir_array_arg_names56[4];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_array_arg_names56[2] = R_MissingArg;
  Rsh_Fir_array_arg_names56[3] = R_MissingArg;
  Rsh_Fir_reg_r147_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nchar, 4, Rsh_Fir_array_args236, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L0(r147)
  // L0(r147)
  Rsh_Fir_reg_r144_ = Rsh_Fir_reg_r147_;
  goto L0_;

L2_:;
  // labels3 = ld labels
  Rsh_Fir_reg_labels3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // labels4 = force? labels3
  Rsh_Fir_reg_labels4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels3_);
  // checkMissing(labels4)
  SEXP Rsh_Fir_array_args237[1];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_labels4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args237, Rsh_Fir_param_types_empty()));
  // c45 = `is.object`(labels4)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_labels4_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args238, Rsh_Fir_param_types_empty());
  // if c45 then L4() else L5(labels4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L4()
    goto L4_;
  } else {
  // L5(labels4)
    Rsh_Fir_reg_labels6_ = Rsh_Fir_reg_labels4_;
    goto L5_;
  }

L3_:;
  // r143 = dyn base16(<lang `[`(labels, `-`(nb, 1))>, "c")
  SEXP Rsh_Fir_array_args239[2];
  Rsh_Fir_array_args239[0] = Rsh_const(CCP, 80);
  Rsh_Fir_array_args239[1] = Rsh_const(CCP, 78);
  SEXP Rsh_Fir_array_arg_names57[2];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_reg_r143_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 2, Rsh_Fir_array_args239, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L0(r143)
  // L0(r143)
  Rsh_Fir_reg_r144_ = Rsh_Fir_reg_r143_;
  goto L0_;

L4_:;
  // dr32 = tryDispatchBuiltin.1("[", labels4)
  SEXP Rsh_Fir_array_args240[2];
  Rsh_Fir_array_args240[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args240[1] = Rsh_Fir_reg_labels4_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args240);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args241, Rsh_Fir_param_types_empty());
  // if dc16 then L6() else L5(dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr32)
    Rsh_Fir_reg_labels6_ = Rsh_Fir_reg_dr32_;
    goto L5_;
  }

L5_:;
  // nb14 = ld nb
  Rsh_Fir_reg_nb14_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // nb15 = force? nb14
  Rsh_Fir_reg_nb15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nb14_);
  // checkMissing(nb15)
  SEXP Rsh_Fir_array_args242[1];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_nb15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args242, Rsh_Fir_param_types_empty()));
  // r145 = `-`(nb15, 1)
  SEXP Rsh_Fir_array_args243[2];
  Rsh_Fir_array_args243[0] = Rsh_Fir_reg_nb15_;
  Rsh_Fir_array_args243[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r145_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args243, Rsh_Fir_param_types_empty());
  // __14 = ldf `[` in base
  Rsh_Fir_reg___14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r146 = dyn __14(labels6, r145)
  SEXP Rsh_Fir_array_args244[2];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_labels6_;
  Rsh_Fir_array_args244[1] = Rsh_Fir_reg_r145_;
  SEXP Rsh_Fir_array_arg_names58[2];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_array_arg_names58[1] = R_MissingArg;
  Rsh_Fir_reg_r146_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___14_, 2, Rsh_Fir_array_args244, Rsh_Fir_array_arg_names58, CCP, RHO);
  // goto L1(r146)
  // L1(r146)
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_r146_;
  goto L1_;

L6_:;
  // dx46 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args245[1];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx46_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args245, Rsh_Fir_param_types_empty());
  // goto L1(dx46)
  // L1(dx46)
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_dx46_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3545019636_11(SEXP CCP, SEXP RHO) {
  // x6 = ld x
  Rsh_Fir_reg_x6_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x7 = force? x6
  Rsh_Fir_reg_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x6_);
  // checkMissing(x7)
  SEXP Rsh_Fir_array_args269[1];
  Rsh_Fir_array_args269[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args269, Rsh_Fir_param_types_empty()));
  // return x7
  return Rsh_Fir_reg_x7_;
}
SEXP Rsh_Fir_user_promise_inner3545019636_12(SEXP CCP, SEXP RHO) {
  // breaks15 = ld breaks
  Rsh_Fir_reg_breaks15_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // breaks16 = force? breaks15
  Rsh_Fir_reg_breaks16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_breaks15_);
  // checkMissing(breaks16)
  SEXP Rsh_Fir_array_args270[1];
  Rsh_Fir_array_args270[0] = Rsh_Fir_reg_breaks16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args270, Rsh_Fir_param_types_empty()));
  // return breaks16
  return Rsh_Fir_reg_breaks16_;
}
SEXP Rsh_Fir_user_promise_inner3545019636_13(SEXP CCP, SEXP RHO) {
  // right7 = ld right
  Rsh_Fir_reg_right7_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // right8 = force? right7
  Rsh_Fir_reg_right8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_right7_);
  // checkMissing(right8)
  SEXP Rsh_Fir_array_args271[1];
  Rsh_Fir_array_args271[0] = Rsh_Fir_reg_right8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args271, Rsh_Fir_param_types_empty()));
  // return right8
  return Rsh_Fir_reg_right8_;
}
SEXP Rsh_Fir_user_promise_inner3545019636_14(SEXP CCP, SEXP RHO) {
  // include_lowest3 = ld `include.lowest`
  Rsh_Fir_reg_include_lowest3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // include_lowest4 = force? include_lowest3
  Rsh_Fir_reg_include_lowest4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_include_lowest3_);
  // checkMissing(include_lowest4)
  SEXP Rsh_Fir_array_args272[1];
  Rsh_Fir_array_args272[0] = Rsh_Fir_reg_include_lowest4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args272, Rsh_Fir_param_types_empty()));
  // return include_lowest4
  return Rsh_Fir_reg_include_lowest4_;
}
SEXP Rsh_Fir_user_promise_inner3545019636_15(SEXP CCP, SEXP RHO) {
  // code2 = ld code
  Rsh_Fir_reg_code2_ = Rsh_Fir_load(Rsh_const(CCP, 82), RHO);
  // code3 = force? code2
  Rsh_Fir_reg_code3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_code2_);
  // checkMissing(code3)
  SEXP Rsh_Fir_array_args277[1];
  Rsh_Fir_array_args277[0] = Rsh_Fir_reg_code3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args277, Rsh_Fir_param_types_empty()));
  // return code3
  return Rsh_Fir_reg_code3_;
}
SEXP Rsh_Fir_user_promise_inner3545019636_16(SEXP CCP, SEXP RHO) {
  // sym19 = ldf seq_along
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 83), RHO);
  // base19 = ldf seq_along in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 83), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args278[2];
  Rsh_Fir_array_args278[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args278[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args278);
  // if guard19 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r174
  return Rsh_Fir_reg_r174_;

L1_:;
  // labels13 = ld labels
  Rsh_Fir_reg_labels13_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // labels14 = force? labels13
  Rsh_Fir_reg_labels14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels13_);
  // checkMissing(labels14)
  SEXP Rsh_Fir_array_args279[1];
  Rsh_Fir_array_args279[0] = Rsh_Fir_reg_labels14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args279, Rsh_Fir_param_types_empty()));
  // r175 = seq_along(labels14)
  SEXP Rsh_Fir_array_args280[1];
  Rsh_Fir_array_args280[0] = Rsh_Fir_reg_labels14_;
  Rsh_Fir_reg_r175_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args280, Rsh_Fir_param_types_empty());
  // goto L0(r175)
  // L0(r175)
  Rsh_Fir_reg_r174_ = Rsh_Fir_reg_r175_;
  goto L0_;

L2_:;
  // r173 = dyn base19(<sym labels>)
  SEXP Rsh_Fir_array_args281[1];
  Rsh_Fir_array_args281[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names66[1];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_reg_r173_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args281, Rsh_Fir_array_arg_names66, CCP, RHO);
  // goto L0(r173)
  // L0(r173)
  Rsh_Fir_reg_r174_ = Rsh_Fir_reg_r173_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3545019636_17(SEXP CCP, SEXP RHO) {
  // labels15 = ld labels
  Rsh_Fir_reg_labels15_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // labels16 = force? labels15
  Rsh_Fir_reg_labels16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_labels15_);
  // checkMissing(labels16)
  SEXP Rsh_Fir_array_args282[1];
  Rsh_Fir_array_args282[0] = Rsh_Fir_reg_labels16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args282, Rsh_Fir_param_types_empty()));
  // return labels16
  return Rsh_Fir_reg_labels16_;
}
SEXP Rsh_Fir_user_promise_inner3545019636_18(SEXP CCP, SEXP RHO) {
  // ordered_result1 = ld ordered_result
  Rsh_Fir_reg_ordered_result1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // ordered_result2 = force? ordered_result1
  Rsh_Fir_reg_ordered_result2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ordered_result1_);
  // checkMissing(ordered_result2)
  SEXP Rsh_Fir_array_args283[1];
  Rsh_Fir_array_args283[0] = Rsh_Fir_reg_ordered_result2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args283, Rsh_Fir_param_types_empty()));
  // return ordered_result2
  return Rsh_Fir_reg_ordered_result2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
