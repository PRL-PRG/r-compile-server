#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner751963283_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner751963283_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner751963283_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner751963283_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner751963283_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner751963283_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner751963283_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner751963283_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner751963283_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner751963283_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner751963283_8(SEXP CCP, SEXP RHO);
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
  // r = clos inner751963283
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner751963283_, RHO, CCP);
  // st `friedman.test.formula` = r
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
SEXP Rsh_Fir_user_function_inner751963283_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner751963283 dynamic dispatch ([formula, data, subset, `na.action`, `...`])

  return Rsh_Fir_user_version_inner751963283_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner751963283_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner751963283 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner751963283/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_formula;  // formula
  SEXP Rsh_Fir_reg_data;  // data
  SEXP Rsh_Fir_reg_subset;  // subset
  SEXP Rsh_Fir_reg_na_action;  // na_action
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_formula1_;  // formula1
  SEXP Rsh_Fir_reg_formula2_;  // formula2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_formula3_;  // formula3
  SEXP Rsh_Fir_reg_formula4_;  // formula4
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_formula6_;  // formula6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_formula7_;  // formula7
  SEXP Rsh_Fir_reg_formula8_;  // formula8
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_formula10_;  // formula10
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_as_name;  // as_name
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_formula11_;  // formula11
  SEXP Rsh_Fir_reg_formula12_;  // formula12
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_formula14_;  // formula14
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_c41_;  // c41
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_c46_;  // c46
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_c48_;  // c48
  SEXP Rsh_Fir_reg_c50_;  // c50
  SEXP Rsh_Fir_reg_c51_;  // c51
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c55_;  // c55
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_formula15_;  // formula15
  SEXP Rsh_Fir_reg_formula16_;  // formula16
  SEXP Rsh_Fir_reg_c56_;  // c56
  SEXP Rsh_Fir_reg_c58_;  // c58
  SEXP Rsh_Fir_reg_formula18_;  // formula18
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_c60_;  // c60
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c61_;  // c61
  SEXP Rsh_Fir_reg_c63_;  // c63
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_c65_;  // c65
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c66_;  // c66
  SEXP Rsh_Fir_reg_c67_;  // c67
  SEXP Rsh_Fir_reg_c69_;  // c69
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_as_name1_;  // as_name1
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c70_;  // c70
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_c71_;  // c71
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_c72_;  // c72
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_match_call;  // match_call
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_formula19_;  // formula19
  SEXP Rsh_Fir_reg_formula20_;  // formula20
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_c73_;  // c73
  SEXP Rsh_Fir_reg_formula22_;  // formula22
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_eval;  // eval
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_c74_;  // c74
  SEXP Rsh_Fir_reg_m3_;  // m3
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_parent_frame;  // parent_frame
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_is_matrix;  // is_matrix
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_c75_;  // c75
  SEXP Rsh_Fir_reg_as_data_frame;  // as_data_frame
  SEXP Rsh_Fir_reg_data1_;  // data1
  SEXP Rsh_Fir_reg_data2_;  // data2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_l16_;  // l16
  SEXP Rsh_Fir_reg_c76_;  // c76
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_l18_;  // l18
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_quote;  // quote
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_l19_;  // l19
  SEXP Rsh_Fir_reg_c77_;  // c77
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_l21_;  // l21
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_____2_;  // ____2
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_eval1_;  // eval1
  SEXP Rsh_Fir_reg_m4_;  // m4
  SEXP Rsh_Fir_reg_m5_;  // m5
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_parent_frame1_;  // parent_frame1
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_mf;  // mf
  SEXP Rsh_Fir_reg_mf1_;  // mf1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_friedman_test;  // friedman_test
  SEXP Rsh_Fir_reg_mf2_;  // mf2
  SEXP Rsh_Fir_reg_mf3_;  // mf3
  SEXP Rsh_Fir_reg_c78_;  // c78
  SEXP Rsh_Fir_reg_mf5_;  // mf5
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_mf6_;  // mf6
  SEXP Rsh_Fir_reg_mf7_;  // mf7
  SEXP Rsh_Fir_reg_c79_;  // c79
  SEXP Rsh_Fir_reg_mf9_;  // mf9
  SEXP Rsh_Fir_reg_dr30_;  // dr30
  SEXP Rsh_Fir_reg_dc15_;  // dc15
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_mf10_;  // mf10
  SEXP Rsh_Fir_reg_mf11_;  // mf11
  SEXP Rsh_Fir_reg_c80_;  // c80
  SEXP Rsh_Fir_reg_mf13_;  // mf13
  SEXP Rsh_Fir_reg_dr32_;  // dr32
  SEXP Rsh_Fir_reg_dc16_;  // dc16
  SEXP Rsh_Fir_reg_dx40_;  // dx40
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg___10_;  // __10
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_DNAME;  // DNAME
  SEXP Rsh_Fir_reg_DNAME1_;  // DNAME1
  SEXP Rsh_Fir_reg_l22_;  // l22
  SEXP Rsh_Fir_reg_c81_;  // c81
  SEXP Rsh_Fir_reg_DNAME3_;  // DNAME3
  SEXP Rsh_Fir_reg_l24_;  // l24
  SEXP Rsh_Fir_reg_dr34_;  // dr34
  SEXP Rsh_Fir_reg_dc17_;  // dc17
  SEXP Rsh_Fir_reg_dx42_;  // dx42
  SEXP Rsh_Fir_reg_dx43_;  // dx43
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1

  // Bind parameters
  Rsh_Fir_reg_formula = PARAMS[0];
  Rsh_Fir_reg_data = PARAMS[1];
  Rsh_Fir_reg_subset = PARAMS[2];
  Rsh_Fir_reg_na_action = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st formula = formula
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_formula, RHO);
  (void)(Rsh_Fir_reg_formula);
  // st data = data
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_data, RHO);
  (void)(Rsh_Fir_reg_data);
  // st subset = subset
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_subset, RHO);
  (void)(Rsh_Fir_reg_subset);
  // st `na.action` = na_action
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_na_action, RHO);
  (void)(Rsh_Fir_reg_na_action);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L30() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L30()
    goto L30_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L3_:;
  // r8 = `!=`(r6, 3)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c1 then L4(c1) else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L4(c1)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1_;
    goto L4_;
  } else {
  // L38()
    goto L38_;
  }

