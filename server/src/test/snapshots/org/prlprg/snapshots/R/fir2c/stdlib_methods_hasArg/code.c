#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3672943467_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3672943467_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3672943467_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3672943467_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3672943467_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3672943467_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3672943467_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3672943467_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner3672943467_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2911343005_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2911343005_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2911343005_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_ftest;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_ftest1_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_ftest2_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_ftest3_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_ftest4_;
  SEXP Rsh_Fir_reg_r6_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3672943467
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3672943467_, RHO, CCP);
  // st hasArg = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // r1 = clos inner2911343005
  Rsh_Fir_reg_r1_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2911343005_, RHO, CCP);
  // st ftest = r1
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // ftest = ldf ftest
  Rsh_Fir_reg_ftest = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r2 = dyn ftest(1.0)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ftest, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 9 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // ftest1 = ldf ftest
  Rsh_Fir_reg_ftest1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r3 = dyn ftest1(1.0, 2.0)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ftest1_, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 14 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // ftest2 = ldf ftest
  Rsh_Fir_reg_ftest2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // r4 = dyn ftest2[y2](2.0)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ftest2_, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 19 [r4]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // ftest3 = ldf ftest
  Rsh_Fir_reg_ftest3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // r5 = dyn ftest3[y](2.0)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ftest3_, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 24 [r5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // ftest4 = ldf ftest
  Rsh_Fir_reg_ftest4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // r6 = dyn ftest4[y2, x](2.0, 1.0)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ftest4_, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 31 [r6]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_function_inner3672943467_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3672943467 dynamic dispatch ([name])

  return Rsh_Fir_user_version_inner3672943467_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3672943467_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3672943467 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3672943467/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_name;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_substitute;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_formals;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_aname;
  SEXP Rsh_Fir_reg_aname1_;
  SEXP Rsh_Fir_reg_fnames;
  SEXP Rsh_Fir_reg_fnames1_;
  SEXP Rsh_Fir_reg_match;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_fnames2_;
  SEXP Rsh_Fir_reg_fnames3_;
  SEXP Rsh_Fir_reg_match1_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_is_na1_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_eval;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_aname2_;
  SEXP Rsh_Fir_reg_aname3_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_dotsCall;
  SEXP Rsh_Fir_reg_dotsCall1_;
  SEXP Rsh_Fir_reg_names1_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_match2_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_is_na2_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_eval1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r51_;

  // Bind parameters
  Rsh_Fir_reg_name = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st name = name
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_name, RHO);
  (void)(Rsh_Fir_reg_name);
  // sym = ldf `as.character`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf `as.character` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L0_:;
  // st aname = r1
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // sym2 = ldf names
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base2 = ldf names in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard2 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L12_:;
  // sym1 = ldf substitute
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf substitute in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard1 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L13_:;
  // r = dyn base(<lang substitute(name)>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;

L1_:;
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r5 = dyn as_character(r3)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L16() else D0()
  // L16()
  goto L16_;

L2_:;
  // st fnames = r7
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // sym3 = ldf `is.na`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base3 = ldf `is.na` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard3 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L14_:;
  // substitute = ldf substitute in base
  Rsh_Fir_reg_substitute = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r4 = dyn substitute(<sym name>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r4_1;
  goto L1_;

L15_:;
  // r2 = dyn base1(<sym name>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r2_1;
  goto L1_;

L17_:;
  // formals = ldf formals
  Rsh_Fir_reg_formals = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L19() else D1()
  // L19()
  goto L19_;

L18_:;
  // r6 = dyn base2(<lang formals(sys.function(sys.parent()))>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_1;
  goto L2_;

D0_:;
  // deopt 6 [r5]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D1_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // c = `as.logical`(r15)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args14);
  // if c then L30() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L30()
    goto L30_;
  } else {
  // L5()
    goto L5_;
  }

L16_:;
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r5_1;
  goto L0_;

L19_:;
  // p1 = prom<V +>{
  //   sys_function = ldf `sys.function`;
  //   p = prom<V +>{
  //     sys_parent = ldf `sys.parent`;
  //     r8 = dyn sys_parent();
  //     return r8;
  //   };
  //   r10 = dyn sys_function(p);
  //   return r10;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3672943467_, 0, NULL, CCP, RHO);
  // r12 = dyn formals(p1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_formals, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

L22_:;
  // sym4 = ldf match
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base4 = ldf match in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard4 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L23_:;
  // r14 = dyn base3(<lang match(aname, fnames)>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L3(r14)
  // L3(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L3_;

