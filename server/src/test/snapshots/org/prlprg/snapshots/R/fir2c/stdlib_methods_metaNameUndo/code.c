#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2340105578_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2340105578_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2340105578_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2340105578_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2340105578_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2340105578_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2340105578_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2340105578_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2340105578_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2340105578_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2340105578_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2340105578_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2340105578_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2340105578_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2340105578_12(SEXP CCP, SEXP RHO);
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
  // r = clos inner2340105578
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2340105578_, RHO, CCP);
  // st metaNameUndo = r
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
SEXP Rsh_Fir_user_function_inner2340105578_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2340105578 dynamic dispatch ([strings, prefix, searchForm])

  return Rsh_Fir_user_version_inner2340105578_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2340105578_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2340105578 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner2340105578/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_strings;  // strings
  SEXP Rsh_Fir_reg_prefix;  // prefix
  SEXP Rsh_Fir_reg_searchForm;  // searchForm
  SEXP Rsh_Fir_reg_searchForm_isMissing;  // searchForm_isMissing
  SEXP Rsh_Fir_reg_searchForm_orDefault;  // searchForm_orDefault
  SEXP Rsh_Fir_reg_methodsPackageMetaName;  // methodsPackageMetaName
  SEXP Rsh_Fir_reg_prefix1_;  // prefix1
  SEXP Rsh_Fir_reg_prefix2_;  // prefix2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_pattern;  // pattern
  SEXP Rsh_Fir_reg_pattern1_;  // pattern1
  SEXP Rsh_Fir_reg_nchar;  // nchar
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_substr;  // substr
  SEXP Rsh_Fir_reg_strings1_;  // strings1
  SEXP Rsh_Fir_reg_strings2_;  // strings2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_pattern2_;  // pattern2
  SEXP Rsh_Fir_reg_pattern3_;  // pattern3
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_substring;  // substring
  SEXP Rsh_Fir_reg_strings3_;  // strings3
  SEXP Rsh_Fir_reg_strings4_;  // strings4
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_strings6_;  // strings6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_matched;  // matched
  SEXP Rsh_Fir_reg_matched1_;  // matched1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sub;  // sub
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_searchForm1_;  // searchForm1
  SEXP Rsh_Fir_reg_searchForm2_;  // searchForm2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_grep;  // grep
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_value3_;  // value3
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_global;  // global
  SEXP Rsh_Fir_reg_global1_;  // global1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_pkg;  // pkg
  SEXP Rsh_Fir_reg_pkg1_;  // pkg1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_pkg3_;  // pkg3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_global2_;  // global2
  SEXP Rsh_Fir_reg_global3_;  // global3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_global4_;  // global4
  SEXP Rsh_Fir_reg_global5_;  // global5
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_substring1_;  // substring1
  SEXP Rsh_Fir_reg_pkg4_;  // pkg4
  SEXP Rsh_Fir_reg_pkg5_;  // pkg5
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_pkg7_;  // pkg7
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_global6_;  // global6
  SEXP Rsh_Fir_reg_global7_;  // global7
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_global8_;  // global8
  SEXP Rsh_Fir_reg_global9_;  // global9
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_substring2_;  // substring2
  SEXP Rsh_Fir_reg_pkg8_;  // pkg8
  SEXP Rsh_Fir_reg_pkg9_;  // pkg9
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_sub1_;  // sub1
  SEXP Rsh_Fir_reg_value4_;  // value4
  SEXP Rsh_Fir_reg_value5_;  // value5
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_new;  // new
  SEXP Rsh_Fir_reg_value6_;  // value6
  SEXP Rsh_Fir_reg_value7_;  // value7
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_pkg10_;  // pkg10
  SEXP Rsh_Fir_reg_pkg11_;  // pkg11
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r47_;  // r47

  // Bind parameters
  Rsh_Fir_reg_strings = PARAMS[0];
  Rsh_Fir_reg_prefix = PARAMS[1];
  Rsh_Fir_reg_searchForm = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st strings = strings
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_strings, RHO);
  (void)(Rsh_Fir_reg_strings);
  // st prefix = prefix
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_prefix, RHO);
  (void)(Rsh_Fir_reg_prefix);
  // searchForm_isMissing = missing.0(searchForm)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_searchForm;
  Rsh_Fir_reg_searchForm_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if searchForm_isMissing then L0(FALSE) else L0(searchForm)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_searchForm_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_searchForm_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(searchForm)
    Rsh_Fir_reg_searchForm_orDefault = Rsh_Fir_reg_searchForm;
    goto L0_;
  }

