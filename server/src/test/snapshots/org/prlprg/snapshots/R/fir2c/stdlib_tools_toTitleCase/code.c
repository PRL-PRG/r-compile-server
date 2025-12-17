#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3773442701_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3773442701_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3773442701_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3773442701_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r
  SEXP Rsh_Fir_reg_toTitleCase;  // toTitleCase
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_toTitleCase1_;  // toTitleCase1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_toTitleCase2_;  // toTitleCase2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_toTitleCase3_;  // toTitleCase3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_toTitleCase4_;  // toTitleCase4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_toTitleCase5_;  // toTitleCase5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_toTitleCase6_;  // toTitleCase6
  SEXP Rsh_Fir_reg_r7_;  // r7

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner3773442701
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3773442701_, RHO, CCP);
  // st toTitleCase = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // toTitleCase = ldf toTitleCase
  Rsh_Fir_reg_toTitleCase = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn toTitleCase("bayesian network modeling and analysis")
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_toTitleCase, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
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
  // toTitleCase1 = ldf toTitleCase
  Rsh_Fir_reg_toTitleCase1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r2 = dyn toTitleCase1("ensemble tool for predictions from species distribution models")
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_toTitleCase1_, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 10 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // toTitleCase2 = ldf toTitleCase
  Rsh_Fir_reg_toTitleCase2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // r3 = dyn toTitleCase2("small- and large-scale analysis")
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_toTitleCase2_, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 14 [r3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // toTitleCase3 = ldf toTitleCase
  Rsh_Fir_reg_toTitleCase3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // r4 = dyn toTitleCase3("a small fox is jumping")
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_toTitleCase3_, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 18 [r4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // toTitleCase4 = ldf toTitleCase
  Rsh_Fir_reg_toTitleCase4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // r5 = dyn toTitleCase4("is a small fox jumping?")
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_toTitleCase4_, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 22 [r5]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // toTitleCase5 = ldf toTitleCase
  Rsh_Fir_reg_toTitleCase5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L10() else D10()
  // L10()
  goto L10_;

D10_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // r6 = dyn toTitleCase5("a pangram: the quick brown fox jumps over the lazy dog")
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_toTitleCase5_, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L11() else D11()
  // L11()
  goto L11_;

D11_:;
  // deopt 26 [r6]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L11_:;
  // toTitleCase6 = ldf toTitleCase
  Rsh_Fir_reg_toTitleCase6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L12() else D12()
  // L12()
  goto L12_;

D12_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // r7 = dyn toTitleCase6("asking -- 'is a small fox jumping?'")
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_toTitleCase6_, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L13() else D13()
  // L13()
  goto L13_;

D13_:;
  // deopt 30 [r7]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L13_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_function_inner3773442701_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3773442701 dynamic dispatch ([text])

  return Rsh_Fir_user_version_inner3773442701_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3773442701_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3773442701 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3773442701/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_text;  // text
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_r6_1;  // r6
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_1;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_text1_;  // text1
  SEXP Rsh_Fir_reg_text2_;  // text2
  SEXP Rsh_Fir_reg_typeof;  // typeof
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_vapply;  // vapply
  SEXP Rsh_Fir_reg_text3_;  // text3
  SEXP Rsh_Fir_reg_text4_;  // text4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_titleCase1_;  // titleCase1
  SEXP Rsh_Fir_reg_titleCase2_;  // titleCase2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r15_;  // r15

  // Bind parameters
  Rsh_Fir_reg_text = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st text = text
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_text, RHO);
  (void)(Rsh_Fir_reg_text);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L0_:;
  // st alone = r1
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // st lpat = "^(a|an|and|are|as|at|be|but|by|en|for|if|in|is|nor|not|of|on|or|per|so|the|to|v[.]?|via|vs[.]?|from|into|than|that|with)$"
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_const(CCP, 11), RHO);
  (void)(Rsh_const(CCP, 11));
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard1 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L1_:;
  // st either = r4
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r4_1, RHO);
  (void)(Rsh_Fir_reg_r4_1);
  // r6 = clos inner2501545716
  Rsh_Fir_reg_r6_1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st titleCase1 = r6
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r6_1, RHO);
  (void)(Rsh_Fir_reg_r6_1);
  // sym2 = ldf typeof
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base2 = ldf typeof in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard2 then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L2_:;
  // r10 = `!=`(r8, "character")
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c2 then L15() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L15()
    goto L15_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

L5_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r2 = dyn c("2D", "3D", "AIC", "BayesX", "GoF", "HTML", "LaTeX", "MonetDB", "OpenBUGS", "TeX", "U.S.", "U.S.A.", "WinBUGS", "aka", "et", "al.", "ggplot2", "i.e.", "jar", "jars", "ncdf", "netCDF", "rgl", "rpart", "xls", "xlsx")
  SEXP Rsh_Fir_array_args12[26];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args12[3] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args12[4] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args12[5] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args12[6] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args12[7] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args12[8] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args12[9] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args12[10] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args12[11] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args12[12] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args12[13] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args12[14] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args12[15] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args12[16] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args12[17] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args12[18] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args12[19] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args12[20] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args12[21] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args12[22] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args12[23] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args12[24] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args12[25] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names7[26];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_array_arg_names7[4] = R_MissingArg;
  Rsh_Fir_array_arg_names7[5] = R_MissingArg;
  Rsh_Fir_array_arg_names7[6] = R_MissingArg;
  Rsh_Fir_array_arg_names7[7] = R_MissingArg;
  Rsh_Fir_array_arg_names7[8] = R_MissingArg;
  Rsh_Fir_array_arg_names7[9] = R_MissingArg;
  Rsh_Fir_array_arg_names7[10] = R_MissingArg;
  Rsh_Fir_array_arg_names7[11] = R_MissingArg;
  Rsh_Fir_array_arg_names7[12] = R_MissingArg;
  Rsh_Fir_array_arg_names7[13] = R_MissingArg;
  Rsh_Fir_array_arg_names7[14] = R_MissingArg;
  Rsh_Fir_array_arg_names7[15] = R_MissingArg;
  Rsh_Fir_array_arg_names7[16] = R_MissingArg;
  Rsh_Fir_array_arg_names7[17] = R_MissingArg;
  Rsh_Fir_array_arg_names7[18] = R_MissingArg;
  Rsh_Fir_array_arg_names7[19] = R_MissingArg;
  Rsh_Fir_array_arg_names7[20] = R_MissingArg;
  Rsh_Fir_array_arg_names7[21] = R_MissingArg;
  Rsh_Fir_array_arg_names7[22] = R_MissingArg;
  Rsh_Fir_array_arg_names7[23] = R_MissingArg;
  Rsh_Fir_array_arg_names7[24] = R_MissingArg;
  Rsh_Fir_array_arg_names7[25] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 26, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L6_:;
  // r = dyn base("2D", "3D", "AIC", "BayesX", "GoF", "HTML", "LaTeX", "MonetDB", "OpenBUGS", "TeX", "U.S.", "U.S.A.", "WinBUGS", "aka", "et", "al.", "ggplot2", "i.e.", "jar", "jars", "ncdf", "netCDF", "rgl", "rpart", "xls", "xlsx")
  SEXP Rsh_Fir_array_args13[26];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args13[3] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args13[4] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args13[5] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args13[6] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args13[7] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args13[8] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args13[9] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args13[10] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args13[11] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args13[12] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args13[13] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args13[14] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args13[15] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args13[16] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args13[17] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args13[18] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args13[19] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args13[20] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args13[21] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args13[22] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args13[23] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args13[24] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args13[25] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names8[26];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_array_arg_names8[3] = R_MissingArg;
  Rsh_Fir_array_arg_names8[4] = R_MissingArg;
  Rsh_Fir_array_arg_names8[5] = R_MissingArg;
  Rsh_Fir_array_arg_names8[6] = R_MissingArg;
  Rsh_Fir_array_arg_names8[7] = R_MissingArg;
  Rsh_Fir_array_arg_names8[8] = R_MissingArg;
  Rsh_Fir_array_arg_names8[9] = R_MissingArg;
  Rsh_Fir_array_arg_names8[10] = R_MissingArg;
  Rsh_Fir_array_arg_names8[11] = R_MissingArg;
  Rsh_Fir_array_arg_names8[12] = R_MissingArg;
  Rsh_Fir_array_arg_names8[13] = R_MissingArg;
  Rsh_Fir_array_arg_names8[14] = R_MissingArg;
  Rsh_Fir_array_arg_names8[15] = R_MissingArg;
  Rsh_Fir_array_arg_names8[16] = R_MissingArg;
  Rsh_Fir_array_arg_names8[17] = R_MissingArg;
  Rsh_Fir_array_arg_names8[18] = R_MissingArg;
  Rsh_Fir_array_arg_names8[19] = R_MissingArg;
  Rsh_Fir_array_arg_names8[20] = R_MissingArg;
  Rsh_Fir_array_arg_names8[21] = R_MissingArg;
  Rsh_Fir_array_arg_names8[22] = R_MissingArg;
  Rsh_Fir_array_arg_names8[23] = R_MissingArg;
  Rsh_Fir_array_arg_names8[24] = R_MissingArg;
  Rsh_Fir_array_arg_names8[25] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 26, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 29 [r2]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L8_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r5 = dyn c1("all", "above", "after", "along", "also", "among", "any", "both", "can", "few", "it", "less", "log", "many", "may", "more", "over", "some", "their", "then", "this", "under", "until", "using", "von", "when", "where", "which", "will", "without", "yet", "you", "your")
  SEXP Rsh_Fir_array_args14[33];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args14[3] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args14[4] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args14[5] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args14[6] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args14[7] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args14[8] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args14[9] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args14[10] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args14[11] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args14[12] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args14[13] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args14[14] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args14[15] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args14[16] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args14[17] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args14[18] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args14[19] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args14[20] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args14[21] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args14[22] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args14[23] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args14[24] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args14[25] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args14[26] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args14[27] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args14[28] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args14[29] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args14[30] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args14[31] = Rsh_const(CCP, 75);
  Rsh_Fir_array_args14[32] = Rsh_const(CCP, 76);
  SEXP Rsh_Fir_array_arg_names9[33];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_array_arg_names9[4] = R_MissingArg;
  Rsh_Fir_array_arg_names9[5] = R_MissingArg;
  Rsh_Fir_array_arg_names9[6] = R_MissingArg;
  Rsh_Fir_array_arg_names9[7] = R_MissingArg;
  Rsh_Fir_array_arg_names9[8] = R_MissingArg;
  Rsh_Fir_array_arg_names9[9] = R_MissingArg;
  Rsh_Fir_array_arg_names9[10] = R_MissingArg;
  Rsh_Fir_array_arg_names9[11] = R_MissingArg;
  Rsh_Fir_array_arg_names9[12] = R_MissingArg;
  Rsh_Fir_array_arg_names9[13] = R_MissingArg;
  Rsh_Fir_array_arg_names9[14] = R_MissingArg;
  Rsh_Fir_array_arg_names9[15] = R_MissingArg;
  Rsh_Fir_array_arg_names9[16] = R_MissingArg;
  Rsh_Fir_array_arg_names9[17] = R_MissingArg;
  Rsh_Fir_array_arg_names9[18] = R_MissingArg;
  Rsh_Fir_array_arg_names9[19] = R_MissingArg;
  Rsh_Fir_array_arg_names9[20] = R_MissingArg;
  Rsh_Fir_array_arg_names9[21] = R_MissingArg;
  Rsh_Fir_array_arg_names9[22] = R_MissingArg;
  Rsh_Fir_array_arg_names9[23] = R_MissingArg;
  Rsh_Fir_array_arg_names9[24] = R_MissingArg;
  Rsh_Fir_array_arg_names9[25] = R_MissingArg;
  Rsh_Fir_array_arg_names9[26] = R_MissingArg;
  Rsh_Fir_array_arg_names9[27] = R_MissingArg;
  Rsh_Fir_array_arg_names9[28] = R_MissingArg;
  Rsh_Fir_array_arg_names9[29] = R_MissingArg;
  Rsh_Fir_array_arg_names9[30] = R_MissingArg;
  Rsh_Fir_array_arg_names9[31] = R_MissingArg;
  Rsh_Fir_array_arg_names9[32] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 33, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

