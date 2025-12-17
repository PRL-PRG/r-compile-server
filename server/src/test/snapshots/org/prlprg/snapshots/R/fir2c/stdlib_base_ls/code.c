#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3005739477_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3005739477_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3005739477_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3005739477_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3005739477_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3005739477_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3005739477_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3005739477_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3005739477_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3005739477_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3005739477_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3005739477_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3005739477_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3005739477_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3005739477_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3005739477_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_ls;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_ls1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_myfunc;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_myfunc1_;
  SEXP Rsh_Fir_reg_r6_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3005739477
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3005739477_, RHO, CCP);
  // st ls = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // st `.Ob` = 1.0
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_const(CCP, 1), RHO);
  (void)(Rsh_const(CCP, 1));
  // ls = ldf ls
  Rsh_Fir_reg_ls = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn ls[pattern]("O")
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ls, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 10 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // ls1 = ldf ls
  Rsh_Fir_reg_ls1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r2 = dyn ls1[pattern, `all.names`]("O", TRUE)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ls1_, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 17 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // r3 = clos inner2708337952
  Rsh_Fir_reg_r3_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // st myfunc = r3
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // myfunc = ldf myfunc
  Rsh_Fir_reg_myfunc = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // r4 = dyn myfunc()
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_myfunc, 0, NULL, NULL, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 23 [r4]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // r5 = clos inner2708337952
  Rsh_Fir_reg_r5_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // st myfunc = r5
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // myfunc1 = ldf myfunc
  Rsh_Fir_reg_myfunc1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // r6 = dyn myfunc1()
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_myfunc1_, 0, NULL, NULL, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 29 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_function_inner3005739477_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3005739477 dynamic dispatch ([name, pos, envir, `all.names`, pattern, sorted])

  return Rsh_Fir_user_version_inner3005739477_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3005739477_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3005739477 version 0 (*, *, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner3005739477/0: expected 6, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_name;
  SEXP Rsh_Fir_reg_pos;
  SEXP Rsh_Fir_reg_envir;
  SEXP Rsh_Fir_reg_all_names;
  SEXP Rsh_Fir_reg_pattern;
  SEXP Rsh_Fir_reg_sorted;
  SEXP Rsh_Fir_reg_pos_isMissing;
  SEXP Rsh_Fir_reg_pos_orDefault;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_envir_isMissing;
  SEXP Rsh_Fir_reg_envir_orDefault;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_all_names_isMissing;
  SEXP Rsh_Fir_reg_all_names_orDefault;
  SEXP Rsh_Fir_reg_sorted_isMissing;
  SEXP Rsh_Fir_reg_sorted_orDefault;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_tryCatch;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_pos3_;
  SEXP Rsh_Fir_reg_pos4_;
  SEXP Rsh_Fir_reg_inherits;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_substitute;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_name3_;
  SEXP Rsh_Fir_reg_name4_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_deparse;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_name9_;
  SEXP Rsh_Fir_reg_name10_;
  SEXP Rsh_Fir_reg_name11_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_envir1_;
  SEXP Rsh_Fir_reg_envir2_;
  SEXP Rsh_Fir_reg_all_names1_;
  SEXP Rsh_Fir_reg_all_names2_;
  SEXP Rsh_Fir_reg_sorted1_;
  SEXP Rsh_Fir_reg_sorted2_;
  SEXP Rsh_Fir_reg_ls1;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_missing1_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_grep;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_ll;
  SEXP Rsh_Fir_reg_ll1_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_ll4_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_grep1_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_pattern5_;
  SEXP Rsh_Fir_reg_pattern6_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_warning1_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_grep2_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_sub;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_warning2_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_grep3_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_all_names5_;
  SEXP Rsh_Fir_reg_all_names6_;

  // Bind parameters
  Rsh_Fir_reg_name = PARAMS[0];
  Rsh_Fir_reg_pos = PARAMS[1];
  Rsh_Fir_reg_envir = PARAMS[2];
  Rsh_Fir_reg_all_names = PARAMS[3];
  Rsh_Fir_reg_pattern = PARAMS[4];
  Rsh_Fir_reg_sorted = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st name = name
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_name, RHO);
  (void)(Rsh_Fir_reg_name);
  // pos_isMissing = missing.0(pos)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_pos;
  Rsh_Fir_reg_pos_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if pos_isMissing then L0() else L1(pos)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_pos_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(pos)
    Rsh_Fir_reg_pos_orDefault = Rsh_Fir_reg_pos;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   return -1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3005739477_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_pos_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st pos = pos_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_pos_orDefault, RHO);
  (void)(Rsh_Fir_reg_pos_orDefault);
  // envir_isMissing = missing.0(envir)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_envir;
  Rsh_Fir_reg_envir_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if envir_isMissing then L2() else L3(envir)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_envir_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(envir)
    Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_envir;
    goto L3_;
  }

