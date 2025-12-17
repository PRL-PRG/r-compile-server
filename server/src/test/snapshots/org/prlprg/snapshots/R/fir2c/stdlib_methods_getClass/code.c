#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2431373493_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2431373493_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2431373493_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2431373493_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2431373493_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2431373493_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2431373493_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2431373493_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2431373493_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2431373493_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2431373493_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2431373493_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2431373493_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_getClass;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_getClass1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_cld;
  SEXP Rsh_Fir_reg_cld1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_try;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_try1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r12_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2431373493
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2431373493_, RHO, CCP);
  // st getClass = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // getClass = ldf getClass
  Rsh_Fir_reg_getClass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn getClass("numeric")
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getClass, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 6 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // getClass1 = ldf getClass
  Rsh_Fir_reg_getClass1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r2 = dyn getClass1[, `.Force`]("thisIsAnUndefinedClass", TRUE)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getClass1_, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 12 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // st cld = r2
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // cld = ld cld
  Rsh_Fir_reg_cld = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 14 [cld]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_cld;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L4_:;
  // cld1 = force? cld
  Rsh_Fir_reg_cld1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cld);
  // checkMissing(cld1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_cld1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // r3 = dyn __("utils", "str")
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 20 [r3]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L6_:;
  // checkFun.0(r3)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r3_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args4));
  // r4 = r3 as cls
  Rsh_Fir_reg_r4_ = Rsh_Fir_cast(Rsh_Fir_reg_r3_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p = prom<V +>{
  //   cld2 = ld cld;
  //   cld3 = force? cld2;
  //   checkMissing(cld3);
  //   return cld3;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r6 = dyn r4(p)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r4_, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 23 [r6]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L7_:;
  // try = ldf try
  Rsh_Fir_reg_try = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p1 = prom<V +>{
  //   getClass2 = ldf getClass;
  //   r7 = dyn getClass2("thisIsAnUndefinedClass");
  //   return r7;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r9 = dyn try(p1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_try, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 27 [r9]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L9_:;
  // try1 = ldf try
  Rsh_Fir_reg_try1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p2 = prom<V +>{
  //   getClassDef = ldf getClassDef;
  //   r10 = dyn getClassDef("thisIsAnUndefinedClass");
  //   return r10;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r12 = dyn try1(p2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_try1_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L11() else D11()
  // L11()
  goto L11_;

D11_:;
  // deopt 31 [r12]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cld2_;
  SEXP Rsh_Fir_reg_cld3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // cld2 = ld cld
  Rsh_Fir_reg_cld2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // cld3 = force? cld2
  Rsh_Fir_reg_cld3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cld2_);
  // checkMissing(cld3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_cld3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return cld3
  return Rsh_Fir_reg_cld3_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_getClass2_;
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // getClass2 = ldf getClass
  Rsh_Fir_reg_getClass2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // r7 = dyn getClass2("thisIsAnUndefinedClass")
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getClass2_, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_getClassDef;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // getClassDef = ldf getClassDef
  Rsh_Fir_reg_getClassDef = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // r10 = dyn getClassDef("thisIsAnUndefinedClass")
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getClassDef, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_function_inner2431373493_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2431373493 dynamic dispatch ([Class, `.Force`, where])

  return Rsh_Fir_user_version_inner2431373493_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2431373493_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2431373493 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2431373493/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_Class;
  SEXP Rsh_Fir_reg__Force;
  SEXP Rsh_Fir_reg_where;
  SEXP Rsh_Fir_reg__Force_isMissing;
  SEXP Rsh_Fir_reg__Force_orDefault;
  SEXP Rsh_Fir_reg_where_isMissing;
  SEXP Rsh_Fir_reg_where_orDefault;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_getClassDef1;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_value;
  SEXP Rsh_Fir_reg_value1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg__Force1_;
  SEXP Rsh_Fir_reg__Force2_;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_makeClassRepresentation;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_value2_;
  SEXP Rsh_Fir_reg_value3_;

  // Bind parameters
  Rsh_Fir_reg_Class = PARAMS[0];
  Rsh_Fir_reg__Force = PARAMS[1];
  Rsh_Fir_reg_where = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st Class = Class
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_Class, RHO);
  (void)(Rsh_Fir_reg_Class);
  // _Force_isMissing = missing.0(_Force)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg__Force;
  Rsh_Fir_reg__Force_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args11);
  // if _Force_isMissing then L0(FALSE) else L0(_Force)
  if (Rsh_Fir_is_true(Rsh_Fir_reg__Force_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg__Force_orDefault = Rsh_const(CCP, 12);
    goto L0_;
  } else {
  // L0(_Force)
    Rsh_Fir_reg__Force_orDefault = Rsh_Fir_reg__Force;
    goto L0_;
  }

L0_:;
  // st `.Force` = _Force_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg__Force_orDefault, RHO);
  (void)(Rsh_Fir_reg__Force_orDefault);
  // where_isMissing = missing.0(where)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_where;
  Rsh_Fir_reg_where_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args12);
  // if where_isMissing then L1() else L2(where)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_where_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(where)
    Rsh_Fir_reg_where_orDefault = Rsh_Fir_reg_where;
    goto L2_;
  }

