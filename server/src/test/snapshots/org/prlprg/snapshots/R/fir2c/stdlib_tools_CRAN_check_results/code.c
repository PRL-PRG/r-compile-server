#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3948649135_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3948649135_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3948649135_(SEXP CCP, SEXP RHO);
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
  // r = clos inner3948649135
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3948649135_, RHO, CCP);
  // st CRAN_check_results = r
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
SEXP Rsh_Fir_user_function_inner3948649135_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3948649135 dynamic dispatch ([flavors])

  return Rsh_Fir_user_version_inner3948649135_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3948649135_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3948649135 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3948649135/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_flavors;  // flavors
  SEXP Rsh_Fir_reg_flavors_isMissing;  // flavors_isMissing
  SEXP Rsh_Fir_reg_flavors_orDefault;  // flavors_orDefault
  SEXP Rsh_Fir_reg_read_CRAN_object;  // read_CRAN_object
  SEXP Rsh_Fir_reg_CRAN_baseurl_for_web_area;  // CRAN_baseurl_for_web_area
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_flavors1_;  // flavors1
  SEXP Rsh_Fir_reg_flavors2_;  // flavors2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_db;  // db
  SEXP Rsh_Fir_reg_db1_;  // db1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_db3_;  // db3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_db9_;  // db9
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_db10_;  // db10
  SEXP Rsh_Fir_reg_db11_;  // db11
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_db14_;  // db14
  SEXP Rsh_Fir_reg_db15_;  // db15
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_db17_;  // db17
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_flavors3_;  // flavors3
  SEXP Rsh_Fir_reg_flavors4_;  // flavors4
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_db18_;  // db18
  SEXP Rsh_Fir_reg_db19_;  // db19

  // Bind parameters
  Rsh_Fir_reg_flavors = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // flavors_isMissing = missing.0(flavors)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_flavors;
  Rsh_Fir_reg_flavors_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if flavors_isMissing then L0(NULL) else L0(flavors)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_flavors_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_flavors_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(flavors)
    Rsh_Fir_reg_flavors_orDefault = Rsh_Fir_reg_flavors;
    goto L0_;
  }

L0_:;
  // st flavors = flavors_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_flavors_orDefault, RHO);
  (void)(Rsh_Fir_reg_flavors_orDefault);
  // read_CRAN_object = ldf read_CRAN_object
  Rsh_Fir_reg_read_CRAN_object = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L1_:;
  // r5 = `!`(r4)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L12() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L12()
    goto L12_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // goto L6()
  // L6()
  goto L6_;

L3_:;
  // st db = dx1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L6()
  // L6()
  goto L6_;

L4_:;
  // r13 = `!`(r7)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r14 = dyn __(db1, r13, <missing>)
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_db1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L3(r14)
  // L3(r14)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r14_;
  goto L3_;

L5_:;
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r12 = dyn is_na(r9)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L28() else D7()
  // L28()
  goto L28_;

L6_:;
  // db18 = ld db
  Rsh_Fir_reg_db18_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L30() else D8()
  // L30()
  goto L30_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // p = prom<V +>{
  //   CRAN_baseurl_for_web_area = ldf CRAN_baseurl_for_web_area;
  //   r = dyn CRAN_baseurl_for_web_area();
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3948649135_, CCP, RHO);
  // r2 = dyn read_CRAN_object(p, "web/checks/check_results.rds")
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_read_CRAN_object, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L8() else D1()
  // L8()
  goto L8_;

D1_:;
  // deopt 4 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L8_:;
  // st db = r2
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L9_:;
  // flavors1 = ld flavors
  Rsh_Fir_reg_flavors1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

L10_:;
  // r3 = dyn base(<sym flavors>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 7 [flavors1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_flavors1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L11_:;
  // flavors2 = force? flavors1
  Rsh_Fir_reg_flavors2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_flavors1_);
  // checkMissing(flavors2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_flavors2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // c = `==`(flavors2, NULL)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_flavors2_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_c;
  goto L1_;

L12_:;
  // db = ld db
  Rsh_Fir_reg_db = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

D3_:;
  // deopt 11 [db]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_db;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L13_:;
  // db1 = force? db
  Rsh_Fir_reg_db1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db);
  // checkMissing(db1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_db1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(db1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_db1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c2 then L14() else L15(db1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L14()
    goto L14_;
  } else {
  // L15(db1)
    Rsh_Fir_reg_db3_ = Rsh_Fir_reg_db1_;
    goto L15_;
  }

