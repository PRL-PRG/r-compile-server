#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1226315320_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1226315320_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1226315320_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1226315320_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1226315320_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1226315320_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1226315320_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1226315320_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1226315320_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1226315320_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1226315320_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1226315320_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  // r = clos inner1226315320
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1226315320_, RHO, CCP);
  // st `anyDuplicated.array` = r
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
SEXP Rsh_Fir_user_function_inner1226315320_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1226315320 dynamic dispatch ([x, incomparables, MARGIN, fromLast, `...`])

  return Rsh_Fir_user_version_inner1226315320_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1226315320_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1226315320 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner1226315320/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_incomparables;
  SEXP Rsh_Fir_reg_MARGIN;
  SEXP Rsh_Fir_reg_fromLast;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_incomparables_isMissing;
  SEXP Rsh_Fir_reg_incomparables_orDefault;
  SEXP Rsh_Fir_reg_MARGIN_isMissing;
  SEXP Rsh_Fir_reg_MARGIN_orDefault;
  SEXP Rsh_Fir_reg_fromLast_isMissing;
  SEXP Rsh_Fir_reg_fromLast_orDefault;
  SEXP Rsh_Fir_reg_isFALSE;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg__NotYetUsed;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_dim;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_MARGIN1_;
  SEXP Rsh_Fir_reg_MARGIN2_;
  SEXP Rsh_Fir_reg_ndim;
  SEXP Rsh_Fir_reg_ndim1_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_ndim2_;
  SEXP Rsh_Fir_reg_ndim3_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_MARGIN5_;
  SEXP Rsh_Fir_reg_MARGIN6_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_prod;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_asplit;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_anyDuplicated_default;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r38_;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_incomparables = PARAMS[1];
  Rsh_Fir_reg_MARGIN = PARAMS[2];
  Rsh_Fir_reg_fromLast = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // incomparables_isMissing = missing.0(incomparables)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_incomparables;
  Rsh_Fir_reg_incomparables_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if incomparables_isMissing then L0(FALSE) else L0(incomparables)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_incomparables_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_incomparables_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(incomparables)
    Rsh_Fir_reg_incomparables_orDefault = Rsh_Fir_reg_incomparables;
    goto L0_;
  }

L0_:;
  // st incomparables = incomparables_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_incomparables_orDefault, RHO);
  (void)(Rsh_Fir_reg_incomparables_orDefault);
  // MARGIN_isMissing = missing.0(MARGIN)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_MARGIN;
  Rsh_Fir_reg_MARGIN_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if MARGIN_isMissing then L1(1) else L1(MARGIN)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_MARGIN_isMissing)) {
  // L1(1)
    Rsh_Fir_reg_MARGIN_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(MARGIN)
    Rsh_Fir_reg_MARGIN_orDefault = Rsh_Fir_reg_MARGIN;
    goto L1_;
  }

L1_:;
  // st MARGIN = MARGIN_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_MARGIN_orDefault, RHO);
  (void)(Rsh_Fir_reg_MARGIN_orDefault);
  // fromLast_isMissing = missing.0(fromLast)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_fromLast;
  Rsh_Fir_reg_fromLast_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if fromLast_isMissing then L2(FALSE) else L2(fromLast)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_fromLast_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_fromLast_orDefault = Rsh_const(CCP, 2);
    goto L2_;
  } else {
  // L2(fromLast)
    Rsh_Fir_reg_fromLast_orDefault = Rsh_Fir_reg_fromLast;
    goto L2_;
  }

L2_:;
  // st fromLast = fromLast_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_fromLast_orDefault, RHO);
  (void)(Rsh_Fir_reg_fromLast_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // isFALSE = ldf isFALSE
  Rsh_Fir_reg_isFALSE = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // sym = ldf dim
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf dim in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L5_:;
  // st dx = r6
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L6_:;
  // st ndim = r9
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // sym2 = ldf any
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base2 = ldf any in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard2 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L7_:;
  // c1 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args6);
  // if c1 then L34() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L34()
    goto L34_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // ndim2 = ld ndim
  Rsh_Fir_reg_ndim2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L38() else D13()
  // L38()
  goto L38_;

L10_:;
  // c16 = `as.logical`(c4)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args7);
  // if c16 then L49() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L49()
    goto L49_;
  } else {
  // L13()
    goto L13_;
  }

L11_:;
  // r31 = `>`(r27, 1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args8);
  // c13 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args9);
  // c14 = `&&`(c7, c13)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args10);
  // goto L10(c14)
  // L10(c14)
  Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c14_;
  goto L10_;

L12_:;
  // prod = ldf prod in base
  Rsh_Fir_reg_prod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r30 = dyn prod(dx9)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L47() else D16()
  // L47()
  goto L47_;

L13_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L53() else D19()
  // L53()
  goto L53_;

