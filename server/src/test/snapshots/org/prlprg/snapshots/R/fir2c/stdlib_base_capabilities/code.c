#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4026201876_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4026201876_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4026201876_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4026201876_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4026201876_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4026201876_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4026201876_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4026201876_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_capabilities;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_capabilities1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_capabilities2_;
  SEXP Rsh_Fir_reg_r6_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4026201876
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4026201876_, RHO, CCP);
  // st capabilities = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // capabilities = ldf capabilities
  Rsh_Fir_reg_capabilities = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r1 = dyn capabilities()
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_capabilities, 0, NULL, NULL, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 5 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // capabilities1 = ldf capabilities
  Rsh_Fir_reg_capabilities1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D2()
  // L4()
  goto L4_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // r2 = dyn capabilities1("ICU")
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_capabilities1_, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L5() else D3()
  // L5()
  goto L5_;

D3_:;
  // deopt 9 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // r3 = `!`(r2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args1);
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args2);
  // if c then L6() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L6()
    goto L6_;
  } else {
  // L0()
    goto L0_;
  }

L0_:;
  // goto L1()
  // L1()
  goto L1_;

L1_:;
  // capabilities2 = ldf capabilities
  Rsh_Fir_reg_capabilities2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L10() else D6()
  // L10()
  goto L10_;

L6_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // r4 = dyn warning("ICU is not available")
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

L10_:;
  // r6 = dyn capabilities2[Xchk](FALSE)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_capabilities2_, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L11() else D7()
  // L11()
  goto L11_;

D5_:;
  // deopt 14 [r4]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 21 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L1()
  // L1()
  goto L1_;

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_function_inner4026201876_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4026201876 dynamic dispatch ([what, Xchk])

  return Rsh_Fir_user_version_inner4026201876_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4026201876_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4026201876 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner4026201876/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_what;
  SEXP Rsh_Fir_reg_Xchk;
  SEXP Rsh_Fir_reg_what_isMissing;
  SEXP Rsh_Fir_reg_what_orDefault;
  SEXP Rsh_Fir_reg_Xchk_isMissing;
  SEXP Rsh_Fir_reg_Xchk_orDefault;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_capabilities1;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_what1_;
  SEXP Rsh_Fir_reg_what2_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_z;
  SEXP Rsh_Fir_reg_z1_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_z3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_z6_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_what3_;
  SEXP Rsh_Fir_reg_what4_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_z9_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_z10_;
  SEXP Rsh_Fir_reg_z11_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_match;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg__Platform;
  SEXP Rsh_Fir_reg__Platform1_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg__Platform3_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_isFALSE;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_z12_;
  SEXP Rsh_Fir_reg_z13_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_z14_;
  SEXP Rsh_Fir_reg_z15_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_z17_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_z20_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_z21_;
  SEXP Rsh_Fir_reg_z22_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_names1_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_Xchk3_;
  SEXP Rsh_Fir_reg_Xchk4_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_tryCatch;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_nas2_;
  SEXP Rsh_Fir_reg_nas3_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_z23_;
  SEXP Rsh_Fir_reg_z24_;

  // Bind parameters
  Rsh_Fir_reg_what = PARAMS[0];
  Rsh_Fir_reg_Xchk = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // what_isMissing = missing.0(what)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_what;
  Rsh_Fir_reg_what_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if what_isMissing then L0(NULL) else L0(what)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_what_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_what_orDefault = Rsh_const(CCP, 6);
    goto L0_;
  } else {
  // L0(what)
    Rsh_Fir_reg_what_orDefault = Rsh_Fir_reg_what;
    goto L0_;
  }

L0_:;
  // st what = what_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_what_orDefault, RHO);
  (void)(Rsh_Fir_reg_what_orDefault);
  // Xchk_isMissing = missing.0(Xchk)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_Xchk;
  Rsh_Fir_reg_Xchk_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if Xchk_isMissing then L1() else L2(Xchk)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_Xchk_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(Xchk)
    Rsh_Fir_reg_Xchk_orDefault = Rsh_Fir_reg_Xchk;
    goto L2_;
  }

