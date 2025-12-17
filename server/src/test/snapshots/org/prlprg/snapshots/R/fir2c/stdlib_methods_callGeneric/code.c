#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1246119658_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1246119658_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1246119658_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1246119658_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1246119658_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1246119658_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1246119658_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1246119658_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1246119658_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1246119658_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1246119658_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1246119658_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1246119658_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1246119658_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1246119658_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1246119658_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1246119658_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1246119658_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1246119658_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1246119658_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner4284372013_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4284372013_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4284372013_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4284372013_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_r1_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1246119658
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1246119658_, RHO, CCP);
  // st callGeneric = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // r1 = clos inner4284372013
  Rsh_Fir_reg_r1_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4284372013_, RHO, CCP);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_function_inner1246119658_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1246119658 dynamic dispatch ([`...`])

  return Rsh_Fir_user_version_inner1246119658_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1246119658_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1246119658 version 0 (dots -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1246119658/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_sys_call;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_call;
  SEXP Rsh_Fir_reg_call1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_call3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_quote;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg__local;
  SEXP Rsh_Fir_reg__local1_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_methodCtxInd;
  SEXP Rsh_Fir_reg_methodCtxInd1_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_sys_call1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_fromNextMethod;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_methodCtxInd4_;
  SEXP Rsh_Fir_reg_methodCtxInd5_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_parent_frame;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_getGenericFromCall;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_genericName;
  SEXP Rsh_Fir_reg_genericName1_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_nargs;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_sys_frame;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_sys_function;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_match_call;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_lapply;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_sys_call2_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_as_name2_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_____;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_eval;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r72_;

  // Bind parameters
  Rsh_Fir_reg_ddd = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sys_call = ldf `sys.call`
  Rsh_Fir_reg_sys_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p = prom<V +>{
  //   sys_parent = ldf `sys.parent`;
  //   r = dyn sys_parent(1);
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_, 0, NULL, CCP, RHO);
  // r2 = dyn sys_call(p)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_call, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

D1_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L16_:;
  // st call = r2
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // sym = ldf identical
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf identical in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L0_:;
  // st `.local` = r4
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // _local = ld `.local`
  Rsh_Fir_reg__local = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L26() else D4()
  // L26()
  goto L26_;

L17_:;
  // call = ld call
  Rsh_Fir_reg_call = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L19() else D2()
  // L19()
  goto L19_;

L18_:;
  // r3 = dyn base(<lang `[[`(call, 1)>, <lang quote(.local)>)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L0_;

D2_:;
  // deopt 7 [call]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_call;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 26 [1, _local]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg__local;
  Rsh_Fir_deopt(26, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L19_:;
  // call1 = force? call
  Rsh_Fir_reg_call1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call);
  // checkMissing(call1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_call1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // c = `is.object`(call1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_call1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args5);
  // if c then L20() else L21(call1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L20()
    goto L20_;
  } else {
  // L21(call1)
    Rsh_Fir_reg_call3_ = Rsh_Fir_reg_call1_;
    goto L21_;
  }

L26_:;
  // _local1 = force? _local
  Rsh_Fir_reg__local1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__local);
  // checkMissing(_local1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg__local1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(_local1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg__local1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args7);
  // if c1 then L27() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L27()
    goto L27_;
  } else {
  // L3()
    goto L3_;
  }

L1_:;
  // sym1 = ldf quote
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf quote in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard1 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L3_:;
  // goto L4(1, 0)
  // L4(1, 0)
  Rsh_Fir_reg_r12_ = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r13_ = Rsh_const(CCP, 11);
  goto L4_;

L4_:;
  // r14 = `+`(r12, r13)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args9);
  // st methodCtxInd = r14
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // methodCtxInd = ld methodCtxInd
  Rsh_Fir_reg_methodCtxInd = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L29() else D5()
  // L29()
  goto L29_;

L20_:;
  // dr = tryDispatchBuiltin.1("[[", call1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_call1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args10);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if dc then L22() else L21(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L22()
    goto L22_;
  } else {
  // L21(dr)
    Rsh_Fir_reg_call3_ = Rsh_Fir_reg_dr;
    goto L21_;
  }

