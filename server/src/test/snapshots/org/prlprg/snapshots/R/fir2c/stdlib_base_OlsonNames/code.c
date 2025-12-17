#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4069375805_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4069375805_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4069375805_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_24(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4069375805_25(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4069375805
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4069375805_, RHO, CCP);
  // st OlsonNames = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner4069375805_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4069375805 dynamic dispatch ([tzdir])

  return Rsh_Fir_user_version_inner4069375805_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4069375805_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4069375805 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner4069375805/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_tzdir;
  SEXP Rsh_Fir_reg_tzdir_isMissing;
  SEXP Rsh_Fir_reg_tzdir_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_tzdir1_;
  SEXP Rsh_Fir_reg_tzdir2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg__Platform;
  SEXP Rsh_Fir_reg__Platform1_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg__Platform3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_Sys_getenv;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_Sys_getenv1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_file_path1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_grepl;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_Sys_getenv2_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_Sys_getenv3_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_file_path2_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_tzdirs;
  SEXP Rsh_Fir_reg_tzdirs1_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_tzdirs3_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_file_exists;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_tzdirs6_;
  SEXP Rsh_Fir_reg_tzdirs7_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_character;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_tzdirs8_;
  SEXP Rsh_Fir_reg_tzdirs9_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_tzdirs11_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_dir_exists;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_list_files;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_file_exists1_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_readLines;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_file_exists2_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_readLines1_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_file_exists3_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_readLines2_;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_grepl1_;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_sub;
  SEXP Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_setdiff;
  SEXP Rsh_Fir_reg_p24_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_grep;
  SEXP Rsh_Fir_reg_p25_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_ver;
  SEXP Rsh_Fir_reg_ver1_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_ver2_;
  SEXP Rsh_Fir_reg_ver3_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_attr__;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_ans;
  SEXP Rsh_Fir_reg_ans1_;

  // Bind parameters
  Rsh_Fir_reg_tzdir = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // tzdir_isMissing = missing.0(tzdir)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_tzdir;
  Rsh_Fir_reg_tzdir_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if tzdir_isMissing then L0(NULL) else L0(tzdir)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_tzdir_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_tzdir_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(tzdir)
    Rsh_Fir_reg_tzdir_orDefault = Rsh_Fir_reg_tzdir;
    goto L0_;
  }

L0_:;
  // st tzdir = tzdir_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_tzdir_orDefault, RHO);
  (void)(Rsh_Fir_reg_tzdir_orDefault);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L1_:;
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args2);
  // if c1 then L27() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L27()
    goto L27_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // dir_exists = ldf `dir.exists`
  Rsh_Fir_reg_dir_exists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L80() else D27()
  // L80()
  goto L80_;

L3_:;
  // Sys_getenv1 = ldf `Sys.getenv`
  Rsh_Fir_reg_Sys_getenv1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L37() else D4()
  // L37()
  goto L37_;

L4_:;
  // goto L13()
  // L13()
  goto L13_;

L5_:;
  // grepl = ldf grepl
  Rsh_Fir_reg_grepl = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L43() else D8()
  // L43()
  goto L43_;

L6_:;
  // c12 = `as.logical`(c8)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args3);
  // if c12 then L49() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L49()
    goto L49_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L8_:;
  // st tzdirs = r24
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // tzdirs = ld tzdirs
  Rsh_Fir_reg_tzdirs = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L58() else D17()
  // L58()
  goto L58_;

L9_:;
  // st tzdirs = dx5
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard2 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

L10_:;
  // r36 = `!`(r34)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args6);
  // c15 = `as.logical`(r36)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args7);
  // if c15 then L68() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L68()
    goto L68_;
  } else {
  // L11()
    goto L11_;
  }

L11_:;
  // tzdirs8 = ld tzdirs
  Rsh_Fir_reg_tzdirs8_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L75() else D26()
  // L75()
  goto L75_;

L12_:;
  // st tzdir = dx7
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L4(dx7)
  // L4(dx7)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_dx7_;
  goto L4_;

L13_:;
  // list_files = ldf `list.files`
  Rsh_Fir_reg_list_files = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L86() else D31()
  // L86()
  goto L86_;

L14_:;
  // goto L13()
  // L13()
  goto L13_;

L15_:;
  // file_exists2 = ldf `file.exists`
  Rsh_Fir_reg_file_exists2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L94() else D37()
  // L94()
  goto L94_;

L16_:;
  // st ver = r59
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r59_, RHO);
  (void)(Rsh_Fir_reg_r59_);
  // setdiff = ldf setdiff
  Rsh_Fir_reg_setdiff = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L112() else D49()
  // L112()
  goto L112_;

L17_:;
  // file_exists3 = ldf `file.exists`
  Rsh_Fir_reg_file_exists3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L100() else D41()
  // L100()
  goto L100_;

L18_:;
  // goto L16(NULL)
  // L16(NULL)
  Rsh_Fir_reg_r59_ = Rsh_const(CCP, 1);
  goto L16_;

L19_:;
  // goto L20(NULL)
  // L20(NULL)
  Rsh_Fir_reg_r78_ = Rsh_const(CCP, 1);
  goto L20_;

L20_:;
  // goto L16(r78)
  // L16(r78)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r78_;
  goto L16_;

L21_:;
  // r85 = `!`(r84)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args8);
  // c23 = `as.logical`(r85)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args9);
  // if c23 then L119() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L119()
    goto L119_;
  } else {
  // L22()
    goto L22_;
  }

