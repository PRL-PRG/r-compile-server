#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1183189106_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1183189106_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1183189106_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1183189106_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1183189106_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1183189106_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1183189106_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1183189106_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1183189106_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1183189106_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1183189106_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1183189106_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1183189106_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1183189106_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1183189106_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1183189106_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1183189106_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1183189106_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1183189106_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_getPackageName;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_getPackageName1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_getPackageName2_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_getPackageName3_;
  SEXP Rsh_Fir_reg_r15_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1183189106
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1183189106_, RHO, CCP);
  // st getPackageName = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // getPackageName = ldf getPackageName
  Rsh_Fir_reg_getPackageName = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   sym = ldf length;
  //   base = ldf length in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   search = ldf search;
  //   r3 = dyn search();
  //   length = ldf length in base;
  //   r4 = dyn length(r3);
  //   goto L0(r4);
  // L2():
  //   r1 = dyn base(<lang search()>);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r6 = dyn getPackageName(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getPackageName, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 6 [r6]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // getPackageName1 = ldf getPackageName
  Rsh_Fir_reg_getPackageName1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p1 = prom<V +>{
  //   sym1 = ldf baseenv;
  //   base1 = ldf baseenv in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r8):
  //   return r8;
  // L1():
  //   baseenv = ldf baseenv in base;
  //   r9 = dyn baseenv();
  //   goto L0(r9);
  // L2():
  //   r7 = dyn base1();
  //   goto L0(r7);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r11 = dyn getPackageName1(p1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getPackageName1_, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 10 [r11]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // getPackageName2 = ldf getPackageName
  Rsh_Fir_reg_getPackageName2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p2 = prom<V +>{
  //   asNamespace = ldf asNamespace;
  //   r12 = dyn asNamespace("base");
  //   return r12;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r14 = dyn getPackageName2(p2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getPackageName2_, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 14 [r14]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // getPackageName3 = ldf getPackageName
  Rsh_Fir_reg_getPackageName3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // r15 = dyn getPackageName3("package:base")
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getPackageName3_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 18 [r15]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_search;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r2
  return Rsh_Fir_reg_r2_;

L1_:;
  // search = ldf search
  Rsh_Fir_reg_search = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // r3 = dyn search()
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_search, 0, NULL, NULL, CCP, RHO);
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r4 = dyn length(r3)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r4_;
  goto L0_;

L2_:;
  // r1 = dyn base(<lang search()>)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_baseenv;
  SEXP Rsh_Fir_reg_r9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf baseenv
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf baseenv in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r8
  return Rsh_Fir_reg_r8_;

L1_:;
  // baseenv = ldf baseenv in base
  Rsh_Fir_reg_baseenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r9 = dyn baseenv()
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_baseenv, 0, NULL, NULL, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L0_;

L2_:;
  // r7 = dyn base1()
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 0, NULL, NULL, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_asNamespace;
  SEXP Rsh_Fir_reg_r12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // asNamespace = ldf asNamespace
  Rsh_Fir_reg_asNamespace = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // r12 = dyn asNamespace("base")
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_asNamespace, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_user_function_inner1183189106_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1183189106 dynamic dispatch ([where, create])

  return Rsh_Fir_user_version_inner1183189106_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1183189106_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1183189106 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1183189106/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_where;
  SEXP Rsh_Fir_reg_create;
  SEXP Rsh_Fir_reg_where_isMissing;
  SEXP Rsh_Fir_reg_where_orDefault;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_create_isMissing;
  SEXP Rsh_Fir_reg_create_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_where1_;
  SEXP Rsh_Fir_reg_where2_;
  SEXP Rsh_Fir_reg_as_environment;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_get0_;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_pkg;
  SEXP Rsh_Fir_reg_pkg1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_saved;
  SEXP Rsh_Fir_reg_saved1_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_pkg2_;
  SEXP Rsh_Fir_reg_pkg3_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_where3_;
  SEXP Rsh_Fir_reg_where4_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_env2_;
  SEXP Rsh_Fir_reg_env3_;
  SEXP Rsh_Fir_reg_topenv1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_identical1_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_Sys_getenv;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_environmentName;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_envName;
  SEXP Rsh_Fir_reg_envName1_;
  SEXP Rsh_Fir_reg_nzchar;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_regexpr;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg__rmpkg;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_pkg4_;
  SEXP Rsh_Fir_reg_pkg5_;
  SEXP Rsh_Fir_reg_nzchar1_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_env6_;
  SEXP Rsh_Fir_reg_env7_;
  SEXP Rsh_Fir_reg__GlobalEnv;
  SEXP Rsh_Fir_reg__GlobalEnv1_;
  SEXP Rsh_Fir_reg_identical2_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_env8_;
  SEXP Rsh_Fir_reg_env9_;
  SEXP Rsh_Fir_reg__BaseNamespaceEnv;
  SEXP Rsh_Fir_reg__BaseNamespaceEnv1_;
  SEXP Rsh_Fir_reg_identical3_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_where5_;
  SEXP Rsh_Fir_reg_where6_;
  SEXP Rsh_Fir_reg_is_numeric;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_search1;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_where7_;
  SEXP Rsh_Fir_reg_where8_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_where9_;
  SEXP Rsh_Fir_reg_where10_;
  SEXP Rsh_Fir_reg_is_environment;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_search1_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_i7_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_db;
  SEXP Rsh_Fir_reg_db1_;
  SEXP Rsh_Fir_reg_as_environment1_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_where11_;
  SEXP Rsh_Fir_reg_where12_;
  SEXP Rsh_Fir_reg_identical4_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_db2_;
  SEXP Rsh_Fir_reg_db3_;
  SEXP Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_envName6_;
  SEXP Rsh_Fir_reg_envName7_;
  SEXP Rsh_Fir_reg_nzchar2_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_envName8_;
  SEXP Rsh_Fir_reg_envName9_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_where13_;
  SEXP Rsh_Fir_reg_where14_;
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg__rmpkg1_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_pkg8_;
  SEXP Rsh_Fir_reg_pkg9_;
  SEXP Rsh_Fir_reg_nzchar3_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_topenv2_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_top;
  SEXP Rsh_Fir_reg_top1_;
  SEXP Rsh_Fir_reg_env12_;
  SEXP Rsh_Fir_reg_env13_;
  SEXP Rsh_Fir_reg_identical5_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_getPackageName1;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_pkg10_;
  SEXP Rsh_Fir_reg_pkg11_;
  SEXP Rsh_Fir_reg_nzchar4_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_create3_;
  SEXP Rsh_Fir_reg_create4_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_Sys_time;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg_as_character1_;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r102_;
  SEXP Rsh_Fir_reg_saved2_;
  SEXP Rsh_Fir_reg_saved3_;
  SEXP Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_c39_;
  SEXP Rsh_Fir_reg_environmentIsLocked;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r105_;
  SEXP Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_reg_c40_;
  SEXP Rsh_Fir_reg_c41_;
  SEXP Rsh_Fir_reg_c43_;
  SEXP Rsh_Fir_reg_setPackageName;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r109_;
  SEXP Rsh_Fir_reg_r110_;
  SEXP Rsh_Fir_reg_pkg16_;
  SEXP Rsh_Fir_reg_pkg17_;

  // Bind parameters
  Rsh_Fir_reg_where = PARAMS[0];
  Rsh_Fir_reg_create = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // where_isMissing = missing.0(where)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_where;
  Rsh_Fir_reg_where_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if where_isMissing then L0() else L1(where)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_where_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(where)
    Rsh_Fir_reg_where_orDefault = Rsh_Fir_reg_where;
    goto L1_;
  }

L0_:;
  // p1 = prom<V +>{
  //   topenv = ldf topenv;
  //   p = prom<V +>{
  //     parent_frame = ldf `parent.frame`;
  //     r = dyn parent_frame();
  //     return r;
  //   };
  //   r2 = dyn topenv(p);
  //   return r2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1183189106_, 0, NULL, CCP, RHO);
  // goto L1(p1)
  // L1(p1)
  Rsh_Fir_reg_where_orDefault = Rsh_Fir_reg_p1_1;
  goto L1_;

