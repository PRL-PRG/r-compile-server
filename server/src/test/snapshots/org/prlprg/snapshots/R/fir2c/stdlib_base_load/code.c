#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner1664694095_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1664694095_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1664694095_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1664694095_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1664694095_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1664694095_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1664694095_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1664694095_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1664694095_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1664694095_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1664694095_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1664694095_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1664694095_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner1664694095_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_setwd;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_save;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_rm;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_load;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_xx2_;
  SEXP Rsh_Fir_reg_xx3_;
  SEXP Rsh_Fir_reg_rm1_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_attach;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_ls1_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_detach;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_unlink;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_setwd1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r23_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1664694095
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1664694095_, RHO, CCP);
  // st load = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // setwd = ldf setwd
  Rsh_Fir_reg_setwd = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   tempdir = ldf tempdir;
  //   r1 = dyn tempdir();
  //   return r1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r3 = dyn setwd(p)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setwd, 1, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // st oldwd = r3
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // st xx = 3.141592653589793
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_const(CCP, 4), RHO);
  (void)(Rsh_const(CCP, 4));
  // save = ldf save
  Rsh_Fir_reg_save = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p1 = prom<V +>{
  //   ls = ldf ls;
  //   r4 = dyn ls[`all.names`](TRUE);
  //   return r4;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r6 = dyn save[list, file](p1, "all.rda")
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_save, 2, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L4() else D3()
  // L4()
  goto L4_;

D3_:;
  // deopt 17 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // rm = ldf rm
  Rsh_Fir_reg_rm = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L5() else D4()
  // L5()
  goto L5_;

D4_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // p2 = prom<V +>{
  //   xx = ld xx;
  //   xx1 = force? xx;
  //   checkMissing(xx1);
  //   return xx1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r8 = dyn rm(p2)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rm, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L6() else D5()
  // L6()
  goto L6_;

D5_:;
  // deopt 21 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L6_:;
  // r9 = clos inner2708337952
  Rsh_Fir_reg_r9_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // checkFun.0(r9)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r9_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args5));
  // r10 = r9 as cls
  Rsh_Fir_reg_r10_ = Rsh_Fir_cast(Rsh_Fir_reg_r9_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r11 = dyn r10()
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r10_, 0, NULL, NULL, CCP, RHO);
  // check L7() else D6()
  // L7()
  goto L7_;

D6_:;
  // deopt 25 [r11]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L7_:;
  // sym = ldf exp
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base = ldf exp in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L0_:;
  // st xx = r13
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r13_, RHO);
  (void)(Rsh_Fir_reg_r13_);
  // load = ldf load
  Rsh_Fir_reg_load = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

L8_:;
  // r14 = exp(<int 1, 2, 3>)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(172, RHO, 1, Rsh_Fir_array_args7);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L0_;

L9_:;
  // r12 = dyn base(<lang `:`(1.0, 3.0)>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L0_;

D7_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // r15 = dyn load("all.rda")
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_load, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

D8_:;
  // deopt 34 [r15]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L11_:;
  // xx2 = ld xx
  Rsh_Fir_reg_xx2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L12() else D9()
  // L12()
  goto L12_;

D9_:;
  // deopt 35 [xx2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_xx2_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L12_:;
  // xx3 = force? xx2
  Rsh_Fir_reg_xx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx2_);
  // checkMissing(xx3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_xx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // rm1 = ldf rm
  Rsh_Fir_reg_rm1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L13() else D10()
  // L13()
  goto L13_;