L21_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r5 = dyn __(call3, 1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_call3_;
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r5_;
  goto L1_;

L27_:;
  // goto L4(1, 1)
  // L4(1, 1)
  Rsh_Fir_reg_r12_ = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r13_ = Rsh_const(CCP, 4);
  goto L4_;

D5_:;
  // deopt 34 [methodCtxInd]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_methodCtxInd;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L2_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r9 = dyn identical(dx1, r7, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args13[9];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args13[3] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args13[4] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args13[5] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args13[6] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args13[7] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args13[8] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names4[9];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_array_arg_names4[4] = R_MissingArg;
  Rsh_Fir_array_arg_names4[5] = R_MissingArg;
  Rsh_Fir_array_arg_names4[6] = R_MissingArg;
  Rsh_Fir_array_arg_names4[7] = R_MissingArg;
  Rsh_Fir_array_arg_names4[8] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L25() else D3()
  // L25()
  goto L25_;

L22_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;

L23_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r8 = dyn quote(<sym .local>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L2_;

L24_:;
  // r6 = dyn base1(<sym .local>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L2_;

L29_:;
  // methodCtxInd1 = force? methodCtxInd
  Rsh_Fir_reg_methodCtxInd1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methodCtxInd);
  // checkMissing(methodCtxInd1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_methodCtxInd1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // r15 = `+`(methodCtxInd1, 1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_methodCtxInd1_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args18);
  // st callerCtxInd = r15
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // sys_call1 = ldf `sys.call`
  Rsh_Fir_reg_sys_call1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L30() else D6()
  // L30()
  goto L30_;

D3_:;
  // deopt 23 [r9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r9_;
  goto L0_;

L30_:;
  // p2 = prom<V +>{
  //   sys_parent1 = ldf `sys.parent`;
  //   p1 = prom<V +>{
  //     methodCtxInd2 = ld methodCtxInd;
  //     methodCtxInd3 = force? methodCtxInd2;
  //     checkMissing(methodCtxInd3);
  //     return methodCtxInd3;
  //   };
  //   r17 = dyn sys_parent1(p1);
  //   return r17;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_1, 0, NULL, CCP, RHO);
  // r19 = dyn sys_call1(p2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_call1_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L31() else D7()
  // L31()
  goto L31_;

D7_:;
  // deopt 42 [r19]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L31_:;
  // st methodCall = r19
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // fromNextMethod = ldf fromNextMethod
  Rsh_Fir_reg_fromNextMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L32() else D8()
  // L32()
  goto L32_;

D8_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p3 = prom<V +>{
  //   methodCall = ld methodCall;
  //   methodCall1 = force? methodCall;
  //   checkMissing(methodCall1);
  //   return methodCall1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_3, 0, NULL, CCP, RHO);
  // r21 = dyn fromNextMethod(p3)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_fromNextMethod, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L33() else D9()
  // L33()
  goto L33_;

D9_:;
  // deopt 47 [r21]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L33_:;
  // c2 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args24);
  // if c2 then L34() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L34()
    goto L34_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L37() else D11()
  // L37()
  goto L37_;

L34_:;
  // methodCtxInd4 = ld methodCtxInd
  Rsh_Fir_reg_methodCtxInd4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L35() else D10()
  // L35()
  goto L35_;

D10_:;
  // deopt 48 [methodCtxInd4]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_methodCtxInd4_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 56 []
  Rsh_Fir_deopt(56, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // methodCtxInd5 = force? methodCtxInd4
  Rsh_Fir_reg_methodCtxInd5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methodCtxInd4_);
  // checkMissing(methodCtxInd5)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_methodCtxInd5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // r22 = `+`(methodCtxInd5, 1)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_methodCtxInd5_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args26);
  // st methodCtxInd = r22
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // goto L6()
  // L6()
  goto L6_;

L37_:;
  // p4 = prom<V +>{
  //   methodCtxInd6 = ld methodCtxInd;
  //   methodCtxInd7 = force? methodCtxInd6;
  //   checkMissing(methodCtxInd7);
  //   return methodCtxInd7;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_4, 0, NULL, CCP, RHO);
  // r25 = dyn parent_frame(p4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L38() else D12()
  // L38()
  goto L38_;

D12_:;
  // deopt 58 [r25]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L38_:;
  // st methodFrame = r25
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // getGenericFromCall = ldf getGenericFromCall
  Rsh_Fir_reg_getGenericFromCall = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L39() else D13()
  // L39()
  goto L39_;

D13_:;
  // deopt 61 []
  Rsh_Fir_deopt(61, 0, NULL, CCP, RHO);
  return R_NilValue;

L39_:;
  // p5 = prom<V +>{
  //   methodCall2 = ld methodCall;
  //   methodCall3 = force? methodCall2;
  //   checkMissing(methodCall3);
  //   return methodCall3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   methodFrame = ld methodFrame;
  //   methodFrame1 = force? methodFrame;
  //   checkMissing(methodFrame1);
  //   return methodFrame1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_6, 0, NULL, CCP, RHO);
  // r28 = dyn getGenericFromCall(p5, p6)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getGenericFromCall, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L40() else D14()
  // L40()
  goto L40_;

D14_:;
  // deopt 64 [r28]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L40_:;
  // st genericName = r28
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // sym2 = ldf `is.null`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base2 = ldf `is.null` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard2 then L41() else L42()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L41()
    goto L41_;
  } else {
  // L42()
    goto L42_;
  }

L7_:;
  // c4 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args33);
  // if c4 then L44() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L44()
    goto L44_;
  } else {
  // L8()
    goto L8_;
  }

