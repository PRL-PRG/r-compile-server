#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3808846358_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3808846358_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3808846358_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3808846358_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3808846358_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3808846358_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3808846358_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3808846358_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3808846358_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner270641308_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner270641308_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner270641308_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner270641308_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner270641308_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner3808846358
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3808846358_, RHO, CCP);
  // st get_serialization_version = r
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
SEXP Rsh_Fir_user_function_inner3808846358_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3808846358 dynamic dispatch ([allfiles])

  return Rsh_Fir_user_version_inner3808846358_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3808846358_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3808846358 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3808846358/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_allfiles;  // allfiles
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_grep;  // grep
  SEXP Rsh_Fir_reg_allfiles1_;  // allfiles1
  SEXP Rsh_Fir_reg_allfiles2_;  // allfiles2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_grep1_;  // grep1
  SEXP Rsh_Fir_reg_allfiles3_;  // allfiles3
  SEXP Rsh_Fir_reg_allfiles4_;  // allfiles4
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_grep2_;  // grep2
  SEXP Rsh_Fir_reg_allfiles5_;  // allfiles5
  SEXP Rsh_Fir_reg_allfiles6_;  // allfiles6
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sapply;  // sapply
  SEXP Rsh_Fir_reg_loadfiles;  // loadfiles
  SEXP Rsh_Fir_reg_loadfiles1_;  // loadfiles1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_getVerLoad;  // getVerLoad
  SEXP Rsh_Fir_reg_getVerLoad1_;  // getVerLoad1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sapply1_;  // sapply1
  SEXP Rsh_Fir_reg_serfiles;  // serfiles
  SEXP Rsh_Fir_reg_serfiles1_;  // serfiles1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_getVerSer;  // getVerSer
  SEXP Rsh_Fir_reg_getVerSer1_;  // getVerSer1
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_vers1_;  // vers1
  SEXP Rsh_Fir_reg_vers2_;  // vers2
  SEXP Rsh_Fir_reg_vers3_;  // vers3
  SEXP Rsh_Fir_reg_vers4_;  // vers4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r19_;  // r19

  // Bind parameters
  Rsh_Fir_reg_allfiles = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st allfiles = allfiles
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_allfiles, RHO);
  (void)(Rsh_Fir_reg_allfiles);
  // r = clos inner270641308
  Rsh_Fir_reg_r1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner270641308_, RHO, CCP);
  // st getVerLoad = r
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // r1 = clos inner270641308
  Rsh_Fir_reg_r1_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner270641308_, RHO, CCP);
  // st getVerSer = r1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // grep = ldf grep
  Rsh_Fir_reg_grep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L2() else D0()
  // L2()
  goto L2_;

L0_:;
  // st serfiles = r5
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sapply = ldf sapply
  Rsh_Fir_reg_sapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L11() else D7()
  // L11()
  goto L11_;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r18
  return Rsh_Fir_reg_r18_;

