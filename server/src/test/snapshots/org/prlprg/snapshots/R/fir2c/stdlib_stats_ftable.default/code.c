#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2878520484_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2878520484_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2878520484_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2878520484_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2878520484_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2878520484_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2878520484_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2878520484_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2878520484_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2878520484_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2878520484_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2878520484_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2878520484_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2878520484_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2878520484_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2878520484_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2878520484_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2878520484_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2878520484_16(SEXP CCP, SEXP RHO);
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
  // r = clos inner2878520484
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2878520484_, RHO, CCP);
  // st `ftable.default` = r
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
SEXP Rsh_Fir_user_function_inner2878520484_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2878520484 dynamic dispatch ([`...`, exclude, `row.vars`, `col.vars`])

  return Rsh_Fir_user_version_inner2878520484_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2878520484_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2878520484 version 0 (dots, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner2878520484/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_exclude;  // exclude
  SEXP Rsh_Fir_reg_row_vars;  // row_vars
  SEXP Rsh_Fir_reg_col_vars;  // col_vars
  SEXP Rsh_Fir_reg_exclude_isMissing;  // exclude_isMissing
  SEXP Rsh_Fir_reg_exclude_orDefault;  // exclude_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_row_vars_isMissing;  // row_vars_isMissing
  SEXP Rsh_Fir_reg_row_vars_orDefault;  // row_vars_orDefault
  SEXP Rsh_Fir_reg_col_vars_isMissing;  // col_vars_isMissing
  SEXP Rsh_Fir_reg_col_vars_orDefault;  // col_vars_orDefault
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_args;  // args
  SEXP Rsh_Fir_reg_args1_;  // args1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_args2_;  // args2
  SEXP Rsh_Fir_reg_args3_;  // args3
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_args5_;  // args5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_is_list;  // is_list
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_table;  // table
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_exclude1_;  // exclude1
  SEXP Rsh_Fir_reg_exclude2_;  // exclude2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_inherits;  // inherits
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_is_array;  // is_array
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_dim;  // dim
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_as_table;  // as_table
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_arr2_;  // arr2
  SEXP Rsh_Fir_reg_arr3_;  // arr3
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_table1_;  // table1
  SEXP Rsh_Fir_reg_ddd2_;  // ddd2
  SEXP Rsh_Fir_reg_exclude3_;  // exclude3
  SEXP Rsh_Fir_reg_exclude4_;  // exclude4
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_dimnames;  // dimnames
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_dim1_;  // dim1
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_row_vars1_;  // row_vars1
  SEXP Rsh_Fir_reg_row_vars2_;  // row_vars2
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_row_vars3_;  // row_vars3
  SEXP Rsh_Fir_reg_row_vars4_;  // row_vars4
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_pmatch;  // pmatch
  SEXP Rsh_Fir_reg_row_vars5_;  // row_vars5
  SEXP Rsh_Fir_reg_row_vars6_;  // row_vars6
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_dn;  // dn
  SEXP Rsh_Fir_reg_dn1_;  // dn1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_anyNA;  // anyNA
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg_i4_;  // i4
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_row_vars7_;  // row_vars7
  SEXP Rsh_Fir_reg_row_vars8_;  // row_vars8
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_row_vars9_;  // row_vars9
  SEXP Rsh_Fir_reg_row_vars10_;  // row_vars10
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_c41_;  // c41
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_col_vars1_;  // col_vars1
  SEXP Rsh_Fir_reg_col_vars2_;  // col_vars2
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_col_vars3_;  // col_vars3
  SEXP Rsh_Fir_reg_col_vars4_;  // col_vars4
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_pmatch1_;  // pmatch1
  SEXP Rsh_Fir_reg_col_vars5_;  // col_vars5
  SEXP Rsh_Fir_reg_col_vars6_;  // col_vars6
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_sym18_;  // sym18
  SEXP Rsh_Fir_reg_base18_;  // base18
  SEXP Rsh_Fir_reg_guard18_;  // guard18
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_dn2_;  // dn2
  SEXP Rsh_Fir_reg_dn3_;  // dn3
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_sym19_;  // sym19
  SEXP Rsh_Fir_reg_base19_;  // base19
  SEXP Rsh_Fir_reg_guard19_;  // guard19
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_anyNA1_;  // anyNA1
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_c46_;  // c46
  SEXP Rsh_Fir_reg_stop3_;  // stop3
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_sym20_;  // sym20
  SEXP Rsh_Fir_reg_base20_;  // base20
  SEXP Rsh_Fir_reg_guard20_;  // guard20
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_col_vars7_;  // col_vars7
  SEXP Rsh_Fir_reg_col_vars8_;  // col_vars8
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_col_vars9_;  // col_vars9
  SEXP Rsh_Fir_reg_col_vars10_;  // col_vars10
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_any1_;  // any1
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_stop4_;  // stop4
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_sym21_;  // sym21
  SEXP Rsh_Fir_reg_base21_;  // base21
  SEXP Rsh_Fir_reg_guard21_;  // guard21
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_row_vars11_;  // row_vars11
  SEXP Rsh_Fir_reg_row_vars12_;  // row_vars12
  SEXP Rsh_Fir_reg_c48_;  // c48
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_c49_;  // c49
  SEXP Rsh_Fir_reg_c51_;  // c51
  SEXP Rsh_Fir_reg_sym22_;  // sym22
  SEXP Rsh_Fir_reg_base22_;  // base22
  SEXP Rsh_Fir_reg_guard22_;  // guard22
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_c54_;  // c54
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_col_vars11_;  // col_vars11
  SEXP Rsh_Fir_reg_col_vars12_;  // col_vars12
  SEXP Rsh_Fir_reg_c55_;  // c55
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_c56_;  // c56
  SEXP Rsh_Fir_reg_c57_;  // c57
  SEXP Rsh_Fir_reg_c59_;  // c59
  SEXP Rsh_Fir_reg_sort;  // sort
  SEXP Rsh_Fir_reg_sym23_;  // sym23
  SEXP Rsh_Fir_reg_base23_;  // base23
  SEXP Rsh_Fir_reg_guard23_;  // guard23
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_row_vars13_;  // row_vars13
  SEXP Rsh_Fir_reg_row_vars14_;  // row_vars14
  SEXP Rsh_Fir_reg_col_vars13_;  // col_vars13
  SEXP Rsh_Fir_reg_col_vars14_;  // col_vars14
  SEXP Rsh_Fir_reg_c60_;  // c60
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_sym24_;  // sym24
  SEXP Rsh_Fir_reg_base24_;  // base24
  SEXP Rsh_Fir_reg_guard24_;  // guard24
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg_all_vars;  // all_vars
  SEXP Rsh_Fir_reg_all_vars1_;  // all_vars1
  SEXP Rsh_Fir_reg_length3_;  // length3
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_c61_;  // c61
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_c62_;  // c62
  SEXP Rsh_Fir_reg_apply;  // apply
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_all_vars2_;  // all_vars2
  SEXP Rsh_Fir_reg_all_vars3_;  // all_vars3
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_sum1_;  // sum1
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r113_;  // r113
  SEXP Rsh_Fir_reg_r114_;  // r114
  SEXP Rsh_Fir_reg_sym25_;  // sym25
  SEXP Rsh_Fir_reg_base25_;  // base25
  SEXP Rsh_Fir_reg_guard25_;  // guard25
  SEXP Rsh_Fir_reg_r115_;  // r115
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_x19_;  // x19
  SEXP Rsh_Fir_reg_sum2_;  // sum2
  SEXP Rsh_Fir_reg_r116_;  // r116
  SEXP Rsh_Fir_reg_sym26_;  // sym26
  SEXP Rsh_Fir_reg_base26_;  // base26
  SEXP Rsh_Fir_reg_guard26_;  // guard26
  SEXP Rsh_Fir_reg_r117_;  // r117
  SEXP Rsh_Fir_reg_r118_;  // r118
  SEXP Rsh_Fir_reg_row_vars15_;  // row_vars15
  SEXP Rsh_Fir_reg_row_vars16_;  // row_vars16
  SEXP Rsh_Fir_reg_all_vars4_;  // all_vars4
  SEXP Rsh_Fir_reg_all_vars5_;  // all_vars5
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r119_;  // r119
  SEXP Rsh_Fir_reg_sym27_;  // sym27
  SEXP Rsh_Fir_reg_base27_;  // base27
  SEXP Rsh_Fir_reg_guard27_;  // guard27
  SEXP Rsh_Fir_reg_r120_;  // r120
  SEXP Rsh_Fir_reg_r121_;  // r121
  SEXP Rsh_Fir_reg_col_vars15_;  // col_vars15
  SEXP Rsh_Fir_reg_col_vars16_;  // col_vars16
  SEXP Rsh_Fir_reg_all_vars6_;  // all_vars6
  SEXP Rsh_Fir_reg_all_vars7_;  // all_vars7
  SEXP Rsh_Fir_reg_match1_;  // match1
  SEXP Rsh_Fir_reg_r122_;  // r122
  SEXP Rsh_Fir_reg_dn4_;  // dn4
  SEXP Rsh_Fir_reg_dn5_;  // dn5
  SEXP Rsh_Fir_reg_c63_;  // c63
  SEXP Rsh_Fir_reg_dn7_;  // dn7
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_all_vars8_;  // all_vars8
  SEXP Rsh_Fir_reg_all_vars9_;  // all_vars9
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r123_;  // r123
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_c64_;  // c64
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_all_vars10_;  // all_vars10
  SEXP Rsh_Fir_reg_all_vars11_;  // all_vars11
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r124_;  // r124
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_sym28_;  // sym28
  SEXP Rsh_Fir_reg_base28_;  // base28
  SEXP Rsh_Fir_reg_guard28_;  // guard28
  SEXP Rsh_Fir_reg_r125_;  // r125
  SEXP Rsh_Fir_reg_r126_;  // r126
  SEXP Rsh_Fir_reg_row_vars17_;  // row_vars17
  SEXP Rsh_Fir_reg_row_vars18_;  // row_vars18
  SEXP Rsh_Fir_reg_c65_;  // c65
  SEXP Rsh_Fir_reg_r127_;  // r127
  SEXP Rsh_Fir_reg_c66_;  // c66
  SEXP Rsh_Fir_reg_sym29_;  // sym29
  SEXP Rsh_Fir_reg_base29_;  // base29
  SEXP Rsh_Fir_reg_guard29_;  // guard29
  SEXP Rsh_Fir_reg_r128_;  // r128
  SEXP Rsh_Fir_reg_r129_;  // r129
  SEXP Rsh_Fir_reg_row_vars19_;  // row_vars19
  SEXP Rsh_Fir_reg_row_vars20_;  // row_vars20
  SEXP Rsh_Fir_reg_length4_;  // length4
  SEXP Rsh_Fir_reg_r130_;  // r130
  SEXP Rsh_Fir_reg_c67_;  // c67
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_c68_;  // c68
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_row_vars21_;  // row_vars21
  SEXP Rsh_Fir_reg_row_vars22_;  // row_vars22
  SEXP Rsh_Fir_reg_r131_;  // r131
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r132_;  // r132
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_sym30_;  // sym30
  SEXP Rsh_Fir_reg_base30_;  // base30
  SEXP Rsh_Fir_reg_guard30_;  // guard30
  SEXP Rsh_Fir_reg_r133_;  // r133
  SEXP Rsh_Fir_reg_r134_;  // r134
  SEXP Rsh_Fir_reg_col_vars17_;  // col_vars17
  SEXP Rsh_Fir_reg_col_vars18_;  // col_vars18
  SEXP Rsh_Fir_reg_c69_;  // c69
  SEXP Rsh_Fir_reg_r135_;  // r135
  SEXP Rsh_Fir_reg_c70_;  // c70
  SEXP Rsh_Fir_reg_sym31_;  // sym31
  SEXP Rsh_Fir_reg_base31_;  // base31
  SEXP Rsh_Fir_reg_guard31_;  // guard31
  SEXP Rsh_Fir_reg_r136_;  // r136
  SEXP Rsh_Fir_reg_r137_;  // r137
  SEXP Rsh_Fir_reg_col_vars19_;  // col_vars19
  SEXP Rsh_Fir_reg_col_vars20_;  // col_vars20
  SEXP Rsh_Fir_reg_length5_;  // length5
  SEXP Rsh_Fir_reg_r138_;  // r138
  SEXP Rsh_Fir_reg_c71_;  // c71
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_c72_;  // c72
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_col_vars21_;  // col_vars21
  SEXP Rsh_Fir_reg_col_vars22_;  // col_vars22
  SEXP Rsh_Fir_reg_r139_;  // r139
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r140_;  // r140
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_i23_;  // i23
  SEXP Rsh_Fir_reg_sym32_;  // sym32
  SEXP Rsh_Fir_reg_base32_;  // base32
  SEXP Rsh_Fir_reg_guard32_;  // guard32
  SEXP Rsh_Fir_reg_r141_;  // r141
  SEXP Rsh_Fir_reg_r142_;  // r142
  SEXP Rsh_Fir_reg_n8_;  // n8
  SEXP Rsh_Fir_reg_n9_;  // n9
  SEXP Rsh_Fir_reg_r143_;  // r143
  SEXP Rsh_Fir_reg_r144_;  // r144
  SEXP Rsh_Fir_reg_n10_;  // n10
  SEXP Rsh_Fir_reg_n11_;  // n11
  SEXP Rsh_Fir_reg_sym33_;  // sym33
  SEXP Rsh_Fir_reg_base33_;  // base33
  SEXP Rsh_Fir_reg_guard33_;  // guard33
  SEXP Rsh_Fir_reg_r145_;  // r145
  SEXP Rsh_Fir_reg_r146_;  // r146
  SEXP Rsh_Fir_reg_sym34_;  // sym34
  SEXP Rsh_Fir_reg_base34_;  // base34
  SEXP Rsh_Fir_reg_guard34_;  // guard34
  SEXP Rsh_Fir_reg_r147_;  // r147
  SEXP Rsh_Fir_reg_r148_;  // r148
  SEXP Rsh_Fir_reg_rev;  // rev
  SEXP Rsh_Fir_reg_row_vars23_;  // row_vars23
  SEXP Rsh_Fir_reg_row_vars24_;  // row_vars24
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_r150_;  // r150
  SEXP Rsh_Fir_reg_rev1_;  // rev1
  SEXP Rsh_Fir_reg_col_vars23_;  // col_vars23
  SEXP Rsh_Fir_reg_col_vars24_;  // col_vars24
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_r152_;  // r152
  SEXP Rsh_Fir_reg_c73_;  // c73
  SEXP Rsh_Fir_reg_r153_;  // r153
  SEXP Rsh_Fir_reg_length6_;  // length6
  SEXP Rsh_Fir_reg_r154_;  // r154
  SEXP Rsh_Fir_reg_r155_;  // r155
  SEXP Rsh_Fir_reg_c74_;  // c74
  SEXP Rsh_Fir_reg_aperm;  // aperm
  SEXP Rsh_Fir_reg_x20_;  // x20
  SEXP Rsh_Fir_reg_x21_;  // x21
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_perm;  // perm
  SEXP Rsh_Fir_reg_perm1_;  // perm1
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_r158_;  // r158
  SEXP Rsh_Fir_reg_sym35_;  // sym35
  SEXP Rsh_Fir_reg_base35_;  // base35
  SEXP Rsh_Fir_reg_guard35_;  // guard35
  SEXP Rsh_Fir_reg_r160_;  // r160
  SEXP Rsh_Fir_reg_r161_;  // r161
  SEXP Rsh_Fir_reg_sym36_;  // sym36
  SEXP Rsh_Fir_reg_base36_;  // base36
  SEXP Rsh_Fir_reg_guard36_;  // guard36
  SEXP Rsh_Fir_reg_r162_;  // r162
  SEXP Rsh_Fir_reg_r163_;  // r163
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_c75_;  // c75
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_row_vars25_;  // row_vars25
  SEXP Rsh_Fir_reg_row_vars26_;  // row_vars26
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r164_;  // r164
  SEXP Rsh_Fir_reg_prod;  // prod
  SEXP Rsh_Fir_reg_r165_;  // r165
  SEXP Rsh_Fir_reg_sym37_;  // sym37
  SEXP Rsh_Fir_reg_base37_;  // base37
  SEXP Rsh_Fir_reg_guard37_;  // guard37
  SEXP Rsh_Fir_reg_r166_;  // r166
  SEXP Rsh_Fir_reg_r167_;  // r167
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_c76_;  // c76
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_col_vars25_;  // col_vars25
  SEXP Rsh_Fir_reg_col_vars26_;  // col_vars26
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r168_;  // r168
  SEXP Rsh_Fir_reg_prod1_;  // prod1
  SEXP Rsh_Fir_reg_r169_;  // r169
  SEXP Rsh_Fir_reg_c77_;  // c77
  SEXP Rsh_Fir_reg_r170_;  // r170
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_dim__;  // dim__
  SEXP Rsh_Fir_reg_r171_;  // r171
  SEXP Rsh_Fir_reg_dn8_;  // dn8
  SEXP Rsh_Fir_reg_dn9_;  // dn9
  SEXP Rsh_Fir_reg_c78_;  // c78
  SEXP Rsh_Fir_reg_dn11_;  // dn11
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_row_vars27_;  // row_vars27
  SEXP Rsh_Fir_reg_row_vars28_;  // row_vars28
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r172_;  // r172
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r173_;  // r173
  SEXP Rsh_Fir_reg_dn12_;  // dn12
  SEXP Rsh_Fir_reg_dn13_;  // dn13
  SEXP Rsh_Fir_reg_c79_;  // c79
  SEXP Rsh_Fir_reg_dn15_;  // dn15
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_col_vars27_;  // col_vars27
  SEXP Rsh_Fir_reg_col_vars28_;  // col_vars28
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r174_;  // r174
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_attr__1_;  // attr__1
  SEXP Rsh_Fir_reg_r175_;  // r175
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r176_;  // r176
  SEXP Rsh_Fir_reg_x22_;  // x22
  SEXP Rsh_Fir_reg_x23_;  // x23

  // Bind parameters
  Rsh_Fir_reg_ddd = PARAMS[0];
  Rsh_Fir_reg_exclude = PARAMS[1];
  Rsh_Fir_reg_row_vars = PARAMS[2];
  Rsh_Fir_reg_col_vars = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // exclude_isMissing = missing.0(exclude)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_exclude;
  Rsh_Fir_reg_exclude_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if exclude_isMissing then L0() else L1(exclude)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_exclude_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(exclude)
    Rsh_Fir_reg_exclude_orDefault = Rsh_Fir_reg_exclude;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c(NA_LGL, NA_REAL);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(NA_LGL, NA_REAL);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2878520484_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_exclude_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st exclude = exclude_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_exclude_orDefault, RHO);
  (void)(Rsh_Fir_reg_exclude_orDefault);
  // row_vars_isMissing = missing.0(row_vars)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_row_vars;
  Rsh_Fir_reg_row_vars_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if row_vars_isMissing then L2(NULL) else L2(row_vars)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_row_vars_isMissing)) {
  // L2(NULL)
    Rsh_Fir_reg_row_vars_orDefault = Rsh_const(CCP, 6);
    goto L2_;
  } else {
  // L2(row_vars)
    Rsh_Fir_reg_row_vars_orDefault = Rsh_Fir_reg_row_vars;
    goto L2_;
  }