D10_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p3 = prom<V +>{
  //   xx4 = ld xx;
  //   xx5 = force? xx4;
  //   checkMissing(xx5);
  //   return xx5;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r17 = dyn rm1(p3)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rm1_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L14() else D11()
  // L14()
  goto L14_;

D11_:;
  // deopt 40 [r17]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L14_:;
  // attach = ldf attach
  Rsh_Fir_reg_attach = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L15() else D12()
  // L15()
  goto L15_;

D12_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L15_:;
  // r18 = dyn attach("all.rda")
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attach, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L16() else D13()
  // L16()
  goto L16_;

D13_:;
  // deopt 44 [r18]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L16_:;
  // ls1 = ldf ls
  Rsh_Fir_reg_ls1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L17() else D14()
  // L17()
  goto L17_;

D14_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // r19 = dyn ls1[pos](2.0)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ls1_, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L18() else D15()
  // L18()
  goto L18_;

D15_:;
  // deopt 49 [r19]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L18_:;
  // detach = ldf detach
  Rsh_Fir_reg_detach = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L19() else D16()
  // L19()
  goto L19_;

D16_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // r20 = dyn detach("file:all.rda")
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_detach, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L20() else D17()
  // L20()
  goto L20_;

D17_:;
  // deopt 53 [r20]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L20_:;
  // unlink = ldf unlink
  Rsh_Fir_reg_unlink = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L21() else D18()
  // L21()
  goto L21_;

D18_:;
  // deopt 55 []
  Rsh_Fir_deopt(55, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // r21 = dyn unlink("all.rda")
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlink, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L22() else D19()
  // L22()
  goto L22_;

D19_:;
  // deopt 57 [r21]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L22_:;
  // setwd1 = ldf setwd
  Rsh_Fir_reg_setwd1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L23() else D20()
  // L23()
  goto L23_;

D20_:;
  // deopt 59 []
  Rsh_Fir_deopt(59, 0, NULL, CCP, RHO);
  return R_NilValue;

L23_:;
  // p4 = prom<V +>{
  //   oldwd = ld oldwd;
  //   oldwd1 = force? oldwd;
  //   checkMissing(oldwd1);
  //   return oldwd1;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r23 = dyn setwd1(p4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setwd1_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L24() else D21()
  // L24()
  goto L24_;

D21_:;
  // deopt 61 [r23]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L24_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r23
  return Rsh_Fir_reg_r23_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_tempdir;
  SEXP Rsh_Fir_reg_r1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // tempdir = ldf tempdir
  Rsh_Fir_reg_tempdir = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // r1 = dyn tempdir()
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tempdir, 0, NULL, NULL, CCP, RHO);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ls;
  SEXP Rsh_Fir_reg_r4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ls = ldf ls
  Rsh_Fir_reg_ls = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // r4 = dyn ls[`all.names`](TRUE)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ls, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names1, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xx;
  SEXP Rsh_Fir_reg_xx1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // xx = ld xx
  Rsh_Fir_reg_xx = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // xx1 = force? xx
  Rsh_Fir_reg_xx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx);
  // checkMissing(xx1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_xx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return xx1
  return Rsh_Fir_reg_xx1_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_xx4_;
  SEXP Rsh_Fir_reg_xx5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // xx4 = ld xx
  Rsh_Fir_reg_xx4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // xx5 = force? xx4
  Rsh_Fir_reg_xx5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx4_);
  // checkMissing(xx5)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_xx5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return xx5
  return Rsh_Fir_reg_xx5_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_oldwd;
  SEXP Rsh_Fir_reg_oldwd1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // oldwd = ld oldwd
  Rsh_Fir_reg_oldwd = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // oldwd1 = force? oldwd
  Rsh_Fir_reg_oldwd1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_oldwd);
  // checkMissing(oldwd1)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_oldwd1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // return oldwd1
  return Rsh_Fir_reg_oldwd1_;
}
SEXP Rsh_Fir_user_function_inner1664694095_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1664694095 dynamic dispatch ([file, envir, verbose])

  return Rsh_Fir_user_version_inner1664694095_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1664694095_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1664694095 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner1664694095/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_file;
  SEXP Rsh_Fir_reg_envir;
  SEXP Rsh_Fir_reg_verbose;
  SEXP Rsh_Fir_reg_envir_isMissing;
  SEXP Rsh_Fir_reg_envir_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_verbose_isMissing;
  SEXP Rsh_Fir_reg_verbose_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_file1_;
  SEXP Rsh_Fir_reg_file2_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_gzfile;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_on_exit;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_readChar;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_magic;
  SEXP Rsh_Fir_reg_magic1_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_stop;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_grepl;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_grepl1_;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_r21_1;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_stop1_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_warning;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_file7_;
  SEXP Rsh_Fir_reg_file8_;
  SEXP Rsh_Fir_reg_envir1_;
  SEXP Rsh_Fir_reg_envir2_;
  SEXP Rsh_Fir_reg_load1;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_file9_;
  SEXP Rsh_Fir_reg_file10_;
  SEXP Rsh_Fir_reg_inherits;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_file11_;
  SEXP Rsh_Fir_reg_file12_;
  SEXP Rsh_Fir_reg_inherits1_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_file13_;
  SEXP Rsh_Fir_reg_file14_;
  SEXP Rsh_Fir_reg_inherits2_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_file15_;
  SEXP Rsh_Fir_reg_file16_;
  SEXP Rsh_Fir_reg_file17_;
  SEXP Rsh_Fir_reg_gzcon;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_stop2_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_verbose1_;
  SEXP Rsh_Fir_reg_verbose2_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_cat;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_con2_;
  SEXP Rsh_Fir_reg_con3_;
  SEXP Rsh_Fir_reg_envir3_;
  SEXP Rsh_Fir_reg_envir4_;
  SEXP Rsh_Fir_reg_verbose3_;
  SEXP Rsh_Fir_reg_verbose4_;
  SEXP Rsh_Fir_reg_loadFromConn2_;
  SEXP Rsh_Fir_reg_r57_;

  // Bind parameters
  Rsh_Fir_reg_file = PARAMS[0];
  Rsh_Fir_reg_envir = PARAMS[1];
  Rsh_Fir_reg_verbose = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st file = file
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_file, RHO);
  (void)(Rsh_Fir_reg_file);
  // envir_isMissing = missing.0(envir)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_envir;
  Rsh_Fir_reg_envir_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args19);
  // if envir_isMissing then L0() else L1(envir)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_envir_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(envir)
    Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_envir;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   parent_frame = ldf `parent.frame`;
  //   r = dyn parent_frame();
  //   return r;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1664694095_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_envir_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st envir = envir_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_envir_orDefault, RHO);
  (void)(Rsh_Fir_reg_envir_orDefault);
  // verbose_isMissing = missing.0(verbose)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_verbose;
  Rsh_Fir_reg_verbose_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args20);
  // if verbose_isMissing then L2(FALSE) else L2(verbose)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_verbose_isMissing)) {
  // L2(FALSE)
    Rsh_Fir_reg_verbose_orDefault = Rsh_const(CCP, 25);
    goto L2_;
  } else {
  // L2(verbose)
    Rsh_Fir_reg_verbose_orDefault = Rsh_Fir_reg_verbose;
    goto L2_;
  }

