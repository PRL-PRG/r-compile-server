#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3566772296_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3566772296_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3566772296_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3566772296_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3566772296_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3566772296_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3566772296_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3566772296_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3566772296_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3566772296_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3566772296_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3566772296_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3566772296_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3566772296_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3566772296_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3566772296_13(SEXP CCP, SEXP RHO);
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
  // r = clos inner3566772296
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3566772296_, RHO, CCP);
  // st `split.screen` = r
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
SEXP Rsh_Fir_user_function_inner3566772296_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3566772296 dynamic dispatch ([figs, screen, erase])

  return Rsh_Fir_user_version_inner3566772296_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3566772296_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3566772296 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3566772296/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_figs;  // figs
  SEXP Rsh_Fir_reg_screen;  // screen
  SEXP Rsh_Fir_reg_erase;  // erase
  SEXP Rsh_Fir_reg_erase_isMissing;  // erase_isMissing
  SEXP Rsh_Fir_reg_erase_orDefault;  // erase_orDefault
  SEXP Rsh_Fir_reg__SSexists;  // _SSexists
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_first_split;  // first_split
  SEXP Rsh_Fir_reg_first_split1_;  // first_split1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg__SSget;  // _SSget
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_first_split2_;  // first_split2
  SEXP Rsh_Fir_reg_first_split3_;  // first_split3
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg__SSget1_;  // _SSget1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_missing1_;  // missing1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_first_split4_;  // first_split4
  SEXP Rsh_Fir_reg_first_split5_;  // first_split5
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg__valid_screens;  // _valid_screens
  SEXP Rsh_Fir_reg__valid_screens1_;  // _valid_screens1
  SEXP Rsh_Fir_reg_first_split6_;  // first_split6
  SEXP Rsh_Fir_reg_first_split7_;  // first_split7
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_screen1_;  // screen1
  SEXP Rsh_Fir_reg_screen2_;  // screen2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_first_split8_;  // first_split8
  SEXP Rsh_Fir_reg_first_split9_;  // first_split9
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_screen3_;  // screen3
  SEXP Rsh_Fir_reg_screen4_;  // screen4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg__valid_screens2_;  // _valid_screens2
  SEXP Rsh_Fir_reg__valid_screens3_;  // _valid_screens3
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_figs1_;  // figs1
  SEXP Rsh_Fir_reg_figs2_;  // figs2
  SEXP Rsh_Fir_reg_is_matrix;  // is_matrix
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_figs3_;  // figs3
  SEXP Rsh_Fir_reg_figs4_;  // figs4
  SEXP Rsh_Fir_reg_is_vector;  // is_vector
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_figs5_;  // figs5
  SEXP Rsh_Fir_reg_figs6_;  // figs6
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_figs8_;  // figs8
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_figs9_;  // figs9
  SEXP Rsh_Fir_reg_figs10_;  // figs10
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_figs12_;  // figs12
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_nc;  // nc
  SEXP Rsh_Fir_reg_nc1_;  // nc1
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_seq_int;  // seq_int
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_nr;  // nr
  SEXP Rsh_Fir_reg_nr1_;  // nr1
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_seq_int1_;  // seq_int1
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_matrix;  // matrix
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_nc2_;  // nc2
  SEXP Rsh_Fir_reg_nc3_;  // nc3
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_nr2_;  // nr2
  SEXP Rsh_Fir_reg_nr3_;  // nr3
  SEXP Rsh_Fir_reg_rep_int;  // rep_int
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_nr4_;  // nr4
  SEXP Rsh_Fir_reg_nr5_;  // nr5
  SEXP Rsh_Fir_reg_rep_int1_;  // rep_int1
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_y;  // y
  SEXP Rsh_Fir_reg_y1_;  // y1
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_y3_;  // y3
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_nc4_;  // nc4
  SEXP Rsh_Fir_reg_nc5_;  // nc5
  SEXP Rsh_Fir_reg_nr6_;  // nr6
  SEXP Rsh_Fir_reg_nr7_;  // nr7
  SEXP Rsh_Fir_reg_rep_int2_;  // rep_int2
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_rep_int3_;  // rep_int3
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_y4_;  // y4
  SEXP Rsh_Fir_reg_y5_;  // y5
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_y7_;  // y7
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_nr8_;  // nr8
  SEXP Rsh_Fir_reg_nr9_;  // nr9
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_nc6_;  // nc6
  SEXP Rsh_Fir_reg_nc7_;  // nc7
  SEXP Rsh_Fir_reg_nr10_;  // nr10
  SEXP Rsh_Fir_reg_nr11_;  // nr11
  SEXP Rsh_Fir_reg_rep_int4_;  // rep_int4
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_rep_int5_;  // rep_int5
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_nrow;  // nrow
  SEXP Rsh_Fir_reg_figs13_;  // figs13
  SEXP Rsh_Fir_reg_figs14_;  // figs14
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_num_screens;  // num_screens
  SEXP Rsh_Fir_reg_num_screens1_;  // num_screens1
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_first_split10_;  // first_split10
  SEXP Rsh_Fir_reg_first_split11_;  // first_split11
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_erase1_;  // erase1
  SEXP Rsh_Fir_reg_erase2_;  // erase2
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_plot_new;  // plot_new
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_par;  // par
  SEXP Rsh_Fir_reg__SSenv;  // _SSenv
  SEXP Rsh_Fir_reg__SSenv1_;  // _SSenv1
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg__SSenv3_;  // _SSenv3
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_par1_;  // par1
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_rep_int6_;  // rep_int6
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_c41_;  // c41
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg__SSassign;  // _SSassign
  SEXP Rsh_Fir_reg_split_saved_pars;  // split_saved_pars
  SEXP Rsh_Fir_reg_split_saved_pars1_;  // split_saved_pars1
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_num_screens2_;  // num_screens2
  SEXP Rsh_Fir_reg_num_screens3_;  // num_screens3
  SEXP Rsh_Fir_reg_vector;  // vector
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_num_screens4_;  // num_screens4
  SEXP Rsh_Fir_reg_num_screens5_;  // num_screens5
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg_new_screens;  // new_screens
  SEXP Rsh_Fir_reg_new_screens1_;  // new_screens1
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_par2_;  // par2
  SEXP Rsh_Fir_reg__SSenv4_;  // _SSenv4
  SEXP Rsh_Fir_reg__SSenv5_;  // _SSenv5
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg__SSenv7_;  // _SSenv7
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r110_;  // r110
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_r112_;  // r112
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r115_;  // r115
  SEXP Rsh_Fir_reg_figs15_;  // figs15
  SEXP Rsh_Fir_reg_figs16_;  // figs16
  SEXP Rsh_Fir_reg_c46_;  // c46
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_figs18_;  // figs18
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r116_;  // r116
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_l16_;  // l16
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r117_;  // r117
  SEXP Rsh_Fir_reg_c48_;  // c48
  SEXP Rsh_Fir_reg_i24_;  // i24
  SEXP Rsh_Fir_reg_dx42_;  // dx42
  SEXP Rsh_Fir_reg_l18_;  // l18
  SEXP Rsh_Fir_reg_dx43_;  // dx43
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx45_;  // dx45
  SEXP Rsh_Fir_reg_i26_;  // i26
  SEXP Rsh_Fir_reg_dx46_;  // dx46
  SEXP Rsh_Fir_reg_l20_;  // l20
  SEXP Rsh_Fir_reg_dx47_;  // dx47
  SEXP Rsh_Fir_reg_r118_;  // r118
  SEXP Rsh_Fir_reg_c49_;  // c49
  SEXP Rsh_Fir_reg_i28_;  // i28
  SEXP Rsh_Fir_reg_dx49_;  // dx49
  SEXP Rsh_Fir_reg_l22_;  // l22
  SEXP Rsh_Fir_reg_dr30_;  // dr30
  SEXP Rsh_Fir_reg_dc15_;  // dc15
  SEXP Rsh_Fir_reg_dx51_;  // dx51
  SEXP Rsh_Fir_reg_i30_;  // i30
  SEXP Rsh_Fir_reg_dx53_;  // dx53
  SEXP Rsh_Fir_reg_i31_;  // i31
  SEXP Rsh_Fir_reg_i32_;  // i32
  SEXP Rsh_Fir_reg_____1_;  // ____1
  SEXP Rsh_Fir_reg_r119_;  // r119
  SEXP Rsh_Fir_reg_new_screens2_;  // new_screens2
  SEXP Rsh_Fir_reg_new_screens3_;  // new_screens3
  SEXP Rsh_Fir_reg_erase3_;  // erase3
  SEXP Rsh_Fir_reg_erase4_;  // erase4
  SEXP Rsh_Fir_reg_c50_;  // c50
  SEXP Rsh_Fir_reg_erase_screen;  // erase_screen
  SEXP Rsh_Fir_reg_screen5_;  // screen5
  SEXP Rsh_Fir_reg_screen6_;  // screen6
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r122_;  // r122
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r124_;  // r124
  SEXP Rsh_Fir_reg_r125_;  // r125
  SEXP Rsh_Fir_reg__valid_screens4_;  // _valid_screens4
  SEXP Rsh_Fir_reg__valid_screens5_;  // _valid_screens5
  SEXP Rsh_Fir_reg_max;  // max
  SEXP Rsh_Fir_reg_r126_;  // r126
  SEXP Rsh_Fir_reg_max_screen;  // max_screen
  SEXP Rsh_Fir_reg_max_screen1_;  // max_screen1
  SEXP Rsh_Fir_reg_num_screens6_;  // num_screens6
  SEXP Rsh_Fir_reg_num_screens7_;  // num_screens7
  SEXP Rsh_Fir_reg_r127_;  // r127
  SEXP Rsh_Fir_reg__SSget2_;  // _SSget2
  SEXP Rsh_Fir_reg_r128_;  // r128
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r129_;  // r129
  SEXP Rsh_Fir_reg_r130_;  // r130
  SEXP Rsh_Fir_reg_c51_;  // c51
  SEXP Rsh_Fir_reg_r131_;  // r131
  SEXP Rsh_Fir_reg_screen7_;  // screen7
  SEXP Rsh_Fir_reg_screen8_;  // screen8
  SEXP Rsh_Fir_reg_r132_;  // r132
  SEXP Rsh_Fir_reg_c52_;  // c52
  SEXP Rsh_Fir_reg_split_screens;  // split_screens
  SEXP Rsh_Fir_reg_split_screens1_;  // split_screens1
  SEXP Rsh_Fir_reg_c53_;  // c53
  SEXP Rsh_Fir_reg_split_screens3_;  // split_screens3
  SEXP Rsh_Fir_reg_dr32_;  // dr32
  SEXP Rsh_Fir_reg_dc16_;  // dc16
  SEXP Rsh_Fir_reg_dx54_;  // dx54
  SEXP Rsh_Fir_reg_dx55_;  // dx55
  SEXP Rsh_Fir_reg_screen9_;  // screen9
  SEXP Rsh_Fir_reg_screen10_;  // screen10
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r133_;  // r133
  SEXP Rsh_Fir_reg_c54_;  // c54
  SEXP Rsh_Fir_reg_dx57_;  // dx57
  SEXP Rsh_Fir_reg_dr34_;  // dr34
  SEXP Rsh_Fir_reg_dc17_;  // dc17
  SEXP Rsh_Fir_reg_dx58_;  // dx58
  SEXP Rsh_Fir_reg_dx59_;  // dx59
  SEXP Rsh_Fir_reg_r134_;  // r134
  SEXP Rsh_Fir_reg_num_screens8_;  // num_screens8
  SEXP Rsh_Fir_reg_num_screens9_;  // num_screens9
  SEXP Rsh_Fir_reg_r135_;  // r135
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_l23_;  // l23
  SEXP Rsh_Fir_reg_i33_;  // i33
  SEXP Rsh_Fir_reg_i34_;  // i34
  SEXP Rsh_Fir_reg_i35_;  // i35
  SEXP Rsh_Fir_reg_c55_;  // c55
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_total;  // total
  SEXP Rsh_Fir_reg_total1_;  // total1
  SEXP Rsh_Fir_reg_c56_;  // c56
  SEXP Rsh_Fir_reg_i39_;  // i39
  SEXP Rsh_Fir_reg_total3_;  // total3
  SEXP Rsh_Fir_reg_dr36_;  // dr36
  SEXP Rsh_Fir_reg_dc18_;  // dc18
  SEXP Rsh_Fir_reg_dx61_;  // dx61
  SEXP Rsh_Fir_reg_i41_;  // i41
  SEXP Rsh_Fir_reg_dx62_;  // dx62
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r136_;  // r136
  SEXP Rsh_Fir_reg_i44_;  // i44
  SEXP Rsh_Fir_reg_total6_;  // total6
  SEXP Rsh_Fir_reg_r137_;  // r137
  SEXP Rsh_Fir_reg_c57_;  // c57
  SEXP Rsh_Fir_reg_r138_;  // r138
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r139_;  // r139
  SEXP Rsh_Fir_reg_figs19_;  // figs19
  SEXP Rsh_Fir_reg_figs20_;  // figs20
  SEXP Rsh_Fir_reg_c58_;  // c58
  SEXP Rsh_Fir_reg_i46_;  // i46
  SEXP Rsh_Fir_reg_dx64_;  // dx64
  SEXP Rsh_Fir_reg_figs22_;  // figs22
  SEXP Rsh_Fir_reg_dr38_;  // dr38
  SEXP Rsh_Fir_reg_dc19_;  // dc19
  SEXP Rsh_Fir_reg_dx66_;  // dx66
  SEXP Rsh_Fir_reg_i48_;  // i48
  SEXP Rsh_Fir_reg_dx67_;  // dx67
  SEXP Rsh_Fir_reg_dx68_;  // dx68
  SEXP Rsh_Fir_reg_i49_;  // i49
  SEXP Rsh_Fir_reg_i50_;  // i50
  SEXP Rsh_Fir_reg___10_;  // __10
  SEXP Rsh_Fir_reg_r140_;  // r140
  SEXP Rsh_Fir_reg_sym18_;  // sym18
  SEXP Rsh_Fir_reg_base18_;  // base18
  SEXP Rsh_Fir_reg_guard18_;  // guard18
  SEXP Rsh_Fir_reg_r141_;  // r141
  SEXP Rsh_Fir_reg_i53_;  // i53
  SEXP Rsh_Fir_reg_dx73_;  // dx73
  SEXP Rsh_Fir_reg_dx74_;  // dx74
  SEXP Rsh_Fir_reg_r142_;  // r142
  SEXP Rsh_Fir_reg_sym19_;  // sym19
  SEXP Rsh_Fir_reg_base19_;  // base19
  SEXP Rsh_Fir_reg_guard19_;  // guard19
  SEXP Rsh_Fir_reg_r143_;  // r143
  SEXP Rsh_Fir_reg_i56_;  // i56
  SEXP Rsh_Fir_reg_dx79_;  // dx79
  SEXP Rsh_Fir_reg_dx80_;  // dx80
  SEXP Rsh_Fir_reg_r144_;  // r144
  SEXP Rsh_Fir_reg_total7_;  // total7
  SEXP Rsh_Fir_reg_total8_;  // total8
  SEXP Rsh_Fir_reg_c59_;  // c59
  SEXP Rsh_Fir_reg_i58_;  // i58
  SEXP Rsh_Fir_reg_dx83_;  // dx83
  SEXP Rsh_Fir_reg_dx84_;  // dx84
  SEXP Rsh_Fir_reg_total10_;  // total10
  SEXP Rsh_Fir_reg_dr40_;  // dr40
  SEXP Rsh_Fir_reg_dc20_;  // dc20
  SEXP Rsh_Fir_reg_dx87_;  // dx87
  SEXP Rsh_Fir_reg_i60_;  // i60
  SEXP Rsh_Fir_reg_dx88_;  // dx88
  SEXP Rsh_Fir_reg_dx89_;  // dx89
  SEXP Rsh_Fir_reg_dx90_;  // dx90
  SEXP Rsh_Fir_reg___11_;  // __11
  SEXP Rsh_Fir_reg_r145_;  // r145
  SEXP Rsh_Fir_reg_total11_;  // total11
  SEXP Rsh_Fir_reg_total12_;  // total12
  SEXP Rsh_Fir_reg_c60_;  // c60
  SEXP Rsh_Fir_reg_i62_;  // i62
  SEXP Rsh_Fir_reg_dx94_;  // dx94
  SEXP Rsh_Fir_reg_dx95_;  // dx95
  SEXP Rsh_Fir_reg_dx96_;  // dx96
  SEXP Rsh_Fir_reg_total14_;  // total14
  SEXP Rsh_Fir_reg_dr42_;  // dr42
  SEXP Rsh_Fir_reg_dc21_;  // dc21
  SEXP Rsh_Fir_reg_dx100_;  // dx100
  SEXP Rsh_Fir_reg_i64_;  // i64
  SEXP Rsh_Fir_reg_dx101_;  // dx101
  SEXP Rsh_Fir_reg_dx102_;  // dx102
  SEXP Rsh_Fir_reg_dx103_;  // dx103
  SEXP Rsh_Fir_reg_dx104_;  // dx104
  SEXP Rsh_Fir_reg___12_;  // __12
  SEXP Rsh_Fir_reg_r146_;  // r146
  SEXP Rsh_Fir_reg_r147_;  // r147
  SEXP Rsh_Fir_reg_total15_;  // total15
  SEXP Rsh_Fir_reg_total16_;  // total16
  SEXP Rsh_Fir_reg_c61_;  // c61
  SEXP Rsh_Fir_reg_i66_;  // i66
  SEXP Rsh_Fir_reg_dx107_;  // dx107
  SEXP Rsh_Fir_reg_dx108_;  // dx108
  SEXP Rsh_Fir_reg_total18_;  // total18
  SEXP Rsh_Fir_reg_dr44_;  // dr44
  SEXP Rsh_Fir_reg_dc22_;  // dc22
  SEXP Rsh_Fir_reg_dx111_;  // dx111
  SEXP Rsh_Fir_reg_i68_;  // i68
  SEXP Rsh_Fir_reg_dx112_;  // dx112
  SEXP Rsh_Fir_reg_dx113_;  // dx113
  SEXP Rsh_Fir_reg_dx114_;  // dx114
  SEXP Rsh_Fir_reg___13_;  // __13
  SEXP Rsh_Fir_reg_r148_;  // r148
  SEXP Rsh_Fir_reg_total19_;  // total19
  SEXP Rsh_Fir_reg_total20_;  // total20
  SEXP Rsh_Fir_reg_c62_;  // c62
  SEXP Rsh_Fir_reg_i70_;  // i70
  SEXP Rsh_Fir_reg_dx118_;  // dx118
  SEXP Rsh_Fir_reg_dx119_;  // dx119
  SEXP Rsh_Fir_reg_dx120_;  // dx120
  SEXP Rsh_Fir_reg_total22_;  // total22
  SEXP Rsh_Fir_reg_dr46_;  // dr46
  SEXP Rsh_Fir_reg_dc23_;  // dc23
  SEXP Rsh_Fir_reg_dx124_;  // dx124
  SEXP Rsh_Fir_reg_i72_;  // i72
  SEXP Rsh_Fir_reg_dx125_;  // dx125
  SEXP Rsh_Fir_reg_dx126_;  // dx126
  SEXP Rsh_Fir_reg_dx127_;  // dx127
  SEXP Rsh_Fir_reg_dx128_;  // dx128
  SEXP Rsh_Fir_reg___14_;  // __14
  SEXP Rsh_Fir_reg_r149_;  // r149
  SEXP Rsh_Fir_reg_r150_;  // r150
  SEXP Rsh_Fir_reg_c63_;  // c63
  SEXP Rsh_Fir_reg_r151_;  // r151
  SEXP Rsh_Fir_reg_sym20_;  // sym20
  SEXP Rsh_Fir_reg_base20_;  // base20
  SEXP Rsh_Fir_reg_guard20_;  // guard20
  SEXP Rsh_Fir_reg_r152_;  // r152
  SEXP Rsh_Fir_reg_i75_;  // i75
  SEXP Rsh_Fir_reg_dx133_;  // dx133
  SEXP Rsh_Fir_reg_dx134_;  // dx134
  SEXP Rsh_Fir_reg_r153_;  // r153
  SEXP Rsh_Fir_reg_c64_;  // c64
  SEXP Rsh_Fir_reg_r154_;  // r154
  SEXP Rsh_Fir_reg_rep_int7_;  // rep_int7
  SEXP Rsh_Fir_reg_r155_;  // r155
  SEXP Rsh_Fir_reg_r156_;  // r156
  SEXP Rsh_Fir_reg_r157_;  // r157
  SEXP Rsh_Fir_reg_l24_;  // l24
  SEXP Rsh_Fir_reg_c65_;  // c65
  SEXP Rsh_Fir_reg_i77_;  // i77
  SEXP Rsh_Fir_reg_r159_;  // r159
  SEXP Rsh_Fir_reg_l26_;  // l26
  SEXP Rsh_Fir_reg_dr48_;  // dr48
  SEXP Rsh_Fir_reg_dc24_;  // dc24
  SEXP Rsh_Fir_reg_dx135_;  // dx135
  SEXP Rsh_Fir_reg_i79_;  // i79
  SEXP Rsh_Fir_reg_dx136_;  // dx136
  SEXP Rsh_Fir_reg_i80_;  // i80
  SEXP Rsh_Fir_reg_i81_;  // i81
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r162_;  // r162
  SEXP Rsh_Fir_reg_max_screen2_;  // max_screen2
  SEXP Rsh_Fir_reg_max_screen3_;  // max_screen3
  SEXP Rsh_Fir_reg_r163_;  // r163
  SEXP Rsh_Fir_reg_new_max_screen;  // new_max_screen
  SEXP Rsh_Fir_reg_new_max_screen1_;  // new_max_screen1
  SEXP Rsh_Fir_reg_r164_;  // r164
  SEXP Rsh_Fir_reg_new_screens4_;  // new_screens4
  SEXP Rsh_Fir_reg_new_screens5_;  // new_screens5
  SEXP Rsh_Fir_reg_s2_;  // s2
  SEXP Rsh_Fir_reg_l27_;  // l27
  SEXP Rsh_Fir_reg_i82_;  // i82
  SEXP Rsh_Fir_reg_i83_;  // i83
  SEXP Rsh_Fir_reg_i84_;  // i84
  SEXP Rsh_Fir_reg_c66_;  // c66
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_par3_;  // par3
  SEXP Rsh_Fir_reg__SSenv8_;  // _SSenv8
  SEXP Rsh_Fir_reg__SSenv9_;  // _SSenv9
  SEXP Rsh_Fir_reg_c67_;  // c67
  SEXP Rsh_Fir_reg__SSenv11_;  // _SSenv11
  SEXP Rsh_Fir_reg_dr50_;  // dr50
  SEXP Rsh_Fir_reg_dc25_;  // dc25
  SEXP Rsh_Fir_reg_dx137_;  // dx137
  SEXP Rsh_Fir_reg_dx138_;  // dx138
  SEXP Rsh_Fir_reg_r165_;  // r165
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r167_;  // r167
  SEXP Rsh_Fir_reg_l28_;  // l28
  SEXP Rsh_Fir_reg_c68_;  // c68
  SEXP Rsh_Fir_reg_i88_;  // i88
  SEXP Rsh_Fir_reg_r169_;  // r169
  SEXP Rsh_Fir_reg_l30_;  // l30
  SEXP Rsh_Fir_reg_dr52_;  // dr52
  SEXP Rsh_Fir_reg_dc26_;  // dc26
  SEXP Rsh_Fir_reg_dx139_;  // dx139
  SEXP Rsh_Fir_reg_i90_;  // i90
  SEXP Rsh_Fir_reg_dx140_;  // dx140
  SEXP Rsh_Fir_reg_i91_;  // i91
  SEXP Rsh_Fir_reg_i92_;  // i92
  SEXP Rsh_Fir_reg_____2_;  // ____2
  SEXP Rsh_Fir_reg_r172_;  // r172
  SEXP Rsh_Fir_reg_figs23_;  // figs23
  SEXP Rsh_Fir_reg_figs24_;  // figs24
  SEXP Rsh_Fir_reg_c69_;  // c69
  SEXP Rsh_Fir_reg_i94_;  // i94
  SEXP Rsh_Fir_reg_figs26_;  // figs26
  SEXP Rsh_Fir_reg_dr54_;  // dr54
  SEXP Rsh_Fir_reg_dc27_;  // dc27
  SEXP Rsh_Fir_reg_dx141_;  // dx141
  SEXP Rsh_Fir_reg_i96_;  // i96
  SEXP Rsh_Fir_reg_dx142_;  // dx142
  SEXP Rsh_Fir_reg_i97_;  // i97
  SEXP Rsh_Fir_reg_i98_;  // i98
  SEXP Rsh_Fir_reg_max_screen4_;  // max_screen4
  SEXP Rsh_Fir_reg_max_screen5_;  // max_screen5
  SEXP Rsh_Fir_reg_r173_;  // r173
  SEXP Rsh_Fir_reg___15_;  // __15
  SEXP Rsh_Fir_reg_r174_;  // r174
  SEXP Rsh_Fir_reg_l31_;  // l31
  SEXP Rsh_Fir_reg_c70_;  // c70
  SEXP Rsh_Fir_reg_i100_;  // i100
  SEXP Rsh_Fir_reg_dx145_;  // dx145
  SEXP Rsh_Fir_reg_l34_;  // l34
  SEXP Rsh_Fir_reg_dx146_;  // dx146
  SEXP Rsh_Fir_reg_l35_;  // l35
  SEXP Rsh_Fir_reg_dr56_;  // dr56
  SEXP Rsh_Fir_reg_dc28_;  // dc28
  SEXP Rsh_Fir_reg_dx149_;  // dx149
  SEXP Rsh_Fir_reg_i102_;  // i102
  SEXP Rsh_Fir_reg_dx150_;  // dx150
  SEXP Rsh_Fir_reg_l37_;  // l37
  SEXP Rsh_Fir_reg_dx151_;  // dx151
  SEXP Rsh_Fir_reg_dx152_;  // dx152
  SEXP Rsh_Fir_reg_i103_;  // i103
  SEXP Rsh_Fir_reg_i104_;  // i104
  SEXP Rsh_Fir_reg___16_;  // __16
  SEXP Rsh_Fir_reg_r175_;  // r175
  SEXP Rsh_Fir_reg_c71_;  // c71
  SEXP Rsh_Fir_reg_i106_;  // i106
  SEXP Rsh_Fir_reg_dx155_;  // dx155
  SEXP Rsh_Fir_reg_l39_;  // l39
  SEXP Rsh_Fir_reg_dx156_;  // dx156
  SEXP Rsh_Fir_reg_dr58_;  // dr58
  SEXP Rsh_Fir_reg_dc29_;  // dc29
  SEXP Rsh_Fir_reg_dx158_;  // dx158
  SEXP Rsh_Fir_reg_i108_;  // i108
  SEXP Rsh_Fir_reg_dx159_;  // dx159
  SEXP Rsh_Fir_reg_l41_;  // l41
  SEXP Rsh_Fir_reg_dx160_;  // dx160
  SEXP Rsh_Fir_reg_r176_;  // r176
  SEXP Rsh_Fir_reg_c72_;  // c72
  SEXP Rsh_Fir_reg_i110_;  // i110
  SEXP Rsh_Fir_reg_dx162_;  // dx162
  SEXP Rsh_Fir_reg_l43_;  // l43
  SEXP Rsh_Fir_reg_dr60_;  // dr60
  SEXP Rsh_Fir_reg_dc30_;  // dc30
  SEXP Rsh_Fir_reg_dx164_;  // dx164
  SEXP Rsh_Fir_reg_i112_;  // i112
  SEXP Rsh_Fir_reg_dx166_;  // dx166
  SEXP Rsh_Fir_reg_i113_;  // i113
  SEXP Rsh_Fir_reg_i114_;  // i114
  SEXP Rsh_Fir_reg_____3_;  // ____3
  SEXP Rsh_Fir_reg_r177_;  // r177
  SEXP Rsh_Fir_reg_sym21_;  // sym21
  SEXP Rsh_Fir_reg_base21_;  // base21
  SEXP Rsh_Fir_reg_guard21_;  // guard21
  SEXP Rsh_Fir_reg_r178_;  // r178
  SEXP Rsh_Fir_reg_r179_;  // r179
  SEXP Rsh_Fir_reg__valid_screens6_;  // _valid_screens6
  SEXP Rsh_Fir_reg__valid_screens7_;  // _valid_screens7
  SEXP Rsh_Fir_reg_new_screens6_;  // new_screens6
  SEXP Rsh_Fir_reg_new_screens7_;  // new_screens7
  SEXP Rsh_Fir_reg_c73_;  // c73
  SEXP Rsh_Fir_reg_r180_;  // r180
  SEXP Rsh_Fir_reg_max_screen6_;  // max_screen6
  SEXP Rsh_Fir_reg_max_screen7_;  // max_screen7
  SEXP Rsh_Fir_reg_r181_;  // r181
  SEXP Rsh_Fir_reg__SSassign1_;  // _SSassign1
  SEXP Rsh_Fir_reg_split_screens4_;  // split_screens4
  SEXP Rsh_Fir_reg_split_screens5_;  // split_screens5
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r183_;  // r183
  SEXP Rsh_Fir_reg__SSassign2_;  // _SSassign2
  SEXP Rsh_Fir_reg_cur_screen;  // cur_screen
  SEXP Rsh_Fir_reg_cur_screen1_;  // cur_screen1
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r185_;  // r185
  SEXP Rsh_Fir_reg__SSassign3_;  // _SSassign3
  SEXP Rsh_Fir_reg_valid_screens;  // valid_screens
  SEXP Rsh_Fir_reg_valid_screens1_;  // valid_screens1
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r187_;  // r187
  SEXP Rsh_Fir_reg_first_split12_;  // first_split12
  SEXP Rsh_Fir_reg_first_split13_;  // first_split13
  SEXP Rsh_Fir_reg_c74_;  // c74
  SEXP Rsh_Fir_reg_sym22_;  // sym22
  SEXP Rsh_Fir_reg_base22_;  // base22
  SEXP Rsh_Fir_reg_guard22_;  // guard22
  SEXP Rsh_Fir_reg_r188_;  // r188
  SEXP Rsh_Fir_reg_r189_;  // r189
  SEXP Rsh_Fir_reg_on_exit;  // on_exit
  SEXP Rsh_Fir_reg_r190_;  // r190
  SEXP Rsh_Fir_reg_par4_;  // par4
  SEXP Rsh_Fir_reg_split_screens6_;  // split_screens6
  SEXP Rsh_Fir_reg_split_screens7_;  // split_screens7
  SEXP Rsh_Fir_reg_c75_;  // c75
  SEXP Rsh_Fir_reg_split_screens9_;  // split_screens9
  SEXP Rsh_Fir_reg_dr62_;  // dr62
  SEXP Rsh_Fir_reg_dc31_;  // dc31
  SEXP Rsh_Fir_reg_dx167_;  // dx167
  SEXP Rsh_Fir_reg_dx168_;  // dx168
  SEXP Rsh_Fir_reg_cur_screen2_;  // cur_screen2
  SEXP Rsh_Fir_reg_cur_screen3_;  // cur_screen3
  SEXP Rsh_Fir_reg___17_;  // __17
  SEXP Rsh_Fir_reg_r192_;  // r192
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r194_;  // r194
  SEXP Rsh_Fir_reg_sym23_;  // sym23
  SEXP Rsh_Fir_reg_base23_;  // base23
  SEXP Rsh_Fir_reg_guard23_;  // guard23
  SEXP Rsh_Fir_reg_r195_;  // r195
  SEXP Rsh_Fir_reg_on_exit1_;  // on_exit1
  SEXP Rsh_Fir_reg_r197_;  // r197
  SEXP Rsh_Fir_reg_new_screens8_;  // new_screens8
  SEXP Rsh_Fir_reg_new_screens9_;  // new_screens9

  // Bind parameters
  Rsh_Fir_reg_figs = PARAMS[0];
  Rsh_Fir_reg_screen = PARAMS[1];
  Rsh_Fir_reg_erase = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st figs = figs
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_figs, RHO);
  (void)(Rsh_Fir_reg_figs);
  // st screen = screen
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_screen, RHO);
  (void)(Rsh_Fir_reg_screen);
  // erase_isMissing = missing.0(erase)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_erase;
  Rsh_Fir_reg_erase_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if erase_isMissing then L0(TRUE) else L0(erase)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_erase_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_erase_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(erase)
    Rsh_Fir_reg_erase_orDefault = Rsh_Fir_reg_erase;
    goto L0_;
  }