L1_:;
  // st where = where_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_where_orDefault, RHO);
  (void)(Rsh_Fir_reg_where_orDefault);
  // create_isMissing = missing.0(create)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_create;
  Rsh_Fir_reg_create_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args11);
  // if create_isMissing then L2(TRUE) else L2(create)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_create_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_create_orDefault = Rsh_const(CCP, 11);
    goto L2_;
  } else {
  // L2(create)
    Rsh_Fir_reg_create_orDefault = Rsh_Fir_reg_create;
    goto L2_;
  }

L2_:;
  // st create = create_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_create_orDefault, RHO);
  (void)(Rsh_Fir_reg_create_orDefault);
  // sym = ldf `as.environment`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base = ldf `as.environment` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L3_:;
  // st env = r5
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // get0 = ldf get0
  Rsh_Fir_reg_get0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L58() else D2()
  // L58()
  goto L58_;

L54_:;
  // where1 = ld where
  Rsh_Fir_reg_where1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L56() else D0()
  // L56()
  goto L56_;

L55_:;
  // r4 = dyn base(<sym where>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_1;
  goto L3_;

D0_:;
  // deopt 2 [where1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_where1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L56_:;
  // where2 = force? where1
  Rsh_Fir_reg_where2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where1_);
  // checkMissing(where2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_where2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // as_environment = ldf `as.environment` in base
  Rsh_Fir_reg_as_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r6 = dyn as_environment(where2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_where2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_environment, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L57() else D1()
  // L57()
  goto L57_;

L58_:;
  // p2 = prom<V +>{
  //   env = ld env;
  //   env1 = force? env;
  //   checkMissing(env1);
  //   return env1;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1183189106_2, 0, NULL, CCP, RHO);
  // r8 = dyn get0[, , inherits](".packageName", p2, FALSE)
  SEXP Rsh_Fir_array_args17[3];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get0_, 3, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L59() else D3()
  // L59()
  goto L59_;

D1_:;
  // deopt 5 [r6]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 13 [r8]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_1;
  goto L3_;

L59_:;
  // st pkg = r8
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r8_1, RHO);
  (void)(Rsh_Fir_reg_r8_1);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard1 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L4_:;
  // r11 = `!`(r10)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args19);
  // st saved = r11
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r11_1, RHO);
  (void)(Rsh_Fir_reg_r11_1);
  // saved = ld saved
  Rsh_Fir_reg_saved = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L63() else D5()
  // L63()
  goto L63_;

L60_:;
  // pkg = ld pkg
  Rsh_Fir_reg_pkg = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L62() else D4()
  // L62()
  goto L62_;

L61_:;
  // r9 = dyn base1(<sym pkg>)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L4(r9)
  // L4(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_1;
  goto L4_;

D4_:;
  // deopt 16 [pkg]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_pkg;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 21 [saved]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_saved;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L62_:;
  // pkg1 = force? pkg
  Rsh_Fir_reg_pkg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg);
  // checkMissing(pkg1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_pkg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c = `==`(pkg1, NULL)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_pkg1_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args22);
  // goto L4(c)
  // L4(c)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_c;
  goto L4_;

L63_:;
  // saved1 = force? saved
  Rsh_Fir_reg_saved1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_saved);
  // checkMissing(saved1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_saved1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(saved1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_saved1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args24);
  // if c1 then L64() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L64()
    goto L64_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // sym2 = ldf identical
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base2 = ldf identical in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard2 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L64_:;
  // pkg2 = ld pkg
  Rsh_Fir_reg_pkg2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L65() else D6()
  // L65()
  goto L65_;

D6_:;
  // deopt 23 [pkg2]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_pkg2_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L7_:;
  // c2 = `as.logical`(r15)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args26);
  // if c2 then L8(c2) else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L8(c2)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c2_;
    goto L8_;
  } else {
  // L72()
    goto L72_;
  }

L65_:;
  // pkg3 = force? pkg2
  Rsh_Fir_reg_pkg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg2_);
  // checkMissing(pkg3)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_pkg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return pkg3
  return Rsh_Fir_reg_pkg3_;

L68_:;
  // where3 = ld where
  Rsh_Fir_reg_where3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L70() else D7()
  // L70()
  goto L70_;

L69_:;
  // r14 = dyn base2(<sym where>, 1.0)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L7(r14)
  // L7(r14)
  Rsh_Fir_reg_r15_1 = Rsh_Fir_reg_r14_1;
  goto L7_;

D7_:;
  // deopt 28 [where3]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_where3_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L8_:;
  // c11 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args29);
  // if c11 then L80() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L80()
    goto L80_;
  } else {
  // L10()
    goto L10_;
  }

L70_:;
  // where4 = force? where3
  Rsh_Fir_reg_where4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where3_);
  // checkMissing(where4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_where4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r16 = dyn identical(where4, 1.0, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args31[9];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_where4_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args31[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args31[3] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args31[4] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args31[5] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args31[6] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args31[7] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args31[8] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names13[9];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_array_arg_names13[3] = R_MissingArg;
  Rsh_Fir_array_arg_names13[4] = R_MissingArg;
  Rsh_Fir_array_arg_names13[5] = R_MissingArg;
  Rsh_Fir_array_arg_names13[6] = R_MissingArg;
  Rsh_Fir_array_arg_names13[7] = R_MissingArg;
  Rsh_Fir_array_arg_names13[8] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L71() else D8()
  // L71()
  goto L71_;

L72_:;
  // sym3 = ldf identical
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base3 = ldf identical in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard3 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

D8_:;
  // deopt 39 [r16]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L9_:;
  // c8 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args33);
  // c9 = `||`(c7, c8)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args34);
  // goto L8(c9)
  // L8(c9)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c9_;
  goto L8_;

L10_:;
  // goto L11("")
  // L11("")
  Rsh_Fir_reg_r24_ = Rsh_const(CCP, 25);
  goto L11_;

L11_:;
  // st pkg = r24
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // environmentName = ldf environmentName
  Rsh_Fir_reg_environmentName = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L84() else D15()
  // L84()
  goto L84_;

L71_:;
  // goto L7(r16)
  // L7(r16)
  Rsh_Fir_reg_r15_1 = Rsh_Fir_reg_r16_;
  goto L7_;

L73_:;
  // env2 = ld env
  Rsh_Fir_reg_env2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L75() else D9()
  // L75()
  goto L75_;

L74_:;
  // r17 = dyn base3(<sym env>, <lang topenv(parent.frame())>)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L9(c2, r17)
  // L9(c2, r17)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L9_;

L80_:;
  // Sys_getenv = ldf `Sys.getenv`
  Rsh_Fir_reg_Sys_getenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L81() else D13()
  // L81()
  goto L81_;

D9_:;
  // deopt 42 [c2, env2]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_env2_;
  Rsh_Fir_deopt(42, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 59 []
  Rsh_Fir_deopt(59, 0, NULL, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 66 []
  Rsh_Fir_deopt(66, 0, NULL, CCP, RHO);
  return R_NilValue;

L75_:;
  // env3 = force? env2
  Rsh_Fir_reg_env3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env2_);
  // checkMissing(env3)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_env3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // topenv1 = ldf topenv
  Rsh_Fir_reg_topenv1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L76() else D10()
  // L76()
  goto L76_;

L81_:;
  // r23 = dyn Sys_getenv("R_PACKAGE_NAME")
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_getenv, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L82() else D14()
  // L82()
  goto L82_;

L84_:;
  // p4 = prom<V +>{
  //   env4 = ld env;
  //   env5 = force? env4;
  //   checkMissing(env5);
  //   return env5;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1183189106_3, 0, NULL, CCP, RHO);
  // r26 = dyn environmentName(p4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environmentName, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L85() else D16()
  // L85()
  goto L85_;

D10_:;
  // deopt 45 [c2]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 61 [r23]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 68 [r26]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L76_:;
  // p3 = prom<V +>{
  //   parent_frame1 = ldf `parent.frame`;
  //   r19 = dyn parent_frame1();
  //   return r19;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1183189106_4, 0, NULL, CCP, RHO);
  // r21 = dyn topenv1(p3)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_topenv1_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L77() else D11()
  // L77()
  goto L77_;

L82_:;
  // goto L11(r23)
  // L11(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L11_;

L85_:;
  // st envName = r26
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // sym4 = ldf nzchar
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base4 = ldf nzchar in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard4 then L86() else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L86()
    goto L86_;
  } else {
  // L87()
    goto L87_;
  }

