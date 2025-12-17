#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner4169636932_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4169636932_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4169636932_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4169636932_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4169636932_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4169636932_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4169636932_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4169636932_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4169636932_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4169636932_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4169636932_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4169636932_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4169636932_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4169636932_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4169636932_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4169636932_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_format_pval;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_format_pval1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r13_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4169636932
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4169636932_, RHO, CCP);
  // st `format.pval` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // format_pval = ldf `format.pval`
  Rsh_Fir_reg_format_pval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   __ = ldf `::`;
  //   r3 = dyn __("stats", "runif");
  //   checkFun.0(r3);
  //   r4 = r3 as cls;
  //   r5 = dyn r4(5.0);
  //   c = ldf c in base;
  //   r6 = dyn c(r5, 1.9275814160560206E-50, NA_LGL);
  //   goto L0(r6);
  // L2():
  //   r1 = dyn base(<lang `::`(stats, runif)(5.0)>, <lang `^`(pi, `-`(100.0))>, NA_LGL);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r8 = dyn format_pval(p)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format_pval, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 6 [r8]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // format_pval1 = ldf `format.pval`
  Rsh_Fir_reg_format_pval1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 8 []
  Rsh_Fir_deopt(8, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p1 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r10):
  //   return r10;
  // L1():
  //   c1 = ldf c in base;
  //   r11 = dyn c1(0.1, 1.0E-4, 1.0E-27);
  //   goto L0(r11);
  // L2():
  //   r9 = dyn base1(0.1, 1.0E-4, 1.0E-27);
  //   goto L0(r9);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r13 = dyn format_pval1(p1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format_pval1_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 10 [r13]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf c in base
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
  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // r3 = dyn __("stats", "runif")
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // checkFun.0(r3)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r3_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args2));
  // r4 = r3 as cls
  Rsh_Fir_reg_r4_ = Rsh_Fir_cast(Rsh_Fir_reg_r3_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r5 = dyn r4(5.0)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r4_, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r6 = dyn c(r5, 1.9275814160560206E-50, NA_LGL)
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names2[3];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r6_;
  goto L0_;

L2_:;
  // r1 = dyn base(<lang `::`(stats, runif)(5.0)>, <lang `^`(pi, `-`(100.0))>, NA_LGL)
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
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
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r10
  return Rsh_Fir_reg_r10_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r11 = dyn c1(0.1, 1.0E-4, 1.0E-27)
  SEXP Rsh_Fir_array_args8[3];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 3, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_;
  goto L0_;

L2_:;
  // r9 = dyn base1(0.1, 1.0E-4, 1.0E-27)
  SEXP Rsh_Fir_array_args9[3];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 3, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner4169636932_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4169636932 dynamic dispatch ([pv, digits, eps, `na.form`, `...`])

  return Rsh_Fir_user_version_inner4169636932_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4169636932_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4169636932 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner4169636932/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_pv;
  SEXP Rsh_Fir_reg_digits;
  SEXP Rsh_Fir_reg_eps;
  SEXP Rsh_Fir_reg_na_form;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_digits_isMissing;
  SEXP Rsh_Fir_reg_digits_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_eps_isMissing;
  SEXP Rsh_Fir_reg_eps_orDefault;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_na_form_isMissing;
  SEXP Rsh_Fir_reg_na_form_orDefault;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_pv1_;
  SEXP Rsh_Fir_reg_pv2_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_pv3_;
  SEXP Rsh_Fir_reg_pv4_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_pv6_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_ina;
  SEXP Rsh_Fir_reg_ina1_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_character;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_is0_;
  SEXP Rsh_Fir_reg_is1_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_any1_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_pv9_;
  SEXP Rsh_Fir_reg_pv10_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_pv12_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_is2_;
  SEXP Rsh_Fir_reg_is3_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_ifelse;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_log10_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_expo;
  SEXP Rsh_Fir_reg_expo1_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_expo2_;
  SEXP Rsh_Fir_reg_expo3_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_digits1_;
  SEXP Rsh_Fir_reg_digits2_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_fixp;
  SEXP Rsh_Fir_reg_fixp1_;
  SEXP Rsh_Fir_reg_any2_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_format;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_l2_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_fixp4_;
  SEXP Rsh_Fir_reg_fixp5_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_fixp6_;
  SEXP Rsh_Fir_reg_fixp7_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_any3_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_format1_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_fixp10_;
  SEXP Rsh_Fir_reg_fixp11_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_rr;
  SEXP Rsh_Fir_reg_rr1_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_rr3_;
  SEXP Rsh_Fir_reg_l8_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_rr5_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_is4_;
  SEXP Rsh_Fir_reg_is5_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg____2_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_is6_;
  SEXP Rsh_Fir_reg_is7_;
  SEXP Rsh_Fir_reg_any4_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_digits7_;
  SEXP Rsh_Fir_reg_digits8_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_max1_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_is8_;
  SEXP Rsh_Fir_reg_is9_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_any5_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_rr7_;
  SEXP Rsh_Fir_reg_rr8_;
  SEXP Rsh_Fir_reg_nchar;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_max2_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_digits9_;
  SEXP Rsh_Fir_reg_digits10_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_digits11_;
  SEXP Rsh_Fir_reg_digits12_;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg_nc;
  SEXP Rsh_Fir_reg_nc1_;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg_nc2_;
  SEXP Rsh_Fir_reg_nc3_;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_max3_;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_digits13_;
  SEXP Rsh_Fir_reg_digits14_;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_nc4_;
  SEXP Rsh_Fir_reg_nc5_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_c24_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_r101_;
  SEXP Rsh_Fir_reg_digits15_;
  SEXP Rsh_Fir_reg_digits16_;
  SEXP Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r110_;
  SEXP Rsh_Fir_reg_l9_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_r112_;
  SEXP Rsh_Fir_reg_l11_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_r114_;
  SEXP Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_reg_is10_;
  SEXP Rsh_Fir_reg_is11_;
  SEXP Rsh_Fir_reg____3_;
  SEXP Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_reg_has_na;
  SEXP Rsh_Fir_reg_has_na1_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_r117_;
  SEXP Rsh_Fir_reg_r118_;
  SEXP Rsh_Fir_reg_character1_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r123_;
  SEXP Rsh_Fir_reg_rok;
  SEXP Rsh_Fir_reg_rok1_;
  SEXP Rsh_Fir_reg_l12_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_rok3_;
  SEXP Rsh_Fir_reg_l14_;
  SEXP Rsh_Fir_reg_dr18_;
  SEXP Rsh_Fir_reg_dc9_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg_dx20_;
  SEXP Rsh_Fir_reg_ina4_;
  SEXP Rsh_Fir_reg_ina5_;
  SEXP Rsh_Fir_reg_r124_;
  SEXP Rsh_Fir_reg____4_;
  SEXP Rsh_Fir_reg_r125_;
  SEXP Rsh_Fir_reg_na_form1_;
  SEXP Rsh_Fir_reg_na_form2_;
  SEXP Rsh_Fir_reg_l15_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_na_form4_;
  SEXP Rsh_Fir_reg_l17_;
  SEXP Rsh_Fir_reg_dr20_;
  SEXP Rsh_Fir_reg_dc10_;
  SEXP Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_reg_na_form6_;
  SEXP Rsh_Fir_reg_dx22_;
  SEXP Rsh_Fir_reg_ina6_;
  SEXP Rsh_Fir_reg_ina7_;
  SEXP Rsh_Fir_reg____5_;
  SEXP Rsh_Fir_reg_r126_;
  SEXP Rsh_Fir_reg_r127_;
  SEXP Rsh_Fir_reg_r128_;

  // Bind parameters
  Rsh_Fir_reg_pv = PARAMS[0];
  Rsh_Fir_reg_digits = PARAMS[1];
  Rsh_Fir_reg_eps = PARAMS[2];
  Rsh_Fir_reg_na_form = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st pv = pv
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_pv, RHO);
  (void)(Rsh_Fir_reg_pv);
  // digits_isMissing = missing.0(digits)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_digits;
  Rsh_Fir_reg_digits_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args11);
  // if digits_isMissing then L0() else L1(digits)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_digits_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(digits)
    Rsh_Fir_reg_digits_orDefault = Rsh_Fir_reg_digits;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf max;
  //   base = ldf max in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   getOption = ldf getOption;
  //   r2 = dyn getOption("digits");
  //   r3 = `-`(r2, 2);
  //   max = ldf max in base;
  //   r4 = dyn max(1, r3);
  //   goto L0(r4);
  // L2():
  //   r = dyn base(1, <lang `-`(getOption("digits"), 2)>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4169636932_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_digits_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st digits = digits_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_digits_orDefault, RHO);
  (void)(Rsh_Fir_reg_digits_orDefault);
  // eps_isMissing = missing.0(eps)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_eps;
  Rsh_Fir_reg_eps_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args17);
  // if eps_isMissing then L2() else L3(eps)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_eps_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(eps)
    Rsh_Fir_reg_eps_orDefault = Rsh_Fir_reg_eps;
    goto L3_;
  }

