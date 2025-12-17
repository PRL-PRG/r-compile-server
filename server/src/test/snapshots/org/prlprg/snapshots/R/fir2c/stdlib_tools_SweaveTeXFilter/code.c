#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1366361413_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1366361413_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1366361413_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1366361413_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1366361413_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1366361413_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1366361413_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1366361413_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1366361413_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1366361413_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1366361413_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1366361413_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1366361413_10(SEXP CCP, SEXP RHO);
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
  // r = clos inner1366361413
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1366361413_, RHO, CCP);
  // st SweaveTeXFilter = r
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
SEXP Rsh_Fir_user_function_inner1366361413_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1366361413 dynamic dispatch ([ifile, encoding])

  return Rsh_Fir_user_version_inner1366361413_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1366361413_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1366361413 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1366361413/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_ifile;  // ifile
  SEXP Rsh_Fir_reg_encoding;  // encoding
  SEXP Rsh_Fir_reg_encoding_isMissing;  // encoding_isMissing
  SEXP Rsh_Fir_reg_encoding_orDefault;  // encoding_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_ifile1_;  // ifile1
  SEXP Rsh_Fir_reg_ifile2_;  // ifile2
  SEXP Rsh_Fir_reg_inherits;  // inherits
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_ifile3_;  // ifile3
  SEXP Rsh_Fir_reg_ifile4_;  // ifile4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_ifile6_;  // ifile6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_ifile7_;  // ifile7
  SEXP Rsh_Fir_reg_ifile8_;  // ifile8
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_readLines;  // readLines
  SEXP Rsh_Fir_reg_ifile9_;  // ifile9
  SEXP Rsh_Fir_reg_ifile10_;  // ifile10
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_encoding1_;  // encoding1
  SEXP Rsh_Fir_reg_encoding2_;  // encoding2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_encoding3_;  // encoding3
  SEXP Rsh_Fir_reg_encoding4_;  // encoding4
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_Encoding__;  // Encoding__
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_iconv;  // iconv
  SEXP Rsh_Fir_reg_lines;  // lines
  SEXP Rsh_Fir_reg_lines1_;  // lines1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_encoding5_;  // encoding5
  SEXP Rsh_Fir_reg_encoding6_;  // encoding6
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_grep;  // grep
  SEXP Rsh_Fir_reg_syntax;  // syntax
  SEXP Rsh_Fir_reg_syntax1_;  // syntax1
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_syntax3_;  // syntax3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_lines2_;  // lines2
  SEXP Rsh_Fir_reg_lines3_;  // lines3
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_grep1_;  // grep1
  SEXP Rsh_Fir_reg_syntax4_;  // syntax4
  SEXP Rsh_Fir_reg_syntax5_;  // syntax5
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_syntax7_;  // syntax7
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_lines4_;  // lines4
  SEXP Rsh_Fir_reg_lines5_;  // lines5
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_list2DF;  // list2DF
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_dpos;  // dpos
  SEXP Rsh_Fir_reg_dpos1_;  // dpos1
  SEXP Rsh_Fir_reg_cpos;  // cpos
  SEXP Rsh_Fir_reg_cpos1_;  // cpos1
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_TEXT;  // TEXT
  SEXP Rsh_Fir_reg_TEXT1_;  // TEXT1
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_dpos2_;  // dpos2
  SEXP Rsh_Fir_reg_dpos3_;  // dpos3
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_rep_int;  // rep_int
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_CODE;  // CODE
  SEXP Rsh_Fir_reg_CODE1_;  // CODE1
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_cpos2_;  // cpos2
  SEXP Rsh_Fir_reg_cpos3_;  // cpos3
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_rep_int1_;  // rep_int1
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_recs;  // recs
  SEXP Rsh_Fir_reg_recs1_;  // recs1
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_recs3_;  // recs3
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_order;  // order
  SEXP Rsh_Fir_reg_recs4_;  // recs4
  SEXP Rsh_Fir_reg_recs5_;  // recs5
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_recs7_;  // recs7
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_TEXT2_;  // TEXT2
  SEXP Rsh_Fir_reg_TEXT3_;  // TEXT3
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_nrow;  // nrow
  SEXP Rsh_Fir_reg_recs8_;  // recs8
  SEXP Rsh_Fir_reg_recs9_;  // recs9
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_recs10_;  // recs10
  SEXP Rsh_Fir_reg_recs11_;  // recs11
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_recs13_;  // recs13
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_state;  // state
  SEXP Rsh_Fir_reg_state1_;  // state1
  SEXP Rsh_Fir_reg_CODE2_;  // CODE2
  SEXP Rsh_Fir_reg_CODE3_;  // CODE3
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_last;  // last
  SEXP Rsh_Fir_reg_last1_;  // last1
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_line;  // line
  SEXP Rsh_Fir_reg_line1_;  // line1
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_i23_;  // i23
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_i25_;  // i25
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_line2_;  // line2
  SEXP Rsh_Fir_reg_line3_;  // line3
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_recs14_;  // recs14
  SEXP Rsh_Fir_reg_recs15_;  // recs15
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_i27_;  // i27
  SEXP Rsh_Fir_reg_recs17_;  // recs17
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_i29_;  // i29
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_i31_;  // i31
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_i33_;  // i33
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_i34_;  // i34
  SEXP Rsh_Fir_reg_i35_;  // i35
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_line4_;  // line4
  SEXP Rsh_Fir_reg_line5_;  // line5
  SEXP Rsh_Fir_reg_lines6_;  // lines6
  SEXP Rsh_Fir_reg_lines7_;  // lines7

  // Bind parameters
  Rsh_Fir_reg_ifile = PARAMS[0];
  Rsh_Fir_reg_encoding = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st ifile = ifile
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_ifile, RHO);
  (void)(Rsh_Fir_reg_ifile);
  // encoding_isMissing = missing.0(encoding)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_encoding;
  Rsh_Fir_reg_encoding_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if encoding_isMissing then L0("unknown") else L0(encoding)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_encoding_isMissing)) {
  // L0("unknown")
    Rsh_Fir_reg_encoding_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(encoding)
    Rsh_Fir_reg_encoding_orDefault = Rsh_Fir_reg_encoding;
    goto L0_;
  }

