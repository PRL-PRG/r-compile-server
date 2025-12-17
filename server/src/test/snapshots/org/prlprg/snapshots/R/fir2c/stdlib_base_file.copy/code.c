#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3521078177_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3521078177_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3521078177_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3521078177_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3521078177_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3521078177_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3521078177_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3521078177_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3521078177_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3521078177_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3521078177_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3521078177_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3521078177_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3521078177_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3521078177_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3521078177_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3521078177_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3521078177_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3521078177_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3521078177_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3521078177_18(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3521078177_19(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3521078177_20(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3521078177_21(SEXP CCP, SEXP RHO);
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
  // r = clos inner3521078177
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3521078177_, RHO, CCP);
  // st `file.copy` = r
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
SEXP Rsh_Fir_user_function_inner3521078177_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3521078177 dynamic dispatch ([from, to, overwrite, recursive, `copy.mode`, `copy.date`])

  return Rsh_Fir_user_version_inner3521078177_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3521078177_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3521078177 version 0 (*, *, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner3521078177/0: expected 6, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_from;  // from
  SEXP Rsh_Fir_reg_to;  // to
  SEXP Rsh_Fir_reg_overwrite;  // overwrite
  SEXP Rsh_Fir_reg_recursive;  // recursive
  SEXP Rsh_Fir_reg_copy_mode;  // copy_mode
  SEXP Rsh_Fir_reg_copy_date;  // copy_date
  SEXP Rsh_Fir_reg_overwrite_isMissing;  // overwrite_isMissing
  SEXP Rsh_Fir_reg_overwrite_orDefault;  // overwrite_orDefault
  SEXP Rsh_Fir_reg_recursive1_;  // recursive1
  SEXP Rsh_Fir_reg_recursive2_;  // recursive2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_recursive_isMissing;  // recursive_isMissing
  SEXP Rsh_Fir_reg_recursive_orDefault;  // recursive_orDefault
  SEXP Rsh_Fir_reg_copy_mode_isMissing;  // copy_mode_isMissing
  SEXP Rsh_Fir_reg_copy_mode_orDefault;  // copy_mode_orDefault
  SEXP Rsh_Fir_reg_copy_date_isMissing;  // copy_date_isMissing
  SEXP Rsh_Fir_reg_copy_date_orDefault;  // copy_date_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_from1_;  // from1
  SEXP Rsh_Fir_reg_from2_;  // from2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_logical;  // logical
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_to1_;  // to1
  SEXP Rsh_Fir_reg_to2_;  // to2
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_nt;  // nt
  SEXP Rsh_Fir_reg_nt1_;  // nt1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_dir_exists;  // dir_exists
  SEXP Rsh_Fir_reg_to3_;  // to3
  SEXP Rsh_Fir_reg_to4_;  // to4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_recursive3_;  // recursive3
  SEXP Rsh_Fir_reg_recursive4_;  // recursive4
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_to5_;  // to5
  SEXP Rsh_Fir_reg_to6_;  // to6
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_from3_;  // from3
  SEXP Rsh_Fir_reg_from4_;  // from4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg__Platform;  // _Platform
  SEXP Rsh_Fir_reg__Platform1_;  // _Platform1
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg__Platform3_;  // _Platform3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_gsub;  // gsub
  SEXP Rsh_Fir_reg_from5_;  // from5
  SEXP Rsh_Fir_reg_from6_;  // from6
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_gsub1_;  // gsub1
  SEXP Rsh_Fir_reg_to7_;  // to7
  SEXP Rsh_Fir_reg_to8_;  // to8
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_from7_;  // from7
  SEXP Rsh_Fir_reg_from8_;  // from8
  SEXP Rsh_Fir_reg_to9_;  // to9
  SEXP Rsh_Fir_reg_to10_;  // to10
  SEXP Rsh_Fir_reg_overwrite1_;  // overwrite1
  SEXP Rsh_Fir_reg_overwrite2_;  // overwrite2
  SEXP Rsh_Fir_reg_recursive5_;  // recursive5
  SEXP Rsh_Fir_reg_recursive6_;  // recursive6
  SEXP Rsh_Fir_reg_copy_mode1_;  // copy_mode1
  SEXP Rsh_Fir_reg_copy_mode2_;  // copy_mode2
  SEXP Rsh_Fir_reg_copy_date1_;  // copy_date1
  SEXP Rsh_Fir_reg_copy_date2_;  // copy_date2
  SEXP Rsh_Fir_reg_file_copy;  // file_copy
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_nf;  // nf
  SEXP Rsh_Fir_reg_nf1_;  // nf1
  SEXP Rsh_Fir_reg_nt2_;  // nt2
  SEXP Rsh_Fir_reg_nt3_;  // nt3
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_recursive7_;  // recursive7
  SEXP Rsh_Fir_reg_recursive8_;  // recursive8
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_nt4_;  // nt4
  SEXP Rsh_Fir_reg_nt5_;  // nt5
  SEXP Rsh_Fir_reg_nf2_;  // nf2
  SEXP Rsh_Fir_reg_nf3_;  // nf3
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_from9_;  // from9
  SEXP Rsh_Fir_reg_from10_;  // from10
  SEXP Rsh_Fir_reg_nt6_;  // nt6
  SEXP Rsh_Fir_reg_nt7_;  // nt7
  SEXP Rsh_Fir_reg_rep_len;  // rep_len
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_file_exists;  // file_exists
  SEXP Rsh_Fir_reg_from11_;  // from11
  SEXP Rsh_Fir_reg_from12_;  // from12
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_overwrite3_;  // overwrite3
  SEXP Rsh_Fir_reg_overwrite4_;  // overwrite4
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_file_exists1_;  // file_exists1
  SEXP Rsh_Fir_reg_to11_;  // to11
  SEXP Rsh_Fir_reg_to12_;  // to12
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_dir_exists1_;  // dir_exists1
  SEXP Rsh_Fir_reg_from13_;  // from13
  SEXP Rsh_Fir_reg_from14_;  // from14
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_from16_;  // from16
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_okay;  // okay
  SEXP Rsh_Fir_reg_okay1_;  // okay1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_file_exists2_;  // file_exists2
  SEXP Rsh_Fir_reg_to13_;  // to13
  SEXP Rsh_Fir_reg_to14_;  // to14
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_to16_;  // to16
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_okay2_;  // okay2
  SEXP Rsh_Fir_reg_okay3_;  // okay3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_dir_exists2_;  // dir_exists2
  SEXP Rsh_Fir_reg_to17_;  // to17
  SEXP Rsh_Fir_reg_to18_;  // to18
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_to20_;  // to20
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_okay4_;  // okay4
  SEXP Rsh_Fir_reg_okay5_;  // okay5
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_dirtofile;  // dirtofile
  SEXP Rsh_Fir_reg_dirtofile1_;  // dirtofile1
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_warning1_;  // warning1
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_dirtofile2_;  // dirtofile2
  SEXP Rsh_Fir_reg_dirtofile3_;  // dirtofile3
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_okay6_;  // okay6
  SEXP Rsh_Fir_reg_okay7_;  // okay7
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_dir_exists3_;  // dir_exists3
  SEXP Rsh_Fir_reg_from17_;  // from17
  SEXP Rsh_Fir_reg_from18_;  // from18
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_from20_;  // from20
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_okay8_;  // okay8
  SEXP Rsh_Fir_reg_okay9_;  // okay9
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_fromdir;  // fromdir
  SEXP Rsh_Fir_reg_fromdir1_;  // fromdir1
  SEXP Rsh_Fir_reg_any1_;  // any1
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_warning2_;  // warning2
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_fromdir2_;  // fromdir2
  SEXP Rsh_Fir_reg_fromdir3_;  // fromdir3
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_okay10_;  // okay10
  SEXP Rsh_Fir_reg_okay11_;  // okay11
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg__in_1_;  // _in_1
  SEXP Rsh_Fir_reg_from21_;  // from21
  SEXP Rsh_Fir_reg_from22_;  // from22
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_from24_;  // from24
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_okay12_;  // okay12
  SEXP Rsh_Fir_reg_okay13_;  // okay13
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_to21_;  // to21
  SEXP Rsh_Fir_reg_to22_;  // to22
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_to24_;  // to24
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_okay14_;  // okay14
  SEXP Rsh_Fir_reg_okay15_;  // okay15
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_any2_;  // any2
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_stop3_;  // stop3
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_okay16_;  // okay16
  SEXP Rsh_Fir_reg_okay17_;  // okay17
  SEXP Rsh_Fir_reg_any3_;  // any3
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_file_create;  // file_create
  SEXP Rsh_Fir_reg_to25_;  // to25
  SEXP Rsh_Fir_reg_to26_;  // to26
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_to28_;  // to28
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_okay18_;  // okay18
  SEXP Rsh_Fir_reg_okay19_;  // okay19
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_okay20_;  // okay20
  SEXP Rsh_Fir_reg_okay21_;  // okay21
  SEXP Rsh_Fir_reg____3_;  // ___3
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r110_;  // r110
  SEXP Rsh_Fir_reg_r111_;  // r111
  SEXP Rsh_Fir_reg_okay22_;  // okay22
  SEXP Rsh_Fir_reg_okay23_;  // okay23
  SEXP Rsh_Fir_reg_any4_;  // any4
  SEXP Rsh_Fir_reg_r112_;  // r112
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_file_append;  // file_append
  SEXP Rsh_Fir_reg_to29_;  // to29
  SEXP Rsh_Fir_reg_to30_;  // to30
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_to32_;  // to32
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_okay24_;  // okay24
  SEXP Rsh_Fir_reg_okay25_;  // okay25
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r113_;  // r113
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_from25_;  // from25
  SEXP Rsh_Fir_reg_from26_;  // from26
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_from28_;  // from28
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_okay26_;  // okay26
  SEXP Rsh_Fir_reg_okay27_;  // okay27
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r115_;  // r115
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_r117_;  // r117
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_r119_;  // r119
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_okay28_;  // okay28
  SEXP Rsh_Fir_reg_okay29_;  // okay29
  SEXP Rsh_Fir_reg____4_;  // ___4
  SEXP Rsh_Fir_reg_r122_;  // r122
  SEXP Rsh_Fir_reg_copy_mode3_;  // copy_mode3
  SEXP Rsh_Fir_reg_copy_mode4_;  // copy_mode4
  SEXP Rsh_Fir_reg_c41_;  // c41
  SEXP Rsh_Fir_reg_c42_;  // c42
  SEXP Rsh_Fir_reg_copy_date3_;  // copy_date3
  SEXP Rsh_Fir_reg_copy_date4_;  // copy_date4
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_file_info;  // file_info
  SEXP Rsh_Fir_reg_from29_;  // from29
  SEXP Rsh_Fir_reg_from30_;  // from30
  SEXP Rsh_Fir_reg_c48_;  // c48
  SEXP Rsh_Fir_reg_from32_;  // from32
  SEXP Rsh_Fir_reg_dr30_;  // dr30
  SEXP Rsh_Fir_reg_dc15_;  // dc15
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_okay30_;  // okay30
  SEXP Rsh_Fir_reg_okay31_;  // okay31
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r123_;  // r123
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_r125_;  // r125
  SEXP Rsh_Fir_reg_copy_mode5_;  // copy_mode5
  SEXP Rsh_Fir_reg_copy_mode6_;  // copy_mode6
  SEXP Rsh_Fir_reg_c49_;  // c49
  SEXP Rsh_Fir_reg_Sys_chmod;  // Sys_chmod
  SEXP Rsh_Fir_reg_to33_;  // to33
  SEXP Rsh_Fir_reg_to34_;  // to34
  SEXP Rsh_Fir_reg_c50_;  // c50
  SEXP Rsh_Fir_reg_to36_;  // to36
  SEXP Rsh_Fir_reg_dr32_;  // dr32
  SEXP Rsh_Fir_reg_dc16_;  // dc16
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_okay32_;  // okay32
  SEXP Rsh_Fir_reg_okay33_;  // okay33
  SEXP Rsh_Fir_reg___10_;  // __10
  SEXP Rsh_Fir_reg_r126_;  // r126
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_fi;  // fi
  SEXP Rsh_Fir_reg_fi1_;  // fi1
  SEXP Rsh_Fir_reg_c51_;  // c51
  SEXP Rsh_Fir_reg_fi3_;  // fi3
  SEXP Rsh_Fir_reg_dr34_;  // dr34
  SEXP Rsh_Fir_reg_dc17_;  // dc17
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_r128_;  // r128
  SEXP Rsh_Fir_reg_p19_;  // p19
  SEXP Rsh_Fir_reg_r130_;  // r130
  SEXP Rsh_Fir_reg_copy_date5_;  // copy_date5
  SEXP Rsh_Fir_reg_copy_date6_;  // copy_date6
  SEXP Rsh_Fir_reg_c52_;  // c52
  SEXP Rsh_Fir_reg_Sys_setFileTime;  // Sys_setFileTime
  SEXP Rsh_Fir_reg_to37_;  // to37
  SEXP Rsh_Fir_reg_to38_;  // to38
  SEXP Rsh_Fir_reg_c53_;  // c53
  SEXP Rsh_Fir_reg_to40_;  // to40
  SEXP Rsh_Fir_reg_dr36_;  // dr36
  SEXP Rsh_Fir_reg_dc18_;  // dc18
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_okay34_;  // okay34
  SEXP Rsh_Fir_reg_okay35_;  // okay35
  SEXP Rsh_Fir_reg___11_;  // __11
  SEXP Rsh_Fir_reg_r132_;  // r132
  SEXP Rsh_Fir_reg_p20_;  // p20
  SEXP Rsh_Fir_reg_fi4_;  // fi4
  SEXP Rsh_Fir_reg_fi5_;  // fi5
  SEXP Rsh_Fir_reg_c54_;  // c54
  SEXP Rsh_Fir_reg_fi7_;  // fi7
  SEXP Rsh_Fir_reg_dr38_;  // dr38
  SEXP Rsh_Fir_reg_dc19_;  // dc19
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg_r134_;  // r134
  SEXP Rsh_Fir_reg_p21_;  // p21
  SEXP Rsh_Fir_reg_r136_;  // r136
  SEXP Rsh_Fir_reg_r137_;  // r137
  SEXP Rsh_Fir_reg_r138_;  // r138
  SEXP Rsh_Fir_reg_r139_;  // r139
  SEXP Rsh_Fir_reg_okay36_;  // okay36
  SEXP Rsh_Fir_reg_okay37_;  // okay37

  // Bind parameters
  Rsh_Fir_reg_from = PARAMS[0];
  Rsh_Fir_reg_to = PARAMS[1];
  Rsh_Fir_reg_overwrite = PARAMS[2];
  Rsh_Fir_reg_recursive = PARAMS[3];
  Rsh_Fir_reg_copy_mode = PARAMS[4];
  Rsh_Fir_reg_copy_date = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st from = from
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_from, RHO);
  (void)(Rsh_Fir_reg_from);
  // st to = to
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_to, RHO);
  (void)(Rsh_Fir_reg_to);
  // overwrite_isMissing = missing.0(overwrite)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_overwrite;
  Rsh_Fir_reg_overwrite_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if overwrite_isMissing then L0() else L1(overwrite)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_overwrite_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(overwrite)
    Rsh_Fir_reg_overwrite_orDefault = Rsh_Fir_reg_overwrite;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   recursive1 = ld recursive;
  //   recursive2 = force? recursive1;
  //   checkMissing(recursive2);
  //   return recursive2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_overwrite_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st overwrite = overwrite_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_overwrite_orDefault, RHO);
  (void)(Rsh_Fir_reg_overwrite_orDefault);
  // recursive_isMissing = missing.0(recursive)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_recursive;
  Rsh_Fir_reg_recursive_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if recursive_isMissing then L2(FALSE) else L2(recursive)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_recursive_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_recursive_orDefault = Rsh_const(CCP, 5);
    goto L2_;
  } else {
  // L2(recursive)
    Rsh_Fir_reg_recursive_orDefault = Rsh_Fir_reg_recursive;
    goto L2_;
  }

