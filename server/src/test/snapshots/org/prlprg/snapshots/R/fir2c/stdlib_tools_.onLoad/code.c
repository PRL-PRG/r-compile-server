#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4001578419_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4001578419_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner4001578419
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4001578419_, RHO, CCP);
  // st `.onLoad` = r
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
SEXP Rsh_Fir_user_function_inner4001578419_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4001578419 dynamic dispatch ([libname, pkgname])

  return Rsh_Fir_user_version_inner4001578419_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4001578419_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4001578419 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner4001578419/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_libname;  // libname
  SEXP Rsh_Fir_reg_pkgname;  // pkgname
  SEXP Rsh_Fir_reg__Platform;  // _Platform
  SEXP Rsh_Fir_reg__Platform1_;  // _Platform1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg__Platform3_;  // _Platform3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_l10n_info;  // l10n_info
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_cp;  // cp
  SEXP Rsh_Fir_reg_cp1_;  // cp1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_cp2_;  // cp2
  SEXP Rsh_Fir_reg_cp3_;  // cp3
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_cp4_;  // cp4
  SEXP Rsh_Fir_reg_cp5_;  // cp5
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_cp6_;  // cp6
  SEXP Rsh_Fir_reg_cp7_;  // cp7
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_Rd2txt_options;  // Rd2txt_options
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_iconv;  // iconv
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_Rd2txt_options1_;  // Rd2txt_options1
  SEXP Rsh_Fir_reg_r16_;  // r16

  // Bind parameters
  Rsh_Fir_reg_libname = PARAMS[0];
  Rsh_Fir_reg_pkgname = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st libname = libname
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_libname, RHO);
  (void)(Rsh_Fir_reg_libname);
  // st pkgname = pkgname
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_pkgname, RHO);
  (void)(Rsh_Fir_reg_pkgname);
  // _Platform = ld `.Platform`
  Rsh_Fir_reg__Platform = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L0_:;
  // sym = ldf `is.na`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf `is.na` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L1_:;
  // c30 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c30 then L29() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L29()
    goto L29_;
  } else {
  // L4()
    goto L4_;
  }

L2_:;
  // c27 = `as.logical`(c8)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c28 = `&&`(c7, c27)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // goto L1(c28)
  // L1(c28)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c28_;
  goto L1_;

L3_:;
  // c23 = `as.logical`(c17)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c24 = `||`(c16, c23)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // goto L2(c15, c24)
  // L2(c15, c24)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c24_;
  goto L2_;

L4_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 5);

L5_:;
  // r15 = `!`(r12)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // c31 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c31 then L39() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L39()
    goto L39_;
  } else {
  // L6()
    goto L6_;
  }

L6_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 5);

D0_:;
  // deopt 0 [_Platform]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg__Platform;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // _Platform1 = force? _Platform
  Rsh_Fir_reg__Platform1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Platform);
  // checkMissing(_Platform1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg__Platform1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // c = `is.object`(_Platform1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c then L9() else L10(_Platform1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L9()
    goto L9_;
  } else {
  // L10(_Platform1)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg__Platform1_;
    goto L10_;
  }

L8_:;
  // r1 = `==`(dx1, "windows")
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c1 then L12() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L12()
    goto L12_;
  } else {
  // L0()
    goto L0_;
  }

L9_:;
  // dr = tryDispatchBuiltin.1("$", _Platform1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args12);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if dc then L11() else L10(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L11()
    goto L11_;
  } else {
  // L10(dr)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg_dr;
    goto L10_;
  }

L10_:;
  // r = `$`(_Platform3, <sym OS.type>)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg__Platform3_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L8(r)
  // L8(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1;
  goto L8_;

L11_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L8(dx)
  // L8(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L8_;

L12_:;
  // l10n_info = ldf l10n_info
  Rsh_Fir_reg_l10n_info = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L13() else D1()
  // L13()
  goto L13_;

D1_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // r2 = dyn l10n_info()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_l10n_info, 0, NULL, NULL, CCP, RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

D2_:;
  // deopt 7 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L14_:;
  // c2 = `is.object`(r2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c2 then L16() else L17(r2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L16()
    goto L16_;
  } else {
  // L17(r2)
    Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r2_;
    goto L17_;
  }

L15_:;
  // st cp = dx3
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // cp = ld cp
  Rsh_Fir_reg_cp = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L19() else D3()
  // L19()
  goto L19_;

L16_:;
  // dr2 = tryDispatchBuiltin.1("$", r2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if dc1 then L18() else L17(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L18()
    goto L18_;
  } else {
  // L17(dr2)
    Rsh_Fir_reg_r4_ = Rsh_Fir_reg_dr2_;
    goto L17_;
  }