L2_:;
  // p1 = prom<V +>{
  //   _Machine = ld `.Machine`;
  //   _Machine1 = force? _Machine;
  //   checkMissing(_Machine1);
  //   c = `is.object`(_Machine1);
  //   if c then L1() else L2(_Machine1);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", _Machine1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(_Machine3):
  //   r6 = `$`(_Machine3, <sym double.eps>);
  //   goto L0(r6);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4169636932_1, 0, NULL, CCP, RHO);
  // goto L3(p1)
  // L3(p1)
  Rsh_Fir_reg_eps_orDefault = Rsh_Fir_reg_p1_1;
  goto L3_;

L3_:;
  // st eps = eps_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_eps_orDefault, RHO);
  (void)(Rsh_Fir_reg_eps_orDefault);
  // na_form_isMissing = missing.0(na_form)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_na_form;
  Rsh_Fir_reg_na_form_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args24);
  // if na_form_isMissing then L4("NA") else L4(na_form)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_na_form_isMissing)) {
  // L4("NA")
    Rsh_Fir_reg_na_form_orDefault = Rsh_const(CCP, 25);
    goto L4_;
  } else {
  // L4(na_form)
    Rsh_Fir_reg_na_form_orDefault = Rsh_Fir_reg_na_form;
    goto L4_;
  }

L4_:;
  // st `na.form` = na_form_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_na_form_orDefault, RHO);
  (void)(Rsh_Fir_reg_na_form_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym1 = ldf any
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base1 = ldf any in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard1 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L5_:;
  // st `has.na` = r9
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r9_1, RHO);
  (void)(Rsh_Fir_reg_r9_1);
  // c1 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r9_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args26);
  // if c1 then L55() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L55()
    goto L55_;
  } else {
  // L7()
    goto L7_;
  }

L48_:;
  // sym2 = ldf `is.na`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base2 = ldf `is.na` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard2 then L50() else L51()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L50()
    goto L50_;
  } else {
  // L51()
    goto L51_;
  }

L49_:;
  // r8 = dyn base1(<lang `<-`(ina, is.na(pv))>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L5(r8)
  // L5(r8)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r8_1;
  goto L5_;

L6_:;
  // st ina = r11
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r11_1, RHO);
  (void)(Rsh_Fir_reg_r11_1);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r13 = dyn any(r11)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L54() else D2()
  // L54()
  goto L54_;

L7_:;
  // goto L9()
  // L9()
  goto L9_;

L9_:;
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L62() else D5()
  // L62()
  goto L62_;

L50_:;
  // pv1 = ld pv
  Rsh_Fir_reg_pv1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L52() else D0()
  // L52()
  goto L52_;

L51_:;
  // r10 = dyn base2(<sym pv>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L6(r10)
  // L6(r10)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r10_1;
  goto L6_;

L55_:;
  // pv3 = ld pv
  Rsh_Fir_reg_pv3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L56() else D3()
  // L56()
  goto L56_;

D0_:;
  // deopt 4 [pv1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_pv1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 10 [r13]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 12 [pv3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_pv3_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L52_:;
  // pv2 = force? pv1
  Rsh_Fir_reg_pv2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pv1_);
  // checkMissing(pv2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_pv2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r12 = dyn is_na(pv2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_pv2_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L53() else D1()
  // L53()
  goto L53_;

L54_:;
  // goto L5(r13)
  // L5(r13)
  Rsh_Fir_reg_r9_1 = Rsh_Fir_reg_r13_1;
  goto L5_;

L56_:;
  // pv4 = force? pv3
  Rsh_Fir_reg_pv4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pv3_);
  // checkMissing(pv4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_pv4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(pv4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_pv4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args34);
  // if c2 then L57() else L58(pv4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L57()
    goto L57_;
  } else {
  // L58(pv4)
    Rsh_Fir_reg_pv6_ = Rsh_Fir_reg_pv4_;
    goto L58_;
  }

L62_:;
  // p2 = prom<V +>{
  //   sym3 = ldf length;
  //   base3 = ldf length in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r17):
  //   return r17;
  // L1():
  //   pv7 = ld pv;
  //   pv8 = force? pv7;
  //   checkMissing(pv8);
  //   eps1 = ld eps;
  //   eps2 = force? eps1;
  //   checkMissing(eps2);
  //   r18 = `<`(pv8, eps2);
  //   st is0 = r18;
  //   length = ldf length in base;
  //   r19 = dyn length(r18);
  //   goto L0(r19);
  // L2():
  //   r16 = dyn base3(<lang `<-`(is0, `<`(pv, eps))>);
  //   goto L0(r16);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4169636932_2, 0, NULL, CCP, RHO);
  // r21 = dyn character(p2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L63() else D6()
  // L63()
  goto L63_;

D1_:;
  // deopt 7 [r12]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 24 [r21]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L8_:;
  // st pv = dx3
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L9()
  // L9()
  goto L9_;

L53_:;
  // goto L6(r12)
  // L6(r12)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r12_;
  goto L6_;

L57_:;
  // dr2 = tryDispatchBuiltin.1("[", pv4)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_pv4_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args42);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc1 then L59() else L58(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L59()
    goto L59_;
  } else {
  // L58(dr2)
    Rsh_Fir_reg_pv6_ = Rsh_Fir_reg_dr2_;
    goto L58_;
  }

L58_:;
  // ina = ld ina
  Rsh_Fir_reg_ina = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L60() else D4()
  // L60()
  goto L60_;

L63_:;
  // st r = r21
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // sym4 = ldf any
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base4 = ldf any in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard4 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

D4_:;
  // deopt 14 [pv6, ina]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_pv6_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_ina;
  Rsh_Fir_deopt(14, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L10_:;
  // c3 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args45);
  // if c3 then L68() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L68()
    goto L68_;
  } else {
  // L11()
    goto L11_;
  }

L59_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L8(dx2)
  // L8(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L8_;

L60_:;
  // ina1 = force? ina
  Rsh_Fir_reg_ina1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ina);
  // checkMissing(ina1)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_ina1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // r14 = `!`(ina1)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_ina1_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args48);
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r15 = dyn __(pv6, r14)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_pv6_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L8(r15)
  // L8(r15)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r15_;
  goto L8_;

L64_:;
  // is0 = ld is0
  Rsh_Fir_reg_is0_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L66() else D7()
  // L66()
  goto L66_;

L65_:;
  // r22 = dyn base4(<lang `!`(is0)>)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L10(r22)
  // L10(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L10_;

D7_:;
  // deopt 28 [is0]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_is0_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L11_:;
  // goto L24()
  // L24()
  goto L24_;

L24_:;
  // sym9 = ldf any
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base9 = ldf any in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard9 then L114() else L115()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L114()
    goto L114_;
  } else {
  // L115()
    goto L115_;
  }

L66_:;
  // is1 = force? is0
  Rsh_Fir_reg_is1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_is0_);
  // checkMissing(is1)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_is1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r24 = `!`(is1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_is1_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args53);
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r25 = dyn any1(r24)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L67() else D8()
  // L67()
  goto L67_;

L68_:;
  // pv9 = ld pv
  Rsh_Fir_reg_pv9_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L69() else D9()
  // L69()
  goto L69_;

D8_:;
  // deopt 32 [r25]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 33 [pv9]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_pv9_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L25_:;
  // c12 = `as.logical`(r75)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args55);
  // if c12 then L118() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L118()
    goto L118_;
  } else {
  // L26()
    goto L26_;
  }

L67_:;
  // goto L10(r25)
  // L10(r25)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r25_;
  goto L10_;

L69_:;
  // pv10 = force? pv9
  Rsh_Fir_reg_pv10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pv9_);
  // checkMissing(pv10)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_pv10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(pv10)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_pv10_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args57);
  // if c4 then L70() else L71(pv10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L70()
    goto L70_;
  } else {
  // L71(pv10)
    Rsh_Fir_reg_pv12_ = Rsh_Fir_reg_pv10_;
    goto L71_;
  }

L114_:;
  // is6 = ld is0
  Rsh_Fir_reg_is6_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L116() else D29()
  // L116()
  goto L116_;

L115_:;
  // r74 = dyn base9(<sym is0>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L25(r74)
  // L25(r74)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r74_;
  goto L25_;

D29_:;
  // deopt 121 [is6]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_is6_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L12_:;
  // st pv = dx6
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx6_, RHO);
  (void)(Rsh_Fir_reg_dx6_);
  // st rr = dx6
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_dx6_, RHO);
  (void)(Rsh_Fir_reg_dx6_);
  // sym5 = ldf floor
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base5 = ldf floor in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard5 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L26_:;
  // goto L43()
  // L43()
  goto L43_;

L43_:;
  // has_na = ld `has.na`
  Rsh_Fir_reg_has_na = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L163() else D49()
  // L163()
  goto L163_;

L70_:;
  // dr4 = tryDispatchBuiltin.1("[", pv10)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_pv10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args60);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if dc2 then L72() else L71(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L72()
    goto L72_;
  } else {
  // L71(dr4)
    Rsh_Fir_reg_pv12_ = Rsh_Fir_reg_dr4_;
    goto L71_;
  }