L0_:;
  // st erase = erase_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_erase_orDefault, RHO);
  (void)(Rsh_Fir_reg_erase_orDefault);
  // _SSexists = ldf `.SSexists`
  Rsh_Fir_reg__SSexists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L72() else D0()
  // L72()
  goto L72_;

L1_:;
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L76() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L76()
    goto L76_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L5()
  // L5()
  goto L5_;

L3_:;
  // goto L4(0.0)
  // L4(0.0)
  Rsh_Fir_reg_r7_ = Rsh_const(CCP, 6);
  goto L4_;

L4_:;
  // st screen = r7
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // first_split2 = ld `first.split`
  Rsh_Fir_reg_first_split2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L83() else D5()
  // L83()
  goto L83_;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L88() else L89()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L88()
    goto L88_;
  } else {
  // L89()
    goto L89_;
  }

L8_:;
  // c3 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c3 then L90() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L90()
    goto L90_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // first_split6 = ld `first.split`
  Rsh_Fir_reg_first_split6_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L98() else D10()
  // L98()
  goto L98_;

L10_:;
  // _valid_screens = ld `.valid.screens`
  Rsh_Fir_reg__valid_screens = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L95() else D9()
  // L95()
  goto L95_;

L13_:;
  // c11 = `as.logical`(c7)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c11 then L14(c11) else L102()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L14(c11)
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c11_;
    goto L14_;
  } else {
  // L102()
    goto L102_;
  }

L14_:;
  // c26 = `as.logical`(c12)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c26 then L109() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L109()
    goto L109_;
  } else {
  // L16()
    goto L16_;
  }

L15_:;
  // c23 = `as.logical`(c18)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c24 = `||`(c17, c23)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L14(c24)
  // L14(c24)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c24_;
  goto L14_;

L16_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // sym2 = ldf `is.matrix`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base2 = ldf `is.matrix` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard2 then L113() else L114()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L113()
    goto L113_;
  } else {
  // L114()
    goto L114_;
  }

L18_:;
  // r29 = `!`(r27)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c27 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c27 then L117() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L117()
    goto L117_;
  } else {
  // L19()
    goto L19_;
  }

L19_:;
  // goto L27()
  // L27()
  goto L27_;

L20_:;
  // r33 = `!`(r31)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // c28 = `as.logical`(r33)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c28 then L122() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L122()
    goto L122_;
  } else {
  // L21()
    goto L21_;
  }

L21_:;
  // goto L22()
  // L22()
  goto L22_;

L22_:;
  // figs5 = ld figs
  Rsh_Fir_reg_figs5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L126() else D23()
  // L126()
  goto L126_;

L23_:;
  // st nr = dx1
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // figs9 = ld figs
  Rsh_Fir_reg_figs9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L130() else D24()
  // L130()
  goto L130_;

L24_:;
  // st nc = dx3
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym4 = ldf `seq.int`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base4 = ldf `seq.int` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard4 then L134() else L135()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L134()
    goto L134_;
  } else {
  // L135()
    goto L135_;
  }

L25_:;
  // st x = r39
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // sym5 = ldf `seq.int`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base5 = ldf `seq.int` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard5 then L138() else L139()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L138()
    goto L138_;
  } else {
  // L139()
    goto L139_;
  }

L26_:;
  // st y = r43
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L142() else D29()
  // L142()
  goto L142_;

L27_:;
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L145() else D31()
  // L145()
  goto L145_;

L28_:;
  // goto L29()
  // L29()
  goto L29_;

L29_:;
  // st `cur.screen` = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_const(CCP, 6), RHO);
  (void)(Rsh_const(CCP, 6));
  // st `valid.screens` = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_const(CCP, 6), RHO);
  (void)(Rsh_const(CCP, 6));
  // st `new.screens` = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_const(CCP, 6), RHO);
  (void)(Rsh_const(CCP, 6));
  // first_split10 = ld `first.split`
  Rsh_Fir_reg_first_split10_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L152() else D36()
  // L152()
  goto L152_;

L30_:;
  // erase3 = ld erase
  Rsh_Fir_reg_erase3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L209() else D58()
  // L209()
  goto L209_;

L31_:;
  // goto L32()
  // L32()
  goto L32_;

L32_:;
  // par = ldf par
  Rsh_Fir_reg_par = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L159() else D40()
  // L159()
  goto L159_;

L33_:;
  // st `split.screens` = r105
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r105_, RHO);
  (void)(Rsh_Fir_reg_r105_);
  // num_screens4 = ld `num.screens`
  Rsh_Fir_reg_num_screens4_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L181() else D48()
  // L181()
  goto L181_;

L34_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args15);
  // c43 = `<`.1(l6, i2)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if c43 then L183() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L183()
    goto L183_;
  } else {
  // L39()
    goto L39_;
  }

L35_:;
  // st `split.screens` = dx27
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_dx27_, RHO);
  (void)(Rsh_Fir_reg_dx27_);
  // figs15 = ld figs
  Rsh_Fir_reg_figs15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L190() else D53()
  // L190()
  goto L190_;

L36_:;
  // l10 = ld `split.screens`
  Rsh_Fir_reg_l10_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // c47 = `is.object`(l10)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c47 then L195() else L196(i14, dx29, l10, dx29, l10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L195()
    goto L195_;
  } else {
  // L196(i14, dx29, l10, dx29, l10)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i14_;
    Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx29_;
    Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l10_;
    Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx29_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l10_;
    goto L196_;
  }

L37_:;
  // c48 = `is.object`(dx39)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dx39_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c48 then L200() else L201(i20, dx37, l16, dx39)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c48_)) {
  // L200()
    goto L200_;
  } else {
  // L201(i20, dx37, l16, dx39)
    Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i20_;
    Rsh_Fir_reg_dx42_ = Rsh_Fir_reg_dx37_;
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_l16_;
    Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx39_;
    goto L201_;
  }

L38_:;
  // st `split.screens` = dx53
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_dx53_, RHO);
  (void)(Rsh_Fir_reg_dx53_);
  // goto L34(i30)
  // L34(i30)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i30_;
  goto L34_;

L39_:;
  // x8 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args19[4];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args19[3] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_x8_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // st i = x8
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_x8_, RHO);
  (void)(Rsh_Fir_reg_x8_);
  // par2 = ldf par
  Rsh_Fir_reg_par2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L184() else D50()
  // L184()
  goto L184_;

L40_:;
  // _SSassign1 = ldf `.SSassign`
  Rsh_Fir_reg__SSassign1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L314() else D99()
  // L314()
  goto L314_;

L41_:;
  // goto L42()
  // L42()
  goto L42_;

L42_:;
  // sym15 = ldf max
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base15 = ldf max in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard15 then L214() else L215()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L214()
    goto L214_;
  } else {
  // L215()
    goto L215_;
  }

L43_:;
  // st `max.screen` = r125
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r125_, RHO);
  (void)(Rsh_Fir_reg_r125_);
  // max_screen = ld `max.screen`
  Rsh_Fir_reg_max_screen = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L218() else D63()
  // L218()
  goto L218_;

L44_:;
  // st total = r130
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r130_, RHO);
  (void)(Rsh_Fir_reg_r130_);
  // screen7 = ld screen
  Rsh_Fir_reg_screen7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L225() else D68()
  // L225()
  goto L225_;

L45_:;
  // goto L47()
  // L47()
  goto L47_;

L46_:;
  // c54 = `is.object`(dx55)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dx55_;
  Rsh_Fir_reg_c54_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c54 then L233() else L234(dx55)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c54_)) {
  // L233()
    goto L233_;
  } else {
  // L234(dx55)
    Rsh_Fir_reg_dx57_ = Rsh_Fir_reg_dx55_;
    goto L234_;
  }

L47_:;
  // num_screens8 = ld `num.screens`
  Rsh_Fir_reg_num_screens8_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L237() else D71()
  // L237()
  goto L237_;

L48_:;
  // i35 = `+`.1(i34, 1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_i34_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_i35_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // c55 = `<`.1(l23, i35)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_i35_;
  Rsh_Fir_reg_c55_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if c55 then L238() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c55_)) {
  // L238()
    goto L238_;
  } else {
  // L60()
    goto L60_;
  }

L49_:;
  // figs19 = ld figs
  Rsh_Fir_reg_figs19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L246() else D74()
  // L246()
  goto L246_;

L50_:;
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r139 = dyn __9(total6, r137)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_total6_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_r137_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r139_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L49(i44, r139)
  // L49(i44, r139)
  Rsh_Fir_reg_i41_ = Rsh_Fir_reg_i44_;
  Rsh_Fir_reg_dx62_ = Rsh_Fir_reg_r139_;
  goto L49_;

L51_:;
  // sym18 = ldf `rep.int`
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base18 = ldf `rep.int` in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard18 then L251() else L252()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L251()
    goto L251_;
  } else {
  // L252()
    goto L252_;
  }

L52_:;
  // r156 = `*`(dx74, r142)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dx74_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_r142_;
  Rsh_Fir_reg_r156_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // r157 = `+`(dx73, r156)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dx73_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_r156_;
  Rsh_Fir_reg_r157_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // l24 = ld figs
  Rsh_Fir_reg_l24_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c65 = `is.object`(l24)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_l24_;
  Rsh_Fir_reg_c65_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c65 then L276() else L277(i53, r157, l24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c65_)) {
  // L276()
    goto L276_;
  } else {
  // L277(i53, r157, l24)
    Rsh_Fir_reg_i77_ = Rsh_Fir_reg_i53_;
    Rsh_Fir_reg_r159_ = Rsh_Fir_reg_r157_;
    Rsh_Fir_reg_l26_ = Rsh_Fir_reg_l24_;
    goto L277_;
  }

L53_:;
  // sym20 = ldf c
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base20 = ldf c in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard20 then L272() else L273()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L272()
    goto L272_;
  } else {
  // L273()
    goto L273_;
  }

L54_:;
  // total11 = ld total
  Rsh_Fir_reg_total11_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L259() else D77()
  // L259()
  goto L259_;

L55_:;
  // r147 = `-`(dx103, dx104)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dx103_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_dx104_;
  Rsh_Fir_reg_r147_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // total15 = ld total
  Rsh_Fir_reg_total15_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L263() else D78()
  // L263()
  goto L263_;

L56_:;
  // total19 = ld total
  Rsh_Fir_reg_total19_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L267() else D79()
  // L267()
  goto L267_;

L57_:;
  // r150 = `-`(dx127, dx128)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dx127_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_dx128_;
  Rsh_Fir_reg_r150_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // c63 = ldf c in base
  Rsh_Fir_reg_c63_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r151 = dyn c63(r147, r150)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r147_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_r150_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r151_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c63_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L271() else D80()
  // L271()
  goto L271_;

L58_:;
  // rep_int7 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r155 = dyn rep_int7(r144, r153)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r144_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_r153_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r155_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int7_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L275() else D82()
  // L275()
  goto L275_;

L59_:;
  // st figs = dx136
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx136_, RHO);
  (void)(Rsh_Fir_reg_dx136_);
  // goto L48(i79)
  // L48(i79)
  Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i79_;
  goto L48_;

L60_:;
  // x9 = `[[`(s1, i35, NULL, TRUE)
  SEXP Rsh_Fir_array_args34[4];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args34[3] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_x9_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // st i = x9
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_x9_, RHO);
  (void)(Rsh_Fir_reg_x9_);
  // total = ld total
  Rsh_Fir_reg_total = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L239() else D72()
  // L239()
  goto L239_;

L61_:;
  // i84 = `+`.1(i83, 1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_i83_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_i84_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // c66 = `<`.1(l27, i84)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_l27_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_i84_;
  Rsh_Fir_reg_c66_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if c66 then L283() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c66_)) {
  // L283()
    goto L283_;
  } else {
  // L66()
    goto L66_;
  }

L62_:;
  // st `split.screens` = dx140
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_dx140_, RHO);
  (void)(Rsh_Fir_reg_dx140_);
  // figs23 = ld figs
  Rsh_Fir_reg_figs23_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L290() else D90()
  // L290()
  goto L290_;

L63_:;
  // l31 = ld `split.screens`
  Rsh_Fir_reg_l31_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // c70 = `is.object`(l31)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_l31_;
  Rsh_Fir_reg_c70_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if c70 then L296() else L297(i96, dx142, l31, dx142, l31)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c70_)) {
  // L296()
    goto L296_;
  } else {
  // L297(i96, dx142, l31, dx142, l31)
    Rsh_Fir_reg_i100_ = Rsh_Fir_reg_i96_;
    Rsh_Fir_reg_dx145_ = Rsh_Fir_reg_dx142_;
    Rsh_Fir_reg_l34_ = Rsh_Fir_reg_l31_;
    Rsh_Fir_reg_dx146_ = Rsh_Fir_reg_dx142_;
    Rsh_Fir_reg_l35_ = Rsh_Fir_reg_l31_;
    goto L297_;
  }

L64_:;
  // c71 = `is.object`(dx152)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dx152_;
  Rsh_Fir_reg_c71_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c71 then L301() else L302(i102, dx150, l37, dx152)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c71_)) {
  // L301()
    goto L301_;
  } else {
  // L302(i102, dx150, l37, dx152)
    Rsh_Fir_reg_i106_ = Rsh_Fir_reg_i102_;
    Rsh_Fir_reg_dx155_ = Rsh_Fir_reg_dx150_;
    Rsh_Fir_reg_l39_ = Rsh_Fir_reg_l37_;
    Rsh_Fir_reg_dx156_ = Rsh_Fir_reg_dx152_;
    goto L302_;
  }

L65_:;
  // st `split.screens` = dx166
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_dx166_, RHO);
  (void)(Rsh_Fir_reg_dx166_);
  // goto L61(i112)
  // L61(i112)
  Rsh_Fir_reg_i83_ = Rsh_Fir_reg_i112_;
  goto L61_;

L66_:;
  // x10 = `[[`(s2, i84, NULL, TRUE)
  SEXP Rsh_Fir_array_args39[4];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_s2_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_i84_;
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args39[3] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_x10_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // st i = x10
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_x10_, RHO);
  (void)(Rsh_Fir_reg_x10_);
  // par3 = ldf par
  Rsh_Fir_reg_par3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L284() else D87()
  // L284()
  goto L284_;

L67_:;
  // st `valid.screens` = r179
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r179_, RHO);
  (void)(Rsh_Fir_reg_r179_);
  // max_screen6 = ld `max.screen`
  Rsh_Fir_reg_max_screen6_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L313() else D98()
  // L313()
  goto L313_;

L68_:;
  // goto L70()
  // L70()
  goto L70_;

L69_:;
  // goto L70()
  // L70()
  goto L70_;

L70_:;
  // par4 = ldf par
  Rsh_Fir_reg_par4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L325() else D106()
  // L325()
  goto L325_;

L71_:;
  // new_screens8 = ld `new.screens`
  Rsh_Fir_reg_new_screens8_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L329() else D108()
  // L329()
  goto L329_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L72_:;
  // r = dyn _SSexists("sp.screens")
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__SSexists, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L73() else D1()
  // L73()
  goto L73_;

D1_:;
  // deopt 3 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L73_:;
  // r1 = `!`(r)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // st `first.split` = r1
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym = ldf missing
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L74_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r4 = dyn missing(<sym screen>)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L1_;

L75_:;
  // r2 = dyn base(<sym screen>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L1_;

L76_:;
  // first_split = ld `first.split`
  Rsh_Fir_reg_first_split = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L77() else D2()
  // L77()
  goto L77_;

D2_:;
  // deopt 9 [first_split]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_first_split;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L77_:;
  // first_split1 = force? first_split
  Rsh_Fir_reg_first_split1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_first_split);
  // checkMissing(first_split1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_first_split1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // r5 = `!`(first_split1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_first_split1_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if c1 then L78() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L78()
    goto L78_;
  } else {
  // L3()
    goto L3_;
  }

L78_:;
  // _SSget = ldf `.SSget`
  Rsh_Fir_reg__SSget = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L79() else D3()
  // L79()
  goto L79_;

D3_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L79_:;
  // r6 = dyn _SSget("sp.cur.screen")
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__SSget, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L80() else D4()
  // L80()
  goto L80_;

D4_:;
  // deopt 15 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L80_:;
  // goto L4(r6)
  // L4(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L4_;

D5_:;
  // deopt 21 [first_split2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_first_split2_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L83_:;
  // first_split3 = force? first_split2
  Rsh_Fir_reg_first_split3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_first_split2_);
  // checkMissing(first_split3)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_first_split3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // r9 = `!`(first_split3)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_first_split3_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if c2 then L84() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L84()
    goto L84_;
  } else {
  // L6()
    goto L6_;
  }

L84_:;
  // _SSget1 = ldf `.SSget`
  Rsh_Fir_reg__SSget1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L85() else D6()
  // L85()
  goto L85_;

D6_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L85_:;
  // r10 = dyn _SSget1("sp.valid.screens")
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__SSget1_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L86() else D7()
  // L86()
  goto L86_;

D7_:;
  // deopt 27 [r10]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L86_:;
  // st `.valid.screens` = r10
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // goto L7()
  // L7()
  goto L7_;

L88_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r14 = dyn missing1(<sym figs>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L8(r14)
  // L8(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L8_;

L89_:;
  // r12 = dyn base1(<sym figs>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L8(r12)
  // L8(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L8_;

L90_:;
  // first_split4 = ld `first.split`
  Rsh_Fir_reg_first_split4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L91() else D8()
  // L91()
  goto L91_;

D8_:;
  // deopt 34 [first_split4]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_first_split4_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L91_:;
  // first_split5 = force? first_split4
  Rsh_Fir_reg_first_split5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_first_split4_);
  // checkMissing(first_split5)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_first_split5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c4 = `as.logical`(first_split5)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_first_split5_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if c4 then L92() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L92()
    goto L92_;
  } else {
  // L10()
    goto L10_;
  }

L92_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return FALSE
  return Rsh_const(CCP, 38);

D9_:;
  // deopt 39 [_valid_screens]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg__valid_screens;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L95_:;
  // _valid_screens1 = force? _valid_screens
  Rsh_Fir_reg__valid_screens1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__valid_screens);
  // checkMissing(_valid_screens1)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg__valid_screens1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return _valid_screens1
  return Rsh_Fir_reg__valid_screens1_;

D10_:;
  // deopt 44 [first_split6]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_first_split6_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L98_:;
  // first_split7 = force? first_split6
  Rsh_Fir_reg_first_split7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_first_split6_);
  // checkMissing(first_split7)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_first_split7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // c5 = `as.logical`(first_split7)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_first_split7_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if c5 then L99() else L13(c5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L99()
    goto L99_;
  } else {
  // L13(c5)
    Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c5_;
    goto L13_;
  }

L99_:;
  // screen1 = ld screen
  Rsh_Fir_reg_screen1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L100() else D11()
  // L100()
  goto L100_;

D11_:;
  // deopt 46 [c5, screen1]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_screen1_;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L100_:;
  // screen2 = force? screen1
  Rsh_Fir_reg_screen2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_screen1_);
  // checkMissing(screen2)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_screen2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // r18 = `!=`(screen2, 0.0)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_screen2_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // c8 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // c9 = `&&`(c5, c8)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L13(c9)
  // L13(c9)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c9_;
  goto L13_;

L102_:;
  // first_split8 = ld `first.split`
  Rsh_Fir_reg_first_split8_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L103() else D12()
  // L103()
  goto L103_;

D12_:;
  // deopt 51 [c11, first_split8]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_first_split8_;
  Rsh_Fir_deopt(51, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L103_:;
  // first_split9 = force? first_split8
  Rsh_Fir_reg_first_split9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_first_split8_);
  // checkMissing(first_split9)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_first_split9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // r19 = `!`(first_split9)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_first_split9_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // c14 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if c14 then L104() else L15(c11, c14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L104()
    goto L104_;
  } else {
  // L15(c11, c14)
    Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c11_;
    Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c14_;
    goto L15_;
  }

L104_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L105() else D13()
  // L105()
  goto L105_;

D13_:;
  // deopt 55 [c11, c14]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_c14_;
  Rsh_Fir_deopt(55, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L105_:;
  // p = prom<V +>{
  //   screen3 = ld screen;
  //   screen4 = force? screen3;
  //   checkMissing(screen4);
  //   return screen4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3566772296_, CCP, RHO);
  // p1 = prom<V +>{
  //   _valid_screens2 = ld `.valid.screens`;
  //   _valid_screens3 = force? _valid_screens2;
  //   checkMissing(_valid_screens3);
  //   return _valid_screens3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3566772296_1, CCP, RHO);
  // r22 = dyn _in_(p, p1)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L106() else D14()
  // L106()
  goto L106_;

D14_:;
  // deopt 58 [c11, c14, r22]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(58, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L106_:;
  // r23 = `!`(r22)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // c19 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // c20 = `&&`(c14, c19)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_c19_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L15(c11, c20)
  // L15(c11, c20)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c20_;
  goto L15_;

L109_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L110() else D15()
  // L110()
  goto L110_;

D15_:;
  // deopt 63 []
  Rsh_Fir_deopt(63, 0, NULL, CCP, RHO);
  return R_NilValue;

L110_:;
  // r24 = dyn stop("invalid screen number")
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L111() else D16()
  // L111()
  goto L111_;

D16_:;
  // deopt 65 [r24]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L111_:;
  // goto L17()
  // L17()
  goto L17_;

L113_:;
  // figs1 = ld figs
  Rsh_Fir_reg_figs1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L115() else D17()
  // L115()
  goto L115_;

L114_:;
  // r26 = dyn base2(<sym figs>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L18(r26)
  // L18(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L18_;

D17_:;
  // deopt 70 [figs1]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_figs1_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L115_:;
  // figs2 = force? figs1
  Rsh_Fir_reg_figs2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_figs1_);
  // checkMissing(figs2)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_figs2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // is_matrix = ldf `is.matrix` in base
  Rsh_Fir_reg_is_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r28 = dyn is_matrix(figs2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_figs2_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_matrix, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L116() else D18()
  // L116()
  goto L116_;

D18_:;
  // deopt 73 [r28]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L116_:;
  // goto L18(r28)
  // L18(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L18_;

L117_:;
  // sym3 = ldf `is.vector`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base3 = ldf `is.vector` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args77);
  // if guard3 then L118() else L119()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L118()
    goto L118_;
  } else {
  // L119()
    goto L119_;
  }