L2_:;
  // st recursive = recursive_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_recursive_orDefault, RHO);
  (void)(Rsh_Fir_reg_recursive_orDefault);
  // copy_mode_isMissing = missing.0(copy_mode)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_copy_mode;
  Rsh_Fir_reg_copy_mode_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if copy_mode_isMissing then L3(TRUE) else L3(copy_mode)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_copy_mode_isMissing)) {
  // L3(TRUE)
    Rsh_Fir_reg_copy_mode_orDefault = Rsh_const(CCP, 6);
    goto L3_;
  } else {
  // L3(copy_mode)
    Rsh_Fir_reg_copy_mode_orDefault = Rsh_Fir_reg_copy_mode;
    goto L3_;
  }

L3_:;
  // st `copy.mode` = copy_mode_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_copy_mode_orDefault, RHO);
  (void)(Rsh_Fir_reg_copy_mode_orDefault);
  // copy_date_isMissing = missing.0(copy_date)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_copy_date;
  Rsh_Fir_reg_copy_date_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if copy_date_isMissing then L4(FALSE) else L4(copy_date)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_copy_date_isMissing)) {
  // L4(FALSE)
    Rsh_Fir_reg_copy_date_orDefault = Rsh_const(CCP, 5);
    goto L4_;
  } else {
  // L4(copy_date)
    Rsh_Fir_reg_copy_date_orDefault = Rsh_Fir_reg_copy_date;
    goto L4_;
  }

L4_:;
  // st `copy.date` = copy_date_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_copy_date_orDefault, RHO);
  (void)(Rsh_Fir_reg_copy_date_orDefault);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard then L53() else L54()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L53()
    goto L53_;
  } else {
  // L54()
    goto L54_;
  }

L5_:;
  // st nf = r2
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // r4 = `!`(r2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c then L57() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L57()
    goto L57_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard1 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L8_:;
  // st nt = r9
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // r11 = `!`(r9)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c1 then L66() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L66()
    goto L66_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // nt = ld nt
  Rsh_Fir_reg_nt = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L70() else D8()
  // L70()
  goto L70_;

L11_:;
  // c8 = `as.logical`(c4)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c8 then L75() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L75()
    goto L75_;
  } else {
  // L12()
    goto L12_;
  }

L12_:;
  // nf = ld nf
  Rsh_Fir_reg_nf = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L107() else D28()
  // L107()
  goto L107_;

L13_:;
  // c15 = `as.logical`(c11)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c15 then L81() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L81()
    goto L81_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // _Platform = ld `.Platform`
  Rsh_Fir_reg__Platform = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L85() else D16()
  // L85()
  goto L85_;

L16_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // sym2 = ldf `.Internal`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base2 = ldf `.Internal` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard2 then L96() else L97()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L96()
    goto L96_;
  } else {
  // L97()
    goto L97_;
  }

L18_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r30
  return Rsh_Fir_reg_r30_;

L19_:;
  // nt4 = ld nt
  Rsh_Fir_reg_nt4_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L118() else D35()
  // L118()
  goto L118_;

L20_:;
  // recursive7 = ld recursive
  Rsh_Fir_reg_recursive7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L113() else D32()
  // L113()
  goto L113_;

L21_:;
  // goto L19()
  // L19()
  goto L19_;

L22_:;
  // goto L24()
  // L24()
  goto L24_;

L23_:;
  // st from = r39
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // goto L24()
  // L24()
  goto L24_;

L24_:;
  // file_exists = ldf `file.exists`
  Rsh_Fir_reg_file_exists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L127() else D40()
  // L127()
  goto L127_;

L25_:;
  // dir_exists1 = ldf `dir.exists`
  Rsh_Fir_reg_dir_exists1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L137() else D45()
  // L137()
  goto L137_;

L26_:;
  // st okay = dx3
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L27()
  // L27()
  goto L27_;

L27_:;
  // dir_exists3 = ldf `dir.exists`
  Rsh_Fir_reg_dir_exists3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L156() else D57()
  // L156()
  goto L156_;

L28_:;
  // c26 = `as.logical`(r66)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c26 then L147() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L147()
    goto L147_;
  } else {
  // L29()
    goto L29_;
  }

L29_:;
  // goto L27()
  // L27()
  goto L27_;

L30_:;
  // st okay = dx11
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // goto L27()
  // L27()
  goto L27_;

L31_:;
  // c29 = `as.logical`(r79)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c29 then L162() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L162()
    goto L162_;
  } else {
  // L32()
    goto L32_;
  }

L32_:;
  // goto L34()
  // L34()
  goto L34_;

L33_:;
  // st okay = dx15
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_dx15_, RHO);
  (void)(Rsh_Fir_reg_dx15_);
  // goto L34()
  // L34()
  goto L34_;

L34_:;
  // sym6 = ldf any
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base6 = ldf any in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard6 then L171() else L172()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L171()
    goto L171_;
  } else {
  // L172()
    goto L172_;
  }

L35_:;
  // c33 = `as.logical`(r90)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c33 then L176() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L176()
    goto L176_;
  } else {
  // L36()
    goto L36_;
  }

L36_:;
  // goto L37()
  // L37()
  goto L37_;

L37_:;
  // sym7 = ldf any
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base7 = ldf any in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard7 then L180() else L181()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L180()
    goto L180_;
  } else {
  // L181()
    goto L181_;
  }

L38_:;
  // c34 = `as.logical`(r100)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c34 then L184() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L184()
    goto L184_;
  } else {
  // L39()
    goto L39_;
  }

L39_:;
  // goto L52()
  // L52()
  goto L52_;

L40_:;
  // st okay = dx23
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_dx23_, RHO);
  (void)(Rsh_Fir_reg_dx23_);
  // sym8 = ldf any
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base8 = ldf any in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard8 then L191() else L192()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L191()
    goto L191_;
  } else {
  // L192()
    goto L192_;
  }

L41_:;
  // c37 = `as.logical`(r111)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c37 then L195() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L195()
    goto L195_;
  } else {
  // L42()
    goto L42_;
  }

L42_:;
  // goto L51(NULL)
  // L51(NULL)
  Rsh_Fir_reg_r139_ = Rsh_const(CCP, 18);
  goto L51_;

L43_:;
  // st okay = dx29
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_dx29_, RHO);
  (void)(Rsh_Fir_reg_dx29_);
  // copy_mode3 = ld `copy.mode`
  Rsh_Fir_reg_copy_mode3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L202() else D80()
  // L202()
  goto L202_;

L44_:;
  // c47 = `as.logical`(c42)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_c42_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c47 then L206() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L206()
    goto L206_;
  } else {
  // L45()
    goto L45_;
  }

L45_:;
  // goto L50(NULL)
  // L50(NULL)
  Rsh_Fir_reg_r138_ = Rsh_const(CCP, 18);
  goto L50_;

L46_:;
  // goto L47()
  // L47()
  goto L47_;

L47_:;
  // copy_date5 = ld `copy.date`
  Rsh_Fir_reg_copy_date5_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L214() else D87()
  // L214()
  goto L214_;

L48_:;
  // goto L49(NULL)
  // L49(NULL)
  Rsh_Fir_reg_r137_ = Rsh_const(CCP, 18);
  goto L49_;

L49_:;
  // goto L50(r137)
  // L50(r137)
  Rsh_Fir_reg_r138_ = Rsh_Fir_reg_r137_;
  goto L50_;

L50_:;
  // goto L51(r138)
  // L51(r138)
  Rsh_Fir_reg_r139_ = Rsh_Fir_reg_r138_;
  goto L51_;

L51_:;
  // goto L52()
  // L52()
  goto L52_;

L52_:;
  // okay36 = ld okay
  Rsh_Fir_reg_okay36_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L222() else D90()
  // L222()
  goto L222_;

L53_:;
  // from1 = ld from
  Rsh_Fir_reg_from1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L55() else D0()
  // L55()
  goto L55_;

L54_:;
  // r1 = dyn base(<sym from>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L5(r1)
  // L5(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L5_;

D0_:;
  // deopt 2 [from1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_from1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L55_:;
  // from2 = force? from1
  Rsh_Fir_reg_from2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from1_);
  // checkMissing(from2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_from2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r3 = dyn length(from2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_from2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L56() else D1()
  // L56()
  goto L56_;

D1_:;
  // deopt 5 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L56_:;
  // goto L5(r3)
  // L5(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L5_;

L57_:;
  // logical = ldf logical
  Rsh_Fir_reg_logical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L58() else D2()
  // L58()
  goto L58_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L58_:;
  // r5 = dyn logical()
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_logical, 0, NULL, NULL, CCP, RHO);
  // check L59() else D3()
  // L59()
  goto L59_;

D3_:;
  // deopt 10 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L59_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_;

L62_:;
  // to1 = ld to
  Rsh_Fir_reg_to1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L64() else D4()
  // L64()
  goto L64_;

L63_:;
  // r8 = dyn base1(<sym to>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L8(r8)
  // L8(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L8_;

D4_:;
  // deopt 16 [to1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_to1_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L64_:;
  // to2 = force? to1
  Rsh_Fir_reg_to2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to1_);
  // checkMissing(to2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_to2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r10 = dyn length1(to2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_to2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L65() else D5()
  // L65()
  goto L65_;

