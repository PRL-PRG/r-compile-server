#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1109350330_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1109350330_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1109350330_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1109350330_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1109350330_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1109350330_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1109350330_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1109350330_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner1109350330
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1109350330_, RHO, CCP);
  // st `.updateInImportsEnv` = r
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
SEXP Rsh_Fir_user_function_inner1109350330_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1109350330 dynamic dispatch ([what, newFun, importingPkg])

  return Rsh_Fir_user_version_inner1109350330_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1109350330_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1109350330 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1109350330/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_what;  // what
  SEXP Rsh_Fir_reg_newFun;  // newFun
  SEXP Rsh_Fir_reg_importingPkg;  // importingPkg
  SEXP Rsh_Fir_reg__getImportsEnv;  // _getImportsEnv
  SEXP Rsh_Fir_reg_importingPkg1_;  // importingPkg1
  SEXP Rsh_Fir_reg_importingPkg2_;  // importingPkg2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_where;  // where
  SEXP Rsh_Fir_reg_where1_;  // where1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_what1_;  // what1
  SEXP Rsh_Fir_reg_what2_;  // what2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_where2_;  // where2
  SEXP Rsh_Fir_reg_where3_;  // where3
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg__assignOverBinding;  // _assignOverBinding
  SEXP Rsh_Fir_reg_what3_;  // what3
  SEXP Rsh_Fir_reg_what4_;  // what4
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_newFun1_;  // newFun1
  SEXP Rsh_Fir_reg_newFun2_;  // newFun2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_where4_;  // where4
  SEXP Rsh_Fir_reg_where5_;  // where5
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r14_;  // r14

  // Bind parameters
  Rsh_Fir_reg_what = PARAMS[0];
  Rsh_Fir_reg_newFun = PARAMS[1];
  Rsh_Fir_reg_importingPkg = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st what = what
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_what, RHO);
  (void)(Rsh_Fir_reg_what);
  // st newFun = newFun
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_newFun, RHO);
  (void)(Rsh_Fir_reg_newFun);
  // st importingPkg = importingPkg
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_importingPkg, RHO);
  (void)(Rsh_Fir_reg_importingPkg);
  // _getImportsEnv = ldf `.getImportsEnv`
  Rsh_Fir_reg__getImportsEnv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L0_:;
  // r4 = `!`(r3)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c1 then L8() else L1(c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L8()
    goto L8_;
  } else {
  // L1(c1)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c1_;
    goto L1_;
  }

L1_:;
  // c7 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c7 then L12() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L12()
    goto L12_;
  } else {
  // L2()
    goto L2_;
  }

L2_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 5);

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   importingPkg1 = ld importingPkg;
  //   importingPkg2 = force? importingPkg1;
  //   checkMissing(importingPkg2);
  //   return importingPkg2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1109350330_, CCP, RHO);
  // r1 = dyn _getImportsEnv(p)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__getImportsEnv, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L4_:;
  // st where = r1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L5_:;
  // where = ld where
  Rsh_Fir_reg_where = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L7() else D2()
  // L7()
  goto L7_;

L6_:;
  // r2 = dyn base(<sym where>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;

D2_:;
  // deopt 6 [where]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_where;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // where1 = force? where
  Rsh_Fir_reg_where1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where);
  // checkMissing(where1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_where1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // c = `==`(where1, NULL)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_where1_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_c;
  goto L0_;

L8_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 11 [c1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // p1 = prom<V +>{
  //   what1 = ld what;
  //   what2 = force? what1;
  //   checkMissing(what2);
  //   return what2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1109350330_1, CCP, RHO);
  // p2 = prom<V +>{
  //   sym1 = ldf names;
  //   base1 = ldf names in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r7):
  //   return r7;
  // L1():
  //   where2 = ld where;
  //   where3 = force? where2;
  //   checkMissing(where3);
  //   names = ldf names in base;
  //   r8 = dyn names(where3);
  //   goto L0(r8);
  // L2():
  //   r6 = dyn base1(<sym where>);
  //   goto L0(r6);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1109350330_2, CCP, RHO);
  // r10 = dyn _in_(p1, p2)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

D4_:;
  // deopt 14 [c1, r10]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // c4 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // c5 = `&&`(c1, c4)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // goto L1(c5)
  // L1(c5)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c5_;
  goto L1_;

L12_:;
  // _assignOverBinding = ldf `.assignOverBinding`
  Rsh_Fir_reg__assignOverBinding = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

D5_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p3 = prom<V +>{
  //   what3 = ld what;
  //   what4 = force? what3;
  //   checkMissing(what4);
  //   return what4;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1109350330_3, CCP, RHO);
  // p4 = prom<V +>{
  //   newFun1 = ld newFun;
  //   newFun2 = force? newFun1;
  //   checkMissing(newFun2);
  //   return newFun2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1109350330_4, CCP, RHO);
  // p5 = prom<V +>{
  //   where4 = ld where;
  //   where5 = force? where4;
  //   checkMissing(where5);
  //   return where5;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1109350330_5, CCP, RHO);
  // r14 = dyn _assignOverBinding(p3, p4, p5, FALSE)
  SEXP Rsh_Fir_array_args20[4];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args20[2] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args20[3] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names5[4];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__assignOverBinding, 4, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L14() else D6()
  // L14()
  goto L14_;

D6_:;
  // deopt 22 [r14]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L14_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_inner1109350330_(SEXP CCP, SEXP RHO) {
  // importingPkg1 = ld importingPkg
  Rsh_Fir_reg_importingPkg1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // importingPkg2 = force? importingPkg1
  Rsh_Fir_reg_importingPkg2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_importingPkg1_);
  // checkMissing(importingPkg2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_importingPkg2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return importingPkg2
  return Rsh_Fir_reg_importingPkg2_;
}
SEXP Rsh_Fir_user_promise_inner1109350330_1(SEXP CCP, SEXP RHO) {
  // what1 = ld what
  Rsh_Fir_reg_what1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // what2 = force? what1
  Rsh_Fir_reg_what2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what1_);
  // checkMissing(what2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_what2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return what2
  return Rsh_Fir_reg_what2_;
}
SEXP Rsh_Fir_user_promise_inner1109350330_2(SEXP CCP, SEXP RHO) {
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r7
  return Rsh_Fir_reg_r7_;

L1_:;
  // where2 = ld where
  Rsh_Fir_reg_where2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // where3 = force? where2
  Rsh_Fir_reg_where3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where2_);
  // checkMissing(where3)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_where3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r8 = dyn names(where3)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_where3_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L0_;

L2_:;
  // r6 = dyn base1(<sym where>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1109350330_3(SEXP CCP, SEXP RHO) {
  // what3 = ld what
  Rsh_Fir_reg_what3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // what4 = force? what3
  Rsh_Fir_reg_what4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what3_);
  // checkMissing(what4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_what4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return what4
  return Rsh_Fir_reg_what4_;
}
SEXP Rsh_Fir_user_promise_inner1109350330_4(SEXP CCP, SEXP RHO) {
  // newFun1 = ld newFun
  Rsh_Fir_reg_newFun1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // newFun2 = force? newFun1
  Rsh_Fir_reg_newFun2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newFun1_);
  // checkMissing(newFun2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_newFun2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return newFun2
  return Rsh_Fir_reg_newFun2_;
}
SEXP Rsh_Fir_user_promise_inner1109350330_5(SEXP CCP, SEXP RHO) {
  // where4 = ld where
  Rsh_Fir_reg_where4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // where5 = force? where4
  Rsh_Fir_reg_where5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where4_);
  // checkMissing(where5)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_where5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return where5
  return Rsh_Fir_reg_where5_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