L118_:;
  // figs3 = ld figs
  Rsh_Fir_reg_figs3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L120() else D19()
  // L120()
  goto L120_;

L119_:;
  // r30 = dyn base3(<sym figs>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L20(r30)
  // L20(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L20_;

D19_:;
  // deopt 77 [figs3]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_figs3_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L120_:;
  // figs4 = force? figs3
  Rsh_Fir_reg_figs4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_figs3_);
  // checkMissing(figs4)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_figs4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // is_vector = ldf `is.vector` in base
  Rsh_Fir_reg_is_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r32 = dyn is_vector(figs4, "any")
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_figs4_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_vector, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L121() else D20()
  // L121()
  goto L121_;

D20_:;
  // deopt 81 [r32]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L121_:;
  // goto L20(r32)
  // L20(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L20_;

L122_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L123() else D21()
  // L123()
  goto L123_;

D21_:;
  // deopt 84 []
  Rsh_Fir_deopt(84, 0, NULL, CCP, RHO);
  return R_NilValue;

L123_:;
  // r34 = dyn stop1("'figs' must be a vector or a matrix with 4 columns")
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L124() else D22()
  // L124()
  goto L124_;

D22_:;
  // deopt 86 [r34]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L124_:;
  // goto L22()
  // L22()
  goto L22_;

D23_:;
  // deopt 89 [figs5]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_figs5_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L126_:;
  // figs6 = force? figs5
  Rsh_Fir_reg_figs6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_figs5_);
  // checkMissing(figs6)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_figs6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // c29 = `is.object`(figs6)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_figs6_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if c29 then L127() else L128(figs6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L127()
    goto L127_;
  } else {
  // L128(figs6)
    Rsh_Fir_reg_figs8_ = Rsh_Fir_reg_figs6_;
    goto L128_;
  }

L127_:;
  // dr = tryDispatchBuiltin.1("[", figs6)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_figs6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args84);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if dc then L129() else L128(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L129()
    goto L129_;
  } else {
  // L128(dr)
    Rsh_Fir_reg_figs8_ = Rsh_Fir_reg_dr;
    goto L128_;
  }

L128_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r36 = dyn __(figs8, 1)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_figs8_;
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L23(r36)
  // L23(r36)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r36_;
  goto L23_;

L129_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L23(dx)
  // L23(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L23_;

D24_:;
  // deopt 95 [figs9]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_figs9_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L130_:;
  // figs10 = force? figs9
  Rsh_Fir_reg_figs10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_figs9_);
  // checkMissing(figs10)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_figs10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(figs10)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_figs10_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // if c30 then L131() else L132(figs10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L131()
    goto L131_;
  } else {
  // L132(figs10)
    Rsh_Fir_reg_figs12_ = Rsh_Fir_reg_figs10_;
    goto L132_;
  }

L131_:;
  // dr2 = tryDispatchBuiltin.1("[", figs10)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_figs10_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args90);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if dc1 then L133() else L132(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L133()
    goto L133_;
  } else {
  // L132(dr2)
    Rsh_Fir_reg_figs12_ = Rsh_Fir_reg_dr2_;
    goto L132_;
  }

L132_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r37 = dyn __1(figs12, 2)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_figs12_;
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L24(r37)
  // L24(r37)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r37_;
  goto L24_;

L133_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // goto L24(dx2)
  // L24(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L24_;

L134_:;
  // nc = ld nc
  Rsh_Fir_reg_nc = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L136() else D25()
  // L136()
  goto L136_;

L135_:;
  // r38 = dyn base4[, , `length.out`](0.0, 1.0, <lang `+`(nc, 1.0)>)
  SEXP Rsh_Fir_array_args94[3];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args94[2] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 3, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L25(r38)
  // L25(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L25_;

D25_:;
  // deopt 105 [nc]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_nc;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L136_:;
  // nc1 = force? nc
  Rsh_Fir_reg_nc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc);
  // checkMissing(nc1)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_nc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // r40 = `+`(nc1, 1.0)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_nc1_;
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r41 = dyn seq_int(0.0, 1.0, r40)
  SEXP Rsh_Fir_array_args97[3];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args97[1] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args97[2] = Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 3, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L137() else D26()
  // L137()
  goto L137_;

D26_:;
  // deopt 111 [r41]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(111, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L137_:;
  // goto L25(r41)
  // L25(r41)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r41_;
  goto L25_;

L138_:;
  // nr = ld nr
  Rsh_Fir_reg_nr = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L140() else D27()
  // L140()
  goto L140_;

L139_:;
  // r42 = dyn base5[, , `length.out`](1.0, 0.0, <lang `+`(nr, 1.0)>)
  SEXP Rsh_Fir_array_args98[3];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args98[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args98[2] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 3, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L26(r42)
  // L26(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L26_;

D27_:;
  // deopt 117 [nr]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_nr;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L140_:;
  // nr1 = force? nr
  Rsh_Fir_reg_nr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nr);
  // checkMissing(nr1)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_nr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // r44 = `+`(nr1, 1.0)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_nr1_;
  Rsh_Fir_array_args100[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // seq_int1 = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r45 = dyn seq_int1(1.0, 0.0, r44)
  SEXP Rsh_Fir_array_args101[3];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args101[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args101[2] = Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int1_, 3, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L141() else D28()
  // L141()
  goto L141_;

D28_:;
  // deopt 123 [r45]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L141_:;
  // goto L26(r45)
  // L26(r45)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r45_;
  goto L26_;

D29_:;
  // deopt 126 []
  Rsh_Fir_deopt(126, 0, NULL, CCP, RHO);
  return R_NilValue;

L142_:;
  // p2 = prom<V +>{
  //   sym6 = ldf c;
  //   base6 = ldf c in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L11() else L12();
  // L0(r47):
  //   return r47;
  // L11():
  //   sym7 = ldf `rep.int`;
  //   base7 = ldf `rep.int` in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L13() else L14();
  // L12():
  //   r46 = dyn base6(<lang rep.int(`[`(x, `-`(`(`(`+`(nc, 1.0)))), nr)>, <lang rep.int(`[`(x, `-`(1)), nr)>, <lang rep.int(`[`(y, `-`(1)), rep.int(nc, nr))>, <lang rep.int(`[`(y, `-`(`(`(`+`(nr, 1.0)))), rep.int(nc, nr))>);
  //   goto L0(r46);
  // L1(r49):
  //   sym8 = ldf `rep.int`;
  //   base8 = ldf `rep.int` in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L18() else L19();
  // L13():
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   c31 = `is.object`(x1);
  //   if c31 then L15() else L16(x1);
  // L14():
  //   r48 = dyn base7(<lang `[`(x, `-`(`(`(`+`(nc, 1.0))))>, <sym nr>);
  //   goto L1(r48);
  // L2(dx5):
  //   nr2 = ld nr;
  //   nr3 = force? nr2;
  //   checkMissing(nr3);
  //   rep_int = ldf `rep.int` in base;
  //   r53 = dyn rep_int(dx5, nr3);
  //   goto L1(r53);
  // L3(r55):
  //   sym9 = ldf `rep.int`;
  //   base9 = ldf `rep.int` in base;
  //   guard9 = `==`.4(sym9, base9);
  //   if guard9 then L23() else L24();
  // L15():
  //   dr4 = tryDispatchBuiltin.1("[", x1);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L17() else L16(dr4);
  // L16(x3):
  //   nc2 = ld nc;
  //   nc3 = force? nc2;
  //   checkMissing(nc3);
  //   r50 = `+`(nc3, 1.0);
  //   r51 = `-`(<missing>, r50);
  //   __2 = ldf `[` in base;
  //   r52 = dyn __2(x3, r51);
  //   goto L2(r52);
  // L18():
  //   x4 = ld x;
  //   x5 = force? x4;
  //   checkMissing(x5);
  //   c32 = `is.object`(x5);
  //   if c32 then L20() else L21(x5);
  // L19():
  //   r54 = dyn base8(<lang `[`(x, `-`(1))>, <sym nr>);
  //   goto L3(r54);
  // L4(dx7):
  //   nr4 = ld nr;
  //   nr5 = force? nr4;
  //   checkMissing(nr5);
  //   rep_int1 = ldf `rep.int` in base;
  //   r57 = dyn rep_int1(dx7, nr5);
  //   goto L3(r57);
  // L5(r59):
  //   sym11 = ldf `rep.int`;
  //   base11 = ldf `rep.int` in base;
  //   guard11 = `==`.4(sym11, base11);
  //   if guard11 then L30() else L31();
  // L17():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L2(dx4);
  // L20():
  //   dr6 = tryDispatchBuiltin.1("[", x5);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L22() else L21(dr6);
  // L21(x7):
  //   __3 = ldf `[` in base;
  //   r56 = dyn __3(x7, -1);
  //   goto L4(r56);
  // L23():
  //   y = ld y;
  //   y1 = force? y;
  //   checkMissing(y1);
  //   c33 = `is.object`(y1);
  //   if c33 then L25() else L26(y1);
  // L24():
  //   r58 = dyn base9(<lang `[`(y, `-`(1))>, <lang rep.int(nc, nr)>);
  //   goto L5(r58);
  // L6(dx9):
  //   sym10 = ldf `rep.int`;
  //   base10 = ldf `rep.int` in base;
  //   guard10 = `==`.4(sym10, base10);
  //   if guard10 then L28() else L29();
  // L8(r66):
  //   c35 = ldf c in base;
  //   r74 = dyn c35(r49, r55, r59, r66);
  //   goto L0(r74);
  // L22():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L4(dx6);
  // L25():
  //   dr8 = tryDispatchBuiltin.1("[", y1);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L27() else L26(dr8);
  // L26(y3):
  //   __4 = ldf `[` in base;
  //   r60 = dyn __4(y3, -1);
  //   goto L6(r60);
  // L30():
  //   y4 = ld y;
  //   y5 = force? y4;
  //   checkMissing(y5);
  //   c34 = `is.object`(y5);
  //   if c34 then L32() else L33(y5);
  // L31():
  //   r65 = dyn base11(<lang `[`(y, `-`(`(`(`+`(nr, 1.0))))>, <lang rep.int(nc, nr)>);
  //   goto L8(r65);
  // L7(r62):
  //   rep_int3 = ldf `rep.int` in base;
  //   r64 = dyn rep_int3(dx9, r62);
  //   goto L5(r64);
  // L9(dx11):
  //   sym12 = ldf `rep.int`;
  //   base12 = ldf `rep.int` in base;
  //   guard12 = `==`.4(sym12, base12);
  //   if guard12 then L35() else L36();
  // L27():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L6(dx8);
  // L28():
  //   nc4 = ld nc;
  //   nc5 = force? nc4;
  //   checkMissing(nc5);
  //   nr6 = ld nr;
  //   nr7 = force? nr6;
  //   checkMissing(nr7);
  //   rep_int2 = ldf `rep.int` in base;
  //   r63 = dyn rep_int2(nc5, nr7);
  //   goto L7(r63);
  // L29():
  //   r61 = dyn base10(<sym nc>, <sym nr>);
  //   goto L7(r61);
  // L32():
  //   dr10 = tryDispatchBuiltin.1("[", y5);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L34() else L33(dr10);
  // L33(y7):
  //   nr8 = ld nr;
  //   nr9 = force? nr8;
  //   checkMissing(nr9);
  //   r67 = `+`(nr9, 1.0);
  //   r68 = `-`(<missing>, r67);
  //   __5 = ldf `[` in base;
  //   r69 = dyn __5(y7, r68);
  //   goto L9(r69);
  // L10(r71):
  //   rep_int5 = ldf `rep.int` in base;
  //   r73 = dyn rep_int5(dx11, r71);
  //   goto L8(r73);
  // L34():
  //   dx10 = getTryDispatchBuiltinValue(dr10);
  //   goto L9(dx10);
  // L35():
  //   nc6 = ld nc;
  //   nc7 = force? nc6;
  //   checkMissing(nc7);
  //   nr10 = ld nr;
  //   nr11 = force? nr10;
  //   checkMissing(nr11);
  //   rep_int4 = ldf `rep.int` in base;
  //   r72 = dyn rep_int4(nc7, nr11);
  //   goto L10(r72);
  // L36():
  //   r70 = dyn base12(<sym nc>, <sym nr>);
  //   goto L10(r70);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3566772296_2, CCP, RHO);
  // r76 = dyn matrix[, ncol](p2, 4.0)
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args159[1] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = Rsh_const(CCP, 63);
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 2, Rsh_Fir_array_args159, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L143() else D30()
  // L143()
  goto L143_;

D30_:;
  // deopt 130 [r76]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L143_:;
  // st figs = r76
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r76_, RHO);
  (void)(Rsh_Fir_reg_r76_);
  // goto L27()
  // L27()
  goto L27_;

D31_:;
  // deopt 135 []
  Rsh_Fir_deopt(135, 0, NULL, CCP, RHO);
  return R_NilValue;

L145_:;
  // p3 = prom<V +>{
  //   figs13 = ld figs;
  //   figs14 = force? figs13;
  //   checkMissing(figs14);
  //   return figs14;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3566772296_3, CCP, RHO);
  // r79 = dyn nrow(p3)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args161, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L146() else D32()
  // L146()
  goto L146_;

D32_:;
  // deopt 137 [r79]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L146_:;
  // st `num.screens` = r79
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r79_, RHO);
  (void)(Rsh_Fir_reg_r79_);
  // num_screens = ld `num.screens`
  Rsh_Fir_reg_num_screens = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L147() else D33()
  // L147()
  goto L147_;

D33_:;
  // deopt 139 [num_screens]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_num_screens;
  Rsh_Fir_deopt(139, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L147_:;
  // num_screens1 = force? num_screens
  Rsh_Fir_reg_num_screens1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_num_screens);
  // checkMissing(num_screens1)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_num_screens1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty()));
  // r80 = `<`(num_screens1, 1.0)
  SEXP Rsh_Fir_array_args163[2];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_num_screens1_;
  Rsh_Fir_array_args163[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // c36 = `as.logical`(r80)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty());
  // if c36 then L148() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L148()
    goto L148_;
  } else {
  // L28()
    goto L28_;
  }

L148_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L149() else D34()
  // L149()
  goto L149_;

D34_:;
  // deopt 144 []
  Rsh_Fir_deopt(144, 0, NULL, CCP, RHO);
  return R_NilValue;

L149_:;
  // r81 = dyn stop2("'figs' must specify at least one screen")
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L150() else D35()
  // L150()
  goto L150_;

D35_:;
  // deopt 146 [r81]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L150_:;
  // goto L29()
  // L29()
  goto L29_;

D36_:;
  // deopt 154 [first_split10]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_first_split10_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L152_:;
  // first_split11 = force? first_split10
  Rsh_Fir_reg_first_split11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_first_split10_);
  // checkMissing(first_split11)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_first_split11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty()));
  // c37 = `as.logical`(first_split11)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_first_split11_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args167, Rsh_Fir_param_types_empty());
  // if c37 then L153() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L153()
    goto L153_;
  } else {
  // L30()
    goto L30_;
  }

L153_:;
  // erase1 = ld erase
  Rsh_Fir_reg_erase1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L154() else D37()
  // L154()
  goto L154_;

D37_:;
  // deopt 156 [erase1]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_erase1_;
  Rsh_Fir_deopt(156, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L154_:;
  // erase2 = force? erase1
  Rsh_Fir_reg_erase2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_erase1_);
  // checkMissing(erase2)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_erase2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty()));
  // c38 = `as.logical`(erase2)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_erase2_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // if c38 then L155() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L155()
    goto L155_;
  } else {
  // L31()
    goto L31_;
  }

L155_:;
  // plot_new = ldf `plot.new`
  Rsh_Fir_reg_plot_new = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L156() else D38()
  // L156()
  goto L156_;

D38_:;
  // deopt 159 []
  Rsh_Fir_deopt(159, 0, NULL, CCP, RHO);
  return R_NilValue;

L156_:;
  // r83 = dyn plot_new()
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot_new, 0, NULL, NULL, CCP, RHO);
  // check L157() else D39()
  // L157()
  goto L157_;

D39_:;
  // deopt 160 [r83]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(160, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L157_:;
  // goto L32()
  // L32()
  goto L32_;

D40_:;
  // deopt 164 []
  Rsh_Fir_deopt(164, 0, NULL, CCP, RHO);
  return R_NilValue;

L159_:;
  // p4 = prom<V +>{
  //   _SSenv = ld `.SSenv`;
  //   _SSenv1 = force? _SSenv;
  //   checkMissing(_SSenv1);
  //   c39 = `is.object`(_SSenv1);
  //   if c39 then L1() else L2(_SSenv1);
  // L0(dx13):
  //   return dx13;
  // L1():
  //   dr12 = tryDispatchBuiltin.1("$", _SSenv1);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L3() else L2(dr12);
  // L2(_SSenv3):
  //   r85 = `$`(_SSenv3, <sym par.list>);
  //   goto L0(r85);
  // L3():
  //   dx12 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx12);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3566772296_4, CCP, RHO);
  // r87 = dyn par(p4)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par, 1, Rsh_Fir_array_args176, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L160() else D41()
  // L160()
  goto L160_;

D41_:;
  // deopt 166 [r87]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_deopt(166, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L160_:;
  // st `split.saved.pars` = r87
  Rsh_Fir_store(Rsh_const(CCP, 69), Rsh_Fir_reg_r87_, RHO);
  (void)(Rsh_Fir_reg_r87_);
  // l = ld `split.saved.pars`
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // c40 = `is.object`(l)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // if c40 then L162() else L163(NULL, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L162()
    goto L162_;
  } else {
  // L163(NULL, l)
    Rsh_Fir_reg_r89_ = Rsh_const(CCP, 25);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L163_;
  }

L161_:;
  // st `split.saved.pars` = dx15
  Rsh_Fir_store(Rsh_const(CCP, 69), Rsh_Fir_reg_dx15_, RHO);
  (void)(Rsh_Fir_reg_dx15_);
  // par1 = ldf par
  Rsh_Fir_reg_par1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L165() else D42()
  // L165()
  goto L165_;

L162_:;
  // dr14 = tryDispatchBuiltin.0("$<-", l, NULL)
  SEXP Rsh_Fir_array_args178[3];
  Rsh_Fir_array_args178[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args178[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args178[2] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args178);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty());
  // if dc7 then L164() else L163(NULL, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L164()
    goto L164_;
  } else {
  // L163(NULL, dr14)
    Rsh_Fir_reg_r89_ = Rsh_const(CCP, 25);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr14_;
    goto L163_;
  }

L163_:;
  // r92 = `$<-`(l2, <sym fig>, NULL)
  SEXP Rsh_Fir_array_args180[3];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args180[1] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args180[2] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty());
  // goto L161(r92)
  // L161(r92)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r92_;
  goto L161_;

L164_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty());
  // goto L161(dx14)
  // L161(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L161_;

D42_:;
  // deopt 174 []
  Rsh_Fir_deopt(174, 0, NULL, CCP, RHO);
  return R_NilValue;

L165_:;
  // p5 = prom<V +>{
  //   sym13 = ldf `rep.int`;
  //   base13 = ldf `rep.int` in base;
  //   guard13 = `==`.4(sym13, base13);
  //   if guard13 then L1() else L2();
  // L0(r94):
  //   return r94;
  // L1():
  //   rep_int6 = ldf `rep.int` in base;
  //   r95 = dyn rep_int6(0.0, 4.0);
  //   goto L0(r95);
  // L2():
  //   r93 = dyn base13(0.0, 4.0);
  //   goto L0(r93);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3566772296_5, CCP, RHO);
  // r97 = dyn par1[omi](p5)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = Rsh_const(CCP, 72);
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par1_, 1, Rsh_Fir_array_args185, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L166() else D43()
  // L166()
  goto L166_;

D43_:;
  // deopt 177 [r97]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_deopt(177, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L166_:;
  // c41 = `is.object`(r97)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty());
  // if c41 then L168() else L169(r97)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c41_)) {
  // L168()
    goto L168_;
  } else {
  // L169(r97)
    Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r97_;
    goto L169_;
  }

L167_:;
  // l3 = ld `split.saved.pars`
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // c42 = `is.object`(l3)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty());
  // if c42 then L172() else L173(dx17, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c42_)) {
  // L172()
    goto L172_;
  } else {
  // L173(dx17, l3)
    Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx17_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L173_;
  }

L168_:;
  // dr16 = tryDispatchBuiltin.1("$", r97)
  SEXP Rsh_Fir_array_args188[2];
  Rsh_Fir_array_args188[0] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args188[1] = Rsh_Fir_reg_r97_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args188);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty());
  // if dc8 then L170() else L169(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L170()
    goto L170_;
  } else {
  // L169(dr16)
    Rsh_Fir_reg_r99_ = Rsh_Fir_reg_dr16_;
    goto L169_;
  }

L169_:;
  // r100 = `$`(r99, <sym omi>)
  SEXP Rsh_Fir_array_args190[2];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_r99_;
  Rsh_Fir_array_args190[1] = Rsh_const(CCP, 72);
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty());
  // goto L167(r100)
  // L167(r100)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r100_;
  goto L167_;

L170_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args191, Rsh_Fir_param_types_empty());
  // goto L167(dx16)
  // L167(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L167_;

L171_:;
  // st `split.saved.pars` = dx23
  Rsh_Fir_store(Rsh_const(CCP, 69), Rsh_Fir_reg_dx23_, RHO);
  (void)(Rsh_Fir_reg_dx23_);
  // _SSassign = ldf `.SSassign`
  Rsh_Fir_reg__SSassign = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L175() else D44()
  // L175()
  goto L175_;

L172_:;
  // dr18 = tryDispatchBuiltin.0("$<-", l3, dx17)
  SEXP Rsh_Fir_array_args192[3];
  Rsh_Fir_array_args192[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args192[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args192[2] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args192);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty());
  // if dc9 then L174() else L173(dx17, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L174()
    goto L174_;
  } else {
  // L173(dx17, dr18)
    Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx17_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr18_;
    goto L173_;
  }

L173_:;
  // r101 = `$<-`(l5, <sym omi>, dx17)
  SEXP Rsh_Fir_array_args194[3];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args194[1] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args194[2] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args194, Rsh_Fir_param_types_empty());
  // goto L171(r101)
  // L171(r101)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r101_;
  goto L171_;

L174_:;
  // dx21 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty());
  // goto L171(dx21)
  // L171(dx21)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx21_;
  goto L171_;

D44_:;
  // deopt 183 []
  Rsh_Fir_deopt(183, 0, NULL, CCP, RHO);
  return R_NilValue;

L175_:;
  // p6 = prom<V +>{
  //   split_saved_pars = ld `split.saved.pars`;
  //   split_saved_pars1 = force? split_saved_pars;
  //   checkMissing(split_saved_pars1);
  //   return split_saved_pars1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3566772296_6, CCP, RHO);
  // r103 = dyn _SSassign("sp.saved.pars", p6)
  SEXP Rsh_Fir_array_args197[2];
  Rsh_Fir_array_args197[0] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args197[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__SSassign, 2, Rsh_Fir_array_args197, Rsh_Fir_array_arg_names48, CCP, RHO);
  // check L176() else D45()
  // L176()
  goto L176_;

D45_:;
  // deopt 186 [r103]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r103_;
  Rsh_Fir_deopt(186, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L176_:;
  // sym14 = ldf vector
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 74), RHO);
  // base14 = ldf vector in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 74), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args198[2];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args198[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args198);
  // if guard14 then L177() else L178()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L177()
    goto L177_;
  } else {
  // L178()
    goto L178_;
  }

L177_:;
  // num_screens2 = ld `num.screens`
  Rsh_Fir_reg_num_screens2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L179() else D46()
  // L179()
  goto L179_;

L178_:;
  // r104 = dyn base14[mode, length]("list", <sym num.screens>)
  SEXP Rsh_Fir_array_args199[2];
  Rsh_Fir_array_args199[0] = Rsh_const(CCP, 75);
  Rsh_Fir_array_args199[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names49[2];
  Rsh_Fir_array_arg_names49[0] = Rsh_const(CCP, 76);
  Rsh_Fir_array_arg_names49[1] = Rsh_const(CCP, 77);
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 2, Rsh_Fir_array_args199, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L33(r104)
  // L33(r104)
  Rsh_Fir_reg_r105_ = Rsh_Fir_reg_r104_;
  goto L33_;

D46_:;
  // deopt 190 [num_screens2]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_num_screens2_;
  Rsh_Fir_deopt(190, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L179_:;
  // num_screens3 = force? num_screens2
  Rsh_Fir_reg_num_screens3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_num_screens2_);
  // checkMissing(num_screens3)
  SEXP Rsh_Fir_array_args200[1];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_num_screens3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args200, Rsh_Fir_param_types_empty()));
  // vector = ldf vector in base
  Rsh_Fir_reg_vector = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 74), RHO);
  // r106 = dyn vector("list", num_screens3)
  SEXP Rsh_Fir_array_args201[2];
  Rsh_Fir_array_args201[0] = Rsh_const(CCP, 75);
  Rsh_Fir_array_args201[1] = Rsh_Fir_reg_num_screens3_;
  SEXP Rsh_Fir_array_arg_names50[2];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vector, 2, Rsh_Fir_array_args201, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L180() else D47()
  // L180()
  goto L180_;

D47_:;
  // deopt 193 [r106]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r106_;
  Rsh_Fir_deopt(193, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L180_:;
  // goto L33(r106)
  // L33(r106)
  Rsh_Fir_reg_r105_ = Rsh_Fir_reg_r106_;
  goto L33_;

D48_:;
  // deopt 196 [1, num_screens4]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_num_screens4_;
  Rsh_Fir_deopt(196, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L181_:;
  // num_screens5 = force? num_screens4
  Rsh_Fir_reg_num_screens5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_num_screens4_);
  // checkMissing(num_screens5)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_num_screens5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty()));
  // r107 = `:`(1, num_screens5)
  SEXP Rsh_Fir_array_args203[2];
  Rsh_Fir_array_args203[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args203[1] = Rsh_Fir_reg_num_screens5_;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args203, Rsh_Fir_param_types_empty());
  // st `new.screens` = r107
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r107_, RHO);
  (void)(Rsh_Fir_reg_r107_);
  // new_screens = ld `new.screens`
  Rsh_Fir_reg_new_screens = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L182() else D49()
  // L182()
  goto L182_;

D49_:;
  // deopt 200 [new_screens]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_new_screens;
  Rsh_Fir_deopt(200, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L182_:;
  // new_screens1 = force? new_screens
  Rsh_Fir_reg_new_screens1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_screens);
  // checkMissing(new_screens1)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_new_screens1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty()));
  // s = toForSeq(new_screens1)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_new_screens1_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args205, Rsh_Fir_param_types_empty());
  // l6 = length(s)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l6_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 78);
  // goto L34(i)
  // L34(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L34_;

L183_:;
  // new_screens2 = ld `new.screens`
  Rsh_Fir_reg_new_screens2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L207() else D57()
  // L207()
  goto L207_;

