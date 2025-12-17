#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner725573545_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner725573545_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner725573545_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner725573545_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner725573545_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner725573545_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner725573545_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner725573545_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner725573545_6(SEXP CCP, SEXP RHO);
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
  // r = clos inner725573545
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner725573545_, RHO, CCP);
  // st `.getImplicitGeneric` = r
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
SEXP Rsh_Fir_user_function_inner725573545_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner725573545 dynamic dispatch ([name, where, pkg])

  return Rsh_Fir_user_version_inner725573545_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner725573545_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner725573545 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner725573545/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_name;  // name
  SEXP Rsh_Fir_reg_where;  // where
  SEXP Rsh_Fir_reg_pkg;  // pkg
  SEXP Rsh_Fir_reg_pkg_isMissing;  // pkg_isMissing
  SEXP Rsh_Fir_reg_pkg_orDefault;  // pkg_orDefault
  SEXP Rsh_Fir_reg__getImplicitGenericFromCache;  // _getImplicitGenericFromCache
  SEXP Rsh_Fir_reg_name1_;  // name1
  SEXP Rsh_Fir_reg_name2_;  // name2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_where1_;  // where1
  SEXP Rsh_Fir_reg_where2_;  // where2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_pkg1_;  // pkg1
  SEXP Rsh_Fir_reg_pkg2_;  // pkg2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_where3_;  // where3
  SEXP Rsh_Fir_reg_where4_;  // where4
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_where6_;  // where6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg__ImplicitGenericsMetaName;  // _ImplicitGenericsMetaName
  SEXP Rsh_Fir_reg__ImplicitGenericsMetaName1_;  // _ImplicitGenericsMetaName1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg__getGenericFromCacheTable;  // _getGenericFromCacheTable
  SEXP Rsh_Fir_reg_name3_;  // name3
  SEXP Rsh_Fir_reg_name4_;  // name4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_where7_;  // where7
  SEXP Rsh_Fir_reg_where8_;  // where8
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_pkg3_;  // pkg3
  SEXP Rsh_Fir_reg_pkg4_;  // pkg4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_tbl;  // tbl
  SEXP Rsh_Fir_reg_tbl1_;  // tbl1
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_value3_;  // value3

  // Bind parameters
  Rsh_Fir_reg_name = PARAMS[0];
  Rsh_Fir_reg_where = PARAMS[1];
  Rsh_Fir_reg_pkg = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st name = name
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_name, RHO);
  (void)(Rsh_Fir_reg_name);
  // st where = where
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_where, RHO);
  (void)(Rsh_Fir_reg_where);
  // pkg_isMissing = missing.0(pkg)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_pkg;
  Rsh_Fir_reg_pkg_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if pkg_isMissing then L0("") else L0(pkg)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_pkg_isMissing)) {
  // L0("")
    Rsh_Fir_reg_pkg_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(pkg)
    Rsh_Fir_reg_pkg_orDefault = Rsh_Fir_reg_pkg;
    goto L0_;
  }

L0_:;
  // st pkg = pkg_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_pkg_orDefault, RHO);
  (void)(Rsh_Fir_reg_pkg_orDefault);
  // _getImplicitGenericFromCache = ldf `.getImplicitGenericFromCache`
  Rsh_Fir_reg__getImplicitGenericFromCache = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L1_:;
  // c1 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c1 then L11() else L2(c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L11()
    goto L11_;
  } else {
  // L2(c1)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c1_;
    goto L2_;
  }

L2_:;
  // c16 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c16 then L20() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L20()
    goto L20_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r9 = `!`(r7)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c13 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c14 = `&&`(c6, c13)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // goto L2(c14)
  // L2(c14)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c14_;
  goto L2_;

L4_:;
  // st tbl = dx1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // c12 = `==`(dx1, NULL)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // goto L3(c11, c12)
  // L3(c11, c12)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_c12_;
  goto L3_;

L5_:;
  // value2 = ld value
  Rsh_Fir_reg_value2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L24() else D7()
  // L24()
  goto L24_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p = prom<V +>{
  //   name1 = ld name;
  //   name2 = force? name1;
  //   checkMissing(name2);
  //   return name2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner725573545_, CCP, RHO);
  // p1 = prom<V +>{
  //   where1 = ld where;
  //   where2 = force? where1;
  //   checkMissing(where2);
  //   return where2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner725573545_1, CCP, RHO);
  // p2 = prom<V +>{
  //   pkg1 = ld pkg;
  //   pkg2 = force? pkg1;
  //   checkMissing(pkg2);
  //   return pkg2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner725573545_2, CCP, RHO);
  // r3 = dyn _getImplicitGenericFromCache(p, p1, p2)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args10[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__getImplicitGenericFromCache, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

D1_:;
  // deopt 5 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // st value = r3
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L8_:;
  // value = ld value
  Rsh_Fir_reg_value = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

L9_:;
  // r4 = dyn base(<sym value>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L1_;

D2_:;
  // deopt 8 [value]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_value;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // value1 = force? value
  Rsh_Fir_reg_value1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value);
  // checkMissing(value1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_value1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // c = `==`(value1, NULL)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_c;
  goto L1_;

L11_:;
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard1 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // where3 = ld where
  Rsh_Fir_reg_where3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

L13_:;
  // r6 = dyn base1(<lang `<-`(tbl, `[[`(where, .ImplicitGenericsMetaName))>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L3(c1, r6)
  // L3(c1, r6)
  Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L3_;

