#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner234475492_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner234475492_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner234475492_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner234475492_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner234475492_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner234475492_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner234475492_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner234475492_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner234475492_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner234475492_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner234475492_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner234475492_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner234475492_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner234475492_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner234475492_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner234475492_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner234475492_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner234475492_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner234475492_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner234475492_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner234475492_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner234475492_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner234475492_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner234475492_21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_points_default;
  SEXP Rsh_Fir_reg_points_default1_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner234475492
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner234475492_, RHO, CCP);
  // st `plot.xy` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // points_default = ld `points.default`
  Rsh_Fir_reg_points_default = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 3 [points_default]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_points_default;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L0_:;
  // points_default1 = force? points_default
  Rsh_Fir_reg_points_default1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_points_default);
  // checkMissing(points_default1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_points_default1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return points_default1
  return Rsh_Fir_reg_points_default1_;
}
SEXP Rsh_Fir_user_function_inner234475492_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner234475492 dynamic dispatch ([xy, type, pch, lty, col, bg, cex, lwd, `...`])

  return Rsh_Fir_user_version_inner234475492_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner234475492_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner234475492 version 0 (*, *, *, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 9) Rsh_error("FIŘ arity mismatch for inner234475492/0: expected 9, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_xy;
  SEXP Rsh_Fir_reg_type;
  SEXP Rsh_Fir_reg_pch;
  SEXP Rsh_Fir_reg_lty;
  SEXP Rsh_Fir_reg_col;
  SEXP Rsh_Fir_reg_bg;
  SEXP Rsh_Fir_reg_cex;
  SEXP Rsh_Fir_reg_lwd;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_pch_isMissing;
  SEXP Rsh_Fir_reg_pch_orDefault;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_lty_isMissing;
  SEXP Rsh_Fir_reg_lty_orDefault;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_col_isMissing;
  SEXP Rsh_Fir_reg_col_orDefault;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_bg_isMissing;
  SEXP Rsh_Fir_reg_bg_orDefault;
  SEXP Rsh_Fir_reg_cex_isMissing;
  SEXP Rsh_Fir_reg_cex_orDefault;
  SEXP Rsh_Fir_reg_lwd_isMissing;
  SEXP Rsh_Fir_reg_lwd_orDefault;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_type1_;
  SEXP Rsh_Fir_reg_type2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_type3_;
  SEXP Rsh_Fir_reg_type4_;
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_type5_;
  SEXP Rsh_Fir_reg_type6_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_type7_;
  SEXP Rsh_Fir_reg_type8_;
  SEXP Rsh_Fir_reg_nzchar;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_type9_;
  SEXP Rsh_Fir_reg_type10_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_type11_;
  SEXP Rsh_Fir_reg_type12_;
  SEXP Rsh_Fir_reg_nchar;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_substr;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_isTRUE;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg__External_graphics;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_invisible;
  SEXP Rsh_Fir_reg_r68_;

  // Bind parameters
  Rsh_Fir_reg_xy = PARAMS[0];
  Rsh_Fir_reg_type = PARAMS[1];
  Rsh_Fir_reg_pch = PARAMS[2];
  Rsh_Fir_reg_lty = PARAMS[3];
  Rsh_Fir_reg_col = PARAMS[4];
  Rsh_Fir_reg_bg = PARAMS[5];
  Rsh_Fir_reg_cex = PARAMS[6];
  Rsh_Fir_reg_lwd = PARAMS[7];
  Rsh_Fir_reg_ddd = PARAMS[8];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st xy = xy
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_xy, RHO);
  (void)(Rsh_Fir_reg_xy);
  // st type = type
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_type, RHO);
  (void)(Rsh_Fir_reg_type);
  // pch_isMissing = missing.0(pch)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_pch;
  Rsh_Fir_reg_pch_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if pch_isMissing then L0() else L1(pch)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_pch_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(pch)
    Rsh_Fir_reg_pch_orDefault = Rsh_Fir_reg_pch;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   par = ldf par;
  //   r = dyn par("pch");
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_pch_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st pch = pch_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_pch_orDefault, RHO);
  (void)(Rsh_Fir_reg_pch_orDefault);
  // lty_isMissing = missing.0(lty)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_lty;
  Rsh_Fir_reg_lty_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if lty_isMissing then L2() else L3(lty)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lty_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(lty)
    Rsh_Fir_reg_lty_orDefault = Rsh_Fir_reg_lty;
    goto L3_;
  }