L2_:;
  // p1 = prom<V +>{
  //   sym = ldf `as.environment`;
  //   base = ldf `as.environment` in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   pos1 = ld pos;
  //   pos2 = force? pos1;
  //   checkMissing(pos2);
  //   as_environment = ldf `as.environment` in base;
  //   r3 = dyn as_environment(pos2);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(<sym pos>);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3005739477_1, 0, NULL, CCP, RHO);
  // goto L3(p1)
  // L3(p1)
  Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_p1_;
  goto L3_;

L3_:;
  // st envir = envir_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_envir_orDefault, RHO);
  (void)(Rsh_Fir_reg_envir_orDefault);
  // all_names_isMissing = missing.0(all_names)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_all_names;
  Rsh_Fir_reg_all_names_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if all_names_isMissing then L4(FALSE) else L4(all_names)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_all_names_isMissing)) {
  // L4(FALSE)
    Rsh_Fir_reg_all_names_orDefault = Rsh_const(CCP, 13);
    goto L4_;
  } else {
  // L4(all_names)
    Rsh_Fir_reg_all_names_orDefault = Rsh_Fir_reg_all_names;
    goto L4_;
  }

L4_:;
  // st `all.names` = all_names_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_all_names_orDefault, RHO);
  (void)(Rsh_Fir_reg_all_names_orDefault);
  // st pattern = pattern
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_pattern, RHO);
  (void)(Rsh_Fir_reg_pattern);
  // sorted_isMissing = missing.0(sorted)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sorted;
  Rsh_Fir_reg_sorted_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if sorted_isMissing then L5(TRUE) else L5(sorted)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_sorted_isMissing)) {
  // L5(TRUE)
    Rsh_Fir_reg_sorted_orDefault = Rsh_const(CCP, 5);
    goto L5_;
  } else {
  // L5(sorted)
    Rsh_Fir_reg_sorted_orDefault = Rsh_Fir_reg_sorted;
    goto L5_;
  }

L5_:;
  // st sorted = sorted_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_sorted_orDefault, RHO);
  (void)(Rsh_Fir_reg_sorted_orDefault);
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard1 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L6_:;
  // r8 = `!`(r6)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args11);
  // c = `as.logical`(r8)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // if c then L30() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L30()
    goto L30_;
  } else {
  // L7()
    goto L7_;
  }

L28_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r7 = dyn missing(<sym name>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L6(r7)
  // L6(r7)
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r7_;
  goto L6_;

L29_:;
  // r5 = dyn base1(<sym name>)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L6(r5)
  // L6(r5)
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r5_1;
  goto L6_;

L7_:;
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // sym5 = ldf `.Internal`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base5 = ldf `.Internal` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard5 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L30_:;
  // tryCatch = ldf tryCatch
  Rsh_Fir_reg_tryCatch = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L31() else D0()
  // L31()
  goto L31_;

D0_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // st `all.names` = r32
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // sym6 = ldf missing
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base6 = ldf missing in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard6 then L58() else L59()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L58()
    goto L58_;
  } else {
  // L59()
    goto L59_;
  }

L31_:;
  // p2 = prom<V +>{
  //   name1 = ld name;
  //   name2 = force? name1;
  //   checkMissing(name2);
  //   return name2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3005739477_2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   r10 = clos inner3708401697;
  //   return r10;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3005739477_3, 0, NULL, CCP, RHO);
  // r12 = dyn tryCatch[, error](p2, p3)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tryCatch, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L32() else D1()
  // L32()
  goto L32_;

