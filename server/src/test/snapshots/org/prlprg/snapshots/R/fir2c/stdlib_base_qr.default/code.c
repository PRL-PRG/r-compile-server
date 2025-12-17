#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner56719774_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner56719774_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner56719774_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner56719774_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner56719774_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner56719774_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner56719774_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner56719774_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner56719774_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner56719774_7(SEXP CCP, SEXP RHO);
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
  // r = clos inner56719774
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner56719774_, RHO, CCP);
  // st `qr.default` = r
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
SEXP Rsh_Fir_user_function_inner56719774_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner56719774 dynamic dispatch ([x, tol, LAPACK, `...`])

  return Rsh_Fir_user_version_inner56719774_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner56719774_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner56719774 version 0 (*, *, *, dots -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner56719774/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_tol;  // tol
  SEXP Rsh_Fir_reg_LAPACK;  // LAPACK
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_tol_isMissing;  // tol_isMissing
  SEXP Rsh_Fir_reg_tol_orDefault;  // tol_orDefault
  SEXP Rsh_Fir_reg_LAPACK_isMissing;  // LAPACK_isMissing
  SEXP Rsh_Fir_reg_LAPACK_orDefault;  // LAPACK_orDefault
  SEXP Rsh_Fir_reg_as_matrix;  // as_matrix
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_structure;  // structure
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_La_qr_cmplx;  // La_qr_cmplx
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_LAPACK1_;  // LAPACK1
  SEXP Rsh_Fir_reg_LAPACK2_;  // LAPACK2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_structure1_;  // structure1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_La_qr;  // La_qr
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_ncol;  // ncol
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_nrow;  // nrow
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_as_integer1_;  // as_integer1
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_storage_mode__;  // storage_mode__
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg__F_dqrdc2_;  // _F_dqrdc2
  SEXP Rsh_Fir_reg__F_dqrdc3_;  // _F_dqrdc3
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_tol1_;  // tol1
  SEXP Rsh_Fir_reg_tol2_;  // tol2
  SEXP Rsh_Fir_reg_as_double;  // as_double
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_integer;  // integer
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_double;  // double
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_as_integer2_;  // as_integer2
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_double1_;  // double1
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg__Fortran;  // _Fortran
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_colnames;  // colnames
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_p19_;  // p19
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_cn;  // cn
  SEXP Rsh_Fir_reg_cn1_;  // cn1
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_cn3_;  // cn3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_res;  // res
  SEXP Rsh_Fir_reg_res1_;  // res1
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_cn5_;  // cn5
  SEXP Rsh_Fir_reg_res3_;  // res3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_cn7_;  // cn7
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_colnames__;  // colnames__
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_res4_;  // res4
  SEXP Rsh_Fir_reg_res5_;  // res5

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_tol = PARAMS[1];
  Rsh_Fir_reg_LAPACK = PARAMS[2];
  Rsh_Fir_reg_ddd = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // tol_isMissing = missing.0(tol)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_tol;
  Rsh_Fir_reg_tol_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if tol_isMissing then L0(1.0E-7) else L0(tol)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_tol_isMissing)) {
  // L0(1.0E-7)
    Rsh_Fir_reg_tol_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(tol)
    Rsh_Fir_reg_tol_orDefault = Rsh_Fir_reg_tol;
    goto L0_;
  }

L0_:;
  // st tol = tol_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_tol_orDefault, RHO);
  (void)(Rsh_Fir_reg_tol_orDefault);
  // LAPACK_isMissing = missing.0(LAPACK)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_LAPACK;
  Rsh_Fir_reg_LAPACK_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if LAPACK_isMissing then L1(FALSE) else L1(LAPACK)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_LAPACK_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_LAPACK_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(LAPACK)
    Rsh_Fir_reg_LAPACK_orDefault = Rsh_Fir_reg_LAPACK;
    goto L1_;
  }

