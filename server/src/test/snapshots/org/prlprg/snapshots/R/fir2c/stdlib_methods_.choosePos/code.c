#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner888563897_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner888563897_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner888563897_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner888563897_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner888563897_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner888563897_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner888563897_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner888563897_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner888563897_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner888563897_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner888563897_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner888563897_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner888563897_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner888563897_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner888563897_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner888563897_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner799576941_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner799576941_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3743016188_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3743016188_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner888563897
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner888563897_, RHO, CCP);
  // st `.choosePos` = r
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
SEXP Rsh_Fir_user_function_inner888563897_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner888563897 dynamic dispatch ([thisClass, superclasses, subNames, affected])

  return Rsh_Fir_user_version_inner888563897_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner888563897_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner888563897 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner888563897/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_thisClass;  // thisClass
  SEXP Rsh_Fir_reg_superclasses;  // superclasses
  SEXP Rsh_Fir_reg_subNames;  // subNames
  SEXP Rsh_Fir_reg_affected;  // affected
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_thisClass1_;  // thisClass1
  SEXP Rsh_Fir_reg_thisClass2_;  // thisClass2
  SEXP Rsh_Fir_reg_superclasses1_;  // superclasses1
  SEXP Rsh_Fir_reg_superclasses2_;  // superclasses2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_unique;  // unique
  SEXP Rsh_Fir_reg_superclasses3_;  // superclasses3
  SEXP Rsh_Fir_reg_superclasses4_;  // superclasses4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_superclasses6_;  // superclasses6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_affected1_;  // affected1
  SEXP Rsh_Fir_reg_affected2_;  // affected2
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_subNames1_;  // subNames1
  SEXP Rsh_Fir_reg_subNames2_;  // subNames2
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_dups;  // dups
  SEXP Rsh_Fir_reg_dups1_;  // dups1
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_allNames;  // allNames
  SEXP Rsh_Fir_reg_allNames1_;  // allNames1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_allNames2_;  // allNames2
  SEXP Rsh_Fir_reg_allNames3_;  // allNames3
  SEXP Rsh_Fir_reg_what;  // what
  SEXP Rsh_Fir_reg_what1_;  // what1
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_where;  // where
  SEXP Rsh_Fir_reg_where1_;  // where1
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_where2_;  // where2
  SEXP Rsh_Fir_reg_where3_;  // where3
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_candidates;  // candidates
  SEXP Rsh_Fir_reg_candidates1_;  // candidates1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_whatRemove;  // whatRemove
  SEXP Rsh_Fir_reg_whatRemove1_;  // whatRemove1
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_outer;  // outer
  SEXP Rsh_Fir_reg_candidates2_;  // candidates2
  SEXP Rsh_Fir_reg_candidates3_;  // candidates3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_whatRemove3_;  // whatRemove3
  SEXP Rsh_Fir_reg_whatRemove4_;  // whatRemove4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_lapply1_;  // lapply1
  SEXP Rsh_Fir_reg_candidates4_;  // candidates4
  SEXP Rsh_Fir_reg_candidates5_;  // candidates5
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_allNames4_;  // allNames4
  SEXP Rsh_Fir_reg_allNames5_;  // allNames5
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_possibles;  // possibles
  SEXP Rsh_Fir_reg_possibles1_;  // possibles1
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_vector;  // vector
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_possibles2_;  // possibles2
  SEXP Rsh_Fir_reg_possibles3_;  // possibles3
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg_i23_;  // i23
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_vapply;  // vapply
  SEXP Rsh_Fir_reg_subNames3_;  // subNames3
  SEXP Rsh_Fir_reg_subNames4_;  // subNames4
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_problems;  // problems
  SEXP Rsh_Fir_reg_problems1_;  // problems1
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_possibles4_;  // possibles4
  SEXP Rsh_Fir_reg_possibles5_;  // possibles5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_possibles7_;  // possibles7
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_i26_;  // i26
  SEXP Rsh_Fir_reg_i27_;  // i27
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_whichCase;  // whichCase
  SEXP Rsh_Fir_reg_whichCase1_;  // whichCase1
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_i29_;  // i29
  SEXP Rsh_Fir_reg_whichCase3_;  // whichCase3
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_i31_;  // i31
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_score;  // score
  SEXP Rsh_Fir_reg_score1_;  // score1
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_i33_;  // i33
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_i35_;  // i35
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_i36_;  // i36
  SEXP Rsh_Fir_reg_i37_;  // i37
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_i40_;  // i40
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_score2_;  // score2
  SEXP Rsh_Fir_reg_score3_;  // score3
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_candidates6_;  // candidates6
  SEXP Rsh_Fir_reg_candidates7_;  // candidates7
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_i44_;  // i44
  SEXP Rsh_Fir_reg_candidates9_;  // candidates9
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_i47_;  // i47
  SEXP Rsh_Fir_reg_i48_;  // i48
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_lengths;  // lengths
  SEXP Rsh_Fir_reg_scores;  // scores
  SEXP Rsh_Fir_reg_scores1_;  // scores1
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_which_min;  // which_min
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_candidates10_;  // candidates10
  SEXP Rsh_Fir_reg_candidates11_;  // candidates11
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_candidates13_;  // candidates13
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_i51_;  // i51
  SEXP Rsh_Fir_reg_i52_;  // i52
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_scores2_;  // scores2
  SEXP Rsh_Fir_reg_scores3_;  // scores3
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_scores5_;  // scores5
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_i53_;  // i53
  SEXP Rsh_Fir_reg_i54_;  // i54
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_list1_;  // list1
  SEXP Rsh_Fir_reg_r85_;  // r85

  // Bind parameters
  Rsh_Fir_reg_thisClass = PARAMS[0];
  Rsh_Fir_reg_superclasses = PARAMS[1];
  Rsh_Fir_reg_subNames = PARAMS[2];
  Rsh_Fir_reg_affected = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st thisClass = thisClass
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_thisClass, RHO);
  (void)(Rsh_Fir_reg_thisClass);
  // st superclasses = superclasses
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_superclasses, RHO);
  (void)(Rsh_Fir_reg_superclasses);
  // st subNames = subNames
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_subNames, RHO);
  (void)(Rsh_Fir_reg_subNames);
  // st affected = affected
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_affected, RHO);
  (void)(Rsh_Fir_reg_affected);
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L0_:;
  // st candidates = r1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L1_:;
  // st allNames = r4
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // unique = ldf unique
  Rsh_Fir_reg_unique = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L34() else D4()
  // L34()
  goto L34_;