D11_:;
  // deopt 47 [c2, r21]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(47, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L12_:;
  // c12 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args42);
  // if c12 then L90() else L13(c12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L90()
    goto L90_;
  } else {
  // L13(c12)
    Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c12_;
    goto L13_;
  }

L77_:;
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r22 = dyn identical1(env3, r21, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args43[9];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_env3_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args43[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args43[3] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args43[4] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args43[5] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args43[6] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args43[7] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args43[8] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names18[9];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_array_arg_names18[4] = R_MissingArg;
  Rsh_Fir_array_arg_names18[5] = R_MissingArg;
  Rsh_Fir_array_arg_names18[6] = R_MissingArg;
  Rsh_Fir_array_arg_names18[7] = R_MissingArg;
  Rsh_Fir_array_arg_names18[8] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L78() else D12()
  // L78()
  goto L78_;

L86_:;
  // envName = ld envName
  Rsh_Fir_reg_envName = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L88() else D17()
  // L88()
  goto L88_;

L87_:;
  // r27 = dyn base4(<sym envName>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L12(r27)
  // L12(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L12_;

D12_:;
  // deopt 56 [c2, r22]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(56, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 72 [envName]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_envName;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L13_:;
  // c18 = `as.logical`(c14)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args45);
  // if c18 then L94() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L94()
    goto L94_;
  } else {
  // L14()
    goto L14_;
  }

L78_:;
  // goto L9(c2, r22)
  // L9(c2, r22)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r22_;
  goto L9_;

L88_:;
  // envName1 = force? envName
  Rsh_Fir_reg_envName1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envName);
  // checkMissing(envName1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_envName1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r29 = dyn nzchar(envName1)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_envName1_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L89() else D18()
  // L89()
  goto L89_;

L90_:;
  // regexpr = ldf regexpr
  Rsh_Fir_reg_regexpr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L91() else D19()
  // L91()
  goto L91_;

D18_:;
  // deopt 75 [r29]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 77 [c12]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // sym5 = ldf nzchar
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base5 = ldf nzchar in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args48);
  // if guard5 then L98() else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L98()
    goto L98_;
  } else {
  // L99()
    goto L99_;
  }

L89_:;
  // goto L12(r29)
  // L12(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L12_;

L91_:;
  // p5 = prom<V +>{
  //   envName2 = ld envName;
  //   envName3 = force? envName2;
  //   checkMissing(envName3);
  //   return envName3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1183189106_5, 0, NULL, CCP, RHO);
  // r31 = dyn regexpr[, , fixed]("package:", p5, TRUE)
  SEXP Rsh_Fir_array_args50[3];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args50[2] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_regexpr, 3, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L92() else D20()
  // L92()
  goto L92_;

L94_:;
  // _rmpkg = ldf `.rmpkg`
  Rsh_Fir_reg__rmpkg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L95() else D21()
  // L95()
  goto L95_;

D20_:;
  // deopt 82 [c12, r31]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(82, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 87 []
  Rsh_Fir_deopt(87, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // r39 = `!`(r37)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args51);
  // c19 = `as.logical`(r39)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args52);
  // if c19 then L102() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L102()
    goto L102_;
  } else {
  // L17()
    goto L17_;
  }

L92_:;
  // r32 = `==`(r31, 1)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args53);
  // c15 = `as.logical`(r32)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args54);
  // c16 = `&&`(c12, c15)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args55);
  // goto L13(c16)
  // L13(c16)
  Rsh_Fir_reg_c14_ = Rsh_Fir_reg_c16_;
  goto L13_;

L95_:;
  // p6 = prom<V +>{
  //   envName4 = ld envName;
  //   envName5 = force? envName4;
  //   checkMissing(envName5);
  //   return envName5;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1183189106_6, 0, NULL, CCP, RHO);
  // r34 = dyn _rmpkg(p6)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__rmpkg, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L96() else D22()
  // L96()
  goto L96_;

L98_:;
  // pkg4 = ld pkg
  Rsh_Fir_reg_pkg4_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L100() else D23()
  // L100()
  goto L100_;

L99_:;
  // r36 = dyn base5(<sym pkg>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L16(r36)
  // L16(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L16_;

D22_:;
  // deopt 89 [r34]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 95 [pkg4]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_pkg4_;
  Rsh_Fir_deopt(95, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L17_:;
  // goto L39()
  // L39()
  goto L39_;

L39_:;
  // sym14 = ldf nzchar
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base14 = ldf nzchar in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard14 then L164() else L165()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L164()
    goto L164_;
  } else {
  // L165()
    goto L165_;
  }

L96_:;
  // st pkg = r34
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r34_, RHO);
  (void)(Rsh_Fir_reg_r34_);
  // goto L15()
  // L15()
  goto L15_;

L100_:;
  // pkg5 = force? pkg4
  Rsh_Fir_reg_pkg5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg4_);
  // checkMissing(pkg5)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_pkg5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // nzchar1 = ldf nzchar in base
  Rsh_Fir_reg_nzchar1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r38 = dyn nzchar1(pkg5)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_pkg5_;
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar1_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L101() else D24()
  // L101()
  goto L101_;

L102_:;
  // sym6 = ldf identical
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base6 = ldf identical in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard6 then L103() else L104()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L103()
    goto L103_;
  } else {
  // L104()
    goto L104_;
  }

D24_:;
  // deopt 98 [r38]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L18_:;
  // c20 = `as.logical`(r41)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args63);
  // if c20 then L108() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L108()
    goto L108_;
  } else {
  // L19()
    goto L19_;
  }

L40_:;
  // r77 = `!`(r75)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args64);
  // c28 = `as.logical`(r77)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args65);
  // if c28 then L168() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L168()
    goto L168_;
  } else {
  // L41()
    goto L41_;
  }

L101_:;
  // goto L16(r38)
  // L16(r38)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L16_;

L103_:;
  // env6 = ld env
  Rsh_Fir_reg_env6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L105() else D25()
  // L105()
  goto L105_;

L104_:;
  // r40 = dyn base6(<sym env>, <sym .GlobalEnv>)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L18(r40)
  // L18(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L18_;

L164_:;
  // pkg8 = ld pkg
  Rsh_Fir_reg_pkg8_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L166() else D52()
  // L166()
  goto L166_;

L165_:;
  // r74 = dyn base14(<sym pkg>)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L40(r74)
  // L40(r74)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r74_;
  goto L40_;

D25_:;
  // deopt 102 [env6]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_env6_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D52_:;
  // deopt 212 [pkg8]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_pkg8_;
  Rsh_Fir_deopt(212, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L19_:;
  // sym7 = ldf identical
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base7 = ldf identical in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args68);
  // if guard7 then L110() else L111()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L110()
    goto L110_;
  } else {
  // L111()
    goto L111_;
  }

L20_:;
  // goto L39()
  // L39()
  goto L39_;

L41_:;
  // goto L45()
  // L45()
  goto L45_;

L45_:;
  // sym16 = ldf nzchar
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base16 = ldf nzchar in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args69);
  // if guard16 then L181() else L182()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L181()
    goto L181_;
  } else {
  // L182()
    goto L182_;
  }

L105_:;
  // env7 = force? env6
  Rsh_Fir_reg_env7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env6_);
  // checkMissing(env7)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_env7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // _GlobalEnv = ld `.GlobalEnv`
  Rsh_Fir_reg__GlobalEnv = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L106() else D26()
  // L106()
  goto L106_;