L1_:;
  // st LAPACK = LAPACK_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_LAPACK_orDefault, RHO);
  (void)(Rsh_Fir_reg_LAPACK_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // as_matrix = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L27() else D0()
  // L27()
  goto L27_;

L2_:;
  // c1 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L32() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L32()
    goto L32_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // LAPACK1 = ld LAPACK
  Rsh_Fir_reg_LAPACK1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L37() else D5()
  // L37()
  goto L37_;

L5_:;
  // sym3 = ldf `as.integer`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base3 = ldf `as.integer` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard3 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L7_:;
  // st p = r19
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // sym4 = ldf `is.na`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base4 = ldf `is.na` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard4 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L8_:;
  // c3 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c3 then L52() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L52()
    goto L52_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // sym5 = ldf `as.integer`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base5 = ldf `as.integer` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard5 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L11_:;
  // st n = r29
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // sym6 = ldf `is.na`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base6 = ldf `is.na` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard6 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

L12_:;
  // c4 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c4 then L65() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L65()
    goto L65_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L69() else D22()
  // L69()
  goto L69_;

L15_:;
  // goto L16()
  // L16()
  goto L16_;

L16_:;
  // l = ld x
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // storage_mode__ = ldf `storage.mode<-`
  Rsh_Fir_reg_storage_mode__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L75() else D26()
  // L75()
  goto L75_;

L17_:;
  // c6 = `is.object`(r45)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c6 then L101() else L102(r45)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L101()
    goto L101_;
  } else {
  // L102(r45)
    Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r45_;
    goto L102_;
  }

L18_:;
  // integer = ldf integer
  Rsh_Fir_reg_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L88() else D35()
  // L88()
  goto L88_;

L19_:;
  // double1 = ldf double
  Rsh_Fir_reg_double1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L98() else D41()
  // L98()
  goto L98_;

L20_:;
  // as_integer2 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r57 = dyn as_integer2(r55)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer2_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L97() else D40()
  // L97()
  goto L97_;

L21_:;
  // st res = dx1
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym12 = ldf `is.null`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base12 = ldf `is.null` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard12 then L107() else L108()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L107()
    goto L107_;
  } else {
  // L108()
    goto L108_;
  }

L22_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r70 = dyn __(r67, r68)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L21(r70)
  // L21(r70)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r70_;
  goto L21_;

L23_:;
  // r75 = `!`(r72)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r75)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c9 then L111() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L111()
    goto L111_;
  } else {
  // L24()
    goto L24_;
  }

L24_:;
  // goto L26()
  // L26()
  goto L26_;

L25_:;
  // l1 = ld res
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // c12 = `is.object`(l1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c12 then L122() else L123(dx3, l1, dx3, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L122()
    goto L122_;
  } else {
  // L123(dx3, l1, dx3, l1)
    Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx3_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l1_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx3_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l1_;
    goto L123_;
  }

L26_:;
  // l10 = ld res
  Rsh_Fir_reg_l10_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L132() else D51()
  // L132()
  goto L132_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner56719774_, CCP, RHO);
  // r1 = dyn as_matrix(p)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L28() else D1()
  // L28()
  goto L28_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L28_:;
  // st x = r1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym = ldf `is.complex`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base = ldf `is.complex` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L29_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L31() else D2()
  // L31()
  goto L31_;

L30_:;
  // r2 = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L2_;

D2_:;
  // deopt 6 [x3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L31_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // c = `is.complex`(x4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(388, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L2(c)
  // L2(c)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_c;
  goto L2_;

L32_:;
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L33() else D3()
  // L33()
  goto L33_;

D3_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // p1 = prom<V +>{
  //   sym1 = ldf `.Internal`;
  //   base1 = ldf `.Internal` in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r5):
  //   return r5;
  // L1():
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   La_qr_cmplx = ldf La_qr_cmplx in base;
  //   r6 = dyn La_qr_cmplx(x6);
  //   goto L0(r6);
  // L2():
  //   r4 = dyn base1(<lang La_qr_cmplx(x)>);
  //   goto L0(r4);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner56719774_1, CCP, RHO);
  // r8 = dyn structure[, class](p1, "qr")
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L34() else D4()
  // L34()
  goto L34_;

D4_:;
  // deopt 14 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L34_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r8
  return Rsh_Fir_reg_r8_;

D5_:;
  // deopt 18 [LAPACK1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_LAPACK1_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L37_:;
  // LAPACK2 = force? LAPACK1
  Rsh_Fir_reg_LAPACK2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LAPACK1_);
  // checkMissing(LAPACK2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_LAPACK2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // c2 = `as.logical`(LAPACK2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_LAPACK2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c2 then L38() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L38()
    goto L38_;
  } else {
  // L5()
    goto L5_;
  }

L38_:;
  // structure1 = ldf structure
  Rsh_Fir_reg_structure1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L39() else D6()
  // L39()
  goto L39_;

