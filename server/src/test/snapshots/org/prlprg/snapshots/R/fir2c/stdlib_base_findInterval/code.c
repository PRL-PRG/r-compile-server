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
SEXP Rsh_Fir_user_function_inner1953738783_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1953738783_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1953738783_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_cbind;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_sort;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_seq;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_findInterval1_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_tt2_;
  SEXP Rsh_Fir_reg_tt3_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_tt5_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_it;
  SEXP Rsh_Fir_reg_it1_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_it2_;
  SEXP Rsh_Fir_reg_it3_;
  SEXP Rsh_Fir_reg_N;
  SEXP Rsh_Fir_reg_N1_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_v2_;
  SEXP Rsh_Fir_reg_v3_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r46_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1953738783
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1953738783_, RHO, CCP);
  // st findInterval = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // r1 = `:`(2.0, 18.0)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args);
  // st x = r1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L0_:;
  // st v = r3
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // cbind = ldf cbind
  Rsh_Fir_reg_cbind = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

L4_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r4 = dyn c(5.0, 10.0, 15.0)
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r2 = dyn base(5.0, 10.0, 15.0)
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;

D0_:;
  // deopt 14 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D1_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L0_;

L7_:;
  // p = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   findInterval = ldf findInterval;
  //   p1 = prom<V +>{
  //     x2 = ld x;
  //     x3 = force? x2;
  //     checkMissing(x3);
  //     return x3;
  //   };
  //   p2 = prom<V +>{
  //     v = ld v;
  //     v1 = force? v;
  //     checkMissing(v1);
  //     return v1;
  //   };
  //   r8 = dyn findInterval(p1, p2);
  //   return r8;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r10 = dyn cbind(p, p3)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cbind, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

D2_:;
  // deopt 20 [r10]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L8_:;
  // st N = 100.0
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_const(CCP, 10), RHO);
  (void)(Rsh_const(CCP, 10));
  // sort = ldf sort
  Rsh_Fir_reg_sort = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D3_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p4 = prom<V +>{
  //   sym1 = ldf round;
  //   base1 = ldf round in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r12):
  //   return r12;
  // L1():
  //   round = ldf round in base;
  //   r13 = dyn round(<lang `::`(stats, rt)(N, df=2.0)>, 2.0);
  //   goto L0(r13);
  // L2():
  //   r11 = dyn base1(<lang `::`(stats, rt)(N, df=2.0)>, 2.0);
  //   goto L0(r11);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r15 = dyn sort(p4)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sort, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

D4_:;
  // deopt 27 [r15]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L10_:;
  // st X = r15
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard2 then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L1_:;
  // st tt = r17
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // findInterval1 = ldf findInterval
  Rsh_Fir_reg_findInterval1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L16() else D8()
  // L16()
  goto L16_;

L11_:;
  // seq = ldf seq
  Rsh_Fir_reg_seq = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L13() else D5()
  // L13()
  goto L13_;

L12_:;
  // r16 = dyn base2(<lang `-`(100.0)>, <lang seq(`-`(2.0), 2.0, length.out=201.0)>, <lang `+`(100.0)>)
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 3, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1(r16)
  // L1(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L1_;

D5_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p5 = prom<V +>{
  //   return -2.0;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r19 = dyn seq[, , `length.out`](p5, 2.0, 201.0)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq, 3, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L14() else D6()
  // L14()
  goto L14_;

L16_:;
  // p6 = prom<V +>{
  //   tt = ld tt;
  //   tt1 = force? tt;
  //   checkMissing(tt1);
  //   return tt1;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   X = ld X;
  //   X1 = force? X;
  //   checkMissing(X1);
  //   return X1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r23 = dyn findInterval1(p6, p7)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_findInterval1_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L17() else D9()
  // L17()
  goto L17_;

D6_:;
  // deopt 39 [r19]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 49 [r23]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L14_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r20 = dyn c1(-100.0, r19, 100.0)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L15() else D7()
  // L15()
  goto L15_;

L17_:;
  // st it = r23
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // tt2 = ld tt
  Rsh_Fir_reg_tt2_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L18() else D10()
  // L18()
  goto L18_;

D7_:;
  // deopt 43 [r20]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 51 [tt2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_tt2_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L1(r20)
  // L1(r20)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r20_;
  goto L1_;

L18_:;
  // tt3 = force? tt2
  Rsh_Fir_reg_tt3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tt2_);
  // checkMissing(tt3)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_tt3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(tt3)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_tt3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args21);
  // if c2 then L19() else L20(tt3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L19()
    goto L19_;
  } else {
  // L20(tt3)
    Rsh_Fir_reg_tt5_ = Rsh_Fir_reg_tt3_;
    goto L20_;
  }

