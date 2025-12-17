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
SEXP Rsh_Fir_user_function_inner2186253718_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2186253718_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2186253718_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2186253718_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_array;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_slice_index;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_slice_index1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_which;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r24_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2186253718
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2186253718_, RHO, CCP);
  // st `slice.index` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // array = ldf array
  Rsh_Fir_reg_array = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   r1 = `:`(1.0, 24.0);
  //   return r1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r4):
  //   return r4;
  // L1():
  //   c = ldf c in base;
  //   r5 = dyn c(2.0, 3.0, 4.0);
  //   goto L0(r5);
  // L2():
  //   r3 = dyn base(2.0, 3.0, 4.0);
  //   goto L0(r3);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r7 = dyn array(p, p1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_array, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 7 [r7]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st x = r7
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_r7_, RHO);
  (void)(Rsh_Fir_reg_r7_);
  // slice_index = ldf `slice.index`
  Rsh_Fir_reg_slice_index = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // p2 = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r9 = dyn slice_index(p2, 2.0)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slice_index, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 13 [r9]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // slice_index1 = ldf `slice.index`
  Rsh_Fir_reg_slice_index1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p3 = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   return x3;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r12):
  //   return r12;
  // L1():
  //   c1 = ldf c in base;
  //   r13 = dyn c1(1.0, 3.0);
  //   goto L0(r13);
  // L2():
  //   r11 = dyn base1(1.0, 3.0);
  //   goto L0(r11);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r15 = dyn slice_index1(p3, p4)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slice_index1_, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L5() else D5()
  // L5()
  goto L5_;

D5_:;
  // deopt 18 [r15]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // which = ldf which
  Rsh_Fir_reg_which = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // check L6() else D6()
  // L6()
  goto L6_;

D6_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p7 = prom<V +>{
  //   slice_index2 = ldf `slice.index`;
  //   p5 = prom<V +>{
  //     x4 = ld x;
  //     x5 = force? x4;
  //     checkMissing(x5);
  //     return x5;
  //   };
  //   p6 = prom<V +>{
  //     sym2 = ldf c;
  //     base2 = ldf c in base;
  //     guard2 = `==`.4(sym2, base2);
  //     if guard2 then L1() else L2();
  //   L0(r18):
  //     return r18;
  //   L1():
  //     c2 = ldf c in base;
  //     r19 = dyn c2(1.0, 3.0);
  //     goto L0(r19);
  //   L2():
  //     r17 = dyn base2(1.0, 3.0);
  //     goto L0(r17);
  //   };
  //   r21 = dyn slice_index2(p5, p6);
  //   r22 = `==`(r21, 5.0);
  //   return r22;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r24 = dyn which[, `arr.ind`](p7, TRUE)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L7() else D7()
  // L7()
  goto L7_;

D7_:;
  // deopt 24 [r24]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
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
  SEXP Rsh_Fir_reg_r1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r1 = `:`(1.0, 24.0)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
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
  // return r4
  return Rsh_Fir_reg_r4_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r5 = dyn c(2.0, 3.0, 4.0)
  SEXP Rsh_Fir_array_args2[3];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args2[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L0_;

L2_:;
  // r3 = dyn base(2.0, 3.0, 4.0)
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // return x3
  return Rsh_Fir_reg_x3_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
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
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r13 = dyn c1(1.0, 3.0)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L0_;

L2_:;
  // r11 = dyn base1(1.0, 3.0)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_slice_index2_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // slice_index2 = ldf `slice.index`
  Rsh_Fir_reg_slice_index2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p5 = prom<V +>{
  //   x4 = ld x;
  //   x5 = force? x4;
  //   checkMissing(x5);
  //   return x5;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r18):
  //   return r18;
  // L1():
  //   c2 = ldf c in base;
  //   r19 = dyn c2(1.0, 3.0);
  //   goto L0(r19);
  // L2():
  //   r17 = dyn base2(1.0, 3.0);
  //   goto L0(r17);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r21 = dyn slice_index2(p5, p6)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slice_index2_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names9, CCP, RHO);
  // r22 = `==`(r21, 5.0)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args17);
  // return r22
  return Rsh_Fir_reg_r22_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return x5
  return Rsh_Fir_reg_x5_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r18
  return Rsh_Fir_reg_r18_;

L1_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r19 = dyn c2(1.0, 3.0)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L0_;

L2_:;
  // r17 = dyn base2(1.0, 3.0)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner2186253718_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2186253718 dynamic dispatch ([x, MARGIN])

  return Rsh_Fir_user_version_inner2186253718_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2186253718_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2186253718 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2186253718/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_MARGIN;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_reg_dim;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_d;
  SEXP Rsh_Fir_reg_d1_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_x3_1;
  SEXP Rsh_Fir_reg_x4_1;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_d2_;
  SEXP Rsh_Fir_reg_d3_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_MARGIN1_;
  SEXP Rsh_Fir_reg_MARGIN2_;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_x5_1;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_dimnames;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_dn;
  SEXP Rsh_Fir_reg_dn1_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r21_1;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r24_1;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_MARGIN3_;
  SEXP Rsh_Fir_reg_MARGIN4_;
  SEXP Rsh_Fir_reg_dnn;
  SEXP Rsh_Fir_reg_dnn1_;
  SEXP Rsh_Fir_reg_match;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_MARGIN5_;
  SEXP Rsh_Fir_reg_MARGIN6_;
  SEXP Rsh_Fir_reg_anyNA;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_MARGIN7_;
  SEXP Rsh_Fir_reg_MARGIN8_;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c8_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_MARGIN9_;
  SEXP Rsh_Fir_reg_MARGIN10_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_any;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_c14_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_MARGIN11_;
  SEXP Rsh_Fir_reg_MARGIN12_;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_any1_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_c22_;
  SEXP Rsh_Fir_reg_c23_;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_stop2_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_d4_;
  SEXP Rsh_Fir_reg_d5_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_any2_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_array1;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_MARGIN13_;
  SEXP Rsh_Fir_reg_MARGIN14_;
  SEXP Rsh_Fir_reg_c27_;
  SEXP Rsh_Fir_reg_MARGIN16_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_d8_;
  SEXP Rsh_Fir_reg_d9_;
  SEXP Rsh_Fir_reg_c28_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_d11_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_m;
  SEXP Rsh_Fir_reg_m1_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_d12_;
  SEXP Rsh_Fir_reg_d13_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_d15_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_d18_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_m2_;
  SEXP Rsh_Fir_reg_m3_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_prod;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_sym18_;
  SEXP Rsh_Fir_reg_base18_;
  SEXP Rsh_Fir_reg_guard18_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_d19_;
  SEXP Rsh_Fir_reg_d20_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_d22_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_m4_;
  SEXP Rsh_Fir_reg_m5_;
  SEXP Rsh_Fir_reg___3_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_rep_int;
  SEXP Rsh_Fir_reg_r86_;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_rep_int1_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_sym19_;
  SEXP Rsh_Fir_reg_base19_;
  SEXP Rsh_Fir_reg_guard19_;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_d23_;
  SEXP Rsh_Fir_reg_d24_;
  SEXP Rsh_Fir_reg_c31_;
  SEXP Rsh_Fir_reg_d26_;
  SEXP Rsh_Fir_reg_dr8_;
  SEXP Rsh_Fir_reg_dc4_;
  SEXP Rsh_Fir_reg_dx8_;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_sym20_;
  SEXP Rsh_Fir_reg_base20_;
  SEXP Rsh_Fir_reg_guard20_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_d29_;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg_m6_;
  SEXP Rsh_Fir_reg_m7_;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_m8_;
  SEXP Rsh_Fir_reg_m9_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_seq_int;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg___4_;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_prod1_;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_rep_int2_;
  SEXP Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_reg_sym21_;
  SEXP Rsh_Fir_reg_base21_;
  SEXP Rsh_Fir_reg_guard21_;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_MARGIN17_;
  SEXP Rsh_Fir_reg_MARGIN18_;
  SEXP Rsh_Fir_reg_length3_;
  SEXP Rsh_Fir_reg_r101_;
  SEXP Rsh_Fir_reg_r102_;
  SEXP Rsh_Fir_reg_c32_;
  SEXP Rsh_Fir_reg_d30_;
  SEXP Rsh_Fir_reg_d31_;
  SEXP Rsh_Fir_reg_c33_;
  SEXP Rsh_Fir_reg_d33_;
  SEXP Rsh_Fir_reg_dr10_;
  SEXP Rsh_Fir_reg_dc5_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_dx11_;
  SEXP Rsh_Fir_reg_m10_;
  SEXP Rsh_Fir_reg_m11_;
  SEXP Rsh_Fir_reg___5_;
  SEXP Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_reg_MARGIN19_;
  SEXP Rsh_Fir_reg_MARGIN20_;
  SEXP Rsh_Fir_reg_c34_;
  SEXP Rsh_Fir_reg_MARGIN22_;
  SEXP Rsh_Fir_reg_dr12_;
  SEXP Rsh_Fir_reg_dc6_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_dx13_;
  SEXP Rsh_Fir_reg___6_;
  SEXP Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c35_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_y1_;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_sym22_;
  SEXP Rsh_Fir_reg_base22_;
  SEXP Rsh_Fir_reg_guard22_;
  SEXP Rsh_Fir_reg_r105_;
  SEXP Rsh_Fir_reg_i7_;
  SEXP Rsh_Fir_reg_y4_;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_reg_sym23_;
  SEXP Rsh_Fir_reg_base23_;
  SEXP Rsh_Fir_reg_guard23_;
  SEXP Rsh_Fir_reg_r107_;
  SEXP Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_reg_y7_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r108_;
  SEXP Rsh_Fir_reg_sym24_;
  SEXP Rsh_Fir_reg_base24_;
  SEXP Rsh_Fir_reg_guard24_;
  SEXP Rsh_Fir_reg_r109_;
  SEXP Rsh_Fir_reg_i13_;
  SEXP Rsh_Fir_reg_y10_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_r110_;
  SEXP Rsh_Fir_reg_d34_;
  SEXP Rsh_Fir_reg_d35_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_i15_;
  SEXP Rsh_Fir_reg_y12_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_d37_;
  SEXP Rsh_Fir_reg_dr14_;
  SEXP Rsh_Fir_reg_dc7_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_i17_;
  SEXP Rsh_Fir_reg_y14_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_m12_;
  SEXP Rsh_Fir_reg_m13_;
  SEXP Rsh_Fir_reg___7_;
  SEXP Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_reg_r112_;
  SEXP Rsh_Fir_reg_seq_int1_;
  SEXP Rsh_Fir_reg_r113_;
  SEXP Rsh_Fir_reg_sym25_;
  SEXP Rsh_Fir_reg_base25_;
  SEXP Rsh_Fir_reg_guard25_;
  SEXP Rsh_Fir_reg_r114_;
  SEXP Rsh_Fir_reg_i20_;
  SEXP Rsh_Fir_reg_y17_;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_r115_;
  SEXP Rsh_Fir_reg_d38_;
  SEXP Rsh_Fir_reg_d39_;
  SEXP Rsh_Fir_reg_c37_;
  SEXP Rsh_Fir_reg_i22_;
  SEXP Rsh_Fir_reg_y19_;
  SEXP Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_reg_d41_;
  SEXP Rsh_Fir_reg_dr16_;
  SEXP Rsh_Fir_reg_dc8_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_i24_;
  SEXP Rsh_Fir_reg_y21_;
  SEXP Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_reg_sym26_;
  SEXP Rsh_Fir_reg_base26_;
  SEXP Rsh_Fir_reg_guard26_;
  SEXP Rsh_Fir_reg_r116_;
  SEXP Rsh_Fir_reg_i27_;
  SEXP Rsh_Fir_reg_y24_;
  SEXP Rsh_Fir_reg_p26_;
  SEXP Rsh_Fir_reg_d44_;
  SEXP Rsh_Fir_reg_r117_;
  SEXP Rsh_Fir_reg_m14_;
  SEXP Rsh_Fir_reg_m15_;
  SEXP Rsh_Fir_reg_r118_;
  SEXP Rsh_Fir_reg_r119_;
  SEXP Rsh_Fir_reg___8_;
  SEXP Rsh_Fir_reg_r120_;
  SEXP Rsh_Fir_reg_prod2_;
  SEXP Rsh_Fir_reg_r121_;
  SEXP Rsh_Fir_reg_sym27_;
  SEXP Rsh_Fir_reg_base27_;
  SEXP Rsh_Fir_reg_guard27_;
  SEXP Rsh_Fir_reg_r124_;
  SEXP Rsh_Fir_reg_i30_;
  SEXP Rsh_Fir_reg_y27_;
  SEXP Rsh_Fir_reg_p29_;
  SEXP Rsh_Fir_reg_r125_;
  SEXP Rsh_Fir_reg_r126_;
  SEXP Rsh_Fir_reg_d45_;
  SEXP Rsh_Fir_reg_d46_;
  SEXP Rsh_Fir_reg_c38_;
  SEXP Rsh_Fir_reg_i32_;
  SEXP Rsh_Fir_reg_y29_;
  SEXP Rsh_Fir_reg_p31_;
  SEXP Rsh_Fir_reg_r128_;
  SEXP Rsh_Fir_reg_d48_;
  SEXP Rsh_Fir_reg_dr18_;
  SEXP Rsh_Fir_reg_dc9_;
  SEXP Rsh_Fir_reg_dx18_;
  SEXP Rsh_Fir_reg_i34_;
  SEXP Rsh_Fir_reg_y31_;
  SEXP Rsh_Fir_reg_p33_;
  SEXP Rsh_Fir_reg_r130_;
  SEXP Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_reg_m16_;
  SEXP Rsh_Fir_reg_m17_;
  SEXP Rsh_Fir_reg___9_;
  SEXP Rsh_Fir_reg_r131_;
  SEXP Rsh_Fir_reg_rep_int3_;
  SEXP Rsh_Fir_reg_r132_;
  SEXP Rsh_Fir_reg_r133_;
  SEXP Rsh_Fir_reg_rep_int4_;
  SEXP Rsh_Fir_reg_r134_;
  SEXP Rsh_Fir_reg_sym28_;
  SEXP Rsh_Fir_reg_base28_;
  SEXP Rsh_Fir_reg_guard28_;
  SEXP Rsh_Fir_reg_r135_;
  SEXP Rsh_Fir_reg_i37_;
  SEXP Rsh_Fir_reg_y34_;
  SEXP Rsh_Fir_reg_p36_;
  SEXP Rsh_Fir_reg_r136_;
  SEXP Rsh_Fir_reg_d49_;
  SEXP Rsh_Fir_reg_d50_;
  SEXP Rsh_Fir_reg_c39_;
  SEXP Rsh_Fir_reg_i39_;
  SEXP Rsh_Fir_reg_y36_;
  SEXP Rsh_Fir_reg_p38_;
  SEXP Rsh_Fir_reg_d52_;
  SEXP Rsh_Fir_reg_dr20_;
  SEXP Rsh_Fir_reg_dc10_;
  SEXP Rsh_Fir_reg_dx20_;
  SEXP Rsh_Fir_reg_i41_;
  SEXP Rsh_Fir_reg_y38_;
  SEXP Rsh_Fir_reg_p40_;
  SEXP Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_reg_sym29_;
  SEXP Rsh_Fir_reg_base29_;
  SEXP Rsh_Fir_reg_guard29_;
  SEXP Rsh_Fir_reg_r137_;
  SEXP Rsh_Fir_reg_i44_;
  SEXP Rsh_Fir_reg_y41_;
  SEXP Rsh_Fir_reg_p43_;
  SEXP Rsh_Fir_reg_d55_;
  SEXP Rsh_Fir_reg_r138_;
  SEXP Rsh_Fir_reg_m18_;
  SEXP Rsh_Fir_reg_m19_;
  SEXP Rsh_Fir_reg_r139_;
  SEXP Rsh_Fir_reg_n4_;
  SEXP Rsh_Fir_reg_n5_;
  SEXP Rsh_Fir_reg_m20_;
  SEXP Rsh_Fir_reg_m21_;
  SEXP Rsh_Fir_reg_r140_;
  SEXP Rsh_Fir_reg_seq_int2_;
  SEXP Rsh_Fir_reg_r141_;
  SEXP Rsh_Fir_reg___10_;
  SEXP Rsh_Fir_reg_r142_;
  SEXP Rsh_Fir_reg_prod3_;
  SEXP Rsh_Fir_reg_r143_;
  SEXP Rsh_Fir_reg_rep_int5_;
  SEXP Rsh_Fir_reg_r144_;
  SEXP Rsh_Fir_reg_r145_;
  SEXP Rsh_Fir_reg_r146_;
  SEXP Rsh_Fir_reg_p44_;
  SEXP Rsh_Fir_reg_p45_;
  SEXP Rsh_Fir_reg_d56_;
  SEXP Rsh_Fir_reg_d57_;
  SEXP Rsh_Fir_reg_c40_;
  SEXP Rsh_Fir_reg_i46_;
  SEXP Rsh_Fir_reg_p47_;
  SEXP Rsh_Fir_reg_d59_;
  SEXP Rsh_Fir_reg_dr22_;
  SEXP Rsh_Fir_reg_dc11_;
  SEXP Rsh_Fir_reg_dx22_;
  SEXP Rsh_Fir_reg_i48_;
  SEXP Rsh_Fir_reg_p49_;
  SEXP Rsh_Fir_reg_dx23_;
  SEXP Rsh_Fir_reg_m22_;
  SEXP Rsh_Fir_reg_m23_;
  SEXP Rsh_Fir_reg___11_;
  SEXP Rsh_Fir_reg_r147_;
  SEXP Rsh_Fir_reg_r148_;
  SEXP Rsh_Fir_reg_d60_;
  SEXP Rsh_Fir_reg_d61_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_dim__;
  SEXP Rsh_Fir_reg_r149_;
  SEXP Rsh_Fir_reg_y42_;
  SEXP Rsh_Fir_reg_y43_;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_MARGIN = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // st MARGIN = MARGIN
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_MARGIN, RHO);
  (void)(Rsh_Fir_reg_MARGIN);
  // sym = ldf dim
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base = ldf dim in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L0_:;
  // st d = r1
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard1 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

L60_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L62() else D0()
  // L62()
  goto L62_;

L61_:;
  // r = dyn base(<sym x>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L1_:;
  // c1 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args22);
  // if c1 then L67() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L67()
    goto L67_;
  } else {
  // L2()
    goto L2_;
  }

L62_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // dim = ldf dim in base
  Rsh_Fir_reg_dim = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r2 = dyn dim(x2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L63() else D1()
  // L63()
  goto L63_;

L64_:;
  // d = ld d
  Rsh_Fir_reg_d = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L66() else D2()
  // L66()
  goto L66_;

L65_:;
  // r3 = dyn base1(<sym d>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_1;
  goto L1_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 8 [d]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_d;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L2_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard3 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

L63_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L0_;

L66_:;
  // d1 = force? d
  Rsh_Fir_reg_d1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d);
  // checkMissing(d1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_d1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // c = `==`(d1, NULL)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_d1_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args28);
  // goto L1(c)
  // L1(c)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_c1;
  goto L1_;

L67_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard2 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L3_:;
  // st d = r6
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // goto L4()
  // L4()
  goto L4_;

L5_:;
  // st n = r10
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // sym4 = ldf `is.character`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base4 = ldf `is.character` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard4 then L77() else L78()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L77()
    goto L77_;
  } else {
  // L78()
    goto L78_;
  }

