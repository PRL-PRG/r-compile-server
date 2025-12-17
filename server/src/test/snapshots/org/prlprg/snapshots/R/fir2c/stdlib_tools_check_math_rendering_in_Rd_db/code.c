#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4044830143_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4044830143_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4044830143_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4044830143_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4044830143_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4044830143_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4044830143_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4044830143_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4044830143_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4044830143_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4044830143_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4044830143_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4044830143_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4044830143_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4044830143_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4044830143_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4044830143_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4044830143_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4044830143_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4044830143_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4044830143_18(SEXP CCP, SEXP RHO);
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
  // r = clos inner4044830143
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4044830143_, RHO, CCP);
  // st check_math_rendering_in_Rd_db = r
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
SEXP Rsh_Fir_user_function_inner4044830143_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4044830143 dynamic dispatch ([db, eq, katex])

  return Rsh_Fir_user_version_inner4044830143_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4044830143_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4044830143 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner4044830143/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_db;  // db
  SEXP Rsh_Fir_reg_eq;  // eq
  SEXP Rsh_Fir_reg_katex;  // katex
  SEXP Rsh_Fir_reg_eq_isMissing;  // eq_isMissing
  SEXP Rsh_Fir_reg_eq_orDefault;  // eq_orDefault
  SEXP Rsh_Fir_reg_katex_isMissing;  // katex_isMissing
  SEXP Rsh_Fir_reg_katex_orDefault;  // katex_orDefault
  SEXP Rsh_Fir_reg__make_KaTeX_checker;  // _make_KaTeX_checker
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_eq1_;  // eq1
  SEXP Rsh_Fir_reg_eq2_;  // eq2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg__Rd_get_equations_from_Rd_db;  // _Rd_get_equations_from_Rd_db
  SEXP Rsh_Fir_reg_db1_;  // db1
  SEXP Rsh_Fir_reg_db2_;  // db2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_matrix;  // matrix
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_eq3_;  // eq3
  SEXP Rsh_Fir_reg_eq4_;  // eq4
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_katex1_;  // katex1
  SEXP Rsh_Fir_reg_katex2_;  // katex2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_vapply;  // vapply
  SEXP Rsh_Fir_reg_results;  // results
  SEXP Rsh_Fir_reg_results1_;  // results1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_msg;  // msg
  SEXP Rsh_Fir_reg_msg1_;  // msg1
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_ind;  // ind
  SEXP Rsh_Fir_reg_ind1_;  // ind1
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_msg2_;  // msg2
  SEXP Rsh_Fir_reg_msg3_;  // msg3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_msg5_;  // msg5
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_ind2_;  // ind2
  SEXP Rsh_Fir_reg_ind3_;  // ind3
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sub;  // sub
  SEXP Rsh_Fir_reg_msg6_;  // msg6
  SEXP Rsh_Fir_reg_msg7_;  // msg7
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sub1_;  // sub1
  SEXP Rsh_Fir_reg_msg8_;  // msg8
  SEXP Rsh_Fir_reg_msg9_;  // msg9
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_gsub;  // gsub
  SEXP Rsh_Fir_reg_msg10_;  // msg10
  SEXP Rsh_Fir_reg_msg11_;  // msg11
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_gsub1_;  // gsub1
  SEXP Rsh_Fir_reg_msg12_;  // msg12
  SEXP Rsh_Fir_reg_msg13_;  // msg13
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_eq7_;  // eq7
  SEXP Rsh_Fir_reg_eq8_;  // eq8
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_eq10_;  // eq10
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_ind4_;  // ind4
  SEXP Rsh_Fir_reg_ind5_;  // ind5
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_eq11_;  // eq11
  SEXP Rsh_Fir_reg_eq12_;  // eq12
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_eq14_;  // eq14
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_ind6_;  // ind6
  SEXP Rsh_Fir_reg_ind7_;  // ind7
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_tst;  // tst
  SEXP Rsh_Fir_reg_tst1_;  // tst1
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_pos;  // pos
  SEXP Rsh_Fir_reg_pos1_;  // pos1
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_which;  // which
  SEXP Rsh_Fir_reg_pos2_;  // pos2
  SEXP Rsh_Fir_reg_pos3_;  // pos3
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_pos4_;  // pos4
  SEXP Rsh_Fir_reg_pos5_;  // pos5
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_pos6_;  // pos6
  SEXP Rsh_Fir_reg_pos7_;  // pos7
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_which1_;  // which1
  SEXP Rsh_Fir_reg_tst2_;  // tst2
  SEXP Rsh_Fir_reg_tst3_;  // tst3
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_tst5_;  // tst5
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_pos8_;  // pos8
  SEXP Rsh_Fir_reg_pos9_;  // pos9
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_paste1_;  // paste1
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_l16_;  // l16
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_l18_;  // l18
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_pos10_;  // pos10
  SEXP Rsh_Fir_reg_pos11_;  // pos11
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_l19_;  // l19
  SEXP Rsh_Fir_reg_l20_;  // l20
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_l22_;  // l22
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_pos12_;  // pos12
  SEXP Rsh_Fir_reg_pos13_;  // pos13
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_l23_;  // l23
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_l25_;  // l25
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_pos14_;  // pos14
  SEXP Rsh_Fir_reg_pos15_;  // pos15
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_cbind;  // cbind
  SEXP Rsh_Fir_reg_eq15_;  // eq15
  SEXP Rsh_Fir_reg_eq16_;  // eq16
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_eq18_;  // eq18
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_ind8_;  // ind8
  SEXP Rsh_Fir_reg_ind9_;  // ind9
  SEXP Rsh_Fir_reg___10_;  // __10
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_l26_;  // l26
  SEXP Rsh_Fir_reg_l27_;  // l27
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_msg14_;  // msg14
  SEXP Rsh_Fir_reg_msg15_;  // msg15
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_l28_;  // l28
  SEXP Rsh_Fir_reg_colnames__;  // colnames__
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_out;  // out
  SEXP Rsh_Fir_reg_out1_;  // out1

  // Bind parameters
  Rsh_Fir_reg_db = PARAMS[0];
  Rsh_Fir_reg_eq = PARAMS[1];
  Rsh_Fir_reg_katex = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st db = db
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_db, RHO);
  (void)(Rsh_Fir_reg_db);
  // eq_isMissing = missing.0(eq)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_eq;
  Rsh_Fir_reg_eq_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if eq_isMissing then L0(NULL) else L0(eq)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_eq_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_eq_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(eq)
    Rsh_Fir_reg_eq_orDefault = Rsh_Fir_reg_eq;
    goto L0_;
  }