L52_:;
  // envir1 = ld envir
  Rsh_Fir_reg_envir1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L54() else D10()
  // L54()
  goto L54_;

L53_:;
  // r31 = dyn base5(<lang ls(envir, all.names, sorted)>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L16(r31)
  // L16(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L16_;

D1_:;
  // deopt 9 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 50 [envir1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_envir1_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L17_:;
  // r37 = `!`(r35)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args20);
  // c4 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args21);
  // if c4 then L60() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L60()
    goto L60_;
  } else {
  // L18()
    goto L18_;
  }

L32_:;
  // st pos = r12
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // sym2 = ldf inherits
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base2 = ldf inherits in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard2 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L54_:;
  // envir2 = force? envir1
  Rsh_Fir_reg_envir2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envir1_);
  // checkMissing(envir2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_envir2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // all_names1 = ld `all.names`
  Rsh_Fir_reg_all_names1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L55() else D11()
  // L55()
  goto L55_;

L58_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r36 = dyn missing1(<sym pattern>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L17(r36)
  // L17(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L17_;

L59_:;
  // r34 = dyn base6(<sym pattern>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L17(r34)
  // L17(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L17_;

D11_:;
  // deopt 52 [all_names1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_all_names1_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L8_:;
  // c1 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args26);
  // if c1 then L37() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L37()
    goto L37_;
  } else {
  // L9()
    goto L9_;
  }

L18_:;
  // all_names5 = ld `all.names`
  Rsh_Fir_reg_all_names5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L95() else D33()
  // L95()
  goto L95_;

L33_:;
  // pos3 = ld pos
  Rsh_Fir_reg_pos3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L35() else D2()
  // L35()
  goto L35_;

L34_:;
  // r13 = dyn base2(<sym pos>, "error")
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L8(r13)
  // L8(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_;
  goto L8_;

L55_:;
  // all_names2 = force? all_names1
  Rsh_Fir_reg_all_names2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all_names1_);
  // checkMissing(all_names2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_all_names2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // sorted1 = ld sorted
  Rsh_Fir_reg_sorted1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L56() else D12()
  // L56()
  goto L56_;

L60_:;
  // sym7 = ldf length
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base7 = ldf length in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard7 then L61() else L62()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L61()
    goto L61_;
  } else {
  // L62()
    goto L62_;
  }

D2_:;
  // deopt 13 [pos3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_pos3_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 54 [sorted1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_sorted1_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 131 [all_names5]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_all_names5_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L14(NULL)
  // L14(NULL)
  Rsh_Fir_reg_name11_ = Rsh_const(CCP, 23);
  goto L14_;

L14_:;
  // goto L15()
  // L15()
  goto L15_;

L19_:;
  // st ll = r39
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_r39_, RHO);
  (void)(Rsh_Fir_reg_r39_);
  // c5 = `as.logical`(r39)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args30);
  // if c5 then L66() else L20(c5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L66()
    goto L66_;
  } else {
  // L20(c5)
    Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c5_;
    goto L20_;
  }

L35_:;
  // pos4 = force? pos3
  Rsh_Fir_reg_pos4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos3_);
  // checkMissing(pos4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_pos4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r15 = dyn inherits(pos4, "error", FALSE)
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_pos4_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args32[2] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L36() else D3()
  // L36()
  goto L36_;

L37_:;
  // sym3 = ldf substitute
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base3 = ldf substitute in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard3 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L56_:;
  // sorted2 = force? sorted1
  Rsh_Fir_reg_sorted2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sorted1_);
  // checkMissing(sorted2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sorted2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // ls = ldf ls in base
  Rsh_Fir_reg_ls1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r33 = dyn ls(envir2, all_names2, sorted2)
  SEXP Rsh_Fir_array_args35[3];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_envir2_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_all_names2_;
  Rsh_Fir_array_args35[2] = Rsh_Fir_reg_sorted2_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ls1, 3, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L57() else D13()
  // L57()
  goto L57_;

L61_:;
  // grep = ldf grep
  Rsh_Fir_reg_grep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L63() else D14()
  // L63()
  goto L63_;

