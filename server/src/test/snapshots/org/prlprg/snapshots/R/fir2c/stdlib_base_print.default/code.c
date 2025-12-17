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
SEXP Rsh_Fir_user_function_inner2422365137_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2422365137_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2422365137_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2422365137_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2422365137_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2422365137_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2422365137_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2422365137_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2422365137_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2422365137_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_print;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_LETTERS;
  SEXP Rsh_Fir_reg_LETTERS1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_LETTERS3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_print1_;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_cbind;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_print2_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_seq;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_prI;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r29_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2422365137
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2422365137_, RHO, CCP);
  // st `print.default` = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // print = ldf print
  Rsh_Fir_reg_print = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 6 []
  Rsh_Fir_deopt(6, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   return 3.141592653589793;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r2 = dyn print[, digits](p, 16.0)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print, 2, Rsh_Fir_array_args, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 10 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // LETTERS = ld LETTERS
  Rsh_Fir_reg_LETTERS = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 11 [LETTERS]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_LETTERS;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L3_:;
  // LETTERS1 = force? LETTERS
  Rsh_Fir_reg_LETTERS1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LETTERS);
  // checkMissing(LETTERS1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_LETTERS1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty()));
  // c = `is.object`(LETTERS1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_LETTERS1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args2);
  // if c then L4() else L5(LETTERS1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L4()
    goto L4_;
  } else {
  // L5(LETTERS1)
    Rsh_Fir_reg_LETTERS3_ = Rsh_Fir_reg_LETTERS1_;
    goto L5_;
  }

L0_:;
  // print1 = ldf print
  Rsh_Fir_reg_print1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

L4_:;
  // dr = tryDispatchBuiltin.1("[", LETTERS1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_LETTERS1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args3);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if dc then L6() else L5(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr)
    Rsh_Fir_reg_LETTERS3_ = Rsh_Fir_reg_dr;
    goto L5_;
  }

L5_:;
  // r3 = `:`(1.0, 16.0)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args5);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r4 = dyn __(LETTERS3, r3)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_LETTERS3_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D3_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // goto L0()
  // L0()
  goto L0_;

L7_:;
  // p1 = prom<V +>{
  //   LETTERS4 = ld LETTERS;
  //   LETTERS5 = force? LETTERS4;
  //   checkMissing(LETTERS5);
  //   return LETTERS5;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r6 = dyn print1[, quote](p1, FALSE)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print1_, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L8() else D4()
  // L8()
  goto L8_;

D4_:;
  // deopt 23 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L8_:;
  // cbind = ldf cbind
  Rsh_Fir_reg_cbind = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L9() else D5()
  // L9()
  goto L9_;

D5_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L9_:;
  // p4 = prom<V +>{
  //   matrix = ldf matrix;
  //   p2 = prom<V +>{
  //     r7 = `:`(1.0, 10000.0);
  //     return r7;
  //   };
  //   p3 = prom<V +>{
  //     sym = ldf list;
  //     base = ldf list in base;
  //     guard = `==`.4(sym, base);
  //     if guard then L2() else L3();
  //   L0(r10):
  //     return r10;
  //   L2():
  //     LETTERS6 = ld LETTERS;
  //     LETTERS7 = force? LETTERS6;
  //     checkMissing(LETTERS7);
  //     c1 = `is.object`(LETTERS7);
  //     if c1 then L4() else L5(LETTERS7);
  //   L3():
  //     r9 = dyn base(NULL, <lang `[`(LETTERS, `:`(1.0, 10.0))>);
  //     goto L0(r9);
  //   L1(dx3):
  //     list = ldf list in base;
  //     r12 = dyn list(NULL, dx3);
  //     goto L0(r12);
  //   L4():
  //     dr2 = tryDispatchBuiltin.1("[", LETTERS7);
  //     dc1 = getTryDispatchBuiltinDispatched(dr2);
  //     if dc1 then L6() else L5(dr2);
  //   L5(LETTERS9):
  //     __1 = ldf `[` in base;
  //     r11 = dyn __1(LETTERS9, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
  //     goto L1(r11);
  //   L6():
  //     dx2 = getTryDispatchBuiltinValue(dr2);
  //     goto L1(dx2);
  //   };
  //   r14 = dyn matrix[, ncol, dimnames](p2, 10.0, p3);
  //   return r14;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // r16 = dyn cbind[I, ](1.0, p4)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_cbind, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L10() else D6()
  // L10()
  goto L10_;

