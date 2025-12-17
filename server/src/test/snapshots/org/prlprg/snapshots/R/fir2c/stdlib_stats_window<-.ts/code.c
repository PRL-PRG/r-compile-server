#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2501665066_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501665066_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2501665066_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501665066_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501665066_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501665066_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501665066_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501665066_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501665066_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501665066_7(SEXP CCP, SEXP RHO);
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
  // r = clos inner2501665066
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501665066_, RHO, CCP);
  // st `.ts` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // st window = r
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner2501665066_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501665066 dynamic dispatch ([x, start, end, frequency, deltat, `...`, value])

  return Rsh_Fir_user_version_inner2501665066_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501665066_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501665066 version 0 (*, *, *, *, *, dots, * -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner2501665066/0: expected 7, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_start;  // start
  SEXP Rsh_Fir_reg_end;  // end
  SEXP Rsh_Fir_reg_frequency;  // frequency
  SEXP Rsh_Fir_reg_deltat;  // deltat
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_tsp;  // tsp
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_match_call;  // match_call
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_quote;  // quote
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_eval_parent;  // eval_parent
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_tsp1_;  // tsp1
  SEXP Rsh_Fir_reg_xx;  // xx
  SEXP Rsh_Fir_reg_xx1_;  // xx1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_xxtsp;  // xxtsp
  SEXP Rsh_Fir_reg_xxtsp1_;  // xxtsp1
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_xxtsp3_;  // xxtsp3
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_xxtsp4_;  // xxtsp4
  SEXP Rsh_Fir_reg_xxtsp5_;  // xxtsp5
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_xxtsp7_;  // xxtsp7
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_start1_;  // start1
  SEXP Rsh_Fir_reg_start2_;  // start2
  SEXP Rsh_Fir_reg_end1_;  // end1
  SEXP Rsh_Fir_reg_end2_;  // end2
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_start3_;  // start3
  SEXP Rsh_Fir_reg_start4_;  // start4
  SEXP Rsh_Fir_reg_xtsp;  // xtsp
  SEXP Rsh_Fir_reg_xtsp1_;  // xtsp1
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_start6_;  // start6
  SEXP Rsh_Fir_reg_xtsp3_;  // xtsp3
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_start8_;  // start8
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_end3_;  // end3
  SEXP Rsh_Fir_reg_end4_;  // end4
  SEXP Rsh_Fir_reg_xtsp4_;  // xtsp4
  SEXP Rsh_Fir_reg_xtsp5_;  // xtsp5
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_end6_;  // end6
  SEXP Rsh_Fir_reg_xtsp7_;  // xtsp7
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_end8_;  // end8
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_window;  // window
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_start9_;  // start9
  SEXP Rsh_Fir_reg_start10_;  // start10
  SEXP Rsh_Fir_reg_xtsp8_;  // xtsp8
  SEXP Rsh_Fir_reg_xtsp9_;  // xtsp9
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_xtsp11_;  // xtsp11
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_min;  // min
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_end9_;  // end9
  SEXP Rsh_Fir_reg_end10_;  // end10
  SEXP Rsh_Fir_reg_xtsp12_;  // xtsp12
  SEXP Rsh_Fir_reg_xtsp13_;  // xtsp13
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_xtsp15_;  // xtsp15
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_max;  // max
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_xtsp16_;  // xtsp16
  SEXP Rsh_Fir_reg_xtsp17_;  // xtsp17
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_xtsp19_;  // xtsp19
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_round;  // round
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_round1_;  // round1
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_xxtimes;  // xxtimes
  SEXP Rsh_Fir_reg_xxtimes1_;  // xxtimes1
  SEXP Rsh_Fir_reg_xtimes;  // xtimes
  SEXP Rsh_Fir_reg_xtimes1_;  // xtimes1
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_ind;  // ind
  SEXP Rsh_Fir_reg_ind1_;  // ind1
  SEXP Rsh_Fir_reg_anyNA;  // anyNA
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_ind2_;  // ind2
  SEXP Rsh_Fir_reg_ind3_;  // ind3
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_NROW;  // NROW
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_val_len;  // val_len
  SEXP Rsh_Fir_reg_val_len1_;  // val_len1
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_val_len2_;  // val_len2
  SEXP Rsh_Fir_reg_val_len3_;  // val_len3
  SEXP Rsh_Fir_reg_len;  // len
  SEXP Rsh_Fir_reg_len1_;  // len1
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_stop3_;  // stop3
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_val_len4_;  // val_len4
  SEXP Rsh_Fir_reg_val_len5_;  // val_len5
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_len2_;  // len2
  SEXP Rsh_Fir_reg_len3_;  // len3
  SEXP Rsh_Fir_reg_val_len6_;  // val_len6
  SEXP Rsh_Fir_reg_val_len7_;  // val_len7
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_stop4_;  // stop4
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_NCOL;  // NCOL
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_value3_;  // value3
  SEXP Rsh_Fir_reg_value4_;  // value4
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_value6_;  // value6
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_value8_;  // value8
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_ind4_;  // ind4
  SEXP Rsh_Fir_reg_ind5_;  // ind5
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_value10_;  // value10
  SEXP Rsh_Fir_reg_value11_;  // value11
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_value13_;  // value13
  SEXP Rsh_Fir_reg_l17_;  // l17
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_value15_;  // value15
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_ind6_;  // ind6
  SEXP Rsh_Fir_reg_ind7_;  // ind7
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_start = PARAMS[1];
  Rsh_Fir_reg_end = PARAMS[2];
  Rsh_Fir_reg_frequency = PARAMS[3];
  Rsh_Fir_reg_deltat = PARAMS[4];
  Rsh_Fir_reg_ddd = PARAMS[5];
  Rsh_Fir_reg_value = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st start = start
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_start, RHO);
  (void)(Rsh_Fir_reg_start);
  // st end = end
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_end, RHO);
  (void)(Rsh_Fir_reg_end);
  // st frequency = frequency
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_frequency, RHO);
  (void)(Rsh_Fir_reg_frequency);
  // st deltat = deltat
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_deltat, RHO);
  (void)(Rsh_Fir_reg_deltat);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // st value = value
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_value, RHO);
  (void)(Rsh_Fir_reg_value);
  // tsp = ldf tsp
  Rsh_Fir_reg_tsp = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L30() else D0()
  // L30()
  goto L30_;

