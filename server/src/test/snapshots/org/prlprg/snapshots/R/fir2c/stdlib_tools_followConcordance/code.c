#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1673683481_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1673683481_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1673683481_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1673683481_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1673683481_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1673683481_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1673683481_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1673683481_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner1673683481
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1673683481_, RHO, CCP);
  // st followConcordance = r
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
SEXP Rsh_Fir_user_function_inner1673683481_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1673683481 dynamic dispatch ([concordance, prevConcordance])

  return Rsh_Fir_user_version_inner1673683481_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1673683481_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1673683481 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1673683481/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_concordance;  // concordance
  SEXP Rsh_Fir_reg_prevConcordance;  // prevConcordance
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_prevConcordance1_;  // prevConcordance1
  SEXP Rsh_Fir_reg_prevConcordance2_;  // prevConcordance2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_concordance1_;  // concordance1
  SEXP Rsh_Fir_reg_concordance2_;  // concordance2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_concordance4_;  // concordance4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_concordance5_;  // concordance5
  SEXP Rsh_Fir_reg_concordance6_;  // concordance6
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_concordance8_;  // concordance8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_curLines;  // curLines
  SEXP Rsh_Fir_reg_curLines1_;  // curLines1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_rep_len;  // rep_len
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_concordance9_;  // concordance9
  SEXP Rsh_Fir_reg_concordance10_;  // concordance10
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_concordance12_;  // concordance12
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_prevConcordance3_;  // prevConcordance3
  SEXP Rsh_Fir_reg_prevConcordance4_;  // prevConcordance4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_prevConcordance6_;  // prevConcordance6
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_prevConcordance7_;  // prevConcordance7
  SEXP Rsh_Fir_reg_prevConcordance8_;  // prevConcordance8
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_prevConcordance10_;  // prevConcordance10
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_prevLines;  // prevLines
  SEXP Rsh_Fir_reg_prevLines1_;  // prevLines1
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_rep_len1_;  // rep_len1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_prevConcordance11_;  // prevConcordance11
  SEXP Rsh_Fir_reg_prevConcordance12_;  // prevConcordance12
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_prevConcordance14_;  // prevConcordance14
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_prevOfs;  // prevOfs
  SEXP Rsh_Fir_reg_prevOfs1_;  // prevOfs1
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_rep;  // rep
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_prevLines2_;  // prevLines2
  SEXP Rsh_Fir_reg_prevLines3_;  // prevLines3
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_rep1_;  // rep1
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_prevFile;  // prevFile
  SEXP Rsh_Fir_reg_prevFile1_;  // prevFile1
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_curLines2_;  // curLines2
  SEXP Rsh_Fir_reg_curLines3_;  // curLines3
  SEXP Rsh_Fir_reg_max;  // max
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_prevLines4_;  // prevLines4
  SEXP Rsh_Fir_reg_prevLines5_;  // prevLines5
  SEXP Rsh_Fir_reg_length2_;  // length2
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_prevLines6_;  // prevLines6
  SEXP Rsh_Fir_reg_prevLines7_;  // prevLines7
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_rep2_;  // rep2
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_prevFile2_;  // prevFile2
  SEXP Rsh_Fir_reg_prevFile3_;  // prevFile3
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_rep3_;  // rep3
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_prevLines8_;  // prevLines8
  SEXP Rsh_Fir_reg_prevLines9_;  // prevLines9
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_prevLines11_;  // prevLines11
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_curLines4_;  // curLines4
  SEXP Rsh_Fir_reg_curLines5_;  // curLines5
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_ifelse;  // ifelse
  SEXP Rsh_Fir_reg_new;  // new
  SEXP Rsh_Fir_reg_new1_;  // new1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_curFile;  // curFile
  SEXP Rsh_Fir_reg_curFile1_;  // curFile1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_prevFile4_;  // prevFile4
  SEXP Rsh_Fir_reg_prevFile5_;  // prevFile5
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_prevFile7_;  // prevFile7
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_curLines6_;  // curLines6
  SEXP Rsh_Fir_reg_curLines7_;  // curLines7
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_ifelse1_;  // ifelse1
  SEXP Rsh_Fir_reg_new2_;  // new2
  SEXP Rsh_Fir_reg_new3_;  // new3
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_curLines8_;  // curLines8
  SEXP Rsh_Fir_reg_curLines9_;  // curLines9
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_prevLines12_;  // prevLines12
  SEXP Rsh_Fir_reg_prevLines13_;  // prevLines13
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_prevLines15_;  // prevLines15
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_curLines10_;  // curLines10
  SEXP Rsh_Fir_reg_curLines11_;  // curLines11
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_concordance13_;  // concordance13
  SEXP Rsh_Fir_reg_concordance14_;  // concordance14

  // Bind parameters
  Rsh_Fir_reg_concordance = PARAMS[0];
  Rsh_Fir_reg_prevConcordance = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st concordance = concordance
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_concordance, RHO);
  (void)(Rsh_Fir_reg_concordance);
  // st prevConcordance = prevConcordance
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_prevConcordance, RHO);
  (void)(Rsh_Fir_reg_prevConcordance);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L0_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L26() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L26()
    goto L26_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L22()
  // L22()
  goto L22_;