L41_:;
  // genericName = ld genericName
  Rsh_Fir_reg_genericName = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L43() else D15()
  // L43()
  goto L43_;

L42_:;
  // r29 = dyn base2(<sym genericName>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L7(r29)
  // L7(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L7_;

D15_:;
  // deopt 67 [genericName]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_genericName;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // sym3 = ldf nargs
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base3 = ldf nargs in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard3 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L43_:;
  // genericName1 = force? genericName
  Rsh_Fir_reg_genericName1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_genericName);
  // checkMissing(genericName1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_genericName1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // c3 = `==`(genericName1, NULL)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_genericName1_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args37);
  // goto L7(c3)
  // L7(c3)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_c3_;
  goto L7_;

L44_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L45() else D16()
  // L45()
  goto L45_;

D16_:;
  // deopt 71 []
  Rsh_Fir_deopt(71, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // r36 = `==`(r34, 0)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args38);
  // c5 = `as.logical`(r36)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args39);
  // if c5 then L51() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L51()
    goto L51_;
  } else {
  // L11()
    goto L11_;
  }

L45_:;
  // r31 = dyn stop("callGeneric() must be called from within a method body")
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L46() else D17()
  // L46()
  goto L46_;

L48_:;
  // nargs = ldf nargs in base
  Rsh_Fir_reg_nargs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r35 = dyn nargs()
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nargs, 0, NULL, NULL, CCP, RHO);
  // check L50() else D18()
  // L50()
  goto L50_;

L49_:;
  // r33 = dyn base3()
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 0, NULL, NULL, CCP, RHO);
  // goto L10(r33)
  // L10(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L10_;

D17_:;
  // deopt 73 [r31]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 79 [r35]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L11_:;
  // sys_call2 = ldf `sys.call`
  Rsh_Fir_reg_sys_call2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L64() else D27()
  // L64()
  goto L64_;

L13_:;
  // as_name2 = ldf `as.name`
  Rsh_Fir_reg_as_name2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L66() else D29()
  // L66()
  goto L66_;

L46_:;
  // goto L9()
  // L9()
  goto L9_;

L50_:;
  // goto L10(r35)
  // L10(r35)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L10_;

L51_:;
  // sys_frame = ldf `sys.frame`
  Rsh_Fir_reg_sys_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L52() else D19()
  // L52()
  goto L52_;