L2_:;
  // st verbose = verbose_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_verbose_orDefault, RHO);
  (void)(Rsh_Fir_reg_verbose_orDefault);
  // sym = ldf `is.character`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base = ldf `is.character` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L3_:;
  // c1 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args22);
  // if c1 then L28() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L28()
    goto L28_;
  } else {
  // L4()
    goto L4_;
  }

L25_:;
  // file1 = ld file
  Rsh_Fir_reg_file1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L27() else D0()
  // L27()
  goto L27_;

L26_:;
  // r2 = dyn base(<sym file>)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L3(r2)
  // L3(r2)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_r2_;
  goto L3_;

D0_:;
  // deopt 1 [file1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_file1_;
  Rsh_Fir_deopt(1, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L4_:;
  // sym4 = ldf inherits
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base4 = ldf inherits in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard4 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L14_:;
  // verbose1 = ld verbose
  Rsh_Fir_reg_verbose1_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L85() else D31()
  // L85()
  goto L85_;

L27_:;
  // file2 = force? file1
  Rsh_Fir_reg_file2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file1_);
  // checkMissing(file2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_file2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // c = `is.character`(file2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_file2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(389, RHO, 1, Rsh_Fir_array_args26);
  // goto L3(c)
  // L3(c)
  Rsh_Fir_reg_r3_1 = Rsh_Fir_reg_c;
  goto L3_;

L28_:;
  // gzfile = ldf gzfile
  Rsh_Fir_reg_gzfile = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L29() else D1()
  // L29()
  goto L29_;

D1_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 107 [verbose1]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_verbose1_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L15_:;
  // c5 = `as.logical`(r42)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args27);
  // if c5 then L66() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L66()
    goto L66_;
  } else {
  // L16()
    goto L16_;
  }

L29_:;
  // p1 = prom<V +>{
  //   file3 = ld file;
  //   file4 = force? file3;
  //   checkMissing(file4);
  //   return file4;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1664694095_1, 0, NULL, CCP, RHO);
  // r5 = dyn gzfile(p1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gzfile, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L30() else D2()
  // L30()
  goto L30_;

L62_:;
  // file9 = ld file
  Rsh_Fir_reg_file9_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L64() else D20()
  // L64()
  goto L64_;

L63_:;
  // r41 = dyn base4(<sym file>, "connection")
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args30[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L15(r41)
  // L15(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L15_;

L85_:;
  // verbose2 = force? verbose1
  Rsh_Fir_reg_verbose2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_verbose1_);
  // checkMissing(verbose2)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_verbose2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // c16 = `as.logical`(verbose2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_verbose2_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args32);
  // if c16 then L86() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L86()
    goto L86_;
  } else {
  // L22()
    goto L22_;
  }

D2_:;
  // deopt 7 [r5]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 73 [file9]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_file9_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L16_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L83() else D29()
  // L83()
  goto L83_;

L22_:;
  // goto L23()
  // L23()
  goto L23_;