L108_:;
  // st pkg = ".GlobalEnv"
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_const(CCP, 38), RHO);
  (void)(Rsh_const(CCP, 38));
  // goto L20(".GlobalEnv")
  // L20(".GlobalEnv")
  Rsh_Fir_reg_r43_ = Rsh_const(CCP, 38);
  goto L20_;

L166_:;
  // pkg9 = force? pkg8
  Rsh_Fir_reg_pkg9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg8_);
  // checkMissing(pkg9)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_pkg9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // nzchar3 = ldf nzchar in base
  Rsh_Fir_reg_nzchar3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r76 = dyn nzchar3(pkg9)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_pkg9_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar3_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L167() else D53()
  // L167()
  goto L167_;

L168_:;
  // topenv2 = ldf topenv
  Rsh_Fir_reg_topenv2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L169() else D54()
  // L169()
  goto L169_;

D26_:;
  // deopt 104 [_GlobalEnv]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg__GlobalEnv;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D53_:;
  // deopt 215 [r76]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(215, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D54_:;
  // deopt 218 []
  Rsh_Fir_deopt(218, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // c21 = `as.logical`(r45)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args73);
  // if c21 then L115() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L115()
    goto L115_;
  } else {
  // L22()
    goto L22_;
  }

L46_:;
  // r92 = `!`(r90)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args74);
  // c30 = `as.logical`(r92)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args75);
  // if c30 then L185() else L47(c30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L185()
    goto L185_;
  } else {
  // L47(c30)
    Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c30_;
    goto L47_;
  }

L106_:;
  // _GlobalEnv1 = force? _GlobalEnv
  Rsh_Fir_reg__GlobalEnv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__GlobalEnv);
  // checkMissing(_GlobalEnv1)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg__GlobalEnv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // identical2 = ldf identical in base
  Rsh_Fir_reg_identical2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r42 = dyn identical2(env7, _GlobalEnv1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args77[9];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_env7_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg__GlobalEnv1_;
  Rsh_Fir_array_args77[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args77[3] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args77[4] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args77[5] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args77[6] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args77[7] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args77[8] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names28[9];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_array_arg_names28[3] = R_MissingArg;
  Rsh_Fir_array_arg_names28[4] = R_MissingArg;
  Rsh_Fir_array_arg_names28[5] = R_MissingArg;
  Rsh_Fir_array_arg_names28[6] = R_MissingArg;
  Rsh_Fir_array_arg_names28[7] = R_MissingArg;
  Rsh_Fir_array_arg_names28[8] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical2_, 9, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L107() else D27()
  // L107()
  goto L107_;

L110_:;
  // env8 = ld env
  Rsh_Fir_reg_env8_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L112() else D28()
  // L112()
  goto L112_;

L111_:;
  // r44 = dyn base7(<sym env>, <sym .BaseNamespaceEnv>)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L21(r44)
  // L21(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L21_;

L167_:;
  // goto L40(r76)
  // L40(r76)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r76_;
  goto L40_;

L169_:;
  // p8 = prom<V +>{
  //   env10 = ld env;
  //   env11 = force? env10;
  //   checkMissing(env11);
  //   return env11;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1183189106_7, 0, NULL, CCP, RHO);
  // r79 = dyn topenv2(p8)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_topenv2_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L170() else D55()
  // L170()
  goto L170_;

L181_:;
  // pkg10 = ld pkg
  Rsh_Fir_reg_pkg10_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L183() else D61()
  // L183()
  goto L183_;

L182_:;
  // r89 = dyn base16(<sym pkg>)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L46(r89)
  // L46(r89)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r89_;
  goto L46_;

D27_:;
  // deopt 114 [r42]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 120 [env8]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_env8_;
  Rsh_Fir_deopt(120, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D55_:;
  // deopt 220 [r79]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_deopt(220, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D61_:;
  // deopt 251 [pkg10]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_pkg10_;
  Rsh_Fir_deopt(251, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L22_:;
  // sym8 = ldf `is.numeric`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base8 = ldf `is.numeric` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard8 then L117() else L118()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L117()
    goto L117_;
  } else {
  // L118()
    goto L118_;
  }

L47_:;
  // c36 = `as.logical`(c32)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args83);
  // if c36 then L188() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L188()
    goto L188_;
  } else {
  // L48()
    goto L48_;
  }

L107_:;
  // goto L18(r42)
  // L18(r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L18_;

L112_:;
  // env9 = force? env8
  Rsh_Fir_reg_env9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env8_);
  // checkMissing(env9)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_env9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // _BaseNamespaceEnv = ld `.BaseNamespaceEnv`
  Rsh_Fir_reg__BaseNamespaceEnv = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L113() else D29()
  // L113()
  goto L113_;

L115_:;
  // st pkg = "base"
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_const(CCP, 6), RHO);
  (void)(Rsh_const(CCP, 6));
  // goto L20("base")
  // L20("base")
  Rsh_Fir_reg_r43_ = Rsh_const(CCP, 6);
  goto L20_;

L170_:;
  // st top = r79
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_r79_, RHO);
  (void)(Rsh_Fir_reg_r79_);
  // sym15 = ldf identical
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base15 = ldf identical in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args85);
  // if guard15 then L171() else L172()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L171()
    goto L171_;
  } else {
  // L172()
    goto L172_;
  }

L183_:;
  // pkg11 = force? pkg10
  Rsh_Fir_reg_pkg11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg10_);
  // checkMissing(pkg11)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_pkg11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // nzchar4 = ldf nzchar in base
  Rsh_Fir_reg_nzchar4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r91 = dyn nzchar4(pkg11)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_pkg11_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar4_, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L184() else D62()
  // L184()
  goto L184_;

L185_:;
  // create3 = ld create
  Rsh_Fir_reg_create3_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L186() else D63()
  // L186()
  goto L186_;

D29_:;
  // deopt 122 [_BaseNamespaceEnv]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg__BaseNamespaceEnv;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D62_:;
  // deopt 254 [r91]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_deopt(254, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

D63_:;
  // deopt 256 [c30, create3]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_c30_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_create3_;
  Rsh_Fir_deopt(256, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L23_:;
  // c22 = `as.logical`(r48)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args88);
  // if c22 then L121() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L121()
    goto L121_;
  } else {
  // L24()
    goto L24_;
  }

L42_:;
  // r83 = `!`(r81)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_r81_;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args89);
  // c29 = `as.logical`(r83)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args90);
  // if c29 then L176() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L176()
    goto L176_;
  } else {
  // L43()
    goto L43_;
  }

L48_:;
  // goto L53()
  // L53()
  goto L53_;

L53_:;
  // pkg16 = ld pkg
  Rsh_Fir_reg_pkg16_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L206() else D74()
  // L206()
  goto L206_;

L113_:;
  // _BaseNamespaceEnv1 = force? _BaseNamespaceEnv
  Rsh_Fir_reg__BaseNamespaceEnv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__BaseNamespaceEnv);
  // checkMissing(_BaseNamespaceEnv1)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg__BaseNamespaceEnv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // identical3 = ldf identical in base
  Rsh_Fir_reg_identical3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r46 = dyn identical3(env9, _BaseNamespaceEnv1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args92[9];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_env9_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg__BaseNamespaceEnv1_;
  Rsh_Fir_array_args92[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args92[3] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args92[4] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args92[5] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args92[6] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args92[7] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args92[8] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names33[9];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_array_arg_names33[3] = R_MissingArg;
  Rsh_Fir_array_arg_names33[4] = R_MissingArg;
  Rsh_Fir_array_arg_names33[5] = R_MissingArg;
  Rsh_Fir_array_arg_names33[6] = R_MissingArg;
  Rsh_Fir_array_arg_names33[7] = R_MissingArg;
  Rsh_Fir_array_arg_names33[8] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical3_, 9, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L114() else D30()
  // L114()
  goto L114_;

L117_:;
  // where5 = ld where
  Rsh_Fir_reg_where5_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L119() else D31()
  // L119()
  goto L119_;

L118_:;
  // r47 = dyn base8(<sym where>)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L23(r47)
  // L23(r47)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L23_;

L171_:;
  // top = ld top
  Rsh_Fir_reg_top = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // check L173() else D56()
  // L173()
  goto L173_;

L172_:;
  // r80 = dyn base15(<sym top>, <sym env>)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L42(r80)
  // L42(r80)
  Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r80_;
  goto L42_;

L184_:;
  // goto L46(r91)
  // L46(r91)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r91_;
  goto L46_;

L186_:;
  // create4 = force? create3
  Rsh_Fir_reg_create4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_create3_);
  // checkMissing(create4)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_create4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // c33 = `as.logical`(create4)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_create4_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args96);
  // c34 = `&&`(c30, c33)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_c30_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_c33_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args97);
  // goto L47(c34)
  // L47(c34)
  Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c34_;
  goto L47_;

L188_:;
  // sym17 = ldf `as.character`
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base17 = ldf `as.character` in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args98);
  // if guard17 then L189() else L190()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L189()
    goto L189_;
  } else {
  // L190()
    goto L190_;
  }