D19_:;
  // deopt 83 []
  Rsh_Fir_deopt(83, 0, NULL, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 113 []
  Rsh_Fir_deopt(113, 0, NULL, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 117 []
  Rsh_Fir_deopt(117, 0, NULL, CCP, RHO);
  return R_NilValue;

L52_:;
  // p8 = prom<V +>{
  //   sys_parent2 = ldf `sys.parent`;
  //   p7 = prom<V +>{
  //     callerCtxInd = ld callerCtxInd;
  //     callerCtxInd1 = force? callerCtxInd;
  //     checkMissing(callerCtxInd1);
  //     return callerCtxInd1;
  //   };
  //   r38 = dyn sys_parent2(p7);
  //   return r38;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_7, 0, NULL, CCP, RHO);
  // r40 = dyn sys_frame(p8)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_frame, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L53() else D20()
  // L53()
  goto L53_;

L64_:;
  // r61 = dyn sys_call2()
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_call2_, 0, NULL, NULL, CCP, RHO);
  // check L65() else D28()
  // L65()
  goto L65_;

L66_:;
  // p15 = prom<V +>{
  //   genericName2 = ld genericName;
  //   genericName3 = force? genericName2;
  //   checkMissing(genericName3);
  //   return genericName3;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_9, 0, NULL, CCP, RHO);
  // r63 = dyn as_name2(p15)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_name2_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L67() else D30()
  // L67()
  goto L67_;

D20_:;
  // deopt 85 [r40]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 114 [r61]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 119 [r63]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L53_:;
  // st callerFrame = r40
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // sys_function = ldf `sys.function`
  Rsh_Fir_reg_sys_function = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L54() else D21()
  // L54()
  goto L54_;

L65_:;
  // st call = r61
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r61_, RHO);
  (void)(Rsh_Fir_reg_r61_);
  // goto L13()
  // L13()
  goto L13_;

L67_:;
  // l3 = ld call
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // c8 = `is.object`(l3)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args46);
  // if c8 then L68() else L69(r63, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L68()
    goto L68_;
  } else {
  // L69(r63, l3)
    Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r63_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L69_;
  }

D21_:;
  // deopt 88 []
  Rsh_Fir_deopt(88, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // st call = dx7
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L71() else D31()
  // L71()
  goto L71_;

L54_:;
  // p9 = prom<V +>{
  //   sys_parent3 = ldf `sys.parent`;
  //   r41 = dyn sys_parent3(1);
  //   return r41;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_10, 0, NULL, CCP, RHO);
  // r43 = dyn sys_function(p9)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_function, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L55() else D22()
  // L55()
  goto L55_;

L68_:;
  // dr6 = tryDispatchBuiltin.0("[[<-", l3, r63)
  SEXP Rsh_Fir_array_args49[3];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args49[2] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args49);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if dc3 then L70() else L69(r63, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L70()
    goto L70_;
  } else {
  // L69(r63, dr6)
    Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r63_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr6_;
    goto L69_;
  }

L69_:;
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r68 = dyn ____(l5, r63, 1)
  SEXP Rsh_Fir_array_args51[3];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_args51[2] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L14(r68)
  // L14(r68)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r68_;
  goto L14_;

D22_:;
  // deopt 90 [r43]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 126 []
  Rsh_Fir_deopt(126, 0, NULL, CCP, RHO);
  return R_NilValue;

L55_:;
  // st methodDef = r43
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r43_, RHO);
  (void)(Rsh_Fir_reg_r43_);
  // match_call = ldf `match.call`
  Rsh_Fir_reg_match_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L56() else D23()
  // L56()
  goto L56_;

L70_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L14(dx6)
  // L14(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L14_;

L71_:;
  // p16 = prom<V +>{
  //   call8 = ld call;
  //   call9 = force? call8;
  //   checkMissing(call9);
  //   return call9;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_11, 0, NULL, CCP, RHO);
  // p17 = prom<V +>{
  //   parent_frame1 = ldf `parent.frame`;
  //   r70 = dyn parent_frame1();
  //   return r70;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_12, 0, NULL, CCP, RHO);
  // r72 = dyn eval(p16, p17)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L72() else D32()
  // L72()
  goto L72_;