L1_:;
  // p2 = prom<V +>{
  //   sym = ldf any;
  //   base = ldf any in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   _in_ = ldf `%in%`;
  //   p = prom<V +>{
  //     nas = ld nas;
  //     nas1 = force? nas;
  //     checkMissing(nas1);
  //     return nas1;
  //   };
  //   p1 = prom<V +>{
  //     sym1 = ldf c;
  //     base1 = ldf c in base;
  //     guard1 = `==`.4(sym1, base1);
  //     if guard1 then L1() else L2();
  //   L0(r4):
  //     return r4;
  //   L1():
  //     c = ldf c in base;
  //     r5 = dyn c("X11", "jpeg", "png", "tiff");
  //     goto L0(r5);
  //   L2():
  //     r3 = dyn base1("X11", "jpeg", "png", "tiff");
  //     goto L0(r3);
  //   };
  //   r7 = dyn _in_(p, p1);
  //   any = ldf any in base;
  //   r8 = dyn any(r7);
  //   goto L0(r8);
  // L2():
  //   r = dyn base(<lang `%in%`(nas, c("X11", "jpeg", "png", "tiff"))>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4026201876_, 0, NULL, CCP, RHO);
  // goto L2(p2)
  // L2(p2)
  Rsh_Fir_reg_Xchk_orDefault = Rsh_Fir_reg_p2_;
  goto L2_;

L2_:;
  // st Xchk = Xchk_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_Xchk_orDefault, RHO);
  (void)(Rsh_Fir_reg_Xchk_orDefault);
  // sym2 = ldf `.Internal`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base2 = ldf `.Internal` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard2 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L3_:;
  // st z = r11
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard3 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L21_:;
  // capabilities = ldf capabilities in base
  Rsh_Fir_reg_capabilities1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r12 = dyn capabilities()
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_capabilities1, 0, NULL, NULL, CCP, RHO);
  // check L23() else D0()
  // L23()
  goto L23_;

L22_:;
  // r10 = dyn base2(<lang capabilities()>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L3_;

D0_:;
  // deopt 3 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L4_:;
  // r15 = `!`(r14)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args18);
  // c2 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args19);
  // if c2 then L27() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L27()
    goto L27_;
  } else {
  // L5()
    goto L5_;
  }

L23_:;
  // goto L3(r12)
  // L3(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L3_;

L24_:;
  // what1 = ld what
  Rsh_Fir_reg_what1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L26() else D1()
  // L26()
  goto L26_;

L25_:;
  // r13 = dyn base3(<sym what>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L4(r13)
  // L4(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L4_;

D1_:;
  // deopt 6 [what1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_what1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // _Platform = ld `.Platform`
  Rsh_Fir_reg__Platform = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L41() else D7()
  // L41()
  goto L41_;

L26_:;
  // what2 = force? what1
  Rsh_Fir_reg_what2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what1_);
  // checkMissing(what2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_what2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c1 = `==`(what2, NULL)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_what2_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args22);
  // goto L4(c1)
  // L4(c1)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_c1_;
  goto L4_;

L27_:;
  // z = ld z
  Rsh_Fir_reg_z = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L28() else D2()
  // L28()
  goto L28_;

D2_:;
  // deopt 10 [z]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_z;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 30 [_Platform]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg__Platform;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L28_:;
  // z1 = force? z
  Rsh_Fir_reg_z1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z);
  // checkMissing(z1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_z1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(z1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args24);
  // if c3 then L29() else L30(z1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L29()
    goto L29_;
  } else {
  // L30(z1)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_z1_;
    goto L30_;
  }

L41_:;
  // _Platform1 = force? _Platform
  Rsh_Fir_reg__Platform1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Platform);
  // checkMissing(_Platform1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg__Platform1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(_Platform1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args26);
  // if c4 then L43() else L44(_Platform1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L43()
    goto L43_;
  } else {
  // L44(_Platform1)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg__Platform1_;
    goto L44_;
  }

L6_:;
  // st z = dx1
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L9()
  // L9()
  goto L9_;