L4_:;
  // c15 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c15 then L7(c15) else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L7(c15)
    Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c15_;
    goto L7_;
  } else {
  // L47()
    goto L47_;
  }

L5_:;
  // r13 = `!=`(r10, 3)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c12 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c13 = `||`(c6, c12)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L4(c13)
  // L4(c13)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c13_;
  goto L4_;

L6_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r12 = dyn length1(dx1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L45() else D5()
  // L45()
  goto L45_;

L7_:;
  // c31 = `as.logical`(c16)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c31 then L10(c31) else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L10(c31)
    Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c31_;
    goto L10_;
  } else {
  // L58()
    goto L58_;
  }

L8_:;
  // c23 = `is.object`(dx3)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c23 then L52() else L53(c22, dx3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L52()
    goto L52_;
  } else {
  // L53(c22, dx3)
    Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c22_;
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx3_;
    goto L53_;
  }

L9_:;
  // as_name = ldf `as.name`
  Rsh_Fir_reg_as_name = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L55() else D7()
  // L55()
  goto L55_;

L10_:;
  // c50 = `as.logical`(c32)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c50 then L14(c50) else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c50_)) {
  // L14(c50)
    Rsh_Fir_reg_c51_ = Rsh_Fir_reg_c50_;
    goto L14_;
  } else {
  // L70()
    goto L70_;
  }

L11_:;
  // r23 = `!=`(r19, 1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // c47 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c48 = `||`(c36, c47)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c36_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_c47_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L10(c48)
  // L10(c48)
  Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c48_;
  goto L10_;

L12_:;
  // c42 = `is.object`(dx9)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c42 then L65() else L66(c41, dx9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L65()
    goto L65_;
  } else {
  // L66(c41, dx9)
    Rsh_Fir_reg_c44_ = Rsh_Fir_reg_c41_;
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx9_;
    goto L66_;
  }

L13_:;
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r22 = dyn length2(dx13)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L68() else D10()
  // L68()
  goto L68_;

L14_:;
  // c69 = `as.logical`(c51)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_c51_;
  Rsh_Fir_reg_c69_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c69 then L82() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c69_)) {
  // L82()
    goto L82_;
  } else {
  // L18()
    goto L18_;
  }

L15_:;
  // r29 = `!=`(r25, 1)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // c66 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c66_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // c67 = `||`(c55, c66)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_c55_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_c66_;
  Rsh_Fir_reg_c67_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L14(c67)
  // L14(c67)
  Rsh_Fir_reg_c51_ = Rsh_Fir_reg_c67_;
  goto L14_;

L16_:;
  // c61 = `is.object`(dx15)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_c61_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c61 then L77() else L78(c60, dx15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c61_)) {
  // L77()
    goto L77_;
  } else {
  // L78(c60, dx15)
    Rsh_Fir_reg_c63_ = Rsh_Fir_reg_c60_;
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
    goto L78_;
  }

L17_:;
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r28 = dyn length3(dx19)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L80() else D12()
  // L80()
  goto L80_;

L18_:;
  // goto L19()
  // L19()
  goto L19_;

L19_:;
  // as_name1 = ldf `as.name`
  Rsh_Fir_reg_as_name1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L86() else D15()
  // L86()
  goto L86_;

L20_:;
  // c71 = `is.object`(dx21)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_reg_c71_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c71 then L91() else L92(r39, l6, dx21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c71_)) {
  // L91()
    goto L91_;
  } else {
  // L92(r39, l6, dx21)
    Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r39_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx21_;
    goto L92_;
  }

L21_:;
  // c72 = `is.object`(l10)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_c72_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c72 then L94() else L95(r45, l10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c72_)) {
  // L94()
    goto L94_;
  } else {
  // L95(r45, l10)
    Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r45_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l10_;
    goto L95_;
  }

L22_:;
  // st formula = dx27
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx27_, RHO);
  (void)(Rsh_Fir_reg_dx27_);
  // match_call = ldf `match.call`
  Rsh_Fir_reg_match_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L97() else D17()
  // L97()
  goto L97_;

L23_:;
  // c75 = `as.logical`(r55)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_c75_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c75 then L109() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c75_)) {
  // L109()
    goto L109_;
  } else {
  // L24()
    goto L24_;
  }

L24_:;
  // goto L25()
  // L25()
  goto L25_;

L25_:;
  // sym6 = ldf quote
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base6 = ldf quote in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard6 then L117() else L118()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L117()
    goto L117_;
  } else {
  // L118()
    goto L118_;
  }

L26_:;
  // l19 = ld m
  Rsh_Fir_reg_l19_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // c77 = `is.object`(l19)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_l19_;
  Rsh_Fir_reg_c77_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c77 then L119() else L120(r71, l19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c77_)) {
  // L119()
    goto L119_;
  } else {
  // L120(r71, l19)
    Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r71_;
    Rsh_Fir_reg_l21_ = Rsh_Fir_reg_l19_;
    goto L120_;
  }

L27_:;
  // st m = dx35
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx35_, RHO);
  (void)(Rsh_Fir_reg_dx35_);
  // eval1 = ldf eval
  Rsh_Fir_reg_eval1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L122() else D25()
  // L122()
  goto L122_;