D6_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // p2 = prom<V +>{
  //   sym2 = ldf `.Internal`;
  //   base2 = ldf `.Internal` in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r12):
  //   return r12;
  // L1():
  //   x7 = ld x;
  //   x8 = force? x7;
  //   checkMissing(x8);
  //   La_qr = ldf La_qr in base;
  //   r13 = dyn La_qr(x8);
  //   goto L0(r13);
  // L2():
  //   r11 = dyn base2(<lang La_qr(x)>);
  //   goto L0(r11);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner56719774_2, CCP, RHO);
  // r15 = dyn structure1[, useLAPACK, class](p2, TRUE, "qr")
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args33[2] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_arg_names9[2] = Rsh_const(CCP, 25);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure1_, 3, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L40() else D7()
  // L40()
  goto L40_;

D7_:;
  // deopt 27 [r15]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L40_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r15
  return Rsh_Fir_reg_r15_;

L43_:;
  // ncol = ldf ncol
  Rsh_Fir_reg_ncol = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L45() else D8()
  // L45()
  goto L45_;

L44_:;
  // r18 = dyn base3(<lang ncol(x)>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L7(r18)
  // L7(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L7_;

D8_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L45_:;
  // p3 = prom<V +>{
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   return x10;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner56719774_3, CCP, RHO);
  // r21 = dyn ncol(p3)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ncol, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L46() else D9()
  // L46()
  goto L46_;

D9_:;
  // deopt 36 [r21]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L46_:;
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r22 = dyn as_integer(r21)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L47() else D10()
  // L47()
  goto L47_;

D10_:;
  // deopt 38 [r22]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L7(r22)
  // L7(r22)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r22_;
  goto L7_;

L48_:;
  // p4 = ld p
  Rsh_Fir_reg_p4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L50() else D11()
  // L50()
  goto L50_;

L49_:;
  // r23 = dyn base4(<sym p>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L8(r23)
  // L8(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L8_;

D11_:;
  // deopt 42 [p4]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L50_:;
  // p5 = force? p4
  Rsh_Fir_reg_p5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p4_);
  // checkMissing(p5)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r25 = dyn is_na(p5)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L51() else D12()
  // L51()
  goto L51_;

D12_:;
  // deopt 45 [r25]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L8(r25)
  // L8(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L8_;

L52_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L53() else D13()
  // L53()
  goto L53_;

D13_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L53_:;
  // r26 = dyn stop("invalid ncol(x)")
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L54() else D14()
  // L54()
  goto L54_;

D14_:;
  // deopt 49 [r26]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L54_:;
  // goto L10()
  // L10()
  goto L10_;

L56_:;
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L58() else D15()
  // L58()
  goto L58_;

L57_:;
  // r28 = dyn base5(<lang nrow(x)>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L11(r28)
  // L11(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L11_;

D15_:;
  // deopt 55 []
  Rsh_Fir_deopt(55, 0, NULL, CCP, RHO);
  return R_NilValue;

L58_:;
  // p6 = prom<V +>{
  //   x11 = ld x;
  //   x12 = force? x11;
  //   checkMissing(x12);
  //   return x12;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner56719774_4, CCP, RHO);
  // r31 = dyn nrow(p6)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L59() else D16()
  // L59()
  goto L59_;

D16_:;
  // deopt 57 [r31]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L59_:;
  // as_integer1 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r32 = dyn as_integer1(r31)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer1_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L60() else D17()
  // L60()
  goto L60_;

D17_:;
  // deopt 59 [r32]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L60_:;
  // goto L11(r32)
  // L11(r32)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r32_;
  goto L11_;

L61_:;
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L63() else D18()
  // L63()
  goto L63_;

L62_:;
  // r33 = dyn base6(<sym n>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L12(r33)
  // L12(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L12_;

D18_:;
  // deopt 63 [n]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L63_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r35 = dyn is_na1(n1)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L64() else D19()
  // L64()
  goto L64_;

D19_:;
  // deopt 66 [r35]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L64_:;
  // goto L12(r35)
  // L12(r35)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L12_;

L65_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L66() else D20()
  // L66()
  goto L66_;

D20_:;
  // deopt 68 []
  Rsh_Fir_deopt(68, 0, NULL, CCP, RHO);
  return R_NilValue;

L66_:;
  // r36 = dyn stop1("invalid nrow(x)")
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L67() else D21()
  // L67()
  goto L67_;