L14_:;
  // dr = tryDispatchBuiltin.1("[", db1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_db1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args13);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if dc then L16() else L15(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L16()
    goto L16_;
  } else {
  // L15(dr)
    Rsh_Fir_reg_db3_ = Rsh_Fir_reg_dr;
    goto L15_;
  }

L15_:;
  // sym1 = ldf `is.na`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base1 = ldf `is.na` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard1 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L16_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L3(dx)
  // L3(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

L17_:;
  // sym2 = ldf match
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base2 = ldf match in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard2 then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L18_:;
  // r6 = dyn base1(<lang match(`$`(db, Flavor), flavors)>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L4(r6)
  // L4(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L4_;

L19_:;
  // db10 = ld db
  Rsh_Fir_reg_db10_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L21() else D4()
  // L21()
  goto L21_;

L20_:;
  // r8 = dyn base2(<lang `$`(db, Flavor)>, <sym flavors>)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L5(db3, r8)
  // L5(db3, r8)
  Rsh_Fir_reg_db9_ = Rsh_Fir_reg_db3_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L5_;

D4_:;
  // deopt 17 [db3, db10]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_db3_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_db10_;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L21_:;
  // db11 = force? db10
  Rsh_Fir_reg_db11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db10_);
  // checkMissing(db11)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_db11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(db11)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_db11_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c3 then L23() else L24(db3, db11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L23()
    goto L23_;
  } else {
  // L24(db3, db11)
    Rsh_Fir_reg_db14_ = Rsh_Fir_reg_db3_;
    Rsh_Fir_reg_db15_ = Rsh_Fir_reg_db11_;
    goto L24_;
  }

L22_:;
  // flavors3 = ld flavors
  Rsh_Fir_reg_flavors3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L26() else D5()
  // L26()
  goto L26_;

L23_:;
  // dr2 = tryDispatchBuiltin.1("$", db11)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_db11_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args22);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if dc1 then L25() else L24(db3, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L25()
    goto L25_;
  } else {
  // L24(db3, dr2)
    Rsh_Fir_reg_db14_ = Rsh_Fir_reg_db3_;
    Rsh_Fir_reg_db15_ = Rsh_Fir_reg_dr2_;
    goto L24_;
  }

L24_:;
  // r10 = `$`(db15, <sym Flavor>)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_db15_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L22(db14, r10)
  // L22(db14, r10)
  Rsh_Fir_reg_db17_ = Rsh_Fir_reg_db14_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r10_;
  goto L22_;

L25_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L22(db3, dx2)
  // L22(db3, dx2)
  Rsh_Fir_reg_db17_ = Rsh_Fir_reg_db3_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L22_;

D5_:;
  // deopt 20 [db17, flavors3]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_db17_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_flavors3_;
  Rsh_Fir_deopt(20, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L26_:;
  // flavors4 = force? flavors3
  Rsh_Fir_reg_flavors4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_flavors3_);
  // checkMissing(flavors4)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_flavors4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r11 = dyn match(dx3, flavors4, NA_INT, NULL)
  SEXP Rsh_Fir_array_args27[4];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_flavors4_;
  Rsh_Fir_array_args27[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args27[3] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names6[4];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L27() else D6()
  // L27()
  goto L27_;

D6_:;
  // deopt 25 [db17, r11]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_db17_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(25, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L5(db17, r11)
  // L5(db17, r11)
  Rsh_Fir_reg_db9_ = Rsh_Fir_reg_db17_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r11_;
  goto L5_;

D7_:;
  // deopt 27 [db9, r12]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_db9_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(27, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L4(r12)
  // L4(r12)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r12_;
  goto L4_;

D8_:;
  // deopt 35 [db18]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_db18_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L30_:;
  // db19 = force? db18
  Rsh_Fir_reg_db19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db18_);
  // checkMissing(db19)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_db19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return db19
  return Rsh_Fir_reg_db19_;
}
SEXP Rsh_Fir_user_promise_inner3948649135_(SEXP CCP, SEXP RHO) {
  // CRAN_baseurl_for_web_area = ldf CRAN_baseurl_for_web_area
  Rsh_Fir_reg_CRAN_baseurl_for_web_area = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // r = dyn CRAN_baseurl_for_web_area()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_CRAN_baseurl_for_web_area, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