L14_:;
  // st temp = r35
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // anyDuplicated_default = ldf `anyDuplicated.default`
  Rsh_Fir_reg_anyDuplicated_default = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L54() else D20()
  // L54()
  goto L54_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p = prom<V +>{
  //   incomparables1 = ld incomparables;
  //   incomparables2 = force? incomparables1;
  //   checkMissing(incomparables2);
  //   return incomparables2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1226315320_, 0, NULL, CCP, RHO);
  // r1 = dyn isFALSE(p)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isFALSE, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L16_:;
  // r2 = `!`(r1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args14);
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args15);
  // if c then L17() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L17()
    goto L17_;
  } else {
  // L3()
    goto L3_;
  }

L17_:;
  // _NotYetUsed = ldf `.NotYetUsed`
  Rsh_Fir_reg__NotYetUsed = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L18() else D2()
  // L18()
  goto L18_;

D2_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // r3 = dyn _NotYetUsed("incomparables != FALSE")
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__NotYetUsed, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L19() else D3()
  // L19()
  goto L19_;

D3_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L4()
  // L4()
  goto L4_;

L21_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L23() else D4()
  // L23()
  goto L23_;

L22_:;
  // r5 = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L5(r5)
  // L5(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L5_;

D4_:;
  // deopt 13 [x1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L23_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r7 = dyn dim(x2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L24() else D5()
  // L24()
  goto L24_;

D5_:;
  // deopt 16 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L5(r7)
  // L5(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L5_;

L25_:;
  // dx = ld dx
  Rsh_Fir_reg_dx = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L27() else D6()
  // L27()
  goto L27_;

L26_:;
  // r8 = dyn base1(<sym dx>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L6(r8)
  // L6(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L6_;

D6_:;
  // deopt 20 [dx]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_dx;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L27_:;
  // dx1 = force? dx
  Rsh_Fir_reg_dx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dx);
  // checkMissing(dx1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r10 = dyn length(dx1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L28() else D7()
  // L28()
  goto L28_;

D7_:;
  // deopt 23 [r10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L6(r10)
  // L6(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L6_;

L29_:;
  // MARGIN1 = ld MARGIN
  Rsh_Fir_reg_MARGIN1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L31() else D8()
  // L31()
  goto L31_;

L30_:;
  // r11 = dyn base2(<lang `>`(MARGIN, ndim)>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L7(r11)
  // L7(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L7_;

D8_:;
  // deopt 27 [MARGIN1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_MARGIN1_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L31_:;
  // MARGIN2 = force? MARGIN1
  Rsh_Fir_reg_MARGIN2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN1_);
  // checkMissing(MARGIN2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_MARGIN2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // ndim = ld ndim
  Rsh_Fir_reg_ndim = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L32() else D9()
  // L32()
  goto L32_;

D9_:;
  // deopt 28 [MARGIN2, ndim]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_MARGIN2_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_ndim;
  Rsh_Fir_deopt(28, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L32_:;
  // ndim1 = force? ndim
  Rsh_Fir_reg_ndim1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ndim);
  // checkMissing(ndim1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_ndim1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // r13 = `>`(MARGIN2, ndim1)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_MARGIN2_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_ndim1_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args26);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r14 = dyn any(r13)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L33() else D10()
  // L33()
  goto L33_;

D10_:;
  // deopt 32 [r14]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L7(r14)
  // L7(r14)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r14_;
  goto L7_;

L34_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L35() else D11()
  // L35()
  goto L35_;

D11_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // p5 = prom<V +>{
  //   gettextf = ldf gettextf;
  //   p2 = prom<V +>{
  //     paste = ldf paste;
  //     p1 = prom<V +>{
  //       MARGIN3 = ld MARGIN;
  //       MARGIN4 = force? MARGIN3;
  //       checkMissing(MARGIN4);
  //       return MARGIN4;
  //     };
  //     r16 = dyn paste[, collapse](p1, ",");
  //     return r16;
  //   };
  //   p4 = prom<V +>{
  //     paste1 = ldf paste;
  //     p3 = prom<V +>{
  //       dx2 = ld dx;
  //       dx3 = force? dx2;
  //       checkMissing(dx3);
  //       return dx3;
  //     };
  //     r19 = dyn paste1[, collapse](p3, ",");
  //     return r19;
  //   };
  //   r21 = dyn gettextf("MARGIN = %s is invalid for dim = %s", p2, p4);
  //   return r21;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1226315320_1, 0, NULL, CCP, RHO);
  // r23 = dyn stop[, domain](p5, NA_LGL)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L36() else D12()
  // L36()
  goto L36_;

D12_:;
  // deopt 38 [r23]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L9()
  // L9()
  goto L9_;

