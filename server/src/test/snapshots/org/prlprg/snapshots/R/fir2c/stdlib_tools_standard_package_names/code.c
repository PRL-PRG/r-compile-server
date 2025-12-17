#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner2708337952
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // st standard_package_names = r
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
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2708337952 dynamic dispatch ([])

  return Rsh_Fir_user_version_inner2708337952_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2708337952 version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for inner2708337952/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r8_;  // r8

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L3() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L3()
    goto L3_;
  } else {
  // L4()
    goto L4_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard2 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L2_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r8 = dyn list(r3, r6)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

L3_:;
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L4_:;
  // r = dyn base[base, recommended](<lang c("base", "tools", "utils", "grDevices", "graphics", "stats", "datasets", "methods", "grid", "splines", "stats4", "tcltk", "compiler", "parallel")>, <lang c("MASS", "lattice", "Matrix", "nlme", "survival", "boot", "cluster", "codetools", "foreign", "KernSmooth", "rpart", "class", "nnet", "spatial", "mgcv")>)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names1[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

L5_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r4 = dyn c("base", "tools", "utils", "grDevices", "graphics", "stats", "datasets", "methods", "grid", "splines", "stats4", "tcltk", "compiler", "parallel")
  SEXP Rsh_Fir_array_args5[14];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args5[3] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args5[4] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args5[5] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args5[6] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args5[7] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args5[8] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args5[9] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args5[10] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args5[11] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args5[12] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args5[13] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names2[14];
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
  Rsh_Fir_array_arg_names2[12] = R_MissingArg;
  Rsh_Fir_array_arg_names2[13] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 14, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L6_:;
  // r2 = dyn base1("base", "tools", "utils", "grDevices", "graphics", "stats", "datasets", "methods", "grid", "splines", "stats4", "tcltk", "compiler", "parallel")
  SEXP Rsh_Fir_array_args6[14];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args6[3] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args6[4] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args6[5] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args6[6] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args6[7] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args6[8] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args6[9] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args6[10] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args6[11] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args6[12] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args6[13] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names3[14];
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
  Rsh_Fir_array_arg_names3[12] = R_MissingArg;
  Rsh_Fir_array_arg_names3[13] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 14, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L1_;

D0_:;
  // deopt 19 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L1_;

L8_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r7 = dyn c1("MASS", "lattice", "Matrix", "nlme", "survival", "boot", "cluster", "codetools", "foreign", "KernSmooth", "rpart", "class", "nnet", "spatial", "mgcv")
  SEXP Rsh_Fir_array_args7[15];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args7[3] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args7[4] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args7[5] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args7[6] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args7[7] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args7[8] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args7[9] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args7[10] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args7[11] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args7[12] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args7[13] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args7[14] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names4[15];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_array_arg_names4[3] = R_MissingArg;
  Rsh_Fir_array_arg_names4[4] = R_MissingArg;
  Rsh_Fir_array_arg_names4[5] = R_MissingArg;
  Rsh_Fir_array_arg_names4[6] = R_MissingArg;
  Rsh_Fir_array_arg_names4[7] = R_MissingArg;
  Rsh_Fir_array_arg_names4[8] = R_MissingArg;
  Rsh_Fir_array_arg_names4[9] = R_MissingArg;
  Rsh_Fir_array_arg_names4[10] = R_MissingArg;
  Rsh_Fir_array_arg_names4[11] = R_MissingArg;
  Rsh_Fir_array_arg_names4[12] = R_MissingArg;
  Rsh_Fir_array_arg_names4[13] = R_MissingArg;
  Rsh_Fir_array_arg_names4[14] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 15, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

L9_:;
  // r5 = dyn base2("MASS", "lattice", "Matrix", "nlme", "survival", "boot", "cluster", "codetools", "foreign", "KernSmooth", "rpart", "class", "nnet", "spatial", "mgcv")
  SEXP Rsh_Fir_array_args8[15];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args8[4] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args8[5] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args8[6] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args8[7] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args8[8] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args8[9] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args8[10] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args8[11] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args8[12] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args8[13] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args8[14] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names5[15];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_array_arg_names5[3] = R_MissingArg;
  Rsh_Fir_array_arg_names5[4] = R_MissingArg;
  Rsh_Fir_array_arg_names5[5] = R_MissingArg;
  Rsh_Fir_array_arg_names5[6] = R_MissingArg;
  Rsh_Fir_array_arg_names5[7] = R_MissingArg;
  Rsh_Fir_array_arg_names5[8] = R_MissingArg;
  Rsh_Fir_array_arg_names5[9] = R_MissingArg;
  Rsh_Fir_array_arg_names5[10] = R_MissingArg;
  Rsh_Fir_array_arg_names5[11] = R_MissingArg;
  Rsh_Fir_array_arg_names5[12] = R_MissingArg;
  Rsh_Fir_array_arg_names5[13] = R_MissingArg;
  Rsh_Fir_array_arg_names5[14] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 15, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L2_;

D1_:;
  // deopt 39 [r7]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L2_;

D2_:;
  // deopt 42 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r8_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