L2_:;
  // st `row.vars` = row_vars_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_row_vars_orDefault, RHO);
  (void)(Rsh_Fir_reg_row_vars_orDefault);
  // col_vars_isMissing = missing.0(col_vars)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_col_vars;
  Rsh_Fir_reg_col_vars_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if col_vars_isMissing then L3(NULL) else L3(col_vars)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_col_vars_isMissing)) {
  // L3(NULL)
    Rsh_Fir_reg_col_vars_orDefault = Rsh_const(CCP, 6);
    goto L3_;
  } else {
  // L3(col_vars)
    Rsh_Fir_reg_col_vars_orDefault = Rsh_Fir_reg_col_vars;
    goto L3_;
  }

L3_:;
  // st `col.vars` = col_vars_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_col_vars_orDefault, RHO);
  (void)(Rsh_Fir_reg_col_vars_orDefault);
  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L83() else L84()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L83()
    goto L83_;
  } else {
  // L84()
    goto L84_;
  }

L4_:;
  // st args = r5
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard2 then L87() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L87()
    goto L87_;
  } else {
  // L88()
    goto L88_;
  }

L5_:;
  // r10 = `==`(r8, 0)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c1 then L91() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L91()
    goto L91_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // args2 = ld args
  Rsh_Fir_reg_args2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L95() else D6()
  // L95()
  goto L95_;

L8_:;
  // st x = dx1
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym3 = ldf `is.list`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base3 = ldf `is.list` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard3 then L99() else L100()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L99()
    goto L99_;
  } else {
  // L100()
    goto L100_;
  }

L9_:;
  // c3 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c3 then L103() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L103()
    goto L103_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // sym4 = ldf inherits
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base4 = ldf inherits in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard4 then L107() else L108()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L107()
    goto L107_;
  } else {
  // L108()
    goto L108_;
  }

L11_:;
  // sym8 = ldf dimnames
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base8 = ldf dimnames in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard8 then L135() else L136()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L135()
    goto L135_;
  } else {
  // L136()
    goto L136_;
  }

L12_:;
  // c4 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c4 then L13(c4) else L111()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L13(c4)
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c4_;
    goto L13_;
  } else {
  // L111()
    goto L111_;
  }

L13_:;
  // c34 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c34 then L126() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L126()
    goto L126_;
  } else {
  // L18()
    goto L18_;
  }

L14_:;
  // c10 = `as.logical`(r25)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c10 then L116() else L15(c9, c10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L116()
    goto L116_;
  } else {
  // L15(c9, c10)
    Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c9_;
    Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c10_;
    goto L15_;
  }

L15_:;
  // st arr2 = c14
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_c14_, RHO);
  (void)(Rsh_Fir_reg_c14_);
  // c31 = `as.logical`(c14)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // c32 = `||`(c13, c31)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_c31_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L13(c32)
  // L13(c32)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c32_;
  goto L13_;

L16_:;
  // r33 = `>`(r28, 1)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // c27 = `as.logical`(r33)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // c28 = `&&`(c20, c27)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L15(c19, c28)
  // L15(c19, c28)
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c19_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c28_;
  goto L15_;

L17_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r32 = dyn length1(r30)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L123() else D17()
  // L123()
  goto L123_;

L18_:;
  // arr2 = ld arr2
  Rsh_Fir_reg_arr2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L130() else D20()
  // L130()
  goto L130_;

L19_:;
  // goto L11()
  // L11()
  goto L11_;

L20_:;
  // st dn = r40
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // sym9 = ldf dim
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base9 = ldf dim in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard9 then L139() else L140()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L139()
    goto L139_;
  } else {
  // L140()
    goto L140_;
  }

L21_:;
  // st dx = r43
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // sym10 = ldf length
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base10 = ldf length in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard10 then L143() else L144()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L143()
    goto L143_;
  } else {
  // L144()
    goto L144_;
  }

L22_:;
  // st n = r46
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // sym11 = ldf `is.null`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base11 = ldf `is.null` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard11 then L147() else L148()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L147()
    goto L147_;
  } else {
  // L148()
    goto L148_;
  }

L23_:;
  // r50 = `!`(r49)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // c37 = `as.logical`(r50)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if c37 then L150() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L150()
    goto L150_;
  } else {
  // L24()
    goto L24_;
  }

L24_:;
  // goto L33()
  // L33()
  goto L33_;

L25_:;
  // c39 = `as.logical`(r52)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c39 then L154() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L154()
    goto L154_;
  } else {
  // L26()
    goto L26_;
  }

L26_:;
  // sym15 = ldf any
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base15 = ldf any in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard15 then L167() else L168()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L167()
    goto L167_;
  } else {
  // L168()
    goto L168_;
  }

L27_:;
  // c40 = `as.logical`(r60)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c40 then L161() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L161()
    goto L161_;
  } else {
  // L28()
    goto L28_;
  }

L28_:;
  // goto L29()
  // L29()
  goto L29_;

L29_:;
  // i2 = ld i
  Rsh_Fir_reg_i2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L165() else D37()
  // L165()
  goto L165_;

L30_:;
  // goto L33()
  // L33()
  goto L33_;

L31_:;
  // c41 = `as.logical`(r65)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c41 then L173() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c41_)) {
  // L173()
    goto L173_;
  } else {
  // L32()
    goto L32_;
  }

L32_:;
  // goto L30(NULL)
  // L30(NULL)
  Rsh_Fir_reg_i4_ = Rsh_const(CCP, 6);
  goto L30_;

L33_:;
  // sym16 = ldf `is.null`
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base16 = ldf `is.null` in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard16 then L178() else L179()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L178()
    goto L178_;
  } else {
  // L179()
    goto L179_;
  }

L34_:;
  // r73 = `!`(r72)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // c43 = `as.logical`(r73)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c43 then L181() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L181()
    goto L181_;
  } else {
  // L35()
    goto L35_;
  }

L35_:;
  // goto L44()
  // L44()
  goto L44_;

L36_:;
  // c45 = `as.logical`(r75)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c45 then L185() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L185()
    goto L185_;
  } else {
  // L37()
    goto L37_;
  }

L37_:;
  // sym20 = ldf any
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base20 = ldf any in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard20 then L198() else L199()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L198()
    goto L198_;
  } else {
  // L199()
    goto L199_;
  }

L38_:;
  // c46 = `as.logical`(r83)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if c46 then L192() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L192()
    goto L192_;
  } else {
  // L39()
    goto L39_;
  }

L39_:;
  // goto L40()
  // L40()
  goto L40_;

L40_:;
  // i8 = ld i
  Rsh_Fir_reg_i8_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L196() else D52()
  // L196()
  goto L196_;

L41_:;
  // goto L44()
  // L44()
  goto L44_;

L42_:;
  // c47 = `as.logical`(r88)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c47 then L204() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L204()
    goto L204_;
  } else {
  // L43()
    goto L43_;
  }

L43_:;
  // goto L41(NULL)
  // L41(NULL)
  Rsh_Fir_reg_i10_ = Rsh_const(CCP, 6);
  goto L41_;

L44_:;
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L209() else D59()
  // L209()
  goto L209_;

L45_:;
  // r97 = `!`(r96)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // c49 = `as.logical`(r97)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c49 then L213() else L46(c49)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c49_)) {
  // L213()
    goto L213_;
  } else {
  // L46(c49)
    Rsh_Fir_reg_c51_ = Rsh_Fir_reg_c49_;
    goto L46_;
  }

L46_:;
  // c59 = `as.logical`(c51)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_c51_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c59 then L218() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c59_)) {
  // L218()
    goto L218_;
  } else {
  // L48()
    goto L48_;
  }

L47_:;
  // r100 = `!`(r99)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r99_;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // c56 = `as.logical`(r100)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_reg_c56_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // c57 = `&&`(c54, c56)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_c54_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_c56_;
  Rsh_Fir_reg_c57_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L46(c57)
  // L46(c57)
  Rsh_Fir_reg_c51_ = Rsh_Fir_reg_c57_;
  goto L46_;

L48_:;
  // sym28 = ldf `is.null`
  Rsh_Fir_reg_sym28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base28 = ldf `is.null` in base
  Rsh_Fir_reg_base28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard28 = `==`.4(sym28, base28)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym28_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base28_;
  Rsh_Fir_reg_guard28_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard28 then L258() else L259()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard28_)) {
  // L258()
    goto L258_;
  } else {
  // L259()
    goto L259_;
  }

L49_:;
  // st p = r107
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r107_, RHO);
  (void)(Rsh_Fir_reg_r107_);
  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L225() else D66()
  // L225()
  goto L225_;

L50_:;
  // goto L57(NULL)
  // L57(NULL)
  Rsh_Fir_reg_dx12_ = Rsh_const(CCP, 6);
  goto L57_;

L51_:;
  // sym25 = ldf sum
  Rsh_Fir_reg_sym25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base25 = ldf sum in base
  Rsh_Fir_reg_base25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard25 = `==`.4(sym25, base25)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym25_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base25_;
  Rsh_Fir_reg_guard25_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard25 then L232() else L233()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard25_)) {
  // L232()
    goto L232_;
  } else {
  // L233()
    goto L233_;
  }

L52_:;
  // st x = r114
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r114_, RHO);
  (void)(Rsh_Fir_reg_r114_);
  // sym26 = ldf match
  Rsh_Fir_reg_sym26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base26 = ldf match in base
  Rsh_Fir_reg_base26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard26 = `==`.4(sym26, base26)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym26_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base26_;
  Rsh_Fir_reg_guard26_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard26 then L236() else L237()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard26_)) {
  // L236()
    goto L236_;
  } else {
  // L237()
    goto L237_;
  }

L53_:;
  // st `row.vars` = r118
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r118_, RHO);
  (void)(Rsh_Fir_reg_r118_);
  // sym27 = ldf match
  Rsh_Fir_reg_sym27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base27 = ldf match in base
  Rsh_Fir_reg_base27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard27 = `==`.4(sym27, base27)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym27_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base27_;
  Rsh_Fir_reg_guard27_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard27 then L241() else L242()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard27_)) {
  // L241()
    goto L241_;
  } else {
  // L242()
    goto L242_;
  }

L54_:;
  // st `col.vars` = r121
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r121_, RHO);
  (void)(Rsh_Fir_reg_r121_);
  // dn4 = ld dn
  Rsh_Fir_reg_dn4_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L246() else D78()
  // L246()
  goto L246_;

L55_:;
  // st dn = dx5
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // dx6 = ld dx
  Rsh_Fir_reg_dx6_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L251() else D80()
  // L251()
  goto L251_;

L56_:;
  // st dx = dx11
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // goto L57(dx11)
  // L57(dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L57_;

L57_:;
  // goto L58()
  // L58()
  goto L58_;

L58_:;
  // sym33 = ldf length
  Rsh_Fir_reg_sym33_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base33 = ldf length in base
  Rsh_Fir_reg_base33_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard33 = `==`.4(sym33, base33)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym33_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base33_;
  Rsh_Fir_reg_guard33_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard33 then L296() else L297()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard33_)) {
  // L296()
    goto L296_;
  } else {
  // L297()
    goto L297_;
  }

L59_:;
  // r127 = `!`(r126)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r126_;
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // c66 = `as.logical`(r127)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r127_;
  Rsh_Fir_reg_c66_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if c66 then L261() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c66_)) {
  // L261()
    goto L261_;
  } else {
  // L60()
    goto L60_;
  }

L60_:;
  // sym30 = ldf `is.null`
  Rsh_Fir_reg_sym30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base30 = ldf `is.null` in base
  Rsh_Fir_reg_base30_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard30 = `==`.4(sym30, base30)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym30_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base30_;
  Rsh_Fir_reg_guard30_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard30 then L275() else L276()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard30_)) {
  // L275()
    goto L275_;
  } else {
  // L276()
    goto L276_;
  }

L61_:;
  // c67 = `as.logical`(r129)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r129_;
  Rsh_Fir_reg_c67_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if c67 then L266() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c67_)) {
  // L266()
    goto L266_;
  } else {
  // L62()
    goto L62_;
  }

L62_:;
  // i16 = ld i
  Rsh_Fir_reg_i16_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L273() else D87()
  // L273()
  goto L273_;

L63_:;
  // goto L64(dx15)
  // L64(dx15)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx15_;
  goto L64_;

L64_:;
  // st `col.vars` = dx16
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx16_, RHO);
  (void)(Rsh_Fir_reg_dx16_);
  // goto L58()
  // L58()
  goto L58_;

L65_:;
  // r135 = `!`(r134)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r134_;
  Rsh_Fir_reg_r135_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // c70 = `as.logical`(r135)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r135_;
  Rsh_Fir_reg_c70_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if c70 then L278() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c70_)) {
  // L278()
    goto L278_;
  } else {
  // L66()
    goto L66_;
  }

L66_:;
  // sym32 = ldf seq_len
  Rsh_Fir_reg_sym32_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base32 = ldf seq_len in base
  Rsh_Fir_reg_base32_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard32 = `==`.4(sym32, base32)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym32_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base32_;
  Rsh_Fir_reg_guard32_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard32 then L292() else L293()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard32_)) {
  // L292()
    goto L292_;
  } else {
  // L293()
    goto L293_;
  }

L67_:;
  // c71 = `as.logical`(r137)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r137_;
  Rsh_Fir_reg_c71_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if c71 then L283() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c71_)) {
  // L283()
    goto L283_;
  } else {
  // L68()
    goto L68_;
  }

L68_:;
  // i22 = ld i
  Rsh_Fir_reg_i22_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L290() else D93()
  // L290()
  goto L290_;

L69_:;
  // goto L70(dx18)
  // L70(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L70_;

L70_:;
  // st `row.vars` = dx19
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // goto L58()
  // L58()
  goto L58_;

L71_:;
  // st `row.vars` = r142
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r142_, RHO);
  (void)(Rsh_Fir_reg_r142_);
  // n10 = ld n
  Rsh_Fir_reg_n10_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L295() else D95()
  // L295()
  goto L295_;

L72_:;
  // r155 = `>`(r146, 1.0)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r146_;
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r155_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // c74 = `as.logical`(r155)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r155_;
  Rsh_Fir_reg_c74_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if c74 then L306() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c74_)) {
  // L306()
    goto L306_;
  } else {
  // L74()
    goto L74_;
  }

L73_:;
  // st perm = r148
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r148_, RHO);
  (void)(Rsh_Fir_reg_r148_);
  // length6 = ldf length in base
  Rsh_Fir_reg_length6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r154 = dyn length6(r148)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r148_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r154_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length6_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L305() else D101()
  // L305()
  goto L305_;

L74_:;
  // goto L75()
  // L75()
  goto L75_;

L75_:;
  // sym35 = ldf c
  Rsh_Fir_reg_sym35_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base35 = ldf c in base
  Rsh_Fir_reg_base35_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard35 = `==`.4(sym35, base35)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym35_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base35_;
  Rsh_Fir_reg_guard35_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
  // if guard35 then L310() else L311()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard35_)) {
  // L310()
    goto L310_;
  } else {
  // L311()
    goto L311_;
  }

L76_:;
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // dim__ = ldf `dim<-`
  Rsh_Fir_reg_dim__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L329() else D111()
  // L329()
  goto L329_;

L77_:;
  // sym37 = ldf prod
  Rsh_Fir_reg_sym37_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base37 = ldf prod in base
  Rsh_Fir_reg_base37_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard37 = `==`.4(sym37, base37)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym37_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base37_;
  Rsh_Fir_reg_guard37_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard37 then L320() else L321()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard37_)) {
  // L320()
    goto L320_;
  } else {
  // L321()
    goto L321_;
  }

L78_:;
  // prod = ldf prod in base
  Rsh_Fir_reg_prod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r165 = dyn prod(dx25)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dx25_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r165_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L319() else D106()
  // L319()
  goto L319_;

L79_:;
  // c77 = ldf c in base
  Rsh_Fir_reg_c77_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r170 = dyn c77(r163, r167)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r163_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_r167_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r170_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c77_, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L328() else D110()
  // L328()
  goto L328_;