D21_:;
  // deopt 70 [r36]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L67_:;
  // goto L14()
  // L14()
  goto L14_;

D22_:;
  // deopt 74 [1.0, n2]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(74, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L69_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // r38 = `*`(1.0, n3)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // p7 = ld p
  Rsh_Fir_reg_p7_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L70() else D23()
  // L70()
  goto L70_;

D23_:;
  // deopt 76 [r38, p7]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_deopt(76, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L70_:;
  // p8 = force? p7
  Rsh_Fir_reg_p8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p7_);
  // checkMissing(p8)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r39 = `*`(r38, p8)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // r40 = `>`(r39, 2.147483647E9)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // c5 = `as.logical`(r40)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if c5 then L71() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L71()
    goto L71_;
  } else {
  // L15()
    goto L15_;
  }

L71_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L72() else D24()
  // L72()
  goto L72_;

D24_:;
  // deopt 82 []
  Rsh_Fir_deopt(82, 0, NULL, CCP, RHO);
  return R_NilValue;

L72_:;
  // r41 = dyn stop2("too large a matrix for LINPACK")
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L73() else D25()
  // L73()
  goto L73_;

D25_:;
  // deopt 84 [r41]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L73_:;
  // goto L16()
  // L16()
  goto L16_;

D26_:;
  // deopt 90 ["double", l, "double"]
  SEXP Rsh_Fir_array_deopt_stack18[3];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_const(CCP, 40);
  Rsh_Fir_deopt(90, 3, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L75_:;
  // r43 = dyn storage_mode__(l, NULL, "double")
  SEXP Rsh_Fir_array_args57[3];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args57[2] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode__, 3, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L76() else D27()
  // L76()
  goto L76_;

D27_:;
  // deopt 92 ["double", r43]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(92, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L76_:;
  // st x = r43
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // sym7 = ldf `.Fortran`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base7 = ldf `.Fortran` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard7 then L77() else L78()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L77()
    goto L77_;
  } else {
  // L78()
    goto L78_;
  }

L77_:;
  // _F_dqrdc2 = ld `.F_dqrdc2`
  Rsh_Fir_reg__F_dqrdc2_ = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // check L79() else D28()
  // L79()
  goto L79_;

L78_:;
  // r44 = dyn base7[, qr, , , , , rank, qraux, pivot, ](<sym .F_dqrdc2>, <sym x>, <sym n>, <sym n>, <sym p>, <lang as.double(tol)>, <lang integer(1)>, <lang double(p)>, <lang as.integer(seq_len(p))>, <lang double(`*`(2, p))>)
  SEXP Rsh_Fir_array_args59[10];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args59[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args59[3] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args59[4] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args59[5] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args59[6] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args59[7] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args59[8] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args59[9] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names24[10];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = Rsh_const(CCP, 49);
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_array_arg_names24[4] = R_MissingArg;
  Rsh_Fir_array_arg_names24[5] = R_MissingArg;
  Rsh_Fir_array_arg_names24[6] = Rsh_const(CCP, 50);
  Rsh_Fir_array_arg_names24[7] = Rsh_const(CCP, 51);
  Rsh_Fir_array_arg_names24[8] = Rsh_const(CCP, 52);
  Rsh_Fir_array_arg_names24[9] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 10, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L17(r44)
  // L17(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L17_;

D28_:;
  // deopt 96 [_F_dqrdc2]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg__F_dqrdc2_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L79_:;
  // _F_dqrdc3 = force? _F_dqrdc2
  Rsh_Fir_reg__F_dqrdc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__F_dqrdc2_);
  // checkMissing(_F_dqrdc3)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg__F_dqrdc3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L80() else D29()
  // L80()
  goto L80_;

D29_:;
  // deopt 98 [x13]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L80_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L81() else D30()
  // L81()
  goto L81_;

D30_:;
  // deopt 101 [n4]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L81_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // n6 = ld n
  Rsh_Fir_reg_n6_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L82() else D31()
  // L82()
  goto L82_;

D31_:;
  // deopt 103 [n6]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_n6_;
  Rsh_Fir_deopt(103, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L82_:;
  // n7 = force? n6
  Rsh_Fir_reg_n7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n6_);
  // checkMissing(n7)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_n7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // p9 = ld p
  Rsh_Fir_reg_p9_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L83() else D32()
  // L83()
  goto L83_;