L0_:;
  // st eq = eq_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_eq_orDefault, RHO);
  (void)(Rsh_Fir_reg_eq_orDefault);
  // katex_isMissing = missing.0(katex)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_katex;
  Rsh_Fir_reg_katex_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if katex_isMissing then L1() else L2(katex)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_katex_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(katex)
    Rsh_Fir_reg_katex_orDefault = Rsh_Fir_reg_katex;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   _make_KaTeX_checker = ldf `.make_KaTeX_checker`;
  //   r = dyn _make_KaTeX_checker();
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4044830143_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_katex_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st katex = katex_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_katex_orDefault, RHO);
  (void)(Rsh_Fir_reg_katex_orDefault);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L3_:;
  // c1 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c1 then L21() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L21()
    goto L21_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L25() else D3()
  // L25()
  goto L25_;

L6_:;
  // st ind = r18
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // sym2 = ldf any
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf any in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard2 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L7_:;
  // c3 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c3 then L39() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L39()
    goto L39_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L16()
  // L16()
  goto L16_;

L9_:;
  // st msg = dx3
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sub = ldf sub
  Rsh_Fir_reg_sub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L45() else D15()
  // L45()
  goto L45_;

L10_:;
  // st l1 = dx5
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // eq11 = ld eq
  Rsh_Fir_reg_eq11_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L58() else D25()
  // L58()
  goto L58_;

L11_:;
  // st l2 = dx7
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // l1 = ld l1
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L63() else D27()
  // L63()
  goto L63_;

L12_:;
  // st pos = r36
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r36_, RHO);
  (void)(Rsh_Fir_reg_r36_);
  // l5 = ld l1
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // c7 = `is.object`(l5)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c7 then L69() else L70("", l5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L69()
    goto L69_;
  } else {
  // L70("", l5)
    Rsh_Fir_reg_r39_ = Rsh_const(CCP, 15);
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    goto L70_;
  }

L13_:;
  // st l1 = dx9
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // which = ldf which
  Rsh_Fir_reg_which = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L73() else D32()
  // L73()
  goto L73_;

L14_:;
  // st l1 = dx13
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // which1 = ldf which
  Rsh_Fir_reg_which1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L81() else D37()
  // L81()
  goto L81_;

L15_:;
  // st l1 = dx21
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // cbind = ldf cbind
  Rsh_Fir_reg_cbind = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L89() else D42()
  // L89()
  goto L89_;

L16_:;
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard4 then L92() else L93()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L92()
    goto L92_;
  } else {
  // L93()
    goto L93_;
  }

L17_:;
  // l28 = ld out
  Rsh_Fir_reg_l28_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // colnames__ = ldf `colnames<-`
  Rsh_Fir_reg_colnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L95() else D45()
  // L95()
  goto L95_;

L18_:;
  // eq1 = ld eq
  Rsh_Fir_reg_eq1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L20() else D0()
  // L20()
  goto L20_;

L19_:;
  // r2 = dyn base(<sym eq>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L3_;

D0_:;
  // deopt 1 [eq1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_eq1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L20_:;
  // eq2 = force? eq1
  Rsh_Fir_reg_eq2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eq1_);
  // checkMissing(eq2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_eq2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // c = `==`(eq2, NULL)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_eq2_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L3(c)
  // L3(c)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_c;
  goto L3_;

L21_:;
  // _Rd_get_equations_from_Rd_db = ldf `.Rd_get_equations_from_Rd_db`
  Rsh_Fir_reg__Rd_get_equations_from_Rd_db = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L22() else D1()
  // L22()
  goto L22_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p1 = prom<V +>{
  //   db1 = ld db;
  //   db2 = force? db1;
  //   checkMissing(db2);
  //   return db2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4044830143_1, CCP, RHO);
  // r5 = dyn _Rd_get_equations_from_Rd_db(p1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__Rd_get_equations_from_Rd_db, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L23() else D2()
  // L23()
  goto L23_;

D2_:;
  // deopt 7 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L23_:;
  // st eq = r5
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // goto L5()
  // L5()
  goto L5_;

D3_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // p2 = prom<V +>{
  //   character = ldf character;
  //   r7 = dyn character();
  //   return r7;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4044830143_2, CCP, RHO);
  // r9 = dyn matrix(p2, 0, 3)
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L26() else D4()
  // L26()
  goto L26_;

D4_:;
  // deopt 16 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L26_:;
  // st out = r9
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L27() else D5()
  // L27()
  goto L27_;

D5_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // p3 = prom<V +>{
  //   eq3 = ld eq;
  //   eq4 = force? eq3;
  //   checkMissing(eq4);
  //   c2 = `is.object`(eq4);
  //   if c2 then L1() else L2();
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", eq4);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2();
  // L2():
  //   __ = ldf `[` in base;
  //   r10 = dyn __(eq4, <missing>, 3);
  //   goto L0(r10);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4044830143_3, CCP, RHO);
  // p4 = prom<V +>{
  //   katex1 = ld katex;
  //   katex2 = force? katex1;
  //   checkMissing(katex2);
  //   return katex2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4044830143_4, CCP, RHO);
  // r13 = dyn lapply(p3, p4)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L28() else D6()
  // L28()
  goto L28_;

D6_:;
  // deopt 22 [r13]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L28_:;
  // st results = r13
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L29() else D7()
  // L29()
  goto L29_;

D7_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // p5 = prom<V +>{
  //   results = ld results;
  //   results1 = force? results;
  //   checkMissing(results1);
  //   return results1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4044830143_5, CCP, RHO);
  // p6 = prom<V +>{
  //   __1 = ld `[[`;
  //   __2 = force? __1;
  //   checkMissing(__2);
  //   return __2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4044830143_6, CCP, RHO);
  // r16 = dyn vapply(p5, p6, "", "error")
  SEXP Rsh_Fir_array_args24[4];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args24[3] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names5[4];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 4, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L30() else D8()
  // L30()
  goto L30_;

D8_:;
  // deopt 30 [r16]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L30_:;
  // st msg = r16
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // sym1 = ldf nzchar
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base1 = ldf nzchar in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard1 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L31_:;
  // msg = ld msg
  Rsh_Fir_reg_msg = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L33() else D9()
  // L33()
  goto L33_;

L32_:;
  // r17 = dyn base1(<sym msg>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L6(r17)
  // L6(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L6_;

D9_:;
  // deopt 34 [msg]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_msg;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L33_:;
  // msg1 = force? msg
  Rsh_Fir_reg_msg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg);
  // checkMissing(msg1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_msg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r19 = dyn nzchar(msg1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_msg1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L34() else D10()
  // L34()
  goto L34_;