L80_:;
  // prod1 = ldf prod in base
  Rsh_Fir_reg_prod1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r169 = dyn prod1(dx31)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dx31_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r169_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod1_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L327() else D109()
  // L327()
  goto L327_;

L81_:;
  // l1 = ld x
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L336() else D115()
  // L336()
  goto L336_;

L82_:;
  // l2 = ld x
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // attr__1 = ldf `attr<-`
  Rsh_Fir_reg_attr__1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L343() else D119()
  // L343()
  goto L343_;

L83_:;
  // list = ldf list
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L85() else D0()
  // L85()
  goto L85_;

L84_:;
  // r4 = dyn base1(<sym ...>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L4(r4)
  // L4(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L4_;

D0_:;
  // deopt 2 []
  Rsh_Fir_deopt(2, 0, NULL, CCP, RHO);
  return R_NilValue;

L85_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // r6 = dyn list[`...`](ddd1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L86() else D1()
  // L86()
  goto L86_;

D1_:;
  // deopt 4 [r6]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L86_:;
  // goto L4(r6)
  // L4(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L4_;

L87_:;
  // args = ld args
  Rsh_Fir_reg_args = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L89() else D2()
  // L89()
  goto L89_;

L88_:;
  // r7 = dyn base2(<sym args>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L5(r7)
  // L5(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L5_;

D2_:;
  // deopt 8 [args]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_args;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L89_:;
  // args1 = force? args
  Rsh_Fir_reg_args1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args);
  // checkMissing(args1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_args1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r9 = dyn length(args1)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_args1_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L90() else D3()
  // L90()
  goto L90_;

D3_:;
  // deopt 11 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L90_:;
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L5_;

L91_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L92() else D4()
  // L92()
  goto L92_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L92_:;
  // r11 = dyn stop("nothing to tabulate")
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L93() else D5()
  // L93()
  goto L93_;

D5_:;
  // deopt 17 [r11]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L93_:;
  // goto L7()
  // L7()
  goto L7_;

D6_:;
  // deopt 20 [args2]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_args2_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L95_:;
  // args3 = force? args2
  Rsh_Fir_reg_args3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args2_);
  // checkMissing(args3)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_args3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(args3)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_args3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if c2 then L96() else L97(args3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L96()
    goto L96_;
  } else {
  // L97(args3)
    Rsh_Fir_reg_args5_ = Rsh_Fir_reg_args3_;
    goto L97_;
  }

L96_:;
  // dr = tryDispatchBuiltin.1("[[", args3)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_args3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args74);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if dc then L98() else L97(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L98()
    goto L98_;
  } else {
  // L97(dr)
    Rsh_Fir_reg_args5_ = Rsh_Fir_reg_dr;
    goto L97_;
  }

L97_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r13 = dyn __(args5, 1)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_args5_;
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L8(r13)
  // L8(r13)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r13_;
  goto L8_;

L98_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L8(dx)
  // L8(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L8_;

L99_:;
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L101() else D7()
  // L101()
  goto L101_;

L100_:;
  // r14 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L9(r14)
  // L9(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L9_;

D7_:;
  // deopt 28 [x]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_x;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L101_:;
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r16 = dyn is_list(x1)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L102() else D8()
  // L102()
  goto L102_;

D8_:;
  // deopt 31 [r16]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L102_:;
  // goto L9(r16)
  // L9(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L9_;

L103_:;
  // table = ldf table
  Rsh_Fir_reg_table = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L104() else D9()
  // L104()
  goto L104_;

D9_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L104_:;
  // p1 = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   return x3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2878520484_1, CCP, RHO);
  // p2 = prom<V +>{
  //   exclude1 = ld exclude;
  //   exclude2 = force? exclude1;
  //   checkMissing(exclude2);
  //   return exclude2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2878520484_2, CCP, RHO);
  // r19 = dyn table[, exclude](p1, p2)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_table, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L105() else D10()
  // L105()
  goto L105_;

D10_:;
  // deopt 37 [r19]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L105_:;
  // st x = r19
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // goto L11()
  // L11()
  goto L11_;

L107_:;
  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L109() else D11()
  // L109()
  goto L109_;

L108_:;
  // r21 = dyn base4(<sym x>, "ftable")
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L12(r21)
  // L12(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L12_;

D11_:;
  // deopt 41 [x4]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L109_:;
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r23 = dyn inherits(x5, "ftable", FALSE)
  SEXP Rsh_Fir_array_args86[3];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args86[2] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L110() else D12()
  // L110()
  goto L110_;

D12_:;
  // deopt 46 [r23]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L110_:;
  // goto L12(r23)
  // L12(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L12_;

L111_:;
  // sym5 = ldf `is.array`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base5 = ldf `is.array` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args87);
  // if guard5 then L112() else L113()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L112()
    goto L112_;
  } else {
  // L113()
    goto L113_;
  }

L112_:;
  // x6 = ld x
  Rsh_Fir_reg_x6_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L114() else D13()
  // L114()
  goto L114_;

L113_:;
  // r24 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L14(c4, r24)
  // L14(c4, r24)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L14_;

D13_:;
  // deopt 49 [c4, x6]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_deopt(49, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L114_:;
  // x7 = force? x6
  Rsh_Fir_reg_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x6_);
  // checkMissing(x7)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // is_array = ldf `is.array` in base
  Rsh_Fir_reg_is_array = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r26 = dyn is_array(x7)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_array, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L115() else D14()
  // L115()
  goto L115_;

D14_:;
  // deopt 52 [c4, r26]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(52, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L115_:;
  // goto L14(c4, r26)
  // L14(c4, r26)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L14_;

L116_:;
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args91);
  // if guard6 then L117() else L118()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L117()
    goto L117_;
  } else {
  // L118()
    goto L118_;
  }

L117_:;
  // sym7 = ldf dim
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base7 = ldf dim in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args92);
  // if guard7 then L119() else L120()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L119()
    goto L119_;
  } else {
  // L120()
    goto L120_;
  }

L118_:;
  // r27 = dyn base6(<lang dim(x)>)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L16(c9, c10, r27)
  // L16(c9, c10, r27)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L16_;

L119_:;
  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L121() else D15()
  // L121()
  goto L121_;

L120_:;
  // r29 = dyn base7(<sym x>)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L17(c9, c10, r29)
  // L17(c9, c10, r29)
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L17_;

D15_:;
  // deopt 57 [c9, c10, x8]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_x8_;
  Rsh_Fir_deopt(57, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L121_:;
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r31 = dyn dim(x9)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L122() else D16()
  // L122()
  goto L122_;

D16_:;
  // deopt 60 [c9, c10, r31]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(60, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L122_:;
  // goto L17(c9, c10, r31)
  // L17(c9, c10, r31)
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L17_;

D17_:;
  // deopt 62 [c25, c26, r32]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_c25_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(62, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L123_:;
  // goto L16(c25, c26, r32)
  // L16(c25, c26, r32)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c25_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r32_;
  goto L16_;

L126_:;
  // as_table = ldf `as.table`
  Rsh_Fir_reg_as_table = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // check L127() else D18()
  // L127()
  goto L127_;

D18_:;
  // deopt 69 []
  Rsh_Fir_deopt(69, 0, NULL, CCP, RHO);
  return R_NilValue;

L127_:;
  // p3 = prom<V +>{
  //   x10 = ld x;
  //   x11 = force? x10;
  //   checkMissing(x11);
  //   return x11;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2878520484_3, CCP, RHO);
  // r35 = dyn as_table(p3)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_table, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L128() else D19()
  // L128()
  goto L128_;

D19_:;
  // deopt 71 [r35]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L128_:;
  // st x = r35
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // goto L11()
  // L11()
  goto L11_;

D20_:;
  // deopt 73 [arr2]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_arr2_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L130_:;
  // arr3 = force? arr2
  Rsh_Fir_reg_arr3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_arr2_);
  // checkMissing(arr3)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_arr3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // r36 = `!`(arr3)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_arr3_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // c35 = `as.logical`(r36)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if c35 then L131() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L131()
    goto L131_;
  } else {
  // L19()
    goto L19_;
  }

L131_:;
  // table1 = ldf table
  Rsh_Fir_reg_table1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L132() else D21()
  // L132()
  goto L132_;

D21_:;
  // deopt 77 []
  Rsh_Fir_deopt(77, 0, NULL, CCP, RHO);
  return R_NilValue;

L132_:;
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // p4 = prom<V +>{
  //   exclude3 = ld exclude;
  //   exclude4 = force? exclude3;
  //   checkMissing(exclude4);
  //   return exclude4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2878520484_4, CCP, RHO);
  // r38 = dyn table1[`...`, exclude](ddd2, p4)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_ddd2_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_arg_names24[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_table1_, 2, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L133() else D22()
  // L133()
  goto L133_;

D22_:;
  // deopt 81 [r38]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L133_:;
  // st x = r38
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // goto L11()
  // L11()
  goto L11_;

L135_:;
  // x12 = ld x
  Rsh_Fir_reg_x12_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L137() else D23()
  // L137()
  goto L137_;

L136_:;
  // r39 = dyn base8(<sym x>)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L20(r39)
  // L20(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L20_;

D23_:;
  // deopt 87 [x12]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_deopt(87, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L137_:;
  // x13 = force? x12
  Rsh_Fir_reg_x13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x12_);
  // checkMissing(x13)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_x13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r41 = dyn dimnames(x13)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L138() else D24()
  // L138()
  goto L138_;

D24_:;
  // deopt 90 [r41]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L138_:;
  // goto L20(r41)
  // L20(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L20_;

L139_:;
  // x14 = ld x
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L141() else D25()
  // L141()
  goto L141_;

L140_:;
  // r42 = dyn base9(<sym x>)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L21(r42)
  // L21(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L21_;

D25_:;
  // deopt 94 [x14]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L141_:;
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // dim1 = ldf dim in base
  Rsh_Fir_reg_dim1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r44 = dyn dim1(x15)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim1_, 1, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L142() else D26()
  // L142()
  goto L142_;

D26_:;
  // deopt 97 [r44]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L142_:;
  // goto L21(r44)
  // L21(r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L21_;

L143_:;
  // dx2 = ld dx
  Rsh_Fir_reg_dx2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L145() else D27()
  // L145()
  goto L145_;

L144_:;
  // r45 = dyn base10(<sym dx>)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L22(r45)
  // L22(r45)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r45_;
  goto L22_;

D27_:;
  // deopt 101 [dx2]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_dx2_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L145_:;
  // dx3 = force? dx2
  Rsh_Fir_reg_dx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dx2_);
  // checkMissing(dx3)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r47 = dyn length2(dx3)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L146() else D28()
  // L146()
  goto L146_;

D28_:;
  // deopt 104 [r47]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L146_:;
  // goto L22(r47)
  // L22(r47)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r47_;
  goto L22_;

L147_:;
  // row_vars1 = ld `row.vars`
  Rsh_Fir_reg_row_vars1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L149() else D29()
  // L149()
  goto L149_;

L148_:;
  // r48 = dyn base11(<sym row.vars>)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L23(r48)
  // L23(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L23_;

D29_:;
  // deopt 107 [row_vars1]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_row_vars1_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L149_:;
  // row_vars2 = force? row_vars1
  Rsh_Fir_reg_row_vars2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_vars1_);
  // checkMissing(row_vars2)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_row_vars2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // c36 = `==`(row_vars2, NULL)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_row_vars2_;
  Rsh_Fir_array_args115[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // goto L23(c36)
  // L23(c36)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_c36_;
  goto L23_;

L150_:;
  // sym12 = ldf `is.character`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base12 = ldf `is.character` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args116);
  // if guard12 then L151() else L152()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L151()
    goto L151_;
  } else {
  // L152()
    goto L152_;
  }

L151_:;
  // row_vars3 = ld `row.vars`
  Rsh_Fir_reg_row_vars3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L153() else D30()
  // L153()
  goto L153_;

L152_:;
  // r51 = dyn base12(<sym row.vars>)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L25(r51)
  // L25(r51)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L25_;

D30_:;
  // deopt 112 [row_vars3]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_row_vars3_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L153_:;
  // row_vars4 = force? row_vars3
  Rsh_Fir_reg_row_vars4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_vars3_);
  // checkMissing(row_vars4)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_row_vars4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // c38 = `is.character`(row_vars4)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_row_vars4_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // goto L25(c38)
  // L25(c38)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_c38_;
  goto L25_;

L154_:;
  // pmatch = ldf pmatch
  Rsh_Fir_reg_pmatch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // check L155() else D31()
  // L155()
  goto L155_;

D31_:;
  // deopt 116 []
  Rsh_Fir_deopt(116, 0, NULL, CCP, RHO);
  return R_NilValue;

L155_:;
  // p5 = prom<V +>{
  //   row_vars5 = ld `row.vars`;
  //   row_vars6 = force? row_vars5;
  //   checkMissing(row_vars6);
  //   return row_vars6;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2878520484_5, CCP, RHO);
  // p6 = prom<V +>{
  //   sym13 = ldf names;
  //   base13 = ldf names in base;
  //   guard13 = `==`.4(sym13, base13);
  //   if guard13 then L1() else L2();
  // L0(r55):
  //   return r55;
  // L1():
  //   dn = ld dn;
  //   dn1 = force? dn;
  //   checkMissing(dn1);
  //   names = ldf names in base;
  //   r56 = dyn names(dn1);
  //   goto L0(r56);
  // L2():
  //   r54 = dyn base13(<sym dn>);
  //   goto L0(r54);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2878520484_6, CCP, RHO);
  // r58 = dyn pmatch(p5, p6)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmatch, 2, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L156() else D32()
  // L156()
  goto L156_;

D32_:;
  // deopt 119 [r58]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L156_:;
  // st i = r58
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r58_, RHO);
  (void)(Rsh_Fir_reg_r58_);
  // sym14 = ldf anyNA
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base14 = ldf anyNA in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args126);
  // if guard14 then L157() else L158()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L157()
    goto L157_;
  } else {
  // L158()
    goto L158_;
  }

L157_:;
  // i = ld i
  Rsh_Fir_reg_i = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L159() else D33()
  // L159()
  goto L159_;

L158_:;
  // r59 = dyn base14(<sym i>)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L27(r59)
  // L27(r59)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L27_;

D33_:;
  // deopt 123 [i]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L159_:;
  // i1 = force? i
  Rsh_Fir_reg_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i);
  // checkMissing(i1)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_i1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // anyNA = ldf anyNA in base
  Rsh_Fir_reg_anyNA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r61 = dyn anyNA(i1)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA, 1, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L160() else D34()
  // L160()
  goto L160_;

D34_:;
  // deopt 126 [r61]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L160_:;
  // goto L27(r61)
  // L27(r61)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r61_;
  goto L27_;

L161_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L162() else D35()
  // L162()
  goto L162_;

D35_:;
  // deopt 128 []
  Rsh_Fir_deopt(128, 0, NULL, CCP, RHO);
  return R_NilValue;

L162_:;
  // r62 = dyn stop1("incorrect specification for 'row.vars'")
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L163() else D36()
  // L163()
  goto L163_;

D36_:;
  // deopt 130 [r62]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L163_:;
  // goto L29()
  // L29()
  goto L29_;

D37_:;
  // deopt 133 [i2]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L165_:;
  // i3 = force? i2
  Rsh_Fir_reg_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i2_);
  // checkMissing(i3)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_i3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // st `row.vars` = i3
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_i3_, RHO);
  (void)(Rsh_Fir_reg_i3_);
  // goto L30(i3)
  // L30(i3)
  Rsh_Fir_reg_i4_ = Rsh_Fir_reg_i3_;
  goto L30_;

L167_:;
  // row_vars7 = ld `row.vars`
  Rsh_Fir_reg_row_vars7_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L169() else D38()
  // L169()
  goto L169_;

L168_:;
  // r64 = dyn base15(<lang `|`(`(`(`<`(row.vars, 1.0)), `(`(`>`(row.vars, n)))>)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L31(r64)
  // L31(r64)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r64_;
  goto L31_;

D38_:;
  // deopt 138 [row_vars7]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_row_vars7_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L169_:;
  // row_vars8 = force? row_vars7
  Rsh_Fir_reg_row_vars8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_vars7_);
  // checkMissing(row_vars8)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_row_vars8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // r66 = `<`(row_vars8, 1.0)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_row_vars8_;
  Rsh_Fir_array_args134[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // row_vars9 = ld `row.vars`
  Rsh_Fir_reg_row_vars9_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L170() else D39()
  // L170()
  goto L170_;

D39_:;
  // deopt 141 [r66, row_vars9]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_row_vars9_;
  Rsh_Fir_deopt(141, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L170_:;
  // row_vars10 = force? row_vars9
  Rsh_Fir_reg_row_vars10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_vars9_);
  // checkMissing(row_vars10)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_row_vars10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L171() else D40()
  // L171()
  goto L171_;

D40_:;
  // deopt 142 [r66, row_vars10, n]
  SEXP Rsh_Fir_array_deopt_stack33[3];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_row_vars10_;
  Rsh_Fir_array_deopt_stack33[2] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(142, 3, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L171_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // r67 = `>`(row_vars10, n1)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_row_vars10_;
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // r68 = `||`(r66, r67)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r69 = dyn any(r68)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L172() else D41()
  // L172()
  goto L172_;

D41_:;
  // deopt 147 [r69]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(147, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L172_:;
  // goto L31(r69)
  // L31(r69)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r69_;
  goto L31_;

L173_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L174() else D42()
  // L174()
  goto L174_;

D42_:;
  // deopt 149 []
  Rsh_Fir_deopt(149, 0, NULL, CCP, RHO);
  return R_NilValue;

L174_:;
  // r70 = dyn stop2("incorrect specification for 'row.vars'")
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L175() else D43()
  // L175()
  goto L175_;

D43_:;
  // deopt 151 [r70]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_deopt(151, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L175_:;
  // goto L30(r70)
  // L30(r70)
  Rsh_Fir_reg_i4_ = Rsh_Fir_reg_r70_;
  goto L30_;

L178_:;
  // col_vars1 = ld `col.vars`
  Rsh_Fir_reg_col_vars1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L180() else D44()
  // L180()
  goto L180_;

L179_:;
  // r71 = dyn base16(<sym col.vars>)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L34(r71)
  // L34(r71)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r71_;
  goto L34_;

D44_:;
  // deopt 157 [col_vars1]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_col_vars1_;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L180_:;
  // col_vars2 = force? col_vars1
  Rsh_Fir_reg_col_vars2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_vars1_);
  // checkMissing(col_vars2)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_col_vars2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // c42 = `==`(col_vars2, NULL)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_col_vars2_;
  Rsh_Fir_array_args143[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // goto L34(c42)
  // L34(c42)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_c42_;
  goto L34_;

L181_:;
  // sym17 = ldf `is.character`
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base17 = ldf `is.character` in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args144);
  // if guard17 then L182() else L183()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L182()
    goto L182_;
  } else {
  // L183()
    goto L183_;
  }