L62_:;
  // r38 = dyn base7(<lang grep("[", pattern, fixed=TRUE)>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L19(r38)
  // L19(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L19_;

L95_:;
  // all_names6 = force? all_names5
  Rsh_Fir_reg_all_names6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all_names5_);
  // checkMissing(all_names6)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_all_names6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return all_names6
  return Rsh_Fir_reg_all_names6_;

D3_:;
  // deopt 18 [r15]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 57 [r33]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 66 []
  Rsh_Fir_deopt(66, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // st name = r17
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // sym4 = ldf `is.character`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base4 = ldf `is.character` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard4 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L20_:;
  // c14 = `as.logical`(c7)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args39);
  // if c14 then L74() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L74()
    goto L74_;
  } else {
  // L22()
    goto L22_;
  }

L36_:;
  // goto L8(r15)
  // L8(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_;
  goto L8_;

L38_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r18 = dyn substitute(<sym name>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L10(r18)
  // L10(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L10_;

L39_:;
  // r16 = dyn base3(<sym name>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L10(r16)
  // L10(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L10_;

L57_:;
  // goto L16(r33)
  // L16(r33)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r33_;
  goto L16_;

L63_:;
  // p8 = prom<V +>{
  //   pattern1 = ld pattern;
  //   pattern2 = force? pattern1;
  //   checkMissing(pattern2);
  //   return pattern2;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3005739477_4, 0, NULL, CCP, RHO);
  // r41 = dyn grep[, , fixed]("[", p8, TRUE)
  SEXP Rsh_Fir_array_args43[3];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args43[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep, 3, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L64() else D15()
  // L64()
  goto L64_;

L66_:;
  // ll = ld ll
  Rsh_Fir_reg_ll = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L67() else D17()
  // L67()
  goto L67_;

D15_:;
  // deopt 71 [r41]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 75 [c5, ll]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_ll;
  Rsh_Fir_deopt(75, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L11_:;
  // r21 = `!`(r20)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args44);
  // c3 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args45);
  // if c3 then L43() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L43()
    goto L43_;
  } else {
  // L12()
    goto L12_;
  }

L22_:;
  // goto L27()
  // L27()
  goto L27_;

L27_:;
  // grep3 = ldf grep
  Rsh_Fir_reg_grep3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L92() else D31()
  // L92()
  goto L92_;

L40_:;
  // name3 = ld name
  Rsh_Fir_reg_name3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L42() else D4()
  // L42()
  goto L42_;

L41_:;
  // r19 = dyn base4(<sym name>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L11(r19)
  // L11(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L11_;

L64_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r42 = dyn length(r41)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L65() else D16()
  // L65()
  goto L65_;

L67_:;
  // ll1 = force? ll
  Rsh_Fir_reg_ll1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ll);
  // checkMissing(ll1)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_ll1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // sym8 = ldf length
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base8 = ldf length in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard8 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L74_:;
  // pattern5 = ld pattern
  Rsh_Fir_reg_pattern5_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L75() else D21()
  // L75()
  goto L75_;

D4_:;
  // deopt 24 [name3]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_name3_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 73 [r42]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 89 [pattern5]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_pattern5_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 125 []
  Rsh_Fir_deopt(125, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L13()
  // L13()
  goto L13_;

L13_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L47() else D7()
  // L47()
  goto L47_;

L21_:;
  // r48 = `!=`(ll4, r44)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_ll4_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args50);
  // c11 = `as.logical`(r48)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args51);
  // c12 = `&&`(c10, c11)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_c10_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args52);
  // goto L20(c12)
  // L20(c12)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c12_;
  goto L20_;

L42_:;
  // name4 = force? name3
  Rsh_Fir_reg_name4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name3_);
  // checkMissing(name4)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_name4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // c2 = `is.character`(name4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_name4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args54);
  // goto L11(c2)
  // L11(c2)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_c2_;
  goto L11_;

L43_:;
  // deparse = ldf deparse
  Rsh_Fir_reg_deparse = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L44() else D5()
  // L44()
  goto L44_;

L65_:;
  // goto L19(r42)
  // L19(r42)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r42_;
  goto L19_;

L68_:;
  // grep1 = ldf grep
  Rsh_Fir_reg_grep1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L70() else D18()
  // L70()
  goto L70_;

L69_:;
  // r43 = dyn base8(<lang grep("]", pattern, fixed=TRUE)>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L21(c5, ll1, r43)
  // L21(c5, ll1, r43)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_ll4_ = Rsh_Fir_reg_ll1_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L21_;

L75_:;
  // pattern6 = force? pattern5
  Rsh_Fir_reg_pattern6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern5_);
  // checkMissing(pattern6)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_pattern6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // r49 = `==`(pattern6, "[")
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_pattern6_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args57);
  // c15 = `as.logical`(r49)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args58);
  // if c15 then L76() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L76()
    goto L76_;
  } else {
  // L23()
    goto L23_;
  }