D32_:;
  // deopt 105 [p9]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L83_:;
  // p10 = force? p9
  Rsh_Fir_reg_p10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p9_);
  // checkMissing(p10)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_p10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // sym8 = ldf `as.double`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // base8 = ldf `as.double` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args65);
  // if guard8 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L84_:;
  // tol1 = ld tol
  Rsh_Fir_reg_tol1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L86() else D33()
  // L86()
  goto L86_;

L85_:;
  // r46 = dyn base8(<sym tol>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L18(r46)
  // L18(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L18_;

D33_:;
  // deopt 109 [tol1]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_tol1_;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L86_:;
  // tol2 = force? tol1
  Rsh_Fir_reg_tol2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tol1_);
  // checkMissing(tol2)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_tol2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // as_double = ldf `as.double` in base
  Rsh_Fir_reg_as_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r48 = dyn as_double(tol2)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_tol2_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L87() else D34()
  // L87()
  goto L87_;

D34_:;
  // deopt 112 [r48]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L87_:;
  // goto L18(r48)
  // L18(r48)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L18_;

D35_:;
  // deopt 114 []
  Rsh_Fir_deopt(114, 0, NULL, CCP, RHO);
  return R_NilValue;

L88_:;
  // r49 = dyn integer(1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_integer, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L89() else D36()
  // L89()
  goto L89_;

D36_:;
  // deopt 116 [r49]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L89_:;
  // double = ldf double
  Rsh_Fir_reg_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L90() else D37()
  // L90()
  goto L90_;

D37_:;
  // deopt 119 []
  Rsh_Fir_deopt(119, 0, NULL, CCP, RHO);
  return R_NilValue;

L90_:;
  // p13 = prom<V +>{
  //   p11 = ld p;
  //   p12 = force? p11;
  //   checkMissing(p12);
  //   return p12;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner56719774_5, CCP, RHO);
  // r51 = dyn double(p13)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_double, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L91() else D38()
  // L91()
  goto L91_;

D38_:;
  // deopt 121 [r51]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L91_:;
  // sym9 = ldf `as.integer`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base9 = ldf `as.integer` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args72);
  // if guard9 then L92() else L93()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L92()
    goto L92_;
  } else {
  // L93()
    goto L93_;
  }

L92_:;
  // sym10 = ldf seq_len
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // base10 = ldf seq_len in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard10 then L94() else L95()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L94()
    goto L94_;
  } else {
  // L95()
    goto L95_;
  }

L93_:;
  // r52 = dyn base9(<lang seq_len(p)>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L19(r52)
  // L19(r52)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L19_;

L94_:;
  // p14 = ld p
  Rsh_Fir_reg_p14_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L96() else D39()
  // L96()
  goto L96_;

L95_:;
  // r54 = dyn base10(<sym p>)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L20(r54)
  // L20(r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L20_;

D39_:;
  // deopt 126 [p14]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L96_:;
  // p15 = force? p14
  Rsh_Fir_reg_p15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p14_);
  // checkMissing(p15)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_p15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // r56 = seq_len(p15)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L20(r56)
  // L20(r56)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r56_;
  goto L20_;

D40_:;
  // deopt 130 [r57]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L97_:;
  // goto L19(r57)
  // L19(r57)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r57_;
  goto L19_;

D41_:;
  // deopt 133 []
  Rsh_Fir_deopt(133, 0, NULL, CCP, RHO);
  return R_NilValue;

L98_:;
  // p18 = prom<V +>{
  //   p16 = ld p;
  //   p17 = force? p16;
  //   checkMissing(p17);
  //   r58 = `*`(2, p17);
  //   return r58;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner56719774_6, CCP, RHO);
  // r60 = dyn double1(p18)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_double1_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L99() else D42()
  // L99()
  goto L99_;