D50_:;
  // deopt 203 [i2]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(203, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L184_:;
  // p7 = prom<V +>{
  //   _SSenv4 = ld `.SSenv`;
  //   _SSenv5 = force? _SSenv4;
  //   checkMissing(_SSenv5);
  //   c44 = `is.object`(_SSenv5);
  //   if c44 then L1() else L2(_SSenv5);
  // L0(dx25):
  //   return dx25;
  // L1():
  //   dr20 = tryDispatchBuiltin.1("$", _SSenv5);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L3() else L2(dr20);
  // L2(_SSenv7):
  //   r108 = `$`(_SSenv7, <sym par.list>);
  //   goto L0(r108);
  // L3():
  //   dx24 = getTryDispatchBuiltinValue(dr20);
  //   goto L0(dx24);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3566772296_7, CCP, RHO);
  // r110 = dyn par2(p7)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par2_, 1, Rsh_Fir_array_args213, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L185() else D51()
  // L185()
  goto L185_;

D51_:;
  // deopt 205 [i2, r110]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_r110_;
  Rsh_Fir_deopt(205, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L185_:;
  // l7 = ld `split.screens`
  Rsh_Fir_reg_l7_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // c45 = `is.object`(l7)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty());
  // if c45 then L186() else L187(i2, r110, l7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L186()
    goto L186_;
  } else {
  // L187(i2, r110, l7)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r112_ = Rsh_Fir_reg_r110_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
    goto L187_;
  }

L186_:;
  // dr22 = tryDispatchBuiltin.0("[[<-", l7, r110)
  SEXP Rsh_Fir_array_args215[3];
  Rsh_Fir_array_args215[0] = Rsh_const(CCP, 79);
  Rsh_Fir_array_args215[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args215[2] = Rsh_Fir_reg_r110_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args215);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args216, Rsh_Fir_param_types_empty());
  // if dc11 then L188() else L187(i2, r110, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L188()
    goto L188_;
  } else {
  // L187(i2, r110, dr22)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_r112_ = Rsh_Fir_reg_r110_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_dr22_;
    goto L187_;
  }

L187_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L189() else D52()
  // L189()
  goto L189_;

L188_:;
  // dx26 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args217, Rsh_Fir_param_types_empty());
  // goto L35(i2, dx26)
  // L35(i2, dx26)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L35_;

D52_:;
  // deopt 207 [i6, r112, l9, r110, i9]
  SEXP Rsh_Fir_array_deopt_stack40[5];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_r112_;
  Rsh_Fir_array_deopt_stack40[2] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_deopt_stack40[3] = Rsh_Fir_reg_r110_;
  Rsh_Fir_array_deopt_stack40[4] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(207, 5, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L189_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 80), RHO);
  // r115 = dyn ____(l9, r110, i10)
  SEXP Rsh_Fir_array_args218[3];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args218[1] = Rsh_Fir_reg_r110_;
  Rsh_Fir_array_args218[2] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names52[3];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_array_arg_names52[2] = R_MissingArg;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args218, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L35(i6, r115)
  // L35(i6, r115)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r115_;
  goto L35_;

D53_:;
  // deopt 211 [i8, figs15]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_figs15_;
  Rsh_Fir_deopt(211, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L190_:;
  // figs16 = force? figs15
  Rsh_Fir_reg_figs16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_figs15_);
  // checkMissing(figs16)
  SEXP Rsh_Fir_array_args219[1];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_figs16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args219, Rsh_Fir_param_types_empty()));
  // c46 = `is.object`(figs16)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_figs16_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args220, Rsh_Fir_param_types_empty());
  // if c46 then L191() else L192(i8, figs16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L191()
    goto L191_;
  } else {
  // L192(i8, figs16)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_figs18_ = Rsh_Fir_reg_figs16_;
    goto L192_;
  }

L191_:;
  // dr24 = tryDispatchBuiltin.1("[", figs16)
  SEXP Rsh_Fir_array_args221[2];
  Rsh_Fir_array_args221[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args221[1] = Rsh_Fir_reg_figs16_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args221);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args222, Rsh_Fir_param_types_empty());
  // if dc12 then L193() else L192(i8, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L193()
    goto L193_;
  } else {
  // L192(i8, dr24)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_figs18_ = Rsh_Fir_reg_dr24_;
    goto L192_;
  }

L192_:;
  // i15 = ld i
  Rsh_Fir_reg_i15_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L194() else D54()
  // L194()
  goto L194_;

L193_:;
  // dx28 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args223[1];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty());
  // goto L36(i8, dx28)
  // L36(i8, dx28)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L36_;

D54_:;
  // deopt 213 [i12, figs18, i15]
  SEXP Rsh_Fir_array_deopt_stack42[3];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_figs18_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_i15_;
  Rsh_Fir_deopt(213, 3, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L194_:;
  // i16 = force? i15
  Rsh_Fir_reg_i16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i15_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r116 = dyn __6(figs16, i16, <missing>)
  SEXP Rsh_Fir_array_args224[3];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_figs16_;
  Rsh_Fir_array_args224[1] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_args224[2] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names53[3];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_array_arg_names53[2] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 3, Rsh_Fir_array_args224, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L36(i12, r116)
  // L36(i12, r116)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r116_;
  goto L36_;

L195_:;
  // dr26 = tryDispatchBuiltin.1("[[", l10)
  SEXP Rsh_Fir_array_args225[2];
  Rsh_Fir_array_args225[0] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args225[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args225);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty());
  // if dc13 then L197() else L196(i14, dx29, l10, dx29, dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L197()
    goto L197_;
  } else {
  // L196(i14, dx29, l10, dx29, dr26)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i14_;
    Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx29_;
    Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l10_;
    Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx29_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_dr26_;
    goto L196_;
  }

L196_:;
  // i21 = ld i
  Rsh_Fir_reg_i21_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L198() else D55()
  // L198()
  goto L198_;

L197_:;
  // dx36 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args227, Rsh_Fir_param_types_empty());
  // goto L37(i14, dx29, l10, dx29, dx36)
  // L37(i14, dx29, l10, dx29, dx36)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx29_;
  Rsh_Fir_reg_l16_ = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_dx29_;
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx36_;
  goto L37_;

D55_:;
  // deopt 220 [i18, dx32, l13, dx33, l14, i21]
  SEXP Rsh_Fir_array_deopt_stack43[6];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_dx32_;
  Rsh_Fir_array_deopt_stack43[2] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_deopt_stack43[3] = Rsh_Fir_reg_dx33_;
  Rsh_Fir_array_deopt_stack43[4] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack43[5] = Rsh_Fir_reg_i21_;
  Rsh_Fir_deopt(220, 6, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L198_:;
  // i22 = force? i21
  Rsh_Fir_reg_i22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i21_);
  // __7 = ldf `[[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 82), RHO);
  // r117 = dyn __7(l14, i22)
  SEXP Rsh_Fir_array_args228[2];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args228[1] = Rsh_Fir_reg_i22_;
  SEXP Rsh_Fir_array_arg_names54[2];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args228, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L37(i18, dx32, l13, dx33, r117)
  // L37(i18, dx32, l13, dx33, r117)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx32_;
  Rsh_Fir_reg_l16_ = Rsh_Fir_reg_l13_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_dx33_;
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_r117_;
  goto L37_;

L199_:;
  // c49 = `is.object`(l20)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_l20_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args229, Rsh_Fir_param_types_empty());
  // if c49 then L203() else L204(i26, dx46, l20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c49_)) {
  // L203()
    goto L203_;
  } else {
  // L204(i26, dx46, l20)
    Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i26_;
    Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_dx46_;
    Rsh_Fir_reg_l22_ = Rsh_Fir_reg_l20_;
    goto L204_;
  }

L200_:;
  // dr28 = tryDispatchBuiltin.0("$<-", dx39, dx38)
  SEXP Rsh_Fir_array_args230[3];
  Rsh_Fir_array_args230[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args230[1] = Rsh_Fir_reg_dx39_;
  Rsh_Fir_array_args230[2] = Rsh_Fir_reg_dx38_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args230);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args231[1];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args231, Rsh_Fir_param_types_empty());
  // if dc14 then L202() else L201(i20, dx37, l16, dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L202()
    goto L202_;
  } else {
  // L201(i20, dx37, l16, dr28)
    Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i20_;
    Rsh_Fir_reg_dx42_ = Rsh_Fir_reg_dx37_;
    Rsh_Fir_reg_l18_ = Rsh_Fir_reg_l16_;
    Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dr28_;
    goto L201_;
  }

L201_:;
  // r118 = `$<-`(dx43, <sym fig>, dx38)
  SEXP Rsh_Fir_array_args232[3];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_dx43_;
  Rsh_Fir_array_args232[1] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args232[2] = Rsh_Fir_reg_dx38_;
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args232, Rsh_Fir_param_types_empty());
  // goto L199(i24, dx42, l18, r118)
  // L199(i24, dx42, l18, r118)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i24_;
  Rsh_Fir_reg_dx46_ = Rsh_Fir_reg_dx42_;
  Rsh_Fir_reg_l20_ = Rsh_Fir_reg_l18_;
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_r118_;
  goto L199_;

L202_:;
  // dx45 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx45_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty());
  // goto L199(i20, dx37, l16, dx45)
  // L199(i20, dx37, l16, dx45)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_dx46_ = Rsh_Fir_reg_dx37_;
  Rsh_Fir_reg_l20_ = Rsh_Fir_reg_l16_;
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_dx45_;
  goto L199_;

L203_:;
  // dr30 = tryDispatchBuiltin.0("[[<-", l20, dx47)
  SEXP Rsh_Fir_array_args234[3];
  Rsh_Fir_array_args234[0] = Rsh_const(CCP, 79);
  Rsh_Fir_array_args234[1] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_args234[2] = Rsh_Fir_reg_dx47_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args234);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args235[1];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args235, Rsh_Fir_param_types_empty());
  // if dc15 then L205() else L204(i26, dx46, dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L205()
    goto L205_;
  } else {
  // L204(i26, dx46, dr30)
    Rsh_Fir_reg_i28_ = Rsh_Fir_reg_i26_;
    Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_dx46_;
    Rsh_Fir_reg_l22_ = Rsh_Fir_reg_dr30_;
    goto L204_;
  }

L204_:;
  // i31 = ld i
  Rsh_Fir_reg_i31_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L206() else D56()
  // L206()
  goto L206_;

L205_:;
  // dx51 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args236[1];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx51_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args236, Rsh_Fir_param_types_empty());
  // goto L38(i26, dx51)
  // L38(i26, dx51)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i26_;
  Rsh_Fir_reg_dx53_ = Rsh_Fir_reg_dx51_;
  goto L38_;

D56_:;
  // deopt 225 [i28, dx49, l22, dx47, i31]
  SEXP Rsh_Fir_array_deopt_stack44[5];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_i28_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_dx49_;
  Rsh_Fir_array_deopt_stack44[2] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_deopt_stack44[3] = Rsh_Fir_reg_dx47_;
  Rsh_Fir_array_deopt_stack44[4] = Rsh_Fir_reg_i31_;
  Rsh_Fir_deopt(225, 5, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L206_:;
  // i32 = force? i31
  Rsh_Fir_reg_i32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i31_);
  // ____1 = ldf `[[<-` in base
  Rsh_Fir_reg_____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 80), RHO);
  // r119 = dyn ____1(l22, dx47, i32)
  SEXP Rsh_Fir_array_args237[3];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_args237[1] = Rsh_Fir_reg_dx47_;
  Rsh_Fir_array_args237[2] = Rsh_Fir_reg_i32_;
  SEXP Rsh_Fir_array_arg_names55[3];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_array_arg_names55[2] = R_MissingArg;
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____1_, 3, Rsh_Fir_array_args237, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L38(i28, r119)
  // L38(i28, r119)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i28_;
  Rsh_Fir_reg_dx53_ = Rsh_Fir_reg_r119_;
  goto L38_;

D57_:;
  // deopt 232 [new_screens2]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_new_screens2_;
  Rsh_Fir_deopt(232, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L207_:;
  // new_screens3 = force? new_screens2
  Rsh_Fir_reg_new_screens3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_screens2_);
  // checkMissing(new_screens3)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_Fir_reg_new_screens3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args238, Rsh_Fir_param_types_empty()));
  // st `valid.screens` = new_screens3
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_new_screens3_, RHO);
  (void)(Rsh_Fir_reg_new_screens3_);
  // st `cur.screen` = 1.0
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_const(CCP, 47), RHO);
  (void)(Rsh_const(CCP, 47));
  // goto L40()
  // L40()
  goto L40_;

D58_:;
  // deopt 238 [erase3]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_erase3_;
  Rsh_Fir_deopt(238, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L209_:;
  // erase4 = force? erase3
  Rsh_Fir_reg_erase4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_erase3_);
  // checkMissing(erase4)
  SEXP Rsh_Fir_array_args239[1];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_erase4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args239, Rsh_Fir_param_types_empty()));
  // c50 = `as.logical`(erase4)
  SEXP Rsh_Fir_array_args240[1];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_erase4_;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args240, Rsh_Fir_param_types_empty());
  // if c50 then L210() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c50_)) {
  // L210()
    goto L210_;
  } else {
  // L41()
    goto L41_;
  }

L210_:;
  // erase_screen = ldf `erase.screen`
  Rsh_Fir_reg_erase_screen = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 83), RHO);
  // check L211() else D59()
  // L211()
  goto L211_;

D59_:;
  // deopt 241 []
  Rsh_Fir_deopt(241, 0, NULL, CCP, RHO);
  return R_NilValue;

L211_:;
  // p8 = prom<V +>{
  //   screen5 = ld screen;
  //   screen6 = force? screen5;
  //   checkMissing(screen6);
  //   return screen6;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3566772296_8, CCP, RHO);
  // r122 = dyn erase_screen(p8)
  SEXP Rsh_Fir_array_args242[1];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_erase_screen, 1, Rsh_Fir_array_args242, Rsh_Fir_array_arg_names56, CCP, RHO);
  // check L212() else D60()
  // L212()
  goto L212_;

D60_:;
  // deopt 243 [r122]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r122_;
  Rsh_Fir_deopt(243, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L212_:;
  // goto L42()
  // L42()
  goto L42_;

L214_:;
  // _valid_screens4 = ld `.valid.screens`
  Rsh_Fir_reg__valid_screens4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L216() else D61()
  // L216()
  goto L216_;

L215_:;
  // r124 = dyn base15(<sym .valid.screens>)
  SEXP Rsh_Fir_array_args243[1];
  Rsh_Fir_array_args243[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names57[1];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_reg_r124_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args243, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L43(r124)
  // L43(r124)
  Rsh_Fir_reg_r125_ = Rsh_Fir_reg_r124_;
  goto L43_;

D61_:;
  // deopt 248 [_valid_screens4]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg__valid_screens4_;
  Rsh_Fir_deopt(248, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L216_:;
  // _valid_screens5 = force? _valid_screens4
  Rsh_Fir_reg__valid_screens5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__valid_screens4_);
  // checkMissing(_valid_screens5)
  SEXP Rsh_Fir_array_args244[1];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg__valid_screens5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args244, Rsh_Fir_param_types_empty()));
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r126 = dyn max(_valid_screens5)
  SEXP Rsh_Fir_array_args245[1];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg__valid_screens5_;
  SEXP Rsh_Fir_array_arg_names58[1];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_reg_r126_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 1, Rsh_Fir_array_args245, Rsh_Fir_array_arg_names58, CCP, RHO);
  // check L217() else D62()
  // L217()
  goto L217_;

D62_:;
  // deopt 251 [r126]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r126_;
  Rsh_Fir_deopt(251, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L217_:;
  // goto L43(r126)
  // L43(r126)
  Rsh_Fir_reg_r125_ = Rsh_Fir_reg_r126_;
  goto L43_;

D63_:;
  // deopt 253 [max_screen]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_max_screen;
  Rsh_Fir_deopt(253, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L218_:;
  // max_screen1 = force? max_screen
  Rsh_Fir_reg_max_screen1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_max_screen);
  // checkMissing(max_screen1)
  SEXP Rsh_Fir_array_args246[1];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_max_screen1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args246, Rsh_Fir_param_types_empty()));
  // num_screens6 = ld `num.screens`
  Rsh_Fir_reg_num_screens6_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L219() else D64()
  // L219()
  goto L219_;

D64_:;
  // deopt 254 [max_screen1, num_screens6]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_max_screen1_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_num_screens6_;
  Rsh_Fir_deopt(254, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L219_:;
  // num_screens7 = force? num_screens6
  Rsh_Fir_reg_num_screens7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_num_screens6_);
  // checkMissing(num_screens7)
  SEXP Rsh_Fir_array_args247[1];
  Rsh_Fir_array_args247[0] = Rsh_Fir_reg_num_screens7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args247, Rsh_Fir_param_types_empty()));
  // r127 = `+`(max_screen1, num_screens7)
  SEXP Rsh_Fir_array_args248[2];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_max_screen1_;
  Rsh_Fir_array_args248[1] = Rsh_Fir_reg_num_screens7_;
  Rsh_Fir_reg_r127_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args248, Rsh_Fir_param_types_empty());
  // st `new.max.screen` = r127
  Rsh_Fir_store(Rsh_const(CCP, 84), Rsh_Fir_reg_r127_, RHO);
  (void)(Rsh_Fir_reg_r127_);
  // _SSget2 = ldf `.SSget`
  Rsh_Fir_reg__SSget2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L220() else D65()
  // L220()
  goto L220_;

D65_:;
  // deopt 259 []
  Rsh_Fir_deopt(259, 0, NULL, CCP, RHO);
  return R_NilValue;

L220_:;
  // r128 = dyn _SSget2("sp.screens")
  SEXP Rsh_Fir_array_args249[1];
  Rsh_Fir_array_args249[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names59[1];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_reg_r128_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__SSget2_, 1, Rsh_Fir_array_args249, Rsh_Fir_array_arg_names59, CCP, RHO);
  // check L221() else D66()
  // L221()
  goto L221_;

D66_:;
  // deopt 261 [r128]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r128_;
  Rsh_Fir_deopt(261, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L221_:;
  // st `split.screens` = r128
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r128_, RHO);
  (void)(Rsh_Fir_reg_r128_);
  // sym16 = ldf c
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base16 = ldf c in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args250[2];
  Rsh_Fir_array_args250[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args250[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args250);
  // if guard16 then L222() else L223()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L222()
    goto L222_;
  } else {
  // L223()
    goto L223_;
  }

L222_:;
  // c51 = ldf c in base
  Rsh_Fir_reg_c51_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r131 = dyn c51(0.0, 1.0, 0.0, 1.0)
  SEXP Rsh_Fir_array_args251[4];
  Rsh_Fir_array_args251[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args251[1] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args251[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args251[3] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names60[4];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_array_arg_names60[1] = R_MissingArg;
  Rsh_Fir_array_arg_names60[2] = R_MissingArg;
  Rsh_Fir_array_arg_names60[3] = R_MissingArg;
  Rsh_Fir_reg_r131_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c51_, 4, Rsh_Fir_array_args251, Rsh_Fir_array_arg_names60, CCP, RHO);
  // check L224() else D67()
  // L224()
  goto L224_;

L223_:;
  // r129 = dyn base16(0.0, 1.0, 0.0, 1.0)
  SEXP Rsh_Fir_array_args252[4];
  Rsh_Fir_array_args252[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args252[1] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args252[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args252[3] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names61[4];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_array_arg_names61[1] = R_MissingArg;
  Rsh_Fir_array_arg_names61[2] = R_MissingArg;
  Rsh_Fir_array_arg_names61[3] = R_MissingArg;
  Rsh_Fir_reg_r129_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 4, Rsh_Fir_array_args252, Rsh_Fir_array_arg_names61, CCP, RHO);
  // goto L44(r129)
  // L44(r129)
  Rsh_Fir_reg_r130_ = Rsh_Fir_reg_r129_;
  goto L44_;

D67_:;
  // deopt 270 [r131]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r131_;
  Rsh_Fir_deopt(270, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L224_:;
  // goto L44(r131)
  // L44(r131)
  Rsh_Fir_reg_r130_ = Rsh_Fir_reg_r131_;
  goto L44_;

D68_:;
  // deopt 272 [screen7]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_screen7_;
  Rsh_Fir_deopt(272, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L225_:;
  // screen8 = force? screen7
  Rsh_Fir_reg_screen8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_screen7_);
  // checkMissing(screen8)
  SEXP Rsh_Fir_array_args253[1];
  Rsh_Fir_array_args253[0] = Rsh_Fir_reg_screen8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args253, Rsh_Fir_param_types_empty()));
  // r132 = `>`(screen8, 0.0)
  SEXP Rsh_Fir_array_args254[2];
  Rsh_Fir_array_args254[0] = Rsh_Fir_reg_screen8_;
  Rsh_Fir_array_args254[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r132_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args254, Rsh_Fir_param_types_empty());
  // c52 = `as.logical`(r132)
  SEXP Rsh_Fir_array_args255[1];
  Rsh_Fir_array_args255[0] = Rsh_Fir_reg_r132_;
  Rsh_Fir_reg_c52_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args255, Rsh_Fir_param_types_empty());
  // if c52 then L226() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c52_)) {
  // L226()
    goto L226_;
  } else {
  // L45()
    goto L45_;
  }

L226_:;
  // split_screens = ld `split.screens`
  Rsh_Fir_reg_split_screens = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L227() else D69()
  // L227()
  goto L227_;

D69_:;
  // deopt 276 [split_screens]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_split_screens;
  Rsh_Fir_deopt(276, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L227_:;
  // split_screens1 = force? split_screens
  Rsh_Fir_reg_split_screens1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split_screens);
  // checkMissing(split_screens1)
  SEXP Rsh_Fir_array_args256[1];
  Rsh_Fir_array_args256[0] = Rsh_Fir_reg_split_screens1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args256, Rsh_Fir_param_types_empty()));
  // c53 = `is.object`(split_screens1)
  SEXP Rsh_Fir_array_args257[1];
  Rsh_Fir_array_args257[0] = Rsh_Fir_reg_split_screens1_;
  Rsh_Fir_reg_c53_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args257, Rsh_Fir_param_types_empty());
  // if c53 then L228() else L229(split_screens1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c53_)) {
  // L228()
    goto L228_;
  } else {
  // L229(split_screens1)
    Rsh_Fir_reg_split_screens3_ = Rsh_Fir_reg_split_screens1_;
    goto L229_;
  }

L228_:;
  // dr32 = tryDispatchBuiltin.1("[[", split_screens1)
  SEXP Rsh_Fir_array_args258[2];
  Rsh_Fir_array_args258[0] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args258[1] = Rsh_Fir_reg_split_screens1_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args258);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args259[1];
  Rsh_Fir_array_args259[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args259, Rsh_Fir_param_types_empty());
  // if dc16 then L230() else L229(dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L230()
    goto L230_;
  } else {
  // L229(dr32)
    Rsh_Fir_reg_split_screens3_ = Rsh_Fir_reg_dr32_;
    goto L229_;
  }

L229_:;
  // screen9 = ld screen
  Rsh_Fir_reg_screen9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L231() else D70()
  // L231()
  goto L231_;

L230_:;
  // dx54 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args260[1];
  Rsh_Fir_array_args260[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx54_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args260, Rsh_Fir_param_types_empty());
  // goto L46(dx54)
  // L46(dx54)
  Rsh_Fir_reg_dx55_ = Rsh_Fir_reg_dx54_;
  goto L46_;

D70_:;
  // deopt 278 [split_screens3, screen9]
  SEXP Rsh_Fir_array_deopt_stack56[2];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_split_screens3_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_screen9_;
  Rsh_Fir_deopt(278, 2, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L231_:;
  // screen10 = force? screen9
  Rsh_Fir_reg_screen10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_screen9_);
  // __8 = ldf `[[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 82), RHO);
  // r133 = dyn __8(split_screens3, screen10)
  SEXP Rsh_Fir_array_args261[2];
  Rsh_Fir_array_args261[0] = Rsh_Fir_reg_split_screens3_;
  Rsh_Fir_array_args261[1] = Rsh_Fir_reg_screen10_;
  SEXP Rsh_Fir_array_arg_names62[2];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_array_arg_names62[1] = R_MissingArg;
  Rsh_Fir_reg_r133_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args261, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L46(r133)
  // L46(r133)
  Rsh_Fir_reg_dx55_ = Rsh_Fir_reg_r133_;
  goto L46_;

L232_:;
  // st total = dx59
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_dx59_, RHO);
  (void)(Rsh_Fir_reg_dx59_);
  // goto L47()
  // L47()
  goto L47_;

L233_:;
  // dr34 = tryDispatchBuiltin.1("$", dx55)
  SEXP Rsh_Fir_array_args262[2];
  Rsh_Fir_array_args262[0] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args262[1] = Rsh_Fir_reg_dx55_;
  Rsh_Fir_reg_dr34_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args262);
  // dc17 = getTryDispatchBuiltinDispatched(dr34)
  SEXP Rsh_Fir_array_args263[1];
  Rsh_Fir_array_args263[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dc17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args263, Rsh_Fir_param_types_empty());
  // if dc17 then L235() else L234(dr34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc17_)) {
  // L235()
    goto L235_;
  } else {
  // L234(dr34)
    Rsh_Fir_reg_dx57_ = Rsh_Fir_reg_dr34_;
    goto L234_;
  }

L234_:;
  // r134 = `$`(dx57, <sym fig>)
  SEXP Rsh_Fir_array_args264[2];
  Rsh_Fir_array_args264[0] = Rsh_Fir_reg_dx57_;
  Rsh_Fir_array_args264[1] = Rsh_const(CCP, 71);
  Rsh_Fir_reg_r134_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args264, Rsh_Fir_param_types_empty());
  // goto L232(r134)
  // L232(r134)
  Rsh_Fir_reg_dx59_ = Rsh_Fir_reg_r134_;
  goto L232_;

L235_:;
  // dx58 = getTryDispatchBuiltinValue(dr34)
  SEXP Rsh_Fir_array_args265[1];
  Rsh_Fir_array_args265[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dx58_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args265, Rsh_Fir_param_types_empty());
  // goto L232(dx58)
  // L232(dx58)
  Rsh_Fir_reg_dx59_ = Rsh_Fir_reg_dx58_;
  goto L232_;

D71_:;
  // deopt 286 [1, num_screens8]
  SEXP Rsh_Fir_array_deopt_stack57[2];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_deopt_stack57[1] = Rsh_Fir_reg_num_screens8_;
  Rsh_Fir_deopt(286, 2, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L237_:;
  // num_screens9 = force? num_screens8
  Rsh_Fir_reg_num_screens9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_num_screens8_);
  // checkMissing(num_screens9)
  SEXP Rsh_Fir_array_args266[1];
  Rsh_Fir_array_args266[0] = Rsh_Fir_reg_num_screens9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args266, Rsh_Fir_param_types_empty()));
  // r135 = `:`(1, num_screens9)
  SEXP Rsh_Fir_array_args267[2];
  Rsh_Fir_array_args267[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args267[1] = Rsh_Fir_reg_num_screens9_;
  Rsh_Fir_reg_r135_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args267, Rsh_Fir_param_types_empty());
  // s1 = toForSeq(r135)
  SEXP Rsh_Fir_array_args268[1];
  Rsh_Fir_array_args268[0] = Rsh_Fir_reg_r135_;
  Rsh_Fir_reg_s1_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args268, Rsh_Fir_param_types_empty());
  // l23 = length(s1)
  SEXP Rsh_Fir_array_args269[1];
  Rsh_Fir_array_args269[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_l23_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args269, Rsh_Fir_param_types_empty());
  // i33 = 0
  Rsh_Fir_reg_i33_ = Rsh_const(CCP, 78);
  // goto L48(i33)
  // L48(i33)
  Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i33_;
  goto L48_;