L9_:;
  // r3 = dyn base1("all", "above", "after", "along", "also", "among", "any", "both", "can", "few", "it", "less", "log", "many", "may", "more", "over", "some", "their", "then", "this", "under", "until", "using", "von", "when", "where", "which", "will", "without", "yet", "you", "your")
  SEXP Rsh_Fir_array_args15[33];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args15[3] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args15[4] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args15[5] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args15[6] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args15[7] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args15[8] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args15[9] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args15[10] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args15[11] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args15[12] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args15[13] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args15[14] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args15[15] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args15[16] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args15[17] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args15[18] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args15[19] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args15[20] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args15[21] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args15[22] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args15[23] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args15[24] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args15[25] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args15[26] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args15[27] = Rsh_const(CCP, 71);
  Rsh_Fir_array_args15[28] = Rsh_const(CCP, 72);
  Rsh_Fir_array_args15[29] = Rsh_const(CCP, 73);
  Rsh_Fir_array_args15[30] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args15[31] = Rsh_const(CCP, 75);
  Rsh_Fir_array_args15[32] = Rsh_const(CCP, 76);
  SEXP Rsh_Fir_array_arg_names10[33];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_array_arg_names10[4] = R_MissingArg;
  Rsh_Fir_array_arg_names10[5] = R_MissingArg;
  Rsh_Fir_array_arg_names10[6] = R_MissingArg;
  Rsh_Fir_array_arg_names10[7] = R_MissingArg;
  Rsh_Fir_array_arg_names10[8] = R_MissingArg;
  Rsh_Fir_array_arg_names10[9] = R_MissingArg;
  Rsh_Fir_array_arg_names10[10] = R_MissingArg;
  Rsh_Fir_array_arg_names10[11] = R_MissingArg;
  Rsh_Fir_array_arg_names10[12] = R_MissingArg;
  Rsh_Fir_array_arg_names10[13] = R_MissingArg;
  Rsh_Fir_array_arg_names10[14] = R_MissingArg;
  Rsh_Fir_array_arg_names10[15] = R_MissingArg;
  Rsh_Fir_array_arg_names10[16] = R_MissingArg;
  Rsh_Fir_array_arg_names10[17] = R_MissingArg;
  Rsh_Fir_array_arg_names10[18] = R_MissingArg;
  Rsh_Fir_array_arg_names10[19] = R_MissingArg;
  Rsh_Fir_array_arg_names10[20] = R_MissingArg;
  Rsh_Fir_array_arg_names10[21] = R_MissingArg;
  Rsh_Fir_array_arg_names10[22] = R_MissingArg;
  Rsh_Fir_array_arg_names10[23] = R_MissingArg;
  Rsh_Fir_array_arg_names10[24] = R_MissingArg;
  Rsh_Fir_array_arg_names10[25] = R_MissingArg;
  Rsh_Fir_array_arg_names10[26] = R_MissingArg;
  Rsh_Fir_array_arg_names10[27] = R_MissingArg;
  Rsh_Fir_array_arg_names10[28] = R_MissingArg;
  Rsh_Fir_array_arg_names10[29] = R_MissingArg;
  Rsh_Fir_array_arg_names10[30] = R_MissingArg;
  Rsh_Fir_array_arg_names10[31] = R_MissingArg;
  Rsh_Fir_array_arg_names10[32] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 33, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_1;
  goto L1_;

D1_:;
  // deopt 70 [r5]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r5_1;
  goto L1_;

L11_:;
  // text1 = ld text
  Rsh_Fir_reg_text1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

L12_:;
  // r7 = dyn base2(<sym text>)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_1;
  goto L2_;

D2_:;
  // deopt 77 [text1]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_text1_;
  Rsh_Fir_deopt(77, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L13_:;
  // text2 = force? text1
  Rsh_Fir_reg_text2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text1_);
  // checkMissing(text2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_text2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // typeof = ldf typeof in base
  Rsh_Fir_reg_typeof = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r9 = dyn typeof(text2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_text2_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_typeof, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

D3_:;
  // deopt 80 [r9]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L2(r9)
  // L2(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L2_;

L15_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 77), RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

D4_:;
  // deopt 84 []
  Rsh_Fir_deopt(84, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // r11 = dyn stop("'text' must be a character vector")
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 78);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

D5_:;
  // deopt 86 [r11]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L17_:;
  // goto L4()
  // L4()
  goto L4_;