L1_:;
  // p3 = prom<V +>{
  //   _classEnv = ldf `.classEnv`;
  //   p = prom<V +>{
  //     Class1 = ld Class;
  //     Class2 = force? Class1;
  //     checkMissing(Class2);
  //     return Class2;
  //   };
  //   p2 = prom<V +>{
  //     topenv = ldf topenv;
  //     p1 = prom<V +>{
  //       parent_frame = ldf `parent.frame`;
  //       r1 = dyn parent_frame();
  //       return r1;
  //     };
  //     r3 = dyn topenv(p1);
  //     return r3;
  //   };
  //   r5 = dyn _classEnv(p, p2, FALSE);
  //   return r5;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2431373493_, 0, NULL, CCP, RHO);
  // goto L2(p3)
  // L2(p3)
  Rsh_Fir_reg_where_orDefault = Rsh_Fir_reg_p3_;
  goto L2_;

L2_:;
  // st where = where_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_where_orDefault, RHO);
  (void)(Rsh_Fir_reg_where_orDefault);
  // getClassDef = ldf getClassDef
  Rsh_Fir_reg_getClassDef1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p4 = prom<V +>{
  //   Class3 = ld Class;
  //   Class4 = force? Class3;
  //   checkMissing(Class4);
  //   return Class4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2431373493_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   where1 = ld where;
  //   where2 = force? where1;
  //   checkMissing(where2);
  //   return where2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2431373493_5, 0, NULL, CCP, RHO);
  // r9 = dyn getClassDef(p4, p5)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getClassDef1, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 4 [r9]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L9_:;
  // st value = r9
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r9_1, RHO);
  (void)(Rsh_Fir_reg_r9_1);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L3_:;
  // c1 = `as.logical`(r11)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args20);
  // if c1 then L13() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L13()
    goto L13_;
  } else {
  // L4()
    goto L4_;
  }

L10_:;
  // value = ld value
  Rsh_Fir_reg_value = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

L11_:;
  // r10 = dyn base(<sym value>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_1;
  goto L3_;

D2_:;
  // deopt 7 [value]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_value;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L7()
  // L7()
  goto L7_;

L7_:;
  // value2 = ld value
  Rsh_Fir_reg_value2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L22() else D8()
  // L22()
  goto L22_;

L12_:;
  // value1 = force? value
  Rsh_Fir_reg_value1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value);
  // checkMissing(value1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_value1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // c = `==`(value1, NULL)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args23);
  // goto L3(c)
  // L3(c)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_c;
  goto L3_;

L13_:;
  // _Force1 = ld `.Force`
  Rsh_Fir_reg__Force1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