L28_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r2 = dyn missing(<sym formula>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L29_:;
  // r = dyn base(<sym formula>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

L30_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L31() else D0()
  // L31()
  goto L31_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // r3 = dyn stop("formula missing")
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L32() else D1()
  // L32()
  goto L32_;

D1_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L2()
  // L2()
  goto L2_;

L34_:;
  // formula1 = ld formula
  Rsh_Fir_reg_formula1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L36() else D2()
  // L36()
  goto L36_;

L35_:;
  // r5 = dyn base1(<sym formula>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L3_;

D2_:;
  // deopt 11 [formula1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_formula1_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L36_:;
  // formula2 = force? formula1
  Rsh_Fir_reg_formula2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula1_);
  // checkMissing(formula2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_formula2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r7 = dyn length(formula2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_formula2_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L37() else D3()
  // L37()
  goto L37_;

D3_:;
  // deopt 14 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L3_;

L38_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard2 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L39_:;
  // formula3 = ld formula
  Rsh_Fir_reg_formula3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L41() else D4()
  // L41()
  goto L41_;

L40_:;
  // r9 = dyn base2(<lang `[[`(formula, 3)>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L5(c1, r9)
  // L5(c1, r9)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L5_;

D4_:;
  // deopt 19 [c1, formula3]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_formula3_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L41_:;
  // formula4 = force? formula3
  Rsh_Fir_reg_formula4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula3_);
  // checkMissing(formula4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_formula4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(formula4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_formula4_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c7 then L42() else L43(c1, formula4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L42()
    goto L42_;
  } else {
  // L43(c1, formula4)
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c1_;
    Rsh_Fir_reg_formula6_ = Rsh_Fir_reg_formula4_;
    goto L43_;
  }

L42_:;
  // dr = tryDispatchBuiltin.1("[[", formula4)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_formula4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args39);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if dc then L44() else L43(c1, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L44()
    goto L44_;
  } else {
  // L43(c1, dr)
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c1_;
    Rsh_Fir_reg_formula6_ = Rsh_Fir_reg_dr;
    goto L43_;
  }

L43_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r11 = dyn __(formula6, 3)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_formula6_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L6(c9, r11)
  // L6(c9, r11)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r11_;
  goto L6_;

L44_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L6(c1, dx)
  // L6(c1, dx)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L6_;

D5_:;
  // deopt 25 [c11, r12]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L45_:;
  // goto L5(c11, r12)
  // L5(c11, r12)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r12_;
  goto L5_;

L47_:;
  // formula7 = ld formula
  Rsh_Fir_reg_formula7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L48() else D6()
  // L48()
  goto L48_;

D6_:;
  // deopt 29 [c15, formula7]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_formula7_;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L48_:;
  // formula8 = force? formula7
  Rsh_Fir_reg_formula8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula7_);
  // checkMissing(formula8)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_formula8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c18 = `is.object`(formula8)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_formula8_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c18 then L49() else L50(c15, formula8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L49()
    goto L49_;
  } else {
  // L50(c15, formula8)
    Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c15_;
    Rsh_Fir_reg_formula10_ = Rsh_Fir_reg_formula8_;
    goto L50_;
  }

L49_:;
  // dr2 = tryDispatchBuiltin.1("[[", formula8)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_formula8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args45);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if dc1 then L51() else L50(c15, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L51()
    goto L51_;
  } else {
  // L50(c15, dr2)
    Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c15_;
    Rsh_Fir_reg_formula10_ = Rsh_Fir_reg_dr2_;
    goto L50_;
  }

L50_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r14 = dyn __1(formula10, 3)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_formula10_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L8(c20, r14)
  // L8(c20, r14)
  Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r14_;
  goto L8_;

L51_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L8(c15, dx2)
  // L8(c15, dx2)
  Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L8_;

L52_:;
  // dr4 = tryDispatchBuiltin.1("[[", dx3)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args49);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if dc2 then L54() else L53(c22, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L54()
    goto L54_;
  } else {
  // L53(c22, dr4)
    Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c22_;
    Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dr4_;
    goto L53_;
  }

L53_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r15 = dyn __2(dx5, 1)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L9(c25, r15)
  // L9(c25, r15)
  Rsh_Fir_reg_c27_ = Rsh_Fir_reg_c25_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r15_;
  goto L9_;

L54_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L9(c22, dx6)
  // L9(c22, dx6)
  Rsh_Fir_reg_c27_ = Rsh_Fir_reg_c22_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L9_;

D7_:;
  // deopt 37 [c27, dx7]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c27_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L55_:;
  // r16 = dyn as_name("|")
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_name, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L56() else D8()
  // L56()
  goto L56_;

D8_:;
  // deopt 39 [c27, dx7, r16]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c27_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(39, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L56_:;
  // r17 = `!=`(dx7, r16)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // c28 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // c29 = `||`(c27, c28)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_c27_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_c28_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L7(c29)
  // L7(c29)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c29_;
  goto L7_;

L58_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard3 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L59_:;
  // formula11 = ld formula
  Rsh_Fir_reg_formula11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L61() else D9()
  // L61()
  goto L61_;

L60_:;
  // r18 = dyn base3(<lang `[[`(`[[`(formula, 3), 2)>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L11(c31, r18)
  // L11(c31, r18)
  Rsh_Fir_reg_c36_ = Rsh_Fir_reg_c31_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L11_;

D9_:;
  // deopt 44 [c31, formula11]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c31_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_formula11_;
  Rsh_Fir_deopt(44, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L61_:;
  // formula12 = force? formula11
  Rsh_Fir_reg_formula12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula11_);
  // checkMissing(formula12)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_formula12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // c37 = `is.object`(formula12)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_formula12_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if c37 then L62() else L63(c31, formula12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L62()
    goto L62_;
  } else {
  // L63(c31, formula12)
    Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c31_;
    Rsh_Fir_reg_formula14_ = Rsh_Fir_reg_formula12_;
    goto L63_;
  }

L62_:;
  // dr6 = tryDispatchBuiltin.1("[[", formula12)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_formula12_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args61);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if dc3 then L64() else L63(c31, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L64()
    goto L64_;
  } else {
  // L63(c31, dr6)
    Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c31_;
    Rsh_Fir_reg_formula14_ = Rsh_Fir_reg_dr6_;
    goto L63_;
  }