D5_:;
  // deopt 19 [r10]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L65_:;
  // goto L8(r10)
  // L8(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L8_;

L66_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L67() else D6()
  // L67()
  goto L67_;

D6_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L67_:;
  // r12 = dyn stop("no files to copy to")
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L68() else D7()
  // L68()
  goto L68_;

D7_:;
  // deopt 25 [r12]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L10()
  // L10()
  goto L10_;

D8_:;
  // deopt 28 [nt]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_nt;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L70_:;
  // nt1 = force? nt
  Rsh_Fir_reg_nt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nt);
  // checkMissing(nt1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_nt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // r14 = `==`(nt1, 1.0)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_nt1_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c2 then L71() else L11(c2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L71()
    goto L71_;
  } else {
  // L11(c2)
    Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c2_;
    goto L11_;
  }

L71_:;
  // dir_exists = ldf `dir.exists`
  Rsh_Fir_reg_dir_exists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L72() else D9()
  // L72()
  goto L72_;

D9_:;
  // deopt 33 [c2]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L72_:;
  // p1 = prom<V +>{
  //   to3 = ld to;
  //   to4 = force? to3;
  //   checkMissing(to4);
  //   return to4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_1, CCP, RHO);
  // r16 = dyn dir_exists(p1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dir_exists, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L73() else D10()
  // L73()
  goto L73_;

D10_:;
  // deopt 35 [c2, r16]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(35, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L73_:;
  // c5 = `as.logical`(r16)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // c6 = `&&`(c2, c5)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L11(c6)
  // L11(c6)
  Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c6_;
  goto L11_;

L75_:;
  // recursive3 = ld recursive
  Rsh_Fir_reg_recursive3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L76() else D11()
  // L76()
  goto L76_;

D11_:;
  // deopt 37 [recursive3]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_recursive3_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L76_:;
  // recursive4 = force? recursive3
  Rsh_Fir_reg_recursive4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_recursive3_);
  // checkMissing(recursive4)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_recursive4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // c9 = `as.logical`(recursive4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_recursive4_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c9 then L77() else L13(c9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L77()
    goto L77_;
  } else {
  // L13(c9)
    Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c9_;
    goto L13_;
  }

L77_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L78() else D12()
  // L78()
  goto L78_;

D12_:;
  // deopt 40 [c9]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L78_:;
  // p2 = prom<V +>{
  //   to5 = ld to;
  //   to6 = force? to5;
  //   checkMissing(to6);
  //   return to6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_2, CCP, RHO);
  // p3 = prom<V +>{
  //   from3 = ld from;
  //   from4 = force? from3;
  //   checkMissing(from4);
  //   return from4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_3, CCP, RHO);
  // r19 = dyn _in_(p2, p3)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L79() else D13()
  // L79()
  goto L79_;

D13_:;
  // deopt 43 [c9, r19]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(43, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L79_:;
  // c12 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // c13 = `&&`(c9, c12)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L13(c13)
  // L13(c13)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c13_;
  goto L13_;

L81_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L82() else D14()
  // L82()
  goto L82_;

D14_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L82_:;
  // r20 = dyn stop1("attempt to copy a directory to itself")
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L83() else D15()
  // L83()
  goto L83_;

D15_:;
  // deopt 48 [r20]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L83_:;
  // goto L15()
  // L15()
  goto L15_;

D16_:;
  // deopt 51 [_Platform]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg__Platform;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L85_:;
  // _Platform1 = force? _Platform
  Rsh_Fir_reg__Platform1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Platform);
  // checkMissing(_Platform1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg__Platform1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(_Platform1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if c16 then L87() else L88(_Platform1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L87()
    goto L87_;
  } else {
  // L88(_Platform1)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg__Platform1_;
    goto L88_;
  }

L86_:;
  // r23 = `==`(dx1, "windows")
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // c17 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if c17 then L90() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L90()
    goto L90_;
  } else {
  // L16()
    goto L16_;
  }

L87_:;
  // dr = tryDispatchBuiltin.1("$", _Platform1)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args49);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if dc then L89() else L88(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L89()
    goto L89_;
  } else {
  // L88(dr)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg_dr;
    goto L88_;
  }

L88_:;
  // r22 = `$`(_Platform3, <sym OS.type>)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg__Platform3_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L86(r22)
  // L86(r22)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r22_;
  goto L86_;

L89_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L86(dx)
  // L86(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L86_;

L90_:;
  // gsub = ldf gsub
  Rsh_Fir_reg_gsub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L91() else D17()
  // L91()
  goto L91_;

D17_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L91_:;
  // p4 = prom<V +>{
  //   from5 = ld from;
  //   from6 = force? from5;
  //   checkMissing(from6);
  //   return from6;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_4, CCP, RHO);
  // r25 = dyn gsub[, , , fixed]("/", "\\", p4, TRUE)
  SEXP Rsh_Fir_array_args54[4];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args54[2] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args54[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names8[4];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_array_arg_names8[3] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub, 4, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L92() else D18()
  // L92()
  goto L92_;

D18_:;
  // deopt 63 [r25]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L92_:;
  // st from = r25
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // gsub1 = ldf gsub
  Rsh_Fir_reg_gsub1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L93() else D19()
  // L93()
  goto L93_;

D19_:;
  // deopt 66 []
  Rsh_Fir_deopt(66, 0, NULL, CCP, RHO);
  return R_NilValue;

L93_:;
  // p5 = prom<V +>{
  //   to7 = ld to;
  //   to8 = force? to7;
  //   checkMissing(to8);
  //   return to8;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_5, CCP, RHO);
  // r27 = dyn gsub1[, , , fixed]("/", "\\", p5, TRUE)
  SEXP Rsh_Fir_array_args56[4];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args56[2] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args56[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names9[4];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub1_, 4, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L94() else D20()
  // L94()
  goto L94_;

D20_:;
  // deopt 72 [r27]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L94_:;
  // st to = r27
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // goto L17()
  // L17()
  goto L17_;

L96_:;
  // from7 = ld from
  Rsh_Fir_reg_from7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L98() else D21()
  // L98()
  goto L98_;

L97_:;
  // r29 = dyn base2(<lang file.copy(from, to, overwrite, recursive, copy.mode, copy.date)>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L18(r29)
  // L18(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L18_;

D21_:;
  // deopt 78 [from7]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_from7_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L98_:;
  // from8 = force? from7
  Rsh_Fir_reg_from8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from7_);
  // checkMissing(from8)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_from8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // to9 = ld to
  Rsh_Fir_reg_to9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L99() else D22()
  // L99()
  goto L99_;

D22_:;
  // deopt 80 [to9]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_to9_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L99_:;
  // to10 = force? to9
  Rsh_Fir_reg_to10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to9_);
  // checkMissing(to10)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_to10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // overwrite1 = ld overwrite
  Rsh_Fir_reg_overwrite1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L100() else D23()
  // L100()
  goto L100_;

D23_:;
  // deopt 82 [overwrite1]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_overwrite1_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L100_:;
  // overwrite2 = force? overwrite1
  Rsh_Fir_reg_overwrite2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_overwrite1_);
  // checkMissing(overwrite2)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_overwrite2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // recursive5 = ld recursive
  Rsh_Fir_reg_recursive5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L101() else D24()
  // L101()
  goto L101_;

D24_:;
  // deopt 84 [recursive5]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_recursive5_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L101_:;
  // recursive6 = force? recursive5
  Rsh_Fir_reg_recursive6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_recursive5_);
  // checkMissing(recursive6)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_recursive6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // copy_mode1 = ld `copy.mode`
  Rsh_Fir_reg_copy_mode1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L102() else D25()
  // L102()
  goto L102_;

D25_:;
  // deopt 86 [copy_mode1]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_copy_mode1_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L102_:;
  // copy_mode2 = force? copy_mode1
  Rsh_Fir_reg_copy_mode2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_copy_mode1_);
  // checkMissing(copy_mode2)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_copy_mode2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // copy_date1 = ld `copy.date`
  Rsh_Fir_reg_copy_date1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L103() else D26()
  // L103()
  goto L103_;

D26_:;
  // deopt 88 [copy_date1]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_copy_date1_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L103_:;
  // copy_date2 = force? copy_date1
  Rsh_Fir_reg_copy_date2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_copy_date1_);
  // checkMissing(copy_date2)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_copy_date2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // file_copy = ldf `file.copy` in base
  Rsh_Fir_reg_file_copy = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r31 = dyn file_copy(from8, to10, overwrite2, recursive6, copy_mode2, copy_date2)
  SEXP Rsh_Fir_array_args64[6];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_from8_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_to10_;
  Rsh_Fir_array_args64[2] = Rsh_Fir_reg_overwrite2_;
  Rsh_Fir_array_args64[3] = Rsh_Fir_reg_recursive6_;
  Rsh_Fir_array_args64[4] = Rsh_Fir_reg_copy_mode2_;
  Rsh_Fir_array_args64[5] = Rsh_Fir_reg_copy_date2_;
  SEXP Rsh_Fir_array_arg_names11[6];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_array_arg_names11[4] = R_MissingArg;
  Rsh_Fir_array_arg_names11[5] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_copy, 6, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L104() else D27()
  // L104()
  goto L104_;

D27_:;
  // deopt 91 [r31]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L104_:;
  // goto L18(r31)
  // L18(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L18_;

D28_:;
  // deopt 93 [nf]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_nf;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L107_:;
  // nf1 = force? nf
  Rsh_Fir_reg_nf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nf);
  // checkMissing(nf1)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_nf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // nt2 = ld nt
  Rsh_Fir_reg_nt2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L108() else D29()
  // L108()
  goto L108_;

D29_:;
  // deopt 94 [nf1, nt2]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_nf1_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_nt2_;
  Rsh_Fir_deopt(94, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L108_:;
  // nt3 = force? nt2
  Rsh_Fir_reg_nt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nt2_);
  // checkMissing(nt3)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_nt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // r34 = `>`(nf1, nt3)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_nf1_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_nt3_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // c18 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if c18 then L109() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L109()
    goto L109_;
  } else {
  // L20()
    goto L20_;
  }

L109_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L110() else D30()
  // L110()
  goto L110_;

D30_:;
  // deopt 98 []
  Rsh_Fir_deopt(98, 0, NULL, CCP, RHO);
  return R_NilValue;

L110_:;
  // r35 = dyn stop2("more 'from' files than 'to' files")
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L111() else D31()
  // L111()
  goto L111_;

D31_:;
  // deopt 100 [r35]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L111_:;
  // goto L19()
  // L19()
  goto L19_;

D32_:;
  // deopt 101 [recursive7]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_recursive7_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L113_:;
  // recursive8 = force? recursive7
  Rsh_Fir_reg_recursive8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_recursive7_);
  // checkMissing(recursive8)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_recursive8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // c19 = `as.logical`(recursive8)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_recursive8_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if c19 then L114() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L114()
    goto L114_;
  } else {
  // L21()
    goto L21_;
  }

L114_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L115() else D33()
  // L115()
  goto L115_;

D33_:;
  // deopt 104 []
  Rsh_Fir_deopt(104, 0, NULL, CCP, RHO);
  return R_NilValue;

L115_:;
  // r36 = dyn warning("'recursive' will be ignored as 'to' is not a single existing directory")
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L116() else D34()
  // L116()
  goto L116_;

D34_:;
  // deopt 106 [r36]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L116_:;
  // goto L19()
  // L19()
  goto L19_;

D35_:;
  // deopt 109 [nt4]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_nt4_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L118_:;
  // nt5 = force? nt4
  Rsh_Fir_reg_nt5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nt4_);
  // checkMissing(nt5)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_nt5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // nf2 = ld nf
  Rsh_Fir_reg_nf2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L119() else D36()
  // L119()
  goto L119_;

D36_:;
  // deopt 110 [nt5, nf2]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_nt5_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_nf2_;
  Rsh_Fir_deopt(110, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L119_:;
  // nf3 = force? nf2
  Rsh_Fir_reg_nf3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nf2_);
  // checkMissing(nf3)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_nf3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // r37 = `>`(nt5, nf3)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_nt5_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_nf3_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // c20 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // if c20 then L120() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L120()
    goto L120_;
  } else {
  // L22()
    goto L22_;
  }

L120_:;
  // sym3 = ldf rep_len
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base3 = ldf rep_len in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args77);
  // if guard3 then L121() else L122()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L121()
    goto L121_;
  } else {
  // L122()
    goto L122_;
  }

L121_:;
  // from9 = ld from
  Rsh_Fir_reg_from9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L123() else D37()
  // L123()
  goto L123_;

L122_:;
  // r38 = dyn base3[, `length.out`](<sym from>, <sym nt>)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L23(r38)
  // L23(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L23_;