L2_:;
  // st curFile = r5
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // concordance9 = ld concordance
  Rsh_Fir_reg_concordance9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L44() else D6()
  // L44()
  goto L44_;

L3_:;
  // rep_len = ldf rep_len in base
  Rsh_Fir_reg_rep_len = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r10 = dyn rep_len(dx3, r8)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_len, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L43() else D5()
  // L43()
  goto L43_;

L4_:;
  // st prevFile = r14
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // prevConcordance11 = ld prevConcordance
  Rsh_Fir_reg_prevConcordance11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L66() else D12()
  // L66()
  goto L66_;

L5_:;
  // rep_len1 = ldf rep_len in base
  Rsh_Fir_reg_rep_len1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r19 = dyn rep_len1(dx9, r17)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_len1_, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L65() else D11()
  // L65()
  goto L65_;

L6_:;
  // goto L11()
  // L11()
  goto L11_;

L7_:;
  // st prevLines = r22
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // sym7 = ldf c
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base7 = ldf c in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard7 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L8_:;
  // prevLines2 = ld prevLines
  Rsh_Fir_reg_prevLines2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L77() else D14()
  // L77()
  goto L77_;

L9_:;
  // st prevFile = r28
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // st prevOfs = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_const(CCP, 9), RHO);
  (void)(Rsh_const(CCP, 9));
  // goto L11()
  // L11()
  goto L11_;

L10_:;
  // prevFile = ld prevFile
  Rsh_Fir_reg_prevFile = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L83() else D16()
  // L83()
  goto L83_;

L11_:;
  // sym9 = ldf max
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base9 = ldf max in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard9 then L86() else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L86()
    goto L86_;
  } else {
  // L87()
    goto L87_;
  }

L12_:;
  // st n0 = r35
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // sym10 = ldf length
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base10 = ldf length in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard10 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L13_:;
  // st n1 = r38
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // n1 = ld n1
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L94() else D22()
  // L94()
  goto L94_;

L14_:;
  // goto L19()
  // L19()
  goto L19_;

L15_:;
  // st prevLines = r42
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r42_, RHO);
  (void)(Rsh_Fir_reg_r42_);
  // sym13 = ldf c
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base13 = ldf c in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard13 then L103() else L104()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L103()
    goto L103_;
  } else {
  // L104()
    goto L104_;
  }

L16_:;
  // c12 = ldf c in base
  Rsh_Fir_reg_c12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r46 = dyn c12(prevLines7, r44)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_prevLines7_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c12_, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L102() else D25()
  // L102()
  goto L102_;

L17_:;
  // st prevFile = r48
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r48_, RHO);
  (void)(Rsh_Fir_reg_r48_);
  // goto L19()
  // L19()
  goto L19_;

L18_:;
  // c13 = ldf c in base
  Rsh_Fir_reg_c13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r52 = dyn c13(prevFile3, r50)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_prevFile3_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c13_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L108() else D27()
  // L108()
  goto L108_;

L19_:;
  // sym15 = ldf `is.na`
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base15 = ldf `is.na` in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard15 then L110() else L111()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L110()
    goto L110_;
  } else {
  // L111()
    goto L111_;
  }

L20_:;
  // st new = r55
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r55_, RHO);
  (void)(Rsh_Fir_reg_r55_);
  // ifelse = ldf ifelse
  Rsh_Fir_reg_ifelse = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L118() else D31()
  // L118()
  goto L118_;

L21_:;
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r57 = dyn is_na(dx13)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L117() else D30()
  // L117()
  goto L117_;

L22_:;
  // concordance13 = ld concordance
  Rsh_Fir_reg_concordance13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L131() else D35()
  // L131()
  goto L131_;

L23_:;
  // prevConcordance1 = ld prevConcordance
  Rsh_Fir_reg_prevConcordance1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L25() else D0()
  // L25()
  goto L25_;

L24_:;
  // r = dyn base(<sym prevConcordance>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 1 [prevConcordance1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_prevConcordance1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L25_:;
  // prevConcordance2 = force? prevConcordance1
  Rsh_Fir_reg_prevConcordance2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prevConcordance1_);
  // checkMissing(prevConcordance2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_prevConcordance2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // c = `==`(prevConcordance2, NULL)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_prevConcordance2_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L0_;

L26_:;
  // concordance1 = ld concordance
  Rsh_Fir_reg_concordance1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L27() else D1()
  // L27()
  goto L27_;

