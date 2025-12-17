#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2543029983_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2543029983_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2543029983_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2543029983_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2543029983_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2543029983_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2543029983_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2543029983_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2543029983_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2543029983_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2543029983_8(SEXP CCP, SEXP RHO);
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
  // r = clos inner2543029983
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2543029983_, RHO, CCP);
  // st `lines.isoreg` = r
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
SEXP Rsh_Fir_user_function_inner2543029983_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2543029983 dynamic dispatch ([x, col, lwd, `do.points`, cex, pch, `...`])

  return Rsh_Fir_user_version_inner2543029983_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2543029983_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2543029983 version 0 (*, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner2543029983/0: expected 7, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_col;  // col
  SEXP Rsh_Fir_reg_lwd;  // lwd
  SEXP Rsh_Fir_reg_do_points;  // do_points
  SEXP Rsh_Fir_reg_cex;  // cex
  SEXP Rsh_Fir_reg_pch;  // pch
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_col_isMissing;  // col_isMissing
  SEXP Rsh_Fir_reg_col_orDefault;  // col_orDefault
  SEXP Rsh_Fir_reg_lwd_isMissing;  // lwd_isMissing
  SEXP Rsh_Fir_reg_lwd_orDefault;  // lwd_orDefault
  SEXP Rsh_Fir_reg_do_points_isMissing;  // do_points_isMissing
  SEXP Rsh_Fir_reg_do_points_orDefault;  // do_points_orDefault
  SEXP Rsh_Fir_reg_cex_isMissing;  // cex_isMissing
  SEXP Rsh_Fir_reg_cex_orDefault;  // cex_orDefault
  SEXP Rsh_Fir_reg_pch_isMissing;  // pch_isMissing
  SEXP Rsh_Fir_reg_pch_orDefault;  // pch_orDefault
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_lines;  // lines
  SEXP Rsh_Fir_reg_xx;  // xx
  SEXP Rsh_Fir_reg_xx1_;  // xx1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_x20_;  // x20
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_col1_;  // col1
  SEXP Rsh_Fir_reg_col2_;  // col2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_lwd1_;  // lwd1
  SEXP Rsh_Fir_reg_lwd2_;  // lwd2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_do_points1_;  // do_points1
  SEXP Rsh_Fir_reg_do_points2_;  // do_points2
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_points;  // points
  SEXP Rsh_Fir_reg_xx2_;  // xx2
  SEXP Rsh_Fir_reg_xx3_;  // xx3
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_xx5_;  // xx5
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_x21_;  // x21
  SEXP Rsh_Fir_reg_x22_;  // x22
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_xx7_;  // xx7
  SEXP Rsh_Fir_reg_x24_;  // x24
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_xx9_;  // xx9
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_x25_;  // x25
  SEXP Rsh_Fir_reg_x26_;  // x26
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_x28_;  // x28
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_x29_;  // x29
  SEXP Rsh_Fir_reg_x30_;  // x30
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_x32_;  // x32
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_col3_;  // col3
  SEXP Rsh_Fir_reg_col4_;  // col4
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_cex1_;  // cex1
  SEXP Rsh_Fir_reg_cex2_;  // cex2
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_pch1_;  // pch1
  SEXP Rsh_Fir_reg_pch2_;  // pch2
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r25_;  // r25

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_col = PARAMS[1];
  Rsh_Fir_reg_lwd = PARAMS[2];
  Rsh_Fir_reg_do_points = PARAMS[3];
  Rsh_Fir_reg_cex = PARAMS[4];
  Rsh_Fir_reg_pch = PARAMS[5];
  Rsh_Fir_reg_ddd = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // col_isMissing = missing.0(col)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_col;
  Rsh_Fir_reg_col_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if col_isMissing then L0("red") else L0(col)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_col_isMissing)) {
  // L0("red")
    Rsh_Fir_reg_col_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(col)
    Rsh_Fir_reg_col_orDefault = Rsh_Fir_reg_col;
    goto L0_;
  }