D6_:;
  // deopt 90 []
  Rsh_Fir_deopt(90, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p = prom<V +>{
  //   text3 = ld text;
  //   text4 = force? text3;
  //   checkMissing(text4);
  //   return text4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3773442701_, CCP, RHO);
  // p1 = prom<V +>{
  //   titleCase1 = ld titleCase1;
  //   titleCase2 = force? titleCase1;
  //   checkMissing(titleCase2);
  //   return titleCase2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3773442701_1, CCP, RHO);
  // r15 = dyn vapply[, , , `USE.NAMES`](p, p1, "<chr>", FALSE)
  SEXP Rsh_Fir_array_args22[4];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args22[2] = Rsh_const(CCP, 79);
  Rsh_Fir_array_args22[3] = Rsh_const(CCP, 80);
  SEXP Rsh_Fir_array_arg_names14[4];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = Rsh_const(CCP, 81);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 4, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L20() else D7()
  // L20()
  goto L20_;

D7_:;
  // deopt 96 [r15]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L20_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_inner3773442701_(SEXP CCP, SEXP RHO) {
  // text3 = ld text
  Rsh_Fir_reg_text3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // text4 = force? text3
  Rsh_Fir_reg_text4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text3_);
  // checkMissing(text4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_text4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return text4
  return Rsh_Fir_reg_text4_;
}
SEXP Rsh_Fir_user_promise_inner3773442701_1(SEXP CCP, SEXP RHO) {
  // titleCase1 = ld titleCase1
  Rsh_Fir_reg_titleCase1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // titleCase2 = force? titleCase1
  Rsh_Fir_reg_titleCase2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_titleCase1_);
  // checkMissing(titleCase2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_titleCase2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return titleCase2
  return Rsh_Fir_reg_titleCase2_;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r1_2;  // r1
  SEXP Rsh_Fir_reg_r2_2;  // r2
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r3_2;  // r3
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r6_2;  // r6
  SEXP Rsh_Fir_reg_r7_2;  // r7
  SEXP Rsh_Fir_reg_C_splitString;  // C_splitString
  SEXP Rsh_Fir_reg_C_splitString1_;  // C_splitString1
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r8_1;  // r8
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_xx;  // xx
  SEXP Rsh_Fir_reg_xx1_;  // xx1
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_sym2_1;  // sym2
  SEXP Rsh_Fir_reg_base2_1;  // base2
  SEXP Rsh_Fir_reg_guard2_1;  // guard2
  SEXP Rsh_Fir_reg_r10_1;  // r10
  SEXP Rsh_Fir_reg_r11_1;  // r11
  SEXP Rsh_Fir_reg_alone;  // alone
  SEXP Rsh_Fir_reg_alone1_;  // alone1
  SEXP Rsh_Fir_reg_either;  // either
  SEXP Rsh_Fir_reg_either1_;  // either1
  SEXP Rsh_Fir_reg_c1_1;  // c1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_alone2_;  // alone2
  SEXP Rsh_Fir_reg_alone3_;  // alone3
  SEXP Rsh_Fir_reg_grepl;  // grepl
  SEXP Rsh_Fir_reg_xx2_;  // xx2
  SEXP Rsh_Fir_reg_xx3_;  // xx3
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_grepl1_;  // grepl1
  SEXP Rsh_Fir_reg_xx4_;  // xx4
  SEXP Rsh_Fir_reg_xx5_;  // xx5
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_grepl2_;  // grepl2
  SEXP Rsh_Fir_reg_lpat;  // lpat
  SEXP Rsh_Fir_reg_lpat1_;  // lpat1
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_xx6_;  // xx6
  SEXP Rsh_Fir_reg_xx7_;  // xx7
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c2_1;  // c2
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_grep;  // grep
  SEXP Rsh_Fir_reg_xx8_;  // xx8
  SEXP Rsh_Fir_reg_xx9_;  // xx9
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_ind;  // ind
  SEXP Rsh_Fir_reg_ind1_;  // ind1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_ind3_;  // ind3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_ind4_;  // ind4
  SEXP Rsh_Fir_reg_ind5_;  // ind5
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_ind8_;  // ind8
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_ind9_;  // ind9
  SEXP Rsh_Fir_reg_ind10_;  // ind10
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_ind12_;  // ind12
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_xx10_;  // xx10
  SEXP Rsh_Fir_reg_xx11_;  // xx11
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_ind14_;  // ind14
  SEXP Rsh_Fir_reg_xx13_;  // xx13
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_ind16_;  // ind16
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_ind17_;  // ind17
  SEXP Rsh_Fir_reg_ind18_;  // ind18
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_grepl3_;  // grepl3
  SEXP Rsh_Fir_reg_xx14_;  // xx14
  SEXP Rsh_Fir_reg_xx15_;  // xx15
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_xx17_;  // xx17
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_ind19_;  // ind19
  SEXP Rsh_Fir_reg_ind20_;  // ind20
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_ind21_;  // ind21
  SEXP Rsh_Fir_reg_ind22_;  // ind22
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_ind24_;  // ind24
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_xx18_;  // xx18
  SEXP Rsh_Fir_reg_xx19_;  // xx19
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_ind26_;  // ind26
  SEXP Rsh_Fir_reg_xx21_;  // xx21
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_ind28_;  // ind28
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_ind29_;  // ind29
  SEXP Rsh_Fir_reg_ind30_;  // ind30
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_grepl4_;  // grepl4
  SEXP Rsh_Fir_reg_lpat2_;  // lpat2
  SEXP Rsh_Fir_reg_lpat3_;  // lpat3
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_xx22_;  // xx22
  SEXP Rsh_Fir_reg_xx23_;  // xx23
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_xx25_;  // xx25
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_ind31_;  // ind31
  SEXP Rsh_Fir_reg_ind32_;  // ind32
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg___5_;  // __5
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg___6_;  // __6
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_ind33_;  // ind33
  SEXP Rsh_Fir_reg_ind34_;  // ind34
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_which;  // which
  SEXP Rsh_Fir_reg_xx26_;  // xx26
  SEXP Rsh_Fir_reg_xx27_;  // xx27
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_ind35_;  // ind35
  SEXP Rsh_Fir_reg_ind36_;  // ind36
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_ind38_;  // ind38
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_ind39_;  // ind39
  SEXP Rsh_Fir_reg_ind40_;  // ind40
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_ind43_;  // ind43
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg___7_;  // __7
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_ind44_;  // ind44
  SEXP Rsh_Fir_reg_ind45_;  // ind45
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_tolower;  // tolower
  SEXP Rsh_Fir_reg_xx28_;  // xx28
  SEXP Rsh_Fir_reg_xx29_;  // xx29
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_xx31_;  // xx31
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg___8_;  // __8
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_l17_;  // l17
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_l18_;  // l18
  SEXP Rsh_Fir_reg_l19_;  // l19
  SEXP Rsh_Fir_reg____3_;  // ___3
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_havecaps;  // havecaps
  SEXP Rsh_Fir_reg_havecaps1_;  // havecaps1
  SEXP Rsh_Fir_reg_l20_;  // l20
  SEXP Rsh_Fir_reg_l21_;  // l21
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_r94_;  // r94
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_xx32_;  // xx32
  SEXP Rsh_Fir_reg_xx33_;  // xx33
  SEXP Rsh_Fir_reg_nchar;  // nchar
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_alone4_;  // alone4
  SEXP Rsh_Fir_reg_alone5_;  // alone5
  SEXP Rsh_Fir_reg_r99_;  // r99
  SEXP Rsh_Fir_reg_vapply1;  // vapply
  SEXP Rsh_Fir_reg_xx34_;  // xx34
  SEXP Rsh_Fir_reg_xx35_;  // xx35
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_xx37_;  // xx37
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_keep;  // keep
  SEXP Rsh_Fir_reg_keep1_;  // keep1
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg___9_;  // __9
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_do1_;  // do1
  SEXP Rsh_Fir_reg_do2_;  // do2
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_l22_;  // l22
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r106_;  // r106
  SEXP Rsh_Fir_reg_l24_;  // l24
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_keep2_;  // keep2
  SEXP Rsh_Fir_reg_keep3_;  // keep3
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg____4_;  // ___4
  SEXP Rsh_Fir_reg_r110_;  // r110
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_xx38_;  // xx38
  SEXP Rsh_Fir_reg_xx39_;  // xx39
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r112_;  // r112

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 82), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // r = clos inner2501545716
  Rsh_Fir_reg_r2 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st do1 = r
  Rsh_Fir_store(Rsh_const(CCP, 83), Rsh_Fir_reg_r2, RHO);
  (void)(Rsh_Fir_reg_r2);
  // sym = ldf `is.na`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 84), RHO);
  // base = ldf `is.na` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 84), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L0_:;
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r2_2;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c then L22() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L22()
    goto L22_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // sym1 = ldf `.Call`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 85), RHO);
  // base1 = ldf `.Call` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard1 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L3_:;
  // st xx = r7
  Rsh_Fir_store(Rsh_const(CCP, 86), Rsh_Fir_reg_r7_2, RHO);
  (void)(Rsh_Fir_reg_r7_2);
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 87), RHO);
  // check L29() else D4()
  // L29()
  goto L29_;

L4_:;
  // st l = dx1
  Rsh_Fir_store(Rsh_const(CCP, 88), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // grep = ldf grep
  Rsh_Fir_reg_grep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 89), RHO);
  // check L41() else D13()
  // L41()
  goto L41_;

L5_:;
  // st ind = dx3
  Rsh_Fir_store(Rsh_const(CCP, 90), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // ind9 = ld ind
  Rsh_Fir_reg_ind9_ = Rsh_Fir_load(Rsh_const(CCP, 90), RHO);
  // check L52() else D19()
  // L52()
  goto L52_;

L6_:;
  // r37 = `<=`(r34, r35)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 91), RHO);
  // r38 = dyn __(ind8, r37)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_ind8_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L5(r38)
  // L5(r38)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r38_;
  goto L5_;

L7_:;
  // st ind = dx5
  Rsh_Fir_store(Rsh_const(CCP, 90), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // ind21 = ld ind
  Rsh_Fir_reg_ind21_ = Rsh_Fir_load(Rsh_const(CCP, 90), RHO);
  // check L63() else D24()
  // L63()
  goto L63_;

L8_:;
  // r41 = `==`(dx7, " ")
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 92);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // grepl3 = ldf grepl
  Rsh_Fir_reg_grepl3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 93), RHO);
  // check L61() else D22()
  // L61()
  goto L61_;

L9_:;
  // st ind = dx11
  Rsh_Fir_store(Rsh_const(CCP, 90), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // l5 = ld l
  Rsh_Fir_reg_l5_ = Rsh_Fir_load(Rsh_const(CCP, 88), RHO);
  // c10 = `is.object`(l5)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c10 then L74() else L75(FALSE, l5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L74()
    goto L74_;
  } else {
  // L75(FALSE, l5)
    Rsh_Fir_reg_r59_ = Rsh_const(CCP, 80);
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
    goto L75_;
  }

L10_:;
  // r49 = `==`(dx13, "-")
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 94);
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // grepl4 = ldf grepl
  Rsh_Fir_reg_grepl4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 93), RHO);
  // check L72() else D27()
  // L72()
  goto L72_;

L11_:;
  // st l = dx17
  Rsh_Fir_store(Rsh_const(CCP, 88), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // which = ldf which
  Rsh_Fir_reg_which = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 95), RHO);
  // check L78() else D30()
  // L78()
  goto L78_;

L12_:;
  // st ind = dx19
  Rsh_Fir_store(Rsh_const(CCP, 90), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // l10 = ld l
  Rsh_Fir_reg_l10_ = Rsh_Fir_load(Rsh_const(CCP, 88), RHO);
  // c12 = `is.object`(l10)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c12 then L89() else L90(FALSE, l10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L89()
    goto L89_;
  } else {
  // L90(FALSE, l10)
    Rsh_Fir_reg_r77_ = Rsh_const(CCP, 80);
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l10_;
    goto L90_;
  }

L13_:;
  // r74 = `<=`(r71, r72)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 91), RHO);
  // r75 = dyn __7(ind43, r74)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_ind43_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L12(r75)
  // L12(r75)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r75_;
  goto L12_;

L14_:;
  // st l = dx21
  Rsh_Fir_store(Rsh_const(CCP, 88), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // tolower = ldf tolower
  Rsh_Fir_reg_tolower = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 96), RHO);
  // check L93() else D37()
  // L93()
  goto L93_;

L15_:;
  // st xx = dx25
  Rsh_Fir_store(Rsh_const(CCP, 86), Rsh_Fir_reg_dx25_, RHO);
  (void)(Rsh_Fir_reg_dx25_);
  // havecaps = ld havecaps
  Rsh_Fir_reg_havecaps = Rsh_Fir_load(Rsh_const(CCP, 97), RHO);
  // check L99() else D40()
  // L99()
  goto L99_;

L16_:;
  // r97 = `==`(r95, 1)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r95_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 98);
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // r98 = `||`(r94, r97)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r94_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_r97_;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // alone4 = ld alone
  Rsh_Fir_reg_alone4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L105() else D44()
  // L105()
  goto L105_;

L17_:;
  // st xx = dx29
  Rsh_Fir_store(Rsh_const(CCP, 86), Rsh_Fir_reg_dx29_, RHO);
  (void)(Rsh_Fir_reg_dx29_);
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 99), RHO);
  // check L112() else D48()
  // L112()
  goto L112_;

L18_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 82), RHO);
  // check L20() else D0()
  // L20()
  goto L20_;

L19_:;
  // r1 = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 82);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r1_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_2 = Rsh_Fir_reg_r1_2;
  goto L0_;