L2_:;
  // p1 = prom<V +>{
  //   par1 = ldf par;
  //   r2 = dyn par1("lty");
  //   return r2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_1, 0, NULL, CCP, RHO);
  // goto L3(p1)
  // L3(p1)
  Rsh_Fir_reg_lty_orDefault = Rsh_Fir_reg_p1_;
  goto L3_;

L3_:;
  // st lty = lty_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_lty_orDefault, RHO);
  (void)(Rsh_Fir_reg_lty_orDefault);
  // col_isMissing = missing.0(col)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_col;
  Rsh_Fir_reg_col_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if col_isMissing then L4() else L5(col)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_col_isMissing)) {
  // L4()
    goto L4_;
  } else {
  // L5(col)
    Rsh_Fir_reg_col_orDefault = Rsh_Fir_reg_col;
    goto L5_;
  }

L4_:;
  // p2 = prom<V +>{
  //   par2 = ldf par;
  //   r4 = dyn par2("col");
  //   return r4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_2, 0, NULL, CCP, RHO);
  // goto L5(p2)
  // L5(p2)
  Rsh_Fir_reg_col_orDefault = Rsh_Fir_reg_p2_;
  goto L5_;

L5_:;
  // st col = col_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_col_orDefault, RHO);
  (void)(Rsh_Fir_reg_col_orDefault);
  // bg_isMissing = missing.0(bg)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_bg;
  Rsh_Fir_reg_bg_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if bg_isMissing then L6(NA_LGL) else L6(bg)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_bg_isMissing)) {
  // L6(NA_LGL)
    Rsh_Fir_reg_bg_orDefault = Rsh_const(CCP, 11);
    goto L6_;
  } else {
  // L6(bg)
    Rsh_Fir_reg_bg_orDefault = Rsh_Fir_reg_bg;
    goto L6_;
  }

L6_:;
  // st bg = bg_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_bg_orDefault, RHO);
  (void)(Rsh_Fir_reg_bg_orDefault);
  // cex_isMissing = missing.0(cex)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_cex;
  Rsh_Fir_reg_cex_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if cex_isMissing then L7(1.0) else L7(cex)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_cex_isMissing)) {
  // L7(1.0)
    Rsh_Fir_reg_cex_orDefault = Rsh_const(CCP, 13);
    goto L7_;
  } else {
  // L7(cex)
    Rsh_Fir_reg_cex_orDefault = Rsh_Fir_reg_cex;
    goto L7_;
  }

L7_:;
  // st cex = cex_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_cex_orDefault, RHO);
  (void)(Rsh_Fir_reg_cex_orDefault);
  // lwd_isMissing = missing.0(lwd)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_lwd;
  Rsh_Fir_reg_lwd_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if lwd_isMissing then L8() else L9(lwd)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lwd_isMissing)) {
  // L8()
    goto L8_;
  } else {
  // L9(lwd)
    Rsh_Fir_reg_lwd_orDefault = Rsh_Fir_reg_lwd;
    goto L9_;
  }

L8_:;
  // p3 = prom<V +>{
  //   par3 = ldf par;
  //   r6 = dyn par3("lwd");
  //   return r6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_3, 0, NULL, CCP, RHO);
  // goto L9(p3)
  // L9(p3)
  Rsh_Fir_reg_lwd_orDefault = Rsh_Fir_reg_p3_;
  goto L9_;

L9_:;
  // st lwd = lwd_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_lwd_orDefault, RHO);
  (void)(Rsh_Fir_reg_lwd_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L10_:;
  // c1 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // if c1 then L31() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L31()
    goto L31_;
  } else {
  // L11()
    goto L11_;
  }

L28_:;
  // type1 = ld type
  Rsh_Fir_reg_type1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L30() else D0()
  // L30()
  goto L30_;

L29_:;
  // r8 = dyn base(<sym type>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L10(r8)
  // L10(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L10_;