L63_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r20 = dyn __3(formula14, 3)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_formula14_;
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L12(c39, r20)
  // L12(c39, r20)
  Rsh_Fir_reg_c41_ = Rsh_Fir_reg_c39_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r20_;
  goto L12_;

L64_:;
  // dx8 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L12(c31, dx8)
  // L12(c31, dx8)
  Rsh_Fir_reg_c41_ = Rsh_Fir_reg_c31_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L12_;

L65_:;
  // dr8 = tryDispatchBuiltin.1("[[", dx9)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args65);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if dc4 then L67() else L66(c41, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L67()
    goto L67_;
  } else {
  // L66(c41, dr8)
    Rsh_Fir_reg_c44_ = Rsh_Fir_reg_c41_;
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dr8_;
    goto L66_;
  }

L66_:;
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r21 = dyn __4(dx11, 2)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L13(c44, r21)
  // L13(c44, r21)
  Rsh_Fir_reg_c46_ = Rsh_Fir_reg_c44_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r21_;
  goto L13_;

L67_:;
  // dx12 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L13(c41, dx12)
  // L13(c41, dx12)
  Rsh_Fir_reg_c46_ = Rsh_Fir_reg_c41_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L13_;

D10_:;
  // deopt 53 [c46, r22]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c46_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(53, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L11(c46, r22)
  // L11(c46, r22)
  Rsh_Fir_reg_c36_ = Rsh_Fir_reg_c46_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r22_;
  goto L11_;

L70_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args69);
  // if guard4 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L71_:;
  // formula15 = ld formula
  Rsh_Fir_reg_formula15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L73() else D11()
  // L73()
  goto L73_;

L72_:;
  // r24 = dyn base4(<lang `[[`(`[[`(formula, 3), 3)>)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L15(c50, r24)
  // L15(c50, r24)
  Rsh_Fir_reg_c55_ = Rsh_Fir_reg_c50_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L15_;

D11_:;
  // deopt 59 [c50, formula15]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c50_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_formula15_;
  Rsh_Fir_deopt(59, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L73_:;
  // formula16 = force? formula15
  Rsh_Fir_reg_formula16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula15_);
  // checkMissing(formula16)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_formula16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // c56 = `is.object`(formula16)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_formula16_;
  Rsh_Fir_reg_c56_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if c56 then L74() else L75(c50, formula16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c56_)) {
  // L74()
    goto L74_;
  } else {
  // L75(c50, formula16)
    Rsh_Fir_reg_c58_ = Rsh_Fir_reg_c50_;
    Rsh_Fir_reg_formula18_ = Rsh_Fir_reg_formula16_;
    goto L75_;
  }

L74_:;
  // dr10 = tryDispatchBuiltin.1("[[", formula16)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_formula16_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args73);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc5 then L76() else L75(c50, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L76()
    goto L76_;
  } else {
  // L75(c50, dr10)
    Rsh_Fir_reg_c58_ = Rsh_Fir_reg_c50_;
    Rsh_Fir_reg_formula18_ = Rsh_Fir_reg_dr10_;
    goto L75_;
  }

L75_:;
  // __5 = ldf `[[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r26 = dyn __5(formula18, 3)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_formula18_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L16(c58, r26)
  // L16(c58, r26)
  Rsh_Fir_reg_c60_ = Rsh_Fir_reg_c58_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r26_;
  goto L16_;

L76_:;
  // dx14 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L16(c50, dx14)
  // L16(c50, dx14)
  Rsh_Fir_reg_c60_ = Rsh_Fir_reg_c50_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L16_;

L77_:;
  // dr12 = tryDispatchBuiltin.1("[[", dx15)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args77);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if dc6 then L79() else L78(c60, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L79()
    goto L79_;
  } else {
  // L78(c60, dr12)
    Rsh_Fir_reg_c63_ = Rsh_Fir_reg_c60_;
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dr12_;
    goto L78_;
  }

L78_:;
  // __6 = ldf `[[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r27 = dyn __6(dx17, 3)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L17(c63, r27)
  // L17(c63, r27)
  Rsh_Fir_reg_c65_ = Rsh_Fir_reg_c63_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r27_;
  goto L17_;

L79_:;
  // dx18 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L17(c60, dx18)
  // L17(c60, dx18)
  Rsh_Fir_reg_c65_ = Rsh_Fir_reg_c60_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L17_;

D12_:;
  // deopt 68 [c65, r28]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c65_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(68, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L80_:;
  // goto L15(c65, r28)
  // L15(c65, r28)
  Rsh_Fir_reg_c55_ = Rsh_Fir_reg_c65_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r28_;
  goto L15_;

L82_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L83() else D13()
  // L83()
  goto L83_;

D13_:;
  // deopt 73 []
  Rsh_Fir_deopt(73, 0, NULL, CCP, RHO);
  return R_NilValue;

L83_:;
  // r30 = dyn stop1("incorrect specification for 'formula'")
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L84() else D14()
  // L84()
  goto L84_;

D14_:;
  // deopt 75 [r30]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L84_:;
  // goto L19()
  // L19()
  goto L19_;

D15_:;
  // deopt 79 []
  Rsh_Fir_deopt(79, 0, NULL, CCP, RHO);
  return R_NilValue;

L86_:;
  // r32 = dyn as_name1("+")
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_name1_, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L87() else D16()
  // L87()
  goto L87_;

D16_:;
  // deopt 81 [r32]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L87_:;
  // l = ld formula
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c70 = `is.object`(l)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c70_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if c70 then L88() else L89(r32, l, r32, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c70_)) {
  // L88()
    goto L88_;
  } else {
  // L89(r32, l, r32, l)
    Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r32_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r32_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l;
    goto L89_;
  }

L88_:;
  // dr14 = tryDispatchBuiltin.1("[[", l)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args84);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if dc7 then L90() else L89(r32, l, r32, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L90()
    goto L90_;
  } else {
  // L89(r32, l, r32, dr14)
    Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r32_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r32_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_dr14_;
    goto L89_;
  }