L0_:;
  // st col = col_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_col_orDefault, RHO);
  (void)(Rsh_Fir_reg_col_orDefault);
  // lwd_isMissing = missing.0(lwd)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_lwd;
  Rsh_Fir_reg_lwd_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if lwd_isMissing then L1(1.5) else L1(lwd)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lwd_isMissing)) {
  // L1(1.5)
    Rsh_Fir_reg_lwd_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(lwd)
    Rsh_Fir_reg_lwd_orDefault = Rsh_Fir_reg_lwd;
    goto L1_;
  }

L1_:;
  // st lwd = lwd_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_lwd_orDefault, RHO);
  (void)(Rsh_Fir_reg_lwd_orDefault);
  // do_points_isMissing = missing.0(do_points)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_do_points;
  Rsh_Fir_reg_do_points_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if do_points_isMissing then L2(FALSE) else L2(do_points)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_do_points_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_do_points_orDefault = Rsh_const(CCP, 6);
    goto L2_;
  } else {
  // L2(do_points)
    Rsh_Fir_reg_do_points_orDefault = Rsh_Fir_reg_do_points;
    goto L2_;
  }

L2_:;
  // st `do.points` = do_points_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_do_points_orDefault, RHO);
  (void)(Rsh_Fir_reg_do_points_orDefault);
  // cex_isMissing = missing.0(cex)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_cex;
  Rsh_Fir_reg_cex_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if cex_isMissing then L3(1.5) else L3(cex)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_cex_isMissing)) {
  // L3(1.5)
    Rsh_Fir_reg_cex_orDefault = Rsh_const(CCP, 4);
    goto L3_;
  } else {
  // L3(cex)
    Rsh_Fir_reg_cex_orDefault = Rsh_Fir_reg_cex;
    goto L3_;
  }

L3_:;
  // st cex = cex_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_cex_orDefault, RHO);
  (void)(Rsh_Fir_reg_cex_orDefault);
  // pch_isMissing = missing.0(pch)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_pch;
  Rsh_Fir_reg_pch_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if pch_isMissing then L4(13.0) else L4(pch)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_pch_isMissing)) {
  // L4(13.0)
    Rsh_Fir_reg_pch_orDefault = Rsh_const(CCP, 9);
    goto L4_;
  } else {
  // L4(pch)
    Rsh_Fir_reg_pch_orDefault = Rsh_Fir_reg_pch;
    goto L4_;
  }

L4_:;
  // st pch = pch_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_pch_orDefault, RHO);
  (void)(Rsh_Fir_reg_pch_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

L5_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L22() else D2()
  // L22()
  goto L22_;

L6_:;
  // st xx = dx4
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx4_, RHO);
  (void)(Rsh_Fir_reg_dx4_);
  // lines = ldf lines
  Rsh_Fir_reg_lines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L35() else D4()
  // L35()
  goto L35_;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // sym = ldf invisible
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base = ldf invisible in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r24
  return Rsh_Fir_reg_r24_;

D0_:;
  // deopt 0 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c then L12() else L13(x2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L12()
    goto L12_;
  } else {
  // L13(x2)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_x2_;
    goto L13_;
  }

L11_:;
  // c1 = `as.logical`(dx1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c1 then L15() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L15()
    goto L15_;
  } else {
  // L5()
    goto L5_;
  }

L12_:;
  // dr = tryDispatchBuiltin.1("$", x2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args9);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if dc then L14() else L13(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L14()
    goto L14_;
  } else {
  // L13(dr)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_dr;
    goto L13_;
  }

L13_:;
  // r = `$`(x4, <sym isOrd>)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L11(r)
  // L11(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1;
  goto L11_;

L14_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L11(dx)
  // L11(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L11_;

L15_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

D1_:;
  // deopt 3 [x5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L16_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(x6)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c2 then L18() else L19(x6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L18()
    goto L18_;
  } else {
  // L19(x6)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_x6_;
    goto L19_;
  }

L17_:;
  // goto L6(dx3)
  // L6(dx3)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L6_;

L18_:;
  // dr2 = tryDispatchBuiltin.1("$", x6)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args15);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if dc1 then L20() else L19(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L20()
    goto L20_;
  } else {
  // L19(dr2)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_dr2_;
    goto L19_;
  }

L19_:;
  // r1 = `$`(x8, <sym x>)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L17(r1)
  // L17(r1)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r1_;
  goto L17_;

L20_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L17(dx2)
  // L17(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L17_;

