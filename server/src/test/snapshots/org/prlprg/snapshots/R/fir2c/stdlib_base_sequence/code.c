#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner4173737808_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4173737808_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_sequence;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_sequence1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_sequence2_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_sequence3_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r24_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4173737808
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4173737808_, RHO, CCP);
  // st sequence = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sequence = ldf sequence
  Rsh_Fir_reg_sequence = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
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
  //   c = ldf c in base;
  //   r3 = dyn c(3.0, 2.0);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(3.0, 2.0);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r5 = dyn sequence(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sequence, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 6 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // sequence1 = ldf sequence
  Rsh_Fir_reg_sequence1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
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
  // L0(r7):
  //   return r7;
  // L1():
  //   c1 = ldf c in base;
  //   r8 = dyn c1(3.0, 2.0);
  //   goto L0(r8);
  // L2():
  //   r6 = dyn base1(3.0, 2.0);
  //   goto L0(r6);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r10 = dyn sequence1[, from](p1, 2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sequence1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names5, CCP, RHO);
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
  // sequence2 = ldf sequence
  Rsh_Fir_reg_sequence2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
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
  //   c2 = ldf c in base;
  //   r13 = dyn c2(3.0, 2.0);
  //   goto L0(r13);
  // L2():
  //   r11 = dyn base2(3.0, 2.0);
  //   goto L0(r11);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r15 = dyn sequence2[, from, by](p2, 2, 2)
  SEXP Rsh_Fir_array_args11[3];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args11[2] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_arg_names8[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sequence2_, 3, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 20 [r15]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // sequence3 = ldf sequence
  Rsh_Fir_reg_sequence3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
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
  //   c3 = ldf c in base;
  //   r18 = dyn c3(3.0, 2.0);
  //   goto L0(r18);
  // L2():
  //   r16 = dyn base3(3.0, 2.0);
  //   goto L0(r16);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   sym4 = ldf c;
  //   base4 = ldf c in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r21):
  //   return r21;
  // L1():
  //   c4 = ldf c in base;
  //   r22 = dyn c4(-1, 1);
  //   goto L0(r22);
  // L2():
  //   r20 = dyn base4(<lang `-`(1)>, 1);
  //   goto L0(r20);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r24 = dyn sequence3[, by](p3, p4)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sequence3_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 26 [r24]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r24
  return Rsh_Fir_reg_r24_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r3_;

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
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r3 = dyn c(3.0, 2.0)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base(3.0, 2.0)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
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
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
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
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r8 = dyn c1(3.0, 2.0)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L0_;

L2_:;
  // r6 = dyn base1(3.0, 2.0)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names4, CCP, RHO);
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
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
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
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r13 = dyn c2(3.0, 2.0)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L0_;

L2_:;
  // r11 = dyn base2(3.0, 2.0)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names7, CCP, RHO);
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
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r18_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
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
  // c3 = ldf c in base
  Rsh_Fir_reg_c3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r18 = dyn c3(3.0, 2.0)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c3_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r18)
  // L0(r18)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r18_;
  goto L0_;

L2_:;
  // r16 = dyn base3(3.0, 2.0)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names10, CCP, RHO);
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
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_r22_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r21
  return Rsh_Fir_reg_r21_;

L1_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r22 = dyn c4(-1, 1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r22)
  // L0(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L0_;

L2_:;
  // r20 = dyn base4(<lang `-`(1)>, 1)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r20)
  // L0(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner4173737808_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4173737808 dynamic dispatch ([nvec, `...`])

  return Rsh_Fir_user_version_inner4173737808_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4173737808_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4173737808 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner4173737808/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_nvec;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_UseMethod;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_nvec = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st nvec = nvec
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_nvec, RHO);
  (void)(Rsh_Fir_reg_nvec);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
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
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r2 = dyn UseMethod("sequence")
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base("sequence")
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
