#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1385503804_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1385503804_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1385503804_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1385503804_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner1385503804
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1385503804_, RHO, CCP);
  // st `cbind.ts` = r
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
SEXP Rsh_Fir_user_function_inner1385503804_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1385503804 dynamic dispatch ([`...`, `deparse.level`])

  return Rsh_Fir_user_version_inner1385503804_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1385503804_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1385503804 version 0 (dots, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1385503804/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_deparse_level;  // deparse_level
  SEXP Rsh_Fir_reg_deparse_level_isMissing;  // deparse_level_isMissing
  SEXP Rsh_Fir_reg_deparse_level_orDefault;  // deparse_level_orDefault
  SEXP Rsh_Fir_reg_deparse_level1_;  // deparse_level1
  SEXP Rsh_Fir_reg_deparse_level2_;  // deparse_level2
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg__NotYetUsed;  // _NotYetUsed
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg__cbind_ts;  // _cbind_ts
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg__makeNamesTs;  // _makeNamesTs
  SEXP Rsh_Fir_reg_ddd2_;  // ddd2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r9_;  // r9

  // Bind parameters
  Rsh_Fir_reg_ddd = PARAMS[0];
  Rsh_Fir_reg_deparse_level = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // deparse_level_isMissing = missing.0(deparse_level)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_deparse_level;
  Rsh_Fir_reg_deparse_level_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if deparse_level_isMissing then L0(1.0) else L0(deparse_level)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_deparse_level_isMissing)) {
  // L0(1.0)
    Rsh_Fir_reg_deparse_level_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(deparse_level)
    Rsh_Fir_reg_deparse_level_orDefault = Rsh_Fir_reg_deparse_level;
    goto L0_;
  }

L0_:;
  // st `deparse.level` = deparse_level_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_deparse_level_orDefault, RHO);
  (void)(Rsh_Fir_reg_deparse_level_orDefault);
  // deparse_level1 = ld `deparse.level`
  Rsh_Fir_reg_deparse_level1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // _cbind_ts = ldf `.cbind.ts`
  Rsh_Fir_reg__cbind_ts = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L8() else D3()
  // L8()
  goto L8_;

D0_:;
  // deopt 0 [deparse_level1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_deparse_level1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // deparse_level2 = force? deparse_level1
  Rsh_Fir_reg_deparse_level2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deparse_level1_);
  // checkMissing(deparse_level2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_deparse_level2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // r = `!=`(deparse_level2, 1.0)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_deparse_level2_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c then L4() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L4()
    goto L4_;
  } else {
  // L1()
    goto L1_;
  }

L4_:;
  // _NotYetUsed = ldf `.NotYetUsed`
  Rsh_Fir_reg__NotYetUsed = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // r1 = dyn _NotYetUsed("deparse.level != 1")
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__NotYetUsed, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

D2_:;
  // deopt 7 [r1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L2()
  // L2()
  goto L2_;

D3_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p = prom<V +>{
  //   sym = ldf list;
  //   base = ldf list in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r4):
  //   return r4;
  // L1():
  //   list = ldf list;
  //   ddd1 = ld `...`;
  //   r5 = dyn list[`...`](ddd1);
  //   goto L0(r5);
  // L2():
  //   r3 = dyn base(<sym ...>);
  //   goto L0(r3);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1385503804_, CCP, RHO);
  // p1 = prom<V +>{
  //   _makeNamesTs = ldf `.makeNamesTs`;
  //   ddd2 = ld `...`;
  //   r7 = dyn _makeNamesTs[`...`](ddd2);
  //   return r7;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1385503804_1, CCP, RHO);
  // r9 = dyn _cbind_ts[, , dframe, union](p, p1, FALSE, TRUE)
  SEXP Rsh_Fir_array_args9[4];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args9[3] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names4[4];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_arg_names4[3] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__cbind_ts, 4, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L9() else D4()
  // L9()
  goto L9_;

D4_:;
  // deopt 18 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r9
  return Rsh_Fir_reg_r9_;
}
SEXP Rsh_Fir_user_promise_inner1385503804_(SEXP CCP, SEXP RHO) {
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r4
  return Rsh_Fir_reg_r4_;

L1_:;
  // list = ldf list
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // r5 = dyn list[`...`](ddd1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L0_;

L2_:;
  // r3 = dyn base(<sym ...>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1385503804_1(SEXP CCP, SEXP RHO) {
  // _makeNamesTs = ldf `.makeNamesTs`
  Rsh_Fir_reg__makeNamesTs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // r7 = dyn _makeNamesTs[`...`](ddd2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__makeNamesTs, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