L0_:;
  // st encoding = encoding_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_encoding_orDefault, RHO);
  (void)(Rsh_Fir_reg_encoding_orDefault);
  // sym = ldf inherits
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf inherits in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L1_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L22() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L22()
    goto L22_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L3()
  // L3()
  goto L3_;

L3_:;
  // ___ = ldf `:::`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L29() else D3()
  // L29()
  goto L29_;

L4_:;
  // goto L7()
  // L7()
  goto L7_;

L5_:;
  // iconv = ldf iconv
  Rsh_Fir_reg_iconv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L41() else D12()
  // L41()
  goto L41_;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // st TEXT = 1
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_const(CCP, 7), RHO);
  (void)(Rsh_const(CCP, 7));
  // st CODE = 0
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_const(CCP, 9), RHO);
  (void)(Rsh_const(CCP, 9));
  // grep = ldf grep
  Rsh_Fir_reg_grep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L44() else D14()
  // L44()
  goto L44_;

L8_:;
  // st recs = dx8
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx8_, RHO);
  (void)(Rsh_Fir_reg_dx8_);
  // st last = 0
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_const(CCP, 9), RHO);
  (void)(Rsh_const(CCP, 9));
  // TEXT2 = ld TEXT
  Rsh_Fir_reg_TEXT2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L56() else D23()
  // L56()
  goto L56_;

L9_:;
  // s = toForSeq(r54)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // l1 = length(s)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 9);
  // goto L10(i)
  // L10(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L10_;

L10_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args5);
  // c10 = `<`.1(l1, i2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if c10 then L61() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L61()
    goto L61_;
  } else {
  // L17()
    goto L17_;
  }

L11_:;
  // st line = dx16
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_dx16_, RHO);
  (void)(Rsh_Fir_reg_dx16_);
  // state = ld state
  Rsh_Fir_reg_state = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L71() else D28()
  // L71()
  goto L71_;

L12_:;
  // l5 = ld lines
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // c15 = `is.object`(l5)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c15 then L80() else L81(i12, "", l5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L80()
    goto L80_;
  } else {
  // L81(i12, "", l5)
    Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i12_;
    Rsh_Fir_reg_r70_ = Rsh_const(CCP, 17);
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    goto L81_;
  }

L13_:;
  // st lines = dx18
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_dx18_, RHO);
  (void)(Rsh_Fir_reg_dx18_);
  // goto L14(i20)
  // L14(i20)
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i20_;
  goto L14_;

L14_:;
  // recs14 = ld recs
  Rsh_Fir_reg_recs14_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L84() else D33()
  // L84()
  goto L84_;

L15_:;
  // st lines = dx20
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_dx20_, RHO);
  (void)(Rsh_Fir_reg_dx20_);
  // goto L14(i25)
  // L14(i25)
  Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i25_;
  goto L14_;

L16_:;
  // st state = dx26
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx26_, RHO);
  (void)(Rsh_Fir_reg_dx26_);
  // line4 = ld line
  Rsh_Fir_reg_line4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L93() else D35()
  // L93()
  goto L93_;

L17_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args8[4];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // recs10 = ld recs
  Rsh_Fir_reg_recs10_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L62() else D26()
  // L62()
  goto L62_;

L18_:;
  // ifile1 = ld ifile
  Rsh_Fir_reg_ifile1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L20() else D0()
  // L20()
  goto L20_;

L19_:;
  // r = dyn base(<sym ifile>, "srcfile")
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 2 [ifile1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_ifile1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L20_:;
  // ifile2 = force? ifile1
  Rsh_Fir_reg_ifile2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ifile1_);
  // checkMissing(ifile2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_ifile2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r2 = dyn inherits(ifile2, "srcfile", FALSE)
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_ifile2_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L21() else D1()
  // L21()
  goto L21_;

D1_:;
  // deopt 7 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

L22_:;
  // ifile3 = ld ifile
  Rsh_Fir_reg_ifile3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L23() else D2()
  // L23()
  goto L23_;

D2_:;
  // deopt 8 [ifile3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_ifile3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L23_:;
  // ifile4 = force? ifile3
  Rsh_Fir_reg_ifile4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ifile3_);
  // checkMissing(ifile4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_ifile4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(ifile4)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_ifile4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c1 then L25() else L26(ifile4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L25()
    goto L25_;
  } else {
  // L26(ifile4)
    Rsh_Fir_reg_ifile6_ = Rsh_Fir_reg_ifile4_;
    goto L26_;
  }

L24_:;
  // st ifile = dx1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L3()
  // L3()
  goto L3_;

L25_:;
  // dr = tryDispatchBuiltin.1("$", ifile4)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_ifile4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args14);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if dc then L27() else L26(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L27()
    goto L27_;
  } else {
  // L26(dr)
    Rsh_Fir_reg_ifile6_ = Rsh_Fir_reg_dr;
    goto L26_;
  }

L26_:;
  // r3 = `$`(ifile6, <sym filename>)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_ifile6_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L24(r3)
  // L24(r3)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r3_;
  goto L24_;

L27_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L24(dx)
  // L24(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L24_;

D3_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // r4 = dyn ___("utils", "SweaveGetSyntax")
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L30() else D4()
  // L30()
  goto L30_;