D1_:;
  // deopt 5 [concordance1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_concordance1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L27_:;
  // concordance2 = force? concordance1
  Rsh_Fir_reg_concordance2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_concordance1_);
  // checkMissing(concordance2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_concordance2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(concordance2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_concordance2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c2 then L29() else L30(concordance2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L29()
    goto L29_;
  } else {
  // L30(concordance2)
    Rsh_Fir_reg_concordance4_ = Rsh_Fir_reg_concordance2_;
    goto L30_;
  }

L28_:;
  // st curLines = dx1
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym1 = ldf rep_len
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf rep_len in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard1 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L29_:;
  // dr = tryDispatchBuiltin.1("$", concordance2)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_concordance2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args19);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc then L31() else L30(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L31()
    goto L31_;
  } else {
  // L30(dr)
    Rsh_Fir_reg_concordance4_ = Rsh_Fir_reg_dr;
    goto L30_;
  }

L30_:;
  // r3 = `$`(concordance4, <sym srcLine>)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_concordance4_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L28(r3)
  // L28(r3)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r3_;
  goto L28_;

L31_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L28(dx)
  // L28(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L28_;

L32_:;
  // concordance5 = ld concordance
  Rsh_Fir_reg_concordance5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L34() else D2()
  // L34()
  goto L34_;

L33_:;
  // r4 = dyn base1(<lang `$`(concordance, srcFile)>, <lang length(curLines)>)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L2(r4)
  // L2(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L2_;

D2_:;
  // deopt 11 [concordance5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_concordance5_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L34_:;
  // concordance6 = force? concordance5
  Rsh_Fir_reg_concordance6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_concordance5_);
  // checkMissing(concordance6)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_concordance6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(concordance6)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_concordance6_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c3 then L36() else L37(concordance6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L36()
    goto L36_;
  } else {
  // L37(concordance6)
    Rsh_Fir_reg_concordance8_ = Rsh_Fir_reg_concordance6_;
    goto L37_;
  }

L35_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard2 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L36_:;
  // dr2 = tryDispatchBuiltin.1("$", concordance6)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_concordance6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args27);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if dc1 then L38() else L37(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L38()
    goto L38_;
  } else {
  // L37(dr2)
    Rsh_Fir_reg_concordance8_ = Rsh_Fir_reg_dr2_;
    goto L37_;
  }

L37_:;
  // r6 = `$`(concordance8, <sym srcFile>)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_concordance8_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L35(r6)
  // L35(r6)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r6_;
  goto L35_;

L38_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L35(dx2)
  // L35(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L35_;

L39_:;
  // curLines = ld curLines
  Rsh_Fir_reg_curLines = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L41() else D3()
  // L41()
  goto L41_;

L40_:;
  // r7 = dyn base2(<sym curLines>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L3_;

D3_:;
  // deopt 16 [curLines]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_curLines;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L41_:;
  // curLines1 = force? curLines
  Rsh_Fir_reg_curLines1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_curLines);
  // checkMissing(curLines1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_curLines1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r9 = dyn length(curLines1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_curLines1_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L42() else D4()
  // L42()
  goto L42_;

D4_:;
  // deopt 19 [r9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L3(r9)
  // L3(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L3_;

D5_:;
  // deopt 21 [r10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L2(r10)
  // L2(r10)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r10_;
  goto L2_;

D6_:;
  // deopt 23 [concordance9]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_concordance9_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L44_:;
  // concordance10 = force? concordance9
  Rsh_Fir_reg_concordance10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_concordance9_);
  // checkMissing(concordance10)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_concordance10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(concordance10)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_concordance10_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c4 then L46() else L47(concordance10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L46()
    goto L46_;
  } else {
  // L47(concordance10)
    Rsh_Fir_reg_concordance12_ = Rsh_Fir_reg_concordance10_;
    goto L47_;
  }

L45_:;
  // st curOfs = dx5
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // prevConcordance3 = ld prevConcordance
  Rsh_Fir_reg_prevConcordance3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L49() else D7()
  // L49()
  goto L49_;

L46_:;
  // dr4 = tryDispatchBuiltin.1("$", concordance10)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_concordance10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args36);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if dc2 then L48() else L47(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L48()
    goto L48_;
  } else {
  // L47(dr4)
    Rsh_Fir_reg_concordance12_ = Rsh_Fir_reg_dr4_;
    goto L47_;
  }

L47_:;
  // r11 = `$`(concordance12, <sym offset>)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_concordance12_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L45(r11)
  // L45(r11)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r11_;
  goto L45_;

L48_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L45(dx4)
  // L45(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L45_;

D7_:;
  // deopt 27 [prevConcordance3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_prevConcordance3_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L49_:;
  // prevConcordance4 = force? prevConcordance3
  Rsh_Fir_reg_prevConcordance4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prevConcordance3_);
  // checkMissing(prevConcordance4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_prevConcordance4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(prevConcordance4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_prevConcordance4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c5 then L51() else L52(prevConcordance4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L51()
    goto L51_;
  } else {
  // L52(prevConcordance4)
    Rsh_Fir_reg_prevConcordance6_ = Rsh_Fir_reg_prevConcordance4_;
    goto L52_;
  }