L0_:;
  // l9 = ld m
  Rsh_Fir_reg_l9_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // c3 = `is.object`(l9)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c3 then L49() else L50(r15, l9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L49()
    goto L49_;
  } else {
  // L50(r15, l9)
    Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r15_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    goto L50_;
  }

L1_:;
  // st m = dx7
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // eval_parent = ldf `eval.parent`
  Rsh_Fir_reg_eval_parent = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L52() else D5()
  // L52()
  goto L52_;

L2_:;
  // st start = dx9
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // xxtsp4 = ld xxtsp
  Rsh_Fir_reg_xxtsp4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L60() else D10()
  // L60()
  goto L60_;

L3_:;
  // st end = dx11
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // start1 = ld start
  Rsh_Fir_reg_start1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L64() else D11()
  // L64()
  goto L64_;

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // start3 = ld start
  Rsh_Fir_reg_start3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L70() else D15()
  // L70()
  goto L70_;

L6_:;
  // r32 = `<`(start8, dx13)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_start8_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c8 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c8 then L7(c8) else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L7(c8)
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c8_;
    goto L7_;
  } else {
  // L75()
    goto L75_;
  }

L7_:;
  // c19 = `as.logical`(c9)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c19 then L82() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L82()
    goto L82_;
  } else {
  // L9()
    goto L9_;
  }

L8_:;
  // r34 = `>`(end8, dx15)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_end8_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c16 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c17 = `||`(c15, c16)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L7(c17)
  // L7(c17)
  Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c17_;
  goto L7_;

L9_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // xtsp16 = ld xtsp
  Rsh_Fir_reg_xtsp16_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L88() else D23()
  // L88()
  goto L88_;

L11_:;
  // st xfreq = dx21
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // sym3 = ldf round
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base3 = ldf round in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard3 then L92() else L93()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L92()
    goto L92_;
  } else {
  // L93()
    goto L93_;
  }

L12_:;
  // st xtimes = r51
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r51_, RHO);
  (void)(Rsh_Fir_reg_r51_);
  // sym4 = ldf round
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base4 = ldf round in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard4 then L94() else L95()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L94()
    goto L94_;
  } else {
  // L95()
    goto L95_;
  }

L13_:;
  // st xxtimes = r54
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // sym5 = ldf match
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base5 = ldf match in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard5 then L96() else L97()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L96()
    goto L96_;
  } else {
  // L97()
    goto L97_;
  }

L14_:;
  // st ind = r57
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r57_, RHO);
  (void)(Rsh_Fir_reg_r57_);
  // sym6 = ldf anyNA
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base6 = ldf anyNA in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard6 then L101() else L102()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L101()
    goto L101_;
  } else {
  // L102()
    goto L102_;
  }

L15_:;
  // c23 = `as.logical`(r60)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c23 then L105() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L105()
    goto L105_;
  } else {
  // L16()
    goto L16_;
  }

L16_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // sym7 = ldf length
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base7 = ldf length in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard7 then L109() else L110()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L109()
    goto L109_;
  } else {
  // L110()
    goto L110_;
  }

L18_:;
  // st len = r65
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r65_, RHO);
  (void)(Rsh_Fir_reg_r65_);
  // NROW = ldf NROW
  Rsh_Fir_reg_NROW = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L113() else D33()
  // L113()
  goto L113_;

L19_:;
  // goto L20()
  // L20()
  goto L20_;

L20_:;
  // val_len2 = ld val_len
  Rsh_Fir_reg_val_len2_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L120() else D38()
  // L120()
  goto L120_;

L21_:;
  // goto L22()
  // L22()
  goto L22_;

L22_:;
  // val_len4 = ld val_len
  Rsh_Fir_reg_val_len4_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L126() else D42()
  // L126()
  goto L126_;

L23_:;
  // c32 = `as.logical`(c28)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_c28_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c32 then L132() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L132()
    goto L132_;
  } else {
  // L24()
    goto L24_;
  }

L24_:;
  // goto L25()
  // L25()
  goto L25_;

L25_:;
  // NCOL = ldf NCOL
  Rsh_Fir_reg_NCOL = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L136() else D48()
  // L136()
  goto L136_;

L26_:;
  // value10 = ld value
  Rsh_Fir_reg_value10_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L145() else D52()
  // L145()
  goto L145_;

L27_:;
  // st x = dx23
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx23_, RHO);
  (void)(Rsh_Fir_reg_dx23_);
  // goto L28()
  // L28()
  goto L28_;

L28_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L150() else D54()
  // L150()
  goto L150_;

L29_:;
  // st x = dx25
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx25_, RHO);
  (void)(Rsh_Fir_reg_dx25_);
  // goto L28()
  // L28()
  goto L28_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501665066_, CCP, RHO);
  // r1 = dyn tsp(p)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tsp, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L31() else D1()
  // L31()
  goto L31_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L31_:;
  // st xtsp = r1
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // match_call = ldf `match.call`
  Rsh_Fir_reg_match_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L32() else D2()
  // L32()
  goto L32_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // r2 = dyn match_call[`expand.dots`](FALSE)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_call, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L33() else D3()
  // L33()
  goto L33_;

D3_:;
  // deopt 9 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L33_:;
  // st m = r2
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // l = ld m
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // c = `is.object`(l)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c then L35() else L36(NULL, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L35()
    goto L35_;
  } else {
  // L36(NULL, l)
    Rsh_Fir_reg_r4_ = Rsh_const(CCP, 29);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L36_;
  }

L34_:;
  // st m = dx1
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // l3 = ld m
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // c1 = `is.object`(l3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c1 then L39() else L40(TRUE, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L39()
    goto L39_;
  } else {
  // L40(TRUE, l3)
    Rsh_Fir_reg_r9_ = Rsh_const(CCP, 30);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L40_;
  }

L35_:;
  // dr = tryDispatchBuiltin.0("$<-", l, NULL)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args19);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc then L37() else L36(NULL, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L37()
    goto L37_;
  } else {
  // L36(NULL, dr)
    Rsh_Fir_reg_r4_ = Rsh_const(CCP, 29);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L36_;
  }

