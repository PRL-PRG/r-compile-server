#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2290263485_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2290263485_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2290263485_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2290263485_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_agrep;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_agrep1_;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_agrep2_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_agrep3_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_agrep4_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r25_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2290263485
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2290263485_, RHO, CCP);
  // st agrep = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // agrep = ldf agrep
  Rsh_Fir_reg_agrep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r1 = dyn agrep("lasy", "1 lazy 2")
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_agrep, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // agrep1 = ldf agrep
  Rsh_Fir_reg_agrep1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r3):
  //   return r3;
  // L1():
  //   c = ldf c in base;
  //   r4 = dyn c(" 1 lazy 2", "1 lasy 2");
  //   goto L0(r4);
  // L2():
  //   r2 = dyn base(" 1 lazy 2", "1 lasy 2");
  //   goto L0(r2);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   sym1 = ldf list;
  //   base1 = ldf list in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r7):
  //   return r7;
  // L1():
  //   list = ldf list in base;
  //   r8 = dyn list(0.0);
  //   goto L0(r8);
  // L2():
  //   r6 = dyn base1[sub](0.0);
  //   goto L0(r6);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r10 = dyn agrep1[, , `max.distance`]("lasy", p, p1)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args7[2] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_agrep1_, 3, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 14 [r10]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // agrep2 = ldf agrep
  Rsh_Fir_reg_agrep2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 16 []
  Rsh_Fir_deopt(16, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p2 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r12):
  //   return r12;
  // L1():
  //   c1 = ldf c in base;
  //   r13 = dyn c1("1 lazy", "1", "1 LAZY");
  //   goto L0(r13);
  // L2():
  //   r11 = dyn base2("1 lazy", "1", "1 LAZY");
  //   goto L0(r11);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r15 = dyn agrep2[, , `max.distance`]("laysy", p2, 2.0)
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_agrep2_, 3, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 21 [r15]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // agrep3 = ldf agrep
  Rsh_Fir_reg_agrep3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p3 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r17):
  //   return r17;
  // L1():
  //   c2 = ldf c in base;
  //   r18 = dyn c2("1 lazy", "1", "1 LAZY");
  //   goto L0(r18);
  // L2():
  //   r16 = dyn base3("1 lazy", "1", "1 LAZY");
  //   goto L0(r16);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r20 = dyn agrep3[, , `max.distance`, value]("laysy", p3, 2.0, TRUE)
  SEXP Rsh_Fir_array_args15[4];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args15[3] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names11[4];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names11[3] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_agrep3_, 4, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 30 [r20]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // agrep4 = ldf agrep
  Rsh_Fir_reg_agrep4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L8() else D8()
  // L8()
  goto L8_;