L2_:;
  // st whichCase = r10
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // dups = ld dups
  Rsh_Fir_reg_dups = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L40() else D8()
  // L40()
  goto L40_;

L3_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args2);
  // c2 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if c2 then L41() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L41()
    goto L41_;
  } else {
  // L10()
    goto L10_;
  }

L4_:;
  // c3 = `is.object`(r13)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c3 then L45() else L46(i7, r13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L45()
    goto L45_;
  } else {
  // L46(i7, r13)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r13_;
    goto L46_;
  }

L5_:;
  // st where = dx3
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L53() else D13()
  // L53()
  goto L53_;

L6_:;
  // r23 = `>`(r21, 0.0)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r24 = dyn __1(r20, r23)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L5(i14, r24)
  // L5(i14, r24)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r24_;
  goto L5_;

L7_:;
  // r37 = `==`(r35, 0.0)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c4 then L59() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L59()
    goto L59_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // outer = ldf outer
  Rsh_Fir_reg_outer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L62() else D18()
  // L62()
  goto L62_;

L9_:;
  // goto L3(i20)
  // L3(i20)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i20_;
  goto L3_;

L10_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args9[4];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args9[3] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // st what = x
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym3 = ldf seq_along
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base3 = ldf seq_along in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard3 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L11_:;
  // st scores = r50
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r50_, RHO);
  (void)(Rsh_Fir_reg_r50_);
  // sym9 = ldf seq_along
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base9 = ldf seq_along in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard9 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

L12_:;
  // vector = ldf vector in base
  Rsh_Fir_reg_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r54 = dyn vector("list", r52)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L72() else D24()
  // L72()
  goto L72_;

L13_:;
  // s1 = toForSeq(r56)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // l1 = length(s1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l1_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // i21 = 0
  Rsh_Fir_reg_i21_ = Rsh_const(CCP, 25);
  // goto L14(i21)
  // L14(i21)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i21_;
  goto L14_;

L14_:;
  // i23 = `+`.1(i22, 1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_i23_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args15);
  // c5 = `<`.1(l1, i23)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_i23_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if c5 then L76() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L76()
    goto L76_;
  } else {
  // L21()
    goto L21_;
  }

L15_:;
  // l2 = ld scores
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // c8 = `is.object`(l2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c8 then L84() else L85(i31, dx7, l2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L84()
    goto L84_;
  } else {
  // L85(i31, dx7, l2)
    Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i31_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
    goto L85_;
  }

L16_:;
  // st scores = dx13
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // sym10 = ldf any
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base10 = ldf any in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard10 then L88() else L89()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L88()
    goto L88_;
  } else {
  // L89()
    goto L89_;
  }

L17_:;
  // r68 = `!`(r66)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r68)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c9 then L92() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L92()
    goto L92_;
  } else {
  // L18()
    goto L18_;
  }

L18_:;
  // goto L14(i40)
  // L14(i40)
  Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i40_;
  goto L14_;

L19_:;
  // r70 = `-`(<missing>, dx15)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // r71 = `+`(r70, 1.0)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r71
  return Rsh_Fir_reg_r71_;

L21_:;
  // x1 = `[[`(s1, i23, NULL, TRUE)
  SEXP Rsh_Fir_array_args23[4];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args23[3] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_x1_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // st i = x1
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L77() else D26()
  // L77()
  goto L77_;

L22_:;
  // st i = r75
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r75_, RHO);
  (void)(Rsh_Fir_reg_r75_);
  // sym12 = ldf list
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base12 = ldf list in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard12 then L105() else L106()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L105()
    goto L105_;
  } else {
  // L106()
    goto L106_;
  }

L23_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r80
  return Rsh_Fir_reg_r80_;

L24_:;
  // r82 = `-`(<missing>, dx17)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // r83 = `+`(r82, 1.0)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // scores2 = ld scores
  Rsh_Fir_reg_scores2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L112() else D40()
  // L112()
  goto L112_;

L25_:;
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r85 = dyn list1(r83, dx19)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L117() else D42()
  // L117()
  goto L117_;

L26_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r2 = dyn list()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 0, NULL, NULL, CCP, RHO);
  // check L28() else D0()
  // L28()
  goto L28_;

L27_:;
  // r = dyn base()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L29_:;
  // thisClass1 = ld thisClass
  Rsh_Fir_reg_thisClass1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L31() else D1()
  // L31()
  goto L31_;

L30_:;
  // r3 = dyn base1(<sym thisClass>, <sym superclasses>)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D1_:;
  // deopt 7 [thisClass1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_thisClass1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L31_:;
  // thisClass2 = force? thisClass1
  Rsh_Fir_reg_thisClass2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_thisClass1_);
  // checkMissing(thisClass2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_thisClass2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // superclasses1 = ld superclasses
  Rsh_Fir_reg_superclasses1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L32() else D2()
  // L32()
  goto L32_;

D2_:;
  // deopt 9 [superclasses1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_superclasses1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L32_:;
  // superclasses2 = force? superclasses1
  Rsh_Fir_reg_superclasses2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superclasses1_);
  // checkMissing(superclasses2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_superclasses2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r5 = dyn c(thisClass2, superclasses2)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_thisClass2_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_superclasses2_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L33() else D3()
  // L33()
  goto L33_;