L71_:;
  // is2 = ld is0
  Rsh_Fir_reg_is2_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L73() else D10()
  // L73()
  goto L73_;

L116_:;
  // is7 = force? is6
  Rsh_Fir_reg_is7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_is6_);
  // checkMissing(is7)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_is7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // any4 = ldf any in base
  Rsh_Fir_reg_any4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r76 = dyn any4(is7)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_is7_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any4_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L117() else D30()
  // L117()
  goto L117_;

L118_:;
  // sym10 = ldf max
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base10 = ldf max in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args64);
  // if guard10 then L119() else L120()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L119()
    goto L119_;
  } else {
  // L120()
    goto L120_;
  }

D10_:;
  // deopt 35 [pv12, is2]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_pv12_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_is2_;
  Rsh_Fir_deopt(35, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 124 [r76]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D49_:;
  // deopt 216 [has_na]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_has_na;
  Rsh_Fir_deopt(216, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L13_:;
  // st expo = r29
  Rsh_Fir_store(Rsh_const(CCP, 43), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // expo = ld expo
  Rsh_Fir_reg_expo = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // check L81() else D14()
  // L81()
  goto L81_;

L27_:;
  // st digits = r78
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r78_, RHO);
  (void)(Rsh_Fir_reg_r78_);
  // sym11 = ldf any
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base11 = ldf any in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args65);
  // if guard11 then L123() else L124()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L123()
    goto L123_;
  } else {
  // L124()
    goto L124_;
  }

L72_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L12(dx5)
  // L12(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L12_;

L73_:;
  // is3 = force? is2
  Rsh_Fir_reg_is3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_is2_);
  // checkMissing(is3)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_is3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // r26 = `!`(is3)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_is3_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args68);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r27 = dyn __1(pv12, r26)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_pv12_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L12(r27)
  // L12(r27)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r27_;
  goto L12_;

L74_:;
  // sym6 = ldf log10
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // base6 = ldf log10 in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard6 then L76() else L77()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L76()
    goto L76_;
  } else {
  // L77()
    goto L77_;
  }

L75_:;
  // r28 = dyn base5(<lang log10(ifelse(`>`(pv, 0.0), pv, 1.0E-50))>)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L13(r28)
  // L13(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L13_;

L117_:;
  // goto L25(r76)
  // L25(r76)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r76_;
  goto L25_;

L119_:;
  // digits7 = ld digits
  Rsh_Fir_reg_digits7_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L121() else D31()
  // L121()
  goto L121_;

L120_:;
  // r77 = dyn base10(1, <lang `-`(digits, 2)>)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L27(r77)
  // L27(r77)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r77_;
  goto L27_;

L163_:;
  // has_na1 = force? has_na
  Rsh_Fir_reg_has_na1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_has_na);
  // checkMissing(has_na1)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_has_na1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // c30 = `as.logical`(has_na1)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_has_na1_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args74);
  // if c30 then L164() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L164()
    goto L164_;
  } else {
  // L44()
    goto L44_;
  }

D14_:;
  // deopt 54 [expo]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_expo;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 128 [digits7]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_digits7_;
  Rsh_Fir_deopt(128, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L14_:;
  // r37 = floor(r31)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(167, RHO, 1, Rsh_Fir_array_args75);
  // goto L13(r37)
  // L13(r37)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r37_;
  goto L13_;

L28_:;
  // c13 = `as.logical`(r82)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args76);
  // if c13 then L127() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L127()
    goto L127_;
  } else {
  // L29()
    goto L29_;
  }

L44_:;
  // goto L47()
  // L47()
  goto L47_;

L47_:;
  // r127 = ld r
  Rsh_Fir_reg_r127_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L179() else D57()
  // L179()
  goto L179_;

L76_:;
  // ifelse = ldf ifelse
  Rsh_Fir_reg_ifelse = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L78() else D11()
  // L78()
  goto L78_;

L77_:;
  // r30 = dyn base6(<lang ifelse(`>`(pv, 0.0), pv, 1.0E-50)>)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 48);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L14(r30)
  // L14(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L14_;

L81_:;
  // expo1 = force? expo
  Rsh_Fir_reg_expo1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expo);
  // checkMissing(expo1)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_expo1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // r38 = `>=`(expo1, -3.0)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_expo1_;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 49);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(78, RHO, 2, Rsh_Fir_array_args79);
  // expo2 = ld expo
  Rsh_Fir_reg_expo2_ = Rsh_Fir_load(Rsh_const(CCP, 43), RHO);
  // check L82() else D15()
  // L82()
  goto L82_;

L121_:;
  // digits8 = force? digits7
  Rsh_Fir_reg_digits8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits7_);
  // checkMissing(digits8)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_digits8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // r79 = `-`(digits8, 2)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_digits8_;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args81);
  // max1 = ldf max in base
  Rsh_Fir_reg_max1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r80 = dyn max1(1, r79)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max1_, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L122() else D32()
  // L122()
  goto L122_;

L123_:;
  // is8 = ld is0
  Rsh_Fir_reg_is8_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L125() else D33()
  // L125()
  goto L125_;

L124_:;
  // r81 = dyn base11(<lang `!`(is0)>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L28(r81)
  // L28(r81)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r81_;
  goto L28_;

L164_:;
  // r117 = ld r
  Rsh_Fir_reg_r117_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L165() else D50()
  // L165()
  goto L165_;

D11_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 57 [r38, expo2]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_expo2_;
  Rsh_Fir_deopt(57, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 133 [r80]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(133, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 137 [is8]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_is8_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D50_:;
  // deopt 218 [r117]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r117_;
  Rsh_Fir_deopt(218, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D57_:;
  // deopt 243 [r127]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r127_;
  Rsh_Fir_deopt(243, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L29_:;
  // digits15 = ld digits
  Rsh_Fir_reg_digits15_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L153() else D45()
  // L153()
  goto L153_;

L39_:;
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // check L156() else D46()
  // L156()
  goto L156_;

L78_:;
  // p3 = prom<V +>{
  //   pv13 = ld pv;
  //   pv14 = force? pv13;
  //   checkMissing(pv14);
  //   r32 = `>`(pv14, 0.0);
  //   return r32;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4169636932_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   pv15 = ld pv;
  //   pv16 = force? pv15;
  //   checkMissing(pv16);
  //   return pv16;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4169636932_4, 0, NULL, CCP, RHO);
  // r35 = dyn ifelse(p3, p4, 1.0E-50)
  SEXP Rsh_Fir_array_args87[3];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args87[2] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names29[3];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ifelse, 3, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L79() else D12()
  // L79()
  goto L79_;

L82_:;
  // expo3 = force? expo2
  Rsh_Fir_reg_expo3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_expo2_);
  // checkMissing(expo3)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_expo3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // r39 = `==`(expo3, -4.0)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_expo3_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 53);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args89);
  // digits1 = ld digits
  Rsh_Fir_reg_digits1_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L83() else D16()
  // L83()
  goto L83_;

L122_:;
  // goto L27(r80)
  // L27(r80)
  Rsh_Fir_reg_r78_ = Rsh_Fir_reg_r80_;
  goto L27_;

L125_:;
  // is9 = force? is8
  Rsh_Fir_reg_is9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_is8_);
  // checkMissing(is9)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_is9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // r83 = `!`(is9)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_is9_;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args91);
  // any5 = ldf any in base
  Rsh_Fir_reg_any5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r84 = dyn any5(r83)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any5_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L126() else D34()
  // L126()
  goto L126_;

L127_:;
  // sym12 = ldf max
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base12 = ldf max in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args93);
  // if guard12 then L128() else L129()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L128()
    goto L128_;
  } else {
  // L129()
    goto L129_;
  }

L165_:;
  // r118 = force? r117
  Rsh_Fir_reg_r118_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r117_);
  // checkMissing(r118)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_r118_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // st rok = r118
  Rsh_Fir_store(Rsh_const(CCP, 54), Rsh_Fir_reg_r118_, RHO);
  (void)(Rsh_Fir_reg_r118_);
  // character1 = ldf character
  Rsh_Fir_reg_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L166() else D51()
  // L166()
  goto L166_;

L179_:;
  // r128 = force? r127
  Rsh_Fir_reg_r128_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_r127_);
  // checkMissing(r128)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_r128_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r128
  return Rsh_Fir_reg_r128_;