L182_:;
  // col_vars3 = ld `col.vars`
  Rsh_Fir_reg_col_vars3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L184() else D45()
  // L184()
  goto L184_;

L183_:;
  // r74 = dyn base17(<sym col.vars>)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L36(r74)
  // L36(r74)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r74_;
  goto L36_;

D45_:;
  // deopt 162 [col_vars3]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_col_vars3_;
  Rsh_Fir_deopt(162, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L184_:;
  // col_vars4 = force? col_vars3
  Rsh_Fir_reg_col_vars4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_vars3_);
  // checkMissing(col_vars4)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_col_vars4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty()));
  // c44 = `is.character`(col_vars4)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_col_vars4_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // goto L36(c44)
  // L36(c44)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_c44_;
  goto L36_;

L185_:;
  // pmatch1 = ldf pmatch
  Rsh_Fir_reg_pmatch1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // check L186() else D46()
  // L186()
  goto L186_;

D46_:;
  // deopt 166 []
  Rsh_Fir_deopt(166, 0, NULL, CCP, RHO);
  return R_NilValue;

L186_:;
  // p7 = prom<V +>{
  //   col_vars5 = ld `col.vars`;
  //   col_vars6 = force? col_vars5;
  //   checkMissing(col_vars6);
  //   return col_vars6;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2878520484_7, CCP, RHO);
  // p8 = prom<V +>{
  //   sym18 = ldf names;
  //   base18 = ldf names in base;
  //   guard18 = `==`.4(sym18, base18);
  //   if guard18 then L1() else L2();
  // L0(r78):
  //   return r78;
  // L1():
  //   dn2 = ld dn;
  //   dn3 = force? dn2;
  //   checkMissing(dn3);
  //   names1 = ldf names in base;
  //   r79 = dyn names1(dn3);
  //   goto L0(r79);
  // L2():
  //   r77 = dyn base18(<sym dn>);
  //   goto L0(r77);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2878520484_8, CCP, RHO);
  // r81 = dyn pmatch1(p7, p8)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args153[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names46[2];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pmatch1_, 2, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L187() else D47()
  // L187()
  goto L187_;

D47_:;
  // deopt 169 [r81]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L187_:;
  // st i = r81
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r81_, RHO);
  (void)(Rsh_Fir_reg_r81_);
  // sym19 = ldf anyNA
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base19 = ldf anyNA in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args154[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args154);
  // if guard19 then L188() else L189()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L188()
    goto L188_;
  } else {
  // L189()
    goto L189_;
  }

L188_:;
  // i6 = ld i
  Rsh_Fir_reg_i6_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L190() else D48()
  // L190()
  goto L190_;

L189_:;
  // r82 = dyn base19(<sym i>)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L38(r82)
  // L38(r82)
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r82_;
  goto L38_;

D48_:;
  // deopt 173 [i6]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_deopt(173, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L190_:;
  // i7 = force? i6
  Rsh_Fir_reg_i7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i6_);
  // checkMissing(i7)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_i7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // anyNA1 = ldf anyNA in base
  Rsh_Fir_reg_anyNA1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r84 = dyn anyNA1(i7)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_i7_;
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA1_, 1, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L191() else D49()
  // L191()
  goto L191_;

D49_:;
  // deopt 176 [r84]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_deopt(176, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L191_:;
  // goto L38(r84)
  // L38(r84)
  Rsh_Fir_reg_r83_ = Rsh_Fir_reg_r84_;
  goto L38_;

L192_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L193() else D50()
  // L193()
  goto L193_;

D50_:;
  // deopt 178 []
  Rsh_Fir_deopt(178, 0, NULL, CCP, RHO);
  return R_NilValue;

L193_:;
  // r85 = dyn stop3("incorrect specification for 'col.vars'")
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L194() else D51()
  // L194()
  goto L194_;

D51_:;
  // deopt 180 [r85]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_deopt(180, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L194_:;
  // goto L40()
  // L40()
  goto L40_;

D52_:;
  // deopt 183 [i8]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(183, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L196_:;
  // i9 = force? i8
  Rsh_Fir_reg_i9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i8_);
  // checkMissing(i9)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_i9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // st `col.vars` = i9
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_i9_, RHO);
  (void)(Rsh_Fir_reg_i9_);
  // goto L41(i9)
  // L41(i9)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i9_;
  goto L41_;

L198_:;
  // col_vars7 = ld `col.vars`
  Rsh_Fir_reg_col_vars7_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L200() else D53()
  // L200()
  goto L200_;

L199_:;
  // r87 = dyn base20(<lang `|`(`(`(`<`(col.vars, 1.0)), `(`(`>`(col.vars, n)))>)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 1, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L42(r87)
  // L42(r87)
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r87_;
  goto L42_;

D53_:;
  // deopt 188 [col_vars7]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_col_vars7_;
  Rsh_Fir_deopt(188, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L200_:;
  // col_vars8 = force? col_vars7
  Rsh_Fir_reg_col_vars8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_vars7_);
  // checkMissing(col_vars8)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_col_vars8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty()));
  // r89 = `<`(col_vars8, 1.0)
  SEXP Rsh_Fir_array_args162[2];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_col_vars8_;
  Rsh_Fir_array_args162[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty());
  // col_vars9 = ld `col.vars`
  Rsh_Fir_reg_col_vars9_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L201() else D54()
  // L201()
  goto L201_;

D54_:;
  // deopt 191 [r89, col_vars9]
  SEXP Rsh_Fir_array_deopt_stack44[2];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_col_vars9_;
  Rsh_Fir_deopt(191, 2, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L201_:;
  // col_vars10 = force? col_vars9
  Rsh_Fir_reg_col_vars10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_vars9_);
  // checkMissing(col_vars10)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_col_vars10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty()));
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L202() else D55()
  // L202()
  goto L202_;

D55_:;
  // deopt 192 [r89, col_vars10, n2]
  SEXP Rsh_Fir_array_deopt_stack45[3];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_col_vars10_;
  Rsh_Fir_array_deopt_stack45[2] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(192, 3, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L202_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // r90 = `>`(col_vars10, n3)
  SEXP Rsh_Fir_array_args165[2];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_col_vars10_;
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty());
  // r91 = `||`(r89, r90)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_r90_;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty());
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r92 = dyn any1(r91)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args167, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L203() else D56()
  // L203()
  goto L203_;

D56_:;
  // deopt 197 [r92]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_deopt(197, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L203_:;
  // goto L42(r92)
  // L42(r92)
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r92_;
  goto L42_;

L204_:;
  // stop4 = ldf stop
  Rsh_Fir_reg_stop4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L205() else D57()
  // L205()
  goto L205_;

D57_:;
  // deopt 199 []
  Rsh_Fir_deopt(199, 0, NULL, CCP, RHO);
  return R_NilValue;

L205_:;
  // r93 = dyn stop4("incorrect specification for 'col.vars'")
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop4_, 1, Rsh_Fir_array_args168, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L206() else D58()
  // L206()
  goto L206_;

D58_:;
  // deopt 201 [r93]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_deopt(201, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L206_:;
  // goto L41(r93)
  // L41(r93)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_r93_;
  goto L41_;

D59_:;
  // deopt 207 [1.0, n4]
  SEXP Rsh_Fir_array_deopt_stack48[2];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(207, 2, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L209_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty()));
  // r94 = `:`(1.0, n5)
  SEXP Rsh_Fir_array_args170[2];
  Rsh_Fir_array_args170[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args170[1] = Rsh_Fir_reg_n5_;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty());
  // st i = r94
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r94_, RHO);
  (void)(Rsh_Fir_reg_r94_);
  // sym21 = ldf `is.null`
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base21 = ldf `is.null` in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args171[2];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args171[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args171);
  // if guard21 then L210() else L211()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L210()
    goto L210_;
  } else {
  // L211()
    goto L211_;
  }

L210_:;
  // row_vars11 = ld `row.vars`
  Rsh_Fir_reg_row_vars11_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L212() else D60()
  // L212()
  goto L212_;

L211_:;
  // r95 = dyn base21(<sym row.vars>)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 1, Rsh_Fir_array_args172, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L45(r95)
  // L45(r95)
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r95_;
  goto L45_;

D60_:;
  // deopt 212 [row_vars11]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_row_vars11_;
  Rsh_Fir_deopt(212, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L212_:;
  // row_vars12 = force? row_vars11
  Rsh_Fir_reg_row_vars12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_vars11_);
  // checkMissing(row_vars12)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_row_vars12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty()));
  // c48 = `==`(row_vars12, NULL)
  SEXP Rsh_Fir_array_args174[2];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_row_vars12_;
  Rsh_Fir_array_args174[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty());
  // goto L45(c48)
  // L45(c48)
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_c48_;
  goto L45_;

L213_:;
  // sym22 = ldf `is.null`
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base22 = ldf `is.null` in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args175);
  // if guard22 then L214() else L215()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L214()
    goto L214_;
  } else {
  // L215()
    goto L215_;
  }

L214_:;
  // col_vars11 = ld `col.vars`
  Rsh_Fir_reg_col_vars11_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L216() else D61()
  // L216()
  goto L216_;

L215_:;
  // r98 = dyn base22(<sym col.vars>)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 1, Rsh_Fir_array_args176, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L47(c49, r98)
  // L47(c49, r98)
  Rsh_Fir_reg_c54_ = Rsh_Fir_reg_c49_;
  Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r98_;
  goto L47_;

D61_:;
  // deopt 217 [c49, col_vars11]
  SEXP Rsh_Fir_array_deopt_stack50[2];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_c49_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_col_vars11_;
  Rsh_Fir_deopt(217, 2, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L216_:;
  // col_vars12 = force? col_vars11
  Rsh_Fir_reg_col_vars12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_vars11_);
  // checkMissing(col_vars12)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_col_vars12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty()));
  // c55 = `==`(col_vars12, NULL)
  SEXP Rsh_Fir_array_args178[2];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_col_vars12_;
  Rsh_Fir_array_args178[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_c55_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty());
  // goto L47(c49, c55)
  // L47(c49, c55)
  Rsh_Fir_reg_c54_ = Rsh_Fir_reg_c49_;
  Rsh_Fir_reg_r99_ = Rsh_Fir_reg_c55_;
  goto L47_;

L218_:;
  // sort = ldf sort
  Rsh_Fir_reg_sort = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // check L219() else D62()
  // L219()
  goto L219_;

D62_:;
  // deopt 223 []
  Rsh_Fir_deopt(223, 0, NULL, CCP, RHO);
  return R_NilValue;

L219_:;
  // p9 = prom<V +>{
  //   sym23 = ldf c;
  //   base23 = ldf c in base;
  //   guard23 = `==`.4(sym23, base23);
  //   if guard23 then L1() else L2();
  // L0(r102):
  //   return r102;
  // L1():
  //   row_vars13 = ld `row.vars`;
  //   row_vars14 = force? row_vars13;
  //   checkMissing(row_vars14);
  //   col_vars13 = ld `col.vars`;
  //   col_vars14 = force? col_vars13;
  //   checkMissing(col_vars14);
  //   c60 = ldf c in base;
  //   r103 = dyn c60(row_vars14, col_vars14);
  //   goto L0(r103);
  // L2():
  //   r101 = dyn base23(<sym row.vars>, <sym col.vars>);
  //   goto L0(r101);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2878520484_9, CCP, RHO);
  // r105 = dyn sort(p9)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names57[1];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort, 1, Rsh_Fir_array_args184, Rsh_Fir_array_arg_names57, CCP, RHO);
  // check L220() else D63()
  // L220()
  goto L220_;

D63_:;
  // deopt 225 [r105]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r105_;
  Rsh_Fir_deopt(225, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L220_:;
  // st `all.vars` = r105
  Rsh_Fir_store(Rsh_const(CCP, 54), Rsh_Fir_reg_r105_, RHO);
  (void)(Rsh_Fir_reg_r105_);
  // sym24 = ldf length
  Rsh_Fir_reg_sym24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base24 = ldf length in base
  Rsh_Fir_reg_base24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard24 = `==`.4(sym24, base24)
  SEXP Rsh_Fir_array_args185[2];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_sym24_;
  Rsh_Fir_array_args185[1] = Rsh_Fir_reg_base24_;
  Rsh_Fir_reg_guard24_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args185);
  // if guard24 then L221() else L222()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard24_)) {
  // L221()
    goto L221_;
  } else {
  // L222()
    goto L222_;
  }

L221_:;
  // all_vars = ld `all.vars`
  Rsh_Fir_reg_all_vars = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // check L223() else D64()
  // L223()
  goto L223_;

L222_:;
  // r106 = dyn base24(<sym all.vars>)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names58[1];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base24_, 1, Rsh_Fir_array_args186, Rsh_Fir_array_arg_names58, CCP, RHO);
  // goto L49(r106)
  // L49(r106)
  Rsh_Fir_reg_r107_ = Rsh_Fir_reg_r106_;
  goto L49_;

D64_:;
  // deopt 229 [all_vars]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_all_vars;
  Rsh_Fir_deopt(229, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L223_:;
  // all_vars1 = force? all_vars
  Rsh_Fir_reg_all_vars1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all_vars);
  // checkMissing(all_vars1)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_all_vars1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r108 = dyn length3(all_vars1)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_all_vars1_;
  SEXP Rsh_Fir_array_arg_names59[1];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args188, Rsh_Fir_array_arg_names59, CCP, RHO);
  // check L224() else D65()
  // L224()
  goto L224_;

D65_:;
  // deopt 232 [r108]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_deopt(232, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L224_:;
  // goto L49(r108)
  // L49(r108)
  Rsh_Fir_reg_r107_ = Rsh_Fir_reg_r108_;
  goto L49_;

D66_:;
  // deopt 233 [r107, n6]
  SEXP Rsh_Fir_array_deopt_stack54[2];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_r107_;
  Rsh_Fir_array_deopt_stack54[1] = Rsh_Fir_reg_n6_;
  Rsh_Fir_deopt(233, 2, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L225_:;
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // checkMissing(n7)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_n7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty()));
  // r109 = `<`(r107, n7)
  SEXP Rsh_Fir_array_args190[2];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_r107_;
  Rsh_Fir_array_args190[1] = Rsh_Fir_reg_n7_;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty());
  // c61 = `as.logical`(r109)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_r109_;
  Rsh_Fir_reg_c61_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args191, Rsh_Fir_param_types_empty());
  // if c61 then L226() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c61_)) {
  // L226()
    goto L226_;
  } else {
  // L50()
    goto L50_;
  }

L226_:;
  // p10 = ld p
  Rsh_Fir_reg_p10_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L227() else D67()
  // L227()
  goto L227_;

D67_:;
  // deopt 236 [p10]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_deopt(236, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L227_:;
  // p11 = force? p10
  Rsh_Fir_reg_p11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p10_);
  // checkMissing(p11)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_p11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty()));
  // c62 = `as.logical`(p11)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_reg_c62_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty());
  // if c62 then L228() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c62_)) {
  // L228()
    goto L228_;
  } else {
  // L51()
    goto L51_;
  }

L228_:;
  // apply = ldf apply
  Rsh_Fir_reg_apply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L229() else D68()
  // L229()
  goto L229_;

D68_:;
  // deopt 239 []
  Rsh_Fir_deopt(239, 0, NULL, CCP, RHO);
  return R_NilValue;

L229_:;
  // p12 = prom<V +>{
  //   x16 = ld x;
  //   x17 = force? x16;
  //   checkMissing(x17);
  //   return x17;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2878520484_10, CCP, RHO);
  // p13 = prom<V +>{
  //   all_vars2 = ld `all.vars`;
  //   all_vars3 = force? all_vars2;
  //   checkMissing(all_vars3);
  //   return all_vars3;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2878520484_11, CCP, RHO);
  // p14 = prom<V +>{
  //   sum = ld sum;
  //   sum1 = force? sum;
  //   checkMissing(sum1);
  //   return sum1;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2878520484_12, CCP, RHO);
  // r113 = dyn apply(p12, p13, p14)
  SEXP Rsh_Fir_array_args197[3];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args197[1] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args197[2] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names60[3];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_array_arg_names60[2] = R_MissingArg;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_apply, 3, Rsh_Fir_array_args197, Rsh_Fir_array_arg_names60, CCP, RHO);
  // check L230() else D69()
  // L230()
  goto L230_;