L50_:;
  // st prevLines = dx7
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // sym3 = ldf rep_len
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base3 = ldf rep_len in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard3 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L51_:;
  // dr6 = tryDispatchBuiltin.1("$", prevConcordance4)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_prevConcordance4_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args43);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc3 then L53() else L52(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L53()
    goto L53_;
  } else {
  // L52(dr6)
    Rsh_Fir_reg_prevConcordance6_ = Rsh_Fir_reg_dr6_;
    goto L52_;
  }

L52_:;
  // r12 = `$`(prevConcordance6, <sym srcLine>)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_prevConcordance6_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L50(r12)
  // L50(r12)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r12_;
  goto L50_;

L53_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L50(dx6)
  // L50(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L50_;

L54_:;
  // prevConcordance7 = ld prevConcordance
  Rsh_Fir_reg_prevConcordance7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L56() else D8()
  // L56()
  goto L56_;

L55_:;
  // r13 = dyn base3(<lang `$`(prevConcordance, srcFile)>, <lang length(prevLines)>)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L4(r13)
  // L4(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L4_;

D8_:;
  // deopt 33 [prevConcordance7]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_prevConcordance7_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L56_:;
  // prevConcordance8 = force? prevConcordance7
  Rsh_Fir_reg_prevConcordance8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prevConcordance7_);
  // checkMissing(prevConcordance8)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_prevConcordance8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(prevConcordance8)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_prevConcordance8_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if c6 then L58() else L59(prevConcordance8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L58()
    goto L58_;
  } else {
  // L59(prevConcordance8)
    Rsh_Fir_reg_prevConcordance10_ = Rsh_Fir_reg_prevConcordance8_;
    goto L59_;
  }

L57_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard4 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

L58_:;
  // dr8 = tryDispatchBuiltin.1("$", prevConcordance8)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_prevConcordance8_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args51);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc4 then L60() else L59(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L60()
    goto L60_;
  } else {
  // L59(dr8)
    Rsh_Fir_reg_prevConcordance10_ = Rsh_Fir_reg_dr8_;
    goto L59_;
  }

L59_:;
  // r15 = `$`(prevConcordance10, <sym srcFile>)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_prevConcordance10_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L57(r15)
  // L57(r15)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r15_;
  goto L57_;

L60_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L57(dx8)
  // L57(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L57_;

L61_:;
  // prevLines = ld prevLines
  Rsh_Fir_reg_prevLines = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L63() else D9()
  // L63()
  goto L63_;

L62_:;
  // r16 = dyn base4(<sym prevLines>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L5(r16)
  // L5(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L5_;

D9_:;
  // deopt 38 [prevLines]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_prevLines;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L63_:;
  // prevLines1 = force? prevLines
  Rsh_Fir_reg_prevLines1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prevLines);
  // checkMissing(prevLines1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_prevLines1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r18 = dyn length1(prevLines1)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_prevLines1_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L64() else D10()
  // L64()
  goto L64_;

D10_:;
  // deopt 41 [r18]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L64_:;
  // goto L5(r18)
  // L5(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L5_;

D11_:;
  // deopt 43 [r19]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L65_:;
  // goto L4(r19)
  // L4(r19)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r19_;
  goto L4_;

D12_:;
  // deopt 45 [prevConcordance11]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_prevConcordance11_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L66_:;
  // prevConcordance12 = force? prevConcordance11
  Rsh_Fir_reg_prevConcordance12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prevConcordance11_);
  // checkMissing(prevConcordance12)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_prevConcordance12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(prevConcordance12)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_prevConcordance12_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if c7 then L68() else L69(prevConcordance12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L68()
    goto L68_;
  } else {
  // L69(prevConcordance12)
    Rsh_Fir_reg_prevConcordance14_ = Rsh_Fir_reg_prevConcordance12_;
    goto L69_;
  }

L67_:;
  // st prevOfs = dx11
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // prevOfs = ld prevOfs
  Rsh_Fir_reg_prevOfs = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L71() else D13()
  // L71()
  goto L71_;

L68_:;
  // dr10 = tryDispatchBuiltin.1("$", prevConcordance12)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_prevConcordance12_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args60);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if dc5 then L70() else L69(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L70()
    goto L70_;
  } else {
  // L69(dr10)
    Rsh_Fir_reg_prevConcordance14_ = Rsh_Fir_reg_dr10_;
    goto L69_;
  }

L69_:;
  // r20 = `$`(prevConcordance14, <sym offset>)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_prevConcordance14_;
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // goto L67(r20)
  // L67(r20)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r20_;
  goto L67_;

L70_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L67(dx10)
  // L67(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L67_;

D13_:;
  // deopt 49 [prevOfs]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_prevOfs;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L71_:;
  // prevOfs1 = force? prevOfs
  Rsh_Fir_reg_prevOfs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prevOfs);
  // checkMissing(prevOfs1)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_prevOfs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // c8 = `as.logical`(prevOfs1)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_prevOfs1_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if c8 then L72() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L72()
    goto L72_;
  } else {
  // L6()
    goto L6_;
  }