L22_:;
  // goto L23()
  // L23()
  goto L23_;

L23_:;
  // ans = ld ans
  Rsh_Fir_reg_ans = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L124() else D57()
  // L124()
  goto L124_;

L24_:;
  // tzdir1 = ld tzdir
  Rsh_Fir_reg_tzdir1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L26() else D0()
  // L26()
  goto L26_;

L25_:;
  // r = dyn base(<sym tzdir>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 1 [tzdir1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_tzdir1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L26_:;
  // tzdir2 = force? tzdir1
  Rsh_Fir_reg_tzdir2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tzdir1_);
  // checkMissing(tzdir2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_tzdir2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // c = `==`(tzdir2, NULL)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_tzdir2_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args12);
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L1_;

L27_:;
  // _Platform = ld `.Platform`
  Rsh_Fir_reg__Platform = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L28() else D1()
  // L28()
  goto L28_;

D1_:;
  // deopt 4 [_Platform]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg__Platform;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L28_:;
  // _Platform1 = force? _Platform
  Rsh_Fir_reg__Platform1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Platform);
  // checkMissing(_Platform1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg__Platform1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(_Platform1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args14);
  // if c2 then L30() else L31(_Platform1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L30()
    goto L30_;
  } else {
  // L31(_Platform1)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg__Platform1_;
    goto L31_;
  }

L29_:;
  // r3 = `==`(dx1, "windows")
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args15);
  // c3 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args16);
  // if c3 then L33() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L33()
    goto L33_;
  } else {
  // L3()
    goto L3_;
  }

L30_:;
  // dr = tryDispatchBuiltin.1("$", _Platform1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if dc then L32() else L31(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L32()
    goto L32_;
  } else {
  // L31(dr)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg_dr;
    goto L31_;
  }

L31_:;
  // r2 = `$`(_Platform3, <sym OS.type>)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg__Platform3_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args19);
  // goto L29(r2)
  // L29(r2)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r2_;
  goto L29_;

L32_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L29(dx)
  // L29(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L29_;

L33_:;
  // Sys_getenv = ldf `Sys.getenv`
  Rsh_Fir_reg_Sys_getenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L34() else D2()
  // L34()
  goto L34_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p1 = prom<V +>{
  //   file_path = ldf `file.path`;
  //   p = prom<V +>{
  //     R_home = ldf `R.home`;
  //     r4 = dyn R_home("share");
  //     return r4;
  //   };
  //   r6 = dyn file_path(p, "zoneinfo");
  //   return r6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_, 0, NULL, CCP, RHO);
  // r8 = dyn Sys_getenv("TZDIR", p1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_getenv, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L35() else D3()
  // L35()
  goto L35_;

D3_:;
  // deopt 13 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L35_:;
  // st tzdir = r8
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // goto L4(r8)
  // L4(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L4_;

D4_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L37_:;
  // r10 = dyn Sys_getenv1("TZDIR")
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_getenv1_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L38() else D5()
  // L38()
  goto L38_;

D5_:;
  // deopt 18 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L38_:;
  // r11 = `==`(r10, "internal")
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args25);
  // c4 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args26);
  // if c4 then L39() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L39()
    goto L39_;
  } else {
  // L5()
    goto L5_;
  }

L39_:;
  // file_path1 = ldf `file.path`
  Rsh_Fir_reg_file_path1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L40() else D6()
  // L40()
  goto L40_;

D6_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p2 = prom<V +>{
  //   R_home1 = ldf `R.home`;
  //   r12 = dyn R_home1("share");
  //   return r12;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_2, 0, NULL, CCP, RHO);
  // r14 = dyn file_path1(p2, "zoneinfo")
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path1_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L41() else D7()
  // L41()
  goto L41_;

D7_:;
  // deopt 25 [r14]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L41_:;
  // st tzdir = r14
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // goto L4(r14)
  // L4(r14)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r14_;
  goto L4_;

D8_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L43_:;
  // p3 = prom<V +>{
  //   R_Version = ldf `R.Version`;
  //   r15 = dyn R_Version();
  //   c5 = `is.object`(r15);
  //   if c5 then L1() else L2(r15);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("$", r15);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(r17):
  //   r18 = `$`(r17, <sym os>);
  //   goto L0(r18);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_3, 0, NULL, CCP, RHO);
  // r20 = dyn grepl("darwin", p3)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L44() else D9()
  // L44()
  goto L44_;

D9_:;
  // deopt 31 [r20]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L44_:;
  // c6 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args35);
  // if c6 then L45() else L6(c6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L45()
    goto L45_;
  } else {
  // L6(c6)
    Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c6_;
    goto L6_;
  }

L45_:;
  // Sys_getenv2 = ldf `Sys.getenv`
  Rsh_Fir_reg_Sys_getenv2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L46() else D10()
  // L46()
  goto L46_;

D10_:;
  // deopt 33 [c6]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L46_:;
  // r21 = dyn Sys_getenv2("TZDIR")
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_getenv2_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L47() else D11()
  // L47()
  goto L47_;

D11_:;
  // deopt 35 [c6, r21]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(35, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L47_:;
  // r22 = `==`(r21, "macOS")
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args37);
  // c9 = `as.logical`(r22)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args38);
  // c10 = `&&`(c6, c9)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args39);
  // goto L6(c10)
  // L6(c10)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c10_;
  goto L6_;

