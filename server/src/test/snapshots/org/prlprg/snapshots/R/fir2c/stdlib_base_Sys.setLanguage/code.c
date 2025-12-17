#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3596386605_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3596386605_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3596386605_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3596386605_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3596386605_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3596386605_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3596386605_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3596386605_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3596386605_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3596386605_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3596386605_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3596386605_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  // r = clos inner3596386605
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3596386605_, RHO, CCP);
  // st `Sys.setLanguage` = r
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
SEXP Rsh_Fir_user_function_inner3596386605_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3596386605 dynamic dispatch ([lang, unset])

  return Rsh_Fir_user_version_inner3596386605_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3596386605_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3596386605 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3596386605/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_lang;
  SEXP Rsh_Fir_reg_unset;
  SEXP Rsh_Fir_reg_unset_isMissing;
  SEXP Rsh_Fir_reg_unset_orDefault;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_Sys_getenv;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_curLang;
  SEXP Rsh_Fir_reg_curLang1_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_curLang2_;
  SEXP Rsh_Fir_reg_curLang3_;
  SEXP Rsh_Fir_reg_nzchar;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_unset1_;
  SEXP Rsh_Fir_reg_unset2_;
  SEXP Rsh_Fir_reg_Sys_setenv;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_ok;
  SEXP Rsh_Fir_reg_ok1_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_capabilities;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_isTRUE;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_structure;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_invisible;
  SEXP Rsh_Fir_reg_r38_;

  // Bind parameters
  Rsh_Fir_reg_lang = PARAMS[0];
  Rsh_Fir_reg_unset = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st lang = lang
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_lang, RHO);
  (void)(Rsh_Fir_reg_lang);
  // unset_isMissing = missing.0(unset)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_unset;
  Rsh_Fir_reg_unset_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if unset_isMissing then L0("en") else L0(unset)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_unset_isMissing)) {
  // L0("en")
    Rsh_Fir_reg_unset_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(unset)
    Rsh_Fir_reg_unset_orDefault = Rsh_Fir_reg_unset;
    goto L0_;
  }

L0_:;
  // st unset = unset_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_unset_orDefault, RHO);
  (void)(Rsh_Fir_reg_unset_orDefault);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

L1_:;
  // c7 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args1);
  // if c7 then L2(c7) else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L2(c7)
    Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c7_;
    goto L2_;
  } else {
  // L18()
    goto L18_;
  }

L2_:;
  // c16 = `as.logical`(c8)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args2);
  // if c16 then L24() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L24()
    goto L24_;
  } else {
  // L4()
    goto L4_;
  }

L3_:;
  // r20 = `!`(r18)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args3);
  // c13 = `as.logical`(r20)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args4);
  // c14 = `||`(c12, c13)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args5);
  // goto L2(c14)
  // L2(c14)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c14_;
  goto L2_;

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // Sys_setenv = ldf `Sys.setenv`
  Rsh_Fir_reg_Sys_setenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L27() else D9()
  // L27()
  goto L27_;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // capabilities = ldf capabilities
  Rsh_Fir_reg_capabilities = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L34() else D14()
  // L34()
  goto L34_;

