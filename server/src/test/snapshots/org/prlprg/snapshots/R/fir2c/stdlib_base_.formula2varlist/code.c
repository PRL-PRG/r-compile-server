#include <runtime.h>
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_from_R_inner2237582675_(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST);
SEXP Rsh_Fir_user_function_inner2237582675_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2237582675_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2237582675_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2237582675_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2237582675_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2237582675_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2237582675_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2237582675_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2237582675_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2237582675_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2237582675_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2237582675_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2237582675_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_from_R_main(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST) {
  // FIR main dynamic dispatch from R ([])
  if (TYPEOF(PARAMS_LIST) != VECSXP) { Rf_PrintValue(PARAMS_LIST); Rsh_error("FIŘ expected a list for params"); }
  int NPARAMS = Rf_length(PARAMS_LIST);
  SEXP const *PARAMS = STDVEC_DATAPTR(PARAMS_LIST);
  return Rsh_Fir_user_function_main(CCP, RHO, NPARAMS, PARAMS, NULL);
}
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
  // r = clos inner2237582675
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2237582675_, RHO, CCP);
  // st `.formula2varlist` = r
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
SEXP Rsh_Fir_user_function_from_R_inner2237582675_(SEXP CCP, SEXP RHO, SEXP PARAMS_LIST) {
  // FIR inner2237582675 dynamic dispatch from R ([formula, data, warnLHS, ignoreLHS])
  if (TYPEOF(PARAMS_LIST) != VECSXP) { Rf_PrintValue(PARAMS_LIST); Rsh_error("FIŘ expected a list for params"); }
  int NPARAMS = Rf_length(PARAMS_LIST);
  SEXP const *PARAMS = STDVEC_DATAPTR(PARAMS_LIST);
  return Rsh_Fir_user_function_inner2237582675_(CCP, RHO, NPARAMS, PARAMS, NULL);
}
SEXP Rsh_Fir_user_function_inner2237582675_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2237582675 dynamic dispatch ([formula, data, warnLHS, ignoreLHS])

  return Rsh_Fir_user_version_inner2237582675_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2237582675_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2237582675 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner2237582675/0: expected 4, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_formula;
  SEXP Rsh_Fir_reg_data;
  SEXP Rsh_Fir_reg_warnLHS;
  SEXP Rsh_Fir_reg_ignoreLHS;
  SEXP Rsh_Fir_reg_warnLHS_isMissing;
  SEXP Rsh_Fir_reg_warnLHS_orDefault;
  SEXP Rsh_Fir_reg_ignoreLHS_isMissing;
  SEXP Rsh_Fir_reg_ignoreLHS_orDefault;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_formula1_;
  SEXP Rsh_Fir_reg_formula2_;
  SEXP Rsh_Fir_reg_inherits;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_data1_;
  SEXP Rsh_Fir_reg_data2_;
  SEXP Rsh_Fir_reg_is_list;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_data3_;
  SEXP Rsh_Fir_reg_data4_;
  SEXP Rsh_Fir_reg_is_environment;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_as_data_frame;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_formula3_;
  SEXP Rsh_Fir_reg_formula4_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_warnLHS3_;
  SEXP Rsh_Fir_reg_warnLHS4_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_ignoreLHS1_;
  SEXP Rsh_Fir_reg_ignoreLHS2_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_warning1_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_ignoreLHS3_;
  SEXP Rsh_Fir_reg_ignoreLHS4_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_formula5_;
  SEXP Rsh_Fir_reg_formula6_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_formula8_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_formula9_;
  SEXP Rsh_Fir_reg_formula10_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_formula12_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_formula13_;
  SEXP Rsh_Fir_reg_formula14_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_formula16_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_quote;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_eval;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_eval1_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_fterms2_;
  SEXP Rsh_Fir_reg_fterms3_;
  SEXP Rsh_Fir_reg_attr1_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_names__;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_ans;
  SEXP Rsh_Fir_reg_ans1_;

  // Bind parameters
  Rsh_Fir_reg_formula = PARAMS[0];
  Rsh_Fir_reg_data = PARAMS[1];
  Rsh_Fir_reg_warnLHS = PARAMS[2];
  Rsh_Fir_reg_ignoreLHS = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st formula = formula
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_formula, RHO);
  (void)(Rsh_Fir_reg_formula);
  // st data = data
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_data, RHO);
  (void)(Rsh_Fir_reg_data);
  // warnLHS_isMissing = missing.0(warnLHS)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_warnLHS;
  Rsh_Fir_reg_warnLHS_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if warnLHS_isMissing then L0(TRUE) else L0(warnLHS)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_warnLHS_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_warnLHS_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(warnLHS)
    Rsh_Fir_reg_warnLHS_orDefault = Rsh_Fir_reg_warnLHS;
    goto L0_;
  }

