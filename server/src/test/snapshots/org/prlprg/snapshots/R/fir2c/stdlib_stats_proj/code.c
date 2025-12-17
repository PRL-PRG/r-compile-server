#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner64320599_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner64320599_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_data_frame;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_aov;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_proj;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_options;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_aov1_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_proj1_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r42_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner64320599
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner64320599_, RHO, CCP);
  // st proj = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L0_:;
  // st N = r2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L4_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r3 = dyn c(0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0)
  SEXP Rsh_Fir_array_args2[24];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[4] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[5] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[6] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[7] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[8] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[9] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[10] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[11] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[12] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[13] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[14] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[15] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[16] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[17] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[18] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[19] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[20] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[21] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[22] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[23] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[24];
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
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 24, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r1 = dyn base(0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0)
  SEXP Rsh_Fir_array_args3[24];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[3] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[4] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[5] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[6] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[7] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[8] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[9] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[10] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[11] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[12] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[13] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[14] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[15] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[16] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[17] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[18] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[19] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[20] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[21] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[22] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[23] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[24];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_array_arg_names1[5] = R_MissingArg;
  Rsh_Fir_array_arg_names1[6] = R_MissingArg;
  Rsh_Fir_array_arg_names1[7] = R_MissingArg;
  Rsh_Fir_array_arg_names1[8] = R_MissingArg;
  Rsh_Fir_array_arg_names1[9] = R_MissingArg;
  Rsh_Fir_array_arg_names1[10] = R_MissingArg;
  Rsh_Fir_array_arg_names1[11] = R_MissingArg;
  Rsh_Fir_array_arg_names1[12] = R_MissingArg;
  Rsh_Fir_array_arg_names1[13] = R_MissingArg;
  Rsh_Fir_array_arg_names1[14] = R_MissingArg;
  Rsh_Fir_array_arg_names1[15] = R_MissingArg;
  Rsh_Fir_array_arg_names1[16] = R_MissingArg;
  Rsh_Fir_array_arg_names1[17] = R_MissingArg;
  Rsh_Fir_array_arg_names1[18] = R_MissingArg;
  Rsh_Fir_array_arg_names1[19] = R_MissingArg;
  Rsh_Fir_array_arg_names1[20] = R_MissingArg;
  Rsh_Fir_array_arg_names1[21] = R_MissingArg;
  Rsh_Fir_array_arg_names1[22] = R_MissingArg;
  Rsh_Fir_array_arg_names1[23] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 24, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D0_:;
  // deopt 30 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st P = r5
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard2 then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L6_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L7_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r6 = dyn c1(1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0)
  SEXP Rsh_Fir_array_args5[24];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args5[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args5[4] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args5[5] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args5[6] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args5[7] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args5[8] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args5[9] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args5[10] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args5[11] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args5[12] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args5[13] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args5[14] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args5[15] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args5[16] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args5[17] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args5[18] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args5[19] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args5[20] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args5[21] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args5[22] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args5[23] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names2[24];
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
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 24, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

L8_:;
  // r4 = dyn base1(1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0)
  SEXP Rsh_Fir_array_args6[24];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args6[3] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args6[4] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args6[5] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args6[6] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args6[7] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args6[8] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args6[9] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args6[10] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args6[11] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args6[12] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args6[13] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args6[14] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args6[15] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args6[16] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args6[17] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args6[18] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args6[19] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args6[20] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args6[21] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args6[22] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args6[23] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names3[24];
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
  Rsh_Fir_array_arg_names3[14] = R_MissingArg;
  Rsh_Fir_array_arg_names3[15] = R_MissingArg;
  Rsh_Fir_array_arg_names3[16] = R_MissingArg;
  Rsh_Fir_array_arg_names3[17] = R_MissingArg;
  Rsh_Fir_array_arg_names3[18] = R_MissingArg;
  Rsh_Fir_array_arg_names3[19] = R_MissingArg;
  Rsh_Fir_array_arg_names3[20] = R_MissingArg;
  Rsh_Fir_array_arg_names3[21] = R_MissingArg;
  Rsh_Fir_array_arg_names3[22] = R_MissingArg;
  Rsh_Fir_array_arg_names3[23] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 24, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L1_;

D1_:;
  // deopt 59 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2_:;
  // st K = r8
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard3 then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L9_:;
  // goto L1(r6)
  // L1(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L1_;

L10_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r9 = dyn c2(1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0)
  SEXP Rsh_Fir_array_args8[24];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args8[4] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args8[5] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args8[6] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args8[7] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args8[8] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args8[9] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args8[10] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args8[11] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args8[12] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args8[13] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args8[14] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args8[15] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args8[16] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args8[17] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args8[18] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args8[19] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args8[20] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args8[21] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args8[22] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args8[23] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names4[24];
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
  Rsh_Fir_array_arg_names4[15] = R_MissingArg;
  Rsh_Fir_array_arg_names4[16] = R_MissingArg;
  Rsh_Fir_array_arg_names4[17] = R_MissingArg;
  Rsh_Fir_array_arg_names4[18] = R_MissingArg;
  Rsh_Fir_array_arg_names4[19] = R_MissingArg;
  Rsh_Fir_array_arg_names4[20] = R_MissingArg;
  Rsh_Fir_array_arg_names4[21] = R_MissingArg;
  Rsh_Fir_array_arg_names4[22] = R_MissingArg;
  Rsh_Fir_array_arg_names4[23] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 24, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

L11_:;
  // r7 = dyn base2(1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0)
  SEXP Rsh_Fir_array_args9[24];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args9[3] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args9[4] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args9[5] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args9[6] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args9[7] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args9[8] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args9[9] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args9[10] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args9[11] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args9[12] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args9[13] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args9[14] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args9[15] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args9[16] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args9[17] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args9[18] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args9[19] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args9[20] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args9[21] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args9[22] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args9[23] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names5[24];
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
  Rsh_Fir_array_arg_names5[15] = R_MissingArg;
  Rsh_Fir_array_arg_names5[16] = R_MissingArg;
  Rsh_Fir_array_arg_names5[17] = R_MissingArg;
  Rsh_Fir_array_arg_names5[18] = R_MissingArg;
  Rsh_Fir_array_arg_names5[19] = R_MissingArg;
  Rsh_Fir_array_arg_names5[20] = R_MissingArg;
  Rsh_Fir_array_arg_names5[21] = R_MissingArg;
  Rsh_Fir_array_arg_names5[22] = R_MissingArg;
  Rsh_Fir_array_arg_names5[23] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 24, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L2_;

D2_:;
  // deopt 88 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L3_:;
  // st yield = r11
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // data_frame = ldf `data.frame`
  Rsh_Fir_reg_data_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

L12_:;
  // goto L2(r9)
  // L2(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L2_;

L13_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r12 = dyn c3(49.5, 62.8, 46.8, 57.0, 59.8, 58.5, 55.5, 56.0, 62.8, 55.8, 69.5, 55.0, 62.0, 48.8, 45.5, 44.2, 52.0, 51.5, 49.8, 48.8, 57.2, 59.0, 53.2, 56.0)
  SEXP Rsh_Fir_array_args10[24];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args10[3] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args10[4] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args10[5] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args10[6] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args10[7] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args10[8] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args10[9] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args10[10] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args10[11] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args10[12] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args10[13] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args10[14] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args10[15] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args10[16] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args10[17] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args10[18] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args10[19] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args10[20] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args10[21] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args10[22] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args10[23] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names6[24];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = R_MissingArg;
  Rsh_Fir_array_arg_names6[4] = R_MissingArg;
  Rsh_Fir_array_arg_names6[5] = R_MissingArg;
  Rsh_Fir_array_arg_names6[6] = R_MissingArg;
  Rsh_Fir_array_arg_names6[7] = R_MissingArg;
  Rsh_Fir_array_arg_names6[8] = R_MissingArg;
  Rsh_Fir_array_arg_names6[9] = R_MissingArg;
  Rsh_Fir_array_arg_names6[10] = R_MissingArg;
  Rsh_Fir_array_arg_names6[11] = R_MissingArg;
  Rsh_Fir_array_arg_names6[12] = R_MissingArg;
  Rsh_Fir_array_arg_names6[13] = R_MissingArg;
  Rsh_Fir_array_arg_names6[14] = R_MissingArg;
  Rsh_Fir_array_arg_names6[15] = R_MissingArg;
  Rsh_Fir_array_arg_names6[16] = R_MissingArg;
  Rsh_Fir_array_arg_names6[17] = R_MissingArg;
  Rsh_Fir_array_arg_names6[18] = R_MissingArg;
  Rsh_Fir_array_arg_names6[19] = R_MissingArg;
  Rsh_Fir_array_arg_names6[20] = R_MissingArg;
  Rsh_Fir_array_arg_names6[21] = R_MissingArg;
  Rsh_Fir_array_arg_names6[22] = R_MissingArg;
  Rsh_Fir_array_arg_names6[23] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 24, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

L14_:;
  // r10 = dyn base3(49.5, 62.8, 46.8, 57.0, 59.8, 58.5, 55.5, 56.0, 62.8, 55.8, 69.5, 55.0, 62.0, 48.8, 45.5, 44.2, 52.0, 51.5, 49.8, 48.8, 57.2, 59.0, 53.2, 56.0)
  SEXP Rsh_Fir_array_args11[24];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args11[3] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args11[4] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args11[5] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args11[6] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args11[7] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args11[8] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args11[9] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args11[10] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args11[11] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args11[12] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args11[13] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args11[14] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args11[15] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args11[16] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args11[17] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args11[18] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args11[19] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args11[20] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args11[21] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args11[22] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args11[23] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names7[24];
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
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 24, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L3_;

D3_:;
  // deopt 117 [r12]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 120 []
  Rsh_Fir_deopt(120, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L3(r12)
  // L3(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L3_;

L16_:;
  // p = prom<V +>{
  //   gl = ldf gl;
  //   r13 = dyn gl(6.0, 4.0);
  //   return r13;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   factor = ldf factor;
  //   p1 = prom<V +>{
  //     N = ld N;
  //     N1 = force? N;
  //     checkMissing(N1);
  //     return N1;
  //   };
  //   r16 = dyn factor(p1);
  //   return r16;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   factor1 = ldf factor;
  //   p3 = prom<V +>{
  //     P = ld P;
  //     P1 = force? P;
  //     checkMissing(P1);
  //     return P1;
  //   };
  //   r19 = dyn factor1(p3);
  //   return r19;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   factor2 = ldf factor;
  //   p5 = prom<V +>{
  //     K = ld K;
  //     K1 = force? K;
  //     checkMissing(K1);
  //     return K1;
  //   };
  //   r22 = dyn factor2(p5);
  //   return r22;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   yield = ld yield;
  //   yield1 = force? yield;
  //   checkMissing(yield1);
  //   return yield1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r25 = dyn data_frame[block, N, P, K, yield](p, p2, p4, p6, p7)
  SEXP Rsh_Fir_array_args20[5];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args20[2] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args20[3] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args20[4] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names12[5];
  Rsh_Fir_array_arg_names12[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_arg_names12[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_arg_names12[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names12[3] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names12[4] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_data_frame, 5, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L17() else D5()
  // L17()
  goto L17_;

D5_:;
  // deopt 131 [r25]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(131, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L17_:;
  // st npk = r25
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // aov = ldf aov
  Rsh_Fir_reg_aov = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L18() else D6()
  // L18()
  goto L18_;

D6_:;
  // deopt 134 []
  Rsh_Fir_deopt(134, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p8 = prom<V +>{
  //   __ = ldf `~` in base;
  //   r26 = dyn __(<sym yield>, <lang `+`(block, `*`(`*`(N, P), K))>);
  //   return r26;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   npk = ld npk;
  //   npk1 = force? npk;
  //   checkMissing(npk1);
  //   return npk1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r29 = dyn aov(p8, p9)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_aov, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L19() else D7()
  // L19()
  goto L19_;

D7_:;
  // deopt 137 [r29]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L19_:;
  // st `npk.aov` = r29
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // proj = ldf proj
  Rsh_Fir_reg_proj = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L20() else D8()
  // L20()
  goto L20_;

D8_:;
  // deopt 140 []
  Rsh_Fir_deopt(140, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p10 = prom<V +>{
  //   npk_aov = ld `npk.aov`;
  //   npk_aov1 = force? npk_aov;
  //   checkMissing(npk_aov1);
  //   return npk_aov1;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r31 = dyn proj(p10)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_proj, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L21() else D9()
  // L21()
  goto L21_;

D9_:;
  // deopt 142 [r31]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(142, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L21_:;
  // options = ldf options
  Rsh_Fir_reg_options = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // check L22() else D10()
  // L22()
  goto L22_;

D10_:;
  // deopt 144 []
  Rsh_Fir_deopt(144, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p11 = prom<V +>{
  //   sym4 = ldf c;
  //   base4 = ldf c in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r33):
  //   return r33;
  // L1():
  //   c4 = ldf c in base;
  //   r34 = dyn c4("contr.helmert", "contr.treatment");
  //   goto L0(r34);
  // L2():
  //   r32 = dyn base4("contr.helmert", "contr.treatment");
  //   goto L0(r32);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r36 = dyn options[contrasts](p11)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_options, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L23() else D11()
  // L23()
  goto L23_;

D11_:;
  // deopt 147 [r36]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(147, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L23_:;
  // aov1 = ldf aov
  Rsh_Fir_reg_aov1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L24() else D12()
  // L24()
  goto L24_;

D12_:;
  // deopt 149 []
  Rsh_Fir_deopt(149, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p12 = prom<V +>{
  //   __1 = ldf `~` in base;
  //   r37 = dyn __1(<sym yield>, <lang `+`(`*`(`*`(N, P), K), Error(block))>);
  //   return r37;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   npk2 = ld npk;
  //   npk3 = force? npk2;
  //   checkMissing(npk3);
  //   return npk3;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // r40 = dyn aov1(p12, p13)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_aov1_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L25() else D13()
  // L25()
  goto L25_;

D13_:;
  // deopt 152 [r40]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(152, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L25_:;
  // st `npk.aovE` = r40
  Rsh_Fir_store(Rsh_const(CCP, 45), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // proj1 = ldf proj
  Rsh_Fir_reg_proj1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L26() else D14()
  // L26()
  goto L26_;

D14_:;
  // deopt 155 []
  Rsh_Fir_deopt(155, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p14 = prom<V +>{
  //   npk_aovE = ld `npk.aovE`;
  //   npk_aovE1 = force? npk_aovE;
  //   checkMissing(npk_aovE1);
  //   return npk_aovE1;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // r42 = dyn proj1(p14)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_proj1_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L27() else D15()
  // L27()
  goto L27_;

D15_:;
  // deopt 157 [r42]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_deopt(157, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L27_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r42
  return Rsh_Fir_reg_r42_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gl;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // gl = ldf gl
  Rsh_Fir_reg_gl = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // r13 = dyn gl(6.0, 4.0)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args12[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gl, 2, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names8, CCP, RHO);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_factor;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // factor = ldf factor
  Rsh_Fir_reg_factor = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // p1 = prom<V +>{
  //   N = ld N;
  //   N1 = force? N;
  //   checkMissing(N1);
  //   return N1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r16 = dyn factor(p1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names9, CCP, RHO);
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_N;
  SEXP Rsh_Fir_reg_N1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // N = ld N
  Rsh_Fir_reg_N = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // N1 = force? N
  Rsh_Fir_reg_N1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N);
  // checkMissing(N1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_N1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return N1
  return Rsh_Fir_reg_N1_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_factor1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // factor1 = ldf factor
  Rsh_Fir_reg_factor1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // p3 = prom<V +>{
  //   P = ld P;
  //   P1 = force? P;
  //   checkMissing(P1);
  //   return P1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r19 = dyn factor1(p3)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor1_, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names10, CCP, RHO);
  // return r19
  return Rsh_Fir_reg_r19_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_P;
  SEXP Rsh_Fir_reg_P1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // P = ld P
  Rsh_Fir_reg_P = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // P1 = force? P
  Rsh_Fir_reg_P1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_P);
  // checkMissing(P1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_P1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return P1
  return Rsh_Fir_reg_P1_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_factor2_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r22_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // factor2 = ldf factor
  Rsh_Fir_reg_factor2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // p5 = prom<V +>{
  //   K = ld K;
  //   K1 = force? K;
  //   checkMissing(K1);
  //   return K1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r22 = dyn factor2(p5)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_factor2_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names11, CCP, RHO);
  // return r22
  return Rsh_Fir_reg_r22_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_K;
  SEXP Rsh_Fir_reg_K1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // K = ld K
  Rsh_Fir_reg_K = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // K1 = force? K
  Rsh_Fir_reg_K1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_K);
  // checkMissing(K1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_K1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return K1
  return Rsh_Fir_reg_K1_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_yield;
  SEXP Rsh_Fir_reg_yield1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // yield = ld yield
  Rsh_Fir_reg_yield = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // yield1 = force? yield
  Rsh_Fir_reg_yield1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yield);
  // checkMissing(yield1)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_yield1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return yield1
  return Rsh_Fir_reg_yield1_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r26_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `~` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r26 = dyn __(<sym yield>, <lang `+`(block, `*`(`*`(N, P), K))>)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names13, CCP, RHO);
  // return r26
  return Rsh_Fir_reg_r26_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_npk;
  SEXP Rsh_Fir_reg_npk1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // npk = ld npk
  Rsh_Fir_reg_npk = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // npk1 = force? npk
  Rsh_Fir_reg_npk1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_npk);
  // checkMissing(npk1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_npk1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return npk1
  return Rsh_Fir_reg_npk1_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_npk_aov;
  SEXP Rsh_Fir_reg_npk_aov1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // npk_aov = ld `npk.aov`
  Rsh_Fir_reg_npk_aov = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // npk_aov1 = force? npk_aov
  Rsh_Fir_reg_npk_aov1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_npk_aov);
  // checkMissing(npk_aov1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_npk_aov1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return npk_aov1
  return Rsh_Fir_reg_npk_aov1_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r34_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r33
  return Rsh_Fir_reg_r33_;

L1_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r34 = dyn c4("contr.helmert", "contr.treatment")
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L0_;

L2_:;
  // r32 = dyn base4("contr.helmert", "contr.treatment")
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r32)
  // L0(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r37_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __1 = ldf `~` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 37), RHO);
  // r37 = dyn __1(<sym yield>, <lang `+`(`*`(`*`(N, P), K), Error(block))>)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names19, CCP, RHO);
  // return r37
  return Rsh_Fir_reg_r37_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_npk2_;
  SEXP Rsh_Fir_reg_npk3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // npk2 = ld npk
  Rsh_Fir_reg_npk2_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // npk3 = force? npk2
  Rsh_Fir_reg_npk3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_npk2_);
  // checkMissing(npk3)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_npk3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return npk3
  return Rsh_Fir_reg_npk3_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_npk_aovE;
  SEXP Rsh_Fir_reg_npk_aovE1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // npk_aovE = ld `npk.aovE`
  Rsh_Fir_reg_npk_aovE = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // npk_aovE1 = force? npk_aovE
  Rsh_Fir_reg_npk_aovE1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_npk_aovE);
  // checkMissing(npk_aovE1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_npk_aovE1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return npk_aovE1
  return Rsh_Fir_reg_npk_aovE1_;
}
SEXP Rsh_Fir_user_function_inner64320599_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner64320599 dynamic dispatch ([object, `...`])

  return Rsh_Fir_user_version_inner64320599_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner64320599_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner64320599 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner64320599/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_object;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_UseMethod;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_object = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st object = object
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_object, RHO);
  (void)(Rsh_Fir_reg_object);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args35);
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
  return Rsh_Fir_reg_r1_1;

L1_:;
  // UseMethod = ldf UseMethod in base
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r2 = dyn UseMethod("proj")
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base("proj")
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
