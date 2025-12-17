#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner302841781_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner302841781_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner302841781_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner302841781_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner302841781_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner302841781_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner302841781_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner302841781
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner302841781_, RHO, CCP);
  // st packageEvent = r
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
SEXP Rsh_Fir_user_function_inner302841781_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner302841781 dynamic dispatch ([pkgname, event])

  return Rsh_Fir_user_version_inner302841781_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner302841781_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner302841781 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner302841781/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_pkgname;  // pkgname
  SEXP Rsh_Fir_reg_event;  // event
  SEXP Rsh_Fir_reg_event_isMissing;  // event_isMissing
  SEXP Rsh_Fir_reg_event_orDefault;  // event_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_match_arg;  // match_arg
  SEXP Rsh_Fir_reg_event1_;  // event1
  SEXP Rsh_Fir_reg_event2_;  // event2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_strsplit;  // strsplit
  SEXP Rsh_Fir_reg_pkgname1_;  // pkgname1
  SEXP Rsh_Fir_reg_pkgname2_;  // pkgname2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_pkgname3_;  // pkgname3
  SEXP Rsh_Fir_reg_pkgname4_;  // pkgname4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_event3_;  // event3
  SEXP Rsh_Fir_reg_event4_;  // event4
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r14_;  // r14

  // Bind parameters
  Rsh_Fir_reg_pkgname = PARAMS[0];
  Rsh_Fir_reg_event = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st pkgname = pkgname
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_pkgname, RHO);
  (void)(Rsh_Fir_reg_pkgname);
  // event_isMissing = missing.0(event)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_event;
  Rsh_Fir_reg_event_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if event_isMissing then L0() else L1(event)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_event_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(event)
    Rsh_Fir_reg_event_orDefault = Rsh_Fir_reg_event;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("onLoad", "attach", "detach", "onUnload");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("onLoad", "attach", "detach", "onUnload");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner302841781_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_event_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st event = event_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_event_orDefault, RHO);
  (void)(Rsh_Fir_reg_event_orDefault);
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L2_:;
  // c2 = `is.object`(dx1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c2 then L11() else L12(dx1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L11()
    goto L11_;
  } else {
  // L12(dx1)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    goto L12_;
  }

L3_:;
  // st pkgname = dx5
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L14() else D4()
  // L14()
  goto L14_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p1 = prom<V +>{
  //   event1 = ld event;
  //   event2 = force? event1;
  //   checkMissing(event2);
  //   return event2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner302841781_1, CCP, RHO);
  // r5 = dyn match_arg(p1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 3 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L5_:;
  // st event = r5
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // strsplit = ldf strsplit
  Rsh_Fir_reg_strsplit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p2 = prom<V +>{
  //   pkgname1 = ld pkgname;
  //   pkgname2 = force? pkgname1;
  //   checkMissing(pkgname2);
  //   return pkgname2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner302841781_2, CCP, RHO);
  // r7 = dyn strsplit[, , fixed](p2, "_", TRUE)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_strsplit, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

D3_:;
  // deopt 11 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // c1 = `is.object`(r7)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c1 then L8() else L9(r7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L8()
    goto L8_;
  } else {
  // L9(r7)
    Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r7_;
    goto L9_;
  }

L8_:;
  // dr = tryDispatchBuiltin.1("[[", r7)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args10);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if dc then L10() else L9(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L10()
    goto L10_;
  } else {
  // L9(dr)
    Rsh_Fir_reg_r9_ = Rsh_Fir_reg_dr;
    goto L9_;
  }

L9_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r10 = dyn __(r9, 1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r10)
  // L2(r10)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r10_;
  goto L2_;

L10_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // goto L2(dx)
  // L2(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L2_;

L11_:;
  // dr2 = tryDispatchBuiltin.1("[", dx1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args14);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if dc1 then L13() else L12(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L13()
    goto L13_;
  } else {
  // L12(dr2)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dr2_;
    goto L12_;
  }

L12_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r11 = dyn __1(dx3, 1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r11)
  // L3(r11)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r11_;
  goto L3_;

L13_:;
  // dx4 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L3(dx4)
  // L3(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L3_;

D4_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p3 = prom<V +>{
  //   pkgname3 = ld pkgname;
  //   pkgname4 = force? pkgname3;
  //   checkMissing(pkgname4);
  //   return pkgname4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner302841781_3, CCP, RHO);
  // p4 = prom<V +>{
  //   event3 = ld event;
  //   event4 = force? event3;
  //   checkMissing(event4);
  //   return event4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner302841781_4, CCP, RHO);
  // r14 = dyn paste[, , , sep]("UserHook", p3, p4, "::")
  SEXP Rsh_Fir_array_args20[4];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args20[2] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args20[3] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 4, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L15() else D5()
  // L15()
  goto L15_;

D5_:;
  // deopt 26 [r14]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L15_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_inner302841781_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
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
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r2 = dyn c("onLoad", "attach", "detach", "onUnload")
  SEXP Rsh_Fir_array_args2[4];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[4];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 4, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("onLoad", "attach", "detach", "onUnload")
  SEXP Rsh_Fir_array_args3[4];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args3[3] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 4, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner302841781_1(SEXP CCP, SEXP RHO) {
  // event1 = ld event
  Rsh_Fir_reg_event1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // event2 = force? event1
  Rsh_Fir_reg_event2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_event1_);
  // checkMissing(event2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_event2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return event2
  return Rsh_Fir_reg_event2_;
}
SEXP Rsh_Fir_user_promise_inner302841781_2(SEXP CCP, SEXP RHO) {
  // pkgname1 = ld pkgname
  Rsh_Fir_reg_pkgname1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // pkgname2 = force? pkgname1
  Rsh_Fir_reg_pkgname2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgname1_);
  // checkMissing(pkgname2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_pkgname2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return pkgname2
  return Rsh_Fir_reg_pkgname2_;
}
SEXP Rsh_Fir_user_promise_inner302841781_3(SEXP CCP, SEXP RHO) {
  // pkgname3 = ld pkgname
  Rsh_Fir_reg_pkgname3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // pkgname4 = force? pkgname3
  Rsh_Fir_reg_pkgname4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgname3_);
  // checkMissing(pkgname4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_pkgname4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return pkgname4
  return Rsh_Fir_reg_pkgname4_;
}
SEXP Rsh_Fir_user_promise_inner302841781_4(SEXP CCP, SEXP RHO) {
  // event3 = ld event
  Rsh_Fir_reg_event3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // event4 = force? event3
  Rsh_Fir_reg_event4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_event3_);
  // checkMissing(event4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_event4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return event4
  return Rsh_Fir_reg_event4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