D30_:;
  // deopt 132 [r46]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 138 [where5]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_where5_;
  Rsh_Fir_deopt(138, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

D56_:;
  // deopt 224 [top]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_top;
  Rsh_Fir_deopt(224, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

D74_:;
  // deopt 291 [pkg16]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_pkg16_;
  Rsh_Fir_deopt(291, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L24_:;
  // sym9 = ldf `is.environment`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base9 = ldf `is.environment` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args99);
  // if guard9 then L129() else L130()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L129()
    goto L129_;
  } else {
  // L130()
    goto L130_;
  }

L26_:;
  // _rmpkg1 = ldf `.rmpkg`
  Rsh_Fir_reg__rmpkg1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L161() else D50()
  // L161()
  goto L161_;

L43_:;
  // goto L44(NULL)
  // L44(NULL)
  Rsh_Fir_reg_r87_ = Rsh_const(CCP, 22);
  goto L44_;

L44_:;
  // goto L45()
  // L45()
  goto L45_;

L49_:;
  // st pkg = r94
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r94_, RHO);
  (void)(Rsh_Fir_reg_r94_);
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // check L194() else D67()
  // L194()
  goto L194_;

L114_:;
  // goto L21(r46)
  // L21(r46)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r46_;
  goto L21_;

L119_:;
  // where6 = force? where5
  Rsh_Fir_reg_where6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where5_);
  // checkMissing(where6)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_where6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r49 = dyn is_numeric(where6)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_where6_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L120() else D32()
  // L120()
  goto L120_;

L121_:;
  // search = ldf search
  Rsh_Fir_reg_search1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L122() else D33()
  // L122()
  goto L122_;

L173_:;
  // top1 = force? top
  Rsh_Fir_reg_top1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_top);
  // checkMissing(top1)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_top1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // env12 = ld env
  Rsh_Fir_reg_env12_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L174() else D57()
  // L174()
  goto L174_;

L176_:;
  // getPackageName = ldf getPackageName
  Rsh_Fir_reg_getPackageName1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L177() else D59()
  // L177()
  goto L177_;

L189_:;
  // Sys_time = ldf `Sys.time`
  Rsh_Fir_reg_Sys_time = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L191() else D64()
  // L191()
  goto L191_;

L190_:;
  // r93 = dyn base17(<lang Sys.time()>)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L49(r93)
  // L49(r93)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r93_;
  goto L49_;

L206_:;
  // pkg17 = force? pkg16
  Rsh_Fir_reg_pkg17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg16_);
  // checkMissing(pkg17)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_pkg17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return pkg17
  return Rsh_Fir_reg_pkg17_;

D32_:;
  // deopt 141 [r49]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 143 []
  Rsh_Fir_deopt(143, 0, NULL, CCP, RHO);
  return R_NilValue;

D50_:;
  // deopt 204 []
  Rsh_Fir_deopt(204, 0, NULL, CCP, RHO);
  return R_NilValue;

D57_:;
  // deopt 226 [env12]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_env12_;
  Rsh_Fir_deopt(226, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

D59_:;
  // deopt 239 []
  Rsh_Fir_deopt(239, 0, NULL, CCP, RHO);
  return R_NilValue;

D64_:;
  // deopt 262 []
  Rsh_Fir_deopt(262, 0, NULL, CCP, RHO);
  return R_NilValue;

D67_:;
  // deopt 268 []
  Rsh_Fir_deopt(268, 0, NULL, CCP, RHO);
  return R_NilValue;

L27_:;
  // c24 = `as.logical`(r55)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args105);
  // if c24 then L133() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L133()
    goto L133_;
  } else {
  // L28()
    goto L28_;
  }

L120_:;
  // goto L23(r49)
  // L23(r49)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r49_;
  goto L23_;

L122_:;
  // r50 = dyn search()
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_search1, 0, NULL, NULL, CCP, RHO);
  // check L123() else D34()
  // L123()
  goto L123_;

L129_:;
  // where9 = ld where
  Rsh_Fir_reg_where9_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L131() else D36()
  // L131()
  goto L131_;

L130_:;
  // r54 = dyn base9(<sym where>)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L27(r54)
  // L27(r54)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r54_;
  goto L27_;

L161_:;
  // p7 = prom<V +>{
  //   pkg6 = ld pkg;
  //   pkg7 = force? pkg6;
  //   checkMissing(pkg7);
  //   return pkg7;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1183189106_8, 0, NULL, CCP, RHO);
  // r72 = dyn _rmpkg1(p7)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__rmpkg1_, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L162() else D51()
  // L162()
  goto L162_;

L174_:;
  // env13 = force? env12
  Rsh_Fir_reg_env13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env12_);
  // checkMissing(env13)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_env13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // identical5 = ldf identical in base
  Rsh_Fir_reg_identical5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r82 = dyn identical5(top1, env13, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args110[9];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_top1_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_env13_;
  Rsh_Fir_array_args110[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args110[3] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args110[4] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args110[5] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args110[6] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args110[7] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args110[8] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names40[9];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_array_arg_names40[2] = R_MissingArg;
  Rsh_Fir_array_arg_names40[3] = R_MissingArg;
  Rsh_Fir_array_arg_names40[4] = R_MissingArg;
  Rsh_Fir_array_arg_names40[5] = R_MissingArg;
  Rsh_Fir_array_arg_names40[6] = R_MissingArg;
  Rsh_Fir_array_arg_names40[7] = R_MissingArg;
  Rsh_Fir_array_arg_names40[8] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical5_, 9, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L175() else D58()
  // L175()
  goto L175_;

L177_:;
  // p9 = prom<V +>{
  //   top2 = ld top;
  //   top3 = force? top2;
  //   checkMissing(top3);
  //   return top3;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1183189106_9, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   create1 = ld create;
  //   create2 = force? create1;
  //   checkMissing(create2);
  //   return create2;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1183189106_10, 0, NULL, CCP, RHO);
  // r86 = dyn getPackageName[, create](p9, p10)
  SEXP Rsh_Fir_array_args113[2];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args113[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getPackageName1, 2, Rsh_Fir_array_args113, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L178() else D60()
  // L178()
  goto L178_;

L191_:;
  // r95 = dyn Sys_time()
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Sys_time, 0, NULL, NULL, CCP, RHO);
  // check L192() else D65()
  // L192()
  goto L192_;

L194_:;
  // p13 = prom<V +>{
  //   gettextf = ldf gettextf;
  //   p12 = prom<V +>{
  //     sQuote = ldf sQuote;
  //     p11 = prom<V +>{
  //       pkg12 = ld pkg;
  //       pkg13 = force? pkg12;
  //       checkMissing(pkg13);
  //       return pkg13;
  //     };
  //     r98 = dyn sQuote(p11);
  //     return r98;
  //   };
  //   r100 = dyn gettextf("Created a package name, %s, when none found", p12);
  //   return r100;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1183189106_11, 0, NULL, CCP, RHO);
  // r102 = dyn warning[, domain](p13, NA_LGL)
  SEXP Rsh_Fir_array_args117[2];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args117[1] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 2, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L195() else D68()
  // L195()
  goto L195_;

D34_:;
  // deopt 144 [r50]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(144, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 151 [where9]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_where9_;
  Rsh_Fir_deopt(151, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

D51_:;
  // deopt 206 [r72]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(206, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

D58_:;
  // deopt 236 [r82]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(236, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

D60_:;
  // deopt 243 [r86]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(243, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

D65_:;
  // deopt 263 [r95]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_deopt(263, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

D68_:;
  // deopt 272 [r102]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_deopt(272, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L28_:;
  // sym12 = ldf nzchar
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base12 = ldf nzchar in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args118);
  // if guard12 then L150() else L151()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L150()
    goto L150_;
  } else {
  // L151()
    goto L151_;
  }

L123_:;
  // c23 = `is.object`(r50)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args119);
  // if c23 then L124() else L125(r50)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L124()
    goto L124_;
  } else {
  // L125(r50)
    Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r50_;
    goto L125_;
  }

