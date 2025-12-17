#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1865164916_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1865164916_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner1865164916
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1865164916_, RHO, CCP);
  // st `.get_S3_primitive_generics` = r
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
SEXP Rsh_Fir_user_function_inner1865164916_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1865164916 dynamic dispatch ([include_group_generics])

  return Rsh_Fir_user_version_inner1865164916_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1865164916_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1865164916 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1865164916/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_include_group_generics;  // include_group_generics
  SEXP Rsh_Fir_reg_include_group_generics_isMissing;  // include_group_generics_isMissing
  SEXP Rsh_Fir_reg_include_group_generics_orDefault;  // include_group_generics_orDefault
  SEXP Rsh_Fir_reg_include_group_generics1_;  // include_group_generics1
  SEXP Rsh_Fir_reg_include_group_generics2_;  // include_group_generics2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r4_;  // r4

  // Bind parameters
  Rsh_Fir_reg_include_group_generics = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // include_group_generics_isMissing = missing.0(include_group_generics)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_include_group_generics;
  Rsh_Fir_reg_include_group_generics_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if include_group_generics_isMissing then L0(TRUE) else L0(include_group_generics)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_include_group_generics_isMissing)) {
  // L0(TRUE)
    Rsh_Fir_reg_include_group_generics_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(include_group_generics)
    Rsh_Fir_reg_include_group_generics_orDefault = Rsh_Fir_reg_include_group_generics;
    goto L0_;
  }

L0_:;
  // st include_group_generics = include_group_generics_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_include_group_generics_orDefault, RHO);
  (void)(Rsh_Fir_reg_include_group_generics_orDefault);
  // include_group_generics1 = ld include_group_generics
  Rsh_Fir_reg_include_group_generics1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L1_:;
  // __1 = ldf `::`
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L11() else D4()
  // L11()
  goto L11_;

L2_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

D0_:;
  // deopt 0 [include_group_generics1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_include_group_generics1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // include_group_generics2 = force? include_group_generics1
  Rsh_Fir_reg_include_group_generics2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_include_group_generics1_);
  // checkMissing(include_group_generics2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_include_group_generics2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(include_group_generics2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_include_group_generics2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L4() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L4()
    goto L4_;
  } else {
  // L1()
    goto L1_;
  }

L4_:;
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L5_:;
  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