D6_:;
  // deopt 29 [r16]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L10_:;
  // st M = r16
  Rsh_Fir_store(Rsh_const(CCP, 22), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // __2 = ldf `::`
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L11() else D7()
  // L11()
  goto L11_;

D7_:;
  // deopt 32 []
  Rsh_Fir_deopt(32, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // r17 = dyn __2("utils", "head")
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L12() else D8()
  // L12()
  goto L12_;

D8_:;
  // deopt 35 [r17]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L12_:;
  // checkFun.0(r17)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r17_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args23));
  // r18 = r17 as cls
  Rsh_Fir_reg_r18_ = Rsh_Fir_cast(Rsh_Fir_reg_r17_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p5 = prom<V +>{
  //   M = ld M;
  //   M1 = force? M;
  //   checkMissing(M1);
  //   return M1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r20 = dyn r18(p5)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r18_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L13() else D9()
  // L13()
  goto L13_;

D9_:;
  // deopt 38 [r20]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L13_:;
  // print2 = ldf print
  Rsh_Fir_reg_print2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L14() else D10()
  // L14()
  goto L14_;

D10_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p6 = prom<V +>{
  //   M2 = ld M;
  //   M3 = force? M2;
  //   checkMissing(M3);
  //   return M3;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // r22 = dyn print2[, max](p6, 1000.0)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print2_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L15() else D11()
  // L15()
  goto L15_;

D11_:;
  // deopt 44 [r22]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L15_:;
  // seq = ldf seq
  Rsh_Fir_reg_seq = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // check L16() else D12()
  // L16()
  goto L16_;

D12_:;
  // deopt 47 [2.0]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_const(CCP, 29);
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L16_:;
  // p7 = prom<V +>{
  //   return -8.0;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   return 0.25;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r25 = dyn seq[, , by](p7, 30.0, p8)
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args28[2] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq, 3, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L17() else D13()
  // L17()
  goto L17_;

D13_:;
  // deopt 52 [2.0, r25]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(52, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L17_:;
  // r26 = `^`(2.0, r25)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args29);
  // st x = r26
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // r27 = clos inner2501545716
  Rsh_Fir_reg_r27_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st prI = r27
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // prI = ldf prI
  Rsh_Fir_reg_prI = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L18() else D14()
  // L18()
  goto L18_;

D14_:;
  // deopt 59 []
  Rsh_Fir_deopt(59, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p9 = prom<V +>{
  //   x = ld x;
  //   x1 = force? x;
  //   checkMissing(x1);
  //   return x1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r29 = dyn prI(p9)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_prI, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L19() else D15()
  // L19()
  goto L19_;

D15_:;
  // deopt 61 [r29]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L19_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r29
  return Rsh_Fir_reg_r29_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return 3.141592653589793
  return Rsh_const(CCP, 2);
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_LETTERS4_;
  SEXP Rsh_Fir_reg_LETTERS5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // LETTERS4 = ld LETTERS
  Rsh_Fir_reg_LETTERS4_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // LETTERS5 = force? LETTERS4
  Rsh_Fir_reg_LETTERS5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LETTERS4_);
  // checkMissing(LETTERS5)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_LETTERS5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // return LETTERS5
  return Rsh_Fir_reg_LETTERS5_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_matrix;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r14_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // p2 = prom<V +>{
  //   r7 = `:`(1.0, 10000.0);
  //   return r7;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   sym = ldf list;
  //   base = ldf list in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L2() else L3();
  // L0(r10):
  //   return r10;
  // L2():
  //   LETTERS6 = ld LETTERS;
  //   LETTERS7 = force? LETTERS6;
  //   checkMissing(LETTERS7);
  //   c1 = `is.object`(LETTERS7);
  //   if c1 then L4() else L5(LETTERS7);
  // L3():
  //   r9 = dyn base(NULL, <lang `[`(LETTERS, `:`(1.0, 10.0))>);
  //   goto L0(r9);
  // L1(dx3):
  //   list = ldf list in base;
  //   r12 = dyn list(NULL, dx3);
  //   goto L0(r12);
  // L4():
  //   dr2 = tryDispatchBuiltin.1("[", LETTERS7);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L6() else L5(dr2);
  // L5(LETTERS9):
  //   __1 = ldf `[` in base;
  //   r11 = dyn __1(LETTERS9, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
  //   goto L1(r11);
  // L6():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L1(dx2);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r14 = dyn matrix[, ncol, dimnames](p2, 10.0, p3)
  SEXP Rsh_Fir_array_args20[3];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args20[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 3, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r14
  return Rsh_Fir_reg_r14_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r7 = `:`(1.0, 10000.0)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args10);
  // return r7
  return Rsh_Fir_reg_r7_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_LETTERS6_;
  SEXP Rsh_Fir_reg_LETTERS7_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_LETTERS9_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r12_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r10
  return Rsh_Fir_reg_r10_;

L2_:;
  // LETTERS6 = ld LETTERS
  Rsh_Fir_reg_LETTERS6_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // LETTERS7 = force? LETTERS6
  Rsh_Fir_reg_LETTERS7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LETTERS6_);
  // checkMissing(LETTERS7)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_LETTERS7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(LETTERS7)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_LETTERS7_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args13);
  // if c1 then L4() else L5(LETTERS7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L4()
    goto L4_;
  } else {
  // L5(LETTERS7)
    Rsh_Fir_reg_LETTERS9_ = Rsh_Fir_reg_LETTERS7_;
    goto L5_;
  }

L3_:;
  // r9 = dyn base(NULL, <lang `[`(LETTERS, `:`(1.0, 10.0))>)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L0_;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r12 = dyn list(NULL, dx3)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r12_;
  goto L0_;

L4_:;
  // dr2 = tryDispatchBuiltin.1("[", LETTERS7)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_LETTERS7_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if dc1 then L6() else L5(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr2)
    Rsh_Fir_reg_LETTERS9_ = Rsh_Fir_reg_dr2_;
    goto L5_;
  }

L5_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r11 = dyn __1(LETTERS9, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_LETTERS9_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r11)
  // L1(r11)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r11_;
  goto L1_;

L6_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L1(dx2)
  // L1(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_M;
  SEXP Rsh_Fir_reg_M1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // M = ld M
  Rsh_Fir_reg_M = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // M1 = force? M
  Rsh_Fir_reg_M1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_M);
  // checkMissing(M1)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_M1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // return M1
  return Rsh_Fir_reg_M1_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_M2_;
  SEXP Rsh_Fir_reg_M3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // M2 = ld M
  Rsh_Fir_reg_M2_ = Rsh_Fir_load(Rsh_const(CCP, 22), RHO);
  // M3 = force? M2
  Rsh_Fir_reg_M3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_M2_);
  // checkMissing(M3)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_M3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // return M3
  return Rsh_Fir_reg_M3_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return -8.0
  return Rsh_const(CCP, 30);
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return 0.25
  return Rsh_const(CCP, 31);
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return x1
  return Rsh_Fir_reg_x1_;
}
SEXP Rsh_Fir_user_function_inner2422365137_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2422365137 dynamic dispatch ([x, digits, quote, `na.print`, `print.gap`, right, max, width, useSource, `...`])

  return Rsh_Fir_user_version_inner2422365137_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2422365137_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2422365137 version 0 (*, *, *, *, *, *, *, *, *, dots -+> V)

  if (NPARAMS != 10) Rsh_error("FIŘ arity mismatch for inner2422365137/0: expected 10, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_digits;
  SEXP Rsh_Fir_reg_quote;
  SEXP Rsh_Fir_reg_na_print;
  SEXP Rsh_Fir_reg_print_gap;
  SEXP Rsh_Fir_reg_right;
  SEXP Rsh_Fir_reg_max;
  SEXP Rsh_Fir_reg_width;
  SEXP Rsh_Fir_reg_useSource;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_digits_isMissing;
  SEXP Rsh_Fir_reg_digits_orDefault;
  SEXP Rsh_Fir_reg_quote_isMissing;
  SEXP Rsh_Fir_reg_quote_orDefault;
  SEXP Rsh_Fir_reg_na_print_isMissing;
  SEXP Rsh_Fir_reg_na_print_orDefault;
  SEXP Rsh_Fir_reg_print_gap_isMissing;
  SEXP Rsh_Fir_reg_print_gap_orDefault;
  SEXP Rsh_Fir_reg_right_isMissing;
  SEXP Rsh_Fir_reg_right_orDefault;
  SEXP Rsh_Fir_reg_max_isMissing;
  SEXP Rsh_Fir_reg_max_orDefault;
  SEXP Rsh_Fir_reg_width_isMissing;
  SEXP Rsh_Fir_reg_width_orDefault;
  SEXP Rsh_Fir_reg_useSource_isMissing;
  SEXP Rsh_Fir_reg_useSource_orDefault;
  SEXP Rsh_Fir_reg_pairlist;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_p5_1;
  SEXP Rsh_Fir_reg_p6_1;
  SEXP Rsh_Fir_reg_p7_1;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_missing1_;
  SEXP Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_missing2_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_missing3_;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_missing4_;
  SEXP Rsh_Fir_reg_r25_1;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r26_1;
  SEXP Rsh_Fir_reg_r27_1;
  SEXP Rsh_Fir_reg_missing5_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r29_1;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_missing6_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_missing7_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_args;
  SEXP Rsh_Fir_reg_args1_;
  SEXP Rsh_Fir_reg_missings;
  SEXP Rsh_Fir_reg_missings1_;
  SEXP Rsh_Fir_reg_print_default;
  SEXP Rsh_Fir_reg_r38_;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];
  Rsh_Fir_reg_digits = PARAMS[1];
  Rsh_Fir_reg_quote = PARAMS[2];
  Rsh_Fir_reg_na_print = PARAMS[3];
  Rsh_Fir_reg_print_gap = PARAMS[4];
  Rsh_Fir_reg_right = PARAMS[5];
  Rsh_Fir_reg_max = PARAMS[6];
  Rsh_Fir_reg_width = PARAMS[7];
  Rsh_Fir_reg_useSource = PARAMS[8];
  Rsh_Fir_reg_ddd = PARAMS[9];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // digits_isMissing = missing.0(digits)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_digits;
  Rsh_Fir_reg_digits_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args32);
  // if digits_isMissing then L0(NULL) else L0(digits)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_digits_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_digits_orDefault = Rsh_const(CCP, 15);
    goto L0_;
  } else {
  // L0(digits)
    Rsh_Fir_reg_digits_orDefault = Rsh_Fir_reg_digits;
    goto L0_;
  }