D42_:;
  // deopt 135 [r60]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(135, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L99_:;
  // _Fortran = ldf `.Fortran` in base
  Rsh_Fir_reg__Fortran = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r61 = dyn _Fortran(_F_dqrdc3, x14, n5, n7, p10, r47, r49, r51, r53, r60)
  SEXP Rsh_Fir_array_args81[10];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg__F_dqrdc3_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_x14_;
  Rsh_Fir_array_args81[2] = Rsh_Fir_reg_n5_;
  Rsh_Fir_array_args81[3] = Rsh_Fir_reg_n7_;
  Rsh_Fir_array_args81[4] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args81[5] = Rsh_Fir_reg_r47_;
  Rsh_Fir_array_args81[6] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_args81[7] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_args81[8] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_args81[9] = Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_array_arg_names32[10];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_array_arg_names32[2] = R_MissingArg;
  Rsh_Fir_array_arg_names32[3] = R_MissingArg;
  Rsh_Fir_array_arg_names32[4] = R_MissingArg;
  Rsh_Fir_array_arg_names32[5] = R_MissingArg;
  Rsh_Fir_array_arg_names32[6] = R_MissingArg;
  Rsh_Fir_array_arg_names32[7] = R_MissingArg;
  Rsh_Fir_array_arg_names32[8] = R_MissingArg;
  Rsh_Fir_array_arg_names32[9] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__Fortran, 10, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L100() else D43()
  // L100()
  goto L100_;

D43_:;
  // deopt 137 [r61]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L100_:;
  // goto L17(r61)
  // L17(r61)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r61_;
  goto L17_;

L101_:;
  // dr = tryDispatchBuiltin.1("[", r45)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args82);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if dc then L103() else L102(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L103()
    goto L103_;
  } else {
  // L102(dr)
    Rsh_Fir_reg_r63_ = Rsh_Fir_reg_dr;
    goto L102_;
  }

L102_:;
  // sym11 = ldf c
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // base11 = ldf c in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args84);
  // if guard11 then L104() else L105()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L104()
    goto L104_;
  } else {
  // L105()
    goto L105_;
  }

L103_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // goto L21(dx)
  // L21(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L21_;

L104_:;
  // c7 = ldf c in base
  Rsh_Fir_reg_c7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 59), RHO);
  // r69 = dyn c7(1.0, 6.0, 7.0, 8.0)
  SEXP Rsh_Fir_array_args86[4];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args86[2] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args86[3] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names33[4];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_array_arg_names33[3] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c7_, 4, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L106() else D44()
  // L106()
  goto L106_;

L105_:;
  // r66 = dyn base11(1.0, 6.0, 7.0, 8.0)
  SEXP Rsh_Fir_array_args87[4];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args87[2] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args87[3] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names34[4];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_array_arg_names34[3] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 4, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L22(r63, r66)
  // L22(r63, r66)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r66_;
  goto L22_;

D44_:;
  // deopt 145 [r63, r69]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(145, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L106_:;
  // goto L22(r63, r69)
  // L22(r63, r69)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r69_;
  goto L22_;

L107_:;
  // colnames = ldf colnames
  Rsh_Fir_reg_colnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // check L109() else D45()
  // L109()
  goto L109_;

L108_:;
  // r71 = dyn base12(<lang `<-`(cn, colnames(x))>)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L23(r71)
  // L23(r71)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r71_;
  goto L23_;

D45_:;
  // deopt 150 []
  Rsh_Fir_deopt(150, 0, NULL, CCP, RHO);
  return R_NilValue;

L109_:;
  // p19 = prom<V +>{
  //   x15 = ld x;
  //   x16 = force? x15;
  //   checkMissing(x16);
  //   return x16;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner56719774_7, CCP, RHO);
  // r74 = dyn colnames(p19)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colnames, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L110() else D46()
  // L110()
  goto L110_;

D46_:;
  // deopt 152 [r74]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(152, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L110_:;
  // st cn = r74
  Rsh_Fir_store(Rsh_const(CCP, 65), Rsh_Fir_reg_r74_, RHO);
  (void)(Rsh_Fir_reg_r74_);
  // c8 = `==`(r74, NULL)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_array_args91[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // goto L23(c8)
  // L23(c8)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_c8_;
  goto L23_;

L111_:;
  // cn = ld cn
  Rsh_Fir_reg_cn = Rsh_Fir_load(Rsh_const(CCP, 65), RHO);
  // check L112() else D47()
  // L112()
  goto L112_;

D47_:;
  // deopt 156 [cn]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_cn;
  Rsh_Fir_deopt(156, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L112_:;
  // cn1 = force? cn
  Rsh_Fir_reg_cn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cn);
  // checkMissing(cn1)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_cn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(cn1)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_cn1_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if c10 then L113() else L114(cn1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L113()
    goto L113_;
  } else {
  // L114(cn1)
    Rsh_Fir_reg_cn3_ = Rsh_Fir_reg_cn1_;
    goto L114_;
  }