D10_:;
  // deopt 37 [r19]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L34_:;
  // goto L6(r19)
  // L6(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L6_;

L35_:;
  // ind = ld ind
  Rsh_Fir_reg_ind = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L37() else D11()
  // L37()
  goto L37_;

L36_:;
  // r20 = dyn base2(<sym ind>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L7(r20)
  // L7(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L7_;

D11_:;
  // deopt 41 [ind]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_ind;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L37_:;
  // ind1 = force? ind
  Rsh_Fir_reg_ind1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind);
  // checkMissing(ind1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_ind1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r22 = dyn any(ind1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_ind1_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L38() else D12()
  // L38()
  goto L38_;

D12_:;
  // deopt 44 [r22]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L7(r22)
  // L7(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L7_;

L39_:;
  // msg2 = ld msg
  Rsh_Fir_reg_msg2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L40() else D13()
  // L40()
  goto L40_;

D13_:;
  // deopt 45 [msg2]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_msg2_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L40_:;
  // msg3 = force? msg2
  Rsh_Fir_reg_msg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg2_);
  // checkMissing(msg3)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_msg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(msg3)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_msg3_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c4 then L41() else L42(msg3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L41()
    goto L41_;
  } else {
  // L42(msg3)
    Rsh_Fir_reg_msg5_ = Rsh_Fir_reg_msg3_;
    goto L42_;
  }

L41_:;
  // dr2 = tryDispatchBuiltin.1("[", msg3)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_msg3_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args34);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if dc1 then L43() else L42(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L43()
    goto L43_;
  } else {
  // L42(dr2)
    Rsh_Fir_reg_msg5_ = Rsh_Fir_reg_dr2_;
    goto L42_;
  }

L42_:;
  // ind2 = ld ind
  Rsh_Fir_reg_ind2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L44() else D14()
  // L44()
  goto L44_;

L43_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L9(dx2)
  // L9(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L9_;

D14_:;
  // deopt 47 [msg5, ind2]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_msg5_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_ind2_;
  Rsh_Fir_deopt(47, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L44_:;
  // ind3 = force? ind2
  Rsh_Fir_reg_ind3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind2_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r23 = dyn __3(msg5, ind3)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_msg5_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_ind3_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L9(r23)
  // L9(r23)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r23_;
  goto L9_;

D15_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L45_:;
  // p7 = prom<V +>{
  //   msg6 = ld msg;
  //   msg7 = force? msg6;
  //   checkMissing(msg7);
  //   return msg7;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4044830143_7, CCP, RHO);
  // r25 = dyn sub("^KaTeX parse error: (.*) at position.*:", "\\1 in", p7)
  SEXP Rsh_Fir_array_args39[3];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args39[2] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sub, 3, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L46() else D16()
  // L46()
  goto L46_;

D16_:;
  // deopt 56 [r25]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L46_:;
  // st msg = r25
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // sub1 = ldf sub
  Rsh_Fir_reg_sub1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L47() else D17()
  // L47()
  goto L47_;

D17_:;
  // deopt 59 []
  Rsh_Fir_deopt(59, 0, NULL, CCP, RHO);
  return R_NilValue;

L47_:;
  // p8 = prom<V +>{
  //   msg8 = ld msg;
  //   msg9 = force? msg8;
  //   checkMissing(msg9);
  //   return msg9;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4044830143_8, CCP, RHO);
  // r27 = dyn sub1("^KaTeX parse error: ", "", p8)
  SEXP Rsh_Fir_array_args41[3];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args41[2] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sub1_, 3, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L48() else D18()
  // L48()
  goto L48_;

D18_:;
  // deopt 63 [r27]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L48_:;
  // st msg = r27
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // gsub = ldf gsub
  Rsh_Fir_reg_gsub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L49() else D19()
  // L49()
  goto L49_;

D19_:;
  // deopt 66 []
  Rsh_Fir_deopt(66, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // p9 = prom<V +>{
  //   msg10 = ld msg;
  //   msg11 = force? msg10;
  //   checkMissing(msg11);
  //   return msg11;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4044830143_9, CCP, RHO);
  // r29 = dyn gsub("\u2026", "...", p9)
  SEXP Rsh_Fir_array_args43[3];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args43[2] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub, 3, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L50() else D20()
  // L50()
  goto L50_;

D20_:;
  // deopt 70 [r29]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L50_:;
  // st msg = r29
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // gsub1 = ldf gsub
  Rsh_Fir_reg_gsub1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L51() else D21()
  // L51()
  goto L51_;

D21_:;
  // deopt 73 []
  Rsh_Fir_deopt(73, 0, NULL, CCP, RHO);
  return R_NilValue;

L51_:;
  // p10 = prom<V +>{
  //   msg12 = ld msg;
  //   msg13 = force? msg12;
  //   checkMissing(msg13);
  //   return msg13;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4044830143_10, CCP, RHO);
  // r31 = dyn gsub1("\u0332", "", p10)
  SEXP Rsh_Fir_array_args45[3];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args45[2] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub1_, 3, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L52() else D22()
  // L52()
  goto L52_;

D22_:;
  // deopt 77 [r31]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L52_:;
  // st msg = r31
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // eq7 = ld eq
  Rsh_Fir_reg_eq7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L53() else D23()
  // L53()
  goto L53_;

D23_:;
  // deopt 79 [eq7]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_eq7_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L53_:;
  // eq8 = force? eq7
  Rsh_Fir_reg_eq8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eq7_);
  // checkMissing(eq8)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_eq8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(eq8)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_eq8_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if c5 then L54() else L55(eq8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L54()
    goto L54_;
  } else {
  // L55(eq8)
    Rsh_Fir_reg_eq10_ = Rsh_Fir_reg_eq8_;
    goto L55_;
  }

