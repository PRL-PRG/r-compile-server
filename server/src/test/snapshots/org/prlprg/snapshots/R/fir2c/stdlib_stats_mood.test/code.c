#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  SEXP Rsh_Fir_reg_mood_test;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r9_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2044426018
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2044426018_, RHO, CCP);
  // st `mood.test` = r
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
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // st ramsay = r2
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
  // if guard1 then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L2_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r3 = dyn c(111.0, 107.0, 100.0, 99.0, 102.0, 106.0, 109.0, 108.0, 104.0, 99.0, 101.0, 96.0, 97.0, 102.0, 107.0, 113.0, 116.0, 113.0, 110.0, 98.0)
  SEXP Rsh_Fir_array_args2[20];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[3] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[4] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[5] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args2[6] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args2[7] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args2[8] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args2[9] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[10] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args2[11] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args2[12] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args2[13] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[14] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[15] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args2[16] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args2[17] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args2[18] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args2[19] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names[20];
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
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 20, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // r1 = dyn base(111.0, 107.0, 100.0, 99.0, 102.0, 106.0, 109.0, 108.0, 104.0, 99.0, 101.0, 96.0, 97.0, 102.0, 107.0, 113.0, 116.0, 113.0, 110.0, 98.0)
  SEXP Rsh_Fir_array_args3[20];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args3[3] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args3[4] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args3[5] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args3[6] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args3[7] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args3[8] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args3[9] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args3[10] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args3[11] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args3[12] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args3[13] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args3[14] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[15] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args3[16] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args3[17] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args3[18] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args3[19] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names1[20];
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
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 20, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D0_:;
  // deopt 26 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st `jung.parekh` = r5
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // mood_test = ldf `mood.test`
  Rsh_Fir_reg_mood_test = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

L4_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L5_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r6 = dyn c1(107.0, 108.0, 106.0, 98.0, 105.0, 103.0, 110.0, 105.0, 104.0, 100.0, 96.0, 108.0, 103.0, 104.0, 114.0, 114.0, 113.0, 108.0, 106.0, 99.0)
  SEXP Rsh_Fir_array_args4[20];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args4[3] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args4[4] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args4[5] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args4[6] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args4[7] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args4[8] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args4[9] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args4[10] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args4[11] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args4[12] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args4[13] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args4[14] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args4[15] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args4[16] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args4[17] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args4[18] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args4[19] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[20];
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
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 20, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

L6_:;
  // r4 = dyn base1(107.0, 108.0, 106.0, 98.0, 105.0, 103.0, 110.0, 105.0, 104.0, 100.0, 96.0, 108.0, 103.0, 104.0, 114.0, 114.0, 113.0, 108.0, 106.0, 99.0)
  SEXP Rsh_Fir_array_args5[20];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args5[3] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args5[4] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args5[5] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args5[6] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args5[7] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args5[8] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args5[9] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args5[10] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args5[11] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args5[12] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args5[13] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args5[14] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args5[15] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args5[16] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args5[17] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args5[18] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args5[19] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names3[20];
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
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 20, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L1_;

D1_:;
  // deopt 51 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 54 []
  Rsh_Fir_deopt(54, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L1(r6)
  // L1(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L1_;

L8_:;
  // p = prom<V +>{
  //   ramsay = ld ramsay;
  //   ramsay1 = force? ramsay;
  //   checkMissing(ramsay1);
  //   return ramsay1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   jung_parekh = ld `jung.parekh`;
  //   jung_parekh1 = force? jung_parekh;
  //   checkMissing(jung_parekh1);
  //   return jung_parekh1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r9 = dyn mood_test(p, p1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_mood_test, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 57 [r9]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r9
  return Rsh_Fir_reg_r9_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ramsay;
  SEXP Rsh_Fir_reg_ramsay1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ramsay = ld ramsay
  Rsh_Fir_reg_ramsay = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // ramsay1 = force? ramsay
  Rsh_Fir_reg_ramsay1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ramsay);
  // checkMissing(ramsay1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_ramsay1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return ramsay1
  return Rsh_Fir_reg_ramsay1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_jung_parekh;
  SEXP Rsh_Fir_reg_jung_parekh1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // jung_parekh = ld `jung.parekh`
  Rsh_Fir_reg_jung_parekh = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // jung_parekh1 = force? jung_parekh
  Rsh_Fir_reg_jung_parekh1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_jung_parekh);
  // checkMissing(jung_parekh1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_jung_parekh1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return jung_parekh1
  return Rsh_Fir_reg_jung_parekh1_;
}
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2044426018 dynamic dispatch ([x, `...`])

  return Rsh_Fir_user_version_inner2044426018_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2044426018 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2044426018/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_UseMethod;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
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
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r2 = dyn UseMethod("mood.test")
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base("mood.test")
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