D8_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p4 = prom<V +>{
  //   sym4 = ldf c;
  //   base4 = ldf c in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r22):
  //   return r22;
  // L1():
  //   c3 = ldf c in base;
  //   r23 = dyn c3("1 lazy", "1", "1 LAZY");
  //   goto L0(r23);
  // L2():
  //   r21 = dyn base4("1 lazy", "1", "1 LAZY");
  //   goto L0(r21);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r25 = dyn agrep4[, , `max.distance`, `ignore.case`]("laysy", p4, 2.0, TRUE)
  SEXP Rsh_Fir_array_args19[4];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args19[3] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names14[4];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names14[3] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_agrep4_, 4, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L9() else D9()
  // L9()
  goto L9_;

D9_:;
  // deopt 39 [r25]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r25
  return Rsh_Fir_reg_r25_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r3
  return Rsh_Fir_reg_r3_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r4 = dyn c(" 1 lazy 2", "1 lasy 2")
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L0_;

L2_:;
  // r2 = dyn base(" 1 lazy 2", "1 lasy 2")
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf list
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r7
  return Rsh_Fir_reg_r7_;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r8 = dyn list(0.0)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L0_;

L2_:;
  // r6 = dyn base1[sub](0.0)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r12
  return Rsh_Fir_reg_r12_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r13 = dyn c1("1 lazy", "1", "1 LAZY")
  SEXP Rsh_Fir_array_args9[3];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args9[2] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 3, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L0_;

L2_:;
  // r11 = dyn base2("1 lazy", "1", "1 LAZY")
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
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
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r18 = dyn c2("1 lazy", "1", "1 LAZY")
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 3, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L0_;

L2_:;
  // r16 = dyn base3("1 lazy", "1", "1 LAZY")
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 3, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r23_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r22
  return Rsh_Fir_reg_r22_;

L1_:;
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r23 = dyn c3("1 lazy", "1", "1 LAZY")
  SEXP Rsh_Fir_array_args17[3];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 3, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r23_;
  goto L0_;

L2_:;
  // r21 = dyn base4("1 lazy", "1", "1 LAZY")
  SEXP Rsh_Fir_array_args18[3];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 3, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r21)
  // L0(r21)
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner2290263485_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2290263485 dynamic dispatch ([pattern, x, `max.distance`, costs, `ignore.case`, value, fixed, useBytes])

  return Rsh_Fir_user_version_inner2290263485_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2290263485_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2290263485 version 0 (*, *, *, *, *, *, *, * -+> V)

  if (NPARAMS != 8) Rsh_error("FIŘ arity mismatch for inner2290263485/0: expected 8, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_pattern;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_max_distance;
  SEXP Rsh_Fir_reg_costs;
  SEXP Rsh_Fir_reg_ignore_case;
  SEXP Rsh_Fir_reg_value;
  SEXP Rsh_Fir_reg_fixed;
  SEXP Rsh_Fir_reg_useBytes;
  SEXP Rsh_Fir_reg_max_distance_isMissing;
  SEXP Rsh_Fir_reg_max_distance_orDefault;
  SEXP Rsh_Fir_reg_costs_isMissing;
  SEXP Rsh_Fir_reg_costs_orDefault;
  SEXP Rsh_Fir_reg_ignore_case_isMissing;
  SEXP Rsh_Fir_reg_ignore_case_orDefault;
  SEXP Rsh_Fir_reg_value_isMissing;
  SEXP Rsh_Fir_reg_value_orDefault;
  SEXP Rsh_Fir_reg_fixed_isMissing;
  SEXP Rsh_Fir_reg_fixed_orDefault;
  SEXP Rsh_Fir_reg_useBytes_isMissing;
  SEXP Rsh_Fir_reg_useBytes_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_pattern1_;
  SEXP Rsh_Fir_reg_pattern2_;
  SEXP Rsh_Fir_reg_as_character;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_as_character1_;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg__amatch_costs;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_as_integer;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg__amatch_bounds;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_reg_sym4_1;
  SEXP Rsh_Fir_reg_base4_1;
  SEXP Rsh_Fir_reg_guard4_1;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_pattern3_;
  SEXP Rsh_Fir_reg_pattern4_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_ignore_case1_;
  SEXP Rsh_Fir_reg_ignore_case2_;
  SEXP Rsh_Fir_reg_value1_;
  SEXP Rsh_Fir_reg_value2_;
  SEXP Rsh_Fir_reg_costs3_;
  SEXP Rsh_Fir_reg_costs4_;
  SEXP Rsh_Fir_reg_bounds;
  SEXP Rsh_Fir_reg_bounds1_;
  SEXP Rsh_Fir_reg_useBytes1_;
  SEXP Rsh_Fir_reg_useBytes2_;
  SEXP Rsh_Fir_reg_fixed1_;
  SEXP Rsh_Fir_reg_fixed2_;
  SEXP Rsh_Fir_reg_agrep1;
  SEXP Rsh_Fir_reg_r19_;

  // Bind parameters
  Rsh_Fir_reg_pattern = PARAMS[0];
  Rsh_Fir_reg_x = PARAMS[1];
  Rsh_Fir_reg_max_distance = PARAMS[2];
  Rsh_Fir_reg_costs = PARAMS[3];
  Rsh_Fir_reg_ignore_case = PARAMS[4];
  Rsh_Fir_reg_value = PARAMS[5];
  Rsh_Fir_reg_fixed = PARAMS[6];
  Rsh_Fir_reg_useBytes = PARAMS[7];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st pattern = pattern
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_pattern, RHO);
  (void)(Rsh_Fir_reg_pattern);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // max_distance_isMissing = missing.0(max_distance)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_max_distance;
  Rsh_Fir_reg_max_distance_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args20);
  // if max_distance_isMissing then L0(0.1) else L0(max_distance)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_max_distance_isMissing)) {
  // L0(0.1)
    Rsh_Fir_reg_max_distance_orDefault = Rsh_const(CCP, 20);
    goto L0_;
  } else {
  // L0(max_distance)
    Rsh_Fir_reg_max_distance_orDefault = Rsh_Fir_reg_max_distance;
    goto L0_;
  }