L54_:;
  // dr4 = tryDispatchBuiltin.1("[", eq8)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_eq8_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args48);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc2 then L56() else L55(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L56()
    goto L56_;
  } else {
  // L55(dr4)
    Rsh_Fir_reg_eq10_ = Rsh_Fir_reg_dr4_;
    goto L55_;
  }

L55_:;
  // ind4 = ld ind
  Rsh_Fir_reg_ind4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L57() else D24()
  // L57()
  goto L57_;

L56_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L10(dx4)
  // L10(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L10_;

D24_:;
  // deopt 81 [eq10, ind4]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_eq10_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_ind4_;
  Rsh_Fir_deopt(81, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L57_:;
  // ind5 = force? ind4
  Rsh_Fir_reg_ind5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind4_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r32 = dyn __4(eq10, ind5, 5)
  SEXP Rsh_Fir_array_args51[3];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_eq10_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_ind5_;
  Rsh_Fir_array_args51[2] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 3, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L10(r32)
  // L10(r32)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r32_;
  goto L10_;

D25_:;
  // deopt 86 [eq11]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_eq11_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L58_:;
  // eq12 = force? eq11
  Rsh_Fir_reg_eq12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eq11_);
  // checkMissing(eq12)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_eq12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(eq12)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_eq12_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if c6 then L59() else L60(eq12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L59()
    goto L59_;
  } else {
  // L60(eq12)
    Rsh_Fir_reg_eq14_ = Rsh_Fir_reg_eq12_;
    goto L60_;
  }

L59_:;
  // dr6 = tryDispatchBuiltin.1("[", eq12)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_eq12_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args54);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if dc3 then L61() else L60(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L61()
    goto L61_;
  } else {
  // L60(dr6)
    Rsh_Fir_reg_eq14_ = Rsh_Fir_reg_dr6_;
    goto L60_;
  }

L60_:;
  // ind6 = ld ind
  Rsh_Fir_reg_ind6_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L62() else D26()
  // L62()
  goto L62_;

L61_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L11(dx6)
  // L11(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L11_;

D26_:;
  // deopt 88 [eq14, ind6]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_eq14_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_ind6_;
  Rsh_Fir_deopt(88, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L62_:;
  // ind7 = force? ind6
  Rsh_Fir_reg_ind7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind6_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r33 = dyn __5(eq14, ind7, 6)
  SEXP Rsh_Fir_array_args57[3];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_eq14_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_ind7_;
  Rsh_Fir_array_args57[2] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 3, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L11(r33)
  // L11(r33)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r33_;
  goto L11_;

D27_:;
  // deopt 93 [l1]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L63_:;
  // l2 = force? l1
  Rsh_Fir_reg_l2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l1_);
  // checkMissing(l2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_l2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // l3 = ld l2
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L64() else D28()
  // L64()
  goto L64_;

D28_:;
  // deopt 94 [l2, l3]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_deopt(94, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L64_:;
  // l4 = force? l3
  Rsh_Fir_reg_l4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l3_);
  // checkMissing(l4)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_l4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // r34 = `==`(l2, l4)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // st tst = r34
  Rsh_Fir_store(Rsh_const(CCP, 43), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // sym3 = ldf `is.na`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // base3 = ldf `is.na` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
  // if guard3 then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L65_:;
  // tst = ld tst
  Rsh_Fir_reg_tst = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // check L67() else D29()
  // L67()
  goto L67_;

L66_:;
  // r35 = dyn base3(<sym tst>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L12(r35)
  // L12(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L12_;

D29_:;
  // deopt 100 [tst]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_tst;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L67_:;
  // tst1 = force? tst
  Rsh_Fir_reg_tst1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tst);
  // checkMissing(tst1)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_tst1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r37 = dyn is_na(tst1)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_tst1_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L68() else D30()
  // L68()
  goto L68_;

D30_:;
  // deopt 103 [r37]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L12(r37)
  // L12(r37)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L12_;

L69_:;
  // dr8 = tryDispatchBuiltin.0("[<-", l5, "")
  SEXP Rsh_Fir_array_args65[3];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args65[2] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args65);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if dc4 then L71() else L70("", dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L71()
    goto L71_;
  } else {
  // L70("", dr8)
    Rsh_Fir_reg_r39_ = Rsh_const(CCP, 15);
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr8_;
    goto L70_;
  }

