#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner2708337952
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // st `.get_CRAN_repository_URL` = r
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
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2708337952 dynamic dispatch ([])

  return Rsh_Fir_user_version_inner2708337952_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2708337952 version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for inner2708337952/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_getOption;  // getOption
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_repos;  // repos
  SEXP Rsh_Fir_reg_repos1_;  // repos1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_repos2_;  // repos2
  SEXP Rsh_Fir_reg_repos3_;  // repos3
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_repos5_;  // repos5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_cr;  // cr
  SEXP Rsh_Fir_reg_cr1_;  // cr1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_cr2_;  // cr2
  SEXP Rsh_Fir_reg_cr3_;  // cr3
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_cr4_;  // cr4
  SEXP Rsh_Fir_reg_cr5_;  // cr5
  SEXP Rsh_Fir_reg_is_na1_;  // is_na1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_cr6_;  // cr6
  SEXP Rsh_Fir_reg_cr7_;  // cr7
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_cr8_;  // cr8
  SEXP Rsh_Fir_reg_cr9_;  // cr9

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L12() else D0()
  // L12()
  goto L12_;

L0_:;
  // r3 = `!`(r2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c1 then L17() else L1(c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L17()
    goto L17_;
  } else {
  // L1(c1)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c1_;
    goto L1_;
  }

L1_:;
  // c15 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c15 then L26() else L4(c15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L26()
    goto L26_;
  } else {
  // L4(c15)
    Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c15_;
    goto L4_;
  }

L2_:;
  // r8 = `!`(r5)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c12 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c13 = `&&`(c6, c12)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // goto L1(c13)
  // L1(c13)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c13_;
  goto L1_;

L3_:;
  // st cr = dx1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r7 = dyn is_na(dx1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L24() else D4()
  // L24()
  goto L24_;

L4_:;
  // c21 = `as.logical`(c17)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c21 then L29() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L29()
    goto L29_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // ___ = ldf `:::`
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L33() else D7()
  // L33()
  goto L33_;

L7_:;
  // st cr = dx3
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // sym2 = ldf `is.na`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base2 = ldf `is.na` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard2 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L8_:;
  // c23 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c23 then L9(c23) else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L9(c23)
    Rsh_Fir_reg_c24_ = Rsh_Fir_reg_c23_;
    goto L9_;
  } else {
  // L43()
    goto L43_;
  }

L9_:;
  // c29 = `as.logical`(c24)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c29 then L46() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L46()
    goto L46_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // cr8 = ld cr
  Rsh_Fir_reg_cr8_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L48() else D13()
  // L48()
  goto L48_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // r = dyn getOption("repos")
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L13() else D1()
  // L13()
  goto L13_;

D1_:;
  // deopt 3 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L13_:;
  // st repos = r
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L14_:;
  // repos = ld repos
  Rsh_Fir_reg_repos = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

L15_:;
  // r1 = dyn base(<sym repos>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D2_:;
  // deopt 6 [repos]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_repos;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L16_:;
  // repos1 = force? repos
  Rsh_Fir_reg_repos1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_repos);
  // checkMissing(repos1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_repos1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // c = `==`(repos1, NULL)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_repos1_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_c;
  goto L0_;

L17_:;
  // sym1 = ldf `is.na`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base1 = ldf `is.na` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard1 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L18_:;
  // repos2 = ld repos
  Rsh_Fir_reg_repos2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L20() else D3()
  // L20()
  goto L20_;

L19_:;
  // r4 = dyn base1(<lang `<-`(cr, `[`(repos, "CRAN"))>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(c1, r4)
  // L2(c1, r4)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L2_;

D3_:;
  // deopt 12 [c1, repos2]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_repos2_;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L20_:;
  // repos3 = force? repos2
  Rsh_Fir_reg_repos3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_repos2_);
  // checkMissing(repos3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_repos3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(repos3)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_repos3_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if c7 then L21() else L22(c1, repos3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L21()
    goto L21_;
  } else {
  // L22(c1, repos3)
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c1_;
    Rsh_Fir_reg_repos5_ = Rsh_Fir_reg_repos3_;
    goto L22_;
  }

L21_:;
  // dr = tryDispatchBuiltin.1("[", repos3)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_repos3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args20);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if dc then L23() else L22(c1, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L23()
    goto L23_;
  } else {
  // L22(c1, dr)
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c1_;
    Rsh_Fir_reg_repos5_ = Rsh_Fir_reg_dr;
    goto L22_;
  }