L0_:;
  // st searchForm = searchForm_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_searchForm_orDefault, RHO);
  (void)(Rsh_Fir_reg_searchForm_orDefault);
  // methodsPackageMetaName = ldf methodsPackageMetaName
  Rsh_Fir_reg_methodsPackageMetaName = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L1_:;
  // st n = r3
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // substr = ldf substr
  Rsh_Fir_reg_substr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

L2_:;
  // substring2 = ldf substring
  Rsh_Fir_reg_substring2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L45() else D22()
  // L45()
  goto L45_;

L3_:;
  // c2 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c2 then L30() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L30()
    goto L30_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L7(NULL)
  // L7(NULL)
  Rsh_Fir_reg_r39_ = Rsh_const(CCP, 9);
  goto L7_;

L5_:;
  // st pkg = dx5
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // substring1 = ldf substring
  Rsh_Fir_reg_substring1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L37() else D19()
  // L37()
  goto L37_;

L6_:;
  // st pkg = dx9
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // goto L7(r37)
  // L7(r37)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r37_;
  goto L7_;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // sub1 = ldf sub
  Rsh_Fir_reg_sub1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L47() else D24()
  // L47()
  goto L47_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p = prom<V +>{
  //   prefix1 = ld prefix;
  //   prefix2 = force? prefix1;
  //   checkMissing(prefix2);
  //   return prefix2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2340105578_, CCP, RHO);
  // r1 = dyn methodsPackageMetaName(p, "")
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_methodsPackageMetaName, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 4 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // st pattern = r1
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym = ldf nchar
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base = ldf nchar in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L11_:;
  // pattern = ld pattern
  Rsh_Fir_reg_pattern = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

L12_:;
  // r2 = dyn base(<sym pattern>, "c")
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L1_;

D2_:;
  // deopt 8 [pattern]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_pattern;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L13_:;
  // pattern1 = force? pattern
  Rsh_Fir_reg_pattern1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern);
  // checkMissing(pattern1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_pattern1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // nchar = ldf nchar in base
  Rsh_Fir_reg_nchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r4 = dyn nchar(pattern1, "c", FALSE, NA_LGL)
  SEXP Rsh_Fir_array_args7[4];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_pattern1_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args7[3] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names2[4];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nchar, 4, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

D3_:;
  // deopt 14 [r4]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L1_;

D4_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // p1 = prom<V +>{
  //   strings1 = ld strings;
  //   strings2 = force? strings1;
  //   checkMissing(strings2);
  //   return strings2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2340105578_1, CCP, RHO);
  // p2 = prom<V +>{
  //   n = ld n;
  //   n1 = force? n;
  //   checkMissing(n1);
  //   return n1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2340105578_2, CCP, RHO);
  // r7 = dyn substr(p1, 1, p2)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args10[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substr, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

D5_:;
  // deopt 21 [r7]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L16_:;
  // pattern2 = ld pattern
  Rsh_Fir_reg_pattern2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L17() else D6()
  // L17()
  goto L17_;

D6_:;
  // deopt 21 [r7, pattern2]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_pattern2_;
  Rsh_Fir_deopt(21, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L17_:;
  // pattern3 = force? pattern2
  Rsh_Fir_reg_pattern3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern2_);
  // checkMissing(pattern3)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_pattern3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // r8 = `==`(r7, pattern3)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_pattern3_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // st matched = r8
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // substring = ldf substring
  Rsh_Fir_reg_substring = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L18() else D7()
  // L18()
  goto L18_;