D2_:;
  // deopt 6 [x9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L22_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(x10)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c3 then L24() else L25(x10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L24()
    goto L24_;
  } else {
  // L25(x10)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    goto L25_;
  }

L23_:;
  // c4 = `is.object`(dx6)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dx6_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c4 then L27() else L28(dx6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L27()
    goto L27_;
  } else {
  // L28(dx6)
    Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx6_;
    goto L28_;
  }

L24_:;
  // dr4 = tryDispatchBuiltin.1("$", x10)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if dc2 then L26() else L25(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L26()
    goto L26_;
  } else {
  // L25(dr4)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_dr4_;
    goto L25_;
  }

L25_:;
  // r2 = `$`(x12, <sym x>)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L23(r2)
  // L23(r2)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r2_;
  goto L23_;

L26_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L23(dx5)
  // L23(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L23_;

L27_:;
  // dr6 = tryDispatchBuiltin.1("[", dx6)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_dx6_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args26);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if dc3 then L29() else L28(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L29()
    goto L29_;
  } else {
  // L28(dr6)
    Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dr6_;
    goto L28_;
  }

L28_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L30() else D3()
  // L30()
  goto L30_;

L29_:;
  // dx9 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L6(dx9)
  // L6(dx9)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx9_;
  goto L6_;

D3_:;
  // deopt 9 [dx8, x13]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_dx8_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(9, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L30_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(x14)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c5 then L32() else L33(dx8, x14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L32()
    goto L32_;
  } else {
  // L33(dx8, x14)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx8_;
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_x14_;
    goto L33_;
  }

L31_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r4 = dyn __(dx14, dx15)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dx14_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L6(r4)
  // L6(r4)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r4_;
  goto L6_;

L32_:;
  // dr8 = tryDispatchBuiltin.1("$", x14)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args32);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if dc4 then L34() else L33(dx8, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L34()
    goto L34_;
  } else {
  // L33(dx8, dr8)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx8_;
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_dr8_;
    goto L33_;
  }

L33_:;
  // r3 = `$`(x16, <sym ord>)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L31(dx11, r3)
  // L31(dx11, r3)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r3_;
  goto L31_;

L34_:;
  // dx13 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L31(dx8, dx13)
  // L31(dx8, dx13)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx8_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx13_;
  goto L31_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // p = prom<V +>{
  //   xx = ld xx;
  //   xx1 = force? xx;
  //   checkMissing(xx1);
  //   return xx1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2543029983_, CCP, RHO);
  // p1 = prom<V +>{
  //   x17 = ld x;
  //   x18 = force? x17;
  //   checkMissing(x18);
  //   c6 = `is.object`(x18);
  //   if c6 then L1() else L2(x18);
  // L0(dx17):
  //   return dx17;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("$", x18);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(x20):
  //   r6 = `$`(x20, <sym yf>);
  //   goto L0(r6);
  // L3():
  //   dx16 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx16);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2543029983_1, CCP, RHO);
  // p2 = prom<V +>{
  //   col1 = ld col;
  //   col2 = force? col1;
  //   checkMissing(col2);
  //   return col2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2543029983_2, CCP, RHO);
  // p3 = prom<V +>{
  //   lwd1 = ld lwd;
  //   lwd2 = force? lwd1;
  //   checkMissing(lwd2);
  //   return lwd2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2543029983_3, CCP, RHO);
  // r10 = dyn lines[, , col, lwd, type](p, p1, p2, p3, "S")
  SEXP Rsh_Fir_array_args45[5];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args45[2] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args45[3] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args45[4] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names1[5];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names1[3] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names1[4] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lines, 5, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L36() else D5()
  // L36()
  goto L36_;

D5_:;
  // deopt 24 [r10]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L36_:;
  // do_points1 = ld `do.points`
  Rsh_Fir_reg_do_points1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L37() else D6()
  // L37()
  goto L37_;

D6_:;
  // deopt 25 [do_points1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_do_points1_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L37_:;
  // do_points2 = force? do_points1
  Rsh_Fir_reg_do_points2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_do_points1_);
  // checkMissing(do_points2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_do_points2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c7 = `as.logical`(do_points2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_do_points2_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if c7 then L38() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L38()
    goto L38_;
  } else {
  // L7()
    goto L7_;
  }