L23_:;
  // sym7 = ldf `.Internal`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base7 = ldf `.Internal` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard7 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L30_:;
  // st con = r5
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym1 = ldf `on.exit`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base1 = ldf `on.exit` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args34);
  // if guard1 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L64_:;
  // file10 = force? file9
  Rsh_Fir_reg_file10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file9_);
  // checkMissing(file10)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_file10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r43 = dyn inherits(file10, "connection", FALSE)
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_file10_;
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args36[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L65() else D21()
  // L65()
  goto L65_;

L66_:;
  // sym5 = ldf inherits
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base5 = ldf inherits in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard5 then L67() else L68()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L67()
    goto L67_;
  } else {
  // L68()
    goto L68_;
  }

L86_:;
  // cat = ldf cat
  Rsh_Fir_reg_cat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L87() else D32()
  // L87()
  goto L87_;

D21_:;
  // deopt 78 [r43]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 104 []
  Rsh_Fir_deopt(104, 0, NULL, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 110 []
  Rsh_Fir_deopt(110, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // readChar = ldf readChar
  Rsh_Fir_reg_readChar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // check L33() else D3()
  // L33()
  goto L33_;

L17_:;
  // c6 = `as.logical`(r45)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args38);
  // if c6 then L18(c6) else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L18(c6)
    Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c6_;
    goto L18_;
  } else {
  // L71()
    goto L71_;
  }

L24_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r56
  return Rsh_Fir_reg_r56_;

L31_:;
  // on_exit = ldf `on.exit` in base
  Rsh_Fir_reg_on_exit = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r8 = dyn on_exit(<lang close(con)>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_on_exit, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L5()
  // L5()
  goto L5_;

L32_:;
  // r6 = dyn base1(<lang close(con)>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L5()
  // L5()
  goto L5_;

L65_:;
  // goto L15(r43)
  // L15(r43)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r43_;
  goto L15_;

L67_:;
  // file11 = ld file
  Rsh_Fir_reg_file11_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L69() else D22()
  // L69()
  goto L69_;

L68_:;
  // r44 = dyn base5(<sym file>, "gzfile")
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L17(r44)
  // L17(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L17_;

L83_:;
  // r52 = dyn stop2("bad 'file' argument")
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L84() else D30()
  // L84()
  goto L84_;

L87_:;
  // r53 = dyn cat("Loading objects:\n")
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cat, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L88() else D33()
  // L88()
  goto L88_;

L90_:;
  // con2 = ld con
  Rsh_Fir_reg_con2_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L92() else D34()
  // L92()
  goto L92_;

L91_:;
  // r55 = dyn base7(<lang loadFromConn2(con, envir, verbose)>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L24(r55)
  // L24(r55)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r55_;
  goto L24_;

D3_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 81 [file11]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_file11_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 106 [r52]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(106, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 112 [r53]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 117 [con2]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_con2_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L18_:;
  // c15 = `as.logical`(c7)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args45);
  // if c15 then L77() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L77()
    goto L77_;
  } else {
  // L20()
    goto L20_;
  }

L33_:;
  // p2 = prom<V +>{
  //   con = ld con;
  //   con1 = force? con;
  //   checkMissing(con1);
  //   return con1;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1664694095_2, 0, NULL, CCP, RHO);
  // r10 = dyn readChar[, , useBytes](p2, 5, TRUE)
  SEXP Rsh_Fir_array_args47[3];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args47[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readChar, 3, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L34() else D4()
  // L34()
  goto L34_;

L69_:;
  // file12 = force? file11
  Rsh_Fir_reg_file12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file11_);
  // checkMissing(file12)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_file12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // inherits1 = ldf inherits in base
  Rsh_Fir_reg_inherits1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r46 = dyn inherits1(file12, "gzfile", FALSE)
  SEXP Rsh_Fir_array_args49[3];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_file12_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args49[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits1_, 3, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L70() else D23()
  // L70()
  goto L70_;

L71_:;
  // sym6 = ldf inherits
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base6 = ldf inherits in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard6 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L84_:;
  // goto L14()
  // L14()
  goto L14_;

L88_:;
  // goto L23()
  // L23()
  goto L23_;

L92_:;
  // con3 = force? con2
  Rsh_Fir_reg_con3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con2_);
  // checkMissing(con3)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_con3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // envir3 = ld envir
  Rsh_Fir_reg_envir3_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L93() else D35()
  // L93()
  goto L93_;

D4_:;
  // deopt 18 [r10]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 86 [r46]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D35_:;
  // deopt 119 [envir3]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_envir3_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L19_:;
  // c12 = `as.logical`(r48)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args52);
  // c13 = `||`(c11, c12)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args53);
  // goto L18(c13)
  // L18(c13)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c13_;
  goto L18_;

L20_:;
  // gzcon = ldf gzcon
  Rsh_Fir_reg_gzcon = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // check L80() else D27()
  // L80()
  goto L80_;

L21_:;
  // st con = file17
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_file17_, RHO);
  (void)(Rsh_Fir_reg_file17_);
  // goto L14()
  // L14()
  goto L14_;

L34_:;
  // st magic = r10
  Rsh_Fir_store(Rsh_const(CCP, 45), Rsh_Fir_reg_r10_1, RHO);
  (void)(Rsh_Fir_reg_r10_1);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args54);
  // if guard2 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L70_:;
  // goto L17(r46)
  // L17(r46)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r46_;
  goto L17_;