D0_:;
  // deopt 5 [x1]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L20_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 84), RHO);
  // r3 = dyn is_na(x2)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r3_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L21() else D1()
  // L21()
  goto L21_;

D1_:;
  // deopt 8 [r3]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r3_2;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_2 = Rsh_Fir_reg_r3_2;
  goto L0_;

L22_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NA_STR
  return Rsh_const(CCP, 100);

L25_:;
  // C_splitString = ld C_splitString
  Rsh_Fir_reg_C_splitString = Rsh_Fir_load(Rsh_const(CCP, 101), RHO);
  // check L27() else D2()
  // L27()
  goto L27_;

L26_:;
  // r6 = dyn base1(<sym C_splitString>, <sym x>, " -/\"()\n\t")
  SEXP Rsh_Fir_array_args39[3];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 101);
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 82);
  Rsh_Fir_array_args39[2] = Rsh_const(CCP, 102);
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r6_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 3, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r7_2 = Rsh_Fir_reg_r6_2;
  goto L3_;

D2_:;
  // deopt 15 [C_splitString]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_C_splitString;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L27_:;
  // C_splitString1 = force? C_splitString
  Rsh_Fir_reg_C_splitString1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_splitString);
  // checkMissing(C_splitString1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_C_splitString1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 82), RHO);
  // check L28() else D3()
  // L28()
  goto L28_;

D3_:;
  // deopt 16 [C_splitString1, x3]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_C_splitString1_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L28_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // vargs = dots[x4, " -/\"()\n\t"]
  SEXP Rsh_Fir_array_vector_values[2];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_vector_values[1] = Rsh_const(CCP, 102);
  SEXP Rsh_Fir_array_vector_names[2];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 2, Rsh_Fir_array_vector_values, NULL);
  // r8 = `.Call`(C_splitString1, vargs, <missing>)
  SEXP Rsh_Fir_array_args42[3];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_C_splitString1_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args42[2] = Rsh_const(CCP, 103);
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r7_2 = Rsh_Fir_reg_r8_1;
  goto L3_;

D4_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // p = prom<V +>{
  //   xx = ld xx;
  //   xx1 = force? xx;
  //   checkMissing(xx1);
  //   return xx1;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_, CCP, RHO);
  // p1 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r11):
  //   return r11;
  // L1():
  //   alone = ld alone;
  //   alone1 = force? alone;
  //   checkMissing(alone1);
  //   either = ld either;
  //   either1 = force? either;
  //   checkMissing(either1);
  //   c1 = ldf c in base;
  //   r12 = dyn c1(alone1, either1);
  //   goto L0(r12);
  // L2():
  //   r10 = dyn base2(<sym alone>, <sym either>);
  //   goto L0(r10);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_1, CCP, RHO);
  // r14 = dyn _in_(p, p1)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L30() else D5()
  // L30()
  goto L30_;

D5_:;
  // deopt 25 [r14]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L30_:;
  // st alone = r14
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // alone2 = ld alone
  Rsh_Fir_reg_alone2_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L31() else D6()
  // L31()
  goto L31_;

D6_:;
  // deopt 27 [alone2]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_alone2_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L31_:;
  // alone3 = force? alone2
  Rsh_Fir_reg_alone3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_alone2_);
  // checkMissing(alone3)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_alone3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // grepl = ldf grepl
  Rsh_Fir_reg_grepl = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 93), RHO);
  // check L32() else D7()
  // L32()
  goto L32_;

D7_:;
  // deopt 29 [alone3]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_alone3_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L32_:;
  // p2 = prom<V +>{
  //   xx2 = ld xx;
  //   xx3 = force? xx2;
  //   checkMissing(xx3);
  //   return xx3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_2, CCP, RHO);
  // r16 = dyn grepl("^'.*'$", p2)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 104);
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L33() else D8()
  // L33()
  goto L33_;

D8_:;
  // deopt 32 [alone3, r16]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_alone3_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(32, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L33_:;
  // r17 = `||`(alone3, r16)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_alone3_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // st alone = r17
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // grepl1 = ldf grepl
  Rsh_Fir_reg_grepl1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 93), RHO);
  // check L34() else D9()
  // L34()
  goto L34_;

D9_:;
  // deopt 36 []
  Rsh_Fir_deopt(36, 0, NULL, CCP, RHO);
  return R_NilValue;

L34_:;
  // p3 = prom<V +>{
  //   xx4 = ld xx;
  //   xx5 = force? xx4;
  //   checkMissing(xx5);
  //   return xx5;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_3, CCP, RHO);
  // r19 = dyn grepl1("^[[:alpha:]].*[[:upper:]]+", p3)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 105);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl1_, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L35() else D10()
  // L35()
  goto L35_;

D10_:;
  // deopt 39 [r19]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L35_:;
  // st havecaps = r19
  Rsh_Fir_store(Rsh_const(CCP, 97), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // grepl2 = ldf grepl
  Rsh_Fir_reg_grepl2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 93), RHO);
  // check L36() else D11()
  // L36()
  goto L36_;

D11_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // p4 = prom<V +>{
  //   lpat = ld lpat;
  //   lpat1 = force? lpat;
  //   checkMissing(lpat1);
  //   return lpat1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_4, CCP, RHO);
  // p5 = prom<V +>{
  //   xx6 = ld xx;
  //   xx7 = force? xx6;
  //   checkMissing(xx7);
  //   return xx7;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_5, CCP, RHO);
  // r22 = dyn grepl2[, , `ignore.case`](p4, p5, TRUE)
  SEXP Rsh_Fir_array_args58[3];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args58[2] = Rsh_const(CCP, 106);
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = Rsh_const(CCP, 107);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl2_, 3, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L37() else D12()
  // L37()
  goto L37_;

D12_:;
  // deopt 47 [r22]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L37_:;
  // st l = r22
  Rsh_Fir_store(Rsh_const(CCP, 88), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // l = ld l
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 88), RHO);
  // c2 = `is.object`(l)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if c2 then L38() else L39(FALSE, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L38()
    goto L38_;
  } else {
  // L39(FALSE, l)
    Rsh_Fir_reg_r24_ = Rsh_const(CCP, 80);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L39_;
  }

L38_:;
  // dr = tryDispatchBuiltin.0("[<-", l, FALSE)
  SEXP Rsh_Fir_array_args60[3];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 108);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args60[2] = Rsh_const(CCP, 80);
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args60);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if dc then L40() else L39(FALSE, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L40()
    goto L40_;
  } else {
  // L39(FALSE, dr)
    Rsh_Fir_reg_r24_ = Rsh_const(CCP, 80);
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L39_;
  }

L39_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 109), RHO);
  // r27 = dyn ___(l2, FALSE, 1)
  SEXP Rsh_Fir_array_args62[3];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 80);
  Rsh_Fir_array_args62[2] = Rsh_const(CCP, 98);
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L4(r27)
  // L4(r27)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r27_;
  goto L4_;

L40_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L4(dx)
  // L4(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

D13_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // p6 = prom<V +>{
  //   xx8 = ld xx;
  //   xx9 = force? xx8;
  //   checkMissing(xx9);
  //   return xx9;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_6, CCP, RHO);
  // r29 = dyn grep("[-:]$", p6)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 110);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L42() else D14()
  // L42()
  goto L42_;

D14_:;
  // deopt 60 [r29]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L42_:;
  // st ind = r29
  Rsh_Fir_store(Rsh_const(CCP, 90), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // ind = ld ind
  Rsh_Fir_reg_ind = Rsh_Fir_load(Rsh_const(CCP, 90), RHO);
  // check L43() else D15()
  // L43()
  goto L43_;

D15_:;
  // deopt 62 [ind]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_ind;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L43_:;
  // ind1 = force? ind
  Rsh_Fir_reg_ind1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind);
  // checkMissing(ind1)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_ind1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(ind1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_ind1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if c3 then L44() else L45(ind1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L44()
    goto L44_;
  } else {
  // L45(ind1)
    Rsh_Fir_reg_ind3_ = Rsh_Fir_reg_ind1_;
    goto L45_;
  }

L44_:;
  // dr2 = tryDispatchBuiltin.1("[", ind1)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 111);
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_ind1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args68);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if dc1 then L46() else L45(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L46()
    goto L46_;
  } else {
  // L45(dr2)
    Rsh_Fir_reg_ind3_ = Rsh_Fir_reg_dr2_;
    goto L45_;
  }

L45_:;
  // ind4 = ld ind
  Rsh_Fir_reg_ind4_ = Rsh_Fir_load(Rsh_const(CCP, 90), RHO);
  // check L47() else D16()
  // L47()
  goto L47_;

L46_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // goto L5(dx2)
  // L5(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L5_;

D16_:;
  // deopt 64 [ind3, ind4]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_ind3_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_ind4_;
  Rsh_Fir_deopt(64, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L47_:;
  // ind5 = force? ind4
  Rsh_Fir_reg_ind5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind4_);
  // checkMissing(ind5)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_ind5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // r30 = `+`(ind5, 2)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_ind5_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 112);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 113), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 113), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard3 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L48_:;
  // l3 = ld l
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 88), RHO);
  // check L50() else D17()
  // L50()
  goto L50_;

L49_:;
  // r33 = dyn base3(<sym l>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 88);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L6(ind3, r30, r33)
  // L6(ind3, r30, r33)
  Rsh_Fir_reg_ind8_ = Rsh_Fir_reg_ind3_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r33_;
  goto L6_;