L0_:;
  // st digits = digits_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_digits_orDefault, RHO);
  (void)(Rsh_Fir_reg_digits_orDefault);
  // quote_isMissing = missing.0(quote)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_quote;
  Rsh_Fir_reg_quote_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args33);
  // if quote_isMissing then L1(TRUE) else L1(quote)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_quote_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_quote_orDefault = Rsh_const(CCP, 36);
    goto L1_;
  } else {
  // L1(quote)
    Rsh_Fir_reg_quote_orDefault = Rsh_Fir_reg_quote;
    goto L1_;
  }

L1_:;
  // st quote = quote_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_quote_orDefault, RHO);
  (void)(Rsh_Fir_reg_quote_orDefault);
  // na_print_isMissing = missing.0(na_print)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_na_print;
  Rsh_Fir_reg_na_print_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args34);
  // if na_print_isMissing then L2(NULL) else L2(na_print)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_na_print_isMissing)) {
  // L2(NULL)
    Rsh_Fir_reg_na_print_orDefault = Rsh_const(CCP, 15);
    goto L2_;
  } else {
  // L2(na_print)
    Rsh_Fir_reg_na_print_orDefault = Rsh_Fir_reg_na_print;
    goto L2_;
  }

L2_:;
  // st `na.print` = na_print_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 37), Rsh_Fir_reg_na_print_orDefault, RHO);
  (void)(Rsh_Fir_reg_na_print_orDefault);
  // print_gap_isMissing = missing.0(print_gap)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_print_gap;
  Rsh_Fir_reg_print_gap_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args35);
  // if print_gap_isMissing then L3(NULL) else L3(print_gap)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_print_gap_isMissing)) {
  // L3(NULL)
    Rsh_Fir_reg_print_gap_orDefault = Rsh_const(CCP, 15);
    goto L3_;
  } else {
  // L3(print_gap)
    Rsh_Fir_reg_print_gap_orDefault = Rsh_Fir_reg_print_gap;
    goto L3_;
  }

