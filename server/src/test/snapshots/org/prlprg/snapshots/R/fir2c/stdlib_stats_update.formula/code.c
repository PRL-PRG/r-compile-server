#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner149914737_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner149914737_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner149914737_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner149914737_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner149914737_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner149914737_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_update;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_update1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_update2_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r15_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner149914737
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner149914737_, RHO, CCP);
  // st `update.formula` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // update = ldf update
  Rsh_Fir_reg_update = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   __ = ldf `~` in base;
  //   r1 = dyn __(<sym y>, <sym x>);
  //   return r1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   __1 = ldf `~` in base;
  //   r3 = dyn __1(<lang `+`(., x2)>);
  //   return r3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r5 = dyn update(p, p1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_update, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // update1 = ldf update
  Rsh_Fir_reg_update1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p2 = prom<V +>{
  //   __2 = ldf `~` in base;
  //   r6 = dyn __2(<sym y>, <sym x>);
  //   return r6;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   __3 = ldf `~` in base;
  //   r8 = dyn __3(<lang log(.)>, <sym .>);
  //   return r8;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r10 = dyn update1(p2, p3)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_update1_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 12 [r10]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // update2 = ldf update
  Rsh_Fir_reg_update2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p4 = prom<V +>{
  //   __4 = ldf `~` in base;
  //   r11 = dyn __4(<sym .>, <lang `+`(u, v)>);
  //   return r11;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   __5 = ldf `~` in base;
  //   r13 = dyn __5(<sym res>, <sym .>);
  //   return r13;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r15 = dyn update2(p4, p5)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_update2_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 17 [r15]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `~` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r1 = dyn __(<sym y>, <sym x>)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __1 = ldf `~` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r3 = dyn __1(<lang `+`(., x2)>)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r3
  return Rsh_Fir_reg_r3_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __2 = ldf `~` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r6 = dyn __2(<sym y>, <sym x>)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names3, CCP, RHO);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __3 = ldf `~` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r8 = dyn __3(<lang log(.)>, <sym .>)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __4 = ldf `~` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r11 = dyn __4(<sym .>, <lang `+`(u, v)>)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r11
  return Rsh_Fir_reg_r11_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __5 = ldf `~` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r13 = dyn __5(<sym res>, <sym .>)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names7, CCP, RHO);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_function_inner149914737_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner149914737 dynamic dispatch ([old, new, `...`])

  return Rsh_Fir_user_version_inner149914737_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner149914737_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner149914737 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner149914737/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_old;
  SEXP Rsh_Fir_reg_new;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_C_updateform;
  SEXP Rsh_Fir_reg_C_updateform1_;
  SEXP Rsh_Fir_reg_as_formula;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_as_formula1_;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_vargs;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_formula;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r10_1;

  // Bind parameters
  Rsh_Fir_reg_old = PARAMS[0];
  Rsh_Fir_reg_new = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st old = old
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_old, RHO);
  (void)(Rsh_Fir_reg_old);
  // st new = new
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_new, RHO);
  (void)(Rsh_Fir_reg_new);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf `.Call`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base = ldf `.Call` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // st tmp = r1
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // formula = ldf formula
  Rsh_Fir_reg_formula = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

L1_:;
  // C_updateform = ld C_updateform
  Rsh_Fir_reg_C_updateform = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
  // r = dyn base(<sym C_updateform>, <lang as.formula(old)>, <lang as.formula(new)>)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 1 [C_updateform]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_C_updateform;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // C_updateform1 = force? C_updateform
  Rsh_Fir_reg_C_updateform1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_updateform);
  // checkMissing(C_updateform1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_C_updateform1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // as_formula = ldf `as.formula`
  Rsh_Fir_reg_as_formula = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

L8_:;
  // p3 = prom<V +>{
  //   terms_formula = ldf `terms.formula`;
  //   p2 = prom<V +>{
  //     tmp = ld tmp;
  //     tmp1 = force? tmp;
  //     checkMissing(tmp1);
  //     return tmp1;
  //   };
  //   r8 = dyn terms_formula[, simplify](p2, TRUE);
  //   return r8;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner149914737_, 0, NULL, CCP, RHO);
  // r10 = dyn formula(p3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_formula, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

D1_:;
  // deopt 3 [C_updateform1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_C_updateform1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 14 [r10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L4_:;
  // p = prom<V +>{
  //   old1 = ld old;
  //   old2 = force? old1;
  //   checkMissing(old2);
  //   return old2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner149914737_2, 0, NULL, CCP, RHO);
  // r3 = dyn as_formula(p)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_formula, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r10
  return Rsh_Fir_reg_r10_1;

D2_:;
  // deopt 5 [C_updateform1, r3]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_C_updateform1_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L5_:;
  // as_formula1 = ldf `as.formula`
  Rsh_Fir_reg_as_formula1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 6 [C_updateform1, r3]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_C_updateform1_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(6, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L6_:;
  // p1 = prom<V +>{
  //   new1 = ld new;
  //   new2 = force? new1;
  //   checkMissing(new2);
  //   return new2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner149914737_3, 0, NULL, CCP, RHO);
  // r5 = dyn as_formula1(p1)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_formula1_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 8 [C_updateform1, r3, r5]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_C_updateform1_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(8, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L7_:;
  // vargs = dots[r3, r5]
  SEXP Rsh_Fir_array_vector_values[2];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_array_vector_names[2];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 2, Rsh_Fir_array_vector_values, NULL);
  // r6 = `.Call`(C_updateform1, vargs, <missing>)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_C_updateform1_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_builtin(438, RHO, 3, Rsh_Fir_array_args19);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r6_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner149914737_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_terms_formula;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r8_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner149914737/0: expected 0, got %d", NCAPTURES);

  // terms_formula = ldf `terms.formula`
  Rsh_Fir_reg_terms_formula = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // p2 = prom<V +>{
  //   tmp = ld tmp;
  //   tmp1 = force? tmp;
  //   checkMissing(tmp1);
  //   return tmp1;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner149914737_1, 0, NULL, CCP, RHO);
  // r8 = dyn terms_formula[, simplify](p2, TRUE)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_terms_formula, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names10, CCP, RHO);
  // return r8
  return Rsh_Fir_reg_r8_1;
}
SEXP Rsh_Fir_user_promise_inner149914737_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tmp;
  SEXP Rsh_Fir_reg_tmp1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner149914737/0: expected 0, got %d", NCAPTURES);

  // tmp = ld tmp
  Rsh_Fir_reg_tmp = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // tmp1 = force? tmp
  Rsh_Fir_reg_tmp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tmp);
  // checkMissing(tmp1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_tmp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return tmp1
  return Rsh_Fir_reg_tmp1_;
}
SEXP Rsh_Fir_user_promise_inner149914737_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_old1_;
  SEXP Rsh_Fir_reg_old2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner149914737/0: expected 0, got %d", NCAPTURES);

  // old1 = ld old
  Rsh_Fir_reg_old1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // old2 = force? old1
  Rsh_Fir_reg_old2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_old1_);
  // checkMissing(old2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_old2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return old2
  return Rsh_Fir_reg_old2_;
}
SEXP Rsh_Fir_user_promise_inner149914737_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_new1_;
  SEXP Rsh_Fir_reg_new2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner149914737/0: expected 0, got %d", NCAPTURES);

  // new1 = ld new
  Rsh_Fir_reg_new1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // new2 = force? new1
  Rsh_Fir_reg_new2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_new1_);
  // checkMissing(new2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_new2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return new2
  return Rsh_Fir_reg_new2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
