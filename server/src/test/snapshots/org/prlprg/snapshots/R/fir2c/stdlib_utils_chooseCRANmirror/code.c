#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner309648556_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner309648556_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner309648556_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner309648556_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner309648556_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner309648556_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner309648556_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner309648556_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner309648556
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner309648556_, RHO, CCP);
  // st chooseCRANmirror = r
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
SEXP Rsh_Fir_user_function_inner309648556_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner309648556 dynamic dispatch ([graphics, ind, `local.only`])

  return Rsh_Fir_user_version_inner309648556_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner309648556_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner309648556 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner309648556/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_graphics;  // graphics
  SEXP Rsh_Fir_reg_ind;  // ind
  SEXP Rsh_Fir_reg_local_only;  // local_only
  SEXP Rsh_Fir_reg_graphics_isMissing;  // graphics_isMissing
  SEXP Rsh_Fir_reg_graphics_orDefault;  // graphics_orDefault
  SEXP Rsh_Fir_reg_getOption;  // getOption
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_ind_isMissing;  // ind_isMissing
  SEXP Rsh_Fir_reg_ind_orDefault;  // ind_orDefault
  SEXP Rsh_Fir_reg_local_only_isMissing;  // local_only_isMissing
  SEXP Rsh_Fir_reg_local_only_orDefault;  // local_only_orDefault
  SEXP Rsh_Fir_reg_getCRANmirrors;  // getCRANmirrors
  SEXP Rsh_Fir_reg_local_only1_;  // local_only1
  SEXP Rsh_Fir_reg_local_only2_;  // local_only2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg__chooseMirror;  // _chooseMirror
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_graphics1_;  // graphics1
  SEXP Rsh_Fir_reg_graphics2_;  // graphics2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_ind1_;  // ind1
  SEXP Rsh_Fir_reg_ind2_;  // ind2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_url;  // url
  SEXP Rsh_Fir_reg_url1_;  // url1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_getOption1_;  // getOption1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_url2_;  // url2
  SEXP Rsh_Fir_reg_url3_;  // url3
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_url5_;  // url5
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_options;  // options
  SEXP Rsh_Fir_reg_repos;  // repos
  SEXP Rsh_Fir_reg_repos1_;  // repos1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r18_;  // r18

  // Bind parameters
  Rsh_Fir_reg_graphics = PARAMS[0];
  Rsh_Fir_reg_ind = PARAMS[1];
  Rsh_Fir_reg_local_only = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // graphics_isMissing = missing.0(graphics)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_graphics;
  Rsh_Fir_reg_graphics_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if graphics_isMissing then L0() else L1(graphics)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_graphics_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(graphics)
    Rsh_Fir_reg_graphics_orDefault = Rsh_Fir_reg_graphics;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   getOption = ldf getOption;
  //   r = dyn getOption("menu.graphics");
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner309648556_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_graphics_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st graphics = graphics_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_graphics_orDefault, RHO);
  (void)(Rsh_Fir_reg_graphics_orDefault);
  // ind_isMissing = missing.0(ind)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_ind;
  Rsh_Fir_reg_ind_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if ind_isMissing then L2(NULL) else L2(ind)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ind_isMissing)) {
  // L2(NULL)
    Rsh_Fir_reg_ind_orDefault = Rsh_const(CCP, 4);
    goto L2_;
  } else {
  // L2(ind)
    Rsh_Fir_reg_ind_orDefault = Rsh_Fir_reg_ind;
    goto L2_;
  }

L2_:;
  // st ind = ind_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ind_orDefault, RHO);
  (void)(Rsh_Fir_reg_ind_orDefault);
  // local_only_isMissing = missing.0(local_only)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_local_only;
  Rsh_Fir_reg_local_only_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if local_only_isMissing then L3(FALSE) else L3(local_only)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_local_only_isMissing)) {
  // L3(FALSE)
    Rsh_Fir_reg_local_only_orDefault = Rsh_const(CCP, 6);
    goto L3_;
  } else {
  // L3(local_only)
    Rsh_Fir_reg_local_only_orDefault = Rsh_Fir_reg_local_only;
    goto L3_;
  }

L3_:;
  // st `local.only` = local_only_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_local_only_orDefault, RHO);
  (void)(Rsh_Fir_reg_local_only_orDefault);
  // getCRANmirrors = ldf getCRANmirrors
  Rsh_Fir_reg_getCRANmirrors = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L4_:;
  // c = `as.logical`(r9)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L17() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L17()
    goto L17_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L7()
  // L7()
  goto L7_;

L6_:;
  // st repos = dx1
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // options = ldf options
  Rsh_Fir_reg_options = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L24() else D9()
  // L24()
  goto L24_;