L0_:;
  // st warnLHS = warnLHS_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_warnLHS_orDefault, RHO);
  (void)(Rsh_Fir_reg_warnLHS_orDefault);
  // ignoreLHS_isMissing = missing.0(ignoreLHS)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_ignoreLHS;
  Rsh_Fir_reg_ignoreLHS_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if ignoreLHS_isMissing then L1() else L2(ignoreLHS)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ignoreLHS_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(ignoreLHS)
    Rsh_Fir_reg_ignoreLHS_orDefault = Rsh_Fir_reg_ignoreLHS;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   warnLHS1 = ld warnLHS;
  //   warnLHS2 = force? warnLHS1;
  //   checkMissing(warnLHS2);
  //   return warnLHS2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2237582675_, 0, NULL, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_ignoreLHS_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st ignoreLHS = ignoreLHS_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_ignoreLHS_orDefault, RHO);
  (void)(Rsh_Fir_reg_ignoreLHS_orDefault);
  // sym = ldf inherits
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf inherits in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L3_:;
  // r4 = `!`(r2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args4);
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args5);
  // if c then L34() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L34()
    goto L34_;
  } else {
  // L4()
    goto L4_;
  }

L30_:;
  // formula1 = ld formula
  Rsh_Fir_reg_formula1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L32() else D0()
  // L32()
  goto L32_;

L31_:;
  // r1 = dyn base(<sym formula>, "formula")
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, RHO);
  // goto L3(r1)
  // L3(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L3_;

D0_:;
  // deopt 2 [formula1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_formula1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // sym1 = ldf `is.list`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base1 = ldf `is.list` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard1 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L32_:;
  // formula2 = force? formula1
  Rsh_Fir_reg_formula2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula1_);
  // checkMissing(formula2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_formula2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r3 = dyn inherits(formula2, "formula", FALSE)
  SEXP Rsh_Fir_array_args9[3];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_formula2_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, RHO);
  // check L33() else D1()
  // L33()
  goto L33_;

L34_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L35() else D2()
  // L35()
  goto L35_;

D1_:;
  // deopt 7 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // r10 = `!`(r8)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args10);
  // c1 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args11);
  // if c1 then L42() else L7(c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L42()
    goto L42_;
  } else {
  // L7(c1)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c1_;
    goto L7_;
  }

L33_:;
  // goto L3(r3)
  // L3(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L3_;

L35_:;
  // r5 = dyn stop("'formula' must be a formula")
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, RHO);
  // check L36() else D3()
  // L36()
  goto L36_;

L38_:;
  // data1 = ld data
  Rsh_Fir_reg_data1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L40() else D4()
  // L40()
  goto L40_;

L39_:;
  // r7 = dyn base1(<sym data>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, RHO);
  // goto L6(r7)
  // L6(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L6_;

D3_:;
  // deopt 12 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 17 [data1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_data1_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // c10 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args14);
  // if c10 then L48() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L48()
    goto L48_;
  } else {
  // L9()
    goto L9_;
  }

L36_:;
  // goto L5()
  // L5()
  goto L5_;

L40_:;
  // data2 = force? data1
  Rsh_Fir_reg_data2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data1_);
  // checkMissing(data2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_data2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // is_list = ldf `is.list` in base
  Rsh_Fir_reg_is_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r9 = dyn is_list(data2)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_data2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_list, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names4, RHO);
  // check L41() else D5()
  // L41()
  goto L41_;

L42_:;
  // sym2 = ldf `is.environment`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base2 = ldf `is.environment` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard2 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

D5_:;
  // deopt 20 [r9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L8_:;
  // r14 = `!`(r12)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args18);
  // c7 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args19);
  // c8 = `&&`(c6, c7)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args20);
  // goto L7(c8)
  // L7(c8)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c8_;
  goto L7_;