L70_:;
  // pos = ld pos
  Rsh_Fir_reg_pos = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L72() else D31()
  // L72()
  goto L72_;

L71_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // goto L13(dx8)
  // L13(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L13_;

D31_:;
  // deopt 108 [r39, l7, "", pos]
  SEXP Rsh_Fir_array_deopt_stack23[4];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack23[3] = Rsh_Fir_reg_pos;
  Rsh_Fir_deopt(108, 4, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L72_:;
  // pos1 = force? pos
  Rsh_Fir_reg_pos1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r42 = dyn ___(l7, "", pos1)
  SEXP Rsh_Fir_array_args68[3];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args68[2] = Rsh_Fir_reg_pos1_;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L13(r42)
  // L13(r42)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r42_;
  goto L13_;

D32_:;
  // deopt 113 []
  Rsh_Fir_deopt(113, 0, NULL, CCP, RHO);
  return R_NilValue;

L73_:;
  // p11 = prom<V +>{
  //   pos2 = ld pos;
  //   pos3 = force? pos2;
  //   checkMissing(pos3);
  //   r43 = `!`(pos3);
  //   return r43;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4044830143_11, CCP, RHO);
  // r45 = dyn which(p11)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L74() else D33()
  // L74()
  goto L74_;

D33_:;
  // deopt 115 [r45]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L74_:;
  // st pos = r45
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L75() else D34()
  // L75()
  goto L75_;

D34_:;
  // deopt 118 []
  Rsh_Fir_deopt(118, 0, NULL, CCP, RHO);
  return R_NilValue;

L75_:;
  // p12 = prom<V +>{
  //   l8 = ld l1;
  //   l9 = force? l8;
  //   checkMissing(l9);
  //   c8 = `is.object`(l9);
  //   if c8 then L1() else L2(l9);
  // L0(dx11):
  //   return dx11;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("[", l9);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(l11):
  //   pos4 = ld pos;
  //   pos5 = force? pos4;
  //   __6 = ldf `[` in base;
  //   r46 = dyn __6(l11, pos5);
  //   goto L0(r46);
  // L3():
  //   dx10 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx10);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4044830143_12, CCP, RHO);
  // r48 = dyn paste0(":", p12)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L76() else D35()
  // L76()
  goto L76_;

D35_:;
  // deopt 121 [r48]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L76_:;
  // l12 = ld l1
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // c9 = `is.object`(l12)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if c9 then L77() else L78(r48, l12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L77()
    goto L77_;
  } else {
  // L78(r48, l12)
    Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r48_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l12_;
    goto L78_;
  }

L77_:;
  // dr12 = tryDispatchBuiltin.0("[<-", l12, r48)
  SEXP Rsh_Fir_array_args80[3];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args80[2] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args80);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if dc6 then L79() else L78(r48, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L79()
    goto L79_;
  } else {
  // L78(r48, dr12)
    Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r48_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_dr12_;
    goto L78_;
  }

L78_:;
  // pos6 = ld pos
  Rsh_Fir_reg_pos6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L80() else D36()
  // L80()
  goto L80_;

L79_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // goto L14(dx12)
  // L14(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L14_;

D36_:;
  // deopt 123 [r50, l14, r48, pos6]
  SEXP Rsh_Fir_array_deopt_stack26[4];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack26[2] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_deopt_stack26[3] = Rsh_Fir_reg_pos6_;
  Rsh_Fir_deopt(123, 4, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L80_:;
  // pos7 = force? pos6
  Rsh_Fir_reg_pos7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos6_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r53 = dyn ___1(l14, r48, pos7)
  SEXP Rsh_Fir_array_args83[3];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_args83[2] = Rsh_Fir_reg_pos7_;
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L14(r53)
  // L14(r53)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r53_;
  goto L14_;

D37_:;
  // deopt 128 []
  Rsh_Fir_deopt(128, 0, NULL, CCP, RHO);
  return R_NilValue;

L81_:;
  // p13 = prom<V +>{
  //   tst2 = ld tst;
  //   tst3 = force? tst2;
  //   checkMissing(tst3);
  //   c10 = `is.object`(tst3);
  //   if c10 then L1() else L2(tst3);
  // L0(dx15):
  //   r55 = `!`(dx15);
  //   return r55;
  // L1():
  //   dr14 = tryDispatchBuiltin.1("[", tst3);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L3() else L2(dr14);
  // L2(tst5):
  //   pos8 = ld pos;
  //   pos9 = force? pos8;
  //   __7 = ldf `[` in base;
  //   r54 = dyn __7(tst5, pos9);
  //   goto L0(r54);
  // L3():
  //   dx14 = getTryDispatchBuiltinValue(dr14);
  //   goto L0(dx14);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4044830143_13, CCP, RHO);
  // r57 = dyn which1(p13)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which1_, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L82() else D38()
  // L82()
  goto L82_;

D38_:;
  // deopt 130 [r57]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L82_:;
  // st pos = r57
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r57_, RHO);
  (void)(Rsh_Fir_reg_r57_);
  // paste1 = ldf paste0
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L83() else D39()
  // L83()
  goto L83_;

D39_:;
  // deopt 133 []
  Rsh_Fir_deopt(133, 0, NULL, CCP, RHO);
  return R_NilValue;