D4_:;
  // deopt 18 [r4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L30_:;
  // checkFun.0(r4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r4_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args19));
  // r5 = r4 as cls
  Rsh_Fir_reg_r5_ = Rsh_Fir_cast(Rsh_Fir_reg_r4_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p = prom<V +>{
  //   ifile7 = ld ifile;
  //   ifile8 = force? ifile7;
  //   checkMissing(ifile8);
  //   return ifile8;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1366361413_, CCP, RHO);
  // r7 = dyn r5(p)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r5_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L31() else D5()
  // L31()
  goto L31_;

D5_:;
  // deopt 21 [r7]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L31_:;
  // st syntax = r7
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // readLines = ldf readLines
  Rsh_Fir_reg_readLines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L32() else D6()
  // L32()
  goto L32_;

D6_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p1 = prom<V +>{
  //   ifile9 = ld ifile;
  //   ifile10 = force? ifile9;
  //   checkMissing(ifile10);
  //   return ifile10;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1366361413_1, CCP, RHO);
  // r9 = dyn readLines[, warn](p1, FALSE)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readLines, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L33() else D7()
  // L33()
  goto L33_;

D7_:;
  // deopt 28 [r9]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L33_:;
  // st lines = r9
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // encoding1 = ld encoding
  Rsh_Fir_reg_encoding1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L34() else D8()
  // L34()
  goto L34_;

D8_:;
  // deopt 30 [encoding1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_encoding1_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L34_:;
  // encoding2 = force? encoding1
  Rsh_Fir_reg_encoding2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding1_);
  // checkMissing(encoding2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_encoding2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // r10 = `!=`(encoding2, "unknown")
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_encoding2_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c2 then L35() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L35()
    goto L35_;
  } else {
  // L4()
    goto L4_;
  }

L35_:;
  // encoding3 = ld encoding
  Rsh_Fir_reg_encoding3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L36() else D9()
  // L36()
  goto L36_;

D9_:;
  // deopt 34 [encoding3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_encoding3_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L36_:;
  // encoding4 = force? encoding3
  Rsh_Fir_reg_encoding4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding3_);
  // checkMissing(encoding4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_encoding4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // r11 = `==`(encoding4, "UTF-8")
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_encoding4_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c3 then L37() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L37()
    goto L37_;
  } else {
  // L5()
    goto L5_;
  }

L37_:;
  // l = ld lines
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // Encoding__ = ldf `Encoding<-`
  Rsh_Fir_reg_Encoding__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L38() else D10()
  // L38()
  goto L38_;