L38_:;
  // points = ldf points
  Rsh_Fir_reg_points = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L39() else D7()
  // L39()
  goto L39_;

D7_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // p4 = prom<V +>{
  //   xx2 = ld xx;
  //   xx3 = force? xx2;
  //   checkMissing(xx3);
  //   c8 = `is.object`(xx3);
  //   if c8 then L1() else L2(xx3);
  // L0(dx19):
  //   return dx19;
  // L1():
  //   dr12 = tryDispatchBuiltin.1("[", xx3);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L3() else L2(dr12);
  // L2(xx5):
  //   x21 = ld x;
  //   x22 = force? x21;
  //   checkMissing(x22);
  //   c9 = `is.object`(x22);
  //   if c9 then L5() else L6(xx5, x22);
  // L3():
  //   dx18 = getTryDispatchBuiltinValue(dr12);
  //   goto L0(dx18);
  // L4(xx9, dx21):
  //   __1 = ldf `[` in base;
  //   r12 = dyn __1(xx9, dx21);
  //   goto L0(r12);
  // L5():
  //   dr14 = tryDispatchBuiltin.1("$", x22);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L7() else L6(xx5, dr14);
  // L6(xx7, x24):
  //   r11 = `$`(x24, <sym iKnots>);
  //   goto L4(xx7, r11);
  // L7():
  //   dx20 = getTryDispatchBuiltinValue(dr14);
  //   goto L4(xx5, dx20);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2543029983_4, CCP, RHO);
  // p5 = prom<V +>{
  //   x25 = ld x;
  //   x26 = force? x25;
  //   checkMissing(x26);
  //   c10 = `is.object`(x26);
  //   if c10 then L2() else L3(x26);
  // L1(dx23):
  //   c11 = `is.object`(dx23);
  //   if c11 then L5() else L6(dx23);
  // L2():
  //   dr16 = tryDispatchBuiltin.1("$", x26);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L4() else L3(dr16);
  // L3(x28):
  //   r14 = `$`(x28, <sym yf>);
  //   goto L1(r14);
  // L0(dx27):
  //   return dx27;
  // L4():
  //   dx22 = getTryDispatchBuiltinValue(dr16);
  //   goto L1(dx22);
  // L5():
  //   dr18 = tryDispatchBuiltin.1("[", dx23);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L7() else L6(dr18);
  // L6(dx25):
  //   x29 = ld x;
  //   x30 = force? x29;
  //   checkMissing(x30);
  //   c12 = `is.object`(x30);
  //   if c12 then L9() else L10(dx25, x30);
  // L7():
  //   dx26 = getTryDispatchBuiltinValue(dr18);
  //   goto L0(dx26);
  // L8(dx32, dx33):
  //   __2 = ldf `[` in base;
  //   r16 = dyn __2(dx32, dx33);
  //   goto L0(r16);
  // L9():
  //   dr20 = tryDispatchBuiltin.1("$", x30);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L11() else L10(dx25, dr20);
  // L10(dx29, x32):
  //   r15 = `$`(x32, <sym iKnots>);
  //   goto L8(dx29, r15);
  // L11():
  //   dx31 = getTryDispatchBuiltinValue(dr20);
  //   goto L8(dx25, dx31);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2543029983_5, CCP, RHO);
  // p6 = prom<V +>{
  //   col3 = ld col;
  //   col4 = force? col3;
  //   checkMissing(col4);
  //   return col4;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2543029983_6, CCP, RHO);
  // p7 = prom<V +>{
  //   cex1 = ld cex;
  //   cex2 = force? cex1;
  //   checkMissing(cex2);
  //   return cex2;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2543029983_7, CCP, RHO);
  // p8 = prom<V +>{
  //   pch1 = ld pch;
  //   pch2 = force? pch1;
  //   checkMissing(pch2);
  //   return pch2;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2543029983_8, CCP, RHO);
  // r21 = dyn points[, , col, cex, pch](p4, p5, p6, p7, p8)
  SEXP Rsh_Fir_array_args80[5];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args80[2] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args80[3] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args80[4] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names4[5];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_arg_names4[3] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names4[4] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_points, 5, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L40() else D8()
  // L40()
  goto L40_;

D8_:;
  // deopt 37 [r21]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L40_:;
  // goto L8()
  // L8()
  goto L8_;