L89_:;
  // __7 = ldf `[[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r41 = dyn __7(l4, 3)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L20(r35, l3, r36, r41)
  // L20(r35, l3, r36, r41)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r41_;
  goto L20_;

L90_:;
  // dx20 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L20(r32, l, r32, dx20)
  // L20(r32, l, r32, dx20)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l;
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L20_;

L91_:;
  // dr16 = tryDispatchBuiltin.0("[[<-", dx21, r40)
  SEXP Rsh_Fir_array_args88[3];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_array_args88[2] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args88);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // if dc8 then L93() else L92(r39, l6, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L93()
    goto L93_;
  } else {
  // L92(r39, l6, dr16)
    Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r39_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dr16_;
    goto L92_;
  }

L92_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r46 = dyn ____(dx23, r40, 1)
  SEXP Rsh_Fir_array_args90[3];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_array_args90[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L21(r43, l8, r46)
  // L21(r43, l8, r46)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r46_;
  goto L21_;

L93_:;
  // dx24 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // goto L21(r39, l6, dx24)
  // L21(r39, l6, dx24)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L21_;

L94_:;
  // dr18 = tryDispatchBuiltin.0("[[<-", l10, dx25)
  SEXP Rsh_Fir_array_args92[3];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args92[2] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args92);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if dc9 then L96() else L95(r45, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L96()
    goto L96_;
  } else {
  // L95(r45, dr18)
    Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r45_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_dr18_;
    goto L95_;
  }

L95_:;
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r51 = dyn ____1(l12, dx25, 3)
  SEXP Rsh_Fir_array_args94[3];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_dx25_;
  Rsh_Fir_array_args94[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L22(r51)
  // L22(r51)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r51_;
  goto L22_;

L96_:;
  // dx26 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // goto L22(dx26)
  // L22(dx26)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L22_;

D17_:;
  // deopt 96 []
  Rsh_Fir_deopt(96, 0, NULL, CCP, RHO);
  return R_NilValue;

L97_:;
  // r52 = dyn match_call[`expand.dots`](FALSE)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_call, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L98() else D18()
  // L98()
  goto L98_;

D18_:;
  // deopt 99 [r52]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L98_:;
  // st m = r52
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r52_, RHO);
  (void)(Rsh_Fir_reg_r52_);
  // formula19 = ld formula
  Rsh_Fir_reg_formula19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L99() else D19()
  // L99()
  goto L99_;

D19_:;
  // deopt 101 [formula19]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_formula19_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L99_:;
  // formula20 = force? formula19
  Rsh_Fir_reg_formula20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula19_);
  // checkMissing(formula20)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_formula20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // l13 = ld m
  Rsh_Fir_reg_l13_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // c73 = `is.object`(l13)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_reg_c73_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // if c73 then L101() else L102(formula20, l13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c73_)) {
  // L101()
    goto L101_;
  } else {
  // L102(formula20, l13)
    Rsh_Fir_reg_formula22_ = Rsh_Fir_reg_formula20_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_l13_;
    goto L102_;
  }

L100_:;
  // st m = dx29
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx29_, RHO);
  (void)(Rsh_Fir_reg_dx29_);
  // sym5 = ldf `is.matrix`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base5 = ldf `is.matrix` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args99);
  // if guard5 then L104() else L105()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L104()
    goto L104_;
  } else {
  // L105()
    goto L105_;
  }

L101_:;
  // dr20 = tryDispatchBuiltin.0("$<-", l13, formula20)
  SEXP Rsh_Fir_array_args100[3];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args100[2] = Rsh_Fir_reg_formula20_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args100);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if dc10 then L103() else L102(formula20, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L103()
    goto L103_;
  } else {
  // L102(formula20, dr20)
    Rsh_Fir_reg_formula22_ = Rsh_Fir_reg_formula20_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_dr20_;
    goto L102_;
  }

L102_:;
  // r53 = `$<-`(l15, <sym formula>, formula20)
  SEXP Rsh_Fir_array_args102[3];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args102[2] = Rsh_Fir_reg_formula20_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // goto L100(r53)
  // L100(r53)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r53_;
  goto L100_;

L103_:;
  // dx28 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // goto L100(dx28)
  // L100(dx28)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L100_;

L104_:;
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L106() else D20()
  // L106()
  goto L106_;

L105_:;
  // r54 = dyn base5(<lang eval(`$`(m, data), parent.frame())>)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L23(r54)
  // L23(r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L23_;

D20_:;
  // deopt 109 []
  Rsh_Fir_deopt(109, 0, NULL, CCP, RHO);
  return R_NilValue;

L106_:;
  // p = prom<V +>{
  //   m = ld m;
  //   m1 = force? m;
  //   checkMissing(m1);
  //   c74 = `is.object`(m1);
  //   if c74 then L1() else L2(m1);
  // L0(dx31):
  //   return dx31;
  // L1():
  //   dr22 = tryDispatchBuiltin.1("$", m1);
  //   dc11 = getTryDispatchBuiltinDispatched(dr22);
  //   if dc11 then L3() else L2(dr22);
  // L2(m3):
  //   r56 = `$`(m3, <sym data>);
  //   goto L0(r56);
  // L3():
  //   dx30 = getTryDispatchBuiltinValue(dr22);
  //   goto L0(dx30);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner751963283_, CCP, RHO);
  // p1 = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r58 = dyn parent_frame();
  //   return r58;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner751963283_1, CCP, RHO);
  // r60 = dyn eval(p, p1)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 2, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L107() else D21()
  // L107()
  goto L107_;

D21_:;
  // deopt 112 [r60]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L107_:;
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r61 = dyn is_matrix(r60)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L108() else D22()
  // L108()
  goto L108_;

D22_:;
  // deopt 114 [r61]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L108_:;
  // goto L23(r61)
  // L23(r61)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r61_;
  goto L23_;

L109_:;
  // as_data_frame = ldf `as.data.frame`
  Rsh_Fir_reg_as_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L110() else D23()
  // L110()
  goto L110_;