L3_:;
  // st `print.gap` = print_gap_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_print_gap_orDefault, RHO);
  (void)(Rsh_Fir_reg_print_gap_orDefault);
  // right_isMissing = missing.0(right)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_right;
  Rsh_Fir_reg_right_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args36);
  // if right_isMissing then L4(FALSE) else L4(right)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_right_isMissing)) {
  // L4(FALSE)
    Rsh_Fir_reg_right_orDefault = Rsh_const(CCP, 9);
    goto L4_;
  } else {
  // L4(right)
    Rsh_Fir_reg_right_orDefault = Rsh_Fir_reg_right;
    goto L4_;
  }

L4_:;
  // st right = right_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_right_orDefault, RHO);
  (void)(Rsh_Fir_reg_right_orDefault);
  // max_isMissing = missing.0(max)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_max;
  Rsh_Fir_reg_max_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args37);
  // if max_isMissing then L5(NULL) else L5(max)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_max_isMissing)) {
  // L5(NULL)
    Rsh_Fir_reg_max_orDefault = Rsh_const(CCP, 15);
    goto L5_;
  } else {
  // L5(max)
    Rsh_Fir_reg_max_orDefault = Rsh_Fir_reg_max;
    goto L5_;
  }

L5_:;
  // st max = max_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_max_orDefault, RHO);
  (void)(Rsh_Fir_reg_max_orDefault);
  // width_isMissing = missing.0(width)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_width;
  Rsh_Fir_reg_width_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args38);
  // if width_isMissing then L6(NULL) else L6(width)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_width_isMissing)) {
  // L6(NULL)
    Rsh_Fir_reg_width_orDefault = Rsh_const(CCP, 15);
    goto L6_;
  } else {
  // L6(width)
    Rsh_Fir_reg_width_orDefault = Rsh_Fir_reg_width;
    goto L6_;
  }