L0_:;
  // st `max.distance` = max_distance_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_max_distance_orDefault, RHO);
  (void)(Rsh_Fir_reg_max_distance_orDefault);
  // costs_isMissing = missing.0(costs)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_costs;
  Rsh_Fir_reg_costs_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args21);
  // if costs_isMissing then L1(NULL) else L1(costs)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_costs_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_costs_orDefault = Rsh_const(CCP, 21);
    goto L1_;
  } else {
  // L1(costs)
    Rsh_Fir_reg_costs_orDefault = Rsh_Fir_reg_costs;
    goto L1_;
  }

L1_:;
  // st costs = costs_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_costs_orDefault, RHO);
  (void)(Rsh_Fir_reg_costs_orDefault);
  // ignore_case_isMissing = missing.0(ignore_case)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_ignore_case;
  Rsh_Fir_reg_ignore_case_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args22);
  // if ignore_case_isMissing then L2(FALSE) else L2(ignore_case)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_ignore_case_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_ignore_case_orDefault = Rsh_const(CCP, 23);
    goto L2_;
  } else {
  // L2(ignore_case)
    Rsh_Fir_reg_ignore_case_orDefault = Rsh_Fir_reg_ignore_case;
    goto L2_;
  }

L2_:;
  // st `ignore.case` = ignore_case_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_ignore_case_orDefault, RHO);
  (void)(Rsh_Fir_reg_ignore_case_orDefault);
  // value_isMissing = missing.0(value)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_value;
  Rsh_Fir_reg_value_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args23);
  // if value_isMissing then L3(FALSE) else L3(value)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_value_isMissing)) {
  // L3(FALSE)
    Rsh_Fir_reg_value_orDefault = Rsh_const(CCP, 23);
    goto L3_;
  } else {
  // L3(value)
    Rsh_Fir_reg_value_orDefault = Rsh_Fir_reg_value;
    goto L3_;
  }

L3_:;
  // st value = value_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_value_orDefault, RHO);
  (void)(Rsh_Fir_reg_value_orDefault);
  // fixed_isMissing = missing.0(fixed)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_fixed;
  Rsh_Fir_reg_fixed_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args24);
  // if fixed_isMissing then L4(TRUE) else L4(fixed)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_fixed_isMissing)) {
  // L4(TRUE)
    Rsh_Fir_reg_fixed_orDefault = Rsh_const(CCP, 15);
    goto L4_;
  } else {
  // L4(fixed)
    Rsh_Fir_reg_fixed_orDefault = Rsh_Fir_reg_fixed;
    goto L4_;
  }

L4_:;
  // st fixed = fixed_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_fixed_orDefault, RHO);
  (void)(Rsh_Fir_reg_fixed_orDefault);
  // useBytes_isMissing = missing.0(useBytes)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_useBytes;
  Rsh_Fir_reg_useBytes_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args25);
  // if useBytes_isMissing then L5(FALSE) else L5(useBytes)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_useBytes_isMissing)) {
  // L5(FALSE)
    Rsh_Fir_reg_useBytes_orDefault = Rsh_const(CCP, 23);
    goto L5_;
  } else {
  // L5(useBytes)
    Rsh_Fir_reg_useBytes_orDefault = Rsh_Fir_reg_useBytes;
    goto L5_;
  }

L5_:;
  // st useBytes = useBytes_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_useBytes_orDefault, RHO);
  (void)(Rsh_Fir_reg_useBytes_orDefault);
  // sym = ldf `as.character`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base = ldf `as.character` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard then L13() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L13()
    goto L13_;
  } else {
  // L14()
    goto L14_;
  }

L6_:;
  // st pattern = r1
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // sym1 = ldf `is.character`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base1 = ldf `is.character` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard1 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L13_:;
  // pattern1 = ld pattern
  Rsh_Fir_reg_pattern1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L15() else D0()
  // L15()
  goto L15_;

L14_:;
  // r = dyn base(<sym pattern>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L6(r)
  // L6(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L6_;

D0_:;
  // deopt 2 [pattern1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_pattern1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L7_:;
  // r5 = `!`(r4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args29);
  // c1 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args30);
  // if c1 then L20() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L20()
    goto L20_;
  } else {
  // L8()
    goto L8_;
  }

L15_:;
  // pattern2 = force? pattern1
  Rsh_Fir_reg_pattern2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern1_);
  // checkMissing(pattern2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_pattern2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r2 = dyn as_character(pattern2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_pattern2_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