D0_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   allfiles1 = ld allfiles;
  //   allfiles2 = force? allfiles1;
  //   checkMissing(allfiles2);
  //   return allfiles2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3808846358_, CCP, RHO);
  // r3 = dyn grep[, , value]("[.](rda|RData|Rdata|rdata|Rda|bam|Rbin)$", p, TRUE)
  SEXP Rsh_Fir_array_args1[3];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args1[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep, 3, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L3() else D1()
  // L3()
  goto L3_;

D1_:;
  // deopt 12 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // st loadfiles = r3
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L4_:;
  // grep1 = ldf grep
  Rsh_Fir_reg_grep1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

L5_:;
  // r4 = dyn base(<lang grep("[.](rds|RDS|Rds|rdx)$", allfiles, value=TRUE)>, <lang grep("build/partial[.]rdb$", allfiles, value=TRUE)>)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L0_;

D2_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p1 = prom<V +>{
  //   allfiles3 = ld allfiles;
  //   allfiles4 = force? allfiles3;
  //   checkMissing(allfiles4);
  //   return allfiles4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3808846358_1, CCP, RHO);
  // r7 = dyn grep1[, , value]("[.](rds|RDS|Rds|rdx)$", p1, TRUE)
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep1_, 3, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

D3_:;
  // deopt 22 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // grep2 = ldf grep
  Rsh_Fir_reg_grep2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L8() else D4()
  // L8()
  goto L8_;

D4_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p2 = prom<V +>{
  //   allfiles5 = ld allfiles;
  //   allfiles6 = force? allfiles5;
  //   checkMissing(allfiles6);
  //   return allfiles6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3808846358_2, CCP, RHO);
  // r9 = dyn grep2[, , value]("build/partial[.]rdb$", p2, TRUE)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep2_, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L9() else D5()
  // L9()
  goto L9_;

D5_:;
  // deopt 29 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r10 = dyn c(r7, r9)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L10() else D6()
  // L10()
  goto L10_;

D6_:;
  // deopt 31 [r10]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r10_;
  goto L0_;

D7_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p3 = prom<V +>{
  //   loadfiles = ld loadfiles;
  //   loadfiles1 = force? loadfiles;
  //   checkMissing(loadfiles1);
  //   return loadfiles1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3808846358_3, CCP, RHO);
  // p4 = prom<V +>{
  //   getVerLoad = ld getVerLoad;
  //   getVerLoad1 = force? getVerLoad;
  //   checkMissing(getVerLoad1);
  //   return getVerLoad1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3808846358_4, CCP, RHO);
  // r13 = dyn sapply(p3, p4)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sapply, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L12() else D8()
  // L12()
  goto L12_;

D8_:;
  // deopt 37 [r13]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // st vers1 = r13
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // sapply1 = ldf sapply
  Rsh_Fir_reg_sapply1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L13() else D9()
  // L13()
  goto L13_;

D9_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p5 = prom<V +>{
  //   serfiles = ld serfiles;
  //   serfiles1 = force? serfiles;
  //   checkMissing(serfiles1);
  //   return serfiles1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3808846358_5, CCP, RHO);
  // p6 = prom<V +>{
  //   getVerSer = ld getVerSer;
  //   getVerSer1 = force? getVerSer;
  //   checkMissing(getVerSer1);
  //   return getVerSer1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3808846358_6, CCP, RHO);
  // r16 = dyn sapply1(p5, p6)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sapply1_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L14() else D10()
  // L14()
  goto L14_;

D10_:;
  // deopt 43 [r16]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L14_:;
  // st vers2 = r16
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard1 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L15_:;
  // vers1 = ld vers1
  Rsh_Fir_reg_vers1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L17() else D11()
  // L17()
  goto L17_;

L16_:;
  // r17 = dyn base1(<sym vers1>, <sym vers2>)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1(r17)
  // L1(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L1_;

D11_:;
  // deopt 47 [vers1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_vers1_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L17_:;
  // vers2 = force? vers1
  Rsh_Fir_reg_vers2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vers1_);
  // checkMissing(vers2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_vers2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // vers3 = ld vers2
  Rsh_Fir_reg_vers3_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L18() else D12()
  // L18()
  goto L18_;

D12_:;
  // deopt 49 [vers3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_vers3_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L18_:;
  // vers4 = force? vers3
  Rsh_Fir_reg_vers4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vers3_);
  // checkMissing(vers4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_vers4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r19 = dyn c1(vers2, vers4)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_vers2_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_vers4_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L19() else D13()
  // L19()
  goto L19_;

D13_:;
  // deopt 52 [r19]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L1(r19)
  // L1(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3808846358_(SEXP CCP, SEXP RHO) {
  // allfiles1 = ld allfiles
  Rsh_Fir_reg_allfiles1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // allfiles2 = force? allfiles1
  Rsh_Fir_reg_allfiles2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allfiles1_);
  // checkMissing(allfiles2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_allfiles2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // return allfiles2
  return Rsh_Fir_reg_allfiles2_;
}
SEXP Rsh_Fir_user_promise_inner3808846358_1(SEXP CCP, SEXP RHO) {
  // allfiles3 = ld allfiles
  Rsh_Fir_reg_allfiles3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // allfiles4 = force? allfiles3
  Rsh_Fir_reg_allfiles4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allfiles3_);
  // checkMissing(allfiles4)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_allfiles4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return allfiles4
  return Rsh_Fir_reg_allfiles4_;
}
SEXP Rsh_Fir_user_promise_inner3808846358_2(SEXP CCP, SEXP RHO) {
  // allfiles5 = ld allfiles
  Rsh_Fir_reg_allfiles5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // allfiles6 = force? allfiles5
  Rsh_Fir_reg_allfiles6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_allfiles5_);
  // checkMissing(allfiles6)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_allfiles6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return allfiles6
  return Rsh_Fir_reg_allfiles6_;
}
SEXP Rsh_Fir_user_promise_inner3808846358_3(SEXP CCP, SEXP RHO) {
  // loadfiles = ld loadfiles
  Rsh_Fir_reg_loadfiles = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // loadfiles1 = force? loadfiles
  Rsh_Fir_reg_loadfiles1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_loadfiles);
  // checkMissing(loadfiles1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_loadfiles1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return loadfiles1
  return Rsh_Fir_reg_loadfiles1_;
}
SEXP Rsh_Fir_user_promise_inner3808846358_4(SEXP CCP, SEXP RHO) {
  // getVerLoad = ld getVerLoad
  Rsh_Fir_reg_getVerLoad = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // getVerLoad1 = force? getVerLoad
  Rsh_Fir_reg_getVerLoad1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_getVerLoad);
  // checkMissing(getVerLoad1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_getVerLoad1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // return getVerLoad1
  return Rsh_Fir_reg_getVerLoad1_;
}
SEXP Rsh_Fir_user_promise_inner3808846358_5(SEXP CCP, SEXP RHO) {
  // serfiles = ld serfiles
  Rsh_Fir_reg_serfiles = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // serfiles1 = force? serfiles
  Rsh_Fir_reg_serfiles1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_serfiles);
  // checkMissing(serfiles1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_serfiles1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return serfiles1
  return Rsh_Fir_reg_serfiles1_;
}
SEXP Rsh_Fir_user_promise_inner3808846358_6(SEXP CCP, SEXP RHO) {
  // getVerSer = ld getVerSer
  Rsh_Fir_reg_getVerSer = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // getVerSer1 = force? getVerSer
  Rsh_Fir_reg_getVerSer1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_getVerSer);
  // checkMissing(getVerSer1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_getVerSer1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return getVerSer1
  return Rsh_Fir_reg_getVerSer1_;
}
SEXP Rsh_Fir_user_function_inner270641308_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner270641308 dynamic dispatch ([file])

  return Rsh_Fir_user_version_inner270641308_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner270641308_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner270641308 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner270641308/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_file;  // file
  SEXP Rsh_Fir_reg_gzfile;  // gzfile
  SEXP Rsh_Fir_reg_file1_;  // file1
  SEXP Rsh_Fir_reg_file2_;  // file2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_on_exit;  // on_exit
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_tryCatch;  // tryCatch
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_con;  // con
  SEXP Rsh_Fir_reg_con1_;  // con1
  SEXP Rsh_Fir_reg_loadInfoFromConn2_;  // loadInfoFromConn2
  SEXP Rsh_Fir_reg_r7_1;  // r7
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_r9_1;  // r9
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r10_1;  // r10
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_p2_1;  // p2
  SEXP Rsh_Fir_reg_r14_;  // r14

  // Bind parameters
  Rsh_Fir_reg_file = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st file = file
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_file, RHO);
  (void)(Rsh_Fir_reg_file);
  // gzfile = ldf gzfile
  Rsh_Fir_reg_gzfile = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