L6_:;
  // st width = width_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_width_orDefault, RHO);
  (void)(Rsh_Fir_reg_width_orDefault);
  // useSource_isMissing = missing.0(useSource)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_useSource;
  Rsh_Fir_reg_useSource_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args39);
  // if useSource_isMissing then L7(TRUE) else L7(useSource)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_useSource_isMissing)) {
  // L7(TRUE)
    Rsh_Fir_reg_useSource_orDefault = Rsh_const(CCP, 36);
    goto L7_;
  } else {
  // L7(useSource)
    Rsh_Fir_reg_useSource_orDefault = Rsh_Fir_reg_useSource;
    goto L7_;
  }

L7_:;
  // st useSource = useSource_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_useSource_orDefault, RHO);
  (void)(Rsh_Fir_reg_useSource_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // pairlist = ldf pairlist
  Rsh_Fir_reg_pairlist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L18() else D0()
  // L18()
  goto L18_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p = prom<V +>{
  //   digits1 = ld digits;
  //   digits2 = force? digits1;
  //   checkMissing(digits2);
  //   return digits2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2422365137_, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   quote1 = ld quote;
  //   quote2 = force? quote1;
  //   checkMissing(quote2);
  //   return quote2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2422365137_1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   na_print1 = ld `na.print`;
  //   na_print2 = force? na_print1;
  //   checkMissing(na_print2);
  //   return na_print2;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2422365137_2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   print_gap1 = ld `print.gap`;
  //   print_gap2 = force? print_gap1;
  //   checkMissing(print_gap2);
  //   return print_gap2;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2422365137_3, 0, NULL, CCP, RHO);
  // p4 = prom<V +>{
  //   right1 = ld right;
  //   right2 = force? right1;
  //   checkMissing(right2);
  //   return right2;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2422365137_4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   max1 = ld max;
  //   max2 = force? max1;
  //   checkMissing(max2);
  //   return max2;
  // }
  Rsh_Fir_reg_p5_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2422365137_5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   width1 = ld width;
  //   width2 = force? width1;
  //   checkMissing(width2);
  //   return width2;
  // }
  Rsh_Fir_reg_p6_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2422365137_6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   useSource1 = ld useSource;
  //   useSource2 = force? useSource1;
  //   checkMissing(useSource2);
  //   return useSource2;
  // }
  Rsh_Fir_reg_p7_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2422365137_7, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // r8 = dyn pairlist[digits, quote, `na.print`, `print.gap`, right, max, width, useSource, `...`](p, p1, p2, p3, p4, p5, p6, p7, ddd1)
  SEXP Rsh_Fir_array_args48[9];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_p1_1;
  Rsh_Fir_array_args48[2] = Rsh_Fir_reg_p2_1;
  Rsh_Fir_array_args48[3] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args48[4] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args48[5] = Rsh_Fir_reg_p5_1;
  Rsh_Fir_array_args48[6] = Rsh_Fir_reg_p6_1;
  Rsh_Fir_array_args48[7] = Rsh_Fir_reg_p7_1;
  Rsh_Fir_array_args48[8] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names13[9];
  Rsh_Fir_array_arg_names13[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names13[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names13[2] = Rsh_const(CCP, 37);
  Rsh_Fir_array_arg_names13[3] = Rsh_const(CCP, 38);
  Rsh_Fir_array_arg_names13[4] = Rsh_const(CCP, 39);
  Rsh_Fir_array_arg_names13[5] = Rsh_const(CCP, 27);
  Rsh_Fir_array_arg_names13[6] = Rsh_const(CCP, 40);
  Rsh_Fir_array_arg_names13[7] = Rsh_const(CCP, 41);
  Rsh_Fir_array_arg_names13[8] = Rsh_const(CCP, 42);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_pairlist, 9, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L19() else D1()
  // L19()
  goto L19_;

D1_:;
  // deopt 19 [r8]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L19_:;
  // st args = r8
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // sym = ldf c
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args49);
  // if guard then L20() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L20()
    goto L20_;
  } else {
  // L21()
    goto L21_;
  }

L8_:;
  // st missings = r10
  Rsh_Fir_store(Rsh_const(CCP, 46), Rsh_Fir_reg_r10_1, RHO);
  (void)(Rsh_Fir_reg_r10_1);
  // sym9 = ldf `.Internal`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base9 = ldf `.Internal` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard9 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L20_:;
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args51);
  // if guard1 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L21_:;
  // r9 = dyn base(<lang missing(digits)>, <lang missing(quote)>, <lang missing(na.print)>, <lang missing(print.gap)>, <lang missing(right)>, <lang missing(max)>, <lang missing(width)>, <lang missing(useSource)>)
  SEXP Rsh_Fir_array_args52[8];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args52[2] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args52[3] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args52[4] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args52[5] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args52[6] = Rsh_const(CCP, 55);
  Rsh_Fir_array_args52[7] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names14[8];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_array_arg_names14[4] = R_MissingArg;
  Rsh_Fir_array_arg_names14[5] = R_MissingArg;
  Rsh_Fir_array_arg_names14[6] = R_MissingArg;
  Rsh_Fir_array_arg_names14[7] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 8, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L8(r9)
  // L8(r9)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r9_1;
  goto L8_;

L9_:;
  // sym2 = ldf missing
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base2 = ldf missing in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard2 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L17_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r37
  return Rsh_Fir_reg_r37_;

L22_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r13 = dyn missing(<sym digits>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L9(r13)
  // L9(r13)
  Rsh_Fir_reg_r12_1 = Rsh_Fir_reg_r13_;
  goto L9_;

L23_:;
  // r11 = dyn base1(<sym digits>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L9(r11)
  // L9(r11)
  Rsh_Fir_reg_r12_1 = Rsh_Fir_reg_r11_1;
  goto L9_;

L39_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L41() else D3()
  // L41()
  goto L41_;

L40_:;
  // r36 = dyn base9(<lang print.default(x, args, missings)>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L17(r36)
  // L17(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L17_;

D3_:;
  // deopt 52 [x1]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L10_:;
  // sym3 = ldf missing
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base3 = ldf missing in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard3 then L26() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L26()
    goto L26_;
  } else {
  // L27()
    goto L27_;
  }

L24_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r16 = dyn missing1(<sym quote>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L10(r16)
  // L10(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_1;
  goto L10_;

L25_:;
  // r14 = dyn base2(<sym quote>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L10(r14)
  // L10(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_1;
  goto L10_;

L41_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // args = ld args
  Rsh_Fir_reg_args = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L42() else D4()
  // L42()
  goto L42_;

D4_:;
  // deopt 54 [args]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_args;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L11_:;
  // sym4 = ldf missing
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base4 = ldf missing in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
  // if guard4 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L26_:;
  // missing2 = ldf missing in base
  Rsh_Fir_reg_missing2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r19 = dyn missing2(<sym na.print>)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing2_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L11(r19)
  // L11(r19)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r19_;
  goto L11_;

L27_:;
  // r17 = dyn base3(<sym na.print>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L11(r17)
  // L11(r17)
  Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r17_1;
  goto L11_;

L42_:;
  // args1 = force? args
  Rsh_Fir_reg_args1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args);
  // checkMissing(args1)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_args1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // missings = ld missings
  Rsh_Fir_reg_missings = Rsh_Fir_load(Rsh_const(CCP, 46), RHO);
  // check L43() else D5()
  // L43()
  goto L43_;

D5_:;
  // deopt 56 [missings]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_missings;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L12_:;
  // sym5 = ldf missing
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base5 = ldf missing in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args65);
  // if guard5 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L28_:;
  // missing3 = ldf missing in base
  Rsh_Fir_reg_missing3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r22 = dyn missing3(<sym print.gap>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r22_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing3_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L12(r22)
  // L12(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_1;
  goto L12_;

L29_:;
  // r20 = dyn base4(<sym print.gap>)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L12(r20)
  // L12(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_1;
  goto L12_;

L43_:;
  // missings1 = force? missings
  Rsh_Fir_reg_missings1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_missings);
  // checkMissing(missings1)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_missings1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // print_default = ldf `print.default` in base
  Rsh_Fir_reg_print_default = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r38 = dyn print_default(x2, args1, missings1)
  SEXP Rsh_Fir_array_args69[3];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_args1_;
  Rsh_Fir_array_args69[2] = Rsh_Fir_reg_missings1_;
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print_default, 3, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L44() else D6()
  // L44()
  goto L44_;