D23_:;
  // deopt 93 []
  Rsh_Fir_deopt(93, 0, NULL, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 129 [r72]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(129, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L56_:;
  // p10 = prom<V +>{
  //   methodDef = ld methodDef;
  //   methodDef1 = force? methodDef;
  //   checkMissing(methodDef1);
  //   return methodDef1;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_13, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   methodCall4 = ld methodCall;
  //   methodCall5 = force? methodCall4;
  //   checkMissing(methodCall5);
  //   return methodCall5;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_14, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   callerFrame = ld callerFrame;
  //   callerFrame1 = force? callerFrame;
  //   checkMissing(callerFrame1);
  //   return callerFrame1;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_15, 0, NULL, CCP, RHO);
  // r47 = dyn match_call[, , `expand.dots`, envir](p10, p11, FALSE, p12)
  SEXP Rsh_Fir_array_args58[4];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args58[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args58[3] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names21[4];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = Rsh_const(CCP, 38);
  Rsh_Fir_array_arg_names21[3] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_call, 4, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L57() else D24()
  // L57()
  goto L57_;

L72_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r72
  return Rsh_Fir_reg_r72_;

D24_:;
  // deopt 100 [r47]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L57_:;
  // st call = r47
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r47_, RHO);
  (void)(Rsh_Fir_reg_r47_);
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L58() else D25()
  // L58()
  goto L58_;

D25_:;
  // deopt 103 []
  Rsh_Fir_deopt(103, 0, NULL, CCP, RHO);
  return R_NilValue;

L58_:;
  // p13 = prom<V +>{
  //   sym4 = ldf names;
  //   base4 = ldf names in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L2() else L3();
  // L0(r49):
  //   return r49;
  // L2():
  //   call4 = ld call;
  //   call5 = force? call4;
  //   checkMissing(call5);
  //   c6 = `is.object`(call5);
  //   if c6 then L4() else L5(call5);
  // L3():
  //   r48 = dyn base4(<lang `[`(call, `-`(1))>);
  //   goto L0(r48);
  // L1(dx3):
  //   names = ldf names in base;
  //   r51 = dyn names(dx3);
  //   goto L0(r51);
  // L4():
  //   dr2 = tryDispatchBuiltin.1("[", call5);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L6() else L5(dr2);
  // L5(call7):
  //   __1 = ldf `[` in base;
  //   r50 = dyn __1(call7, -1);
  //   goto L1(r50);
  // L6():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L1(dx2);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_16, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   as_name = ld `as.name`;
  //   as_name1 = force? as_name;
  //   checkMissing(as_name1);
  //   return as_name1;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_17, 0, NULL, CCP, RHO);
  // r54 = dyn lapply(p13, p14)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L59() else D26()
  // L59()
  goto L59_;

D26_:;
  // deopt 106 [r54]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L59_:;
  // l = ld call
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // c7 = `is.object`(l)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args70);
  // if c7 then L60() else L61(r54, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L60()
    goto L60_;
  } else {
  // L61(r54, l)
    Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r54_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L61_;
  }

L12_:;
  // st call = dx5
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // goto L13()
  // L13()
  goto L13_;

L60_:;
  // dr4 = tryDispatchBuiltin.0("[<-", l, r54)
  SEXP Rsh_Fir_array_args71[3];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args71[2] = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args71);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if dc2 then L62() else L61(r54, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L62()
    goto L62_;
  } else {
  // L61(r54, dr4)
    Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r54_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr4_;
    goto L61_;
  }

L61_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r59 = dyn ___(l2, r54, -1)
  SEXP Rsh_Fir_array_args73[3];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_args73[2] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L12(r56, r59)
  // L12(r56, r59)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r59_;
  goto L12_;