D12_:;
  // deopt 49 [r35]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 60 [r38, r39, digits1]
  SEXP Rsh_Fir_array_deopt_stack23[3];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_digits1_;
  Rsh_Fir_deopt(60, 3, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 141 [r84]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D45_:;
  // deopt 193 [digits15]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_digits15_;
  Rsh_Fir_deopt(193, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D46_:;
  // deopt 203 []
  Rsh_Fir_deopt(203, 0, NULL, CCP, RHO);
  return R_NilValue;

D51_:;
  // deopt 222 []
  Rsh_Fir_deopt(222, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // st nc = r86
  Rsh_Fir_store(Rsh_const(CCP, 55), Rsh_Fir_reg_r86_, RHO);
  (void)(Rsh_Fir_reg_r86_);
  // digits9 = ld digits
  Rsh_Fir_reg_digits9_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L135() else D38()
  // L135()
  goto L135_;

L79_:;
  // log10 = ldf log10 in base
  Rsh_Fir_reg_log10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r36 = dyn log10(r35)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_log10_, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L80() else D13()
  // L80()
  goto L80_;

L83_:;
  // digits2 = force? digits1
  Rsh_Fir_reg_digits2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits1_);
  // checkMissing(digits2)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_digits2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // r40 = `>`(digits2, 1.0)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_digits2_;
  Rsh_Fir_array_args98[1] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args98);
  // r41 = `&&`(r39, r40)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args99);
  // r42 = `||`(r38, r41)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args100);
  // st fixp = r42
  Rsh_Fir_store(Rsh_const(CCP, 57), Rsh_Fir_reg_r42_, RHO);
  (void)(Rsh_Fir_reg_r42_);
  // sym7 = ldf any
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base7 = ldf any in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args101);
  // if guard7 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L126_:;
  // goto L28(r84)
  // L28(r84)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r84_;
  goto L28_;

L128_:;
  // sym13 = ldf nchar
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // base13 = ldf nchar in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args102);
  // if guard13 then L130() else L131()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L130()
    goto L130_;
  } else {
  // L131()
    goto L131_;
  }

L129_:;
  // r85 = dyn base12(<lang nchar(rr, type="w")>)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 59);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L30(r85)
  // L30(r85)
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r85_;
  goto L30_;

L153_:;
  // digits16 = force? digits15
  Rsh_Fir_reg_digits16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits15_);
  // checkMissing(digits16)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_digits16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // r103 = `==`(digits16, 1.0)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_digits16_;
  Rsh_Fir_array_args105[1] = Rsh_const(CCP, 56);
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args105);
  // c28 = `as.logical`(r103)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_r103_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args106);
  // if c28 then L154() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L154()
    goto L154_;
  } else {
  // L40()
    goto L40_;
  }

L156_:;
  // p11 = prom<V +>{
  //   format2 = ldf format;
  //   p9 = prom<V +>{
  //     eps3 = ld eps;
  //     eps4 = force? eps3;
  //     checkMissing(eps4);
  //     return eps4;
  //   };
  //   p10 = prom<V +>{
  //     digits17 = ld digits;
  //     digits18 = force? digits17;
  //     checkMissing(digits18);
  //     return digits18;
  //   };
  //   ddd3 = ld `...`;
  //   r107 = dyn format2[, digits, `...`](p9, p10, ddd3);
  //   return r107;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4169636932_5, 0, NULL, CCP, RHO);
  // p12 = prom<V +>{
  //   sep = ld sep;
  //   sep1 = force? sep;
  //   checkMissing(sep1);
  //   return sep1;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4169636932_8, 0, NULL, CCP, RHO);
  // r110 = dyn paste[, , sep]("<", p11, p12)
  SEXP Rsh_Fir_array_args111[3];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args111[2] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names34[3];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = Rsh_const(CCP, 61);
  Rsh_Fir_reg_r110_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 3, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L157() else D47()
  // L157()
  goto L157_;

L166_:;
  // p13 = prom<V +>{
  //   sym15 = ldf length;
  //   base15 = ldf length in base;
  //   guard15 = `==`.4(sym15, base15);
  //   if guard15 then L1() else L2();
  // L0(r120):
  //   return r120;
  // L1():
  //   ina2 = ld ina;
  //   ina3 = force? ina2;
  //   checkMissing(ina3);
  //   length1 = ldf length in base;
  //   r121 = dyn length1(ina3);
  //   goto L0(r121);
  // L2():
  //   r119 = dyn base15(<sym ina>);
  //   goto L0(r119);
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4169636932_9, 0, NULL, CCP, RHO);
  // r123 = dyn character1(p13)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r123_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character1_, 1, Rsh_Fir_array_args116, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L167() else D52()
  // L167()
  goto L167_;

D13_:;
  // deopt 51 [r36]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D38_:;
  // deopt 156 [digits9]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_digits9_;
  Rsh_Fir_deopt(156, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D47_:;
  // deopt 208 [r110]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r110_;
  Rsh_Fir_deopt(208, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D52_:;
  // deopt 224 [r123]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r123_;
  Rsh_Fir_deopt(224, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L15_:;
  // c5 = `as.logical`(r44)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args117);
  // if c5 then L88() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L88()
    goto L88_;
  } else {
  // L16()
    goto L16_;
  }

L31_:;
  // max2 = ldf max in base
  Rsh_Fir_reg_max2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r90 = dyn max2(r88)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max2_, 1, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L134() else D37()
  // L134()
  goto L134_;

L40_:;
  // goto L41(" ")
  // L41(" ")
  Rsh_Fir_reg_r104_ = Rsh_const(CCP, 63);
  goto L41_;

L41_:;
  // st sep = r104
  Rsh_Fir_store(Rsh_const(CCP, 61), Rsh_Fir_reg_r104_, RHO);
  (void)(Rsh_Fir_reg_r104_);
  // goto L39()
  // L39()
  goto L39_;

L80_:;
  // goto L14(r36)
  // L14(r36)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r36_;
  goto L14_;

L84_:;
  // fixp = ld fixp
  Rsh_Fir_reg_fixp = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // check L86() else D17()
  // L86()
  goto L86_;

L85_:;
  // r43 = dyn base7(<sym fixp>)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L15(r43)
  // L15(r43)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L15_;

L130_:;
  // rr7 = ld rr
  Rsh_Fir_reg_rr7_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // check L132() else D35()
  // L132()
  goto L132_;

L131_:;
  // r87 = dyn base13[, type](<sym rr>, "w")
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args120[1] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = Rsh_const(CCP, 65);
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 2, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L31(r87)
  // L31(r87)
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r87_;
  goto L31_;

L135_:;
  // digits10 = force? digits9
  Rsh_Fir_reg_digits10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits9_);
  // checkMissing(digits10)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_digits10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty()));
  // r91 = `>`(digits10, 1)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_digits10_;
  Rsh_Fir_array_args122[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args122);
  // c14 = `as.logical`(r91)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args123);
  // if c14 then L136() else L32(c14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L136()
    goto L136_;
  } else {
  // L32(c14)
    Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c14_;
    goto L32_;
  }

L154_:;
  // goto L41("")
  // L41("")
  Rsh_Fir_reg_r104_ = Rsh_const(CCP, 66);
  goto L41_;

L157_:;
  // l9 = ld r
  Rsh_Fir_reg_l9_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // c29 = `is.object`(l9)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args124);
  // if c29 then L158() else L159(r110, l9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L158()
    goto L158_;
  } else {
  // L159(r110, l9)
    Rsh_Fir_reg_r112_ = Rsh_Fir_reg_r110_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    goto L159_;
  }

L167_:;
  // st r = r123
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_r123_, RHO);
  (void)(Rsh_Fir_reg_r123_);
  // rok = ld rok
  Rsh_Fir_reg_rok = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // check L168() else D53()
  // L168()
  goto L168_;

D17_:;
  // deopt 69 [fixp]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_fixp;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D35_:;
  // deopt 146 [rr7]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_rr7_;
  Rsh_Fir_deopt(146, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D37_:;
  // deopt 154 [r90]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r90_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

D53_:;
  // deopt 226 [rok]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_rok;
  Rsh_Fir_deopt(226, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L16_:;
  // goto L18()
  // L18()
  goto L18_;

L18_:;
  // sym8 = ldf any
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base8 = ldf any in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args125);
  // if guard8 then L96() else L97()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L96()
    goto L96_;
  } else {
  // L97()
    goto L97_;
  }

L32_:;
  // c20 = `as.logical`(c16)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args126);
  // if c20 then L140() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L140()
    goto L140_;
  } else {
  // L33()
    goto L33_;
  }

L42_:;
  // st r = dx18
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_dx18_, RHO);
  (void)(Rsh_Fir_reg_dx18_);
  // goto L43()
  // L43()
  goto L43_;

L86_:;
  // fixp1 = force? fixp
  Rsh_Fir_reg_fixp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fixp);
  // checkMissing(fixp1)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_fixp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // any2 = ldf any in base
  Rsh_Fir_reg_any2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r45 = dyn any2(fixp1)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_fixp1_;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any2_, 1, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L87() else D18()
  // L87()
  goto L87_;

L88_:;
  // format = ldf format
  Rsh_Fir_reg_format = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // check L89() else D19()
  // L89()
  goto L89_;

L132_:;
  // rr8 = force? rr7
  Rsh_Fir_reg_rr8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rr7_);
  // checkMissing(rr8)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_rr8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty()));
  // nchar = ldf nchar in base
  Rsh_Fir_reg_nchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 58), RHO);
  // r89 = dyn nchar(rr8, "w", FALSE, NA_LGL)
  SEXP Rsh_Fir_array_args130[4];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_rr8_;
  Rsh_Fir_array_args130[1] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args130[2] = Rsh_const(CCP, 67);
  Rsh_Fir_array_args130[3] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names42[4];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_array_arg_names42[2] = R_MissingArg;
  Rsh_Fir_array_arg_names42[3] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nchar, 4, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L133() else D36()
  // L133()
  goto L133_;

