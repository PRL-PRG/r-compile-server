#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner509519364_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner509519364_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner509519364
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner509519364_, RHO, CCP);
  // st `.functions_to_be_ignored_from_usage` = r
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
SEXP Rsh_Fir_user_function_inner509519364_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner509519364 dynamic dispatch ([package_name])

  return Rsh_Fir_user_version_inner509519364_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner509519364_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner509519364 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner509519364/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_package_name;  // package_name
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_package_name1_;  // package_name1
  SEXP Rsh_Fir_reg_package_name2_;  // package_name2
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_package_name3_;  // package_name3
  SEXP Rsh_Fir_reg_package_name4_;  // package_name4
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_package_name5_;  // package_name5
  SEXP Rsh_Fir_reg_package_name6_;  // package_name6
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r11_;  // r11

  // Bind parameters
  Rsh_Fir_reg_package_name = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st package_name = package_name
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_package_name, RHO);
  (void)(Rsh_Fir_reg_package_name);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // goto L3(NULL)
  // L3(NULL)
  Rsh_Fir_reg_r6_ = Rsh_const(CCP, 3);
  goto L3_;

L2_:;
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r4_;
  goto L3_;

L3_:;
  // package_name3 = ld package_name
  Rsh_Fir_reg_package_name3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L16() else D2()
  // L16()
  goto L16_;

L4_:;
  // goto L5(NULL)
  // L5(NULL)
  Rsh_Fir_reg_r8_ = Rsh_const(CCP, 3);
  goto L5_;

L5_:;
  // package_name5 = ld package_name
  Rsh_Fir_reg_package_name5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L19() else D3()
  // L19()
  goto L19_;

L6_:;
  // goto L7(NULL)
  // L7(NULL)
  Rsh_Fir_reg_r10_ = Rsh_const(CCP, 3);
  goto L7_;

L7_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r11 = dyn c4("<-", "=", r6, r8, r10)
  SEXP Rsh_Fir_array_args1[5];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args1[2] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args1[3] = Rsh_Fir_reg_r8_;
  Rsh_Fir_array_args1[4] = Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_array_arg_names[5];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 5, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L22() else D4()
  // L22()
  goto L22_;

L8_:;
  // package_name1 = ld package_name
  Rsh_Fir_reg_package_name1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

L9_:;
  // r = dyn base("<-", "=", <lang if(`==`(package_name, "base"), c("(", "{", "function", "if", "for", "while", "repeat", "Math", "Ops", "Summary", "Complex", "matrixOps"))>, <lang if(`==`(package_name, "utils"), "?")>, <lang if(`==`(package_name, "methods"), "@")>)
  SEXP Rsh_Fir_array_args2[5];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[4] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names1[5];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 5, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 4 [package_name1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_package_name1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // package_name2 = force? package_name1
  Rsh_Fir_reg_package_name2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package_name1_);
  // checkMissing(package_name2)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_package_name2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // r2 = `==`(package_name2, "base")
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_package_name2_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r2)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c then L11() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L11()
    goto L11_;
  } else {
  // L1()
    goto L1_;
  }

L11_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard1 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r5 = dyn c1("(", "{", "function", "if", "for", "while", "repeat", "Math", "Ops", "Summary", "Complex", "matrixOps")
  SEXP Rsh_Fir_array_args7[12];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args7[3] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args7[4] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args7[5] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args7[6] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args7[7] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args7[8] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args7[9] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args7[10] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args7[11] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names2[12];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_array_arg_names2[4] = R_MissingArg;
  Rsh_Fir_array_arg_names2[5] = R_MissingArg;
  Rsh_Fir_array_arg_names2[6] = R_MissingArg;
  Rsh_Fir_array_arg_names2[7] = R_MissingArg;
  Rsh_Fir_array_arg_names2[8] = R_MissingArg;
  Rsh_Fir_array_arg_names2[9] = R_MissingArg;
  Rsh_Fir_array_arg_names2[10] = R_MissingArg;
  Rsh_Fir_array_arg_names2[11] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 12, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L14() else D1()
  // L14()
  goto L14_;

L13_:;
  // r3 = dyn base1("(", "{", "function", "if", "for", "while", "repeat", "Math", "Ops", "Summary", "Complex", "matrixOps")
  SEXP Rsh_Fir_array_args8[12];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args8[4] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args8[5] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args8[6] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args8[7] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args8[8] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args8[9] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args8[10] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args8[11] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names3[12];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_array_arg_names3[4] = R_MissingArg;
  Rsh_Fir_array_arg_names3[5] = R_MissingArg;
  Rsh_Fir_array_arg_names3[6] = R_MissingArg;
  Rsh_Fir_array_arg_names3[7] = R_MissingArg;
  Rsh_Fir_array_arg_names3[8] = R_MissingArg;
  Rsh_Fir_array_arg_names3[9] = R_MissingArg;
  Rsh_Fir_array_arg_names3[10] = R_MissingArg;
  Rsh_Fir_array_arg_names3[11] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 12, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D1_:;
  // deopt 23 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L2_;

D2_:;
  // deopt 26 [package_name3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_package_name3_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L16_:;
  // package_name4 = force? package_name3
  Rsh_Fir_reg_package_name4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package_name3_);
  // checkMissing(package_name4)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_package_name4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // r7 = `==`(package_name4, "utils")
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_package_name4_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r7)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c2 then L17() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L17()
    goto L17_;
  } else {
  // L4()
    goto L4_;
  }

L17_:;
  // goto L5("?")
  // L5("?")
  Rsh_Fir_reg_r8_ = Rsh_const(CCP, 23);
  goto L5_;

D3_:;
  // deopt 34 [package_name5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_package_name5_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L19_:;
  // package_name6 = force? package_name5
  Rsh_Fir_reg_package_name6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_package_name5_);
  // checkMissing(package_name6)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_package_name6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // r9 = `==`(package_name6, "methods")
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_package_name6_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c3 then L20() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L20()
    goto L20_;
  } else {
  // L6()
    goto L6_;
  }

L20_:;
  // goto L7("@")
  // L7("@")
  Rsh_Fir_reg_r10_ = Rsh_const(CCP, 25);
  goto L7_;

D4_:;
  // deopt 43 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r11_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