L131_:;
  // where10 = force? where9
  Rsh_Fir_reg_where10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where9_);
  // checkMissing(where10)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_where10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty()));
  // is_environment = ldf `is.environment` in base
  Rsh_Fir_reg_is_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r56 = dyn is_environment(where10)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_where10_;
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_environment, 1, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L132() else D37()
  // L132()
  goto L132_;

L133_:;
  // search1 = ldf search
  Rsh_Fir_reg_search1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L134() else D38()
  // L134()
  goto L134_;

L162_:;
  // st pkg = r72
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r72_, RHO);
  (void)(Rsh_Fir_reg_r72_);
  // goto L20(r72)
  // L20(r72)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r72_;
  goto L20_;

L175_:;
  // goto L42(r82)
  // L42(r82)
  Rsh_Fir_reg_r81_ = Rsh_Fir_reg_r82_;
  goto L42_;

L178_:;
  // st pkg = r86
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r86_, RHO);
  (void)(Rsh_Fir_reg_r86_);
  // goto L44(r86)
  // L44(r86)
  Rsh_Fir_reg_r87_ = Rsh_Fir_reg_r86_;
  goto L44_;

L192_:;
  // as_character1 = ldf `as.character` in base
  Rsh_Fir_reg_as_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r96 = dyn as_character1(r95)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character1_, 1, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L193() else D66()
  // L193()
  goto L193_;

L195_:;
  // saved2 = ld saved
  Rsh_Fir_reg_saved2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // check L196() else D69()
  // L196()
  goto L196_;

D37_:;
  // deopt 154 [r56]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

D38_:;
  // deopt 156 []
  Rsh_Fir_deopt(156, 0, NULL, CCP, RHO);
  return R_NilValue;

D66_:;
  // deopt 265 [r96]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_deopt(265, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

D69_:;
  // deopt 273 [saved2]
  SEXP Rsh_Fir_array_deopt_stack51[1];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_saved2_;
  Rsh_Fir_deopt(273, 1, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L25_:;
  // st pkg = dx1
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L26()
  // L26()
  goto L26_;

L36_:;
  // c27 = `as.logical`(r66)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args123);
  // if c27 then L154() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L154()
    goto L154_;
  } else {
  // L37()
    goto L37_;
  }

L124_:;
  // dr = tryDispatchBuiltin.1("[[", r50)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args124);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // if dc then L126() else L125(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L126()
    goto L126_;
  } else {
  // L125(dr)
    Rsh_Fir_reg_r52_ = Rsh_Fir_reg_dr;
    goto L125_;
  }

L125_:;
  // where7 = ld where
  Rsh_Fir_reg_where7_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L127() else D35()
  // L127()
  goto L127_;

L132_:;
  // goto L27(r56)
  // L27(r56)
  Rsh_Fir_reg_r55_ = Rsh_Fir_reg_r56_;
  goto L27_;

L134_:;
  // r57 = dyn search1()
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_search1_, 0, NULL, NULL, CCP, RHO);
  // check L135() else D39()
  // L135()
  goto L135_;

L150_:;
  // envName6 = ld envName
  Rsh_Fir_reg_envName6_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L152() else D45()
  // L152()
  goto L152_;

L151_:;
  // r65 = dyn base12(<sym envName>)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L36(r65)
  // L36(r65)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r65_;
  goto L36_;

L193_:;
  // goto L49(r96)
  // L49(r96)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r96_;
  goto L49_;

L196_:;
  // saved3 = force? saved2
  Rsh_Fir_reg_saved3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_saved2_);
  // checkMissing(saved3)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_saved3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // r103 = `!`(saved3)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_saved3_;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args128);
  // c37 = `as.logical`(r103)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_r103_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args129);
  // if c37 then L197() else L50(c37)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L197()
    goto L197_;
  } else {
  // L50(c37)
    Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c37_;
    goto L50_;
  }

D35_:;
  // deopt 145 [r52, where7]
  SEXP Rsh_Fir_array_deopt_stack52[2];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_where7_;
  Rsh_Fir_deopt(145, 2, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

D39_:;
  // deopt 157 [r57]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

D45_:;
  // deopt 189 [envName6]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_envName6_;
  Rsh_Fir_deopt(189, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L37_:;
  // sym13 = ldf `as.character`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base13 = ldf `as.character` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args130);
  // if guard13 then L157() else L158()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L157()
    goto L157_;
  } else {
  // L158()
    goto L158_;
  }

L50_:;
  // c43 = `as.logical`(c39)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_c39_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args131);
  // if c43 then L201() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L201()
    goto L201_;
  } else {
  // L51()
    goto L51_;
  }

L126_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // goto L25(dx)
  // L25(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L25_;

L127_:;
  // where8 = force? where7
  Rsh_Fir_reg_where8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where7_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // r53 = dyn __(r52, where8)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_where8_;
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args133, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L25(r53)
  // L25(r53)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r53_;
  goto L25_;

L135_:;
  // s = toForSeq(r57)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args135);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 54);
  // goto L29(i)
  // L29(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L29_;

L152_:;
  // envName7 = force? envName6
  Rsh_Fir_reg_envName7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envName6_);
  // checkMissing(envName7)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_envName7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // nzchar2 = ldf nzchar in base
  Rsh_Fir_reg_nzchar2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r67 = dyn nzchar2(envName7)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_envName7_;
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar2_, 1, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L153() else D46()
  // L153()
  goto L153_;

L154_:;
  // envName8 = ld envName
  Rsh_Fir_reg_envName8_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // check L155() else D47()
  // L155()
  goto L155_;

L197_:;
  // environmentIsLocked = ldf environmentIsLocked
  Rsh_Fir_reg_environmentIsLocked = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // check L198() else D70()
  // L198()
  goto L198_;

D46_:;
  // deopt 192 [r67]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(192, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

D47_:;
  // deopt 193 [envName8]
  SEXP Rsh_Fir_array_deopt_stack56[1];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_envName8_;
  Rsh_Fir_deopt(193, 1, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

D70_:;
  // deopt 277 [c37]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_c37_;
  Rsh_Fir_deopt(277, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

L29_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args138[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args138);
  // c25 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args139[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args139);
  // if c25 then L136() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L136()
    goto L136_;
  } else {
  // L35()
    goto L35_;
  }

L38_:;
  // st pkg = r69
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r69_, RHO);
  (void)(Rsh_Fir_reg_r69_);
  // goto L26()
  // L26()
  goto L26_;

L51_:;
  // goto L52(NULL)
  // L52(NULL)
  Rsh_Fir_reg_r110_ = Rsh_const(CCP, 22);
  goto L52_;

L52_:;
  // goto L53()
  // L53()
  goto L53_;

L153_:;
  // goto L36(r67)
  // L36(r67)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r67_;
  goto L36_;

L155_:;
  // envName9 = force? envName8
  Rsh_Fir_reg_envName9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envName8_);
  // checkMissing(envName9)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_envName9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty()));
  // st pkg = envName9
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_envName9_, RHO);
  (void)(Rsh_Fir_reg_envName9_);
  // goto L26()
  // L26()
  goto L26_;