D0_:;
  // deopt 1 [type1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_type1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L12()
  // L12()
  goto L12_;

L12_:;
  // sym1 = ldf `as.character`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base1 = ldf `as.character` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard1 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L30_:;
  // type2 = force? type1
  Rsh_Fir_reg_type2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type1_);
  // checkMissing(type2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_type2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // c = `==`(type2, NULL)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_type2_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args16);
  // goto L10(c)
  // L10(c)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_c;
  goto L10_;

L31_:;
  // st type = "p"
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_const(CCP, 21), RHO);
  (void)(Rsh_const(CCP, 21));
  // goto L12()
  // L12()
  goto L12_;

L13_:;
  // st type = r12
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard2 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L33_:;
  // type3 = ld type
  Rsh_Fir_reg_type3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L35() else D1()
  // L35()
  goto L35_;

L34_:;
  // r11 = dyn base1(<sym type>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L13(r11)
  // L13(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L13_;

D1_:;
  // deopt 11 [type3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_type3_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // r17 = `!=`(r15, 1)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args19);
  // c2 = `as.logical`(r17)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args20);
  // if c2 then L15(c2) else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L15(c2)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c2_;
    goto L15_;
  } else {
  // L41()
    goto L41_;
  }

L35_:;
  // type4 = force? type3
  Rsh_Fir_reg_type4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type3_);
  // checkMissing(type4)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_type4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r13 = dyn as_character(type4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_type4_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L36() else D2()
  // L36()
  goto L36_;

L37_:;
  // type5 = ld type
  Rsh_Fir_reg_type5_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L39() else D3()
  // L39()
  goto L39_;

L38_:;
  // r14 = dyn base2(<sym type>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L14(r14)
  // L14(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L14_;

D2_:;
  // deopt 14 [r13]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 18 [type5]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_type5_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // c11 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args24);
  // if c11 then L17(c11) else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L17(c11)
    Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c11_;
    goto L17_;
  } else {
  // L47()
    goto L47_;
  }

L36_:;
  // goto L13(r13)
  // L13(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L13_;

L39_:;
  // type6 = force? type5
  Rsh_Fir_reg_type6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type5_);
  // checkMissing(type6)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_type6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r16 = dyn length(type6)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_type6_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L40() else D4()
  // L40()
  goto L40_;

L41_:;
  // sym3 = ldf nzchar
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base3 = ldf nzchar in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard3 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

D4_:;
  // deopt 21 [r16]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // r21 = `!`(r19)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args28);
  // c8 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args29);
  // c9 = `||`(c7, c8)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args30);
  // goto L15(c9)
  // L15(c9)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c9_;
  goto L15_;

L17_:;
  // c20 = `as.logical`(c12)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args31);
  // if c20 then L53() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L53()
    goto L53_;
  } else {
  // L19()
    goto L19_;
  }

L40_:;
  // goto L14(r16)
  // L14(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L14_;

L42_:;
  // type7 = ld type
  Rsh_Fir_reg_type7_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L44() else D5()
  // L44()
  goto L44_;

L43_:;
  // r18 = dyn base3(<sym type>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L16(c2, r18)
  // L16(c2, r18)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L16_;

L47_:;
  // sym4 = ldf `is.na`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base4 = ldf `is.na` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard4 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

D5_:;
  // deopt 26 [c2, type7]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_type7_;
  Rsh_Fir_deopt(26, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L18_:;
  // c17 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args34);
  // c18 = `||`(c16, c17)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args35);
  // goto L17(c18)
  // L17(c18)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c18_;
  goto L17_;

L19_:;
  // goto L20()
  // L20()
  goto L20_;

L20_:;
  // sym5 = ldf nchar
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base5 = ldf nchar in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard5 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L44_:;
  // type8 = force? type7
  Rsh_Fir_reg_type8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type7_);
  // checkMissing(type8)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_type8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r20 = dyn nzchar(type8)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_type8_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L45() else D6()
  // L45()
  goto L45_;

L48_:;
  // type9 = ld type
  Rsh_Fir_reg_type9_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L50() else D7()
  // L50()
  goto L50_;

L49_:;
  // r22 = dyn base4(<sym type>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L18(c11, r22)
  // L18(c11, r22)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L18_;