D37_:;
  // deopt 115 [from9]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_from9_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L123_:;
  // from10 = force? from9
  Rsh_Fir_reg_from10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from9_);
  // checkMissing(from10)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_from10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // nt6 = ld nt
  Rsh_Fir_reg_nt6_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L124() else D38()
  // L124()
  goto L124_;

D38_:;
  // deopt 117 [nt6]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_nt6_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L124_:;
  // nt7 = force? nt6
  Rsh_Fir_reg_nt7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nt6_);
  // checkMissing(nt7)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_nt7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // rep_len = ldf rep_len in base
  Rsh_Fir_reg_rep_len = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r40 = dyn rep_len(from10, nt7)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_from10_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_nt7_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_len, 2, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L125() else D39()
  // L125()
  goto L125_;

D39_:;
  // deopt 120 [r40]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L125_:;
  // goto L23(r40)
  // L23(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L23_;

D40_:;
  // deopt 125 []
  Rsh_Fir_deopt(125, 0, NULL, CCP, RHO);
  return R_NilValue;

L127_:;
  // p6 = prom<V +>{
  //   from11 = ld from;
  //   from12 = force? from11;
  //   checkMissing(from12);
  //   return from12;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_6, CCP, RHO);
  // r43 = dyn file_exists(p6)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_exists, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L128() else D41()
  // L128()
  goto L128_;

D41_:;
  // deopt 127 [r43]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L128_:;
  // st okay = r43
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // overwrite3 = ld overwrite
  Rsh_Fir_reg_overwrite3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L129() else D42()
  // L129()
  goto L129_;

D42_:;
  // deopt 129 [overwrite3]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_overwrite3_;
  Rsh_Fir_deopt(129, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L129_:;
  // overwrite4 = force? overwrite3
  Rsh_Fir_reg_overwrite4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_overwrite3_);
  // checkMissing(overwrite4)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_overwrite4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // r44 = `!`(overwrite4)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_overwrite4_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // c21 = `as.logical`(r44)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if c21 then L130() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L130()
    goto L130_;
  } else {
  // L25()
    goto L25_;
  }

L130_:;
  // l = ld okay
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // c22 = `is.object`(l)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if c22 then L131() else L132(FALSE, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L131()
    goto L131_;
  } else {
  // L132(FALSE, l)
    Rsh_Fir_reg_r46_ = Rsh_const(CCP, 5);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L132_;
  }

L131_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l, FALSE)
  SEXP Rsh_Fir_array_args88[3];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args88[2] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args88);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // if dc1 then L133() else L132(FALSE, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L133()
    goto L133_;
  } else {
  // L132(FALSE, dr2)
    Rsh_Fir_reg_r46_ = Rsh_const(CCP, 5);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L132_;
  }

L132_:;
  // file_exists1 = ldf `file.exists`
  Rsh_Fir_reg_file_exists1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L134() else D43()
  // L134()
  goto L134_;

L133_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // goto L26(FALSE, dx2)
  // L26(FALSE, dx2)
  Rsh_Fir_reg_r48_ = Rsh_const(CCP, 5);
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L26_;

D43_:;
  // deopt 136 [r46, l2, FALSE]
  SEXP Rsh_Fir_array_deopt_stack35[3];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack35[2] = Rsh_const(CCP, 5);
  Rsh_Fir_deopt(136, 3, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L134_:;
  // p7 = prom<V +>{
  //   to11 = ld to;
  //   to12 = force? to11;
  //   checkMissing(to12);
  //   return to12;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_7, CCP, RHO);
  // r50 = dyn file_exists1(p7)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_exists1_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L135() else D44()
  // L135()
  goto L135_;

D44_:;
  // deopt 138 [r46, l2, FALSE, r50]
  SEXP Rsh_Fir_array_deopt_stack36[4];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack36[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_deopt_stack36[3] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(138, 4, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L135_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r51 = dyn ___(l2, FALSE, r50)
  SEXP Rsh_Fir_array_args93[3];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args93[2] = Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L26(r46, r51)
  // L26(r46, r51)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r51_;
  goto L26_;

D45_:;
  // deopt 142 []
  Rsh_Fir_deopt(142, 0, NULL, CCP, RHO);
  return R_NilValue;

L137_:;
  // p8 = prom<V +>{
  //   from13 = ld from;
  //   from14 = force? from13;
  //   checkMissing(from14);
  //   c23 = `is.object`(from14);
  //   if c23 then L1() else L2(from14);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[", from14);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(from16):
  //   okay = ld okay;
  //   okay1 = force? okay;
  //   __ = ldf `[` in base;
  //   r53 = dyn __(from16, okay1);
  //   goto L0(r53);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_8, CCP, RHO);
  // r55 = dyn dir_exists1(p8)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dir_exists1_, 1, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L138() else D46()
  // L138()
  goto L138_;

D46_:;
  // deopt 144 [r55]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(144, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L138_:;
  // file_exists2 = ldf `file.exists`
  Rsh_Fir_reg_file_exists2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L139() else D47()
  // L139()
  goto L139_;

D47_:;
  // deopt 145 [r55]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(145, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L139_:;
  // p9 = prom<V +>{
  //   to13 = ld to;
  //   to14 = force? to13;
  //   checkMissing(to14);
  //   c24 = `is.object`(to14);
  //   if c24 then L1() else L2(to14);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[", to14);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(to16):
  //   okay2 = ld okay;
  //   okay3 = force? okay2;
  //   __1 = ldf `[` in base;
  //   r56 = dyn __1(to16, okay3);
  //   goto L0(r56);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_9, CCP, RHO);
  // r58 = dyn file_exists2(p9)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_exists2_, 1, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L140() else D48()
  // L140()
  goto L140_;

D48_:;
  // deopt 147 [r55, r58]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(147, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L140_:;
  // r59 = `&&`(r55, r58)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_r58_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // dir_exists2 = ldf `dir.exists`
  Rsh_Fir_reg_dir_exists2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L141() else D49()
  // L141()
  goto L141_;

D49_:;
  // deopt 149 [r59]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(149, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L141_:;
  // p10 = prom<V +>{
  //   to17 = ld to;
  //   to18 = force? to17;
  //   checkMissing(to18);
  //   c25 = `is.object`(to18);
  //   if c25 then L1() else L2(to18);
  // L0(dx9):
  //   return dx9;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("[", to18);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(to20):
  //   okay4 = ld okay;
  //   okay5 = force? okay4;
  //   __2 = ldf `[` in base;
  //   r60 = dyn __2(to20, okay5);
  //   goto L0(r60);
  // L3():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx8);
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_10, CCP, RHO);
  // r62 = dyn dir_exists2(p10)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dir_exists2_, 1, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L142() else D50()
  // L142()
  goto L142_;

D50_:;
  // deopt 151 [r59, r62]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(151, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L142_:;
  // r63 = `!`(r62)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // r64 = `&&`(r59, r63)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_args117[1] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // st dirtofile = r64
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_r64_, RHO);
  (void)(Rsh_Fir_reg_r64_);
  // sym4 = ldf any
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base4 = ldf any in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args118);
  // if guard4 then L143() else L144()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L143()
    goto L143_;
  } else {
  // L144()
    goto L144_;
  }

L143_:;
  // dirtofile = ld dirtofile
  Rsh_Fir_reg_dirtofile = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L145() else D51()
  // L145()
  goto L145_;

L144_:;
  // r65 = dyn base4(<sym dirtofile>)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L28(r65)
  // L28(r65)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r65_;
  goto L28_;

D51_:;
  // deopt 157 [dirtofile]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_dirtofile;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L145_:;
  // dirtofile1 = force? dirtofile
  Rsh_Fir_reg_dirtofile1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dirtofile);
  // checkMissing(dirtofile1)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dirtofile1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r67 = dyn any(dirtofile1)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dirtofile1_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L146() else D52()
  // L146()
  goto L146_;

D52_:;
  // deopt 160 [r67]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(160, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L146_:;
  // goto L28(r67)
  // L28(r67)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r67_;
  goto L28_;

L147_:;
  // warning1 = ldf warning
  Rsh_Fir_reg_warning1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L148() else D53()
  // L148()
  goto L148_;

D53_:;
  // deopt 162 []
  Rsh_Fir_deopt(162, 0, NULL, CCP, RHO);
  return R_NilValue;

L148_:;
  // r68 = dyn warning1("cannot overwrite a non-directory with a directory")
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning1_, 1, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L149() else D54()
  // L149()
  goto L149_;

D54_:;
  // deopt 164 [r68]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(164, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L149_:;
  // dirtofile2 = ld dirtofile
  Rsh_Fir_reg_dirtofile2_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L150() else D55()
  // L150()
  goto L150_;

D55_:;
  // deopt 165 [dirtofile2]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_dirtofile2_;
  Rsh_Fir_deopt(165, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L150_:;
  // dirtofile3 = force? dirtofile2
  Rsh_Fir_reg_dirtofile3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dirtofile2_);
  // checkMissing(dirtofile3)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dirtofile3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // r69 = `!`(dirtofile3)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dirtofile3_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // l3 = ld okay
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // c27 = `is.object`(l3)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // if c27 then L151() else L152(r69, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L151()
    goto L151_;
  } else {
  // L152(r69, l3)
    Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r69_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L152_;
  }

L151_:;
  // dr10 = tryDispatchBuiltin.0("[<-", l3, r69)
  SEXP Rsh_Fir_array_args126[3];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args126[2] = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args126);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // if dc5 then L153() else L152(r69, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L153()
    goto L153_;
  } else {
  // L152(r69, dr10)
    Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r69_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr10_;
    goto L152_;
  }

L152_:;
  // okay6 = ld okay
  Rsh_Fir_reg_okay6_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L154() else D56()
  // L154()
  goto L154_;

L153_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // goto L30(r69, dx10)
  // L30(r69, dx10)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L30_;

D56_:;
  // deopt 169 [r71, l5, r69, okay6]
  SEXP Rsh_Fir_array_deopt_stack46[4];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack46[2] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_deopt_stack46[3] = Rsh_Fir_reg_okay6_;
  Rsh_Fir_deopt(169, 4, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L154_:;
  // okay7 = force? okay6
  Rsh_Fir_reg_okay7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay6_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r74 = dyn ___1(l5, r69, okay7)
  SEXP Rsh_Fir_array_args129[3];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_args129[2] = Rsh_Fir_reg_okay7_;
  SEXP Rsh_Fir_array_arg_names28[3];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args129, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L30(r71, r74)
  // L30(r71, r74)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r71_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r74_;
  goto L30_;

D57_:;
  // deopt 176 []
  Rsh_Fir_deopt(176, 0, NULL, CCP, RHO);
  return R_NilValue;

L156_:;
  // p11 = prom<V +>{
  //   from17 = ld from;
  //   from18 = force? from17;
  //   checkMissing(from18);
  //   c28 = `is.object`(from18);
  //   if c28 then L1() else L2(from18);
  // L0(dx13):
  //   return dx13;
  // L1():
  //   dr12 = tryDispatchBuiltin.1("[", from18);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L3() else L2(dr12);
  // L2(from20):
  //   okay8 = ld okay;
  //   okay9 = force? okay8;
  //   __3 = ldf `[` in base;
  //   r75 = dyn __3(from20, okay9);
  //   goto L0(r75);
  // L3():
  //   dx12 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx12);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_11, CCP, RHO);
  // r77 = dyn dir_exists3(p11)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dir_exists3_, 1, Rsh_Fir_array_args136, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L157() else D58()
  // L157()
  goto L157_;

D58_:;
  // deopt 178 [r77]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(178, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L157_:;
  // st fromdir = r77
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r77_, RHO);
  (void)(Rsh_Fir_reg_r77_);
  // sym5 = ldf any
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base5 = ldf any in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args137[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args137);
  // if guard5 then L158() else L159()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L158()
    goto L158_;
  } else {
  // L159()
    goto L159_;
  }

L158_:;
  // fromdir = ld fromdir
  Rsh_Fir_reg_fromdir = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L160() else D59()
  // L160()
  goto L160_;

L159_:;
  // r78 = dyn base5(<sym fromdir>)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args138, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L31(r78)
  // L31(r78)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r78_;
  goto L31_;

D59_:;
  // deopt 182 [fromdir]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_fromdir;
  Rsh_Fir_deopt(182, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L160_:;
  // fromdir1 = force? fromdir
  Rsh_Fir_reg_fromdir1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fromdir);
  // checkMissing(fromdir1)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_fromdir1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r80 = dyn any1(fromdir1)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_fromdir1_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L161() else D60()
  // L161()
  goto L161_;

D60_:;
  // deopt 185 [r80]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(185, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L161_:;
  // goto L31(r80)
  // L31(r80)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r80_;
  goto L31_;

