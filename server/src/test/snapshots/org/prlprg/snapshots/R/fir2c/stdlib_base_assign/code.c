#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1954164474_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1954164474_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1954164474_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1954164474_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_s;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_i;
  SEXP Rsh_Fir_reg_i1_;
  SEXP Rsh_Fir_reg_i2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_paste;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_assign;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_ls;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_myf;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_Global_res;
  SEXP Rsh_Fir_reg_Global_res1_;
  SEXP Rsh_Fir_reg_assign1_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_a;
  SEXP Rsh_Fir_reg_a1_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_a3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_get;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1954164474
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1954164474_, RHO, CCP);
  // st assign = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // s = toForSeq(<int 1, 2, 3, 4, 5, 6>)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, RHO, 1, Rsh_Fir_array_args1);
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 2);
  // goto L0(i)
  // L0(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L0_;

L0_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args2);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if c then L3() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L3()
    goto L3_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args4[4];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args4[3] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, RHO, 4, Rsh_Fir_array_args4);
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L4() else D0()
  // L4()
  goto L4_;

L3_:;
  // ls = ldf ls
  Rsh_Fir_reg_ls = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L8() else D4()
  // L8()
  goto L8_;

D0_:;
  // deopt 6 [i2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // p = prom<V +>{
  //   i5 = ld i;
  //   i6 = force? i5;
  //   checkMissing(i6);
  //   return i6;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r2 = dyn paste[, , sep]("r", p, ".")
  SEXP Rsh_Fir_array_args6[3];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args6[2] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 3, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

L8_:;
  // r7 = dyn ls[pattern]("^r..$")
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ls, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L9() else D5()
  // L9()
  goto L9_;

D1_:;
  // deopt 11 [i2, r2]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(11, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 25 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // st nam = r2
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // assign = ldf assign
  Rsh_Fir_reg_assign = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L6() else D2()
  // L6()
  goto L6_;

L9_:;
  // r8 = clos inner2501545716
  Rsh_Fir_reg_r8_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st myf = r8
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // myf = ldf myf
  Rsh_Fir_reg_myf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L10() else D6()
  // L10()
  goto L10_;

D2_:;
  // deopt 14 [i2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p1 = prom<V +>{
  //   nam = ld nam;
  //   nam1 = force? nam;
  //   checkMissing(nam1);
  //   return nam1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   i7 = ld i;
  //   i8 = force? i7;
  //   checkMissing(i8);
  //   r4 = `:`(1.0, i8);
  //   return r4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r6 = dyn assign(p1, p2)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assign, 2, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

L10_:;
  // r9 = dyn myf(3.0)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_myf, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L11() else D7()
  // L11()
  goto L11_;

D3_:;
  // deopt 17 [i2, r6]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 32 [r9]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L0(i2)
  // L0(i2)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i2_;
  goto L0_;

L11_:;
  // Global_res = ld `Global.res`
  Rsh_Fir_reg_Global_res = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L12() else D8()
  // L12()
  goto L12_;

D8_:;
  // deopt 33 [Global_res]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_Global_res;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L12_:;
  // Global_res1 = force? Global_res
  Rsh_Fir_reg_Global_res1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Global_res);
  // checkMissing(Global_res1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_Global_res1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // st a = <int 1, 2, 3, 4>
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_const(CCP, 19), RHO);
  (void)(Rsh_const(CCP, 19));
  // assign1 = ldf assign
  Rsh_Fir_reg_assign1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L13() else D9()
  // L13()
  goto L13_;

D9_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // r10 = dyn assign1("a[1]", 2.0)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assign1_, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L14() else D10()
  // L14()
  goto L14_;

D10_:;
  // deopt 42 [r10]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L14_:;
  // a = ld a
  Rsh_Fir_reg_a = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L15() else D11()
  // L15()
  goto L15_;

D11_:;
  // deopt 43 [a]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_a;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L15_:;
  // a1 = force? a
  Rsh_Fir_reg_a1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a);
  // checkMissing(a1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_a1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(a1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_a1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args16);
  // if c1 then L16() else L17(a1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L16()
    goto L16_;
  } else {
  // L17(a1)
    Rsh_Fir_reg_a3_ = Rsh_Fir_reg_a1_;
    goto L17_;
  }

L2_:;
  // `==`(dx1, 2.0)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 22);
  (void)(Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args17));
  // get = ldf get
  Rsh_Fir_reg_get = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L19() else D12()
  // L19()
  goto L19_;

L16_:;
  // dr = tryDispatchBuiltin.1("[", a1)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_a1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args18);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if dc then L18() else L17(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L18()
    goto L18_;
  } else {
  // L17(dr)
    Rsh_Fir_reg_a3_ = Rsh_Fir_reg_dr;
    goto L17_;
  }