L157_:;
  // where13 = ld where
  Rsh_Fir_reg_where13_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L159() else D48()
  // L159()
  goto L159_;

L158_:;
  // r68 = dyn base13(<sym where>)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L38(r68)
  // L38(r68)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r68_;
  goto L38_;

L198_:;
  // p14 = prom<V +>{
  //   env14 = ld env;
  //   env15 = force? env14;
  //   checkMissing(env15);
  //   return env15;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1183189106_14, 0, NULL, CCP, RHO);
  // r105 = dyn environmentIsLocked(p14)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environmentIsLocked, 1, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L199() else D71()
  // L199()
  goto L199_;

L201_:;
  // setPackageName = ldf setPackageName
  Rsh_Fir_reg_setPackageName = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // check L202() else D72()
  // L202()
  goto L202_;

D48_:;
  // deopt 198 [where13]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_where13_;
  Rsh_Fir_deopt(198, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

D71_:;
  // deopt 279 [c37, r105]
  SEXP Rsh_Fir_array_deopt_stack59[2];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_c37_;
  Rsh_Fir_array_deopt_stack59[1] = Rsh_Fir_reg_r105_;
  Rsh_Fir_deopt(279, 2, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

D72_:;
  // deopt 283 []
  Rsh_Fir_deopt(283, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L26()
  // L26()
  goto L26_;

L35_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args144[4];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args144[2] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args144[3] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args144);
  // st db = x
  Rsh_Fir_store(Rsh_const(CCP, 57), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym10 = ldf identical
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base10 = ldf identical in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args145[2];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args145[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args145);
  // if guard10 then L137() else L138()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L137()
    goto L137_;
  } else {
  // L138()
    goto L138_;
  }

L136_:;
  // goto L33(i2)
  // L33(i2)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i2_;
  goto L33_;

L159_:;
  // where14 = force? where13
  Rsh_Fir_reg_where14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where13_);
  // checkMissing(where14)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_where14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r70 = dyn as_character(where14)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_where14_;
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L160() else D49()
  // L160()
  goto L160_;

L199_:;
  // r106 = `!`(r105)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_r105_;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args148);
  // c40 = `as.logical`(r106)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_r106_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args149);
  // c41 = `&&`(c37, c40)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_c37_;
  Rsh_Fir_array_args150[1] = Rsh_Fir_reg_c40_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args150);
  // goto L50(c41)
  // L50(c41)
  Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c41_;
  goto L50_;

L202_:;
  // p15 = prom<V +>{
  //   pkg14 = ld pkg;
  //   pkg15 = force? pkg14;
  //   checkMissing(pkg15);
  //   return pkg15;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1183189106_15, 0, NULL, CCP, RHO);
  // p16 = prom<V +>{
  //   env16 = ld env;
  //   env17 = force? env16;
  //   checkMissing(env17);
  //   return env17;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1183189106_16, 0, NULL, CCP, RHO);
  // r109 = dyn setPackageName(p15, p16)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args153[1] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names53[2];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setPackageName, 2, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L203() else D73()
  // L203()
  goto L203_;

D49_:;
  // deopt 201 [r70]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_deopt(201, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

D73_:;
  // deopt 286 [r109]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_r109_;
  Rsh_Fir_deopt(286, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L30_:;
  // c26 = `as.logical`(r59)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args154);
  // if c26 then L145() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L145()
    goto L145_;
  } else {
  // L32()
    goto L32_;
  }

L137_:;
  // sym11 = ldf `as.environment`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base11 = ldf `as.environment` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args155[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args155);
  // if guard11 then L139() else L140()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L139()
    goto L139_;
  } else {
  // L140()
    goto L140_;
  }