D3_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p = prom<V +>{
  //   superclasses3 = ld superclasses;
  //   superclasses4 = force? superclasses3;
  //   checkMissing(superclasses4);
  //   c1 = `is.object`(superclasses4);
  //   if c1 then L1() else L2(superclasses4);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", superclasses4);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(superclasses6):
  //   affected1 = ld affected;
  //   affected2 = force? affected1;
  //   __ = ldf `[` in base;
  //   r6 = dyn __(superclasses6, affected2);
  //   goto L0(r6);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner888563897_, CCP, RHO);
  // r8 = dyn unique(p)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unique, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L35() else D5()
  // L35()
  goto L35_;

D5_:;
  // deopt 17 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L35_:;
  // st dups = r8
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // sym2 = ldf names
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base2 = ldf names in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard2 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L36_:;
  // subNames1 = ld subNames
  Rsh_Fir_reg_subNames1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L38() else D6()
  // L38()
  goto L38_;

L37_:;
  // r9 = dyn base2(<sym subNames>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L2(r9)
  // L2(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L2_;

D6_:;
  // deopt 21 [subNames1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_subNames1_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L38_:;
  // subNames2 = force? subNames1
  Rsh_Fir_reg_subNames2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subNames1_);
  // checkMissing(subNames2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_subNames2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r11 = dyn names(subNames2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_subNames2_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L39() else D7()
  // L39()
  goto L39_;

D7_:;
  // deopt 24 [r11]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L2(r11)
  // L2(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L2_;

D8_:;
  // deopt 26 [dups]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_dups;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L40_:;
  // dups1 = force? dups
  Rsh_Fir_reg_dups1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dups);
  // checkMissing(dups1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dups1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // s = toForSeq(dups1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dups1_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 25);
  // goto L3(i)
  // L3(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L3_;

L41_:;
  // r43 = clos inner799576941
  Rsh_Fir_reg_r43_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner799576941_, RHO, CCP);
  // st problems = r43
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // lapply1 = ldf lapply
  Rsh_Fir_reg_lapply1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L64() else D20()
  // L64()
  goto L64_;

L42_:;
  // allNames = ld allNames
  Rsh_Fir_reg_allNames = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L44() else D9()
  // L44()
  goto L44_;

L43_:;
  // r12 = dyn base3(<sym allNames>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L4(i2, r12)
  // L4(i2, r12)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L4_;

D9_:;
  // deopt 29 [i2, allNames]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_allNames;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L44_:;
  // allNames1 = force? allNames
  Rsh_Fir_reg_allNames1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allNames);
  // checkMissing(allNames1)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_allNames1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // r14 = seq_along(allNames1)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_allNames1_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L4(i2, r14)
  // L4(i2, r14)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L4_;

L45_:;
  // dr2 = tryDispatchBuiltin.1("[", r13)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args49);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if dc1 then L47() else L46(i7, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L47()
    goto L47_;
  } else {
  // L46(i7, dr2)
    Rsh_Fir_reg_i9_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_r16_ = Rsh_Fir_reg_dr2_;
    goto L46_;
  }

L46_:;
  // sym4 = ldf match
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base4 = ldf match in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard4 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L47_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L5(i7, dx2)
  // L5(i7, dx2)
  Rsh_Fir_reg_i11_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L5_;

L48_:;
  // allNames2 = ld allNames
  Rsh_Fir_reg_allNames2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L50() else D10()
  // L50()
  goto L50_;

L49_:;
  // r19 = dyn base4(<sym allNames>, <sym what>, 0.0)
  SEXP Rsh_Fir_array_args53[3];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args53[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 3, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6(i9, r16, r19)
  // L6(i9, r16, r19)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r19_;
  goto L6_;

D10_:;
  // deopt 34 [i9, r16, allNames2]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_allNames2_;
  Rsh_Fir_deopt(34, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L50_:;
  // allNames3 = force? allNames2
  Rsh_Fir_reg_allNames3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allNames2_);
  // checkMissing(allNames3)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_allNames3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // what = ld what
  Rsh_Fir_reg_what = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L51() else D11()
  // L51()
  goto L51_;

D11_:;
  // deopt 36 [i9, r16, what]
  SEXP Rsh_Fir_array_deopt_stack10[3];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_what;
  Rsh_Fir_deopt(36, 3, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L51_:;
  // what1 = force? what
  Rsh_Fir_reg_what1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what);
  // checkMissing(what1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_what1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r22 = dyn match(allNames3, what1, 0.0, NULL)
  SEXP Rsh_Fir_array_args56[4];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_allNames3_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_what1_;
  Rsh_Fir_array_args56[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args56[3] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names11[4];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L52() else D12()
  // L52()
  goto L52_;

D12_:;
  // deopt 41 [i9, r16, r22]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i9_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(41, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L52_:;
  // goto L6(i9, r16, r22)
  // L6(i9, r16, r22)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i9_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L6_;

D13_:;
  // deopt 47 [i11]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L53_:;
  // p1 = prom<V +>{
  //   sym5 = ldf seq_along;
  //   base5 = ldf seq_along in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r26):
  //   r28 = `-`(<missing>, r26);
  //   return r28;
  // L1():
  //   where = ld where;
  //   where1 = force? where;
  //   checkMissing(where1);
  //   r27 = seq_along(where1);
  //   goto L0(r27);
  // L2():
  //   r25 = dyn base5(<sym where>);
  //   goto L0(r25);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner888563897_1, CCP, RHO);
  // p2 = prom<V +>{
  //   r30 = clos inner799576941;
  //   return r30;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner888563897_2, CCP, RHO);
  // p3 = prom<V +>{
  //   where2 = ld where;
  //   where3 = force? where2;
  //   checkMissing(where3);
  //   return where3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner888563897_3, CCP, RHO);
  // r33 = dyn lapply[, , y](p1, p2, p3)
  SEXP Rsh_Fir_array_args63[3];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args63[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 3, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L54() else D14()
  // L54()
  goto L54_;

D14_:;
  // deopt 52 [i11, r33]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(52, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L54_:;
  // st whatRemove = r33
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r33_, RHO);
  (void)(Rsh_Fir_reg_r33_);
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args64);
  // if guard6 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L55_:;
  // candidates = ld candidates
  Rsh_Fir_reg_candidates = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L57() else D15()
  // L57()
  goto L57_;

L56_:;
  // r34 = dyn base6(<sym candidates>)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L7(i11, r34)
  // L7(i11, r34)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L7_;

D15_:;
  // deopt 56 [i11, candidates]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_candidates;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L57_:;
  // candidates1 = force? candidates
  Rsh_Fir_reg_candidates1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_candidates);
  // checkMissing(candidates1)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_candidates1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r36 = dyn length(candidates1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_candidates1_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L58() else D16()
  // L58()
  goto L58_;