D2_:;
  // deopt 13 [r12]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L4_:;
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r19 = dyn is_na(r17)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L29() else D7()
  // L29()
  goto L29_;

L5_:;
  // eval1 = ldf eval
  Rsh_Fir_reg_eval1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L54() else D18()
  // L54()
  goto L54_;

L20_:;
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r13 = dyn names(r12)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L21() else D3()
  // L21()
  goto L21_;

L24_:;
  // aname = ld aname
  Rsh_Fir_reg_aname = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L26() else D4()
  // L26()
  goto L26_;

L25_:;
  // r16 = dyn base4(<sym aname>, <sym fnames>)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L4(r16)
  // L4(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L4_;

L30_:;
  // sym5 = ldf `is.na`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base5 = ldf `is.na` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard5 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

D3_:;
  // deopt 15 [r13]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 21 [aname]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_aname;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 30 [r19]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 72 []
  Rsh_Fir_deopt(72, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // c1 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args23);
  // if c1 then L38() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L38()
    goto L38_;
  } else {
  // L8()
    goto L8_;
  }

L21_:;
  // goto L2(r13)
  // L2(r13)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r13_;
  goto L2_;

L26_:;
  // aname1 = force? aname
  Rsh_Fir_reg_aname1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_aname);
  // checkMissing(aname1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_aname1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // fnames = ld fnames
  Rsh_Fir_reg_fnames = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L27() else D5()
  // L27()
  goto L27_;

L29_:;
  // goto L3(r19)
  // L3(r19)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r19_;
  goto L3_;

L31_:;
  // sym6 = ldf match
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base6 = ldf match in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard6 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L32_:;
  // r20 = dyn base5(<lang match("...", fnames)>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L6(r20)
  // L6(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L6_;

L54_:;
  // p4 = prom<V +>{
  //   sym11 = ldf substitute;
  //   base11 = ldf substitute in base;
  //   guard11 = `==`.4(sym11, base11);
  //   if guard11 then L1() else L2();
  // L0(r44):
  //   return r44;
  // L1():
  //   substitute1 = ldf substitute in base;
  //   r45 = dyn substitute1(<lang `!`(missing(name))>);
  //   goto L0(r45);
  // L2():
  //   r43 = dyn base11(<lang `!`(missing(name))>);
  //   goto L0(r43);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3672943467_2, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   sys_frame = ldf `sys.frame`;
  //   p5 = prom<V +>{
  //     sys_parent2 = ldf `sys.parent`;
  //     r47 = dyn sys_parent2();
  //     return r47;
  //   };
  //   r49 = dyn sys_frame(p5);
  //   return r49;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3672943467_3, 0, NULL, CCP, RHO);
  // r51 = dyn eval1(p4, p6)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval1_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L55() else D19()
  // L55()
  goto L55_;

D5_:;
  // deopt 23 [fnames]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_fnames;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 75 [r51]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L7_:;
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r25 = dyn is_na1(r23)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L37() else D10()
  // L37()
  goto L37_;

L8_:;
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L40() else D11()
  // L40()
  goto L40_;

L27_:;
  // fnames1 = force? fnames
  Rsh_Fir_reg_fnames1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fnames);
  // checkMissing(fnames1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_fnames1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r18 = dyn match(aname1, fnames1, NA_INT, NULL)
  SEXP Rsh_Fir_array_args34[4];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_aname1_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_fnames1_;
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args34[3] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names22[4];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L28() else D6()
  // L28()
  goto L28_;

L33_:;
  // fnames2 = ld fnames
  Rsh_Fir_reg_fnames2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L35() else D8()
  // L35()
  goto L35_;

L34_:;
  // r22 = dyn base6("...", <sym fnames>)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L7(r22)
  // L7(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L7_;

L38_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return FALSE
  return Rsh_const(CCP, 28);

L55_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r51
  return Rsh_Fir_reg_r51_;