L138_:;
  // r58 = dyn base10(<lang as.environment(db)>, <sym where>)
  SEXP Rsh_Fir_array_args156[2];
  Rsh_Fir_array_args156[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args156[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names54[2];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args156, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L30(i2, r58)
  // L30(i2, r58)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r58_;
  goto L30_;

L160_:;
  // goto L38(r70)
  // L38(r70)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r70_;
  goto L38_;

L203_:;
  // goto L52(r109)
  // L52(r109)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r109_;
  goto L52_;

L31_:;
  // where11 = ld where
  Rsh_Fir_reg_where11_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L143() else D42()
  // L143()
  goto L143_;

L32_:;
  // goto L29(i7)
  // L29(i7)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i7_;
  goto L29_;

L139_:;
  // db = ld db
  Rsh_Fir_reg_db = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // check L141() else D40()
  // L141()
  goto L141_;

L140_:;
  // r60 = dyn base11(<sym db>)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names55[1];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L31(i2, r60)
  // L31(i2, r60)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r60_;
  goto L31_;

L145_:;
  // db2 = ld db
  Rsh_Fir_reg_db2_ = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // check L146() else D44()
  // L146()
  goto L146_;

D40_:;
  // deopt 162 [i2, db]
  SEXP Rsh_Fir_array_deopt_stack62[2];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack62[1] = Rsh_Fir_reg_db;
  Rsh_Fir_deopt(162, 2, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

D42_:;
  // deopt 166 [i10, where11]
  SEXP Rsh_Fir_array_deopt_stack63[2];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_where11_;
  Rsh_Fir_deopt(166, 2, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

D44_:;
  // deopt 177 [i7, db2]
  SEXP Rsh_Fir_array_deopt_stack64[2];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack64[1] = Rsh_Fir_reg_db2_;
  Rsh_Fir_deopt(177, 2, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L141_:;
  // db1 = force? db
  Rsh_Fir_reg_db1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db);
  // checkMissing(db1)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_db1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // as_environment1 = ldf `as.environment` in base
  Rsh_Fir_reg_as_environment1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r62 = dyn as_environment1(db1)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_db1_;
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_environment1_, 1, Rsh_Fir_array_args159, Rsh_Fir_array_arg_names56, CCP, RHO);
  // check L142() else D41()
  // L142()
  goto L142_;

L143_:;
  // where12 = force? where11
  Rsh_Fir_reg_where12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_where11_);
  // checkMissing(where12)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_where12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty()));
  // identical4 = ldf identical in base
  Rsh_Fir_reg_identical4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r63 = dyn identical4(r61, where12, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args161[9];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_array_args161[1] = Rsh_Fir_reg_where12_;
  Rsh_Fir_array_args161[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args161[3] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args161[4] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args161[5] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args161[6] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args161[7] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args161[8] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names57[9];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_array_arg_names57[2] = R_MissingArg;
  Rsh_Fir_array_arg_names57[3] = R_MissingArg;
  Rsh_Fir_array_arg_names57[4] = R_MissingArg;
  Rsh_Fir_array_arg_names57[5] = R_MissingArg;
  Rsh_Fir_array_arg_names57[6] = R_MissingArg;
  Rsh_Fir_array_arg_names57[7] = R_MissingArg;
  Rsh_Fir_array_arg_names57[8] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical4_, 9, Rsh_Fir_array_args161, Rsh_Fir_array_arg_names57, CCP, RHO);
  // check L144() else D43()
  // L144()
  goto L144_;

L146_:;
  // db3 = force? db2
  Rsh_Fir_reg_db3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db2_);
  // checkMissing(db3)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_db3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty()));
  // st pkg = db3
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_db3_, RHO);
  (void)(Rsh_Fir_reg_db3_);
  // goto L33(i7)
  // L33(i7)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i7_;
  goto L33_;

D41_:;
  // deopt 165 [i2, r62]
  SEXP Rsh_Fir_array_deopt_stack65[2];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack65[1] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(165, 2, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

D43_:;
  // deopt 176 [i10, r63]
  SEXP Rsh_Fir_array_deopt_stack66[2];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack66[1] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(176, 2, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L142_:;
  // goto L31(i2, r62)
  // L31(i2, r62)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r62_;
  goto L31_;

L144_:;
  // goto L30(i10, r63)
  // L30(i10, r63)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i10_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r63_;
  goto L30_;
}
SEXP Rsh_Fir_user_promise_inner1183189106_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_topenv;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1183189106/0: expected 0, got %d", NCAPTURES);

  // topenv = ldf topenv
  Rsh_Fir_reg_topenv = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // p = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r = dyn parent_frame();
  //   return r;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1183189106_1, 0, NULL, CCP, RHO);
  // r2 = dyn topenv(p)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_topenv, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names7, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_1;
}
SEXP Rsh_Fir_user_promise_inner1183189106_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_parent_frame;
  SEXP Rsh_Fir_reg_r1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1183189106/0: expected 0, got %d", NCAPTURES);

  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // r = dyn parent_frame()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner1183189106_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_env;
  SEXP Rsh_Fir_reg_env1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1183189106/0: expected 0, got %d", NCAPTURES);

  // env = ld env
  Rsh_Fir_reg_env = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // env1 = force? env
  Rsh_Fir_reg_env1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env);
  // checkMissing(env1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_env1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return env1
  return Rsh_Fir_reg_env1_;
}
SEXP Rsh_Fir_user_promise_inner1183189106_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_env4_;
  SEXP Rsh_Fir_reg_env5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1183189106/0: expected 0, got %d", NCAPTURES);

  // env4 = ld env
  Rsh_Fir_reg_env4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // env5 = force? env4
  Rsh_Fir_reg_env5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env4_);
  // checkMissing(env5)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_env5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return env5
  return Rsh_Fir_reg_env5_;
}
SEXP Rsh_Fir_user_promise_inner1183189106_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_parent_frame1_;
  SEXP Rsh_Fir_reg_r19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1183189106/0: expected 0, got %d", NCAPTURES);

  // parent_frame1 = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // r19 = dyn parent_frame1()
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame1_, 0, NULL, NULL, CCP, RHO);
  // return r19
  return Rsh_Fir_reg_r19_;
}
SEXP Rsh_Fir_user_promise_inner1183189106_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_envName2_;
  SEXP Rsh_Fir_reg_envName3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1183189106/0: expected 0, got %d", NCAPTURES);

  // envName2 = ld envName
  Rsh_Fir_reg_envName2_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // envName3 = force? envName2
  Rsh_Fir_reg_envName3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envName2_);
  // checkMissing(envName3)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_envName3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // return envName3
  return Rsh_Fir_reg_envName3_;
}
SEXP Rsh_Fir_user_promise_inner1183189106_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_envName4_;
  SEXP Rsh_Fir_reg_envName5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1183189106/0: expected 0, got %d", NCAPTURES);

  // envName4 = ld envName
  Rsh_Fir_reg_envName4_ = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // envName5 = force? envName4
  Rsh_Fir_reg_envName5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envName4_);
  // checkMissing(envName5)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_envName5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return envName5
  return Rsh_Fir_reg_envName5_;
}
SEXP Rsh_Fir_user_promise_inner1183189106_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_env10_;
  SEXP Rsh_Fir_reg_env11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1183189106/0: expected 0, got %d", NCAPTURES);

  // env10 = ld env
  Rsh_Fir_reg_env10_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // env11 = force? env10
  Rsh_Fir_reg_env11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env10_);
  // checkMissing(env11)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_env11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // return env11
  return Rsh_Fir_reg_env11_;
}
SEXP Rsh_Fir_user_promise_inner1183189106_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_pkg6_;
  SEXP Rsh_Fir_reg_pkg7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1183189106/0: expected 0, got %d", NCAPTURES);

  // pkg6 = ld pkg
  Rsh_Fir_reg_pkg6_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // pkg7 = force? pkg6
  Rsh_Fir_reg_pkg7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg6_);
  // checkMissing(pkg7)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_pkg7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // return pkg7
  return Rsh_Fir_reg_pkg7_;
}
SEXP Rsh_Fir_user_promise_inner1183189106_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_top2_;
  SEXP Rsh_Fir_reg_top3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1183189106/0: expected 0, got %d", NCAPTURES);

  // top2 = ld top
  Rsh_Fir_reg_top2_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // top3 = force? top2
  Rsh_Fir_reg_top3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_top2_);
  // checkMissing(top3)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_top3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty()));
  // return top3
  return Rsh_Fir_reg_top3_;
}
SEXP Rsh_Fir_user_promise_inner1183189106_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_create1_;
  SEXP Rsh_Fir_reg_create2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1183189106/0: expected 0, got %d", NCAPTURES);

  // create1 = ld create
  Rsh_Fir_reg_create1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // create2 = force? create1
  Rsh_Fir_reg_create2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_create1_);
  // checkMissing(create2)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_create2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // return create2
  return Rsh_Fir_reg_create2_;
}
SEXP Rsh_Fir_user_promise_inner1183189106_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r100_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1183189106/0: expected 0, got %d", NCAPTURES);

  // gettextf = ldf gettextf
  Rsh_Fir_reg_gettextf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // p12 = prom<V +>{
  //   sQuote = ldf sQuote;
  //   p11 = prom<V +>{
  //     pkg12 = ld pkg;
  //     pkg13 = force? pkg12;
  //     checkMissing(pkg13);
  //     return pkg13;
  //   };
  //   r98 = dyn sQuote(p11);
  //   return r98;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1183189106_12, 0, NULL, CCP, RHO);
  // r100 = dyn gettextf("Created a package name, %s, when none found", p12)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf, 2, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names43, CCP, RHO);
  // return r100
  return Rsh_Fir_reg_r100_;
}
SEXP Rsh_Fir_user_promise_inner1183189106_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sQuote;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r98_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1183189106/0: expected 0, got %d", NCAPTURES);

  // sQuote = ldf sQuote
  Rsh_Fir_reg_sQuote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // p11 = prom<V +>{
  //   pkg12 = ld pkg;
  //   pkg13 = force? pkg12;
  //   checkMissing(pkg13);
  //   return pkg13;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1183189106_13, 0, NULL, CCP, RHO);
  // r98 = dyn sQuote(p11)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sQuote, 1, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names42, CCP, RHO);
  // return r98
  return Rsh_Fir_reg_r98_;
}
SEXP Rsh_Fir_user_promise_inner1183189106_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_pkg12_;
  SEXP Rsh_Fir_reg_pkg13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1183189106/0: expected 0, got %d", NCAPTURES);

  // pkg12 = ld pkg
  Rsh_Fir_reg_pkg12_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // pkg13 = force? pkg12
  Rsh_Fir_reg_pkg13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg12_);
  // checkMissing(pkg13)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_pkg13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // return pkg13
  return Rsh_Fir_reg_pkg13_;
}
SEXP Rsh_Fir_user_promise_inner1183189106_14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_env14_;
  SEXP Rsh_Fir_reg_env15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1183189106/0: expected 0, got %d", NCAPTURES);

  // env14 = ld env
  Rsh_Fir_reg_env14_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // env15 = force? env14
  Rsh_Fir_reg_env15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env14_);
  // checkMissing(env15)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_env15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // return env15
  return Rsh_Fir_reg_env15_;
}
SEXP Rsh_Fir_user_promise_inner1183189106_15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_pkg14_;
  SEXP Rsh_Fir_reg_pkg15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1183189106/0: expected 0, got %d", NCAPTURES);

  // pkg14 = ld pkg
  Rsh_Fir_reg_pkg14_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // pkg15 = force? pkg14
  Rsh_Fir_reg_pkg15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg14_);
  // checkMissing(pkg15)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_pkg15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty()));
  // return pkg15
  return Rsh_Fir_reg_pkg15_;
}
SEXP Rsh_Fir_user_promise_inner1183189106_16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_env16_;
  SEXP Rsh_Fir_reg_env17_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1183189106/0: expected 0, got %d", NCAPTURES);

  // env16 = ld env
  Rsh_Fir_reg_env16_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // env17 = force? env16
  Rsh_Fir_reg_env17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_env16_);
  // checkMissing(env17)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_env17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty()));
  // return env17
  return Rsh_Fir_reg_env17_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