D10_:;
  // deopt 41 ["UTF-8", l, "UTF-8"]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_const(CCP, 30);
  Rsh_Fir_deopt(41, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L38_:;
  // r12 = dyn Encoding__(l, NULL, "UTF-8")
  SEXP Rsh_Fir_array_args30[3];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args30[2] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Encoding__, 3, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L39() else D11()
  // L39()
  goto L39_;

D11_:;
  // deopt 43 ["UTF-8", r12]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(43, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L39_:;
  // st lines = r12
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // goto L6("UTF-8")
  // L6("UTF-8")
  Rsh_Fir_reg_r13_ = Rsh_const(CCP, 30);
  goto L6_;

D12_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p2 = prom<V +>{
  //   lines = ld lines;
  //   lines1 = force? lines;
  //   checkMissing(lines1);
  //   return lines1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1366361413_2, CCP, RHO);
  // p3 = prom<V +>{
  //   encoding5 = ld encoding;
  //   encoding6 = force? encoding5;
  //   checkMissing(encoding6);
  //   return encoding6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1366361413_3, CCP, RHO);
  // r16 = dyn iconv[, , , sub](p2, p3, "", "byte")
  SEXP Rsh_Fir_array_args33[4];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args33[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args33[3] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_iconv, 4, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L42() else D13()
  // L42()
  goto L42_;

D13_:;
  // deopt 52 [r16]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L42_:;
  // st lines = r16
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // goto L6(r16)
  // L6(r16)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r16_;
  goto L6_;

D14_:;
  // deopt 63 []
  Rsh_Fir_deopt(63, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // p4 = prom<V +>{
  //   syntax = ld syntax;
  //   syntax1 = force? syntax;
  //   checkMissing(syntax1);
  //   c4 = `is.object`(syntax1);
  //   if c4 then L1() else L2(syntax1);
  // L0(dx4):
  //   return dx4;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("$", syntax1);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(syntax3):
  //   r18 = `$`(syntax3, <sym doc>);
  //   goto L0(r18);
  // L3():
  //   dx3 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx3);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1366361413_4, CCP, RHO);
  // p5 = prom<V +>{
  //   lines2 = ld lines;
  //   lines3 = force? lines2;
  //   checkMissing(lines3);
  //   return lines3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1366361413_5, CCP, RHO);
  // r21 = dyn grep(p4, p5)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L45() else D15()
  // L45()
  goto L45_;

D15_:;
  // deopt 66 [r21]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L45_:;
  // st dpos = r21
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // grep1 = ldf grep
  Rsh_Fir_reg_grep1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L46() else D16()
  // L46()
  goto L46_;

D16_:;
  // deopt 69 []
  Rsh_Fir_deopt(69, 0, NULL, CCP, RHO);
  return R_NilValue;

L46_:;
  // p6 = prom<V +>{
  //   syntax4 = ld syntax;
  //   syntax5 = force? syntax4;
  //   checkMissing(syntax5);
  //   c5 = `is.object`(syntax5);
  //   if c5 then L1() else L2(syntax5);
  // L0(dx6):
  //   return dx6;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("$", syntax5);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(syntax7):
  //   r22 = `$`(syntax7, <sym code>);
  //   goto L0(r22);
  // L3():
  //   dx5 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx5);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1366361413_6, CCP, RHO);
  // p7 = prom<V +>{
  //   lines4 = ld lines;
  //   lines5 = force? lines4;
  //   checkMissing(lines5);
  //   return lines5;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1366361413_7, CCP, RHO);
  // r25 = dyn grep1(p6, p7)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep1_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L47() else D17()
  // L47()
  goto L47_;

D17_:;
  // deopt 72 [r25]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L47_:;
  // st cpos = r25
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // list2DF = ldf list2DF
  Rsh_Fir_reg_list2DF = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L48() else D18()
  // L48()
  goto L48_;

D18_:;
  // deopt 75 []
  Rsh_Fir_deopt(75, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // p8 = prom<V +>{
  //   sym1 = ldf list;
  //   base1 = ldf list in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L7() else L8();
  // L0(r27):
  //   return r27;
  // L7():
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L9() else L10();
  // L8():
  //   r26 = dyn base1[line, type](<lang c(dpos, cpos)>, <lang c(rep.int(TEXT, length(dpos)), rep.int(CODE, length(cpos)))>);
  //   goto L0(r26);
  // L1(r29):
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L11() else L12();
  // L9():
  //   dpos = ld dpos;
  //   dpos1 = force? dpos;
  //   checkMissing(dpos1);
  //   cpos = ld cpos;
  //   cpos1 = force? cpos;
  //   checkMissing(cpos1);
  //   c6 = ldf c in base;
  //   r30 = dyn c6(dpos1, cpos1);
  //   goto L1(r30);
  // L10():
  //   r28 = dyn base2(<sym dpos>, <sym cpos>);
  //   goto L1(r28);
  // L2(r32):
  //   list = ldf list in base;
  //   r46 = dyn list(r29, r32);
  //   goto L0(r46);
  // L11():
  //   sym4 = ldf `rep.int`;
  //   base4 = ldf `rep.int` in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L13() else L14();
  // L12():
  //   r31 = dyn base3(<lang rep.int(TEXT, length(dpos))>, <lang rep.int(CODE, length(cpos))>);
  //   goto L2(r31);
  // L3(r34):
  //   sym6 = ldf `rep.int`;
  //   base6 = ldf `rep.int` in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L17() else L18();
  // L13():
  //   TEXT = ld TEXT;
  //   TEXT1 = force? TEXT;
  //   checkMissing(TEXT1);
  //   sym5 = ldf length;
  //   base5 = ldf length in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L15() else L16();
  // L14():
  //   r33 = dyn base4(<sym TEXT>, <lang length(dpos)>);
  //   goto L3(r33);
  // L4(r36):
  //   rep_int = ldf `rep.int` in base;
  //   r38 = dyn rep_int(TEXT1, r36);
  //   goto L3(r38);
  // L5(r40):
  //   c7 = ldf c in base;
  //   r45 = dyn c7(r34, r40);
  //   goto L2(r45);
  // L15():
  //   dpos2 = ld dpos;
  //   dpos3 = force? dpos2;
  //   checkMissing(dpos3);
  //   length = ldf length in base;
  //   r37 = dyn length(dpos3);
  //   goto L4(r37);
  // L16():
  //   r35 = dyn base5(<sym dpos>);
  //   goto L4(r35);
  // L17():
  //   CODE = ld CODE;
  //   CODE1 = force? CODE;
  //   checkMissing(CODE1);
  //   sym7 = ldf length;
  //   base7 = ldf length in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L19() else L20();
  // L18():
  //   r39 = dyn base6(<sym CODE>, <lang length(cpos)>);
  //   goto L5(r39);
  // L6(r42):
  //   rep_int1 = ldf `rep.int` in base;
  //   r44 = dyn rep_int1(CODE1, r42);
  //   goto L5(r44);
  // L19():
  //   cpos2 = ld cpos;
  //   cpos3 = force? cpos2;
  //   checkMissing(cpos3);
  //   length1 = ldf length in base;
  //   r43 = dyn length1(cpos3);
  //   goto L6(r43);
  // L20():
  //   r41 = dyn base7(<sym cpos>);
  //   goto L6(r41);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1366361413_8, CCP, RHO);
  // r48 = dyn list2DF(p8)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list2DF, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L49() else D19()
  // L49()
  goto L49_;

D19_:;
  // deopt 77 [r48]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L49_:;
  // st recs = r48
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r48_, RHO);
  (void)(Rsh_Fir_reg_r48_);
  // recs = ld recs
  Rsh_Fir_reg_recs = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L50() else D20()
  // L50()
  goto L50_;

D20_:;
  // deopt 79 [recs]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_recs;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L50_:;
  // recs1 = force? recs
  Rsh_Fir_reg_recs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_recs);
  // checkMissing(recs1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_recs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(recs1)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_recs1_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if c8 then L51() else L52(recs1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L51()
    goto L51_;
  } else {
  // L52(recs1)
    Rsh_Fir_reg_recs3_ = Rsh_Fir_reg_recs1_;
    goto L52_;
  }

L51_:;
  // dr6 = tryDispatchBuiltin.1("[", recs1)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_recs1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args80);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if dc3 then L53() else L52(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L53()
    goto L53_;
  } else {
  // L52(dr6)
    Rsh_Fir_reg_recs3_ = Rsh_Fir_reg_dr6_;
    goto L52_;
  }

L52_:;
  // order = ldf order
  Rsh_Fir_reg_order = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // check L54() else D21()
  // L54()
  goto L54_;

L53_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // goto L8(dx7)
  // L8(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L8_;

D21_:;
  // deopt 82 [recs3]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_recs3_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L54_:;
  // p9 = prom<V +>{
  //   recs4 = ld recs;
  //   recs5 = force? recs4;
  //   checkMissing(recs5);
  //   c9 = `is.object`(recs5);
  //   if c9 then L1() else L2(recs5);
  // L0(dx10):
  //   return dx10;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("$", recs5);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(recs7):
  //   r49 = `$`(recs7, <sym line>);
  //   goto L0(r49);
  // L3():
  //   dx9 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx9);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1366361413_9, CCP, RHO);
  // r51 = dyn order(p9)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_order, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L55() else D22()
  // L55()
  goto L55_;

D22_:;
  // deopt 84 [recs3, r51]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_recs3_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(84, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L55_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r52 = dyn __(recs1, r51, <missing>)
  SEXP Rsh_Fir_array_args90[3];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_recs1_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_args90[2] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L8(r52)
  // L8(r52)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r52_;
  goto L8_;

D23_:;
  // deopt 92 [TEXT2]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_TEXT2_;
  Rsh_Fir_deopt(92, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L56_:;
  // TEXT3 = force? TEXT2
  Rsh_Fir_reg_TEXT3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_TEXT2_);
  // checkMissing(TEXT3)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_TEXT3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // st state = TEXT3
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_TEXT3_, RHO);
  (void)(Rsh_Fir_reg_TEXT3_);
  // sym8 = ldf seq_len
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // base8 = ldf seq_len in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args92);
  // if guard8 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L57_:;
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L59() else D24()
  // L59()
  goto L59_;