L49_:;
  // st tzdir = "/var/db/timezone/zoneinfo"
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_const(CCP, 29), RHO);
  (void)(Rsh_const(CCP, 29));
  // goto L4("/var/db/timezone/zoneinfo")
  // L4("/var/db/timezone/zoneinfo")
  Rsh_Fir_reg_r9_ = Rsh_const(CCP, 29);
  goto L4_;

L51_:;
  // Sys_getenv3 = ldf `Sys.getenv`
  Rsh_Fir_reg_Sys_getenv3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L53() else D12()
  // L53()
  goto L53_;

L52_:;
  // r23 = dyn base1(<lang Sys.getenv("TZDIR")>, <lang file.path(R.home("share"), "zoneinfo")>, "/usr/share/zoneinfo", "/share/zoneinfo", "/usr/share/lib/zoneinfo", "/usr/lib/zoneinfo", "/usr/local/etc/zoneinfo", "/etc/zoneinfo", "/usr/etc/zoneinfo")
  SEXP Rsh_Fir_array_args40[9];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args40[2] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args40[3] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args40[4] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args40[5] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args40[6] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args40[7] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args40[8] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names9[9];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_array_arg_names9[4] = R_MissingArg;
  Rsh_Fir_array_arg_names9[5] = R_MissingArg;
  Rsh_Fir_array_arg_names9[6] = R_MissingArg;
  Rsh_Fir_array_arg_names9[7] = R_MissingArg;
  Rsh_Fir_array_arg_names9[8] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 9, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L8(r23)
  // L8(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L8_;

D12_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L53_:;
  // r25 = dyn Sys_getenv3("TZDIR")
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_getenv3_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L54() else D13()
  // L54()
  goto L54_;

D13_:;
  // deopt 47 [r25]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L54_:;
  // file_path2 = ldf `file.path`
  Rsh_Fir_reg_file_path2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L55() else D14()
  // L55()
  goto L55_;

D14_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

L55_:;
  // p4 = prom<V +>{
  //   R_home2 = ldf `R.home`;
  //   r26 = dyn R_home2("share");
  //   return r26;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_4, 0, NULL, CCP, RHO);
  // r28 = dyn file_path2(p4, "zoneinfo")
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path2_, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L56() else D15()
  // L56()
  goto L56_;

D15_:;
  // deopt 52 [r28]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L56_:;
  // c13 = ldf c in base
  Rsh_Fir_reg_c13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r29 = dyn c13(r25, r28, "/usr/share/zoneinfo", "/share/zoneinfo", "/usr/share/lib/zoneinfo", "/usr/lib/zoneinfo", "/usr/local/etc/zoneinfo", "/etc/zoneinfo", "/usr/etc/zoneinfo")
  SEXP Rsh_Fir_array_args44[9];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args44[2] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args44[3] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args44[4] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args44[5] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args44[6] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args44[7] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args44[8] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names13[9];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_array_arg_names13[4] = R_MissingArg;
  Rsh_Fir_array_arg_names13[5] = R_MissingArg;
  Rsh_Fir_array_arg_names13[6] = R_MissingArg;
  Rsh_Fir_array_arg_names13[7] = R_MissingArg;
  Rsh_Fir_array_arg_names13[8] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c13_, 9, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L57() else D16()
  // L57()
  goto L57_;

D16_:;
  // deopt 61 [r29]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L8(r29)
  // L8(r29)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r29_;
  goto L8_;

D17_:;
  // deopt 63 [tzdirs]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_tzdirs;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L58_:;
  // tzdirs1 = force? tzdirs
  Rsh_Fir_reg_tzdirs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tzdirs);
  // checkMissing(tzdirs1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_tzdirs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(tzdirs1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_tzdirs1_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args46);
  // if c14 then L59() else L60(tzdirs1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L59()
    goto L59_;
  } else {
  // L60(tzdirs1)
    Rsh_Fir_reg_tzdirs3_ = Rsh_Fir_reg_tzdirs1_;
    goto L60_;
  }

L59_:;
  // dr4 = tryDispatchBuiltin.1("[", tzdirs1)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_tzdirs1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args47);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if dc2 then L61() else L60(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L61()
    goto L61_;
  } else {
  // L60(dr4)
    Rsh_Fir_reg_tzdirs3_ = Rsh_Fir_reg_dr4_;
    goto L60_;
  }

L60_:;
  // file_exists = ldf `file.exists`
  Rsh_Fir_reg_file_exists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L62() else D18()
  // L62()
  goto L62_;

L61_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L9(dx4)
  // L9(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L9_;

D18_:;
  // deopt 66 [tzdirs3]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_tzdirs3_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L62_:;
  // p5 = prom<V +>{
  //   tzdirs4 = ld tzdirs;
  //   tzdirs5 = force? tzdirs4;
  //   checkMissing(tzdirs5);
  //   return tzdirs5;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_5, 0, NULL, CCP, RHO);
  // r31 = dyn file_exists(p5)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_exists, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L63() else D19()
  // L63()
  goto L63_;

D19_:;
  // deopt 68 [tzdirs3, r31]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_tzdirs3_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(68, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L63_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r32 = dyn __(tzdirs3, r31)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_tzdirs3_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L9(r32)
  // L9(r32)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r32_;
  goto L9_;

L64_:;
  // tzdirs6 = ld tzdirs
  Rsh_Fir_reg_tzdirs6_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L66() else D20()
  // L66()
  goto L66_;

L65_:;
  // r33 = dyn base2(<sym tzdirs>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L10(r33)
  // L10(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L10_;