D23_:;
  // deopt 116 []
  Rsh_Fir_deopt(116, 0, NULL, CCP, RHO);
  return R_NilValue;

L110_:;
  // p2 = prom<V +>{
  //   data1 = ld data;
  //   data2 = force? data1;
  //   checkMissing(data2);
  //   return data2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner751963283_2, CCP, RHO);
  // r63 = dyn as_data_frame(p2)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame, 1, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L111() else D24()
  // L111()
  goto L111_;

D24_:;
  // deopt 118 [r63]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L111_:;
  // l16 = ld m
  Rsh_Fir_reg_l16_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // c76 = `is.object`(l16)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_l16_;
  Rsh_Fir_reg_c76_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // if c76 then L113() else L114(r63, l16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c76_)) {
  // L113()
    goto L113_;
  } else {
  // L114(r63, l16)
    Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r63_;
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_l16_;
    goto L114_;
  }

L112_:;
  // st m = dx33
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx33_, RHO);
  (void)(Rsh_Fir_reg_dx33_);
  // goto L25()
  // L25()
  goto L25_;

L113_:;
  // dr24 = tryDispatchBuiltin.0("$<-", l16, r63)
  SEXP Rsh_Fir_array_args116[3];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_l16_;
  Rsh_Fir_array_args116[2] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args116);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // if dc12 then L115() else L114(r63, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L115()
    goto L115_;
  } else {
  // L114(r63, dr24)
    Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r63_;
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_dr24_;
    goto L114_;
  }

L114_:;
  // r68 = `$<-`(l18, <sym data>, r63)
  SEXP Rsh_Fir_array_args118[3];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_args118[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args118[2] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // goto L112(r65, r68)
  // L112(r65, r68)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_r68_;
  goto L112_;

L115_:;
  // dx32 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx32_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // goto L112(r63, dx32)
  // L112(r63, dx32)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx32_;
  goto L112_;

L117_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r72 = dyn quote(<lang `::`(stats, model.frame)>)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L26(r72)
  // L26(r72)
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r72_;
  goto L26_;

L118_:;
  // r70 = dyn base6(<lang `::`(stats, model.frame)>)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L26(r70)
  // L26(r70)
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r70_;
  goto L26_;

L119_:;
  // dr26 = tryDispatchBuiltin.0("[[<-", l19, r71)
  SEXP Rsh_Fir_array_args122[3];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_l19_;
  Rsh_Fir_array_args122[2] = Rsh_Fir_reg_r71_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args122);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // if dc13 then L121() else L120(r71, dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L121()
    goto L121_;
  } else {
  // L120(r71, dr26)
    Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r71_;
    Rsh_Fir_reg_l21_ = Rsh_Fir_reg_dr26_;
    goto L120_;
  }

L120_:;
  // ____2 = ldf `[[<-` in base
  Rsh_Fir_reg_____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r77 = dyn ____2(l21, r71, 1)
  SEXP Rsh_Fir_array_args124[3];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_l21_;
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_r71_;
  Rsh_Fir_array_args124[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____2_, 3, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L27(r77)
  // L27(r77)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_r77_;
  goto L27_;

L121_:;
  // dx34 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // goto L27(dx34)
  // L27(dx34)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx34_;
  goto L27_;

D25_:;
  // deopt 133 []
  Rsh_Fir_deopt(133, 0, NULL, CCP, RHO);
  return R_NilValue;

L122_:;
  // p3 = prom<V +>{
  //   m4 = ld m;
  //   m5 = force? m4;
  //   checkMissing(m5);
  //   return m5;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner751963283_3, CCP, RHO);
  // p4 = prom<V +>{
  //   parent_frame1 = ldf `parent.frame`;
  //   r79 = dyn parent_frame1();
  //   return r79;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner751963283_4, CCP, RHO);
  // r81 = dyn eval1(p3, p4)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval1_, 2, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L123() else D26()
  // L123()
  goto L123_;

D26_:;
  // deopt 136 [r81]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L123_:;
  // st mf = r81
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r81_, RHO);
  (void)(Rsh_Fir_reg_r81_);
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L124() else D27()
  // L124()
  goto L124_;

D27_:;
  // deopt 139 []
  Rsh_Fir_deopt(139, 0, NULL, CCP, RHO);
  return R_NilValue;

L124_:;
  // p5 = prom<V +>{
  //   sym7 = ldf names;
  //   base7 = ldf names in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r83):
  //   return r83;
  // L1():
  //   mf = ld mf;
  //   mf1 = force? mf;
  //   checkMissing(mf1);
  //   names = ldf names in base;
  //   r84 = dyn names(mf1);
  //   goto L0(r84);
  // L2():
  //   r82 = dyn base7(<sym mf>);
  //   goto L0(r82);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner751963283_5, CCP, RHO);
  // r86 = dyn paste[, collapse](p5, " and ")
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args132[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L125() else D28()
  // L125()
  goto L125_;

D28_:;
  // deopt 143 [r86]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L125_:;
  // st DNAME = r86
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_r86_, RHO);
  (void)(Rsh_Fir_reg_r86_);
  // friedman_test = ldf `friedman.test`
  Rsh_Fir_reg_friedman_test = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L126() else D29()
  // L126()
  goto L126_;

D29_:;
  // deopt 146 []
  Rsh_Fir_deopt(146, 0, NULL, CCP, RHO);
  return R_NilValue;