L2_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard3 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L19_:;
  // dr = tryDispatchBuiltin.1("[", tt3)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_tt3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if dc then L21() else L20(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L21()
    goto L21_;
  } else {
  // L20(dr)
    Rsh_Fir_reg_tt5_ = Rsh_Fir_reg_dr;
    goto L20_;
  }

L20_:;
  // it = ld it
  Rsh_Fir_reg_it = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L22() else D11()
  // L22()
  goto L22_;

D11_:;
  // deopt 53 [tt5, it]
  SEXP Rsh_Fir_array_deopt_stack7[2];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_tt5_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_it;
  Rsh_Fir_deopt(53, 2, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L3_:;
  // st N = r29
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L29() else D16()
  // L29()
  goto L29_;

L21_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L2()
  // L2()
  goto L2_;

L22_:;
  // it1 = force? it
  Rsh_Fir_reg_it1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_it);
  // checkMissing(it1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_it1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // r24 = `<`(it1, 1.0)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_it1_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args27);
  // it2 = ld it
  Rsh_Fir_reg_it2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L23() else D12()
  // L23()
  goto L23_;

L25_:;
  // v2 = ld v
  Rsh_Fir_reg_v2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L27() else D14()
  // L27()
  goto L27_;

L26_:;
  // r28 = dyn base3(<sym v>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L3(r28)
  // L3(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L3_;

D12_:;
  // deopt 56 [tt5, r24, it2]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_tt5_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_it2_;
  Rsh_Fir_deopt(56, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 64 [v2]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_v2_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // it3 = force? it2
  Rsh_Fir_reg_it3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_it2_);
  // checkMissing(it3)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_it3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // N = ld N
  Rsh_Fir_reg_N = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L24() else D13()
  // L24()
  goto L24_;

L27_:;
  // v3 = force? v2
  Rsh_Fir_reg_v3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v2_);
  // checkMissing(v3)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_v3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r30 = dyn length(v3)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_v3_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L28() else D15()
  // L28()
  goto L28_;

L29_:;
  // p12 = prom<V +>{
  //   sym4 = ldf identical;
  //   base4 = ldf identical in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r32):
  //   return r32;
  // L1():
  //   findInterval2 = ldf findInterval;
  //   p8 = prom<V +>{
  //     x4 = ld x;
  //     x5 = force? x4;
  //     checkMissing(x5);
  //     return x5;
  //   };
  //   p9 = prom<V +>{
  //     v4 = ld v;
  //     v5 = force? v4;
  //     checkMissing(v5);
  //     return v5;
  //   };
  //   r35 = dyn findInterval2[, , `left.open`](p8, p9, TRUE);
  //   N2 = ld N;
  //   N3 = force? N2;
  //   checkMissing(N3);
  //   findInterval3 = ldf findInterval;
  //   p10 = prom<V +>{
  //     x6 = ld x;
  //     x7 = force? x6;
  //     checkMissing(x7);
  //     r36 = `-`(<missing>, x7);
  //     return r36;
  //   };
  //   p11 = prom<V +>{
  //     v6 = ld v;
  //     v7 = force? v6;
  //     checkMissing(v7);
  //     c3 = `is.object`(v7);
  //     if c3 then L1() else L2(v7);
  //   L0(dx3):
  //     r40 = `-`(<missing>, dx3);
  //     return r40;
  //   L1():
  //     dr2 = tryDispatchBuiltin.1("[", v7);
  //     dc1 = getTryDispatchBuiltinDispatched(dr2);
  //     if dc1 then L3() else L2(dr2);
  //   L2(v9):
  //     N4 = ld N;
  //     N5 = force? N4;
  //     checkMissing(N5);
  //     r38 = `:`(N5, 1.0);
  //     __1 = ldf `[` in base;
  //     r39 = dyn __1(v9, r38);
  //     goto L0(r39);
  //   L3():
  //     dx2 = getTryDispatchBuiltinValue(dr2);
  //     goto L0(dx2);
  //   };
  //   r42 = dyn findInterval3(p10, p11);
  //   r43 = `-`(N3, r42);
  //   identical = ldf identical in base;
  //   r44 = dyn identical(r35, r43, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r44);
  // L2():
  //   r31 = dyn base4(<lang findInterval(x, v, left.open=TRUE)>, <lang `-`(N, findInterval(`-`(x), `-`(`[`(v, `:`(N, 1.0)))))>);
  //   goto L0(r31);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r46 = dyn stopifnot(p12)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L30() else D17()
  // L30()
  goto L30_;