L68_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_1 = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L70() else D3()
  // L70()
  goto L70_;

L69_:;
  // r5 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L3(r5)
  // L3(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_1;
  goto L3_;

L73_:;
  // d2 = ld d
  Rsh_Fir_reg_d2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L75() else D5()
  // L75()
  goto L75_;

L74_:;
  // r9 = dyn base3(<sym d>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_1;
  goto L5_;

D3_:;
  // deopt 13 [x3]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_x3_1;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 22 [d2]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_d2_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L6_:;
  // c3 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args33);
  // if c3 then L80() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L80()
    goto L80_;
  } else {
  // L7()
    goto L7_;
  }

L70_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_1);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r7 = dyn length(x4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x4_1;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L71() else D4()
  // L71()
  goto L71_;

L75_:;
  // d3 = force? d2
  Rsh_Fir_reg_d3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d2_);
  // checkMissing(d3)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_d3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r11 = dyn length1(d3)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_d3_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L76() else D6()
  // L76()
  goto L76_;

L77_:;
  // MARGIN1 = ld MARGIN
  Rsh_Fir_reg_MARGIN1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L79() else D7()
  // L79()
  goto L79_;

L78_:;
  // r12 = dyn base4(<sym MARGIN>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L6(r12)
  // L6(r12)
  Rsh_Fir_reg_r13_1 = Rsh_Fir_reg_r12_1;
  goto L6_;

D4_:;
  // deopt 16 [r7]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 25 [r11]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r11_1;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 28 [MARGIN1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_MARGIN1_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // sym10 = ldf length
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base10 = ldf length in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard10 then L109() else L110()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L109()
    goto L109_;
  } else {
  // L110()
    goto L110_;
  }

L71_:;
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_1;
  goto L3_;

L76_:;
  // goto L5(r11)
  // L5(r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r11_1;
  goto L5_;

L79_:;
  // MARGIN2 = force? MARGIN1
  Rsh_Fir_reg_MARGIN2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN1_);
  // checkMissing(MARGIN2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_MARGIN2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // c2 = `is.character`(MARGIN2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_MARGIN2_;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args41);
  // goto L6(c2)
  // L6(c2)
  Rsh_Fir_reg_r13_1 = Rsh_Fir_reg_c2_1;
  goto L6_;

L80_:;
  // sym5 = ldf dimnames
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base5 = ldf dimnames in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard5 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L8_:;
  // st dn = r15
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r15_1, RHO);
  (void)(Rsh_Fir_reg_r15_1);
  // sym6 = ldf `is.null`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base6 = ldf `is.null` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard6 then L85() else L86()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L85()
    goto L85_;
  } else {
  // L86()
    goto L86_;
  }

L18_:;
  // r36 = `!`(r34)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args44);
  // c7 = `as.logical`(r36)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args45);
  // if c7 then L19(c7) else L113()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L19(c7)
    Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c7_;
    goto L19_;
  } else {
  // L113()
    goto L113_;
  }

L81_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_1 = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L83() else D8()
  // L83()
  goto L83_;

L82_:;
  // r14 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L8(r14)
  // L8(r14)
  Rsh_Fir_reg_r15_1 = Rsh_Fir_reg_r14_;
  goto L8_;

L109_:;
  // MARGIN7 = ld MARGIN
  Rsh_Fir_reg_MARGIN7_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L111() else D21()
  // L111()
  goto L111_;

L110_:;
  // r33 = dyn base10(<sym MARGIN>)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L18(r33)
  // L18(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L18_;

D8_:;
  // deopt 33 [x5]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_x5_1;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 80 [MARGIN7]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_MARGIN7_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L9_:;
  // c5 = `as.logical`(r18)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_r18_1;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args48);
  // if c5 then L91() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L91()
    goto L91_;
  } else {
  // L11()
    goto L11_;
  }

L19_:;
  // c16 = `as.logical`(c8)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args49);
  // if c16 then L21(c16) else L119()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L21(c16)
    Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c16_;
    goto L21_;
  } else {
  // L119()
    goto L119_;
  }

L83_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_1);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // dimnames = ldf dimnames in base
  Rsh_Fir_reg_dimnames = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r16 = dyn dimnames(x6)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dimnames, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L84() else D9()
  // L84()
  goto L84_;

L85_:;
  // sym7 = ldf names
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base7 = ldf names in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args52);
  // if guard7 then L87() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L87()
    goto L87_;
  } else {
  // L88()
    goto L88_;
  }

L86_:;
  // r17 = dyn base6(<lang `<-`(dnn, names(dn))>)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L9(r17)
  // L9(r17)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r17_1;
  goto L9_;

L111_:;
  // MARGIN8 = force? MARGIN7
  Rsh_Fir_reg_MARGIN8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN7_);
  // checkMissing(MARGIN8)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_MARGIN8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r35 = dyn length2(MARGIN8)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_MARGIN8_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L112() else D22()
  // L112()
  goto L112_;

L113_:;
  // sym11 = ldf any
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base11 = ldf any in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args56[2];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args56);
  // if guard11 then L114() else L115()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L114()
    goto L114_;
  } else {
  // L115()
    goto L115_;
  }

D9_:;
  // deopt 36 [r16]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 83 [r35]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(83, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L10_:;
  // st dnn = r20
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // c4 = `==`(r20, NULL)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args57);
  // goto L9(c4)
  // L9(c4)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_c4_;
  goto L9_;

L11_:;
  // goto L12()
  // L12()
  goto L12_;

L12_:;
  // sym8 = ldf match
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base8 = ldf match in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args58);
  // if guard8 then L95() else L96()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L95()
    goto L95_;
  } else {
  // L96()
    goto L96_;
  }

L20_:;
  // c13 = `as.logical`(r38)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args59);
  // c14 = `||`(c12, c13)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_c12_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args60);
  // goto L19(c14)
  // L19(c14)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c14_;
  goto L19_;

L21_:;
  // c25 = `as.logical`(c17)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args61);
  // if c25 then L126() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c25_)) {
  // L126()
    goto L126_;
  } else {
  // L23()
    goto L23_;
  }

L84_:;
  // goto L8(r16)
  // L8(r16)
  Rsh_Fir_reg_r15_1 = Rsh_Fir_reg_r16_;
  goto L8_;

L87_:;
  // dn = ld dn
  Rsh_Fir_reg_dn = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // check L89() else D10()
  // L89()
  goto L89_;

L88_:;
  // r19 = dyn base7(<sym dn>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L10(r19)
  // L10(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_1;
  goto L10_;

L91_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L92() else D12()
  // L92()
  goto L92_;

L112_:;
  // goto L18(r35)
  // L18(r35)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r35_;
  goto L18_;

L114_:;
  // MARGIN9 = ld MARGIN
  Rsh_Fir_reg_MARGIN9_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L116() else D23()
  // L116()
  goto L116_;

L115_:;
  // r37 = dyn base11(<lang `<`(MARGIN, 1)>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L20(c7, r37)
  // L20(c7, r37)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L20_;

L119_:;
  // sym12 = ldf any
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base12 = ldf any in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args64);
  // if guard12 then L120() else L121()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L120()
    goto L120_;
  } else {
  // L121()
    goto L121_;
  }

D10_:;
  // deopt 41 [dn]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_dn;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 87 [c7, MARGIN9]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_MARGIN9_;
  Rsh_Fir_deopt(87, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L13_:;
  // st MARGIN = r25
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // sym9 = ldf anyNA
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base9 = ldf anyNA in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args65);
  // if guard9 then L100() else L101()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L100()
    goto L100_;
  } else {
  // L101()
    goto L101_;
  }

L22_:;
  // c22 = `as.logical`(r42)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args66);
  // c23 = `||`(c21, c22)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_c22_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args67);
  // goto L21(c23)
  // L21(c23)
  Rsh_Fir_reg_c17_ = Rsh_Fir_reg_c23_;
  goto L21_;

L23_:;
  // goto L24()
  // L24()
  goto L24_;

L24_:;
  // sym13 = ldf any
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base13 = ldf any in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args68);
  // if guard13 then L130() else L131()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L130()
    goto L130_;
  } else {
  // L131()
    goto L131_;
  }

L89_:;
  // dn1 = force? dn
  Rsh_Fir_reg_dn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dn);
  // checkMissing(dn1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r21 = dyn names(dn1)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dn1_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L90() else D11()
  // L90()
  goto L90_;

L92_:;
  // r22 = dyn stop("'x' must have named dimnames")
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r22_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L93() else D13()
  // L93()
  goto L93_;