L53_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L54() else D9()
  // L54()
  goto L54_;

D6_:;
  // deopt 29 [c2, r20]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(29, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 34 [c11, type9]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_type9_;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // r32 = `>`(r30, 1)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args40);
  // c21 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args41);
  // if c21 then L61() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L61()
    goto L61_;
  } else {
  // L22()
    goto L22_;
  }

L45_:;
  // goto L16(c2, r20)
  // L16(c2, r20)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L16_;

L50_:;
  // type10 = force? type9
  Rsh_Fir_reg_type10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type9_);
  // checkMissing(type10)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_type10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r24 = dyn is_na(type10)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_type10_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L51() else D8()
  // L51()
  goto L51_;

L54_:;
  // p4 = prom<V +>{
  //   gettextf = ldf gettextf;
  //   r25 = dyn gettextf("invalid plot type");
  //   return r25;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_4, 0, NULL, CCP, RHO);
  // r27 = dyn stop(p4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L55() else D10()
  // L55()
  goto L55_;

L57_:;
  // type11 = ld type
  Rsh_Fir_reg_type11_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L59() else D11()
  // L59()
  goto L59_;

L58_:;
  // r29 = dyn base5(<sym type>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L21(r29)
  // L21(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L21_;

D8_:;
  // deopt 37 [c11, r24]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 42 [r27]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 47 [type11]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_type11_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L23()
  // L23()
  goto L23_;

L23_:;
  // substr = ldf substr
  Rsh_Fir_reg_substr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L65() else D15()
  // L65()
  goto L65_;

L51_:;
  // goto L18(c11, r24)
  // L18(c11, r24)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L18_;

L55_:;
  // goto L20()
  // L20()
  goto L20_;

L59_:;
  // type12 = force? type11
  Rsh_Fir_reg_type12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type11_);
  // checkMissing(type12)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_type12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // nchar = ldf nchar in base
  Rsh_Fir_reg_nchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r31 = dyn nchar(type12, "chars", FALSE, NA_LGL)
  SEXP Rsh_Fir_array_args48[4];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_type12_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args48[2] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args48[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names16[4];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nchar, 4, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L60() else D12()
  // L60()
  goto L60_;

L61_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L62() else D13()
  // L62()
  goto L62_;

D12_:;
  // deopt 53 [r31]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 63 []
  Rsh_Fir_deopt(63, 0, NULL, CCP, RHO);
  return R_NilValue;

L60_:;
  // goto L21(r31)
  // L21(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L21_;

L62_:;
  // p6 = prom<V +>{
  //   gettextf1 = ldf gettextf;
  //   p5 = prom<V +>{
  //     type13 = ld type;
  //     type14 = force? type13;
  //     checkMissing(type14);
  //     return type14;
  //   };
  //   r34 = dyn gettextf1("plot type '%s' will be truncated to first character", p5);
  //   return r34;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_5, 0, NULL, CCP, RHO);
  // r36 = dyn warning(p6)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L63() else D14()
  // L63()
  goto L63_;

L65_:;
  // p7 = prom<V +>{
  //   type15 = ld type;
  //   type16 = force? type15;
  //   checkMissing(type16);
  //   return type16;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_7, 0, NULL, CCP, RHO);
  // r39 = dyn substr(p7, 1, 1)
  SEXP Rsh_Fir_array_args53[3];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args53[2] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substr, 3, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L66() else D16()
  // L66()
  goto L66_;

D14_:;
  // deopt 59 [r36]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 67 [r39]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L63_:;
  // goto L23()
  // L23()
  goto L23_;

L66_:;
  // st t = r39
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // isTRUE = ldf isTRUE
  Rsh_Fir_reg_isTRUE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L67() else D17()
  // L67()
  goto L67_;

D17_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

L67_:;
  // p10 = prom<V +>{
  //   _in_ = ldf `%in%`;
  //   p8 = prom<V +>{
  //     t = ld t;
  //     t1 = force? t;
  //     checkMissing(t1);
  //     return t1;
  //   };
  //   p9 = prom<V +>{
  //     sym6 = ldf c;
  //     base6 = ldf c in base;
  //     guard6 = `==`.4(sym6, base6);
  //     if guard6 then L1() else L2();
  //   L0(r42):
  //     return r42;
  //   L1():
  //     c22 = ldf c in base;
  //     r43 = dyn c22("l", "o", "b", "c", "s", "S", "h", "p", "n");
  //     goto L0(r43);
  //   L2():
  //     r41 = dyn base6("l", "o", "b", "c", "s", "S", "h", "p", "n");
  //     goto L0(r41);
  //   };
  //   r45 = dyn _in_(p8, p9);
  //   return r45;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_8, 0, NULL, CCP, RHO);
  // r47 = dyn isTRUE(p10)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isTRUE, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L68() else D18()
  // L68()
  goto L68_;

D18_:;
  // deopt 72 [r47]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L68_:;
  // r48 = `!`(r47)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args60);
  // c23 = `as.logical`(r48)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args61);
  // if c23 then L69() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L69()
    goto L69_;
  } else {
  // L24()
    goto L24_;
  }