L162_:;
  // warning2 = ldf warning
  Rsh_Fir_reg_warning2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L163() else D61()
  // L163()
  goto L163_;

D61_:;
  // deopt 187 []
  Rsh_Fir_deopt(187, 0, NULL, CCP, RHO);
  return R_NilValue;

L163_:;
  // r81 = dyn warning2("directories are omitted unless 'recursive = TRUE'")
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning2_, 1, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L164() else D62()
  // L164()
  goto L164_;

D62_:;
  // deopt 189 [r81]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_deopt(189, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L164_:;
  // fromdir2 = ld fromdir
  Rsh_Fir_reg_fromdir2_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L165() else D63()
  // L165()
  goto L165_;

D63_:;
  // deopt 190 [fromdir2]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_fromdir2_;
  Rsh_Fir_deopt(190, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L165_:;
  // fromdir3 = force? fromdir2
  Rsh_Fir_reg_fromdir3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fromdir2_);
  // checkMissing(fromdir3)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_fromdir3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // r82 = `!`(fromdir3)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_fromdir3_;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty());
  // l6 = ld okay
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // c30 = `is.object`(l6)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // if c30 then L166() else L167(r82, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L166()
    goto L166_;
  } else {
  // L167(r82, l6)
    Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r82_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L167_;
  }

L166_:;
  // dr14 = tryDispatchBuiltin.0("[<-", l6, r82)
  SEXP Rsh_Fir_array_args145[3];
  Rsh_Fir_array_args145[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args145[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args145[2] = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args145);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // if dc7 then L168() else L167(r82, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L168()
    goto L168_;
  } else {
  // L167(r82, dr14)
    Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r82_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr14_;
    goto L167_;
  }

L167_:;
  // okay10 = ld okay
  Rsh_Fir_reg_okay10_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L169() else D64()
  // L169()
  goto L169_;

L168_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // goto L33(r82, dx14)
  // L33(r82, dx14)
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L33_;

D64_:;
  // deopt 194 [r84, l8, r82, okay10]
  SEXP Rsh_Fir_array_deopt_stack52[4];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack52[2] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_deopt_stack52[3] = Rsh_Fir_reg_okay10_;
  Rsh_Fir_deopt(194, 4, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L169_:;
  // okay11 = force? okay10
  Rsh_Fir_reg_okay11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay10_);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r87 = dyn ___2(l8, r82, okay11)
  SEXP Rsh_Fir_array_args148[3];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args148[1] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_args148[2] = Rsh_Fir_reg_okay11_;
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args148, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L33(r84, r87)
  // L33(r84, r87)
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r87_;
  goto L33_;

L171_:;
  // _in_1 = ldf `%in%`
  Rsh_Fir_reg__in_1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L173() else D65()
  // L173()
  goto L173_;

L172_:;
  // r89 = dyn base6(<lang `%in%`(`[`(from, okay), `[`(to, okay))>)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L35(r89)
  // L35(r89)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r89_;
  goto L35_;

D65_:;
  // deopt 203 []
  Rsh_Fir_deopt(203, 0, NULL, CCP, RHO);
  return R_NilValue;

L173_:;
  // p12 = prom<V +>{
  //   from21 = ld from;
  //   from22 = force? from21;
  //   checkMissing(from22);
  //   c31 = `is.object`(from22);
  //   if c31 then L1() else L2(from22);
  // L0(dx17):
  //   return dx17;
  // L1():
  //   dr16 = tryDispatchBuiltin.1("[", from22);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L3() else L2(dr16);
  // L2(from24):
  //   okay12 = ld okay;
  //   okay13 = force? okay12;
  //   __4 = ldf `[` in base;
  //   r91 = dyn __4(from24, okay13);
  //   goto L0(r91);
  // L3():
  //   dx16 = getTryDispatchBuiltinValue(dr16);
  //   goto L0(dx16);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_12, CCP, RHO);
  // p13 = prom<V +>{
  //   to21 = ld to;
  //   to22 = force? to21;
  //   checkMissing(to22);
  //   c32 = `is.object`(to22);
  //   if c32 then L1() else L2(to22);
  // L0(dx19):
  //   return dx19;
  // L1():
  //   dr18 = tryDispatchBuiltin.1("[", to22);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L3() else L2(dr18);
  // L2(to24):
  //   okay14 = ld okay;
  //   okay15 = force? okay14;
  //   __5 = ldf `[` in base;
  //   r93 = dyn __5(to24, okay15);
  //   goto L0(r93);
  // L3():
  //   dx18 = getTryDispatchBuiltinValue(dr18);
  //   goto L0(dx18);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_13, CCP, RHO);
  // r95 = dyn _in_1(p12, p13)
  SEXP Rsh_Fir_array_args162[2];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args162[1] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_1_, 2, Rsh_Fir_array_args162, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L174() else D66()
  // L174()
  goto L174_;

D66_:;
  // deopt 206 [r95]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_deopt(206, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L174_:;
  // any2 = ldf any in base
  Rsh_Fir_reg_any2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r96 = dyn any2(r95)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any2_, 1, Rsh_Fir_array_args163, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L175() else D67()
  // L175()
  goto L175_;

D67_:;
  // deopt 208 [r96]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_deopt(208, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L175_:;
  // goto L35(r96)
  // L35(r96)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r96_;
  goto L35_;

L176_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L177() else D68()
  // L177()
  goto L177_;

D68_:;
  // deopt 210 []
  Rsh_Fir_deopt(210, 0, NULL, CCP, RHO);
  return R_NilValue;

L177_:;
  // r97 = dyn stop3("file can not be copied both 'from' and 'to'")
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L178() else D69()
  // L178()
  goto L178_;

D69_:;
  // deopt 212 [r97]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_deopt(212, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

L178_:;
  // goto L37()
  // L37()
  goto L37_;

L180_:;
  // okay16 = ld okay
  Rsh_Fir_reg_okay16_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L182() else D70()
  // L182()
  goto L182_;

L181_:;
  // r99 = dyn base7(<sym okay>)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L38(r99)
  // L38(r99)
  Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r99_;
  goto L38_;

D70_:;
  // deopt 217 [okay16]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_okay16_;
  Rsh_Fir_deopt(217, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L182_:;
  // okay17 = force? okay16
  Rsh_Fir_reg_okay17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay16_);
  // checkMissing(okay17)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_okay17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty()));
  // any3 = ldf any in base
  Rsh_Fir_reg_any3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r101 = dyn any3(okay17)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_okay17_;
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any3_, 1, Rsh_Fir_array_args167, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L183() else D71()
  // L183()
  goto L183_;

D71_:;
  // deopt 220 [r101]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_deopt(220, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L183_:;
  // goto L38(r101)
  // L38(r101)
  Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r101_;
  goto L38_;

L184_:;
  // file_create = ldf `file.create`
  Rsh_Fir_reg_file_create = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L185() else D72()
  // L185()
  goto L185_;

D72_:;
  // deopt 222 []
  Rsh_Fir_deopt(222, 0, NULL, CCP, RHO);
  return R_NilValue;

L185_:;
  // p14 = prom<V +>{
  //   to25 = ld to;
  //   to26 = force? to25;
  //   checkMissing(to26);
  //   c35 = `is.object`(to26);
  //   if c35 then L1() else L2(to26);
  // L0(dx21):
  //   return dx21;
  // L1():
  //   dr20 = tryDispatchBuiltin.1("[", to26);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L3() else L2(dr20);
  // L2(to28):
  //   okay18 = ld okay;
  //   okay19 = force? okay18;
  //   __6 = ldf `[` in base;
  //   r102 = dyn __6(to28, okay19);
  //   goto L0(r102);
  // L3():
  //   dx20 = getTryDispatchBuiltinValue(dr20);
  //   goto L0(dx20);
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_14, CCP, RHO);
  // r104 = dyn file_create(p14)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_create, 1, Rsh_Fir_array_args174, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L186() else D73()
  // L186()
  goto L186_;

D73_:;
  // deopt 224 [r104]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_r104_;
  Rsh_Fir_deopt(224, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L186_:;
  // l9 = ld okay
  Rsh_Fir_reg_l9_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // c36 = `is.object`(l9)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty());
  // if c36 then L187() else L188(r104, l9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L187()
    goto L187_;
  } else {
  // L188(r104, l9)
    Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r104_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    goto L188_;
  }

L187_:;
  // dr22 = tryDispatchBuiltin.0("[<-", l9, r104)
  SEXP Rsh_Fir_array_args176[3];
  Rsh_Fir_array_args176[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args176[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args176[2] = Rsh_Fir_reg_r104_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args176);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // if dc11 then L189() else L188(r104, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L189()
    goto L189_;
  } else {
  // L188(r104, dr22)
    Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r104_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_dr22_;
    goto L188_;
  }

L188_:;
  // okay20 = ld okay
  Rsh_Fir_reg_okay20_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L190() else D74()
  // L190()
  goto L190_;

L189_:;
  // dx22 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty());
  // goto L40(dx22)
  // L40(dx22)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L40_;

D74_:;
  // deopt 226 [r106, l11, r104, okay20]
  SEXP Rsh_Fir_array_deopt_stack59[4];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_r106_;
  Rsh_Fir_array_deopt_stack59[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack59[2] = Rsh_Fir_reg_r104_;
  Rsh_Fir_array_deopt_stack59[3] = Rsh_Fir_reg_okay20_;
  Rsh_Fir_deopt(226, 4, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L190_:;
  // okay21 = force? okay20
  Rsh_Fir_reg_okay21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay20_);
  // ___3 = ldf `[<-` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r109 = dyn ___3(l11, r104, okay21)
  SEXP Rsh_Fir_array_args179[3];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args179[1] = Rsh_Fir_reg_r104_;
  Rsh_Fir_array_args179[2] = Rsh_Fir_reg_okay21_;
  SEXP Rsh_Fir_array_arg_names45[3];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_array_arg_names45[2] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 3, Rsh_Fir_array_args179, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L40(r109)
  // L40(r109)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r109_;
  goto L40_;

L191_:;
  // okay22 = ld okay
  Rsh_Fir_reg_okay22_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L193() else D75()
  // L193()
  goto L193_;

L192_:;
  // r110 = dyn base8(<sym okay>)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args180, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L41(r110)
  // L41(r110)
  Rsh_Fir_reg_r111_ = Rsh_Fir_reg_r110_;
  goto L41_;

D75_:;
  // deopt 232 [okay22]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_okay22_;
  Rsh_Fir_deopt(232, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L193_:;
  // okay23 = force? okay22
  Rsh_Fir_reg_okay23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay22_);
  // checkMissing(okay23)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_okay23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty()));
  // any4 = ldf any in base
  Rsh_Fir_reg_any4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r112 = dyn any4(okay23)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_okay23_;
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any4_, 1, Rsh_Fir_array_args182, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L194() else D76()
  // L194()
  goto L194_;

D76_:;
  // deopt 235 [r112]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_r112_;
  Rsh_Fir_deopt(235, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L194_:;
  // goto L41(r112)
  // L41(r112)
  Rsh_Fir_reg_r111_ = Rsh_Fir_reg_r112_;
  goto L41_;

L195_:;
  // file_append = ldf `file.append`
  Rsh_Fir_reg_file_append = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // check L196() else D77()
  // L196()
  goto L196_;

D77_:;
  // deopt 237 []
  Rsh_Fir_deopt(237, 0, NULL, CCP, RHO);
  return R_NilValue;

L196_:;
  // p15 = prom<V +>{
  //   to29 = ld to;
  //   to30 = force? to29;
  //   checkMissing(to30);
  //   c38 = `is.object`(to30);
  //   if c38 then L1() else L2(to30);
  // L0(dx25):
  //   return dx25;
  // L1():
  //   dr24 = tryDispatchBuiltin.1("[", to30);
  //   dc12 = getTryDispatchBuiltinDispatched(dr24);
  //   if dc12 then L3() else L2(dr24);
  // L2(to32):
  //   okay24 = ld okay;
  //   okay25 = force? okay24;
  //   __7 = ldf `[` in base;
  //   r113 = dyn __7(to32, okay25);
  //   goto L0(r113);
  // L3():
  //   dx24 = getTryDispatchBuiltinValue(dr24);
  //   goto L0(dx24);
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_15, CCP, RHO);
  // p16 = prom<V +>{
  //   from25 = ld from;
  //   from26 = force? from25;
  //   checkMissing(from26);
  //   c39 = `is.object`(from26);
  //   if c39 then L1() else L2(from26);
  // L0(dx27):
  //   return dx27;
  // L1():
  //   dr26 = tryDispatchBuiltin.1("[", from26);
  //   dc13 = getTryDispatchBuiltinDispatched(dr26);
  //   if dc13 then L3() else L2(dr26);
  // L2(from28):
  //   okay26 = ld okay;
  //   okay27 = force? okay26;
  //   __8 = ldf `[` in base;
  //   r115 = dyn __8(from28, okay27);
  //   goto L0(r115);
  // L3():
  //   dx26 = getTryDispatchBuiltinValue(dr26);
  //   goto L0(dx26);
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_16, CCP, RHO);
  // r117 = dyn file_append(p15, p16)
  SEXP Rsh_Fir_array_args195[2];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args195[1] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names50[2];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_reg_r117_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_append, 2, Rsh_Fir_array_args195, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L197() else D78()
  // L197()
  goto L197_;