D6_:;
  // deopt 28 [r18]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 36 [fnames2]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_fnames2_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 43 [r25]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 47 []
  Rsh_Fir_deopt(47, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L4(r18)
  // L4(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L4_;

L35_:;
  // fnames3 = force? fnames2
  Rsh_Fir_reg_fnames3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fnames2_);
  // checkMissing(fnames3)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_fnames3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // match1 = ldf match in base
  Rsh_Fir_reg_match1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r24 = dyn match1("...", fnames3, NA_INT, NULL)
  SEXP Rsh_Fir_array_args37[4];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_fnames3_;
  Rsh_Fir_array_args37[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args37[3] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names24[4];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match1_, 4, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L36() else D9()
  // L36()
  goto L36_;

L37_:;
  // goto L6(r25)
  // L6(r25)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r25_;
  goto L6_;

L40_:;
  // p2 = prom<V +>{
  //   sym7 = ldf quote;
  //   base7 = ldf quote in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L1() else L2();
  // L0(r27):
  //   return r27;
  // L1():
  //   quote = ldf quote in base;
  //   r28 = dyn quote(<lang substitute(list(...))>);
  //   goto L0(r28);
  // L2():
  //   r26 = dyn base7(<lang substitute(list(...))>);
  //   goto L0(r26);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3672943467_5, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   sys_parent1 = ldf `sys.parent`;
  //   r30 = dyn sys_parent1();
  //   return r30;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3672943467_6, 0, NULL, CCP, RHO);
  // r32 = dyn eval(p2, p3)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L41() else D12()
  // L41()
  goto L41_;

D9_:;
  // deopt 41 [r24]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 50 [r32]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L7(r24)
  // L7(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L7_;

L41_:;
  // st dotsCall = r32
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // sym8 = ldf `is.na`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base8 = ldf `is.na` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard8 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L9_:;
  // r42 = `!`(r34)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args43);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r42
  return Rsh_Fir_reg_r42_;

L42_:;
  // sym9 = ldf match
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base9 = ldf match in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard9 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L43_:;
  // r33 = dyn base8(<lang match(aname, names(dotsCall))>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L9(r33)
  // L9(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L9_;

L10_:;
  // is_na2 = ldf `is.na` in base
  Rsh_Fir_reg_is_na2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r41 = dyn is_na2(r36)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na2_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L52() else D17()
  // L52()
  goto L52_;

L44_:;
  // aname2 = ld aname
  Rsh_Fir_reg_aname2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L46() else D13()
  // L46()
  goto L46_;

L45_:;
  // r35 = dyn base9(<sym aname>, <lang names(dotsCall)>)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L10(r35)
  // L10(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L10_;

D13_:;
  // deopt 56 [aname2]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_aname2_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 69 [r41]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L46_:;
  // aname3 = force? aname2
  Rsh_Fir_reg_aname3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_aname2_);
  // checkMissing(aname3)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_aname3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // sym10 = ldf names
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base10 = ldf names in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard10 then L47() else L48()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L47()
    goto L47_;
  } else {
  // L48()
    goto L48_;
  }

L52_:;
  // goto L9(r41)
  // L9(r41)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r41_;
  goto L9_;

L11_:;
  // match2 = ldf match in base
  Rsh_Fir_reg_match2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r40 = dyn match2(aname3, r38, NA_INT, NULL)
  SEXP Rsh_Fir_array_args50[4];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_aname3_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_args50[2] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args50[3] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names31[4];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_array_arg_names31[3] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match2_, 4, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L51() else D16()
  // L51()
  goto L51_;

L47_:;
  // dotsCall = ld dotsCall
  Rsh_Fir_reg_dotsCall = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L49() else D14()
  // L49()
  goto L49_;

L48_:;
  // r37 = dyn base10(<sym dotsCall>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L11(r37)
  // L11(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L11_;

D14_:;
  // deopt 60 [dotsCall]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_dotsCall;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 67 [r40]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L49_:;
  // dotsCall1 = force? dotsCall
  Rsh_Fir_reg_dotsCall1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dotsCall);
  // checkMissing(dotsCall1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dotsCall1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r39 = dyn names1(dotsCall1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dotsCall1_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L50() else D15()
  // L50()
  goto L50_;

L51_:;
  // goto L10(r40)
  // L10(r40)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r40_;
  goto L10_;

D15_:;
  // deopt 63 [r39]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L11(r39)
  // L11(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L11_;
}
SEXP Rsh_Fir_user_promise_inner3672943467_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_function;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3672943467/0: expected 0, got %d", NCAPTURES);

  // sys_function = ldf `sys.function`
  Rsh_Fir_reg_sys_function = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // p = prom<V +>{
  //   sys_parent = ldf `sys.parent`;
  //   r8 = dyn sys_parent();
  //   return r8;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3672943467_1, 0, NULL, CCP, RHO);
  // r10 = dyn sys_function(p)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_function, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names10, CCP, RHO);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_inner3672943467_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_parent;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3672943467/0: expected 0, got %d", NCAPTURES);

  // sys_parent = ldf `sys.parent`
  Rsh_Fir_reg_sys_parent = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // r8 = dyn sys_parent()
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_parent, 0, NULL, NULL, CCP, RHO);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_inner3672943467_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_substitute1_;
  SEXP Rsh_Fir_reg_r45_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3672943467/0: expected 0, got %d", NCAPTURES);

  // sym11 = ldf substitute
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base11 = ldf substitute in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard11 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r44
  return Rsh_Fir_reg_r44_;