L9_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard3 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L41_:;
  // goto L6(r9)
  // L6(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L6_;

L43_:;
  // data3 = ld data
  Rsh_Fir_reg_data3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L45() else D6()
  // L45()
  goto L45_;

L44_:;
  // r11 = dyn base2(<sym data>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names5, RHO);
  // goto L8(c1, r11)
  // L8(c1, r11)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L8_;

L48_:;
  // as_data_frame = ldf `as.data.frame`
  Rsh_Fir_reg_as_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L49() else D8()
  // L49()
  goto L49_;

D6_:;
  // deopt 24 [c1, data3]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_data3_;
  Rsh_Fir_deopt(24, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // r21 = `==`(r19, 3.0)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args23);
  // c11 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args24);
  // if c11 then L56() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L56()
    goto L56_;
  } else {
  // L12()
    goto L12_;
  }

L45_:;
  // data4 = force? data3
  Rsh_Fir_reg_data4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data3_);
  // checkMissing(data4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_data4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // is_environment = ldf `is.environment` in base
  Rsh_Fir_reg_is_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r13 = dyn is_environment(data4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_data4_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_environment, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names6, RHO);
  // check L46() else D7()
  // L46()
  goto L46_;

L49_:;
  // p1 = prom<V +>{
  //   data5 = ld data;
  //   data6 = force? data5;
  //   checkMissing(data6);
  //   return data6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2237582675_1, 0, NULL, CCP, RHO);
  // r16 = dyn as_data_frame(p1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_data_frame, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names7, RHO);
  // check L50() else D9()
  // L50()
  goto L50_;

L52_:;
  // formula3 = ld formula
  Rsh_Fir_reg_formula3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L54() else D10()
  // L54()
  goto L54_;

L53_:;
  // r18 = dyn base3(<sym formula>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names8, RHO);
  // goto L11(r18)
  // L11(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L11_;

D7_:;
  // deopt 27 [c1, r13]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 33 [r16]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 39 [formula3]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_formula3_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L20()
  // L20()
  goto L20_;

L20_:;
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard4 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L46_:;
  // goto L8(c1, r13)
  // L8(c1, r13)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L8_;

L50_:;
  // st data = r16
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // goto L10()
  // L10()
  goto L10_;

L54_:;
  // formula4 = force? formula3
  Rsh_Fir_reg_formula4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula3_);
  // checkMissing(formula4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_formula4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r20 = dyn length(formula4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_formula4_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names9, RHO);
  // check L55() else D11()
  // L55()
  goto L55_;

L56_:;
  // warnLHS3 = ld warnLHS
  Rsh_Fir_reg_warnLHS3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L57() else D12()
  // L57()
  goto L57_;

D11_:;
  // deopt 42 [r20]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 45 [warnLHS3]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_warnLHS3_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L21_:;
  // r31 = `>`(r28, 1)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args33);
  // c17 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args34);
  // if c17 then L82() else L23(c17)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L82()
    goto L82_;
  } else {
  // L23(c17)
    Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c17_;
    goto L23_;
  }

L55_:;
  // goto L11(r20)
  // L11(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L11_;

L57_:;
  // warnLHS4 = force? warnLHS3
  Rsh_Fir_reg_warnLHS4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_warnLHS3_);
  // checkMissing(warnLHS4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_warnLHS4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // c12 = `as.logical`(warnLHS4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_warnLHS4_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args36);
  // if c12 then L58() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L58()
    goto L58_;
  } else {
  // L13()
    goto L13_;
  }

L75_:;
  // formula9 = ld formula
  Rsh_Fir_reg_formula9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L77() else D20()
  // L77()
  goto L77_;

L76_:;
  // r27 = dyn base4(<lang `[[`(formula, 2.0)>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names10, RHO);
  // goto L21(r27)
  // L21(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L21_;

D20_:;
  // deopt 73 [formula9]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_formula9_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L16()
  // L16()
  goto L16_;

L16_:;
  // ignoreLHS3 = ld ignoreLHS
  Rsh_Fir_reg_ignoreLHS3_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L67() else D18()
  // L67()
  goto L67_;

L23_:;
  // c36 = `as.logical`(c19)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args38);
  // if c36 then L93() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L93()
    goto L93_;
  } else {
  // L27()
    goto L27_;
  }