L238_:;
  // max_screen2 = ld `max.screen`
  Rsh_Fir_reg_max_screen2_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L280() else D84()
  // L280()
  goto L280_;

D72_:;
  // deopt 289 [i35, total]
  SEXP Rsh_Fir_array_deopt_stack58[2];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_deopt_stack58[1] = Rsh_Fir_reg_total;
  Rsh_Fir_deopt(289, 2, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L239_:;
  // total1 = force? total
  Rsh_Fir_reg_total1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_total);
  // checkMissing(total1)
  SEXP Rsh_Fir_array_args270[1];
  Rsh_Fir_array_args270[0] = Rsh_Fir_reg_total1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args270, Rsh_Fir_param_types_empty()));
  // c56 = `is.object`(total1)
  SEXP Rsh_Fir_array_args271[1];
  Rsh_Fir_array_args271[0] = Rsh_Fir_reg_total1_;
  Rsh_Fir_reg_c56_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args271, Rsh_Fir_param_types_empty());
  // if c56 then L240() else L241(i35, total1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c56_)) {
  // L240()
    goto L240_;
  } else {
  // L241(i35, total1)
    Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i35_;
    Rsh_Fir_reg_total3_ = Rsh_Fir_reg_total1_;
    goto L241_;
  }

L240_:;
  // dr36 = tryDispatchBuiltin.1("[", total1)
  SEXP Rsh_Fir_array_args272[2];
  Rsh_Fir_array_args272[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args272[1] = Rsh_Fir_reg_total1_;
  Rsh_Fir_reg_dr36_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args272);
  // dc18 = getTryDispatchBuiltinDispatched(dr36)
  SEXP Rsh_Fir_array_args273[1];
  Rsh_Fir_array_args273[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dc18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args273, Rsh_Fir_param_types_empty());
  // if dc18 then L242() else L241(i35, dr36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc18_)) {
  // L242()
    goto L242_;
  } else {
  // L241(i35, dr36)
    Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i35_;
    Rsh_Fir_reg_total3_ = Rsh_Fir_reg_dr36_;
    goto L241_;
  }

L241_:;
  // sym17 = ldf c
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base17 = ldf c in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args274[2];
  Rsh_Fir_array_args274[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args274[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args274);
  // if guard17 then L243() else L244()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L243()
    goto L243_;
  } else {
  // L244()
    goto L244_;
  }

L242_:;
  // dx61 = getTryDispatchBuiltinValue(dr36)
  SEXP Rsh_Fir_array_args275[1];
  Rsh_Fir_array_args275[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dx61_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args275, Rsh_Fir_param_types_empty());
  // goto L49(i35, dx61)
  // L49(i35, dx61)
  Rsh_Fir_reg_i41_ = Rsh_Fir_reg_i35_;
  Rsh_Fir_reg_dx62_ = Rsh_Fir_reg_dx61_;
  goto L49_;

L243_:;
  // c57 = ldf c in base
  Rsh_Fir_reg_c57_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r138 = dyn c57(1.0, 1.0, 3.0, 3.0)
  SEXP Rsh_Fir_array_args276[4];
  Rsh_Fir_array_args276[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args276[1] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args276[2] = Rsh_const(CCP, 85);
  Rsh_Fir_array_args276[3] = Rsh_const(CCP, 85);
  SEXP Rsh_Fir_array_arg_names63[4];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_array_arg_names63[1] = R_MissingArg;
  Rsh_Fir_array_arg_names63[2] = R_MissingArg;
  Rsh_Fir_array_arg_names63[3] = R_MissingArg;
  Rsh_Fir_reg_r138_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c57_, 4, Rsh_Fir_array_args276, Rsh_Fir_array_arg_names63, CCP, RHO);
  // check L245() else D73()
  // L245()
  goto L245_;

L244_:;
  // r136 = dyn base17(1.0, 1.0, 3.0, 3.0)
  SEXP Rsh_Fir_array_args277[4];
  Rsh_Fir_array_args277[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args277[1] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args277[2] = Rsh_const(CCP, 85);
  Rsh_Fir_array_args277[3] = Rsh_const(CCP, 85);
  SEXP Rsh_Fir_array_arg_names64[4];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_array_arg_names64[2] = R_MissingArg;
  Rsh_Fir_array_arg_names64[3] = R_MissingArg;
  Rsh_Fir_reg_r136_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 4, Rsh_Fir_array_args277, Rsh_Fir_array_arg_names64, CCP, RHO);
  // goto L50(i39, total3, r136)
  // L50(i39, total3, r136)
  Rsh_Fir_reg_i44_ = Rsh_Fir_reg_i39_;
  Rsh_Fir_reg_total6_ = Rsh_Fir_reg_total3_;
  Rsh_Fir_reg_r137_ = Rsh_Fir_reg_r136_;
  goto L50_;

D73_:;
  // deopt 298 [i39, total3, r138]
  SEXP Rsh_Fir_array_deopt_stack59[3];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_i39_;
  Rsh_Fir_array_deopt_stack59[1] = Rsh_Fir_reg_total3_;
  Rsh_Fir_array_deopt_stack59[2] = Rsh_Fir_reg_r138_;
  Rsh_Fir_deopt(298, 3, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L245_:;
  // goto L50(i39, total3, r138)
  // L50(i39, total3, r138)
  Rsh_Fir_reg_i44_ = Rsh_Fir_reg_i39_;
  Rsh_Fir_reg_total6_ = Rsh_Fir_reg_total3_;
  Rsh_Fir_reg_r137_ = Rsh_Fir_reg_r138_;
  goto L50_;

D74_:;
  // deopt 299 [i41, dx62, figs19]
  SEXP Rsh_Fir_array_deopt_stack60[3];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_i41_;
  Rsh_Fir_array_deopt_stack60[1] = Rsh_Fir_reg_dx62_;
  Rsh_Fir_array_deopt_stack60[2] = Rsh_Fir_reg_figs19_;
  Rsh_Fir_deopt(299, 3, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L246_:;
  // figs20 = force? figs19
  Rsh_Fir_reg_figs20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_figs19_);
  // checkMissing(figs20)
  SEXP Rsh_Fir_array_args278[1];
  Rsh_Fir_array_args278[0] = Rsh_Fir_reg_figs20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args278, Rsh_Fir_param_types_empty()));
  // c58 = `is.object`(figs20)
  SEXP Rsh_Fir_array_args279[1];
  Rsh_Fir_array_args279[0] = Rsh_Fir_reg_figs20_;
  Rsh_Fir_reg_c58_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args279, Rsh_Fir_param_types_empty());
  // if c58 then L247() else L248(i41, dx62, figs20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c58_)) {
  // L247()
    goto L247_;
  } else {
  // L248(i41, dx62, figs20)
    Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i41_;
    Rsh_Fir_reg_dx64_ = Rsh_Fir_reg_dx62_;
    Rsh_Fir_reg_figs22_ = Rsh_Fir_reg_figs20_;
    goto L248_;
  }

L247_:;
  // dr38 = tryDispatchBuiltin.1("[", figs20)
  SEXP Rsh_Fir_array_args280[2];
  Rsh_Fir_array_args280[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args280[1] = Rsh_Fir_reg_figs20_;
  Rsh_Fir_reg_dr38_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args280);
  // dc19 = getTryDispatchBuiltinDispatched(dr38)
  SEXP Rsh_Fir_array_args281[1];
  Rsh_Fir_array_args281[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dc19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args281, Rsh_Fir_param_types_empty());
  // if dc19 then L249() else L248(i41, dx62, dr38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc19_)) {
  // L249()
    goto L249_;
  } else {
  // L248(i41, dx62, dr38)
    Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i41_;
    Rsh_Fir_reg_dx64_ = Rsh_Fir_reg_dx62_;
    Rsh_Fir_reg_figs22_ = Rsh_Fir_reg_dr38_;
    goto L248_;
  }

L248_:;
  // i49 = ld i
  Rsh_Fir_reg_i49_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L250() else D75()
  // L250()
  goto L250_;

L249_:;
  // dx66 = getTryDispatchBuiltinValue(dr38)
  SEXP Rsh_Fir_array_args282[1];
  Rsh_Fir_array_args282[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dx66_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args282, Rsh_Fir_param_types_empty());
  // goto L51(i41, dx62, dx66)
  // L51(i41, dx62, dx66)
  Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i41_;
  Rsh_Fir_reg_dx67_ = Rsh_Fir_reg_dx62_;
  Rsh_Fir_reg_dx68_ = Rsh_Fir_reg_dx66_;
  goto L51_;

D75_:;
  // deopt 301 [i46, dx64, figs22, i49]
  SEXP Rsh_Fir_array_deopt_stack61[4];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_i46_;
  Rsh_Fir_array_deopt_stack61[1] = Rsh_Fir_reg_dx64_;
  Rsh_Fir_array_deopt_stack61[2] = Rsh_Fir_reg_figs22_;
  Rsh_Fir_array_deopt_stack61[3] = Rsh_Fir_reg_i49_;
  Rsh_Fir_deopt(301, 4, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L250_:;
  // i50 = force? i49
  Rsh_Fir_reg_i50_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i49_);
  // __10 = ldf `[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r140 = dyn __10(figs20, i50, <missing>)
  SEXP Rsh_Fir_array_args283[3];
  Rsh_Fir_array_args283[0] = Rsh_Fir_reg_figs20_;
  Rsh_Fir_array_args283[1] = Rsh_Fir_reg_i50_;
  Rsh_Fir_array_args283[2] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names65[3];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_array_arg_names65[1] = R_MissingArg;
  Rsh_Fir_array_arg_names65[2] = R_MissingArg;
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 3, Rsh_Fir_array_args283, Rsh_Fir_array_arg_names65, CCP, RHO);
  // goto L51(i46, dx64, r140)
  // L51(i46, dx64, r140)
  Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i46_;
  Rsh_Fir_reg_dx67_ = Rsh_Fir_reg_dx64_;
  Rsh_Fir_reg_dx68_ = Rsh_Fir_reg_r140_;
  goto L51_;

L251_:;
  // sym19 = ldf c
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base19 = ldf c in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args284[2];
  Rsh_Fir_array_args284[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args284[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args284);
  // if guard19 then L253() else L254()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L253()
    goto L253_;
  } else {
  // L254()
    goto L254_;
  }

L252_:;
  // r141 = dyn base18(<lang c(`-`(`[`(total, 2), `[`(total, 1)), `-`(`[`(total, 4), `[`(total, 3)))>, <lang c(2.0, 2.0)>)
  SEXP Rsh_Fir_array_args285[2];
  Rsh_Fir_array_args285[0] = Rsh_const(CCP, 86);
  Rsh_Fir_array_args285[1] = Rsh_const(CCP, 87);
  SEXP Rsh_Fir_array_arg_names66[2];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_array_arg_names66[1] = R_MissingArg;
  Rsh_Fir_reg_r141_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 2, Rsh_Fir_array_args285, Rsh_Fir_array_arg_names66, CCP, RHO);
  // goto L52(i48, dx67, dx68, r141)
  // L52(i48, dx67, dx68, r141)
  Rsh_Fir_reg_i53_ = Rsh_Fir_reg_i48_;
  Rsh_Fir_reg_dx73_ = Rsh_Fir_reg_dx67_;
  Rsh_Fir_reg_dx74_ = Rsh_Fir_reg_dx68_;
  Rsh_Fir_reg_r142_ = Rsh_Fir_reg_r141_;
  goto L52_;

L253_:;
  // total7 = ld total
  Rsh_Fir_reg_total7_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L255() else D76()
  // L255()
  goto L255_;

L254_:;
  // r143 = dyn base19(<lang `-`(`[`(total, 2), `[`(total, 1))>, <lang `-`(`[`(total, 4), `[`(total, 3))>)
  SEXP Rsh_Fir_array_args286[2];
  Rsh_Fir_array_args286[0] = Rsh_const(CCP, 88);
  Rsh_Fir_array_args286[1] = Rsh_const(CCP, 89);
  SEXP Rsh_Fir_array_arg_names67[2];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_array_arg_names67[1] = R_MissingArg;
  Rsh_Fir_reg_r143_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 2, Rsh_Fir_array_args286, Rsh_Fir_array_arg_names67, CCP, RHO);
  // goto L53(i48, dx67, dx68, r143)
  // L53(i48, dx67, dx68, r143)
  Rsh_Fir_reg_i56_ = Rsh_Fir_reg_i48_;
  Rsh_Fir_reg_dx79_ = Rsh_Fir_reg_dx67_;
  Rsh_Fir_reg_dx80_ = Rsh_Fir_reg_dx68_;
  Rsh_Fir_reg_r144_ = Rsh_Fir_reg_r143_;
  goto L53_;

D76_:;
  // deopt 309 [i48, dx67, dx68, total7]
  SEXP Rsh_Fir_array_deopt_stack62[4];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_i48_;
  Rsh_Fir_array_deopt_stack62[1] = Rsh_Fir_reg_dx67_;
  Rsh_Fir_array_deopt_stack62[2] = Rsh_Fir_reg_dx68_;
  Rsh_Fir_array_deopt_stack62[3] = Rsh_Fir_reg_total7_;
  Rsh_Fir_deopt(309, 4, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L255_:;
  // total8 = force? total7
  Rsh_Fir_reg_total8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_total7_);
  // checkMissing(total8)
  SEXP Rsh_Fir_array_args287[1];
  Rsh_Fir_array_args287[0] = Rsh_Fir_reg_total8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args287, Rsh_Fir_param_types_empty()));
  // c59 = `is.object`(total8)
  SEXP Rsh_Fir_array_args288[1];
  Rsh_Fir_array_args288[0] = Rsh_Fir_reg_total8_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args288, Rsh_Fir_param_types_empty());
  // if c59 then L256() else L257(i48, dx67, dx68, total8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c59_)) {
  // L256()
    goto L256_;
  } else {
  // L257(i48, dx67, dx68, total8)
    Rsh_Fir_reg_i58_ = Rsh_Fir_reg_i48_;
    Rsh_Fir_reg_dx83_ = Rsh_Fir_reg_dx67_;
    Rsh_Fir_reg_dx84_ = Rsh_Fir_reg_dx68_;
    Rsh_Fir_reg_total10_ = Rsh_Fir_reg_total8_;
    goto L257_;
  }

L256_:;
  // dr40 = tryDispatchBuiltin.1("[", total8)
  SEXP Rsh_Fir_array_args289[2];
  Rsh_Fir_array_args289[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args289[1] = Rsh_Fir_reg_total8_;
  Rsh_Fir_reg_dr40_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args289);
  // dc20 = getTryDispatchBuiltinDispatched(dr40)
  SEXP Rsh_Fir_array_args290[1];
  Rsh_Fir_array_args290[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dc20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args290, Rsh_Fir_param_types_empty());
  // if dc20 then L258() else L257(i48, dx67, dx68, dr40)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc20_)) {
  // L258()
    goto L258_;
  } else {
  // L257(i48, dx67, dx68, dr40)
    Rsh_Fir_reg_i58_ = Rsh_Fir_reg_i48_;
    Rsh_Fir_reg_dx83_ = Rsh_Fir_reg_dx67_;
    Rsh_Fir_reg_dx84_ = Rsh_Fir_reg_dx68_;
    Rsh_Fir_reg_total10_ = Rsh_Fir_reg_dr40_;
    goto L257_;
  }

L257_:;
  // __11 = ldf `[` in base
  Rsh_Fir_reg___11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r145 = dyn __11(total10, 2)
  SEXP Rsh_Fir_array_args291[2];
  Rsh_Fir_array_args291[0] = Rsh_Fir_reg_total10_;
  Rsh_Fir_array_args291[1] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names68[2];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_array_arg_names68[1] = R_MissingArg;
  Rsh_Fir_reg_r145_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___11_, 2, Rsh_Fir_array_args291, Rsh_Fir_array_arg_names68, CCP, RHO);
  // goto L54(i58, dx83, dx84, r145)
  // L54(i58, dx83, dx84, r145)
  Rsh_Fir_reg_i60_ = Rsh_Fir_reg_i58_;
  Rsh_Fir_reg_dx88_ = Rsh_Fir_reg_dx83_;
  Rsh_Fir_reg_dx89_ = Rsh_Fir_reg_dx84_;
  Rsh_Fir_reg_dx90_ = Rsh_Fir_reg_r145_;
  goto L54_;

L258_:;
  // dx87 = getTryDispatchBuiltinValue(dr40)
  SEXP Rsh_Fir_array_args292[1];
  Rsh_Fir_array_args292[0] = Rsh_Fir_reg_dr40_;
  Rsh_Fir_reg_dx87_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args292, Rsh_Fir_param_types_empty());
  // goto L54(i48, dx67, dx68, dx87)
  // L54(i48, dx67, dx68, dx87)
  Rsh_Fir_reg_i60_ = Rsh_Fir_reg_i48_;
  Rsh_Fir_reg_dx88_ = Rsh_Fir_reg_dx67_;
  Rsh_Fir_reg_dx89_ = Rsh_Fir_reg_dx68_;
  Rsh_Fir_reg_dx90_ = Rsh_Fir_reg_dx87_;
  goto L54_;

D77_:;
  // deopt 313 [i60, dx88, dx89, dx90, total11]
  SEXP Rsh_Fir_array_deopt_stack63[5];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_i60_;
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_dx88_;
  Rsh_Fir_array_deopt_stack63[2] = Rsh_Fir_reg_dx89_;
  Rsh_Fir_array_deopt_stack63[3] = Rsh_Fir_reg_dx90_;
  Rsh_Fir_array_deopt_stack63[4] = Rsh_Fir_reg_total11_;
  Rsh_Fir_deopt(313, 5, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L259_:;
  // total12 = force? total11
  Rsh_Fir_reg_total12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_total11_);
  // checkMissing(total12)
  SEXP Rsh_Fir_array_args293[1];
  Rsh_Fir_array_args293[0] = Rsh_Fir_reg_total12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args293, Rsh_Fir_param_types_empty()));
  // c60 = `is.object`(total12)
  SEXP Rsh_Fir_array_args294[1];
  Rsh_Fir_array_args294[0] = Rsh_Fir_reg_total12_;
  Rsh_Fir_reg_c60_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args294, Rsh_Fir_param_types_empty());
  // if c60 then L260() else L261(i60, dx88, dx89, dx90, total12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c60_)) {
  // L260()
    goto L260_;
  } else {
  // L261(i60, dx88, dx89, dx90, total12)
    Rsh_Fir_reg_i62_ = Rsh_Fir_reg_i60_;
    Rsh_Fir_reg_dx94_ = Rsh_Fir_reg_dx88_;
    Rsh_Fir_reg_dx95_ = Rsh_Fir_reg_dx89_;
    Rsh_Fir_reg_dx96_ = Rsh_Fir_reg_dx90_;
    Rsh_Fir_reg_total14_ = Rsh_Fir_reg_total12_;
    goto L261_;
  }

L260_:;
  // dr42 = tryDispatchBuiltin.1("[", total12)
  SEXP Rsh_Fir_array_args295[2];
  Rsh_Fir_array_args295[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args295[1] = Rsh_Fir_reg_total12_;
  Rsh_Fir_reg_dr42_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args295);
  // dc21 = getTryDispatchBuiltinDispatched(dr42)
  SEXP Rsh_Fir_array_args296[1];
  Rsh_Fir_array_args296[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dc21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args296, Rsh_Fir_param_types_empty());
  // if dc21 then L262() else L261(i60, dx88, dx89, dx90, dr42)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc21_)) {
  // L262()
    goto L262_;
  } else {
  // L261(i60, dx88, dx89, dx90, dr42)
    Rsh_Fir_reg_i62_ = Rsh_Fir_reg_i60_;
    Rsh_Fir_reg_dx94_ = Rsh_Fir_reg_dx88_;
    Rsh_Fir_reg_dx95_ = Rsh_Fir_reg_dx89_;
    Rsh_Fir_reg_dx96_ = Rsh_Fir_reg_dx90_;
    Rsh_Fir_reg_total14_ = Rsh_Fir_reg_dr42_;
    goto L261_;
  }

L261_:;
  // __12 = ldf `[` in base
  Rsh_Fir_reg___12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r146 = dyn __12(total14, 1)
  SEXP Rsh_Fir_array_args297[2];
  Rsh_Fir_array_args297[0] = Rsh_Fir_reg_total14_;
  Rsh_Fir_array_args297[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names69[2];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_array_arg_names69[1] = R_MissingArg;
  Rsh_Fir_reg_r146_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___12_, 2, Rsh_Fir_array_args297, Rsh_Fir_array_arg_names69, CCP, RHO);
  // goto L55(i62, dx94, dx95, dx96, r146)
  // L55(i62, dx94, dx95, dx96, r146)
  Rsh_Fir_reg_i64_ = Rsh_Fir_reg_i62_;
  Rsh_Fir_reg_dx101_ = Rsh_Fir_reg_dx94_;
  Rsh_Fir_reg_dx102_ = Rsh_Fir_reg_dx95_;
  Rsh_Fir_reg_dx103_ = Rsh_Fir_reg_dx96_;
  Rsh_Fir_reg_dx104_ = Rsh_Fir_reg_r146_;
  goto L55_;

L262_:;
  // dx100 = getTryDispatchBuiltinValue(dr42)
  SEXP Rsh_Fir_array_args298[1];
  Rsh_Fir_array_args298[0] = Rsh_Fir_reg_dr42_;
  Rsh_Fir_reg_dx100_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args298, Rsh_Fir_param_types_empty());
  // goto L55(i60, dx88, dx89, dx90, dx100)
  // L55(i60, dx88, dx89, dx90, dx100)
  Rsh_Fir_reg_i64_ = Rsh_Fir_reg_i60_;
  Rsh_Fir_reg_dx101_ = Rsh_Fir_reg_dx88_;
  Rsh_Fir_reg_dx102_ = Rsh_Fir_reg_dx89_;
  Rsh_Fir_reg_dx103_ = Rsh_Fir_reg_dx90_;
  Rsh_Fir_reg_dx104_ = Rsh_Fir_reg_dx100_;
  goto L55_;

D78_:;
  // deopt 319 [i64, dx101, dx102, total15]
  SEXP Rsh_Fir_array_deopt_stack64[4];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_i64_;
  Rsh_Fir_array_deopt_stack64[1] = Rsh_Fir_reg_dx101_;
  Rsh_Fir_array_deopt_stack64[2] = Rsh_Fir_reg_dx102_;
  Rsh_Fir_array_deopt_stack64[3] = Rsh_Fir_reg_total15_;
  Rsh_Fir_deopt(319, 4, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L263_:;
  // total16 = force? total15
  Rsh_Fir_reg_total16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_total15_);
  // checkMissing(total16)
  SEXP Rsh_Fir_array_args299[1];
  Rsh_Fir_array_args299[0] = Rsh_Fir_reg_total16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args299, Rsh_Fir_param_types_empty()));
  // c61 = `is.object`(total16)
  SEXP Rsh_Fir_array_args300[1];
  Rsh_Fir_array_args300[0] = Rsh_Fir_reg_total16_;
  Rsh_Fir_reg_c61_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args300, Rsh_Fir_param_types_empty());
  // if c61 then L264() else L265(i64, dx101, dx102, total16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c61_)) {
  // L264()
    goto L264_;
  } else {
  // L265(i64, dx101, dx102, total16)
    Rsh_Fir_reg_i66_ = Rsh_Fir_reg_i64_;
    Rsh_Fir_reg_dx107_ = Rsh_Fir_reg_dx101_;
    Rsh_Fir_reg_dx108_ = Rsh_Fir_reg_dx102_;
    Rsh_Fir_reg_total18_ = Rsh_Fir_reg_total16_;
    goto L265_;
  }

L264_:;
  // dr44 = tryDispatchBuiltin.1("[", total16)
  SEXP Rsh_Fir_array_args301[2];
  Rsh_Fir_array_args301[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args301[1] = Rsh_Fir_reg_total16_;
  Rsh_Fir_reg_dr44_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args301);
  // dc22 = getTryDispatchBuiltinDispatched(dr44)
  SEXP Rsh_Fir_array_args302[1];
  Rsh_Fir_array_args302[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dc22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args302, Rsh_Fir_param_types_empty());
  // if dc22 then L266() else L265(i64, dx101, dx102, dr44)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc22_)) {
  // L266()
    goto L266_;
  } else {
  // L265(i64, dx101, dx102, dr44)
    Rsh_Fir_reg_i66_ = Rsh_Fir_reg_i64_;
    Rsh_Fir_reg_dx107_ = Rsh_Fir_reg_dx101_;
    Rsh_Fir_reg_dx108_ = Rsh_Fir_reg_dx102_;
    Rsh_Fir_reg_total18_ = Rsh_Fir_reg_dr44_;
    goto L265_;
  }

L265_:;
  // __13 = ldf `[` in base
  Rsh_Fir_reg___13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r148 = dyn __13(total18, 4)
  SEXP Rsh_Fir_array_args303[2];
  Rsh_Fir_array_args303[0] = Rsh_Fir_reg_total18_;
  Rsh_Fir_array_args303[1] = Rsh_const(CCP, 90);
  SEXP Rsh_Fir_array_arg_names70[2];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_array_arg_names70[1] = R_MissingArg;
  Rsh_Fir_reg_r148_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___13_, 2, Rsh_Fir_array_args303, Rsh_Fir_array_arg_names70, CCP, RHO);
  // goto L56(i66, dx107, dx108, r148)
  // L56(i66, dx107, dx108, r148)
  Rsh_Fir_reg_i68_ = Rsh_Fir_reg_i66_;
  Rsh_Fir_reg_dx112_ = Rsh_Fir_reg_dx107_;
  Rsh_Fir_reg_dx113_ = Rsh_Fir_reg_dx108_;
  Rsh_Fir_reg_dx114_ = Rsh_Fir_reg_r148_;
  goto L56_;

L266_:;
  // dx111 = getTryDispatchBuiltinValue(dr44)
  SEXP Rsh_Fir_array_args304[1];
  Rsh_Fir_array_args304[0] = Rsh_Fir_reg_dr44_;
  Rsh_Fir_reg_dx111_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args304, Rsh_Fir_param_types_empty());
  // goto L56(i64, dx101, dx102, dx111)
  // L56(i64, dx101, dx102, dx111)
  Rsh_Fir_reg_i68_ = Rsh_Fir_reg_i64_;
  Rsh_Fir_reg_dx112_ = Rsh_Fir_reg_dx101_;
  Rsh_Fir_reg_dx113_ = Rsh_Fir_reg_dx102_;
  Rsh_Fir_reg_dx114_ = Rsh_Fir_reg_dx111_;
  goto L56_;