D6_:;
  // deopt 59 [r38]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L13_:;
  // sym6 = ldf missing
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base6 = ldf missing in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard6 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L30_:;
  // missing4 = ldf missing in base
  Rsh_Fir_reg_missing4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r25 = dyn missing4(<sym right>)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r25_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing4_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L13(r25)
  // L13(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_1;
  goto L13_;

L31_:;
  // r23 = dyn base5(<sym right>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L13(r23)
  // L13(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L13_;

L44_:;
  // goto L17(r38)
  // L17(r38)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L17_;

L14_:;
  // sym7 = ldf missing
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base7 = ldf missing in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard7 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L32_:;
  // missing5 = ldf missing in base
  Rsh_Fir_reg_missing5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r28 = dyn missing5(<sym max>)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing5_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L14(r28)
  // L14(r28)
  Rsh_Fir_reg_r27_1 = Rsh_Fir_reg_r28_;
  goto L14_;

L33_:;
  // r26 = dyn base6(<sym max>)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r26_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L14(r26)
  // L14(r26)
  Rsh_Fir_reg_r27_1 = Rsh_Fir_reg_r26_1;
  goto L14_;

L15_:;
  // sym8 = ldf missing
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base8 = ldf missing in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args76);
  // if guard8 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L34_:;
  // missing6 = ldf missing in base
  Rsh_Fir_reg_missing6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r31 = dyn missing6(<sym width>)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing6_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L15(r31)
  // L15(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L15_;

