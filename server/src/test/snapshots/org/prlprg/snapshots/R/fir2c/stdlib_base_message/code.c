#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1466735841_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1466735841_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1466735841_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1466735841_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1466735841_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1466735841_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1466735841_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1466735841_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1466735841_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1466735841_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner4061490079_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4061490079_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4061490079_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4061490079_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4061490079_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_message;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_suppressMessages;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_testit;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_suppressPackageStartupMessages;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_suppressMessages1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r12_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1466735841
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1466735841_, RHO, CCP);
  // st message = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // message = ldf message
  Rsh_Fir_reg_message = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn message("ABC", "DEF")
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_message, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // suppressMessages = ldf suppressMessages
  Rsh_Fir_reg_suppressMessages = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   message1 = ldf message;
  //   r2 = dyn message1("ABC");
  //   return r2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r4 = dyn suppressMessages(p)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_suppressMessages, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 11 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // r5 = clos inner2708337952
  Rsh_Fir_reg_r5_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // st testit = r5
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // testit = ldf testit
  Rsh_Fir_reg_testit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // r6 = dyn testit()
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_testit, 0, NULL, NULL, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 17 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // suppressPackageStartupMessages = ldf suppressPackageStartupMessages
  Rsh_Fir_reg_suppressPackageStartupMessages = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p1 = prom<V +>{
  //   testit1 = ldf testit;
  //   r7 = dyn testit1();
  //   return r7;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r9 = dyn suppressPackageStartupMessages(p1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_suppressPackageStartupMessages, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 21 [r9]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // suppressMessages1 = ldf suppressMessages
  Rsh_Fir_reg_suppressMessages1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p2 = prom<V +>{
  //   testit2 = ldf testit;
  //   r10 = dyn testit2();
  //   return r10;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r12 = dyn suppressMessages1(p2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_suppressMessages1_, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 25 [r12]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r12
  return Rsh_Fir_reg_r12_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_message1_;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // message1 = ldf message
  Rsh_Fir_reg_message1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // r2 = dyn message1("ABC")
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_message1_, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_testit1_;
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // testit1 = ldf testit
  Rsh_Fir_reg_testit1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // r7 = dyn testit1()
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_testit1_, 0, NULL, NULL, CCP, RHO);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_testit2_;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // testit2 = ldf testit
  Rsh_Fir_reg_testit2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // r10 = dyn testit2()
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_testit2_, 0, NULL, NULL, CCP, RHO);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_function_inner1466735841_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1466735841 dynamic dispatch ([`...`, domain, appendLF])

  return Rsh_Fir_user_version_inner1466735841_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1466735841_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1466735841 version 0 (dots, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1466735841/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_domain;
  SEXP Rsh_Fir_reg_appendLF;
  SEXP Rsh_Fir_reg_domain_isMissing;
  SEXP Rsh_Fir_reg_domain_orDefault;
  SEXP Rsh_Fir_reg_appendLF_isMissing;
  SEXP Rsh_Fir_reg_appendLF_orDefault;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg____length;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_inherits;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_nargs;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg__makeMessage;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_sys_call;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_simpleMessage;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_withRestarts;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_invisible;
  SEXP Rsh_Fir_reg_r31_;

  // Bind parameters
  Rsh_Fir_reg_ddd = PARAMS[0];
  Rsh_Fir_reg_domain = PARAMS[1];
  Rsh_Fir_reg_appendLF = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // domain_isMissing = missing.0(domain)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_domain;
  Rsh_Fir_reg_domain_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if domain_isMissing then L0(NULL) else L0(domain)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_domain_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_domain_orDefault = Rsh_const(CCP, 7);
    goto L0_;
  } else {
  // L0(domain)
    Rsh_Fir_reg_domain_orDefault = Rsh_Fir_reg_domain;
    goto L0_;
  }