D79_:;
  // deopt 323 [i68, dx112, dx113, dx114, total19]
  SEXP Rsh_Fir_array_deopt_stack65[5];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_i68_;
  Rsh_Fir_array_deopt_stack65[1] = Rsh_Fir_reg_dx112_;
  Rsh_Fir_array_deopt_stack65[2] = Rsh_Fir_reg_dx113_;
  Rsh_Fir_array_deopt_stack65[3] = Rsh_Fir_reg_dx114_;
  Rsh_Fir_array_deopt_stack65[4] = Rsh_Fir_reg_total19_;
  Rsh_Fir_deopt(323, 5, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L267_:;
  // total20 = force? total19
  Rsh_Fir_reg_total20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_total19_);
  // checkMissing(total20)
  SEXP Rsh_Fir_array_args305[1];
  Rsh_Fir_array_args305[0] = Rsh_Fir_reg_total20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args305, Rsh_Fir_param_types_empty()));
  // c62 = `is.object`(total20)
  SEXP Rsh_Fir_array_args306[1];
  Rsh_Fir_array_args306[0] = Rsh_Fir_reg_total20_;
  Rsh_Fir_reg_c62_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args306, Rsh_Fir_param_types_empty());
  // if c62 then L268() else L269(i68, dx112, dx113, dx114, total20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c62_)) {
  // L268()
    goto L268_;
  } else {
  // L269(i68, dx112, dx113, dx114, total20)
    Rsh_Fir_reg_i70_ = Rsh_Fir_reg_i68_;
    Rsh_Fir_reg_dx118_ = Rsh_Fir_reg_dx112_;
    Rsh_Fir_reg_dx119_ = Rsh_Fir_reg_dx113_;
    Rsh_Fir_reg_dx120_ = Rsh_Fir_reg_dx114_;
    Rsh_Fir_reg_total22_ = Rsh_Fir_reg_total20_;
    goto L269_;
  }

L268_:;
  // dr46 = tryDispatchBuiltin.1("[", total20)
  SEXP Rsh_Fir_array_args307[2];
  Rsh_Fir_array_args307[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args307[1] = Rsh_Fir_reg_total20_;
  Rsh_Fir_reg_dr46_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args307);
  // dc23 = getTryDispatchBuiltinDispatched(dr46)
  SEXP Rsh_Fir_array_args308[1];
  Rsh_Fir_array_args308[0] = Rsh_Fir_reg_dr46_;
  Rsh_Fir_reg_dc23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args308, Rsh_Fir_param_types_empty());
  // if dc23 then L270() else L269(i68, dx112, dx113, dx114, dr46)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc23_)) {
  // L270()
    goto L270_;
  } else {
  // L269(i68, dx112, dx113, dx114, dr46)
    Rsh_Fir_reg_i70_ = Rsh_Fir_reg_i68_;
    Rsh_Fir_reg_dx118_ = Rsh_Fir_reg_dx112_;
    Rsh_Fir_reg_dx119_ = Rsh_Fir_reg_dx113_;
    Rsh_Fir_reg_dx120_ = Rsh_Fir_reg_dx114_;
    Rsh_Fir_reg_total22_ = Rsh_Fir_reg_dr46_;
    goto L269_;
  }

L269_:;
  // __14 = ldf `[` in base
  Rsh_Fir_reg___14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r149 = dyn __14(total22, 3)
  SEXP Rsh_Fir_array_args309[2];
  Rsh_Fir_array_args309[0] = Rsh_Fir_reg_total22_;
  Rsh_Fir_array_args309[1] = Rsh_const(CCP, 91);
  SEXP Rsh_Fir_array_arg_names71[2];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_array_arg_names71[1] = R_MissingArg;
  Rsh_Fir_reg_r149_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___14_, 2, Rsh_Fir_array_args309, Rsh_Fir_array_arg_names71, CCP, RHO);
  // goto L57(i70, dx118, dx119, dx120, r149)
  // L57(i70, dx118, dx119, dx120, r149)
  Rsh_Fir_reg_i72_ = Rsh_Fir_reg_i70_;
  Rsh_Fir_reg_dx125_ = Rsh_Fir_reg_dx118_;
  Rsh_Fir_reg_dx126_ = Rsh_Fir_reg_dx119_;
  Rsh_Fir_reg_dx127_ = Rsh_Fir_reg_dx120_;
  Rsh_Fir_reg_dx128_ = Rsh_Fir_reg_r149_;
  goto L57_;

L270_:;
  // dx124 = getTryDispatchBuiltinValue(dr46)
  SEXP Rsh_Fir_array_args310[1];
  Rsh_Fir_array_args310[0] = Rsh_Fir_reg_dr46_;
  Rsh_Fir_reg_dx124_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args310, Rsh_Fir_param_types_empty());
  // goto L57(i68, dx112, dx113, dx114, dx124)
  // L57(i68, dx112, dx113, dx114, dx124)
  Rsh_Fir_reg_i72_ = Rsh_Fir_reg_i68_;
  Rsh_Fir_reg_dx125_ = Rsh_Fir_reg_dx112_;
  Rsh_Fir_reg_dx126_ = Rsh_Fir_reg_dx113_;
  Rsh_Fir_reg_dx127_ = Rsh_Fir_reg_dx114_;
  Rsh_Fir_reg_dx128_ = Rsh_Fir_reg_dx124_;
  goto L57_;

D80_:;
  // deopt 330 [i72, dx125, dx126, r151]
  SEXP Rsh_Fir_array_deopt_stack66[4];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_i72_;
  Rsh_Fir_array_deopt_stack66[1] = Rsh_Fir_reg_dx125_;
  Rsh_Fir_array_deopt_stack66[2] = Rsh_Fir_reg_dx126_;
  Rsh_Fir_array_deopt_stack66[3] = Rsh_Fir_reg_r151_;
  Rsh_Fir_deopt(330, 4, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L271_:;
  // goto L53(i72, dx125, dx126, r151)
  // L53(i72, dx125, dx126, r151)
  Rsh_Fir_reg_i56_ = Rsh_Fir_reg_i72_;
  Rsh_Fir_reg_dx79_ = Rsh_Fir_reg_dx125_;
  Rsh_Fir_reg_dx80_ = Rsh_Fir_reg_dx126_;
  Rsh_Fir_reg_r144_ = Rsh_Fir_reg_r151_;
  goto L53_;

L272_:;
  // c64 = ldf c in base
  Rsh_Fir_reg_c64_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r154 = dyn c64(2.0, 2.0)
  SEXP Rsh_Fir_array_args311[2];
  Rsh_Fir_array_args311[0] = Rsh_const(CCP, 92);
  Rsh_Fir_array_args311[1] = Rsh_const(CCP, 92);
  SEXP Rsh_Fir_array_arg_names72[2];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_array_arg_names72[1] = R_MissingArg;
  Rsh_Fir_reg_r154_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c64_, 2, Rsh_Fir_array_args311, Rsh_Fir_array_arg_names72, CCP, RHO);
  // check L274() else D81()
  // L274()
  goto L274_;

L273_:;
  // r152 = dyn base20(2.0, 2.0)
  SEXP Rsh_Fir_array_args312[2];
  Rsh_Fir_array_args312[0] = Rsh_const(CCP, 92);
  Rsh_Fir_array_args312[1] = Rsh_const(CCP, 92);
  SEXP Rsh_Fir_array_arg_names73[2];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_array_arg_names73[1] = R_MissingArg;
  Rsh_Fir_reg_r152_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 2, Rsh_Fir_array_args312, Rsh_Fir_array_arg_names73, CCP, RHO);
  // goto L58(i56, dx79, dx80, r152)
  // L58(i56, dx79, dx80, r152)
  Rsh_Fir_reg_i75_ = Rsh_Fir_reg_i56_;
  Rsh_Fir_reg_dx133_ = Rsh_Fir_reg_dx79_;
  Rsh_Fir_reg_dx134_ = Rsh_Fir_reg_dx80_;
  Rsh_Fir_reg_r153_ = Rsh_Fir_reg_r152_;
  goto L58_;

D81_:;
  // deopt 336 [i56, dx79, dx80, r154]
  SEXP Rsh_Fir_array_deopt_stack67[4];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_i56_;
  Rsh_Fir_array_deopt_stack67[1] = Rsh_Fir_reg_dx79_;
  Rsh_Fir_array_deopt_stack67[2] = Rsh_Fir_reg_dx80_;
  Rsh_Fir_array_deopt_stack67[3] = Rsh_Fir_reg_r154_;
  Rsh_Fir_deopt(336, 4, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L274_:;
  // goto L58(i56, dx79, dx80, r154)
  // L58(i56, dx79, dx80, r154)
  Rsh_Fir_reg_i75_ = Rsh_Fir_reg_i56_;
  Rsh_Fir_reg_dx133_ = Rsh_Fir_reg_dx79_;
  Rsh_Fir_reg_dx134_ = Rsh_Fir_reg_dx80_;
  Rsh_Fir_reg_r153_ = Rsh_Fir_reg_r154_;
  goto L58_;

D82_:;
  // deopt 338 [i75, dx133, dx134, r155]
  SEXP Rsh_Fir_array_deopt_stack68[4];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_i75_;
  Rsh_Fir_array_deopt_stack68[1] = Rsh_Fir_reg_dx133_;
  Rsh_Fir_array_deopt_stack68[2] = Rsh_Fir_reg_dx134_;
  Rsh_Fir_array_deopt_stack68[3] = Rsh_Fir_reg_r155_;
  Rsh_Fir_deopt(338, 4, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L275_:;
  // goto L52(i75, dx133, dx134, r155)
  // L52(i75, dx133, dx134, r155)
  Rsh_Fir_reg_i53_ = Rsh_Fir_reg_i75_;
  Rsh_Fir_reg_dx73_ = Rsh_Fir_reg_dx133_;
  Rsh_Fir_reg_dx74_ = Rsh_Fir_reg_dx134_;
  Rsh_Fir_reg_r142_ = Rsh_Fir_reg_r155_;
  goto L52_;

L276_:;
  // dr48 = tryDispatchBuiltin.0("[<-", l24, r157)
  SEXP Rsh_Fir_array_args313[3];
  Rsh_Fir_array_args313[0] = Rsh_const(CCP, 93);
  Rsh_Fir_array_args313[1] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_args313[2] = Rsh_Fir_reg_r157_;
  Rsh_Fir_reg_dr48_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args313);
  // dc24 = getTryDispatchBuiltinDispatched(dr48)
  SEXP Rsh_Fir_array_args314[1];
  Rsh_Fir_array_args314[0] = Rsh_Fir_reg_dr48_;
  Rsh_Fir_reg_dc24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args314, Rsh_Fir_param_types_empty());
  // if dc24 then L278() else L277(i53, r157, dr48)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc24_)) {
  // L278()
    goto L278_;
  } else {
  // L277(i53, r157, dr48)
    Rsh_Fir_reg_i77_ = Rsh_Fir_reg_i53_;
    Rsh_Fir_reg_r159_ = Rsh_Fir_reg_r157_;
    Rsh_Fir_reg_l26_ = Rsh_Fir_reg_dr48_;
    goto L277_;
  }

L277_:;
  // i80 = ld i
  Rsh_Fir_reg_i80_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L279() else D83()
  // L279()
  goto L279_;

L278_:;
  // dx135 = getTryDispatchBuiltinValue(dr48)
  SEXP Rsh_Fir_array_args315[1];
  Rsh_Fir_array_args315[0] = Rsh_Fir_reg_dr48_;
  Rsh_Fir_reg_dx135_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args315, Rsh_Fir_param_types_empty());
  // goto L59(i53, dx135)
  // L59(i53, dx135)
  Rsh_Fir_reg_i79_ = Rsh_Fir_reg_i53_;
  Rsh_Fir_reg_dx136_ = Rsh_Fir_reg_dx135_;
  goto L59_;

D83_:;
  // deopt 342 [i77, r159, l26, r157, i80]
  SEXP Rsh_Fir_array_deopt_stack69[5];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_i77_;
  Rsh_Fir_array_deopt_stack69[1] = Rsh_Fir_reg_r159_;
  Rsh_Fir_array_deopt_stack69[2] = Rsh_Fir_reg_l26_;
  Rsh_Fir_array_deopt_stack69[3] = Rsh_Fir_reg_r157_;
  Rsh_Fir_array_deopt_stack69[4] = Rsh_Fir_reg_i80_;
  Rsh_Fir_deopt(342, 5, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L279_:;
  // i81 = force? i80
  Rsh_Fir_reg_i81_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i80_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 94), RHO);
  // r162 = dyn ___(l24, i81, <missing>, r157)
  SEXP Rsh_Fir_array_args316[4];
  Rsh_Fir_array_args316[0] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_args316[1] = Rsh_Fir_reg_i81_;
  Rsh_Fir_array_args316[2] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args316[3] = Rsh_Fir_reg_r157_;
  SEXP Rsh_Fir_array_arg_names74[4];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_array_arg_names74[1] = R_MissingArg;
  Rsh_Fir_array_arg_names74[2] = R_MissingArg;
  Rsh_Fir_array_arg_names74[3] = R_MissingArg;
  Rsh_Fir_reg_r162_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args316, Rsh_Fir_array_arg_names74, CCP, RHO);
  // goto L59(i77, r162)
  // L59(i77, r162)
  Rsh_Fir_reg_i79_ = Rsh_Fir_reg_i77_;
  Rsh_Fir_reg_dx136_ = Rsh_Fir_reg_r162_;
  goto L59_;

D84_:;
  // deopt 351 [max_screen2]
  SEXP Rsh_Fir_array_deopt_stack70[1];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_max_screen2_;
  Rsh_Fir_deopt(351, 1, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L280_:;
  // max_screen3 = force? max_screen2
  Rsh_Fir_reg_max_screen3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_max_screen2_);
  // checkMissing(max_screen3)
  SEXP Rsh_Fir_array_args317[1];
  Rsh_Fir_array_args317[0] = Rsh_Fir_reg_max_screen3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args317, Rsh_Fir_param_types_empty()));
  // r163 = `+`(max_screen3, 1.0)
  SEXP Rsh_Fir_array_args318[2];
  Rsh_Fir_array_args318[0] = Rsh_Fir_reg_max_screen3_;
  Rsh_Fir_array_args318[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r163_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args318, Rsh_Fir_param_types_empty());
  // new_max_screen = ld `new.max.screen`
  Rsh_Fir_reg_new_max_screen = Rsh_Fir_load(Rsh_const(CCP, 84), RHO);
  // check L281() else D85()
  // L281()
  goto L281_;

D85_:;
  // deopt 354 [r163, new_max_screen]
  SEXP Rsh_Fir_array_deopt_stack71[2];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_r163_;
  Rsh_Fir_array_deopt_stack71[1] = Rsh_Fir_reg_new_max_screen;
  Rsh_Fir_deopt(354, 2, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L281_:;
  // new_max_screen1 = force? new_max_screen
  Rsh_Fir_reg_new_max_screen1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_max_screen);
  // checkMissing(new_max_screen1)
  SEXP Rsh_Fir_array_args319[1];
  Rsh_Fir_array_args319[0] = Rsh_Fir_reg_new_max_screen1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args319, Rsh_Fir_param_types_empty()));
  // r164 = `:`(r163, new_max_screen1)
  SEXP Rsh_Fir_array_args320[2];
  Rsh_Fir_array_args320[0] = Rsh_Fir_reg_r163_;
  Rsh_Fir_array_args320[1] = Rsh_Fir_reg_new_max_screen1_;
  Rsh_Fir_reg_r164_ = Rsh_Fir_call_builtin(85, CCP, RHO, 2, Rsh_Fir_array_args320, Rsh_Fir_param_types_empty());
  // st `new.screens` = r164
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r164_, RHO);
  (void)(Rsh_Fir_reg_r164_);
  // new_screens4 = ld `new.screens`
  Rsh_Fir_reg_new_screens4_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L282() else D86()
  // L282()
  goto L282_;

D86_:;
  // deopt 358 [new_screens4]
  SEXP Rsh_Fir_array_deopt_stack72[1];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_new_screens4_;
  Rsh_Fir_deopt(358, 1, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

L282_:;
  // new_screens5 = force? new_screens4
  Rsh_Fir_reg_new_screens5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_screens4_);
  // checkMissing(new_screens5)
  SEXP Rsh_Fir_array_args321[1];
  Rsh_Fir_array_args321[0] = Rsh_Fir_reg_new_screens5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args321, Rsh_Fir_param_types_empty()));
  // s2 = toForSeq(new_screens5)
  SEXP Rsh_Fir_array_args322[1];
  Rsh_Fir_array_args322[0] = Rsh_Fir_reg_new_screens5_;
  Rsh_Fir_reg_s2_ = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args322, Rsh_Fir_param_types_empty());
  // l27 = length(s2)
  SEXP Rsh_Fir_array_args323[1];
  Rsh_Fir_array_args323[0] = Rsh_Fir_reg_s2_;
  Rsh_Fir_reg_l27_ = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args323, Rsh_Fir_param_types_empty());
  // i82 = 0
  Rsh_Fir_reg_i82_ = Rsh_const(CCP, 78);
  // goto L61(i82)
  // L61(i82)
  Rsh_Fir_reg_i83_ = Rsh_Fir_reg_i82_;
  goto L61_;

L283_:;
  // sym21 = ldf c
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base21 = ldf c in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args324[2];
  Rsh_Fir_array_args324[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args324[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args324);
  // if guard21 then L308() else L309()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L308()
    goto L308_;
  } else {
  // L309()
    goto L309_;
  }

D87_:;
  // deopt 361 [i84]
  SEXP Rsh_Fir_array_deopt_stack73[1];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_i84_;
  Rsh_Fir_deopt(361, 1, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L284_:;
  // p9 = prom<V +>{
  //   _SSenv8 = ld `.SSenv`;
  //   _SSenv9 = force? _SSenv8;
  //   checkMissing(_SSenv9);
  //   c67 = `is.object`(_SSenv9);
  //   if c67 then L1() else L2(_SSenv9);
  // L0(dx138):
  //   return dx138;
  // L1():
  //   dr50 = tryDispatchBuiltin.1("$", _SSenv9);
  //   dc25 = getTryDispatchBuiltinDispatched(dr50);
  //   if dc25 then L3() else L2(dr50);
  // L2(_SSenv11):
  //   r165 = `$`(_SSenv11, <sym par.list>);
  //   goto L0(r165);
  // L3():
  //   dx137 = getTryDispatchBuiltinValue(dr50);
  //   goto L0(dx137);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3566772296_9, CCP, RHO);
  // r167 = dyn par3(p9)
  SEXP Rsh_Fir_array_args331[1];
  Rsh_Fir_array_args331[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names75[1];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_reg_r167_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par3_, 1, Rsh_Fir_array_args331, Rsh_Fir_array_arg_names75, CCP, RHO);
  // check L285() else D88()
  // L285()
  goto L285_;

D88_:;
  // deopt 363 [i84, r167]
  SEXP Rsh_Fir_array_deopt_stack74[2];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_i84_;
  Rsh_Fir_array_deopt_stack74[1] = Rsh_Fir_reg_r167_;
  Rsh_Fir_deopt(363, 2, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L285_:;
  // l28 = ld `split.screens`
  Rsh_Fir_reg_l28_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // c68 = `is.object`(l28)
  SEXP Rsh_Fir_array_args332[1];
  Rsh_Fir_array_args332[0] = Rsh_Fir_reg_l28_;
  Rsh_Fir_reg_c68_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args332, Rsh_Fir_param_types_empty());
  // if c68 then L286() else L287(i84, r167, l28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c68_)) {
  // L286()
    goto L286_;
  } else {
  // L287(i84, r167, l28)
    Rsh_Fir_reg_i88_ = Rsh_Fir_reg_i84_;
    Rsh_Fir_reg_r169_ = Rsh_Fir_reg_r167_;
    Rsh_Fir_reg_l30_ = Rsh_Fir_reg_l28_;
    goto L287_;
  }

L286_:;
  // dr52 = tryDispatchBuiltin.0("[[<-", l28, r167)
  SEXP Rsh_Fir_array_args333[3];
  Rsh_Fir_array_args333[0] = Rsh_const(CCP, 79);
  Rsh_Fir_array_args333[1] = Rsh_Fir_reg_l28_;
  Rsh_Fir_array_args333[2] = Rsh_Fir_reg_r167_;
  Rsh_Fir_reg_dr52_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args333);
  // dc26 = getTryDispatchBuiltinDispatched(dr52)
  SEXP Rsh_Fir_array_args334[1];
  Rsh_Fir_array_args334[0] = Rsh_Fir_reg_dr52_;
  Rsh_Fir_reg_dc26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args334, Rsh_Fir_param_types_empty());
  // if dc26 then L288() else L287(i84, r167, dr52)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc26_)) {
  // L288()
    goto L288_;
  } else {
  // L287(i84, r167, dr52)
    Rsh_Fir_reg_i88_ = Rsh_Fir_reg_i84_;
    Rsh_Fir_reg_r169_ = Rsh_Fir_reg_r167_;
    Rsh_Fir_reg_l30_ = Rsh_Fir_reg_dr52_;
    goto L287_;
  }

L287_:;
  // i91 = ld i
  Rsh_Fir_reg_i91_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L289() else D89()
  // L289()
  goto L289_;

L288_:;
  // dx139 = getTryDispatchBuiltinValue(dr52)
  SEXP Rsh_Fir_array_args335[1];
  Rsh_Fir_array_args335[0] = Rsh_Fir_reg_dr52_;
  Rsh_Fir_reg_dx139_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args335, Rsh_Fir_param_types_empty());
  // goto L62(i84, dx139)
  // L62(i84, dx139)
  Rsh_Fir_reg_i90_ = Rsh_Fir_reg_i84_;
  Rsh_Fir_reg_dx140_ = Rsh_Fir_reg_dx139_;
  goto L62_;

D89_:;
  // deopt 365 [i88, r169, l30, r167, i91]
  SEXP Rsh_Fir_array_deopt_stack75[5];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_i88_;
  Rsh_Fir_array_deopt_stack75[1] = Rsh_Fir_reg_r169_;
  Rsh_Fir_array_deopt_stack75[2] = Rsh_Fir_reg_l30_;
  Rsh_Fir_array_deopt_stack75[3] = Rsh_Fir_reg_r167_;
  Rsh_Fir_array_deopt_stack75[4] = Rsh_Fir_reg_i91_;
  Rsh_Fir_deopt(365, 5, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L289_:;
  // i92 = force? i91
  Rsh_Fir_reg_i92_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i91_);
  // ____2 = ldf `[[<-` in base
  Rsh_Fir_reg_____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 80), RHO);
  // r172 = dyn ____2(l30, r167, i92)
  SEXP Rsh_Fir_array_args336[3];
  Rsh_Fir_array_args336[0] = Rsh_Fir_reg_l30_;
  Rsh_Fir_array_args336[1] = Rsh_Fir_reg_r167_;
  Rsh_Fir_array_args336[2] = Rsh_Fir_reg_i92_;
  SEXP Rsh_Fir_array_arg_names76[3];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_array_arg_names76[1] = R_MissingArg;
  Rsh_Fir_array_arg_names76[2] = R_MissingArg;
  Rsh_Fir_reg_r172_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____2_, 3, Rsh_Fir_array_args336, Rsh_Fir_array_arg_names76, CCP, RHO);
  // goto L62(i88, r172)
  // L62(i88, r172)
  Rsh_Fir_reg_i90_ = Rsh_Fir_reg_i88_;
  Rsh_Fir_reg_dx140_ = Rsh_Fir_reg_r172_;
  goto L62_;

D90_:;
  // deopt 369 [i90, figs23]
  SEXP Rsh_Fir_array_deopt_stack76[2];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_i90_;
  Rsh_Fir_array_deopt_stack76[1] = Rsh_Fir_reg_figs23_;
  Rsh_Fir_deopt(369, 2, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

L290_:;
  // figs24 = force? figs23
  Rsh_Fir_reg_figs24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_figs23_);
  // checkMissing(figs24)
  SEXP Rsh_Fir_array_args337[1];
  Rsh_Fir_array_args337[0] = Rsh_Fir_reg_figs24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args337, Rsh_Fir_param_types_empty()));
  // c69 = `is.object`(figs24)
  SEXP Rsh_Fir_array_args338[1];
  Rsh_Fir_array_args338[0] = Rsh_Fir_reg_figs24_;
  Rsh_Fir_reg_c69_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args338, Rsh_Fir_param_types_empty());
  // if c69 then L291() else L292(i90, figs24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c69_)) {
  // L291()
    goto L291_;
  } else {
  // L292(i90, figs24)
    Rsh_Fir_reg_i94_ = Rsh_Fir_reg_i90_;
    Rsh_Fir_reg_figs26_ = Rsh_Fir_reg_figs24_;
    goto L292_;
  }

L291_:;
  // dr54 = tryDispatchBuiltin.1("[", figs24)
  SEXP Rsh_Fir_array_args339[2];
  Rsh_Fir_array_args339[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args339[1] = Rsh_Fir_reg_figs24_;
  Rsh_Fir_reg_dr54_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args339);
  // dc27 = getTryDispatchBuiltinDispatched(dr54)
  SEXP Rsh_Fir_array_args340[1];
  Rsh_Fir_array_args340[0] = Rsh_Fir_reg_dr54_;
  Rsh_Fir_reg_dc27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args340, Rsh_Fir_param_types_empty());
  // if dc27 then L293() else L292(i90, dr54)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc27_)) {
  // L293()
    goto L293_;
  } else {
  // L292(i90, dr54)
    Rsh_Fir_reg_i94_ = Rsh_Fir_reg_i90_;
    Rsh_Fir_reg_figs26_ = Rsh_Fir_reg_dr54_;
    goto L292_;
  }

L292_:;
  // i97 = ld i
  Rsh_Fir_reg_i97_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L294() else D91()
  // L294()
  goto L294_;

L293_:;
  // dx141 = getTryDispatchBuiltinValue(dr54)
  SEXP Rsh_Fir_array_args341[1];
  Rsh_Fir_array_args341[0] = Rsh_Fir_reg_dr54_;
  Rsh_Fir_reg_dx141_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args341, Rsh_Fir_param_types_empty());
  // goto L63(i90, dx141)
  // L63(i90, dx141)
  Rsh_Fir_reg_i96_ = Rsh_Fir_reg_i90_;
  Rsh_Fir_reg_dx142_ = Rsh_Fir_reg_dx141_;
  goto L63_;

D91_:;
  // deopt 371 [i94, figs26, i97]
  SEXP Rsh_Fir_array_deopt_stack77[3];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_i94_;
  Rsh_Fir_array_deopt_stack77[1] = Rsh_Fir_reg_figs26_;
  Rsh_Fir_array_deopt_stack77[2] = Rsh_Fir_reg_i97_;
  Rsh_Fir_deopt(371, 3, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

L294_:;
  // i98 = force? i97
  Rsh_Fir_reg_i98_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i97_);
  // checkMissing(i98)
  SEXP Rsh_Fir_array_args342[1];
  Rsh_Fir_array_args342[0] = Rsh_Fir_reg_i98_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args342, Rsh_Fir_param_types_empty()));
  // max_screen4 = ld `max.screen`
  Rsh_Fir_reg_max_screen4_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L295() else D92()
  // L295()
  goto L295_;