L58_:;
  // ignoreLHS1 = ld ignoreLHS
  Rsh_Fir_reg_ignoreLHS1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L59() else D13()
  // L59()
  goto L59_;

L77_:;
  // formula10 = force? formula9
  Rsh_Fir_reg_formula10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula9_);
  // checkMissing(formula10)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_formula10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(formula10)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_formula10_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args40);
  // if c16 then L78() else L79(formula10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L78()
    goto L78_;
  } else {
  // L79(formula10)
    Rsh_Fir_reg_formula12_ = Rsh_Fir_reg_formula10_;
    goto L79_;
  }

L82_:;
  // formula13 = ld formula
  Rsh_Fir_reg_formula13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L83() else D22()
  // L83()
  goto L83_;

D13_:;
  // deopt 47 [ignoreLHS1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_ignoreLHS1_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 59 [ignoreLHS3]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_ignoreLHS3_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 82 [c17, formula13]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_formula13_;
  Rsh_Fir_deopt(82, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L22_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r30 = dyn length1(dx5)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names11, RHO);
  // check L81() else D21()
  // L81()
  goto L81_;

L27_:;
  // __5 = ldf `::`
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L97() else D25()
  // L97()
  goto L97_;

L28_:;
  // ans = ld ans
  Rsh_Fir_reg_ans = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L108() else D34()
  // L108()
  goto L108_;

L59_:;
  // ignoreLHS2 = force? ignoreLHS1
  Rsh_Fir_reg_ignoreLHS2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignoreLHS1_);
  // checkMissing(ignoreLHS2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_ignoreLHS2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // c13 = `as.logical`(ignoreLHS2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_ignoreLHS2_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args43);
  // if c13 then L60() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L60()
    goto L60_;
  } else {
  // L14()
    goto L14_;
  }

L67_:;
  // ignoreLHS4 = force? ignoreLHS3
  Rsh_Fir_reg_ignoreLHS4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignoreLHS3_);
  // checkMissing(ignoreLHS4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_ignoreLHS4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c14 = `as.logical`(ignoreLHS4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_ignoreLHS4_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args45);
  // if c14 then L68() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L68()
    goto L68_;
  } else {
  // L17()
    goto L17_;
  }

L78_:;
  // dr2 = tryDispatchBuiltin.1("[[", formula10)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_formula10_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args46);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if dc1 then L80() else L79(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L80()
    goto L80_;
  } else {
  // L79(dr2)
    Rsh_Fir_reg_formula12_ = Rsh_Fir_reg_dr2_;
    goto L79_;
  }

L79_:;
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r29 = dyn __1(formula12, 2.0)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_formula12_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names12, RHO);
  // goto L22(r29)
  // L22(r29)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r29_;
  goto L22_;

L83_:;
  // formula14 = force? formula13
  Rsh_Fir_reg_formula14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula13_);
  // checkMissing(formula14)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_formula14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c20 = `is.object`(formula14)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_formula14_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args50);
  // if c20 then L84() else L85(c17, formula14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L84()
    goto L84_;
  } else {
  // L85(c17, formula14)
    Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c17_;
    Rsh_Fir_reg_formula16_ = Rsh_Fir_reg_formula14_;
    goto L85_;
  }

L93_:;
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L94() else D23()
  // L94()
  goto L94_;