L0_:;
  // tryCatch = ldf tryCatch
  Rsh_Fir_reg_tryCatch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   file1 = ld file;
  //   file2 = force? file1;
  //   checkMissing(file2);
  //   return file2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner270641308_, CCP, RHO);
  // r1 = dyn gzfile(p, "rb")
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gzfile, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 4 [r1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L2_:;
  // st con = r1
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // sym = ldf `on.exit`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base = ldf `on.exit` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L3_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r4 = dyn on_exit(<lang close(con)>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

L4_:;
  // r2 = dyn base(<lang close(con)>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p1 = prom<V +>{
  //   sym1 = ldf `.Internal`;
  //   base1 = ldf `.Internal` in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r6):
  //   c = `is.object`(r6);
  //   if c then L4() else L5(r6);
  // L1():
  //   con = ld con;
  //   con1 = force? con;
  //   checkMissing(con1);
  //   loadInfoFromConn2 = ldf loadInfoFromConn2 in base;
  //   r7 = dyn loadInfoFromConn2(con1);
  //   goto L0(r7);
  // L2():
  //   r5 = dyn base1(<lang loadInfoFromConn2(con)>);
  //   goto L0(r5);
  // L3(dx1):
  //   return dx1;
  // L4():
  //   dr = tryDispatchBuiltin.1("$", r6);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L6() else L5(dr);
  // L5(r9):
  //   r10 = `$`(r9, <sym version>);
  //   goto L3(r10);
  // L6():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L3(dx);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner270641308_1, CCP, RHO);
  // p2 = prom<V +>{
  //   r12 = clos inner3708401697;
  //   return r12;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner270641308_2, CCP, RHO);
  // r14 = dyn tryCatch[, error](p1, p2)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tryCatch, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 14 [r14]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L6_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_inner270641308_(SEXP CCP, SEXP RHO) {
  // file1 = ld file
  Rsh_Fir_reg_file1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // file2 = force? file1
  Rsh_Fir_reg_file2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file1_);
  // checkMissing(file2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_file2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return file2
  return Rsh_Fir_reg_file2_;
}
SEXP Rsh_Fir_user_promise_inner270641308_1(SEXP CCP, SEXP RHO) {
  // sym1 = ldf `.Internal`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base1 = ldf `.Internal` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // c = `is.object`(r6)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c then L4() else L5(r6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L4()
    goto L4_;
  } else {
  // L5(r6)
    Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r6_;
    goto L5_;
  }