L42_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r25 = dyn invisible()
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 0, NULL, NULL, CCP, RHO);
  // check L44() else D9()
  // L44()
  goto L44_;

L43_:;
  // r23 = dyn base()
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L9(r23)
  // L9(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L9_;

D9_:;
  // deopt 43 [r25]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L9(r25)
  // L9(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L9_;
}
SEXP Rsh_Fir_user_promise_inner2543029983_(SEXP CCP, SEXP RHO) {
  // xx = ld xx
  Rsh_Fir_reg_xx = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // xx1 = force? xx
  Rsh_Fir_reg_xx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx);
  // checkMissing(xx1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_xx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // return xx1
  return Rsh_Fir_reg_xx1_;
}
SEXP Rsh_Fir_user_promise_inner2543029983_1(SEXP CCP, SEXP RHO) {
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(x18)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c6 then L1() else L2(x18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x18)
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_x18_;
    goto L2_;
  }

L0_:;
  // return dx17
  return Rsh_Fir_reg_dx17_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("$", x18)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args39);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // r6 = `$`(x20, <sym yf>)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r6_;
  goto L0_;

L3_:;
  // dx16 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L0(dx16)
  // L0(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2543029983_2(SEXP CCP, SEXP RHO) {
  // col1 = ld col
  Rsh_Fir_reg_col1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // col2 = force? col1
  Rsh_Fir_reg_col2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col1_);
  // checkMissing(col2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_col2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return col2
  return Rsh_Fir_reg_col2_;
}
SEXP Rsh_Fir_user_promise_inner2543029983_3(SEXP CCP, SEXP RHO) {
  // lwd1 = ld lwd
  Rsh_Fir_reg_lwd1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // lwd2 = force? lwd1
  Rsh_Fir_reg_lwd2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lwd1_);
  // checkMissing(lwd2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_lwd2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return lwd2
  return Rsh_Fir_reg_lwd2_;
}
SEXP Rsh_Fir_user_promise_inner2543029983_4(SEXP CCP, SEXP RHO) {
  // xx2 = ld xx
  Rsh_Fir_reg_xx2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // xx3 = force? xx2
  Rsh_Fir_reg_xx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx2_);
  // checkMissing(xx3)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_xx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(xx3)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_xx3_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if c8 then L1() else L2(xx3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L1()
    goto L1_;
  } else {
  // L2(xx3)
    Rsh_Fir_reg_xx5_ = Rsh_Fir_reg_xx3_;
    goto L2_;
  }

L0_:;
  // return dx19
  return Rsh_Fir_reg_dx19_;

L1_:;
  // dr12 = tryDispatchBuiltin.1("[", xx3)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_xx3_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args50);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if dc6 then L3() else L2(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr12)
    Rsh_Fir_reg_xx5_ = Rsh_Fir_reg_dr12_;
    goto L2_;
  }

L2_:;
  // x21 = ld x
  Rsh_Fir_reg_x21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x22 = force? x21
  Rsh_Fir_reg_x22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x21_);
  // checkMissing(x22)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_x22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(x22)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if c9 then L5() else L6(xx5, x22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L5()
    goto L5_;
  } else {
  // L6(xx5, x22)
    Rsh_Fir_reg_xx7_ = Rsh_Fir_reg_xx5_;
    Rsh_Fir_reg_x24_ = Rsh_Fir_reg_x22_;
    goto L6_;
  }

L3_:;
  // dx18 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // goto L0(dx18)
  // L0(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L0_;

L4_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r12 = dyn __1(xx9, dx21)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_xx9_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r12_;
  goto L0_;

L5_:;
  // dr14 = tryDispatchBuiltin.1("$", x22)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args56);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if dc7 then L7() else L6(xx5, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L7()
    goto L7_;
  } else {
  // L6(xx5, dr14)
    Rsh_Fir_reg_xx7_ = Rsh_Fir_reg_xx5_;
    Rsh_Fir_reg_x24_ = Rsh_Fir_reg_dr14_;
    goto L6_;
  }

L6_:;
  // r11 = `$`(x24, <sym iKnots>)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_args58[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L4(xx7, r11)
  // L4(xx7, r11)
  Rsh_Fir_reg_xx9_ = Rsh_Fir_reg_xx7_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r11_;
  goto L4_;