L126_:;
  // p6 = prom<V +>{
  //   mf2 = ld mf;
  //   mf3 = force? mf2;
  //   checkMissing(mf3);
  //   c78 = `is.object`(mf3);
  //   if c78 then L1() else L2(mf3);
  // L0(dx37):
  //   return dx37;
  // L1():
  //   dr28 = tryDispatchBuiltin.1("[[", mf3);
  //   dc14 = getTryDispatchBuiltinDispatched(dr28);
  //   if dc14 then L3() else L2(dr28);
  // L2(mf5):
  //   __8 = ldf `[[` in base;
  //   r87 = dyn __8(mf5, 1);
  //   goto L0(r87);
  // L3():
  //   dx36 = getTryDispatchBuiltinValue(dr28);
  //   goto L0(dx36);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner751963283_6, CCP, RHO);
  // p7 = prom<V +>{
  //   mf6 = ld mf;
  //   mf7 = force? mf6;
  //   checkMissing(mf7);
  //   c79 = `is.object`(mf7);
  //   if c79 then L1() else L2(mf7);
  // L0(dx39):
  //   return dx39;
  // L1():
  //   dr30 = tryDispatchBuiltin.1("[[", mf7);
  //   dc15 = getTryDispatchBuiltinDispatched(dr30);
  //   if dc15 then L3() else L2(dr30);
  // L2(mf9):
  //   __9 = ldf `[[` in base;
  //   r89 = dyn __9(mf9, 2);
  //   goto L0(r89);
  // L3():
  //   dx38 = getTryDispatchBuiltinValue(dr30);
  //   goto L0(dx38);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner751963283_7, CCP, RHO);
  // p8 = prom<V +>{
  //   mf10 = ld mf;
  //   mf11 = force? mf10;
  //   checkMissing(mf11);
  //   c80 = `is.object`(mf11);
  //   if c80 then L1() else L2(mf11);
  // L0(dx41):
  //   return dx41;
  // L1():
  //   dr32 = tryDispatchBuiltin.1("[[", mf11);
  //   dc16 = getTryDispatchBuiltinDispatched(dr32);
  //   if dc16 then L3() else L2(dr32);
  // L2(mf13):
  //   __10 = ldf `[[` in base;
  //   r91 = dyn __10(mf13, 3);
  //   goto L0(r91);
  // L3():
  //   dx40 = getTryDispatchBuiltinValue(dr32);
  //   goto L0(dx40);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner751963283_8, CCP, RHO);
  // r93 = dyn friedman_test(p6, p7, p8)
  SEXP Rsh_Fir_array_args151[3];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args151[2] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names39[3];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_array_arg_names39[2] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_friedman_test, 3, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L127() else D30()
  // L127()
  goto L127_;

D30_:;
  // deopt 150 [r93]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_deopt(150, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L127_:;
  // st y = r93
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r93_, RHO);
  (void)(Rsh_Fir_reg_r93_);
  // DNAME = ld DNAME
  Rsh_Fir_reg_DNAME = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L128() else D31()
  // L128()
  goto L128_;

D31_:;
  // deopt 152 [DNAME]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_DNAME;
  Rsh_Fir_deopt(152, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L128_:;
  // DNAME1 = force? DNAME
  Rsh_Fir_reg_DNAME1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_DNAME);
  // checkMissing(DNAME1)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_DNAME1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty()));
  // l22 = ld y
  Rsh_Fir_reg_l22_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // c81 = `is.object`(l22)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_l22_;
  Rsh_Fir_reg_c81_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // if c81 then L130() else L131(DNAME1, l22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c81_)) {
  // L130()
    goto L130_;
  } else {
  // L131(DNAME1, l22)
    Rsh_Fir_reg_DNAME3_ = Rsh_Fir_reg_DNAME1_;
    Rsh_Fir_reg_l24_ = Rsh_Fir_reg_l22_;
    goto L131_;
  }

L129_:;
  // st y = dx43
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_dx43_, RHO);
  (void)(Rsh_Fir_reg_dx43_);
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L133() else D32()
  // L133()
  goto L133_;

L130_:;
  // dr34 = tryDispatchBuiltin.0("$<-", l22, DNAME1)
  SEXP Rsh_Fir_array_args154[3];
  Rsh_Fir_array_args154[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args154[1] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_args154[2] = Rsh_Fir_reg_DNAME1_;
  Rsh_Fir_reg_dr34_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args154);
  // dc17 = getTryDispatchBuiltinDispatched(dr34)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dc17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty());
  // if dc17 then L132() else L131(DNAME1, dr34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc17_)) {
  // L132()
    goto L132_;
  } else {
  // L131(DNAME1, dr34)
    Rsh_Fir_reg_DNAME3_ = Rsh_Fir_reg_DNAME1_;
    Rsh_Fir_reg_l24_ = Rsh_Fir_reg_dr34_;
    goto L131_;
  }

L131_:;
  // r94 = `$<-`(l24, <sym data.name>, DNAME1)
  SEXP Rsh_Fir_array_args156[3];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_args156[1] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args156[2] = Rsh_Fir_reg_DNAME1_;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty());
  // goto L129(r94)
  // L129(r94)
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_r94_;
  goto L129_;

L132_:;
  // dx42 = getTryDispatchBuiltinValue(dr34)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // goto L129(dx42)
  // L129(dx42)
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx42_;
  goto L129_;

D32_:;
  // deopt 157 [y]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L133_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return y1
  return Rsh_Fir_reg_y1_;
}
SEXP Rsh_Fir_user_promise_inner751963283_(SEXP CCP, SEXP RHO) {
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // c74 = `is.object`(m1)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_m1_;
  Rsh_Fir_reg_c74_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // if c74 then L1() else L2(m1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c74_)) {
  // L1()
    goto L1_;
  } else {
  // L2(m1)
    Rsh_Fir_reg_m3_ = Rsh_Fir_reg_m1_;
    goto L2_;
  }

L0_:;
  // return dx31
  return Rsh_Fir_reg_dx31_;

L1_:;
  // dr22 = tryDispatchBuiltin.1("$", m1)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_m1_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args107);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // if dc11 then L3() else L2(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr22)
    Rsh_Fir_reg_m3_ = Rsh_Fir_reg_dr22_;
    goto L2_;
  }