D17_:;
  // deopt 69 [ind3, r30, l3]
  SEXP Rsh_Fir_array_deopt_stack26[3];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_ind3_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_deopt_stack26[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_deopt(69, 3, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L50_:;
  // l4 = force? l3
  Rsh_Fir_reg_l4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l3_);
  // checkMissing(l4)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_l4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 113), RHO);
  // r36 = dyn length(l4)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L51() else D18()
  // L51()
  goto L51_;

D18_:;
  // deopt 72 [ind3, r30, r36]
  SEXP Rsh_Fir_array_deopt_stack27[3];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_ind3_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(72, 3, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L51_:;
  // goto L6(ind3, r30, r36)
  // L6(ind3, r30, r36)
  Rsh_Fir_reg_ind8_ = Rsh_Fir_reg_ind3_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L6_;

D19_:;
  // deopt 76 [ind9]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_ind9_;
  Rsh_Fir_deopt(76, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L52_:;
  // ind10 = force? ind9
  Rsh_Fir_reg_ind10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind9_);
  // checkMissing(ind10)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_ind10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(ind10)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_ind10_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if c4 then L53() else L54(ind10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L53()
    goto L53_;
  } else {
  // L54(ind10)
    Rsh_Fir_reg_ind12_ = Rsh_Fir_reg_ind10_;
    goto L54_;
  }

L53_:;
  // dr4 = tryDispatchBuiltin.1("[", ind10)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 111);
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_ind10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args79);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if dc2 then L55() else L54(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L55()
    goto L55_;
  } else {
  // L54(dr4)
    Rsh_Fir_reg_ind12_ = Rsh_Fir_reg_dr4_;
    goto L54_;
  }

L54_:;
  // xx10 = ld xx
  Rsh_Fir_reg_xx10_ = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // check L56() else D20()
  // L56()
  goto L56_;

L55_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L7(dx4)
  // L7(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L7_;

D20_:;
  // deopt 78 [ind12, xx10]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_ind12_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_xx10_;
  Rsh_Fir_deopt(78, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L56_:;
  // xx11 = force? xx10
  Rsh_Fir_reg_xx11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx10_);
  // checkMissing(xx11)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_xx11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(xx11)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_xx11_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if c5 then L57() else L58(ind12, xx11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L57()
    goto L57_;
  } else {
  // L58(ind12, xx11)
    Rsh_Fir_reg_ind14_ = Rsh_Fir_reg_ind12_;
    Rsh_Fir_reg_xx13_ = Rsh_Fir_reg_xx11_;
    goto L58_;
  }

L57_:;
  // dr6 = tryDispatchBuiltin.1("[", xx11)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 111);
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_xx11_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args84);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if dc3 then L59() else L58(ind12, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L59()
    goto L59_;
  } else {
  // L58(ind12, dr6)
    Rsh_Fir_reg_ind14_ = Rsh_Fir_reg_ind12_;
    Rsh_Fir_reg_xx13_ = Rsh_Fir_reg_dr6_;
    goto L58_;
  }

L58_:;
  // ind17 = ld ind
  Rsh_Fir_reg_ind17_ = Rsh_Fir_load(Rsh_const(CCP, 90), RHO);
  // check L60() else D21()
  // L60()
  goto L60_;

L59_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // goto L8(ind12, dx6)
  // L8(ind12, dx6)
  Rsh_Fir_reg_ind16_ = Rsh_Fir_reg_ind12_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L8_;

D21_:;
  // deopt 80 [ind14, xx13, ind17]
  SEXP Rsh_Fir_array_deopt_stack30[3];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_ind14_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_xx13_;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_ind17_;
  Rsh_Fir_deopt(80, 3, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L60_:;
  // ind18 = force? ind17
  Rsh_Fir_reg_ind18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind17_);
  // checkMissing(ind18)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_ind18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // r39 = `+`(ind18, 1)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_ind18_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 98);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 91), RHO);
  // r40 = dyn __1(xx13, r39)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_xx13_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L8(ind14, r40)
  // L8(ind14, r40)
  Rsh_Fir_reg_ind16_ = Rsh_Fir_reg_ind14_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r40_;
  goto L8_;

D22_:;
  // deopt 87 [ind16, r41]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_ind16_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(87, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L61_:;
  // p7 = prom<V +>{
  //   xx14 = ld xx;
  //   xx15 = force? xx14;
  //   checkMissing(xx15);
  //   c6 = `is.object`(xx15);
  //   if c6 then L1() else L2(xx15);
  // L0(dx9):
  //   return dx9;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("[", xx15);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(xx17):
  //   ind19 = ld ind;
  //   ind20 = force? ind19;
  //   checkMissing(ind20);
  //   r42 = `+`(ind20, 2);
  //   __2 = ldf `[` in base;
  //   r43 = dyn __2(xx17, r42);
  //   goto L0(r43);
  // L3():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx8);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_7, CCP, RHO);
  // r45 = dyn grepl3("^['[:alnum:]]", p7)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 114);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl3_, 2, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L62() else D23()
  // L62()
  goto L62_;

D23_:;
  // deopt 90 [ind16, r41, r45]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_ind16_;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(90, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L62_:;
  // r46 = `&&`(r41, r45)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 91), RHO);
  // r47 = dyn __3(ind16, r46)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_ind16_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L7(r47)
  // L7(r47)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r47_;
  goto L7_;

D24_:;
  // deopt 94 [ind21]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_ind21_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L63_:;
  // ind22 = force? ind21
  Rsh_Fir_reg_ind22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind21_);
  // checkMissing(ind22)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_ind22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(ind22)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_ind22_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // if c7 then L64() else L65(ind22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L64()
    goto L64_;
  } else {
  // L65(ind22)
    Rsh_Fir_reg_ind24_ = Rsh_Fir_reg_ind22_;
    goto L65_;
  }

L64_:;
  // dr10 = tryDispatchBuiltin.1("[", ind22)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 111);
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_ind22_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args103);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // if dc5 then L66() else L65(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L66()
    goto L66_;
  } else {
  // L65(dr10)
    Rsh_Fir_reg_ind24_ = Rsh_Fir_reg_dr10_;
    goto L65_;
  }

L65_:;
  // xx18 = ld xx
  Rsh_Fir_reg_xx18_ = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // check L67() else D25()
  // L67()
  goto L67_;

L66_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // goto L9(dx10)
  // L9(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L9_;

D25_:;
  // deopt 96 [ind24, xx18]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_ind24_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_xx18_;
  Rsh_Fir_deopt(96, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L67_:;
  // xx19 = force? xx18
  Rsh_Fir_reg_xx19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx18_);
  // checkMissing(xx19)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_xx19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(xx19)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_xx19_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // if c8 then L68() else L69(ind24, xx19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L68()
    goto L68_;
  } else {
  // L69(ind24, xx19)
    Rsh_Fir_reg_ind26_ = Rsh_Fir_reg_ind24_;
    Rsh_Fir_reg_xx21_ = Rsh_Fir_reg_xx19_;
    goto L69_;
  }

L68_:;
  // dr12 = tryDispatchBuiltin.1("[", xx19)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 111);
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_xx19_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args108);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // if dc6 then L70() else L69(ind24, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L70()
    goto L70_;
  } else {
  // L69(ind24, dr12)
    Rsh_Fir_reg_ind26_ = Rsh_Fir_reg_ind24_;
    Rsh_Fir_reg_xx21_ = Rsh_Fir_reg_dr12_;
    goto L69_;
  }

L69_:;
  // ind29 = ld ind
  Rsh_Fir_reg_ind29_ = Rsh_Fir_load(Rsh_const(CCP, 90), RHO);
  // check L71() else D26()
  // L71()
  goto L71_;

L70_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty());
  // goto L10(ind24, dx12)
  // L10(ind24, dx12)
  Rsh_Fir_reg_ind28_ = Rsh_Fir_reg_ind24_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L10_;

D26_:;
  // deopt 98 [ind26, xx21, ind29]
  SEXP Rsh_Fir_array_deopt_stack35[3];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_ind26_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_xx21_;
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_ind29_;
  Rsh_Fir_deopt(98, 3, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L71_:;
  // ind30 = force? ind29
  Rsh_Fir_reg_ind30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind29_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 91), RHO);
  // r48 = dyn __4(xx21, ind30)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_xx21_;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_ind30_;
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L10(ind26, r48)
  // L10(ind26, r48)
  Rsh_Fir_reg_ind28_ = Rsh_Fir_reg_ind26_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r48_;
  goto L10_;

D27_:;
  // deopt 103 [ind28, r49]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_ind28_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(103, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L72_:;
  // p8 = prom<V +>{
  //   lpat2 = ld lpat;
  //   lpat3 = force? lpat2;
  //   checkMissing(lpat3);
  //   return lpat3;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_8, CCP, RHO);
  // p9 = prom<V +>{
  //   xx22 = ld xx;
  //   xx23 = force? xx22;
  //   checkMissing(xx23);
  //   c9 = `is.object`(xx23);
  //   if c9 then L1() else L2(xx23);
  // L0(dx15):
  //   return dx15;
  // L1():
  //   dr14 = tryDispatchBuiltin.1("[", xx23);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L3() else L2(dr14);
  // L2(xx25):
  //   ind31 = ld ind;
  //   ind32 = force? ind31;
  //   checkMissing(ind32);
  //   r51 = `+`(ind32, 2);
  //   __5 = ldf `[` in base;
  //   r52 = dyn __5(xx25, r51);
  //   goto L0(r52);
  // L3():
  //   dx14 = getTryDispatchBuiltinValue(dr14);
  //   goto L0(dx14);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_9, CCP, RHO);
  // r54 = dyn grepl4(p8, p9)
  SEXP Rsh_Fir_array_args121[2];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl4_, 2, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L73() else D28()
  // L73()
  goto L73_;

D28_:;
  // deopt 106 [ind28, r49, r54]
  SEXP Rsh_Fir_array_deopt_stack37[3];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_ind28_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(106, 3, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L73_:;
  // r55 = `&&`(r49, r54)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // r56 = `!`(r55)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 91), RHO);
  // r57 = dyn __6(ind28, r56)
  SEXP Rsh_Fir_array_args124[2];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_ind28_;
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_array_arg_names37[2];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L9(r57)
  // L9(r57)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r57_;
  goto L9_;

L74_:;
  // dr16 = tryDispatchBuiltin.0("[<-", l5, FALSE)
  SEXP Rsh_Fir_array_args125[3];
  Rsh_Fir_array_args125[0] = Rsh_const(CCP, 108);
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args125[2] = Rsh_const(CCP, 80);
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args125);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // if dc8 then L76() else L75(FALSE, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L76()
    goto L76_;
  } else {
  // L75(FALSE, dr16)
    Rsh_Fir_reg_r59_ = Rsh_const(CCP, 80);
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr16_;
    goto L75_;
  }