D13_:;
  // deopt 57 [tt5, r24, it3, N]
  SEXP Rsh_Fir_array_deopt_stack10[4];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_tt5_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_it3_;
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_N;
  Rsh_Fir_deopt(57, 4, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 67 [r30]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 72 [r46]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L24_:;
  // N1 = force? N
  Rsh_Fir_reg_N1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N);
  // checkMissing(N1)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_N1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // r25 = `>=`(it3, N1)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_it3_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_N1_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(78, RHO, 2, Rsh_Fir_array_args54);
  // r26 = `||`(r24, r25)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args55);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r27 = dyn __(tt5, r26)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_tt5_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L2()
  // L2()
  goto L2_;

L28_:;
  // goto L3(r30)
  // L3(r30)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r30_;
  goto L3_;

L30_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r46
  return Rsh_Fir_reg_r46_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_findInterval;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r8_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // findInterval = ldf findInterval
  Rsh_Fir_reg_findInterval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p1 = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   return x3;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   v = ld v;
  //   v1 = force? v;
  //   checkMissing(v1);
  //   return v1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r8 = dyn findInterval(p1, p2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_findInterval, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // return r8
  return Rsh_Fir_reg_r8_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return x3
  return Rsh_Fir_reg_x3_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_v;
  SEXP Rsh_Fir_reg_v1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // v = ld v
  Rsh_Fir_reg_v = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // v1 = force? v
  Rsh_Fir_reg_v1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v);
  // checkMissing(v1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_v1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return v1
  return Rsh_Fir_reg_v1_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_round;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf round
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base1 = ldf round in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
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
  // round = ldf round in base
  Rsh_Fir_reg_round = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // r13 = dyn round(<lang `::`(stats, rt)(N, df=2.0)>, 2.0)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_round, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L0_;

L2_:;
  // r11 = dyn base1(<lang `::`(stats, rt)(N, df=2.0)>, 2.0)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return -2.0
  return Rsh_const(CCP, 21);
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tt;
  SEXP Rsh_Fir_reg_tt1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // tt = ld tt
  Rsh_Fir_reg_tt = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // tt1 = force? tt
  Rsh_Fir_reg_tt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tt);
  // checkMissing(tt1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_tt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return tt1
  return Rsh_Fir_reg_tt1_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_X;
  SEXP Rsh_Fir_reg_X1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // X = ld X
  Rsh_Fir_reg_X = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // X1 = force? X
  Rsh_Fir_reg_X1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_X);
  // checkMissing(X1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_X1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return X1
  return Rsh_Fir_reg_X1_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_findInterval2_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_N2_;
  SEXP Rsh_Fir_reg_N3_;
  SEXP Rsh_Fir_reg_findInterval3_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r44_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf identical
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base4 = ldf identical in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r32
  return Rsh_Fir_reg_r32_;