D69_:;
  // deopt 243 [r113]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_r113_;
  Rsh_Fir_deopt(243, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L230_:;
  // goto L52(r113)
  // L52(r113)
  Rsh_Fir_reg_r114_ = Rsh_Fir_reg_r113_;
  goto L52_;

L232_:;
  // x18 = ld x
  Rsh_Fir_reg_x18_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L234() else D70()
  // L234()
  goto L234_;

L233_:;
  // r115 = dyn base25(<sym x>)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names61[1];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base25_, 1, Rsh_Fir_array_args198, Rsh_Fir_array_arg_names61, CCP, RHO);
  // goto L52(r115)
  // L52(r115)
  Rsh_Fir_reg_r114_ = Rsh_Fir_reg_r115_;
  goto L52_;

D70_:;
  // deopt 246 [x18]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_deopt(246, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L234_:;
  // x19 = force? x18
  Rsh_Fir_reg_x19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x18_);
  // checkMissing(x19)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_x19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args199, Rsh_Fir_param_types_empty()));
  // sum2 = ldf sum in base
  Rsh_Fir_reg_sum2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r116 = dyn sum2(x19)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_x19_;
  SEXP Rsh_Fir_array_arg_names62[1];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum2_, 1, Rsh_Fir_array_args200, Rsh_Fir_array_arg_names62, CCP, RHO);
  // check L235() else D71()
  // L235()
  goto L235_;

D71_:;
  // deopt 249 [r116]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r116_;
  Rsh_Fir_deopt(249, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L235_:;
  // goto L52(r116)
  // L52(r116)
  Rsh_Fir_reg_r114_ = Rsh_Fir_reg_r116_;
  goto L52_;

L236_:;
  // row_vars15 = ld `row.vars`
  Rsh_Fir_reg_row_vars15_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L238() else D72()
  // L238()
  goto L238_;

L237_:;
  // r117 = dyn base26(<sym row.vars>, <sym all.vars>)
  SEXP Rsh_Fir_array_args201[2];
  Rsh_Fir_array_args201[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args201[1] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names63[2];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_array_arg_names63[1] = R_MissingArg;
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base26_, 2, Rsh_Fir_array_args201, Rsh_Fir_array_arg_names63, CCP, RHO);
  // goto L53(r117)
  // L53(r117)
  Rsh_Fir_reg_r118_ = Rsh_Fir_reg_r117_;
  goto L53_;

D72_:;
  // deopt 253 [row_vars15]
  SEXP Rsh_Fir_array_deopt_stack59[1];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_row_vars15_;
  Rsh_Fir_deopt(253, 1, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L238_:;
  // row_vars16 = force? row_vars15
  Rsh_Fir_reg_row_vars16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_vars15_);
  // checkMissing(row_vars16)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_row_vars16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty()));
  // all_vars4 = ld `all.vars`
  Rsh_Fir_reg_all_vars4_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // check L239() else D73()
  // L239()
  goto L239_;

D73_:;
  // deopt 255 [all_vars4]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_all_vars4_;
  Rsh_Fir_deopt(255, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L239_:;
  // all_vars5 = force? all_vars4
  Rsh_Fir_reg_all_vars5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all_vars4_);
  // checkMissing(all_vars5)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_all_vars5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args203, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r119 = dyn match(row_vars16, all_vars5, NA_INT, NULL)
  SEXP Rsh_Fir_array_args204[4];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_row_vars16_;
  Rsh_Fir_array_args204[1] = Rsh_Fir_reg_all_vars5_;
  Rsh_Fir_array_args204[2] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args204[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names64[4];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_array_arg_names64[2] = R_MissingArg;
  Rsh_Fir_array_arg_names64[3] = R_MissingArg;
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args204, Rsh_Fir_array_arg_names64, CCP, RHO);
  // check L240() else D74()
  // L240()
  goto L240_;

D74_:;
  // deopt 260 [r119]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_r119_;
  Rsh_Fir_deopt(260, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L240_:;
  // goto L53(r119)
  // L53(r119)
  Rsh_Fir_reg_r118_ = Rsh_Fir_reg_r119_;
  goto L53_;

L241_:;
  // col_vars15 = ld `col.vars`
  Rsh_Fir_reg_col_vars15_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L243() else D75()
  // L243()
  goto L243_;

L242_:;
  // r120 = dyn base27(<sym col.vars>, <sym all.vars>)
  SEXP Rsh_Fir_array_args205[2];
  Rsh_Fir_array_args205[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args205[1] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names65[2];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_array_arg_names65[1] = R_MissingArg;
  Rsh_Fir_reg_r120_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base27_, 2, Rsh_Fir_array_args205, Rsh_Fir_array_arg_names65, CCP, RHO);
  // goto L54(r120)
  // L54(r120)
  Rsh_Fir_reg_r121_ = Rsh_Fir_reg_r120_;
  goto L54_;

D75_:;
  // deopt 264 [col_vars15]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_col_vars15_;
  Rsh_Fir_deopt(264, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L243_:;
  // col_vars16 = force? col_vars15
  Rsh_Fir_reg_col_vars16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_vars15_);
  // checkMissing(col_vars16)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_col_vars16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty()));
  // all_vars6 = ld `all.vars`
  Rsh_Fir_reg_all_vars6_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // check L244() else D76()
  // L244()
  goto L244_;

D76_:;
  // deopt 266 [all_vars6]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_all_vars6_;
  Rsh_Fir_deopt(266, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L244_:;
  // all_vars7 = force? all_vars6
  Rsh_Fir_reg_all_vars7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all_vars6_);
  // checkMissing(all_vars7)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_all_vars7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args207, Rsh_Fir_param_types_empty()));
  // match1 = ldf match in base
  Rsh_Fir_reg_match1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r122 = dyn match1(col_vars16, all_vars7, NA_INT, NULL)
  SEXP Rsh_Fir_array_args208[4];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_col_vars16_;
  Rsh_Fir_array_args208[1] = Rsh_Fir_reg_all_vars7_;
  Rsh_Fir_array_args208[2] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args208[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names66[4];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_array_arg_names66[1] = R_MissingArg;
  Rsh_Fir_array_arg_names66[2] = R_MissingArg;
  Rsh_Fir_array_arg_names66[3] = R_MissingArg;
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match1_, 4, Rsh_Fir_array_args208, Rsh_Fir_array_arg_names66, CCP, RHO);
  // check L245() else D77()
  // L245()
  goto L245_;

D77_:;
  // deopt 271 [r122]
  SEXP Rsh_Fir_array_deopt_stack64[1];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_r122_;
  Rsh_Fir_deopt(271, 1, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L245_:;
  // goto L54(r122)
  // L54(r122)
  Rsh_Fir_reg_r121_ = Rsh_Fir_reg_r122_;
  goto L54_;

D78_:;
  // deopt 273 [dn4]
  SEXP Rsh_Fir_array_deopt_stack65[1];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_dn4_;
  Rsh_Fir_deopt(273, 1, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L246_:;
  // dn5 = force? dn4
  Rsh_Fir_reg_dn5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn4_);
  // checkMissing(dn5)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_dn5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty()));
  // c63 = `is.object`(dn5)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_dn5_;
  Rsh_Fir_reg_c63_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args210, Rsh_Fir_param_types_empty());
  // if c63 then L247() else L248(dn5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c63_)) {
  // L247()
    goto L247_;
  } else {
  // L248(dn5)
    Rsh_Fir_reg_dn7_ = Rsh_Fir_reg_dn5_;
    goto L248_;
  }

L247_:;
  // dr2 = tryDispatchBuiltin.1("[", dn5)
  SEXP Rsh_Fir_array_args211[2];
  Rsh_Fir_array_args211[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args211[1] = Rsh_Fir_reg_dn5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args211);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args212, Rsh_Fir_param_types_empty());
  // if dc1 then L249() else L248(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L249()
    goto L249_;
  } else {
  // L248(dr2)
    Rsh_Fir_reg_dn7_ = Rsh_Fir_reg_dr2_;
    goto L248_;
  }

L248_:;
  // all_vars8 = ld `all.vars`
  Rsh_Fir_reg_all_vars8_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // check L250() else D79()
  // L250()
  goto L250_;

L249_:;
  // dx4 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args213, Rsh_Fir_param_types_empty());
  // goto L55(dx4)
  // L55(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L55_;

D79_:;
  // deopt 275 [dn7, all_vars8]
  SEXP Rsh_Fir_array_deopt_stack66[2];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_dn7_;
  Rsh_Fir_array_deopt_stack66[1] = Rsh_Fir_reg_all_vars8_;
  Rsh_Fir_deopt(275, 2, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L250_:;
  // all_vars9 = force? all_vars8
  Rsh_Fir_reg_all_vars9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all_vars8_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r123 = dyn __1(dn7, all_vars9)
  SEXP Rsh_Fir_array_args214[2];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_dn7_;
  Rsh_Fir_array_args214[1] = Rsh_Fir_reg_all_vars9_;
  SEXP Rsh_Fir_array_arg_names67[2];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_array_arg_names67[1] = R_MissingArg;
  Rsh_Fir_reg_r123_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args214, Rsh_Fir_array_arg_names67, CCP, RHO);
  // goto L55(r123)
  // L55(r123)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r123_;
  goto L55_;

D80_:;
  // deopt 279 [dx6]
  SEXP Rsh_Fir_array_deopt_stack67[1];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_dx6_;
  Rsh_Fir_deopt(279, 1, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L251_:;
  // dx7 = force? dx6
  Rsh_Fir_reg_dx7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dx6_);
  // checkMissing(dx7)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_dx7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty()));
  // c64 = `is.object`(dx7)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_c64_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args216, Rsh_Fir_param_types_empty());
  // if c64 then L252() else L253(dx7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c64_)) {
  // L252()
    goto L252_;
  } else {
  // L253(dx7)
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    goto L253_;
  }

L252_:;
  // dr4 = tryDispatchBuiltin.1("[", dx7)
  SEXP Rsh_Fir_array_args217[2];
  Rsh_Fir_array_args217[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args217[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args217);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args218[1];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args218, Rsh_Fir_param_types_empty());
  // if dc2 then L254() else L253(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L254()
    goto L254_;
  } else {
  // L253(dr4)
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dr4_;
    goto L253_;
  }

L253_:;
  // all_vars10 = ld `all.vars`
  Rsh_Fir_reg_all_vars10_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // check L255() else D81()
  // L255()
  goto L255_;

L254_:;
  // dx10 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args219[1];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args219, Rsh_Fir_param_types_empty());
  // goto L56(dx10)
  // L56(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L56_;

D81_:;
  // deopt 281 [dx9, all_vars10]
  SEXP Rsh_Fir_array_deopt_stack68[2];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_deopt_stack68[1] = Rsh_Fir_reg_all_vars10_;
  Rsh_Fir_deopt(281, 2, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L255_:;
  // all_vars11 = force? all_vars10
  Rsh_Fir_reg_all_vars11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all_vars10_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r124 = dyn __2(dx9, all_vars11)
  SEXP Rsh_Fir_array_args220[2];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args220[1] = Rsh_Fir_reg_all_vars11_;
  SEXP Rsh_Fir_array_arg_names68[2];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_array_arg_names68[1] = R_MissingArg;
  Rsh_Fir_reg_r124_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args220, Rsh_Fir_array_arg_names68, CCP, RHO);
  // goto L56(r124)
  // L56(r124)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r124_;
  goto L56_;

L258_:;
  // row_vars17 = ld `row.vars`
  Rsh_Fir_reg_row_vars17_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L260() else D82()
  // L260()
  goto L260_;

L259_:;
  // r125 = dyn base28(<sym row.vars>)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names69[1];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_reg_r125_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base28_, 1, Rsh_Fir_array_args221, Rsh_Fir_array_arg_names69, CCP, RHO);
  // goto L59(r125)
  // L59(r125)
  Rsh_Fir_reg_r126_ = Rsh_Fir_reg_r125_;
  goto L59_;

D82_:;
  // deopt 288 [row_vars17]
  SEXP Rsh_Fir_array_deopt_stack69[1];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_row_vars17_;
  Rsh_Fir_deopt(288, 1, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L260_:;
  // row_vars18 = force? row_vars17
  Rsh_Fir_reg_row_vars18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_vars17_);
  // checkMissing(row_vars18)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_row_vars18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args222, Rsh_Fir_param_types_empty()));
  // c65 = `==`(row_vars18, NULL)
  SEXP Rsh_Fir_array_args223[2];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_row_vars18_;
  Rsh_Fir_array_args223[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_c65_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty());
  // goto L59(c65)
  // L59(c65)
  Rsh_Fir_reg_r126_ = Rsh_Fir_reg_c65_;
  goto L59_;

L261_:;
  // sym29 = ldf length
  Rsh_Fir_reg_sym29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base29 = ldf length in base
  Rsh_Fir_reg_base29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard29 = `==`.4(sym29, base29)
  SEXP Rsh_Fir_array_args224[2];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_sym29_;
  Rsh_Fir_array_args224[1] = Rsh_Fir_reg_base29_;
  Rsh_Fir_reg_guard29_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args224);
  // if guard29 then L262() else L263()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard29_)) {
  // L262()
    goto L262_;
  } else {
  // L263()
    goto L263_;
  }

L262_:;
  // row_vars19 = ld `row.vars`
  Rsh_Fir_reg_row_vars19_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L264() else D83()
  // L264()
  goto L264_;

L263_:;
  // r128 = dyn base29(<sym row.vars>)
  SEXP Rsh_Fir_array_args225[1];
  Rsh_Fir_array_args225[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names70[1];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_reg_r128_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base29_, 1, Rsh_Fir_array_args225, Rsh_Fir_array_arg_names70, CCP, RHO);
  // goto L61(r128)
  // L61(r128)
  Rsh_Fir_reg_r129_ = Rsh_Fir_reg_r128_;
  goto L61_;

D83_:;
  // deopt 294 [row_vars19]
  SEXP Rsh_Fir_array_deopt_stack70[1];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_row_vars19_;
  Rsh_Fir_deopt(294, 1, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L264_:;
  // row_vars20 = force? row_vars19
  Rsh_Fir_reg_row_vars20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_vars19_);
  // checkMissing(row_vars20)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_row_vars20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty()));
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r130 = dyn length4(row_vars20)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_row_vars20_;
  SEXP Rsh_Fir_array_arg_names71[1];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_reg_r130_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args227, Rsh_Fir_array_arg_names71, CCP, RHO);
  // check L265() else D84()
  // L265()
  goto L265_;

D84_:;
  // deopt 297 [r130]
  SEXP Rsh_Fir_array_deopt_stack71[1];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_r130_;
  Rsh_Fir_deopt(297, 1, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L265_:;
  // goto L61(r130)
  // L61(r130)
  Rsh_Fir_reg_r129_ = Rsh_Fir_reg_r130_;
  goto L61_;

L266_:;
  // i12 = ld i
  Rsh_Fir_reg_i12_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L267() else D85()
  // L267()
  goto L267_;

D85_:;
  // deopt 298 [i12]
  SEXP Rsh_Fir_array_deopt_stack72[1];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_deopt(298, 1, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L267_:;
  // i13 = force? i12
  Rsh_Fir_reg_i13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i12_);
  // checkMissing(i13)
  SEXP Rsh_Fir_array_args228[1];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_i13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args228, Rsh_Fir_param_types_empty()));
  // c68 = `is.object`(i13)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_c68_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args229, Rsh_Fir_param_types_empty());
  // if c68 then L268() else L269(i13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c68_)) {
  // L268()
    goto L268_;
  } else {
  // L269(i13)
    Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i13_;
    goto L269_;
  }

L268_:;
  // dr6 = tryDispatchBuiltin.1("[", i13)
  SEXP Rsh_Fir_array_args230[2];
  Rsh_Fir_array_args230[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args230[1] = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args230);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args231[1];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args231, Rsh_Fir_param_types_empty());
  // if dc3 then L270() else L269(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L270()
    goto L270_;
  } else {
  // L269(dr6)
    Rsh_Fir_reg_i15_ = Rsh_Fir_reg_dr6_;
    goto L269_;
  }

L269_:;
  // row_vars21 = ld `row.vars`
  Rsh_Fir_reg_row_vars21_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L271() else D86()
  // L271()
  goto L271_;

L270_:;
  // dx14 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args232[1];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args232, Rsh_Fir_param_types_empty());
  // goto L63(dx14)
  // L63(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L63_;

D86_:;
  // deopt 300 [i15, row_vars21]
  SEXP Rsh_Fir_array_deopt_stack73[2];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack73[1] = Rsh_Fir_reg_row_vars21_;
  Rsh_Fir_deopt(300, 2, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L271_:;
  // row_vars22 = force? row_vars21
  Rsh_Fir_reg_row_vars22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_vars21_);
  // checkMissing(row_vars22)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_row_vars22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty()));
  // r131 = `-`(<missing>, row_vars22)
  SEXP Rsh_Fir_array_args234[2];
  Rsh_Fir_array_args234[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args234[1] = Rsh_Fir_reg_row_vars22_;
  Rsh_Fir_reg_r131_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args234, Rsh_Fir_param_types_empty());
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r132 = dyn __3(i15, r131)
  SEXP Rsh_Fir_array_args235[2];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_args235[1] = Rsh_Fir_reg_r131_;
  SEXP Rsh_Fir_array_arg_names72[2];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_array_arg_names72[1] = R_MissingArg;
  Rsh_Fir_reg_r132_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args235, Rsh_Fir_array_arg_names72, CCP, RHO);
  // goto L63(r132)
  // L63(r132)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r132_;
  goto L63_;