D92_:;
  // deopt 372 [i94, figs26, i98, max_screen4]
  SEXP Rsh_Fir_array_deopt_stack78[4];
  Rsh_Fir_array_deopt_stack78[0] = Rsh_Fir_reg_i94_;
  Rsh_Fir_array_deopt_stack78[1] = Rsh_Fir_reg_figs26_;
  Rsh_Fir_array_deopt_stack78[2] = Rsh_Fir_reg_i98_;
  Rsh_Fir_array_deopt_stack78[3] = Rsh_Fir_reg_max_screen4_;
  Rsh_Fir_deopt(372, 4, Rsh_Fir_array_deopt_stack78, CCP, RHO);
  return R_NilValue;

L295_:;
  // max_screen5 = force? max_screen4
  Rsh_Fir_reg_max_screen5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_max_screen4_);
  // checkMissing(max_screen5)
  SEXP Rsh_Fir_array_args343[1];
  Rsh_Fir_array_args343[0] = Rsh_Fir_reg_max_screen5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args343, Rsh_Fir_param_types_empty()));
  // r173 = `-`(i98, max_screen5)
  SEXP Rsh_Fir_array_args344[2];
  Rsh_Fir_array_args344[0] = Rsh_Fir_reg_i98_;
  Rsh_Fir_array_args344[1] = Rsh_Fir_reg_max_screen5_;
  Rsh_Fir_reg_r173_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args344, Rsh_Fir_param_types_empty());
  // __15 = ldf `[` in base
  Rsh_Fir_reg___15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r174 = dyn __15(figs24, r173, <missing>)
  SEXP Rsh_Fir_array_args345[3];
  Rsh_Fir_array_args345[0] = Rsh_Fir_reg_figs24_;
  Rsh_Fir_array_args345[1] = Rsh_Fir_reg_r173_;
  Rsh_Fir_array_args345[2] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names77[3];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_array_arg_names77[1] = R_MissingArg;
  Rsh_Fir_array_arg_names77[2] = R_MissingArg;
  Rsh_Fir_reg_r174_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___15_, 3, Rsh_Fir_array_args345, Rsh_Fir_array_arg_names77, CCP, RHO);
  // goto L63(i94, r174)
  // L63(i94, r174)
  Rsh_Fir_reg_i96_ = Rsh_Fir_reg_i94_;
  Rsh_Fir_reg_dx142_ = Rsh_Fir_reg_r174_;
  goto L63_;

L296_:;
  // dr56 = tryDispatchBuiltin.1("[[", l31)
  SEXP Rsh_Fir_array_args346[2];
  Rsh_Fir_array_args346[0] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args346[1] = Rsh_Fir_reg_l31_;
  Rsh_Fir_reg_dr56_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args346);
  // dc28 = getTryDispatchBuiltinDispatched(dr56)
  SEXP Rsh_Fir_array_args347[1];
  Rsh_Fir_array_args347[0] = Rsh_Fir_reg_dr56_;
  Rsh_Fir_reg_dc28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args347, Rsh_Fir_param_types_empty());
  // if dc28 then L298() else L297(i96, dx142, l31, dx142, dr56)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc28_)) {
  // L298()
    goto L298_;
  } else {
  // L297(i96, dx142, l31, dx142, dr56)
    Rsh_Fir_reg_i100_ = Rsh_Fir_reg_i96_;
    Rsh_Fir_reg_dx145_ = Rsh_Fir_reg_dx142_;
    Rsh_Fir_reg_l34_ = Rsh_Fir_reg_l31_;
    Rsh_Fir_reg_dx146_ = Rsh_Fir_reg_dx142_;
    Rsh_Fir_reg_l35_ = Rsh_Fir_reg_dr56_;
    goto L297_;
  }

L297_:;
  // i103 = ld i
  Rsh_Fir_reg_i103_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L299() else D93()
  // L299()
  goto L299_;

L298_:;
  // dx149 = getTryDispatchBuiltinValue(dr56)
  SEXP Rsh_Fir_array_args348[1];
  Rsh_Fir_array_args348[0] = Rsh_Fir_reg_dr56_;
  Rsh_Fir_reg_dx149_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args348, Rsh_Fir_param_types_empty());
  // goto L64(i96, dx142, l31, dx142, dx149)
  // L64(i96, dx142, l31, dx142, dx149)
  Rsh_Fir_reg_i102_ = Rsh_Fir_reg_i96_;
  Rsh_Fir_reg_dx150_ = Rsh_Fir_reg_dx142_;
  Rsh_Fir_reg_l37_ = Rsh_Fir_reg_l31_;
  Rsh_Fir_reg_dx151_ = Rsh_Fir_reg_dx142_;
  Rsh_Fir_reg_dx152_ = Rsh_Fir_reg_dx149_;
  goto L64_;

D93_:;
  // deopt 380 [i100, dx145, l34, dx146, l35, i103]
  SEXP Rsh_Fir_array_deopt_stack79[6];
  Rsh_Fir_array_deopt_stack79[0] = Rsh_Fir_reg_i100_;
  Rsh_Fir_array_deopt_stack79[1] = Rsh_Fir_reg_dx145_;
  Rsh_Fir_array_deopt_stack79[2] = Rsh_Fir_reg_l34_;
  Rsh_Fir_array_deopt_stack79[3] = Rsh_Fir_reg_dx146_;
  Rsh_Fir_array_deopt_stack79[4] = Rsh_Fir_reg_l35_;
  Rsh_Fir_array_deopt_stack79[5] = Rsh_Fir_reg_i103_;
  Rsh_Fir_deopt(380, 6, Rsh_Fir_array_deopt_stack79, CCP, RHO);
  return R_NilValue;

L299_:;
  // i104 = force? i103
  Rsh_Fir_reg_i104_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i103_);
  // __16 = ldf `[[` in base
  Rsh_Fir_reg___16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 82), RHO);
  // r175 = dyn __16(l35, i104)
  SEXP Rsh_Fir_array_args349[2];
  Rsh_Fir_array_args349[0] = Rsh_Fir_reg_l35_;
  Rsh_Fir_array_args349[1] = Rsh_Fir_reg_i104_;
  SEXP Rsh_Fir_array_arg_names78[2];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_array_arg_names78[1] = R_MissingArg;
  Rsh_Fir_reg_r175_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___16_, 2, Rsh_Fir_array_args349, Rsh_Fir_array_arg_names78, CCP, RHO);
  // goto L64(i100, dx145, l34, dx146, r175)
  // L64(i100, dx145, l34, dx146, r175)
  Rsh_Fir_reg_i102_ = Rsh_Fir_reg_i100_;
  Rsh_Fir_reg_dx150_ = Rsh_Fir_reg_dx145_;
  Rsh_Fir_reg_l37_ = Rsh_Fir_reg_l34_;
  Rsh_Fir_reg_dx151_ = Rsh_Fir_reg_dx146_;
  Rsh_Fir_reg_dx152_ = Rsh_Fir_reg_r175_;
  goto L64_;

L300_:;
  // c72 = `is.object`(l41)
  SEXP Rsh_Fir_array_args350[1];
  Rsh_Fir_array_args350[0] = Rsh_Fir_reg_l41_;
  Rsh_Fir_reg_c72_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args350, Rsh_Fir_param_types_empty());
  // if c72 then L304() else L305(i108, dx159, l41)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c72_)) {
  // L304()
    goto L304_;
  } else {
  // L305(i108, dx159, l41)
    Rsh_Fir_reg_i110_ = Rsh_Fir_reg_i108_;
    Rsh_Fir_reg_dx162_ = Rsh_Fir_reg_dx159_;
    Rsh_Fir_reg_l43_ = Rsh_Fir_reg_l41_;
    goto L305_;
  }

L301_:;
  // dr58 = tryDispatchBuiltin.0("$<-", dx152, dx151)
  SEXP Rsh_Fir_array_args351[3];
  Rsh_Fir_array_args351[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args351[1] = Rsh_Fir_reg_dx152_;
  Rsh_Fir_array_args351[2] = Rsh_Fir_reg_dx151_;
  Rsh_Fir_reg_dr58_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args351);
  // dc29 = getTryDispatchBuiltinDispatched(dr58)
  SEXP Rsh_Fir_array_args352[1];
  Rsh_Fir_array_args352[0] = Rsh_Fir_reg_dr58_;
  Rsh_Fir_reg_dc29_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args352, Rsh_Fir_param_types_empty());
  // if dc29 then L303() else L302(i102, dx150, l37, dr58)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc29_)) {
  // L303()
    goto L303_;
  } else {
  // L302(i102, dx150, l37, dr58)
    Rsh_Fir_reg_i106_ = Rsh_Fir_reg_i102_;
    Rsh_Fir_reg_dx155_ = Rsh_Fir_reg_dx150_;
    Rsh_Fir_reg_l39_ = Rsh_Fir_reg_l37_;
    Rsh_Fir_reg_dx156_ = Rsh_Fir_reg_dr58_;
    goto L302_;
  }

L302_:;
  // r176 = `$<-`(dx156, <sym fig>, dx151)
  SEXP Rsh_Fir_array_args353[3];
  Rsh_Fir_array_args353[0] = Rsh_Fir_reg_dx156_;
  Rsh_Fir_array_args353[1] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args353[2] = Rsh_Fir_reg_dx151_;
  Rsh_Fir_reg_r176_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args353, Rsh_Fir_param_types_empty());
  // goto L300(i106, dx155, l39, r176)
  // L300(i106, dx155, l39, r176)
  Rsh_Fir_reg_i108_ = Rsh_Fir_reg_i106_;
  Rsh_Fir_reg_dx159_ = Rsh_Fir_reg_dx155_;
  Rsh_Fir_reg_l41_ = Rsh_Fir_reg_l39_;
  Rsh_Fir_reg_dx160_ = Rsh_Fir_reg_r176_;
  goto L300_;

L303_:;
  // dx158 = getTryDispatchBuiltinValue(dr58)
  SEXP Rsh_Fir_array_args354[1];
  Rsh_Fir_array_args354[0] = Rsh_Fir_reg_dr58_;
  Rsh_Fir_reg_dx158_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args354, Rsh_Fir_param_types_empty());
  // goto L300(i102, dx150, l37, dx158)
  // L300(i102, dx150, l37, dx158)
  Rsh_Fir_reg_i108_ = Rsh_Fir_reg_i102_;
  Rsh_Fir_reg_dx159_ = Rsh_Fir_reg_dx150_;
  Rsh_Fir_reg_l41_ = Rsh_Fir_reg_l37_;
  Rsh_Fir_reg_dx160_ = Rsh_Fir_reg_dx158_;
  goto L300_;

L304_:;
  // dr60 = tryDispatchBuiltin.0("[[<-", l41, dx160)
  SEXP Rsh_Fir_array_args355[3];
  Rsh_Fir_array_args355[0] = Rsh_const(CCP, 79);
  Rsh_Fir_array_args355[1] = Rsh_Fir_reg_l41_;
  Rsh_Fir_array_args355[2] = Rsh_Fir_reg_dx160_;
  Rsh_Fir_reg_dr60_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args355);
  // dc30 = getTryDispatchBuiltinDispatched(dr60)
  SEXP Rsh_Fir_array_args356[1];
  Rsh_Fir_array_args356[0] = Rsh_Fir_reg_dr60_;
  Rsh_Fir_reg_dc30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args356, Rsh_Fir_param_types_empty());
  // if dc30 then L306() else L305(i108, dx159, dr60)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc30_)) {
  // L306()
    goto L306_;
  } else {
  // L305(i108, dx159, dr60)
    Rsh_Fir_reg_i110_ = Rsh_Fir_reg_i108_;
    Rsh_Fir_reg_dx162_ = Rsh_Fir_reg_dx159_;
    Rsh_Fir_reg_l43_ = Rsh_Fir_reg_dr60_;
    goto L305_;
  }

L305_:;
  // i113 = ld i
  Rsh_Fir_reg_i113_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L307() else D94()
  // L307()
  goto L307_;

L306_:;
  // dx164 = getTryDispatchBuiltinValue(dr60)
  SEXP Rsh_Fir_array_args357[1];
  Rsh_Fir_array_args357[0] = Rsh_Fir_reg_dr60_;
  Rsh_Fir_reg_dx164_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args357, Rsh_Fir_param_types_empty());
  // goto L65(i108, dx164)
  // L65(i108, dx164)
  Rsh_Fir_reg_i112_ = Rsh_Fir_reg_i108_;
  Rsh_Fir_reg_dx166_ = Rsh_Fir_reg_dx164_;
  goto L65_;

D94_:;
  // deopt 385 [i110, dx162, l43, dx160, i113]
  SEXP Rsh_Fir_array_deopt_stack80[5];
  Rsh_Fir_array_deopt_stack80[0] = Rsh_Fir_reg_i110_;
  Rsh_Fir_array_deopt_stack80[1] = Rsh_Fir_reg_dx162_;
  Rsh_Fir_array_deopt_stack80[2] = Rsh_Fir_reg_l43_;
  Rsh_Fir_array_deopt_stack80[3] = Rsh_Fir_reg_dx160_;
  Rsh_Fir_array_deopt_stack80[4] = Rsh_Fir_reg_i113_;
  Rsh_Fir_deopt(385, 5, Rsh_Fir_array_deopt_stack80, CCP, RHO);
  return R_NilValue;

L307_:;
  // i114 = force? i113
  Rsh_Fir_reg_i114_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i113_);
  // ____3 = ldf `[[<-` in base
  Rsh_Fir_reg_____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 80), RHO);
  // r177 = dyn ____3(l43, dx160, i114)
  SEXP Rsh_Fir_array_args358[3];
  Rsh_Fir_array_args358[0] = Rsh_Fir_reg_l43_;
  Rsh_Fir_array_args358[1] = Rsh_Fir_reg_dx160_;
  Rsh_Fir_array_args358[2] = Rsh_Fir_reg_i114_;
  SEXP Rsh_Fir_array_arg_names79[3];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_array_arg_names79[1] = R_MissingArg;
  Rsh_Fir_array_arg_names79[2] = R_MissingArg;
  Rsh_Fir_reg_r177_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____3_, 3, Rsh_Fir_array_args358, Rsh_Fir_array_arg_names79, CCP, RHO);
  // goto L65(i110, r177)
  // L65(i110, r177)
  Rsh_Fir_reg_i112_ = Rsh_Fir_reg_i110_;
  Rsh_Fir_reg_dx166_ = Rsh_Fir_reg_r177_;
  goto L65_;

L308_:;
  // _valid_screens6 = ld `.valid.screens`
  Rsh_Fir_reg__valid_screens6_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L310() else D95()
  // L310()
  goto L310_;

L309_:;
  // r178 = dyn base21(<sym .valid.screens>, <sym new.screens>)
  SEXP Rsh_Fir_array_args359[2];
  Rsh_Fir_array_args359[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args359[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names80[2];
  Rsh_Fir_array_arg_names80[0] = R_MissingArg;
  Rsh_Fir_array_arg_names80[1] = R_MissingArg;
  Rsh_Fir_reg_r178_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 2, Rsh_Fir_array_args359, Rsh_Fir_array_arg_names80, CCP, RHO);
  // goto L67(r178)
  // L67(r178)
  Rsh_Fir_reg_r179_ = Rsh_Fir_reg_r178_;
  goto L67_;

D95_:;
  // deopt 394 [_valid_screens6]
  SEXP Rsh_Fir_array_deopt_stack81[1];
  Rsh_Fir_array_deopt_stack81[0] = Rsh_Fir_reg__valid_screens6_;
  Rsh_Fir_deopt(394, 1, Rsh_Fir_array_deopt_stack81, CCP, RHO);
  return R_NilValue;

L310_:;
  // _valid_screens7 = force? _valid_screens6
  Rsh_Fir_reg__valid_screens7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__valid_screens6_);
  // checkMissing(_valid_screens7)
  SEXP Rsh_Fir_array_args360[1];
  Rsh_Fir_array_args360[0] = Rsh_Fir_reg__valid_screens7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args360, Rsh_Fir_param_types_empty()));
  // new_screens6 = ld `new.screens`
  Rsh_Fir_reg_new_screens6_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L311() else D96()
  // L311()
  goto L311_;

D96_:;
  // deopt 396 [new_screens6]
  SEXP Rsh_Fir_array_deopt_stack82[1];
  Rsh_Fir_array_deopt_stack82[0] = Rsh_Fir_reg_new_screens6_;
  Rsh_Fir_deopt(396, 1, Rsh_Fir_array_deopt_stack82, CCP, RHO);
  return R_NilValue;

L311_:;
  // new_screens7 = force? new_screens6
  Rsh_Fir_reg_new_screens7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_screens6_);
  // checkMissing(new_screens7)
  SEXP Rsh_Fir_array_args361[1];
  Rsh_Fir_array_args361[0] = Rsh_Fir_reg_new_screens7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args361, Rsh_Fir_param_types_empty()));
  // c73 = ldf c in base
  Rsh_Fir_reg_c73_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r180 = dyn c73(_valid_screens7, new_screens7)
  SEXP Rsh_Fir_array_args362[2];
  Rsh_Fir_array_args362[0] = Rsh_Fir_reg__valid_screens7_;
  Rsh_Fir_array_args362[1] = Rsh_Fir_reg_new_screens7_;
  SEXP Rsh_Fir_array_arg_names81[2];
  Rsh_Fir_array_arg_names81[0] = R_MissingArg;
  Rsh_Fir_array_arg_names81[1] = R_MissingArg;
  Rsh_Fir_reg_r180_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c73_, 2, Rsh_Fir_array_args362, Rsh_Fir_array_arg_names81, CCP, RHO);
  // check L312() else D97()
  // L312()
  goto L312_;

D97_:;
  // deopt 399 [r180]
  SEXP Rsh_Fir_array_deopt_stack83[1];
  Rsh_Fir_array_deopt_stack83[0] = Rsh_Fir_reg_r180_;
  Rsh_Fir_deopt(399, 1, Rsh_Fir_array_deopt_stack83, CCP, RHO);
  return R_NilValue;

L312_:;
  // goto L67(r180)
  // L67(r180)
  Rsh_Fir_reg_r179_ = Rsh_Fir_reg_r180_;
  goto L67_;

D98_:;
  // deopt 401 [max_screen6]
  SEXP Rsh_Fir_array_deopt_stack84[1];
  Rsh_Fir_array_deopt_stack84[0] = Rsh_Fir_reg_max_screen6_;
  Rsh_Fir_deopt(401, 1, Rsh_Fir_array_deopt_stack84, CCP, RHO);
  return R_NilValue;

L313_:;
  // max_screen7 = force? max_screen6
  Rsh_Fir_reg_max_screen7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_max_screen6_);
  // checkMissing(max_screen7)
  SEXP Rsh_Fir_array_args363[1];
  Rsh_Fir_array_args363[0] = Rsh_Fir_reg_max_screen7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args363, Rsh_Fir_param_types_empty()));
  // r181 = `+`(max_screen7, 1.0)
  SEXP Rsh_Fir_array_args364[2];
  Rsh_Fir_array_args364[0] = Rsh_Fir_reg_max_screen7_;
  Rsh_Fir_array_args364[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r181_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args364, Rsh_Fir_param_types_empty());
  // st `cur.screen` = r181
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r181_, RHO);
  (void)(Rsh_Fir_reg_r181_);
  // goto L40()
  // L40()
  goto L40_;

D99_:;
  // deopt 407 []
  Rsh_Fir_deopt(407, 0, NULL, CCP, RHO);
  return R_NilValue;

L314_:;
  // p10 = prom<V +>{
  //   split_screens4 = ld `split.screens`;
  //   split_screens5 = force? split_screens4;
  //   checkMissing(split_screens5);
  //   return split_screens5;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3566772296_10, CCP, RHO);
  // r183 = dyn _SSassign1("sp.screens", p10)
  SEXP Rsh_Fir_array_args366[2];
  Rsh_Fir_array_args366[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args366[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names82[2];
  Rsh_Fir_array_arg_names82[0] = R_MissingArg;
  Rsh_Fir_array_arg_names82[1] = R_MissingArg;
  Rsh_Fir_reg_r183_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__SSassign1_, 2, Rsh_Fir_array_args366, Rsh_Fir_array_arg_names82, CCP, RHO);
  // check L315() else D100()
  // L315()
  goto L315_;

D100_:;
  // deopt 410 [r183]
  SEXP Rsh_Fir_array_deopt_stack85[1];
  Rsh_Fir_array_deopt_stack85[0] = Rsh_Fir_reg_r183_;
  Rsh_Fir_deopt(410, 1, Rsh_Fir_array_deopt_stack85, CCP, RHO);
  return R_NilValue;

L315_:;
  // _SSassign2 = ldf `.SSassign`
  Rsh_Fir_reg__SSassign2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L316() else D101()
  // L316()
  goto L316_;

D101_:;
  // deopt 412 []
  Rsh_Fir_deopt(412, 0, NULL, CCP, RHO);
  return R_NilValue;

L316_:;
  // p11 = prom<V +>{
  //   cur_screen = ld `cur.screen`;
  //   cur_screen1 = force? cur_screen;
  //   checkMissing(cur_screen1);
  //   return cur_screen1;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3566772296_11, CCP, RHO);
  // r185 = dyn _SSassign2("sp.cur.screen", p11)
  SEXP Rsh_Fir_array_args368[2];
  Rsh_Fir_array_args368[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args368[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names83[2];
  Rsh_Fir_array_arg_names83[0] = R_MissingArg;
  Rsh_Fir_array_arg_names83[1] = R_MissingArg;
  Rsh_Fir_reg_r185_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__SSassign2_, 2, Rsh_Fir_array_args368, Rsh_Fir_array_arg_names83, CCP, RHO);
  // check L317() else D102()
  // L317()
  goto L317_;

D102_:;
  // deopt 415 [r185]
  SEXP Rsh_Fir_array_deopt_stack86[1];
  Rsh_Fir_array_deopt_stack86[0] = Rsh_Fir_reg_r185_;
  Rsh_Fir_deopt(415, 1, Rsh_Fir_array_deopt_stack86, CCP, RHO);
  return R_NilValue;

L317_:;
  // _SSassign3 = ldf `.SSassign`
  Rsh_Fir_reg__SSassign3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L318() else D103()
  // L318()
  goto L318_;

D103_:;
  // deopt 417 []
  Rsh_Fir_deopt(417, 0, NULL, CCP, RHO);
  return R_NilValue;

L318_:;
  // p12 = prom<V +>{
  //   valid_screens = ld `valid.screens`;
  //   valid_screens1 = force? valid_screens;
  //   checkMissing(valid_screens1);
  //   return valid_screens1;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3566772296_12, CCP, RHO);
  // r187 = dyn _SSassign3("sp.valid.screens", p12)
  SEXP Rsh_Fir_array_args370[2];
  Rsh_Fir_array_args370[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args370[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names84[2];
  Rsh_Fir_array_arg_names84[0] = R_MissingArg;
  Rsh_Fir_array_arg_names84[1] = R_MissingArg;
  Rsh_Fir_reg_r187_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__SSassign3_, 2, Rsh_Fir_array_args370, Rsh_Fir_array_arg_names84, CCP, RHO);
  // check L319() else D104()
  // L319()
  goto L319_;

D104_:;
  // deopt 420 [r187]
  SEXP Rsh_Fir_array_deopt_stack87[1];
  Rsh_Fir_array_deopt_stack87[0] = Rsh_Fir_reg_r187_;
  Rsh_Fir_deopt(420, 1, Rsh_Fir_array_deopt_stack87, CCP, RHO);
  return R_NilValue;

L319_:;
  // first_split12 = ld `first.split`
  Rsh_Fir_reg_first_split12_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L320() else D105()
  // L320()
  goto L320_;

D105_:;
  // deopt 421 [first_split12]
  SEXP Rsh_Fir_array_deopt_stack88[1];
  Rsh_Fir_array_deopt_stack88[0] = Rsh_Fir_reg_first_split12_;
  Rsh_Fir_deopt(421, 1, Rsh_Fir_array_deopt_stack88, CCP, RHO);
  return R_NilValue;

L320_:;
  // first_split13 = force? first_split12
  Rsh_Fir_reg_first_split13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_first_split12_);
  // checkMissing(first_split13)
  SEXP Rsh_Fir_array_args371[1];
  Rsh_Fir_array_args371[0] = Rsh_Fir_reg_first_split13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args371, Rsh_Fir_param_types_empty()));
  // c74 = `as.logical`(first_split13)
  SEXP Rsh_Fir_array_args372[1];
  Rsh_Fir_array_args372[0] = Rsh_Fir_reg_first_split13_;
  Rsh_Fir_reg_c74_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args372, Rsh_Fir_param_types_empty());
  // if c74 then L321() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c74_)) {
  // L321()
    goto L321_;
  } else {
  // L68()
    goto L68_;
  }

L321_:;
  // sym22 = ldf `on.exit`
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 95), RHO);
  // base22 = ldf `on.exit` in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 95), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args373[2];
  Rsh_Fir_array_args373[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args373[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args373);
  // if guard22 then L322() else L323()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L322()
    goto L322_;
  } else {
  // L323()
    goto L323_;
  }

L322_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 95), RHO);
  // r190 = dyn on_exit(<lang close.screen(all.screens=TRUE)>)
  SEXP Rsh_Fir_array_args374[1];
  Rsh_Fir_array_args374[0] = Rsh_const(CCP, 96);
  SEXP Rsh_Fir_array_arg_names85[1];
  Rsh_Fir_array_arg_names85[0] = R_MissingArg;
  Rsh_Fir_reg_r190_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args374, Rsh_Fir_array_arg_names85, CCP, RHO);
  // goto L69(r190)
  // L69(r190)
  Rsh_Fir_reg_r189_ = Rsh_Fir_reg_r190_;
  goto L69_;

L323_:;
  // r188 = dyn base22(<lang close.screen(all.screens=TRUE)>)
  SEXP Rsh_Fir_array_args375[1];
  Rsh_Fir_array_args375[0] = Rsh_const(CCP, 96);
  SEXP Rsh_Fir_array_arg_names86[1];
  Rsh_Fir_array_arg_names86[0] = R_MissingArg;
  Rsh_Fir_reg_r188_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 1, Rsh_Fir_array_args375, Rsh_Fir_array_arg_names86, CCP, RHO);
  // goto L69(r188)
  // L69(r188)
  Rsh_Fir_reg_r189_ = Rsh_Fir_reg_r188_;
  goto L69_;

D106_:;
  // deopt 429 []
  Rsh_Fir_deopt(429, 0, NULL, CCP, RHO);
  return R_NilValue;

L325_:;
  // p13 = prom<V +>{
  //   split_screens6 = ld `split.screens`;
  //   split_screens7 = force? split_screens6;
  //   checkMissing(split_screens7);
  //   c75 = `is.object`(split_screens7);
  //   if c75 then L1() else L2(split_screens7);
  // L0(dx168):
  //   return dx168;
  // L1():
  //   dr62 = tryDispatchBuiltin.1("[[", split_screens7);
  //   dc31 = getTryDispatchBuiltinDispatched(dr62);
  //   if dc31 then L3() else L2(dr62);
  // L2(split_screens9):
  //   cur_screen2 = ld `cur.screen`;
  //   cur_screen3 = force? cur_screen2;
  //   __17 = ldf `[[` in base;
  //   r192 = dyn __17(split_screens9, cur_screen3);
  //   goto L0(r192);
  // L3():
  //   dx167 = getTryDispatchBuiltinValue(dr62);
  //   goto L0(dx167);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3566772296_13, CCP, RHO);
  // r194 = dyn par4(p13)
  SEXP Rsh_Fir_array_args382[1];
  Rsh_Fir_array_args382[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names88[1];
  Rsh_Fir_array_arg_names88[0] = R_MissingArg;
  Rsh_Fir_reg_r194_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par4_, 1, Rsh_Fir_array_args382, Rsh_Fir_array_arg_names88, CCP, RHO);
  // check L326() else D107()
  // L326()
  goto L326_;