D16_:;
  // deopt 59 [i11, r36]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i11_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(59, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L7(i11, r36)
  // L7(i11, r36)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i11_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L7_;

L59_:;
  // whatRemove = ld whatRemove
  Rsh_Fir_reg_whatRemove = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L60() else D17()
  // L60()
  goto L60_;

D17_:;
  // deopt 62 [i17, whatRemove]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_whatRemove;
  Rsh_Fir_deopt(62, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L60_:;
  // whatRemove1 = force? whatRemove
  Rsh_Fir_reg_whatRemove1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_whatRemove);
  // checkMissing(whatRemove1)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_whatRemove1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // st candidates = whatRemove1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_whatRemove1_, RHO);
  (void)(Rsh_Fir_reg_whatRemove1_);
  // goto L9(i17)
  // L9(i17)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i17_;
  goto L9_;

D18_:;
  // deopt 66 [i17]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L62_:;
  // p4 = prom<V +>{
  //   candidates2 = ld candidates;
  //   candidates3 = force? candidates2;
  //   checkMissing(candidates3);
  //   return candidates3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner888563897_4, CCP, RHO);
  // p5 = prom<V +>{
  //   whatRemove3 = ld whatRemove;
  //   whatRemove4 = force? whatRemove3;
  //   checkMissing(whatRemove4);
  //   return whatRemove4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner888563897_5, CCP, RHO);
  // p6 = prom<V +>{
  //   r40 = clos inner799576941;
  //   return r40;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner888563897_6, CCP, RHO);
  // r42 = dyn outer(p4, p5, p6)
  SEXP Rsh_Fir_array_args71[3];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args71[2] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_outer, 3, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L63() else D19()
  // L63()
  goto L63_;

D19_:;
  // deopt 70 [i17, r42]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(70, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L63_:;
  // st candidates = r42
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r42_, RHO);
  (void)(Rsh_Fir_reg_r42_);
  // goto L9(i17)
  // L9(i17)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i17_;
  goto L9_;

D20_:;
  // deopt 79 []
  Rsh_Fir_deopt(79, 0, NULL, CCP, RHO);
  return R_NilValue;

L64_:;
  // p7 = prom<V +>{
  //   candidates4 = ld candidates;
  //   candidates5 = force? candidates4;
  //   checkMissing(candidates5);
  //   return candidates5;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner888563897_7, CCP, RHO);
  // p8 = prom<V +>{
  //   r45 = clos inner3743016188;
  //   return r45;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner888563897_8, CCP, RHO);
  // p9 = prom<V +>{
  //   allNames4 = ld allNames;
  //   allNames5 = force? allNames4;
  //   checkMissing(allNames5);
  //   return allNames5;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner888563897_9, CCP, RHO);
  // r48 = dyn lapply1[, , names](p7, p8, p9)
  SEXP Rsh_Fir_array_args74[3];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args74[2] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply1_, 3, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L65() else D21()
  // L65()
  goto L65_;

D21_:;
  // deopt 84 [r48]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L65_:;
  // st possibles = r48
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_r48_, RHO);
  (void)(Rsh_Fir_reg_r48_);
  // sym7 = ldf vector
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base7 = ldf vector in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args75);
  // if guard7 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L66_:;
  // sym8 = ldf length
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // base8 = ldf length in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args76);
  // if guard8 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L67_:;
  // r49 = dyn base7("list", <lang length(possibles)>)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L11(r49)
  // L11(r49)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r49_;
  goto L11_;

L68_:;
  // possibles = ld possibles
  Rsh_Fir_reg_possibles = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L70() else D22()
  // L70()
  goto L70_;

L69_:;
  // r51 = dyn base8(<sym possibles>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L12(r51)
  // L12(r51)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L12_;

D22_:;
  // deopt 91 [possibles]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_possibles;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L70_:;
  // possibles1 = force? possibles
  Rsh_Fir_reg_possibles1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_possibles);
  // checkMissing(possibles1)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_possibles1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r53 = dyn length1(possibles1)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_possibles1_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L71() else D23()
  // L71()
  goto L71_;

D23_:;
  // deopt 94 [r53]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L71_:;
  // goto L12(r53)
  // L12(r53)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r53_;
  goto L12_;

D24_:;
  // deopt 96 [r54]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L11(r54)
  // L11(r54)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r54_;
  goto L11_;

L73_:;
  // possibles2 = ld possibles
  Rsh_Fir_reg_possibles2_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L75() else D25()
  // L75()
  goto L75_;

L74_:;
  // r55 = dyn base9(<sym possibles>)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L13(r55)
  // L13(r55)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r55_;
  goto L13_;

D25_:;
  // deopt 99 [possibles2]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_possibles2_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L75_:;
  // possibles3 = force? possibles2
  Rsh_Fir_reg_possibles3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_possibles2_);
  // checkMissing(possibles3)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_possibles3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // r57 = seq_along(possibles3)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_possibles3_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // goto L13(r57)
  // L13(r57)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r57_;
  goto L13_;