D87_:;
  // deopt 304 [i16]
  SEXP Rsh_Fir_array_deopt_stack74[1];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_i16_;
  Rsh_Fir_deopt(304, 1, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L273_:;
  // i17 = force? i16
  Rsh_Fir_reg_i17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i16_);
  // checkMissing(i17)
  SEXP Rsh_Fir_array_args236[1];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_i17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args236, Rsh_Fir_param_types_empty()));
  // goto L64(i17)
  // L64(i17)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_i17_;
  goto L64_;

L275_:;
  // col_vars17 = ld `col.vars`
  Rsh_Fir_reg_col_vars17_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L277() else D88()
  // L277()
  goto L277_;

L276_:;
  // r133 = dyn base30(<sym col.vars>)
  SEXP Rsh_Fir_array_args237[1];
  Rsh_Fir_array_args237[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names73[1];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_reg_r133_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base30_, 1, Rsh_Fir_array_args237, Rsh_Fir_array_arg_names73, CCP, RHO);
  // goto L65(r133)
  // L65(r133)
  Rsh_Fir_reg_r134_ = Rsh_Fir_reg_r133_;
  goto L65_;

D88_:;
  // deopt 308 [col_vars17]
  SEXP Rsh_Fir_array_deopt_stack75[1];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_col_vars17_;
  Rsh_Fir_deopt(308, 1, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L277_:;
  // col_vars18 = force? col_vars17
  Rsh_Fir_reg_col_vars18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_vars17_);
  // checkMissing(col_vars18)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_col_vars18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args238, Rsh_Fir_param_types_empty()));
  // c69 = `==`(col_vars18, NULL)
  SEXP Rsh_Fir_array_args239[2];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_col_vars18_;
  Rsh_Fir_array_args239[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_c69_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args239, Rsh_Fir_param_types_empty());
  // goto L65(c69)
  // L65(c69)
  Rsh_Fir_reg_r134_ = Rsh_Fir_reg_c69_;
  goto L65_;

L278_:;
  // sym31 = ldf length
  Rsh_Fir_reg_sym31_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base31 = ldf length in base
  Rsh_Fir_reg_base31_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard31 = `==`.4(sym31, base31)
  SEXP Rsh_Fir_array_args240[2];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_sym31_;
  Rsh_Fir_array_args240[1] = Rsh_Fir_reg_base31_;
  Rsh_Fir_reg_guard31_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args240);
  // if guard31 then L279() else L280()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard31_)) {
  // L279()
    goto L279_;
  } else {
  // L280()
    goto L280_;
  }

L279_:;
  // col_vars19 = ld `col.vars`
  Rsh_Fir_reg_col_vars19_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L281() else D89()
  // L281()
  goto L281_;

L280_:;
  // r136 = dyn base31(<sym col.vars>)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names74[1];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_reg_r136_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base31_, 1, Rsh_Fir_array_args241, Rsh_Fir_array_arg_names74, CCP, RHO);
  // goto L67(r136)
  // L67(r136)
  Rsh_Fir_reg_r137_ = Rsh_Fir_reg_r136_;
  goto L67_;

D89_:;
  // deopt 314 [col_vars19]
  SEXP Rsh_Fir_array_deopt_stack76[1];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_col_vars19_;
  Rsh_Fir_deopt(314, 1, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

L281_:;
  // col_vars20 = force? col_vars19
  Rsh_Fir_reg_col_vars20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_vars19_);
  // checkMissing(col_vars20)
  SEXP Rsh_Fir_array_args242[1];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_col_vars20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args242, Rsh_Fir_param_types_empty()));
  // length5 = ldf length in base
  Rsh_Fir_reg_length5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r138 = dyn length5(col_vars20)
  SEXP Rsh_Fir_array_args243[1];
  Rsh_Fir_array_args243[0] = Rsh_Fir_reg_col_vars20_;
  SEXP Rsh_Fir_array_arg_names75[1];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_reg_r138_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length5_, 1, Rsh_Fir_array_args243, Rsh_Fir_array_arg_names75, CCP, RHO);
  // check L282() else D90()
  // L282()
  goto L282_;

D90_:;
  // deopt 317 [r138]
  SEXP Rsh_Fir_array_deopt_stack77[1];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_r138_;
  Rsh_Fir_deopt(317, 1, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

L282_:;
  // goto L67(r138)
  // L67(r138)
  Rsh_Fir_reg_r137_ = Rsh_Fir_reg_r138_;
  goto L67_;

L283_:;
  // i18 = ld i
  Rsh_Fir_reg_i18_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L284() else D91()
  // L284()
  goto L284_;

D91_:;
  // deopt 318 [i18]
  SEXP Rsh_Fir_array_deopt_stack78[1];
  Rsh_Fir_array_deopt_stack78[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_deopt(318, 1, Rsh_Fir_array_deopt_stack78, CCP, RHO);
  return R_NilValue;

L284_:;
  // i19 = force? i18
  Rsh_Fir_reg_i19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i18_);
  // checkMissing(i19)
  SEXP Rsh_Fir_array_args244[1];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_i19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args244, Rsh_Fir_param_types_empty()));
  // c72 = `is.object`(i19)
  SEXP Rsh_Fir_array_args245[1];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_c72_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args245, Rsh_Fir_param_types_empty());
  // if c72 then L285() else L286(i19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c72_)) {
  // L285()
    goto L285_;
  } else {
  // L286(i19)
    Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i19_;
    goto L286_;
  }

L285_:;
  // dr8 = tryDispatchBuiltin.1("[", i19)
  SEXP Rsh_Fir_array_args246[2];
  Rsh_Fir_array_args246[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args246[1] = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args246);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args247[1];
  Rsh_Fir_array_args247[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args247, Rsh_Fir_param_types_empty());
  // if dc4 then L287() else L286(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L287()
    goto L287_;
  } else {
  // L286(dr8)
    Rsh_Fir_reg_i21_ = Rsh_Fir_reg_dr8_;
    goto L286_;
  }

L286_:;
  // col_vars21 = ld `col.vars`
  Rsh_Fir_reg_col_vars21_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L288() else D92()
  // L288()
  goto L288_;

L287_:;
  // dx17 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args248[1];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args248, Rsh_Fir_param_types_empty());
  // goto L69(dx17)
  // L69(dx17)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx17_;
  goto L69_;

D92_:;
  // deopt 320 [i21, col_vars21]
  SEXP Rsh_Fir_array_deopt_stack79[2];
  Rsh_Fir_array_deopt_stack79[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack79[1] = Rsh_Fir_reg_col_vars21_;
  Rsh_Fir_deopt(320, 2, Rsh_Fir_array_deopt_stack79, CCP, RHO);
  return R_NilValue;

L288_:;
  // col_vars22 = force? col_vars21
  Rsh_Fir_reg_col_vars22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_vars21_);
  // checkMissing(col_vars22)
  SEXP Rsh_Fir_array_args249[1];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_col_vars22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args249, Rsh_Fir_param_types_empty()));
  // r139 = `-`(<missing>, col_vars22)
  SEXP Rsh_Fir_array_args250[2];
  Rsh_Fir_array_args250[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args250[1] = Rsh_Fir_reg_col_vars22_;
  Rsh_Fir_reg_r139_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args250, Rsh_Fir_param_types_empty());
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r140 = dyn __4(i21, r139)
  SEXP Rsh_Fir_array_args251[2];
  Rsh_Fir_array_args251[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_args251[1] = Rsh_Fir_reg_r139_;
  SEXP Rsh_Fir_array_arg_names76[2];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_array_arg_names76[1] = R_MissingArg;
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args251, Rsh_Fir_array_arg_names76, CCP, RHO);
  // goto L69(r140)
  // L69(r140)
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_r140_;
  goto L69_;

D93_:;
  // deopt 324 [i22]
  SEXP Rsh_Fir_array_deopt_stack80[1];
  Rsh_Fir_array_deopt_stack80[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_deopt(324, 1, Rsh_Fir_array_deopt_stack80, CCP, RHO);
  return R_NilValue;

L290_:;
  // i23 = force? i22
  Rsh_Fir_reg_i23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i22_);
  // checkMissing(i23)
  SEXP Rsh_Fir_array_args252[1];
  Rsh_Fir_array_args252[0] = Rsh_Fir_reg_i23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args252, Rsh_Fir_param_types_empty()));
  // goto L70(i23)
  // L70(i23)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_i23_;
  goto L70_;

L292_:;
  // n8 = ld n
  Rsh_Fir_reg_n8_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L294() else D94()
  // L294()
  goto L294_;

L293_:;
  // r141 = dyn base32(<lang `-`(n, 1.0)>)
  SEXP Rsh_Fir_array_args253[1];
  Rsh_Fir_array_args253[0] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names77[1];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_reg_r141_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base32_, 1, Rsh_Fir_array_args253, Rsh_Fir_array_arg_names77, CCP, RHO);
  // goto L71(r141)
  // L71(r141)
  Rsh_Fir_reg_r142_ = Rsh_Fir_reg_r141_;
  goto L71_;

D94_:;
  // deopt 328 [n8]
  SEXP Rsh_Fir_array_deopt_stack81[1];
  Rsh_Fir_array_deopt_stack81[0] = Rsh_Fir_reg_n8_;
  Rsh_Fir_deopt(328, 1, Rsh_Fir_array_deopt_stack81, CCP, RHO);
  return R_NilValue;

L294_:;
  // n9 = force? n8
  Rsh_Fir_reg_n9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n8_);
  // checkMissing(n9)
  SEXP Rsh_Fir_array_args254[1];
  Rsh_Fir_array_args254[0] = Rsh_Fir_reg_n9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args254, Rsh_Fir_param_types_empty()));
  // r143 = `-`(n9, 1.0)
  SEXP Rsh_Fir_array_args255[2];
  Rsh_Fir_array_args255[0] = Rsh_Fir_reg_n9_;
  Rsh_Fir_array_args255[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r143_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args255, Rsh_Fir_param_types_empty());
  // r144 = seq_len(r143)
  SEXP Rsh_Fir_array_args256[1];
  Rsh_Fir_array_args256[0] = Rsh_Fir_reg_r143_;
  Rsh_Fir_reg_r144_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args256, Rsh_Fir_param_types_empty());
  // goto L71(r144)
  // L71(r144)
  Rsh_Fir_reg_r142_ = Rsh_Fir_reg_r144_;
  goto L71_;

D95_:;
  // deopt 334 [n10]
  SEXP Rsh_Fir_array_deopt_stack82[1];
  Rsh_Fir_array_deopt_stack82[0] = Rsh_Fir_reg_n10_;
  Rsh_Fir_deopt(334, 1, Rsh_Fir_array_deopt_stack82, CCP, RHO);
  return R_NilValue;

L295_:;
  // n11 = force? n10
  Rsh_Fir_reg_n11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n10_);
  // checkMissing(n11)
  SEXP Rsh_Fir_array_args257[1];
  Rsh_Fir_array_args257[0] = Rsh_Fir_reg_n11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args257, Rsh_Fir_param_types_empty()));
  // st `col.vars` = n11
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_n11_, RHO);
  (void)(Rsh_Fir_reg_n11_);
  // goto L58()
  // L58()
  goto L58_;

L296_:;
  // sym34 = ldf c
  Rsh_Fir_reg_sym34_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base34 = ldf c in base
  Rsh_Fir_reg_base34_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard34 = `==`.4(sym34, base34)
  SEXP Rsh_Fir_array_args258[2];
  Rsh_Fir_array_args258[0] = Rsh_Fir_reg_sym34_;
  Rsh_Fir_array_args258[1] = Rsh_Fir_reg_base34_;
  Rsh_Fir_reg_guard34_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args258);
  // if guard34 then L298() else L299()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard34_)) {
  // L298()
    goto L298_;
  } else {
  // L299()
    goto L299_;
  }

L297_:;
  // r145 = dyn base33(<lang `<-`(perm, c(rev(row.vars), rev(col.vars)))>)
  SEXP Rsh_Fir_array_args259[1];
  Rsh_Fir_array_args259[0] = Rsh_const(CCP, 61);
  SEXP Rsh_Fir_array_arg_names78[1];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_reg_r145_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base33_, 1, Rsh_Fir_array_args259, Rsh_Fir_array_arg_names78, CCP, RHO);
  // goto L72(r145)
  // L72(r145)
  Rsh_Fir_reg_r146_ = Rsh_Fir_reg_r145_;
  goto L72_;

L298_:;
  // rev = ldf rev
  Rsh_Fir_reg_rev = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 62), RHO);
  // check L300() else D96()
  // L300()
  goto L300_;

L299_:;
  // r147 = dyn base34(<lang rev(row.vars)>, <lang rev(col.vars)>)
  SEXP Rsh_Fir_array_args260[2];
  Rsh_Fir_array_args260[0] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args260[1] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names79[2];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_array_arg_names79[1] = R_MissingArg;
  Rsh_Fir_reg_r147_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base34_, 2, Rsh_Fir_array_args260, Rsh_Fir_array_arg_names79, CCP, RHO);
  // goto L73(r147)
  // L73(r147)
  Rsh_Fir_reg_r148_ = Rsh_Fir_reg_r147_;
  goto L73_;

D96_:;
  // deopt 342 []
  Rsh_Fir_deopt(342, 0, NULL, CCP, RHO);
  return R_NilValue;

L300_:;
  // p15 = prom<V +>{
  //   row_vars23 = ld `row.vars`;
  //   row_vars24 = force? row_vars23;
  //   checkMissing(row_vars24);
  //   return row_vars24;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2878520484_13, CCP, RHO);
  // r150 = dyn rev(p15)
  SEXP Rsh_Fir_array_args262[1];
  Rsh_Fir_array_args262[0] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names80[1];
  Rsh_Fir_array_arg_names80[0] = R_MissingArg;
  Rsh_Fir_reg_r150_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rev, 1, Rsh_Fir_array_args262, Rsh_Fir_array_arg_names80, CCP, RHO);
  // check L301() else D97()
  // L301()
  goto L301_;

D97_:;
  // deopt 344 [r150]
  SEXP Rsh_Fir_array_deopt_stack83[1];
  Rsh_Fir_array_deopt_stack83[0] = Rsh_Fir_reg_r150_;
  Rsh_Fir_deopt(344, 1, Rsh_Fir_array_deopt_stack83, CCP, RHO);
  return R_NilValue;

L301_:;
  // rev1 = ldf rev
  Rsh_Fir_reg_rev1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 62), RHO);
  // check L302() else D98()
  // L302()
  goto L302_;

D98_:;
  // deopt 346 []
  Rsh_Fir_deopt(346, 0, NULL, CCP, RHO);
  return R_NilValue;

L302_:;
  // p16 = prom<V +>{
  //   col_vars23 = ld `col.vars`;
  //   col_vars24 = force? col_vars23;
  //   checkMissing(col_vars24);
  //   return col_vars24;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2878520484_14, CCP, RHO);
  // r152 = dyn rev1(p16)
  SEXP Rsh_Fir_array_args264[1];
  Rsh_Fir_array_args264[0] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names81[1];
  Rsh_Fir_array_arg_names81[0] = R_MissingArg;
  Rsh_Fir_reg_r152_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rev1_, 1, Rsh_Fir_array_args264, Rsh_Fir_array_arg_names81, CCP, RHO);
  // check L303() else D99()
  // L303()
  goto L303_;

D99_:;
  // deopt 348 [r152]
  SEXP Rsh_Fir_array_deopt_stack84[1];
  Rsh_Fir_array_deopt_stack84[0] = Rsh_Fir_reg_r152_;
  Rsh_Fir_deopt(348, 1, Rsh_Fir_array_deopt_stack84, CCP, RHO);
  return R_NilValue;

L303_:;
  // c73 = ldf c in base
  Rsh_Fir_reg_c73_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r153 = dyn c73(r150, r152)
  SEXP Rsh_Fir_array_args265[2];
  Rsh_Fir_array_args265[0] = Rsh_Fir_reg_r150_;
  Rsh_Fir_array_args265[1] = Rsh_Fir_reg_r152_;
  SEXP Rsh_Fir_array_arg_names82[2];
  Rsh_Fir_array_arg_names82[0] = R_MissingArg;
  Rsh_Fir_array_arg_names82[1] = R_MissingArg;
  Rsh_Fir_reg_r153_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c73_, 2, Rsh_Fir_array_args265, Rsh_Fir_array_arg_names82, CCP, RHO);
  // check L304() else D100()
  // L304()
  goto L304_;

D100_:;
  // deopt 350 [r153]
  SEXP Rsh_Fir_array_deopt_stack85[1];
  Rsh_Fir_array_deopt_stack85[0] = Rsh_Fir_reg_r153_;
  Rsh_Fir_deopt(350, 1, Rsh_Fir_array_deopt_stack85, CCP, RHO);
  return R_NilValue;

L304_:;
  // goto L73(r153)
  // L73(r153)
  Rsh_Fir_reg_r148_ = Rsh_Fir_reg_r153_;
  goto L73_;

D101_:;
  // deopt 353 [r154]
  SEXP Rsh_Fir_array_deopt_stack86[1];
  Rsh_Fir_array_deopt_stack86[0] = Rsh_Fir_reg_r154_;
  Rsh_Fir_deopt(353, 1, Rsh_Fir_array_deopt_stack86, CCP, RHO);
  return R_NilValue;

L305_:;
  // goto L72(r154)
  // L72(r154)
  Rsh_Fir_reg_r146_ = Rsh_Fir_reg_r154_;
  goto L72_;

L306_:;
  // aperm = ldf aperm
  Rsh_Fir_reg_aperm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L307() else D102()
  // L307()
  goto L307_;

D102_:;
  // deopt 357 []
  Rsh_Fir_deopt(357, 0, NULL, CCP, RHO);
  return R_NilValue;