L95_:;
  // MARGIN3 = ld MARGIN
  Rsh_Fir_reg_MARGIN3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L97() else D14()
  // L97()
  goto L97_;

L96_:;
  // r24 = dyn base8(<sym MARGIN>, <sym dnn>)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r24_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L13(r24)
  // L13(r24)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_1;
  goto L13_;

L116_:;
  // MARGIN10 = force? MARGIN9
  Rsh_Fir_reg_MARGIN10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN9_);
  // checkMissing(MARGIN10)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_MARGIN10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // r39 = `<`(MARGIN10, 1)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_MARGIN10_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(76, RHO, 2, Rsh_Fir_array_args74);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r40 = dyn any(r39)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L117() else D24()
  // L117()
  goto L117_;

L120_:;
  // MARGIN11 = ld MARGIN
  Rsh_Fir_reg_MARGIN11_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L122() else D25()
  // L122()
  goto L122_;

L121_:;
  // r41 = dyn base12(<lang `>`(MARGIN, n)>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L22(c16, r41)
  // L22(c16, r41)
  Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L22_;

L126_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L127() else D28()
  // L127()
  goto L127_;

D11_:;
  // deopt 44 [r21]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r21_1;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 50 [r22]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r22_1;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 55 [MARGIN3]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_MARGIN3_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 92 [c7, r40]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(92, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 96 [c16, MARGIN11]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_MARGIN11_;
  Rsh_Fir_deopt(96, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 104 []
  Rsh_Fir_deopt(104, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // c6 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args77);
  // if c6 then L104() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L104()
    goto L104_;
  } else {
  // L15()
    goto L15_;
  }

L25_:;
  // c26 = `as.logical`(r48)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args78);
  // if c26 then L134() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L134()
    goto L134_;
  } else {
  // L26()
    goto L26_;
  }

L90_:;
  // goto L10(r21)
  // L10(r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r21_1;
  goto L10_;

L93_:;
  // goto L12()
  // L12()
  goto L12_;

L97_:;
  // MARGIN4 = force? MARGIN3
  Rsh_Fir_reg_MARGIN4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN3_);
  // checkMissing(MARGIN4)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_MARGIN4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // dnn = ld dnn
  Rsh_Fir_reg_dnn = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L98() else D15()
  // L98()
  goto L98_;

L100_:;
  // MARGIN5 = ld MARGIN
  Rsh_Fir_reg_MARGIN5_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L102() else D17()
  // L102()
  goto L102_;

L101_:;
  // r27 = dyn base9(<sym MARGIN>)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L14(r27)
  // L14(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L14_;

L117_:;
  // goto L20(c7, r40)
  // L20(c7, r40)
  Rsh_Fir_reg_c12_ = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r40_;
  goto L20_;

L122_:;
  // MARGIN12 = force? MARGIN11
  Rsh_Fir_reg_MARGIN12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN11_);
  // checkMissing(MARGIN12)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_MARGIN12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L123() else D26()
  // L123()
  goto L123_;

L127_:;
  // r45 = dyn stop2("incorrect value for 'MARGIN'")
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L128() else D29()
  // L128()
  goto L128_;

L130_:;
  // d4 = ld d
  Rsh_Fir_reg_d4_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L132() else D30()
  // L132()
  goto L132_;

L131_:;
  // r47 = dyn base13(<lang `==`(d, 0)>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L25(r47)
  // L25(r47)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L25_;

D15_:;
  // deopt 57 [dnn]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_dnn;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 66 [MARGIN5]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_MARGIN5_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 97 [c16, MARGIN12, n]
  SEXP Rsh_Fir_array_deopt_stack25[3];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_MARGIN12_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(97, 3, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 106 [r45]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 111 [d4]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_d4_;
  Rsh_Fir_deopt(111, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L16(NULL)
  // L16(NULL)
  Rsh_Fir_reg_r31_ = Rsh_const(CCP, 18);
  goto L16_;

L16_:;
  // goto L17()
  // L17()
  goto L17_;

L26_:;
  // MARGIN13 = ld MARGIN
  Rsh_Fir_reg_MARGIN13_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L139() else D34()
  // L139()
  goto L139_;

L98_:;
  // dnn1 = force? dnn
  Rsh_Fir_reg_dnn1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dnn);
  // checkMissing(dnn1)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dnn1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r26 = dyn match(MARGIN4, dnn1, NA_INT, NULL)
  SEXP Rsh_Fir_array_args85[4];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_MARGIN4_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_dnn1_;
  Rsh_Fir_array_args85[2] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args85[3] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names34[4];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_array_arg_names34[3] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L99() else D16()
  // L99()
  goto L99_;

L102_:;
  // MARGIN6 = force? MARGIN5
  Rsh_Fir_reg_MARGIN6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN5_);
  // checkMissing(MARGIN6)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_MARGIN6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // anyNA = ldf anyNA in base
  Rsh_Fir_reg_anyNA = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r29 = dyn anyNA(MARGIN6)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_MARGIN6_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_anyNA, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L103() else D18()
  // L103()
  goto L103_;

L104_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L105() else D19()
  // L105()
  goto L105_;

L123_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // r43 = `>`(MARGIN12, n1)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_MARGIN12_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_n1_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args89);
  // any1 = ldf any in base
  Rsh_Fir_reg_any1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r44 = dyn any1(r43)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any1_, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L124() else D27()
  // L124()
  goto L124_;

L128_:;
  // goto L24()
  // L24()
  goto L24_;

L132_:;
  // d5 = force? d4
  Rsh_Fir_reg_d5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d4_);
  // checkMissing(d5)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_d5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // r49 = `==`(d5, 0)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_d5_;
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args92);
  // any2 = ldf any in base
  Rsh_Fir_reg_any2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r50 = dyn any2(r49)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any2_, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L133() else D31()
  // L133()
  goto L133_;

L134_:;
  // array = ldf array
  Rsh_Fir_reg_array1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L135() else D32()
  // L135()
  goto L135_;

D16_:;
  // deopt 62 [r26]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 69 [r29]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D19_:;
  // deopt 71 []
  Rsh_Fir_deopt(71, 0, NULL, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 101 [c16, r44]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(101, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 116 [r50]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 118 []
  Rsh_Fir_deopt(118, 0, NULL, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 125 [MARGIN13]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_MARGIN13_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L99_:;
  // goto L13(r26)
  // L13(r26)
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L13_;

L103_:;
  // goto L14(r29)
  // L14(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L14_;

L105_:;
  // r30 = dyn stop1("not all elements of 'MARGIN' are names of dimensions")
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L106() else D20()
  // L106()
  goto L106_;

L124_:;
  // goto L22(c16, r44)
  // L22(c16, r44)
  Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r44_;
  goto L22_;

L133_:;
  // goto L25(r50)
  // L25(r50)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r50_;
  goto L25_;

L135_:;
  // p = prom<V +>{
  //   integer = ldf integer;
  //   r51 = dyn integer();
  //   return r51;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2186253718_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   d6 = ld d;
  //   d7 = force? d6;
  //   checkMissing(d7);
  //   return d7;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2186253718_1, 0, NULL, CCP, RHO);
  // r54 = dyn array(p, p1)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_array1, 2, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L136() else D33()
  // L136()
  goto L136_;

L139_:;
  // MARGIN14 = force? MARGIN13
  Rsh_Fir_reg_MARGIN14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN13_);
  // checkMissing(MARGIN14)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_MARGIN14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // c27 = `is.object`(MARGIN14)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_MARGIN14_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args98);
  // if c27 then L140() else L141(MARGIN14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L140()
    goto L140_;
  } else {
  // L141(MARGIN14)
    Rsh_Fir_reg_MARGIN16_ = Rsh_Fir_reg_MARGIN14_;
    goto L141_;
  }

D20_:;
  // deopt 73 [r30]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 121 [r54]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L28_:;
  // st m = dx1
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym14 = ldf `rep.int`
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base14 = ldf `rep.int` in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args99);
  // if guard14 then L143() else L144()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L143()
    goto L143_;
  } else {
  // L144()
    goto L144_;
  }

L106_:;
  // goto L16(r30)
  // L16(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L16_;

L136_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r54
  return Rsh_Fir_reg_r54_;

L140_:;
  // dr = tryDispatchBuiltin.1("[", MARGIN14)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_MARGIN14_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args100);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if dc then L142() else L141(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L142()
    goto L142_;
  } else {
  // L141(dr)
    Rsh_Fir_reg_MARGIN16_ = Rsh_Fir_reg_dr;
    goto L141_;
  }

L141_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r57 = dyn __(MARGIN16, 1)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_MARGIN16_;
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L28(r57)
  // L28(r57)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r57_;
  goto L28_;

L29_:;
  // st y = r59
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r59_, RHO);
  (void)(Rsh_Fir_reg_r59_);
  // sym21 = ldf length
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base21 = ldf length in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args103);
  // if guard21 then L185() else L186()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L185()
    goto L185_;
  } else {
  // L186()
    goto L186_;
  }

L142_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // goto L28(dx)
  // L28(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L28_;

L143_:;
  // sym15 = ldf `rep.int`
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base15 = ldf `rep.int` in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args105);
  // if guard15 then L145() else L146()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L145()
    goto L145_;
  } else {
  // L146()
    goto L146_;
  }

L144_:;
  // r58 = dyn base14(<lang rep.int(`:`(1, `[`(d, m)), `*`(prod(`[`(d, seq_len(`-`(m, 1)))), rep.int(1, `[`(d, m))))>, <lang prod(`[`(d, seq.int(from=`+`(m, 1), length.out=`-`(n, m))))>)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args106[1] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 2, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L29(r58)
  // L29(r58)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r58_;
  goto L29_;

L30_:;
  // sym19 = ldf prod
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base19 = ldf prod in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args107);
  // if guard19 then L171() else L172()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L171()
    goto L171_;
  } else {
  // L172()
    goto L172_;
  }

L40_:;
  // r102 = `>`(r100, 1)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args108);
  // c32 = `as.logical`(r102)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_r102_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args109);
  // if c32 then L189() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c32_)) {
  // L189()
    goto L189_;
  } else {
  // L41()
    goto L41_;
  }

L145_:;
  // d8 = ld d
  Rsh_Fir_reg_d8_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L147() else D35()
  // L147()
  goto L147_;

L146_:;
  // r60 = dyn base15(<lang `:`(1, `[`(d, m))>, <lang `*`(prod(`[`(d, seq_len(`-`(m, 1)))), rep.int(1, `[`(d, m)))>)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args110[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names42[2];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 2, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L30(r60)
  // L30(r60)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r60_;
  goto L30_;

L185_:;
  // MARGIN17 = ld MARGIN
  Rsh_Fir_reg_MARGIN17_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L187() else D51()
  // L187()
  goto L187_;

L186_:;
  // r99 = dyn base21(<sym MARGIN>)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 1, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L40(r99)
  // L40(r99)
  Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r99_;
  goto L40_;

D35_:;
  // deopt 136 [1, d8]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_d8_;
  Rsh_Fir_deopt(136, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

D51_:;
  // deopt 193 [MARGIN17]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_MARGIN17_;
  Rsh_Fir_deopt(193, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L37_:;
  // rep_int2 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r98 = dyn rep_int2(r61, r90)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int2_, 2, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L184() else D50()
  // L184()
  goto L184_;

L41_:;
  // goto L59()
  // L59()
  goto L59_;

L59_:;
  // d60 = ld d
  Rsh_Fir_reg_d60_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L254() else D78()
  // L254()
  goto L254_;

L147_:;
  // d9 = force? d8
  Rsh_Fir_reg_d9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d8_);
  // checkMissing(d9)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_d9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // c28 = `is.object`(d9)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_d9_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args114);
  // if c28 then L148() else L149(1, d9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L148()
    goto L148_;
  } else {
  // L149(1, d9)
    Rsh_Fir_reg_r63_ = Rsh_const(CCP, 32);
    Rsh_Fir_reg_d11_ = Rsh_Fir_reg_d9_;
    goto L149_;
  }

L171_:;
  // d23 = ld d
  Rsh_Fir_reg_d23_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L173() else D44()
  // L173()
  goto L173_;

L172_:;
  // r89 = dyn base19(<lang `[`(d, seq.int(from=`+`(m, 1), length.out=`-`(n, m)))>)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L37(r89)
  // L37(r89)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r89_;
  goto L37_;

L187_:;
  // MARGIN18 = force? MARGIN17
  Rsh_Fir_reg_MARGIN18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN17_);
  // checkMissing(MARGIN18)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_MARGIN18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r101 = dyn length3(MARGIN18)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_MARGIN18_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L188() else D52()
  // L188()
  goto L188_;

L189_:;
  // d30 = ld d
  Rsh_Fir_reg_d30_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L190() else D53()
  // L190()
  goto L190_;

D44_:;
  // deopt 169 [d23]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_d23_;
  Rsh_Fir_deopt(169, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

D50_:;
  // deopt 189 [r98]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r98_;
  Rsh_Fir_deopt(189, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

D52_:;
  // deopt 196 [r101]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r101_;
  Rsh_Fir_deopt(196, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D53_:;
  // deopt 199 [d30]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_d30_;
  Rsh_Fir_deopt(199, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

D78_:;
  // deopt 292 [d60]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_d60_;
  Rsh_Fir_deopt(292, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L31_:;
  // r67 = `:`(r65, dx3)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args118);
  // sym16 = ldf prod
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base16 = ldf prod in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args119[2];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args119);
  // if guard16 then L152() else L153()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L152()
    goto L152_;
  } else {
  // L153()
    goto L153_;
  }

L148_:;
  // dr2 = tryDispatchBuiltin.1("[", d9)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_d9_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args120);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if dc1 then L150() else L149(1, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L150()
    goto L150_;
  } else {
  // L149(1, dr2)
    Rsh_Fir_reg_r63_ = Rsh_const(CCP, 32);
    Rsh_Fir_reg_d11_ = Rsh_Fir_reg_dr2_;
    goto L149_;
  }

L149_:;
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L151() else D36()
  // L151()
  goto L151_;

L173_:;
  // d24 = force? d23
  Rsh_Fir_reg_d24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d23_);
  // checkMissing(d24)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_d24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty()));
  // c31 = `is.object`(d24)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_d24_;
  Rsh_Fir_reg_c31_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args123);
  // if c31 then L174() else L175(d24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c31_)) {
  // L174()
    goto L174_;
  } else {
  // L175(d24)
    Rsh_Fir_reg_d26_ = Rsh_Fir_reg_d24_;
    goto L175_;
  }