L29_:;
  // dr = tryDispatchBuiltin.1("[", z1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_z1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args27);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if dc then L31() else L30(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L31()
    goto L31_;
  } else {
  // L30(dr)
    Rsh_Fir_reg_z3_ = Rsh_Fir_reg_dr;
    goto L30_;
  }

L30_:;
  // sym4 = ldf match
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base4 = ldf match in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard4 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L42_:;
  // r24 = `==`(dx4, "windows")
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dx4_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args30);
  // c5 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args31);
  // if c5 then L10(c5) else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L10(c5)
    Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c5_;
    goto L10_;
  } else {
  // L46()
    goto L46_;
  }

L43_:;
  // dr2 = tryDispatchBuiltin.1("$", _Platform1)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args32);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if dc1 then L45() else L44(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L45()
    goto L45_;
  } else {
  // L44(dr2)
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg_dr2_;
    goto L44_;
  }

L44_:;
  // r23 = `$`(_Platform3, <sym OS.type>)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg__Platform3_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args34);
  // goto L42(r23)
  // L42(r23)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r23_;
  goto L42_;

L7_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r22 = dyn __(z6, r17)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_z6_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6(r22)
  // L6(r22)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r22_;
  goto L6_;

L10_:;
  // c23 = `as.logical`(c6)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args36);
  // if c23 then L54() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L54()
    goto L54_;
  } else {
  // L13()
    goto L13_;
  }

L31_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L6(dx)
  // L6(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L6_;

L32_:;
  // what3 = ld what
  Rsh_Fir_reg_what3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L34() else D3()
  // L34()
  goto L34_;

L33_:;
  // r16 = dyn base4(<sym what>, <lang names(z)>, 0)
  SEXP Rsh_Fir_array_args38[3];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 3, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L7(z3, r16)
  // L7(z3, r16)
  Rsh_Fir_reg_z6_ = Rsh_Fir_reg_z3_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L7_;

L45_:;
  // dx3 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L42(dx3)
  // L42(dx3)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L42_;

L46_:;
  // sym6 = ldf missing
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base6 = ldf missing in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard6 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

D3_:;
  // deopt 14 [z3, what3]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_z3_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_what3_;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L11_:;
  // r28 = `!`(r26)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args41);
  // c11 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args42);
  // if c11 then L49() else L12(c10, c11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L49()
    goto L49_;
  } else {
  // L12(c10, c11)
    Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c10_;
    Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c11_;
    goto L12_;
  }