L307_:;
  // p17 = prom<V +>{
  //   x20 = ld x;
  //   x21 = force? x20;
  //   checkMissing(x21);
  //   return x21;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2878520484_15, CCP, RHO);
  // p18 = prom<V +>{
  //   perm = ld perm;
  //   perm1 = force? perm;
  //   checkMissing(perm1);
  //   return perm1;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2878520484_16, CCP, RHO);
  // r158 = dyn aperm(p17, p18)
  SEXP Rsh_Fir_array_args268[2];
  Rsh_Fir_array_args268[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args268[1] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names83[2];
  Rsh_Fir_array_arg_names83[0] = R_MissingArg;
  Rsh_Fir_array_arg_names83[1] = R_MissingArg;
  Rsh_Fir_reg_r158_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_aperm, 2, Rsh_Fir_array_args268, Rsh_Fir_array_arg_names83, CCP, RHO);
  // check L308() else D103()
  // L308()
  goto L308_;

D103_:;
  // deopt 360 [r158]
  SEXP Rsh_Fir_array_deopt_stack87[1];
  Rsh_Fir_array_deopt_stack87[0] = Rsh_Fir_reg_r158_;
  Rsh_Fir_deopt(360, 1, Rsh_Fir_array_deopt_stack87, CCP, RHO);
  return R_NilValue;

L308_:;
  // st x = r158
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r158_, RHO);
  (void)(Rsh_Fir_reg_r158_);
  // goto L75()
  // L75()
  goto L75_;

L310_:;
  // sym36 = ldf prod
  Rsh_Fir_reg_sym36_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base36 = ldf prod in base
  Rsh_Fir_reg_base36_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard36 = `==`.4(sym36, base36)
  SEXP Rsh_Fir_array_args269[2];
  Rsh_Fir_array_args269[0] = Rsh_Fir_reg_sym36_;
  Rsh_Fir_array_args269[1] = Rsh_Fir_reg_base36_;
  Rsh_Fir_reg_guard36_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args269);
  // if guard36 then L312() else L313()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard36_)) {
  // L312()
    goto L312_;
  } else {
  // L313()
    goto L313_;
  }

L311_:;
  // r160 = dyn base35(<lang prod(`[`(dx, row.vars))>, <lang prod(`[`(dx, col.vars))>)
  SEXP Rsh_Fir_array_args270[2];
  Rsh_Fir_array_args270[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args270[1] = Rsh_const(CCP, 67);
  SEXP Rsh_Fir_array_arg_names84[2];
  Rsh_Fir_array_arg_names84[0] = R_MissingArg;
  Rsh_Fir_array_arg_names84[1] = R_MissingArg;
  Rsh_Fir_reg_r160_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base35_, 2, Rsh_Fir_array_args270, Rsh_Fir_array_arg_names84, CCP, RHO);
  // goto L76(r160)
  // L76(r160)
  Rsh_Fir_reg_r161_ = Rsh_Fir_reg_r160_;
  goto L76_;

L312_:;
  // dx20 = ld dx
  Rsh_Fir_reg_dx20_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L314() else D104()
  // L314()
  goto L314_;

L313_:;
  // r162 = dyn base36(<lang `[`(dx, row.vars)>)
  SEXP Rsh_Fir_array_args271[1];
  Rsh_Fir_array_args271[0] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names85[1];
  Rsh_Fir_array_arg_names85[0] = R_MissingArg;
  Rsh_Fir_reg_r162_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base36_, 1, Rsh_Fir_array_args271, Rsh_Fir_array_arg_names85, CCP, RHO);
  // goto L77(r162)
  // L77(r162)
  Rsh_Fir_reg_r163_ = Rsh_Fir_reg_r162_;
  goto L77_;

D104_:;
  // deopt 368 [dx20]
  SEXP Rsh_Fir_array_deopt_stack88[1];
  Rsh_Fir_array_deopt_stack88[0] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_deopt(368, 1, Rsh_Fir_array_deopt_stack88, CCP, RHO);
  return R_NilValue;

L314_:;
  // dx21 = force? dx20
  Rsh_Fir_reg_dx21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dx20_);
  // checkMissing(dx21)
  SEXP Rsh_Fir_array_args272[1];
  Rsh_Fir_array_args272[0] = Rsh_Fir_reg_dx21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args272, Rsh_Fir_param_types_empty()));
  // c75 = `is.object`(dx21)
  SEXP Rsh_Fir_array_args273[1];
  Rsh_Fir_array_args273[0] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_reg_c75_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args273, Rsh_Fir_param_types_empty());
  // if c75 then L315() else L316(dx21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c75_)) {
  // L315()
    goto L315_;
  } else {
  // L316(dx21)
    Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx21_;
    goto L316_;
  }

L315_:;
  // dr10 = tryDispatchBuiltin.1("[", dx21)
  SEXP Rsh_Fir_array_args274[2];
  Rsh_Fir_array_args274[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args274[1] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args274);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args275[1];
  Rsh_Fir_array_args275[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args275, Rsh_Fir_param_types_empty());
  // if dc5 then L317() else L316(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L317()
    goto L317_;
  } else {
  // L316(dr10)
    Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dr10_;
    goto L316_;
  }

L316_:;
  // row_vars25 = ld `row.vars`
  Rsh_Fir_reg_row_vars25_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L318() else D105()
  // L318()
  goto L318_;

L317_:;
  // dx24 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args276[1];
  Rsh_Fir_array_args276[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args276, Rsh_Fir_param_types_empty());
  // goto L78(dx24)
  // L78(dx24)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L78_;

D105_:;
  // deopt 370 [dx23, row_vars25]
  SEXP Rsh_Fir_array_deopt_stack89[2];
  Rsh_Fir_array_deopt_stack89[0] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_deopt_stack89[1] = Rsh_Fir_reg_row_vars25_;
  Rsh_Fir_deopt(370, 2, Rsh_Fir_array_deopt_stack89, CCP, RHO);
  return R_NilValue;

L318_:;
  // row_vars26 = force? row_vars25
  Rsh_Fir_reg_row_vars26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_vars25_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r164 = dyn __5(dx23, row_vars26)
  SEXP Rsh_Fir_array_args277[2];
  Rsh_Fir_array_args277[0] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_args277[1] = Rsh_Fir_reg_row_vars26_;
  SEXP Rsh_Fir_array_arg_names86[2];
  Rsh_Fir_array_arg_names86[0] = R_MissingArg;
  Rsh_Fir_array_arg_names86[1] = R_MissingArg;
  Rsh_Fir_reg_r164_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args277, Rsh_Fir_array_arg_names86, CCP, RHO);
  // goto L78(r164)
  // L78(r164)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r164_;
  goto L78_;

D106_:;
  // deopt 374 [r165]
  SEXP Rsh_Fir_array_deopt_stack90[1];
  Rsh_Fir_array_deopt_stack90[0] = Rsh_Fir_reg_r165_;
  Rsh_Fir_deopt(374, 1, Rsh_Fir_array_deopt_stack90, CCP, RHO);
  return R_NilValue;

L319_:;
  // goto L77(r165)
  // L77(r165)
  Rsh_Fir_reg_r163_ = Rsh_Fir_reg_r165_;
  goto L77_;

L320_:;
  // dx26 = ld dx
  Rsh_Fir_reg_dx26_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L322() else D107()
  // L322()
  goto L322_;

L321_:;
  // r166 = dyn base37(<lang `[`(dx, col.vars)>)
  SEXP Rsh_Fir_array_args278[1];
  Rsh_Fir_array_args278[0] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names87[1];
  Rsh_Fir_array_arg_names87[0] = R_MissingArg;
  Rsh_Fir_reg_r166_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base37_, 1, Rsh_Fir_array_args278, Rsh_Fir_array_arg_names87, CCP, RHO);
  // goto L79(r166)
  // L79(r166)
  Rsh_Fir_reg_r167_ = Rsh_Fir_reg_r166_;
  goto L79_;

D107_:;
  // deopt 377 [dx26]
  SEXP Rsh_Fir_array_deopt_stack91[1];
  Rsh_Fir_array_deopt_stack91[0] = Rsh_Fir_reg_dx26_;
  Rsh_Fir_deopt(377, 1, Rsh_Fir_array_deopt_stack91, CCP, RHO);
  return R_NilValue;

L322_:;
  // dx27 = force? dx26
  Rsh_Fir_reg_dx27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dx26_);
  // checkMissing(dx27)
  SEXP Rsh_Fir_array_args279[1];
  Rsh_Fir_array_args279[0] = Rsh_Fir_reg_dx27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args279, Rsh_Fir_param_types_empty()));
  // c76 = `is.object`(dx27)
  SEXP Rsh_Fir_array_args280[1];
  Rsh_Fir_array_args280[0] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_reg_c76_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args280, Rsh_Fir_param_types_empty());
  // if c76 then L323() else L324(dx27)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c76_)) {
  // L323()
    goto L323_;
  } else {
  // L324(dx27)
    Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx27_;
    goto L324_;
  }

L323_:;
  // dr12 = tryDispatchBuiltin.1("[", dx27)
  SEXP Rsh_Fir_array_args281[2];
  Rsh_Fir_array_args281[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args281[1] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args281);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args282[1];
  Rsh_Fir_array_args282[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args282, Rsh_Fir_param_types_empty());
  // if dc6 then L325() else L324(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L325()
    goto L325_;
  } else {
  // L324(dr12)
    Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dr12_;
    goto L324_;
  }

L324_:;
  // col_vars25 = ld `col.vars`
  Rsh_Fir_reg_col_vars25_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L326() else D108()
  // L326()
  goto L326_;

L325_:;
  // dx30 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args283[1];
  Rsh_Fir_array_args283[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args283, Rsh_Fir_param_types_empty());
  // goto L80(dx30)
  // L80(dx30)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L80_;

D108_:;
  // deopt 379 [dx29, col_vars25]
  SEXP Rsh_Fir_array_deopt_stack92[2];
  Rsh_Fir_array_deopt_stack92[0] = Rsh_Fir_reg_dx29_;
  Rsh_Fir_array_deopt_stack92[1] = Rsh_Fir_reg_col_vars25_;
  Rsh_Fir_deopt(379, 2, Rsh_Fir_array_deopt_stack92, CCP, RHO);
  return R_NilValue;

L326_:;
  // col_vars26 = force? col_vars25
  Rsh_Fir_reg_col_vars26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_vars25_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r168 = dyn __6(dx29, col_vars26)
  SEXP Rsh_Fir_array_args284[2];
  Rsh_Fir_array_args284[0] = Rsh_Fir_reg_dx29_;
  Rsh_Fir_array_args284[1] = Rsh_Fir_reg_col_vars26_;
  SEXP Rsh_Fir_array_arg_names88[2];
  Rsh_Fir_array_arg_names88[0] = R_MissingArg;
  Rsh_Fir_array_arg_names88[1] = R_MissingArg;
  Rsh_Fir_reg_r168_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args284, Rsh_Fir_array_arg_names88, CCP, RHO);
  // goto L80(r168)
  // L80(r168)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r168_;
  goto L80_;

D109_:;
  // deopt 383 [r169]
  SEXP Rsh_Fir_array_deopt_stack93[1];
  Rsh_Fir_array_deopt_stack93[0] = Rsh_Fir_reg_r169_;
  Rsh_Fir_deopt(383, 1, Rsh_Fir_array_deopt_stack93, CCP, RHO);
  return R_NilValue;

L327_:;
  // goto L79(r169)
  // L79(r169)
  Rsh_Fir_reg_r167_ = Rsh_Fir_reg_r169_;
  goto L79_;

D110_:;
  // deopt 385 [r170]
  SEXP Rsh_Fir_array_deopt_stack94[1];
  Rsh_Fir_array_deopt_stack94[0] = Rsh_Fir_reg_r170_;
  Rsh_Fir_deopt(385, 1, Rsh_Fir_array_deopt_stack94, CCP, RHO);
  return R_NilValue;

L328_:;
  // goto L76(r170)
  // L76(r170)
  Rsh_Fir_reg_r161_ = Rsh_Fir_reg_r170_;
  goto L76_;

D111_:;
  // deopt 387 [r161, l, r161]
  SEXP Rsh_Fir_array_deopt_stack95[3];
  Rsh_Fir_array_deopt_stack95[0] = Rsh_Fir_reg_r161_;
  Rsh_Fir_array_deopt_stack95[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack95[2] = Rsh_Fir_reg_r161_;
  Rsh_Fir_deopt(387, 3, Rsh_Fir_array_deopt_stack95, CCP, RHO);
  return R_NilValue;

L329_:;
  // r171 = dyn dim__(l, NULL, r161)
  SEXP Rsh_Fir_array_args285[3];
  Rsh_Fir_array_args285[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args285[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args285[2] = Rsh_Fir_reg_r161_;
  SEXP Rsh_Fir_array_arg_names89[3];
  Rsh_Fir_array_arg_names89[0] = R_MissingArg;
  Rsh_Fir_array_arg_names89[1] = R_MissingArg;
  Rsh_Fir_array_arg_names89[2] = R_MissingArg;
  Rsh_Fir_reg_r171_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim__, 3, Rsh_Fir_array_args285, Rsh_Fir_array_arg_names89, CCP, RHO);
  // check L330() else D112()
  // L330()
  goto L330_;

D112_:;
  // deopt 389 [r161, r171]
  SEXP Rsh_Fir_array_deopt_stack96[2];
  Rsh_Fir_array_deopt_stack96[0] = Rsh_Fir_reg_r161_;
  Rsh_Fir_array_deopt_stack96[1] = Rsh_Fir_reg_r171_;
  Rsh_Fir_deopt(389, 2, Rsh_Fir_array_deopt_stack96, CCP, RHO);
  return R_NilValue;

L330_:;
  // st x = r171
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r171_, RHO);
  (void)(Rsh_Fir_reg_r171_);
  // dn8 = ld dn
  Rsh_Fir_reg_dn8_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L331() else D113()
  // L331()
  goto L331_;

D113_:;
  // deopt 391 [dn8]
  SEXP Rsh_Fir_array_deopt_stack97[1];
  Rsh_Fir_array_deopt_stack97[0] = Rsh_Fir_reg_dn8_;
  Rsh_Fir_deopt(391, 1, Rsh_Fir_array_deopt_stack97, CCP, RHO);
  return R_NilValue;

L331_:;
  // dn9 = force? dn8
  Rsh_Fir_reg_dn9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn8_);
  // checkMissing(dn9)
  SEXP Rsh_Fir_array_args286[1];
  Rsh_Fir_array_args286[0] = Rsh_Fir_reg_dn9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args286, Rsh_Fir_param_types_empty()));
  // c78 = `is.object`(dn9)
  SEXP Rsh_Fir_array_args287[1];
  Rsh_Fir_array_args287[0] = Rsh_Fir_reg_dn9_;
  Rsh_Fir_reg_c78_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args287, Rsh_Fir_param_types_empty());
  // if c78 then L332() else L333(dn9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c78_)) {
  // L332()
    goto L332_;
  } else {
  // L333(dn9)
    Rsh_Fir_reg_dn11_ = Rsh_Fir_reg_dn9_;
    goto L333_;
  }

L332_:;
  // dr14 = tryDispatchBuiltin.1("[", dn9)
  SEXP Rsh_Fir_array_args288[2];
  Rsh_Fir_array_args288[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args288[1] = Rsh_Fir_reg_dn9_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args288);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args289[1];
  Rsh_Fir_array_args289[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args289, Rsh_Fir_param_types_empty());
  // if dc7 then L334() else L333(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L334()
    goto L334_;
  } else {
  // L333(dr14)
    Rsh_Fir_reg_dn11_ = Rsh_Fir_reg_dr14_;
    goto L333_;
  }

L333_:;
  // row_vars27 = ld `row.vars`
  Rsh_Fir_reg_row_vars27_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L335() else D114()
  // L335()
  goto L335_;

L334_:;
  // dx32 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args290[1];
  Rsh_Fir_array_args290[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx32_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args290, Rsh_Fir_param_types_empty());
  // goto L81(dx32)
  // L81(dx32)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx32_;
  goto L81_;

D114_:;
  // deopt 393 [dn11, row_vars27]
  SEXP Rsh_Fir_array_deopt_stack98[2];
  Rsh_Fir_array_deopt_stack98[0] = Rsh_Fir_reg_dn11_;
  Rsh_Fir_array_deopt_stack98[1] = Rsh_Fir_reg_row_vars27_;
  Rsh_Fir_deopt(393, 2, Rsh_Fir_array_deopt_stack98, CCP, RHO);
  return R_NilValue;

L335_:;
  // row_vars28 = force? row_vars27
  Rsh_Fir_reg_row_vars28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_vars27_);
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r172 = dyn __7(dn11, row_vars28)
  SEXP Rsh_Fir_array_args291[2];
  Rsh_Fir_array_args291[0] = Rsh_Fir_reg_dn11_;
  Rsh_Fir_array_args291[1] = Rsh_Fir_reg_row_vars28_;
  SEXP Rsh_Fir_array_arg_names90[2];
  Rsh_Fir_array_arg_names90[0] = R_MissingArg;
  Rsh_Fir_array_arg_names90[1] = R_MissingArg;
  Rsh_Fir_reg_r172_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args291, Rsh_Fir_array_arg_names90, CCP, RHO);
  // goto L81(r172)
  // L81(r172)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_r172_;
  goto L81_;