L0_:;
  // st domain = domain_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_domain_orDefault, RHO);
  (void)(Rsh_Fir_reg_domain_orDefault);
  // appendLF_isMissing = missing.0(appendLF)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_appendLF;
  Rsh_Fir_reg_appendLF_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if appendLF_isMissing then L1(TRUE) else L1(appendLF)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_appendLF_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_appendLF_orDefault = Rsh_const(CCP, 9);
    goto L1_;
  } else {
  // L1(appendLF)
    Rsh_Fir_reg_appendLF_orDefault = Rsh_Fir_reg_appendLF;
    goto L1_;
  }

L1_:;
  // st appendLF = appendLF_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_appendLF_orDefault, RHO);
  (void)(Rsh_Fir_reg_appendLF_orDefault);
  // sym = ldf `...length`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base = ldf `...length` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L2_:;
  // r3 = `==`(r1, 1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args8);
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args9);
  // if c then L14() else L3(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L14()
    goto L14_;
  } else {
  // L3(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c;
    goto L3_;
  }

L11_:;
  // ___length = ldf `...length` in base
  Rsh_Fir_reg____length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r2 = dyn ___length()
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg____length, 0, NULL, NULL, CCP, RHO);
  // check L13() else D0()
  // L13()
  goto L13_;

L12_:;
  // r = dyn base()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 0, NULL, NULL, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L2_;

D0_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L3_:;
  // c9 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args10);
  // if c9 then L20() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L20()
    goto L20_;
  } else {
  // L5()
    goto L5_;
  }

L13_:;
  // goto L2(r2)
  // L2(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L2_;

L14_:;
  // sym1 = ldf inherits
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base1 = ldf inherits in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard1 then L15() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L15()
    goto L15_;
  } else {
  // L16()
    goto L16_;
  }

L4_:;
  // c6 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args12);
  // c7 = `&&`(c5, c6)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args13);
  // goto L3(c7)
  // L3(c7)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c7_;
  goto L3_;

L5_:;
  // _makeMessage = ldf `.makeMessage`
  Rsh_Fir_reg__makeMessage = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L30() else D7()
  // L30()
  goto L30_;

L9_:;
  // st cond = __5
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg___5_, RHO);
  (void)(Rsh_Fir_reg___5_);
  // r20 = clos inner4061490079
  Rsh_Fir_reg_r20_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4061490079_, RHO, CCP);
  // st defaultHandler = r20
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // withRestarts = ldf withRestarts
  Rsh_Fir_reg_withRestarts = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L36() else D13()
  // L36()
  goto L36_;

L15_:;
  // __1 = ld `..1`
  Rsh_Fir_reg___1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L17() else D1()
  // L17()
  goto L17_;

L16_:;
  // r4 = dyn base1(<sym ..1>, "condition")
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L4(c, r4)
  // L4(c, r4)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_1;
  goto L4_;

L20_:;
  // sym2 = ldf nargs
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base2 = ldf nargs in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard2 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

D1_:;
  // deopt 8 [c, __1]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg___1_;
  Rsh_Fir_deopt(8, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 52 []
  Rsh_Fir_deopt(52, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // r10 = `>`(r8, 1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args16);
  // c10 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args17);
  // if c10 then L24() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L24()
    goto L24_;
  } else {
  // L7()
    goto L7_;
  }

L17_:;
  // __2 = force? __1
  Rsh_Fir_reg___2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___1_);
  // checkMissing(__2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg___2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r6 = dyn inherits(__2, "condition", FALSE)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg___2_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L18() else D2()
  // L18()
  goto L18_;

L21_:;
  // nargs = ldf nargs in base
  Rsh_Fir_reg_nargs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r9 = dyn nargs()
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nargs, 0, NULL, NULL, CCP, RHO);
  // check L23() else D3()
  // L23()
  goto L23_;

L22_:;
  // r7 = dyn base2()
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 0, NULL, NULL, CCP, RHO);
  // goto L6(r7)
  // L6(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_1;
  goto L6_;