L36_:;
  // r7 = `$<-`(l2, <sym value>, NULL)
  SEXP Rsh_Fir_array_args21[3];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args21[2] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L34(r7)
  // L34(r7)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L34_;

L37_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L34(dx)
  // L34(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L34_;

L38_:;
  // st m = dx3
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L42() else D4()
  // L42()
  goto L42_;

L39_:;
  // dr2 = tryDispatchBuiltin.0("$<-", l3, TRUE)
  SEXP Rsh_Fir_array_args23[3];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args23);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if dc1 then L41() else L40(TRUE, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L41()
    goto L41_;
  } else {
  // L40(TRUE, dr2)
    Rsh_Fir_reg_r9_ = Rsh_const(CCP, 30);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr2_;
    goto L40_;
  }

L40_:;
  // r12 = `$<-`(l5, <sym extend>, TRUE)
  SEXP Rsh_Fir_array_args25[3];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args25[2] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L38(r12)
  // L38(r12)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r12_;
  goto L38_;

L41_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L38(dx2)
  // L38(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L38_;

D4_:;
  // deopt 21 [x3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L42_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // l6 = ld m
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // c2 = `is.object`(l6)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c2 then L44() else L45(x4, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L44()
    goto L44_;
  } else {
  // L45(x4, l6)
    Rsh_Fir_reg_x6_ = Rsh_Fir_reg_x4_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L45_;
  }

L43_:;
  // st m = dx5
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // sym = ldf quote
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base = ldf quote in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L44_:;
  // dr4 = tryDispatchBuiltin.0("$<-", l6, x4)
  SEXP Rsh_Fir_array_args30[3];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args30[2] = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args30);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc2 then L46() else L45(x4, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L46()
    goto L46_;
  } else {
  // L45(x4, dr4)
    Rsh_Fir_reg_x6_ = Rsh_Fir_reg_x4_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr4_;
    goto L45_;
  }

L45_:;
  // r13 = `$<-`(l8, <sym x>, x4)
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args32[2] = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L43(r13)
  // L43(r13)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r13_;
  goto L43_;

L46_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L43(dx4)
  // L43(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L43_;

L47_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r16 = dyn quote(<lang `::`(stats, window)>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L0_;

L48_:;
  // r14 = dyn base(<lang `::`(stats, window)>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L0_;

L49_:;
  // dr6 = tryDispatchBuiltin.0("[[<-", l9, r15)
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args36[2] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args36);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if dc3 then L51() else L50(r15, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L51()
    goto L51_;
  } else {
  // L50(r15, dr6)
    Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r15_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_dr6_;
    goto L50_;
  }

L50_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r21 = dyn ____(l11, r15, 1)
  SEXP Rsh_Fir_array_args38[3];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r21)
  // L1(r21)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r21_;
  goto L1_;

L51_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L1(dx6)
  // L1(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L1_;

D5_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L52_:;
  // p1 = prom<V +>{
  //   m = ld m;
  //   m1 = force? m;
  //   checkMissing(m1);
  //   return m1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501665066_1, CCP, RHO);
  // r23 = dyn eval_parent(p1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval_parent, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L53() else D6()
  // L53()
  goto L53_;

D6_:;
  // deopt 37 [r23]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L53_:;
  // st xx = r23
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // tsp1 = ldf tsp
  Rsh_Fir_reg_tsp1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L54() else D7()
  // L54()
  goto L54_;

D7_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // p2 = prom<V +>{
  //   xx = ld xx;
  //   xx1 = force? xx;
  //   checkMissing(xx1);
  //   return xx1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501665066_2, CCP, RHO);
  // r25 = dyn tsp1(p2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tsp1_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L55() else D8()
  // L55()
  goto L55_;

D8_:;
  // deopt 42 [r25]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L55_:;
  // st xxtsp = r25
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // xxtsp = ld xxtsp
  Rsh_Fir_reg_xxtsp = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L56() else D9()
  // L56()
  goto L56_;

D9_:;
  // deopt 44 [xxtsp]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_xxtsp;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L56_:;
  // xxtsp1 = force? xxtsp
  Rsh_Fir_reg_xxtsp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xxtsp);
  // checkMissing(xxtsp1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_xxtsp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(xxtsp1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_xxtsp1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if c4 then L57() else L58(xxtsp1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L57()
    goto L57_;
  } else {
  // L58(xxtsp1)
    Rsh_Fir_reg_xxtsp3_ = Rsh_Fir_reg_xxtsp1_;
    goto L58_;
  }

L57_:;
  // dr8 = tryDispatchBuiltin.1("[", xxtsp1)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_xxtsp1_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args46);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if dc4 then L59() else L58(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L59()
    goto L59_;
  } else {
  // L58(dr8)
    Rsh_Fir_reg_xxtsp3_ = Rsh_Fir_reg_dr8_;
    goto L58_;
  }

L58_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r26 = dyn __(xxtsp3, 1)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_xxtsp3_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L2(r26)
  // L2(r26)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r26_;
  goto L2_;

L59_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L2(dx8)
  // L2(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L2_;

D10_:;
  // deopt 50 [xxtsp4]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_xxtsp4_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L60_:;
  // xxtsp5 = force? xxtsp4
  Rsh_Fir_reg_xxtsp5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xxtsp4_);
  // checkMissing(xxtsp5)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_xxtsp5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(xxtsp5)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_xxtsp5_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if c5 then L61() else L62(xxtsp5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L61()
    goto L61_;
  } else {
  // L62(xxtsp5)
    Rsh_Fir_reg_xxtsp7_ = Rsh_Fir_reg_xxtsp5_;
    goto L62_;
  }

L61_:;
  // dr10 = tryDispatchBuiltin.1("[", xxtsp5)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_xxtsp5_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args52);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if dc5 then L63() else L62(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L63()
    goto L63_;
  } else {
  // L62(dr10)
    Rsh_Fir_reg_xxtsp7_ = Rsh_Fir_reg_dr10_;
    goto L62_;
  }

L62_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r27 = dyn __1(xxtsp7, 2)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_xxtsp7_;
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L3(r27)
  // L3(r27)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r27_;
  goto L3_;