L7_:;
  // sym1 = ldf invisible
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf invisible in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r17
  return Rsh_Fir_reg_r17_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p1 = prom<V +>{
  //   local_only1 = ld `local.only`;
  //   local_only2 = force? local_only1;
  //   checkMissing(local_only2);
  //   return local_only2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner309648556_1, CCP, RHO);
  // r3 = dyn getCRANmirrors[all, `local.only`](FALSE, p1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getCRANmirrors, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // st m = r3
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // _chooseMirror = ldf `.chooseMirror`
  Rsh_Fir_reg__chooseMirror = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p2 = prom<V +>{
  //   m = ld m;
  //   m1 = force? m;
  //   checkMissing(m1);
  //   return m1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner309648556_2, CCP, RHO);
  // p3 = prom<V +>{
  //   graphics1 = ld graphics;
  //   graphics2 = force? graphics1;
  //   checkMissing(graphics2);
  //   return graphics2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner309648556_3, CCP, RHO);
  // p4 = prom<V +>{
  //   ind1 = ld ind;
  //   ind2 = force? ind1;
  //   checkMissing(ind2);
  //   return ind2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner309648556_4, CCP, RHO);
  // r7 = dyn _chooseMirror(p2, "CRAN", p3, p4)
  SEXP Rsh_Fir_array_args11[4];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args11[2] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args11[3] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__chooseMirror, 4, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

D3_:;
  // deopt 14 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L12_:;
  // st url = r7
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L13_:;
  // url = ld url
  Rsh_Fir_reg_url = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

L14_:;
  // r8 = dyn base(<sym url>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L4(r8)
  // L4(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L4_;

D4_:;
  // deopt 18 [url]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_url;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L15_:;
  // url1 = force? url
  Rsh_Fir_reg_url1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_url);
  // checkMissing(url1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_url1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r10 = dyn length(url1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_url1_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

D5_:;
  // deopt 21 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L4(r10)
  // L4(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L4_;

L17_:;
  // getOption1 = ldf getOption
  Rsh_Fir_reg_getOption1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L18() else D6()
  // L18()
  goto L18_;

D6_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // r11 = dyn getOption1("repos")
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption1_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L19() else D7()
  // L19()
  goto L19_;

D7_:;
  // deopt 25 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L19_:;
  // st repos = r11
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // url2 = ld url
  Rsh_Fir_reg_url2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L20() else D8()
  // L20()
  goto L20_;

D8_:;
  // deopt 27 [url2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_url2_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L20_:;
  // url3 = force? url2
  Rsh_Fir_reg_url3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_url2_);
  // checkMissing(url3)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_url3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // l = ld repos
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // c1 = `is.object`(l)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c1 then L21() else L22(url3, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L21()
    goto L21_;
  } else {
  // L22(url3, l)
    Rsh_Fir_reg_url5_ = Rsh_Fir_reg_url3_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L22_;
  }

L21_:;
  // dr = tryDispatchBuiltin.0("[<-", l, url3)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args19[2] = Rsh_Fir_reg_url3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args19);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc then L23() else L22(url3, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L23()
    goto L23_;
  } else {
  // L22(url3, dr)
    Rsh_Fir_reg_url5_ = Rsh_Fir_reg_url3_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L22_;
  }

L22_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r12 = dyn ___(l2, url3, "CRAN")
  SEXP Rsh_Fir_array_args21[3];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_url3_;
  Rsh_Fir_array_args21[2] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L6(r12)
  // L6(r12)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r12_;
  goto L6_;

L23_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L6(dx)
  // L6(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L6_;

D9_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p5 = prom<V +>{
  //   repos = ld repos;
  //   repos1 = force? repos;
  //   checkMissing(repos1);
  //   return repos1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner309648556_5, CCP, RHO);
  // r14 = dyn options[repos](p5)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L25() else D10()
  // L25()
  goto L25_;

D10_:;
  // deopt 38 [r14]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L7()
  // L7()
  goto L7_;

L27_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r18 = dyn invisible()
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 0, NULL, NULL, CCP, RHO);
  // check L29() else D11()
  // L29()
  goto L29_;

L28_:;
  // r16 = dyn base1()
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 0, NULL, NULL, CCP, RHO);
  // goto L8(r16)
  // L8(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L8_;

D11_:;
  // deopt 44 [r18]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L8(r18)
  // L8(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L8_;
}
SEXP Rsh_Fir_user_promise_inner309648556_(SEXP CCP, SEXP RHO) {
  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // r = dyn getOption("menu.graphics")
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner309648556_1(SEXP CCP, SEXP RHO) {
  // local_only1 = ld `local.only`
  Rsh_Fir_reg_local_only1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // local_only2 = force? local_only1
  Rsh_Fir_reg_local_only2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_local_only1_);
  // checkMissing(local_only2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_local_only2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return local_only2
  return Rsh_Fir_reg_local_only2_;
}
SEXP Rsh_Fir_user_promise_inner309648556_2(SEXP CCP, SEXP RHO) {
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return m1
  return Rsh_Fir_reg_m1_;
}
SEXP Rsh_Fir_user_promise_inner309648556_3(SEXP CCP, SEXP RHO) {
  // graphics1 = ld graphics
  Rsh_Fir_reg_graphics1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // graphics2 = force? graphics1
  Rsh_Fir_reg_graphics2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_graphics1_);
  // checkMissing(graphics2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_graphics2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return graphics2
  return Rsh_Fir_reg_graphics2_;
}
SEXP Rsh_Fir_user_promise_inner309648556_4(SEXP CCP, SEXP RHO) {
  // ind1 = ld ind
  Rsh_Fir_reg_ind1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // ind2 = force? ind1
  Rsh_Fir_reg_ind2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind1_);
  // checkMissing(ind2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_ind2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return ind2
  return Rsh_Fir_reg_ind2_;
}
SEXP Rsh_Fir_user_promise_inner309648556_5(SEXP CCP, SEXP RHO) {
  // repos = ld repos
  Rsh_Fir_reg_repos = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // repos1 = force? repos
  Rsh_Fir_reg_repos1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_repos);
  // checkMissing(repos1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_repos1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return repos1
  return Rsh_Fir_reg_repos1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