D13_:;
  // deopt 41 [ndim2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_ndim2_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L38_:;
  // ndim3 = force? ndim2
  Rsh_Fir_reg_ndim3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ndim2_);
  // checkMissing(ndim3)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_ndim3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // r25 = `>`(ndim3, 1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_ndim3_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args35);
  // c2 = `as.logical`(r25)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args36);
  // if c2 then L39() else L10(c2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L39()
    goto L39_;
  } else {
  // L10(c2)
    Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c2_;
    goto L10_;
  }

L39_:;
  // sym3 = ldf prod
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base3 = ldf prod in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard3 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L40_:;
  // dx4 = ld dx
  Rsh_Fir_reg_dx4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L42() else D14()
  // L42()
  goto L42_;

L41_:;
  // r26 = dyn base3(<lang `[`(dx, `-`(MARGIN))>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L11(c2, r26)
  // L11(c2, r26)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L11_;

D14_:;
  // deopt 47 [c2, dx4]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_dx4_;
  Rsh_Fir_deopt(47, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L42_:;
  // dx5 = force? dx4
  Rsh_Fir_reg_dx5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dx4_);
  // checkMissing(dx5)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dx5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(dx5)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args40);
  // if c8 then L43() else L44(c2, dx5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L43()
    goto L43_;
  } else {
  // L44(c2, dx5)
    Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c2_;
    Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx5_;
    goto L44_;
  }

L43_:;
  // dr = tryDispatchBuiltin.1("[", dx5)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args41);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if dc then L45() else L44(c2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L45()
    goto L45_;
  } else {
  // L44(c2, dr)
    Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c2_;
    Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dr;
    goto L44_;
  }

L44_:;
  // MARGIN5 = ld MARGIN
  Rsh_Fir_reg_MARGIN5_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L46() else D15()
  // L46()
  goto L46_;

L45_:;
  // dx8 = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L12(c2, dx8)
  // L12(c2, dx8)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L12_;

D15_:;
  // deopt 49 [c10, dx7, MARGIN5]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_MARGIN5_;
  Rsh_Fir_deopt(49, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L46_:;
  // MARGIN6 = force? MARGIN5
  Rsh_Fir_reg_MARGIN6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN5_);
  // checkMissing(MARGIN6)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_MARGIN6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // r28 = `-`(<missing>, MARGIN6)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_MARGIN6_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args45);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r29 = dyn __(dx7, r28)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L12(c10, r29)
  // L12(c10, r29)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r29_;
  goto L12_;

D16_:;
  // deopt 54 [c12, r30]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(54, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L11(c12, r30)
  // L11(c12, r30)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r30_;
  goto L11_;

L49_:;
  // asplit = ldf asplit
  Rsh_Fir_reg_asplit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L50() else D17()
  // L50()
  goto L50_;

D17_:;
  // deopt 59 []
  Rsh_Fir_deopt(59, 0, NULL, CCP, RHO);
  return R_NilValue;

L50_:;
  // p6 = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1226315320_6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   MARGIN7 = ld MARGIN;
  //   MARGIN8 = force? MARGIN7;
  //   checkMissing(MARGIN8);
  //   return MARGIN8;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1226315320_7, 0, NULL, CCP, RHO);
  // r34 = dyn asplit(p6, p7)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_asplit, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L51() else D18()
  // L51()
  goto L51_;

D18_:;
  // deopt 62 [r34]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L14(r34)
  // L14(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L14_;

D19_:;
  // deopt 63 [x5]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L53_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // goto L14(x6)
  // L14(x6)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_x6_;
  goto L14_;