L17_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L19() else D2()
  // L19()
  goto L19_;

L18_:;
  // r3 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L7(r3)
  // L7(r3)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_1;
  goto L7_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 8 [x1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L8_:;
  // goto L10()
  // L10()
  goto L10_;

L10_:;
  // sym3 = ldf `as.integer`
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base3 = ldf `as.integer` in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard3 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L16_:;
  // goto L6(r2)
  // L6(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L6_;

L19_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // c = `is.character`(x2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args36);
  // goto L7(c)
  // L7(c)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_c1;
  goto L7_;

L20_:;
  // sym2 = ldf `as.character`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base2 = ldf `as.character` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard2 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L9_:;
  // st x = r7
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r7_1, RHO);
  (void)(Rsh_Fir_reg_r7_1);
  // goto L10()
  // L10()
  goto L10_;

L11_:;
  // st costs = r11
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r11_1, RHO);
  (void)(Rsh_Fir_reg_r11_1);
  // _amatch_bounds = ldf `.amatch_bounds`
  Rsh_Fir_reg__amatch_bounds = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L31() else D8()
  // L31()
  goto L31_;

L21_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L23() else D3()
  // L23()
  goto L23_;

L22_:;
  // r6 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L9(r6)
  // L9(r6)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r6_1;
  goto L9_;

L26_:;
  // _amatch_costs = ldf `.amatch_costs`
  Rsh_Fir_reg__amatch_costs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L28() else D5()
  // L28()
  goto L28_;

L27_:;
  // r10 = dyn base3(<lang .amatch_costs(costs)>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L11(r10)
  // L11(r10)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r10_1;
  goto L11_;

D3_:;
  // deopt 14 [x3]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // as_character1 = ldf `as.character` in base
  Rsh_Fir_reg_as_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r8 = dyn as_character1(x4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character1_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L24() else D4()
  // L24()
  goto L24_;

L28_:;
  // p = prom<V +>{
  //   costs1 = ld costs;
  //   costs2 = force? costs1;
  //   checkMissing(costs2);
  //   return costs2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2290263485_, 0, NULL, CCP, RHO);
  // r13 = dyn _amatch_costs(p)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__amatch_costs, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L29() else D6()
  // L29()
  goto L29_;

L31_:;
  // p1 = prom<V +>{
  //   max_distance1 = ld `max.distance`;
  //   max_distance2 = force? max_distance1;
  //   checkMissing(max_distance2);
  //   return max_distance2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2290263485_1, 0, NULL, CCP, RHO);
  // r16 = dyn _amatch_bounds(p1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__amatch_bounds, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L32() else D9()
  // L32()
  goto L32_;

D4_:;
  // deopt 17 [r8]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 26 [r13]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 33 [r16]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r16_1;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L24_:;
  // goto L9(r8)
  // L9(r8)
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r8_1;
  goto L9_;

L29_:;
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r14 = dyn as_integer(r13)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L30() else D7()
  // L30()
  goto L30_;

L32_:;
  // st bounds = r16
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_r16_1, RHO);
  (void)(Rsh_Fir_reg_r16_1);
  // sym4 = ldf `.Internal`
  Rsh_Fir_reg_sym4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base4 = ldf `.Internal` in base
  Rsh_Fir_reg_base4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym4_1;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base4_1;
  Rsh_Fir_reg_guard4_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard4 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_1)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

D7_:;
  // deopt 28 [r14]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L12_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r18
  return Rsh_Fir_reg_r18_1;

L30_:;
  // goto L11(r14)
  // L11(r14)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r14_;
  goto L11_;

L33_:;
  // pattern3 = ld pattern
  Rsh_Fir_reg_pattern3_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L35() else D10()
  // L35()
  goto L35_;

L34_:;
  // r17 = dyn base4(<lang agrep(pattern, x, ignore.case, value, costs, bounds, useBytes, fixed)>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_1, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L12(r17)
  // L12(r17)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r17_1;
  goto L12_;

D10_:;
  // deopt 37 [pattern3]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_pattern3_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L35_:;
  // pattern4 = force? pattern3
  Rsh_Fir_reg_pattern4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pattern3_);
  // checkMissing(pattern4)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_pattern4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L36() else D11()
  // L36()
  goto L36_;