L8_:;
  // st `ok.` = c20
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_c20_, RHO);
  (void)(Rsh_Fir_reg_c20_);
  // sym4 = ldf invisible
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base4 = ldf invisible in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard4 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r34
  return Rsh_Fir_reg_r34_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p = prom<V +>{
  //   sym = ldf `is.character`;
  //   base = ldf `is.character` in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   lang1 = ld lang;
  //   lang2 = force? lang1;
  //   checkMissing(lang2);
  //   c = `is.character`(lang2);
  //   goto L0(c);
  // L2():
  //   r = dyn base(<sym lang>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3596386605_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   sym1 = ldf length;
  //   base1 = ldf length in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r4):
  //   r6 = `==`(r4, 1);
  //   return r6;
  // L1():
  //   lang3 = ld lang;
  //   lang4 = force? lang3;
  //   checkMissing(lang4);
  //   length = ldf length in base;
  //   r5 = dyn length(lang4);
  //   goto L0(r5);
  // L2():
  //   r3 = dyn base1(<sym lang>);
  //   goto L0(r3);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3596386605_1, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   lang5 = ld lang;
  //   lang6 = force? lang5;
  //   checkMissing(lang6);
  //   r8 = `==`(lang6, "C");
  //   c1 = `as.logical`(r8);
  //   if c1 then L0(c1) else L1();
  // L0(c2):
  //   return c2;
  // L1():
  //   grepl = ldf grepl;
  //   p2 = prom<V +>{
  //     lang7 = ld lang;
  //     lang8 = force? lang7;
  //     checkMissing(lang8);
  //     return lang8;
  //   };
  //   r10 = dyn grepl("^[a-z][a-z]", p2);
  //   c4 = `as.logical`(r10);
  //   c5 = `||`(c1, c4);
  //   goto L0(c5);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3596386605_2, 0, NULL, CCP, RHO);
  // r12 = dyn stopifnot(p, p1, p3)
  SEXP Rsh_Fir_array_args23[3];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args23[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 3, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L11() else D1()
  // L11()
  goto L11_;

D1_:;
  // deopt 5 [r12]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L11_:;
  // Sys_getenv = ldf `Sys.getenv`
  Rsh_Fir_reg_Sys_getenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // r13 = dyn Sys_getenv[, unset]("LANGUAGE", NA_LGL)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_getenv, 2, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

D3_:;
  // deopt 11 [r13]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L13_:;
  // st curLang = r13
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // sym2 = ldf `is.na`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base2 = ldf `is.na` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard2 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L14_:;
  // curLang = ld curLang
  Rsh_Fir_reg_curLang = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

L15_:;
  // r14 = dyn base2(<sym curLang>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L1(r14)
  // L1(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L1_;

D4_:;
  // deopt 15 [curLang]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_curLang;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L16_:;
  // curLang1 = force? curLang
  Rsh_Fir_reg_curLang1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_curLang);
  // checkMissing(curLang1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_curLang1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r16 = dyn is_na(curLang1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_curLang1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

D5_:;
  // deopt 18 [r16]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L17_:;
  // goto L1(r16)
  // L1(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L1_;

L18_:;
  // sym3 = ldf nzchar
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base3 = ldf nzchar in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard3 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L19_:;
  // curLang2 = ld curLang
  Rsh_Fir_reg_curLang2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L21() else D6()
  // L21()
  goto L21_;

L20_:;
  // r17 = dyn base3(<sym curLang>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L3(c7, r17)
  // L3(c7, r17)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L3_;

D6_:;
  // deopt 21 [c7, curLang2]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_curLang2_;
  Rsh_Fir_deopt(21, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L21_:;
  // curLang3 = force? curLang2
  Rsh_Fir_reg_curLang3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_curLang2_);
  // checkMissing(curLang3)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_curLang3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r19 = dyn nzchar(curLang3)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_curLang3_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L22() else D7()
  // L22()
  goto L22_;

D7_:;
  // deopt 24 [c7, r19]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L3(c7, r19)
  // L3(c7, r19)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L3_;

L24_:;
  // unset1 = ld unset
  Rsh_Fir_reg_unset1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L25() else D8()
  // L25()
  goto L25_;

D8_:;
  // deopt 27 [unset1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_unset1_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L25_:;
  // unset2 = force? unset1
  Rsh_Fir_reg_unset2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_unset1_);
  // checkMissing(unset2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_unset2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // st curLang = unset2
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_unset2_, RHO);
  (void)(Rsh_Fir_reg_unset2_);
  // goto L5()
  // L5()
  goto L5_;

D9_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // p4 = prom<V +>{
  //   lang9 = ld lang;
  //   lang10 = force? lang9;
  //   checkMissing(lang10);
  //   return lang10;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3596386605_4, 0, NULL, CCP, RHO);
  // r22 = dyn Sys_setenv[LANGUAGE](p4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_setenv, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L28() else D10()
  // L28()
  goto L28_;

D10_:;
  // deopt 36 [r22]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L28_:;
  // st ok = r22
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // ok = ld ok
  Rsh_Fir_reg_ok = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L29() else D11()
  // L29()
  goto L29_;

D11_:;
  // deopt 38 [ok]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_ok;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L29_:;
  // ok1 = force? ok
  Rsh_Fir_reg_ok1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok);
  // checkMissing(ok1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_ok1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // r23 = `!`(ok1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_ok1_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args37);
  // c17 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args38);
  // if c17 then L30() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L30()
    goto L30_;
  } else {
  // L6()
    goto L6_;
  }

L30_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L31() else D12()
  // L31()
  goto L31_;

D12_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // p6 = prom<V +>{
  //   gettextf = ldf gettextf;
  //   p5 = prom<V +>{
  //     lang11 = ld lang;
  //     lang12 = force? lang11;
  //     checkMissing(lang12);
  //     return lang12;
  //   };
  //   r25 = dyn gettextf("Sys.setenv(LANGUAGE=\"%s\") may have failed", p5);
  //   return r25;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3596386605_5, 0, NULL, CCP, RHO);
  // r27 = dyn warning[, domain](p6, NA_LGL)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L32() else D13()
  // L32()
  goto L32_;

D13_:;
  // deopt 46 [r27]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L32_:;
  // goto L7()
  // L7()
  goto L7_;