L134_:;
  // goto L30(r90)
  // L30(r90)
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r90_;
  goto L30_;

L136_:;
  // digits11 = ld digits
  Rsh_Fir_reg_digits11_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L137() else D39()
  // L137()
  goto L137_;

L158_:;
  // dr16 = tryDispatchBuiltin.0("[<-", l9, r110)
  SEXP Rsh_Fir_array_args131[3];
  Rsh_Fir_array_args131[0] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args131[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args131[2] = Rsh_Fir_reg_r110_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args131);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args132, Rsh_Fir_param_types_empty());
  // if dc8 then L160() else L159(r110, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L160()
    goto L160_;
  } else {
  // L159(r110, dr16)
    Rsh_Fir_reg_r112_ = Rsh_Fir_reg_r110_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_dr16_;
    goto L159_;
  }

L159_:;
  // is10 = ld is0
  Rsh_Fir_reg_is10_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L161() else D48()
  // L161()
  goto L161_;

L168_:;
  // rok1 = force? rok
  Rsh_Fir_reg_rok1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rok);
  // checkMissing(rok1)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_rok1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // l12 = ld r
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // c31 = `is.object`(l12)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args134);
  // if c31 then L169() else L170(rok1, l12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L169()
    goto L169_;
  } else {
  // L170(rok1, l12)
    Rsh_Fir_reg_rok3_ = Rsh_Fir_reg_rok1_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l12_;
    goto L170_;
  }

D18_:;
  // deopt 72 [r45]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 74 []
  Rsh_Fir_deopt(74, 0, NULL, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 152 [r89]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(152, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

D39_:;
  // deopt 160 [c14, digits11]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_digits11_;
  Rsh_Fir_deopt(160, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

D48_:;
  // deopt 210 [r112, l11, r110, is10]
  SEXP Rsh_Fir_array_deopt_stack37[4];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r112_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_r110_;
  Rsh_Fir_array_deopt_stack37[3] = Rsh_Fir_reg_is10_;
  Rsh_Fir_deopt(210, 4, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L19_:;
  // c8 = `as.logical`(r57)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args135);
  // if c8 then L100() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L100()
    goto L100_;
  } else {
  // L20()
    goto L20_;
  }

L33_:;
  // goto L35()
  // L35()
  goto L35_;

L35_:;
  // digits13 = ld digits
  Rsh_Fir_reg_digits13_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L146() else D43()
  // L146()
  goto L146_;

L45_:;
  // st r = dx20
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_dx20_, RHO);
  (void)(Rsh_Fir_reg_dx20_);
  // na_form1 = ld `na.form`
  Rsh_Fir_reg_na_form1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L173() else D55()
  // L173()
  goto L173_;

L87_:;
  // goto L15(r45)
  // L15(r45)
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r45_;
  goto L15_;

L89_:;
  // p5 = prom<V +>{
  //   pv17 = ld pv;
  //   pv18 = force? pv17;
  //   checkMissing(pv18);
  //   c6 = `is.object`(pv18);
  //   if c6 then L1() else L2(pv18);
  // L0(dx8):
  //   return dx8;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[", pv18);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(pv20):
  //   fixp2 = ld fixp;
  //   fixp3 = force? fixp2;
  //   __2 = ldf `[` in base;
  //   r46 = dyn __2(pv20, fixp3);
  //   goto L0(r46);
  // L3():
  //   dx7 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx7);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4169636932_10, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   digits3 = ld digits;
  //   digits4 = force? digits3;
  //   checkMissing(digits4);
  //   return digits4;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4169636932_11, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // r49 = dyn format[, digits, `...`](p5, p6, ddd1)
  SEXP Rsh_Fir_array_args143[3];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args143[2] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names44[3];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names44[2] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format, 3, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L90() else D20()
  // L90()
  goto L90_;

L96_:;
  // fixp6 = ld fixp
  Rsh_Fir_reg_fixp6_ = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // check L98() else D22()
  // L98()
  goto L98_;

L97_:;
  // r56 = dyn base8(<lang `!`(fixp)>)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L19(r56)
  // L19(r56)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L19_;

L133_:;
  // goto L31(r89)
  // L31(r89)
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r89_;
  goto L31_;

L137_:;
  // digits12 = force? digits11
  Rsh_Fir_reg_digits12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits11_);
  // checkMissing(digits12)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_digits12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty()));
  // r92 = `+`(digits12, 6)
  SEXP Rsh_Fir_array_args146[2];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_digits12_;
  Rsh_Fir_array_args146[1] = Rsh_const(CCP, 70);
  Rsh_Fir_reg_r92_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args146);
  // nc = ld nc
  Rsh_Fir_reg_nc = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // check L138() else D40()
  // L138()
  goto L138_;

L140_:;
  // sym14 = ldf max
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base14 = ldf max in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args147);
  // if guard14 then L141() else L142()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L141()
    goto L141_;
  } else {
  // L142()
    goto L142_;
  }

L160_:;
  // dx17 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // goto L42(r110, dx17)
  // L42(r110, dx17)
  Rsh_Fir_reg_r114_ = Rsh_Fir_reg_r110_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx17_;
  goto L42_;

L161_:;
  // is11 = force? is10
  Rsh_Fir_reg_is11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_is10_);
  // ___3 = ldf `[<-` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // r115 = dyn ___3(l11, r110, is11)
  SEXP Rsh_Fir_array_args149[3];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_r110_;
  Rsh_Fir_array_args149[2] = Rsh_Fir_reg_is11_;
  SEXP Rsh_Fir_array_arg_names46[3];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_array_arg_names46[1] = R_MissingArg;
  Rsh_Fir_array_arg_names46[2] = R_MissingArg;
  Rsh_Fir_reg_r115_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 3, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L42(r112, r115)
  // L42(r112, r115)
  Rsh_Fir_reg_r114_ = Rsh_Fir_reg_r112_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_r115_;
  goto L42_;

L169_:;
  // dr18 = tryDispatchBuiltin.0("[<-", l12, rok1)
  SEXP Rsh_Fir_array_args150[3];
  Rsh_Fir_array_args150[0] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args150[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args150[2] = Rsh_Fir_reg_rok1_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args150);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty());
  // if dc9 then L171() else L170(rok1, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L171()
    goto L171_;
  } else {
  // L170(rok1, dr18)
    Rsh_Fir_reg_rok3_ = Rsh_Fir_reg_rok1_;
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_dr18_;
    goto L170_;
  }

L170_:;
  // ina4 = ld ina
  Rsh_Fir_reg_ina4_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L172() else D54()
  // L172()
  goto L172_;

D20_:;
  // deopt 79 [r49]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 89 [fixp6]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_fixp6_;
  Rsh_Fir_deopt(89, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D40_:;
  // deopt 163 [c14, r92, nc]
  SEXP Rsh_Fir_array_deopt_stack40[3];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_r92_;
  Rsh_Fir_array_deopt_stack40[2] = Rsh_Fir_reg_nc;
  Rsh_Fir_deopt(163, 3, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

D43_:;
  // deopt 179 [digits13]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_digits13_;
  Rsh_Fir_deopt(179, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

D54_:;
  // deopt 229 [rok3, l14, rok1, ina4]
  SEXP Rsh_Fir_array_deopt_stack42[4];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_rok3_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_rok1_;
  Rsh_Fir_array_deopt_stack42[3] = Rsh_Fir_reg_ina4_;
  Rsh_Fir_deopt(229, 4, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

D55_:;
  // deopt 234 [na_form1]
  SEXP Rsh_Fir_array_deopt_stack43[1];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_na_form1_;
  Rsh_Fir_deopt(234, 1, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L22()
  // L22()
  goto L22_;

L22_:;
  // rr = ld rr
  Rsh_Fir_reg_rr = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // check L108() else D27()
  // L108()
  goto L108_;

L34_:;
  // st digits = r95
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r95_, RHO);
  (void)(Rsh_Fir_reg_r95_);
  // goto L35()
  // L35()
  goto L35_;

L90_:;
  // l = ld rr
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // c7 = `is.object`(l)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args152);
  // if c7 then L91() else L92(r49, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L91()
    goto L91_;
  } else {
  // L92(r49, l)
    Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r49_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L92_;
  }

L98_:;
  // fixp7 = force? fixp6
  Rsh_Fir_reg_fixp7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fixp6_);
  // checkMissing(fixp7)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_fixp7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty()));
  // r58 = `!`(fixp7)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_fixp7_;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args154);
  // any3 = ldf any in base
  Rsh_Fir_reg_any3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r59 = dyn any3(r58)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any3_, 1, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L99() else D23()
  // L99()
  goto L99_;

L100_:;
  // format1 = ldf format
  Rsh_Fir_reg_format1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // check L101() else D24()
  // L101()
  goto L101_;

L138_:;
  // nc1 = force? nc
  Rsh_Fir_reg_nc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc);
  // checkMissing(nc1)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_nc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // r93 = `>`(r92, nc1)
  SEXP Rsh_Fir_array_args157[2];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_array_args157[1] = Rsh_Fir_reg_nc1_;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args157);
  // c17 = `as.logical`(r93)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args158);
  // c18 = `&&`(c14, c17)
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_args159[1] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args159);
  // goto L32(c18)
  // L32(c18)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c18_;
  goto L32_;