L35_:;
  // r29 = dyn base7(<sym width>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r29_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L15(r29)
  // L15(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_1;
  goto L15_;

L16_:;
  // c = ldf c in base
  Rsh_Fir_reg_c1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r35 = dyn c(r12, r15, r18, r21, r24, r27, r30, r33)
  SEXP Rsh_Fir_array_args79[8];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_r12_1;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args79[2] = Rsh_Fir_reg_r18_1;
  Rsh_Fir_array_args79[3] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args79[4] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args79[5] = Rsh_Fir_reg_r27_1;
  Rsh_Fir_array_args79[6] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_args79[7] = Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_array_arg_names31[8];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_array_arg_names31[3] = R_MissingArg;
  Rsh_Fir_array_arg_names31[4] = R_MissingArg;
  Rsh_Fir_array_arg_names31[5] = R_MissingArg;
  Rsh_Fir_array_arg_names31[6] = R_MissingArg;
  Rsh_Fir_array_arg_names31[7] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1, 8, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L38() else D2()
  // L38()
  goto L38_;

L36_:;
  // missing7 = ldf missing in base
  Rsh_Fir_reg_missing7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // r34 = dyn missing7(<sym useSource>)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing7_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L16(r34)
  // L16(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L16_;

L37_:;
  // r32 = dyn base8(<sym useSource>)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L16(r32)
  // L16(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L16_;