L1_:;
  // findInterval2 = ldf findInterval
  Rsh_Fir_reg_findInterval2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p8 = prom<V +>{
  //   x4 = ld x;
  //   x5 = force? x4;
  //   checkMissing(x5);
  //   return x5;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   v4 = ld v;
  //   v5 = force? v4;
  //   checkMissing(v5);
  //   return v5;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r35 = dyn findInterval2[, , `left.open`](p8, p9, TRUE)
  SEXP Rsh_Fir_array_args35[3];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args35[2] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_findInterval2_, 3, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names13, CCP, RHO);
  // N2 = ld N
  Rsh_Fir_reg_N2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // N3 = force? N2
  Rsh_Fir_reg_N3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N2_);
  // checkMissing(N3)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_N3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // findInterval3 = ldf findInterval
  Rsh_Fir_reg_findInterval3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p10 = prom<V +>{
  //   x6 = ld x;
  //   x7 = force? x6;
  //   checkMissing(x7);
  //   r36 = `-`(<missing>, x7);
  //   return r36;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   v6 = ld v;
  //   v7 = force? v6;
  //   checkMissing(v7);
  //   c3 = `is.object`(v7);
  //   if c3 then L1() else L2(v7);
  // L0(dx3):
  //   r40 = `-`(<missing>, dx3);
  //   return r40;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[", v7);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(v9):
  //   N4 = ld N;
  //   N5 = force? N4;
  //   checkMissing(N5);
  //   r38 = `:`(N5, 1.0);
  //   __1 = ldf `[` in base;
  //   r39 = dyn __1(v9, r38);
  //   goto L0(r39);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r42 = dyn findInterval3(p10, p11)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_findInterval3_, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names15, CCP, RHO);
  // r43 = `-`(N3, r42)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_N3_;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args49);
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r44 = dyn identical(r35, r43, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args50[9];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_args50[2] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args50[3] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args50[4] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args50[5] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args50[6] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args50[7] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args50[8] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names16[9];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_array_arg_names16[3] = R_MissingArg;
  Rsh_Fir_array_arg_names16[4] = R_MissingArg;
  Rsh_Fir_array_arg_names16[5] = R_MissingArg;
  Rsh_Fir_array_arg_names16[6] = R_MissingArg;
  Rsh_Fir_array_arg_names16[7] = R_MissingArg;
  Rsh_Fir_array_arg_names16[8] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r44)
  // L0(r44)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r44_;
  goto L0_;

L2_:;
  // r31 = dyn base4(<lang findInterval(x, v, left.open=TRUE)>, <lang `-`(N, findInterval(`-`(x), `-`(`[`(v, `:`(N, 1.0)))))>)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r31)
  // L0(r31)
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return x5
  return Rsh_Fir_reg_x5_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_v4_;
  SEXP Rsh_Fir_reg_v5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // v4 = ld v
  Rsh_Fir_reg_v4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // v5 = force? v4
  Rsh_Fir_reg_v5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v4_);
  // checkMissing(v5)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_v5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return v5
  return Rsh_Fir_reg_v5_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_r36_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x6 = ld x
  Rsh_Fir_reg_x6_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // x7 = force? x6
  Rsh_Fir_reg_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x6_);
  // checkMissing(x7)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // r36 = `-`(<missing>, x7)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_x7_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args38);
  // return r36
  return Rsh_Fir_reg_r36_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_v6_;
  SEXP Rsh_Fir_reg_v7_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_v9_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_N4_;
  SEXP Rsh_Fir_reg_N5_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_r40_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // v6 = ld v
  Rsh_Fir_reg_v6_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // v7 = force? v6
  Rsh_Fir_reg_v7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_v6_);
  // checkMissing(v7)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_v7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(v7)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_v7_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args40);
  // if c3 then L1() else L2(v7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L1()
    goto L1_;
  } else {
  // L2(v7)
    Rsh_Fir_reg_v9_ = Rsh_Fir_reg_v7_;
    goto L2_;
  }

L0_:;
  // r40 = `-`(<missing>, dx3)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args41);
  // return r40
  return Rsh_Fir_reg_r40_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[", v7)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_v7_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args42);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_v9_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // N4 = ld N
  Rsh_Fir_reg_N4_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // N5 = force? N4
  Rsh_Fir_reg_N5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_N4_);
  // checkMissing(N5)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_N5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // r38 = `:`(N5, 1.0)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_N5_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args45);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r39 = dyn __1(v9, r38)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_v9_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r39)
  // L0(r39)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r39_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner1953738783_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1953738783 dynamic dispatch ([x, vec, `rightmost.closed`, `all.inside`, `left.open`])

  return Rsh_Fir_user_version_inner1953738783_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1953738783_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1953738783 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner1953738783/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_vec;
  SEXP Rsh_Fir_reg_rightmost_closed;
  SEXP Rsh_Fir_reg_all_inside;
  SEXP Rsh_Fir_reg_left_open;
  SEXP Rsh_Fir_reg_rightmost_closed_isMissing;
  SEXP Rsh_Fir_reg_rightmost_closed_orDefault;
  SEXP Rsh_Fir_reg_all_inside_isMissing;
  SEXP Rsh_Fir_reg_all_inside_orDefault;
  SEXP Rsh_Fir_reg_left_open_isMissing;
  SEXP Rsh_Fir_reg_left_open_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_is_unsorted;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_identical1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_vec3_;
  SEXP Rsh_Fir_reg_vec4_;
  SEXP Rsh_Fir_reg_as_double;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_reg_as_double1_;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_rightmost_closed1_;
  SEXP Rsh_Fir_reg_rightmost_closed2_;
  SEXP Rsh_Fir_reg_all_inside1_;
  SEXP Rsh_Fir_reg_all_inside2_;
  SEXP Rsh_Fir_reg_left_open1_;
  SEXP Rsh_Fir_reg_left_open2_;
  SEXP Rsh_Fir_reg_findInterval1;
  SEXP Rsh_Fir_reg_r16_1;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_vec = PARAMS[1];
  Rsh_Fir_reg_rightmost_closed = PARAMS[2];
  Rsh_Fir_reg_all_inside = PARAMS[3];
  Rsh_Fir_reg_left_open = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // st vec = vec
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_vec, RHO);
  (void)(Rsh_Fir_reg_vec);
  // rightmost_closed_isMissing = missing.0(rightmost_closed)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_rightmost_closed;
  Rsh_Fir_reg_rightmost_closed_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args57);
  // if rightmost_closed_isMissing then L0(FALSE) else L0(rightmost_closed)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_rightmost_closed_isMissing)) {
  // L0(FALSE)
    Rsh_Fir_reg_rightmost_closed_orDefault = Rsh_const(CCP, 35);
    goto L0_;
  } else {
  // L0(rightmost_closed)
    Rsh_Fir_reg_rightmost_closed_orDefault = Rsh_Fir_reg_rightmost_closed;
    goto L0_;
  }