L113_:;
  // dr2 = tryDispatchBuiltin.1("[", cn1)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_cn1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args94);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // if dc1 then L115() else L114(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L115()
    goto L115_;
  } else {
  // L114(dr2)
    Rsh_Fir_reg_cn3_ = Rsh_Fir_reg_dr2_;
    goto L114_;
  }

L114_:;
  // res = ld res
  Rsh_Fir_reg_res = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L116() else D48()
  // L116()
  goto L116_;

L115_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // goto L25(dx2)
  // L25(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L25_;

D48_:;
  // deopt 158 [cn3, res]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_cn3_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_res;
  Rsh_Fir_deopt(158, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L116_:;
  // res1 = force? res
  Rsh_Fir_reg_res1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res);
  // checkMissing(res1)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_res1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(res1)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_res1_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // if c11 then L118() else L119(cn3, res1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L118()
    goto L118_;
  } else {
  // L119(cn3, res1)
    Rsh_Fir_reg_cn5_ = Rsh_Fir_reg_cn3_;
    Rsh_Fir_reg_res3_ = Rsh_Fir_reg_res1_;
    goto L119_;
  }

L117_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r77 = dyn __1(cn7, dx5)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_cn7_;
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L25(r77)
  // L25(r77)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r77_;
  goto L25_;

L118_:;
  // dr4 = tryDispatchBuiltin.1("$", res1)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_res1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args100);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if dc2 then L120() else L119(cn3, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L120()
    goto L120_;
  } else {
  // L119(cn3, dr4)
    Rsh_Fir_reg_cn5_ = Rsh_Fir_reg_cn3_;
    Rsh_Fir_reg_res3_ = Rsh_Fir_reg_dr4_;
    goto L119_;
  }

L119_:;
  // r76 = `$`(res3, <sym pivot>)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_res3_;
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 52);
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // goto L117(cn5, r76)
  // L117(cn5, r76)
  Rsh_Fir_reg_cn7_ = Rsh_Fir_reg_cn5_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r76_;
  goto L117_;

L120_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // goto L117(cn3, dx4)
  // L117(cn3, dx4)
  Rsh_Fir_reg_cn7_ = Rsh_Fir_reg_cn3_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L117_;

L121_:;
  // colnames__ = ldf `colnames<-`
  Rsh_Fir_reg_colnames__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // check L125() else D49()
  // L125()
  goto L125_;

L122_:;
  // dr6 = tryDispatchBuiltin.1("$", l1)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args104);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if dc3 then L124() else L123(dx3, l1, dx3, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L124()
    goto L124_;
  } else {
  // L123(dx3, l1, dx3, dr6)
    Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx3_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l1_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx3_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr6_;
    goto L123_;
  }

L123_:;
  // r78 = `$`(l5, <sym qr>)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args106[1] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // goto L121(dx8, l4, dx9, r78)
  // L121(dx8, l4, dx9, r78)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx8_;
  Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r78_;
  goto L121_;

L124_:;
  // dx12 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // goto L121(dx3, l1, dx3, dx12)
  // L121(dx3, l1, dx3, dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx12_;
  goto L121_;

D49_:;
  // deopt 166 [dx13, l7, dx15, dx14]
  SEXP Rsh_Fir_array_deopt_stack37[4];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_deopt_stack37[3] = Rsh_Fir_reg_dx14_;
  Rsh_Fir_deopt(166, 4, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L125_:;
  // r79 = dyn colnames__(dx15, NULL, dx14)
  SEXP Rsh_Fir_array_args108[3];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args108[2] = Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_array_arg_names38[3];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_colnames__, 3, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L126() else D50()
  // L126()
  goto L126_;

D50_:;
  // deopt 168 [dx13, l7, r79]
  SEXP Rsh_Fir_array_deopt_stack38[3];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack38[2] = Rsh_Fir_reg_r79_;
  Rsh_Fir_deopt(168, 3, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L126_:;
  // c13 = `is.object`(l7)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // if c13 then L128() else L129(dx13, l7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L128()
    goto L128_;
  } else {
  // L129(dx13, l7)
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx13_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l7_;
    goto L129_;
  }

L127_:;
  // st res = dx21
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // goto L26()
  // L26()
  goto L26_;

L128_:;
  // dr8 = tryDispatchBuiltin.0("$<-", l7, r79)
  SEXP Rsh_Fir_array_args110[3];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args110[2] = Rsh_Fir_reg_r79_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args110);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // if dc4 then L130() else L129(dx13, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L130()
    goto L130_;
  } else {
  // L129(dx13, dr8)
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx13_;
    Rsh_Fir_reg_l9_ = Rsh_Fir_reg_dr8_;
    goto L129_;
  }