L24_:;
  // goto L25()
  // L25()
  goto L25_;

L25_:;
  // sym7 = ldf invisible
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base7 = ldf invisible in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard7 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

L69_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L70() else D19()
  // L70()
  goto L70_;

D19_:;
  // deopt 75 []
  Rsh_Fir_deopt(75, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r55
  return Rsh_Fir_reg_r55_;

L70_:;
  // p12 = prom<V +>{
  //   gettextf2 = ldf gettextf;
  //   p11 = prom<V +>{
  //     t2 = ld t;
  //     t3 = force? t2;
  //     checkMissing(t3);
  //     return t3;
  //   };
  //   r50 = dyn gettextf2("invalid plot type '%s'", p11);
  //   return r50;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_11, 0, NULL, CCP, RHO);
  // r52 = dyn stop1(p12)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L71() else D20()
  // L71()
  goto L71_;

L73_:;
  // sym8 = ldf `.External.graphics`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // base8 = ldf `.External.graphics` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 49), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args66);
  // if guard8 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L74_:;
  // r54 = dyn base7(<lang .External.graphics(C_plotXY, xy, t, pch, lty, col, bg, cex, lwd, ...)>)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L26(r54)
  // L26(r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L26_;

D20_:;
  // deopt 77 [r52]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L27_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r68 = dyn invisible(r57)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L79() else D23()
  // L79()
  goto L79_;

L71_:;
  // goto L25()
  // L25()
  goto L25_;

L75_:;
  // _External_graphics = ldf `.External.graphics`
  Rsh_Fir_reg__External_graphics = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // check L77() else D21()
  // L77()
  goto L77_;

L76_:;
  // r56 = dyn base8(<sym C_plotXY>, <sym xy>, <sym t>, <sym pch>, <sym lty>, <sym col>, <sym bg>, <sym cex>, <sym lwd>, <sym ...>)
  SEXP Rsh_Fir_array_args69[10];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args69[2] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args69[3] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args69[4] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args69[5] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args69[6] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args69[7] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args69[8] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args69[9] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names28[10];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_array_arg_names28[3] = R_MissingArg;
  Rsh_Fir_array_arg_names28[4] = R_MissingArg;
  Rsh_Fir_array_arg_names28[5] = R_MissingArg;
  Rsh_Fir_array_arg_names28[6] = R_MissingArg;
  Rsh_Fir_array_arg_names28[7] = R_MissingArg;
  Rsh_Fir_array_arg_names28[8] = R_MissingArg;
  Rsh_Fir_array_arg_names28[9] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 10, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L27(r56)
  // L27(r56)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L27_;

D21_:;
  // deopt 84 []
  Rsh_Fir_deopt(84, 0, NULL, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 97 [r68]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(97, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L77_:;
  // p13 = prom<V +>{
  //   C_plotXY = ld C_plotXY;
  //   C_plotXY1 = force? C_plotXY;
  //   checkMissing(C_plotXY1);
  //   return C_plotXY1;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_13, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   xy1 = ld xy;
  //   xy2 = force? xy1;
  //   checkMissing(xy2);
  //   return xy2;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_14, 0, NULL, CCP, RHO);
  // p15 = prom<V +>{
  //   t4 = ld t;
  //   t5 = force? t4;
  //   checkMissing(t5);
  //   return t5;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_15, 0, NULL, CCP, RHO);
  // p16 = prom<V +>{
  //   pch1 = ld pch;
  //   pch2 = force? pch1;
  //   checkMissing(pch2);
  //   return pch2;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_16, 0, NULL, CCP, RHO);
  // p17 = prom<V +>{
  //   lty1 = ld lty;
  //   lty2 = force? lty1;
  //   checkMissing(lty2);
  //   return lty2;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_17, 0, NULL, CCP, RHO);
  // p18 = prom<V +>{
  //   col1 = ld col;
  //   col2 = force? col1;
  //   checkMissing(col2);
  //   return col2;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_18, 0, NULL, CCP, RHO);
  // p19 = prom<V +>{
  //   bg1 = ld bg;
  //   bg2 = force? bg1;
  //   checkMissing(bg2);
  //   return bg2;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_19, 0, NULL, CCP, RHO);
  // p20 = prom<V +>{
  //   cex1 = ld cex;
  //   cex2 = force? cex1;
  //   checkMissing(cex2);
  //   return cex2;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_20, 0, NULL, CCP, RHO);
  // p21 = prom<V +>{
  //   lwd1 = ld lwd;
  //   lwd2 = force? lwd1;
  //   checkMissing(lwd2);
  //   return lwd2;
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_21, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // r67 = dyn _External_graphics[, , , , , , , , , `...`](p13, p14, p15, p16, p17, p18, p19, p20, p21, ddd1)
  SEXP Rsh_Fir_array_args79[10];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args79[2] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args79[3] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args79[4] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args79[5] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args79[6] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_args79[7] = Rsh_Fir_reg_p20_;
  Rsh_Fir_array_args79[8] = Rsh_Fir_reg_p21_;
  Rsh_Fir_array_args79[9] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names29[10];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_array_arg_names29[3] = R_MissingArg;
  Rsh_Fir_array_arg_names29[4] = R_MissingArg;
  Rsh_Fir_array_arg_names29[5] = R_MissingArg;
  Rsh_Fir_array_arg_names29[6] = R_MissingArg;
  Rsh_Fir_array_arg_names29[7] = R_MissingArg;
  Rsh_Fir_array_arg_names29[8] = R_MissingArg;
  Rsh_Fir_array_arg_names29[9] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External_graphics, 10, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L78() else D22()
  // L78()
  goto L78_;

L79_:;
  // goto L26(r68)
  // L26(r68)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r68_;
  goto L26_;

D22_:;
  // deopt 95 [r67]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L78_:;
  // goto L27(r67)
  // L27(r67)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r67_;
  goto L27_;
}
SEXP Rsh_Fir_user_promise_inner234475492_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_par;
  SEXP Rsh_Fir_reg_r1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // par = ldf par
  Rsh_Fir_reg_par = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // r = dyn par("pch")
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner234475492_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_par1_;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // par1 = ldf par
  Rsh_Fir_reg_par1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // r2 = dyn par1("lty")
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par1_, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_inner234475492_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_par2_;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // par2 = ldf par
  Rsh_Fir_reg_par2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // r4 = dyn par2("col")
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par2_, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner234475492_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_par3_;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // par3 = ldf par
  Rsh_Fir_reg_par3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // r6 = dyn par3("lwd")
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par3_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_inner234475492_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf;
  SEXP Rsh_Fir_reg_r25_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // gettextf = ldf gettextf
  Rsh_Fir_reg_gettextf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // r25 = dyn gettextf("invalid plot type")
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names13, CCP, RHO);
  // return r25
  return Rsh_Fir_reg_r25_;
}
SEXP Rsh_Fir_user_promise_inner234475492_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf1_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r34_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // gettextf1 = ldf gettextf
  Rsh_Fir_reg_gettextf1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // p5 = prom<V +>{
  //   type13 = ld type;
  //   type14 = force? type13;
  //   checkMissing(type14);
  //   return type14;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_6, 0, NULL, CCP, RHO);
  // r34 = dyn gettextf1("plot type '%s' will be truncated to first character", p5)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf1_, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names17, CCP, RHO);
  // return r34
  return Rsh_Fir_reg_r34_;
}
SEXP Rsh_Fir_user_promise_inner234475492_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_type13_;
  SEXP Rsh_Fir_reg_type14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // type13 = ld type
  Rsh_Fir_reg_type13_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // type14 = force? type13
  Rsh_Fir_reg_type14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type13_);
  // checkMissing(type14)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_type14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // return type14
  return Rsh_Fir_reg_type14_;
}
SEXP Rsh_Fir_user_promise_inner234475492_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_type15_;
  SEXP Rsh_Fir_reg_type16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // type15 = ld type
  Rsh_Fir_reg_type15_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // type16 = force? type15
  Rsh_Fir_reg_type16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type15_);
  // checkMissing(type16)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_type16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // return type16
  return Rsh_Fir_reg_type16_;
}
SEXP Rsh_Fir_user_promise_inner234475492_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__in_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r45_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // p8 = prom<V +>{
  //   t = ld t;
  //   t1 = force? t;
  //   checkMissing(t1);
  //   return t1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_9, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   sym6 = ldf c;
  //   base6 = ldf c in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r42):
  //   return r42;
  // L1():
  //   c22 = ldf c in base;
  //   r43 = dyn c22("l", "o", "b", "c", "s", "S", "h", "p", "n");
  //   goto L0(r43);
  // L2():
  //   r41 = dyn base6("l", "o", "b", "c", "s", "S", "h", "p", "n");
  //   goto L0(r41);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_10, 0, NULL, CCP, RHO);
  // r45 = dyn _in_(p8, p9)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names22, CCP, RHO);
  // return r45
  return Rsh_Fir_reg_r45_;
}
SEXP Rsh_Fir_user_promise_inner234475492_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_t;
  SEXP Rsh_Fir_reg_t1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // t = ld t
  Rsh_Fir_reg_t = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // t1 = force? t
  Rsh_Fir_reg_t1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_t);
  // checkMissing(t1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_t1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return t1
  return Rsh_Fir_reg_t1_;
}
SEXP Rsh_Fir_user_promise_inner234475492_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_r43_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r42
  return Rsh_Fir_reg_r42_;