L63_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L3(dx10)
  // L3(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L3_;

D11_:;
  // deopt 56 [start1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_start1_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L64_:;
  // start2 = force? start1
  Rsh_Fir_reg_start2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_start1_);
  // checkMissing(start2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_start2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // end1 = ld end
  Rsh_Fir_reg_end1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L65() else D12()
  // L65()
  goto L65_;

D12_:;
  // deopt 57 [start2, end1]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_start2_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_end1_;
  Rsh_Fir_deopt(57, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L65_:;
  // end2 = force? end1
  Rsh_Fir_reg_end2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_end1_);
  // checkMissing(end2)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_end2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // r28 = `>`(start2, end2)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_start2_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_end2_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if c6 then L66() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L66()
    goto L66_;
  } else {
  // L4()
    goto L4_;
  }

L66_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // check L67() else D13()
  // L67()
  goto L67_;

D13_:;
  // deopt 61 []
  Rsh_Fir_deopt(61, 0, NULL, CCP, RHO);
  return R_NilValue;

L67_:;
  // r29 = dyn stop("'start' > 'end'")
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L68() else D14()
  // L68()
  goto L68_;

D14_:;
  // deopt 63 [r29]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L5()
  // L5()
  goto L5_;

D15_:;
  // deopt 66 [start3]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_start3_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L70_:;
  // start4 = force? start3
  Rsh_Fir_reg_start4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_start3_);
  // checkMissing(start4)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_start4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // xtsp = ld xtsp
  Rsh_Fir_reg_xtsp = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L71() else D16()
  // L71()
  goto L71_;

D16_:;
  // deopt 67 [start4, xtsp]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_start4_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_xtsp;
  Rsh_Fir_deopt(67, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L71_:;
  // xtsp1 = force? xtsp
  Rsh_Fir_reg_xtsp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xtsp);
  // checkMissing(xtsp1)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_xtsp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(xtsp1)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_xtsp1_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if c7 then L72() else L73(start4, xtsp1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L72()
    goto L72_;
  } else {
  // L73(start4, xtsp1)
    Rsh_Fir_reg_start6_ = Rsh_Fir_reg_start4_;
    Rsh_Fir_reg_xtsp3_ = Rsh_Fir_reg_xtsp1_;
    goto L73_;
  }

L72_:;
  // dr12 = tryDispatchBuiltin.1("[", xtsp1)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_xtsp1_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args64);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if dc6 then L74() else L73(start4, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L74()
    goto L74_;
  } else {
  // L73(start4, dr12)
    Rsh_Fir_reg_start6_ = Rsh_Fir_reg_start4_;
    Rsh_Fir_reg_xtsp3_ = Rsh_Fir_reg_dr12_;
    goto L73_;
  }

L73_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r31 = dyn __2(xtsp3, 1)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_xtsp3_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6(start6, r31)
  // L6(start6, r31)
  Rsh_Fir_reg_start8_ = Rsh_Fir_reg_start6_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r31_;
  goto L6_;

L74_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // goto L6(start4, dx12)
  // L6(start4, dx12)
  Rsh_Fir_reg_start8_ = Rsh_Fir_reg_start4_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L6_;

L75_:;
  // end3 = ld end
  Rsh_Fir_reg_end3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L76() else D17()
  // L76()
  goto L76_;

D17_:;
  // deopt 73 [c8, end3]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_end3_;
  Rsh_Fir_deopt(73, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L76_:;
  // end4 = force? end3
  Rsh_Fir_reg_end4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_end3_);
  // checkMissing(end4)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_end4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // xtsp4 = ld xtsp
  Rsh_Fir_reg_xtsp4_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L77() else D18()
  // L77()
  goto L77_;

D18_:;
  // deopt 74 [c8, end4, xtsp4]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_end4_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_xtsp4_;
  Rsh_Fir_deopt(74, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L77_:;
  // xtsp5 = force? xtsp4
  Rsh_Fir_reg_xtsp5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xtsp4_);
  // checkMissing(xtsp5)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_xtsp5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(xtsp5)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_xtsp5_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if c11 then L78() else L79(c8, end4, xtsp5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L78()
    goto L78_;
  } else {
  // L79(c8, end4, xtsp5)
    Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c8_;
    Rsh_Fir_reg_end6_ = Rsh_Fir_reg_end4_;
    Rsh_Fir_reg_xtsp7_ = Rsh_Fir_reg_xtsp5_;
    goto L79_;
  }

L78_:;
  // dr14 = tryDispatchBuiltin.1("[", xtsp5)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_xtsp5_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args71);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if dc7 then L80() else L79(c8, end4, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L80()
    goto L80_;
  } else {
  // L79(c8, end4, dr14)
    Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c8_;
    Rsh_Fir_reg_end6_ = Rsh_Fir_reg_end4_;
    Rsh_Fir_reg_xtsp7_ = Rsh_Fir_reg_dr14_;
    goto L79_;
  }

L79_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r33 = dyn __3(xtsp7, 2)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_xtsp7_;
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L8(c13, end6, r33)
  // L8(c13, end6, r33)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_end8_ = Rsh_Fir_reg_end6_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r33_;
  goto L8_;

L80_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // goto L8(c8, end4, dx14)
  // L8(c8, end4, dx14)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_end8_ = Rsh_Fir_reg_end4_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L8_;

L82_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // check L83() else D19()
  // L83()
  goto L83_;

D19_:;
  // deopt 82 []
  Rsh_Fir_deopt(82, 0, NULL, CCP, RHO);
  return R_NilValue;

L83_:;
  // r35 = dyn warning[, `call.`]("extending time series when replacing values", FALSE)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L84() else D20()
  // L84()
  goto L84_;

D20_:;
  // deopt 86 [r35]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L84_:;
  // window = ldf window
  Rsh_Fir_reg_window = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L85() else D21()
  // L85()
  goto L85_;

D21_:;
  // deopt 88 []
  Rsh_Fir_deopt(88, 0, NULL, CCP, RHO);
  return R_NilValue;