D2_:;
  // deopt 48 [r35]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L8(r35)
  // L8(r35)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r35_;
  goto L8_;
}
SEXP Rsh_Fir_user_promise_inner2422365137_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_digits1_;
  SEXP Rsh_Fir_reg_digits2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2422365137/0: expected 0, got %d", NCAPTURES);

  // digits1 = ld digits
  Rsh_Fir_reg_digits1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // digits2 = force? digits1
  Rsh_Fir_reg_digits2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits1_);
  // checkMissing(digits2)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_digits2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // return digits2
  return Rsh_Fir_reg_digits2_;
}
SEXP Rsh_Fir_user_promise_inner2422365137_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_quote1_;
  SEXP Rsh_Fir_reg_quote2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2422365137/0: expected 0, got %d", NCAPTURES);

  // quote1 = ld quote
  Rsh_Fir_reg_quote1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // quote2 = force? quote1
  Rsh_Fir_reg_quote2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quote1_);
  // checkMissing(quote2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_quote2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return quote2
  return Rsh_Fir_reg_quote2_;
}
SEXP Rsh_Fir_user_promise_inner2422365137_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_na_print1_;
  SEXP Rsh_Fir_reg_na_print2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2422365137/0: expected 0, got %d", NCAPTURES);

  // na_print1 = ld `na.print`
  Rsh_Fir_reg_na_print1_ = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // na_print2 = force? na_print1
  Rsh_Fir_reg_na_print2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_na_print1_);
  // checkMissing(na_print2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_na_print2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // return na_print2
  return Rsh_Fir_reg_na_print2_;
}
SEXP Rsh_Fir_user_promise_inner2422365137_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_print_gap1_;
  SEXP Rsh_Fir_reg_print_gap2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2422365137/0: expected 0, got %d", NCAPTURES);

  // print_gap1 = ld `print.gap`
  Rsh_Fir_reg_print_gap1_ = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // print_gap2 = force? print_gap1
  Rsh_Fir_reg_print_gap2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_print_gap1_);
  // checkMissing(print_gap2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_print_gap2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // return print_gap2
  return Rsh_Fir_reg_print_gap2_;
}
SEXP Rsh_Fir_user_promise_inner2422365137_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_right1_;
  SEXP Rsh_Fir_reg_right2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2422365137/0: expected 0, got %d", NCAPTURES);

  // right1 = ld right
  Rsh_Fir_reg_right1_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // right2 = force? right1
  Rsh_Fir_reg_right2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_right1_);
  // checkMissing(right2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_right2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // return right2
  return Rsh_Fir_reg_right2_;
}
SEXP Rsh_Fir_user_promise_inner2422365137_5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_max1_;
  SEXP Rsh_Fir_reg_max2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2422365137/0: expected 0, got %d", NCAPTURES);

  // max1 = ld max
  Rsh_Fir_reg_max1_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // max2 = force? max1
  Rsh_Fir_reg_max2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_max1_);
  // checkMissing(max2)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_max2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // return max2
  return Rsh_Fir_reg_max2_;
}
SEXP Rsh_Fir_user_promise_inner2422365137_6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_width1_;
  SEXP Rsh_Fir_reg_width2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2422365137/0: expected 0, got %d", NCAPTURES);

  // width1 = ld width
  Rsh_Fir_reg_width1_ = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // width2 = force? width1
  Rsh_Fir_reg_width2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_width1_);
  // checkMissing(width2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_width2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // return width2
  return Rsh_Fir_reg_width2_;
}
SEXP Rsh_Fir_user_promise_inner2422365137_7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_useSource1_;
  SEXP Rsh_Fir_reg_useSource2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2422365137/0: expected 0, got %d", NCAPTURES);

  // useSource1 = ld useSource
  Rsh_Fir_reg_useSource1_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // useSource2 = force? useSource1
  Rsh_Fir_reg_useSource2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_useSource1_);
  // checkMissing(useSource2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_useSource2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return useSource2
  return Rsh_Fir_reg_useSource2_;
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
  SEXP Rsh_Fir_reg_noquote;
  SEXP Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_reg_r3_1;

  // Bind parameters
  Rsh_Fir_reg_x2 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_x2, RHO);
  (void)(Rsh_Fir_reg_x2);
  // noquote = ldf noquote
  Rsh_Fir_reg_noquote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 58), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p1 = prom<V +>{
  //   format = ldf format;
  //   p = prom<V +>{
  //     x1 = ld x;
  //     x2 = force? x1;
  //     checkMissing(x2);
  //     return x2;
  //   };
  //   r1 = dyn format[, scientific](p, FALSE);
  //   return r1;
  // }
  Rsh_Fir_reg_p1_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_, 0, NULL, CCP, RHO);
  // r3 = dyn noquote(p1)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_noquote, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 3 [r3]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
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
  SEXP Rsh_Fir_reg_format;
  SEXP Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_reg_r1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2501545716/0: expected 0, got %d", NCAPTURES);

  // format = ldf format
  Rsh_Fir_reg_format = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_1, 0, NULL, CCP, RHO);
  // r1 = dyn format[, scientific](p, FALSE)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_p2;
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = Rsh_const(CCP, 60);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names34, CCP, RHO);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x1_2;
  SEXP Rsh_Fir_reg_x2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2501545716/0: expected 0, got %d", NCAPTURES);

  // x1 = ld x
  Rsh_Fir_reg_x1_2 = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_2);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