L76_:;
  // sym11 = ldf `which.min`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base11 = ldf `which.min` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args84);
  // if guard11 then L100() else L101()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L100()
    goto L100_;
  } else {
  // L101()
    goto L101_;
  }

D26_:;
  // deopt 103 [i23]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L77_:;
  // p10 = prom<V +>{
  //   subNames3 = ld subNames;
  //   subNames4 = force? subNames3;
  //   checkMissing(subNames4);
  //   return subNames4;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner888563897_10, CCP, RHO);
  // p11 = prom<V +>{
  //   problems = ld problems;
  //   problems1 = force? problems;
  //   checkMissing(problems1);
  //   return problems1;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner888563897_11, CCP, RHO);
  // p12 = prom<V +>{
  //   possibles4 = ld possibles;
  //   possibles5 = force? possibles4;
  //   checkMissing(possibles5);
  //   c6 = `is.object`(possibles5);
  //   if c6 then L1() else L2(possibles5);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[[", possibles5);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(possibles7):
  //   i26 = ld i;
  //   i27 = force? i26;
  //   __2 = ldf `[[` in base;
  //   r60 = dyn __2(possibles7, i27);
  //   goto L0(r60);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner888563897_12, CCP, RHO);
  // r62 = dyn vapply[, , , x](p10, p11, NA_LGL, p12)
  SEXP Rsh_Fir_array_args93[4];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args93[2] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args93[3] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names23[4];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_array_arg_names23[3] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 4, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L78() else D27()
  // L78()
  goto L78_;

D27_:;
  // deopt 109 [i23, r62]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(109, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L78_:;
  // st score = r62
  Rsh_Fir_store(Rsh_const(CCP, 45), Rsh_Fir_reg_r62_, RHO);
  (void)(Rsh_Fir_reg_r62_);
  // whichCase = ld whichCase
  Rsh_Fir_reg_whichCase = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L79() else D28()
  // L79()
  goto L79_;

D28_:;
  // deopt 111 [i23, whichCase]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i23_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_whichCase;
  Rsh_Fir_deopt(111, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L79_:;
  // whichCase1 = force? whichCase
  Rsh_Fir_reg_whichCase1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_whichCase);
  // checkMissing(whichCase1)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_whichCase1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(whichCase1)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_whichCase1_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // if c7 then L80() else L81(i23, whichCase1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L80()
    goto L80_;
  } else {
  // L81(i23, whichCase1)
    Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i23_;
    Rsh_Fir_reg_whichCase3_ = Rsh_Fir_reg_whichCase1_;
    goto L81_;
  }

L80_:;
  // dr6 = tryDispatchBuiltin.1("[", whichCase1)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_whichCase1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args96);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if dc3 then L82() else L81(i23, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L82()
    goto L82_;
  } else {
  // L81(i23, dr6)
    Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i23_;
    Rsh_Fir_reg_whichCase3_ = Rsh_Fir_reg_dr6_;
    goto L81_;
  }

L81_:;
  // score = ld score
  Rsh_Fir_reg_score = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L83() else D29()
  // L83()
  goto L83_;

L82_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // goto L15(i23, dx6)
  // L15(i23, dx6)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i23_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L15_;

D29_:;
  // deopt 113 [i29, whichCase3, score]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i29_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_whichCase3_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_score;
  Rsh_Fir_deopt(113, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L83_:;
  // score1 = force? score
  Rsh_Fir_reg_score1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_score);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r63 = dyn __3(whichCase3, score1)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_whichCase3_;
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_score1_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L15(i29, r63)
  // L15(i29, r63)
  Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r63_;
  goto L15_;

L84_:;
  // dr8 = tryDispatchBuiltin.0("[[<-", l2, dx7)
  SEXP Rsh_Fir_array_args100[3];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args100[2] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args100);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if dc4 then L86() else L85(i31, dx7, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L86()
    goto L86_;
  } else {
  // L85(i31, dx7, dr8)
    Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i31_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_dr8_;
    goto L85_;
  }

L85_:;
  // i36 = ld i
  Rsh_Fir_reg_i36_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L87() else D30()
  // L87()
  goto L87_;

L86_:;
  // dx11 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // goto L16(i31, dx11)
  // L16(i31, dx11)
  Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i31_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
  goto L16_;

D30_:;
  // deopt 117 [i33, dx9, l4, dx7, i36]
  SEXP Rsh_Fir_array_deopt_stack28[5];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i33_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack28[3] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_deopt_stack28[4] = Rsh_Fir_reg_i36_;
  Rsh_Fir_deopt(117, 5, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L87_:;
  // i37 = force? i36
  Rsh_Fir_reg_i37_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i36_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r64 = dyn ____(l4, dx7, i37)
  SEXP Rsh_Fir_array_args103[3];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args103[2] = Rsh_Fir_reg_i37_;
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L16(i33, r64)
  // L16(i33, r64)
  Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i33_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r64_;
  goto L16_;

L88_:;
  // score2 = ld score
  Rsh_Fir_reg_score2_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L90() else D31()
  // L90()
  goto L90_;

L89_:;
  // r65 = dyn base10(<sym score>)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L17(i35, r65)
  // L17(i35, r65)
  Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i35_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r65_;
  goto L17_;

D31_:;
  // deopt 123 [i35, score2]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_score2_;
  Rsh_Fir_deopt(123, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L90_:;
  // score3 = force? score2
  Rsh_Fir_reg_score3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_score2_);
  // checkMissing(score3)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_score3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r67 = dyn any(score3)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_score3_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L91() else D32()
  // L91()
  goto L91_;

D32_:;
  // deopt 126 [i35, r67]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(126, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L91_:;
  // goto L17(i35, r67)
  // L17(i35, r67)
  Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i35_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r67_;
  goto L17_;

L92_:;
  // candidates6 = ld candidates
  Rsh_Fir_reg_candidates6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L93() else D33()
  // L93()
  goto L93_;

D33_:;
  // deopt 128 [i40, candidates6]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i40_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_candidates6_;
  Rsh_Fir_deopt(128, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L93_:;
  // candidates7 = force? candidates6
  Rsh_Fir_reg_candidates7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_candidates6_);
  // checkMissing(candidates7)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_candidates7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(candidates7)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_candidates7_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // if c10 then L94() else L95(i40, candidates7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L94()
    goto L94_;
  } else {
  // L95(i40, candidates7)
    Rsh_Fir_reg_i44_ = Rsh_Fir_reg_i40_;
    Rsh_Fir_reg_candidates9_ = Rsh_Fir_reg_candidates7_;
    goto L95_;
  }