L92_:;
  // p12 = prom<V +>{
  //   pattern11 = ld pattern;
  //   pattern12 = force? pattern11;
  //   checkMissing(pattern12);
  //   return pattern12;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3005739477_5, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   all_names3 = ld `all.names`;
  //   all_names4 = force? all_names3;
  //   checkMissing(all_names4);
  //   return all_names4;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3005739477_6, 0, NULL, CCP, RHO);
  // r63 = dyn grep3[, , value](p12, p13, TRUE)
  SEXP Rsh_Fir_array_args61[3];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args61[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep3_, 3, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L93() else D32()
  // L93()
  goto L93_;

D5_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 79 [c5, ll1]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_ll1_;
  Rsh_Fir_deopt(79, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 130 [r63]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(130, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L23_:;
  // sym9 = ldf length
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base9 = ldf length in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard9 then L80() else L81()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L80()
    goto L80_;
  } else {
  // L81()
    goto L81_;
  }

L24_:;
  // goto L27()
  // L27()
  goto L27_;

L44_:;
  // p4 = prom<V +>{
  //   name5 = ld name;
  //   name6 = force? name5;
  //   checkMissing(name6);
  //   return name6;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3005739477_7, 0, NULL, CCP, RHO);
  // r23 = dyn deparse(p4)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_deparse, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L45() else D6()
  // L45()
  goto L45_;

L47_:;
  // p7 = prom<V +>{
  //   gettextf = ldf gettextf;
  //   p6 = prom<V +>{
  //     sQuote = ldf sQuote;
  //     p5 = prom<V +>{
  //       name7 = ld name;
  //       name8 = force? name7;
  //       checkMissing(name8);
  //       return name8;
  //     };
  //     r26 = dyn sQuote(p5);
  //     return r26;
  //   };
  //   r28 = dyn gettextf("%s converted to character string", p6);
  //   return r28;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3005739477_8, 0, NULL, CCP, RHO);
  // r30 = dyn warning[, domain](p7, NA_LGL)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 2, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L48() else D8()
  // L48()
  goto L48_;

L70_:;
  // p9 = prom<V +>{
  //   pattern3 = ld pattern;
  //   pattern4 = force? pattern3;
  //   checkMissing(pattern4);
  //   return pattern4;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3005739477_11, 0, NULL, CCP, RHO);
  // r46 = dyn grep1[, , fixed]("]", p9, TRUE)
  SEXP Rsh_Fir_array_args70[3];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args70[2] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = Rsh_const(CCP, 30);
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep1_, 3, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L71() else D19()
  // L71()
  goto L71_;

L76_:;
  // st pattern = "\\["
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_const(CCP, 41), RHO);
  (void)(Rsh_const(CCP, 41));
  // warning1 = ldf warning
  Rsh_Fir_reg_warning1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L77() else D22()
  // L77()
  goto L77_;

L93_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r63
  return Rsh_Fir_reg_r63_;

D6_:;
  // deopt 31 [r23]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 40 [r30]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 84 [c5, ll1, r46]
  SEXP Rsh_Fir_array_deopt_stack21[3];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_ll1_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(84, 3, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 97 []
  Rsh_Fir_deopt(97, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // c16 = `as.logical`(r53)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args71);
  // if c16 then L85() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L85()
    goto L85_;
  } else {
  // L26()
    goto L26_;
  }

L45_:;
  // st name = r23
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // goto L13()
  // L13()
  goto L13_;

L48_:;
  // name9 = ld name
  Rsh_Fir_reg_name9_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L49() else D9()
  // L49()
  goto L49_;

L71_:;
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r47 = dyn length1(r46)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L72() else D20()
  // L72()
  goto L72_;

L77_:;
  // r50 = dyn warning1("replaced regular expression pattern '[' by  '\\\\['")
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning1_, 1, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L78() else D23()
  // L78()
  goto L78_;

L80_:;
  // grep2 = ldf grep
  Rsh_Fir_reg_grep2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L82() else D24()
  // L82()
  goto L82_;

L81_:;
  // r52 = dyn base9(<lang grep("[^\\\\]\\[<-", pattern)>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L25(r52)
  // L25(r52)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L25_;

D9_:;
  // deopt 41 [name9]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_name9_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 86 [c5, ll1, r47]
  SEXP Rsh_Fir_array_deopt_stack23[3];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_ll1_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(86, 3, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 99 [r50]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 103 []
  Rsh_Fir_deopt(103, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L24(NULL)
  // L24(NULL)
  Rsh_Fir_reg_r51_ = Rsh_const(CCP, 23);
  goto L24_;

L49_:;
  // name10 = force? name9
  Rsh_Fir_reg_name10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name9_);
  // checkMissing(name10)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_name10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // st pos = name10
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_name10_, RHO);
  (void)(Rsh_Fir_reg_name10_);
  // goto L14(name10)
  // L14(name10)
  Rsh_Fir_reg_name11_ = Rsh_Fir_reg_name10_;
  goto L14_;

L72_:;
  // goto L21(c5, ll1, r47)
  // L21(c5, ll1, r47)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_ll4_ = Rsh_Fir_reg_ll1_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r47_;
  goto L21_;

L78_:;
  // goto L24(r50)
  // L24(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L24_;

L82_:;
  // p10 = prom<V +>{
  //   pattern7 = ld pattern;
  //   pattern8 = force? pattern7;
  //   checkMissing(pattern8);
  //   return pattern8;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3005739477_12, 0, NULL, CCP, RHO);
  // r55 = dyn grep2("[^\\\\]\\[<-", p10)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep2_, 2, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L83() else D25()
  // L83()
  goto L83_;

L85_:;
  // sub = ldf sub
  Rsh_Fir_reg_sub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // check L86() else D27()
  // L86()
  goto L86_;

D25_:;
  // deopt 106 [r55]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 110 []
  Rsh_Fir_deopt(110, 0, NULL, CCP, RHO);
  return R_NilValue;

L83_:;
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r56 = dyn length2(r55)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L84() else D26()
  // L84()
  goto L84_;

L86_:;
  // p11 = prom<V +>{
  //   pattern9 = ld pattern;
  //   pattern10 = force? pattern9;
  //   checkMissing(pattern10);
  //   return pattern10;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3005739477_13, 0, NULL, CCP, RHO);
  // r58 = dyn sub("\\[<-", "\\\\\\[<-", p11)
  SEXP Rsh_Fir_array_args80[3];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args80[2] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sub, 3, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L87() else D28()
  // L87()
  goto L87_;

D26_:;
  // deopt 108 [r56]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 114 [r58]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L84_:;
  // goto L25(r56)
  // L25(r56)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r56_;
  goto L25_;

L87_:;
  // st pattern = r58
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r58_, RHO);
  (void)(Rsh_Fir_reg_r58_);
  // warning2 = ldf warning
  Rsh_Fir_reg_warning2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L88() else D29()
  // L88()
  goto L88_;

D29_:;
  // deopt 117 []
  Rsh_Fir_deopt(117, 0, NULL, CCP, RHO);
  return R_NilValue;

L88_:;
  // r59 = dyn warning2("replaced '[<-' by '\\\\[<-' in regular expression pattern")
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning2_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L89() else D30()
  // L89()
  goto L89_;

D30_:;
  // deopt 119 [r59]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L89_:;
  // goto L24(r59)
  // L24(r59)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r59_;
  goto L24_;
}
SEXP Rsh_Fir_user_promise_inner3005739477_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3005739477/0: expected 0, got %d", NCAPTURES);

  // return -1
  return Rsh_const(CCP, 9);
}
SEXP Rsh_Fir_user_promise_inner3005739477_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_pos1_;
  SEXP Rsh_Fir_reg_pos2_;
  SEXP Rsh_Fir_reg_as_environment;
  SEXP Rsh_Fir_reg_r3_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3005739477/0: expected 0, got %d", NCAPTURES);

  // sym = ldf `as.environment`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base = ldf `as.environment` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
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
  return Rsh_Fir_reg_r2_1;