L22_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r6 = dyn __(repos5, "CRAN")
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_repos5_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(c9, r6)
  // L3(c9, r6)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r6_;
  goto L3_;

L23_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L3(c1, dx)
  // L3(c1, dx)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

D4_:;
  // deopt 19 [c11, r7]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L2(c11, r7)
  // L2(c11, r7)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r7_;
  goto L2_;

L26_:;
  // cr = ld cr
  Rsh_Fir_reg_cr = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L27() else D5()
  // L27()
  goto L27_;

D5_:;
  // deopt 22 [c15, cr]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_cr;
  Rsh_Fir_deopt(22, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L27_:;
  // cr1 = force? cr
  Rsh_Fir_reg_cr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cr);
  // checkMissing(cr1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_cr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // r9 = `!=`(cr1, "@CRAN@")
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_cr1_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // c18 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // c19 = `&&`(c15, c18)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L4(c19)
  // L4(c19)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c19_;
  goto L4_;

L29_:;
  // cr2 = ld cr
  Rsh_Fir_reg_cr2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L30() else D6()
  // L30()
  goto L30_;

D6_:;
  // deopt 27 [cr2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_cr2_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L30_:;
  // cr3 = force? cr2
  Rsh_Fir_reg_cr3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cr2_);
  // checkMissing(cr3)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_cr3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return cr3
  return Rsh_Fir_reg_cr3_;

D7_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // r12 = dyn ___("utils", ".get_repositories")
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L34() else D8()
  // L34()
  goto L34_;

D8_:;
  // deopt 36 [r12]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L34_:;
  // checkFun.0(r12)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r12_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args30));
  // r13 = r12 as cls
  Rsh_Fir_reg_r13_ = Rsh_Fir_cast(Rsh_Fir_reg_r12_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r14 = dyn r13()
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r13_, 0, NULL, NULL, CCP, RHO);
  // check L35() else D9()
  // L35()
  goto L35_;

D9_:;
  // deopt 38 [r14]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L35_:;
  // c22 = `is.object`(r14)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c22 then L36() else L37(r14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L36()
    goto L36_;
  } else {
  // L37(r14)
    Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r14_;
    goto L37_;
  }

L36_:;
  // dr2 = tryDispatchBuiltin.1("[", r14)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args32);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if dc1 then L38() else L37(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L38()
    goto L38_;
  } else {
  // L37(dr2)
    Rsh_Fir_reg_r16_ = Rsh_Fir_reg_dr2_;
    goto L37_;
  }

L37_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r17 = dyn __1(r16, "CRAN", "URL")
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 3, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L7(r17)
  // L7(r17)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r17_;
  goto L7_;

L38_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L7(dx2)
  // L7(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L7_;

L39_:;
  // cr4 = ld cr
  Rsh_Fir_reg_cr4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L41() else D10()
  // L41()
  goto L41_;

L40_:;
  // r18 = dyn base2(<sym cr>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L8(r18)
  // L8(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L8_;

D10_:;
  // deopt 46 [cr4]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_cr4_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L41_:;
  // cr5 = force? cr4
  Rsh_Fir_reg_cr5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cr4_);
  // checkMissing(cr5)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_cr5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r20 = dyn is_na1(cr5)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_cr5_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L42() else D11()
  // L42()
  goto L42_;

D11_:;
  // deopt 49 [r20]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L8(r20)
  // L8(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L8_;

L43_:;
  // cr6 = ld cr
  Rsh_Fir_reg_cr6_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L44() else D12()
  // L44()
  goto L44_;

D12_:;
  // deopt 50 [c23, cr6]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_cr6_;
  Rsh_Fir_deopt(50, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L44_:;
  // cr7 = force? cr6
  Rsh_Fir_reg_cr7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cr6_);
  // checkMissing(cr7)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_cr7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // r21 = `==`(cr7, "@CRAN@")
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_cr7_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // c26 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // c27 = `||`(c23, c26)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L9(c27)
  // L9(c27)
  Rsh_Fir_reg_c24_ = Rsh_Fir_reg_c27_;
  goto L9_;

L46_:;
  // st cr = "https://CRAN.R-project.org"
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_const(CCP, 17), RHO);
  (void)(Rsh_const(CCP, 17));
  // goto L11()
  // L11()
  goto L11_;

D13_:;
  // deopt 60 [cr8]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_cr8_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L48_:;
  // cr9 = force? cr8
  Rsh_Fir_reg_cr9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cr8_);
  // checkMissing(cr9)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_cr9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return cr9
  return Rsh_Fir_reg_cr9_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