L83_:;
  // p14 = prom<V +>{
  //   l15 = ld l1;
  //   l16 = force? l15;
  //   checkMissing(l16);
  //   c11 = `is.object`(l16);
  //   if c11 then L1() else L2(l16);
  // L0(dx17):
  //   return dx17;
  // L1():
  //   dr16 = tryDispatchBuiltin.1("[", l16);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L3() else L2(dr16);
  // L2(l18):
  //   pos10 = ld pos;
  //   pos11 = force? pos10;
  //   __8 = ldf `[` in base;
  //   r58 = dyn __8(l18, pos11);
  //   goto L0(r58);
  // L3():
  //   dx16 = getTryDispatchBuiltinValue(dr16);
  //   goto L0(dx16);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4044830143_14, CCP, RHO);
  // p15 = prom<V +>{
  //   l19 = ld l2;
  //   l20 = force? l19;
  //   checkMissing(l20);
  //   c12 = `is.object`(l20);
  //   if c12 then L1() else L2(l20);
  // L0(dx19):
  //   return dx19;
  // L1():
  //   dr18 = tryDispatchBuiltin.1("[", l20);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L3() else L2(dr18);
  // L2(l22):
  //   pos12 = ld pos;
  //   pos13 = force? pos12;
  //   __9 = ldf `[` in base;
  //   r60 = dyn __9(l22, pos13);
  //   goto L0(r60);
  // L3():
  //   dx18 = getTryDispatchBuiltinValue(dr18);
  //   goto L0(dx18);
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4044830143_15, CCP, RHO);
  // r62 = dyn paste1(p14, "-", p15)
  SEXP Rsh_Fir_array_args104[3];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args104[1] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args104[2] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names28[3];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 3, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L84() else D40()
  // L84()
  goto L84_;

D40_:;
  // deopt 137 [r62]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L84_:;
  // l23 = ld l1
  Rsh_Fir_reg_l23_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // c13 = `is.object`(l23)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_l23_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if c13 then L85() else L86(r62, l23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L85()
    goto L85_;
  } else {
  // L86(r62, l23)
    Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r62_;
    Rsh_Fir_reg_l25_ = Rsh_Fir_reg_l23_;
    goto L86_;
  }

L85_:;
  // dr20 = tryDispatchBuiltin.0("[<-", l23, r62)
  SEXP Rsh_Fir_array_args106[3];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_args106[2] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args106);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // if dc10 then L87() else L86(r62, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L87()
    goto L87_;
  } else {
  // L86(r62, dr20)
    Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r62_;
    Rsh_Fir_reg_l25_ = Rsh_Fir_reg_dr20_;
    goto L86_;
  }

L86_:;
  // pos14 = ld pos
  Rsh_Fir_reg_pos14_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L88() else D41()
  // L88()
  goto L88_;

L87_:;
  // dx20 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // goto L15(dx20)
  // L15(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L15_;

D41_:;
  // deopt 139 [r64, l25, r62, pos14]
  SEXP Rsh_Fir_array_deopt_stack29[4];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_l25_;
  Rsh_Fir_array_deopt_stack29[2] = Rsh_Fir_reg_r62_;
  Rsh_Fir_array_deopt_stack29[3] = Rsh_Fir_reg_pos14_;
  Rsh_Fir_deopt(139, 4, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L88_:;
  // pos15 = force? pos14
  Rsh_Fir_reg_pos15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos14_);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r67 = dyn ___2(l25, r62, pos15)
  SEXP Rsh_Fir_array_args109[3];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_l25_;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_r62_;
  Rsh_Fir_array_args109[2] = Rsh_Fir_reg_pos15_;
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L15(r67)
  // L15(r67)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r67_;
  goto L15_;

D42_:;
  // deopt 144 []
  Rsh_Fir_deopt(144, 0, NULL, CCP, RHO);
  return R_NilValue;

L89_:;
  // p16 = prom<V +>{
  //   eq15 = ld eq;
  //   eq16 = force? eq15;
  //   checkMissing(eq16);
  //   c14 = `is.object`(eq16);
  //   if c14 then L1() else L2(eq16);
  // L0(dx23):
  //   return dx23;
  // L1():
  //   dr22 = tryDispatchBuiltin.1("[", eq16);
  //   dc11 = getTryDispatchBuiltinDispatched(dr22);
  //   if dc11 then L3() else L2(dr22);
  // L2(eq18):
  //   ind8 = ld ind;
  //   ind9 = force? ind8;
  //   __10 = ldf `[` in base;
  //   r68 = dyn __10(eq18, ind9, 1);
  //   goto L0(r68);
  // L3():
  //   dx22 = getTryDispatchBuiltinValue(dr22);
  //   goto L0(dx22);
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4044830143_16, CCP, RHO);
  // p17 = prom<V +>{
  //   l26 = ld l1;
  //   l27 = force? l26;
  //   checkMissing(l27);
  //   return l27;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4044830143_17, CCP, RHO);
  // p18 = prom<V +>{
  //   msg14 = ld msg;
  //   msg15 = force? msg14;
  //   checkMissing(msg15);
  //   return msg15;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4044830143_18, CCP, RHO);
  // r72 = dyn cbind(p16, p17, p18)
  SEXP Rsh_Fir_array_args118[3];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args118[2] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cbind, 3, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L90() else D43()
  // L90()
  goto L90_;

D43_:;
  // deopt 148 [r72]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(148, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L90_:;
  // st out = r72
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r72_, RHO);
  (void)(Rsh_Fir_reg_r72_);
  // goto L16()
  // L16()
  goto L16_;

L92_:;
  // c15 = ldf c in base
  Rsh_Fir_reg_c15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r76 = dyn c15("path", "pos", "msg")
  SEXP Rsh_Fir_array_args119[3];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args119[1] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args119[2] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names32[3];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c15_, 3, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L94() else D44()
  // L94()
  goto L94_;

L93_:;
  // r74 = dyn base4("path", "pos", "msg")
  SEXP Rsh_Fir_array_args120[3];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args120[1] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args120[2] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names33[3];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 3, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L17(r74)
  // L17(r74)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r74_;
  goto L17_;

D44_:;
  // deopt 158 [r76]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(158, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L94_:;
  // goto L17(r76)
  // L17(r76)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r76_;
  goto L17_;