L184_:;
  // goto L29(r98)
  // L29(r98)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r98_;
  goto L29_;

L188_:;
  // goto L40(r101)
  // L40(r101)
  Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r101_;
  goto L40_;

L190_:;
  // d31 = force? d30
  Rsh_Fir_reg_d31_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d30_);
  // checkMissing(d31)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_d31_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // c33 = `is.object`(d31)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_d31_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args125);
  // if c33 then L191() else L192(d31)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c33_)) {
  // L191()
    goto L191_;
  } else {
  // L192(d31)
    Rsh_Fir_reg_d33_ = Rsh_Fir_reg_d31_;
    goto L192_;
  }

L254_:;
  // d61 = force? d60
  Rsh_Fir_reg_d61_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d60_);
  // checkMissing(d61)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_d61_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // l1 = ld y
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // dim__ = ldf `dim<-`
  Rsh_Fir_reg_dim__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // check L255() else D79()
  // L255()
  goto L255_;

D36_:;
  // deopt 138 [r63, d11, m]
  SEXP Rsh_Fir_array_deopt_stack42[3];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_d11_;
  Rsh_Fir_array_deopt_stack42[2] = Rsh_Fir_reg_m;
  Rsh_Fir_deopt(138, 3, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

D79_:;
  // deopt 295 [d61, l1, d61]
  SEXP Rsh_Fir_array_deopt_stack43[3];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_d61_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack43[2] = Rsh_Fir_reg_d61_;
  Rsh_Fir_deopt(295, 3, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L32_:;
  // sym18 = ldf `rep.int`
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base18 = ldf `rep.int` in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args127);
  // if guard18 then L162() else L163()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L162()
    goto L162_;
  } else {
  // L163()
    goto L163_;
  }

L38_:;
  // prod1 = ldf prod in base
  Rsh_Fir_reg_prod1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r97 = dyn prod1(dx9)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod1_, 1, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L183() else D49()
  // L183()
  goto L183_;

L42_:;
  // st p = dx11
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // MARGIN19 = ld MARGIN
  Rsh_Fir_reg_MARGIN19_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L195() else D55()
  // L195()
  goto L195_;

L150_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // goto L31(1, dx2)
  // L31(1, dx2)
  Rsh_Fir_reg_r65_ = Rsh_const(CCP, 32);
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L31_;

L151_:;
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r66 = dyn __1(d11, m1)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_d11_;
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_m1_;
  SEXP Rsh_Fir_array_arg_names48[2];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_array_arg_names48[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L31(r63, r66)
  // L31(r63, r66)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r66_;
  goto L31_;

L152_:;
  // d12 = ld d
  Rsh_Fir_reg_d12_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L154() else D37()
  // L154()
  goto L154_;

L153_:;
  // r68 = dyn base16(<lang `[`(d, seq_len(`-`(m, 1)))>)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L32(r68)
  // L32(r68)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r68_;
  goto L32_;

L174_:;
  // dr8 = tryDispatchBuiltin.1("[", d24)
  SEXP Rsh_Fir_array_args132[2];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args132[1] = Rsh_Fir_reg_d24_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args132);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // if dc4 then L176() else L175(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L176()
    goto L176_;
  } else {
  // L175(dr8)
    Rsh_Fir_reg_d26_ = Rsh_Fir_reg_dr8_;
    goto L175_;
  }

L175_:;
  // sym20 = ldf `seq.int`
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // base20 = ldf `seq.int` in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args134);
  // if guard20 then L177() else L178()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L177()
    goto L177_;
  } else {
  // L178()
    goto L178_;
  }

L191_:;
  // dr10 = tryDispatchBuiltin.1("[", d31)
  SEXP Rsh_Fir_array_args135[2];
  Rsh_Fir_array_args135[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args135[1] = Rsh_Fir_reg_d31_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args135);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // if dc5 then L193() else L192(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L193()
    goto L193_;
  } else {
  // L192(dr10)
    Rsh_Fir_reg_d33_ = Rsh_Fir_reg_dr10_;
    goto L192_;
  }

L192_:;
  // m10 = ld m
  Rsh_Fir_reg_m10_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L194() else D54()
  // L194()
  goto L194_;

L255_:;
  // r149 = dyn dim__(l1, NULL, d61)
  SEXP Rsh_Fir_array_args137[3];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args137[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args137[2] = Rsh_Fir_reg_d61_;
  SEXP Rsh_Fir_array_arg_names50[3];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_array_arg_names50[1] = R_MissingArg;
  Rsh_Fir_array_arg_names50[2] = R_MissingArg;
  Rsh_Fir_reg_r149_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dim__, 3, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L256() else D80()
  // L256()
  goto L256_;

D37_:;
  // deopt 144 [d12]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_d12_;
  Rsh_Fir_deopt(144, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

D49_:;
  // deopt 187 [r97]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_deopt(187, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

D54_:;
  // deopt 201 [d33, m10]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_d33_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_m10_;
  Rsh_Fir_deopt(201, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

D55_:;
  // deopt 205 [MARGIN19]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_MARGIN19_;
  Rsh_Fir_deopt(205, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

D80_:;
  // deopt 297 [d61, r149]
  SEXP Rsh_Fir_array_deopt_stack48[2];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_d61_;
  Rsh_Fir_array_deopt_stack48[1] = Rsh_Fir_reg_r149_;
  Rsh_Fir_deopt(297, 2, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L35_:;
  // r87 = `*`(r79, r80)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_r80_;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args138);
  // rep_int1 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r88 = dyn rep_int1(r67, r87)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_r67_;
  Rsh_Fir_array_args139[1] = Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_array_arg_names51[2];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int1_, 2, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L170() else D43()
  // L170()
  goto L170_;

L39_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r96 = dyn __4(d29, r92)
  SEXP Rsh_Fir_array_args140[2];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_d29_;
  Rsh_Fir_array_args140[1] = Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_array_arg_names52[2];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_array_arg_names52[1] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L38(r96)
  // L38(r96)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r96_;
  goto L38_;

L154_:;
  // d13 = force? d12
  Rsh_Fir_reg_d13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d12_);
  // checkMissing(d13)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_d13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // c29 = `is.object`(d13)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_d13_;
  Rsh_Fir_reg_c29_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args142);
  // if c29 then L155() else L156(d13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c29_)) {
  // L155()
    goto L155_;
  } else {
  // L156(d13)
    Rsh_Fir_reg_d15_ = Rsh_Fir_reg_d13_;
    goto L156_;
  }

L162_:;
  // d19 = ld d
  Rsh_Fir_reg_d19_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L164() else D40()
  // L164()
  goto L164_;

L163_:;
  // r78 = dyn base18(1, <lang `[`(d, m)>)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args143[1] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names53[2];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_array_arg_names53[1] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 2, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L35(r69, r78)
  // L35(r69, r78)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r78_;
  goto L35_;

L176_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty());
  // goto L38(dx8)
  // L38(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L38_;

L177_:;
  // m6 = ld m
  Rsh_Fir_reg_m6_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L179() else D45()
  // L179()
  goto L179_;

L178_:;
  // r91 = dyn base20[from, `length.out`](<lang `+`(m, 1)>, <lang `-`(n, m)>)
  SEXP Rsh_Fir_array_args145[2];
  Rsh_Fir_array_args145[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args145[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names54[2];
  Rsh_Fir_array_arg_names54[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_arg_names54[1] = Rsh_const(CCP, 59);
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 2, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L39(d26, r91)
  // L39(d26, r91)
  Rsh_Fir_reg_d29_ = Rsh_Fir_reg_d26_;
  Rsh_Fir_reg_r92_ = Rsh_Fir_reg_r91_;
  goto L39_;

L183_:;
  // goto L37(r97)
  // L37(r97)
  Rsh_Fir_reg_r90_ = Rsh_Fir_reg_r97_;
  goto L37_;

L193_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args146[1];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // goto L42(dx10)
  // L42(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L42_;

L194_:;
  // m11 = force? m10
  Rsh_Fir_reg_m11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m10_);
  // __5 = ldf `[` in base
  Rsh_Fir_reg___5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r103 = dyn __5(d33, m11)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_d33_;
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_m11_;
  SEXP Rsh_Fir_array_arg_names55[2];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = R_MissingArg;
  Rsh_Fir_reg_r103_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___5_, 2, Rsh_Fir_array_args147, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L42(r103)
  // L42(r103)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r103_;
  goto L42_;

L195_:;
  // MARGIN20 = force? MARGIN19
  Rsh_Fir_reg_MARGIN20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_MARGIN19_);
  // checkMissing(MARGIN20)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_MARGIN20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // c34 = `is.object`(MARGIN20)
  SEXP Rsh_Fir_array_args149[1];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_MARGIN20_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args149);
  // if c34 then L196() else L197(MARGIN20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c34_)) {
  // L196()
    goto L196_;
  } else {
  // L197(MARGIN20)
    Rsh_Fir_reg_MARGIN22_ = Rsh_Fir_reg_MARGIN20_;
    goto L197_;
  }

L256_:;
  // st y = r149
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r149_, RHO);
  (void)(Rsh_Fir_reg_r149_);
  // y42 = ld y
  Rsh_Fir_reg_y42_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L257() else D81()
  // L257()
  goto L257_;

D40_:;
  // deopt 157 [r69, d19]
  SEXP Rsh_Fir_array_deopt_stack49[2];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_deopt_stack49[1] = Rsh_Fir_reg_d19_;
  Rsh_Fir_deopt(157, 2, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

D43_:;
  // deopt 166 [r88]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_r88_;
  Rsh_Fir_deopt(166, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

D45_:;
  // deopt 173 [d26, m6]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_d26_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_m6_;
  Rsh_Fir_deopt(173, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

D81_:;
  // deopt 299 [y42]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_y42_;
  Rsh_Fir_deopt(299, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

L33_:;
  // prod = ldf prod in base
  Rsh_Fir_reg_prod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r75 = dyn prod(dx5)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod, 1, Rsh_Fir_array_args150, Rsh_Fir_array_arg_names56, CCP, RHO);
  // check L161() else D39()
  // L161()
  goto L161_;

L43_:;
  // s = toForSeq(dx13)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args152);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 37);
  // goto L44(i)
  // L44(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L44_;

L155_:;
  // dr4 = tryDispatchBuiltin.1("[", d13)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args153[1] = Rsh_Fir_reg_d13_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args153);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args154, Rsh_Fir_param_types_empty());
  // if dc2 then L157() else L156(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L157()
    goto L157_;
  } else {
  // L156(dr4)
    Rsh_Fir_reg_d15_ = Rsh_Fir_reg_dr4_;
    goto L156_;
  }

L156_:;
  // sym17 = ldf seq_len
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base17 = ldf seq_len in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args155[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args155);
  // if guard17 then L158() else L159()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L158()
    goto L158_;
  } else {
  // L159()
    goto L159_;
  }

L164_:;
  // d20 = force? d19
  Rsh_Fir_reg_d20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d19_);
  // checkMissing(d20)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_d20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(d20)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_d20_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args157);
  // if c30 then L165() else L166(r69, d20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L165()
    goto L165_;
  } else {
  // L166(r69, d20)
    Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r69_;
    Rsh_Fir_reg_d22_ = Rsh_Fir_reg_d20_;
    goto L166_;
  }

L170_:;
  // goto L30(r88)
  // L30(r88)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r88_;
  goto L30_;

L179_:;
  // m7 = force? m6
  Rsh_Fir_reg_m7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m6_);
  // checkMissing(m7)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_m7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // r93 = `+`(m7, 1)
  SEXP Rsh_Fir_array_args159[2];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_m7_;
  Rsh_Fir_array_args159[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args159);
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L180() else D46()
  // L180()
  goto L180_;

L196_:;
  // dr12 = tryDispatchBuiltin.1("[", MARGIN20)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args160[1] = Rsh_Fir_reg_MARGIN20_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args160);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty());
  // if dc6 then L198() else L197(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L198()
    goto L198_;
  } else {
  // L197(dr12)
    Rsh_Fir_reg_MARGIN22_ = Rsh_Fir_reg_dr12_;
    goto L197_;
  }

L197_:;
  // __6 = ldf `[` in base
  Rsh_Fir_reg___6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r104 = dyn __6(MARGIN22, -1)
  SEXP Rsh_Fir_array_args162[2];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_MARGIN22_;
  Rsh_Fir_array_args162[1] = Rsh_const(CCP, 61);
  SEXP Rsh_Fir_array_arg_names57[2];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_array_arg_names57[1] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___6_, 2, Rsh_Fir_array_args162, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L43(r104)
  // L43(r104)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r104_;
  goto L43_;

L257_:;
  // y43 = force? y42
  Rsh_Fir_reg_y43_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y42_);
  // checkMissing(y43)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_y43_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return y43
  return Rsh_Fir_reg_y43_;

D39_:;
  // deopt 154 [r75]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

D46_:;
  // deopt 178 [d26, n2]
  SEXP Rsh_Fir_array_deopt_stack54[2];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_d26_;
  Rsh_Fir_array_deopt_stack54[1] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(178, 2, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

L34_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r74 = dyn __2(d18, r71)
  SEXP Rsh_Fir_array_args164[2];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_d18_;
  Rsh_Fir_array_args164[1] = Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_array_arg_names58[2];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_array_arg_names58[1] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names58, CCP, RHO);
  // goto L33(r74)
  // L33(r74)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r74_;
  goto L33_;

L36_:;
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r86 = dyn rep_int(1, dx7)
  SEXP Rsh_Fir_array_args165[2];
  Rsh_Fir_array_args165[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_array_arg_names59[2];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_array_arg_names59[1] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names59, CCP, RHO);
  // check L169() else D42()
  // L169()
  goto L169_;