L72_:;
  // file13 = ld file
  Rsh_Fir_reg_file13_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L74() else D24()
  // L74()
  goto L74_;

L73_:;
  // r47 = dyn base6(<sym file>, "gzcon")
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L19(c6, r47)
  // L19(c6, r47)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L19_;

L77_:;
  // file15 = ld file
  Rsh_Fir_reg_file15_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L78() else D26()
  // L78()
  goto L78_;

L93_:;
  // envir4 = force? envir3
  Rsh_Fir_reg_envir4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envir3_);
  // checkMissing(envir4)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_envir4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // verbose3 = ld verbose
  Rsh_Fir_reg_verbose3_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // check L94() else D36()
  // L94()
  goto L94_;

D24_:;
  // deopt 89 [c6, file13]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_file13_;
  Rsh_Fir_deopt(89, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 96 [file15]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_file15_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 99 []
  Rsh_Fir_deopt(99, 0, NULL, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 121 [verbose3]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_verbose3_;
  Rsh_Fir_deopt(121, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L6_:;
  // r14 = `!`(r12)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args57);
  // c2 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r14_1;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args58);
  // if c2 then L39() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L39()
    goto L39_;
  } else {
  // L7()
    goto L7_;
  }

L35_:;
  // magic = ld magic
  Rsh_Fir_reg_magic = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // check L37() else D5()
  // L37()
  goto L37_;

L36_:;
  // r11 = dyn base2(<sym magic>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L6(r11)
  // L6(r11)
  Rsh_Fir_reg_r12_1 = Rsh_Fir_reg_r11_1;
  goto L6_;

L74_:;
  // file14 = force? file13
  Rsh_Fir_reg_file14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file13_);
  // checkMissing(file14)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_file14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // inherits2 = ldf inherits in base
  Rsh_Fir_reg_inherits2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r49 = dyn inherits2(file14, "gzcon", FALSE)
  SEXP Rsh_Fir_array_args61[3];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_file14_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args61[2] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits2_, 3, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L75() else D25()
  // L75()
  goto L75_;

L78_:;
  // file16 = force? file15
  Rsh_Fir_reg_file16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file15_);
  // checkMissing(file16)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_file16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // goto L21(file16)
  // L21(file16)
  Rsh_Fir_reg_file17_ = Rsh_Fir_reg_file16_;
  goto L21_;

L80_:;
  // p11 = prom<V +>{
  //   file18 = ld file;
  //   file19 = force? file18;
  //   checkMissing(file19);
  //   return file19;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1664694095_3, 0, NULL, CCP, RHO);
  // r51 = dyn gzcon(p11)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gzcon, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L81() else D28()
  // L81()
  goto L81_;

L94_:;
  // verbose4 = force? verbose3
  Rsh_Fir_reg_verbose4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_verbose3_);
  // checkMissing(verbose4)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_verbose4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // loadFromConn2 = ldf loadFromConn2 in base
  Rsh_Fir_reg_loadFromConn2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r57 = dyn loadFromConn2(con3, envir4, verbose4)
  SEXP Rsh_Fir_array_args66[3];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_con3_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_envir4_;
  Rsh_Fir_array_args66[2] = Rsh_Fir_reg_verbose4_;
  SEXP Rsh_Fir_array_arg_names28[3];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_loadFromConn2_, 3, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L95() else D37()
  // L95()
  goto L95_;

D5_:;
  // deopt 22 [magic]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_magic;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 94 [c6, r49]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_c6_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(94, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 101 [r51]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D37_:;
  // deopt 124 [r57]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // grepl = ldf grepl
  Rsh_Fir_reg_grepl = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // check L43() else D9()
  // L43()
  goto L43_;

L37_:;
  // magic1 = force? magic
  Rsh_Fir_reg_magic1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_magic);
  // checkMissing(magic1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_magic1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r13 = dyn length(magic1)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_magic1_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L38() else D6()
  // L38()
  goto L38_;