L62_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // goto L12(r54, dx4)
  // L12(r54, dx4)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L12_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_parent;
  SEXP Rsh_Fir_reg_r1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // sys_parent = ldf `sys.parent`
  Rsh_Fir_reg_sys_parent = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // r = dyn sys_parent(1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_parent, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner1246119658_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_parent1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // sys_parent1 = ldf `sys.parent`
  Rsh_Fir_reg_sys_parent1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // p1 = prom<V +>{
  //   methodCtxInd2 = ld methodCtxInd;
  //   methodCtxInd3 = force? methodCtxInd2;
  //   checkMissing(methodCtxInd3);
  //   return methodCtxInd3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_2, 0, NULL, CCP, RHO);
  // r17 = dyn sys_parent1(p1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_parent1_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names7, CCP, RHO);
  // return r17
  return Rsh_Fir_reg_r17_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_methodCtxInd2_;
  SEXP Rsh_Fir_reg_methodCtxInd3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // methodCtxInd2 = ld methodCtxInd
  Rsh_Fir_reg_methodCtxInd2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // methodCtxInd3 = force? methodCtxInd2
  Rsh_Fir_reg_methodCtxInd3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methodCtxInd2_);
  // checkMissing(methodCtxInd3)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_methodCtxInd3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return methodCtxInd3
  return Rsh_Fir_reg_methodCtxInd3_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_methodCall;
  SEXP Rsh_Fir_reg_methodCall1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // methodCall = ld methodCall
  Rsh_Fir_reg_methodCall = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // methodCall1 = force? methodCall
  Rsh_Fir_reg_methodCall1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methodCall);
  // checkMissing(methodCall1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_methodCall1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return methodCall1
  return Rsh_Fir_reg_methodCall1_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_methodCtxInd6_;
  SEXP Rsh_Fir_reg_methodCtxInd7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // methodCtxInd6 = ld methodCtxInd
  Rsh_Fir_reg_methodCtxInd6_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // methodCtxInd7 = force? methodCtxInd6
  Rsh_Fir_reg_methodCtxInd7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methodCtxInd6_);
  // checkMissing(methodCtxInd7)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_methodCtxInd7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return methodCtxInd7
  return Rsh_Fir_reg_methodCtxInd7_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_methodCall2_;
  SEXP Rsh_Fir_reg_methodCall3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // methodCall2 = ld methodCall
  Rsh_Fir_reg_methodCall2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // methodCall3 = force? methodCall2
  Rsh_Fir_reg_methodCall3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methodCall2_);
  // checkMissing(methodCall3)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_methodCall3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return methodCall3
  return Rsh_Fir_reg_methodCall3_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_methodFrame;
  SEXP Rsh_Fir_reg_methodFrame1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // methodFrame = ld methodFrame
  Rsh_Fir_reg_methodFrame = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // methodFrame1 = force? methodFrame
  Rsh_Fir_reg_methodFrame1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methodFrame);
  // checkMissing(methodFrame1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_methodFrame1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return methodFrame1
  return Rsh_Fir_reg_methodFrame1_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_parent2_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r38_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // sys_parent2 = ldf `sys.parent`
  Rsh_Fir_reg_sys_parent2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // p7 = prom<V +>{
  //   callerCtxInd = ld callerCtxInd;
  //   callerCtxInd1 = force? callerCtxInd;
  //   checkMissing(callerCtxInd1);
  //   return callerCtxInd1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1246119658_8, 0, NULL, CCP, RHO);
  // r38 = dyn sys_parent2(p7)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_parent2_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names14, CCP, RHO);
  // return r38
  return Rsh_Fir_reg_r38_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_callerCtxInd;
  SEXP Rsh_Fir_reg_callerCtxInd1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // callerCtxInd = ld callerCtxInd
  Rsh_Fir_reg_callerCtxInd = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // callerCtxInd1 = force? callerCtxInd
  Rsh_Fir_reg_callerCtxInd1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_callerCtxInd);
  // checkMissing(callerCtxInd1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_callerCtxInd1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return callerCtxInd1
  return Rsh_Fir_reg_callerCtxInd1_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_genericName2_;
  SEXP Rsh_Fir_reg_genericName3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // genericName2 = ld genericName
  Rsh_Fir_reg_genericName2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // genericName3 = force? genericName2
  Rsh_Fir_reg_genericName3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_genericName2_);
  // checkMissing(genericName3)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_genericName3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return genericName3
  return Rsh_Fir_reg_genericName3_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_parent3_;
  SEXP Rsh_Fir_reg_r41_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // sys_parent3 = ldf `sys.parent`
  Rsh_Fir_reg_sys_parent3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // r41 = dyn sys_parent3(1)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_parent3_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names17, CCP, RHO);
  // return r41
  return Rsh_Fir_reg_r41_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_call8_;
  SEXP Rsh_Fir_reg_call9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // call8 = ld call
  Rsh_Fir_reg_call8_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // call9 = force? call8
  Rsh_Fir_reg_call9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call8_);
  // checkMissing(call9)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_call9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // return call9
  return Rsh_Fir_reg_call9_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_parent_frame1_;
  SEXP Rsh_Fir_reg_r70_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // parent_frame1 = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // r70 = dyn parent_frame1()
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame1_, 0, NULL, NULL, CCP, RHO);
  // return r70
  return Rsh_Fir_reg_r70_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_methodDef;
  SEXP Rsh_Fir_reg_methodDef1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // methodDef = ld methodDef
  Rsh_Fir_reg_methodDef = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // methodDef1 = force? methodDef
  Rsh_Fir_reg_methodDef1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methodDef);
  // checkMissing(methodDef1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_methodDef1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // return methodDef1
  return Rsh_Fir_reg_methodDef1_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_methodCall4_;
  SEXP Rsh_Fir_reg_methodCall5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // methodCall4 = ld methodCall
  Rsh_Fir_reg_methodCall4_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // methodCall5 = force? methodCall4
  Rsh_Fir_reg_methodCall5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_methodCall4_);
  // checkMissing(methodCall5)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_methodCall5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return methodCall5
  return Rsh_Fir_reg_methodCall5_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_callerFrame;
  SEXP Rsh_Fir_reg_callerFrame1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // callerFrame = ld callerFrame
  Rsh_Fir_reg_callerFrame = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // callerFrame1 = force? callerFrame
  Rsh_Fir_reg_callerFrame1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_callerFrame);
  // checkMissing(callerFrame1)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_callerFrame1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return callerFrame1
  return Rsh_Fir_reg_callerFrame1_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_call4_;
  SEXP Rsh_Fir_reg_call5_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_call7_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r51_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf names
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base4 = ldf names in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard4 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r49
  return Rsh_Fir_reg_r49_;