L129_:;
  // r80 = `$<-`(l9, <sym qr>, r79)
  SEXP Rsh_Fir_array_args112[3];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args112[1] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args112[2] = Rsh_Fir_reg_r79_;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // goto L127(dx17, r80)
  // L127(dx17, r80)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r80_;
  goto L127_;

L130_:;
  // dx19 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // goto L127(dx13, dx19)
  // L127(dx13, dx19)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx19_;
  goto L127_;

D51_:;
  // deopt 176 ["qr", l10, "qr"]
  SEXP Rsh_Fir_array_deopt_stack39[3];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_deopt_stack39[2] = Rsh_const(CCP, 24);
  Rsh_Fir_deopt(176, 3, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L132_:;
  // r81 = dyn class__(l10, NULL, "qr")
  SEXP Rsh_Fir_array_args114[3];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args114[1] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args114[2] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names39[3];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_array_arg_names39[2] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L133() else D52()
  // L133()
  goto L133_;

D52_:;
  // deopt 178 ["qr", r81]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_r81_;
  Rsh_Fir_deopt(178, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L133_:;
  // st res = r81
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r81_, RHO);
  (void)(Rsh_Fir_reg_r81_);
  // res4 = ld res
  Rsh_Fir_reg_res4_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L134() else D53()
  // L134()
  goto L134_;

D53_:;
  // deopt 180 [res4]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_res4_;
  Rsh_Fir_deopt(180, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L134_:;
  // res5 = force? res4
  Rsh_Fir_reg_res5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_res4_);
  // checkMissing(res5)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_res5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return res5
  return Rsh_Fir_reg_res5_;
}
SEXP Rsh_Fir_user_promise_inner56719774_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_user_promise_inner56719774_1(SEXP CCP, SEXP RHO) {
  // sym1 = ldf `.Internal`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base1 = ldf `.Internal` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r5
  return Rsh_Fir_reg_r5_;

L1_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // La_qr_cmplx = ldf La_qr_cmplx in base
  Rsh_Fir_reg_La_qr_cmplx = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r6 = dyn La_qr_cmplx(x6)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_La_qr_cmplx, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L0_;

L2_:;
  // r4 = dyn base1(<lang La_qr_cmplx(x)>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner56719774_2(SEXP CCP, SEXP RHO) {
  // sym2 = ldf `.Internal`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base2 = ldf `.Internal` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r12
  return Rsh_Fir_reg_r12_;

L1_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // La_qr = ldf La_qr in base
  Rsh_Fir_reg_La_qr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r13 = dyn La_qr(x8)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_La_qr, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L0_;

L2_:;
  // r11 = dyn base2(<lang La_qr(x)>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner56719774_3(SEXP CCP, SEXP RHO) {
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return x10
  return Rsh_Fir_reg_x10_;
}
SEXP Rsh_Fir_user_promise_inner56719774_4(SEXP CCP, SEXP RHO) {
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x12 = force? x11
  Rsh_Fir_reg_x12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_x12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return x12
  return Rsh_Fir_reg_x12_;
}
SEXP Rsh_Fir_user_promise_inner56719774_5(SEXP CCP, SEXP RHO) {
  // p11 = ld p
  Rsh_Fir_reg_p11_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // p12 = force? p11
  Rsh_Fir_reg_p12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p11_);
  // checkMissing(p12)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_p12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // return p12
  return Rsh_Fir_reg_p12_;
}
SEXP Rsh_Fir_user_promise_inner56719774_6(SEXP CCP, SEXP RHO) {
  // p16 = ld p
  Rsh_Fir_reg_p16_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // p17 = force? p16
  Rsh_Fir_reg_p17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p16_);
  // checkMissing(p17)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_p17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // r58 = `*`(2, p17)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_p17_;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // return r58
  return Rsh_Fir_reg_r58_;
}
SEXP Rsh_Fir_user_promise_inner56719774_7(SEXP CCP, SEXP RHO) {
  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x16 = force? x15
  Rsh_Fir_reg_x16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_x16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // return x16
  return Rsh_Fir_reg_x16_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