D3_:;
  // deopt 10 [_Force1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg__Force1_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 32 [value2]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_value2_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L14_:;
  // _Force2 = force? _Force1
  Rsh_Fir_reg__Force2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Force1_);
  // checkMissing(_Force2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg__Force2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // r12 = `!`(_Force2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg__Force2_;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args25);
  // c2 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args26);
  // if c2 then L15() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L15()
    goto L15_;
  } else {
  // L5()
    goto L5_;
  }

L22_:;
  // value3 = force? value2
  Rsh_Fir_reg_value3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value2_);
  // checkMissing(value3)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_value3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return value3
  return Rsh_Fir_reg_value3_;

L5_:;
  // makeClassRepresentation = ldf makeClassRepresentation
  Rsh_Fir_reg_makeClassRepresentation = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

L6_:;
  // goto L7()
  // L7()
  goto L7_;

L15_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p8 = prom<V +>{
  //   gettextf = ldf gettextf;
  //   p7 = prom<V +>{
  //     dQuote = ldf dQuote;
  //     p6 = prom<V +>{
  //       Class5 = ld Class;
  //       Class6 = force? Class5;
  //       checkMissing(Class6);
  //       return Class6;
  //     };
  //     r14 = dyn dQuote(p6);
  //     return r14;
  //   };
  //   r16 = dyn gettextf("%s is not a defined class", p7);
  //   return r16;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2431373493_6, 0, NULL, CCP, RHO);
  // r18 = dyn stop[, domain](p8, NA_LGL)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

L19_:;
  // p9 = prom<V +>{
  //   Class7 = ld Class;
  //   Class8 = force? Class7;
  //   checkMissing(Class8);
  //   return Class8;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2431373493_9, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   where3 = ld where;
  //   where4 = force? where3;
  //   checkMissing(where4);
  //   return where4;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2431373493_10, 0, NULL, CCP, RHO);
  // r22 = dyn makeClassRepresentation[, package, virtual, where](p9, "base", TRUE, p10)
  SEXP Rsh_Fir_array_args34[4];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args34[3] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names15[4];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_arg_names15[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_arg_names15[3] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_makeClassRepresentation, 4, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L20() else D7()
  // L20()
  goto L20_;

D5_:;
  // deopt 18 [r18]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 28 [r22]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L17_:;
  // goto L6(r18)
  // L6(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L6_;

L20_:;
  // st value = r22
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // goto L6(r22)
  // L6(r22)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r22_;
  goto L6_;
}
SEXP Rsh_Fir_user_promise_inner2431373493_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__classEnv;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2431373493/0: expected 0, got %d", NCAPTURES);

  // _classEnv = ldf `.classEnv`
  Rsh_Fir_reg__classEnv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // p = prom<V +>{
  //   Class1 = ld Class;
  //   Class2 = force? Class1;
  //   checkMissing(Class2);
  //   return Class2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2431373493_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   topenv = ldf topenv;
  //   p1 = prom<V +>{
  //     parent_frame = ldf `parent.frame`;
  //     r1 = dyn parent_frame();
  //     return r1;
  //   };
  //   r3 = dyn topenv(p1);
  //   return r3;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2431373493_2, 0, NULL, CCP, RHO);
  // r5 = dyn _classEnv(p, p2, FALSE)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__classEnv, 3, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names9, CCP, RHO);
  // return r5
  return Rsh_Fir_reg_r5_;
}
SEXP Rsh_Fir_user_promise_inner2431373493_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Class1_;
  SEXP Rsh_Fir_reg_Class2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2431373493/0: expected 0, got %d", NCAPTURES);

  // Class1 = ld Class
  Rsh_Fir_reg_Class1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // Class2 = force? Class1
  Rsh_Fir_reg_Class2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Class1_);
  // checkMissing(Class2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_Class2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return Class2
  return Rsh_Fir_reg_Class2_;
}
SEXP Rsh_Fir_user_promise_inner2431373493_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_topenv;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r3_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2431373493/0: expected 0, got %d", NCAPTURES);

  // topenv = ldf topenv
  Rsh_Fir_reg_topenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // p1 = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r1 = dyn parent_frame();
  //   return r1;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2431373493_3, 0, NULL, CCP, RHO);
  // r3 = dyn topenv(p1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_topenv, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names8, CCP, RHO);
  // return r3
  return Rsh_Fir_reg_r3_1;
}
SEXP Rsh_Fir_user_promise_inner2431373493_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_parent_frame;
  SEXP Rsh_Fir_reg_r1_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2431373493/0: expected 0, got %d", NCAPTURES);

  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // r1 = dyn parent_frame()
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r1
  return Rsh_Fir_reg_r1_1;
}
SEXP Rsh_Fir_user_promise_inner2431373493_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Class3_;
  SEXP Rsh_Fir_reg_Class4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2431373493/0: expected 0, got %d", NCAPTURES);

  // Class3 = ld Class
  Rsh_Fir_reg_Class3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // Class4 = force? Class3
  Rsh_Fir_reg_Class4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Class3_);
  // checkMissing(Class4)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_Class4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return Class4
  return Rsh_Fir_reg_Class4_;
}
SEXP Rsh_Fir_user_promise_inner2431373493_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_where1_;
  SEXP Rsh_Fir_reg_where2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2431373493/0: expected 0, got %d", NCAPTURES);

  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return where2
  return Rsh_Fir_reg_where2_;
}
SEXP Rsh_Fir_user_promise_inner2431373493_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2431373493/0: expected 0, got %d", NCAPTURES);

  // gettextf = ldf gettextf
  Rsh_Fir_reg_gettextf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // p7 = prom<V +>{
  //   dQuote = ldf dQuote;
  //   p6 = prom<V +>{
  //     Class5 = ld Class;
  //     Class6 = force? Class5;
  //     checkMissing(Class6);
  //     return Class6;
  //   };
  //   r14 = dyn dQuote(p6);
  //   return r14;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2431373493_7, 0, NULL, CCP, RHO);
  // r16 = dyn gettextf("%s is not a defined class", p7)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names13, CCP, RHO);
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_user_promise_inner2431373493_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_dQuote;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2431373493/0: expected 0, got %d", NCAPTURES);

  // dQuote = ldf dQuote
  Rsh_Fir_reg_dQuote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // p6 = prom<V +>{
  //   Class5 = ld Class;
  //   Class6 = force? Class5;
  //   checkMissing(Class6);
  //   return Class6;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2431373493_8, 0, NULL, CCP, RHO);
  // r14 = dyn dQuote(p6)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dQuote, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names12, CCP, RHO);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_inner2431373493_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Class5_;
  SEXP Rsh_Fir_reg_Class6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2431373493/0: expected 0, got %d", NCAPTURES);

  // Class5 = ld Class
  Rsh_Fir_reg_Class5_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // Class6 = force? Class5
  Rsh_Fir_reg_Class6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Class5_);
  // checkMissing(Class6)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_Class6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return Class6
  return Rsh_Fir_reg_Class6_;
}
SEXP Rsh_Fir_user_promise_inner2431373493_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Class7_;
  SEXP Rsh_Fir_reg_Class8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2431373493/0: expected 0, got %d", NCAPTURES);

  // Class7 = ld Class
  Rsh_Fir_reg_Class7_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // Class8 = force? Class7
  Rsh_Fir_reg_Class8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Class7_);
  // checkMissing(Class8)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_Class8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return Class8
  return Rsh_Fir_reg_Class8_;
}
SEXP Rsh_Fir_user_promise_inner2431373493_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_where3_;
  SEXP Rsh_Fir_reg_where4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2431373493/0: expected 0, got %d", NCAPTURES);

  // where3 = ld where
  Rsh_Fir_reg_where3_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // where4 = force? where3
  Rsh_Fir_reg_where4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where3_);
  // checkMissing(where4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_where4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return where4
  return Rsh_Fir_reg_where4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