L44_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args166[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args166);
  // c35 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args167[2];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args167);
  // if c35 then L199() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L199()
    goto L199_;
  } else {
  // L58()
    goto L58_;
  }

L157_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty());
  // goto L33(dx4)
  // L33(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L33_;

L158_:;
  // m2 = ld m
  Rsh_Fir_reg_m2_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L160() else D38()
  // L160()
  goto L160_;

L159_:;
  // r70 = dyn base17(<lang `-`(m, 1)>)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names60[1];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args169, Rsh_Fir_array_arg_names60, CCP, RHO);
  // goto L34(d15, r70)
  // L34(d15, r70)
  Rsh_Fir_reg_d18_ = Rsh_Fir_reg_d15_;
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r70_;
  goto L34_;

L161_:;
  // goto L32(r75)
  // L32(r75)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r75_;
  goto L32_;

L165_:;
  // dr6 = tryDispatchBuiltin.1("[", d20)
  SEXP Rsh_Fir_array_args170[2];
  Rsh_Fir_array_args170[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args170[1] = Rsh_Fir_reg_d20_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args170);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty());
  // if dc3 then L167() else L166(r69, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L167()
    goto L167_;
  } else {
  // L166(r69, dr6)
    Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r69_;
    Rsh_Fir_reg_d22_ = Rsh_Fir_reg_dr6_;
    goto L166_;
  }

L166_:;
  // m4 = ld m
  Rsh_Fir_reg_m4_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L168() else D41()
  // L168()
  goto L168_;

L180_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty()));
  // m8 = ld m
  Rsh_Fir_reg_m8_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L181() else D47()
  // L181()
  goto L181_;

L198_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // goto L43(dx12)
  // L43(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L43_;

D38_:;
  // deopt 147 [d15, m2]
  SEXP Rsh_Fir_array_deopt_stack55[2];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_d15_;
  Rsh_Fir_array_deopt_stack55[1] = Rsh_Fir_reg_m2_;
  Rsh_Fir_deopt(147, 2, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

D41_:;
  // deopt 159 [r82, d22, m4]
  SEXP Rsh_Fir_array_deopt_stack56[3];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_d22_;
  Rsh_Fir_array_deopt_stack56[2] = Rsh_Fir_reg_m4_;
  Rsh_Fir_deopt(159, 3, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

D42_:;
  // deopt 163 [r84, r86]
  SEXP Rsh_Fir_array_deopt_stack57[2];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_array_deopt_stack57[1] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(163, 2, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

D47_:;
  // deopt 179 [d26, n3, m8]
  SEXP Rsh_Fir_array_deopt_stack58[3];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_d26_;
  Rsh_Fir_array_deopt_stack58[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_array_deopt_stack58[2] = Rsh_Fir_reg_m8_;
  Rsh_Fir_deopt(179, 3, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

L58_:;
  // x7 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args174[4];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args174[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args174[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args174[3] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_x7_ = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args174);
  // st m = x7
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_x7_, RHO);
  (void)(Rsh_Fir_reg_x7_);
  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L200() else D56()
  // L200()
  goto L200_;

L160_:;
  // m3 = force? m2
  Rsh_Fir_reg_m3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m2_);
  // checkMissing(m3)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_m3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty()));
  // r72 = `-`(m3, 1)
  SEXP Rsh_Fir_array_args176[2];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_m3_;
  Rsh_Fir_array_args176[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args176);
  // r73 = seq_len(r72)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args177);
  // goto L34(d15, r73)
  // L34(d15, r73)
  Rsh_Fir_reg_d18_ = Rsh_Fir_reg_d15_;
  Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r73_;
  goto L34_;

L167_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty());
  // goto L36(r69, dx6)
  // L36(r69, dx6)
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r69_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L36_;

L168_:;
  // m5 = force? m4
  Rsh_Fir_reg_m5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m4_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r85 = dyn __3(d22, m5)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_d22_;
  Rsh_Fir_array_args179[1] = Rsh_Fir_reg_m5_;
  SEXP Rsh_Fir_array_arg_names61[2];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_array_arg_names61[1] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args179, Rsh_Fir_array_arg_names61, CCP, RHO);
  // goto L36(r82, r85)
  // L36(r82, r85)
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r85_;
  goto L36_;

L169_:;
  // goto L35(r84, r86)
  // L35(r84, r86)
  Rsh_Fir_reg_r79_ = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r86_;
  goto L35_;

L181_:;
  // m9 = force? m8
  Rsh_Fir_reg_m9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m8_);
  // checkMissing(m9)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_m9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty()));
  // r94 = `-`(n3, m9)
  SEXP Rsh_Fir_array_args181[2];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_n3_;
  Rsh_Fir_array_args181[1] = Rsh_Fir_reg_m9_;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args181);
  // seq_int = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // r95 = dyn seq_int(r93, r94)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_array_arg_names62[2];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_array_arg_names62[1] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int, 2, Rsh_Fir_array_args182, Rsh_Fir_array_arg_names62, CCP, RHO);
  // check L182() else D48()
  // L182()
  goto L182_;

L199_:;
  // goto L59()
  // L59()
  goto L59_;

D48_:;
  // deopt 184 [d26, r95]
  SEXP Rsh_Fir_array_deopt_stack59[2];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_d26_;
  Rsh_Fir_array_deopt_stack59[1] = Rsh_Fir_reg_r95_;
  Rsh_Fir_deopt(184, 2, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

D56_:;
  // deopt 210 [i2, y]
  SEXP Rsh_Fir_array_deopt_stack60[2];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack60[1] = Rsh_Fir_reg_y;
  Rsh_Fir_deopt(210, 2, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

L182_:;
  // goto L39(d26, r95)
  // L39(d26, r95)
  Rsh_Fir_reg_d29_ = Rsh_Fir_reg_d26_;
  Rsh_Fir_reg_r92_ = Rsh_Fir_reg_r95_;
  goto L39_;

L200_:;
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty()));
  // p2 = ld p
  Rsh_Fir_reg_p2_1 = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // check L201() else D57()
  // L201()
  goto L201_;

D57_:;
  // deopt 211 [i2, y1, p2]
  SEXP Rsh_Fir_array_deopt_stack61[3];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack61[1] = Rsh_Fir_reg_y1_;
  Rsh_Fir_array_deopt_stack61[2] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_deopt(211, 3, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

L201_:;
  // p3 = force? p2
  Rsh_Fir_reg_p3_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_p2_1);
  // checkMissing(p3)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_Fir_reg_p3_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args184, Rsh_Fir_param_types_empty()));
  // sym22 = ldf `rep.int`
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base22 = ldf `rep.int` in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args185[2];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args185[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args185);
  // if guard22 then L202() else L203()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L202()
    goto L202_;
  } else {
  // L203()
    goto L203_;
  }

L45_:;
  // r145 = `*`(p6, r106)
  SEXP Rsh_Fir_array_args186[2];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_p6_1;
  Rsh_Fir_array_args186[1] = Rsh_Fir_reg_r106_;
  Rsh_Fir_reg_r145_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args186);
  // r146 = `+`(y4, r145)
  SEXP Rsh_Fir_array_args187[2];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_y4_;
  Rsh_Fir_array_args187[1] = Rsh_Fir_reg_r145_;
  Rsh_Fir_reg_r146_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args187);
  // st y = r146
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r146_, RHO);
  (void)(Rsh_Fir_reg_r146_);
  // p44 = ld p
  Rsh_Fir_reg_p44_ = Rsh_Fir_load(Rsh_const(CCP, 52), RHO);
  // check L247() else D75()
  // L247()
  goto L247_;

L202_:;
  // sym23 = ldf `rep.int`
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base23 = ldf `rep.int` in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args188[2];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args188[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args188);
  // if guard23 then L204() else L205()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L204()
    goto L204_;
  } else {
  // L205()
    goto L205_;
  }

L203_:;
  // r105 = dyn base22(<lang rep.int(seq.int(0, `-`(`[`(d, m), 1)), `*`(prod(`[`(d, seq_len(`-`(m, 1)))), rep.int(1, `[`(d, m))))>, <lang prod(`[`(d, seq.int(from=`+`(m, 1), length.out=`-`(n, m))))>)
  SEXP Rsh_Fir_array_args189[2];
  Rsh_Fir_array_args189[0] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args189[1] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names63[2];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_array_arg_names63[1] = R_MissingArg;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 2, Rsh_Fir_array_args189, Rsh_Fir_array_arg_names63, CCP, RHO);
  // goto L45(i2, y1, p3, r105)
  // L45(i2, y1, p3, r105)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_y4_ = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_p6_1 = Rsh_Fir_reg_p3_1;
  Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r105_;
  goto L45_;

D75_:;
  // deopt 279 [i7, p44]
  SEXP Rsh_Fir_array_deopt_stack62[2];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack62[1] = Rsh_Fir_reg_p44_;
  Rsh_Fir_deopt(279, 2, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

L46_:;
  // sym28 = ldf prod
  Rsh_Fir_reg_sym28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base28 = ldf prod in base
  Rsh_Fir_reg_base28_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard28 = `==`.4(sym28, base28)
  SEXP Rsh_Fir_array_args190[2];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_sym28_;
  Rsh_Fir_array_args190[1] = Rsh_Fir_reg_base28_;
  Rsh_Fir_reg_guard28_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args190);
  // if guard28 then L233() else L234()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard28_)) {
  // L233()
    goto L233_;
  } else {
  // L234()
    goto L234_;
  }

L204_:;
  // sym24 = ldf `seq.int`
  Rsh_Fir_reg_sym24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // base24 = ldf `seq.int` in base
  Rsh_Fir_reg_base24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // guard24 = `==`.4(sym24, base24)
  SEXP Rsh_Fir_array_args191[2];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_sym24_;
  Rsh_Fir_array_args191[1] = Rsh_Fir_reg_base24_;
  Rsh_Fir_reg_guard24_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args191);
  // if guard24 then L206() else L207()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard24_)) {
  // L206()
    goto L206_;
  } else {
  // L207()
    goto L207_;
  }

L205_:;
  // r107 = dyn base23(<lang seq.int(0, `-`(`[`(d, m), 1))>, <lang `*`(prod(`[`(d, seq_len(`-`(m, 1)))), rep.int(1, `[`(d, m)))>)
  SEXP Rsh_Fir_array_args192[2];
  Rsh_Fir_array_args192[0] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args192[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names64[2];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = R_MissingArg;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 2, Rsh_Fir_array_args192, Rsh_Fir_array_arg_names64, CCP, RHO);
  // goto L46(i2, y1, p3, r107)
  // L46(i2, y1, p3, r107)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_y7_ = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_p9_ = Rsh_Fir_reg_p3_1;
  Rsh_Fir_reg_r108_ = Rsh_Fir_reg_r107_;
  goto L46_;

L247_:;
  // p45 = force? p44
  Rsh_Fir_reg_p45_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_p44_);
  // checkMissing(p45)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_p45_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args193, Rsh_Fir_param_types_empty()));
  // d56 = ld d
  Rsh_Fir_reg_d56_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L248() else D76()
  // L248()
  goto L248_;

D76_:;
  // deopt 280 [i7, p45, d56]
  SEXP Rsh_Fir_array_deopt_stack63[3];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack63[1] = Rsh_Fir_reg_p45_;
  Rsh_Fir_array_deopt_stack63[2] = Rsh_Fir_reg_d56_;
  Rsh_Fir_deopt(280, 3, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

L47_:;
  // sym25 = ldf prod
  Rsh_Fir_reg_sym25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base25 = ldf prod in base
  Rsh_Fir_reg_base25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard25 = `==`.4(sym25, base25)
  SEXP Rsh_Fir_array_args194[2];
  Rsh_Fir_array_args194[0] = Rsh_Fir_reg_sym25_;
  Rsh_Fir_array_args194[1] = Rsh_Fir_reg_base25_;
  Rsh_Fir_reg_guard25_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args194);
  // if guard25 then L214() else L215()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard25_)) {
  // L214()
    goto L214_;
  } else {
  // L215()
    goto L215_;
  }

L54_:;
  // rep_int5 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r144 = dyn rep_int5(r108, r136)
  SEXP Rsh_Fir_array_args195[2];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_r108_;
  Rsh_Fir_array_args195[1] = Rsh_Fir_reg_r136_;
  SEXP Rsh_Fir_array_arg_names65[2];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_array_arg_names65[1] = R_MissingArg;
  Rsh_Fir_reg_r144_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int5_, 2, Rsh_Fir_array_args195, Rsh_Fir_array_arg_names65, CCP, RHO);
  // check L246() else D74()
  // L246()
  goto L246_;

L206_:;
  // d34 = ld d
  Rsh_Fir_reg_d34_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L208() else D58()
  // L208()
  goto L208_;

L207_:;
  // r109 = dyn base24(0, <lang `-`(`[`(d, m), 1)>)
  SEXP Rsh_Fir_array_args196[2];
  Rsh_Fir_array_args196[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args196[1] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names66[2];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_array_arg_names66[1] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base24_, 2, Rsh_Fir_array_args196, Rsh_Fir_array_arg_names66, CCP, RHO);
  // goto L47(i2, y1, p3, r109)
  // L47(i2, y1, p3, r109)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_y10_ = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_p12_ = Rsh_Fir_reg_p3_1;
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r109_;
  goto L47_;

L233_:;
  // d49 = ld d
  Rsh_Fir_reg_d49_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L235() else D68()
  // L235()
  goto L235_;

L234_:;
  // r135 = dyn base28(<lang `[`(d, seq.int(from=`+`(m, 1), length.out=`-`(n, m)))>)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names67[1];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_reg_r135_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base28_, 1, Rsh_Fir_array_args197, Rsh_Fir_array_arg_names67, CCP, RHO);
  // goto L54(i10, y7, p9, r135)
  // L54(i10, y7, p9, r135)
  Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i10_;
  Rsh_Fir_reg_y34_ = Rsh_Fir_reg_y7_;
  Rsh_Fir_reg_p36_ = Rsh_Fir_reg_p9_;
  Rsh_Fir_reg_r136_ = Rsh_Fir_reg_r135_;
  goto L54_;