L58_:;
  // r53 = dyn base8(<lang nrow(recs)>)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L9(r53)
  // L9(r53)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L9_;

D24_:;
  // deopt 97 []
  Rsh_Fir_deopt(97, 0, NULL, CCP, RHO);
  return R_NilValue;

L59_:;
  // p10 = prom<V +>{
  //   recs8 = ld recs;
  //   recs9 = force? recs8;
  //   checkMissing(recs9);
  //   return recs9;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1366361413_10, CCP, RHO);
  // r56 = dyn nrow(p10)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L60() else D25()
  // L60()
  goto L60_;

D25_:;
  // deopt 99 [r56]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L60_:;
  // r57 = seq_len(r56)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // goto L9(r57)
  // L9(r57)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r57_;
  goto L9_;

L61_:;
  // lines6 = ld lines
  Rsh_Fir_reg_lines6_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L94() else D36()
  // L94()
  goto L94_;

D26_:;
  // deopt 101 [i2, recs10]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_recs10_;
  Rsh_Fir_deopt(101, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L62_:;
  // recs11 = force? recs10
  Rsh_Fir_reg_recs11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_recs10_);
  // checkMissing(recs11)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_recs11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(recs11)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_recs11_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // if c11 then L64() else L65(i2, recs11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L64()
    goto L64_;
  } else {
  // L65(i2, recs11)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_recs13_ = Rsh_Fir_reg_recs11_;
    goto L65_;
  }

L63_:;
  // c12 = `is.object`(dx12)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if c12 then L67() else L68(i8, dx12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L67()
    goto L67_;
  } else {
  // L68(i8, dx12)
    Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx12_;
    goto L68_;
  }

L64_:;
  // dr10 = tryDispatchBuiltin.1("$", recs11)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_recs11_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args100);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if dc5 then L66() else L65(i2, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L66()
    goto L66_;
  } else {
  // L65(i2, dr10)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_recs13_ = Rsh_Fir_reg_dr10_;
    goto L65_;
  }

L65_:;
  // r58 = `$`(recs13, <sym line>)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_recs13_;
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // goto L63(i6, r58)
  // L63(i6, r58)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r58_;
  goto L63_;

L66_:;
  // dx11 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // goto L63(i2, dx11)
  // L63(i2, dx11)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L63_;

L67_:;
  // dr12 = tryDispatchBuiltin.1("[", dx12)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args104);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if dc6 then L69() else L68(i8, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L69()
    goto L69_;
  } else {
  // L68(i8, dr12)
    Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dr12_;
    goto L68_;
  }

L68_:;
  // i13 = ld i
  Rsh_Fir_reg_i13_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L70() else D27()
  // L70()
  goto L70_;

L69_:;
  // dx15 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // goto L11(i8, dx15)
  // L11(i8, dx15)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx15_;
  goto L11_;

D27_:;
  // deopt 104 [i10, dx14, i13]
  SEXP Rsh_Fir_array_deopt_stack20[3];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_dx14_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_i13_;
  Rsh_Fir_deopt(104, 3, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L70_:;
  // i14 = force? i13
  Rsh_Fir_reg_i14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i13_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r59 = dyn __1(dx14, i14)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dx14_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_i14_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L11(i10, r59)
  // L11(i10, r59)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i10_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_r59_;
  goto L11_;

D28_:;
  // deopt 108 [i12, state]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_state;
  Rsh_Fir_deopt(108, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L71_:;
  // state1 = force? state
  Rsh_Fir_reg_state1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_state);
  // checkMissing(state1)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_state1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // CODE2 = ld CODE
  Rsh_Fir_reg_CODE2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L72() else D29()
  // L72()
  goto L72_;

D29_:;
  // deopt 109 [i12, state1, CODE2]
  SEXP Rsh_Fir_array_deopt_stack22[3];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_state1_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_CODE2_;
  Rsh_Fir_deopt(109, 3, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L72_:;
  // CODE3 = force? CODE2
  Rsh_Fir_reg_CODE3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_CODE2_);
  // checkMissing(CODE3)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_CODE3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // r60 = `==`(state1, CODE3)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_state1_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_CODE3_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // c13 = `as.logical`(r60)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // if c13 then L73() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L73()
    goto L73_;
  } else {
  // L12()
    goto L12_;
  }