D115_:;
  // deopt 397 [dx33, l1, dx33]
  SEXP Rsh_Fir_array_deopt_stack99[3];
  Rsh_Fir_array_deopt_stack99[0] = Rsh_Fir_reg_dx33_;
  Rsh_Fir_array_deopt_stack99[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack99[2] = Rsh_Fir_reg_dx33_;
  Rsh_Fir_deopt(397, 3, Rsh_Fir_array_deopt_stack99, CCP, RHO);
  return R_NilValue;

L336_:;
  // r173 = dyn attr__(l1, NULL, "row.vars", dx33)
  SEXP Rsh_Fir_array_args292[4];
  Rsh_Fir_array_args292[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args292[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args292[2] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args292[3] = Rsh_Fir_reg_dx33_;
  SEXP Rsh_Fir_array_arg_names91[4];
  Rsh_Fir_array_arg_names91[0] = R_MissingArg;
  Rsh_Fir_array_arg_names91[1] = R_MissingArg;
  Rsh_Fir_array_arg_names91[2] = R_MissingArg;
  Rsh_Fir_array_arg_names91[3] = R_MissingArg;
  Rsh_Fir_reg_r173_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args292, Rsh_Fir_array_arg_names91, CCP, RHO);
  // check L337() else D116()
  // L337()
  goto L337_;

D116_:;
  // deopt 400 [dx33, r173]
  SEXP Rsh_Fir_array_deopt_stack100[2];
  Rsh_Fir_array_deopt_stack100[0] = Rsh_Fir_reg_dx33_;
  Rsh_Fir_array_deopt_stack100[1] = Rsh_Fir_reg_r173_;
  Rsh_Fir_deopt(400, 2, Rsh_Fir_array_deopt_stack100, CCP, RHO);
  return R_NilValue;

L337_:;
  // st x = r173
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r173_, RHO);
  (void)(Rsh_Fir_reg_r173_);
  // dn12 = ld dn
  Rsh_Fir_reg_dn12_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L338() else D117()
  // L338()
  goto L338_;

D117_:;
  // deopt 402 [dn12]
  SEXP Rsh_Fir_array_deopt_stack101[1];
  Rsh_Fir_array_deopt_stack101[0] = Rsh_Fir_reg_dn12_;
  Rsh_Fir_deopt(402, 1, Rsh_Fir_array_deopt_stack101, CCP, RHO);
  return R_NilValue;

L338_:;
  // dn13 = force? dn12
  Rsh_Fir_reg_dn13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn12_);
  // checkMissing(dn13)
  SEXP Rsh_Fir_array_args293[1];
  Rsh_Fir_array_args293[0] = Rsh_Fir_reg_dn13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args293, Rsh_Fir_param_types_empty()));
  // c79 = `is.object`(dn13)
  SEXP Rsh_Fir_array_args294[1];
  Rsh_Fir_array_args294[0] = Rsh_Fir_reg_dn13_;
  Rsh_Fir_reg_c79_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args294, Rsh_Fir_param_types_empty());
  // if c79 then L339() else L340(dn13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c79_)) {
  // L339()
    goto L339_;
  } else {
  // L340(dn13)
    Rsh_Fir_reg_dn15_ = Rsh_Fir_reg_dn13_;
    goto L340_;
  }

L339_:;
  // dr16 = tryDispatchBuiltin.1("[", dn13)
  SEXP Rsh_Fir_array_args295[2];
  Rsh_Fir_array_args295[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args295[1] = Rsh_Fir_reg_dn13_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args295);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args296[1];
  Rsh_Fir_array_args296[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args296, Rsh_Fir_param_types_empty());
  // if dc8 then L341() else L340(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L341()
    goto L341_;
  } else {
  // L340(dr16)
    Rsh_Fir_reg_dn15_ = Rsh_Fir_reg_dr16_;
    goto L340_;
  }

L340_:;
  // col_vars27 = ld `col.vars`
  Rsh_Fir_reg_col_vars27_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L342() else D118()
  // L342()
  goto L342_;

L341_:;
  // dx34 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args297[1];
  Rsh_Fir_array_args297[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args297, Rsh_Fir_param_types_empty());
  // goto L82(dx34)
  // L82(dx34)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx34_;
  goto L82_;

D118_:;
  // deopt 404 [dn15, col_vars27]
  SEXP Rsh_Fir_array_deopt_stack102[2];
  Rsh_Fir_array_deopt_stack102[0] = Rsh_Fir_reg_dn15_;
  Rsh_Fir_array_deopt_stack102[1] = Rsh_Fir_reg_col_vars27_;
  Rsh_Fir_deopt(404, 2, Rsh_Fir_array_deopt_stack102, CCP, RHO);
  return R_NilValue;

L342_:;
  // col_vars28 = force? col_vars27
  Rsh_Fir_reg_col_vars28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_vars27_);
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r174 = dyn __8(dn15, col_vars28)
  SEXP Rsh_Fir_array_args298[2];
  Rsh_Fir_array_args298[0] = Rsh_Fir_reg_dn15_;
  Rsh_Fir_array_args298[1] = Rsh_Fir_reg_col_vars28_;
  SEXP Rsh_Fir_array_arg_names92[2];
  Rsh_Fir_array_arg_names92[0] = R_MissingArg;
  Rsh_Fir_array_arg_names92[1] = R_MissingArg;
  Rsh_Fir_reg_r174_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args298, Rsh_Fir_array_arg_names92, CCP, RHO);
  // goto L82(r174)
  // L82(r174)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_r174_;
  goto L82_;

D119_:;
  // deopt 408 [dx35, l2, dx35]
  SEXP Rsh_Fir_array_deopt_stack103[3];
  Rsh_Fir_array_deopt_stack103[0] = Rsh_Fir_reg_dx35_;
  Rsh_Fir_array_deopt_stack103[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack103[2] = Rsh_Fir_reg_dx35_;
  Rsh_Fir_deopt(408, 3, Rsh_Fir_array_deopt_stack103, CCP, RHO);
  return R_NilValue;

L343_:;
  // r175 = dyn attr__1(l2, NULL, "col.vars", dx35)
  SEXP Rsh_Fir_array_args299[4];
  Rsh_Fir_array_args299[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args299[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args299[2] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args299[3] = Rsh_Fir_reg_dx35_;
  SEXP Rsh_Fir_array_arg_names93[4];
  Rsh_Fir_array_arg_names93[0] = R_MissingArg;
  Rsh_Fir_array_arg_names93[1] = R_MissingArg;
  Rsh_Fir_array_arg_names93[2] = R_MissingArg;
  Rsh_Fir_array_arg_names93[3] = R_MissingArg;
  Rsh_Fir_reg_r175_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__1_, 4, Rsh_Fir_array_args299, Rsh_Fir_array_arg_names93, CCP, RHO);
  // check L344() else D120()
  // L344()
  goto L344_;

D120_:;
  // deopt 411 [dx35, r175]
  SEXP Rsh_Fir_array_deopt_stack104[2];
  Rsh_Fir_array_deopt_stack104[0] = Rsh_Fir_reg_dx35_;
  Rsh_Fir_array_deopt_stack104[1] = Rsh_Fir_reg_r175_;
  Rsh_Fir_deopt(411, 2, Rsh_Fir_array_deopt_stack104, CCP, RHO);
  return R_NilValue;

L344_:;
  // st x = r175
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r175_, RHO);
  (void)(Rsh_Fir_reg_r175_);
  // l3 = ld x
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 72), RHO);
  // check L345() else D121()
  // L345()
  goto L345_;

D121_:;
  // deopt 416 ["ftable", l3, "ftable"]
  SEXP Rsh_Fir_array_deopt_stack105[3];
  Rsh_Fir_array_deopt_stack105[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_deopt_stack105[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack105[2] = Rsh_const(CCP, 40);
  Rsh_Fir_deopt(416, 3, Rsh_Fir_array_deopt_stack105, CCP, RHO);
  return R_NilValue;

L345_:;
  // r176 = dyn class__(l3, NULL, "ftable")
  SEXP Rsh_Fir_array_args300[3];
  Rsh_Fir_array_args300[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args300[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args300[2] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names94[3];
  Rsh_Fir_array_arg_names94[0] = R_MissingArg;
  Rsh_Fir_array_arg_names94[1] = R_MissingArg;
  Rsh_Fir_array_arg_names94[2] = R_MissingArg;
  Rsh_Fir_reg_r176_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args300, Rsh_Fir_array_arg_names94, CCP, RHO);
  // check L346() else D122()
  // L346()
  goto L346_;

D122_:;
  // deopt 418 ["ftable", r176]
  SEXP Rsh_Fir_array_deopt_stack106[2];
  Rsh_Fir_array_deopt_stack106[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_deopt_stack106[1] = Rsh_Fir_reg_r176_;
  Rsh_Fir_deopt(418, 2, Rsh_Fir_array_deopt_stack106, CCP, RHO);
  return R_NilValue;

L346_:;
  // st x = r176
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r176_, RHO);
  (void)(Rsh_Fir_reg_r176_);
  // x22 = ld x
  Rsh_Fir_reg_x22_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L347() else D123()
  // L347()
  goto L347_;

D123_:;
  // deopt 420 [x22]
  SEXP Rsh_Fir_array_deopt_stack107[1];
  Rsh_Fir_array_deopt_stack107[0] = Rsh_Fir_reg_x22_;
  Rsh_Fir_deopt(420, 1, Rsh_Fir_array_deopt_stack107, CCP, RHO);
  return R_NilValue;

L347_:;
  // x23 = force? x22
  Rsh_Fir_reg_x23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x22_);
  // checkMissing(x23)
  SEXP Rsh_Fir_array_args301[1];
  Rsh_Fir_array_args301[0] = Rsh_Fir_reg_x23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args301, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x23
  return Rsh_Fir_reg_x23_;
}
SEXP Rsh_Fir_user_promise_inner2878520484_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
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
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn c(NA_LGL, NA_REAL)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(NA_LGL, NA_REAL)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2878520484_1(SEXP CCP, SEXP RHO) {
  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // return x3
  return Rsh_Fir_reg_x3_;
}
SEXP Rsh_Fir_user_promise_inner2878520484_2(SEXP CCP, SEXP RHO) {
  // exclude1 = ld exclude
  Rsh_Fir_reg_exclude1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // exclude2 = force? exclude1
  Rsh_Fir_reg_exclude2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exclude1_);
  // checkMissing(exclude2)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_exclude2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // return exclude2
  return Rsh_Fir_reg_exclude2_;
}
SEXP Rsh_Fir_user_promise_inner2878520484_3(SEXP CCP, SEXP RHO) {
  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // return x11
  return Rsh_Fir_reg_x11_;
}
SEXP Rsh_Fir_user_promise_inner2878520484_4(SEXP CCP, SEXP RHO) {
  // exclude3 = ld exclude
  Rsh_Fir_reg_exclude3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // exclude4 = force? exclude3
  Rsh_Fir_reg_exclude4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exclude3_);
  // checkMissing(exclude4)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_exclude4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // return exclude4
  return Rsh_Fir_reg_exclude4_;
}
SEXP Rsh_Fir_user_promise_inner2878520484_5(SEXP CCP, SEXP RHO) {
  // row_vars5 = ld `row.vars`
  Rsh_Fir_reg_row_vars5_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // row_vars6 = force? row_vars5
  Rsh_Fir_reg_row_vars6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_vars5_);
  // checkMissing(row_vars6)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_row_vars6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // return row_vars6
  return Rsh_Fir_reg_row_vars6_;
}
SEXP Rsh_Fir_user_promise_inner2878520484_6(SEXP CCP, SEXP RHO) {
  // sym13 = ldf names
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base13 = ldf names in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args121);
  // if guard13 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r55
  return Rsh_Fir_reg_r55_;

L1_:;
  // dn = ld dn
  Rsh_Fir_reg_dn = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // dn1 = force? dn
  Rsh_Fir_reg_dn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn);
  // checkMissing(dn1)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r56 = dyn names(dn1)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dn1_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L0(r56)
  // L0(r56)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r56_;
  goto L0_;

L2_:;
  // r54 = dyn base13(<sym dn>)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L0(r54)
  // L0(r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2878520484_7(SEXP CCP, SEXP RHO) {
  // col_vars5 = ld `col.vars`
  Rsh_Fir_reg_col_vars5_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // col_vars6 = force? col_vars5
  Rsh_Fir_reg_col_vars6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_vars5_);
  // checkMissing(col_vars6)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_col_vars6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // return col_vars6
  return Rsh_Fir_reg_col_vars6_;
}
SEXP Rsh_Fir_user_promise_inner2878520484_8(SEXP CCP, SEXP RHO) {
  // sym18 = ldf names
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base18 = ldf names in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args149);
  // if guard18 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r78
  return Rsh_Fir_reg_r78_;

L1_:;
  // dn2 = ld dn
  Rsh_Fir_reg_dn2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // dn3 = force? dn2
  Rsh_Fir_reg_dn3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn2_);
  // checkMissing(dn3)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_dn3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r79 = dyn names1(dn3)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_dn3_;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L0(r79)
  // L0(r79)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r79_;
  goto L0_;

L2_:;
  // r77 = dyn base18(<sym dn>)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L0(r77)
  // L0(r77)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r77_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2878520484_9(SEXP CCP, SEXP RHO) {
  // sym23 = ldf c
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base23 = ldf c in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args179[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args179);
  // if guard23 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r102
  return Rsh_Fir_reg_r102_;

L1_:;
  // row_vars13 = ld `row.vars`
  Rsh_Fir_reg_row_vars13_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // row_vars14 = force? row_vars13
  Rsh_Fir_reg_row_vars14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_vars13_);
  // checkMissing(row_vars14)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_row_vars14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty()));
  // col_vars13 = ld `col.vars`
  Rsh_Fir_reg_col_vars13_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // col_vars14 = force? col_vars13
  Rsh_Fir_reg_col_vars14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_vars13_);
  // checkMissing(col_vars14)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_col_vars14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty()));
  // c60 = ldf c in base
  Rsh_Fir_reg_c60_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r103 = dyn c60(row_vars14, col_vars14)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_row_vars14_;
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_col_vars14_;
  SEXP Rsh_Fir_array_arg_names55[2];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c60_, 2, Rsh_Fir_array_args182, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L0(r103)
  // L0(r103)
  Rsh_Fir_reg_r102_ = Rsh_Fir_reg_r103_;
  goto L0_;

L2_:;
  // r101 = dyn base23(<sym row.vars>, <sym col.vars>)
  SEXP Rsh_Fir_array_args183[2];
  Rsh_Fir_array_args183[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args183[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names56[2];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 2, Rsh_Fir_array_args183, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L0(r101)
  // L0(r101)
  Rsh_Fir_reg_r102_ = Rsh_Fir_reg_r101_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2878520484_10(SEXP CCP, SEXP RHO) {
  // x16 = ld x
  Rsh_Fir_reg_x16_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // x17 = force? x16
  Rsh_Fir_reg_x17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x16_);
  // checkMissing(x17)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_x17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args194, Rsh_Fir_param_types_empty()));
  // return x17
  return Rsh_Fir_reg_x17_;
}
SEXP Rsh_Fir_user_promise_inner2878520484_11(SEXP CCP, SEXP RHO) {
  // all_vars2 = ld `all.vars`
  Rsh_Fir_reg_all_vars2_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // all_vars3 = force? all_vars2
  Rsh_Fir_reg_all_vars3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all_vars2_);
  // checkMissing(all_vars3)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_all_vars3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty()));
  // return all_vars3
  return Rsh_Fir_reg_all_vars3_;
}
SEXP Rsh_Fir_user_promise_inner2878520484_12(SEXP CCP, SEXP RHO) {
  // sum = ld sum
  Rsh_Fir_reg_sum = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // sum1 = force? sum
  Rsh_Fir_reg_sum1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sum);
  // checkMissing(sum1)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_sum1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty()));
  // return sum1
  return Rsh_Fir_reg_sum1_;
}
SEXP Rsh_Fir_user_promise_inner2878520484_13(SEXP CCP, SEXP RHO) {
  // row_vars23 = ld `row.vars`
  Rsh_Fir_reg_row_vars23_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // row_vars24 = force? row_vars23
  Rsh_Fir_reg_row_vars24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_row_vars23_);
  // checkMissing(row_vars24)
  SEXP Rsh_Fir_array_args261[1];
  Rsh_Fir_array_args261[0] = Rsh_Fir_reg_row_vars24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args261, Rsh_Fir_param_types_empty()));
  // return row_vars24
  return Rsh_Fir_reg_row_vars24_;
}
SEXP Rsh_Fir_user_promise_inner2878520484_14(SEXP CCP, SEXP RHO) {
  // col_vars23 = ld `col.vars`
  Rsh_Fir_reg_col_vars23_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // col_vars24 = force? col_vars23
  Rsh_Fir_reg_col_vars24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col_vars23_);
  // checkMissing(col_vars24)
  SEXP Rsh_Fir_array_args263[1];
  Rsh_Fir_array_args263[0] = Rsh_Fir_reg_col_vars24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args263, Rsh_Fir_param_types_empty()));
  // return col_vars24
  return Rsh_Fir_reg_col_vars24_;
}
SEXP Rsh_Fir_user_promise_inner2878520484_15(SEXP CCP, SEXP RHO) {
  // x20 = ld x
  Rsh_Fir_reg_x20_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // x21 = force? x20
  Rsh_Fir_reg_x21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x20_);
  // checkMissing(x21)
  SEXP Rsh_Fir_array_args266[1];
  Rsh_Fir_array_args266[0] = Rsh_Fir_reg_x21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args266, Rsh_Fir_param_types_empty()));
  // return x21
  return Rsh_Fir_reg_x21_;
}
SEXP Rsh_Fir_user_promise_inner2878520484_16(SEXP CCP, SEXP RHO) {
  // perm = ld perm
  Rsh_Fir_reg_perm = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // perm1 = force? perm
  Rsh_Fir_reg_perm1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_perm);
  // checkMissing(perm1)
  SEXP Rsh_Fir_array_args267[1];
  Rsh_Fir_array_args267[0] = Rsh_Fir_reg_perm1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args267, Rsh_Fir_param_types_empty()));
  // return perm1
  return Rsh_Fir_reg_perm1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