D11_:;
  // deopt 39 [x5]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L36_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // ignore_case1 = ld `ignore.case`
  Rsh_Fir_reg_ignore_case1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L37() else D12()
  // L37()
  goto L37_;

D12_:;
  // deopt 41 [ignore_case1]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_ignore_case1_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L37_:;
  // ignore_case2 = force? ignore_case1
  Rsh_Fir_reg_ignore_case2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignore_case1_);
  // checkMissing(ignore_case2)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_ignore_case2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L38() else D13()
  // L38()
  goto L38_;

D13_:;
  // deopt 43 [value1]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L38_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // costs3 = ld costs
  Rsh_Fir_reg_costs3_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L39() else D14()
  // L39()
  goto L39_;

D14_:;
  // deopt 45 [costs3]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_costs3_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L39_:;
  // costs4 = force? costs3
  Rsh_Fir_reg_costs4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_costs3_);
  // checkMissing(costs4)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_costs4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // bounds = ld bounds
  Rsh_Fir_reg_bounds = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L40() else D15()
  // L40()
  goto L40_;

D15_:;
  // deopt 47 [bounds]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_bounds;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L40_:;
  // bounds1 = force? bounds
  Rsh_Fir_reg_bounds1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_bounds);
  // checkMissing(bounds1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_bounds1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // useBytes1 = ld useBytes
  Rsh_Fir_reg_useBytes1_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L41() else D16()
  // L41()
  goto L41_;

D16_:;
  // deopt 49 [useBytes1]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_useBytes1_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L41_:;
  // useBytes2 = force? useBytes1
  Rsh_Fir_reg_useBytes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_useBytes1_);
  // checkMissing(useBytes2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_useBytes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // fixed1 = ld fixed
  Rsh_Fir_reg_fixed1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L42() else D17()
  // L42()
  goto L42_;

D17_:;
  // deopt 51 [fixed1]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_fixed1_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L42_:;
  // fixed2 = force? fixed1
  Rsh_Fir_reg_fixed2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fixed1_);
  // checkMissing(fixed2)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_fixed2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // agrep = ldf agrep in base
  Rsh_Fir_reg_agrep1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r19 = dyn agrep(pattern4, x6, ignore_case2, value2, costs4, bounds1, useBytes2, fixed2)
  SEXP Rsh_Fir_array_args57[8];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_pattern4_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_array_args57[2] = Rsh_Fir_reg_ignore_case2_;
  Rsh_Fir_array_args57[3] = Rsh_Fir_reg_value2_;
  Rsh_Fir_array_args57[4] = Rsh_Fir_reg_costs4_;
  Rsh_Fir_array_args57[5] = Rsh_Fir_reg_bounds1_;
  Rsh_Fir_array_args57[6] = Rsh_Fir_reg_useBytes2_;
  Rsh_Fir_array_args57[7] = Rsh_Fir_reg_fixed2_;
  SEXP Rsh_Fir_array_arg_names25[8];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_array_arg_names25[3] = R_MissingArg;
  Rsh_Fir_array_arg_names25[4] = R_MissingArg;
  Rsh_Fir_array_arg_names25[5] = R_MissingArg;
  Rsh_Fir_array_arg_names25[6] = R_MissingArg;
  Rsh_Fir_array_arg_names25[7] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_agrep1, 8, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L43() else D18()
  // L43()
  goto L43_;

D18_:;
  // deopt 54 [r19]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L43_:;
  // goto L12(r19)
  // L12(r19)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r19_;
  goto L12_;
}
SEXP Rsh_Fir_user_promise_inner2290263485_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_costs1_;
  SEXP Rsh_Fir_reg_costs2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2290263485/0: expected 0, got %d", NCAPTURES);

  // costs1 = ld costs
  Rsh_Fir_reg_costs1_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // costs2 = force? costs1
  Rsh_Fir_reg_costs2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_costs1_);
  // checkMissing(costs2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_costs2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return costs2
  return Rsh_Fir_reg_costs2_;
}
SEXP Rsh_Fir_user_promise_inner2290263485_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_max_distance1_;
  SEXP Rsh_Fir_reg_max_distance2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2290263485/0: expected 0, got %d", NCAPTURES);

  // max_distance1 = ld `max.distance`
  Rsh_Fir_reg_max_distance1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // max_distance2 = force? max_distance1
  Rsh_Fir_reg_max_distance2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_max_distance1_);
  // checkMissing(max_distance2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_max_distance2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return max_distance2
  return Rsh_Fir_reg_max_distance2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