L85_:;
  // p3 = prom<V +>{
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   return x10;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501665066_3, CCP, RHO);
  // p4 = prom<V +>{
  //   sym1 = ldf min;
  //   base1 = ldf min in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L2() else L3();
  // L0(r38):
  //   return r38;
  // L2():
  //   start9 = ld start;
  //   start10 = force? start9;
  //   checkMissing(start10);
  //   xtsp8 = ld xtsp;
  //   xtsp9 = force? xtsp8;
  //   checkMissing(xtsp9);
  //   c20 = `is.object`(xtsp9);
  //   if c20 then L4() else L5(xtsp9);
  // L3():
  //   r37 = dyn base1(<sym start>, <lang `[`(xtsp, 1)>);
  //   goto L0(r37);
  // L1(dx17):
  //   min = ldf min in base;
  //   r40 = dyn min(start10, dx17);
  //   goto L0(r40);
  // L4():
  //   dr16 = tryDispatchBuiltin.1("[", xtsp9);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L6() else L5(dr16);
  // L5(xtsp11):
  //   __4 = ldf `[` in base;
  //   r39 = dyn __4(xtsp11, 1);
  //   goto L1(r39);
  // L6():
  //   dx16 = getTryDispatchBuiltinValue(dr16);
  //   goto L1(dx16);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501665066_4, CCP, RHO);
  // p5 = prom<V +>{
  //   sym2 = ldf max;
  //   base2 = ldf max in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L2() else L3();
  // L0(r43):
  //   return r43;
  // L2():
  //   end9 = ld end;
  //   end10 = force? end9;
  //   checkMissing(end10);
  //   xtsp12 = ld xtsp;
  //   xtsp13 = force? xtsp12;
  //   checkMissing(xtsp13);
  //   c21 = `is.object`(xtsp13);
  //   if c21 then L4() else L5(xtsp13);
  // L3():
  //   r42 = dyn base2(<sym end>, <lang `[`(xtsp, 2)>);
  //   goto L0(r42);
  // L1(dx19):
  //   max = ldf max in base;
  //   r45 = dyn max(end10, dx19);
  //   goto L0(r45);
  // L4():
  //   dr18 = tryDispatchBuiltin.1("[", xtsp13);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L6() else L5(dr18);
  // L5(xtsp15):
  //   __5 = ldf `[` in base;
  //   r44 = dyn __5(xtsp15, 2);
  //   goto L1(r44);
  // L6():
  //   dx18 = getTryDispatchBuiltinValue(dr18);
  //   goto L1(dx18);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501665066_5, CCP, RHO);
  // r47 = dyn window[, , , extend](p3, p4, p5, TRUE)
  SEXP Rsh_Fir_array_args97[4];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args97[2] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args97[3] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names19[4];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_array_arg_names19[3] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_window, 4, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L86() else D22()
  // L86()
  goto L86_;

D22_:;
  // deopt 94 [r47]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L86_:;
  // st x = r47
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r47_, RHO);
  (void)(Rsh_Fir_reg_r47_);
  // goto L10()
  // L10()
  goto L10_;

D23_:;
  // deopt 98 [xtsp16]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_xtsp16_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L88_:;
  // xtsp17 = force? xtsp16
  Rsh_Fir_reg_xtsp17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xtsp16_);
  // checkMissing(xtsp17)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_xtsp17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // c22 = `is.object`(xtsp17)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_xtsp17_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if c22 then L89() else L90(xtsp17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L89()
    goto L89_;
  } else {
  // L90(xtsp17)
    Rsh_Fir_reg_xtsp19_ = Rsh_Fir_reg_xtsp17_;
    goto L90_;
  }

L89_:;
  // dr20 = tryDispatchBuiltin.1("[", xtsp17)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_xtsp17_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args100);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if dc10 then L91() else L90(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L91()
    goto L91_;
  } else {
  // L90(dr20)
    Rsh_Fir_reg_xtsp19_ = Rsh_Fir_reg_dr20_;
    goto L90_;
  }

L90_:;
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r49 = dyn __6(xtsp19, 3)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_xtsp19_;
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L11(r49)
  // L11(r49)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r49_;
  goto L11_;

L91_:;
  // dx20 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // goto L11(dx20)
  // L11(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L11_;

L92_:;
  // round = ldf round in base
  Rsh_Fir_reg_round = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r52 = dyn round(<lang `*`(xfreq, time(x))>)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_round, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L12(r52)
  // L12(r52)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r52_;
  goto L12_;

L93_:;
  // r50 = dyn base3(<lang `*`(xfreq, time(x))>)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L12(r50)
  // L12(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L12_;

L94_:;
  // round1 = ldf round in base
  Rsh_Fir_reg_round1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r55 = dyn round1(<lang `*`(xfreq, time(xx))>)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_round1_, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L13(r55)
  // L13(r55)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r55_;
  goto L13_;

L95_:;
  // r53 = dyn base4(<lang `*`(xfreq, time(xx))>)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L13(r53)
  // L13(r53)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L13_;

L96_:;
  // xxtimes = ld xxtimes
  Rsh_Fir_reg_xxtimes = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L98() else D24()
  // L98()
  goto L98_;

L97_:;
  // r56 = dyn base5(<sym xxtimes>, <sym xtimes>)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L14(r56)
  // L14(r56)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L14_;

D24_:;
  // deopt 114 [xxtimes]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_xxtimes;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L98_:;
  // xxtimes1 = force? xxtimes
  Rsh_Fir_reg_xxtimes1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xxtimes);
  // checkMissing(xxtimes1)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_xxtimes1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // xtimes = ld xtimes
  Rsh_Fir_reg_xtimes = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L99() else D25()
  // L99()
  goto L99_;

D25_:;
  // deopt 116 [xtimes]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_xtimes;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L99_:;
  // xtimes1 = force? xtimes
  Rsh_Fir_reg_xtimes1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xtimes);
  // checkMissing(xtimes1)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_xtimes1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r58 = dyn match(xxtimes1, xtimes1, NA_INT, NULL)
  SEXP Rsh_Fir_array_args111[4];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_xxtimes1_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_xtimes1_;
  Rsh_Fir_array_args111[2] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args111[3] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names26[4];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_array_arg_names26[3] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L100() else D26()
  // L100()
  goto L100_;