L7_:;
  // dx20 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L4(xx5, dx20)
  // L4(xx5, dx20)
  Rsh_Fir_reg_xx9_ = Rsh_Fir_reg_xx5_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L4_;
}
SEXP Rsh_Fir_user_promise_inner2543029983_5(SEXP CCP, SEXP RHO) {
  // x25 = ld x
  Rsh_Fir_reg_x25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x26 = force? x25
  Rsh_Fir_reg_x26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x25_);
  // checkMissing(x26)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_x26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(x26)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if c10 then L2() else L3(x26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L2()
    goto L2_;
  } else {
  // L3(x26)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_x26_;
    goto L3_;
  }

L0_:;
  // return dx27
  return Rsh_Fir_reg_dx27_;

L1_:;
  // c11 = `is.object`(dx23)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if c11 then L5() else L6(dx23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L5()
    goto L5_;
  } else {
  // L6(dx23)
    Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx23_;
    goto L6_;
  }

L2_:;
  // dr16 = tryDispatchBuiltin.1("$", x26)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args63);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if dc8 then L4() else L3(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr16)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_dr16_;
    goto L3_;
  }

L3_:;
  // r14 = `$`(x28, <sym yf>)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_array_args65[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // goto L1(r14)
  // L1(r14)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r14_;
  goto L1_;

L4_:;
  // dx22 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L1(dx22)
  // L1(dx22)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L1_;

L5_:;
  // dr18 = tryDispatchBuiltin.1("[", dx23)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args67);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // if dc9 then L7() else L6(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L7()
    goto L7_;
  } else {
  // L6(dr18)
    Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dr18_;
    goto L6_;
  }

L6_:;
  // x29 = ld x
  Rsh_Fir_reg_x29_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x30 = force? x29
  Rsh_Fir_reg_x30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x29_);
  // checkMissing(x30)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_x30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(x30)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_x30_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if c12 then L9() else L10(dx25, x30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L9()
    goto L9_;
  } else {
  // L10(dx25, x30)
    Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx25_;
    Rsh_Fir_reg_x32_ = Rsh_Fir_reg_x30_;
    goto L10_;
  }

L7_:;
  // dx26 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // goto L0(dx26)
  // L0(dx26)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L0_;

L8_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r16 = dyn __2(dx32, dx33)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dx32_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_dx33_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r16_;
  goto L0_;

L9_:;
  // dr20 = tryDispatchBuiltin.1("$", x30)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_x30_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args73);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc10 then L11() else L10(dx25, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L11()
    goto L11_;
  } else {
  // L10(dx25, dr20)
    Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx25_;
    Rsh_Fir_reg_x32_ = Rsh_Fir_reg_dr20_;
    goto L10_;
  }

L10_:;
  // r15 = `$`(x32, <sym iKnots>)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_x32_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L8(dx29, r15)
  // L8(dx29, r15)
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx29_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_r15_;
  goto L8_;

L11_:;
  // dx31 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx31_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L8(dx25, dx31)
  // L8(dx25, dx31)
  Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx25_;
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx31_;
  goto L8_;
}
SEXP Rsh_Fir_user_promise_inner2543029983_6(SEXP CCP, SEXP RHO) {
  // col3 = ld col
  Rsh_Fir_reg_col3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // col4 = force? col3
  Rsh_Fir_reg_col4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col3_);
  // checkMissing(col4)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_col4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // return col4
  return Rsh_Fir_reg_col4_;
}
SEXP Rsh_Fir_user_promise_inner2543029983_7(SEXP CCP, SEXP RHO) {
  // cex1 = ld cex
  Rsh_Fir_reg_cex1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // cex2 = force? cex1
  Rsh_Fir_reg_cex2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cex1_);
  // checkMissing(cex2)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_cex2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // return cex2
  return Rsh_Fir_reg_cex2_;
}
SEXP Rsh_Fir_user_promise_inner2543029983_8(SEXP CCP, SEXP RHO) {
  // pch1 = ld pch
  Rsh_Fir_reg_pch1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // pch2 = force? pch1
  Rsh_Fir_reg_pch2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pch1_);
  // checkMissing(pch2)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_pch2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // return pch2
  return Rsh_Fir_reg_pch2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