L30_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // p = prom<V +>{
  //   domain1 = ld domain;
  //   domain2 = force? domain1;
  //   checkMissing(domain2);
  //   return domain2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1466735841_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   appendLF1 = ld appendLF;
  //   appendLF2 = force? appendLF1;
  //   checkMissing(appendLF2);
  //   return appendLF2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1466735841_1, 0, NULL, CCP, RHO);
  // r15 = dyn _makeMessage[`...`, domain, appendLF](ddd1, p, p1)
  SEXP Rsh_Fir_array_args22[3];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_ddd1_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args22[2] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names7[2] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__makeMessage, 3, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L31() else D8()
  // L31()
  goto L31_;

L36_:;
  // p6 = prom<V +>{
  //   signalCondition = ldf signalCondition;
  //   p4 = prom<V +>{
  //     cond = ld cond;
  //     cond1 = force? cond;
  //     checkMissing(cond1);
  //     return cond1;
  //   };
  //   dyn signalCondition(p4);
  //   defaultHandler = ldf defaultHandler;
  //   p5 = prom<V +>{
  //     cond2 = ld cond;
  //     cond3 = force? cond2;
  //     checkMissing(cond3);
  //     return cond3;
  //   };
  //   r24 = dyn defaultHandler(p5);
  //   return r24;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1466735841_2, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   r26 = clos inner2708337952;
  //   return r26;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1466735841_5, 0, NULL, CCP, RHO);
  // r28 = dyn withRestarts[, muffleMessage](p6, p7)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_withRestarts, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L37() else D14()
  // L37()
  goto L37_;

D2_:;
  // deopt 13 [c, r6]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_deopt(13, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 18 [r9]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 36 [r15]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 56 [r28]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // __3 = ld `..1`
  Rsh_Fir_reg___3_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L28() else D6()
  // L28()
  goto L28_;

L18_:;
  // goto L4(c, r6)
  // L4(c, r6)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r6_1;
  goto L4_;

L23_:;
  // goto L6(r9)
  // L6(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_1;
  goto L6_;

L24_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L25() else D4()
  // L25()
  goto L25_;

L31_:;
  // st msg = r15
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // sys_call = ldf `sys.call`
  Rsh_Fir_reg_sys_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L32() else D9()
  // L32()
  goto L32_;

L37_:;
  // sym3 = ldf invisible
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base3 = ldf invisible in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard3 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

D4_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 27 [__3]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg___3_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r30
  return Rsh_Fir_reg_r30_;

L25_:;
  // r11 = dyn warning("additional arguments ignored in message()")
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L26() else D5()
  // L26()
  goto L26_;

L28_:;
  // __4 = force? __3
  Rsh_Fir_reg___4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg___3_);
  // checkMissing(__4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg___4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // goto L9(__4)
  // L9(__4)
  Rsh_Fir_reg___5_ = Rsh_Fir_reg___4_;
  goto L9_;

L32_:;
  // r16 = dyn sys_call()
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_call, 0, NULL, NULL, CCP, RHO);
  // check L33() else D10()
  // L33()
  goto L33_;

L38_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r31 = dyn invisible()
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 0, NULL, NULL, CCP, RHO);
  // check L40() else D15()
  // L40()
  goto L40_;

L39_:;
  // r29 = dyn base3()
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 0, NULL, NULL, CCP, RHO);
  // goto L10(r29)
  // L10(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L10_;

D5_:;
  // deopt 24 [r11]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 40 [r16]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 60 [r31]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L8()
  // L8()
  goto L8_;

L33_:;
  // st call = r16
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // simpleMessage = ldf simpleMessage
  Rsh_Fir_reg_simpleMessage = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L34() else D11()
  // L34()
  goto L34_;

L40_:;
  // goto L10(r31)
  // L10(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L10_;