D26_:;
  // deopt 121 [r58]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L100_:;
  // goto L14(r58)
  // L14(r58)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r58_;
  goto L14_;

L101_:;
  // ind = ld ind
  Rsh_Fir_reg_ind = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L103() else D27()
  // L103()
  goto L103_;

L102_:;
  // r59 = dyn base6(<sym ind>)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L15(r59)
  // L15(r59)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L15_;

D27_:;
  // deopt 125 [ind]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_ind;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L103_:;
  // ind1 = force? ind
  Rsh_Fir_reg_ind1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind);
  // checkMissing(ind1)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_ind1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // anyNA = ldf anyNA in base
  Rsh_Fir_reg_anyNA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r61 = dyn anyNA(ind1)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_ind1_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA, 1, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L104() else D28()
  // L104()
  goto L104_;

D28_:;
  // deopt 128 [r61]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(128, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L104_:;
  // goto L15(r61)
  // L15(r61)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r61_;
  goto L15_;

L105_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // check L106() else D29()
  // L106()
  goto L106_;

D29_:;
  // deopt 130 []
  Rsh_Fir_deopt(130, 0, NULL, CCP, RHO);
  return R_NilValue;

L106_:;
  // r62 = dyn stop1("times to be replaced do not match")
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L107() else D30()
  // L107()
  goto L107_;

D30_:;
  // deopt 132 [r62]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L107_:;
  // goto L17()
  // L17()
  goto L17_;

L109_:;
  // ind2 = ld ind
  Rsh_Fir_reg_ind2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L111() else D31()
  // L111()
  goto L111_;

L110_:;
  // r64 = dyn base7(<sym ind>)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L18(r64)
  // L18(r64)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r64_;
  goto L18_;

D31_:;
  // deopt 137 [ind2]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_ind2_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L111_:;
  // ind3 = force? ind2
  Rsh_Fir_reg_ind3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind2_);
  // checkMissing(ind3)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_ind3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r66 = dyn length(ind3)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_ind3_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L112() else D32()
  // L112()
  goto L112_;

D32_:;
  // deopt 140 [r66]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L112_:;
  // goto L18(r66)
  // L18(r66)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r66_;
  goto L18_;

D33_:;
  // deopt 143 []
  Rsh_Fir_deopt(143, 0, NULL, CCP, RHO);
  return R_NilValue;

L113_:;
  // p6 = prom<V +>{
  //   value1 = ld value;
  //   value2 = force? value1;
  //   checkMissing(value2);
  //   return value2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501665066_6, CCP, RHO);
  // r68 = dyn NROW(p6)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NROW, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L114() else D34()
  // L114()
  goto L114_;

D34_:;
  // deopt 145 [r68]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(145, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L114_:;
  // st val_len = r68
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r68_, RHO);
  (void)(Rsh_Fir_reg_r68_);
  // val_len = ld val_len
  Rsh_Fir_reg_val_len = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L115() else D35()
  // L115()
  goto L115_;

D35_:;
  // deopt 147 [val_len]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_val_len;
  Rsh_Fir_deopt(147, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L115_:;
  // val_len1 = force? val_len
  Rsh_Fir_reg_val_len1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val_len);
  // checkMissing(val_len1)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_val_len1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty()));
  // r69 = `!`(val_len1)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_val_len1_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // c24 = `as.logical`(r69)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // if c24 then L116() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L116()
    goto L116_;
  } else {
  // L19()
    goto L19_;
  }

L116_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // check L117() else D36()
  // L117()
  goto L117_;

D36_:;
  // deopt 151 []
  Rsh_Fir_deopt(151, 0, NULL, CCP, RHO);
  return R_NilValue;

L117_:;
  // r70 = dyn stop2("no replacement values supplied")
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L118() else D37()
  // L118()
  goto L118_;

D37_:;
  // deopt 153 [r70]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_deopt(153, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L118_:;
  // goto L20()
  // L20()
  goto L20_;

D38_:;
  // deopt 156 [val_len2]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_val_len2_;
  Rsh_Fir_deopt(156, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L120_:;
  // val_len3 = force? val_len2
  Rsh_Fir_reg_val_len3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val_len2_);
  // checkMissing(val_len3)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_val_len3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // len = ld len
  Rsh_Fir_reg_len = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L121() else D39()
  // L121()
  goto L121_;

D39_:;
  // deopt 157 [val_len3, len]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_val_len3_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_len;
  Rsh_Fir_deopt(157, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L121_:;
  // len1 = force? len
  Rsh_Fir_reg_len1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_len);
  // checkMissing(len1)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_len1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // r72 = `>`(val_len3, len1)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_val_len3_;
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_len1_;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // c25 = `as.logical`(r72)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // if c25 then L122() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L122()
    goto L122_;
  } else {
  // L21()
    goto L21_;
  }

L122_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // check L123() else D40()
  // L123()
  goto L123_;

D40_:;
  // deopt 161 []
  Rsh_Fir_deopt(161, 0, NULL, CCP, RHO);
  return R_NilValue;

L123_:;
  // r73 = dyn stop3("too many replacement values supplied")
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L124() else D41()
  // L124()
  goto L124_;

D41_:;
  // deopt 163 [r73]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(163, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L124_:;
  // goto L22()
  // L22()
  goto L22_;

D42_:;
  // deopt 166 [val_len4]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_val_len4_;
  Rsh_Fir_deopt(166, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L126_:;
  // val_len5 = force? val_len4
  Rsh_Fir_reg_val_len5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val_len4_);
  // checkMissing(val_len5)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_val_len5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // r75 = `>`(val_len5, 1)
  SEXP Rsh_Fir_array_args131[2];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_val_len5_;
  Rsh_Fir_array_args131[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // c26 = `as.logical`(r75)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // if c26 then L127() else L23(c26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L127()
    goto L127_;
  } else {
  // L23(c26)
    Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c26_;
    goto L23_;
  }

L127_:;
  // len2 = ld len
  Rsh_Fir_reg_len2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L128() else D43()
  // L128()
  goto L128_;