L72_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args66);
  // if guard5 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

L73_:;
  // sym6 = ldf rep
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base6 = ldf rep in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard6 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L74_:;
  // r21 = dyn base5(<lang rep(NA_INT, prevOfs)>, <sym prevLines>)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L7(r21)
  // L7(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L7_;

L75_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r25 = dyn rep(NA_INT, <sym prevOfs>)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L8(r25)
  // L8(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L8_;

L76_:;
  // r23 = dyn base6(NA_INT, <sym prevOfs>)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L8(r23)
  // L8(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L8_;

D14_:;
  // deopt 56 [prevLines2]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_prevLines2_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L77_:;
  // prevLines3 = force? prevLines2
  Rsh_Fir_reg_prevLines3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prevLines2_);
  // checkMissing(prevLines3)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_prevLines3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // c9 = ldf c in base
  Rsh_Fir_reg_c9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r26 = dyn c9(r24, prevLines3)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_prevLines3_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c9_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L78() else D15()
  // L78()
  goto L78_;

D15_:;
  // deopt 59 [r26]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L78_:;
  // goto L7(r26)
  // L7(r26)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r26_;
  goto L7_;

L79_:;
  // sym8 = ldf rep
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base8 = ldf rep in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard8 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L80_:;
  // r27 = dyn base7(<lang rep(NA_STR, prevOfs)>, <sym prevFile>)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L9(r27)
  // L9(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L9_;

L81_:;
  // rep1 = ldf rep in base
  Rsh_Fir_reg_rep1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r31 = dyn rep1(NA_STR, <sym prevOfs>)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep1_, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L10(r31)
  // L10(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L10_;

L82_:;
  // r29 = dyn base8(NA_STR, <sym prevOfs>)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L10(r29)
  // L10(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L10_;

D16_:;
  // deopt 66 [prevFile]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_prevFile;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L83_:;
  // prevFile1 = force? prevFile
  Rsh_Fir_reg_prevFile1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prevFile);
  // checkMissing(prevFile1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_prevFile1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // c10 = ldf c in base
  Rsh_Fir_reg_c10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r32 = dyn c10(r30, prevFile1)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_prevFile1_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c10_, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L84() else D17()
  // L84()
  goto L84_;

D17_:;
  // deopt 69 [r32]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L84_:;
  // goto L9(r32)
  // L9(r32)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r32_;
  goto L9_;

L86_:;
  // curLines2 = ld curLines
  Rsh_Fir_reg_curLines2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L88() else D18()
  // L88()
  goto L88_;

L87_:;
  // r34 = dyn base9(<sym curLines>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L12(r34)
  // L12(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L12_;

D18_:;
  // deopt 78 [curLines2]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_curLines2_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L88_:;
  // curLines3 = force? curLines2
  Rsh_Fir_reg_curLines3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_curLines2_);
  // checkMissing(curLines3)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_curLines3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r36 = dyn max(curLines3)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_curLines3_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L89() else D19()
  // L89()
  goto L89_;

D19_:;
  // deopt 81 [r36]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L89_:;
  // goto L12(r36)
  // L12(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L12_;

L90_:;
  // prevLines4 = ld prevLines
  Rsh_Fir_reg_prevLines4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L92() else D20()
  // L92()
  goto L92_;

L91_:;
  // r37 = dyn base10(<sym prevLines>)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L13(r37)
  // L13(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L13_;

D20_:;
  // deopt 85 [prevLines4]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_prevLines4_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L92_:;
  // prevLines5 = force? prevLines4
  Rsh_Fir_reg_prevLines5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prevLines4_);
  // checkMissing(prevLines5)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_prevLines5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r39 = dyn length2(prevLines5)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_prevLines5_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L93() else D21()
  // L93()
  goto L93_;

D21_:;
  // deopt 88 [r39]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L93_:;
  // goto L13(r39)
  // L13(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L13_;

D22_:;
  // deopt 90 [n1]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L94_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // n3 = ld n0
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L95() else D23()
  // L95()
  goto L95_;

D23_:;
  // deopt 91 [n2, n3]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_deopt(91, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L95_:;
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // r40 = `<`(n2, n4)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_n2_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_n4_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // c11 = `as.logical`(r40)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if c11 then L96() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L96()
    goto L96_;
  } else {
  // L14()
    goto L14_;
  }

L96_:;
  // sym11 = ldf c
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base11 = ldf c in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args89);
  // if guard11 then L97() else L98()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L97()
    goto L97_;
  } else {
  // L98()
    goto L98_;
  }

L97_:;
  // prevLines6 = ld prevLines
  Rsh_Fir_reg_prevLines6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L99() else D24()
  // L99()
  goto L99_;

L98_:;
  // r41 = dyn base11(<sym prevLines>, <lang rep(NA_INT, `-`(n0, n1))>)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L15(r41)
  // L15(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L15_;