L0_:;
  // st `rightmost.closed` = rightmost_closed_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_rightmost_closed_orDefault, RHO);
  (void)(Rsh_Fir_reg_rightmost_closed_orDefault);
  // all_inside_isMissing = missing.0(all_inside)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_all_inside;
  Rsh_Fir_reg_all_inside_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args58);
  // if all_inside_isMissing then L1(FALSE) else L1(all_inside)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_all_inside_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_all_inside_orDefault = Rsh_const(CCP, 35);
    goto L1_;
  } else {
  // L1(all_inside)
    Rsh_Fir_reg_all_inside_orDefault = Rsh_Fir_reg_all_inside;
    goto L1_;
  }

L1_:;
  // st `all.inside` = all_inside_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_all_inside_orDefault, RHO);
  (void)(Rsh_Fir_reg_all_inside_orDefault);
  // left_open_isMissing = missing.0(left_open)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_left_open;
  Rsh_Fir_reg_left_open_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args59);
  // if left_open_isMissing then L2(FALSE) else L2(left_open)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_left_open_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_left_open_orDefault = Rsh_const(CCP, 35);
    goto L2_;
  } else {
  // L2(left_open)
    Rsh_Fir_reg_left_open_orDefault = Rsh_Fir_reg_left_open;
    goto L2_;
  }

L2_:;
  // st `left.open` = left_open_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_left_open_orDefault, RHO);
  (void)(Rsh_Fir_reg_left_open_orDefault);
  // sym = ldf identical
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base = ldf identical in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L3_:;
  // r5 = `!`(r1)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args61);
  // c = `as.logical`(r5)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args62);
  // if c then L14() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L14()
    goto L14_;
  } else {
  // L4()
    goto L4_;
  }

L9_:;
  // is_unsorted = ldf `is.unsorted`
  Rsh_Fir_reg_is_unsorted = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L10_:;
  // r = dyn base(FALSE, <lang is.unsorted(vec)>)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args63[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L3_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // sym1 = ldf `.Internal`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base1 = ldf `.Internal` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args64);
  // if guard1 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L11_:;
  // p = prom<V +>{
  //   vec1 = ld vec;
  //   vec2 = force? vec1;
  //   checkMissing(vec2);
  //   return vec2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1953738783_, 0, NULL, CCP, RHO);
  // r3 = dyn is_unsorted(p)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_unsorted, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

L14_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // check L15() else D3()
  // L15()
  goto L15_;

D1_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r9
  return Rsh_Fir_reg_r9_;

L12_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r4 = dyn identical(FALSE, r3, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args67[9];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_array_args67[2] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args67[3] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args67[4] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args67[5] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args67[6] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args67[7] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args67[8] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names22[9];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_array_arg_names22[4] = R_MissingArg;
  Rsh_Fir_array_arg_names22[5] = R_MissingArg;
  Rsh_Fir_array_arg_names22[6] = R_MissingArg;
  Rsh_Fir_array_arg_names22[7] = R_MissingArg;
  Rsh_Fir_array_arg_names22[8] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1, 9, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

L15_:;
  // r6 = dyn stop("'vec' must be sorted non-decreasingly and not contain NAs")
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

L18_:;
  // sym2 = ldf `as.double`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base2 = ldf `as.double` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args69);
  // if guard2 then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L19_:;
  // r8 = dyn base1(<lang findInterval(as.double(vec), as.double(x), rightmost.closed, all.inside, left.open)>)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L6(r8)
  // L6(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_1;
  goto L6_;

D2_:;
  // deopt 15 [r4]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 20 [r6]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L7_:;
  // sym3 = ldf `as.double`
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base3 = ldf `as.double` in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args71);
  // if guard3 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L13_:;
  // goto L3(r4)
  // L3(r4)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r4_1;
  goto L3_;