D78_:;
  // deopt 240 [r117]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_r117_;
  Rsh_Fir_deopt(240, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L197_:;
  // l12 = ld okay
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // c40 = `is.object`(l12)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args196, Rsh_Fir_param_types_empty());
  // if c40 then L198() else L199(r117, l12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L198()
    goto L198_;
  } else {
  // L199(r117, l12)
    Rsh_Fir_reg_r119_ = Rsh_Fir_reg_r117_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l12_;
    goto L199_;
  }

L198_:;
  // dr28 = tryDispatchBuiltin.0("[<-", l12, r117)
  SEXP Rsh_Fir_array_args197[3];
  Rsh_Fir_array_args197[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args197[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args197[2] = Rsh_Fir_reg_r117_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args197);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty());
  // if dc14 then L200() else L199(r117, dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L200()
    goto L200_;
  } else {
  // L199(r117, dr28)
    Rsh_Fir_reg_r119_ = Rsh_Fir_reg_r117_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_dr28_;
    goto L199_;
  }

L199_:;
  // okay28 = ld okay
  Rsh_Fir_reg_okay28_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L201() else D79()
  // L201()
  goto L201_;

L200_:;
  // dx28 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args199, Rsh_Fir_param_types_empty());
  // goto L43(dx28)
  // L43(dx28)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L43_;

D79_:;
  // deopt 242 [r119, l14, r117, okay28]
  SEXP Rsh_Fir_array_deopt_stack63[4];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_r119_;
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack63[2] = Rsh_Fir_reg_r117_;
  Rsh_Fir_array_deopt_stack63[3] = Rsh_Fir_reg_okay28_;
  Rsh_Fir_deopt(242, 4, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L201_:;
  // okay29 = force? okay28
  Rsh_Fir_reg_okay29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay28_);
  // ___4 = ldf `[<-` in base
  Rsh_Fir_reg____4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r122 = dyn ___4(l14, r117, okay29)
  SEXP Rsh_Fir_array_args200[3];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args200[1] = Rsh_Fir_reg_r117_;
  Rsh_Fir_array_args200[2] = Rsh_Fir_reg_okay29_;
  SEXP Rsh_Fir_array_arg_names51[3];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_array_arg_names51[2] = R_MissingArg;
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____4_, 3, Rsh_Fir_array_args200, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L43(r122)
  // L43(r122)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r122_;
  goto L43_;

D80_:;
  // deopt 246 [copy_mode3]
  SEXP Rsh_Fir_array_deopt_stack64[1];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_copy_mode3_;
  Rsh_Fir_deopt(246, 1, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L202_:;
  // copy_mode4 = force? copy_mode3
  Rsh_Fir_reg_copy_mode4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_copy_mode3_);
  // checkMissing(copy_mode4)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_copy_mode4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty()));
  // c41 = `as.logical`(copy_mode4)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_copy_mode4_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty());
  // if c41 then L44(c41) else L203()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c41_)) {
  // L44(c41)
    Rsh_Fir_reg_c42_ = Rsh_Fir_reg_c41_;
    goto L44_;
  } else {
  // L203()
    goto L203_;
  }

L203_:;
  // copy_date3 = ld `copy.date`
  Rsh_Fir_reg_copy_date3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L204() else D81()
  // L204()
  goto L204_;

D81_:;
  // deopt 248 [c41, copy_date3]
  SEXP Rsh_Fir_array_deopt_stack65[2];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_c41_;
  Rsh_Fir_array_deopt_stack65[1] = Rsh_Fir_reg_copy_date3_;
  Rsh_Fir_deopt(248, 2, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

L204_:;
  // copy_date4 = force? copy_date3
  Rsh_Fir_reg_copy_date4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_copy_date3_);
  // checkMissing(copy_date4)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_copy_date4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args203, Rsh_Fir_param_types_empty()));
  // c44 = `as.logical`(copy_date4)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_copy_date4_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty());
  // c45 = `||`(c41, c44)
  SEXP Rsh_Fir_array_args205[2];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_c41_;
  Rsh_Fir_array_args205[1] = Rsh_Fir_reg_c44_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args205, Rsh_Fir_param_types_empty());
  // goto L44(c45)
  // L44(c45)
  Rsh_Fir_reg_c42_ = Rsh_Fir_reg_c45_;
  goto L44_;

L206_:;
  // file_info = ldf `file.info`
  Rsh_Fir_reg_file_info = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // check L207() else D82()
  // L207()
  goto L207_;

D82_:;
  // deopt 252 []
  Rsh_Fir_deopt(252, 0, NULL, CCP, RHO);
  return R_NilValue;

L207_:;
  // p17 = prom<V +>{
  //   from29 = ld from;
  //   from30 = force? from29;
  //   checkMissing(from30);
  //   c48 = `is.object`(from30);
  //   if c48 then L1() else L2(from30);
  // L0(dx31):
  //   return dx31;
  // L1():
  //   dr30 = tryDispatchBuiltin.1("[", from30);
  //   dc15 = getTryDispatchBuiltinDispatched(dr30);
  //   if dc15 then L3() else L2(dr30);
  // L2(from32):
  //   okay30 = ld okay;
  //   okay31 = force? okay30;
  //   __9 = ldf `[` in base;
  //   r123 = dyn __9(from32, okay31);
  //   goto L0(r123);
  // L3():
  //   dx30 = getTryDispatchBuiltinValue(dr30);
  //   goto L0(dx30);
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_17, CCP, RHO);
  // r125 = dyn file_info[, extra_cols](p17, FALSE)
  SEXP Rsh_Fir_array_args212[2];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args212[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names53[2];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_r125_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_info, 2, Rsh_Fir_array_args212, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L208() else D83()
  // L208()
  goto L208_;

D83_:;
  // deopt 256 [r125]
  SEXP Rsh_Fir_array_deopt_stack66[1];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_r125_;
  Rsh_Fir_deopt(256, 1, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L208_:;
  // st fi = r125
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_r125_, RHO);
  (void)(Rsh_Fir_reg_r125_);
  // copy_mode5 = ld `copy.mode`
  Rsh_Fir_reg_copy_mode5_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L209() else D84()
  // L209()
  goto L209_;

D84_:;
  // deopt 258 [copy_mode5]
  SEXP Rsh_Fir_array_deopt_stack67[1];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_copy_mode5_;
  Rsh_Fir_deopt(258, 1, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

L209_:;
  // copy_mode6 = force? copy_mode5
  Rsh_Fir_reg_copy_mode6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_copy_mode5_);
  // checkMissing(copy_mode6)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_copy_mode6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args213, Rsh_Fir_param_types_empty()));
  // c49 = `as.logical`(copy_mode6)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_Fir_reg_copy_mode6_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args214, Rsh_Fir_param_types_empty());
  // if c49 then L210() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c49_)) {
  // L210()
    goto L210_;
  } else {
  // L46()
    goto L46_;
  }

L210_:;
  // Sys_chmod = ldf `Sys.chmod`
  Rsh_Fir_reg_Sys_chmod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // check L211() else D85()
  // L211()
  goto L211_;

D85_:;
  // deopt 261 []
  Rsh_Fir_deopt(261, 0, NULL, CCP, RHO);
  return R_NilValue;

L211_:;
  // p18 = prom<V +>{
  //   to33 = ld to;
  //   to34 = force? to33;
  //   checkMissing(to34);
  //   c50 = `is.object`(to34);
  //   if c50 then L1() else L2(to34);
  // L0(dx33):
  //   return dx33;
  // L1():
  //   dr32 = tryDispatchBuiltin.1("[", to34);
  //   dc16 = getTryDispatchBuiltinDispatched(dr32);
  //   if dc16 then L3() else L2(dr32);
  // L2(to36):
  //   okay32 = ld okay;
  //   okay33 = force? okay32;
  //   __10 = ldf `[` in base;
  //   r126 = dyn __10(to36, okay33);
  //   goto L0(r126);
  // L3():
  //   dx32 = getTryDispatchBuiltinValue(dr32);
  //   goto L0(dx32);
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_18, CCP, RHO);
  // p19 = prom<V +>{
  //   fi = ld fi;
  //   fi1 = force? fi;
  //   checkMissing(fi1);
  //   c51 = `is.object`(fi1);
  //   if c51 then L1() else L2(fi1);
  // L0(dx35):
  //   return dx35;
  // L1():
  //   dr34 = tryDispatchBuiltin.1("$", fi1);
  //   dc17 = getTryDispatchBuiltinDispatched(dr34);
  //   if dc17 then L3() else L2(dr34);
  // L2(fi3):
  //   r128 = `$`(fi3, <sym mode>);
  //   goto L0(r128);
  // L3():
  //   dx34 = getTryDispatchBuiltinValue(dr34);
  //   goto L0(dx34);
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_19, CCP, RHO);
  // r130 = dyn Sys_chmod(p18, p19, TRUE)
  SEXP Rsh_Fir_array_args227[3];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args227[1] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_args227[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names55[3];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_array_arg_names55[2] = R_MissingArg;
  Rsh_Fir_reg_r130_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_chmod, 3, Rsh_Fir_array_args227, Rsh_Fir_array_arg_names55, CCP, RHO);
  // check L212() else D86()
  // L212()
  goto L212_;

D86_:;
  // deopt 265 [r130]
  SEXP Rsh_Fir_array_deopt_stack68[1];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_r130_;
  Rsh_Fir_deopt(265, 1, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L212_:;
  // goto L47()
  // L47()
  goto L47_;

D87_:;
  // deopt 268 [copy_date5]
  SEXP Rsh_Fir_array_deopt_stack69[1];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_copy_date5_;
  Rsh_Fir_deopt(268, 1, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

L214_:;
  // copy_date6 = force? copy_date5
  Rsh_Fir_reg_copy_date6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_copy_date5_);
  // checkMissing(copy_date6)
  SEXP Rsh_Fir_array_args228[1];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_copy_date6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args228, Rsh_Fir_param_types_empty()));
  // c52 = `as.logical`(copy_date6)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_copy_date6_;
  Rsh_Fir_reg_c52_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args229, Rsh_Fir_param_types_empty());
  // if c52 then L215() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c52_)) {
  // L215()
    goto L215_;
  } else {
  // L48()
    goto L48_;
  }

L215_:;
  // Sys_setFileTime = ldf `Sys.setFileTime`
  Rsh_Fir_reg_Sys_setFileTime = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L216() else D88()
  // L216()
  goto L216_;

D88_:;
  // deopt 271 []
  Rsh_Fir_deopt(271, 0, NULL, CCP, RHO);
  return R_NilValue;

L216_:;
  // p20 = prom<V +>{
  //   to37 = ld to;
  //   to38 = force? to37;
  //   checkMissing(to38);
  //   c53 = `is.object`(to38);
  //   if c53 then L1() else L2(to38);
  // L0(dx37):
  //   return dx37;
  // L1():
  //   dr36 = tryDispatchBuiltin.1("[", to38);
  //   dc18 = getTryDispatchBuiltinDispatched(dr36);
  //   if dc18 then L3() else L2(dr36);
  // L2(to40):
  //   okay34 = ld okay;
  //   okay35 = force? okay34;
  //   __11 = ldf `[` in base;
  //   r132 = dyn __11(to40, okay35);
  //   goto L0(r132);
  // L3():
  //   dx36 = getTryDispatchBuiltinValue(dr36);
  //   goto L0(dx36);
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_20, CCP, RHO);
  // p21 = prom<V +>{
  //   fi4 = ld fi;
  //   fi5 = force? fi4;
  //   checkMissing(fi5);
  //   c54 = `is.object`(fi5);
  //   if c54 then L1() else L2(fi5);
  // L0(dx39):
  //   return dx39;
  // L1():
  //   dr38 = tryDispatchBuiltin.1("$", fi5);
  //   dc19 = getTryDispatchBuiltinDispatched(dr38);
  //   if dc19 then L3() else L2(dr38);
  // L2(fi7):
  //   r134 = `$`(fi7, <sym mtime>);
  //   goto L0(r134);
  // L3():
  //   dx38 = getTryDispatchBuiltinValue(dr38);
  //   goto L0(dx38);
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3521078177_21, CCP, RHO);
  // r136 = dyn Sys_setFileTime(p20, p21)
  SEXP Rsh_Fir_array_args242[2];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_p20_;
  Rsh_Fir_array_args242[1] = Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_array_arg_names57[2];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_reg_r136_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_setFileTime, 2, Rsh_Fir_array_args242, Rsh_Fir_array_arg_names57, CCP, RHO);
  // check L217() else D89()
  // L217()
  goto L217_;