D11_:;
  // deopt 43 []
  Rsh_Fir_deopt(43, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p2 = prom<V +>{
  //   msg = ld msg;
  //   msg1 = force? msg;
  //   checkMissing(msg1);
  //   return msg1;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1466735841_6, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   call = ld call;
  //   call1 = force? call;
  //   checkMissing(call1);
  //   return call1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1466735841_7, 0, NULL, CCP, RHO);
  // r19 = dyn simpleMessage(p2, p3)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_simpleMessage, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L35() else D12()
  // L35()
  goto L35_;

D12_:;
  // deopt 46 [r19]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L9(r19)
  // L9(r19)
  Rsh_Fir_reg___5_ = Rsh_Fir_reg_r19_;
  goto L9_;
}
SEXP Rsh_Fir_user_promise_inner1466735841_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_domain1_;
  SEXP Rsh_Fir_reg_domain2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1466735841/0: expected 0, got %d", NCAPTURES);

  // domain1 = ld domain
  Rsh_Fir_reg_domain1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // domain2 = force? domain1
  Rsh_Fir_reg_domain2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_domain1_);
  // checkMissing(domain2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_domain2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return domain2
  return Rsh_Fir_reg_domain2_;
}
SEXP Rsh_Fir_user_promise_inner1466735841_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_appendLF1_;
  SEXP Rsh_Fir_reg_appendLF2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1466735841/0: expected 0, got %d", NCAPTURES);

  // appendLF1 = ld appendLF
  Rsh_Fir_reg_appendLF1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // appendLF2 = force? appendLF1
  Rsh_Fir_reg_appendLF2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_appendLF1_);
  // checkMissing(appendLF2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_appendLF2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return appendLF2
  return Rsh_Fir_reg_appendLF2_;
}
SEXP Rsh_Fir_user_promise_inner1466735841_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_signalCondition;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_defaultHandler;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r24_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1466735841/0: expected 0, got %d", NCAPTURES);

  // signalCondition = ldf signalCondition
  Rsh_Fir_reg_signalCondition = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // p4 = prom<V +>{
  //   cond = ld cond;
  //   cond1 = force? cond;
  //   checkMissing(cond1);
  //   return cond1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1466735841_3, 0, NULL, CCP, RHO);
  // dyn signalCondition(p4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  (void)(Rsh_Fir_call_dynamic(Rsh_Fir_reg_signalCondition, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names8, CCP, RHO));
  // defaultHandler = ldf defaultHandler
  Rsh_Fir_reg_defaultHandler = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // p5 = prom<V +>{
  //   cond2 = ld cond;
  //   cond3 = force? cond2;
  //   checkMissing(cond3);
  //   return cond3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1466735841_4, 0, NULL, CCP, RHO);
  // r24 = dyn defaultHandler(p5)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_defaultHandler, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names9, CCP, RHO);
  // return r24
  return Rsh_Fir_reg_r24_;
}
SEXP Rsh_Fir_user_promise_inner1466735841_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cond;
  SEXP Rsh_Fir_reg_cond1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1466735841/0: expected 0, got %d", NCAPTURES);

  // cond = ld cond
  Rsh_Fir_reg_cond = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // cond1 = force? cond
  Rsh_Fir_reg_cond1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cond);
  // checkMissing(cond1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_cond1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // return cond1
  return Rsh_Fir_reg_cond1_;
}
SEXP Rsh_Fir_user_promise_inner1466735841_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_cond2_;
  SEXP Rsh_Fir_reg_cond3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1466735841/0: expected 0, got %d", NCAPTURES);

  // cond2 = ld cond
  Rsh_Fir_reg_cond2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // cond3 = force? cond2
  Rsh_Fir_reg_cond3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cond2_);
  // checkMissing(cond3)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_cond3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return cond3
  return Rsh_Fir_reg_cond3_;
}
SEXP Rsh_Fir_user_promise_inner1466735841_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r26_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1466735841/0: expected 0, got %d", NCAPTURES);

  // r26 = clos inner2708337952
  Rsh_Fir_reg_r26_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // return r26
  return Rsh_Fir_reg_r26_;
}
SEXP Rsh_Fir_user_promise_inner1466735841_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_msg;
  SEXP Rsh_Fir_reg_msg1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1466735841/0: expected 0, got %d", NCAPTURES);

  // msg = ld msg
  Rsh_Fir_reg_msg = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // msg1 = force? msg
  Rsh_Fir_reg_msg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg);
  // checkMissing(msg1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_msg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return msg1
  return Rsh_Fir_reg_msg1_;
}
SEXP Rsh_Fir_user_promise_inner1466735841_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_call;
  SEXP Rsh_Fir_reg_call1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1466735841/0: expected 0, got %d", NCAPTURES);

  // call = ld call
  Rsh_Fir_reg_call = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // call1 = force? call
  Rsh_Fir_reg_call1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_call);
  // checkMissing(call1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_call1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return call1
  return Rsh_Fir_reg_call1_;
}
SEXP Rsh_Fir_user_function_inner4061490079_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4061490079 dynamic dispatch ([c])

  return Rsh_Fir_user_version_inner4061490079_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4061490079_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4061490079 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner4061490079/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_cat;
  SEXP Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_reg_p2_2;
  SEXP Rsh_Fir_reg_r5_2;

  // Bind parameters
  Rsh_Fir_reg_c1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st c = c
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_c1, RHO);
  (void)(Rsh_Fir_reg_c1);
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p1 = prom<V +>{
  //   conditionMessage = ldf conditionMessage;
  //   p = prom<V +>{
  //     c1 = ld c;
  //     c2 = force? c1;
  //     checkMissing(c2);
  //     return c2;
  //   };
  //   r1 = dyn conditionMessage(p);
  //   return r1;
  // }
  Rsh_Fir_reg_p1_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4061490079_, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   stderr = ldf stderr;
  //   r3 = dyn stderr();
  //   return r3;
  // }
  Rsh_Fir_reg_p2_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4061490079_2, 0, NULL, CCP, RHO);
  // r5 = dyn cat[, file, sep](p1, p2, "")
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p1_2;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_p2_2;
  Rsh_Fir_array_args36[2] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_arg_names14[2] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r5_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 3, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r5]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r5_2;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r5
  return Rsh_Fir_reg_r5_2;
}
SEXP Rsh_Fir_user_promise_inner4061490079_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_conditionMessage;
  SEXP Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_reg_r1_2;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4061490079/0: expected 0, got %d", NCAPTURES);

  // conditionMessage = ldf conditionMessage
  Rsh_Fir_reg_conditionMessage = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // p = prom<V +>{
  //   c1 = ld c;
  //   c2 = force? c1;
  //   checkMissing(c2);
  //   return c2;
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4061490079_1, 0, NULL, CCP, RHO);
  // r1 = dyn conditionMessage(p)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r1_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_conditionMessage, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names13, CCP, RHO);
  // return r1
  return Rsh_Fir_reg_r1_2;
}
SEXP Rsh_Fir_user_promise_inner4061490079_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_c2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4061490079/0: expected 0, got %d", NCAPTURES);

  // c1 = ld c
  Rsh_Fir_reg_c1_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // c2 = force? c1
  Rsh_Fir_reg_c2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_c1_);
  // checkMissing(c2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_c2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return c2
  return Rsh_Fir_reg_c2_1;
}
SEXP Rsh_Fir_user_promise_inner4061490079_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_stderr;
  SEXP Rsh_Fir_reg_r3_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4061490079/0: expected 0, got %d", NCAPTURES);

  // stderr = ldf stderr
  Rsh_Fir_reg_stderr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // r3 = dyn stderr()
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stderr, 0, NULL, NULL, CCP, RHO);
  // return r3
  return Rsh_Fir_reg_r3_1;
}
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2708337952 dynamic dispatch ([])

  return Rsh_Fir_user_version_inner2708337952_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2708337952 version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for inner2708337952/0: expected 0, got %d", NPARAMS);

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 7);
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