L17_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r11 = dyn __(a3, 1.0)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_a3_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r11)
  // L2(r11)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r11_;
  goto L2_;

D12_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L2(dx)
  // L2(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L2_;

L19_:;
  // r13 = dyn get("a[1]")
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L20() else D13()
  // L20()
  goto L20_;

D13_:;
  // deopt 53 [r13]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L20_:;
  // r14 = `==`(r13, 2.0)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args23);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_i5_;
  SEXP Rsh_Fir_reg_i6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // i5 = ld i
  Rsh_Fir_reg_i5_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // i6 = force? i5
  Rsh_Fir_reg_i6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i5_);
  // checkMissing(i6)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_i6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return i6
  return Rsh_Fir_reg_i6_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_nam;
  SEXP Rsh_Fir_reg_nam1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // nam = ld nam
  Rsh_Fir_reg_nam = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // nam1 = force? nam
  Rsh_Fir_reg_nam1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nam);
  // checkMissing(nam1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_nam1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return nam1
  return Rsh_Fir_reg_nam1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_i7_;
  SEXP Rsh_Fir_reg_i8_;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // i7 = ld i
  Rsh_Fir_reg_i7_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // i8 = force? i7
  Rsh_Fir_reg_i8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i7_);
  // checkMissing(i8)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_i8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // r4 = `:`(1.0, i8)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args10);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_function_inner1954164474_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1954164474 dynamic dispatch ([x, value, pos, envir, inherits, immediate])

  return Rsh_Fir_user_version_inner1954164474_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1954164474_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1954164474 version 0 (*, *, *, *, *, * -+> V)

  if (NPARAMS != 6) Rsh_error("FIŘ arity mismatch for inner1954164474/0: expected 6, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_value;
  SEXP Rsh_Fir_reg_pos;
  SEXP Rsh_Fir_reg_envir;
  SEXP Rsh_Fir_reg_inherits;
  SEXP Rsh_Fir_reg_immediate;
  SEXP Rsh_Fir_reg_pos_isMissing;
  SEXP Rsh_Fir_reg_pos_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_envir_isMissing;
  SEXP Rsh_Fir_reg_envir_orDefault;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_inherits_isMissing;
  SEXP Rsh_Fir_reg_inherits_orDefault;
  SEXP Rsh_Fir_reg_immediate_isMissing;
  SEXP Rsh_Fir_reg_immediate_orDefault;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_value1_;
  SEXP Rsh_Fir_reg_value2_;
  SEXP Rsh_Fir_reg_envir1_;
  SEXP Rsh_Fir_reg_envir2_;
  SEXP Rsh_Fir_reg_inherits1_;
  SEXP Rsh_Fir_reg_inherits2_;
  SEXP Rsh_Fir_reg_assign1;
  SEXP Rsh_Fir_reg_r7_1;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_value = PARAMS[1];
  Rsh_Fir_reg_pos = PARAMS[2];
  Rsh_Fir_reg_envir = PARAMS[3];
  Rsh_Fir_reg_inherits = PARAMS[4];
  Rsh_Fir_reg_immediate = PARAMS[5];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // st value = value
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_value, RHO);
  (void)(Rsh_Fir_reg_value);
  // pos_isMissing = missing.0(pos)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_pos;
  Rsh_Fir_reg_pos_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args24);
  // if pos_isMissing then L0() else L1(pos)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_pos_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(pos)
    Rsh_Fir_reg_pos_orDefault = Rsh_Fir_reg_pos;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   return -1.0;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1954164474_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_pos_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st pos = pos_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_pos_orDefault, RHO);
  (void)(Rsh_Fir_reg_pos_orDefault);
  // envir_isMissing = missing.0(envir)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_envir;
  Rsh_Fir_reg_envir_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args25);
  // if envir_isMissing then L2() else L3(envir)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_envir_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(envir)
    Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_envir;
    goto L3_;
  }

L2_:;
  // p1 = prom<V +>{
  //   sym = ldf `as.environment`;
  //   base = ldf `as.environment` in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   pos1 = ld pos;
  //   pos2 = force? pos1;
  //   checkMissing(pos2);
  //   as_environment = ldf `as.environment` in base;
  //   r3 = dyn as_environment(pos2);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(<sym pos>);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1954164474_1, 0, NULL, CCP, RHO);
  // goto L3(p1)
  // L3(p1)
  Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_p1_1;
  goto L3_;

L3_:;
  // st envir = envir_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 31), Rsh_Fir_reg_envir_orDefault, RHO);
  (void)(Rsh_Fir_reg_envir_orDefault);
  // inherits_isMissing = missing.0(inherits)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_inherits;
  Rsh_Fir_reg_inherits_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args30);
  // if inherits_isMissing then L4(FALSE) else L4(inherits)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_inherits_isMissing)) {
  // L4(FALSE)
    Rsh_Fir_reg_inherits_orDefault = Rsh_const(CCP, 32);
    goto L4_;
  } else {
  // L4(inherits)
    Rsh_Fir_reg_inherits_orDefault = Rsh_Fir_reg_inherits;
    goto L4_;
  }