L13_:;
  // sym7 = ldf names
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base7 = ldf names in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard7 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L34_:;
  // what4 = force? what3
  Rsh_Fir_reg_what4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what3_);
  // checkMissing(what4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_what4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // sym5 = ldf names
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base5 = ldf names in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard5 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L47_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r27 = dyn missing(<sym Xchk>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L11(c5, r27)
  // L11(c5, r27)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L11_;

L48_:;
  // r25 = dyn base6(<sym Xchk>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L11(c5, r25)
  // L11(c5, r25)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L11_;

L54_:;
  // z12 = ld z
  Rsh_Fir_reg_z12_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L55() else D10()
  // L55()
  goto L55_;

D10_:;
  // deopt 45 [z12]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_z12_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L8_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r21 = dyn match(what4, r19, 0, NULL)
  SEXP Rsh_Fir_array_args48[4];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_what4_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args48[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args48[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names14[4];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L39() else D6()
  // L39()
  goto L39_;

L12_:;
  // c20 = `as.logical`(c15)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args49);
  // c21 = `||`(c14, c20)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args50);
  // goto L10(c21)
  // L10(c21)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c21_;
  goto L10_;

L15_:;
  // st nas = r34
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // Xchk3 = ld Xchk
  Rsh_Fir_reg_Xchk3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L69() else D15()
  // L69()
  goto L69_;

L35_:;
  // z10 = ld z
  Rsh_Fir_reg_z10_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L37() else D4()
  // L37()
  goto L37_;

L36_:;
  // r18 = dyn base5(<sym z>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L8(z3, r18)
  // L8(z3, r18)
  Rsh_Fir_reg_z9_ = Rsh_Fir_reg_z3_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L8_;

L49_:;
  // isFALSE = ldf isFALSE
  Rsh_Fir_reg_isFALSE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L50() else D8()
  // L50()
  goto L50_;

L55_:;
  // z13 = force? z12
  Rsh_Fir_reg_z13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z12_);
  // checkMissing(z13)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_z13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return z13
  return Rsh_Fir_reg_z13_;

L58_:;
  // z14 = ld z
  Rsh_Fir_reg_z14_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L60() else D11()
  // L60()
  goto L60_;

L59_:;
  // r33 = dyn base7(<lang `[`(z, is.na(z))>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L15(r33)
  // L15(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L15_;

D4_:;
  // deopt 18 [z3, z10]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_z3_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_z10_;
  Rsh_Fir_deopt(18, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 25 [z9, r21]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_z9_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 40 [c10, c11]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_c11_;
  Rsh_Fir_deopt(40, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 52 [z14]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_z14_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 64 [Xchk3]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_Xchk3_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L37_:;
  // z11 = force? z10
  Rsh_Fir_reg_z11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z10_);
  // checkMissing(z11)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_z11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r20 = dyn names(z11)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_z11_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L38() else D5()
  // L38()
  goto L38_;

L39_:;
  // goto L7(z9, r21)
  // L7(z9, r21)
  Rsh_Fir_reg_z6_ = Rsh_Fir_reg_z9_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r21_;
  goto L7_;

L50_:;
  // p3 = prom<V +>{
  //   Xchk1 = ld Xchk;
  //   Xchk2 = force? Xchk1;
  //   checkMissing(Xchk2);
  //   return Xchk2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4026201876_3, 0, NULL, CCP, RHO);
  // r30 = dyn isFALSE(p3)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isFALSE, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L51() else D9()
  // L51()
  goto L51_;

L60_:;
  // z15 = force? z14
  Rsh_Fir_reg_z15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z14_);
  // checkMissing(z15)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_z15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // c24 = `is.object`(z15)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_z15_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args59);
  // if c24 then L61() else L62(z15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L61()
    goto L61_;
  } else {
  // L62(z15)
    Rsh_Fir_reg_z17_ = Rsh_Fir_reg_z15_;
    goto L62_;
  }

L69_:;
  // Xchk4 = force? Xchk3
  Rsh_Fir_reg_Xchk4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Xchk3_);
  // checkMissing(Xchk4)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_Xchk4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // c25 = `as.logical`(Xchk4)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_Xchk4_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args61);
  // if c25 then L70() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L70()
    goto L70_;
  } else {
  // L18()
    goto L18_;
  }

D5_:;
  // deopt 21 [z3, r20]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_z3_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(21, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 42 [c10, c11, r30]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(42, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L16_:;
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r39 = dyn names1(dx6)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L68() else D14()
  // L68()
  goto L68_;

L18_:;
  // goto L20()
  // L20()
  goto L20_;

L20_:;
  // z23 = ld z
  Rsh_Fir_reg_z23_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L78() else D19()
  // L78()
  goto L78_;

L38_:;
  // goto L8(z3, r20)
  // L8(z3, r20)
  Rsh_Fir_reg_z9_ = Rsh_Fir_reg_z3_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L8_;

L51_:;
  // c16 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args63);
  // c17 = `&&`(c11, c16)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args64);
  // goto L12(c10, c17)
  // L12(c10, c17)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c17_;
  goto L12_;

L61_:;
  // dr4 = tryDispatchBuiltin.1("[", z15)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_z15_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args65);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if dc2 then L63() else L62(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L63()
    goto L63_;
  } else {
  // L62(dr4)
    Rsh_Fir_reg_z17_ = Rsh_Fir_reg_dr4_;
    goto L62_;
  }

L62_:;
  // sym8 = ldf `is.na`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base8 = ldf `is.na` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args67);
  // if guard8 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