D45_:;
  // deopt 160 [r75, l28, r75]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_l28_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(160, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L95_:;
  // r77 = dyn colnames__(l28, NULL, r75)
  SEXP Rsh_Fir_array_args121[3];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_l28_;
  Rsh_Fir_array_args121[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args121[2] = Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colnames__, 3, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L96() else D46()
  // L96()
  goto L96_;

D46_:;
  // deopt 162 [r75, r77]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(162, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L96_:;
  // st out = r77
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r77_, RHO);
  (void)(Rsh_Fir_reg_r77_);
  // out = ld out
  Rsh_Fir_reg_out = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L97() else D47()
  // L97()
  goto L97_;

D47_:;
  // deopt 164 [out]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_out;
  Rsh_Fir_deopt(164, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L97_:;
  // out1 = force? out
  Rsh_Fir_reg_out1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_out);
  // checkMissing(out1)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_out1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return out1
  return Rsh_Fir_reg_out1_;
}
SEXP Rsh_Fir_user_promise_inner4044830143_(SEXP CCP, SEXP RHO) {
  // _make_KaTeX_checker = ldf `.make_KaTeX_checker`
  Rsh_Fir_reg__make_KaTeX_checker = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // r = dyn _make_KaTeX_checker()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__make_KaTeX_checker, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner4044830143_1(SEXP CCP, SEXP RHO) {
  // db1 = ld db
  Rsh_Fir_reg_db1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // db2 = force? db1
  Rsh_Fir_reg_db2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db1_);
  // checkMissing(db2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_db2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return db2
  return Rsh_Fir_reg_db2_;
}
SEXP Rsh_Fir_user_promise_inner4044830143_2(SEXP CCP, SEXP RHO) {
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // r7 = dyn character()
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_inner4044830143_3(SEXP CCP, SEXP RHO) {
  // eq3 = ld eq
  Rsh_Fir_reg_eq3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // eq4 = force? eq3
  Rsh_Fir_reg_eq4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eq3_);
  // checkMissing(eq4)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_eq4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(eq4)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_eq4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", eq4)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_eq4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r10 = dyn __(eq4, <missing>, 3)
  SEXP Rsh_Fir_array_args18[3];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_eq4_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r10_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4044830143_4(SEXP CCP, SEXP RHO) {
  // katex1 = ld katex
  Rsh_Fir_reg_katex1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // katex2 = force? katex1
  Rsh_Fir_reg_katex2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_katex1_);
  // checkMissing(katex2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_katex2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return katex2
  return Rsh_Fir_reg_katex2_;
}
SEXP Rsh_Fir_user_promise_inner4044830143_5(SEXP CCP, SEXP RHO) {
  // results = ld results
  Rsh_Fir_reg_results = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // results1 = force? results
  Rsh_Fir_reg_results1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_results);
  // checkMissing(results1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_results1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return results1
  return Rsh_Fir_reg_results1_;
}
SEXP Rsh_Fir_user_promise_inner4044830143_6(SEXP CCP, SEXP RHO) {
  // __1 = ld `[[`
  Rsh_Fir_reg___1_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // __2 = force? __1
  Rsh_Fir_reg___2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___1_);
  // checkMissing(__2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg___2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return __2
  return Rsh_Fir_reg___2_;
}
SEXP Rsh_Fir_user_promise_inner4044830143_7(SEXP CCP, SEXP RHO) {
  // msg6 = ld msg
  Rsh_Fir_reg_msg6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // msg7 = force? msg6
  Rsh_Fir_reg_msg7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg6_);
  // checkMissing(msg7)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_msg7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return msg7
  return Rsh_Fir_reg_msg7_;
}
SEXP Rsh_Fir_user_promise_inner4044830143_8(SEXP CCP, SEXP RHO) {
  // msg8 = ld msg
  Rsh_Fir_reg_msg8_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // msg9 = force? msg8
  Rsh_Fir_reg_msg9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg8_);
  // checkMissing(msg9)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_msg9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return msg9
  return Rsh_Fir_reg_msg9_;
}
SEXP Rsh_Fir_user_promise_inner4044830143_9(SEXP CCP, SEXP RHO) {
  // msg10 = ld msg
  Rsh_Fir_reg_msg10_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // msg11 = force? msg10
  Rsh_Fir_reg_msg11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg10_);
  // checkMissing(msg11)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_msg11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return msg11
  return Rsh_Fir_reg_msg11_;
}
SEXP Rsh_Fir_user_promise_inner4044830143_10(SEXP CCP, SEXP RHO) {
  // msg12 = ld msg
  Rsh_Fir_reg_msg12_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // msg13 = force? msg12
  Rsh_Fir_reg_msg13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg12_);
  // checkMissing(msg13)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_msg13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return msg13
  return Rsh_Fir_reg_msg13_;
}
SEXP Rsh_Fir_user_promise_inner4044830143_11(SEXP CCP, SEXP RHO) {
  // pos2 = ld pos
  Rsh_Fir_reg_pos2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // pos3 = force? pos2
  Rsh_Fir_reg_pos3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos2_);
  // checkMissing(pos3)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_pos3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // r43 = `!`(pos3)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_pos3_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // return r43
  return Rsh_Fir_reg_r43_;
}
SEXP Rsh_Fir_user_promise_inner4044830143_12(SEXP CCP, SEXP RHO) {
  // l8 = ld l1
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // l9 = force? l8
  Rsh_Fir_reg_l9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l8_);
  // checkMissing(l9)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_l9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(l9)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if c8 then L1() else L2(l9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L1()
    goto L1_;
  } else {
  // L2(l9)
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    goto L2_;
  }

L0_:;
  // return dx11
  return Rsh_Fir_reg_dx11_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("[", l9)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args74);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // pos4 = ld pos
  Rsh_Fir_reg_pos4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // pos5 = force? pos4
  Rsh_Fir_reg_pos5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos4_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r46 = dyn __6(l11, pos5)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_pos5_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r46)
  // L0(r46)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r46_;
  goto L0_;