D21_:;
  // deopt 79 [r30]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 95 []
  Rsh_Fir_deopt(95, 0, NULL, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 102 []
  Rsh_Fir_deopt(102, 0, NULL, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 129 [ans]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_ans;
  Rsh_Fir_deopt(129, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L14_:;
  // warning1 = ldf warning
  Rsh_Fir_reg_warning1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L64() else D16()
  // L64()
  goto L64_;

L15_:;
  // goto L16()
  // L16()
  goto L16_;

L17_:;
  // goto L19(NULL)
  // L19(NULL)
  Rsh_Fir_reg_dx2_ = Rsh_const(CCP, 25);
  goto L19_;

L19_:;
  // goto L20()
  // L20()
  goto L20_;

L24_:;
  // c25 = `is.object`(dx7)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args51);
  // if c25 then L87() else L88(c24, dx7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L87()
    goto L87_;
  } else {
  // L88(c24, dx7)
    Rsh_Fir_reg_c27_ = Rsh_Fir_reg_c24_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    goto L88_;
  }

L60_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L61() else D14()
  // L61()
  goto L61_;

L68_:;
  // formula5 = ld formula
  Rsh_Fir_reg_formula5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L69() else D19()
  // L69()
  goto L69_;

L80_:;
  // dx4 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L22(dx4)
  // L22(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L22_;

L81_:;
  // goto L21(r30)
  // L21(r30)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r30_;
  goto L21_;

L84_:;
  // dr4 = tryDispatchBuiltin.1("[[", formula14)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_formula14_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args53);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if dc2 then L86() else L85(c17, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L86()
    goto L86_;
  } else {
  // L85(c17, dr4)
    Rsh_Fir_reg_c22_ = Rsh_Fir_reg_c17_;
    Rsh_Fir_reg_formula16_ = Rsh_Fir_reg_dr4_;
    goto L85_;
  }

L85_:;
  // __2 = ldf `[[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r32 = dyn __2(formula16, 2.0)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_formula16_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names13, RHO);
  // goto L24(c22, r32)
  // L24(c22, r32)
  Rsh_Fir_reg_c24_ = Rsh_Fir_reg_c22_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r32_;
  goto L24_;

L94_:;
  // p2 = prom<V +>{
  //   formula17 = ld formula;
  //   formula18 = force? formula17;
  //   checkMissing(formula18);
  //   c37 = `is.object`(formula18);
  //   if c37 then L1() else L2(formula18);
  // L0(dx16):
  //   return dx16;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("[[", formula18);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(formula20):
  //   __4 = ldf `[[` in base;
  //   r38 = dyn __4(formula20, 2.0);
  //   goto L0(r38);
  // L3():
  //   dx15 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx15);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2237582675_2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   data7 = ld data;
  //   data8 = force? data7;
  //   checkMissing(data8);
  //   return data8;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2237582675_3, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   environment = ldf environment;
  //   p4 = prom<V +>{
  //     formula21 = ld formula;
  //     formula22 = force? formula21;
  //     checkMissing(formula22);
  //     return formula22;
  //   };
  //   r42 = dyn environment(p4);
  //   return r42;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2237582675_4, 0, NULL, CCP, RHO);
  // r44 = dyn eval(p2, p3, p5)
  SEXP Rsh_Fir_array_args65[3];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args65[2] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 3, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names16, RHO);
  // check L95() else D24()
  // L95()
  goto L95_;

L97_:;
  // r46 = dyn __5("stats", "terms")
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names17, RHO);
  // check L98() else D26()
  // L98()
  goto L98_;

L108_:;
  // ans1 = force? ans
  Rsh_Fir_reg_ans1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ans);
  // checkMissing(ans1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_ans1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ans1
  return Rsh_Fir_reg_ans1_;

D14_:;
  // deopt 50 []
  Rsh_Fir_deopt(50, 0, NULL, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 61 [formula5]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_formula5_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 99 [r44]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 105 [r46]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L25_:;
  // sym5 = ldf quote
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base5 = ldf quote in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args68);
  // if guard5 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L61_:;
  // r22 = dyn warning("Unexpected LHS in 'formula' has been ignored.")
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names18, RHO);
  // check L62() else D15()
  // L62()
  goto L62_;

L64_:;
  // r24 = dyn warning1("Unexpected LHS in 'formula' has been combined with RHS.")
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning1_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names19, RHO);
  // check L65() else D17()
  // L65()
  goto L65_;

L69_:;
  // formula6 = force? formula5
  Rsh_Fir_reg_formula6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula5_);
  // checkMissing(formula6)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_formula6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(formula6)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_formula6_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args72);
  // if c15 then L70() else L71(formula6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L70()
    goto L70_;
  } else {
  // L71(formula6)
    Rsh_Fir_reg_formula8_ = Rsh_Fir_reg_formula6_;
    goto L71_;
  }

L86_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // goto L24(c17, dx6)
  // L24(c17, dx6)
  Rsh_Fir_reg_c24_ = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L24_;

L87_:;
  // dr6 = tryDispatchBuiltin.1("[[", dx7)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args74);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if dc3 then L89() else L88(c24, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L89()
    goto L89_;
  } else {
  // L88(c24, dr6)
    Rsh_Fir_reg_c27_ = Rsh_Fir_reg_c24_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dr6_;
    goto L88_;
  }