D14_:;
  // deopt 50 []
  Rsh_Fir_deopt(50, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // r29 = dyn capabilities("NLS")
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_capabilities, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L35() else D15()
  // L35()
  goto L35_;

D15_:;
  // deopt 52 [r29]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L35_:;
  // c18 = `as.logical`(r29)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args43);
  // if c18 then L36() else L8(c18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L36()
    goto L36_;
  } else {
  // L8(c18)
    Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c18_;
    goto L8_;
  }

L36_:;
  // isTRUE = ldf isTRUE
  Rsh_Fir_reg_isTRUE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L37() else D16()
  // L37()
  goto L37_;

D16_:;
  // deopt 54 [c18]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L37_:;
  // p7 = prom<V +>{
  //   bindtextdomain = ldf bindtextdomain;
  //   r30 = dyn bindtextdomain(NULL);
  //   return r30;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3596386605_7, 0, NULL, CCP, RHO);
  // r32 = dyn isTRUE(p7)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isTRUE, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L38() else D17()
  // L38()
  goto L38_;

D17_:;
  // deopt 56 [c18, r32]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L38_:;
  // c21 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args46);
  // c22 = `&&`(c18, c21)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args47);
  // goto L8(c22)
  // L8(c22)
  Rsh_Fir_reg_c20_ = Rsh_Fir_reg_c22_;
  goto L8_;

L40_:;
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L42() else D18()
  // L42()
  goto L42_;

L41_:;
  // r33 = dyn base4(<lang structure(curLang, ok=`&&`(ok, ok.))>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L9(r33)
  // L9(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L9_;

D18_:;
  // deopt 62 []
  Rsh_Fir_deopt(62, 0, NULL, CCP, RHO);
  return R_NilValue;

L42_:;
  // p8 = prom<V +>{
  //   curLang4 = ld curLang;
  //   curLang5 = force? curLang4;
  //   checkMissing(curLang5);
  //   return curLang5;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3596386605_8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   ok2 = ld ok;
  //   ok3 = force? ok2;
  //   checkMissing(ok3);
  //   c24 = `as.logical`(ok3);
  //   if c24 then L1() else L0(c24);
  // L0(c26):
  //   return c26;
  // L1():
  //   ok_ = ld `ok.`;
  //   ok_1 = force? ok_;
  //   checkMissing(ok_1);
  //   c27 = `as.logical`(ok_1);
  //   c28 = `&&`(c24, c27);
  //   goto L0(c28);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3596386605_9, 0, NULL, CCP, RHO);
  // r37 = dyn structure[, ok](p8, p9)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L43() else D19()
  // L43()
  goto L43_;

D19_:;
  // deopt 66 [r37]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L43_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r38 = dyn invisible(r37)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L44() else D20()
  // L44()
  goto L44_;

D20_:;
  // deopt 68 [r38]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L9(r38)
  // L9(r38)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r38_;
  goto L9_;
}
SEXP Rsh_Fir_user_promise_inner3596386605_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_lang1_;
  SEXP Rsh_Fir_reg_lang2_;
  SEXP Rsh_Fir_reg_c;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3596386605/0: expected 0, got %d", NCAPTURES);

  // sym = ldf `is.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf `is.character` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // lang1 = ld lang
  Rsh_Fir_reg_lang1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // lang2 = force? lang1
  Rsh_Fir_reg_lang2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lang1_);
  // checkMissing(lang2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_lang2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // c = `is.character`(lang2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_lang2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args9);
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_c;
  goto L0_;

L2_:;
  // r = dyn base(<sym lang>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3596386605_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_lang3_;
  SEXP Rsh_Fir_reg_lang4_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3596386605/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r6 = `==`(r4, 1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args12);
  // return r6
  return Rsh_Fir_reg_r6_;

L1_:;
  // lang3 = ld lang
  Rsh_Fir_reg_lang3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // lang4 = force? lang3
  Rsh_Fir_reg_lang4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lang3_);
  // checkMissing(lang4)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_lang4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r5 = dyn length(lang4)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_lang4_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L0_;

L2_:;
  // r3 = dyn base1(<sym lang>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3596386605_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lang5_;
  SEXP Rsh_Fir_reg_lang6_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_grepl;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_c5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3596386605/0: expected 0, got %d", NCAPTURES);

  // lang5 = ld lang
  Rsh_Fir_reg_lang5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // lang6 = force? lang5
  Rsh_Fir_reg_lang6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lang5_);
  // checkMissing(lang6)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_lang6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // r8 = `==`(lang6, "C")
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_lang6_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args17);
  // c1 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args18);
  // if c1 then L0(c1) else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L0(c1)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1_;
    goto L0_;
  } else {
  // L1()
    goto L1_;
  }

L0_:;
  // return c2
  return Rsh_Fir_reg_c2_;