L141_:;
  // nc2 = ld nc
  Rsh_Fir_reg_nc2_ = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // check L143() else D41()
  // L143()
  goto L143_;

L142_:;
  // r94 = dyn base14(1, <lang `-`(nc, 7)>)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args160[1] = Rsh_const(CCP, 72);
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 2, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L34(r94)
  // L34(r94)
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r94_;
  goto L34_;

L146_:;
  // digits14 = force? digits13
  Rsh_Fir_reg_digits14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits13_);
  // checkMissing(digits14)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_digits14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty()));
  // r99 = `==`(digits14, 1)
  SEXP Rsh_Fir_array_args162[2];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_digits14_;
  Rsh_Fir_array_args162[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args162);
  // c21 = `as.logical`(r99)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_r99_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args163);
  // if c21 then L147() else L36(c21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L147()
    goto L147_;
  } else {
  // L36(c21)
    Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c21_;
    goto L36_;
  }

L171_:;
  // dx19 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty());
  // goto L45(dx19)
  // L45(dx19)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx19_;
  goto L45_;

L172_:;
  // ina5 = force? ina4
  Rsh_Fir_reg_ina5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ina4_);
  // checkMissing(ina5)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_ina5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args165, Rsh_Fir_param_types_empty()));
  // r124 = `!`(ina5)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_ina5_;
  Rsh_Fir_reg_r124_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args166);
  // ___4 = ldf `[<-` in base
  Rsh_Fir_reg____4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // r125 = dyn ___4(l14, rok1, r124)
  SEXP Rsh_Fir_array_args167[3];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_rok1_;
  Rsh_Fir_array_args167[2] = Rsh_Fir_reg_r124_;
  SEXP Rsh_Fir_array_arg_names49[3];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_array_arg_names49[1] = R_MissingArg;
  Rsh_Fir_array_arg_names49[2] = R_MissingArg;
  Rsh_Fir_reg_r125_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____4_, 3, Rsh_Fir_array_args167, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L45(r125)
  // L45(r125)
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_r125_;
  goto L45_;

L173_:;
  // na_form2 = force? na_form1
  Rsh_Fir_reg_na_form2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_form1_);
  // checkMissing(na_form2)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_na_form2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty()));
  // l15 = ld r
  Rsh_Fir_reg_l15_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // c32 = `is.object`(l15)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args169);
  // if c32 then L174() else L175(na_form2, l15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L174()
    goto L174_;
  } else {
  // L175(na_form2, l15)
    Rsh_Fir_reg_na_form4_ = Rsh_Fir_reg_na_form2_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l15_;
    goto L175_;
  }

D23_:;
  // deopt 93 [r59]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 95 []
  Rsh_Fir_deopt(95, 0, NULL, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 109 [rr]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_rr;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

D41_:;
  // deopt 170 [nc2]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_nc2_;
  Rsh_Fir_deopt(170, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L17_:;
  // st rr = dx10
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_dx10_, RHO);
  (void)(Rsh_Fir_reg_dx10_);
  // goto L18()
  // L18()
  goto L18_;

L36_:;
  // c27 = `as.logical`(c23)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args170);
  // if c27 then L150() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L150()
    goto L150_;
  } else {
  // L37()
    goto L37_;
  }

L46_:;
  // st r = dx22
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_dx22_, RHO);
  (void)(Rsh_Fir_reg_dx22_);
  // goto L47()
  // L47()
  goto L47_;

L91_:;
  // dr8 = tryDispatchBuiltin.0("[<-", l, r49)
  SEXP Rsh_Fir_array_args171[3];
  Rsh_Fir_array_args171[0] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args171[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args171[2] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args171);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty());
  // if dc4 then L93() else L92(r49, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L93()
    goto L93_;
  } else {
  // L92(r49, dr8)
    Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r49_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr8_;
    goto L92_;
  }

L92_:;
  // fixp4 = ld fixp
  Rsh_Fir_reg_fixp4_ = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // check L94() else D21()
  // L94()
  goto L94_;

L99_:;
  // goto L19(r59)
  // L19(r59)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r59_;
  goto L19_;

L101_:;
  // p7 = prom<V +>{
  //   pv21 = ld pv;
  //   pv22 = force? pv21;
  //   checkMissing(pv22);
  //   c9 = `is.object`(pv22);
  //   if c9 then L1() else L2(pv22);
  // L0(dx12):
  //   return dx12;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("[", pv22);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(pv24):
  //   fixp8 = ld fixp;
  //   fixp9 = force? fixp8;
  //   checkMissing(fixp9);
  //   r60 = `!`(fixp9);
  //   __3 = ldf `[` in base;
  //   r61 = dyn __3(pv24, r60);
  //   goto L0(r61);
  // L3():
  //   dx11 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx11);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4169636932_12, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   digits5 = ld digits;
  //   digits6 = force? digits5;
  //   checkMissing(digits6);
  //   return digits6;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4169636932_13, 0, NULL, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // r64 = dyn format1[, digits, `...`](p7, p8, ddd2)
  SEXP Rsh_Fir_array_args182[3];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args182[2] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names51[3];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names51[2] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format1_, 3, Rsh_Fir_array_args182, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L102() else D25()
  // L102()
  goto L102_;

L108_:;
  // rr1 = force? rr
  Rsh_Fir_reg_rr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rr);
  // checkMissing(rr1)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_rr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty()));
  // l6 = ld r
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // c11 = `is.object`(l6)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args184);
  // if c11 then L109() else L110(rr1, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L109()
    goto L109_;
  } else {
  // L110(rr1, l6)
    Rsh_Fir_reg_rr3_ = Rsh_Fir_reg_rr1_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L110_;
  }

L143_:;
  // nc3 = force? nc2
  Rsh_Fir_reg_nc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc2_);
  // checkMissing(nc3)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_nc3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty()));
  // r96 = `-`(nc3, 7)
  SEXP Rsh_Fir_array_args186[2];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_nc3_;
  Rsh_Fir_array_args186[1] = Rsh_const(CCP, 73);
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args186);
  // max3 = ldf max in base
  Rsh_Fir_reg_max3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r97 = dyn max3(1, r96)
  SEXP Rsh_Fir_array_args187[2];
  Rsh_Fir_array_args187[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args187[1] = Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_array_arg_names52[2];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max3_, 2, Rsh_Fir_array_args187, Rsh_Fir_array_arg_names52, CCP, RHO);
  // check L144() else D42()
  // L144()
  goto L144_;

L147_:;
  // nc4 = ld nc
  Rsh_Fir_reg_nc4_ = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // check L148() else D44()
  // L148()
  goto L148_;

L174_:;
  // dr20 = tryDispatchBuiltin.0("[<-", l15, na_form2)
  SEXP Rsh_Fir_array_args188[3];
  Rsh_Fir_array_args188[0] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args188[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args188[2] = Rsh_Fir_reg_na_form2_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args188);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty());
  // if dc10 then L176() else L175(na_form2, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L176()
    goto L176_;
  } else {
  // L175(na_form2, dr20)
    Rsh_Fir_reg_na_form4_ = Rsh_Fir_reg_na_form2_;
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_dr20_;
    goto L175_;
  }

L175_:;
  // ina6 = ld ina
  Rsh_Fir_reg_ina6_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L177() else D56()
  // L177()
  goto L177_;