D107_:;
  // deopt 431 [r194]
  SEXP Rsh_Fir_array_deopt_stack89[1];
  Rsh_Fir_array_deopt_stack89[0] = Rsh_Fir_reg_r194_;
  Rsh_Fir_deopt(431, 1, Rsh_Fir_array_deopt_stack89, CCP, RHO);
  return R_NilValue;

L326_:;
  // sym23 = ldf `on.exit`
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 95), RHO);
  // base23 = ldf `on.exit` in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 95), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args383[2];
  Rsh_Fir_array_args383[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args383[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args383);
  // if guard23 then L327() else L328()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L327()
    goto L327_;
  } else {
  // L328()
    goto L328_;
  }

L327_:;
  // on_exit1 = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 95), RHO);
  // r197 = dyn on_exit1()
  Rsh_Fir_reg_r197_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit1_, 0, NULL, NULL, CCP, RHO);
  // goto L71()
  // L71()
  goto L71_;

L328_:;
  // r195 = dyn base23()
  Rsh_Fir_reg_r195_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 0, NULL, NULL, CCP, RHO);
  // goto L71()
  // L71()
  goto L71_;

D108_:;
  // deopt 435 [new_screens8]
  SEXP Rsh_Fir_array_deopt_stack90[1];
  Rsh_Fir_array_deopt_stack90[0] = Rsh_Fir_reg_new_screens8_;
  Rsh_Fir_deopt(435, 1, Rsh_Fir_array_deopt_stack90, CCP, RHO);
  return R_NilValue;

L329_:;
  // new_screens9 = force? new_screens8
  Rsh_Fir_reg_new_screens9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new_screens8_);
  // checkMissing(new_screens9)
  SEXP Rsh_Fir_array_args384[1];
  Rsh_Fir_array_args384[0] = Rsh_Fir_reg_new_screens9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args384, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return new_screens9
  return Rsh_Fir_reg_new_screens9_;
}
SEXP Rsh_Fir_user_promise_inner3566772296_(SEXP CCP, SEXP RHO) {
  // screen3 = ld screen
  Rsh_Fir_reg_screen3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // screen4 = force? screen3
  Rsh_Fir_reg_screen4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_screen3_);
  // checkMissing(screen4)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_screen4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // return screen4
  return Rsh_Fir_reg_screen4_;
}
SEXP Rsh_Fir_user_promise_inner3566772296_1(SEXP CCP, SEXP RHO) {
  // _valid_screens2 = ld `.valid.screens`
  Rsh_Fir_reg__valid_screens2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // _valid_screens3 = force? _valid_screens2
  Rsh_Fir_reg__valid_screens3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__valid_screens2_);
  // checkMissing(_valid_screens3)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg__valid_screens3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // return _valid_screens3
  return Rsh_Fir_reg__valid_screens3_;
}
SEXP Rsh_Fir_user_promise_inner3566772296_2(SEXP CCP, SEXP RHO) {
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args102);
  // if guard6 then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L0_:;
  // return r47
  return Rsh_Fir_reg_r47_;

L1_:;
  // sym8 = ldf `rep.int`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base8 = ldf `rep.int` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args103);
  // if guard8 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L2_:;
  // nr2 = ld nr
  Rsh_Fir_reg_nr2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // nr3 = force? nr2
  Rsh_Fir_reg_nr3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nr2_);
  // checkMissing(nr3)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_nr3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r53 = dyn rep_int(dx5, nr3)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_nr3_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L1(r53)
  // L1(r53)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r53_;
  goto L1_;

L3_:;
  // sym9 = ldf `rep.int`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base9 = ldf `rep.int` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args106);
  // if guard9 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L4_:;
  // nr4 = ld nr
  Rsh_Fir_reg_nr4_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // nr5 = force? nr4
  Rsh_Fir_reg_nr5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nr4_);
  // checkMissing(nr5)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_nr5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // rep_int1 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r57 = dyn rep_int1(dx7, nr5)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_nr5_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int1_, 2, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L3(r57)
  // L3(r57)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r57_;
  goto L3_;

L5_:;
  // sym11 = ldf `rep.int`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base11 = ldf `rep.int` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args109);
  // if guard11 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L6_:;
  // sym10 = ldf `rep.int`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base10 = ldf `rep.int` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args110);
  // if guard10 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L7_:;
  // rep_int3 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r64 = dyn rep_int3(dx9, r62)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int3_, 2, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L5(r64)
  // L5(r64)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r64_;
  goto L5_;

L8_:;
  // c35 = ldf c in base
  Rsh_Fir_reg_c35_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r74 = dyn c35(r49, r55, r59, r66)
  SEXP Rsh_Fir_array_args112[4];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_args112[2] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_args112[3] = Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_array_arg_names26[4];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_array_arg_names26[3] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c35_, 4, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r74)
  // L0(r74)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r74_;
  goto L0_;

L9_:;
  // sym12 = ldf `rep.int`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base12 = ldf `rep.int` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args113);
  // if guard12 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L10_:;
  // rep_int5 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r73 = dyn rep_int5(dx11, r71)
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dx11_;
  Rsh_Fir_array_args114[1] = Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int5_, 2, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L8(r73)
  // L8(r73)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r73_;
  goto L8_;

L11_:;
  // sym7 = ldf `rep.int`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base7 = ldf `rep.int` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args115);
  // if guard7 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L12_:;
  // r46 = dyn base6(<lang rep.int(`[`(x, `-`(`(`(`+`(nc, 1.0)))), nr)>, <lang rep.int(`[`(x, `-`(1)), nr)>, <lang rep.int(`[`(y, `-`(1)), rep.int(nc, nr))>, <lang rep.int(`[`(y, `-`(`(`(`+`(nr, 1.0)))), rep.int(nc, nr))>)
  SEXP Rsh_Fir_array_args116[4];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args116[1] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args116[2] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args116[3] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names28[4];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_array_arg_names28[3] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 4, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0(r46)
  // L0(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L0_;

L13_:;
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(x1)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // if c31 then L15() else L16(x1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L15()
    goto L15_;
  } else {
  // L16(x1)
    Rsh_Fir_reg_x3_ = Rsh_Fir_reg_x1_;
    goto L16_;
  }

L14_:;
  // r48 = dyn base7(<lang `[`(x, `-`(`(`(`+`(nc, 1.0))))>, <sym nr>)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args119[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L1(r48)
  // L1(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L1_;

L15_:;
  // dr4 = tryDispatchBuiltin.1("[", x1)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_x1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args120);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if dc2 then L17() else L16(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L17()
    goto L17_;
  } else {
  // L16(dr4)
    Rsh_Fir_reg_x3_ = Rsh_Fir_reg_dr4_;
    goto L16_;
  }

L16_:;
  // nc2 = ld nc
  Rsh_Fir_reg_nc2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // nc3 = force? nc2
  Rsh_Fir_reg_nc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc2_);
  // checkMissing(nc3)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_nc3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // r50 = `+`(nc3, 1.0)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_nc3_;
  Rsh_Fir_array_args123[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // r51 = `-`(<missing>, r50)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r52 = dyn __2(x3, r51)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args125, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L2(r52)
  // L2(r52)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r52_;
  goto L2_;

L17_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // goto L2(dx4)
  // L2(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L2_;

L18_:;
  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // c32 = `is.object`(x5)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // if c32 then L20() else L21(x5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L20()
    goto L20_;
  } else {
  // L21(x5)
    Rsh_Fir_reg_x7_ = Rsh_Fir_reg_x5_;
    goto L21_;
  }

L19_:;
  // r54 = dyn base8(<lang `[`(x, `-`(1))>, <sym nr>)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args129[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L3(r54)
  // L3(r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L3_;

L20_:;
  // dr6 = tryDispatchBuiltin.1("[", x5)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_x5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args130);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // if dc3 then L22() else L21(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L22()
    goto L22_;
  } else {
  // L21(dr6)
    Rsh_Fir_reg_x7_ = Rsh_Fir_reg_dr6_;
    goto L21_;
  }

L21_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r56 = dyn __3(x7, -1)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_array_args132[1] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L4(r56)
  // L4(r56)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r56_;
  goto L4_;

L22_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // goto L4(dx6)
  // L4(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L4_;

L23_:;
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty()));
  // c33 = `is.object`(y1)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // if c33 then L25() else L26(y1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L25()
    goto L25_;
  } else {
  // L26(y1)
    Rsh_Fir_reg_y3_ = Rsh_Fir_reg_y1_;
    goto L26_;
  }

L24_:;
  // r58 = dyn base9(<lang `[`(y, `-`(1))>, <lang rep.int(nc, nr)>)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args136[1] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args136, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L5(r58)
  // L5(r58)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r58_;
  goto L5_;

L25_:;
  // dr8 = tryDispatchBuiltin.1("[", y1)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args137);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // if dc4 then L27() else L26(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L27()
    goto L27_;
  } else {
  // L26(dr8)
    Rsh_Fir_reg_y3_ = Rsh_Fir_reg_dr8_;
    goto L26_;
  }

L26_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r60 = dyn __4(y3, -1)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_y3_;
  Rsh_Fir_array_args139[1] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L6(r60)
  // L6(r60)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r60_;
  goto L6_;

L27_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // goto L6(dx8)
  // L6(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L6_;

L28_:;
  // nc4 = ld nc
  Rsh_Fir_reg_nc4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // nc5 = force? nc4
  Rsh_Fir_reg_nc5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc4_);
  // checkMissing(nc5)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_nc5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // nr6 = ld nr
  Rsh_Fir_reg_nr6_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // nr7 = force? nr6
  Rsh_Fir_reg_nr7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nr6_);
  // checkMissing(nr7)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_nr7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // rep_int2 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r63 = dyn rep_int2(nc5, nr7)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_nc5_;
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_nr7_;
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int2_, 2, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L7(r63)
  // L7(r63)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r63_;
  goto L7_;

L29_:;
  // r61 = dyn base10(<sym nc>, <sym nr>)
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args144[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L7(r61)
  // L7(r61)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r61_;
  goto L7_;

L30_:;
  // y4 = ld y
  Rsh_Fir_reg_y4_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // y5 = force? y4
  Rsh_Fir_reg_y5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y4_);
  // checkMissing(y5)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_y5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty()));
  // c34 = `is.object`(y5)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_y5_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // if c34 then L32() else L33(y5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L32()
    goto L32_;
  } else {
  // L33(y5)
    Rsh_Fir_reg_y7_ = Rsh_Fir_reg_y5_;
    goto L33_;
  }

L31_:;
  // r65 = dyn base11(<lang `[`(y, `-`(`(`(`+`(nr, 1.0))))>, <lang rep.int(nc, nr)>)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args147[1] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L8(r65)
  // L8(r65)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r65_;
  goto L8_;

L32_:;
  // dr10 = tryDispatchBuiltin.1("[", y5)
  SEXP Rsh_Fir_array_args148[2];
  Rsh_Fir_array_args148[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args148[1] = Rsh_Fir_reg_y5_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args148);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty());
  // if dc5 then L34() else L33(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L34()
    goto L34_;
  } else {
  // L33(dr10)
    Rsh_Fir_reg_y7_ = Rsh_Fir_reg_dr10_;
    goto L33_;
  }

L33_:;
  // nr8 = ld nr
  Rsh_Fir_reg_nr8_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // nr9 = force? nr8
  Rsh_Fir_reg_nr9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nr8_);
  // checkMissing(nr9)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_nr9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // r67 = `+`(nr9, 1.0)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_nr9_;
  Rsh_Fir_array_args151[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty());
  // r68 = `-`(<missing>, r67)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty());
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r69 = dyn __5(y7, r68)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_y7_;
  Rsh_Fir_array_args153[1] = Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L9(r69)
  // L9(r69)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r69_;
  goto L9_;

L34_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // goto L9(dx10)
  // L9(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L9_;

L35_:;
  // nc6 = ld nc
  Rsh_Fir_reg_nc6_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // nc7 = force? nc6
  Rsh_Fir_reg_nc7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc6_);
  // checkMissing(nc7)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_nc7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty()));
  // nr10 = ld nr
  Rsh_Fir_reg_nr10_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // nr11 = force? nr10
  Rsh_Fir_reg_nr11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nr10_);
  // checkMissing(nr11)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_nr11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // rep_int4 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r72 = dyn rep_int4(nc7, nr11)
  SEXP Rsh_Fir_array_args157[2];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_nc7_;
  Rsh_Fir_array_args157[1] = Rsh_Fir_reg_nr11_;
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int4_, 2, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L10(r72)
  // L10(r72)
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r72_;
  goto L10_;

L36_:;
  // r70 = dyn base12(<sym nc>, <sym nr>)
  SEXP Rsh_Fir_array_args158[2];
  Rsh_Fir_array_args158[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args158[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 2, Rsh_Fir_array_args158, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L10(r70)
  // L10(r70)
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r70_;
  goto L10_;
}
SEXP Rsh_Fir_user_promise_inner3566772296_3(SEXP CCP, SEXP RHO) {
  // figs13 = ld figs
  Rsh_Fir_reg_figs13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // figs14 = force? figs13
  Rsh_Fir_reg_figs14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_figs13_);
  // checkMissing(figs14)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_figs14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty()));
  // return figs14
  return Rsh_Fir_reg_figs14_;
}
SEXP Rsh_Fir_user_promise_inner3566772296_4(SEXP CCP, SEXP RHO) {
  // _SSenv = ld `.SSenv`
  Rsh_Fir_reg__SSenv = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // _SSenv1 = force? _SSenv
  Rsh_Fir_reg__SSenv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__SSenv);
  // checkMissing(_SSenv1)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg__SSenv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty()));
  // c39 = `is.object`(_SSenv1)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg__SSenv1_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty());
  // if c39 then L1() else L2(_SSenv1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L1()
    goto L1_;
  } else {
  // L2(_SSenv1)
    Rsh_Fir_reg__SSenv3_ = Rsh_Fir_reg__SSenv1_;
    goto L2_;
  }

L0_:;
  // return dx13
  return Rsh_Fir_reg_dx13_;

L1_:;
  // dr12 = tryDispatchBuiltin.1("$", _SSenv1)
  SEXP Rsh_Fir_array_args172[2];
  Rsh_Fir_array_args172[0] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args172[1] = Rsh_Fir_reg__SSenv1_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args172);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // if dc6 then L3() else L2(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr12)
    Rsh_Fir_reg__SSenv3_ = Rsh_Fir_reg_dr12_;
    goto L2_;
  }

L2_:;
  // r85 = `$`(_SSenv3, <sym par.list>)
  SEXP Rsh_Fir_array_args174[2];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg__SSenv3_;
  Rsh_Fir_array_args174[1] = Rsh_const(CCP, 68);
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty());
  // goto L0(r85)
  // L0(r85)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r85_;
  goto L0_;

L3_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty());
  // goto L0(dx12)
  // L0(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3566772296_5(SEXP CCP, SEXP RHO) {
  // sym13 = ldf `rep.int`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base13 = ldf `rep.int` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args182);
  // if guard13 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r94
  return Rsh_Fir_reg_r94_;

L1_:;
  // rep_int6 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r95 = dyn rep_int6(0.0, 4.0)
  SEXP Rsh_Fir_array_args183[2];
  Rsh_Fir_array_args183[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args183[1] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int6_, 2, Rsh_Fir_array_args183, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L0(r95)
  // L0(r95)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r95_;
  goto L0_;

L2_:;
  // r93 = dyn base13(0.0, 4.0)
  SEXP Rsh_Fir_array_args184[2];
  Rsh_Fir_array_args184[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args184[1] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names46[2];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 2, Rsh_Fir_array_args184, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L0(r93)
  // L0(r93)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r93_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3566772296_6(SEXP CCP, SEXP RHO) {
  // split_saved_pars = ld `split.saved.pars`
  Rsh_Fir_reg_split_saved_pars = Rsh_Fir_load(Rsh_const(CCP, 69), RHO);
  // split_saved_pars1 = force? split_saved_pars
  Rsh_Fir_reg_split_saved_pars1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split_saved_pars);
  // checkMissing(split_saved_pars1)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_split_saved_pars1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty()));
  // return split_saved_pars1
  return Rsh_Fir_reg_split_saved_pars1_;
}
SEXP Rsh_Fir_user_promise_inner3566772296_7(SEXP CCP, SEXP RHO) {
  // _SSenv4 = ld `.SSenv`
  Rsh_Fir_reg__SSenv4_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // _SSenv5 = force? _SSenv4
  Rsh_Fir_reg__SSenv5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__SSenv4_);
  // checkMissing(_SSenv5)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg__SSenv5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args207, Rsh_Fir_param_types_empty()));
  // c44 = `is.object`(_SSenv5)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg__SSenv5_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty());
  // if c44 then L1() else L2(_SSenv5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c44_)) {
  // L1()
    goto L1_;
  } else {
  // L2(_SSenv5)
    Rsh_Fir_reg__SSenv7_ = Rsh_Fir_reg__SSenv5_;
    goto L2_;
  }

L0_:;
  // return dx25
  return Rsh_Fir_reg_dx25_;

L1_:;
  // dr20 = tryDispatchBuiltin.1("$", _SSenv5)
  SEXP Rsh_Fir_array_args209[2];
  Rsh_Fir_array_args209[0] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args209[1] = Rsh_Fir_reg__SSenv5_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args209);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args210, Rsh_Fir_param_types_empty());
  // if dc10 then L3() else L2(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr20)
    Rsh_Fir_reg__SSenv7_ = Rsh_Fir_reg_dr20_;
    goto L2_;
  }

L2_:;
  // r108 = `$`(_SSenv7, <sym par.list>)
  SEXP Rsh_Fir_array_args211[2];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg__SSenv7_;
  Rsh_Fir_array_args211[1] = Rsh_const(CCP, 68);
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty());
  // goto L0(r108)
  // L0(r108)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r108_;
  goto L0_;

L3_:;
  // dx24 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args212, Rsh_Fir_param_types_empty());
  // goto L0(dx24)
  // L0(dx24)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3566772296_8(SEXP CCP, SEXP RHO) {
  // screen5 = ld screen
  Rsh_Fir_reg_screen5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // screen6 = force? screen5
  Rsh_Fir_reg_screen6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_screen5_);
  // checkMissing(screen6)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_screen6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args241, Rsh_Fir_param_types_empty()));
  // return screen6
  return Rsh_Fir_reg_screen6_;
}
SEXP Rsh_Fir_user_promise_inner3566772296_9(SEXP CCP, SEXP RHO) {
  // _SSenv8 = ld `.SSenv`
  Rsh_Fir_reg__SSenv8_ = Rsh_Fir_load(Rsh_const(CCP, 66), RHO);
  // _SSenv9 = force? _SSenv8
  Rsh_Fir_reg__SSenv9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__SSenv8_);
  // checkMissing(_SSenv9)
  SEXP Rsh_Fir_array_args325[1];
  Rsh_Fir_array_args325[0] = Rsh_Fir_reg__SSenv9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args325, Rsh_Fir_param_types_empty()));
  // c67 = `is.object`(_SSenv9)
  SEXP Rsh_Fir_array_args326[1];
  Rsh_Fir_array_args326[0] = Rsh_Fir_reg__SSenv9_;
  Rsh_Fir_reg_c67_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args326, Rsh_Fir_param_types_empty());
  // if c67 then L1() else L2(_SSenv9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c67_)) {
  // L1()
    goto L1_;
  } else {
  // L2(_SSenv9)
    Rsh_Fir_reg__SSenv11_ = Rsh_Fir_reg__SSenv9_;
    goto L2_;
  }

L0_:;
  // return dx138
  return Rsh_Fir_reg_dx138_;

L1_:;
  // dr50 = tryDispatchBuiltin.1("$", _SSenv9)
  SEXP Rsh_Fir_array_args327[2];
  Rsh_Fir_array_args327[0] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args327[1] = Rsh_Fir_reg__SSenv9_;
  Rsh_Fir_reg_dr50_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args327);
  // dc25 = getTryDispatchBuiltinDispatched(dr50)
  SEXP Rsh_Fir_array_args328[1];
  Rsh_Fir_array_args328[0] = Rsh_Fir_reg_dr50_;
  Rsh_Fir_reg_dc25_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args328, Rsh_Fir_param_types_empty());
  // if dc25 then L3() else L2(dr50)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc25_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr50)
    Rsh_Fir_reg__SSenv11_ = Rsh_Fir_reg_dr50_;
    goto L2_;
  }

L2_:;
  // r165 = `$`(_SSenv11, <sym par.list>)
  SEXP Rsh_Fir_array_args329[2];
  Rsh_Fir_array_args329[0] = Rsh_Fir_reg__SSenv11_;
  Rsh_Fir_array_args329[1] = Rsh_const(CCP, 68);
  Rsh_Fir_reg_r165_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args329, Rsh_Fir_param_types_empty());
  // goto L0(r165)
  // L0(r165)
  Rsh_Fir_reg_dx138_ = Rsh_Fir_reg_r165_;
  goto L0_;

L3_:;
  // dx137 = getTryDispatchBuiltinValue(dr50)
  SEXP Rsh_Fir_array_args330[1];
  Rsh_Fir_array_args330[0] = Rsh_Fir_reg_dr50_;
  Rsh_Fir_reg_dx137_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args330, Rsh_Fir_param_types_empty());
  // goto L0(dx137)
  // L0(dx137)
  Rsh_Fir_reg_dx138_ = Rsh_Fir_reg_dx137_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3566772296_10(SEXP CCP, SEXP RHO) {
  // split_screens4 = ld `split.screens`
  Rsh_Fir_reg_split_screens4_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // split_screens5 = force? split_screens4
  Rsh_Fir_reg_split_screens5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split_screens4_);
  // checkMissing(split_screens5)
  SEXP Rsh_Fir_array_args365[1];
  Rsh_Fir_array_args365[0] = Rsh_Fir_reg_split_screens5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args365, Rsh_Fir_param_types_empty()));
  // return split_screens5
  return Rsh_Fir_reg_split_screens5_;
}
SEXP Rsh_Fir_user_promise_inner3566772296_11(SEXP CCP, SEXP RHO) {
  // cur_screen = ld `cur.screen`
  Rsh_Fir_reg_cur_screen = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // cur_screen1 = force? cur_screen
  Rsh_Fir_reg_cur_screen1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cur_screen);
  // checkMissing(cur_screen1)
  SEXP Rsh_Fir_array_args367[1];
  Rsh_Fir_array_args367[0] = Rsh_Fir_reg_cur_screen1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args367, Rsh_Fir_param_types_empty()));
  // return cur_screen1
  return Rsh_Fir_reg_cur_screen1_;
}
SEXP Rsh_Fir_user_promise_inner3566772296_12(SEXP CCP, SEXP RHO) {
  // valid_screens = ld `valid.screens`
  Rsh_Fir_reg_valid_screens = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // valid_screens1 = force? valid_screens
  Rsh_Fir_reg_valid_screens1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_valid_screens);
  // checkMissing(valid_screens1)
  SEXP Rsh_Fir_array_args369[1];
  Rsh_Fir_array_args369[0] = Rsh_Fir_reg_valid_screens1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args369, Rsh_Fir_param_types_empty()));
  // return valid_screens1
  return Rsh_Fir_reg_valid_screens1_;
}
SEXP Rsh_Fir_user_promise_inner3566772296_13(SEXP CCP, SEXP RHO) {
  // split_screens6 = ld `split.screens`
  Rsh_Fir_reg_split_screens6_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // split_screens7 = force? split_screens6
  Rsh_Fir_reg_split_screens7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_split_screens6_);
  // checkMissing(split_screens7)
  SEXP Rsh_Fir_array_args376[1];
  Rsh_Fir_array_args376[0] = Rsh_Fir_reg_split_screens7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args376, Rsh_Fir_param_types_empty()));
  // c75 = `is.object`(split_screens7)
  SEXP Rsh_Fir_array_args377[1];
  Rsh_Fir_array_args377[0] = Rsh_Fir_reg_split_screens7_;
  Rsh_Fir_reg_c75_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args377, Rsh_Fir_param_types_empty());
  // if c75 then L1() else L2(split_screens7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c75_)) {
  // L1()
    goto L1_;
  } else {
  // L2(split_screens7)
    Rsh_Fir_reg_split_screens9_ = Rsh_Fir_reg_split_screens7_;
    goto L2_;
  }

L0_:;
  // return dx168
  return Rsh_Fir_reg_dx168_;

L1_:;
  // dr62 = tryDispatchBuiltin.1("[[", split_screens7)
  SEXP Rsh_Fir_array_args378[2];
  Rsh_Fir_array_args378[0] = Rsh_const(CCP, 81);
  Rsh_Fir_array_args378[1] = Rsh_Fir_reg_split_screens7_;
  Rsh_Fir_reg_dr62_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args378);
  // dc31 = getTryDispatchBuiltinDispatched(dr62)
  SEXP Rsh_Fir_array_args379[1];
  Rsh_Fir_array_args379[0] = Rsh_Fir_reg_dr62_;
  Rsh_Fir_reg_dc31_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args379, Rsh_Fir_param_types_empty());
  // if dc31 then L3() else L2(dr62)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc31_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr62)
    Rsh_Fir_reg_split_screens9_ = Rsh_Fir_reg_dr62_;
    goto L2_;
  }

L2_:;
  // cur_screen2 = ld `cur.screen`
  Rsh_Fir_reg_cur_screen2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // cur_screen3 = force? cur_screen2
  Rsh_Fir_reg_cur_screen3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cur_screen2_);
  // __17 = ldf `[[` in base
  Rsh_Fir_reg___17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 82), RHO);
  // r192 = dyn __17(split_screens9, cur_screen3)
  SEXP Rsh_Fir_array_args380[2];
  Rsh_Fir_array_args380[0] = Rsh_Fir_reg_split_screens9_;
  Rsh_Fir_array_args380[1] = Rsh_Fir_reg_cur_screen3_;
  SEXP Rsh_Fir_array_arg_names87[2];
  Rsh_Fir_array_arg_names87[0] = R_MissingArg;
  Rsh_Fir_array_arg_names87[1] = R_MissingArg;
  Rsh_Fir_reg_r192_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___17_, 2, Rsh_Fir_array_args380, Rsh_Fir_array_arg_names87, CCP, RHO);
  // goto L0(r192)
  // L0(r192)
  Rsh_Fir_reg_dx168_ = Rsh_Fir_reg_r192_;
  goto L0_;

L3_:;
  // dx167 = getTryDispatchBuiltinValue(dr62)
  SEXP Rsh_Fir_array_args381[1];
  Rsh_Fir_array_args381[0] = Rsh_Fir_reg_dr62_;
  Rsh_Fir_reg_dx167_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args381, Rsh_Fir_param_types_empty());
  // goto L0(dx167)
  // L0(dx167)
  Rsh_Fir_reg_dx168_ = Rsh_Fir_reg_dx167_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