D24_:;
  // deopt 96 [prevLines6]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_prevLines6_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L99_:;
  // prevLines7 = force? prevLines6
  Rsh_Fir_reg_prevLines7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prevLines6_);
  // checkMissing(prevLines7)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_prevLines7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // sym12 = ldf rep
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base12 = ldf rep in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args92);
  // if guard12 then L100() else L101()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L100()
    goto L100_;
  } else {
  // L101()
    goto L101_;
  }

L100_:;
  // rep2 = ldf rep in base
  Rsh_Fir_reg_rep2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r45 = dyn rep2(NA_INT, <lang `-`(n0, n1)>)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep2_, 2, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L16(r45)
  // L16(r45)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r45_;
  goto L16_;

L101_:;
  // r43 = dyn base12(NA_INT, <lang `-`(n0, n1)>)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L16(r43)
  // L16(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L16_;

D25_:;
  // deopt 102 [r46]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L102_:;
  // goto L15(r46)
  // L15(r46)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r46_;
  goto L15_;

L103_:;
  // prevFile2 = ld prevFile
  Rsh_Fir_reg_prevFile2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L105() else D26()
  // L105()
  goto L105_;

L104_:;
  // r47 = dyn base13(<sym prevFile>, <lang rep(NA_STR, `-`(n0, n1))>)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L17(r47)
  // L17(r47)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L17_;

D26_:;
  // deopt 106 [prevFile2]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_prevFile2_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L105_:;
  // prevFile3 = force? prevFile2
  Rsh_Fir_reg_prevFile3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prevFile2_);
  // checkMissing(prevFile3)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_prevFile3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // sym14 = ldf rep
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base14 = ldf rep in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args97);
  // if guard14 then L106() else L107()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L106()
    goto L106_;
  } else {
  // L107()
    goto L107_;
  }

L106_:;
  // rep3 = ldf rep in base
  Rsh_Fir_reg_rep3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r51 = dyn rep3(NA_STR, <lang `-`(n0, n1)>)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args98[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep3_, 2, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L18(r51)
  // L18(r51)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r51_;
  goto L18_;

L107_:;
  // r49 = dyn base14(NA_STR, <lang `-`(n0, n1)>)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 2, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L18(r49)
  // L18(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L18_;

D27_:;
  // deopt 112 [r52]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L108_:;
  // goto L17(r52)
  // L17(r52)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r52_;
  goto L17_;

L110_:;
  // prevLines8 = ld prevLines
  Rsh_Fir_reg_prevLines8_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L112() else D28()
  // L112()
  goto L112_;

L111_:;
  // r54 = dyn base15(<lang `[`(prevLines, curLines)>)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L20(r54)
  // L20(r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L20_;

D28_:;
  // deopt 118 [prevLines8]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_prevLines8_;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L112_:;
  // prevLines9 = force? prevLines8
  Rsh_Fir_reg_prevLines9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prevLines8_);
  // checkMissing(prevLines9)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_prevLines9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(prevLines9)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_prevLines9_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // if c14 then L113() else L114(prevLines9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L113()
    goto L113_;
  } else {
  // L114(prevLines9)
    Rsh_Fir_reg_prevLines11_ = Rsh_Fir_reg_prevLines9_;
    goto L114_;
  }

L113_:;
  // dr12 = tryDispatchBuiltin.1("[", prevLines9)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_prevLines9_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args103);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // if dc6 then L115() else L114(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L115()
    goto L115_;
  } else {
  // L114(dr12)
    Rsh_Fir_reg_prevLines11_ = Rsh_Fir_reg_dr12_;
    goto L114_;
  }

L114_:;
  // curLines4 = ld curLines
  Rsh_Fir_reg_curLines4_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L116() else D29()
  // L116()
  goto L116_;

L115_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // goto L21(dx12)
  // L21(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L21_;