D89_:;
  // deopt 274 [r136]
  SEXP Rsh_Fir_array_deopt_stack70[1];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_r136_;
  Rsh_Fir_deopt(274, 1, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L217_:;
  // goto L49(r136)
  // L49(r136)
  Rsh_Fir_reg_r137_ = Rsh_Fir_reg_r136_;
  goto L49_;

D90_:;
  // deopt 283 [okay36]
  SEXP Rsh_Fir_array_deopt_stack71[1];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_okay36_;
  Rsh_Fir_deopt(283, 1, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

L222_:;
  // okay37 = force? okay36
  Rsh_Fir_reg_okay37_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay36_);
  // checkMissing(okay37)
  SEXP Rsh_Fir_array_args243[1];
  Rsh_Fir_array_args243[0] = Rsh_Fir_reg_okay37_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args243, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return okay37
  return Rsh_Fir_reg_okay37_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_(SEXP CCP, SEXP RHO) {
  // recursive1 = ld recursive
  Rsh_Fir_reg_recursive1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // recursive2 = force? recursive1
  Rsh_Fir_reg_recursive2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_recursive1_);
  // checkMissing(recursive2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_recursive2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return recursive2
  return Rsh_Fir_reg_recursive2_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_1(SEXP CCP, SEXP RHO) {
  // to3 = ld to
  Rsh_Fir_reg_to3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // to4 = force? to3
  Rsh_Fir_reg_to4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to3_);
  // checkMissing(to4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_to4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return to4
  return Rsh_Fir_reg_to4_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_2(SEXP CCP, SEXP RHO) {
  // to5 = ld to
  Rsh_Fir_reg_to5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // to6 = force? to5
  Rsh_Fir_reg_to6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to5_);
  // checkMissing(to6)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_to6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return to6
  return Rsh_Fir_reg_to6_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_3(SEXP CCP, SEXP RHO) {
  // from3 = ld from
  Rsh_Fir_reg_from3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // from4 = force? from3
  Rsh_Fir_reg_from4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from3_);
  // checkMissing(from4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_from4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return from4
  return Rsh_Fir_reg_from4_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_4(SEXP CCP, SEXP RHO) {
  // from5 = ld from
  Rsh_Fir_reg_from5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // from6 = force? from5
  Rsh_Fir_reg_from6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from5_);
  // checkMissing(from6)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_from6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // return from6
  return Rsh_Fir_reg_from6_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_5(SEXP CCP, SEXP RHO) {
  // to7 = ld to
  Rsh_Fir_reg_to7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // to8 = force? to7
  Rsh_Fir_reg_to8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to7_);
  // checkMissing(to8)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_to8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return to8
  return Rsh_Fir_reg_to8_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_6(SEXP CCP, SEXP RHO) {
  // from11 = ld from
  Rsh_Fir_reg_from11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // from12 = force? from11
  Rsh_Fir_reg_from12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from11_);
  // checkMissing(from12)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_from12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // return from12
  return Rsh_Fir_reg_from12_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_7(SEXP CCP, SEXP RHO) {
  // to11 = ld to
  Rsh_Fir_reg_to11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // to12 = force? to11
  Rsh_Fir_reg_to12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to11_);
  // checkMissing(to12)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_to12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // return to12
  return Rsh_Fir_reg_to12_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_8(SEXP CCP, SEXP RHO) {
  // from13 = ld from
  Rsh_Fir_reg_from13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // from14 = force? from13
  Rsh_Fir_reg_from14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from13_);
  // checkMissing(from14)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_from14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // c23 = `is.object`(from14)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_from14_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // if c23 then L1() else L2(from14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L1()
    goto L1_;
  } else {
  // L2(from14)
    Rsh_Fir_reg_from16_ = Rsh_Fir_reg_from14_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[", from14)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_from14_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args96);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_from16_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // okay = ld okay
  Rsh_Fir_reg_okay = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // okay1 = force? okay
  Rsh_Fir_reg_okay1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r53 = dyn __(from16, okay1)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_from16_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_okay1_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r53)
  // L0(r53)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r53_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_9(SEXP CCP, SEXP RHO) {
  // to13 = ld to
  Rsh_Fir_reg_to13_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // to14 = force? to13
  Rsh_Fir_reg_to14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to13_);
  // checkMissing(to14)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_to14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // c24 = `is.object`(to14)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_to14_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // if c24 then L1() else L2(to14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L1()
    goto L1_;
  } else {
  // L2(to14)
    Rsh_Fir_reg_to16_ = Rsh_Fir_reg_to14_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[", to14)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_to14_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args103);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_to16_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // okay2 = ld okay
  Rsh_Fir_reg_okay2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // okay3 = force? okay2
  Rsh_Fir_reg_okay3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay2_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r56 = dyn __1(to16, okay3)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_to16_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_okay3_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r56)
  // L0(r56)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r56_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_10(SEXP CCP, SEXP RHO) {
  // to17 = ld to
  Rsh_Fir_reg_to17_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // to18 = force? to17
  Rsh_Fir_reg_to18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to17_);
  // checkMissing(to18)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_to18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // c25 = `is.object`(to18)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_to18_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // if c25 then L1() else L2(to18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L1()
    goto L1_;
  } else {
  // L2(to18)
    Rsh_Fir_reg_to20_ = Rsh_Fir_reg_to18_;
    goto L2_;
  }

L0_:;
  // return dx9
  return Rsh_Fir_reg_dx9_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("[", to18)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_to18_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args111);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_to20_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // okay4 = ld okay
  Rsh_Fir_reg_okay4_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // okay5 = force? okay4
  Rsh_Fir_reg_okay5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay4_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r60 = dyn __2(to20, okay5)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_to20_;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_okay5_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r60)
  // L0(r60)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r60_;
  goto L0_;

L3_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_11(SEXP CCP, SEXP RHO) {
  // from17 = ld from
  Rsh_Fir_reg_from17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // from18 = force? from17
  Rsh_Fir_reg_from18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from17_);
  // checkMissing(from18)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_from18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty()));
  // c28 = `is.object`(from18)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_from18_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // if c28 then L1() else L2(from18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L1()
    goto L1_;
  } else {
  // L2(from18)
    Rsh_Fir_reg_from20_ = Rsh_Fir_reg_from18_;
    goto L2_;
  }

L0_:;
  // return dx13
  return Rsh_Fir_reg_dx13_;

L1_:;
  // dr12 = tryDispatchBuiltin.1("[", from18)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_from18_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args132);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // if dc6 then L3() else L2(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr12)
    Rsh_Fir_reg_from20_ = Rsh_Fir_reg_dr12_;
    goto L2_;
  }

L2_:;
  // okay8 = ld okay
  Rsh_Fir_reg_okay8_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // okay9 = force? okay8
  Rsh_Fir_reg_okay9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay8_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r75 = dyn __3(from20, okay9)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_from20_;
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_okay9_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args134, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L0(r75)
  // L0(r75)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r75_;
  goto L0_;

L3_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // goto L0(dx12)
  // L0(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_12(SEXP CCP, SEXP RHO) {
  // from21 = ld from
  Rsh_Fir_reg_from21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // from22 = force? from21
  Rsh_Fir_reg_from22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from21_);
  // checkMissing(from22)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_from22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(from22)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_from22_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty());
  // if c31 then L1() else L2(from22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L1()
    goto L1_;
  } else {
  // L2(from22)
    Rsh_Fir_reg_from24_ = Rsh_Fir_reg_from22_;
    goto L2_;
  }

L0_:;
  // return dx17
  return Rsh_Fir_reg_dx17_;

L1_:;
  // dr16 = tryDispatchBuiltin.1("[", from22)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_from22_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args152);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // if dc8 then L3() else L2(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr16)
    Rsh_Fir_reg_from24_ = Rsh_Fir_reg_dr16_;
    goto L2_;
  }

L2_:;
  // okay12 = ld okay
  Rsh_Fir_reg_okay12_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // okay13 = force? okay12
  Rsh_Fir_reg_okay13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay12_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r91 = dyn __4(from24, okay13)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_from24_;
  Rsh_Fir_array_args154[1] = Rsh_Fir_reg_okay13_;
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args154, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L0(r91)
  // L0(r91)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r91_;
  goto L0_;

L3_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty());
  // goto L0(dx16)
  // L0(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_13(SEXP CCP, SEXP RHO) {
  // to21 = ld to
  Rsh_Fir_reg_to21_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // to22 = force? to21
  Rsh_Fir_reg_to22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to21_);
  // checkMissing(to22)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_to22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // c32 = `is.object`(to22)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_to22_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // if c32 then L1() else L2(to22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L1()
    goto L1_;
  } else {
  // L2(to22)
    Rsh_Fir_reg_to24_ = Rsh_Fir_reg_to22_;
    goto L2_;
  }

L0_:;
  // return dx19
  return Rsh_Fir_reg_dx19_;

L1_:;
  // dr18 = tryDispatchBuiltin.1("[", to22)
  SEXP Rsh_Fir_array_args158[2];
  Rsh_Fir_array_args158[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args158[1] = Rsh_Fir_reg_to22_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args158);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty());
  // if dc9 then L3() else L2(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr18)
    Rsh_Fir_reg_to24_ = Rsh_Fir_reg_dr18_;
    goto L2_;
  }

L2_:;
  // okay14 = ld okay
  Rsh_Fir_reg_okay14_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // okay15 = force? okay14
  Rsh_Fir_reg_okay15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay14_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r93 = dyn __5(to24, okay15)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_to24_;
  Rsh_Fir_array_args160[1] = Rsh_Fir_reg_okay15_;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L0(r93)
  // L0(r93)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r93_;
  goto L0_;

L3_:;
  // dx18 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty());
  // goto L0(dx18)
  // L0(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_14(SEXP CCP, SEXP RHO) {
  // to25 = ld to
  Rsh_Fir_reg_to25_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // to26 = force? to25
  Rsh_Fir_reg_to26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to25_);
  // checkMissing(to26)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_to26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty()));
  // c35 = `is.object`(to26)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_to26_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args169, Rsh_Fir_param_types_empty());
  // if c35 then L1() else L2(to26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L1()
    goto L1_;
  } else {
  // L2(to26)
    Rsh_Fir_reg_to28_ = Rsh_Fir_reg_to26_;
    goto L2_;
  }

L0_:;
  // return dx21
  return Rsh_Fir_reg_dx21_;

L1_:;
  // dr20 = tryDispatchBuiltin.1("[", to26)
  SEXP Rsh_Fir_array_args170[2];
  Rsh_Fir_array_args170[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args170[1] = Rsh_Fir_reg_to26_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args170);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty());
  // if dc10 then L3() else L2(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr20)
    Rsh_Fir_reg_to28_ = Rsh_Fir_reg_dr20_;
    goto L2_;
  }

L2_:;
  // okay18 = ld okay
  Rsh_Fir_reg_okay18_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // okay19 = force? okay18
  Rsh_Fir_reg_okay19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay18_);
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r102 = dyn __6(to28, okay19)
  SEXP Rsh_Fir_array_args172[2];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_to28_;
  Rsh_Fir_array_args172[1] = Rsh_Fir_reg_okay19_;
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args172, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L0(r102)
  // L0(r102)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r102_;
  goto L0_;

L3_:;
  // dx20 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // goto L0(dx20)
  // L0(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_15(SEXP CCP, SEXP RHO) {
  // to29 = ld to
  Rsh_Fir_reg_to29_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // to30 = force? to29
  Rsh_Fir_reg_to30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to29_);
  // checkMissing(to30)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_to30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty()));
  // c38 = `is.object`(to30)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_to30_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty());
  // if c38 then L1() else L2(to30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L1()
    goto L1_;
  } else {
  // L2(to30)
    Rsh_Fir_reg_to32_ = Rsh_Fir_reg_to30_;
    goto L2_;
  }

L0_:;
  // return dx25
  return Rsh_Fir_reg_dx25_;