L73_:;
  // l2 = ld lines
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // c14 = `is.object`(l2)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // if c14 then L74() else L75(i12, "", l2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L74()
    goto L74_;
  } else {
  // L75(i12, "", l2)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i12_;
    Rsh_Fir_reg_r62_ = Rsh_const(CCP, 17);
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    goto L75_;
  }

L74_:;
  // dr14 = tryDispatchBuiltin.0("[<-", l2, "")
  SEXP Rsh_Fir_array_args113[3];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args113[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args113);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if dc7 then L76() else L75(i12, "", dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L76()
    goto L76_;
  } else {
  // L75(i12, "", dr14)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i12_;
    Rsh_Fir_reg_r62_ = Rsh_const(CCP, 17);
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_dr14_;
    goto L75_;
  }

L75_:;
  // last = ld last
  Rsh_Fir_reg_last = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L77() else D30()
  // L77()
  goto L77_;

L76_:;
  // dx17 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // goto L13(i12, "", dx17)
  // L13(i12, "", dx17)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_r64_ = Rsh_const(CCP, 17);
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx17_;
  goto L13_;

D30_:;
  // deopt 115 [i18, r62, l4, "", last]
  SEXP Rsh_Fir_array_deopt_stack23[5];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r62_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack23[3] = Rsh_const(CCP, 17);
  Rsh_Fir_array_deopt_stack23[4] = Rsh_Fir_reg_last;
  Rsh_Fir_deopt(115, 5, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L77_:;
  // last1 = force? last
  Rsh_Fir_reg_last1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_last);
  // checkMissing(last1)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_last1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // r65 = `+`(last1, 1)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_last1_;
  Rsh_Fir_array_args117[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // line = ld line
  Rsh_Fir_reg_line = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L78() else D31()
  // L78()
  goto L78_;

D31_:;
  // deopt 118 [i18, r62, l4, "", r65, line]
  SEXP Rsh_Fir_array_deopt_stack24[6];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r62_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack24[3] = Rsh_const(CCP, 17);
  Rsh_Fir_array_deopt_stack24[4] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_deopt_stack24[5] = Rsh_Fir_reg_line;
  Rsh_Fir_deopt(118, 6, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L78_:;
  // line1 = force? line
  Rsh_Fir_reg_line1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_line);
  // checkMissing(line1)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_line1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // r66 = `:`(r65, line1)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_line1_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r67 = dyn ___1(l4, "", r66)
  SEXP Rsh_Fir_array_args120[3];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args120[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args120[2] = Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L13(i18, r62, r67)
  // L13(i18, r62, r67)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_r67_;
  goto L13_;

L80_:;
  // dr16 = tryDispatchBuiltin.0("[<-", l5, "")
  SEXP Rsh_Fir_array_args121[3];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args121[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args121);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // if dc8 then L82() else L81(i12, "", dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L82()
    goto L82_;
  } else {
  // L81(i12, "", dr16)
    Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i12_;
    Rsh_Fir_reg_r70_ = Rsh_const(CCP, 17);
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr16_;
    goto L81_;
  }

L81_:;
  // line2 = ld line
  Rsh_Fir_reg_line2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L83() else D32()
  // L83()
  goto L83_;

L82_:;
  // dx19 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // goto L15(i12, "", dx19)
  // L15(i12, "", dx19)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_r72_ = Rsh_const(CCP, 17);
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx19_;
  goto L15_;

D32_:;
  // deopt 126 [i23, r70, l7, "", line2]
  SEXP Rsh_Fir_array_deopt_stack25[5];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r70_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack25[3] = Rsh_const(CCP, 17);
  Rsh_Fir_array_deopt_stack25[4] = Rsh_Fir_reg_line2_;
  Rsh_Fir_deopt(126, 5, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L83_:;
  // line3 = force? line2
  Rsh_Fir_reg_line3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_line2_);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r73 = dyn ___2(l7, "", line3)
  SEXP Rsh_Fir_array_args124[3];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args124[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args124[2] = Rsh_Fir_reg_line3_;
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L15(i23, r70, r73)
  // L15(i23, r70, r73)
  Rsh_Fir_reg_i25_ = Rsh_Fir_reg_i23_;
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r70_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_r73_;
  goto L15_;

D33_:;
  // deopt 130 [i21, recs14]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_recs14_;
  Rsh_Fir_deopt(130, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L84_:;
  // recs15 = force? recs14
  Rsh_Fir_reg_recs15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_recs14_);
  // checkMissing(recs15)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_recs15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(recs15)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_recs15_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // if c16 then L86() else L87(i21, recs15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L86()
    goto L86_;
  } else {
  // L87(i21, recs15)
    Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i21_;
    Rsh_Fir_reg_recs17_ = Rsh_Fir_reg_recs15_;
    goto L87_;
  }

L85_:;
  // c17 = `is.object`(dx22)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_dx22_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // if c17 then L89() else L90(i29, dx22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L89()
    goto L89_;
  } else {
  // L90(i29, dx22)
    Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i29_;
    Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx22_;
    goto L90_;
  }

L86_:;
  // dr18 = tryDispatchBuiltin.1("$", recs15)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_recs15_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args128);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // if dc9 then L88() else L87(i21, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L88()
    goto L88_;
  } else {
  // L87(i21, dr18)
    Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i21_;
    Rsh_Fir_reg_recs17_ = Rsh_Fir_reg_dr18_;
    goto L87_;
  }

L87_:;
  // r74 = `$`(recs17, <sym type>)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_recs17_;
  Rsh_Fir_array_args130[1] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // goto L85(i27, r74)
  // L85(i27, r74)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_r74_;
  goto L85_;

L88_:;
  // dx21 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // goto L85(i21, dx21)
  // L85(i21, dx21)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i21_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx21_;
  goto L85_;