D29_:;
  // deopt 120 [prevLines11, curLines4]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_prevLines11_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_curLines4_;
  Rsh_Fir_deopt(120, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L116_:;
  // curLines5 = force? curLines4
  Rsh_Fir_reg_curLines5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_curLines4_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r56 = dyn __(prevLines11, curLines5)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_prevLines11_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_curLines5_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L21(r56)
  // L21(r56)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r56_;
  goto L21_;

D30_:;
  // deopt 124 [r57]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L117_:;
  // goto L20(r57)
  // L20(r57)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r57_;
  goto L20_;

D31_:;
  // deopt 127 []
  Rsh_Fir_deopt(127, 0, NULL, CCP, RHO);
  return R_NilValue;

L118_:;
  // p = prom<V +>{
  //   new = ld new;
  //   new1 = force? new;
  //   checkMissing(new1);
  //   return new1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1673683481_, CCP, RHO);
  // p1 = prom<V +>{
  //   curFile = ld curFile;
  //   curFile1 = force? curFile;
  //   checkMissing(curFile1);
  //   return curFile1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1673683481_1, CCP, RHO);
  // p2 = prom<V +>{
  //   prevFile4 = ld prevFile;
  //   prevFile5 = force? prevFile4;
  //   checkMissing(prevFile5);
  //   c15 = `is.object`(prevFile5);
  //   if c15 then L1() else L2(prevFile5);
  // L0(dx15):
  //   return dx15;
  // L1():
  //   dr14 = tryDispatchBuiltin.1("[", prevFile5);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L3() else L2(dr14);
  // L2(prevFile7):
  //   curLines6 = ld curLines;
  //   curLines7 = force? curLines6;
  //   __1 = ldf `[` in base;
  //   r60 = dyn __1(prevFile7, curLines7);
  //   goto L0(r60);
  // L3():
  //   dx14 = getTryDispatchBuiltinValue(dr14);
  //   goto L0(dx14);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1673683481_2, CCP, RHO);
  // r62 = dyn ifelse(p, p1, p2)
  SEXP Rsh_Fir_array_args115[3];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args115[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names33[3];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ifelse, 3, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L119() else D32()
  // L119()
  goto L119_;

D32_:;
  // deopt 131 [r62]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L119_:;
  // l = ld concordance
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c16 = `is.object`(l)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // if c16 then L121() else L122(r62, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L121()
    goto L121_;
  } else {
  // L122(r62, l)
    Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r62_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L122_;
  }

L120_:;
  // st concordance = dx17
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // ifelse1 = ldf ifelse
  Rsh_Fir_reg_ifelse1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L124() else D33()
  // L124()
  goto L124_;

L121_:;
  // dr16 = tryDispatchBuiltin.0("$<-", l, r62)
  SEXP Rsh_Fir_array_args117[3];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args117[2] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args117);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // if dc8 then L123() else L122(r62, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L123()
    goto L123_;
  } else {
  // L122(r62, dr16)
    Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r62_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr16_;
    goto L122_;
  }

L122_:;
  // r67 = `$<-`(l2, <sym srcFile>, r62)
  SEXP Rsh_Fir_array_args119[3];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args119[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args119[2] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // goto L120(r67)
  // L120(r67)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r67_;
  goto L120_;

L123_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // goto L120(dx16)
  // L120(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L120_;

D33_:;
  // deopt 136 []
  Rsh_Fir_deopt(136, 0, NULL, CCP, RHO);
  return R_NilValue;

L124_:;
  // p3 = prom<V +>{
  //   new2 = ld new;
  //   new3 = force? new2;
  //   checkMissing(new3);
  //   return new3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1673683481_3, CCP, RHO);
  // p4 = prom<V +>{
  //   curLines8 = ld curLines;
  //   curLines9 = force? curLines8;
  //   checkMissing(curLines9);
  //   return curLines9;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1673683481_4, CCP, RHO);
  // p5 = prom<V +>{
  //   prevLines12 = ld prevLines;
  //   prevLines13 = force? prevLines12;
  //   checkMissing(prevLines13);
  //   c17 = `is.object`(prevLines13);
  //   if c17 then L1() else L2(prevLines13);
  // L0(dx19):
  //   return dx19;
  // L1():
  //   dr18 = tryDispatchBuiltin.1("[", prevLines13);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L3() else L2(dr18);
  // L2(prevLines15):
  //   curLines10 = ld curLines;
  //   curLines11 = force? curLines10;
  //   __2 = ldf `[` in base;
  //   r70 = dyn __2(prevLines15, curLines11);
  //   goto L0(r70);
  // L3():
  //   dx18 = getTryDispatchBuiltinValue(dr18);
  //   goto L0(dx18);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1673683481_5, CCP, RHO);
  // r72 = dyn ifelse1(p3, p4, p5)
  SEXP Rsh_Fir_array_args129[3];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args129[2] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ifelse1_, 3, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L125() else D34()
  // L125()
  goto L125_;

D34_:;
  // deopt 140 [r72]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L125_:;
  // l3 = ld concordance
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c18 = `is.object`(l3)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // if c18 then L127() else L128(r72, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L127()
    goto L127_;
  } else {
  // L128(r72, l3)
    Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r72_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L128_;
  }

L126_:;
  // st concordance = dx21
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // goto L22()
  // L22()
  goto L22_;

L127_:;
  // dr20 = tryDispatchBuiltin.0("$<-", l3, r72)
  SEXP Rsh_Fir_array_args131[3];
  Rsh_Fir_array_args131[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args131[2] = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args131);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // if dc10 then L129() else L128(r72, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L129()
    goto L129_;
  } else {
  // L128(r72, dr20)
    Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r72_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr20_;
    goto L128_;
  }

