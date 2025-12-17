#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2383919959_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2383919959_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3907833032_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3907833032_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3907833032_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_letters;
  SEXP Rsh_Fir_reg_letters1_;
  SEXP Rsh_Fir_reg_noquote;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_nql;
  SEXP Rsh_Fir_reg_nql1_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_nql2_;
  SEXP Rsh_Fir_reg_nql3_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_nql5_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_cmp_logical;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_as_matrix;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_noquote1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_chmat2_;
  SEXP Rsh_Fir_reg_chmat3_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r31_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2383919959
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2383919959_, RHO, CCP);
  // st noquote = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // letters = ld letters
  Rsh_Fir_reg_letters = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

D0_:;
  // deopt 3 [letters]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_letters;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // letters1 = force? letters
  Rsh_Fir_reg_letters1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_letters);
  // checkMissing(letters1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_letters1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // noquote = ldf noquote
  Rsh_Fir_reg_noquote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   letters2 = ld letters;
  //   letters3 = force? letters2;
  //   checkMissing(letters3);
  //   return letters3;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r2 = dyn noquote(p)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_noquote, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L4() else D2()
  // L4()
  goto L4_;

D2_:;
  // deopt 8 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // st nql = r2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // nql = ld nql
  Rsh_Fir_reg_nql = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L5() else D3()
  // L5()
  goto L5_;

D3_:;
  // deopt 10 [nql]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_nql;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // nql1 = force? nql
  Rsh_Fir_reg_nql1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nql);
  // checkMissing(nql1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_nql1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // l = ld nql
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // c = `is.object`(l)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args4);
  // if c then L6() else L7("oh", l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L6()
    goto L6_;
  } else {
  // L7("oh", l)
    Rsh_Fir_reg_r4_ = Rsh_const(CCP, 3);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L7_;
  }

L0_:;
  // st nql = dx1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // nql2 = ld nql
  Rsh_Fir_reg_nql2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L9() else D4()
  // L9()
  goto L9_;

L6_:;
  // dr = tryDispatchBuiltin.0("[<-", l, "oh")
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args5);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if dc then L8() else L7("oh", dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L8()
    goto L8_;
  } else {
  // L7("oh", dr)
    Rsh_Fir_reg_r4_ = Rsh_const(CCP, 3);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L7_;
  }

L7_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r7 = dyn ___(l2, "oh", <int 1, 2, 3, 4>)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L0_;

D4_:;
  // deopt 19 [nql2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_nql2_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L8_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L9_:;
  // nql3 = force? nql2
  Rsh_Fir_reg_nql3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nql2_);
  // checkMissing(nql3)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_nql3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(nql3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_nql3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args10);
  // if c1 then L10() else L11(nql3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L10()
    goto L10_;
  } else {
  // L11(nql3)
    Rsh_Fir_reg_nql5_ = Rsh_Fir_reg_nql3_;
    goto L11_;
  }

L1_:;
  // r10 = clos inner3907833032
  Rsh_Fir_reg_r10_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3907833032_, RHO, CCP);
  // st `cmp.logical` = r10
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // cmp_logical = ldf `cmp.logical`
  Rsh_Fir_reg_cmp_logical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

L10_:;
  // dr2 = tryDispatchBuiltin.1("[", nql3)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_nql3_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args11);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if dc1 then L12() else L11(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L12()
    goto L12_;
  } else {
  // L11(dr2)
    Rsh_Fir_reg_nql5_ = Rsh_Fir_reg_dr2_;
    goto L11_;
  }

L11_:;
  // r8 = `:`(1.0, 12.0)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args13);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r9 = dyn __(nql5, r8)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_nql5_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

D5_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L1()
  // L1()
  goto L1_;

L13_:;
  // p1 = prom<V +>{
  //   __1 = ldf `::`;
  //   r11 = dyn __1("stats", "runif");
  //   checkFun.0(r11);
  //   r12 = r11 as cls;
  //   r13 = dyn r12(20.0);
  //   r14 = `>`(r13, 0.8);
  //   return r14;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r16 = dyn cmp_logical(p1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cmp_logical, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L14() else D6()
  // L14()
  goto L14_;