D43_:;
  // deopt 171 [c26, len2]
  SEXP Rsh_Fir_array_deopt_stack32[2];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_len2_;
  Rsh_Fir_deopt(171, 2, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L128_:;
  // len3 = force? len2
  Rsh_Fir_reg_len3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_len2_);
  // checkMissing(len3)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_len3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // val_len6 = ld val_len
  Rsh_Fir_reg_val_len6_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L129() else D44()
  // L129()
  goto L129_;

D44_:;
  // deopt 173 [c26, val_len6]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_val_len6_;
  Rsh_Fir_deopt(173, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L129_:;
  // val_len7 = force? val_len6
  Rsh_Fir_reg_val_len7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val_len6_);
  // checkMissing(val_len7)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_val_len7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty()));
  // __7 = ldf `%%` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r76 = dyn __7(len3, val_len7)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_len3_;
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_val_len7_;
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args135, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L130() else D45()
  // L130()
  goto L130_;

D45_:;
  // deopt 176 [c26, r76]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(176, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L130_:;
  // c29 = `as.logical`(r76)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // c30 = `&&`(c26, c29)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_c29_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // goto L23(c30)
  // L23(c30)
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c30_;
  goto L23_;

L132_:;
  // stop4 = ldf stop
  Rsh_Fir_reg_stop4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // check L133() else D46()
  // L133()
  goto L133_;

D46_:;
  // deopt 179 []
  Rsh_Fir_deopt(179, 0, NULL, CCP, RHO);
  return R_NilValue;

L133_:;
  // r77 = dyn stop4("number of values supplied is not a sub-multiple of the number of values to be replaced")
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop4_, 1, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L134() else D47()
  // L134()
  goto L134_;

D47_:;
  // deopt 181 [r77]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(181, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L134_:;
  // goto L25()
  // L25()
  goto L25_;

D48_:;
  // deopt 185 []
  Rsh_Fir_deopt(185, 0, NULL, CCP, RHO);
  return R_NilValue;

L136_:;
  // p7 = prom<V +>{
  //   x11 = ld x;
  //   x12 = force? x11;
  //   checkMissing(x12);
  //   return x12;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501665066_7, CCP, RHO);
  // r80 = dyn NCOL(p7)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NCOL, 1, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L137() else D49()
  // L137()
  goto L137_;

D49_:;
  // deopt 187 [r80]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(187, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L137_:;
  // r81 = `==`(r80, 1)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_array_args141[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // c33 = `as.logical`(r81)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // if c33 then L138() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L138()
    goto L138_;
  } else {
  // L26()
    goto L26_;
  }

L138_:;
  // value3 = ld value
  Rsh_Fir_reg_value3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L139() else D50()
  // L139()
  goto L139_;

D50_:;
  // deopt 190 [value3]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_value3_;
  Rsh_Fir_deopt(190, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L139_:;
  // value4 = force? value3
  Rsh_Fir_reg_value4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value3_);
  // checkMissing(value4)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_value4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty()));
  // l12 = ld x
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // c34 = `is.object`(l12)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // if c34 then L140() else L141(value4, l12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L140()
    goto L140_;
  } else {
  // L141(value4, l12)
    Rsh_Fir_reg_value6_ = Rsh_Fir_reg_value4_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l12_;
    goto L141_;
  }

L140_:;
  // dr22 = tryDispatchBuiltin.0("[<-", l12, value4)
  SEXP Rsh_Fir_array_args145[3];
  Rsh_Fir_array_args145[0] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args145[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args145[2] = Rsh_Fir_reg_value4_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args145);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // if dc11 then L142() else L141(value4, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L142()
    goto L142_;
  } else {
  // L141(value4, dr22)
    Rsh_Fir_reg_value6_ = Rsh_Fir_reg_value4_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_dr22_;
    goto L141_;
  }

L141_:;
  // ind4 = ld ind
  Rsh_Fir_reg_ind4_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L143() else D51()
  // L143()
  goto L143_;

L142_:;
  // dx22 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // goto L27(value4, dx22)
  // L27(value4, dx22)
  Rsh_Fir_reg_value8_ = Rsh_Fir_reg_value4_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L27_;

D51_:;
  // deopt 193 [value6, l14, value4, ind4]
  SEXP Rsh_Fir_array_deopt_stack38[4];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_value6_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack38[2] = Rsh_Fir_reg_value4_;
  Rsh_Fir_array_deopt_stack38[3] = Rsh_Fir_reg_ind4_;
  Rsh_Fir_deopt(193, 4, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L143_:;
  // ind5 = force? ind4
  Rsh_Fir_reg_ind5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind4_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // r82 = dyn ___(l14, value4, ind5)
  SEXP Rsh_Fir_array_args148[3];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args148[1] = Rsh_Fir_reg_value4_;
  Rsh_Fir_array_args148[2] = Rsh_Fir_reg_ind5_;
  SEXP Rsh_Fir_array_arg_names38[3];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args148, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L27(value6, r82)
  // L27(value6, r82)
  Rsh_Fir_reg_value8_ = Rsh_Fir_reg_value6_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r82_;
  goto L27_;

D52_:;
  // deopt 197 [value10]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_value10_;
  Rsh_Fir_deopt(197, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L145_:;
  // value11 = force? value10
  Rsh_Fir_reg_value11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value10_);
  // checkMissing(value11)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_value11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty()));
  // l15 = ld x
  Rsh_Fir_reg_l15_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // c35 = `is.object`(l15)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty());
  // if c35 then L146() else L147(value11, l15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L146()
    goto L146_;
  } else {
  // L147(value11, l15)
    Rsh_Fir_reg_value13_ = Rsh_Fir_reg_value11_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l15_;
    goto L147_;
  }

L146_:;
  // dr24 = tryDispatchBuiltin.0("[<-", l15, value11)
  SEXP Rsh_Fir_array_args151[3];
  Rsh_Fir_array_args151[0] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args151[2] = Rsh_Fir_reg_value11_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args151);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty());
  // if dc12 then L148() else L147(value11, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L148()
    goto L148_;
  } else {
  // L147(value11, dr24)
    Rsh_Fir_reg_value13_ = Rsh_Fir_reg_value11_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_dr24_;
    goto L147_;
  }