L39_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L40() else D7()
  // L40()
  goto L40_;

L75_:;
  // goto L19(c6, r49)
  // L19(c6, r49)
  Rsh_Fir_reg_c11_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r49_;
  goto L19_;

L81_:;
  // goto L21(r51)
  // L21(r51)
  Rsh_Fir_reg_file17_ = Rsh_Fir_reg_r51_;
  goto L21_;

L95_:;
  // goto L24(r57)
  // L24(r57)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r57_;
  goto L24_;

D6_:;
  // deopt 25 [r13]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 28 []
  Rsh_Fir_deopt(28, 0, NULL, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 34 []
  Rsh_Fir_deopt(34, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L6(r13)
  // L6(r13)
  Rsh_Fir_reg_r12_1 = Rsh_Fir_reg_r13_1;
  goto L6_;

L40_:;
  // r15 = dyn stop("empty (zero-byte) input file")
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L41() else D8()
  // L41()
  goto L41_;

L43_:;
  // p3 = prom<V +>{
  //   magic2 = ld magic;
  //   magic3 = force? magic2;
  //   checkMissing(magic3);
  //   return magic3;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1664694095_4, 0, NULL, CCP, RHO);
  // r18 = dyn grepl("RD[ABX][2-9]\n", p3)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r18_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L44() else D10()
  // L44()
  goto L44_;

D8_:;
  // deopt 30 [r15]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r15_1;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 37 [r18]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r18_1;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L41_:;
  // goto L8()
  // L8()
  goto L8_;

L44_:;
  // r19 = `!`(r18)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_r18_1;
  Rsh_Fir_reg_r19_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args72);
  // c3 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_r19_1;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args73);
  // if c3 then L45() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L45()
    goto L45_;
  } else {
  // L9()
    goto L9_;
  }

L9_:;
  // goto L14()
  // L14()
  goto L14_;

L45_:;
  // grepl1 = ldf grepl
  Rsh_Fir_reg_grepl1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // check L46() else D11()
  // L46()
  goto L46_;

D11_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L46_:;
  // p4 = prom<V +>{
  //   magic4 = ld magic;
  //   magic5 = force? magic4;
  //   checkMissing(magic5);
  //   return magic5;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1664694095_5, 0, NULL, CCP, RHO);
  // r21 = dyn grepl1("RD[ABX][2-9]\r", p4)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl1_, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names32, CCP, RHO);
  // check L47() else D12()
  // L47()
  goto L47_;

D12_:;
  // deopt 43 [r21]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r21_1;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L47_:;
  // c4 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r21_1;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args76);
  // if c4 then L48() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L48()
    goto L48_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // check L52() else D15()
  // L52()
  goto L52_;

L48_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L49() else D13()
  // L49()
  goto L49_;

D13_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // r22 = dyn stop1("input has been corrupted, with LF replaced by CR")
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L50() else D14()
  // L50()
  goto L50_;

L52_:;
  // p10 = prom<V +>{
  //   sprintf = ldf sprintf;
  //   p7 = prom<V +>{
  //     sQuote = ldf sQuote;
  //     p6 = prom<V +>{
  //       basename = ldf basename;
  //       p5 = prom<V +>{
  //         file5 = ld file;
  //         file6 = force? file5;
  //         checkMissing(file6);
  //         return file6;
  //       };
  //       r25 = dyn basename(p5);
  //       return r25;
  //     };
  //     r27 = dyn sQuote(p6);
  //     return r27;
  //   };
  //   p9 = prom<V +>{
  //     gsub = ldf gsub;
  //     p8 = prom<V +>{
  //       magic6 = ld magic;
  //       magic7 = force? magic6;
  //       checkMissing(magic7);
  //       return magic7;
  //     };
  //     r30 = dyn gsub("[\n\r]*", "", p8);
  //     return r30;
  //   };
  //   r32 = dyn sprintf("file %s has magic number '%s'\n", p7, p9);
  //   return r32;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1664694095_6, 0, NULL, CCP, RHO);
  // r34 = dyn warning[, , , domain, `call.`](p10, "  ", "Use of save versions prior to 2 is deprecated", NA_LGL, FALSE)
  SEXP Rsh_Fir_array_args84[5];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args84[2] = Rsh_const(CCP, 63);
  Rsh_Fir_array_args84[3] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args84[4] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names38[5];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_array_arg_names38[2] = R_MissingArg;
  Rsh_Fir_array_arg_names38[3] = Rsh_const(CCP, 65);
  Rsh_Fir_array_arg_names38[4] = Rsh_const(CCP, 66);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 5, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L53() else D16()
  // L53()
  goto L53_;