D20_:;
  // deopt 67 []
  Rsh_Fir_deopt(67, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // p8 = prom<V +>{
  //   temp = ld temp;
  //   temp1 = force? temp;
  //   checkMissing(temp1);
  //   return temp1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1226315320_8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   fromLast1 = ld fromLast;
  //   fromLast2 = force? fromLast1;
  //   checkMissing(fromLast2);
  //   return fromLast2;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1226315320_9, 0, NULL, CCP, RHO);
  // r38 = dyn anyDuplicated_default[, fromLast](p8, p9)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyDuplicated_default, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L55() else D21()
  // L55()
  goto L55_;

D21_:;
  // deopt 71 [r38]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L55_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r38
  return Rsh_Fir_reg_r38_;
}
SEXP Rsh_Fir_user_promise_inner1226315320_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_incomparables1_;
  SEXP Rsh_Fir_reg_incomparables2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1226315320/0: expected 0, got %d", NCAPTURES);

  // incomparables1 = ld incomparables
  Rsh_Fir_reg_incomparables1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // incomparables2 = force? incomparables1
  Rsh_Fir_reg_incomparables2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_incomparables1_);
  // checkMissing(incomparables2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_incomparables2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return incomparables2
  return Rsh_Fir_reg_incomparables2_;
}
SEXP Rsh_Fir_user_promise_inner1226315320_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r21_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1226315320/0: expected 0, got %d", NCAPTURES);

  // gettextf = ldf gettextf
  Rsh_Fir_reg_gettextf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // p2 = prom<V +>{
  //   paste = ldf paste;
  //   p1 = prom<V +>{
  //     MARGIN3 = ld MARGIN;
  //     MARGIN4 = force? MARGIN3;
  //     checkMissing(MARGIN4);
  //     return MARGIN4;
  //   };
  //   r16 = dyn paste[, collapse](p1, ",");
  //   return r16;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1226315320_2, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   paste1 = ldf paste;
  //   p3 = prom<V +>{
  //     dx2 = ld dx;
  //     dx3 = force? dx2;
  //     checkMissing(dx3);
  //     return dx3;
  //   };
  //   r19 = dyn paste1[, collapse](p3, ",");
  //   return r19;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1226315320_4, 0, NULL, CCP, RHO);
  // r21 = dyn gettextf("MARGIN = %s is invalid for dim = %s", p2, p4)
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args32[2] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf, 3, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names11, CCP, RHO);
  // return r21
  return Rsh_Fir_reg_r21_;
}
SEXP Rsh_Fir_user_promise_inner1226315320_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1226315320/0: expected 0, got %d", NCAPTURES);

  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // p1 = prom<V +>{
  //   MARGIN3 = ld MARGIN;
  //   MARGIN4 = force? MARGIN3;
  //   checkMissing(MARGIN4);
  //   return MARGIN4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1226315320_3, 0, NULL, CCP, RHO);
  // r16 = dyn paste[, collapse](p1, ",")
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names9, CCP, RHO);
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_user_promise_inner1226315320_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_MARGIN3_;
  SEXP Rsh_Fir_reg_MARGIN4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1226315320/0: expected 0, got %d", NCAPTURES);

  // MARGIN3 = ld MARGIN
  Rsh_Fir_reg_MARGIN3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // MARGIN4 = force? MARGIN3
  Rsh_Fir_reg_MARGIN4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN3_);
  // checkMissing(MARGIN4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_MARGIN4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return MARGIN4
  return Rsh_Fir_reg_MARGIN4_;
}
SEXP Rsh_Fir_user_promise_inner1226315320_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paste1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1226315320/0: expected 0, got %d", NCAPTURES);

  // paste1 = ldf paste
  Rsh_Fir_reg_paste1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // p3 = prom<V +>{
  //   dx2 = ld dx;
  //   dx3 = force? dx2;
  //   checkMissing(dx3);
  //   return dx3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1226315320_5, 0, NULL, CCP, RHO);
  // r19 = dyn paste1[, collapse](p3, ",")
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste1_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names10, CCP, RHO);
  // return r19
  return Rsh_Fir_reg_r19_;
}
SEXP Rsh_Fir_user_promise_inner1226315320_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1226315320/0: expected 0, got %d", NCAPTURES);

  // dx2 = ld dx
  Rsh_Fir_reg_dx2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // dx3 = force? dx2
  Rsh_Fir_reg_dx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dx2_);
  // checkMissing(dx3)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return dx3
  return Rsh_Fir_reg_dx3_;
}
SEXP Rsh_Fir_user_promise_inner1226315320_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1226315320/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_user_promise_inner1226315320_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_MARGIN7_;
  SEXP Rsh_Fir_reg_MARGIN8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1226315320/0: expected 0, got %d", NCAPTURES);

  // MARGIN7 = ld MARGIN
  Rsh_Fir_reg_MARGIN7_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // MARGIN8 = force? MARGIN7
  Rsh_Fir_reg_MARGIN8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN7_);
  // checkMissing(MARGIN8)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_MARGIN8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return MARGIN8
  return Rsh_Fir_reg_MARGIN8_;
}
SEXP Rsh_Fir_user_promise_inner1226315320_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_temp;
  SEXP Rsh_Fir_reg_temp1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1226315320/0: expected 0, got %d", NCAPTURES);

  // temp = ld temp
  Rsh_Fir_reg_temp = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // temp1 = force? temp
  Rsh_Fir_reg_temp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_temp);
  // checkMissing(temp1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_temp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return temp1
  return Rsh_Fir_reg_temp1_;
}
SEXP Rsh_Fir_user_promise_inner1226315320_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fromLast1_;
  SEXP Rsh_Fir_reg_fromLast2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1226315320/0: expected 0, got %d", NCAPTURES);

  // fromLast1 = ld fromLast
  Rsh_Fir_reg_fromLast1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // fromLast2 = force? fromLast1
  Rsh_Fir_reg_fromLast2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fromLast1_);
  // checkMissing(fromLast2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_fromLast2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // return fromLast2
  return Rsh_Fir_reg_fromLast2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