D20_:;
  // deopt 73 [tzdirs6]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_tzdirs6_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L66_:;
  // tzdirs7 = force? tzdirs6
  Rsh_Fir_reg_tzdirs7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tzdirs6_);
  // checkMissing(tzdirs7)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_tzdirs7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r35 = dyn length(tzdirs7)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_tzdirs7_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L67() else D21()
  // L67()
  goto L67_;

D21_:;
  // deopt 76 [r35]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L67_:;
  // goto L10(r35)
  // L10(r35)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L10_;

L68_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L69() else D22()
  // L69()
  goto L69_;

D22_:;
  // deopt 79 []
  Rsh_Fir_deopt(79, 0, NULL, CCP, RHO);
  return R_NilValue;

L69_:;
  // r37 = dyn warning("no Olson database found")
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L70() else D23()
  // L70()
  goto L70_;

D23_:;
  // deopt 81 [r37]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L70_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L71() else D24()
  // L71()
  goto L71_;

D24_:;
  // deopt 83 []
  Rsh_Fir_deopt(83, 0, NULL, CCP, RHO);
  return R_NilValue;

L71_:;
  // r38 = dyn character()
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // check L72() else D25()
  // L72()
  goto L72_;

D25_:;
  // deopt 84 [r38]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(84, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L72_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r38
  return Rsh_Fir_reg_r38_;

D26_:;
  // deopt 86 [tzdirs8]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_tzdirs8_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L75_:;
  // tzdirs9 = force? tzdirs8
  Rsh_Fir_reg_tzdirs9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tzdirs8_);
  // checkMissing(tzdirs9)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_tzdirs9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(tzdirs9)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_tzdirs9_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args58);
  // if c16 then L76() else L77(tzdirs9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L76()
    goto L76_;
  } else {
  // L77(tzdirs9)
    Rsh_Fir_reg_tzdirs11_ = Rsh_Fir_reg_tzdirs9_;
    goto L77_;
  }

L76_:;
  // dr6 = tryDispatchBuiltin.1("[", tzdirs9)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_tzdirs9_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args59);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc3 then L78() else L77(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L78()
    goto L78_;
  } else {
  // L77(dr6)
    Rsh_Fir_reg_tzdirs11_ = Rsh_Fir_reg_dr6_;
    goto L77_;
  }

L77_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r40 = dyn __1(tzdirs11, 1)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_tzdirs11_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L12(r40)
  // L12(r40)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r40_;
  goto L12_;

L78_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // goto L12(dx6)
  // L12(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L12_;

D27_:;
  // deopt 93 []
  Rsh_Fir_deopt(93, 0, NULL, CCP, RHO);
  return R_NilValue;

L80_:;
  // p6 = prom<V +>{
  //   tzdir3 = ld tzdir;
  //   tzdir4 = force? tzdir3;
  //   checkMissing(tzdir4);
  //   return tzdir4;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_6, 0, NULL, CCP, RHO);
  // r43 = dyn dir_exists(p6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dir_exists, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L81() else D28()
  // L81()
  goto L81_;

D28_:;
  // deopt 95 [r43]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L81_:;
  // r44 = `!`(r43)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args65);
  // c17 = `as.logical`(r44)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args66);
  // if c17 then L82() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L82()
    goto L82_;
  } else {
  // L14()
    goto L14_;
  }

L82_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L83() else D29()
  // L83()
  goto L83_;

D29_:;
  // deopt 98 []
  Rsh_Fir_deopt(98, 0, NULL, CCP, RHO);
  return R_NilValue;

L83_:;
  // p9 = prom<V +>{
  //   sprintf = ldf sprintf;
  //   p8 = prom<V +>{
  //     sQuote = ldf sQuote;
  //     p7 = prom<V +>{
  //       tzdir5 = ld tzdir;
  //       tzdir6 = force? tzdir5;
  //       checkMissing(tzdir6);
  //       return tzdir6;
  //     };
  //     r46 = dyn sQuote(p7);
  //     return r46;
  //   };
  //   r48 = dyn sprintf("%s is not a directory", p8);
  //   return r48;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_7, 0, NULL, CCP, RHO);
  // r50 = dyn stop[, domain](p9, NA_LGL)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = Rsh_const(CCP, 50);
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L84() else D30()
  // L84()
  goto L84_;

D30_:;
  // deopt 102 [r50]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L84_:;
  // goto L13()
  // L13()
  goto L13_;

D31_:;
  // deopt 106 []
  Rsh_Fir_deopt(106, 0, NULL, CCP, RHO);
  return R_NilValue;

L86_:;
  // p10 = prom<V +>{
  //   tzdir7 = ld tzdir;
  //   tzdir8 = force? tzdir7;
  //   checkMissing(tzdir8);
  //   return tzdir8;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_10, 0, NULL, CCP, RHO);
  // r52 = dyn list_files[, recursive](p10, TRUE)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = Rsh_const(CCP, 52);
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list_files, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L87() else D32()
  // L87()
  goto L87_;

D32_:;
  // deopt 110 [r52]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L87_:;
  // st x = r52
  Rsh_Fir_store(Rsh_const(CCP, 53), Rsh_Fir_reg_r52_, RHO);
  (void)(Rsh_Fir_reg_r52_);
  // file_exists1 = ldf `file.exists`
  Rsh_Fir_reg_file_exists1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L88() else D33()
  // L88()
  goto L88_;

D33_:;
  // deopt 113 []
  Rsh_Fir_deopt(113, 0, NULL, CCP, RHO);
  return R_NilValue;