L89_:;
  // dr20 = tryDispatchBuiltin.1("[", dx22)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_dx22_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args132);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // if dc10 then L91() else L90(i29, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L91()
    goto L91_;
  } else {
  // L90(i29, dr20)
    Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i29_;
    Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dr20_;
    goto L90_;
  }

L90_:;
  // i34 = ld i
  Rsh_Fir_reg_i34_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L92() else D34()
  // L92()
  goto L92_;

L91_:;
  // dx25 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // goto L16(i29, dx25)
  // L16(i29, dx25)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx25_;
  goto L16_;

D34_:;
  // deopt 133 [i31, dx24, i34]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i31_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_dx24_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_i34_;
  Rsh_Fir_deopt(133, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L92_:;
  // i35 = force? i34
  Rsh_Fir_reg_i35_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i34_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r75 = dyn __2(dx24, i35)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_dx24_;
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_i35_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L16(i31, r75)
  // L16(i31, r75)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i31_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_r75_;
  goto L16_;

D35_:;
  // deopt 137 [i33, line4]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i33_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_line4_;
  Rsh_Fir_deopt(137, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L93_:;
  // line5 = force? line4
  Rsh_Fir_reg_line5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_line4_);
  // checkMissing(line5)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_line5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // st last = line5
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_line5_, RHO);
  (void)(Rsh_Fir_reg_line5_);
  // goto L10(i33)
  // L10(i33)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i33_;
  goto L10_;

D36_:;
  // deopt 143 [lines6]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_lines6_;
  Rsh_Fir_deopt(143, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L94_:;
  // lines7 = force? lines6
  Rsh_Fir_reg_lines7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines6_);
  // checkMissing(lines7)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_lines7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return lines7
  return Rsh_Fir_reg_lines7_;
}
SEXP Rsh_Fir_user_promise_inner1366361413_(SEXP CCP, SEXP RHO) {
  // ifile7 = ld ifile
  Rsh_Fir_reg_ifile7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ifile8 = force? ifile7
  Rsh_Fir_reg_ifile8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ifile7_);
  // checkMissing(ifile8)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_ifile8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return ifile8
  return Rsh_Fir_reg_ifile8_;
}
SEXP Rsh_Fir_user_promise_inner1366361413_1(SEXP CCP, SEXP RHO) {
  // ifile9 = ld ifile
  Rsh_Fir_reg_ifile9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ifile10 = force? ifile9
  Rsh_Fir_reg_ifile10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ifile9_);
  // checkMissing(ifile10)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_ifile10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return ifile10
  return Rsh_Fir_reg_ifile10_;
}
SEXP Rsh_Fir_user_promise_inner1366361413_2(SEXP CCP, SEXP RHO) {
  // lines = ld lines
  Rsh_Fir_reg_lines = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // lines1 = force? lines
  Rsh_Fir_reg_lines1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines);
  // checkMissing(lines1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_lines1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return lines1
  return Rsh_Fir_reg_lines1_;
}
SEXP Rsh_Fir_user_promise_inner1366361413_3(SEXP CCP, SEXP RHO) {
  // encoding5 = ld encoding
  Rsh_Fir_reg_encoding5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // encoding6 = force? encoding5
  Rsh_Fir_reg_encoding6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding5_);
  // checkMissing(encoding6)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_encoding6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return encoding6
  return Rsh_Fir_reg_encoding6_;
}
SEXP Rsh_Fir_user_promise_inner1366361413_4(SEXP CCP, SEXP RHO) {
  // syntax = ld syntax
  Rsh_Fir_reg_syntax = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // syntax1 = force? syntax
  Rsh_Fir_reg_syntax1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_syntax);
  // checkMissing(syntax1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_syntax1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(syntax1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_syntax1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c4 then L1() else L2(syntax1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L1()
    goto L1_;
  } else {
  // L2(syntax1)
    Rsh_Fir_reg_syntax3_ = Rsh_Fir_reg_syntax1_;
    goto L2_;
  }

L0_:;
  // return dx4
  return Rsh_Fir_reg_dx4_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("$", syntax1)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_syntax1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args36);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_syntax3_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // r18 = `$`(syntax3, <sym doc>)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_syntax3_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r18_;
  goto L0_;

L3_:;
  // dx3 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L0(dx3)
  // L0(dx3)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1366361413_5(SEXP CCP, SEXP RHO) {
  // lines2 = ld lines
  Rsh_Fir_reg_lines2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // lines3 = force? lines2
  Rsh_Fir_reg_lines3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines2_);
  // checkMissing(lines3)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_lines3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return lines3
  return Rsh_Fir_reg_lines3_;
}
SEXP Rsh_Fir_user_promise_inner1366361413_6(SEXP CCP, SEXP RHO) {
  // syntax4 = ld syntax
  Rsh_Fir_reg_syntax4_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // syntax5 = force? syntax4
  Rsh_Fir_reg_syntax5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_syntax4_);
  // checkMissing(syntax5)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_syntax5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(syntax5)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_syntax5_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if c5 then L1() else L2(syntax5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L1()
    goto L1_;
  } else {
  // L2(syntax5)
    Rsh_Fir_reg_syntax7_ = Rsh_Fir_reg_syntax5_;
    goto L2_;
  }

L0_:;
  // return dx6
  return Rsh_Fir_reg_dx6_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("$", syntax5)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_syntax5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args44);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_syntax7_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // r22 = `$`(syntax7, <sym code>)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_syntax7_;
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r22_;
  goto L0_;