L75_:;
  // ind33 = ld ind
  Rsh_Fir_reg_ind33_ = Rsh_Fir_load(Rsh_const(CCP, 90), RHO);
  // check L77() else D29()
  // L77()
  goto L77_;

L76_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // goto L11(dx16)
  // L11(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L11_;

D29_:;
  // deopt 114 [r59, l7, FALSE, ind33]
  SEXP Rsh_Fir_array_deopt_stack38[4];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_deopt_stack38[2] = Rsh_const(CCP, 80);
  Rsh_Fir_array_deopt_stack38[3] = Rsh_Fir_reg_ind33_;
  Rsh_Fir_deopt(114, 4, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L77_:;
  // ind34 = force? ind33
  Rsh_Fir_reg_ind34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind33_);
  // checkMissing(ind34)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_ind34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // r62 = `+`(ind34, 2)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_ind34_;
  Rsh_Fir_array_args129[1] = Rsh_const(CCP, 112);
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 109), RHO);
  // r63 = dyn ___1(l7, FALSE, r62)
  SEXP Rsh_Fir_array_args130[3];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args130[1] = Rsh_const(CCP, 80);
  Rsh_Fir_array_args130[2] = Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_array_arg_names38[3];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L11(r63)
  // L11(r63)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r63_;
  goto L11_;

D30_:;
  // deopt 121 []
  Rsh_Fir_deopt(121, 0, NULL, CCP, RHO);
  return R_NilValue;

L78_:;
  // p10 = prom<V +>{
  //   xx26 = ld xx;
  //   xx27 = force? xx26;
  //   checkMissing(xx27);
  //   r64 = `==`(xx27, "\"");
  //   return r64;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_10, CCP, RHO);
  // r66 = dyn which(p10)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which, 1, Rsh_Fir_array_args133, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L79() else D31()
  // L79()
  goto L79_;

D31_:;
  // deopt 123 [r66]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L79_:;
  // st ind = r66
  Rsh_Fir_store(Rsh_const(CCP, 90), Rsh_Fir_reg_r66_, RHO);
  (void)(Rsh_Fir_reg_r66_);
  // ind35 = ld ind
  Rsh_Fir_reg_ind35_ = Rsh_Fir_load(Rsh_const(CCP, 90), RHO);
  // check L80() else D32()
  // L80()
  goto L80_;

D32_:;
  // deopt 125 [ind35]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_ind35_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L80_:;
  // ind36 = force? ind35
  Rsh_Fir_reg_ind36_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind35_);
  // checkMissing(ind36)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_ind36_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(ind36)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_ind36_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // if c11 then L81() else L82(ind36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L81()
    goto L81_;
  } else {
  // L82(ind36)
    Rsh_Fir_reg_ind38_ = Rsh_Fir_reg_ind36_;
    goto L82_;
  }

L81_:;
  // dr18 = tryDispatchBuiltin.1("[", ind36)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_const(CCP, 111);
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_ind36_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args136);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // if dc9 then L83() else L82(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L83()
    goto L83_;
  } else {
  // L82(dr18)
    Rsh_Fir_reg_ind38_ = Rsh_Fir_reg_dr18_;
    goto L82_;
  }

L82_:;
  // ind39 = ld ind
  Rsh_Fir_reg_ind39_ = Rsh_Fir_load(Rsh_const(CCP, 90), RHO);
  // check L84() else D33()
  // L84()
  goto L84_;

L83_:;
  // dx18 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // goto L12(dx18)
  // L12(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L12_;

D33_:;
  // deopt 127 [ind38, ind39]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_ind38_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_ind39_;
  Rsh_Fir_deopt(127, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L84_:;
  // ind40 = force? ind39
  Rsh_Fir_reg_ind40_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind39_);
  // checkMissing(ind40)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_ind40_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty()));
  // r67 = `+`(ind40, 1)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_ind40_;
  Rsh_Fir_array_args140[1] = Rsh_const(CCP, 98);
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty());
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 113), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 113), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args141);
  // if guard4 then L85() else L86()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L85()
    goto L85_;
  } else {
  // L86()
    goto L86_;
  }

L85_:;
  // l8 = ld l
  Rsh_Fir_reg_l8_ = Rsh_Fir_load(Rsh_const(CCP, 88), RHO);
  // check L87() else D34()
  // L87()
  goto L87_;

L86_:;
  // r70 = dyn base4(<sym l>)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_const(CCP, 88);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args142, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L13(ind38, r67, r70)
  // L13(ind38, r67, r70)
  Rsh_Fir_reg_ind43_ = Rsh_Fir_reg_ind38_;
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r70_;
  goto L13_;

D34_:;
  // deopt 132 [ind38, r67, l8]
  SEXP Rsh_Fir_array_deopt_stack42[3];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_ind38_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_r67_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_l8_;
  Rsh_Fir_deopt(132, 3, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L87_:;
  // l9 = force? l8
  Rsh_Fir_reg_l9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l8_);
  // checkMissing(l9)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_l9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 113), RHO);
  // r73 = dyn length1(l9)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_l9_;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L88() else D35()
  // L88()
  goto L88_;

D35_:;
  // deopt 135 [ind38, r67, r73]
  SEXP Rsh_Fir_array_deopt_stack43[3];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_ind38_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_r67_;
  Rsh_Fir_array_deopt_stack43[2] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(135, 3, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L88_:;
  // goto L13(ind38, r67, r73)
  // L13(ind38, r67, r73)
  Rsh_Fir_reg_ind43_ = Rsh_Fir_reg_ind38_;
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r67_;
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r73_;
  goto L13_;

L89_:;
  // dr20 = tryDispatchBuiltin.0("[<-", l10, FALSE)
  SEXP Rsh_Fir_array_args145[3];
  Rsh_Fir_array_args145[0] = Rsh_const(CCP, 108);
  Rsh_Fir_array_args145[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args145[2] = Rsh_const(CCP, 80);
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args145);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // if dc10 then L91() else L90(FALSE, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L91()
    goto L91_;
  } else {
  // L90(FALSE, dr20)
    Rsh_Fir_reg_r77_ = Rsh_const(CCP, 80);
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_dr20_;
    goto L90_;
  }

L90_:;
  // ind44 = ld ind
  Rsh_Fir_reg_ind44_ = Rsh_Fir_load(Rsh_const(CCP, 90), RHO);
  // check L92() else D36()
  // L92()
  goto L92_;

L91_:;
  // dx20 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // goto L14(dx20)
  // L14(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L14_;

D36_:;
  // deopt 142 [r77, l12, FALSE, ind44]
  SEXP Rsh_Fir_array_deopt_stack44[4];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_array_deopt_stack44[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_deopt_stack44[2] = Rsh_const(CCP, 80);
  Rsh_Fir_array_deopt_stack44[3] = Rsh_Fir_reg_ind44_;
  Rsh_Fir_deopt(142, 4, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L92_:;
  // ind45 = force? ind44
  Rsh_Fir_reg_ind45_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind44_);
  // checkMissing(ind45)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_ind45_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // r80 = `+`(ind45, 1)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_ind45_;
  Rsh_Fir_array_args149[1] = Rsh_const(CCP, 98);
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty());
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 109), RHO);
  // r81 = dyn ___2(l12, FALSE, r80)
  SEXP Rsh_Fir_array_args150[3];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args150[1] = Rsh_const(CCP, 80);
  Rsh_Fir_array_args150[2] = Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_array_arg_names42[3];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_array_arg_names42[2] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L14(r81)
  // L14(r81)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r81_;
  goto L14_;

D37_:;
  // deopt 149 []
  Rsh_Fir_deopt(149, 0, NULL, CCP, RHO);
  return R_NilValue;

L93_:;
  // p11 = prom<V +>{
  //   xx28 = ld xx;
  //   xx29 = force? xx28;
  //   checkMissing(xx29);
  //   c13 = `is.object`(xx29);
  //   if c13 then L1() else L2(xx29);
  // L0(dx23):
  //   return dx23;
  // L1():
  //   dr22 = tryDispatchBuiltin.1("[", xx29);
  //   dc11 = getTryDispatchBuiltinDispatched(dr22);
  //   if dc11 then L3() else L2(dr22);
  // L2(xx31):
  //   l13 = ld l;
  //   l14 = force? l13;
  //   __8 = ldf `[` in base;
  //   r82 = dyn __8(xx31, l14);
  //   goto L0(r82);
  // L3():
  //   dx22 = getTryDispatchBuiltinValue(dr22);
  //   goto L0(dx22);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_11, CCP, RHO);
  // r84 = dyn tolower(p11)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tolower, 1, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L94() else D38()
  // L94()
  goto L94_;

D38_:;
  // deopt 151 [r84]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_deopt(151, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L94_:;
  // l15 = ld xx
  Rsh_Fir_reg_l15_ = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // c14 = `is.object`(l15)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty());
  // if c14 then L95() else L96(r84, l15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L95()
    goto L95_;
  } else {
  // L96(r84, l15)
    Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r84_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l15_;
    goto L96_;
  }

L95_:;
  // dr24 = tryDispatchBuiltin.0("[<-", l15, r84)
  SEXP Rsh_Fir_array_args159[3];
  Rsh_Fir_array_args159[0] = Rsh_const(CCP, 108);
  Rsh_Fir_array_args159[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args159[2] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args159);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty());
  // if dc12 then L97() else L96(r84, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L97()
    goto L97_;
  } else {
  // L96(r84, dr24)
    Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r84_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_dr24_;
    goto L96_;
  }

L96_:;
  // l18 = ld l
  Rsh_Fir_reg_l18_ = Rsh_Fir_load(Rsh_const(CCP, 88), RHO);
  // check L98() else D39()
  // L98()
  goto L98_;

L97_:;
  // dx24 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty());
  // goto L15(dx24)
  // L15(dx24)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L15_;