L88_:;
  // p12 = prom<V +>{
  //   file_path3 = ldf `file.path`;
  //   p11 = prom<V +>{
  //     tzdir9 = ld tzdir;
  //     tzdir10 = force? tzdir9;
  //     checkMissing(tzdir10);
  //     return tzdir10;
  //   };
  //   r54 = dyn file_path3(p11, "VERSION");
  //   st vf = r54;
  //   setInvisible.0();
  //   return r54;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_11, 0, NULL, CCP, RHO);
  // r56 = dyn file_exists1(p12)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_exists1_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L89() else D34()
  // L89()
  goto L89_;

D34_:;
  // deopt 115 [r56]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L89_:;
  // c18 = `as.logical`(r56)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args76);
  // if c18 then L90() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L90()
    goto L90_;
  } else {
  // L15()
    goto L15_;
  }

L90_:;
  // readLines = ldf readLines
  Rsh_Fir_reg_readLines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // check L91() else D35()
  // L91()
  goto L91_;

D35_:;
  // deopt 117 []
  Rsh_Fir_deopt(117, 0, NULL, CCP, RHO);
  return R_NilValue;

L91_:;
  // p13 = prom<V +>{
  //   vf = ld vf;
  //   vf1 = force? vf;
  //   checkMissing(vf1);
  //   return vf1;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_13, 0, NULL, CCP, RHO);
  // r58 = dyn readLines[, warn](p13, FALSE)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = Rsh_const(CCP, 58);
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readLines, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L92() else D36()
  // L92()
  goto L92_;

D36_:;
  // deopt 121 [r58]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L92_:;
  // goto L16(r58)
  // L16(r58)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r58_;
  goto L16_;

D37_:;
  // deopt 123 []
  Rsh_Fir_deopt(123, 0, NULL, CCP, RHO);
  return R_NilValue;

L94_:;
  // p15 = prom<V +>{
  //   file_path4 = ldf `file.path`;
  //   p14 = prom<V +>{
  //     tzdir11 = ld tzdir;
  //     tzdir12 = force? tzdir11;
  //     checkMissing(tzdir12);
  //     return tzdir12;
  //   };
  //   r61 = dyn file_path4(p14, "+VERSION");
  //   st vf = r61;
  //   setInvisible.0();
  //   return r61;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_14, 0, NULL, CCP, RHO);
  // r63 = dyn file_exists2(p15)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_exists2_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L95() else D38()
  // L95()
  goto L95_;

D38_:;
  // deopt 125 [r63]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L95_:;
  // c19 = `as.logical`(r63)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args82);
  // if c19 then L96() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L96()
    goto L96_;
  } else {
  // L17()
    goto L17_;
  }

L96_:;
  // readLines1 = ldf readLines
  Rsh_Fir_reg_readLines1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // check L97() else D39()
  // L97()
  goto L97_;

D39_:;
  // deopt 127 []
  Rsh_Fir_deopt(127, 0, NULL, CCP, RHO);
  return R_NilValue;

L97_:;
  // p16 = prom<V +>{
  //   vf2 = ld vf;
  //   vf3 = force? vf2;
  //   checkMissing(vf3);
  //   return vf3;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_16, 0, NULL, CCP, RHO);
  // r65 = dyn readLines1[, warn](p16, FALSE)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = Rsh_const(CCP, 58);
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readLines1_, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L98() else D40()
  // L98()
  goto L98_;

D40_:;
  // deopt 131 [r65]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L98_:;
  // goto L16(r65)
  // L16(r65)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r65_;
  goto L16_;

D41_:;
  // deopt 133 []
  Rsh_Fir_deopt(133, 0, NULL, CCP, RHO);
  return R_NilValue;

L100_:;
  // p18 = prom<V +>{
  //   file_path5 = ldf `file.path`;
  //   p17 = prom<V +>{
  //     tzdir13 = ld tzdir;
  //     tzdir14 = force? tzdir13;
  //     checkMissing(tzdir14);
  //     return tzdir14;
  //   };
  //   r67 = dyn file_path5(p17, "tzdata.zi");
  //   st vf = r67;
  //   setInvisible.0();
  //   return r67;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_17, 0, NULL, CCP, RHO);
  // r69 = dyn file_exists3(p18)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_exists3_, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L101() else D42()
  // L101()
  goto L101_;

D42_:;
  // deopt 135 [r69]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(135, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L101_:;
  // c20 = `as.logical`(r69)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args88);
  // if c20 then L102() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L102()
    goto L102_;
  } else {
  // L18()
    goto L18_;
  }

L102_:;
  // readLines2 = ldf readLines
  Rsh_Fir_reg_readLines2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // check L103() else D43()
  // L103()
  goto L103_;

D43_:;
  // deopt 137 []
  Rsh_Fir_deopt(137, 0, NULL, CCP, RHO);
  return R_NilValue;

L103_:;
  // p19 = prom<V +>{
  //   vf4 = ld vf;
  //   vf5 = force? vf4;
  //   checkMissing(vf5);
  //   return vf5;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_19, 0, NULL, CCP, RHO);
  // r71 = dyn readLines2[, n](p19, 1)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = Rsh_const(CCP, 61);
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readLines2_, 2, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L104() else D44()
  // L104()
  goto L104_;

D44_:;
  // deopt 141 [r71]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L104_:;
  // st l = r71
  Rsh_Fir_store(Rsh_const(CCP, 62), Rsh_Fir_reg_r71_, RHO);
  (void)(Rsh_Fir_reg_r71_);
  // st patt = "^# version "
  Rsh_Fir_store(Rsh_const(CCP, 64), Rsh_const(CCP, 63), RHO);
  (void)(Rsh_const(CCP, 63));
  // grepl1 = ldf grepl
  Rsh_Fir_reg_grepl1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L105() else D45()
  // L105()
  goto L105_;