L2_:;
  // call4 = ld call
  Rsh_Fir_reg_call4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // call5 = force? call4
  Rsh_Fir_reg_call5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call4_);
  // checkMissing(call5)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_call5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(call5)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_call5_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args61);
  // if c6 then L4() else L5(call5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L4()
    goto L4_;
  } else {
  // L5(call5)
    Rsh_Fir_reg_call7_ = Rsh_Fir_reg_call5_;
    goto L5_;
  }

L3_:;
  // r48 = dyn base4(<lang `[`(call, `-`(1))>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r48)
  // L0(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L0_;

L1_:;
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r51 = dyn names(dx3)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r51)
  // L0(r51)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r51_;
  goto L0_;

L4_:;
  // dr2 = tryDispatchBuiltin.1("[", call5)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_call5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args64);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // if dc1 then L6() else L5(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr2)
    Rsh_Fir_reg_call7_ = Rsh_Fir_reg_dr2_;
    goto L5_;
  }

L5_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r50 = dyn __1(call7, -1)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_call7_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L1(r50)
  // L1(r50)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r50_;
  goto L1_;

L6_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // goto L1(dx2)
  // L1(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner1246119658_17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_as_name;
  SEXP Rsh_Fir_reg_as_name1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1246119658/0: expected 0, got %d", NCAPTURES);

  // as_name = ld `as.name`
  Rsh_Fir_reg_as_name = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // as_name1 = force? as_name
  Rsh_Fir_reg_as_name1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_as_name);
  // checkMissing(as_name1)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_as_name1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // return as_name1
  return Rsh_Fir_reg_as_name1_;
}
SEXP Rsh_Fir_user_function_inner4284372013_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4284372013 dynamic dispatch ([e1, e2])

  return Rsh_Fir_user_version_inner4284372013_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4284372013_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4284372013 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner4284372013/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_e1_;
  SEXP Rsh_Fir_reg_e2_;
  SEXP Rsh_Fir_reg_callGeneric;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_value;
  SEXP Rsh_Fir_reg_value1_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_e5_;
  SEXP Rsh_Fir_reg_e6_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_value2_;
  SEXP Rsh_Fir_reg_value3_;
  SEXP Rsh_Fir_reg_l1;
  SEXP Rsh_Fir_reg____1;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_e7_;
  SEXP Rsh_Fir_reg_e8_;
  SEXP Rsh_Fir_reg_value4_;
  SEXP Rsh_Fir_reg_value5_;

  // Bind parameters
  Rsh_Fir_reg_e1_ = PARAMS[0];
  Rsh_Fir_reg_e2_ = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st e1 = e1
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_e1_, RHO);
  (void)(Rsh_Fir_reg_e1_);
  // st e2 = e2
  Rsh_Fir_store(Rsh_const(CCP, 49), Rsh_Fir_reg_e2_, RHO);
  (void)(Rsh_Fir_reg_e2_);
  // callGeneric = ldf callGeneric
  Rsh_Fir_reg_callGeneric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   __ = ldf `@` in base;
  //   r = dyn __(<sym e1>, <sym .Data>);
  //   return r;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4284372013_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   e3 = ld e2;
  //   e4 = force? e3;
  //   checkMissing(e4);
  //   return e4;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4284372013_1, 0, NULL, CCP, RHO);
  // r3 = dyn callGeneric(p, p1)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_callGeneric, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 4 [r3]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L4_:;
  // st value = r3
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_r3_1, RHO);
  (void)(Rsh_Fir_reg_r3_1);
  // sym = ldf length
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args78);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L0_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args79);
  // if guard1 then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L5_:;
  // value = ld value
  Rsh_Fir_reg_value = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