L94_:;
  // dr10 = tryDispatchBuiltin.1("[[", candidates7)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_candidates7_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args109);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // if dc5 then L96() else L95(i40, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L96()
    goto L96_;
  } else {
  // L95(i40, dr10)
    Rsh_Fir_reg_i44_ = Rsh_Fir_reg_i40_;
    Rsh_Fir_reg_candidates9_ = Rsh_Fir_reg_dr10_;
    goto L95_;
  }

L95_:;
  // i47 = ld i
  Rsh_Fir_reg_i47_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L97() else D34()
  // L97()
  goto L97_;

L96_:;
  // dx14 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // goto L19(dx14)
  // L19(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L19_;

D34_:;
  // deopt 130 [i44, candidates9, i47]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i44_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_candidates9_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_i47_;
  Rsh_Fir_deopt(130, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L97_:;
  // i48 = force? i47
  Rsh_Fir_reg_i48_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i47_);
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r69 = dyn __4(candidates9, i48)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_candidates9_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_i48_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L19(r69)
  // L19(r69)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r69_;
  goto L19_;

L100_:;
  // lengths = ldf lengths
  Rsh_Fir_reg_lengths = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L102() else D35()
  // L102()
  goto L102_;

L101_:;
  // r74 = dyn base11(<lang lengths(scores)>)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L22(r74)
  // L22(r74)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r74_;
  goto L22_;

D35_:;
  // deopt 145 []
  Rsh_Fir_deopt(145, 0, NULL, CCP, RHO);
  return R_NilValue;

L102_:;
  // p13 = prom<V +>{
  //   scores = ld scores;
  //   scores1 = force? scores;
  //   checkMissing(scores1);
  //   return scores1;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner888563897_13, CCP, RHO);
  // r77 = dyn lengths(p13)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lengths, 1, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L103() else D36()
  // L103()
  goto L103_;

D36_:;
  // deopt 147 [r77]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(147, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L103_:;
  // which_min = ldf `which.min` in base
  Rsh_Fir_reg_which_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r78 = dyn which_min(r77)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which_min, 1, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L104() else D37()
  // L104()
  goto L104_;

D37_:;
  // deopt 149 [r78]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(149, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L104_:;
  // goto L22(r78)
  // L22(r78)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r78_;
  goto L22_;

L105_:;
  // candidates10 = ld candidates
  Rsh_Fir_reg_candidates10_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L107() else D38()
  // L107()
  goto L107_;

L106_:;
  // r79 = dyn base12(<lang `+`(`-`(`[[`(candidates, i)), 1.0)>, <lang `[[`(scores, i)>)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args117[1] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 2, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L23(r79)
  // L23(r79)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r79_;
  goto L23_;

D38_:;
  // deopt 153 [candidates10]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_candidates10_;
  Rsh_Fir_deopt(153, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L107_:;
  // candidates11 = force? candidates10
  Rsh_Fir_reg_candidates11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_candidates10_);
  // checkMissing(candidates11)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_candidates11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(candidates11)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_candidates11_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // if c11 then L108() else L109(candidates11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L108()
    goto L108_;
  } else {
  // L109(candidates11)
    Rsh_Fir_reg_candidates13_ = Rsh_Fir_reg_candidates11_;
    goto L109_;
  }

L108_:;
  // dr12 = tryDispatchBuiltin.1("[[", candidates11)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_candidates11_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args120);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if dc6 then L110() else L109(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L110()
    goto L110_;
  } else {
  // L109(dr12)
    Rsh_Fir_reg_candidates13_ = Rsh_Fir_reg_dr12_;
    goto L109_;
  }

L109_:;
  // i51 = ld i
  Rsh_Fir_reg_i51_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L111() else D39()
  // L111()
  goto L111_;

L110_:;
  // dx16 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // goto L24(dx16)
  // L24(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L24_;

D39_:;
  // deopt 155 [candidates13, i51]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_candidates13_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_i51_;
  Rsh_Fir_deopt(155, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L111_:;
  // i52 = force? i51
  Rsh_Fir_reg_i52_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i51_);
  // __5 = ldf `[[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r81 = dyn __5(candidates13, i52)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_candidates13_;
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_i52_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L24(r81)
  // L24(r81)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r81_;
  goto L24_;

D40_:;
  // deopt 161 [scores2]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_scores2_;
  Rsh_Fir_deopt(161, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L112_:;
  // scores3 = force? scores2
  Rsh_Fir_reg_scores3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scores2_);
  // checkMissing(scores3)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_scores3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(scores3)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_scores3_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // if c12 then L113() else L114(scores3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L113()
    goto L113_;
  } else {
  // L114(scores3)
    Rsh_Fir_reg_scores5_ = Rsh_Fir_reg_scores3_;
    goto L114_;
  }

L113_:;
  // dr14 = tryDispatchBuiltin.1("[[", scores3)
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_scores3_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args126);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // if dc7 then L115() else L114(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L115()
    goto L115_;
  } else {
  // L114(dr14)
    Rsh_Fir_reg_scores5_ = Rsh_Fir_reg_dr14_;
    goto L114_;
  }

L114_:;
  // i53 = ld i
  Rsh_Fir_reg_i53_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L116() else D41()
  // L116()
  goto L116_;

L115_:;
  // dx18 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // goto L25(dx18)
  // L25(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L25_;