D45_:;
  // deopt 147 []
  Rsh_Fir_deopt(147, 0, NULL, CCP, RHO);
  return R_NilValue;

L105_:;
  // p20 = prom<V +>{
  //   patt = ld patt;
  //   patt1 = force? patt;
  //   checkMissing(patt1);
  //   return patt1;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_20, 0, NULL, CCP, RHO);
  // p21 = prom<V +>{
  //   l = ld l;
  //   l1 = force? l;
  //   checkMissing(l1);
  //   return l1;
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_21, 0, NULL, CCP, RHO);
  // r74 = dyn grepl1(p20, p21)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_p20_;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl1_, 2, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L106() else D46()
  // L106()
  goto L106_;

D46_:;
  // deopt 150 [r74]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(150, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L106_:;
  // c21 = `as.logical`(r74)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args94);
  // if c21 then L107() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L107()
    goto L107_;
  } else {
  // L19()
    goto L19_;
  }

L107_:;
  // sub = ldf sub
  Rsh_Fir_reg_sub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 65), RHO);
  // check L108() else D47()
  // L108()
  goto L108_;

D47_:;
  // deopt 152 []
  Rsh_Fir_deopt(152, 0, NULL, CCP, RHO);
  return R_NilValue;

L108_:;
  // p22 = prom<V +>{
  //   patt2 = ld patt;
  //   patt3 = force? patt2;
  //   checkMissing(patt3);
  //   return patt3;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_22, 0, NULL, CCP, RHO);
  // p23 = prom<V +>{
  //   l2 = ld l;
  //   l3 = force? l2;
  //   checkMissing(l3);
  //   return l3;
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_23, 0, NULL, CCP, RHO);
  // r77 = dyn sub(p22, "", p23)
  SEXP Rsh_Fir_array_args97[3];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_p22_;
  Rsh_Fir_array_args97[1] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args97[2] = Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_array_arg_names35[2] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sub, 3, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L109() else D48()
  // L109()
  goto L109_;

D48_:;
  // deopt 156 [r77]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_deopt(156, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L109_:;
  // goto L20(r77)
  // L20(r77)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r77_;
  goto L20_;

D49_:;
  // deopt 163 []
  Rsh_Fir_deopt(163, 0, NULL, CCP, RHO);
  return R_NilValue;

L112_:;
  // p24 = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p24_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_24, 0, NULL, CCP, RHO);
  // r80 = dyn setdiff(p24, "VERSION")
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_p24_;
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setdiff, 2, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L113() else D50()
  // L113()
  goto L113_;

D50_:;
  // deopt 166 [r80]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(166, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L113_:;
  // st x = r80
  Rsh_Fir_store(Rsh_const(CCP, 53), Rsh_Fir_reg_r80_, RHO);
  (void)(Rsh_Fir_reg_r80_);
  // grep = ldf grep
  Rsh_Fir_reg_grep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // check L114() else D51()
  // L114()
  goto L114_;

D51_:;
  // deopt 169 []
  Rsh_Fir_deopt(169, 0, NULL, CCP, RHO);
  return R_NilValue;

L114_:;
  // p25 = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   return x3;
  // }
  Rsh_Fir_reg_p25_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_25, 0, NULL, CCP, RHO);
  // r82 = dyn grep[, , value]("^[ABCDEFGHIJKLMNOPQRSTUVWXYZ]", p25, TRUE)
  SEXP Rsh_Fir_array_args101[3];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_p25_;
  Rsh_Fir_array_args101[2] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names37[3];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = Rsh_const(CCP, 69);
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep, 3, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L115() else D52()
  // L115()
  goto L115_;

D52_:;
  // deopt 174 [r82]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(174, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L115_:;
  // st ans = r82
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r82_, RHO);
  (void)(Rsh_Fir_reg_r82_);
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args102);
  // if guard3 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

L116_:;
  // ver = ld ver
  Rsh_Fir_reg_ver = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L118() else D53()
  // L118()
  goto L118_;

L117_:;
  // r83 = dyn base3(<sym ver>)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L21(r83)
  // L21(r83)
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r83_;
  goto L21_;

D53_:;
  // deopt 177 [ver]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_ver;
  Rsh_Fir_deopt(177, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L118_:;
  // ver1 = force? ver
  Rsh_Fir_reg_ver1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ver);
  // checkMissing(ver1)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_ver1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // c22 = `==`(ver1, NULL)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_ver1_;
  Rsh_Fir_array_args105[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args105);
  // goto L21(c22)
  // L21(c22)
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_c22_;
  goto L21_;

L119_:;
  // ver2 = ld ver
  Rsh_Fir_reg_ver2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L120() else D54()
  // L120()
  goto L120_;

D54_:;
  // deopt 181 [ver2]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_ver2_;
  Rsh_Fir_deopt(181, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L120_:;
  // ver3 = force? ver2
  Rsh_Fir_reg_ver3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ver2_);
  // checkMissing(ver3)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_ver3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // l4 = ld ans
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 70), RHO);
  // check L121() else D55()
  // L121()
  goto L121_;