L1_:;
  // substitute1 = ldf substitute in base
  Rsh_Fir_reg_substitute1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r45 = dyn substitute1(<lang `!`(missing(name))>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substitute1_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r45)
  // L0(r45)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r45_;
  goto L0_;

L2_:;
  // r43 = dyn base11(<lang `!`(missing(name))>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r43)
  // L0(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3672943467_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_frame;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r49_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3672943467/0: expected 0, got %d", NCAPTURES);

  // sys_frame = ldf `sys.frame`
  Rsh_Fir_reg_sys_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // p5 = prom<V +>{
  //   sys_parent2 = ldf `sys.parent`;
  //   r47 = dyn sys_parent2();
  //   return r47;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3672943467_4, 0, NULL, CCP, RHO);
  // r49 = dyn sys_frame(p5)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_frame, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names19, CCP, RHO);
  // return r49
  return Rsh_Fir_reg_r49_;
}
SEXP Rsh_Fir_user_promise_inner3672943467_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_parent2_;
  SEXP Rsh_Fir_reg_r47_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3672943467/0: expected 0, got %d", NCAPTURES);

  // sys_parent2 = ldf `sys.parent`
  Rsh_Fir_reg_sys_parent2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // r47 = dyn sys_parent2()
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_parent2_, 0, NULL, NULL, CCP, RHO);
  // return r47
  return Rsh_Fir_reg_r47_;
}
SEXP Rsh_Fir_user_promise_inner3672943467_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_quote;
  SEXP Rsh_Fir_reg_r28_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3672943467/0: expected 0, got %d", NCAPTURES);

  // sym7 = ldf quote
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base7 = ldf quote in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args38);
  // if guard7 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r27
  return Rsh_Fir_reg_r27_;

L1_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r28 = dyn quote(<lang substitute(list(...))>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r28)
  // L0(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L0_;

L2_:;
  // r26 = dyn base7(<lang substitute(list(...))>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L0(r26)
  // L0(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3672943467_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sys_parent1_;
  SEXP Rsh_Fir_reg_r30_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3672943467/0: expected 0, got %d", NCAPTURES);

  // sys_parent1 = ldf `sys.parent`
  Rsh_Fir_reg_sys_parent1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // r30 = dyn sys_parent1()
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sys_parent1_, 0, NULL, NULL, CCP, RHO);
  // return r30
  return Rsh_Fir_reg_r30_;
}
SEXP Rsh_Fir_user_function_inner2911343005_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2911343005 dynamic dispatch ([x1, `...`])

  return Rsh_Fir_user_version_inner2911343005_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2911343005_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2911343005 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2911343005/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r2;
  SEXP Rsh_Fir_reg_r1_2;
  SEXP Rsh_Fir_reg_hasArg;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r3_2;
  SEXP Rsh_Fir_reg_hasArg1_;
  SEXP Rsh_Fir_reg_r4_2;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_r5_2;

  // Bind parameters
  Rsh_Fir_reg_x1_ = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x1 = x1
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_x1_, RHO);
  (void)(Rsh_Fir_reg_x1_);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf c
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_2;

L1_:;
  // hasArg = ldf hasArg
  Rsh_Fir_reg_hasArg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r = dyn base(<lang hasArg(x1)>, <lang hasArg("y2")>)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_2 = Rsh_Fir_reg_r2;
  goto L0_;

D0_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   x2 = ld x1;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   return x3;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2911343005_, 0, NULL, CCP, RHO);
  // r3 = dyn hasArg(p)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r3_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_hasArg, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 5 [r3]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r3_2;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L4_:;
  // hasArg1 = ldf hasArg
  Rsh_Fir_reg_hasArg1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 7 []
  Rsh_Fir_deopt(7, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // r4 = dyn hasArg1("y2")
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r4_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_hasArg1_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 9 [r4]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r4_2;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L6_:;
  // c = ldf c in base
  Rsh_Fir_reg_c1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r5 = dyn c(r3, r4)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r3_2;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_r4_2;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r5_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 11 [r5]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r5_2;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r1_2 = Rsh_Fir_reg_r5_2;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2911343005_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2911343005/0: expected 0, got %d", NCAPTURES);

  // x2 = ld x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return x3
  return Rsh_Fir_reg_x3_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