D14_:;
  // deopt 47 [r22]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 59 [r34]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L11()
  // L11()
  goto L11_;

L53_:;
  // sym3 = ldf `.Internal`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base3 = ldf `.Internal` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args85[2];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args85);
  // if guard3 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L12_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r36
  return Rsh_Fir_reg_r36_;

L54_:;
  // file7 = ld file
  Rsh_Fir_reg_file7_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L56() else D17()
  // L56()
  goto L56_;

L55_:;
  // r35 = dyn base3(<lang load(file, envir)>)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 67);
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L12(r35)
  // L12(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L12_;

D17_:;
  // deopt 62 [file7]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_file7_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L56_:;
  // file8 = force? file7
  Rsh_Fir_reg_file8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file7_);
  // checkMissing(file8)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_file8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // envir1 = ld envir
  Rsh_Fir_reg_envir1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L57() else D18()
  // L57()
  goto L57_;

D18_:;
  // deopt 64 [envir1]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_envir1_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L57_:;
  // envir2 = force? envir1
  Rsh_Fir_reg_envir2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_envir1_);
  // checkMissing(envir2)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_envir2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // load = ldf load in base
  Rsh_Fir_reg_load1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r37 = dyn load(file8, envir2)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_file8_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_envir2_;
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_load1, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names40, CCP, RHO);
  // check L58() else D19()
  // L58()
  goto L58_;