L147_:;
  // ind6 = ld ind
  Rsh_Fir_reg_ind6_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L149() else D53()
  // L149()
  goto L149_;

L148_:;
  // dx24 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // goto L29(value11, dx24)
  // L29(value11, dx24)
  Rsh_Fir_reg_value15_ = Rsh_Fir_reg_value11_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L29_;

D53_:;
  // deopt 200 [value13, l17, value11, ind6]
  SEXP Rsh_Fir_array_deopt_stack40[4];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_value13_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_deopt_stack40[2] = Rsh_Fir_reg_value11_;
  Rsh_Fir_array_deopt_stack40[3] = Rsh_Fir_reg_ind6_;
  Rsh_Fir_deopt(200, 4, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L149_:;
  // ind7 = force? ind6
  Rsh_Fir_reg_ind7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind6_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 61), RHO);
  // r83 = dyn ___1(l15, ind7, <missing>, value11)
  SEXP Rsh_Fir_array_args154[4];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args154[1] = Rsh_Fir_reg_ind7_;
  Rsh_Fir_array_args154[2] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args154[3] = Rsh_Fir_reg_value11_;
  SEXP Rsh_Fir_array_arg_names39[4];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_array_arg_names39[2] = R_MissingArg;
  Rsh_Fir_array_arg_names39[3] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 4, Rsh_Fir_array_args154, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L29(value13, r83)
  // L29(value13, r83)
  Rsh_Fir_reg_value15_ = Rsh_Fir_reg_value13_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r83_;
  goto L29_;

D54_:;
  // deopt 206 [x13]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(206, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L150_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return x14
  return Rsh_Fir_reg_x14_;
}
SEXP Rsh_Fir_user_promise_inner2501665066_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner2501665066_1(SEXP CCP, SEXP RHO) {
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return m1
  return Rsh_Fir_reg_m1_;
}
SEXP Rsh_Fir_user_promise_inner2501665066_2(SEXP CCP, SEXP RHO) {
  // xx = ld xx
  Rsh_Fir_reg_xx = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // xx1 = force? xx
  Rsh_Fir_reg_xx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx);
  // checkMissing(xx1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_xx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return xx1
  return Rsh_Fir_reg_xx1_;
}
SEXP Rsh_Fir_user_promise_inner2501665066_3(SEXP CCP, SEXP RHO) {
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // return x10
  return Rsh_Fir_reg_x10_;
}
SEXP Rsh_Fir_user_promise_inner2501665066_4(SEXP CCP, SEXP RHO) {
  // sym1 = ldf min
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base1 = ldf min in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args77);
  // if guard1 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r38
  return Rsh_Fir_reg_r38_;

L1_:;
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r40 = dyn min(start10, dx17)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_start10_;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r40)
  // L0(r40)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r40_;
  goto L0_;

L2_:;
  // start9 = ld start
  Rsh_Fir_reg_start9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // start10 = force? start9
  Rsh_Fir_reg_start10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_start9_);
  // checkMissing(start10)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_start10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // xtsp8 = ld xtsp
  Rsh_Fir_reg_xtsp8_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // xtsp9 = force? xtsp8
  Rsh_Fir_reg_xtsp9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xtsp8_);
  // checkMissing(xtsp9)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_xtsp9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(xtsp9)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_xtsp9_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if c20 then L4() else L5(xtsp9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L4()
    goto L4_;
  } else {
  // L5(xtsp9)
    Rsh_Fir_reg_xtsp11_ = Rsh_Fir_reg_xtsp9_;
    goto L5_;
  }

L3_:;
  // r37 = dyn base1(<sym start>, <lang `[`(xtsp, 1)>)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r37)
  // L0(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L0_;

L4_:;
  // dr16 = tryDispatchBuiltin.1("[", xtsp9)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_xtsp9_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args83);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if dc8 then L6() else L5(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr16)
    Rsh_Fir_reg_xtsp11_ = Rsh_Fir_reg_dr16_;
    goto L5_;
  }

L5_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r39 = dyn __4(xtsp11, 1)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_xtsp11_;
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L1(r39)
  // L1(r39)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r39_;
  goto L1_;

L6_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // goto L1(dx16)
  // L1(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner2501665066_5(SEXP CCP, SEXP RHO) {
  // sym2 = ldf max
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // base2 = ldf max in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args87);
  // if guard2 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r43
  return Rsh_Fir_reg_r43_;

L1_:;
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // r45 = dyn max(end10, dx19)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_end10_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r45)
  // L0(r45)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r45_;
  goto L0_;

L2_:;
  // end9 = ld end
  Rsh_Fir_reg_end9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // end10 = force? end9
  Rsh_Fir_reg_end10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_end9_);
  // checkMissing(end10)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_end10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // xtsp12 = ld xtsp
  Rsh_Fir_reg_xtsp12_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // xtsp13 = force? xtsp12
  Rsh_Fir_reg_xtsp13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xtsp12_);
  // checkMissing(xtsp13)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_xtsp13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // c21 = `is.object`(xtsp13)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_xtsp13_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if c21 then L4() else L5(xtsp13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L4()
    goto L4_;
  } else {
  // L5(xtsp13)
    Rsh_Fir_reg_xtsp15_ = Rsh_Fir_reg_xtsp13_;
    goto L5_;
  }

L3_:;
  // r42 = dyn base2(<sym end>, <lang `[`(xtsp, 2)>)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L0_;

L4_:;
  // dr18 = tryDispatchBuiltin.1("[", xtsp13)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_xtsp13_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args93);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // if dc9 then L6() else L5(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr18)
    Rsh_Fir_reg_xtsp15_ = Rsh_Fir_reg_dr18_;
    goto L5_;
  }

L5_:;
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r44 = dyn __5(xtsp15, 2)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_xtsp15_;
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L1(r44)
  // L1(r44)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r44_;
  goto L1_;

L6_:;
  // dx18 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // goto L1(dx18)
  // L1(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner2501665066_6(SEXP CCP, SEXP RHO) {
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // return value2
  return Rsh_Fir_reg_value2_;
}
SEXP Rsh_Fir_user_promise_inner2501665066_7(SEXP CCP, SEXP RHO) {
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // return x12
  return Rsh_Fir_reg_x12_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