D21_:;
  // deopt 81 [r51, l2, r49, fixp4]
  SEXP Rsh_Fir_array_deopt_stack47[4];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_deopt_stack47[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack47[2] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_deopt_stack47[3] = Rsh_Fir_reg_fixp4_;
  Rsh_Fir_deopt(81, 4, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 100 [r64]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(100, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

D42_:;
  // deopt 175 [r97]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_deopt(175, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

D44_:;
  // deopt 183 [c21, nc4]
  SEXP Rsh_Fir_array_deopt_stack50[2];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_deopt_stack50[1] = Rsh_Fir_reg_nc4_;
  Rsh_Fir_deopt(183, 2, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

D56_:;
  // deopt 237 [na_form4, l17, na_form2, ina6]
  SEXP Rsh_Fir_array_deopt_stack51[4];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_na_form4_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_deopt_stack51[2] = Rsh_Fir_reg_na_form2_;
  Rsh_Fir_array_deopt_stack51[3] = Rsh_Fir_reg_ina6_;
  Rsh_Fir_deopt(237, 4, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

L23_:;
  // st r = dx16
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_dx16_, RHO);
  (void)(Rsh_Fir_reg_dx16_);
  // goto L24()
  // L24()
  goto L24_;

L37_:;
  // goto L38(" ")
  // L38(" ")
  Rsh_Fir_reg_r101_ = Rsh_const(CCP, 63);
  goto L38_;

L38_:;
  // st sep = r101
  Rsh_Fir_store(Rsh_const(CCP, 61), Rsh_Fir_reg_r101_, RHO);
  (void)(Rsh_Fir_reg_r101_);
  // goto L39()
  // L39()
  goto L39_;

L93_:;
  // dx9 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty());
  // goto L17(r49, dx9)
  // L17(r49, dx9)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L17_;

L94_:;
  // fixp5 = force? fixp4
  Rsh_Fir_reg_fixp5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fixp4_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // r54 = dyn ___(l2, r49, fixp5)
  SEXP Rsh_Fir_array_args191[3];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args191[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_array_args191[2] = Rsh_Fir_reg_fixp5_;
  SEXP Rsh_Fir_array_arg_names53[3];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_array_arg_names53[2] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args191, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L17(r51, r54)
  // L17(r51, r54)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r54_;
  goto L17_;

L102_:;
  // l3 = ld rr
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // c10 = `is.object`(l3)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args192);
  // if c10 then L103() else L104(r64, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L103()
    goto L103_;
  } else {
  // L104(r64, l3)
    Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r64_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L104_;
  }

L109_:;
  // dr14 = tryDispatchBuiltin.0("[<-", l6, rr1)
  SEXP Rsh_Fir_array_args193[3];
  Rsh_Fir_array_args193[0] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args193[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args193[2] = Rsh_Fir_reg_rr1_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args193);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args194, Rsh_Fir_param_types_empty());
  // if dc7 then L111() else L110(rr1, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L111()
    goto L111_;
  } else {
  // L110(rr1, dr14)
    Rsh_Fir_reg_rr3_ = Rsh_Fir_reg_rr1_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr14_;
    goto L110_;
  }

L110_:;
  // is4 = ld is0
  Rsh_Fir_reg_is4_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // check L112() else D28()
  // L112()
  goto L112_;

L144_:;
  // goto L34(r97)
  // L34(r97)
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r97_;
  goto L34_;

L148_:;
  // nc5 = force? nc4
  Rsh_Fir_reg_nc5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nc4_);
  // checkMissing(nc5)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_nc5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty()));
  // r100 = `<=`(nc5, 6)
  SEXP Rsh_Fir_array_args196[2];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_nc5_;
  Rsh_Fir_array_args196[1] = Rsh_const(CCP, 70);
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_builtin(77, RHO, 2, Rsh_Fir_array_args196);
  // c24 = `as.logical`(r100)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args197);
  // c25 = `&&`(c21, c24)
  SEXP Rsh_Fir_array_args198[2];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_args198[1] = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args198);
  // goto L36(c25)
  // L36(c25)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c25_;
  goto L36_;

L150_:;
  // goto L38("")
  // L38("")
  Rsh_Fir_reg_r101_ = Rsh_const(CCP, 66);
  goto L38_;

L176_:;
  // dx21 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args199, Rsh_Fir_param_types_empty());
  // goto L46(na_form2, dx21)
  // L46(na_form2, dx21)
  Rsh_Fir_reg_na_form6_ = Rsh_Fir_reg_na_form2_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx21_;
  goto L46_;

L177_:;
  // ina7 = force? ina6
  Rsh_Fir_reg_ina7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ina6_);
  // ___5 = ldf `[<-` in base
  Rsh_Fir_reg____5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // r126 = dyn ___5(l17, na_form2, ina7)
  SEXP Rsh_Fir_array_args200[3];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_args200[1] = Rsh_Fir_reg_na_form2_;
  Rsh_Fir_array_args200[2] = Rsh_Fir_reg_ina7_;
  SEXP Rsh_Fir_array_arg_names54[3];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_array_arg_names54[2] = R_MissingArg;
  Rsh_Fir_reg_r126_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____5_, 3, Rsh_Fir_array_args200, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L46(na_form4, r126)
  // L46(na_form4, r126)
  Rsh_Fir_reg_na_form6_ = Rsh_Fir_reg_na_form4_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_r126_;
  goto L46_;

D28_:;
  // deopt 112 [rr3, l8, rr1, is4]
  SEXP Rsh_Fir_array_deopt_stack52[4];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_rr3_;
  Rsh_Fir_array_deopt_stack52[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack52[2] = Rsh_Fir_reg_rr1_;
  Rsh_Fir_array_deopt_stack52[3] = Rsh_Fir_reg_is4_;
  Rsh_Fir_deopt(112, 4, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L21_:;
  // st rr = dx14
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_dx14_, RHO);
  (void)(Rsh_Fir_reg_dx14_);
  // goto L22()
  // L22()
  goto L22_;

L103_:;
  // dr12 = tryDispatchBuiltin.0("[<-", l3, r64)
  SEXP Rsh_Fir_array_args201[3];
  Rsh_Fir_array_args201[0] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args201[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args201[2] = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args201);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty());
  // if dc6 then L105() else L104(r64, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L105()
    goto L105_;
  } else {
  // L104(r64, dr12)
    Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r64_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr12_;
    goto L104_;
  }

L104_:;
  // fixp10 = ld fixp
  Rsh_Fir_reg_fixp10_ = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // check L106() else D26()
  // L106()
  goto L106_;

L111_:;
  // dx15 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args203, Rsh_Fir_param_types_empty());
  // goto L23(rr1, dx15)
  // L23(rr1, dx15)
  Rsh_Fir_reg_rr5_ = Rsh_Fir_reg_rr1_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx15_;
  goto L23_;

L112_:;
  // is5 = force? is4
  Rsh_Fir_reg_is5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_is4_);
  // checkMissing(is5)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_is5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty()));
  // r72 = `!`(is5)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_is5_;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args205);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // r73 = dyn ___2(l8, rr1, r72)
  SEXP Rsh_Fir_array_args206[3];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args206[1] = Rsh_Fir_reg_rr1_;
  Rsh_Fir_array_args206[2] = Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_array_arg_names55[3];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_array_arg_names55[2] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args206, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L23(rr3, r73)
  // L23(rr3, r73)
  Rsh_Fir_reg_rr5_ = Rsh_Fir_reg_rr3_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_r73_;
  goto L23_;

D26_:;
  // deopt 102 [r66, l5, r64, fixp10]
  SEXP Rsh_Fir_array_deopt_stack53[4];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_deopt_stack53[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack53[2] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_deopt_stack53[3] = Rsh_Fir_reg_fixp10_;
  Rsh_Fir_deopt(102, 4, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L105_:;
  // dx13 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args207, Rsh_Fir_param_types_empty());
  // goto L21(r64, dx13)
  // L21(r64, dx13)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx13_;
  goto L21_;

L106_:;
  // fixp11 = force? fixp10
  Rsh_Fir_reg_fixp11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fixp10_);
  // checkMissing(fixp11)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_fixp11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty()));
  // r69 = `!`(fixp11)
  SEXP Rsh_Fir_array_args209[1];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_fixp11_;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args209);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 71), RHO);
  // r70 = dyn ___1(l5, r64, r69)
  SEXP Rsh_Fir_array_args210[3];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args210[1] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_args210[2] = Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_array_arg_names56[3];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_array_arg_names56[1] = R_MissingArg;
  Rsh_Fir_array_arg_names56[2] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args210, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L21(r66, r70)
  // L21(r66, r70)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_r70_;
  goto L21_;
}
SEXP Rsh_Fir_user_promise_inner4169636932_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_getOption;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_max;
  SEXP Rsh_Fir_reg_r4_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4169636932/0: expected 0, got %d", NCAPTURES);

  // sym = ldf max
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base = ldf max in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_1;

L1_:;
  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // r2 = dyn getOption("digits")
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names8, CCP, RHO);
  // r3 = `-`(r2, 2)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args14);
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r4 = dyn max(1, r3)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r4_1;
  goto L0_;

L2_:;
  // r = dyn base(1, <lang `-`(getOption("digits"), 2)>)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4169636932_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__Machine;
  SEXP Rsh_Fir_reg__Machine1_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg__Machine3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r6_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4169636932/0: expected 0, got %d", NCAPTURES);

  // _Machine = ld `.Machine`
  Rsh_Fir_reg__Machine = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // _Machine1 = force? _Machine
  Rsh_Fir_reg__Machine1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Machine);
  // checkMissing(_Machine1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg__Machine1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // c = `is.object`(_Machine1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args19);
  // if c then L1() else L2(_Machine1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L1()
    goto L1_;
  } else {
  // L2(_Machine1)
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg__Machine1_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", _Machine1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args20);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r6 = `$`(_Machine3, <sym double.eps>)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg__Machine3_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args22);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r6_1;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4169636932_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_pv7_;
  SEXP Rsh_Fir_reg_pv8_;
  SEXP Rsh_Fir_reg_eps1_;
  SEXP Rsh_Fir_reg_eps2_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4169636932/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r17
  return Rsh_Fir_reg_r17_;

L1_:;
  // pv7 = ld pv
  Rsh_Fir_reg_pv7_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // pv8 = force? pv7
  Rsh_Fir_reg_pv8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pv7_);
  // checkMissing(pv8)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_pv8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // eps1 = ld eps
  Rsh_Fir_reg_eps1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // eps2 = force? eps1
  Rsh_Fir_reg_eps2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eps1_);
  // checkMissing(eps2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_eps2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // r18 = `<`(pv8, eps2)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_pv8_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_eps2_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args38);
  // st is0 = r18
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r19 = dyn length(r18)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r19_;
  goto L0_;