L2_:;
  // r56 = `$`(m3, <sym data>)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_m3_;
  Rsh_Fir_array_args109[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // goto L0(r56)
  // L0(r56)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r56_;
  goto L0_;

L3_:;
  // dx30 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // goto L0(dx30)
  // L0(dx30)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner751963283_1(SEXP CCP, SEXP RHO) {
  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // r58 = dyn parent_frame()
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r58
  return Rsh_Fir_reg_r58_;
}
SEXP Rsh_Fir_user_promise_inner751963283_2(SEXP CCP, SEXP RHO) {
  // data1 = ld data
  Rsh_Fir_reg_data1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // data2 = force? data1
  Rsh_Fir_reg_data2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data1_);
  // checkMissing(data2)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_data2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // return data2
  return Rsh_Fir_reg_data2_;
}
SEXP Rsh_Fir_user_promise_inner751963283_3(SEXP CCP, SEXP RHO) {
  // m4 = ld m
  Rsh_Fir_reg_m4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // m5 = force? m4
  Rsh_Fir_reg_m5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m4_);
  // checkMissing(m5)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_m5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // return m5
  return Rsh_Fir_reg_m5_;
}
SEXP Rsh_Fir_user_promise_inner751963283_4(SEXP CCP, SEXP RHO) {
  // parent_frame1 = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // r79 = dyn parent_frame1()
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame1_, 0, NULL, NULL, CCP, RHO);
  // return r79
  return Rsh_Fir_reg_r79_;
}
SEXP Rsh_Fir_user_promise_inner751963283_5(SEXP CCP, SEXP RHO) {
  // sym7 = ldf names
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base7 = ldf names in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args128);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r83
  return Rsh_Fir_reg_r83_;

L1_:;
  // mf = ld mf
  Rsh_Fir_reg_mf = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // mf1 = force? mf
  Rsh_Fir_reg_mf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf);
  // checkMissing(mf1)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_mf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r84 = dyn names(mf1)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_mf1_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L0(r84)
  // L0(r84)
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r84_;
  goto L0_;

L2_:;
  // r82 = dyn base7(<sym mf>)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L0(r82)
  // L0(r82)
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r82_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner751963283_6(SEXP CCP, SEXP RHO) {
  // mf2 = ld mf
  Rsh_Fir_reg_mf2_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // mf3 = force? mf2
  Rsh_Fir_reg_mf3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf2_);
  // checkMissing(mf3)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_mf3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // c78 = `is.object`(mf3)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_mf3_;
  Rsh_Fir_reg_c78_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if c78 then L1() else L2(mf3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c78_)) {
  // L1()
    goto L1_;
  } else {
  // L2(mf3)
    Rsh_Fir_reg_mf5_ = Rsh_Fir_reg_mf3_;
    goto L2_;
  }

L0_:;
  // return dx37
  return Rsh_Fir_reg_dx37_;

L1_:;
  // dr28 = tryDispatchBuiltin.1("[[", mf3)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_mf3_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args135);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // if dc14 then L3() else L2(dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr28)
    Rsh_Fir_reg_mf5_ = Rsh_Fir_reg_dr28_;
    goto L2_;
  }

L2_:;
  // __8 = ldf `[[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r87 = dyn __8(mf5, 1)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_mf5_;
  Rsh_Fir_array_args137[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L0(r87)
  // L0(r87)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_r87_;
  goto L0_;

L3_:;
  // dx36 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // goto L0(dx36)
  // L0(dx36)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx36_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner751963283_7(SEXP CCP, SEXP RHO) {
  // mf6 = ld mf
  Rsh_Fir_reg_mf6_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // mf7 = force? mf6
  Rsh_Fir_reg_mf7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf6_);
  // checkMissing(mf7)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_mf7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // c79 = `is.object`(mf7)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_mf7_;
  Rsh_Fir_reg_c79_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // if c79 then L1() else L2(mf7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c79_)) {
  // L1()
    goto L1_;
  } else {
  // L2(mf7)
    Rsh_Fir_reg_mf9_ = Rsh_Fir_reg_mf7_;
    goto L2_;
  }

L0_:;
  // return dx39
  return Rsh_Fir_reg_dx39_;

L1_:;
  // dr30 = tryDispatchBuiltin.1("[[", mf7)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_mf7_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args141);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // if dc15 then L3() else L2(dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr30)
    Rsh_Fir_reg_mf9_ = Rsh_Fir_reg_dr30_;
    goto L2_;
  }

L2_:;
  // __9 = ldf `[[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r89 = dyn __9(mf9, 2)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_mf9_;
  Rsh_Fir_array_args143[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L0(r89)
  // L0(r89)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_r89_;
  goto L0_;

L3_:;
  // dx38 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // goto L0(dx38)
  // L0(dx38)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx38_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner751963283_8(SEXP CCP, SEXP RHO) {
  // mf10 = ld mf
  Rsh_Fir_reg_mf10_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // mf11 = force? mf10
  Rsh_Fir_reg_mf11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_mf10_);
  // checkMissing(mf11)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_mf11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty()));
  // c80 = `is.object`(mf11)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_mf11_;
  Rsh_Fir_reg_c80_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // if c80 then L1() else L2(mf11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c80_)) {
  // L1()
    goto L1_;
  } else {
  // L2(mf11)
    Rsh_Fir_reg_mf13_ = Rsh_Fir_reg_mf11_;
    goto L2_;
  }

L0_:;
  // return dx41
  return Rsh_Fir_reg_dx41_;

L1_:;
  // dr32 = tryDispatchBuiltin.1("[[", mf11)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_mf11_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args147);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // if dc16 then L3() else L2(dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr32)
    Rsh_Fir_reg_mf13_ = Rsh_Fir_reg_dr32_;
    goto L2_;
  }

L2_:;
  // __10 = ldf `[[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r91 = dyn __10(mf13, 3)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_mf13_;
  Rsh_Fir_array_args149[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 2, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L0(r91)
  // L0(r91)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_r91_;
  goto L0_;

L3_:;
  // dx40 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx40_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty());
  // goto L0(dx40)
  // L0(dx40)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx40_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