D7_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p3 = prom<V +>{
  //   strings3 = ld strings;
  //   strings4 = force? strings3;
  //   checkMissing(strings4);
  //   c = `is.object`(strings4);
  //   if c then L1() else L2(strings4);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", strings4);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(strings6):
  //   matched = ld matched;
  //   matched1 = force? matched;
  //   __ = ldf `[` in base;
  //   r9 = dyn __(strings6, matched1);
  //   goto L0(r9);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2340105578_3, CCP, RHO);
  // p4 = prom<V +>{
  //   n2 = ld n;
  //   n3 = force? n2;
  //   checkMissing(n3);
  //   r11 = `+`(n3, 1);
  //   return r11;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2340105578_4, CCP, RHO);
  // r13 = dyn substring(p3, p4)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substring, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L19() else D8()
  // L19()
  goto L19_;

D8_:;
  // deopt 29 [r13]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L19_:;
  // st value = r13
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // sub = ldf sub
  Rsh_Fir_reg_sub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L20() else D9()
  // L20()
  goto L20_;

D9_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p5 = prom<V +>{
  //   value = ld value;
  //   value1 = force? value;
  //   checkMissing(value1);
  //   return value1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2340105578_5, CCP, RHO);
  // r15 = dyn sub("^[^:]*", "", p5)
  SEXP Rsh_Fir_array_args23[3];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args23[2] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sub, 3, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L21() else D10()
  // L21()
  goto L21_;

D10_:;
  // deopt 36 [r15]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L21_:;
  // st pkg = r15
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // searchForm1 = ld searchForm
  Rsh_Fir_reg_searchForm1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L22() else D11()
  // L22()
  goto L22_;

D11_:;
  // deopt 38 [searchForm1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_searchForm1_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L22_:;
  // searchForm2 = force? searchForm1
  Rsh_Fir_reg_searchForm2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_searchForm1_);
  // checkMissing(searchForm2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_searchForm2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(searchForm2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_searchForm2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c1 then L23() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L23()
    goto L23_;
  } else {
  // L2()
    goto L2_;
  }

L23_:;
  // grep = ldf grep
  Rsh_Fir_reg_grep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L24() else D12()
  // L24()
  goto L24_;

D12_:;
  // deopt 41 []
  Rsh_Fir_deopt(41, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p6 = prom<V +>{
  //   value2 = ld value;
  //   value3 = force? value2;
  //   checkMissing(value3);
  //   return value3;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2340105578_6, CCP, RHO);
  // r17 = dyn grep(".GlobalEnv", p6)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grep, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L25() else D13()
  // L25()
  goto L25_;

D13_:;
  // deopt 44 [r17]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L25_:;
  // st global = r17
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard1 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L26_:;
  // global = ld global
  Rsh_Fir_reg_global = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L28() else D14()
  // L28()
  goto L28_;

L27_:;
  // r18 = dyn base1(<sym global>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L3(r18)
  // L3(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L3_;

D14_:;
  // deopt 48 [global]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_global;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L28_:;
  // global1 = force? global
  Rsh_Fir_reg_global1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_global);
  // checkMissing(global1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_global1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r20 = dyn length(global1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_global1_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L29() else D15()
  // L29()
  goto L29_;

D15_:;
  // deopt 51 [r20]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L3(r20)
  // L3(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L3_;

L30_:;
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L31() else D16()
  // L31()
  goto L31_;

D16_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L31_:;
  // p7 = prom<V +>{
  //   pkg = ld pkg;
  //   pkg1 = force? pkg;
  //   checkMissing(pkg1);
  //   c3 = `is.object`(pkg1);
  //   if c3 then L1() else L2(pkg1);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[", pkg1);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(pkg3):
  //   global2 = ld global;
  //   global3 = force? global2;
  //   checkMissing(global3);
  //   r21 = `-`(<missing>, global3);
  //   __1 = ldf `[` in base;
  //   r22 = dyn __1(pkg3, r21);
  //   goto L0(r22);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2340105578_7, CCP, RHO);
  // r24 = dyn paste0("package", p7)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L32() else D17()
  // L32()
  goto L32_;

D17_:;
  // deopt 56 [r24]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L32_:;
  // l = ld pkg
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // c4 = `is.object`(l)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c4 then L33() else L34(r24, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L33()
    goto L33_;
  } else {
  // L34(r24, l)
    Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r24_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L34_;
  }