D6_:;
  // deopt 32 [r16]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L14_:;
  // as_matrix = ldf `as.matrix`
  Rsh_Fir_reg_as_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L15() else D7()
  // L15()
  goto L15_;

D7_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p3 = prom<V +>{
  //   format = ldf format;
  //   p2 = prom<V +>{
  //     stackloss = ld stackloss;
  //     stackloss1 = force? stackloss;
  //     checkMissing(stackloss1);
  //     return stackloss1;
  //   };
  //   r18 = dyn format(p2);
  //   return r18;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r20 = dyn as_matrix(p3)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_matrix, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L16() else D8()
  // L16()
  goto L16_;

D8_:;
  // deopt 36 [r20]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // st chmat = r20
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // noquote1 = ldf noquote
  Rsh_Fir_reg_noquote1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L17() else D9()
  // L17()
  goto L17_;

D9_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p4 = prom<V +>{
  //   chmat = ld chmat;
  //   chmat1 = force? chmat;
  //   checkMissing(chmat1);
  //   return chmat1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r22 = dyn noquote1[, right](p4, TRUE)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_noquote1_, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L18() else D10()
  // L18()
  goto L18_;

D10_:;
  // deopt 43 [r22]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L18_:;
  // st chmat = r22
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // chmat2 = ld chmat
  Rsh_Fir_reg_chmat2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L19() else D11()
  // L19()
  goto L19_;

D11_:;
  // deopt 45 [chmat2]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_chmat2_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L19_:;
  // chmat3 = force? chmat2
  Rsh_Fir_reg_chmat3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_chmat2_);
  // checkMissing(chmat3)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_chmat3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L20() else D12()
  // L20()
  goto L20_;

D12_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p7 = prom<V +>{
  //   sym = ldf identical;
  //   base = ldf identical in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r24):
  //   return r24;
  // L1():
  //   capture_output = ldf `capture.output`;
  //   p5 = prom<V +>{
  //     stackloss2 = ld stackloss;
  //     stackloss3 = force? stackloss2;
  //     checkMissing(stackloss3);
  //     return stackloss3;
  //   };
  //   r26 = dyn capture_output(p5);
  //   capture_output1 = ldf `capture.output`;
  //   p6 = prom<V +>{
  //     chmat4 = ld chmat;
  //     chmat5 = force? chmat4;
  //     checkMissing(chmat5);
  //     return chmat5;
  //   };
  //   r28 = dyn capture_output1(p6);
  //   identical = ldf identical in base;
  //   r29 = dyn identical(r26, r28, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r29);
  // L2():
  //   r23 = dyn base(<lang capture.output(stackloss)>, <lang capture.output(chmat)>);
  //   goto L0(r23);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r31 = dyn stopifnot(p7)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L21() else D13()
  // L21()
  goto L21_;

D13_:;
  // deopt 50 [r31]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L21_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r31
  return Rsh_Fir_reg_r31_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_letters2_;
  SEXP Rsh_Fir_reg_letters3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // letters2 = ld letters
  Rsh_Fir_reg_letters2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // letters3 = force? letters2
  Rsh_Fir_reg_letters3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_letters2_);
  // checkMissing(letters3)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_letters3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // return letters3
  return Rsh_Fir_reg_letters3_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __1 = ldf `::`
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // r11 = dyn __1("stats", "runif")
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names3, CCP, RHO);
  // checkFun.0(r11)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r11_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args17));
  // r12 = r11 as cls
  Rsh_Fir_reg_r12_ = Rsh_Fir_cast(Rsh_Fir_reg_r11_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r13 = dyn r12(20.0)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r12_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // r14 = `>`(r13, 0.8)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args19);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_format;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // format = ldf format
  Rsh_Fir_reg_format = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // p2 = prom<V +>{
  //   stackloss = ld stackloss;
  //   stackloss1 = force? stackloss;
  //   checkMissing(stackloss1);
  //   return stackloss1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r18 = dyn format(p2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r18
  return Rsh_Fir_reg_r18_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_stackloss;
  SEXP Rsh_Fir_reg_stackloss1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // stackloss = ld stackloss
  Rsh_Fir_reg_stackloss = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // stackloss1 = force? stackloss
  Rsh_Fir_reg_stackloss1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stackloss);
  // checkMissing(stackloss1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_stackloss1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return stackloss1
  return Rsh_Fir_reg_stackloss1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_chmat;
  SEXP Rsh_Fir_reg_chmat1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // chmat = ld chmat
  Rsh_Fir_reg_chmat = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // chmat1 = force? chmat
  Rsh_Fir_reg_chmat1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_chmat);
  // checkMissing(chmat1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_chmat1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return chmat1
  return Rsh_Fir_reg_chmat1_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_capture_output;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_capture_output1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r29_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf identical
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base = ldf identical in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r24
  return Rsh_Fir_reg_r24_;