L4_:;
  // st inherits = inherits_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_inherits_orDefault, RHO);
  (void)(Rsh_Fir_reg_inherits_orDefault);
  // immediate_isMissing = missing.0(immediate)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_immediate;
  Rsh_Fir_reg_immediate_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args31);
  // if immediate_isMissing then L5(TRUE) else L5(immediate)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_immediate_isMissing)) {
  // L5(TRUE)
    Rsh_Fir_reg_immediate_orDefault = Rsh_const(CCP, 5);
    goto L5_;
  } else {
  // L5(immediate)
    Rsh_Fir_reg_immediate_orDefault = Rsh_Fir_reg_immediate;
    goto L5_;
  }

L5_:;
  // st immediate = immediate_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_immediate_orDefault, RHO);
  (void)(Rsh_Fir_reg_immediate_orDefault);
  // sym1 = ldf `.Internal`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base1 = ldf `.Internal` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard1 then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L6_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_1;

L7_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L8_:;
  // r5 = dyn base1(<lang assign(x, value, envir, inherits)>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L6(r5)
  // L6(r5)
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r5_;
  goto L6_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L9_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 4 [value1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L10_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // envir1 = ld envir
  Rsh_Fir_reg_envir1_ = Rsh_Fir_load(Rsh_const(CCP, 31), RHO);
  // check L11() else D2()
  // L11()
  goto L11_;

D2_:;
  // deopt 6 [envir1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_envir1_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L11_:;
  // envir2 = force? envir1
  Rsh_Fir_reg_envir2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envir1_);
  // checkMissing(envir2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_envir2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty()));
  // inherits1 = ld inherits
  Rsh_Fir_reg_inherits1_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L12() else D3()
  // L12()
  goto L12_;

D3_:;
  // deopt 8 [inherits1]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_inherits1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L12_:;
  // inherits2 = force? inherits1
  Rsh_Fir_reg_inherits2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_inherits1_);
  // checkMissing(inherits2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_inherits2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // assign = ldf assign in base
  Rsh_Fir_reg_assign1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r7 = dyn assign(x2, value2, envir2, inherits2)
  SEXP Rsh_Fir_array_args38[4];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_value2_;
  Rsh_Fir_array_args38[2] = Rsh_Fir_reg_envir2_;
  Rsh_Fir_array_args38[3] = Rsh_Fir_reg_inherits2_;
  SEXP Rsh_Fir_array_arg_names10[4];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_array_arg_names10[3] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_assign1, 4, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L13() else D4()
  // L13()
  goto L13_;

D4_:;
  // deopt 11 [r7]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L6(r7)
  // L6(r7)
  Rsh_Fir_reg_r6_1 = Rsh_Fir_reg_r7_1;
  goto L6_;
}
SEXP Rsh_Fir_user_promise_inner1954164474_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1954164474/0: expected 0, got %d", NCAPTURES);

  // return -1.0
  return Rsh_const(CCP, 28);
}
SEXP Rsh_Fir_user_promise_inner1954164474_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_pos1_;
  SEXP Rsh_Fir_reg_pos2_;
  SEXP Rsh_Fir_reg_as_environment;
  SEXP Rsh_Fir_reg_r3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1954164474/0: expected 0, got %d", NCAPTURES);

  // sym = ldf `as.environment`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base = ldf `as.environment` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
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
  return Rsh_Fir_reg_r2_1;

L1_:;
  // pos1 = ld pos
  Rsh_Fir_reg_pos1_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // pos2 = force? pos1
  Rsh_Fir_reg_pos2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos1_);
  // checkMissing(pos2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_pos2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // as_environment = ldf `as.environment` in base
  Rsh_Fir_reg_as_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r3 = dyn as_environment(pos2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_pos2_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_environment, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base(<sym pos>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_1 = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x2;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_innerf;
  SEXP Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_reg_r3_1;

  // Bind parameters
  Rsh_Fir_reg_x2 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_x2, RHO);
  (void)(Rsh_Fir_reg_x2);
  // r = clos inner2501545716
  Rsh_Fir_reg_r1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st innerf = r
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // innerf = ldf innerf
  Rsh_Fir_reg_innerf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 37), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   r1 = `+`(x2, 1.0);
  //   return r1;
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_, 0, NULL, CCP, RHO);
  // r3 = dyn innerf(p)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_innerf, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_1;
}
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_reg_r1_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2501545716/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // r1 = `+`(x2, 1.0)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x2_1;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args40);
  // return r1
  return Rsh_Fir_reg_r1_1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