L33_:;
  // dr4 = tryDispatchBuiltin.0("[<-", l, r24)
  SEXP Rsh_Fir_array_args42[3];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args42[2] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args42);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc2 then L35() else L34(r24, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L35()
    goto L35_;
  } else {
  // L34(r24, dr4)
    Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r24_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr4_;
    goto L34_;
  }

L34_:;
  // global4 = ld global
  Rsh_Fir_reg_global4_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L36() else D18()
  // L36()
  goto L36_;

L35_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L5(dx4)
  // L5(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L5_;

D18_:;
  // deopt 58 [r26, l2, r24, global4]
  SEXP Rsh_Fir_array_deopt_stack12[4];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack12[3] = Rsh_Fir_reg_global4_;
  Rsh_Fir_deopt(58, 4, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L36_:;
  // global5 = force? global4
  Rsh_Fir_reg_global5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_global4_);
  // checkMissing(global5)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_global5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // r29 = `-`(<missing>, global5)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_global5_;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r30 = dyn ___(l2, r24, r29)
  SEXP Rsh_Fir_array_args47[3];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args47[2] = Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L5(r30)
  // L5(r30)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r30_;
  goto L5_;

D19_:;
  // deopt 64 []
  Rsh_Fir_deopt(64, 0, NULL, CCP, RHO);
  return R_NilValue;

L37_:;
  // p8 = prom<V +>{
  //   pkg4 = ld pkg;
  //   pkg5 = force? pkg4;
  //   checkMissing(pkg5);
  //   c5 = `is.object`(pkg5);
  //   if c5 then L1() else L2(pkg5);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[", pkg5);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(pkg7):
  //   global6 = ld global;
  //   global7 = force? global6;
  //   __2 = ldf `[` in base;
  //   r31 = dyn __2(pkg7, global7);
  //   goto L0(r31);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2340105578_8, CCP, RHO);
  // r33 = dyn substring1(p8, 2)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substring1_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L38() else D20()
  // L38()
  goto L38_;

D20_:;
  // deopt 67 [r33]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L38_:;
  // l3 = ld pkg
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // c6 = `is.object`(l3)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if c6 then L39() else L40(r33, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L39()
    goto L39_;
  } else {
  // L40(r33, l3)
    Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r33_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L40_;
  }

L39_:;
  // dr8 = tryDispatchBuiltin.0("[<-", l3, r33)
  SEXP Rsh_Fir_array_args56[3];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args56[2] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args56);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if dc4 then L41() else L40(r33, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L41()
    goto L41_;
  } else {
  // L40(r33, dr8)
    Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r33_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr8_;
    goto L40_;
  }

L40_:;
  // global8 = ld global
  Rsh_Fir_reg_global8_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L42() else D21()
  // L42()
  goto L42_;

L41_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L6(r33, dx8)
  // L6(r33, dx8)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L6_;

D21_:;
  // deopt 69 [r35, l5, r33, global8]
  SEXP Rsh_Fir_array_deopt_stack14[4];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_deopt_stack14[3] = Rsh_Fir_reg_global8_;
  Rsh_Fir_deopt(69, 4, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L42_:;
  // global9 = force? global8
  Rsh_Fir_reg_global9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_global8_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r38 = dyn ___1(l5, r33, global9)
  SEXP Rsh_Fir_array_args59[3];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args59[2] = Rsh_Fir_reg_global9_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L6(r35, r38)
  // L6(r35, r38)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r38_;
  goto L6_;

D22_:;
  // deopt 76 []
  Rsh_Fir_deopt(76, 0, NULL, CCP, RHO);
  return R_NilValue;

L45_:;
  // p9 = prom<V +>{
  //   pkg8 = ld pkg;
  //   pkg9 = force? pkg8;
  //   checkMissing(pkg9);
  //   return pkg9;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2340105578_9, CCP, RHO);
  // r42 = dyn substring2(p9, 2)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_substring2_, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L46() else D23()
  // L46()
  goto L46_;

D23_:;
  // deopt 79 [r42]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L46_:;
  // st pkg = r42
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r42_, RHO);
  (void)(Rsh_Fir_reg_r42_);
  // goto L8()
  // L8()
  goto L8_;