L1_:;
  // capture_output = ldf `capture.output`
  Rsh_Fir_reg_capture_output = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // p5 = prom<V +>{
  //   stackloss2 = ld stackloss;
  //   stackloss3 = force? stackloss2;
  //   checkMissing(stackloss3);
  //   return stackloss3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r26 = dyn capture_output(p5)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_capture_output, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names9, CCP, RHO);
  // capture_output1 = ldf `capture.output`
  Rsh_Fir_reg_capture_output1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // p6 = prom<V +>{
  //   chmat4 = ld chmat;
  //   chmat5 = force? chmat4;
  //   checkMissing(chmat5);
  //   return chmat5;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r28 = dyn capture_output1(p6)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_capture_output1_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names10, CCP, RHO);
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r29 = dyn identical(r26, r28, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args32[9];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args32[3] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args32[4] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args32[5] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args32[6] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args32[7] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args32[8] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names11[9];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_array_arg_names11[4] = R_MissingArg;
  Rsh_Fir_array_arg_names11[5] = R_MissingArg;
  Rsh_Fir_array_arg_names11[6] = R_MissingArg;
  Rsh_Fir_array_arg_names11[7] = R_MissingArg;
  Rsh_Fir_array_arg_names11[8] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r29_;
  goto L0_;

L2_:;
  // r23 = dyn base(<lang capture.output(stackloss)>, <lang capture.output(chmat)>)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_stackloss2_;
  SEXP Rsh_Fir_reg_stackloss3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // stackloss2 = ld stackloss
  Rsh_Fir_reg_stackloss2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // stackloss3 = force? stackloss2
  Rsh_Fir_reg_stackloss3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_stackloss2_);
  // checkMissing(stackloss3)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_stackloss3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return stackloss3
  return Rsh_Fir_reg_stackloss3_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_chmat4_;
  SEXP Rsh_Fir_reg_chmat5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // chmat4 = ld chmat
  Rsh_Fir_reg_chmat4_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // chmat5 = force? chmat4
  Rsh_Fir_reg_chmat5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_chmat4_);
  // checkMissing(chmat5)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_chmat5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return chmat5
  return Rsh_Fir_reg_chmat5_;
}
SEXP Rsh_Fir_user_function_inner2383919959_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2383919959 dynamic dispatch ([obj, right])

  return Rsh_Fir_user_version_inner2383919959_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2383919959_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2383919959 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2383919959/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_obj;
  SEXP Rsh_Fir_reg_right;
  SEXP Rsh_Fir_reg_right_isMissing;
  SEXP Rsh_Fir_reg_right_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_obj1_;
  SEXP Rsh_Fir_reg_obj2_;
  SEXP Rsh_Fir_reg_inherits;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_obj3_;
  SEXP Rsh_Fir_reg_obj4_;
  SEXP Rsh_Fir_reg_attr;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_right1_;
  SEXP Rsh_Fir_reg_right2_;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_l1;
  SEXP Rsh_Fir_reg_class__;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_obj5_;
  SEXP Rsh_Fir_reg_obj6_;

  // Bind parameters
  Rsh_Fir_reg_obj = PARAMS[0];
  Rsh_Fir_reg_right = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st obj = obj
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_obj, RHO);
  (void)(Rsh_Fir_reg_obj);
  // right_isMissing = missing.0(right)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_right;
  Rsh_Fir_reg_right_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args35);
  // if right_isMissing then L0(FALSE) else L0(right)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_right_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_right_orDefault = Rsh_const(CCP, 26);
    goto L0_;
  } else {
  // L0(right)
    Rsh_Fir_reg_right_orDefault = Rsh_Fir_reg_right;
    goto L0_;
  }