L88_:;
  // __3 = ldf `[[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r33 = dyn __3(dx9, 1.0)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names20, RHO);
  // goto L25(c27, r33)
  // L25(c27, r33)
  Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r33_;
  goto L25_;

L95_:;
  // st ans = r44
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // goto L28()
  // L28()
  goto L28_;

L98_:;
  // checkFun.0(r46)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_r46_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args77));
  // r47 = r46 as cls
  Rsh_Fir_reg_r47_ = Rsh_Fir_cast(Rsh_Fir_reg_r46_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p6 = prom<V +>{
  //   formula23 = ld formula;
  //   formula24 = force? formula23;
  //   checkMissing(formula24);
  //   return formula24;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2237582675_6, 0, NULL, CCP, RHO);
  // r49 = dyn r47(p6)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r47_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names21, RHO);
  // check L99() else D27()
  // L99()
  goto L99_;

D15_:;
  // deopt 52 [r22]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 56 [r24]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 108 [r49]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L18_:;
  // st formula = dx1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L19(dx1)
  // L19(dx1)
  Rsh_Fir_reg_dx2_ = Rsh_Fir_reg_dx1_;
  goto L19_;

L26_:;
  // r37 = `==`(dx14, r35)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dx14_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args80);
  // c33 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args81);
  // c34 = `&&`(c32, c33)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_c33_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args82);
  // goto L23(c34)
  // L23(c34)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c34_;
  goto L23_;

L62_:;
  // goto L15(r22)
  // L15(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L15_;

L65_:;
  // goto L15(r24)
  // L15(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L15_;

L70_:;
  // dr = tryDispatchBuiltin.1("[", formula6)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_formula6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args83);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // if dc then L72() else L71(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L72()
    goto L72_;
  } else {
  // L71(dr)
    Rsh_Fir_reg_formula8_ = Rsh_Fir_reg_dr;
    goto L71_;
  }

L71_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r26 = dyn __(formula8, -2.0)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_formula8_;
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names22, RHO);
  // goto L18(r26)
  // L18(r26)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r26_;
  goto L18_;

L89_:;
  // dx10 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // goto L25(c24, dx10)
  // L25(c24, dx10)
  Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L25_;

L90_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r36 = dyn quote(<sym list>)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names23, RHO);
  // goto L26(c29, dx11, r36)
  // L26(c29, dx11, r36)
  Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c29_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L26_;

L91_:;
  // r34 = dyn base5(<sym list>)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names24, RHO);
  // goto L26(c29, dx11, r34)
  // L26(c29, dx11, r34)
  Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c29_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L26_;

L99_:;
  // st fterms = r49
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r49_, RHO);
  (void)(Rsh_Fir_reg_r49_);
  // eval1 = ldf eval
  Rsh_Fir_reg_eval1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L100() else D28()
  // L100()
  goto L100_;

D28_:;
  // deopt 111 []
  Rsh_Fir_deopt(111, 0, NULL, CCP, RHO);
  return R_NilValue;

L72_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L18(dx)
  // L18(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L18_;

L100_:;
  // p7 = prom<V +>{
  //   sym6 = ldf attr;
  //   base6 = ldf attr in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r51):
  //   return r51;
  // L1():
  //   fterms = ld fterms;
  //   fterms1 = force? fterms;
  //   checkMissing(fterms1);
  //   attr = ldf attr in base;
  //   r52 = dyn attr(fterms1, "variables");
  //   goto L0(r52);
  // L2():
  //   r50 = dyn base6(<sym fterms>, "variables");
  //   goto L0(r50);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2237582675_7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   data9 = ld data;
  //   data10 = force? data9;
  //   checkMissing(data10);
  //   return data10;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2237582675_8, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   environment1 = ldf environment;
  //   p9 = prom<V +>{
  //     formula25 = ld formula;
  //     formula26 = force? formula25;
  //     checkMissing(formula26);
  //     return formula26;
  //   };
  //   r56 = dyn environment1(p9);
  //   return r56;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2237582675_9, 0, NULL, CCP, RHO);
  // r58 = dyn eval1(p7, p8, p10)
  SEXP Rsh_Fir_array_args97[3];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args97[2] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names28[3];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval1_, 3, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names28, RHO);
  // check L101() else D29()
  // L101()
  goto L101_;