L3_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L0(dx5)
  // L0(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1366361413_7(SEXP CCP, SEXP RHO) {
  // lines4 = ld lines
  Rsh_Fir_reg_lines4_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // lines5 = force? lines4
  Rsh_Fir_reg_lines5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lines4_);
  // checkMissing(lines5)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_lines5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return lines5
  return Rsh_Fir_reg_lines5_;
}
SEXP Rsh_Fir_user_promise_inner1366361413_8(SEXP CCP, SEXP RHO) {
  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard1 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L0_:;
  // return r27
  return Rsh_Fir_reg_r27_;

L1_:;
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard3 then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L2_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r46 = dyn list(r29, r32)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r46)
  // L0(r46)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r46_;
  goto L0_;

L3_:;
  // sym6 = ldf `rep.int`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base6 = ldf `rep.int` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard6 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L4_:;
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r38 = dyn rep_int(TEXT1, r36)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_TEXT1_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L3(r38)
  // L3(r38)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r38_;
  goto L3_;

L5_:;
  // c7 = ldf c in base
  Rsh_Fir_reg_c7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r45 = dyn c7(r34, r40)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c7_, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L2(r45)
  // L2(r45)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r45_;
  goto L2_;

L6_:;
  // rep_int1 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r44 = dyn rep_int1(CODE1, r42)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_CODE1_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int1_, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L5(r44)
  // L5(r44)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r44_;
  goto L5_;

L7_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard2 then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L8_:;
  // r26 = dyn base1[line, type](<lang c(dpos, cpos)>, <lang c(rep.int(TEXT, length(dpos)), rep.int(CODE, length(cpos)))>)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r26)
  // L0(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L0_;

L9_:;
  // dpos = ld dpos
  Rsh_Fir_reg_dpos = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // dpos1 = force? dpos
  Rsh_Fir_reg_dpos1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dpos);
  // checkMissing(dpos1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dpos1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // cpos = ld cpos
  Rsh_Fir_reg_cpos = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // cpos1 = force? cpos
  Rsh_Fir_reg_cpos1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cpos);
  // checkMissing(cpos1)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_cpos1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // c6 = ldf c in base
  Rsh_Fir_reg_c6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r30 = dyn c6(dpos1, cpos1)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dpos1_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_cpos1_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c6_, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L1(r30)
  // L1(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L1_;

L10_:;
  // r28 = dyn base2(<sym dpos>, <sym cpos>)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L1(r28)
  // L1(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L1_;

L11_:;
  // sym4 = ldf `rep.int`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base4 = ldf `rep.int` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args63);
  // if guard4 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L12_:;
  // r31 = dyn base3(<lang rep.int(TEXT, length(dpos))>, <lang rep.int(CODE, length(cpos))>)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L2(r31)
  // L2(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L2_;

L13_:;
  // TEXT = ld TEXT
  Rsh_Fir_reg_TEXT = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // TEXT1 = force? TEXT
  Rsh_Fir_reg_TEXT1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_TEXT);
  // checkMissing(TEXT1)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_TEXT1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args66);
  // if guard5 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L14_:;
  // r33 = dyn base4(<sym TEXT>, <lang length(dpos)>)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L3(r33)
  // L3(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L3_;

L15_:;
  // dpos2 = ld dpos
  Rsh_Fir_reg_dpos2_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // dpos3 = force? dpos2
  Rsh_Fir_reg_dpos3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dpos2_);
  // checkMissing(dpos3)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dpos3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r37 = dyn length(dpos3)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dpos3_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L4(r37)
  // L4(r37)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L4_;

L16_:;
  // r35 = dyn base5(<sym dpos>)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L4(r35)
  // L4(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L4_;

L17_:;
  // CODE = ld CODE
  Rsh_Fir_reg_CODE = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // CODE1 = force? CODE
  Rsh_Fir_reg_CODE1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_CODE);
  // checkMissing(CODE1)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_CODE1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // sym7 = ldf length
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base7 = ldf length in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args72);
  // if guard7 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L18_:;
  // r39 = dyn base6(<sym CODE>, <lang length(cpos)>)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L5(r39)
  // L5(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L5_;

L19_:;
  // cpos2 = ld cpos
  Rsh_Fir_reg_cpos2_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // cpos3 = force? cpos2
  Rsh_Fir_reg_cpos3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cpos2_);
  // checkMissing(cpos3)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_cpos3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r43 = dyn length1(cpos3)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_cpos3_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L6(r43)
  // L6(r43)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r43_;
  goto L6_;

L20_:;
  // r41 = dyn base7(<sym cpos>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L6(r41)
  // L6(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L6_;
}
SEXP Rsh_Fir_user_promise_inner1366361413_9(SEXP CCP, SEXP RHO) {
  // recs4 = ld recs
  Rsh_Fir_reg_recs4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // recs5 = force? recs4
  Rsh_Fir_reg_recs5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_recs4_);
  // checkMissing(recs5)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_recs5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(recs5)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_recs5_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if c9 then L1() else L2(recs5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L1()
    goto L1_;
  } else {
  // L2(recs5)
    Rsh_Fir_reg_recs7_ = Rsh_Fir_reg_recs5_;
    goto L2_;
  }

L0_:;
  // return dx10
  return Rsh_Fir_reg_dx10_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("$", recs5)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_recs5_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args85);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_recs7_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // r49 = `$`(recs7, <sym line>)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_recs7_;
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L0(r49)
  // L0(r49)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r49_;
  goto L0_;

L3_:;
  // dx9 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // goto L0(dx9)
  // L0(dx9)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1366361413_10(SEXP CCP, SEXP RHO) {
  // recs8 = ld recs
  Rsh_Fir_reg_recs8_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // recs9 = force? recs8
  Rsh_Fir_reg_recs9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_recs8_);
  // checkMissing(recs9)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_recs9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // return recs9
  return Rsh_Fir_reg_recs9_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