D41_:;
  // deopt 163 [scores5, i53]
  SEXP Rsh_Fir_array_deopt_stack38[2];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_scores5_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_i53_;
  Rsh_Fir_deopt(163, 2, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L116_:;
  // i54 = force? i53
  Rsh_Fir_reg_i54_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i53_);
  // __6 = ldf `[[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r84 = dyn __6(scores5, i54)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_scores5_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_i54_;
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L25(r84)
  // L25(r84)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r84_;
  goto L25_;

D42_:;
  // deopt 167 [r85]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_deopt(167, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L117_:;
  // goto L23(r85)
  // L23(r85)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r85_;
  goto L23_;
}
SEXP Rsh_Fir_user_promise_inner888563897_(SEXP CCP, SEXP RHO) {
  // superclasses3 = ld superclasses
  Rsh_Fir_reg_superclasses3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // superclasses4 = force? superclasses3
  Rsh_Fir_reg_superclasses4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_superclasses3_);
  // checkMissing(superclasses4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_superclasses4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(superclasses4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_superclasses4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c1 then L1() else L2(superclasses4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2(superclasses4)
    Rsh_Fir_reg_superclasses6_ = Rsh_Fir_reg_superclasses4_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", superclasses4)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_superclasses4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args34);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_superclasses6_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // affected1 = ld affected
  Rsh_Fir_reg_affected1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // affected2 = force? affected1
  Rsh_Fir_reg_affected2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_affected1_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r6 = dyn __(superclasses6, affected2)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_superclasses6_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_affected2_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r6_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner888563897_1(SEXP CCP, SEXP RHO) {
  // sym5 = ldf seq_along
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base5 = ldf seq_along in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r28 = `-`(<missing>, r26)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // return r28
  return Rsh_Fir_reg_r28_;

L1_:;
  // where = ld where
  Rsh_Fir_reg_where = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // where1 = force? where
  Rsh_Fir_reg_where1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where);
  // checkMissing(where1)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_where1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // r27 = seq_along(where1)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_where1_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L0_;

L2_:;
  // r25 = dyn base5(<sym where>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner888563897_2(SEXP CCP, SEXP RHO) {
  // r30 = clos inner799576941
  Rsh_Fir_reg_r30_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner799576941_, RHO, CCP);
  // return r30
  return Rsh_Fir_reg_r30_;
}
SEXP Rsh_Fir_user_promise_inner888563897_3(SEXP CCP, SEXP RHO) {
  // where2 = ld where
  Rsh_Fir_reg_where2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // where3 = force? where2
  Rsh_Fir_reg_where3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where2_);
  // checkMissing(where3)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_where3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return where3
  return Rsh_Fir_reg_where3_;
}
SEXP Rsh_Fir_user_promise_inner888563897_4(SEXP CCP, SEXP RHO) {
  // candidates2 = ld candidates
  Rsh_Fir_reg_candidates2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // candidates3 = force? candidates2
  Rsh_Fir_reg_candidates3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_candidates2_);
  // checkMissing(candidates3)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_candidates3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // return candidates3
  return Rsh_Fir_reg_candidates3_;
}
SEXP Rsh_Fir_user_promise_inner888563897_5(SEXP CCP, SEXP RHO) {
  // whatRemove3 = ld whatRemove
  Rsh_Fir_reg_whatRemove3_ = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // whatRemove4 = force? whatRemove3
  Rsh_Fir_reg_whatRemove4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_whatRemove3_);
  // checkMissing(whatRemove4)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_whatRemove4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // return whatRemove4
  return Rsh_Fir_reg_whatRemove4_;
}
SEXP Rsh_Fir_user_promise_inner888563897_6(SEXP CCP, SEXP RHO) {
  // r40 = clos inner799576941
  Rsh_Fir_reg_r40_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner799576941_, RHO, CCP);
  // return r40
  return Rsh_Fir_reg_r40_;
}
SEXP Rsh_Fir_user_promise_inner888563897_7(SEXP CCP, SEXP RHO) {
  // candidates4 = ld candidates
  Rsh_Fir_reg_candidates4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // candidates5 = force? candidates4
  Rsh_Fir_reg_candidates5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_candidates4_);
  // checkMissing(candidates5)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_candidates5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // return candidates5
  return Rsh_Fir_reg_candidates5_;
}
SEXP Rsh_Fir_user_promise_inner888563897_8(SEXP CCP, SEXP RHO) {
  // r45 = clos inner3743016188
  Rsh_Fir_reg_r45_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3743016188_, RHO, CCP);
  // return r45
  return Rsh_Fir_reg_r45_;
}
SEXP Rsh_Fir_user_promise_inner888563897_9(SEXP CCP, SEXP RHO) {
  // allNames4 = ld allNames
  Rsh_Fir_reg_allNames4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // allNames5 = force? allNames4
  Rsh_Fir_reg_allNames5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allNames4_);
  // checkMissing(allNames5)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_allNames5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // return allNames5
  return Rsh_Fir_reg_allNames5_;
}
SEXP Rsh_Fir_user_promise_inner888563897_10(SEXP CCP, SEXP RHO) {
  // subNames3 = ld subNames
  Rsh_Fir_reg_subNames3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // subNames4 = force? subNames3
  Rsh_Fir_reg_subNames4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subNames3_);
  // checkMissing(subNames4)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_subNames4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // return subNames4
  return Rsh_Fir_reg_subNames4_;
}
SEXP Rsh_Fir_user_promise_inner888563897_11(SEXP CCP, SEXP RHO) {
  // problems = ld problems
  Rsh_Fir_reg_problems = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // problems1 = force? problems
  Rsh_Fir_reg_problems1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_problems);
  // checkMissing(problems1)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_problems1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // return problems1
  return Rsh_Fir_reg_problems1_;
}
SEXP Rsh_Fir_user_promise_inner888563897_12(SEXP CCP, SEXP RHO) {
  // possibles4 = ld possibles
  Rsh_Fir_reg_possibles4_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // possibles5 = force? possibles4
  Rsh_Fir_reg_possibles5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_possibles4_);
  // checkMissing(possibles5)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_possibles5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(possibles5)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_possibles5_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if c6 then L1() else L2(possibles5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L1()
    goto L1_;
  } else {
  // L2(possibles5)
    Rsh_Fir_reg_possibles7_ = Rsh_Fir_reg_possibles5_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[[", possibles5)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_possibles5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args89);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_possibles7_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // i26 = ld i
  Rsh_Fir_reg_i26_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // i27 = force? i26
  Rsh_Fir_reg_i27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i26_);
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r60 = dyn __2(possibles7, i27)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_possibles7_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_i27_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r60)
  // L0(r60)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r60_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner888563897_13(SEXP CCP, SEXP RHO) {
  // scores = ld scores
  Rsh_Fir_reg_scores = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // scores1 = force? scores
  Rsh_Fir_reg_scores1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_scores);
  // checkMissing(scores1)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_scores1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // return scores1
  return Rsh_Fir_reg_scores1_;
}
SEXP Rsh_Fir_user_function_inner799576941_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner799576941 dynamic dispatch ([x, y])

  return Rsh_Fir_user_version_inner799576941_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner799576941_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner799576941 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner799576941/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x1;  // x
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_y2_;  // y2
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_y4_;  // y4
  SEXP Rsh_Fir_reg_dr1;  // dr
  SEXP Rsh_Fir_reg_dc1;  // dc
  SEXP Rsh_Fir_reg_dx1;  // dx
  SEXP Rsh_Fir_reg_dx1_1;  // dx1
  SEXP Rsh_Fir_reg_x1_1;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg___1;  // __
  SEXP Rsh_Fir_reg_r2;  // r

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_y = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // st y = y
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_y, RHO);
  (void)(Rsh_Fir_reg_y);
  // y1 = ld y
  Rsh_Fir_reg_y1_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_1;