L1_:;
  // con = ld con
  Rsh_Fir_reg_con = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // con1 = force? con
  Rsh_Fir_reg_con1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con);
  // checkMissing(con1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_con1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // loadInfoFromConn2 = ldf loadInfoFromConn2 in base
  Rsh_Fir_reg_loadInfoFromConn2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r7 = dyn loadInfoFromConn2(con1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_con1_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_loadInfoFromConn2_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_1;
  goto L0_;

L2_:;
  // r5 = dyn base1(<lang loadInfoFromConn2(con)>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_1;
  goto L0_;

L3_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L4_:;
  // dr = tryDispatchBuiltin.1("$", r6)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args30);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc then L6() else L5(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr)
    Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_dr;
    goto L5_;
  }

L5_:;
  // r10 = `$`(r9, <sym version>)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r10_1;
  goto L3_;

L6_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L3(dx)
  // L3(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;
}
SEXP Rsh_Fir_user_promise_inner270641308_2(SEXP CCP, SEXP RHO) {
  // r12 = clos inner3708401697
  Rsh_Fir_reg_r12_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3708401697_, RHO, CCP);
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3708401697 dynamic dispatch ([e])

  return Rsh_Fir_user_version_inner3708401697_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3708401697 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3708401697/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_e;  // e

  // Bind parameters
  Rsh_Fir_reg_e = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st e = e
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_e, RHO);
  (void)(Rsh_Fir_reg_e);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return 1
  return Rsh_const(CCP, 32);
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