L3_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L0(dx10)
  // L0(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4044830143_13(SEXP CCP, SEXP RHO) {
  // tst2 = ld tst
  Rsh_Fir_reg_tst2_ = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // tst3 = force? tst2
  Rsh_Fir_reg_tst3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tst2_);
  // checkMissing(tst3)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_tst3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(tst3)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_tst3_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if c10 then L1() else L2(tst3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L1()
    goto L1_;
  } else {
  // L2(tst3)
    Rsh_Fir_reg_tst5_ = Rsh_Fir_reg_tst3_;
    goto L2_;
  }

L0_:;
  // r55 = `!`(dx15)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // return r55
  return Rsh_Fir_reg_r55_;

L1_:;
  // dr14 = tryDispatchBuiltin.1("[", tst3)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_tst3_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args87);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if dc7 then L3() else L2(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr14)
    Rsh_Fir_reg_tst5_ = Rsh_Fir_reg_dr14_;
    goto L2_;
  }

L2_:;
  // pos8 = ld pos
  Rsh_Fir_reg_pos8_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // pos9 = force? pos8
  Rsh_Fir_reg_pos9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos8_);
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r54 = dyn __7(tst5, pos9)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_tst5_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_pos9_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(r54)
  // L0(r54)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r54_;
  goto L0_;

L3_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // goto L0(dx14)
  // L0(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4044830143_14(SEXP CCP, SEXP RHO) {
  // l15 = ld l1
  Rsh_Fir_reg_l15_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // l16 = force? l15
  Rsh_Fir_reg_l16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l15_);
  // checkMissing(l16)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_l16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(l16)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_l16_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if c11 then L1() else L2(l16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L1()
    goto L1_;
  } else {
  // L2(l16)
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_l16_;
    goto L2_;
  }

L0_:;
  // return dx17
  return Rsh_Fir_reg_dx17_;

L1_:;
  // dr16 = tryDispatchBuiltin.1("[", l16)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_l16_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args94);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // if dc8 then L3() else L2(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr16)
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_dr16_;
    goto L2_;
  }

L2_:;
  // pos10 = ld pos
  Rsh_Fir_reg_pos10_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // pos11 = force? pos10
  Rsh_Fir_reg_pos11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos10_);
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r58 = dyn __8(l18, pos11)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_pos11_;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r58)
  // L0(r58)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r58_;
  goto L0_;

L3_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L0(dx16)
  // L0(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4044830143_15(SEXP CCP, SEXP RHO) {
  // l19 = ld l2
  Rsh_Fir_reg_l19_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // l20 = force? l19
  Rsh_Fir_reg_l20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l19_);
  // checkMissing(l20)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_l20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(l20)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_l20_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if c12 then L1() else L2(l20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L1()
    goto L1_;
  } else {
  // L2(l20)
    Rsh_Fir_reg_l22_ = Rsh_Fir_reg_l20_;
    goto L2_;
  }

L0_:;
  // return dx19
  return Rsh_Fir_reg_dx19_;

L1_:;
  // dr18 = tryDispatchBuiltin.1("[", l20)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_l20_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args100);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if dc9 then L3() else L2(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr18)
    Rsh_Fir_reg_l22_ = Rsh_Fir_reg_dr18_;
    goto L2_;
  }

L2_:;
  // pos12 = ld pos
  Rsh_Fir_reg_pos12_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // pos13 = force? pos12
  Rsh_Fir_reg_pos13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos12_);
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r60 = dyn __9(l22, pos13)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_pos13_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L0(r60)
  // L0(r60)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r60_;
  goto L0_;

L3_:;
  // dx18 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // goto L0(dx18)
  // L0(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4044830143_16(SEXP CCP, SEXP RHO) {
  // eq15 = ld eq
  Rsh_Fir_reg_eq15_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // eq16 = force? eq15
  Rsh_Fir_reg_eq16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eq15_);
  // checkMissing(eq16)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_eq16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(eq16)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_eq16_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // if c14 then L1() else L2(eq16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L1()
    goto L1_;
  } else {
  // L2(eq16)
    Rsh_Fir_reg_eq18_ = Rsh_Fir_reg_eq16_;
    goto L2_;
  }

L0_:;
  // return dx23
  return Rsh_Fir_reg_dx23_;

L1_:;
  // dr22 = tryDispatchBuiltin.1("[", eq16)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_eq16_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args112);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // if dc11 then L3() else L2(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr22)
    Rsh_Fir_reg_eq18_ = Rsh_Fir_reg_dr22_;
    goto L2_;
  }

L2_:;
  // ind8 = ld ind
  Rsh_Fir_reg_ind8_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // ind9 = force? ind8
  Rsh_Fir_reg_ind9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind8_);
  // __10 = ldf `[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r68 = dyn __10(eq18, ind9, 1)
  SEXP Rsh_Fir_array_args114[3];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_eq18_;
  Rsh_Fir_array_args114[1] = Rsh_Fir_reg_ind9_;
  Rsh_Fir_array_args114[2] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 3, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L0(r68)
  // L0(r68)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r68_;
  goto L0_;

L3_:;
  // dx22 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // goto L0(dx22)
  // L0(dx22)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4044830143_17(SEXP CCP, SEXP RHO) {
  // l26 = ld l1
  Rsh_Fir_reg_l26_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // l27 = force? l26
  Rsh_Fir_reg_l27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l26_);
  // checkMissing(l27)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_l27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // return l27
  return Rsh_Fir_reg_l27_;
}
SEXP Rsh_Fir_user_promise_inner4044830143_18(SEXP CCP, SEXP RHO) {
  // msg14 = ld msg
  Rsh_Fir_reg_msg14_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // msg15 = force? msg14
  Rsh_Fir_reg_msg15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg14_);
  // checkMissing(msg15)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_msg15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // return msg15
  return Rsh_Fir_reg_msg15_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