D24_:;
  // deopt 82 []
  Rsh_Fir_deopt(82, 0, NULL, CCP, RHO);
  return R_NilValue;

L47_:;
  // p10 = prom<V +>{
  //   value4 = ld value;
  //   value5 = force? value4;
  //   checkMissing(value5);
  //   return value5;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2340105578_10, CCP, RHO);
  // r44 = dyn sub1(":.*", "", p10)
  SEXP Rsh_Fir_array_args63[3];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args63[2] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sub1_, 3, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L48() else D25()
  // L48()
  goto L48_;

D25_:;
  // deopt 86 [r44]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L48_:;
  // st value = r44
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r44_, RHO);
  (void)(Rsh_Fir_reg_r44_);
  // new = ldf new
  Rsh_Fir_reg_new = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L49() else D26()
  // L49()
  goto L49_;

D26_:;
  // deopt 89 []
  Rsh_Fir_deopt(89, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // p11 = prom<V +>{
  //   value6 = ld value;
  //   value7 = force? value6;
  //   checkMissing(value7);
  //   return value7;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2340105578_11, CCP, RHO);
  // p12 = prom<V +>{
  //   pkg10 = ld pkg;
  //   pkg11 = force? pkg10;
  //   checkMissing(pkg11);
  //   return pkg11;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2340105578_12, CCP, RHO);
  // r47 = dyn new[, , package]("ObjectsWithPackage", p11, p12)
  SEXP Rsh_Fir_array_args66[3];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args66[2] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_new, 3, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L50() else D27()
  // L50()
  goto L50_;

D27_:;
  // deopt 94 [r47]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L50_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r47
  return Rsh_Fir_reg_r47_;
}
SEXP Rsh_Fir_user_promise_inner2340105578_(SEXP CCP, SEXP RHO) {
  // prefix1 = ld prefix
  Rsh_Fir_reg_prefix1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // prefix2 = force? prefix1
  Rsh_Fir_reg_prefix2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prefix1_);
  // checkMissing(prefix2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_prefix2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return prefix2
  return Rsh_Fir_reg_prefix2_;
}
SEXP Rsh_Fir_user_promise_inner2340105578_1(SEXP CCP, SEXP RHO) {
  // strings1 = ld strings
  Rsh_Fir_reg_strings1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // strings2 = force? strings1
  Rsh_Fir_reg_strings2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_strings1_);
  // checkMissing(strings2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_strings2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return strings2
  return Rsh_Fir_reg_strings2_;
}
SEXP Rsh_Fir_user_promise_inner2340105578_2(SEXP CCP, SEXP RHO) {
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // return n1
  return Rsh_Fir_reg_n1_;
}
SEXP Rsh_Fir_user_promise_inner2340105578_3(SEXP CCP, SEXP RHO) {
  // strings3 = ld strings
  Rsh_Fir_reg_strings3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // strings4 = force? strings3
  Rsh_Fir_reg_strings4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_strings3_);
  // checkMissing(strings4)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_strings4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // c = `is.object`(strings4)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_strings4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c then L1() else L2(strings4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2(strings4)
    Rsh_Fir_reg_strings6_ = Rsh_Fir_reg_strings4_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", strings4)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_strings4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args15);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_strings6_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // matched = ld matched
  Rsh_Fir_reg_matched = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // matched1 = force? matched
  Rsh_Fir_reg_matched1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_matched);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r9 = dyn __(strings6, matched1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_strings6_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_matched1_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r9_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2340105578_4(SEXP CCP, SEXP RHO) {
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // r11 = `+`(n3, 1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // return r11
  return Rsh_Fir_reg_r11_;
}
SEXP Rsh_Fir_user_promise_inner2340105578_5(SEXP CCP, SEXP RHO) {
  // value = ld value
  Rsh_Fir_reg_value = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // value1 = force? value
  Rsh_Fir_reg_value1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value);
  // checkMissing(value1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_value1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return value1
  return Rsh_Fir_reg_value1_;
}
SEXP Rsh_Fir_user_promise_inner2340105578_6(SEXP CCP, SEXP RHO) {
  // value2 = ld value
  Rsh_Fir_reg_value2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // value3 = force? value2
  Rsh_Fir_reg_value3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value2_);
  // checkMissing(value3)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_value3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return value3
  return Rsh_Fir_reg_value3_;
}
SEXP Rsh_Fir_user_promise_inner2340105578_7(SEXP CCP, SEXP RHO) {
  // pkg = ld pkg
  Rsh_Fir_reg_pkg = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // pkg1 = force? pkg
  Rsh_Fir_reg_pkg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg);
  // checkMissing(pkg1)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_pkg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(pkg1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_pkg1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if c3 then L1() else L2(pkg1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L1()
    goto L1_;
  } else {
  // L2(pkg1)
    Rsh_Fir_reg_pkg3_ = Rsh_Fir_reg_pkg1_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[", pkg1)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_pkg1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args34);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_pkg3_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // global2 = ld global
  Rsh_Fir_reg_global2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // global3 = force? global2
  Rsh_Fir_reg_global3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_global2_);
  // checkMissing(global3)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_global3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // r21 = `-`(<missing>, global3)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_global3_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r22 = dyn __1(pkg3, r21)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_pkg3_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r22_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2340105578_8(SEXP CCP, SEXP RHO) {
  // pkg4 = ld pkg
  Rsh_Fir_reg_pkg4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // pkg5 = force? pkg4
  Rsh_Fir_reg_pkg5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg4_);
  // checkMissing(pkg5)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_pkg5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(pkg5)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_pkg5_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if c5 then L1() else L2(pkg5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L1()
    goto L1_;
  } else {
  // L2(pkg5)
    Rsh_Fir_reg_pkg7_ = Rsh_Fir_reg_pkg5_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[", pkg5)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_pkg5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args50);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_pkg7_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // global6 = ld global
  Rsh_Fir_reg_global6_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // global7 = force? global6
  Rsh_Fir_reg_global7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_global6_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r31 = dyn __2(pkg7, global7)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_pkg7_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_global7_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r31)
  // L0(r31)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r31_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2340105578_9(SEXP CCP, SEXP RHO) {
  // pkg8 = ld pkg
  Rsh_Fir_reg_pkg8_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // pkg9 = force? pkg8
  Rsh_Fir_reg_pkg9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg8_);
  // checkMissing(pkg9)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_pkg9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // return pkg9
  return Rsh_Fir_reg_pkg9_;
}
SEXP Rsh_Fir_user_promise_inner2340105578_10(SEXP CCP, SEXP RHO) {
  // value4 = ld value
  Rsh_Fir_reg_value4_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // value5 = force? value4
  Rsh_Fir_reg_value5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value4_);
  // checkMissing(value5)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_value5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return value5
  return Rsh_Fir_reg_value5_;
}
SEXP Rsh_Fir_user_promise_inner2340105578_11(SEXP CCP, SEXP RHO) {
  // value6 = ld value
  Rsh_Fir_reg_value6_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // value7 = force? value6
  Rsh_Fir_reg_value7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value6_);
  // checkMissing(value7)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_value7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // return value7
  return Rsh_Fir_reg_value7_;
}
SEXP Rsh_Fir_user_promise_inner2340105578_12(SEXP CCP, SEXP RHO) {
  // pkg10 = ld pkg
  Rsh_Fir_reg_pkg10_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // pkg11 = force? pkg10
  Rsh_Fir_reg_pkg11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg10_);
  // checkMissing(pkg11)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_pkg11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return pkg11
  return Rsh_Fir_reg_pkg11_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