L0_:;
  // st right = right_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_right_orDefault, RHO);
  (void)(Rsh_Fir_reg_right_orDefault);
  // sym = ldf inherits
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base = ldf inherits in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L1_:;
  // r3 = `!`(r1)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args37);
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args38);
  // if c then L13() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L13()
    goto L13_;
  } else {
  // L2()
    goto L2_;
  }

L9_:;
  // obj1 = ld obj
  Rsh_Fir_reg_obj1_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L10_:;
  // r = dyn base(<sym obj>, "noquote")
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 2 [obj1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_obj1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L2_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // obj5 = ld obj
  Rsh_Fir_reg_obj5_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L30() else D9()
  // L30()
  goto L30_;

L11_:;
  // obj2 = force? obj1
  Rsh_Fir_reg_obj2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj1_);
  // checkMissing(obj2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_obj2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r2 = dyn inherits(obj2, "noquote", FALSE)
  SEXP Rsh_Fir_array_args41[3];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_obj2_;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args41[2] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

L13_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard1 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

D1_:;
  // deopt 7 [r2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 37 [obj5]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_obj5_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L3_:;
  // l = ld obj
  Rsh_Fir_reg_l1 = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L27() else D7()
  // L27()
  goto L27_;

L12_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_1;
  goto L1_;

L14_:;
  // sym2 = ldf attr
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base2 = ldf attr in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard2 then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L15_:;
  // r4 = dyn base1(<lang attr(obj, "class")>, <lang if(right, c(right="noquote"), "noquote")>)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args44[1] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_1;
  goto L3_;

L30_:;
  // obj6 = force? obj5
  Rsh_Fir_reg_obj6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj5_);
  // checkMissing(obj6)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_obj6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return obj6
  return Rsh_Fir_reg_obj6_;

D7_:;
  // deopt 31 [r5, l, r5]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(31, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L4_:;
  // right1 = ld right
  Rsh_Fir_reg_right1_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L20() else D4()
  // L20()
  goto L20_;

L16_:;
  // obj3 = ld obj
  Rsh_Fir_reg_obj3_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L18() else D2()
  // L18()
  goto L18_;

L17_:;
  // r6 = dyn base2(<sym obj>, "class")
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L4(r6)
  // L4(r6)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r6_;
  goto L4_;

L27_:;
  // r14 = dyn class__(l, NULL, r5)
  SEXP Rsh_Fir_array_args47[3];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args47[2] = Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L28() else D8()
  // L28()
  goto L28_;

D2_:;
  // deopt 13 [obj3]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_obj3_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 18 [right1]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_right1_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 33 [r5, r14]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r14_1;
  Rsh_Fir_deopt(33, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L18_:;
  // obj4 = force? obj3
  Rsh_Fir_reg_obj4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_obj3_);
  // checkMissing(obj4)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_obj4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r8 = dyn attr(obj4, "class")
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_obj4_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L19() else D3()
  // L19()
  goto L19_;

L20_:;
  // right2 = force? right1
  Rsh_Fir_reg_right2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_right1_);
  // checkMissing(right2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_right2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(right2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_right2_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args51);
  // if c1 then L21() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L21()
    goto L21_;
  } else {
  // L5()
    goto L5_;
  }