L1_:;
  // grepl = ldf grepl
  Rsh_Fir_reg_grepl = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // p2 = prom<V +>{
  //   lang7 = ld lang;
  //   lang8 = force? lang7;
  //   checkMissing(lang8);
  //   return lang8;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3596386605_3, 0, NULL, CCP, RHO);
  // r10 = dyn grepl("^[a-z][a-z]", p2)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names3, CCP, RHO);
  // c4 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args21);
  // c5 = `||`(c1, c4)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args22);
  // goto L0(c5)
  // L0(c5)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c5_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3596386605_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lang7_;
  SEXP Rsh_Fir_reg_lang8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3596386605/0: expected 0, got %d", NCAPTURES);

  // lang7 = ld lang
  Rsh_Fir_reg_lang7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // lang8 = force? lang7
  Rsh_Fir_reg_lang8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lang7_);
  // checkMissing(lang8)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_lang8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return lang8
  return Rsh_Fir_reg_lang8_;
}
SEXP Rsh_Fir_user_promise_inner3596386605_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lang9_;
  SEXP Rsh_Fir_reg_lang10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3596386605/0: expected 0, got %d", NCAPTURES);

  // lang9 = ld lang
  Rsh_Fir_reg_lang9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // lang10 = force? lang9
  Rsh_Fir_reg_lang10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lang9_);
  // checkMissing(lang10)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_lang10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return lang10
  return Rsh_Fir_reg_lang10_;
}
SEXP Rsh_Fir_user_promise_inner3596386605_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r25_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3596386605/0: expected 0, got %d", NCAPTURES);

  // gettextf = ldf gettextf
  Rsh_Fir_reg_gettextf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // p5 = prom<V +>{
  //   lang11 = ld lang;
  //   lang12 = force? lang11;
  //   checkMissing(lang12);
  //   return lang12;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3596386605_6, 0, NULL, CCP, RHO);
  // r25 = dyn gettextf("Sys.setenv(LANGUAGE=\"%s\") may have failed", p5)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names11, CCP, RHO);
  // return r25
  return Rsh_Fir_reg_r25_;
}
SEXP Rsh_Fir_user_promise_inner3596386605_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_lang11_;
  SEXP Rsh_Fir_reg_lang12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3596386605/0: expected 0, got %d", NCAPTURES);

  // lang11 = ld lang
  Rsh_Fir_reg_lang11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // lang12 = force? lang11
  Rsh_Fir_reg_lang12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lang11_);
  // checkMissing(lang12)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_lang12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return lang12
  return Rsh_Fir_reg_lang12_;
}
SEXP Rsh_Fir_user_promise_inner3596386605_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_bindtextdomain;
  SEXP Rsh_Fir_reg_r30_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3596386605/0: expected 0, got %d", NCAPTURES);

  // bindtextdomain = ldf bindtextdomain
  Rsh_Fir_reg_bindtextdomain = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // r30 = dyn bindtextdomain(NULL)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_bindtextdomain, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names14, CCP, RHO);
  // return r30
  return Rsh_Fir_reg_r30_;
}
SEXP Rsh_Fir_user_promise_inner3596386605_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_curLang4_;
  SEXP Rsh_Fir_reg_curLang5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3596386605/0: expected 0, got %d", NCAPTURES);

  // curLang4 = ld curLang
  Rsh_Fir_reg_curLang4_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // curLang5 = force? curLang4
  Rsh_Fir_reg_curLang5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_curLang4_);
  // checkMissing(curLang5)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_curLang5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // return curLang5
  return Rsh_Fir_reg_curLang5_;
}
SEXP Rsh_Fir_user_promise_inner3596386605_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ok2_;
  SEXP Rsh_Fir_reg_ok3_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_ok_;
  SEXP Rsh_Fir_reg_ok_1_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_c28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3596386605/0: expected 0, got %d", NCAPTURES);

  // ok2 = ld ok
  Rsh_Fir_reg_ok2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // ok3 = force? ok2
  Rsh_Fir_reg_ok3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok2_);
  // checkMissing(ok3)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_ok3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // c24 = `as.logical`(ok3)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_ok3_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args51);
  // if c24 then L1() else L0(c24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L1()
    goto L1_;
  } else {
  // L0(c24)
    Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c24_;
    goto L0_;
  }

L0_:;
  // return c26
  return Rsh_Fir_reg_c26_;

L1_:;
  // ok_ = ld `ok.`
  Rsh_Fir_reg_ok_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // ok_1 = force? ok_
  Rsh_Fir_reg_ok_1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ok_);
  // checkMissing(ok_1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_ok_1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // c27 = `as.logical`(ok_1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_ok_1_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args53);
  // c28 = `&&`(c24, c27)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_c24_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args54);
  // goto L0(c28)
  // L0(c28)
  Rsh_Fir_reg_c26_ = Rsh_Fir_reg_c28_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