D29_:;
  // deopt 115 [r58]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L101_:;
  // st ans = r58
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r58_, RHO);
  (void)(Rsh_Fir_reg_r58_);
  // sym7 = ldf attr
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base7 = ldf attr in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args98);
  // if guard7 then L102() else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L102()
    goto L102_;
  } else {
  // L103()
    goto L103_;
  }

L29_:;
  // l = ld ans
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L106() else D32()
  // L106()
  goto L106_;

L102_:;
  // fterms2 = ld fterms
  Rsh_Fir_reg_fterms2_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L104() else D30()
  // L104()
  goto L104_;

L103_:;
  // r59 = dyn base7(<sym fterms>, "term.labels")
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args99[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names29, RHO);
  // goto L29(r59)
  // L29(r59)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L29_;

D30_:;
  // deopt 119 [fterms2]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_fterms2_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 125 [r60, l, r60]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(125, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L104_:;
  // fterms3 = force? fterms2
  Rsh_Fir_reg_fterms3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fterms2_);
  // checkMissing(fterms3)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_fterms3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // attr1 = ldf attr in base
  Rsh_Fir_reg_attr1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r61 = dyn attr1(fterms3, "term.labels")
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_fterms3_;
  Rsh_Fir_array_args101[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr1_, 2, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names30, RHO);
  // check L105() else D31()
  // L105()
  goto L105_;

L106_:;
  // r62 = dyn names__(l, NULL, r60)
  SEXP Rsh_Fir_array_args102[3];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args102[2] = Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names31, RHO);
  // check L107() else D33()
  // L107()
  goto L107_;

D31_:;
  // deopt 123 [r61]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 127 [r60, r62]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(127, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L105_:;
  // goto L29(r61)
  // L29(r61)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r61_;
  goto L29_;

L107_:;
  // st ans = r62
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r62_, RHO);
  (void)(Rsh_Fir_reg_r62_);
  // goto L28()
  // L28()
  goto L28_;
}
SEXP Rsh_Fir_user_promise_inner2237582675_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_warnLHS1_;
  SEXP Rsh_Fir_reg_warnLHS2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2237582675/0: expected 0, got %d", NCAPTURES);

  // warnLHS1 = ld warnLHS
  Rsh_Fir_reg_warnLHS1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // warnLHS2 = force? warnLHS1
  Rsh_Fir_reg_warnLHS2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_warnLHS1_);
  // checkMissing(warnLHS2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_warnLHS2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return warnLHS2
  return Rsh_Fir_reg_warnLHS2_;
}
SEXP Rsh_Fir_user_promise_inner2237582675_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_data5_;
  SEXP Rsh_Fir_reg_data6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2237582675/0: expected 0, got %d", NCAPTURES);

  // data5 = ld data
  Rsh_Fir_reg_data5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // data6 = force? data5
  Rsh_Fir_reg_data6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data5_);
  // checkMissing(data6)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_data6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return data6
  return Rsh_Fir_reg_data6_;
}
SEXP Rsh_Fir_user_promise_inner2237582675_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_formula17_;
  SEXP Rsh_Fir_reg_formula18_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_formula20_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r38_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2237582675/0: expected 0, got %d", NCAPTURES);

  // formula17 = ld formula
  Rsh_Fir_reg_formula17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // formula18 = force? formula17
  Rsh_Fir_reg_formula18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula17_);
  // checkMissing(formula18)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_formula18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // c37 = `is.object`(formula18)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_formula18_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args57);
  // if c37 then L1() else L2(formula18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L1()
    goto L1_;
  } else {
  // L2(formula18)
    Rsh_Fir_reg_formula20_ = Rsh_Fir_reg_formula18_;
    goto L2_;
  }

L0_:;
  // return dx16
  return Rsh_Fir_reg_dx16_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("[[", formula18)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_formula18_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args58);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_formula20_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // __4 = ldf `[[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r38 = dyn __4(formula20, 2.0)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_formula20_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names14, RHO);
  // goto L0(r38)
  // L0(r38)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_r38_;
  goto L0_;