L2_:;
  // r16 = dyn base3(<lang `<-`(is0, `<`(pv, eps))>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4169636932_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_pv13_;
  SEXP Rsh_Fir_reg_pv14_;
  SEXP Rsh_Fir_reg_r32_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4169636932/0: expected 0, got %d", NCAPTURES);

  // pv13 = ld pv
  Rsh_Fir_reg_pv13_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // pv14 = force? pv13
  Rsh_Fir_reg_pv14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pv13_);
  // checkMissing(pv14)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_pv14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // r32 = `>`(pv14, 0.0)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_pv14_;
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 51);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args85);
  // return r32
  return Rsh_Fir_reg_r32_;
}
SEXP Rsh_Fir_user_promise_inner4169636932_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_pv15_;
  SEXP Rsh_Fir_reg_pv16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4169636932/0: expected 0, got %d", NCAPTURES);

  // pv15 = ld pv
  Rsh_Fir_reg_pv15_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // pv16 = force? pv15
  Rsh_Fir_reg_pv16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pv15_);
  // checkMissing(pv16)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_pv16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // return pv16
  return Rsh_Fir_reg_pv16_;
}
SEXP Rsh_Fir_user_promise_inner4169636932_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_format2_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_ddd3_;
  SEXP Rsh_Fir_reg_r107_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4169636932/0: expected 0, got %d", NCAPTURES);

  // format2 = ldf format
  Rsh_Fir_reg_format2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // p9 = prom<V +>{
  //   eps3 = ld eps;
  //   eps4 = force? eps3;
  //   checkMissing(eps4);
  //   return eps4;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4169636932_6, 0, NULL, CCP, RHO);
  // p10 = prom<V +>{
  //   digits17 = ld digits;
  //   digits18 = force? digits17;
  //   checkMissing(digits18);
  //   return digits18;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4169636932_7, 0, NULL, CCP, RHO);
  // ddd3 = ld `...`
  Rsh_Fir_reg_ddd3_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // r107 = dyn format2[, digits, `...`](p9, p10, ddd3)
  SEXP Rsh_Fir_array_args109[3];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args109[2] = Rsh_Fir_reg_ddd3_;
  SEXP Rsh_Fir_array_arg_names33[3];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names33[2] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format2_, 3, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names33, CCP, RHO);
  // return r107
  return Rsh_Fir_reg_r107_;
}
SEXP Rsh_Fir_user_promise_inner4169636932_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_eps3_;
  SEXP Rsh_Fir_reg_eps4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4169636932/0: expected 0, got %d", NCAPTURES);

  // eps3 = ld eps
  Rsh_Fir_reg_eps3_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // eps4 = force? eps3
  Rsh_Fir_reg_eps4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_eps3_);
  // checkMissing(eps4)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_eps4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // return eps4
  return Rsh_Fir_reg_eps4_;
}
SEXP Rsh_Fir_user_promise_inner4169636932_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_digits17_;
  SEXP Rsh_Fir_reg_digits18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4169636932/0: expected 0, got %d", NCAPTURES);

  // digits17 = ld digits
  Rsh_Fir_reg_digits17_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // digits18 = force? digits17
  Rsh_Fir_reg_digits18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits17_);
  // checkMissing(digits18)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_digits18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // return digits18
  return Rsh_Fir_reg_digits18_;
}
SEXP Rsh_Fir_user_promise_inner4169636932_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sep;
  SEXP Rsh_Fir_reg_sep1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4169636932/0: expected 0, got %d", NCAPTURES);

  // sep = ld sep
  Rsh_Fir_reg_sep = Rsh_Fir_load(Rsh_const(CCP, 61), RHO);
  // sep1 = force? sep
  Rsh_Fir_reg_sep1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sep);
  // checkMissing(sep1)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_sep1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // return sep1
  return Rsh_Fir_reg_sep1_;
}
SEXP Rsh_Fir_user_promise_inner4169636932_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r119_;
  SEXP Rsh_Fir_reg_r120_;
  SEXP Rsh_Fir_reg_ina2_;
  SEXP Rsh_Fir_reg_ina3_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r121_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4169636932/0: expected 0, got %d", NCAPTURES);

  // sym15 = ldf length
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base15 = ldf length in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args112);
  // if guard15 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r120
  return Rsh_Fir_reg_r120_;

L1_:;
  // ina2 = ld ina
  Rsh_Fir_reg_ina2_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // ina3 = force? ina2
  Rsh_Fir_reg_ina3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ina2_);
  // checkMissing(ina3)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_ina3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r121 = dyn length1(ina3)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_ina3_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L0(r121)
  // L0(r121)
  Rsh_Fir_reg_r120_ = Rsh_Fir_reg_r121_;
  goto L0_;

L2_:;
  // r119 = dyn base15(<sym ina>)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L0(r119)
  // L0(r119)
  Rsh_Fir_reg_r120_ = Rsh_Fir_reg_r119_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4169636932_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_pv17_;
  SEXP Rsh_Fir_reg_pv18_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_pv20_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_fixp2_;
  SEXP Rsh_Fir_reg_fixp3_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r46_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4169636932/0: expected 0, got %d", NCAPTURES);

  // pv17 = ld pv
  Rsh_Fir_reg_pv17_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // pv18 = force? pv17
  Rsh_Fir_reg_pv18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pv17_);
  // checkMissing(pv18)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_pv18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(pv18)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_pv18_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args137);
  // if c6 then L1() else L2(pv18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L1()
    goto L1_;
  } else {
  // L2(pv18)
    Rsh_Fir_reg_pv20_ = Rsh_Fir_reg_pv18_;
    goto L2_;
  }

L0_:;
  // return dx8
  return Rsh_Fir_reg_dx8_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[", pv18)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_pv18_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args138);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_pv20_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // fixp2 = ld fixp
  Rsh_Fir_reg_fixp2_ = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // fixp3 = force? fixp2
  Rsh_Fir_reg_fixp3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fixp2_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r46 = dyn __2(pv20, fixp3)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_pv20_;
  Rsh_Fir_array_args140[1] = Rsh_Fir_reg_fixp3_;
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L0(r46)
  // L0(r46)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_r46_;
  goto L0_;

L3_:;
  // dx7 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // goto L0(dx7)
  // L0(dx7)
  Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx7_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4169636932_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_digits3_;
  SEXP Rsh_Fir_reg_digits4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4169636932/0: expected 0, got %d", NCAPTURES);

  // digits3 = ld digits
  Rsh_Fir_reg_digits3_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // digits4 = force? digits3
  Rsh_Fir_reg_digits4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits3_);
  // checkMissing(digits4)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_digits4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // return digits4
  return Rsh_Fir_reg_digits4_;
}
SEXP Rsh_Fir_user_promise_inner4169636932_12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_pv21_;
  SEXP Rsh_Fir_reg_pv22_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_pv24_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_fixp8_;
  SEXP Rsh_Fir_reg_fixp9_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r61_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4169636932/0: expected 0, got %d", NCAPTURES);

  // pv21 = ld pv
  Rsh_Fir_reg_pv21_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // pv22 = force? pv21
  Rsh_Fir_reg_pv22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pv21_);
  // checkMissing(pv22)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_pv22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(pv22)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_pv22_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args174);
  // if c9 then L1() else L2(pv22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L1()
    goto L1_;
  } else {
  // L2(pv22)
    Rsh_Fir_reg_pv24_ = Rsh_Fir_reg_pv22_;
    goto L2_;
  }

L0_:;
  // return dx12
  return Rsh_Fir_reg_dx12_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("[", pv22)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_pv22_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args175);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args176[1];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_pv24_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // fixp8 = ld fixp
  Rsh_Fir_reg_fixp8_ = Rsh_Fir_load(Rsh_const(CCP, 57), RHO);
  // fixp9 = force? fixp8
  Rsh_Fir_reg_fixp9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fixp8_);
  // checkMissing(fixp9)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_fixp9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty()));
  // r60 = `!`(fixp9)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_fixp9_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args178);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 39), RHO);
  // r61 = dyn __3(pv24, r60)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_pv24_;
  Rsh_Fir_array_args179[1] = Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_array_arg_names50[2];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args179, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L0(r61)
  // L0(r61)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_r61_;
  goto L0_;

L3_:;
  // dx11 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty());
  // goto L0(dx11)
  // L0(dx11)
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx11_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4169636932_13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_digits5_;
  SEXP Rsh_Fir_reg_digits6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4169636932/0: expected 0, got %d", NCAPTURES);

  // digits5 = ld digits
  Rsh_Fir_reg_digits5_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // digits6 = force? digits5
  Rsh_Fir_reg_digits6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits5_);
  // checkMissing(digits6)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_digits6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty()));
  // return digits6
  return Rsh_Fir_reg_digits6_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