L70_:;
  // tryCatch = ldf tryCatch
  Rsh_Fir_reg_tryCatch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L71() else D16()
  // L71()
  goto L71_;

D14_:;
  // deopt 62 [r39]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 67 []
  Rsh_Fir_deopt(67, 0, NULL, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 79 [z23]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_z23_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L17_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r38 = dyn __1(z20, r36)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_z20_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L16(r38)
  // L16(r38)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r38_;
  goto L16_;

L63_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L16(dx5)
  // L16(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L16_;

L64_:;
  // z21 = ld z
  Rsh_Fir_reg_z21_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L66() else D12()
  // L66()
  goto L66_;

L65_:;
  // r35 = dyn base8(<sym z>)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L17(z17, r35)
  // L17(z17, r35)
  Rsh_Fir_reg_z20_ = Rsh_Fir_reg_z17_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L17_;

L68_:;
  // goto L15(r39)
  // L15(r39)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r39_;
  goto L15_;

L71_:;
  // p4 = prom<V +>{
  //   sym9 = ldf `.Internal`;
  //   base9 = ldf `.Internal` in base;
  //   guard9 = `==`.4(sym9, base9);
  //   if guard9 then L1() else L2();
  // L0(r41):
  //   return r41;
  // L1():
  //   capabilitiesX11 = ldf capabilitiesX11 in base;
  //   r42 = dyn capabilitiesX11();
  //   goto L0(r42);
  // L2():
  //   r40 = dyn base9(<lang capabilitiesX11()>);
  //   goto L0(r40);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4026201876_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   r44 = clos inner3708401697;
  //   return r44;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4026201876_5, 0, NULL, CCP, RHO);
  // r46 = dyn tryCatch[, error](p4, p5)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tryCatch, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L72() else D17()
  // L72()
  goto L72_;

L78_:;
  // z24 = force? z23
  Rsh_Fir_reg_z24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z23_);
  // checkMissing(z24)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_z24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return z24
  return Rsh_Fir_reg_z24_;

D12_:;
  // deopt 56 [z17, z21]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_z17_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_z21_;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 71 [r46]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L66_:;
  // z22 = force? z21
  Rsh_Fir_reg_z22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z21_);
  // checkMissing(z22)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_z22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r37 = dyn is_na(z22)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_z22_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L67() else D13()
  // L67()
  goto L67_;

L72_:;
  // l = ld z
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // c26 = `is.object`(l)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args77);
  // if c26 then L73() else L74(r46, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L73()
    goto L73_;
  } else {
  // L74(r46, l)
    Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r46_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L74_;
  }

D13_:;
  // deopt 59 [z17, r37]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_z17_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(59, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L19_:;
  // st z = dx8
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_dx8_, RHO);
  (void)(Rsh_Fir_reg_dx8_);
  // goto L20()
  // L20()
  goto L20_;

L67_:;
  // goto L17(z17, r37)
  // L17(z17, r37)
  Rsh_Fir_reg_z20_ = Rsh_Fir_reg_z17_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L17_;

L73_:;
  // dr6 = tryDispatchBuiltin.0("[<-", l, r46)
  SEXP Rsh_Fir_array_args78[3];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args78[2] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args78);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if dc3 then L75() else L74(r46, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L75()
    goto L75_;
  } else {
  // L74(r46, dr6)
    Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r46_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr6_;
    goto L74_;
  }

L74_:;
  // nas2 = ld nas
  Rsh_Fir_reg_nas2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L76() else D18()
  // L76()
  goto L76_;

D18_:;
  // deopt 73 [r48, l2, r46, nas2]
  SEXP Rsh_Fir_array_deopt_stack22[4];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack22[2] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_deopt_stack22[3] = Rsh_Fir_reg_nas2_;
  Rsh_Fir_deopt(73, 4, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L75_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L19(r46, dx7)
  // L19(r46, dx7)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L19_;

L76_:;
  // nas3 = force? nas2
  Rsh_Fir_reg_nas3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nas2_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r51 = dyn ___(l2, r46, nas3)
  SEXP Rsh_Fir_array_args81[3];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_r46_;
  Rsh_Fir_array_args81[2] = Rsh_Fir_reg_nas3_;
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L19(r48, r51)
  // L19(r48, r51)
  Rsh_Fir_reg_r50_ = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r51_;
  goto L19_;
}
SEXP Rsh_Fir_user_promise_inner4026201876_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg__in_;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4026201876/0: expected 0, got %d", NCAPTURES);

  // sym = ldf any
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf any in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
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
  return Rsh_Fir_reg_r1_1;