L1_:;
  // dr24 = tryDispatchBuiltin.1("[", to30)
  SEXP Rsh_Fir_array_args185[2];
  Rsh_Fir_array_args185[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args185[1] = Rsh_Fir_reg_to30_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args185);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty());
  // if dc12 then L3() else L2(dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr24)
    Rsh_Fir_reg_to32_ = Rsh_Fir_reg_dr24_;
    goto L2_;
  }

L2_:;
  // okay24 = ld okay
  Rsh_Fir_reg_okay24_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // okay25 = force? okay24
  Rsh_Fir_reg_okay25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay24_);
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r113 = dyn __7(to32, okay25)
  SEXP Rsh_Fir_array_args187[2];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_to32_;
  Rsh_Fir_array_args187[1] = Rsh_Fir_reg_okay25_;
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args187, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L0(r113)
  // L0(r113)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r113_;
  goto L0_;

L3_:;
  // dx24 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty());
  // goto L0(dx24)
  // L0(dx24)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_16(SEXP CCP, SEXP RHO) {
  // from25 = ld from
  Rsh_Fir_reg_from25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // from26 = force? from25
  Rsh_Fir_reg_from26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from25_);
  // checkMissing(from26)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_from26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty()));
  // c39 = `is.object`(from26)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_from26_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty());
  // if c39 then L1() else L2(from26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L1()
    goto L1_;
  } else {
  // L2(from26)
    Rsh_Fir_reg_from28_ = Rsh_Fir_reg_from26_;
    goto L2_;
  }

L0_:;
  // return dx27
  return Rsh_Fir_reg_dx27_;

L1_:;
  // dr26 = tryDispatchBuiltin.1("[", from26)
  SEXP Rsh_Fir_array_args191[2];
  Rsh_Fir_array_args191[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args191[1] = Rsh_Fir_reg_from26_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args191);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty());
  // if dc13 then L3() else L2(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr26)
    Rsh_Fir_reg_from28_ = Rsh_Fir_reg_dr26_;
    goto L2_;
  }

L2_:;
  // okay26 = ld okay
  Rsh_Fir_reg_okay26_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // okay27 = force? okay26
  Rsh_Fir_reg_okay27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay26_);
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r115 = dyn __8(from28, okay27)
  SEXP Rsh_Fir_array_args193[2];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_from28_;
  Rsh_Fir_array_args193[1] = Rsh_Fir_reg_okay27_;
  SEXP Rsh_Fir_array_arg_names49[2];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args193, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L0(r115)
  // L0(r115)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r115_;
  goto L0_;

L3_:;
  // dx26 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args194, Rsh_Fir_param_types_empty());
  // goto L0(dx26)
  // L0(dx26)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_17(SEXP CCP, SEXP RHO) {
  // from29 = ld from
  Rsh_Fir_reg_from29_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // from30 = force? from29
  Rsh_Fir_reg_from30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_from29_);
  // checkMissing(from30)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_from30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args206, Rsh_Fir_param_types_empty()));
  // c48 = `is.object`(from30)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_from30_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args207, Rsh_Fir_param_types_empty());
  // if c48 then L1() else L2(from30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c48_)) {
  // L1()
    goto L1_;
  } else {
  // L2(from30)
    Rsh_Fir_reg_from32_ = Rsh_Fir_reg_from30_;
    goto L2_;
  }

L0_:;
  // return dx31
  return Rsh_Fir_reg_dx31_;

L1_:;
  // dr30 = tryDispatchBuiltin.1("[", from30)
  SEXP Rsh_Fir_array_args208[2];
  Rsh_Fir_array_args208[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args208[1] = Rsh_Fir_reg_from30_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args208);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args209, Rsh_Fir_param_types_empty());
  // if dc15 then L3() else L2(dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr30)
    Rsh_Fir_reg_from32_ = Rsh_Fir_reg_dr30_;
    goto L2_;
  }

L2_:;
  // okay30 = ld okay
  Rsh_Fir_reg_okay30_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // okay31 = force? okay30
  Rsh_Fir_reg_okay31_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay30_);
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r123 = dyn __9(from32, okay31)
  SEXP Rsh_Fir_array_args210[2];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_from32_;
  Rsh_Fir_array_args210[1] = Rsh_Fir_reg_okay31_;
  SEXP Rsh_Fir_array_arg_names52[2];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_reg_r123_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args210, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L0(r123)
  // L0(r123)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r123_;
  goto L0_;

L3_:;
  // dx30 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args211[1];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args211, Rsh_Fir_param_types_empty());
  // goto L0(dx30)
  // L0(dx30)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_18(SEXP CCP, SEXP RHO) {
  // to33 = ld to
  Rsh_Fir_reg_to33_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // to34 = force? to33
  Rsh_Fir_reg_to34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to33_);
  // checkMissing(to34)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_to34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty()));
  // c50 = `is.object`(to34)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_to34_;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args216, Rsh_Fir_param_types_empty());
  // if c50 then L1() else L2(to34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c50_)) {
  // L1()
    goto L1_;
  } else {
  // L2(to34)
    Rsh_Fir_reg_to36_ = Rsh_Fir_reg_to34_;
    goto L2_;
  }

L0_:;
  // return dx33
  return Rsh_Fir_reg_dx33_;

L1_:;
  // dr32 = tryDispatchBuiltin.1("[", to34)
  SEXP Rsh_Fir_array_args217[2];
  Rsh_Fir_array_args217[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args217[1] = Rsh_Fir_reg_to34_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args217);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args218[1];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args218, Rsh_Fir_param_types_empty());
  // if dc16 then L3() else L2(dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr32)
    Rsh_Fir_reg_to36_ = Rsh_Fir_reg_dr32_;
    goto L2_;
  }

L2_:;
  // okay32 = ld okay
  Rsh_Fir_reg_okay32_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // okay33 = force? okay32
  Rsh_Fir_reg_okay33_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay32_);
  // __10 = ldf `[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r126 = dyn __10(to36, okay33)
  SEXP Rsh_Fir_array_args219[2];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_to36_;
  Rsh_Fir_array_args219[1] = Rsh_Fir_reg_okay33_;
  SEXP Rsh_Fir_array_arg_names54[2];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_reg_r126_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 2, Rsh_Fir_array_args219, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L0(r126)
  // L0(r126)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_r126_;
  goto L0_;

L3_:;
  // dx32 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx32_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args220, Rsh_Fir_param_types_empty());
  // goto L0(dx32)
  // L0(dx32)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx32_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_19(SEXP CCP, SEXP RHO) {
  // fi = ld fi
  Rsh_Fir_reg_fi = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // fi1 = force? fi
  Rsh_Fir_reg_fi1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fi);
  // checkMissing(fi1)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_fi1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args221, Rsh_Fir_param_types_empty()));
  // c51 = `is.object`(fi1)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_fi1_;
  Rsh_Fir_reg_c51_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args222, Rsh_Fir_param_types_empty());
  // if c51 then L1() else L2(fi1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c51_)) {
  // L1()
    goto L1_;
  } else {
  // L2(fi1)
    Rsh_Fir_reg_fi3_ = Rsh_Fir_reg_fi1_;
    goto L2_;
  }

L0_:;
  // return dx35
  return Rsh_Fir_reg_dx35_;

L1_:;
  // dr34 = tryDispatchBuiltin.1("$", fi1)
  SEXP Rsh_Fir_array_args223[2];
  Rsh_Fir_array_args223[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args223[1] = Rsh_Fir_reg_fi1_;
  Rsh_Fir_reg_dr34_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args223);
  // dc17 = getTryDispatchBuiltinDispatched(dr34)
  SEXP Rsh_Fir_array_args224[1];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dc17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args224, Rsh_Fir_param_types_empty());
  // if dc17 then L3() else L2(dr34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc17_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr34)
    Rsh_Fir_reg_fi3_ = Rsh_Fir_reg_dr34_;
    goto L2_;
  }

L2_:;
  // r128 = `$`(fi3, <sym mode>)
  SEXP Rsh_Fir_array_args225[2];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_fi3_;
  Rsh_Fir_array_args225[1] = Rsh_const(CCP, 54);
  Rsh_Fir_reg_r128_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args225, Rsh_Fir_param_types_empty());
  // goto L0(r128)
  // L0(r128)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_r128_;
  goto L0_;

L3_:;
  // dx34 = getTryDispatchBuiltinValue(dr34)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_dr34_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty());
  // goto L0(dx34)
  // L0(dx34)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx34_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_20(SEXP CCP, SEXP RHO) {
  // to37 = ld to
  Rsh_Fir_reg_to37_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // to38 = force? to37
  Rsh_Fir_reg_to38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_to37_);
  // checkMissing(to38)
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_to38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args230, Rsh_Fir_param_types_empty()));
  // c53 = `is.object`(to38)
  SEXP Rsh_Fir_array_args231[1];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_to38_;
  Rsh_Fir_reg_c53_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args231, Rsh_Fir_param_types_empty());
  // if c53 then L1() else L2(to38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c53_)) {
  // L1()
    goto L1_;
  } else {
  // L2(to38)
    Rsh_Fir_reg_to40_ = Rsh_Fir_reg_to38_;
    goto L2_;
  }

L0_:;
  // return dx37
  return Rsh_Fir_reg_dx37_;

L1_:;
  // dr36 = tryDispatchBuiltin.1("[", to38)
  SEXP Rsh_Fir_array_args232[2];
  Rsh_Fir_array_args232[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args232[1] = Rsh_Fir_reg_to38_;
  Rsh_Fir_reg_dr36_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args232);
  // dc18 = getTryDispatchBuiltinDispatched(dr36)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dc18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty());
  // if dc18 then L3() else L2(dr36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc18_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr36)
    Rsh_Fir_reg_to40_ = Rsh_Fir_reg_dr36_;
    goto L2_;
  }

L2_:;
  // okay34 = ld okay
  Rsh_Fir_reg_okay34_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // okay35 = force? okay34
  Rsh_Fir_reg_okay35_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_okay34_);
  // __11 = ldf `[` in base
  Rsh_Fir_reg___11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r132 = dyn __11(to40, okay35)
  SEXP Rsh_Fir_array_args234[2];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_to40_;
  Rsh_Fir_array_args234[1] = Rsh_Fir_reg_okay35_;
  SEXP Rsh_Fir_array_arg_names56[2];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_reg_r132_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___11_, 2, Rsh_Fir_array_args234, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L0(r132)
  // L0(r132)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_r132_;
  goto L0_;

L3_:;
  // dx36 = getTryDispatchBuiltinValue(dr36)
  SEXP Rsh_Fir_array_args235[1];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_dr36_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args235, Rsh_Fir_param_types_empty());
  // goto L0(dx36)
  // L0(dx36)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx36_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3521078177_21(SEXP CCP, SEXP RHO) {
  // fi4 = ld fi
  Rsh_Fir_reg_fi4_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // fi5 = force? fi4
  Rsh_Fir_reg_fi5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fi4_);
  // checkMissing(fi5)
  SEXP Rsh_Fir_array_args236[1];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_fi5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args236, Rsh_Fir_param_types_empty()));
  // c54 = `is.object`(fi5)
  SEXP Rsh_Fir_array_args237[1];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_fi5_;
  Rsh_Fir_reg_c54_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args237, Rsh_Fir_param_types_empty());
  // if c54 then L1() else L2(fi5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c54_)) {
  // L1()
    goto L1_;
  } else {
  // L2(fi5)
    Rsh_Fir_reg_fi7_ = Rsh_Fir_reg_fi5_;
    goto L2_;
  }

L0_:;
  // return dx39
  return Rsh_Fir_reg_dx39_;

L1_:;
  // dr38 = tryDispatchBuiltin.1("$", fi5)
  SEXP Rsh_Fir_array_args238[2];
  Rsh_Fir_array_args238[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args238[1] = Rsh_Fir_reg_fi5_;
  Rsh_Fir_reg_dr38_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args238);
  // dc19 = getTryDispatchBuiltinDispatched(dr38)
  SEXP Rsh_Fir_array_args239[1];
  Rsh_Fir_array_args239[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dc19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args239, Rsh_Fir_param_types_empty());
  // if dc19 then L3() else L2(dr38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc19_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr38)
    Rsh_Fir_reg_fi7_ = Rsh_Fir_reg_dr38_;
    goto L2_;
  }

L2_:;
  // r134 = `$`(fi7, <sym mtime>)
  SEXP Rsh_Fir_array_args240[2];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_fi7_;
  Rsh_Fir_array_args240[1] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r134_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args240, Rsh_Fir_param_types_empty());
  // goto L0(r134)
  // L0(r134)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_r134_;
  goto L0_;

L3_:;
  // dx38 = getTryDispatchBuiltinValue(dr38)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_dr38_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args241, Rsh_Fir_param_types_empty());
  // goto L0(dx38)
  // L0(dx38)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx38_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