D0_:;
  // deopt 0 [y1]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_y1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L1_:;
  // y2 = force? y1
  Rsh_Fir_reg_y2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y1_);
  // checkMissing(y2)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_y2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // c = `is.object`(y2)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_y2_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // if c then L2() else L3(y2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L2()
    goto L2_;
  } else {
  // L3(y2)
    Rsh_Fir_reg_y4_ = Rsh_Fir_reg_y2_;
    goto L3_;
  }

L2_:;
  // dr = tryDispatchBuiltin.1("[", y2)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_y2_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args132);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // if dc then L4() else L3(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr)
    Rsh_Fir_reg_y4_ = Rsh_Fir_reg_dr1;
    goto L3_;
  }

L3_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

L4_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L0_;

D1_:;
  // deopt 2 [y4, x1]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_y4_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L5_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r = dyn __(y4, x2)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_y4_;
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r2;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner3743016188_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3743016188 dynamic dispatch ([x, names])

  return Rsh_Fir_user_version_inner3743016188_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3743016188_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3743016188 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3743016188/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x2;  // x
  SEXP Rsh_Fir_reg_names1;  // names
  SEXP Rsh_Fir_reg_names1_;  // names1
  SEXP Rsh_Fir_reg_names2_;  // names2
  SEXP Rsh_Fir_reg_c2;  // c
  SEXP Rsh_Fir_reg_names4_;  // names4
  SEXP Rsh_Fir_reg_dr2;  // dr
  SEXP Rsh_Fir_reg_dc2;  // dc
  SEXP Rsh_Fir_reg_dx2;  // dx
  SEXP Rsh_Fir_reg_dx1_2;  // dx1
  SEXP Rsh_Fir_reg_x1_2;  // x1
  SEXP Rsh_Fir_reg_x2_1;  // x2
  SEXP Rsh_Fir_reg_r3;  // r
  SEXP Rsh_Fir_reg___2;  // __
  SEXP Rsh_Fir_reg_r1_1;  // r1

  // Bind parameters
  Rsh_Fir_reg_x2 = PARAMS[0];
  Rsh_Fir_reg_names1 = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_x2, RHO);
  (void)(Rsh_Fir_reg_x2);
  // st names = names
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_names1, RHO);
  (void)(Rsh_Fir_reg_names1);
  // names1 = ld names
  Rsh_Fir_reg_names1_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return dx1
  return Rsh_Fir_reg_dx1_2;

D0_:;
  // deopt 0 [names1]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_names1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L1_:;
  // names2 = force? names1
  Rsh_Fir_reg_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_names1_);
  // checkMissing(names2)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // c = `is.object`(names2)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_names2_;
  Rsh_Fir_reg_c2 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // if c then L2() else L3(names2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2)) {
  // L2()
    goto L2_;
  } else {
  // L3(names2)
    Rsh_Fir_reg_names4_ = Rsh_Fir_reg_names2_;
    goto L3_;
  }

L2_:;
  // dr = tryDispatchBuiltin.1("[", names2)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_names2_;
  Rsh_Fir_reg_dr2 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args138);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dr2;
  Rsh_Fir_reg_dc2 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // if dc then L4() else L3(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr)
    Rsh_Fir_reg_names4_ = Rsh_Fir_reg_dr2;
    goto L3_;
  }

L3_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_2 = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

L4_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_dr2;
  Rsh_Fir_reg_dx2 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_2 = Rsh_Fir_reg_dx2;
  goto L0_;

D1_:;
  // deopt 2 [names4, x1]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_names4_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_x1_2;
  Rsh_Fir_deopt(2, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L5_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_2);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // r = `-`(<missing>, x2)
  SEXP Rsh_Fir_array_args142[2];
  Rsh_Fir_array_args142[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args142[1] = Rsh_Fir_reg_x2_1;
  Rsh_Fir_reg_r3 = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r1 = dyn __(names4, r)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_names4_;
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_r3;
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2, 2, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_dx1_2 = Rsh_Fir_reg_r1_1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