D39_:;
  // deopt 153 [r86, l17, r84, l18]
  SEXP Rsh_Fir_array_deopt_stack46[4];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_deopt_stack46[2] = Rsh_Fir_reg_r84_;
  Rsh_Fir_array_deopt_stack46[3] = Rsh_Fir_reg_l18_;
  Rsh_Fir_deopt(153, 4, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L98_:;
  // l19 = force? l18
  Rsh_Fir_reg_l19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l18_);
  // ___3 = ldf `[<-` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 109), RHO);
  // r89 = dyn ___3(l17, r84, l19)
  SEXP Rsh_Fir_array_args162[3];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_args162[1] = Rsh_Fir_reg_r84_;
  Rsh_Fir_array_args162[2] = Rsh_Fir_reg_l19_;
  SEXP Rsh_Fir_array_arg_names45[3];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_array_arg_names45[2] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 3, Rsh_Fir_array_args162, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L15(r89)
  // L15(r89)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r89_;
  goto L15_;

D40_:;
  // deopt 157 [havecaps]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_havecaps;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L99_:;
  // havecaps1 = force? havecaps
  Rsh_Fir_reg_havecaps1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_havecaps);
  // checkMissing(havecaps1)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_havecaps1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty()));
  // l20 = ld l
  Rsh_Fir_reg_l20_ = Rsh_Fir_load(Rsh_const(CCP, 88), RHO);
  // check L100() else D41()
  // L100()
  goto L100_;

D41_:;
  // deopt 158 [havecaps1, l20]
  SEXP Rsh_Fir_array_deopt_stack48[2];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_havecaps1_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_l20_;
  Rsh_Fir_deopt(158, 2, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L100_:;
  // l21 = force? l20
  Rsh_Fir_reg_l21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l20_);
  // checkMissing(l21)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_l21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // r90 = `||`(havecaps1, l21)
  SEXP Rsh_Fir_array_args165[2];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_havecaps1_;
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_l21_;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty());
  // sym5 = ldf nchar
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 116), RHO);
  // base5 = ldf nchar in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 116), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args166);
  // if guard5 then L101() else L102()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L101()
    goto L101_;
  } else {
  // L102()
    goto L102_;
  }

L101_:;
  // xx32 = ld xx
  Rsh_Fir_reg_xx32_ = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // check L103() else D42()
  // L103()
  goto L103_;

L102_:;
  // r93 = dyn base5(<sym xx>)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_const(CCP, 86);
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args167, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L16(r90, r93)
  // L16(r90, r93)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r90_;
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r93_;
  goto L16_;

D42_:;
  // deopt 162 [r90, xx32]
  SEXP Rsh_Fir_array_deopt_stack49[2];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_xx32_;
  Rsh_Fir_deopt(162, 2, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

L103_:;
  // xx33 = force? xx32
  Rsh_Fir_reg_xx33_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx32_);
  // checkMissing(xx33)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_xx33_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty()));
  // nchar = ldf nchar in base
  Rsh_Fir_reg_nchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 116), RHO);
  // r96 = dyn nchar(xx33, "chars", FALSE, NA_LGL)
  SEXP Rsh_Fir_array_args169[4];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_xx33_;
  Rsh_Fir_array_args169[1] = Rsh_const(CCP, 117);
  Rsh_Fir_array_args169[2] = Rsh_const(CCP, 80);
  Rsh_Fir_array_args169[3] = Rsh_const(CCP, 118);
  SEXP Rsh_Fir_array_arg_names47[4];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_array_arg_names47[1] = R_MissingArg;
  Rsh_Fir_array_arg_names47[2] = R_MissingArg;
  Rsh_Fir_array_arg_names47[3] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nchar, 4, Rsh_Fir_array_args169, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L104() else D43()
  // L104()
  goto L104_;

D43_:;
  // deopt 168 [r90, r96]
  SEXP Rsh_Fir_array_deopt_stack50[2];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_r96_;
  Rsh_Fir_deopt(168, 2, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

L104_:;
  // goto L16(r90, r96)
  // L16(r90, r96)
  Rsh_Fir_reg_r94_ = Rsh_Fir_reg_r90_;
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r96_;
  goto L16_;

D44_:;
  // deopt 171 [r98, alone4]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r98_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_alone4_;
  Rsh_Fir_deopt(171, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L105_:;
  // alone5 = force? alone4
  Rsh_Fir_reg_alone5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_alone4_);
  // checkMissing(alone5)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_alone5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty()));
  // r99 = `||`(r98, alone5)
  SEXP Rsh_Fir_array_args171[2];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_r98_;
  Rsh_Fir_array_args171[1] = Rsh_Fir_reg_alone5_;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty());
  // st keep = r99
  Rsh_Fir_store(Rsh_const(CCP, 119), Rsh_Fir_reg_r99_, RHO);
  (void)(Rsh_Fir_reg_r99_);
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L106() else D45()
  // L106()
  goto L106_;

D45_:;
  // deopt 176 []
  Rsh_Fir_deopt(176, 0, NULL, CCP, RHO);
  return R_NilValue;

L106_:;
  // p12 = prom<V +>{
  //   xx34 = ld xx;
  //   xx35 = force? xx34;
  //   checkMissing(xx35);
  //   c15 = `is.object`(xx35);
  //   if c15 then L1() else L2(xx35);
  // L0(dx27):
  //   return dx27;
  // L1():
  //   dr26 = tryDispatchBuiltin.1("[", xx35);
  //   dc13 = getTryDispatchBuiltinDispatched(dr26);
  //   if dc13 then L3() else L2(dr26);
  // L2(xx37):
  //   keep = ld keep;
  //   keep1 = force? keep;
  //   checkMissing(keep1);
  //   r100 = `!`(keep1);
  //   __9 = ldf `[` in base;
  //   r101 = dyn __9(xx37, r100);
  //   goto L0(r101);
  // L3():
  //   dx26 = getTryDispatchBuiltinValue(dr26);
  //   goto L0(dx26);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_12, CCP, RHO);
  // p13 = prom<V +>{
  //   do1 = ld do1;
  //   do2 = force? do1;
  //   checkMissing(do2);
  //   return do2;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_13, CCP, RHO);
  // r104 = dyn vapply(p12, p13, "<chr>")
  SEXP Rsh_Fir_array_args181[3];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args181[1] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args181[2] = Rsh_const(CCP, 79);
  SEXP Rsh_Fir_array_arg_names49[3];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_array_arg_names49[2] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply1, 3, Rsh_Fir_array_args181, Rsh_Fir_array_arg_names49, CCP, RHO);
  // check L107() else D46()
  // L107()
  goto L107_;

D46_:;
  // deopt 180 [r104]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r104_;
  Rsh_Fir_deopt(180, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L107_:;
  // l22 = ld xx
  Rsh_Fir_reg_l22_ = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // c16 = `is.object`(l22)
  SEXP Rsh_Fir_array_args182[1];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_l22_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args182, Rsh_Fir_param_types_empty());
  // if c16 then L108() else L109(r104, l22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L108()
    goto L108_;
  } else {
  // L109(r104, l22)
    Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r104_;
    Rsh_Fir_reg_l24_ = Rsh_Fir_reg_l22_;
    goto L109_;
  }

L108_:;
  // dr28 = tryDispatchBuiltin.0("[<-", l22, r104)
  SEXP Rsh_Fir_array_args183[3];
  Rsh_Fir_array_args183[0] = Rsh_const(CCP, 108);
  Rsh_Fir_array_args183[1] = Rsh_Fir_reg_l22_;
  Rsh_Fir_array_args183[2] = Rsh_Fir_reg_r104_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args183);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty());
  // if dc14 then L110() else L109(r104, dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L110()
    goto L110_;
  } else {
  // L109(r104, dr28)
    Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r104_;
    Rsh_Fir_reg_l24_ = Rsh_Fir_reg_dr28_;
    goto L109_;
  }

L109_:;
  // keep2 = ld keep
  Rsh_Fir_reg_keep2_ = Rsh_Fir_load(Rsh_const(CCP, 119), RHO);
  // check L111() else D47()
  // L111()
  goto L111_;

L110_:;
  // dx28 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty());
  // goto L17(dx28)
  // L17(dx28)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L17_;

D47_:;
  // deopt 182 [r106, l24, r104, keep2]
  SEXP Rsh_Fir_array_deopt_stack53[4];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r106_;
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_deopt_stack53[2] = Rsh_Fir_reg_r104_;
  Rsh_Fir_array_deopt_stack53[3] = Rsh_Fir_reg_keep2_;
  Rsh_Fir_deopt(182, 4, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L111_:;
  // keep3 = force? keep2
  Rsh_Fir_reg_keep3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep2_);
  // checkMissing(keep3)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_keep3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty()));
  // r109 = `!`(keep3)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_keep3_;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty());
  // ___4 = ldf `[<-` in base
  Rsh_Fir_reg____4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 109), RHO);
  // r110 = dyn ___4(l24, r104, r109)
  SEXP Rsh_Fir_array_args188[3];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_args188[1] = Rsh_Fir_reg_r104_;
  Rsh_Fir_array_args188[2] = Rsh_Fir_reg_r109_;
  SEXP Rsh_Fir_array_arg_names50[3];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_array_arg_names50[2] = R_MissingArg;
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____4_, 3, Rsh_Fir_array_args188, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L17(r110)
  // L17(r110)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r110_;
  goto L17_;

D48_:;
  // deopt 188 []
  Rsh_Fir_deopt(188, 0, NULL, CCP, RHO);
  return R_NilValue;

L112_:;
  // p14 = prom<V +>{
  //   xx38 = ld xx;
  //   xx39 = force? xx38;
  //   checkMissing(xx39);
  //   return xx39;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_14, CCP, RHO);
  // r112 = dyn paste[, collapse](p14, "")
  SEXP Rsh_Fir_array_args190[2];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args190[1] = Rsh_const(CCP, 120);
  SEXP Rsh_Fir_array_arg_names51[2];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = Rsh_const(CCP, 121);
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args190, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L113() else D49()
  // L113()
  goto L113_;