D19_:;
  // deopt 67 [r37]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L12(r37)
  // L12(r37)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L12_;
}
SEXP Rsh_Fir_user_promise_inner1664694095_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_parent_frame;
  SEXP Rsh_Fir_reg_r1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1664694095/0: expected 0, got %d", NCAPTURES);

  // parent_frame = ldf `parent.frame`
  Rsh_Fir_reg_parent_frame = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // r = dyn parent_frame()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_parent_frame, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner1664694095_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file3_;
  SEXP Rsh_Fir_reg_file4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1664694095/0: expected 0, got %d", NCAPTURES);

  // file3 = ld file
  Rsh_Fir_reg_file3_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // file4 = force? file3
  Rsh_Fir_reg_file4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file3_);
  // checkMissing(file4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_file4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // return file4
  return Rsh_Fir_reg_file4_;
}
SEXP Rsh_Fir_user_promise_inner1664694095_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_con;
  SEXP Rsh_Fir_reg_con1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1664694095/0: expected 0, got %d", NCAPTURES);

  // con = ld con
  Rsh_Fir_reg_con = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // con1 = force? con
  Rsh_Fir_reg_con1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_con);
  // checkMissing(con1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_con1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return con1
  return Rsh_Fir_reg_con1_;
}
SEXP Rsh_Fir_user_promise_inner1664694095_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file18_;
  SEXP Rsh_Fir_reg_file19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1664694095/0: expected 0, got %d", NCAPTURES);

  // file18 = ld file
  Rsh_Fir_reg_file18_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // file19 = force? file18
  Rsh_Fir_reg_file19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file18_);
  // checkMissing(file19)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_file19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // return file19
  return Rsh_Fir_reg_file19_;
}
SEXP Rsh_Fir_user_promise_inner1664694095_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_magic2_;
  SEXP Rsh_Fir_reg_magic3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1664694095/0: expected 0, got %d", NCAPTURES);

  // magic2 = ld magic
  Rsh_Fir_reg_magic2_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // magic3 = force? magic2
  Rsh_Fir_reg_magic3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_magic2_);
  // checkMissing(magic3)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_magic3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // return magic3
  return Rsh_Fir_reg_magic3_;
}
SEXP Rsh_Fir_user_promise_inner1664694095_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_magic4_;
  SEXP Rsh_Fir_reg_magic5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1664694095/0: expected 0, got %d", NCAPTURES);

  // magic4 = ld magic
  Rsh_Fir_reg_magic4_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // magic5 = force? magic4
  Rsh_Fir_reg_magic5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_magic4_);
  // checkMissing(magic5)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_magic5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // return magic5
  return Rsh_Fir_reg_magic5_;
}
SEXP Rsh_Fir_user_promise_inner1664694095_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sprintf;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r32_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1664694095/0: expected 0, got %d", NCAPTURES);

  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // p7 = prom<V +>{
  //   sQuote = ldf sQuote;
  //   p6 = prom<V +>{
  //     basename = ldf basename;
  //     p5 = prom<V +>{
  //       file5 = ld file;
  //       file6 = force? file5;
  //       checkMissing(file6);
  //       return file6;
  //     };
  //     r25 = dyn basename(p5);
  //     return r25;
  //   };
  //   r27 = dyn sQuote(p6);
  //   return r27;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1664694095_7, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   gsub = ldf gsub;
  //   p8 = prom<V +>{
  //     magic6 = ld magic;
  //     magic7 = force? magic6;
  //     checkMissing(magic7);
  //     return magic7;
  //   };
  //   r30 = dyn gsub("[\n\r]*", "", p8);
  //   return r30;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1664694095_10, 0, NULL, CCP, RHO);
  // r32 = dyn sprintf("file %s has magic number '%s'\n", p7, p9)
  SEXP Rsh_Fir_array_args83[3];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args83[2] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names37[3];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 3, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names37, CCP, RHO);
  // return r32
  return Rsh_Fir_reg_r32_;
}
SEXP Rsh_Fir_user_promise_inner1664694095_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sQuote;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r27_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1664694095/0: expected 0, got %d", NCAPTURES);

  // sQuote = ldf sQuote
  Rsh_Fir_reg_sQuote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 56), RHO);
  // p6 = prom<V +>{
  //   basename = ldf basename;
  //   p5 = prom<V +>{
  //     file5 = ld file;
  //     file6 = force? file5;
  //     checkMissing(file6);
  //     return file6;
  //   };
  //   r25 = dyn basename(p5);
  //   return r25;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1664694095_8, 0, NULL, CCP, RHO);
  // r27 = dyn sQuote(p6)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sQuote, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names35, CCP, RHO);
  // return r27
  return Rsh_Fir_reg_r27_;
}
SEXP Rsh_Fir_user_promise_inner1664694095_8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_basename;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r25_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1664694095/0: expected 0, got %d", NCAPTURES);

  // basename = ldf basename
  Rsh_Fir_reg_basename = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // p5 = prom<V +>{
  //   file5 = ld file;
  //   file6 = force? file5;
  //   checkMissing(file6);
  //   return file6;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1664694095_9, 0, NULL, CCP, RHO);
  // r25 = dyn basename(p5)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_basename, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names34, CCP, RHO);
  // return r25
  return Rsh_Fir_reg_r25_;
}
SEXP Rsh_Fir_user_promise_inner1664694095_9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_file5_;
  SEXP Rsh_Fir_reg_file6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1664694095/0: expected 0, got %d", NCAPTURES);

  // file5 = ld file
  Rsh_Fir_reg_file5_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // file6 = force? file5
  Rsh_Fir_reg_file6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_file5_);
  // checkMissing(file6)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_file6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // return file6
  return Rsh_Fir_reg_file6_;
}
SEXP Rsh_Fir_user_promise_inner1664694095_10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_gsub;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r30_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1664694095/0: expected 0, got %d", NCAPTURES);

  // gsub = ldf gsub
  Rsh_Fir_reg_gsub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // p8 = prom<V +>{
  //   magic6 = ld magic;
  //   magic7 = force? magic6;
  //   checkMissing(magic7);
  //   return magic7;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1664694095_11, 0, NULL, CCP, RHO);
  // r30 = dyn gsub("[\n\r]*", "", p8)
  SEXP Rsh_Fir_array_args82[3];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args82[2] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names36[3];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_array_arg_names36[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub, 3, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names36, CCP, RHO);
  // return r30
  return Rsh_Fir_reg_r30_;
}
SEXP Rsh_Fir_user_promise_inner1664694095_11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_magic6_;
  SEXP Rsh_Fir_reg_magic7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner1664694095/0: expected 0, got %d", NCAPTURES);

  // magic6 = ld magic
  Rsh_Fir_reg_magic6_ = Rsh_Fir_load(Rsh_const(CCP, 45), RHO);
  // magic7 = force? magic6
  Rsh_Fir_reg_magic7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_magic6_);
  // checkMissing(magic7)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_magic7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // return magic7
  return Rsh_Fir_reg_magic7_;
}
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2708337952 dynamic dispatch ([])

  return Rsh_Fir_user_version_inner2708337952_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2708337952 version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for inner2708337952/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_load2;
  SEXP Rsh_Fir_reg_r2;
  SEXP Rsh_Fir_reg_ls1;
  SEXP Rsh_Fir_reg_r1_1;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // load = ldf load
  Rsh_Fir_reg_load2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r = dyn load("all.rda")
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_load2, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 3 [r]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r2;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L1_:;
  // ls = ldf ls
  Rsh_Fir_reg_ls1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

L2_:;
  // r1 = dyn ls()
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ls1, 0, NULL, NULL, CCP, RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 6 [r1]
  SEXP Rsh_Fir_array_deopt_stack41[1];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L3_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