L28_:;
  // st obj = r14
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r14_1, RHO);
  (void)(Rsh_Fir_reg_r14_1);
  // goto L8()
  // L8()
  goto L8_;

D3_:;
  // deopt 17 [r8]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L5_:;
  // goto L7("noquote")
  // L7("noquote")
  Rsh_Fir_reg_r12_1 = Rsh_const(CCP, 31);
  goto L7_;

L7_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r13 = dyn c3(r7, r12)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L26() else D6()
  // L26()
  goto L26_;

L19_:;
  // goto L4(r8)
  // L4(r8)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r8_1;
  goto L4_;

L21_:;
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard3 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

D6_:;
  // deopt 29 [r13]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L7(r10)
  // L7(r10)
  Rsh_Fir_reg_r12_1 = Rsh_Fir_reg_r10_1;
  goto L7_;

L22_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r11 = dyn c2("noquote")
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L24() else D5()
  // L24()
  goto L24_;

L23_:;
  // r9 = dyn base3[right]("noquote")
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L6(r9)
  // L6(r9)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r9_1;
  goto L6_;

L26_:;
  // goto L3(r13)
  // L3(r13)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r13_1;
  goto L3_;

D5_:;
  // deopt 25 [r11]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L6(r11)
  // L6(r11)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r11_1;
  goto L6_;
}
SEXP Rsh_Fir_user_function_inner3907833032_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3907833032 dynamic dispatch ([`log.v`])

  return Rsh_Fir_user_version_inner3907833032_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3907833032_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3907833032 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3907833032/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_log_v;
  SEXP Rsh_Fir_reg_sym2;
  SEXP Rsh_Fir_reg_base2;
  SEXP Rsh_Fir_reg_guard2;
  SEXP Rsh_Fir_reg_r2;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_log_v1_;
  SEXP Rsh_Fir_reg_log_v2_;
  SEXP Rsh_Fir_reg_as_logical;
  SEXP Rsh_Fir_reg_r2_2;
  SEXP Rsh_Fir_reg_noquote1;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r15_;

  // Bind parameters
  Rsh_Fir_reg_log_v = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `log.v` = log_v
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_log_v, RHO);
  (void)(Rsh_Fir_reg_log_v);
  // sym = ldf `as.logical`
  Rsh_Fir_reg_sym2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base = ldf `as.logical` in base
  Rsh_Fir_reg_base2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym2;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base2;
  Rsh_Fir_reg_guard2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // st `log.v` = r1
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // noquote = ldf noquote
  Rsh_Fir_reg_noquote1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

L1_:;
  // log_v1 = ld `log.v`
  Rsh_Fir_reg_log_v1_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r = dyn base(<sym log.v>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2;
  goto L0_;

D0_:;
  // deopt 2 [log_v1]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_log_v1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // log_v2 = force? log_v1
  Rsh_Fir_reg_log_v2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log_v1_);
  // checkMissing(log_v2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_log_v2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // as_logical = ldf `as.logical` in base
  Rsh_Fir_reg_as_logical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r2 = dyn as_logical(log_v2)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_log_v2_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r2_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_logical, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

L5_:;
  // p = prom<V +>{
  //   sym1 = ldf length;
  //   base1 = ldf length in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L4() else L5();
  // L0(r4):
  //   r6 = `==`(r4, 0.0);
  //   c = `as.logical`(r6);
  //   if c then L6() else L1();
  // L4():
  //   log_v3 = ld `log.v`;
  //   log_v4 = force? log_v3;
  //   checkMissing(log_v4);
  //   length = ldf length in base;
  //   r5 = dyn length(log_v4);
  //   goto L0(r5);
  // L5():
  //   r3 = dyn base1(<sym log.v>);
  //   goto L0(r3);
  // L1():
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L8() else L9();
  // L6():
  //   return "()";
  // L2(r8):
  //   c2 = `is.object`(r8);
  //   if c2 then L10() else L11(r8);
  // L8():
  //   c1 = ldf c in base;
  //   r9 = dyn c1(".", "|");
  //   goto L2(r9);
  // L9():
  //   r7 = dyn base2(".", "|");
  //   goto L2(r7);
  // L3(dx1):
  //   return dx1;
  // L10():
  //   dr = tryDispatchBuiltin.1("[", r8);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L12() else L11(dr);
  // L11(r11):
  //   log_v5 = ld `log.v`;
  //   log_v6 = force? log_v5;
  //   checkMissing(log_v6);
  //   r12 = `+`(1.0, log_v6);
  //   __ = ldf `[` in base;
  //   r13 = dyn __(r11, r12);
  //   goto L3(r13);
  // L12():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L3(dx);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3907833032_, 0, NULL, CCP, RHO);
  // r15 = dyn noquote(p)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_noquote1, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r2_2;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 10 [r15]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_2;
  goto L0_;