D3_:;
  // deopt 12 [c1, where3]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_where3_;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // where4 = force? where3
  Rsh_Fir_reg_where4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where3_);
  // checkMissing(where4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_where4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(where4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_where4_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c7 then L15() else L16(c1, where4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L15()
    goto L15_;
  } else {
  // L16(c1, where4)
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c1_;
    Rsh_Fir_reg_where6_ = Rsh_Fir_reg_where4_;
    goto L16_;
  }

L15_:;
  // dr = tryDispatchBuiltin.1("[[", where4)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_where4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args19);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc then L17() else L16(c1, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L17()
    goto L17_;
  } else {
  // L16(c1, dr)
    Rsh_Fir_reg_c9_ = Rsh_Fir_reg_c1_;
    Rsh_Fir_reg_where6_ = Rsh_Fir_reg_dr;
    goto L16_;
  }

L16_:;
  // _ImplicitGenericsMetaName = ld `.ImplicitGenericsMetaName`
  Rsh_Fir_reg__ImplicitGenericsMetaName = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L18() else D4()
  // L18()
  goto L18_;

L17_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L4(c1, dx)
  // L4(c1, dx)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

D4_:;
  // deopt 14 [c9, where6, _ImplicitGenericsMetaName]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c9_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_where6_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg__ImplicitGenericsMetaName;
  Rsh_Fir_deopt(14, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L18_:;
  // _ImplicitGenericsMetaName1 = force? _ImplicitGenericsMetaName
  Rsh_Fir_reg__ImplicitGenericsMetaName1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__ImplicitGenericsMetaName);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r8 = dyn __(where6, _ImplicitGenericsMetaName1)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_where6_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg__ImplicitGenericsMetaName1_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L4(c9, r8)
  // L4(c9, r8)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r8_;
  goto L4_;

L20_:;
  // _getGenericFromCacheTable = ldf `.getGenericFromCacheTable`
  Rsh_Fir_reg__getGenericFromCacheTable = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L21() else D5()
  // L21()
  goto L21_;

D5_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p3 = prom<V +>{
  //   name3 = ld name;
  //   name4 = force? name3;
  //   checkMissing(name4);
  //   return name4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner725573545_3, CCP, RHO);
  // p4 = prom<V +>{
  //   where7 = ld where;
  //   where8 = force? where7;
  //   checkMissing(where8);
  //   return where8;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner725573545_4, CCP, RHO);
  // p5 = prom<V +>{
  //   pkg3 = ld pkg;
  //   pkg4 = force? pkg3;
  //   checkMissing(pkg4);
  //   return pkg4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner725573545_5, CCP, RHO);
  // p6 = prom<V +>{
  //   tbl = ld tbl;
  //   tbl1 = force? tbl;
  //   checkMissing(tbl1);
  //   return tbl1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner725573545_6, CCP, RHO);
  // r14 = dyn _getGenericFromCacheTable(p3, p4, p5, p6)
  SEXP Rsh_Fir_array_args27[4];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args27[2] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args27[3] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names4[4];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__getGenericFromCacheTable, 4, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L22() else D6()
  // L22()
  goto L22_;

D6_:;
  // deopt 27 [r14]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L22_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r14
  return Rsh_Fir_reg_r14_;

D7_:;
  // deopt 28 [value2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_value2_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L24_:;
  // value3 = force? value2
  Rsh_Fir_reg_value3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value2_);
  // checkMissing(value3)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_value3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return value3
  return Rsh_Fir_reg_value3_;
}
SEXP Rsh_Fir_user_promise_inner725573545_(SEXP CCP, SEXP RHO) {
  // name1 = ld name
  Rsh_Fir_reg_name1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name2 = force? name1
  Rsh_Fir_reg_name2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name1_);
  // checkMissing(name2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_name2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return name2
  return Rsh_Fir_reg_name2_;
}
SEXP Rsh_Fir_user_promise_inner725573545_1(SEXP CCP, SEXP RHO) {
  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return where2
  return Rsh_Fir_reg_where2_;
}
SEXP Rsh_Fir_user_promise_inner725573545_2(SEXP CCP, SEXP RHO) {
  // pkg1 = ld pkg
  Rsh_Fir_reg_pkg1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // pkg2 = force? pkg1
  Rsh_Fir_reg_pkg2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg1_);
  // checkMissing(pkg2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_pkg2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return pkg2
  return Rsh_Fir_reg_pkg2_;
}
SEXP Rsh_Fir_user_promise_inner725573545_3(SEXP CCP, SEXP RHO) {
  // name3 = ld name
  Rsh_Fir_reg_name3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // name4 = force? name3
  Rsh_Fir_reg_name4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name3_);
  // checkMissing(name4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_name4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return name4
  return Rsh_Fir_reg_name4_;
}
SEXP Rsh_Fir_user_promise_inner725573545_4(SEXP CCP, SEXP RHO) {
  // where7 = ld where
  Rsh_Fir_reg_where7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // where8 = force? where7
  Rsh_Fir_reg_where8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where7_);
  // checkMissing(where8)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_where8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return where8
  return Rsh_Fir_reg_where8_;
}
SEXP Rsh_Fir_user_promise_inner725573545_5(SEXP CCP, SEXP RHO) {
  // pkg3 = ld pkg
  Rsh_Fir_reg_pkg3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // pkg4 = force? pkg3
  Rsh_Fir_reg_pkg4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg3_);
  // checkMissing(pkg4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_pkg4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return pkg4
  return Rsh_Fir_reg_pkg4_;
}
SEXP Rsh_Fir_user_promise_inner725573545_6(SEXP CCP, SEXP RHO) {
  // tbl = ld tbl
  Rsh_Fir_reg_tbl = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // tbl1 = force? tbl
  Rsh_Fir_reg_tbl1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tbl);
  // checkMissing(tbl1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_tbl1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return tbl1
  return Rsh_Fir_reg_tbl1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