D55_:;
  // deopt 184 [ver3, l4, ver3]
  SEXP Rsh_Fir_array_deopt_stack34[3];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_ver3_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack34[2] = Rsh_Fir_reg_ver3_;
  Rsh_Fir_deopt(184, 3, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L121_:;
  // r86 = dyn attr__(l4, NULL, "Version", ver3)
  SEXP Rsh_Fir_array_args107[4];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args107[2] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args107[3] = Rsh_Fir_reg_ver3_;
  SEXP Rsh_Fir_array_arg_names39[4];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_array_arg_names39[2] = R_MissingArg;
  Rsh_Fir_array_arg_names39[3] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L122() else D56()
  // L122()
  goto L122_;

D56_:;
  // deopt 187 [ver3, r86]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_ver3_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(187, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L122_:;
  // st ans = r86
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r86_, RHO);
  (void)(Rsh_Fir_reg_r86_);
  // goto L23()
  // L23()
  goto L23_;

D57_:;
  // deopt 191 [ans]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_ans;
  Rsh_Fir_deopt(191, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L124_:;
  // ans1 = force? ans
  Rsh_Fir_reg_ans1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ans);
  // checkMissing(ans1)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_ans1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ans1
  return Rsh_Fir_reg_ans1_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file_path;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // file_path = ldf `file.path`
  Rsh_Fir_reg_file_path = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // p = prom<V +>{
  //   R_home = ldf `R.home`;
  //   r4 = dyn R_home("share");
  //   return r4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_1, 0, NULL, CCP, RHO);
  // r6 = dyn file_path(p, "zoneinfo")
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_R_home;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // R_home = ldf `R.home`
  Rsh_Fir_reg_R_home = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // r4 = dyn R_home("share")
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_R_home, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_R_home1_;
  SEXP Rsh_Fir_reg_r12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // R_home1 = ldf `R.home`
  Rsh_Fir_reg_R_home1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // r12 = dyn R_home1("share")
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_R_home1_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names5, CCP, RHO);
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_R_Version;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // R_Version = ldf `R.Version`
  Rsh_Fir_reg_R_Version = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // r15 = dyn R_Version()
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_R_Version, 0, NULL, NULL, CCP, RHO);
  // c5 = `is.object`(r15)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args29);
  // if c5 then L1() else L2(r15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L1()
    goto L1_;
  } else {
  // L2(r15)
    Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r15_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("$", r15)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_r17_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // r18 = `$`(r17, <sym os>)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args32);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r18_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_R_home2_;
  SEXP Rsh_Fir_reg_r26_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // R_home2 = ldf `R.home`
  Rsh_Fir_reg_R_home2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // r26 = dyn R_home2("share")
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_R_home2_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names11, CCP, RHO);
  // return r26
  return Rsh_Fir_reg_r26_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tzdirs4_;
  SEXP Rsh_Fir_reg_tzdirs5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // tzdirs4 = ld tzdirs
  Rsh_Fir_reg_tzdirs4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // tzdirs5 = force? tzdirs4
  Rsh_Fir_reg_tzdirs5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tzdirs4_);
  // checkMissing(tzdirs5)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_tzdirs5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // return tzdirs5
  return Rsh_Fir_reg_tzdirs5_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tzdir3_;
  SEXP Rsh_Fir_reg_tzdir4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // tzdir3 = ld tzdir
  Rsh_Fir_reg_tzdir3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // tzdir4 = force? tzdir3
  Rsh_Fir_reg_tzdir4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tzdir3_);
  // checkMissing(tzdir4)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_tzdir4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // return tzdir4
  return Rsh_Fir_reg_tzdir4_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sprintf;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r48_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // p8 = prom<V +>{
  //   sQuote = ldf sQuote;
  //   p7 = prom<V +>{
  //     tzdir5 = ld tzdir;
  //     tzdir6 = force? tzdir5;
  //     checkMissing(tzdir6);
  //     return tzdir6;
  //   };
  //   r46 = dyn sQuote(p7);
  //   return r46;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_8, 0, NULL, CCP, RHO);
  // r48 = dyn sprintf("%s is not a directory", p8)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names22, CCP, RHO);
  // return r48
  return Rsh_Fir_reg_r48_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sQuote;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r46_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // sQuote = ldf sQuote
  Rsh_Fir_reg_sQuote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // p7 = prom<V +>{
  //   tzdir5 = ld tzdir;
  //   tzdir6 = force? tzdir5;
  //   checkMissing(tzdir6);
  //   return tzdir6;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_9, 0, NULL, CCP, RHO);
  // r46 = dyn sQuote(p7)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sQuote, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names21, CCP, RHO);
  // return r46
  return Rsh_Fir_reg_r46_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tzdir5_;
  SEXP Rsh_Fir_reg_tzdir6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // tzdir5 = ld tzdir
  Rsh_Fir_reg_tzdir5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // tzdir6 = force? tzdir5
  Rsh_Fir_reg_tzdir6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tzdir5_);
  // checkMissing(tzdir6)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_tzdir6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // return tzdir6
  return Rsh_Fir_reg_tzdir6_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tzdir7_;
  SEXP Rsh_Fir_reg_tzdir8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // tzdir7 = ld tzdir
  Rsh_Fir_reg_tzdir7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // tzdir8 = force? tzdir7
  Rsh_Fir_reg_tzdir8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tzdir7_);
  // checkMissing(tzdir8)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_tzdir8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // return tzdir8
  return Rsh_Fir_reg_tzdir8_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file_path3_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r54_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // file_path3 = ldf `file.path`
  Rsh_Fir_reg_file_path3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // p11 = prom<V +>{
  //   tzdir9 = ld tzdir;
  //   tzdir10 = force? tzdir9;
  //   checkMissing(tzdir10);
  //   return tzdir10;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_12, 0, NULL, CCP, RHO);
  // r54 = dyn file_path3(p11, "VERSION")
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path3_, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names25, CCP, RHO);
  // st vf = r54
  Rsh_Fir_store(Rsh_const(CCP, 55), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // return r54
  return Rsh_Fir_reg_r54_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tzdir9_;
  SEXP Rsh_Fir_reg_tzdir10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // tzdir9 = ld tzdir
  Rsh_Fir_reg_tzdir9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // tzdir10 = force? tzdir9
  Rsh_Fir_reg_tzdir10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tzdir9_);
  // checkMissing(tzdir10)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_tzdir10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // return tzdir10
  return Rsh_Fir_reg_tzdir10_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_vf;
  SEXP Rsh_Fir_reg_vf1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // vf = ld vf
  Rsh_Fir_reg_vf = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // vf1 = force? vf
  Rsh_Fir_reg_vf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vf);
  // checkMissing(vf1)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_vf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // return vf1
  return Rsh_Fir_reg_vf1_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file_path4_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r61_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // file_path4 = ldf `file.path`
  Rsh_Fir_reg_file_path4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // p14 = prom<V +>{
  //   tzdir11 = ld tzdir;
  //   tzdir12 = force? tzdir11;
  //   checkMissing(tzdir12);
  //   return tzdir12;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_15, 0, NULL, CCP, RHO);
  // r61 = dyn file_path4(p14, "+VERSION")
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path4_, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names28, CCP, RHO);
  // st vf = r61
  Rsh_Fir_store(Rsh_const(CCP, 55), Rsh_Fir_reg_r61_, RHO);
  (void)(Rsh_Fir_reg_r61_);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // return r61
  return Rsh_Fir_reg_r61_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tzdir11_;
  SEXP Rsh_Fir_reg_tzdir12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // tzdir11 = ld tzdir
  Rsh_Fir_reg_tzdir11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // tzdir12 = force? tzdir11
  Rsh_Fir_reg_tzdir12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tzdir11_);
  // checkMissing(tzdir12)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_tzdir12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // return tzdir12
  return Rsh_Fir_reg_tzdir12_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_vf2_;
  SEXP Rsh_Fir_reg_vf3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // vf2 = ld vf
  Rsh_Fir_reg_vf2_ = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // vf3 = force? vf2
  Rsh_Fir_reg_vf3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vf2_);
  // checkMissing(vf3)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_vf3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // return vf3
  return Rsh_Fir_reg_vf3_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file_path5_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r67_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // file_path5 = ldf `file.path`
  Rsh_Fir_reg_file_path5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // p17 = prom<V +>{
  //   tzdir13 = ld tzdir;
  //   tzdir14 = force? tzdir13;
  //   checkMissing(tzdir14);
  //   return tzdir14;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4069375805_18, 0, NULL, CCP, RHO);
  // r67 = dyn file_path5(p17, "tzdata.zi")
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_p17_;
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path5_, 2, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names31, CCP, RHO);
  // st vf = r67
  Rsh_Fir_store(Rsh_const(CCP, 55), Rsh_Fir_reg_r67_, RHO);
  (void)(Rsh_Fir_reg_r67_);
  // setInvisible.0()
  (void)(Rsh_Fir_intrinsic_setInvisible_v0(CCP, RHO, 0, NULL));
  // return r67
  return Rsh_Fir_reg_r67_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tzdir13_;
  SEXP Rsh_Fir_reg_tzdir14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // tzdir13 = ld tzdir
  Rsh_Fir_reg_tzdir13_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // tzdir14 = force? tzdir13
  Rsh_Fir_reg_tzdir14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tzdir13_);
  // checkMissing(tzdir14)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_tzdir14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // return tzdir14
  return Rsh_Fir_reg_tzdir14_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_vf4_;
  SEXP Rsh_Fir_reg_vf5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // vf4 = ld vf
  Rsh_Fir_reg_vf4_ = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // vf5 = force? vf4
  Rsh_Fir_reg_vf5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vf4_);
  // checkMissing(vf5)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_vf5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // return vf5
  return Rsh_Fir_reg_vf5_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_patt;
  SEXP Rsh_Fir_reg_patt1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // patt = ld patt
  Rsh_Fir_reg_patt = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // patt1 = force? patt
  Rsh_Fir_reg_patt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_patt);
  // checkMissing(patt1)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_patt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // return patt1
  return Rsh_Fir_reg_patt1_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_l1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // l = ld l
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // l1 = force? l
  Rsh_Fir_reg_l1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l);
  // checkMissing(l1)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_l1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // return l1
  return Rsh_Fir_reg_l1_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_patt2_;
  SEXP Rsh_Fir_reg_patt3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // patt2 = ld patt
  Rsh_Fir_reg_patt2_ = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // patt3 = force? patt2
  Rsh_Fir_reg_patt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_patt2_);
  // checkMissing(patt3)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_patt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // return patt3
  return Rsh_Fir_reg_patt3_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_l3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // l2 = ld l
  Rsh_Fir_reg_l2_ = Rsh_Fir_load(Rsh_const(CCP, 62), RHO);
  // l3 = force? l2
  Rsh_Fir_reg_l3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l2_);
  // checkMissing(l3)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_l3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // return l3
  return Rsh_Fir_reg_l3_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_24(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_inner4069375805_25(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4069375805/0: expected 0, got %d", NCAPTURES);

  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // return x3
  return Rsh_Fir_reg_x3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