L248_:;
  // d57 = force? d56
  Rsh_Fir_reg_d57_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d56_);
  // checkMissing(d57)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_d57_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty()));
  // c40 = `is.object`(d57)
  SEXP Rsh_Fir_array_args199[1];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_d57_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args199);
  // if c40 then L249() else L250(i7, p45, d57)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c40_)) {
  // L249()
    goto L249_;
  } else {
  // L250(i7, p45, d57)
    Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_p47_ = Rsh_Fir_reg_p45_;
    Rsh_Fir_reg_d59_ = Rsh_Fir_reg_d57_;
    goto L250_;
  }

D58_:;
  // deopt 219 [i2, y1, p3, d34]
  SEXP Rsh_Fir_array_deopt_stack64[4];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack64[1] = Rsh_Fir_reg_y1_;
  Rsh_Fir_array_deopt_stack64[2] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_deopt_stack64[3] = Rsh_Fir_reg_d34_;
  Rsh_Fir_deopt(219, 4, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

D68_:;
  // deopt 255 [i10, y7, p9, d49]
  SEXP Rsh_Fir_array_deopt_stack65[4];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack65[1] = Rsh_Fir_reg_y7_;
  Rsh_Fir_array_deopt_stack65[2] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_deopt_stack65[3] = Rsh_Fir_reg_d49_;
  Rsh_Fir_deopt(255, 4, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

D74_:;
  // deopt 275 [i37, y34, p36, r144]
  SEXP Rsh_Fir_array_deopt_stack66[4];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_i37_;
  Rsh_Fir_array_deopt_stack66[1] = Rsh_Fir_reg_y34_;
  Rsh_Fir_array_deopt_stack66[2] = Rsh_Fir_reg_p36_;
  Rsh_Fir_array_deopt_stack66[3] = Rsh_Fir_reg_r144_;
  Rsh_Fir_deopt(275, 4, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

L49_:;
  // sym27 = ldf `rep.int`
  Rsh_Fir_reg_sym27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base27 = ldf `rep.int` in base
  Rsh_Fir_reg_base27_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard27 = `==`.4(sym27, base27)
  SEXP Rsh_Fir_array_args200[2];
  Rsh_Fir_array_args200[0] = Rsh_Fir_reg_sym27_;
  Rsh_Fir_array_args200[1] = Rsh_Fir_reg_base27_;
  Rsh_Fir_reg_guard27_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args200);
  // if guard27 then L224() else L225()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard27_)) {
  // L224()
    goto L224_;
  } else {
  // L225()
    goto L225_;
  }

L57_:;
  // r148 = `*`(p49, dx23)
  SEXP Rsh_Fir_array_args201[2];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_p49_;
  Rsh_Fir_array_args201[1] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_reg_r148_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args201);
  // st p = r148
  Rsh_Fir_store(Rsh_const(CCP, 52), Rsh_Fir_reg_r148_, RHO);
  (void)(Rsh_Fir_reg_r148_);
  // goto L44(i48)
  // L44(i48)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i48_;
  goto L44_;

L208_:;
  // d35 = force? d34
  Rsh_Fir_reg_d35_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d34_);
  // checkMissing(d35)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_d35_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args202, Rsh_Fir_param_types_empty()));
  // c36 = `is.object`(d35)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_d35_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args203);
  // if c36 then L209() else L210(i2, y1, p3, d35)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L209()
    goto L209_;
  } else {
  // L210(i2, y1, p3, d35)
    Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_y12_ = Rsh_Fir_reg_y1_;
    Rsh_Fir_reg_p14_ = Rsh_Fir_reg_p3_1;
    Rsh_Fir_reg_d37_ = Rsh_Fir_reg_d35_;
    goto L210_;
  }

L214_:;
  // d38 = ld d
  Rsh_Fir_reg_d38_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L216() else D61()
  // L216()
  goto L216_;

L215_:;
  // r114 = dyn base25(<lang `[`(d, seq_len(`-`(m, 1)))>)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names68[1];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_reg_r114_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base25_, 1, Rsh_Fir_array_args204, Rsh_Fir_array_arg_names68, CCP, RHO);
  // goto L49(i13, y10, p12, r114)
  // L49(i13, y10, p12, r114)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_y17_ = Rsh_Fir_reg_y10_;
  Rsh_Fir_reg_p19_ = Rsh_Fir_reg_p12_;
  Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r114_;
  goto L49_;

L235_:;
  // d50 = force? d49
  Rsh_Fir_reg_d50_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d49_);
  // checkMissing(d50)
  SEXP Rsh_Fir_array_args205[1];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_d50_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args205, Rsh_Fir_param_types_empty()));
  // c39 = `is.object`(d50)
  SEXP Rsh_Fir_array_args206[1];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_d50_;
  Rsh_Fir_reg_c39_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args206);
  // if c39 then L236() else L237(i10, y7, p9, d50)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c39_)) {
  // L236()
    goto L236_;
  } else {
  // L237(i10, y7, p9, d50)
    Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i10_;
    Rsh_Fir_reg_y36_ = Rsh_Fir_reg_y7_;
    Rsh_Fir_reg_p38_ = Rsh_Fir_reg_p9_;
    Rsh_Fir_reg_d52_ = Rsh_Fir_reg_d50_;
    goto L237_;
  }

L246_:;
  // goto L45(i37, y34, p36, r144)
  // L45(i37, y34, p36, r144)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i37_;
  Rsh_Fir_reg_y4_ = Rsh_Fir_reg_y34_;
  Rsh_Fir_reg_p6_1 = Rsh_Fir_reg_p36_;
  Rsh_Fir_reg_r106_ = Rsh_Fir_reg_r144_;
  goto L45_;

L249_:;
  // dr22 = tryDispatchBuiltin.1("[", d57)
  SEXP Rsh_Fir_array_args207[2];
  Rsh_Fir_array_args207[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args207[1] = Rsh_Fir_reg_d57_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args207);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args208[1];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args208, Rsh_Fir_param_types_empty());
  // if dc11 then L251() else L250(i7, p45, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L251()
    goto L251_;
  } else {
  // L250(i7, p45, dr22)
    Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i7_;
    Rsh_Fir_reg_p47_ = Rsh_Fir_reg_p45_;
    Rsh_Fir_reg_d59_ = Rsh_Fir_reg_dr22_;
    goto L250_;
  }

L250_:;
  // m22 = ld m
  Rsh_Fir_reg_m22_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L252() else D77()
  // L252()
  goto L252_;

D61_:;
  // deopt 230 [i13, y10, p12, d38]
  SEXP Rsh_Fir_array_deopt_stack67[4];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack67[1] = Rsh_Fir_reg_y10_;
  Rsh_Fir_array_deopt_stack67[2] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_deopt_stack67[3] = Rsh_Fir_reg_d38_;
  Rsh_Fir_deopt(230, 4, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

D77_:;
  // deopt 282 [i46, p47, d59, m22]
  SEXP Rsh_Fir_array_deopt_stack68[4];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_i46_;
  Rsh_Fir_array_deopt_stack68[1] = Rsh_Fir_reg_p47_;
  Rsh_Fir_array_deopt_stack68[2] = Rsh_Fir_reg_d59_;
  Rsh_Fir_array_deopt_stack68[3] = Rsh_Fir_reg_m22_;
  Rsh_Fir_deopt(282, 4, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L48_:;
  // r112 = `-`(dx15, 1)
  SEXP Rsh_Fir_array_args209[2];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_args209[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r112_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args209);
  // seq_int1 = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // r113 = dyn seq_int1(0, r112)
  SEXP Rsh_Fir_array_args210[2];
  Rsh_Fir_array_args210[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args210[1] = Rsh_Fir_reg_r112_;
  SEXP Rsh_Fir_array_arg_names69[2];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_array_arg_names69[1] = R_MissingArg;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int1_, 2, Rsh_Fir_array_args210, Rsh_Fir_array_arg_names69, CCP, RHO);
  // check L213() else D60()
  // L213()
  goto L213_;

L52_:;
  // r133 = `*`(r125, r126)
  SEXP Rsh_Fir_array_args211[2];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_r125_;
  Rsh_Fir_array_args211[1] = Rsh_Fir_reg_r126_;
  Rsh_Fir_reg_r133_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args211);
  // rep_int4 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r134 = dyn rep_int4(r110, r133)
  SEXP Rsh_Fir_array_args212[2];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_r110_;
  Rsh_Fir_array_args212[1] = Rsh_Fir_reg_r133_;
  SEXP Rsh_Fir_array_arg_names70[2];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_array_arg_names70[1] = R_MissingArg;
  Rsh_Fir_reg_r134_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int4_, 2, Rsh_Fir_array_args212, Rsh_Fir_array_arg_names70, CCP, RHO);
  // check L232() else D67()
  // L232()
  goto L232_;

L55_:;
  // prod3 = ldf prod in base
  Rsh_Fir_reg_prod3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r143 = dyn prod3(dx21)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_array_arg_names71[1];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_reg_r143_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod3_, 1, Rsh_Fir_array_args213, Rsh_Fir_array_arg_names71, CCP, RHO);
  // check L245() else D73()
  // L245()
  goto L245_;

L209_:;
  // dr14 = tryDispatchBuiltin.1("[", d35)
  SEXP Rsh_Fir_array_args214[2];
  Rsh_Fir_array_args214[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args214[1] = Rsh_Fir_reg_d35_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args214);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args215, Rsh_Fir_param_types_empty());
  // if dc7 then L211() else L210(i2, y1, p3, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L211()
    goto L211_;
  } else {
  // L210(i2, y1, p3, dr14)
    Rsh_Fir_reg_i15_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_y12_ = Rsh_Fir_reg_y1_;
    Rsh_Fir_reg_p14_ = Rsh_Fir_reg_p3_1;
    Rsh_Fir_reg_d37_ = Rsh_Fir_reg_dr14_;
    goto L210_;
  }

L210_:;
  // m12 = ld m
  Rsh_Fir_reg_m12_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L212() else D59()
  // L212()
  goto L212_;

L216_:;
  // d39 = force? d38
  Rsh_Fir_reg_d39_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d38_);
  // checkMissing(d39)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_d39_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args216, Rsh_Fir_param_types_empty()));
  // c37 = `is.object`(d39)
  SEXP Rsh_Fir_array_args217[1];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_d39_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args217);
  // if c37 then L217() else L218(i13, y10, p12, d39)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L217()
    goto L217_;
  } else {
  // L218(i13, y10, p12, d39)
    Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i13_;
    Rsh_Fir_reg_y19_ = Rsh_Fir_reg_y10_;
    Rsh_Fir_reg_p21_ = Rsh_Fir_reg_p12_;
    Rsh_Fir_reg_d41_ = Rsh_Fir_reg_d39_;
    goto L218_;
  }

L224_:;
  // d45 = ld d
  Rsh_Fir_reg_d45_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L226() else D64()
  // L226()
  goto L226_;

L225_:;
  // r124 = dyn base27(1, <lang `[`(d, m)>)
  SEXP Rsh_Fir_array_args218[2];
  Rsh_Fir_array_args218[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args218[1] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names72[2];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_array_arg_names72[1] = R_MissingArg;
  Rsh_Fir_reg_r124_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base27_, 2, Rsh_Fir_array_args218, Rsh_Fir_array_arg_names72, CCP, RHO);
  // goto L52(i20, y17, p19, r115, r124)
  // L52(i20, y17, p19, r115, r124)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_y27_ = Rsh_Fir_reg_y17_;
  Rsh_Fir_reg_p29_ = Rsh_Fir_reg_p19_;
  Rsh_Fir_reg_r125_ = Rsh_Fir_reg_r115_;
  Rsh_Fir_reg_r126_ = Rsh_Fir_reg_r124_;
  goto L52_;

L236_:;
  // dr20 = tryDispatchBuiltin.1("[", d50)
  SEXP Rsh_Fir_array_args219[2];
  Rsh_Fir_array_args219[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args219[1] = Rsh_Fir_reg_d50_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args219);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args220, Rsh_Fir_param_types_empty());
  // if dc10 then L238() else L237(i10, y7, p9, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L238()
    goto L238_;
  } else {
  // L237(i10, y7, p9, dr20)
    Rsh_Fir_reg_i39_ = Rsh_Fir_reg_i10_;
    Rsh_Fir_reg_y36_ = Rsh_Fir_reg_y7_;
    Rsh_Fir_reg_p38_ = Rsh_Fir_reg_p9_;
    Rsh_Fir_reg_d52_ = Rsh_Fir_reg_dr20_;
    goto L237_;
  }

L237_:;
  // sym29 = ldf `seq.int`
  Rsh_Fir_reg_sym29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // base29 = ldf `seq.int` in base
  Rsh_Fir_reg_base29_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // guard29 = `==`.4(sym29, base29)
  SEXP Rsh_Fir_array_args221[2];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_sym29_;
  Rsh_Fir_array_args221[1] = Rsh_Fir_reg_base29_;
  Rsh_Fir_reg_guard29_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args221);
  // if guard29 then L239() else L240()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard29_)) {
  // L239()
    goto L239_;
  } else {
  // L240()
    goto L240_;
  }

L251_:;
  // dx22 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args222[1];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args222, Rsh_Fir_param_types_empty());
  // goto L57(i7, p45, dx22)
  // L57(i7, p45, dx22)
  Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_p49_ = Rsh_Fir_reg_p45_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L57_;