D49_:;
  // deopt 192 [r112]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_r112_;
  Rsh_Fir_deopt(192, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L113_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r112
  return Rsh_Fir_reg_r112_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO) {
  // xx = ld xx
  Rsh_Fir_reg_xx = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // xx1 = force? xx
  Rsh_Fir_reg_xx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx);
  // checkMissing(xx1)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_xx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return xx1
  return Rsh_Fir_reg_xx1_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO) {
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r11
  return Rsh_Fir_reg_r11_1;

L1_:;
  // alone = ld alone
  Rsh_Fir_reg_alone = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // alone1 = force? alone
  Rsh_Fir_reg_alone1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_alone);
  // checkMissing(alone1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_alone1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // either = ld either
  Rsh_Fir_reg_either = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // either1 = force? either
  Rsh_Fir_reg_either1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_either);
  // checkMissing(either1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_either1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r12 = dyn c1(alone1, either1)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_alone1_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_either1_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_1, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r12_;
  goto L0_;

L2_:;
  // r10 = dyn base2(<sym alone>, <sym either>)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r10_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_2(SEXP CCP, SEXP RHO) {
  // xx2 = ld xx
  Rsh_Fir_reg_xx2_ = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // xx3 = force? xx2
  Rsh_Fir_reg_xx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx2_);
  // checkMissing(xx3)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_xx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return xx3
  return Rsh_Fir_reg_xx3_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_3(SEXP CCP, SEXP RHO) {
  // xx4 = ld xx
  Rsh_Fir_reg_xx4_ = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // xx5 = force? xx4
  Rsh_Fir_reg_xx5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx4_);
  // checkMissing(xx5)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_xx5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // return xx5
  return Rsh_Fir_reg_xx5_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_4(SEXP CCP, SEXP RHO) {
  // lpat = ld lpat
  Rsh_Fir_reg_lpat = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // lpat1 = force? lpat
  Rsh_Fir_reg_lpat1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lpat);
  // checkMissing(lpat1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_lpat1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // return lpat1
  return Rsh_Fir_reg_lpat1_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_5(SEXP CCP, SEXP RHO) {
  // xx6 = ld xx
  Rsh_Fir_reg_xx6_ = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // xx7 = force? xx6
  Rsh_Fir_reg_xx7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx6_);
  // checkMissing(xx7)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_xx7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return xx7
  return Rsh_Fir_reg_xx7_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_6(SEXP CCP, SEXP RHO) {
  // xx8 = ld xx
  Rsh_Fir_reg_xx8_ = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // xx9 = force? xx8
  Rsh_Fir_reg_xx9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx8_);
  // checkMissing(xx9)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_xx9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // return xx9
  return Rsh_Fir_reg_xx9_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_7(SEXP CCP, SEXP RHO) {
  // xx14 = ld xx
  Rsh_Fir_reg_xx14_ = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // xx15 = force? xx14
  Rsh_Fir_reg_xx15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx14_);
  // checkMissing(xx15)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_xx15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(xx15)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_xx15_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if c6 then L1() else L2(xx15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L1()
    goto L1_;
  } else {
  // L2(xx15)
    Rsh_Fir_reg_xx17_ = Rsh_Fir_reg_xx15_;
    goto L2_;
  }

L0_:;
  // return dx9
  return Rsh_Fir_reg_dx9_;

L1_:;
  // dr8 = tryDispatchBuiltin.1("[", xx15)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 111);
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_xx15_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args92);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_xx17_ = Rsh_Fir_reg_dr8_;
    goto L2_;
  }

L2_:;
  // ind19 = ld ind
  Rsh_Fir_reg_ind19_ = Rsh_Fir_load(Rsh_const(CCP, 90), RHO);
  // ind20 = force? ind19
  Rsh_Fir_reg_ind20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind19_);
  // checkMissing(ind20)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_ind20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // r42 = `+`(ind20, 2)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_ind20_;
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 112);
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 91), RHO);
  // r43 = dyn __2(xx17, r42)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_xx17_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L0(r43)
  // L0(r43)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r43_;
  goto L0_;

L3_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_8(SEXP CCP, SEXP RHO) {
  // lpat2 = ld lpat
  Rsh_Fir_reg_lpat2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // lpat3 = force? lpat2
  Rsh_Fir_reg_lpat3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lpat2_);
  // checkMissing(lpat3)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_lpat3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty()));
  // return lpat3
  return Rsh_Fir_reg_lpat3_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_9(SEXP CCP, SEXP RHO) {
  // xx22 = ld xx
  Rsh_Fir_reg_xx22_ = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // xx23 = force? xx22
  Rsh_Fir_reg_xx23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx22_);
  // checkMissing(xx23)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_xx23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(xx23)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_xx23_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if c9 then L1() else L2(xx23)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L1()
    goto L1_;
  } else {
  // L2(xx23)
    Rsh_Fir_reg_xx25_ = Rsh_Fir_reg_xx23_;
    goto L2_;
  }

L0_:;
  // return dx15
  return Rsh_Fir_reg_dx15_;

L1_:;
  // dr14 = tryDispatchBuiltin.1("[", xx23)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 111);
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_xx23_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args115);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // if dc7 then L3() else L2(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr14)
    Rsh_Fir_reg_xx25_ = Rsh_Fir_reg_dr14_;
    goto L2_;
  }

L2_:;
  // ind31 = ld ind
  Rsh_Fir_reg_ind31_ = Rsh_Fir_load(Rsh_const(CCP, 90), RHO);
  // ind32 = force? ind31
  Rsh_Fir_reg_ind32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind31_);
  // checkMissing(ind32)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_ind32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // r51 = `+`(ind32, 2)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_ind32_;
  Rsh_Fir_array_args118[1] = Rsh_const(CCP, 112);
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 91), RHO);
  // r52 = dyn __5(xx25, r51)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_xx25_;
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_array_arg_names35[2];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L0(r52)
  // L0(r52)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r52_;
  goto L0_;

L3_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // goto L0(dx14)
  // L0(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_10(SEXP CCP, SEXP RHO) {
  // xx26 = ld xx
  Rsh_Fir_reg_xx26_ = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // xx27 = force? xx26
  Rsh_Fir_reg_xx27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx26_);
  // checkMissing(xx27)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_xx27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // r64 = `==`(xx27, "\"")
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_xx27_;
  Rsh_Fir_array_args132[1] = Rsh_const(CCP, 115);
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // return r64
  return Rsh_Fir_reg_r64_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_11(SEXP CCP, SEXP RHO) {
  // xx28 = ld xx
  Rsh_Fir_reg_xx28_ = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // xx29 = force? xx28
  Rsh_Fir_reg_xx29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx28_);
  // checkMissing(xx29)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_xx29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(xx29)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_xx29_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args152, Rsh_Fir_param_types_empty());
  // if c13 then L1() else L2(xx29)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L1()
    goto L1_;
  } else {
  // L2(xx29)
    Rsh_Fir_reg_xx31_ = Rsh_Fir_reg_xx29_;
    goto L2_;
  }

L0_:;
  // return dx23
  return Rsh_Fir_reg_dx23_;

L1_:;
  // dr22 = tryDispatchBuiltin.1("[", xx29)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_const(CCP, 111);
  Rsh_Fir_array_args153[1] = Rsh_Fir_reg_xx29_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args153);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // if dc11 then L3() else L2(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr22)
    Rsh_Fir_reg_xx31_ = Rsh_Fir_reg_dr22_;
    goto L2_;
  }

L2_:;
  // l13 = ld l
  Rsh_Fir_reg_l13_ = Rsh_Fir_load(Rsh_const(CCP, 88), RHO);
  // l14 = force? l13
  Rsh_Fir_reg_l14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_l13_);
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 91), RHO);
  // r82 = dyn __8(xx31, l14)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_xx31_;
  Rsh_Fir_array_args155[1] = Rsh_Fir_reg_l14_;
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L0(r82)
  // L0(r82)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r82_;
  goto L0_;

L3_:;
  // dx22 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty());
  // goto L0(dx22)
  // L0(dx22)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_12(SEXP CCP, SEXP RHO) {
  // xx34 = ld xx
  Rsh_Fir_reg_xx34_ = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // xx35 = force? xx34
  Rsh_Fir_reg_xx35_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx34_);
  // checkMissing(xx35)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_xx35_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(xx35)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_xx35_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // if c15 then L1() else L2(xx35)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L1()
    goto L1_;
  } else {
  // L2(xx35)
    Rsh_Fir_reg_xx37_ = Rsh_Fir_reg_xx35_;
    goto L2_;
  }

L0_:;
  // return dx27
  return Rsh_Fir_reg_dx27_;

L1_:;
  // dr26 = tryDispatchBuiltin.1("[", xx35)
  SEXP Rsh_Fir_array_args174[2];
  Rsh_Fir_array_args174[0] = Rsh_const(CCP, 111);
  Rsh_Fir_array_args174[1] = Rsh_Fir_reg_xx35_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args174);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty());
  // if dc13 then L3() else L2(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr26)
    Rsh_Fir_reg_xx37_ = Rsh_Fir_reg_dr26_;
    goto L2_;
  }

L2_:;
  // keep = ld keep
  Rsh_Fir_reg_keep = Rsh_Fir_load(Rsh_const(CCP, 119), RHO);
  // keep1 = force? keep
  Rsh_Fir_reg_keep1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_keep);
  // checkMissing(keep1)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_keep1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty()));
  // r100 = `!`(keep1)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_keep1_;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 91), RHO);
  // r101 = dyn __9(xx37, r100)
  SEXP Rsh_Fir_array_args178[2];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_xx37_;
  Rsh_Fir_array_args178[1] = Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args178, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L0(r101)
  // L0(r101)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r101_;
  goto L0_;

L3_:;
  // dx26 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args179[1];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty());
  // goto L0(dx26)
  // L0(dx26)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_13(SEXP CCP, SEXP RHO) {
  // do1 = ld do1
  Rsh_Fir_reg_do1_ = Rsh_Fir_load(Rsh_const(CCP, 83), RHO);
  // do2 = force? do1
  Rsh_Fir_reg_do2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_do1_);
  // checkMissing(do2)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_do2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty()));
  // return do2
  return Rsh_Fir_reg_do2_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_14(SEXP CCP, SEXP RHO) {
  // xx38 = ld xx
  Rsh_Fir_reg_xx38_ = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // xx39 = force? xx38
  Rsh_Fir_reg_xx39_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx38_);
  // checkMissing(xx39)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_xx39_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty()));
  // return xx39
  return Rsh_Fir_reg_xx39_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