L3_:;
  // dx15 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L0(dx15)
  // L0(dx15)
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx15_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2237582675_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_data7_;
  SEXP Rsh_Fir_reg_data8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2237582675/0: expected 0, got %d", NCAPTURES);

  // data7 = ld data
  Rsh_Fir_reg_data7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // data8 = force? data7
  Rsh_Fir_reg_data8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data7_);
  // checkMissing(data8)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_data8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return data8
  return Rsh_Fir_reg_data8_;
}
SEXP Rsh_Fir_user_promise_inner2237582675_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_environment;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r42_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2237582675/0: expected 0, got %d", NCAPTURES);

  // environment = ldf environment
  Rsh_Fir_reg_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // p4 = prom<V +>{
  //   formula21 = ld formula;
  //   formula22 = force? formula21;
  //   checkMissing(formula22);
  //   return formula22;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2237582675_5, 0, NULL, CCP, RHO);
  // r42 = dyn environment(p4)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names15, RHO);
  // return r42
  return Rsh_Fir_reg_r42_;
}
SEXP Rsh_Fir_user_promise_inner2237582675_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_formula21_;
  SEXP Rsh_Fir_reg_formula22_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2237582675/0: expected 0, got %d", NCAPTURES);

  // formula21 = ld formula
  Rsh_Fir_reg_formula21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // formula22 = force? formula21
  Rsh_Fir_reg_formula22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula21_);
  // checkMissing(formula22)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_formula22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // return formula22
  return Rsh_Fir_reg_formula22_;
}
SEXP Rsh_Fir_user_promise_inner2237582675_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_formula23_;
  SEXP Rsh_Fir_reg_formula24_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2237582675/0: expected 0, got %d", NCAPTURES);

  // formula23 = ld formula
  Rsh_Fir_reg_formula23_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // formula24 = force? formula23
  Rsh_Fir_reg_formula24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula23_);
  // checkMissing(formula24)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_formula24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // return formula24
  return Rsh_Fir_reg_formula24_;
}
SEXP Rsh_Fir_user_promise_inner2237582675_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_fterms;
  SEXP Rsh_Fir_reg_fterms1_;
  SEXP Rsh_Fir_reg_attr;
  SEXP Rsh_Fir_reg_r52_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2237582675/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf attr
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base6 = ldf attr in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args90);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r51
  return Rsh_Fir_reg_r51_;

L1_:;
  // fterms = ld fterms
  Rsh_Fir_reg_fterms = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // fterms1 = force? fterms
  Rsh_Fir_reg_fterms1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fterms);
  // checkMissing(fterms1)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_fterms1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r52 = dyn attr(fterms1, "variables")
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_fterms1_;
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names25, RHO);
  // goto L0(r52)
  // L0(r52)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r52_;
  goto L0_;

L2_:;
  // r50 = dyn base6(<sym fterms>, "variables")
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names26, RHO);
  // goto L0(r50)
  // L0(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2237582675_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_data9_;
  SEXP Rsh_Fir_reg_data10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2237582675/0: expected 0, got %d", NCAPTURES);

  // data9 = ld data
  Rsh_Fir_reg_data9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // data10 = force? data9
  Rsh_Fir_reg_data10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data9_);
  // checkMissing(data10)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_data10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // return data10
  return Rsh_Fir_reg_data10_;
}
SEXP Rsh_Fir_user_promise_inner2237582675_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_environment1_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r56_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2237582675/0: expected 0, got %d", NCAPTURES);

  // environment1 = ldf environment
  Rsh_Fir_reg_environment1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // p9 = prom<V +>{
  //   formula25 = ld formula;
  //   formula26 = force? formula25;
  //   checkMissing(formula26);
  //   return formula26;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2237582675_10, 0, NULL, CCP, RHO);
  // r56 = dyn environment1(p9)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment1_, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names27, RHO);
  // return r56
  return Rsh_Fir_reg_r56_;
}
SEXP Rsh_Fir_user_promise_inner2237582675_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_formula25_;
  SEXP Rsh_Fir_reg_formula26_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2237582675/0: expected 0, got %d", NCAPTURES);

  // formula25 = ld formula
  Rsh_Fir_reg_formula25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // formula26 = force? formula25
  Rsh_Fir_reg_formula26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formula25_);
  // checkMissing(formula26)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_formula26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // return formula26
  return Rsh_Fir_reg_formula26_;
}