L252_:;
  // m23 = force? m22
  Rsh_Fir_reg_m23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m22_);
  // __11 = ldf `[` in base
  Rsh_Fir_reg___11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r147 = dyn __11(d59, m23)
  SEXP Rsh_Fir_array_args223[2];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_d59_;
  Rsh_Fir_array_args223[1] = Rsh_Fir_reg_m23_;
  SEXP Rsh_Fir_array_arg_names73[2];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_array_arg_names73[1] = R_MissingArg;
  Rsh_Fir_reg_r147_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___11_, 2, Rsh_Fir_array_args223, Rsh_Fir_array_arg_names73, CCP, RHO);
  // goto L57(i46, p47, r147)
  // L57(i46, p47, r147)
  Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i46_;
  Rsh_Fir_reg_p49_ = Rsh_Fir_reg_p47_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r147_;
  goto L57_;

D59_:;
  // deopt 221 [i15, y12, p14, d37, m12]
  SEXP Rsh_Fir_array_deopt_stack69[5];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_i15_;
  Rsh_Fir_array_deopt_stack69[1] = Rsh_Fir_reg_y12_;
  Rsh_Fir_array_deopt_stack69[2] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_deopt_stack69[3] = Rsh_Fir_reg_d37_;
  Rsh_Fir_array_deopt_stack69[4] = Rsh_Fir_reg_m12_;
  Rsh_Fir_deopt(221, 5, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

D60_:;
  // deopt 227 [i17, y14, p16, r113]
  SEXP Rsh_Fir_array_deopt_stack70[4];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_i17_;
  Rsh_Fir_array_deopt_stack70[1] = Rsh_Fir_reg_y14_;
  Rsh_Fir_array_deopt_stack70[2] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_deopt_stack70[3] = Rsh_Fir_reg_r113_;
  Rsh_Fir_deopt(227, 4, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

D64_:;
  // deopt 243 [i20, y17, p19, r115, d45]
  SEXP Rsh_Fir_array_deopt_stack71[5];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack71[1] = Rsh_Fir_reg_y17_;
  Rsh_Fir_array_deopt_stack71[2] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_deopt_stack71[3] = Rsh_Fir_reg_r115_;
  Rsh_Fir_array_deopt_stack71[4] = Rsh_Fir_reg_d45_;
  Rsh_Fir_deopt(243, 5, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

D67_:;
  // deopt 252 [i30, y27, p29, r134]
  SEXP Rsh_Fir_array_deopt_stack72[4];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_i30_;
  Rsh_Fir_array_deopt_stack72[1] = Rsh_Fir_reg_y27_;
  Rsh_Fir_array_deopt_stack72[2] = Rsh_Fir_reg_p29_;
  Rsh_Fir_array_deopt_stack72[3] = Rsh_Fir_reg_r134_;
  Rsh_Fir_deopt(252, 4, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

D73_:;
  // deopt 273 [i41, y38, p40, r143]
  SEXP Rsh_Fir_array_deopt_stack73[4];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_i41_;
  Rsh_Fir_array_deopt_stack73[1] = Rsh_Fir_reg_y38_;
  Rsh_Fir_array_deopt_stack73[2] = Rsh_Fir_reg_p40_;
  Rsh_Fir_array_deopt_stack73[3] = Rsh_Fir_reg_r143_;
  Rsh_Fir_deopt(273, 4, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

L50_:;
  // prod2 = ldf prod in base
  Rsh_Fir_reg_prod2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // r121 = dyn prod2(dx17)
  SEXP Rsh_Fir_array_args224[1];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_dx17_;
  SEXP Rsh_Fir_array_arg_names74[1];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prod2_, 1, Rsh_Fir_array_args224, Rsh_Fir_array_arg_names74, CCP, RHO);
  // check L223() else D63()
  // L223()
  goto L223_;

L56_:;
  // __10 = ldf `[` in base
  Rsh_Fir_reg___10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r142 = dyn __10(d55, r138)
  SEXP Rsh_Fir_array_args225[2];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_d55_;
  Rsh_Fir_array_args225[1] = Rsh_Fir_reg_r138_;
  SEXP Rsh_Fir_array_arg_names75[2];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_array_arg_names75[1] = R_MissingArg;
  Rsh_Fir_reg_r142_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___10_, 2, Rsh_Fir_array_args225, Rsh_Fir_array_arg_names75, CCP, RHO);
  // goto L55(i44, y41, p43, r142)
  // L55(i44, y41, p43, r142)
  Rsh_Fir_reg_i41_ = Rsh_Fir_reg_i44_;
  Rsh_Fir_reg_y38_ = Rsh_Fir_reg_y41_;
  Rsh_Fir_reg_p40_ = Rsh_Fir_reg_p43_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r142_;
  goto L55_;

L211_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args226[1];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args226, Rsh_Fir_param_types_empty());
  // goto L48(i2, y1, p3, dx14)
  // L48(i2, y1, p3, dx14)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_y14_ = Rsh_Fir_reg_y1_;
  Rsh_Fir_reg_p16_ = Rsh_Fir_reg_p3_1;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L48_;

L212_:;
  // m13 = force? m12
  Rsh_Fir_reg_m13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m12_);
  // __7 = ldf `[` in base
  Rsh_Fir_reg___7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r111 = dyn __7(d37, m13)
  SEXP Rsh_Fir_array_args227[2];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_d37_;
  Rsh_Fir_array_args227[1] = Rsh_Fir_reg_m13_;
  SEXP Rsh_Fir_array_arg_names76[2];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_array_arg_names76[1] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___7_, 2, Rsh_Fir_array_args227, Rsh_Fir_array_arg_names76, CCP, RHO);
  // goto L48(i15, y12, p14, r111)
  // L48(i15, y12, p14, r111)
  Rsh_Fir_reg_i17_ = Rsh_Fir_reg_i15_;
  Rsh_Fir_reg_y14_ = Rsh_Fir_reg_y12_;
  Rsh_Fir_reg_p16_ = Rsh_Fir_reg_p14_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r111_;
  goto L48_;

L213_:;
  // goto L47(i17, y14, p16, r113)
  // L47(i17, y14, p16, r113)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i17_;
  Rsh_Fir_reg_y10_ = Rsh_Fir_reg_y14_;
  Rsh_Fir_reg_p12_ = Rsh_Fir_reg_p16_;
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r113_;
  goto L47_;

L217_:;
  // dr16 = tryDispatchBuiltin.1("[", d39)
  SEXP Rsh_Fir_array_args228[2];
  Rsh_Fir_array_args228[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args228[1] = Rsh_Fir_reg_d39_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args228);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args229[1];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args229, Rsh_Fir_param_types_empty());
  // if dc8 then L219() else L218(i13, y10, p12, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L219()
    goto L219_;
  } else {
  // L218(i13, y10, p12, dr16)
    Rsh_Fir_reg_i22_ = Rsh_Fir_reg_i13_;
    Rsh_Fir_reg_y19_ = Rsh_Fir_reg_y10_;
    Rsh_Fir_reg_p21_ = Rsh_Fir_reg_p12_;
    Rsh_Fir_reg_d41_ = Rsh_Fir_reg_dr16_;
    goto L218_;
  }

L218_:;
  // sym26 = ldf seq_len
  Rsh_Fir_reg_sym26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base26 = ldf seq_len in base
  Rsh_Fir_reg_base26_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard26 = `==`.4(sym26, base26)
  SEXP Rsh_Fir_array_args230[2];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_sym26_;
  Rsh_Fir_array_args230[1] = Rsh_Fir_reg_base26_;
  Rsh_Fir_reg_guard26_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args230);
  // if guard26 then L220() else L221()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard26_)) {
  // L220()
    goto L220_;
  } else {
  // L221()
    goto L221_;
  }

L226_:;
  // d46 = force? d45
  Rsh_Fir_reg_d46_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d45_);
  // checkMissing(d46)
  SEXP Rsh_Fir_array_args231[1];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_d46_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args231, Rsh_Fir_param_types_empty()));
  // c38 = `is.object`(d46)
  SEXP Rsh_Fir_array_args232[1];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_d46_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args232);
  // if c38 then L227() else L228(i20, y17, p19, r115, d46)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L227()
    goto L227_;
  } else {
  // L228(i20, y17, p19, r115, d46)
    Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i20_;
    Rsh_Fir_reg_y29_ = Rsh_Fir_reg_y17_;
    Rsh_Fir_reg_p31_ = Rsh_Fir_reg_p19_;
    Rsh_Fir_reg_r128_ = Rsh_Fir_reg_r115_;
    Rsh_Fir_reg_d48_ = Rsh_Fir_reg_d46_;
    goto L228_;
  }

L232_:;
  // goto L46(i30, y27, p29, r134)
  // L46(i30, y27, p29, r134)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i30_;
  Rsh_Fir_reg_y7_ = Rsh_Fir_reg_y27_;
  Rsh_Fir_reg_p9_ = Rsh_Fir_reg_p29_;
  Rsh_Fir_reg_r108_ = Rsh_Fir_reg_r134_;
  goto L46_;

L238_:;
  // dx20 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args233[1];
  Rsh_Fir_array_args233[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args233, Rsh_Fir_param_types_empty());
  // goto L55(i10, y7, p9, dx20)
  // L55(i10, y7, p9, dx20)
  Rsh_Fir_reg_i41_ = Rsh_Fir_reg_i10_;
  Rsh_Fir_reg_y38_ = Rsh_Fir_reg_y7_;
  Rsh_Fir_reg_p40_ = Rsh_Fir_reg_p9_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L55_;

L239_:;
  // m18 = ld m
  Rsh_Fir_reg_m18_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L241() else D69()
  // L241()
  goto L241_;

L240_:;
  // r137 = dyn base29[from, `length.out`](<lang `+`(m, 1)>, <lang `-`(n, m)>)
  SEXP Rsh_Fir_array_args234[2];
  Rsh_Fir_array_args234[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args234[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names77[2];
  Rsh_Fir_array_arg_names77[0] = Rsh_const(CCP, 58);
  Rsh_Fir_array_arg_names77[1] = Rsh_const(CCP, 59);
  Rsh_Fir_reg_r137_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base29_, 2, Rsh_Fir_array_args234, Rsh_Fir_array_arg_names77, CCP, RHO);
  // goto L56(i39, y36, p38, d52, r137)
  // L56(i39, y36, p38, d52, r137)
  Rsh_Fir_reg_i44_ = Rsh_Fir_reg_i39_;
  Rsh_Fir_reg_y41_ = Rsh_Fir_reg_y36_;
  Rsh_Fir_reg_p43_ = Rsh_Fir_reg_p38_;
  Rsh_Fir_reg_d55_ = Rsh_Fir_reg_d52_;
  Rsh_Fir_reg_r138_ = Rsh_Fir_reg_r137_;
  goto L56_;

L245_:;
  // goto L54(i41, y38, p40, r143)
  // L54(i41, y38, p40, r143)
  Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i41_;
  Rsh_Fir_reg_y34_ = Rsh_Fir_reg_y38_;
  Rsh_Fir_reg_p36_ = Rsh_Fir_reg_p40_;
  Rsh_Fir_reg_r136_ = Rsh_Fir_reg_r143_;
  goto L54_;

D63_:;
  // deopt 240 [i24, y21, p23, r121]
  SEXP Rsh_Fir_array_deopt_stack74[4];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_i24_;
  Rsh_Fir_array_deopt_stack74[1] = Rsh_Fir_reg_y21_;
  Rsh_Fir_array_deopt_stack74[2] = Rsh_Fir_reg_p23_;
  Rsh_Fir_array_deopt_stack74[3] = Rsh_Fir_reg_r121_;
  Rsh_Fir_deopt(240, 4, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

D69_:;
  // deopt 259 [i39, y36, p38, d52, m18]
  SEXP Rsh_Fir_array_deopt_stack75[5];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_i39_;
  Rsh_Fir_array_deopt_stack75[1] = Rsh_Fir_reg_y36_;
  Rsh_Fir_array_deopt_stack75[2] = Rsh_Fir_reg_p38_;
  Rsh_Fir_array_deopt_stack75[3] = Rsh_Fir_reg_d52_;
  Rsh_Fir_array_deopt_stack75[4] = Rsh_Fir_reg_m18_;
  Rsh_Fir_deopt(259, 5, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

L51_:;
  // __8 = ldf `[` in base
  Rsh_Fir_reg___8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r120 = dyn __8(d44, r117)
  SEXP Rsh_Fir_array_args235[2];
  Rsh_Fir_array_args235[0] = Rsh_Fir_reg_d44_;
  Rsh_Fir_array_args235[1] = Rsh_Fir_reg_r117_;
  SEXP Rsh_Fir_array_arg_names78[2];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_array_arg_names78[1] = R_MissingArg;
  Rsh_Fir_reg_r120_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___8_, 2, Rsh_Fir_array_args235, Rsh_Fir_array_arg_names78, CCP, RHO);
  // goto L50(i27, y24, p26, r120)
  // L50(i27, y24, p26, r120)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i27_;
  Rsh_Fir_reg_y21_ = Rsh_Fir_reg_y24_;
  Rsh_Fir_reg_p23_ = Rsh_Fir_reg_p26_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r120_;
  goto L50_;

L53_:;
  // rep_int3 = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r132 = dyn rep_int3(1, dx19)
  SEXP Rsh_Fir_array_args236[2];
  Rsh_Fir_array_args236[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args236[1] = Rsh_Fir_reg_dx19_;
  SEXP Rsh_Fir_array_arg_names79[2];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_array_arg_names79[1] = R_MissingArg;
  Rsh_Fir_reg_r132_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int3_, 2, Rsh_Fir_array_args236, Rsh_Fir_array_arg_names79, CCP, RHO);
  // check L231() else D66()
  // L231()
  goto L231_;

L219_:;
  // dx16 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args237[1];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args237, Rsh_Fir_param_types_empty());
  // goto L50(i13, y10, p12, dx16)
  // L50(i13, y10, p12, dx16)
  Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_y21_ = Rsh_Fir_reg_y10_;
  Rsh_Fir_reg_p23_ = Rsh_Fir_reg_p12_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L50_;

L220_:;
  // m14 = ld m
  Rsh_Fir_reg_m14_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L222() else D62()
  // L222()
  goto L222_;

L221_:;
  // r116 = dyn base26(<lang `-`(m, 1)>)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_const(CCP, 62);
  SEXP Rsh_Fir_array_arg_names80[1];
  Rsh_Fir_array_arg_names80[0] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base26_, 1, Rsh_Fir_array_args238, Rsh_Fir_array_arg_names80, CCP, RHO);
  // goto L51(i22, y19, p21, d41, r116)
  // L51(i22, y19, p21, d41, r116)
  Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i22_;
  Rsh_Fir_reg_y24_ = Rsh_Fir_reg_y19_;
  Rsh_Fir_reg_p26_ = Rsh_Fir_reg_p21_;
  Rsh_Fir_reg_d44_ = Rsh_Fir_reg_d41_;
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r116_;
  goto L51_;

L223_:;
  // goto L49(i24, y21, p23, r121)
  // L49(i24, y21, p23, r121)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i24_;
  Rsh_Fir_reg_y17_ = Rsh_Fir_reg_y21_;
  Rsh_Fir_reg_p19_ = Rsh_Fir_reg_p23_;
  Rsh_Fir_reg_r115_ = Rsh_Fir_reg_r121_;
  goto L49_;

L227_:;
  // dr18 = tryDispatchBuiltin.1("[", d46)
  SEXP Rsh_Fir_array_args239[2];
  Rsh_Fir_array_args239[0] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args239[1] = Rsh_Fir_reg_d46_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args239);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args240[1];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args240, Rsh_Fir_param_types_empty());
  // if dc9 then L229() else L228(i20, y17, p19, r115, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L229()
    goto L229_;
  } else {
  // L228(i20, y17, p19, r115, dr18)
    Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i20_;
    Rsh_Fir_reg_y29_ = Rsh_Fir_reg_y17_;
    Rsh_Fir_reg_p31_ = Rsh_Fir_reg_p19_;
    Rsh_Fir_reg_r128_ = Rsh_Fir_reg_r115_;
    Rsh_Fir_reg_d48_ = Rsh_Fir_reg_dr18_;
    goto L228_;
  }