L6_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_inner3907833032_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_r4_2;
  SEXP Rsh_Fir_reg_log_v3_;
  SEXP Rsh_Fir_reg_log_v4_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_c2;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r7_2;
  SEXP Rsh_Fir_reg_r8_2;
  SEXP Rsh_Fir_reg_c1_2;
  SEXP Rsh_Fir_reg_r9_2;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_r11_2;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg_log_v5_;
  SEXP Rsh_Fir_reg_log_v6_;
  SEXP Rsh_Fir_reg_r12_2;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r13_2;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3907833032/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf length
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard1 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L0_:;
  // r6 = `==`(r4, 0.0)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r4_2;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 42);
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args61);
  // c = `as.logical`(r6)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_reg_c2 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args62);
  // if c then L6() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2)) {
  // L6()
    goto L6_;
  } else {
  // L1()
    goto L1_;
  }

L4_:;
  // log_v3 = ld `log.v`
  Rsh_Fir_reg_log_v3_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // log_v4 = force? log_v3
  Rsh_Fir_reg_log_v4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log_v3_);
  // checkMissing(log_v4)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_log_v4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r5 = dyn length(log_v4)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_log_v4_;
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r4_2 = Rsh_Fir_reg_r5_1;
  goto L0_;

L5_:;
  // r3 = dyn base1(<sym log.v>)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r4_2 = Rsh_Fir_reg_r3_1;
  goto L0_;

L1_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args66);
  // if guard2 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L6_:;
  // return "()"
  return Rsh_const(CCP, 43);

L2_:;
  // c2 = `is.object`(r8)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_r8_2;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args67);
  // if c2 then L10() else L11(r8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L10()
    goto L10_;
  } else {
  // L11(r8)
    Rsh_Fir_reg_r11_2 = Rsh_Fir_reg_r8_2;
    goto L11_;
  }

L8_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r9 = dyn c1(".", "|")
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r9_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_2, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L2(r9)
  // L2(r9)
  Rsh_Fir_reg_r8_2 = Rsh_Fir_reg_r9_2;
  goto L2_;

L9_:;
  // r7 = dyn base2(".", "|")
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r7_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r8_2 = Rsh_Fir_reg_r7_2;
  goto L2_;

L3_:;
  // return dx1
  return Rsh_Fir_reg_dx1_1;

L10_:;
  // dr = tryDispatchBuiltin.1("[", r8)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_r8_2;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args70);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc then L12() else L11(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L12()
    goto L12_;
  } else {
  // L11(dr)
    Rsh_Fir_reg_r11_2 = Rsh_Fir_reg_dr1;
    goto L11_;
  }

L11_:;
  // log_v5 = ld `log.v`
  Rsh_Fir_reg_log_v5_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // log_v6 = force? log_v5
  Rsh_Fir_reg_log_v6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_log_v5_);
  // checkMissing(log_v6)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_log_v6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // r12 = `+`(1.0, log_v6)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_log_v6_;
  Rsh_Fir_reg_r12_2 = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args73);
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r13 = dyn __(r11, r12)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_r11_2;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_r12_2;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r13_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L3(r13)
  // L3(r13)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r13_2;
  goto L3_;

L12_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L3(dx)
  // L3(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