L6_:;
  // r = dyn base(<lang `::`(base, .S3PrimitiveGenerics)>, "abs", "sign", "sqrt", "floor", "ceiling", "trunc", "round", "signif", "exp", "log", "expm1", "log1p", "cos", "sin", "tan", "cospi", "sinpi", "tanpi", "acos", "asin", "atan", "cosh", "sinh", "tanh", "acosh", "asinh", "atanh", "lgamma", "gamma", "digamma", "trigamma", "cumsum", "cumprod", "cummax", "cummin", "+", "-", "*", "/", "^", "%%", "%/%", "&", "|", "!", "==", "!=", "<", "<=", ">=", ">", "all", "any", "sum", "prod", "max", "min", "range", "Arg", "Conj", "Im", "Mod", "Re", "%*%")
  SEXP Rsh_Fir_array_args4[65];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args4[3] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args4[4] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args4[5] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args4[6] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args4[7] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args4[8] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args4[9] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args4[10] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args4[11] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args4[12] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args4[13] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args4[14] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args4[15] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args4[16] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args4[17] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args4[18] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args4[19] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args4[20] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args4[21] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args4[22] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args4[23] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args4[24] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args4[25] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args4[26] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args4[27] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args4[28] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args4[29] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args4[30] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args4[31] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args4[32] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args4[33] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args4[34] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args4[35] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args4[36] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args4[37] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args4[38] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args4[39] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args4[40] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args4[41] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args4[42] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args4[43] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args4[44] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args4[45] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args4[46] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args4[47] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args4[48] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args4[49] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args4[50] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args4[51] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args4[52] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args4[53] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args4[54] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args4[55] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args4[56] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args4[57] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args4[58] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args4[59] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args4[60] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args4[61] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args4[62] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args4[63] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args4[64] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names[65];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_array_arg_names[5] = R_MissingArg;
  Rsh_Fir_array_arg_names[6] = R_MissingArg;
  Rsh_Fir_array_arg_names[7] = R_MissingArg;
  Rsh_Fir_array_arg_names[8] = R_MissingArg;
  Rsh_Fir_array_arg_names[9] = R_MissingArg;
  Rsh_Fir_array_arg_names[10] = R_MissingArg;
  Rsh_Fir_array_arg_names[11] = R_MissingArg;
  Rsh_Fir_array_arg_names[12] = R_MissingArg;
  Rsh_Fir_array_arg_names[13] = R_MissingArg;
  Rsh_Fir_array_arg_names[14] = R_MissingArg;
  Rsh_Fir_array_arg_names[15] = R_MissingArg;
  Rsh_Fir_array_arg_names[16] = R_MissingArg;
  Rsh_Fir_array_arg_names[17] = R_MissingArg;
  Rsh_Fir_array_arg_names[18] = R_MissingArg;
  Rsh_Fir_array_arg_names[19] = R_MissingArg;
  Rsh_Fir_array_arg_names[20] = R_MissingArg;
  Rsh_Fir_array_arg_names[21] = R_MissingArg;
  Rsh_Fir_array_arg_names[22] = R_MissingArg;
  Rsh_Fir_array_arg_names[23] = R_MissingArg;
  Rsh_Fir_array_arg_names[24] = R_MissingArg;
  Rsh_Fir_array_arg_names[25] = R_MissingArg;
  Rsh_Fir_array_arg_names[26] = R_MissingArg;
  Rsh_Fir_array_arg_names[27] = R_MissingArg;
  Rsh_Fir_array_arg_names[28] = R_MissingArg;
  Rsh_Fir_array_arg_names[29] = R_MissingArg;
  Rsh_Fir_array_arg_names[30] = R_MissingArg;
  Rsh_Fir_array_arg_names[31] = R_MissingArg;
  Rsh_Fir_array_arg_names[32] = R_MissingArg;
  Rsh_Fir_array_arg_names[33] = R_MissingArg;
  Rsh_Fir_array_arg_names[34] = R_MissingArg;
  Rsh_Fir_array_arg_names[35] = R_MissingArg;
  Rsh_Fir_array_arg_names[36] = R_MissingArg;
  Rsh_Fir_array_arg_names[37] = R_MissingArg;
  Rsh_Fir_array_arg_names[38] = R_MissingArg;
  Rsh_Fir_array_arg_names[39] = R_MissingArg;
  Rsh_Fir_array_arg_names[40] = R_MissingArg;
  Rsh_Fir_array_arg_names[41] = R_MissingArg;
  Rsh_Fir_array_arg_names[42] = R_MissingArg;
  Rsh_Fir_array_arg_names[43] = R_MissingArg;
  Rsh_Fir_array_arg_names[44] = R_MissingArg;
  Rsh_Fir_array_arg_names[45] = R_MissingArg;
  Rsh_Fir_array_arg_names[46] = R_MissingArg;
  Rsh_Fir_array_arg_names[47] = R_MissingArg;
  Rsh_Fir_array_arg_names[48] = R_MissingArg;
  Rsh_Fir_array_arg_names[49] = R_MissingArg;
  Rsh_Fir_array_arg_names[50] = R_MissingArg;
  Rsh_Fir_array_arg_names[51] = R_MissingArg;
  Rsh_Fir_array_arg_names[52] = R_MissingArg;
  Rsh_Fir_array_arg_names[53] = R_MissingArg;
  Rsh_Fir_array_arg_names[54] = R_MissingArg;
  Rsh_Fir_array_arg_names[55] = R_MissingArg;
  Rsh_Fir_array_arg_names[56] = R_MissingArg;
  Rsh_Fir_array_arg_names[57] = R_MissingArg;
  Rsh_Fir_array_arg_names[58] = R_MissingArg;
  Rsh_Fir_array_arg_names[59] = R_MissingArg;
  Rsh_Fir_array_arg_names[60] = R_MissingArg;
  Rsh_Fir_array_arg_names[61] = R_MissingArg;
  Rsh_Fir_array_arg_names[62] = R_MissingArg;
  Rsh_Fir_array_arg_names[63] = R_MissingArg;
  Rsh_Fir_array_arg_names[64] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 65, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L2(r)
  // L2(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L2_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // r2 = dyn __("base", ".S3PrimitiveGenerics")
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 71);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 8 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r3 = dyn c1(r2, "abs", "sign", "sqrt", "floor", "ceiling", "trunc", "round", "signif", "exp", "log", "expm1", "log1p", "cos", "sin", "tan", "cospi", "sinpi", "tanpi", "acos", "asin", "atan", "cosh", "sinh", "tanh", "acosh", "asinh", "atanh", "lgamma", "gamma", "digamma", "trigamma", "cumsum", "cumprod", "cummax", "cummin", "+", "-", "*", "/", "^", "%%", "%/%", "&", "|", "!", "==", "!=", "<", "<=", ">=", ">", "all", "any", "sum", "prod", "max", "min", "range", "Arg", "Conj", "Im", "Mod", "Re", "%*%")
  SEXP Rsh_Fir_array_args6[65];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args6[3] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args6[4] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args6[5] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args6[6] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args6[7] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args6[8] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args6[9] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args6[10] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args6[11] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args6[12] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args6[13] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args6[14] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args6[15] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args6[16] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args6[17] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args6[18] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args6[19] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args6[20] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args6[21] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args6[22] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args6[23] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args6[24] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args6[25] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args6[26] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args6[27] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args6[28] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args6[29] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args6[30] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args6[31] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args6[32] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args6[33] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args6[34] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args6[35] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args6[36] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args6[37] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args6[38] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args6[39] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args6[40] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args6[41] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args6[42] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args6[43] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args6[44] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args6[45] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args6[46] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args6[47] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args6[48] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args6[49] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args6[50] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args6[51] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args6[52] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args6[53] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args6[54] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args6[55] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args6[56] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args6[57] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args6[58] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args6[59] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args6[60] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args6[61] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args6[62] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args6[63] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args6[64] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names2[65];
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
  Rsh_Fir_array_arg_names2[14] = R_MissingArg;
  Rsh_Fir_array_arg_names2[15] = R_MissingArg;
  Rsh_Fir_array_arg_names2[16] = R_MissingArg;
  Rsh_Fir_array_arg_names2[17] = R_MissingArg;
  Rsh_Fir_array_arg_names2[18] = R_MissingArg;
  Rsh_Fir_array_arg_names2[19] = R_MissingArg;
  Rsh_Fir_array_arg_names2[20] = R_MissingArg;
  Rsh_Fir_array_arg_names2[21] = R_MissingArg;
  Rsh_Fir_array_arg_names2[22] = R_MissingArg;
  Rsh_Fir_array_arg_names2[23] = R_MissingArg;
  Rsh_Fir_array_arg_names2[24] = R_MissingArg;
  Rsh_Fir_array_arg_names2[25] = R_MissingArg;
  Rsh_Fir_array_arg_names2[26] = R_MissingArg;
  Rsh_Fir_array_arg_names2[27] = R_MissingArg;
  Rsh_Fir_array_arg_names2[28] = R_MissingArg;
  Rsh_Fir_array_arg_names2[29] = R_MissingArg;
  Rsh_Fir_array_arg_names2[30] = R_MissingArg;
  Rsh_Fir_array_arg_names2[31] = R_MissingArg;
  Rsh_Fir_array_arg_names2[32] = R_MissingArg;
  Rsh_Fir_array_arg_names2[33] = R_MissingArg;
  Rsh_Fir_array_arg_names2[34] = R_MissingArg;
  Rsh_Fir_array_arg_names2[35] = R_MissingArg;
  Rsh_Fir_array_arg_names2[36] = R_MissingArg;
  Rsh_Fir_array_arg_names2[37] = R_MissingArg;
  Rsh_Fir_array_arg_names2[38] = R_MissingArg;
  Rsh_Fir_array_arg_names2[39] = R_MissingArg;
  Rsh_Fir_array_arg_names2[40] = R_MissingArg;
  Rsh_Fir_array_arg_names2[41] = R_MissingArg;
  Rsh_Fir_array_arg_names2[42] = R_MissingArg;
  Rsh_Fir_array_arg_names2[43] = R_MissingArg;
  Rsh_Fir_array_arg_names2[44] = R_MissingArg;
  Rsh_Fir_array_arg_names2[45] = R_MissingArg;
  Rsh_Fir_array_arg_names2[46] = R_MissingArg;
  Rsh_Fir_array_arg_names2[47] = R_MissingArg;
  Rsh_Fir_array_arg_names2[48] = R_MissingArg;
  Rsh_Fir_array_arg_names2[49] = R_MissingArg;
  Rsh_Fir_array_arg_names2[50] = R_MissingArg;
  Rsh_Fir_array_arg_names2[51] = R_MissingArg;
  Rsh_Fir_array_arg_names2[52] = R_MissingArg;
  Rsh_Fir_array_arg_names2[53] = R_MissingArg;
  Rsh_Fir_array_arg_names2[54] = R_MissingArg;
  Rsh_Fir_array_arg_names2[55] = R_MissingArg;
  Rsh_Fir_array_arg_names2[56] = R_MissingArg;
  Rsh_Fir_array_arg_names2[57] = R_MissingArg;
  Rsh_Fir_array_arg_names2[58] = R_MissingArg;
  Rsh_Fir_array_arg_names2[59] = R_MissingArg;
  Rsh_Fir_array_arg_names2[60] = R_MissingArg;
  Rsh_Fir_array_arg_names2[61] = R_MissingArg;
  Rsh_Fir_array_arg_names2[62] = R_MissingArg;
  Rsh_Fir_array_arg_names2[63] = R_MissingArg;
  Rsh_Fir_array_arg_names2[64] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 65, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 74 [r3]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r3_;
  goto L2_;

D4_:;
  // deopt 76 []
  Rsh_Fir_deopt(76, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // r4 = dyn __1("base", ".S3PrimitiveGenerics")
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 71);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L12() else D5()
  // L12()
  goto L12_;

D5_:;
  // deopt 79 [r4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L12_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