L228_:;
  // m16 = ld m
  Rsh_Fir_reg_m16_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L230() else D65()
  // L230()
  goto L230_;

L241_:;
  // m19 = force? m18
  Rsh_Fir_reg_m19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m18_);
  // checkMissing(m19)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_m19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args241, Rsh_Fir_param_types_empty()));
  // r139 = `+`(m19, 1)
  SEXP Rsh_Fir_array_args242[2];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_m19_;
  Rsh_Fir_array_args242[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r139_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args242);
  // n4 = ld n
  Rsh_Fir_reg_n4_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L242() else D70()
  // L242()
  goto L242_;

D62_:;
  // deopt 233 [i22, y19, p21, d41, m14]
  SEXP Rsh_Fir_array_deopt_stack76[5];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_deopt_stack76[1] = Rsh_Fir_reg_y19_;
  Rsh_Fir_array_deopt_stack76[2] = Rsh_Fir_reg_p21_;
  Rsh_Fir_array_deopt_stack76[3] = Rsh_Fir_reg_d41_;
  Rsh_Fir_array_deopt_stack76[4] = Rsh_Fir_reg_m14_;
  Rsh_Fir_deopt(233, 5, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

D65_:;
  // deopt 245 [i32, y29, p31, r128, d48, m16]
  SEXP Rsh_Fir_array_deopt_stack77[6];
  Rsh_Fir_array_deopt_stack77[0] = Rsh_Fir_reg_i32_;
  Rsh_Fir_array_deopt_stack77[1] = Rsh_Fir_reg_y29_;
  Rsh_Fir_array_deopt_stack77[2] = Rsh_Fir_reg_p31_;
  Rsh_Fir_array_deopt_stack77[3] = Rsh_Fir_reg_r128_;
  Rsh_Fir_array_deopt_stack77[4] = Rsh_Fir_reg_d48_;
  Rsh_Fir_array_deopt_stack77[5] = Rsh_Fir_reg_m16_;
  Rsh_Fir_deopt(245, 6, Rsh_Fir_array_deopt_stack77, CCP, RHO);
  return R_NilValue;

D66_:;
  // deopt 249 [i34, y31, p33, r130, r132]
  SEXP Rsh_Fir_array_deopt_stack78[5];
  Rsh_Fir_array_deopt_stack78[0] = Rsh_Fir_reg_i34_;
  Rsh_Fir_array_deopt_stack78[1] = Rsh_Fir_reg_y31_;
  Rsh_Fir_array_deopt_stack78[2] = Rsh_Fir_reg_p33_;
  Rsh_Fir_array_deopt_stack78[3] = Rsh_Fir_reg_r130_;
  Rsh_Fir_array_deopt_stack78[4] = Rsh_Fir_reg_r132_;
  Rsh_Fir_deopt(249, 5, Rsh_Fir_array_deopt_stack78, CCP, RHO);
  return R_NilValue;

D70_:;
  // deopt 264 [i39, y36, p38, d52, n4]
  SEXP Rsh_Fir_array_deopt_stack79[5];
  Rsh_Fir_array_deopt_stack79[0] = Rsh_Fir_reg_i39_;
  Rsh_Fir_array_deopt_stack79[1] = Rsh_Fir_reg_y36_;
  Rsh_Fir_array_deopt_stack79[2] = Rsh_Fir_reg_p38_;
  Rsh_Fir_array_deopt_stack79[3] = Rsh_Fir_reg_d52_;
  Rsh_Fir_array_deopt_stack79[4] = Rsh_Fir_reg_n4_;
  Rsh_Fir_deopt(264, 5, Rsh_Fir_array_deopt_stack79, CCP, RHO);
  return R_NilValue;

L222_:;
  // m15 = force? m14
  Rsh_Fir_reg_m15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m14_);
  // checkMissing(m15)
  SEXP Rsh_Fir_array_args243[1];
  Rsh_Fir_array_args243[0] = Rsh_Fir_reg_m15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args243, Rsh_Fir_param_types_empty()));
  // r118 = `-`(m15, 1)
  SEXP Rsh_Fir_array_args244[2];
  Rsh_Fir_array_args244[0] = Rsh_Fir_reg_m15_;
  Rsh_Fir_array_args244[1] = Rsh_const(CCP, 32);
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args244);
  // r119 = seq_len(r118)
  SEXP Rsh_Fir_array_args245[1];
  Rsh_Fir_array_args245[0] = Rsh_Fir_reg_r118_;
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_builtin(423, RHO, 1, Rsh_Fir_array_args245);
  // goto L51(i22, y19, p21, d41, r119)
  // L51(i22, y19, p21, d41, r119)
  Rsh_Fir_reg_i27_ = Rsh_Fir_reg_i22_;
  Rsh_Fir_reg_y24_ = Rsh_Fir_reg_y19_;
  Rsh_Fir_reg_p26_ = Rsh_Fir_reg_p21_;
  Rsh_Fir_reg_d44_ = Rsh_Fir_reg_d41_;
  Rsh_Fir_reg_r117_ = Rsh_Fir_reg_r119_;
  goto L51_;

L229_:;
  // dx18 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args246[1];
  Rsh_Fir_array_args246[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args246, Rsh_Fir_param_types_empty());
  // goto L53(i20, y17, p19, r115, dx18)
  // L53(i20, y17, p19, r115, dx18)
  Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_y31_ = Rsh_Fir_reg_y17_;
  Rsh_Fir_reg_p33_ = Rsh_Fir_reg_p19_;
  Rsh_Fir_reg_r130_ = Rsh_Fir_reg_r115_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L53_;

L230_:;
  // m17 = force? m16
  Rsh_Fir_reg_m17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m16_);
  // __9 = ldf `[` in base
  Rsh_Fir_reg___9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r131 = dyn __9(d48, m17)
  SEXP Rsh_Fir_array_args247[2];
  Rsh_Fir_array_args247[0] = Rsh_Fir_reg_d48_;
  Rsh_Fir_array_args247[1] = Rsh_Fir_reg_m17_;
  SEXP Rsh_Fir_array_arg_names81[2];
  Rsh_Fir_array_arg_names81[0] = R_MissingArg;
  Rsh_Fir_array_arg_names81[1] = R_MissingArg;
  Rsh_Fir_reg_r131_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___9_, 2, Rsh_Fir_array_args247, Rsh_Fir_array_arg_names81, CCP, RHO);
  // goto L53(i32, y29, p31, r128, r131)
  // L53(i32, y29, p31, r128, r131)
  Rsh_Fir_reg_i34_ = Rsh_Fir_reg_i32_;
  Rsh_Fir_reg_y31_ = Rsh_Fir_reg_y29_;
  Rsh_Fir_reg_p33_ = Rsh_Fir_reg_p31_;
  Rsh_Fir_reg_r130_ = Rsh_Fir_reg_r128_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r131_;
  goto L53_;

L231_:;
  // goto L52(i34, y31, p33, r130, r132)
  // L52(i34, y31, p33, r130, r132)
  Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i34_;
  Rsh_Fir_reg_y27_ = Rsh_Fir_reg_y31_;
  Rsh_Fir_reg_p29_ = Rsh_Fir_reg_p33_;
  Rsh_Fir_reg_r125_ = Rsh_Fir_reg_r130_;
  Rsh_Fir_reg_r126_ = Rsh_Fir_reg_r132_;
  goto L52_;

L242_:;
  // n5 = force? n4
  Rsh_Fir_reg_n5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n4_);
  // checkMissing(n5)
  SEXP Rsh_Fir_array_args248[1];
  Rsh_Fir_array_args248[0] = Rsh_Fir_reg_n5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args248, Rsh_Fir_param_types_empty()));
  // m20 = ld m
  Rsh_Fir_reg_m20_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // check L243() else D71()
  // L243()
  goto L243_;

D71_:;
  // deopt 265 [i39, y36, p38, d52, n5, m20]
  SEXP Rsh_Fir_array_deopt_stack80[6];
  Rsh_Fir_array_deopt_stack80[0] = Rsh_Fir_reg_i39_;
  Rsh_Fir_array_deopt_stack80[1] = Rsh_Fir_reg_y36_;
  Rsh_Fir_array_deopt_stack80[2] = Rsh_Fir_reg_p38_;
  Rsh_Fir_array_deopt_stack80[3] = Rsh_Fir_reg_d52_;
  Rsh_Fir_array_deopt_stack80[4] = Rsh_Fir_reg_n5_;
  Rsh_Fir_array_deopt_stack80[5] = Rsh_Fir_reg_m20_;
  Rsh_Fir_deopt(265, 6, Rsh_Fir_array_deopt_stack80, CCP, RHO);
  return R_NilValue;

L243_:;
  // m21 = force? m20
  Rsh_Fir_reg_m21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m20_);
  // checkMissing(m21)
  SEXP Rsh_Fir_array_args249[1];
  Rsh_Fir_array_args249[0] = Rsh_Fir_reg_m21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args249, Rsh_Fir_param_types_empty()));
  // r140 = `-`(n5, m21)
  SEXP Rsh_Fir_array_args250[2];
  Rsh_Fir_array_args250[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_array_args250[1] = Rsh_Fir_reg_m21_;
  Rsh_Fir_reg_r140_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args250);
  // seq_int2 = ldf `seq.int` in base
  Rsh_Fir_reg_seq_int2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // r141 = dyn seq_int2(r139, r140)
  SEXP Rsh_Fir_array_args251[2];
  Rsh_Fir_array_args251[0] = Rsh_Fir_reg_r139_;
  Rsh_Fir_array_args251[1] = Rsh_Fir_reg_r140_;
  SEXP Rsh_Fir_array_arg_names82[2];
  Rsh_Fir_array_arg_names82[0] = R_MissingArg;
  Rsh_Fir_array_arg_names82[1] = R_MissingArg;
  Rsh_Fir_reg_r141_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq_int2_, 2, Rsh_Fir_array_args251, Rsh_Fir_array_arg_names82, CCP, RHO);
  // check L244() else D72()
  // L244()
  goto L244_;

D72_:;
  // deopt 270 [i39, y36, p38, d52, r141]
  SEXP Rsh_Fir_array_deopt_stack81[5];
  Rsh_Fir_array_deopt_stack81[0] = Rsh_Fir_reg_i39_;
  Rsh_Fir_array_deopt_stack81[1] = Rsh_Fir_reg_y36_;
  Rsh_Fir_array_deopt_stack81[2] = Rsh_Fir_reg_p38_;
  Rsh_Fir_array_deopt_stack81[3] = Rsh_Fir_reg_d52_;
  Rsh_Fir_array_deopt_stack81[4] = Rsh_Fir_reg_r141_;
  Rsh_Fir_deopt(270, 5, Rsh_Fir_array_deopt_stack81, CCP, RHO);
  return R_NilValue;

L244_:;
  // goto L56(i39, y36, p38, d52, r141)
  // L56(i39, y36, p38, d52, r141)
  Rsh_Fir_reg_i44_ = Rsh_Fir_reg_i39_;
  Rsh_Fir_reg_y41_ = Rsh_Fir_reg_y36_;
  Rsh_Fir_reg_p43_ = Rsh_Fir_reg_p38_;
  Rsh_Fir_reg_d55_ = Rsh_Fir_reg_d52_;
  Rsh_Fir_reg_r138_ = Rsh_Fir_reg_r141_;
  goto L56_;
}
SEXP Rsh_Fir_user_promise_inner2186253718_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_integer;
  SEXP Rsh_Fir_reg_r51_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2186253718/0: expected 0, got %d", NCAPTURES);

  // integer = ldf integer
  Rsh_Fir_reg_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // r51 = dyn integer()
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_integer, 0, NULL, NULL, CCP, RHO);
  // return r51
  return Rsh_Fir_reg_r51_;
}
SEXP Rsh_Fir_user_promise_inner2186253718_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_d6_;
  SEXP Rsh_Fir_reg_d7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2186253718/0: expected 0, got %d", NCAPTURES);

  // d6 = ld d
  Rsh_Fir_reg_d6_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // d7 = force? d6
  Rsh_Fir_reg_d7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_d6_);
  // checkMissing(d7)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_d7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // return d7
  return Rsh_Fir_reg_d7_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