L17_:;
  // r5 = `$`(r4, <sym codepage>)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L15(r5)
  // L15(r5)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r5_;
  goto L15_;

L18_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L15(dx2)
  // L15(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L15_;

D3_:;
  // deopt 10 [cp]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_cp;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L19_:;
  // cp1 = force? cp
  Rsh_Fir_reg_cp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cp);
  // checkMissing(cp1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_cp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // r6 = `>`(cp1, 0.0)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_cp1_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c3 then L20() else L1(c3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L20()
    goto L20_;
  } else {
  // L1(c3)
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c3_;
    goto L1_;
  }

L20_:;
  // cp2 = ld cp
  Rsh_Fir_reg_cp2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L21() else D4()
  // L21()
  goto L21_;

D4_:;
  // deopt 14 [c3, cp2]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_cp2_;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L21_:;
  // cp3 = force? cp2
  Rsh_Fir_reg_cp3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cp2_);
  // checkMissing(cp3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_cp3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // r7 = `==`(cp3, 874)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_cp3_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c6 then L2(c3, c6) else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L2(c3, c6)
    Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c3_;
    Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c6_;
    goto L2_;
  } else {
  // L22()
    goto L22_;
  }

L22_:;
  // cp4 = ld cp
  Rsh_Fir_reg_cp4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L23() else D5()
  // L23()
  goto L23_;

D5_:;
  // deopt 18 [c3, c6, cp4]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_cp4_;
  Rsh_Fir_deopt(18, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L23_:;
  // cp5 = force? cp4
  Rsh_Fir_reg_cp5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cp4_);
  // checkMissing(cp5)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_cp5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // r8 = `>=`(cp5, 1250)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_cp5_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // c11 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c11 then L24() else L3(c3, c6, c11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L24()
    goto L24_;
  } else {
  // L3(c3, c6, c11)
    Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c3_;
    Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c6_;
    Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c11_;
    goto L3_;
  }

L24_:;
  // cp6 = ld cp
  Rsh_Fir_reg_cp6_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L25() else D6()
  // L25()
  goto L25_;

D6_:;
  // deopt 22 [c3, c6, c11, cp6]
  SEXP Rsh_Fir_array_deopt_stack5[4];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack5[3] = Rsh_Fir_reg_cp6_;
  Rsh_Fir_deopt(22, 4, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L25_:;
  // cp7 = force? cp6
  Rsh_Fir_reg_cp7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cp6_);
  // checkMissing(cp7)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_cp7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // r9 = `<=`(cp7, 1258)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_cp7_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // c18 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // c19 = `&&`(c11, c18)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L3(c3, c6, c19)
  // L3(c3, c6, c19)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c19_;
  goto L3_;

L29_:;
  // Rd2txt_options = ldf Rd2txt_options
  Rsh_Fir_reg_Rd2txt_options = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L30() else D7()
  // L30()
  goto L30_;

D7_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // r10 = dyn Rd2txt_options[itemBullet]("\u2022 ")
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Rd2txt_options, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L31() else D8()
  // L31()
  goto L31_;

D8_:;
  // deopt 33 [r10]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L31_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r10
  return Rsh_Fir_reg_r10_;

L34_:;
  // iconv = ldf iconv
  Rsh_Fir_reg_iconv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L36() else D9()
  // L36()
  goto L36_;

L35_:;
  // r11 = dyn base(<lang iconv("\u2022", "UTF-8", "")>)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L5(r11)
  // L5(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L5_;

D9_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // r13 = dyn iconv("\u2022", "UTF-8", "")
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args36[2] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_iconv, 3, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L37() else D10()
  // L37()
  goto L37_;

D10_:;
  // deopt 44 [r13]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L37_:;
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r14 = dyn is_na(r13)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L38() else D11()
  // L38()
  goto L38_;

D11_:;
  // deopt 46 [r14]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L5(r14)
  // L5(r14)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r14_;
  goto L5_;

L39_:;
  // Rd2txt_options1 = ldf Rd2txt_options
  Rsh_Fir_reg_Rd2txt_options1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L40() else D12()
  // L40()
  goto L40_;

D12_:;
  // deopt 49 []
  Rsh_Fir_deopt(49, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // r16 = dyn Rd2txt_options1[itemBullet]("\u2022 ")
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Rd2txt_options1_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L41() else D13()
  // L41()
  goto L41_;

D13_:;
  // deopt 52 [r16]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L41_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