L16_:;
  // goto L5()
  // L5()
  goto L5_;

L20_:;
  // vec3 = ld vec
  Rsh_Fir_reg_vec3_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L22() else D5()
  // L22()
  goto L22_;

L21_:;
  // r10 = dyn base2(<sym vec>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L7(r10)
  // L7(r10)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r10_1;
  goto L7_;

D5_:;
  // deopt 27 [vec3]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_vec3_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L8_:;
  // rightmost_closed1 = ld `rightmost.closed`
  Rsh_Fir_reg_rightmost_closed1_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L28() else D9()
  // L28()
  goto L28_;

L22_:;
  // vec4 = force? vec3
  Rsh_Fir_reg_vec4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vec3_);
  // checkMissing(vec4)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_vec4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // as_double = ldf `as.double` in base
  Rsh_Fir_reg_as_double = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r12 = dyn as_double(vec4)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_vec4_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L23() else D6()
  // L23()
  goto L23_;

L24_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L26() else D7()
  // L26()
  goto L26_;

L25_:;
  // r13 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L8(r13)
  // L8(r13)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r13_1;
  goto L8_;

D6_:;
  // deopt 30 [r12]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 33 [x1]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 37 [rightmost_closed1]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_rightmost_closed1_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L7(r12)
  // L7(r12)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r12_1;
  goto L7_;

L26_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // as_double1 = ldf `as.double` in base
  Rsh_Fir_reg_as_double1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r15 = dyn as_double1(x2)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_double1_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L27() else D8()
  // L27()
  goto L27_;

L28_:;
  // rightmost_closed2 = force? rightmost_closed1
  Rsh_Fir_reg_rightmost_closed2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rightmost_closed1_);
  // checkMissing(rightmost_closed2)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_rightmost_closed2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // all_inside1 = ld `all.inside`
  Rsh_Fir_reg_all_inside1_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L29() else D10()
  // L29()
  goto L29_;

D8_:;
  // deopt 36 [r15]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 39 [all_inside1]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_all_inside1_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L27_:;
  // goto L8(r15)
  // L8(r15)
  Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r15_1;
  goto L8_;

L29_:;
  // all_inside2 = force? all_inside1
  Rsh_Fir_reg_all_inside2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_all_inside1_);
  // checkMissing(all_inside2)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_all_inside2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // left_open1 = ld `left.open`
  Rsh_Fir_reg_left_open1_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L30() else D11()
  // L30()
  goto L30_;

D11_:;
  // deopt 41 [left_open1]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_left_open1_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L30_:;
  // left_open2 = force? left_open1
  Rsh_Fir_reg_left_open2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_left_open1_);
  // checkMissing(left_open2)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_left_open2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty()));
  // findInterval = ldf findInterval in base
  Rsh_Fir_reg_findInterval1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r16 = dyn findInterval(r11, r14, rightmost_closed2, all_inside2, left_open2)
  SEXP Rsh_Fir_array_args81[5];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_args81[2] = Rsh_Fir_reg_rightmost_closed2_;
  Rsh_Fir_array_args81[3] = Rsh_Fir_reg_all_inside2_;
  Rsh_Fir_array_args81[4] = Rsh_Fir_reg_left_open2_;
  SEXP Rsh_Fir_array_arg_names29[5];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_array_arg_names29[3] = R_MissingArg;
  Rsh_Fir_array_arg_names29[4] = R_MissingArg;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_findInterval1, 5, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L31() else D12()
  // L31()
  goto L31_;

D12_:;
  // deopt 44 [r16]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r16_1;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L6(r16)
  // L6(r16)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r16_1;
  goto L6_;
}
SEXP Rsh_Fir_user_promise_inner1953738783_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_vec1_;
  SEXP Rsh_Fir_reg_vec2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1953738783/0: expected 0, got %d", NCAPTURES);

  // vec1 = ld vec
  Rsh_Fir_reg_vec1_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // vec2 = force? vec1
  Rsh_Fir_reg_vec2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vec1_);
  // checkMissing(vec2)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_vec2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return vec2
  return Rsh_Fir_reg_vec2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