L128_:;
  // r77 = `$<-`(l5, <sym srcLine>, r72)
  SEXP Rsh_Fir_array_args133[3];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args133[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args133[2] = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // goto L126(r74, r77)
  // L126(r74, r77)
  Rsh_Fir_reg_r76_ = Rsh_Fir_reg_r74_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r77_;
  goto L126_;

L129_:;
  // dx20 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // goto L126(r72, dx20)
  // L126(r72, dx20)
  Rsh_Fir_reg_r76_ = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L126_;

D35_:;
  // deopt 146 [concordance13]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_concordance13_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L131_:;
  // concordance14 = force? concordance13
  Rsh_Fir_reg_concordance14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_concordance13_);
  // checkMissing(concordance14)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_concordance14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return concordance14
  return Rsh_Fir_reg_concordance14_;
}
SEXP Rsh_Fir_user_promise_inner1673683481_(SEXP CCP, SEXP RHO) {
  // new = ld new
  Rsh_Fir_reg_new = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // new1 = force? new
  Rsh_Fir_reg_new1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new);
  // checkMissing(new1)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_new1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // return new1
  return Rsh_Fir_reg_new1_;
}
SEXP Rsh_Fir_user_promise_inner1673683481_1(SEXP CCP, SEXP RHO) {
  // curFile = ld curFile
  Rsh_Fir_reg_curFile = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // curFile1 = force? curFile
  Rsh_Fir_reg_curFile1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_curFile);
  // checkMissing(curFile1)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_curFile1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // return curFile1
  return Rsh_Fir_reg_curFile1_;
}
SEXP Rsh_Fir_user_promise_inner1673683481_2(SEXP CCP, SEXP RHO) {
  // prevFile4 = ld prevFile
  Rsh_Fir_reg_prevFile4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // prevFile5 = force? prevFile4
  Rsh_Fir_reg_prevFile5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prevFile4_);
  // checkMissing(prevFile5)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_prevFile5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(prevFile5)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_prevFile5_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // if c15 then L1() else L2(prevFile5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L1()
    goto L1_;
  } else {
  // L2(prevFile5)
    Rsh_Fir_reg_prevFile7_ = Rsh_Fir_reg_prevFile5_;
    goto L2_;
  }

L0_:;
  // return dx15
  return Rsh_Fir_reg_dx15_;

L1_:;
  // dr14 = tryDispatchBuiltin.1("[", prevFile5)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_prevFile5_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args111);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // if dc7 then L3() else L2(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr14)
    Rsh_Fir_reg_prevFile7_ = Rsh_Fir_reg_dr14_;
    goto L2_;
  }

L2_:;
  // curLines6 = ld curLines
  Rsh_Fir_reg_curLines6_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // curLines7 = force? curLines6
  Rsh_Fir_reg_curLines7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_curLines6_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r60 = dyn __1(prevFile7, curLines7)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_prevFile7_;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_curLines7_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L0(r60)
  // L0(r60)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r60_;
  goto L0_;

L3_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // goto L0(dx14)
  // L0(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1673683481_3(SEXP CCP, SEXP RHO) {
  // new2 = ld new
  Rsh_Fir_reg_new2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // new3 = force? new2
  Rsh_Fir_reg_new3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new2_);
  // checkMissing(new3)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_new3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty()));
  // return new3
  return Rsh_Fir_reg_new3_;
}
SEXP Rsh_Fir_user_promise_inner1673683481_4(SEXP CCP, SEXP RHO) {
  // curLines8 = ld curLines
  Rsh_Fir_reg_curLines8_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // curLines9 = force? curLines8
  Rsh_Fir_reg_curLines9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_curLines8_);
  // checkMissing(curLines9)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_curLines9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // return curLines9
  return Rsh_Fir_reg_curLines9_;
}
SEXP Rsh_Fir_user_promise_inner1673683481_5(SEXP CCP, SEXP RHO) {
  // prevLines12 = ld prevLines
  Rsh_Fir_reg_prevLines12_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // prevLines13 = force? prevLines12
  Rsh_Fir_reg_prevLines13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prevLines12_);
  // checkMissing(prevLines13)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_prevLines13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(prevLines13)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_prevLines13_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // if c17 then L1() else L2(prevLines13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L1()
    goto L1_;
  } else {
  // L2(prevLines13)
    Rsh_Fir_reg_prevLines15_ = Rsh_Fir_reg_prevLines13_;
    goto L2_;
  }

L0_:;
  // return dx19
  return Rsh_Fir_reg_dx19_;

L1_:;
  // dr18 = tryDispatchBuiltin.1("[", prevLines13)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_prevLines13_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args125);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // if dc9 then L3() else L2(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr18)
    Rsh_Fir_reg_prevLines15_ = Rsh_Fir_reg_dr18_;
    goto L2_;
  }

L2_:;
  // curLines10 = ld curLines
  Rsh_Fir_reg_curLines10_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // curLines11 = force? curLines10
  Rsh_Fir_reg_curLines11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_curLines10_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r70 = dyn __2(prevLines15, curLines11)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_prevLines15_;
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_curLines11_;
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L0(r70)
  // L0(r70)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r70_;
  goto L0_;

L3_:;
  // dx18 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // goto L0(dx18)
  // L0(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