L6_:;
  // r4 = dyn base(<sym value>)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_1;
  goto L0_;

D2_:;
  // deopt 8 [value]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_value;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L1_:;
  // r13 = `==`(r10, r11)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args81);
  // c = `as.logical`(r13)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args82);
  // if c then L13() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L13()
    goto L13_;
  } else {
  // L2()
    goto L2_;
  }

L7_:;
  // value1 = force? value
  Rsh_Fir_reg_value1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value);
  // checkMissing(value1)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_value1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r6 = dyn length(value1)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_value1_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

L9_:;
  // e5 = ld e1
  Rsh_Fir_reg_e5_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L11() else D4()
  // L11()
  goto L11_;

L10_:;
  // r9 = dyn base1(<sym e1>)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L1(r5, r9)
  // L1(r5, r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r9_1;
  goto L1_;

D3_:;
  // deopt 11 [r6]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 13 [r5, e5]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_e5_;
  Rsh_Fir_deopt(13, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L2_:;
  // value4 = ld value
  Rsh_Fir_reg_value4_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // check L19() else D10()
  // L19()
  goto L19_;

L8_:;
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r6_1;
  goto L0_;

L11_:;
  // e6 = force? e5
  Rsh_Fir_reg_e6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e5_);
  // checkMissing(e6)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_e6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r12 = dyn length1(e6)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_e6_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L12() else D5()
  // L12()
  goto L12_;

L13_:;
  // value2 = ld value
  Rsh_Fir_reg_value2_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // check L14() else D6()
  // L14()
  goto L14_;

D5_:;
  // deopt 16 [r5, r12]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 18 [value2]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_value2_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 28 [value4]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_value4_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L1(r5, r12)
  // L1(r5, r12)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_1;
  goto L1_;

L14_:;
  // value3 = force? value2
  Rsh_Fir_reg_value3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value2_);
  // checkMissing(value3)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_value3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // l = ld e1
  Rsh_Fir_reg_l1 = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // ___ = ldf `@<-`
  Rsh_Fir_reg____1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // check L15() else D7()
  // L15()
  goto L15_;

L19_:;
  // value5 = force? value4
  Rsh_Fir_reg_value5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value4_);
  // checkMissing(value5)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_value5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return value5
  return Rsh_Fir_reg_value5_;

D7_:;
  // deopt 21 [value3, l, value3]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_value3_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_value3_;
  Rsh_Fir_deopt(21, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L15_:;
  // r14 = dyn ___(l, NULL, ".Data", value3)
  SEXP Rsh_Fir_array_args90[4];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args90[2] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args90[3] = Rsh_Fir_reg_value3_;
  SEXP Rsh_Fir_array_arg_names33[4];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_array_arg_names33[3] = R_MissingArg;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1, 4, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L16() else D8()
  // L16()
  goto L16_;

D8_:;
  // deopt 24 [value3, r14]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_value3_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r14_1;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L16_:;
  // st e1 = r14
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_r14_1, RHO);
  (void)(Rsh_Fir_reg_r14_1);
  // e7 = ld e1
  Rsh_Fir_reg_e7_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L17() else D9()
  // L17()
  goto L17_;

D9_:;
  // deopt 26 [e7]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_e7_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L17_:;
  // e8 = force? e7
  Rsh_Fir_reg_e8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e7_);
  // checkMissing(e8)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_e8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return e8
  return Rsh_Fir_reg_e8_;
}
SEXP Rsh_Fir_user_promise_inner4284372013_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r2;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4284372013/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `@` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // r = dyn __(<sym e1>, <sym .Data>)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names27, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r2;
}
SEXP Rsh_Fir_user_promise_inner4284372013_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_e3_;
  SEXP Rsh_Fir_reg_e4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4284372013/0: expected 0, got %d", NCAPTURES);

  // e3 = ld e2
  Rsh_Fir_reg_e3_ = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // e4 = force? e3
  Rsh_Fir_reg_e4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e3_);
  // checkMissing(e4)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_e4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // return e4
  return Rsh_Fir_reg_e4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