L1_:;
  // pos1 = ld pos
  Rsh_Fir_reg_pos1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // pos2 = force? pos1
  Rsh_Fir_reg_pos2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos1_);
  // checkMissing(pos2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_pos2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // as_environment = ldf `as.environment` in base
  Rsh_Fir_reg_as_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r3 = dyn as_environment(pos2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_pos2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_environment, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_r3_1;
  goto L0_;

L2_:;
  // r1 = dyn base(<sym pos>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_r1_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3005739477_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_name1_;
  SEXP Rsh_Fir_reg_name2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3005739477/0: expected 0, got %d", NCAPTURES);

  // name1 = ld name
  Rsh_Fir_reg_name1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // name2 = force? name1
  Rsh_Fir_reg_name2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name1_);
  // checkMissing(name2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_name2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return name2
  return Rsh_Fir_reg_name2_;
}
SEXP Rsh_Fir_user_promise_inner3005739477_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3005739477/0: expected 0, got %d", NCAPTURES);

  // r10 = clos inner3708401697
  Rsh_Fir_reg_r10_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3708401697_, RHO, CCP);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_inner3005739477_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_pattern1_;
  SEXP Rsh_Fir_reg_pattern2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3005739477/0: expected 0, got %d", NCAPTURES);

  // pattern1 = ld pattern
  Rsh_Fir_reg_pattern1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // pattern2 = force? pattern1
  Rsh_Fir_reg_pattern2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern1_);
  // checkMissing(pattern2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_pattern2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return pattern2
  return Rsh_Fir_reg_pattern2_;
}
SEXP Rsh_Fir_user_promise_inner3005739477_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_pattern11_;
  SEXP Rsh_Fir_reg_pattern12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3005739477/0: expected 0, got %d", NCAPTURES);

  // pattern11 = ld pattern
  Rsh_Fir_reg_pattern11_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // pattern12 = force? pattern11
  Rsh_Fir_reg_pattern12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern11_);
  // checkMissing(pattern12)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_pattern12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return pattern12
  return Rsh_Fir_reg_pattern12_;
}
SEXP Rsh_Fir_user_promise_inner3005739477_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_all_names3_;
  SEXP Rsh_Fir_reg_all_names4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3005739477/0: expected 0, got %d", NCAPTURES);

  // all_names3 = ld `all.names`
  Rsh_Fir_reg_all_names3_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // all_names4 = force? all_names3
  Rsh_Fir_reg_all_names4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all_names3_);
  // checkMissing(all_names4)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_all_names4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // return all_names4
  return Rsh_Fir_reg_all_names4_;
}
SEXP Rsh_Fir_user_promise_inner3005739477_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_name5_;
  SEXP Rsh_Fir_reg_name6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3005739477/0: expected 0, got %d", NCAPTURES);

  // name5 = ld name
  Rsh_Fir_reg_name5_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // name6 = force? name5
  Rsh_Fir_reg_name6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name5_);
  // checkMissing(name6)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_name6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // return name6
  return Rsh_Fir_reg_name6_;
}
SEXP Rsh_Fir_user_promise_inner3005739477_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gettextf;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3005739477/0: expected 0, got %d", NCAPTURES);

  // gettextf = ldf gettextf
  Rsh_Fir_reg_gettextf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // p6 = prom<V +>{
  //   sQuote = ldf sQuote;
  //   p5 = prom<V +>{
  //     name7 = ld name;
  //     name8 = force? name7;
  //     checkMissing(name8);
  //     return name8;
  //   };
  //   r26 = dyn sQuote(p5);
  //   return r26;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3005739477_9, 0, NULL, CCP, RHO);
  // r28 = dyn gettextf("%s converted to character string", p6)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gettextf, 2, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names23, CCP, RHO);
  // return r28
  return Rsh_Fir_reg_r28_;
}
SEXP Rsh_Fir_user_promise_inner3005739477_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sQuote;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r26_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3005739477/0: expected 0, got %d", NCAPTURES);

  // sQuote = ldf sQuote
  Rsh_Fir_reg_sQuote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // p5 = prom<V +>{
  //   name7 = ld name;
  //   name8 = force? name7;
  //   checkMissing(name8);
  //   return name8;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3005739477_10, 0, NULL, CCP, RHO);
  // r26 = dyn sQuote(p5)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sQuote, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names22, CCP, RHO);
  // return r26
  return Rsh_Fir_reg_r26_;
}
SEXP Rsh_Fir_user_promise_inner3005739477_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_name7_;
  SEXP Rsh_Fir_reg_name8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3005739477/0: expected 0, got %d", NCAPTURES);

  // name7 = ld name
  Rsh_Fir_reg_name7_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // name8 = force? name7
  Rsh_Fir_reg_name8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_name7_);
  // checkMissing(name8)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_name8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return name8
  return Rsh_Fir_reg_name8_;
}
SEXP Rsh_Fir_user_promise_inner3005739477_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_pattern3_;
  SEXP Rsh_Fir_reg_pattern4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3005739477/0: expected 0, got %d", NCAPTURES);

  // pattern3 = ld pattern
  Rsh_Fir_reg_pattern3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // pattern4 = force? pattern3
  Rsh_Fir_reg_pattern4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern3_);
  // checkMissing(pattern4)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_pattern4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // return pattern4
  return Rsh_Fir_reg_pattern4_;
}
SEXP Rsh_Fir_user_promise_inner3005739477_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_pattern7_;
  SEXP Rsh_Fir_reg_pattern8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3005739477/0: expected 0, got %d", NCAPTURES);

  // pattern7 = ld pattern
  Rsh_Fir_reg_pattern7_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // pattern8 = force? pattern7
  Rsh_Fir_reg_pattern8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern7_);
  // checkMissing(pattern8)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_pattern8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // return pattern8
  return Rsh_Fir_reg_pattern8_;
}
SEXP Rsh_Fir_user_promise_inner3005739477_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_pattern9_;
  SEXP Rsh_Fir_reg_pattern10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3005739477/0: expected 0, got %d", NCAPTURES);

  // pattern9 = ld pattern
  Rsh_Fir_reg_pattern9_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // pattern10 = force? pattern9
  Rsh_Fir_reg_pattern10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern9_);
  // checkMissing(pattern10)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_pattern10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // return pattern10
  return Rsh_Fir_reg_pattern10_;
}
SEXP Rsh_Fir_user_function_inner3708401697_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3708401697 dynamic dispatch ([e])

  return Rsh_Fir_user_version_inner3708401697_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3708401697_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3708401697 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3708401697/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_e;
  SEXP Rsh_Fir_reg_e1_;
  SEXP Rsh_Fir_reg_e2_;

  // Bind parameters
  Rsh_Fir_reg_e = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st e = e
  Rsh_Fir_store(Rsh_const(CCP, 49), Rsh_Fir_reg_e, RHO);
  (void)(Rsh_Fir_reg_e);
  // e1 = ld e
  Rsh_Fir_reg_e1_ = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 0 [e1]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_e1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L0_:;
  // e2 = force? e1
  Rsh_Fir_reg_e2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e1_);
  // checkMissing(e2)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_e2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return e2
  return Rsh_Fir_reg_e2_;
}
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2708337952 dynamic dispatch ([])

  return Rsh_Fir_user_version_inner2708337952_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2708337952 version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for inner2708337952/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_ls2;
  SEXP Rsh_Fir_reg_r1;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // ls = ldf ls
  Rsh_Fir_reg_ls2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r = dyn ls()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ls2, 0, NULL, NULL, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 2 [r]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