L1_:;
  // c22 = ldf c in base
  Rsh_Fir_reg_c22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r43 = dyn c22("l", "o", "b", "c", "s", "S", "h", "p", "n")
  SEXP Rsh_Fir_array_args56[9];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args56[2] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args56[3] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args56[4] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args56[5] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args56[6] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args56[7] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args56[8] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names20[9];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_array_arg_names20[3] = R_MissingArg;
  Rsh_Fir_array_arg_names20[4] = R_MissingArg;
  Rsh_Fir_array_arg_names20[5] = R_MissingArg;
  Rsh_Fir_array_arg_names20[6] = R_MissingArg;
  Rsh_Fir_array_arg_names20[7] = R_MissingArg;
  Rsh_Fir_array_arg_names20[8] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c22_, 9, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r43)
  // L0(r43)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r43_;
  goto L0_;

L2_:;
  // r41 = dyn base6("l", "o", "b", "c", "s", "S", "h", "p", "n")
  SEXP Rsh_Fir_array_args57[9];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args57[2] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args57[3] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args57[4] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args57[5] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args57[6] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args57[7] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args57[8] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names21[9];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_array_arg_names21[3] = R_MissingArg;
  Rsh_Fir_array_arg_names21[4] = R_MissingArg;
  Rsh_Fir_array_arg_names21[5] = R_MissingArg;
  Rsh_Fir_array_arg_names21[6] = R_MissingArg;
  Rsh_Fir_array_arg_names21[7] = R_MissingArg;
  Rsh_Fir_array_arg_names21[8] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 9, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r41)
  // L0(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner234475492_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf2_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r50_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // gettextf2 = ldf gettextf
  Rsh_Fir_reg_gettextf2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // p11 = prom<V +>{
  //   t2 = ld t;
  //   t3 = force? t2;
  //   checkMissing(t3);
  //   return t3;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner234475492_12, 0, NULL, CCP, RHO);
  // r50 = dyn gettextf2("invalid plot type '%s'", p11)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf2_, 2, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names24, CCP, RHO);
  // return r50
  return Rsh_Fir_reg_r50_;
}
SEXP Rsh_Fir_user_promise_inner234475492_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_t2_;
  SEXP Rsh_Fir_reg_t3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // t2 = ld t
  Rsh_Fir_reg_t2_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // t3 = force? t2
  Rsh_Fir_reg_t3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_t2_);
  // checkMissing(t3)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_t3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // return t3
  return Rsh_Fir_reg_t3_;
}
SEXP Rsh_Fir_user_promise_inner234475492_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_C_plotXY;
  SEXP Rsh_Fir_reg_C_plotXY1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // C_plotXY = ld C_plotXY
  Rsh_Fir_reg_C_plotXY = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // C_plotXY1 = force? C_plotXY
  Rsh_Fir_reg_C_plotXY1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_plotXY);
  // checkMissing(C_plotXY1)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_C_plotXY1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // return C_plotXY1
  return Rsh_Fir_reg_C_plotXY1_;
}
SEXP Rsh_Fir_user_promise_inner234475492_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xy1_;
  SEXP Rsh_Fir_reg_xy2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // xy1 = ld xy
  Rsh_Fir_reg_xy1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // xy2 = force? xy1
  Rsh_Fir_reg_xy2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xy1_);
  // checkMissing(xy2)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_xy2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // return xy2
  return Rsh_Fir_reg_xy2_;
}
SEXP Rsh_Fir_user_promise_inner234475492_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_t4_;
  SEXP Rsh_Fir_reg_t5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // t4 = ld t
  Rsh_Fir_reg_t4_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // t5 = force? t4
  Rsh_Fir_reg_t5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_t4_);
  // checkMissing(t5)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_t5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // return t5
  return Rsh_Fir_reg_t5_;
}
SEXP Rsh_Fir_user_promise_inner234475492_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_pch1_;
  SEXP Rsh_Fir_reg_pch2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // pch1 = ld pch
  Rsh_Fir_reg_pch1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // pch2 = force? pch1
  Rsh_Fir_reg_pch2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pch1_);
  // checkMissing(pch2)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_pch2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // return pch2
  return Rsh_Fir_reg_pch2_;
}
SEXP Rsh_Fir_user_promise_inner234475492_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lty1_;
  SEXP Rsh_Fir_reg_lty2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // lty1 = ld lty
  Rsh_Fir_reg_lty1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // lty2 = force? lty1
  Rsh_Fir_reg_lty2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lty1_);
  // checkMissing(lty2)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_lty2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // return lty2
  return Rsh_Fir_reg_lty2_;
}
SEXP Rsh_Fir_user_promise_inner234475492_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_col1_;
  SEXP Rsh_Fir_reg_col2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // col1 = ld col
  Rsh_Fir_reg_col1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // col2 = force? col1
  Rsh_Fir_reg_col2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_col1_);
  // checkMissing(col2)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_col2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // return col2
  return Rsh_Fir_reg_col2_;
}
SEXP Rsh_Fir_user_promise_inner234475492_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_bg1_;
  SEXP Rsh_Fir_reg_bg2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // bg1 = ld bg
  Rsh_Fir_reg_bg1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // bg2 = force? bg1
  Rsh_Fir_reg_bg2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bg1_);
  // checkMissing(bg2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_bg2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // return bg2
  return Rsh_Fir_reg_bg2_;
}
SEXP Rsh_Fir_user_promise_inner234475492_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cex1_;
  SEXP Rsh_Fir_reg_cex2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // cex1 = ld cex
  Rsh_Fir_reg_cex1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // cex2 = force? cex1
  Rsh_Fir_reg_cex2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cex1_);
  // checkMissing(cex2)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_cex2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // return cex2
  return Rsh_Fir_reg_cex2_;
}
SEXP Rsh_Fir_user_promise_inner234475492_21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lwd1_;
  SEXP Rsh_Fir_reg_lwd2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner234475492/0: expected 0, got %d", NCAPTURES);

  // lwd1 = ld lwd
  Rsh_Fir_reg_lwd1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // lwd2 = force? lwd1
  Rsh_Fir_reg_lwd2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lwd1_);
  // checkMissing(lwd2)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_lwd2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // return lwd2
  return Rsh_Fir_reg_lwd2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