L1_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // p = prom<V +>{
  //   nas = ld nas;
  //   nas1 = force? nas;
  //   checkMissing(nas1);
  //   return nas1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4026201876_1, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r4):
  //   return r4;
  // L1():
  //   c = ldf c in base;
  //   r5 = dyn c("X11", "jpeg", "png", "tiff");
  //   goto L0(r5);
  // L2():
  //   r3 = dyn base1("X11", "jpeg", "png", "tiff");
  //   goto L0(r3);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4026201876_2, 0, NULL, CCP, RHO);
  // r7 = dyn _in_(p, p1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names5, CCP, RHO);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r8 = dyn any(r7)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r8_;
  goto L0_;

L2_:;
  // r = dyn base(<lang `%in%`(nas, c("X11", "jpeg", "png", "tiff"))>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4026201876_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nas;
  SEXP Rsh_Fir_reg_nas1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4026201876/0: expected 0, got %d", NCAPTURES);

  // nas = ld nas
  Rsh_Fir_reg_nas = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // nas1 = force? nas
  Rsh_Fir_reg_nas1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nas);
  // checkMissing(nas1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_nas1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return nas1
  return Rsh_Fir_reg_nas1_;
}
SEXP Rsh_Fir_user_promise_inner4026201876_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_r5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4026201876/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r4
  return Rsh_Fir_reg_r4_1;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r5 = dyn c("X11", "jpeg", "png", "tiff")
  SEXP Rsh_Fir_array_args10[4];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args10[3] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1, 4, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r5_;
  goto L0_;

L2_:;
  // r3 = dyn base1("X11", "jpeg", "png", "tiff")
  SEXP Rsh_Fir_array_args11[4];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args11[3] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names4[4];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 4, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4026201876_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Xchk1_;
  SEXP Rsh_Fir_reg_Xchk2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4026201876/0: expected 0, got %d", NCAPTURES);

  // Xchk1 = ld Xchk
  Rsh_Fir_reg_Xchk1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // Xchk2 = force? Xchk1
  Rsh_Fir_reg_Xchk2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Xchk1_);
  // checkMissing(Xchk2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_Xchk2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return Xchk2
  return Rsh_Fir_reg_Xchk2_;
}
SEXP Rsh_Fir_user_promise_inner4026201876_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_capabilitiesX11_;
  SEXP Rsh_Fir_reg_r42_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4026201876/0: expected 0, got %d", NCAPTURES);

  // sym9 = ldf `.Internal`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base9 = ldf `.Internal` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args71);
  // if guard9 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r41
  return Rsh_Fir_reg_r41_;

L1_:;
  // capabilitiesX11 = ldf capabilitiesX11 in base
  Rsh_Fir_reg_capabilitiesX11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r42 = dyn capabilitiesX11()
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_capabilitiesX11_, 0, NULL, NULL, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L0_;

L2_:;
  // r40 = dyn base9(<lang capabilitiesX11()>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r40)
  // L0(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4026201876_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r44_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4026201876/0: expected 0, got %d", NCAPTURES);

  // r44 = clos inner3708401697
  Rsh_Fir_reg_r44_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3708401697_, RHO, CCP);
  // return r44
  return Rsh_Fir_reg_r44_;
}
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3708401697 dynamic dispatch ([e])

  return Rsh_Fir_user_version_inner3708401697_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3708401697 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3708401697/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_e;

  // Bind parameters
  Rsh_Fir_reg_e = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st e = e
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_e, RHO);
  (void)(Rsh_Fir_reg_e);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return FALSE
  return Rsh_const(CCP, 4);
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
