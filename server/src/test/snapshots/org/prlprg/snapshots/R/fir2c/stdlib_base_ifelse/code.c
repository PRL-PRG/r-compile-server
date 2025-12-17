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
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner881979986_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner881979986_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner881979986_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881979986_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner881979986_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_ifelse;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_ifelse1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_seq;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_ifelse2_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_head;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_reg_class;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_l;
  SEXP Rsh_Fir_reg_class__;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_y2_;
  SEXP Rsh_Fir_reg_y3_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_l1_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_l3_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_as_POSIXlt1_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_c3_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_l5_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_dr4_;
  SEXP Rsh_Fir_reg_dc2_;
  SEXP Rsh_Fir_reg_dx4_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_l7_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg____;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_r81_;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_r86_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner881979986
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner881979986_, RHO, CCP);
  // st ifelse = r
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
  // if guard then L5() else L6()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L5()
    goto L5_;
  } else {
  // L6()
    goto L6_;
  }

L0_:;
  // st x = r2
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // sym1 = ldf sqrt
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base1 = ldf sqrt in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L5_:;
  // r3 = `:`(6.0, -4.0)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args2);
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // r4 = dyn c(r3)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L7() else D0()
  // L7()
  goto L7_;

L6_:;
  // r1 = dyn base(<lang `:`(6.0, `-`(4.0))>)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;

D0_:;
  // deopt 10 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // sym2 = ldf sqrt
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base2 = ldf sqrt in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard2 then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L7_:;
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r4_;
  goto L0_;

L8_:;
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

L9_:;
  // r5 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1()
  // L1()
  goto L1_;

D1_:;
  // deopt 13 [x]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2_:;
  // ifelse1 = ldf ifelse
  Rsh_Fir_reg_ifelse1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

L10_:;
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // r7 = sqrt(x1)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(169, RHO, 1, Rsh_Fir_array_args8);
  // goto L1()
  // L1()
  goto L1_;

L11_:;
  // ifelse = ldf ifelse
  Rsh_Fir_reg_ifelse = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

L12_:;
  // r8 = dyn base2(<lang ifelse(`>=`(x, 0.0), x, NA_LGL)>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2()
  // L2()
  goto L2_;

D2_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p = prom<V +>{
  //   x2 = ld x;
  //   x3 = force? x2;
  //   checkMissing(x3);
  //   r10 = `>=`(x3, 0.0);
  //   return r10;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   x4 = ld x;
  //   x5 = force? x4;
  //   checkMissing(x5);
  //   return x5;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r13 = dyn ifelse(p, p1, NA_LGL)
  SEXP Rsh_Fir_array_args13[3];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ifelse, 3, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

L15_:;
  // p2 = prom<V +>{
  //   x6 = ld x;
  //   x7 = force? x6;
  //   checkMissing(x7);
  //   r15 = `>=`(x7, 0.0);
  //   return r15;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   sym3 = ldf sqrt;
  //   base3 = ldf sqrt in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r18):
  //   return r18;
  // L1():
  //   x8 = ld x;
  //   x9 = force? x8;
  //   checkMissing(x9);
  //   r19 = sqrt(x9);
  //   goto L0(r19);
  // L2():
  //   r17 = dyn base3(<sym x>);
  //   goto L0(r17);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r21 = dyn ifelse1(p2, p3, NA_LGL)
  SEXP Rsh_Fir_array_args20[3];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args20[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ifelse1_, 3, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

D3_:;
  // deopt 22 [r13]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 29 [r21]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // r14 = sqrt(r13)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(169, RHO, 1, Rsh_Fir_array_args21);
  // goto L2()
  // L2()
  goto L2_;

L16_:;
  // seq = ldf seq
  Rsh_Fir_reg_seq = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L17() else D6()
  // L17()
  goto L17_;

D6_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p4 = prom<V +>{
  //   as_Date = ldf `as.Date`;
  //   r22 = dyn as_Date("2000-02-29");
  //   return r22;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   as_Date1 = ldf `as.Date`;
  //   r24 = dyn as_Date1("2004-10-04");
  //   return r24;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r26 = dyn seq[, , by](p4, p5, "1 month")
  SEXP Rsh_Fir_array_args24[3];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_seq, 3, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L18() else D7()
  // L18()
  goto L18_;

D7_:;
  // deopt 36 [r26]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L18_:;
  // st x = r26
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r26_, RHO);
  (void)(Rsh_Fir_reg_r26_);
  // ifelse2 = ldf ifelse
  Rsh_Fir_reg_ifelse2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L19() else D8()
  // L19()
  goto L19_;

D8_:;
  // deopt 39 []
  Rsh_Fir_deopt(39, 0, NULL, CCP, RHO);
  return R_NilValue;

L19_:;
  // p7 = prom<V +>{
  //   as_POSIXlt = ldf `as.POSIXlt`;
  //   p6 = prom<V +>{
  //     x10 = ld x;
  //     x11 = force? x10;
  //     checkMissing(x11);
  //     return x11;
  //   };
  //   r28 = dyn as_POSIXlt(p6);
  //   c1 = `is.object`(r28);
  //   if c1 then L1() else L2(r28);
  // L0(dx1):
  //   r32 = `==`(dx1, 29.0);
  //   return r32;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", r28);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(r30):
  //   r31 = `$`(r30, <sym mday>);
  //   goto L0(r31);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   x12 = ld x;
  //   x13 = force? x12;
  //   checkMissing(x13);
  //   return x13;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // r35 = dyn ifelse2(p7, p8, NA_LGL)
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ifelse2_, 3, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L20() else D9()
  // L20()
  goto L20_;

D9_:;
  // deopt 43 [r35]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L20_:;
  // st y = r35
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // head = ldf head
  Rsh_Fir_reg_head = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L21() else D10()
  // L21()
  goto L21_;

D10_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p9 = prom<V +>{
  //   y = ld y;
  //   y1 = force? y;
  //   checkMissing(y1);
  //   return y1;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r37 = dyn head(p9)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_head, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L22() else D11()
  // L22()
  goto L22_;

D11_:;
  // deopt 48 [r37]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L22_:;
  // sym4 = ldf class
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base4 = ldf class in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args37);
  // if guard4 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L3_:;
  // l = ld y
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L27() else D14()
  // L27()
  goto L27_;

L23_:;
  // x14 = ld x
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L25() else D12()
  // L25()
  goto L25_;

L24_:;
  // r38 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L3(r38)
  // L3(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L3_;

D12_:;
  // deopt 51 [x14]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 56 [r39, l, r39]
  SEXP Rsh_Fir_array_deopt_stack8[3];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_r39_;
  Rsh_Fir_deopt(56, 3, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L25_:;
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // class = ldf class in base
  Rsh_Fir_reg_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r40 = dyn class(x15)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L26() else D13()
  // L26()
  goto L26_;

L27_:;
  // r41 = dyn class__(l, NULL, r39)
  SEXP Rsh_Fir_array_args41[3];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args41[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args41[2] = Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L28() else D15()
  // L28()
  goto L28_;

D13_:;
  // deopt 54 [r40]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 58 [r39, r41]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(58, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L3(r40)
  // L3(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L3_;

L28_:;
  // st y = r41
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r41_, RHO);
  (void)(Rsh_Fir_reg_r41_);
  // y2 = ld y
  Rsh_Fir_reg_y2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L29() else D16()
  // L29()
  goto L29_;

D16_:;
  // deopt 60 [y2]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_y2_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L29_:;
  // y3 = force? y2
  Rsh_Fir_reg_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y2_);
  // checkMissing(y3)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_y3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // x16 = ld x
  Rsh_Fir_reg_x16_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L30() else D17()
  // L30()
  goto L30_;

D17_:;
  // deopt 62 [x16]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L30_:;
  // x17 = force? x16
  Rsh_Fir_reg_x17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x16_);
  // checkMissing(x17)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_x17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // st y2 = x17
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_x17_, RHO);
  (void)(Rsh_Fir_reg_x17_);
  // l1 = ld y2
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // c2 = `is.object`(l1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args44);
  // if c2 then L31() else L32(NA_LGL, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L31()
    goto L31_;
  } else {
  // L32(NA_LGL, l1)
    Rsh_Fir_reg_r43_ = Rsh_const(CCP, 9);
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L32_;
  }

L4_:;
  // st y2 = dx3
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L40() else D20()
  // L40()
  goto L40_;

L31_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l1, NA_LGL)
  SEXP Rsh_Fir_array_args45[3];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args45[2] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args45);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if dc1 then L33() else L32(NA_LGL, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L33()
    goto L33_;
  } else {
  // L32(NA_LGL, dr2)
    Rsh_Fir_reg_r43_ = Rsh_const(CCP, 9);
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr2_;
    goto L32_;
  }

L32_:;
  // as_POSIXlt1 = ldf `as.POSIXlt`
  Rsh_Fir_reg_as_POSIXlt1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L34() else D18()
  // L34()
  goto L34_;

D18_:;
  // deopt 69 [r43, l3, NA_LGL]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_const(CCP, 9);
  Rsh_Fir_deopt(69, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

D20_:;
  // deopt 78 []
  Rsh_Fir_deopt(78, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L4(dx2)
  // L4(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L4_;

L34_:;
  // p10 = prom<V +>{
  //   x18 = ld x;
  //   x19 = force? x18;
  //   checkMissing(x19);
  //   return x19;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r47 = dyn as_POSIXlt1(p10)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_POSIXlt1_, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L35() else D19()
  // L35()
  goto L35_;

L40_:;
  // p11 = prom<V +>{
  //   sym5 = ldf identical;
  //   base5 = ldf identical in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r62):
  //   return r62;
  // L1():
  //   y4 = ld y2;
  //   y5 = force? y4;
  //   checkMissing(y5);
  //   y6 = ld y;
  //   y7 = force? y6;
  //   checkMissing(y7);
  //   identical = ldf identical in base;
  //   r63 = dyn identical(y5, y7, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r63);
  // L2():
  //   r61 = dyn base5(<sym y2>, <sym y>);
  //   goto L0(r61);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r65 = dyn stopifnot(p11)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L41() else D21()
  // L41()
  goto L41_;

D19_:;
  // deopt 71 [r43, l3, NA_LGL, r47]
  SEXP Rsh_Fir_array_deopt_stack14[4];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_deopt_stack14[3] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(71, 4, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D21_:;
  // deopt 80 [r65]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(80, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L35_:;
  // c3 = `is.object`(r47)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args56);
  // if c3 then L37() else L38(r43, l3, NA_LGL, r47)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L37()
    goto L37_;
  } else {
  // L38(r43, l3, NA_LGL, r47)
    Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r43_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    Rsh_Fir_reg_r52_ = Rsh_const(CCP, 9);
    Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r47_;
    goto L38_;
  }

L41_:;
  // st yes = <int 1, 2, 3>
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_const(CCP, 31), RHO);
  (void)(Rsh_const(CCP, 31));
  // st no = <real 3.141592653589793, 9.869604401089358, 31.006276680299816, 97.40909103400242>
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_const(CCP, 33), RHO);
  (void)(Rsh_const(CCP, 33));
  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L42() else D22()
  // L42()
  goto L42_;

D22_:;
  // deopt 88 []
  Rsh_Fir_deopt(88, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // r59 = `!=`(dx5, 29.0)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args57);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r60 = dyn ___(l7, r57, r59)
  SEXP Rsh_Fir_array_args58[3];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_r57_;
  Rsh_Fir_array_args58[2] = Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L4(r60)
  // L4(r60)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r60_;
  goto L4_;

L37_:;
  // dr4 = tryDispatchBuiltin.1("$", r47)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args59);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc2 then L39() else L38(r43, l3, NA_LGL, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L39()
    goto L39_;
  } else {
  // L38(r43, l3, NA_LGL, dr4)
    Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r43_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    Rsh_Fir_reg_r52_ = Rsh_const(CCP, 9);
    Rsh_Fir_reg_r53_ = Rsh_Fir_reg_dr4_;
    goto L38_;
  }

L38_:;
  // r58 = `$`(r53, <sym mday>)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args61);
  // goto L36(r51, l5, r52, r58)
  // L36(r51, l5, r52, r58)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r58_;
  goto L36_;

L42_:;
  // r66 = dyn __("utils", "str")
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L43() else D23()
  // L43()
  goto L43_;

D23_:;
  // deopt 91 [r66]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L39_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L36(r43, l3, NA_LGL, dx4)
  // L36(r43, l3, NA_LGL, dx4)
  Rsh_Fir_reg_r56_ = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_r57_ = Rsh_const(CCP, 9);
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L36_;

L43_:;
  // checkFun.0(r66)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_r66_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args64));
  // r67 = r66 as cls
  Rsh_Fir_reg_r67_ = Rsh_Fir_cast(Rsh_Fir_reg_r66_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p14 = prom<V +>{
  //   ifelse3 = ldf ifelse;
  //   p12 = prom<V +>{
  //     yes = ld yes;
  //     yes1 = force? yes;
  //     checkMissing(yes1);
  //     return yes1;
  //   };
  //   p13 = prom<V +>{
  //     no = ld no;
  //     no1 = force? no;
  //     checkMissing(no1);
  //     return no1;
  //   };
  //   r70 = dyn ifelse3(NA_LGL, p12, p13);
  //   return r70;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // r72 = dyn r67(p14)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r67_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L44() else D24()
  // L44()
  goto L44_;

D24_:;
  // deopt 94 [r72]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L44_:;
  // __1 = ldf `::`
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L45() else D25()
  // L45()
  goto L45_;

D25_:;
  // deopt 96 []
  Rsh_Fir_deopt(96, 0, NULL, CCP, RHO);
  return R_NilValue;

L45_:;
  // r73 = dyn __1("utils", "str")
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L46() else D26()
  // L46()
  goto L46_;

D26_:;
  // deopt 99 [r73]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r73_;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L46_:;
  // checkFun.0(r73)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_r73_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args70));
  // r74 = r73 as cls
  Rsh_Fir_reg_r74_ = Rsh_Fir_cast(Rsh_Fir_reg_r73_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p17 = prom<V +>{
  //   ifelse4 = ldf ifelse;
  //   p15 = prom<V +>{
  //     yes2 = ld yes;
  //     yes3 = force? yes2;
  //     checkMissing(yes3);
  //     return yes3;
  //   };
  //   p16 = prom<V +>{
  //     no2 = ld no;
  //     no3 = force? no2;
  //     checkMissing(no3);
  //     return no3;
  //   };
  //   r77 = dyn ifelse4(TRUE, p15, p16);
  //   return r77;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // r79 = dyn r74(p17)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r74_, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L47() else D27()
  // L47()
  goto L47_;

D27_:;
  // deopt 102 [r79]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L47_:;
  // __2 = ldf `::`
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L48() else D28()
  // L48()
  goto L48_;

D28_:;
  // deopt 104 []
  Rsh_Fir_deopt(104, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // r80 = dyn __2("utils", "str")
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L49() else D29()
  // L49()
  goto L49_;

D29_:;
  // deopt 107 [r80]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L49_:;
  // checkFun.0(r80)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r80_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args76));
  // r81 = r80 as cls
  Rsh_Fir_reg_r81_ = Rsh_Fir_cast(Rsh_Fir_reg_r80_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p20 = prom<V +>{
  //   ifelse5 = ldf ifelse;
  //   p18 = prom<V +>{
  //     yes4 = ld yes;
  //     yes5 = force? yes4;
  //     checkMissing(yes5);
  //     return yes5;
  //   };
  //   p19 = prom<V +>{
  //     no4 = ld no;
  //     no5 = force? no4;
  //     checkMissing(no5);
  //     return no5;
  //   };
  //   r84 = dyn ifelse5(FALSE, p18, p19);
  //   return r84;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main18, 0, NULL, CCP, RHO);
  // r86 = dyn r81(p20)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r81_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L50() else D30()
  // L50()
  goto L50_;

D30_:;
  // deopt 110 [r86]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(110, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L50_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r86
  return Rsh_Fir_reg_r86_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // r10 = `>=`(x3, 0.0)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(78, RHO, 2, Rsh_Fir_array_args11);
  // return r10
  return Rsh_Fir_reg_r10_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // return x5
  return Rsh_Fir_reg_x5_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x6 = ld x
  Rsh_Fir_reg_x6_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x7 = force? x6
  Rsh_Fir_reg_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x6_);
  // checkMissing(x7)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // r15 = `>=`(x7, 0.0)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_builtin(78, RHO, 2, Rsh_Fir_array_args15);
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_r19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf sqrt
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base3 = ldf sqrt in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
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
  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // r19 = sqrt(x9)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(169, RHO, 1, Rsh_Fir_array_args18);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L0_;

L2_:;
  // r17 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r17)
  // L0(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_as_Date;
  SEXP Rsh_Fir_reg_r22_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // as_Date = ldf `as.Date`
  Rsh_Fir_reg_as_Date = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // r22 = dyn as_Date("2000-02-29")
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_Date, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names7, CCP, RHO);
  // return r22
  return Rsh_Fir_reg_r22_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_as_Date1_;
  SEXP Rsh_Fir_reg_r24_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // as_Date1 = ldf `as.Date`
  Rsh_Fir_reg_as_Date1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // r24 = dyn as_Date1("2004-10-04")
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_Date1_, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names8, CCP, RHO);
  // return r24
  return Rsh_Fir_reg_r24_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_as_POSIXlt;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_r32_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // as_POSIXlt = ldf `as.POSIXlt`
  Rsh_Fir_reg_as_POSIXlt = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // p6 = prom<V +>{
  //   x10 = ld x;
  //   x11 = force? x10;
  //   checkMissing(x11);
  //   return x11;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r28 = dyn as_POSIXlt(p6)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_POSIXlt, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names10, CCP, RHO);
  // c1 = `is.object`(r28)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args27);
  // if c1 then L1() else L2(r28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2(r28)
    Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r28_;
    goto L2_;
  }

L0_:;
  // r32 = `==`(dx1, 29.0)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args28);
  // return r32
  return Rsh_Fir_reg_r32_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", r28)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args29);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_r30_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r31 = `$`(r30, <sym mday>)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args31);
  // goto L0(r31)
  // L0(r31)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r31_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_x11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return x11
  return Rsh_Fir_reg_x11_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_x13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x12 = ld x
  Rsh_Fir_reg_x12_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x13 = force? x12
  Rsh_Fir_reg_x13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x12_);
  // checkMissing(x13)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_x13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return x13
  return Rsh_Fir_reg_x13_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_y;
  SEXP Rsh_Fir_reg_y1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // y = ld y
  Rsh_Fir_reg_y = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // y1 = force? y
  Rsh_Fir_reg_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y);
  // checkMissing(y1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return y1
  return Rsh_Fir_reg_y1_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_x19_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // x18 = ld x
  Rsh_Fir_reg_x18_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // x19 = force? x18
  Rsh_Fir_reg_x19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x18_);
  // checkMissing(x19)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_x19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return x19
  return Rsh_Fir_reg_x19_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_y4_;
  SEXP Rsh_Fir_reg_y5_;
  SEXP Rsh_Fir_reg_y6_;
  SEXP Rsh_Fir_reg_y7_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r63_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym5 = ldf identical
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base5 = ldf identical in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r62
  return Rsh_Fir_reg_r62_;

L1_:;
  // y4 = ld y2
  Rsh_Fir_reg_y4_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // y5 = force? y4
  Rsh_Fir_reg_y5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y4_);
  // checkMissing(y5)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_y5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // y6 = ld y
  Rsh_Fir_reg_y6_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // y7 = force? y6
  Rsh_Fir_reg_y7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_y6_);
  // checkMissing(y7)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_y7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r63 = dyn identical(y5, y7, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args53[9];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_y5_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_y7_;
  Rsh_Fir_array_args53[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args53[3] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args53[4] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args53[5] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args53[6] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args53[7] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args53[8] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names17[9];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = R_MissingArg;
  Rsh_Fir_array_arg_names17[4] = R_MissingArg;
  Rsh_Fir_array_arg_names17[5] = R_MissingArg;
  Rsh_Fir_array_arg_names17[6] = R_MissingArg;
  Rsh_Fir_array_arg_names17[7] = R_MissingArg;
  Rsh_Fir_array_arg_names17[8] = R_MissingArg;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r63)
  // L0(r63)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r63_;
  goto L0_;

L2_:;
  // r61 = dyn base5(<sym y2>, <sym y>)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r61)
  // L0(r61)
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r61_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ifelse3_;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_r70_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ifelse3 = ldf ifelse
  Rsh_Fir_reg_ifelse3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p12 = prom<V +>{
  //   yes = ld yes;
  //   yes1 = force? yes;
  //   checkMissing(yes1);
  //   return yes1;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   no = ld no;
  //   no1 = force? no;
  //   checkMissing(no1);
  //   return no1;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // r70 = dyn ifelse3(NA_LGL, p12, p13)
  SEXP Rsh_Fir_array_args67[3];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args67[1] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args67[2] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ifelse3_, 3, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names22, CCP, RHO);
  // return r70
  return Rsh_Fir_reg_r70_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_yes;
  SEXP Rsh_Fir_reg_yes1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // yes = ld yes
  Rsh_Fir_reg_yes = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // yes1 = force? yes
  Rsh_Fir_reg_yes1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yes);
  // checkMissing(yes1)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_yes1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return yes1
  return Rsh_Fir_reg_yes1_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_no;
  SEXP Rsh_Fir_reg_no1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // no = ld no
  Rsh_Fir_reg_no = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // no1 = force? no
  Rsh_Fir_reg_no1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_no);
  // checkMissing(no1)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_no1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // return no1
  return Rsh_Fir_reg_no1_;
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ifelse4_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r77_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ifelse4 = ldf ifelse
  Rsh_Fir_reg_ifelse4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p15 = prom<V +>{
  //   yes2 = ld yes;
  //   yes3 = force? yes2;
  //   checkMissing(yes3);
  //   return yes3;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main16, 0, NULL, CCP, RHO);
  // p16 = prom<V +>{
  //   no2 = ld no;
  //   no3 = force? no2;
  //   checkMissing(no3);
  //   return no3;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main17, 0, NULL, CCP, RHO);
  // r77 = dyn ifelse4(TRUE, p15, p16)
  SEXP Rsh_Fir_array_args73[3];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args73[2] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ifelse4_, 3, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names25, CCP, RHO);
  // return r77
  return Rsh_Fir_reg_r77_;
}
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_yes2_;
  SEXP Rsh_Fir_reg_yes3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // yes2 = ld yes
  Rsh_Fir_reg_yes2_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // yes3 = force? yes2
  Rsh_Fir_reg_yes3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yes2_);
  // checkMissing(yes3)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_yes3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // return yes3
  return Rsh_Fir_reg_yes3_;
}
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_no2_;
  SEXP Rsh_Fir_reg_no3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // no2 = ld no
  Rsh_Fir_reg_no2_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // no3 = force? no2
  Rsh_Fir_reg_no3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_no2_);
  // checkMissing(no3)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_no3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // return no3
  return Rsh_Fir_reg_no3_;
}
SEXP Rsh_Fir_user_promise_main18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_ifelse5_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_r84_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // ifelse5 = ldf ifelse
  Rsh_Fir_reg_ifelse5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p18 = prom<V +>{
  //   yes4 = ld yes;
  //   yes5 = force? yes4;
  //   checkMissing(yes5);
  //   return yes5;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main19, 0, NULL, CCP, RHO);
  // p19 = prom<V +>{
  //   no4 = ld no;
  //   no5 = force? no4;
  //   checkMissing(no5);
  //   return no5;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main20, 0, NULL, CCP, RHO);
  // r84 = dyn ifelse5(FALSE, p18, p19)
  SEXP Rsh_Fir_array_args79[3];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_p18_;
  Rsh_Fir_array_args79[2] = Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_array_arg_names28[3];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ifelse5_, 3, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names28, CCP, RHO);
  // return r84
  return Rsh_Fir_reg_r84_;
}
SEXP Rsh_Fir_user_promise_main19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_yes4_;
  SEXP Rsh_Fir_reg_yes5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // yes4 = ld yes
  Rsh_Fir_reg_yes4_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // yes5 = force? yes4
  Rsh_Fir_reg_yes5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yes4_);
  // checkMissing(yes5)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_yes5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // return yes5
  return Rsh_Fir_reg_yes5_;
}
SEXP Rsh_Fir_user_promise_main20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_no4_;
  SEXP Rsh_Fir_reg_no5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // no4 = ld no
  Rsh_Fir_reg_no4_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // no5 = force? no4
  Rsh_Fir_reg_no5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_no4_);
  // checkMissing(no5)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_no5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // return no5
  return Rsh_Fir_reg_no5_;
}
SEXP Rsh_Fir_user_function_inner881979986_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner881979986 dynamic dispatch ([test, yes, no])

  return Rsh_Fir_user_version_inner881979986_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner881979986_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner881979986 version 0 (*, *, * -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner881979986/0: expected 3, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_test;
  SEXP Rsh_Fir_reg_yes1;
  SEXP Rsh_Fir_reg_no1;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_test1_;
  SEXP Rsh_Fir_reg_test2_;
  SEXP Rsh_Fir_reg_is_atomic;
  SEXP Rsh_Fir_reg_r2_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r3_1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_test3_;
  SEXP Rsh_Fir_reg_test4_;
  SEXP Rsh_Fir_reg_typeof;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_l1;
  SEXP Rsh_Fir_reg_storage_mode__;
  SEXP Rsh_Fir_reg_r7_1;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_test5_;
  SEXP Rsh_Fir_reg_test6_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_c4_;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_sym4_1;
  SEXP Rsh_Fir_reg_base4_1;
  SEXP Rsh_Fir_reg_guard4_1;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_c10_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_test7_;
  SEXP Rsh_Fir_reg_test8_;
  SEXP Rsh_Fir_reg_attributes;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_c11_;
  SEXP Rsh_Fir_reg_c12_;
  SEXP Rsh_Fir_reg_c13_;
  SEXP Rsh_Fir_reg_c15_;
  SEXP Rsh_Fir_reg_sym5_1;
  SEXP Rsh_Fir_reg_base5_1;
  SEXP Rsh_Fir_reg_guard5_1;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_test9_;
  SEXP Rsh_Fir_reg_test10_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_c16_;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg_test11_;
  SEXP Rsh_Fir_reg_test12_;
  SEXP Rsh_Fir_reg_c17_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_1;
  SEXP Rsh_Fir_reg_yes1_1;
  SEXP Rsh_Fir_reg_yes2_1;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_r26_1;
  SEXP Rsh_Fir_reg_c18_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_1;
  SEXP Rsh_Fir_reg_yes3_1;
  SEXP Rsh_Fir_reg_yes4_1;
  SEXP Rsh_Fir_reg_attributes1_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r30_1;
  SEXP Rsh_Fir_reg_r31_1;
  SEXP Rsh_Fir_reg_yat;
  SEXP Rsh_Fir_reg_yat1_;
  SEXP Rsh_Fir_reg_c19_;
  SEXP Rsh_Fir_reg_c20_;
  SEXP Rsh_Fir_reg_c21_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r32_1;
  SEXP Rsh_Fir_reg_c25_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_yes5_1;
  SEXP Rsh_Fir_reg_yes6_;
  SEXP Rsh_Fir_reg_is_function;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_c26_;
  SEXP Rsh_Fir_reg_c29_;
  SEXP Rsh_Fir_reg_c30_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r35_1;
  SEXP Rsh_Fir_reg_c35_;
  SEXP Rsh_Fir_reg_c36_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r37_1;
  SEXP Rsh_Fir_reg_c41_;
  SEXP Rsh_Fir_reg_c42_;
  SEXP Rsh_Fir_reg_r38_1;
  SEXP Rsh_Fir_reg_yat2_;
  SEXP Rsh_Fir_reg_yat3_;
  SEXP Rsh_Fir_reg_names;
  SEXP Rsh_Fir_reg_r39_1;
  SEXP Rsh_Fir_reg_identical1;
  SEXP Rsh_Fir_reg_r40_1;
  SEXP Rsh_Fir_reg_c43_;
  SEXP Rsh_Fir_reg_c44_;
  SEXP Rsh_Fir_reg_c47_;
  SEXP Rsh_Fir_reg_c48_;
  SEXP Rsh_Fir_reg_c50_;
  SEXP Rsh_Fir_reg_yes7_;
  SEXP Rsh_Fir_reg_yes8_;
  SEXP Rsh_Fir_reg_r43_1;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_no1_1;
  SEXP Rsh_Fir_reg_no2_1;
  SEXP Rsh_Fir_reg_length2_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_r47_1;
  SEXP Rsh_Fir_reg_c51_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_no3_1;
  SEXP Rsh_Fir_reg_no4_1;
  SEXP Rsh_Fir_reg_attributes2_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r51_1;
  SEXP Rsh_Fir_reg_r52_1;
  SEXP Rsh_Fir_reg_nat;
  SEXP Rsh_Fir_reg_nat1_;
  SEXP Rsh_Fir_reg_c52_;
  SEXP Rsh_Fir_reg_c53_;
  SEXP Rsh_Fir_reg_c54_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r53_1;
  SEXP Rsh_Fir_reg_c58_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_no5_1;
  SEXP Rsh_Fir_reg_no6_;
  SEXP Rsh_Fir_reg_is_function1_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_c59_;
  SEXP Rsh_Fir_reg_c62_;
  SEXP Rsh_Fir_reg_c63_;
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r56_1;
  SEXP Rsh_Fir_reg_c68_;
  SEXP Rsh_Fir_reg_c69_;
  SEXP Rsh_Fir_reg_r57_1;
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r58_1;
  SEXP Rsh_Fir_reg_c74_;
  SEXP Rsh_Fir_reg_c75_;
  SEXP Rsh_Fir_reg_r59_1;
  SEXP Rsh_Fir_reg_nat2_;
  SEXP Rsh_Fir_reg_nat3_;
  SEXP Rsh_Fir_reg_names1_;
  SEXP Rsh_Fir_reg_r60_1;
  SEXP Rsh_Fir_reg_identical1_;
  SEXP Rsh_Fir_reg_r61_1;
  SEXP Rsh_Fir_reg_c76_;
  SEXP Rsh_Fir_reg_c77_;
  SEXP Rsh_Fir_reg_c80_;
  SEXP Rsh_Fir_reg_c81_;
  SEXP Rsh_Fir_reg_c83_;
  SEXP Rsh_Fir_reg_no7_;
  SEXP Rsh_Fir_reg_no8_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_sym18_;
  SEXP Rsh_Fir_reg_base18_;
  SEXP Rsh_Fir_reg_guard18_;
  SEXP Rsh_Fir_reg_r66_1;
  SEXP Rsh_Fir_reg_r67_1;
  SEXP Rsh_Fir_reg_test13_;
  SEXP Rsh_Fir_reg_test14_;
  SEXP Rsh_Fir_reg_isS4_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_c84_;
  SEXP Rsh_Fir_reg___1;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_r70_1;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_r72_1;
  SEXP Rsh_Fir_reg_r73_1;
  SEXP Rsh_Fir_reg_sym19_;
  SEXP Rsh_Fir_reg_base19_;
  SEXP Rsh_Fir_reg_guard19_;
  SEXP Rsh_Fir_reg_r74_1;
  SEXP Rsh_Fir_reg_test17_;
  SEXP Rsh_Fir_reg_test18_;
  SEXP Rsh_Fir_reg_as_logical;
  SEXP Rsh_Fir_reg_r75_;
  SEXP Rsh_Fir_reg_test19_;
  SEXP Rsh_Fir_reg_test20_;
  SEXP Rsh_Fir_reg_sym20_;
  SEXP Rsh_Fir_reg_base20_;
  SEXP Rsh_Fir_reg_guard20_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_r77_1;
  SEXP Rsh_Fir_reg_ans;
  SEXP Rsh_Fir_reg_ans1_;
  SEXP Rsh_Fir_reg_length3_;
  SEXP Rsh_Fir_reg_r78_;
  SEXP Rsh_Fir_reg_which;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_r80_1;
  SEXP Rsh_Fir_reg_which1_;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_sym21_;
  SEXP Rsh_Fir_reg_base21_;
  SEXP Rsh_Fir_reg_guard21_;
  SEXP Rsh_Fir_reg_r84_1;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_ypos;
  SEXP Rsh_Fir_reg_ypos1_;
  SEXP Rsh_Fir_reg_length4_;
  SEXP Rsh_Fir_reg_r86_1;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_c85_;
  SEXP Rsh_Fir_reg_sym22_;
  SEXP Rsh_Fir_reg_base22_;
  SEXP Rsh_Fir_reg_guard22_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_reg_rep;
  SEXP Rsh_Fir_reg_r90_;
  SEXP Rsh_Fir_reg_c86_;
  SEXP Rsh_Fir_reg_r92_;
  SEXP Rsh_Fir_reg_dr1;
  SEXP Rsh_Fir_reg_dc1;
  SEXP Rsh_Fir_reg_dx1;
  SEXP Rsh_Fir_reg_dx1_1;
  SEXP Rsh_Fir_reg_ypos2_;
  SEXP Rsh_Fir_reg_ypos3_;
  SEXP Rsh_Fir_reg___1_1;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_l1_1;
  SEXP Rsh_Fir_reg_c87_;
  SEXP Rsh_Fir_reg_dx3_1;
  SEXP Rsh_Fir_reg_l3_1;
  SEXP Rsh_Fir_reg_dr2_1;
  SEXP Rsh_Fir_reg_dc1_1;
  SEXP Rsh_Fir_reg_dx5_1;
  SEXP Rsh_Fir_reg_dx6_;
  SEXP Rsh_Fir_reg_dx7_;
  SEXP Rsh_Fir_reg_ypos4_;
  SEXP Rsh_Fir_reg_ypos5_;
  SEXP Rsh_Fir_reg____1;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_sym23_;
  SEXP Rsh_Fir_reg_base23_;
  SEXP Rsh_Fir_reg_guard23_;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg_r96_;
  SEXP Rsh_Fir_reg_npos;
  SEXP Rsh_Fir_reg_npos1_;
  SEXP Rsh_Fir_reg_length5_;
  SEXP Rsh_Fir_reg_r97_;
  SEXP Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_reg_c88_;
  SEXP Rsh_Fir_reg_sym24_;
  SEXP Rsh_Fir_reg_base24_;
  SEXP Rsh_Fir_reg_guard24_;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_r100_;
  SEXP Rsh_Fir_reg_rep1_;
  SEXP Rsh_Fir_reg_r101_;
  SEXP Rsh_Fir_reg_c89_;
  SEXP Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_reg_dr4_1;
  SEXP Rsh_Fir_reg_dc2_1;
  SEXP Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_reg_dx10_;
  SEXP Rsh_Fir_reg_npos2_;
  SEXP Rsh_Fir_reg_npos3_;
  SEXP Rsh_Fir_reg___2_1;
  SEXP Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_reg_l4_;
  SEXP Rsh_Fir_reg_c90_;
  SEXP Rsh_Fir_reg_dx12_;
  SEXP Rsh_Fir_reg_l6_;
  SEXP Rsh_Fir_reg_dr6_;
  SEXP Rsh_Fir_reg_dc3_;
  SEXP Rsh_Fir_reg_dx14_;
  SEXP Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_reg_dx16_;
  SEXP Rsh_Fir_reg_npos4_;
  SEXP Rsh_Fir_reg_npos5_;
  SEXP Rsh_Fir_reg____1_;
  SEXP Rsh_Fir_reg_r105_;
  SEXP Rsh_Fir_reg_ans2_;
  SEXP Rsh_Fir_reg_ans3_;

  // Bind parameters
  Rsh_Fir_reg_test = PARAMS[0];
  Rsh_Fir_reg_yes1 = PARAMS[1];
  Rsh_Fir_reg_no1 = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st test = test
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_test, RHO);
  (void)(Rsh_Fir_reg_test);
  // st yes = yes
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_yes1, RHO);
  (void)(Rsh_Fir_reg_yes1);
  // st no = no
  Rsh_Fir_store(Rsh_const(CCP, 34), Rsh_Fir_reg_no1, RHO);
  (void)(Rsh_Fir_reg_no1);
  // sym = ldf `is.atomic`
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base = ldf `is.atomic` in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args81);
  // if guard then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args82);
  // if c then L59() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L59()
    goto L59_;
  } else {
  // L1()
    goto L1_;
  }

L55_:;
  // test1 = ld test
  Rsh_Fir_reg_test1_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L57() else D0()
  // L57()
  goto L57_;

L56_:;
  // r = dyn base(<sym test>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 [test1]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_test1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L1_:;
  // sym18 = ldf isS4
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // base18 = ldf isS4 in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args84);
  // if guard18 then L157() else L158()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L157()
    goto L157_;
  } else {
  // L158()
    goto L158_;
  }

L38_:;
  // test19 = ld test
  Rsh_Fir_reg_test19_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L170() else D42()
  // L170()
  goto L170_;

L57_:;
  // test2 = force? test1
  Rsh_Fir_reg_test2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test1_);
  // checkMissing(test2)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_test2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // is_atomic = ldf `is.atomic` in base
  Rsh_Fir_reg_is_atomic = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r2 = dyn is_atomic(test2)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_test2_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_atomic, 1, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L58() else D1()
  // L58()
  goto L58_;

L59_:;
  // sym1 = ldf typeof
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base1 = ldf typeof in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args87);
  // if guard1 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

D42_:;
  // deopt 179 [test19]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_test19_;
  Rsh_Fir_deopt(179, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L2_:;
  // r6 = `!=`(r4, "logical")
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(75, RHO, 2, Rsh_Fir_array_args88);
  // c1 = `as.logical`(r6)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args89);
  // if c1 then L64() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L64()
    goto L64_;
  } else {
  // L3()
    goto L3_;
  }

L39_:;
  // c84 = `as.logical`(r67)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_r67_1;
  Rsh_Fir_reg_c84_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args90);
  // if c84 then L161() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c84_)) {
  // L161()
    goto L161_;
  } else {
  // L40()
    goto L40_;
  }

L58_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L60_:;
  // test3 = ld test
  Rsh_Fir_reg_test3_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L62() else D2()
  // L62()
  goto L62_;

L61_:;
  // r3 = dyn base1(<sym test>)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r3_1;
  goto L2_;

L157_:;
  // test13 = ld test
  Rsh_Fir_reg_test13_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L159() else D35()
  // L159()
  goto L159_;

L158_:;
  // r66 = dyn base18(<sym test>)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r66_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L39(r66)
  // L39(r66)
  Rsh_Fir_reg_r67_1 = Rsh_Fir_reg_r66_1;
  goto L39_;

L170_:;
  // test20 = force? test19
  Rsh_Fir_reg_test20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test19_);
  // checkMissing(test20)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_test20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // st ans = test20
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_test20_, RHO);
  (void)(Rsh_Fir_reg_test20_);
  // sym20 = ldf length
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base20 = ldf length in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args94);
  // if guard20 then L171() else L172()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L171()
    goto L171_;
  } else {
  // L172()
    goto L172_;
  }

D2_:;
  // deopt 8 [test3]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_test3_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D35_:;
  // deopt 159 [test13]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_test13_;
  Rsh_Fir_deopt(159, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args95[2];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args95[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args95);
  // if guard2 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L40_:;
  // sym19 = ldf `as.logical`
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base19 = ldf `as.logical` in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args96);
  // if guard19 then L166() else L167()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L166()
    goto L166_;
  } else {
  // L167()
    goto L167_;
  }

L41_:;
  // st test = r73
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r73_1, RHO);
  (void)(Rsh_Fir_reg_r73_1);
  // goto L38()
  // L38()
  goto L38_;

L42_:;
  // st len = r77
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_r77_1, RHO);
  (void)(Rsh_Fir_reg_r77_1);
  // which = ldf which
  Rsh_Fir_reg_which = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L175() else D45()
  // L175()
  goto L175_;

L62_:;
  // test4 = force? test3
  Rsh_Fir_reg_test4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test3_);
  // checkMissing(test4)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_test4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // typeof = ldf typeof in base
  Rsh_Fir_reg_typeof = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // r5 = dyn typeof(test4)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_test4_;
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_typeof, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L63() else D3()
  // L63()
  goto L63_;

L64_:;
  // l = ld test
  Rsh_Fir_reg_l1 = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // storage_mode__ = ldf `storage.mode<-`
  Rsh_Fir_reg_storage_mode__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 49), RHO);
  // check L65() else D4()
  // L65()
  goto L65_;

L159_:;
  // test14 = force? test13
  Rsh_Fir_reg_test14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test13_);
  // checkMissing(test14)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_test14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // isS4 = ldf isS4 in base
  Rsh_Fir_reg_isS4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r68 = dyn isS4(test14)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_test14_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_isS4_, 1, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L160() else D36()
  // L160()
  goto L160_;

L161_:;
  // __ = ldf `::`
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // check L162() else D37()
  // L162()
  goto L162_;

L171_:;
  // ans = ld ans
  Rsh_Fir_reg_ans = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L173() else D43()
  // L173()
  goto L173_;

L172_:;
  // r76 = dyn base20(<sym ans>)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 1, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L42(r76)
  // L42(r76)
  Rsh_Fir_reg_r77_1 = Rsh_Fir_reg_r76_;
  goto L42_;

D3_:;
  // deopt 11 [r5]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 17 ["logical", l, "logical"]
  SEXP Rsh_Fir_array_deopt_stack28[3];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_deopt_stack28[2] = Rsh_const(CCP, 43);
  Rsh_Fir_deopt(17, 3, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D36_:;
  // deopt 162 [r68]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(162, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D37_:;
  // deopt 164 []
  Rsh_Fir_deopt(164, 0, NULL, CCP, RHO);
  return R_NilValue;

D43_:;
  // deopt 184 [ans]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_ans;
  Rsh_Fir_deopt(184, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D45_:;
  // deopt 190 []
  Rsh_Fir_deopt(190, 0, NULL, CCP, RHO);
  return R_NilValue;

L5_:;
  // r12 = `==`(r10, 1.0)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_r10_1;
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 50);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args102);
  // c2 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args103);
  // if c2 then L72() else L6(c2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L72()
    goto L72_;
  } else {
  // L6(c2)
    Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c2_1;
    goto L6_;
  }

L63_:;
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r4_1 = Rsh_Fir_reg_r5_1;
  goto L2_;

L65_:;
  // r7 = dyn storage_mode__(l, NULL, "logical")
  SEXP Rsh_Fir_array_args104[3];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_args104[1] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args104[2] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names37[3];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_array_arg_names37[1] = R_MissingArg;
  Rsh_Fir_array_arg_names37[2] = R_MissingArg;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_storage_mode__, 3, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L66() else D5()
  // L66()
  goto L66_;

L68_:;
  // test5 = ld test
  Rsh_Fir_reg_test5_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L70() else D6()
  // L70()
  goto L70_;

L69_:;
  // r9 = dyn base2(<sym test>)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L5(r9)
  // L5(r9)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r9_;
  goto L5_;

L160_:;
  // goto L39(r68)
  // L39(r68)
  Rsh_Fir_reg_r67_1 = Rsh_Fir_reg_r68_;
  goto L39_;

L162_:;
  // r69 = dyn __("methods", "as")
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args106[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L163() else D38()
  // L163()
  goto L163_;

L166_:;
  // test17 = ld test
  Rsh_Fir_reg_test17_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L168() else D40()
  // L168()
  goto L168_;

L167_:;
  // r74 = dyn base19(<sym test>)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r74_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L41(r74)
  // L41(r74)
  Rsh_Fir_reg_r73_1 = Rsh_Fir_reg_r74_1;
  goto L41_;

L173_:;
  // ans1 = force? ans
  Rsh_Fir_reg_ans1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ans);
  // checkMissing(ans1)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_ans1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // length3 = ldf length in base
  Rsh_Fir_reg_length3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r78 = dyn length3(ans1)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_ans1_;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length3_, 1, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L174() else D44()
  // L174()
  goto L174_;

L175_:;
  // p1 = prom<V +>{
  //   test21 = ld test;
  //   test22 = force? test21;
  //   checkMissing(test22);
  //   return test22;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881979986_, 0, NULL, CCP, RHO);
  // r80 = dyn which(p1)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r80_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which, 1, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L176() else D46()
  // L176()
  goto L176_;

D5_:;
  // deopt 19 ["logical", r7]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_deopt(19, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 25 [test5]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_test5_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

D38_:;
  // deopt 167 [r69]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(167, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D40_:;
  // deopt 174 [test17]
  SEXP Rsh_Fir_array_deopt_stack34[1];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_test17_;
  Rsh_Fir_deopt(174, 1, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

D44_:;
  // deopt 187 [r78]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(187, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

D46_:;
  // deopt 192 [r80]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r80_1;
  Rsh_Fir_deopt(192, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L6_:;
  // c15 = `as.logical`(c4)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args112);
  // if c15 then L80() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L80()
    goto L80_;
  } else {
  // L9()
    goto L9_;
  }

L66_:;
  // st test = r7
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r7_1, RHO);
  (void)(Rsh_Fir_reg_r7_1);
  // goto L4()
  // L4()
  goto L4_;

L70_:;
  // test6 = force? test5
  Rsh_Fir_reg_test6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test5_);
  // checkMissing(test6)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_test6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r11 = dyn length(test6)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_test6_;
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names43, CCP, RHO);
  // check L71() else D7()
  // L71()
  goto L71_;

L72_:;
  // sym3 = ldf `is.null`
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // base3 = ldf `is.null` in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args115);
  // if guard3 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

L163_:;
  // checkFun.0(r69)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_r69_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args116));
  // r70 = r69 as cls
  Rsh_Fir_reg_r70_1 = Rsh_Fir_cast(Rsh_Fir_reg_r69_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p = prom<V +>{
  //   test15 = ld test;
  //   test16 = force? test15;
  //   checkMissing(test16);
  //   return test16;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881979986_1, 0, NULL, CCP, RHO);
  // r72 = dyn r70(p, "logical")
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args118[1] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_reg_r72_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r70_1, 2, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L164() else D39()
  // L164()
  goto L164_;

L168_:;
  // test18 = force? test17
  Rsh_Fir_reg_test18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test17_);
  // checkMissing(test18)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_test18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // as_logical = ldf `as.logical` in base
  Rsh_Fir_reg_as_logical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r75 = dyn as_logical(test18)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_test18_;
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_logical, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L169() else D41()
  // L169()
  goto L169_;

L174_:;
  // goto L42(r78)
  // L42(r78)
  Rsh_Fir_reg_r77_1 = Rsh_Fir_reg_r78_;
  goto L42_;

L176_:;
  // st ypos = r80
  Rsh_Fir_store(Rsh_const(CCP, 54), Rsh_Fir_reg_r80_1, RHO);
  (void)(Rsh_Fir_reg_r80_1);
  // which1 = ldf which
  Rsh_Fir_reg_which1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L177() else D47()
  // L177()
  goto L177_;

D7_:;
  // deopt 28 [r11]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

D39_:;
  // deopt 171 [r72]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_r72_1;
  Rsh_Fir_deopt(171, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

D41_:;
  // deopt 177 [r75]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_deopt(177, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

D47_:;
  // deopt 195 []
  Rsh_Fir_deopt(195, 0, NULL, CCP, RHO);
  return R_NilValue;

L7_:;
  // c12 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_r14_1;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args121);
  // c13 = `&&`(c7, c12)
  SEXP Rsh_Fir_array_args122[2];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_c7_;
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args122);
  // goto L6(c13)
  // L6(c13)
  Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c13_;
  goto L6_;

L9_:;
  // goto L37(NULL)
  // L37(NULL)
  Rsh_Fir_reg_r64_ = Rsh_const(CCP, 24);
  goto L37_;

L37_:;
  // goto L38()
  // L38()
  goto L38_;

L71_:;
  // goto L5(r11)
  // L5(r11)
  Rsh_Fir_reg_r10_1 = Rsh_Fir_reg_r11_;
  goto L5_;

L73_:;
  // sym4 = ldf attributes
  Rsh_Fir_reg_sym4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // base4 = ldf attributes in base
  Rsh_Fir_reg_base4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_sym4_1;
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_base4_1;
  Rsh_Fir_reg_guard4_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args123);
  // if guard4 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_1)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L74_:;
  // r13 = dyn base3(<lang attributes(test)>)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_const(CCP, 56);
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 1, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L7(c2, r13)
  // L7(c2, r13)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c2_1;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_reg_r13_1;
  goto L7_;

L80_:;
  // sym5 = ldf `is.na`
  Rsh_Fir_reg_sym5_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 57), RHO);
  // base5 = ldf `is.na` in base
  Rsh_Fir_reg_base5_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_sym5_1;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_base5_1;
  Rsh_Fir_reg_guard5_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args125);
  // if guard5 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_1)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L164_:;
  // goto L41(r72)
  // L41(r72)
  Rsh_Fir_reg_r73_1 = Rsh_Fir_reg_r72_1;
  goto L41_;

L169_:;
  // goto L41(r75)
  // L41(r75)
  Rsh_Fir_reg_r73_1 = Rsh_Fir_reg_r75_;
  goto L41_;

L177_:;
  // p2 = prom<V +>{
  //   test23 = ld test;
  //   test24 = force? test23;
  //   checkMissing(test24);
  //   r81 = `!`(test24);
  //   return r81;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner881979986_2, 0, NULL, CCP, RHO);
  // r83 = dyn which1(p2)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_which1_, 1, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L178() else D48()
  // L178()
  goto L178_;

D48_:;
  // deopt 197 [r83]
  SEXP Rsh_Fir_array_deopt_stack40[1];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(197, 1, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L8_:;
  // c11 = `==`(r16, NULL)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args129[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args129);
  // goto L7(c10, c11)
  // L7(c10, c11)
  Rsh_Fir_reg_c7_ = Rsh_Fir_reg_c10_;
  Rsh_Fir_reg_r14_1 = Rsh_Fir_reg_c11_;
  goto L7_;

L10_:;
  // c16 = `as.logical`(r19)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_r19_1;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args130);
  // if c16 then L85() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L85()
    goto L85_;
  } else {
  // L11()
    goto L11_;
  }

L75_:;
  // test7 = ld test
  Rsh_Fir_reg_test7_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L77() else D8()
  // L77()
  goto L77_;

L76_:;
  // r15 = dyn base4(<sym test>)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_1, 1, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L8(c2, r15)
  // L8(c2, r15)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c2_1;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_1;
  goto L8_;

L81_:;
  // test9 = ld test
  Rsh_Fir_reg_test9_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L83() else D10()
  // L83()
  goto L83_;

L82_:;
  // r18 = dyn base5(<sym test>)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r18_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_1, 1, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L10(r18)
  // L10(r18)
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r18_1;
  goto L10_;

L178_:;
  // st npos = r83
  Rsh_Fir_store(Rsh_const(CCP, 58), Rsh_Fir_reg_r83_, RHO);
  (void)(Rsh_Fir_reg_r83_);
  // sym21 = ldf length
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base21 = ldf length in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args133);
  // if guard21 then L179() else L180()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L179()
    goto L179_;
  } else {
  // L180()
    goto L180_;
  }

D8_:;
  // deopt 34 [c2, test7]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_c2_1;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_test7_;
  Rsh_Fir_deopt(34, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 42 [test9]
  SEXP Rsh_Fir_array_deopt_stack42[1];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_test9_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L11_:;
  // test11 = ld test
  Rsh_Fir_reg_test11_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L88() else D12()
  // L88()
  goto L88_;

L43_:;
  // r87 = `>`(r85, 0)
  SEXP Rsh_Fir_array_args134[2];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_r85_;
  Rsh_Fir_array_args134[1] = Rsh_const(CCP, 59);
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args134);
  // c85 = `as.logical`(r87)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_reg_c85_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args135);
  // if c85 then L183() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c85_)) {
  // L183()
    goto L183_;
  } else {
  // L44()
    goto L44_;
  }

L77_:;
  // test8 = force? test7
  Rsh_Fir_reg_test8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test7_);
  // checkMissing(test8)
  SEXP Rsh_Fir_array_args136[1];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_test8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty()));
  // attributes = ldf attributes in base
  Rsh_Fir_reg_attributes = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r17 = dyn attributes(test8)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_test8_;
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes, 1, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L78() else D9()
  // L78()
  goto L78_;

L83_:;
  // test10 = force? test9
  Rsh_Fir_reg_test10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test9_);
  // checkMissing(test10)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_test10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 57), RHO);
  // r20 = dyn is_na(test10)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_test10_;
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names51, CCP, RHO);
  // check L84() else D11()
  // L84()
  goto L84_;

L85_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NA_LGL
  return Rsh_const(CCP, 9);

L179_:;
  // ypos = ld ypos
  Rsh_Fir_reg_ypos = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // check L181() else D49()
  // L181()
  goto L181_;

L180_:;
  // r84 = dyn base21(<sym ypos>)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_const(CCP, 54);
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r84_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 1, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L43(r84)
  // L43(r84)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r84_1;
  goto L43_;

D9_:;
  // deopt 37 [c2, r17]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_c2_1;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_r17_1;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 45 [r20]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 49 [test11]
  SEXP Rsh_Fir_array_deopt_stack45[1];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_test11_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

D49_:;
  // deopt 201 [ypos]
  SEXP Rsh_Fir_array_deopt_stack46[1];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_ypos;
  Rsh_Fir_deopt(201, 1, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L44_:;
  // goto L48()
  // L48()
  goto L48_;

L48_:;
  // sym23 = ldf length
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base23 = ldf length in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args141[2];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args141[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args141);
  // if guard23 then L195() else L196()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L195()
    goto L195_;
  } else {
  // L196()
    goto L196_;
  }

L78_:;
  // goto L8(c2, r17)
  // L8(c2, r17)
  Rsh_Fir_reg_c10_ = Rsh_Fir_reg_c2_1;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_1;
  goto L8_;

L84_:;
  // goto L10(r20)
  // L10(r20)
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r20_;
  goto L10_;

L88_:;
  // test12 = force? test11
  Rsh_Fir_reg_test12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test11_);
  // checkMissing(test12)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_test12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // c17 = `as.logical`(test12)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_test12_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args143);
  // if c17 then L89() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L89()
    goto L89_;
  } else {
  // L13()
    goto L13_;
  }

L181_:;
  // ypos1 = force? ypos
  Rsh_Fir_reg_ypos1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ypos);
  // checkMissing(ypos1)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_ypos1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args144, Rsh_Fir_param_types_empty()));
  // length4 = ldf length in base
  Rsh_Fir_reg_length4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r86 = dyn length4(ypos1)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_ypos1_;
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r86_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length4_, 1, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names53, CCP, RHO);
  // check L182() else D50()
  // L182()
  goto L182_;

L183_:;
  // sym22 = ldf rep
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base22 = ldf rep in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args146[2];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args146[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args146);
  // if guard22 then L184() else L185()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L184()
    goto L184_;
  } else {
  // L185()
    goto L185_;
  }

D50_:;
  // deopt 204 [r86]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_r86_1;
  Rsh_Fir_deopt(204, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L12_:;
  // goto L37(r22)
  // L37(r22)
  Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r22_1;
  goto L37_;

L13_:;
  // sym12 = ldf length
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base12 = ldf length in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args147[2];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args147[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args147);
  // if guard12 then L123() else L124()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L123()
    goto L123_;
  } else {
  // L124()
    goto L124_;
  }

L45_:;
  // c86 = `is.object`(r89)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_reg_c86_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args148);
  // if c86 then L186() else L187(r89)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c86_)) {
  // L186()
    goto L186_;
  } else {
  // L187(r89)
    Rsh_Fir_reg_r92_ = Rsh_Fir_reg_r89_;
    goto L187_;
  }

L49_:;
  // r98 = `>`(r96, 0)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_array_args149[1] = Rsh_const(CCP, 59);
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_builtin(79, RHO, 2, Rsh_Fir_array_args149);
  // c88 = `as.logical`(r98)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_r98_;
  Rsh_Fir_reg_c88_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args150);
  // if c88 then L199() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c88_)) {
  // L199()
    goto L199_;
  } else {
  // L50()
    goto L50_;
  }

L89_:;
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args151[2];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args151[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args151);
  // if guard6 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L182_:;
  // goto L43(r86)
  // L43(r86)
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r86_1;
  goto L43_;

L184_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r90 = dyn rep(<sym yes>, <sym len>)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args152[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names54[2];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_array_arg_names54[1] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L45(r90)
  // L45(r90)
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r90_;
  goto L45_;

L185_:;
  // r88 = dyn base22[, `length.out`](<sym yes>, <sym len>)
  SEXP Rsh_Fir_array_args153[2];
  Rsh_Fir_array_args153[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args153[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names55[2];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_array_arg_names55[1] = Rsh_const(CCP, 61);
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 2, Rsh_Fir_array_args153, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L45(r88)
  // L45(r88)
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r88_;
  goto L45_;

L195_:;
  // npos = ld npos
  Rsh_Fir_reg_npos = Rsh_Fir_load(Rsh_const(CCP, 58), RHO);
  // check L197() else D53()
  // L197()
  goto L197_;

L196_:;
  // r95 = dyn base23(<sym npos>)
  SEXP Rsh_Fir_array_args154[1];
  Rsh_Fir_array_args154[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 1, Rsh_Fir_array_args154, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L49(r95)
  // L49(r95)
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r95_;
  goto L49_;

D53_:;
  // deopt 222 [npos]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_npos;
  Rsh_Fir_deopt(222, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L14_:;
  // r26 = `==`(r24, 1.0)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_r24_1;
  Rsh_Fir_array_args155[1] = Rsh_const(CCP, 50);
  Rsh_Fir_reg_r26_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args155);
  // c18 = `as.logical`(r26)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_r26_1;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args156);
  // if c18 then L94() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L94()
    goto L94_;
  } else {
  // L15()
    goto L15_;
  }

L26_:;
  // r47 = `==`(r45, 1.0)
  SEXP Rsh_Fir_array_args157[2];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_array_args157[1] = Rsh_const(CCP, 50);
  Rsh_Fir_reg_r47_1 = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args157);
  // c51 = `as.logical`(r47)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_r47_1;
  Rsh_Fir_reg_c51_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args158);
  // if c51 then L127() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c51_)) {
  // L127()
    goto L127_;
  } else {
  // L27()
    goto L27_;
  }

L46_:;
  // l1 = ld ans
  Rsh_Fir_reg_l1_1 = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // c87 = `is.object`(l1)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_l1_1;
  Rsh_Fir_reg_c87_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args159);
  // if c87 then L190() else L191(dx1, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c87_)) {
  // L190()
    goto L190_;
  } else {
  // L191(dx1, l1)
    Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_dx1_1;
    Rsh_Fir_reg_l3_1 = Rsh_Fir_reg_l1_1;
    goto L191_;
  }

L50_:;
  // goto L54()
  // L54()
  goto L54_;

L54_:;
  // ans2 = ld ans
  Rsh_Fir_reg_ans2_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // check L211() else D57()
  // L211()
  goto L211_;

L90_:;
  // yes1 = ld yes
  Rsh_Fir_reg_yes1_1 = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L92() else D13()
  // L92()
  goto L92_;

L91_:;
  // r23 = dyn base6(<sym yes>)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names57[1];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L14(r23)
  // L14(r23)
  Rsh_Fir_reg_r24_1 = Rsh_Fir_reg_r23_;
  goto L14_;

L123_:;
  // no1 = ld no
  Rsh_Fir_reg_no1_1 = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L125() else D24()
  // L125()
  goto L125_;

L124_:;
  // r44 = dyn base12(<sym no>)
  SEXP Rsh_Fir_array_args161[1];
  Rsh_Fir_array_args161[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names58[1];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args161, Rsh_Fir_array_arg_names58, CCP, RHO);
  // goto L26(r44)
  // L26(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L26_;

L186_:;
  // dr = tryDispatchBuiltin.1("[", r89)
  SEXP Rsh_Fir_array_args162[2];
  Rsh_Fir_array_args162[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args162[1] = Rsh_Fir_reg_r89_;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args162);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // if dc then L188() else L187(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L188()
    goto L188_;
  } else {
  // L187(dr)
    Rsh_Fir_reg_r92_ = Rsh_Fir_reg_dr1;
    goto L187_;
  }

L187_:;
  // ypos2 = ld ypos
  Rsh_Fir_reg_ypos2_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // check L189() else D51()
  // L189()
  goto L189_;

L197_:;
  // npos1 = force? npos
  Rsh_Fir_reg_npos1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_npos);
  // checkMissing(npos1)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_npos1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty()));
  // length5 = ldf length in base
  Rsh_Fir_reg_length5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r97 = dyn length5(npos1)
  SEXP Rsh_Fir_array_args165[1];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_npos1_;
  SEXP Rsh_Fir_array_arg_names59[1];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length5_, 1, Rsh_Fir_array_args165, Rsh_Fir_array_arg_names59, CCP, RHO);
  // check L198() else D54()
  // L198()
  goto L198_;

L199_:;
  // sym24 = ldf rep
  Rsh_Fir_reg_sym24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 60), RHO);
  // base24 = ldf rep in base
  Rsh_Fir_reg_base24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // guard24 = `==`.4(sym24, base24)
  SEXP Rsh_Fir_array_args166[2];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_sym24_;
  Rsh_Fir_array_args166[1] = Rsh_Fir_reg_base24_;
  Rsh_Fir_reg_guard24_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args166);
  // if guard24 then L200() else L201()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard24_)) {
  // L200()
    goto L200_;
  } else {
  // L201()
    goto L201_;
  }

D13_:;
  // deopt 53 [yes1]
  SEXP Rsh_Fir_array_deopt_stack49[1];
  Rsh_Fir_array_deopt_stack49[0] = Rsh_Fir_reg_yes1_1;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack49, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 105 [no1]
  SEXP Rsh_Fir_array_deopt_stack50[1];
  Rsh_Fir_array_deopt_stack50[0] = Rsh_Fir_reg_no1_1;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack50, CCP, RHO);
  return R_NilValue;

D51_:;
  // deopt 210 [r92, ypos2]
  SEXP Rsh_Fir_array_deopt_stack51[2];
  Rsh_Fir_array_deopt_stack51[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_array_deopt_stack51[1] = Rsh_Fir_reg_ypos2_;
  Rsh_Fir_deopt(210, 2, Rsh_Fir_array_deopt_stack51, CCP, RHO);
  return R_NilValue;

D54_:;
  // deopt 225 [r97]
  SEXP Rsh_Fir_array_deopt_stack52[1];
  Rsh_Fir_array_deopt_stack52[0] = Rsh_Fir_reg_r97_;
  Rsh_Fir_deopt(225, 1, Rsh_Fir_array_deopt_stack52, CCP, RHO);
  return R_NilValue;

D57_:;
  // deopt 241 [ans2]
  SEXP Rsh_Fir_array_deopt_stack53[1];
  Rsh_Fir_array_deopt_stack53[0] = Rsh_Fir_reg_ans2_;
  Rsh_Fir_deopt(241, 1, Rsh_Fir_array_deopt_stack53, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L25(NULL)
  // L25(NULL)
  Rsh_Fir_reg_r43_1 = Rsh_const(CCP, 24);
  goto L25_;

L25_:;
  // goto L12(r43)
  // L12(r43)
  Rsh_Fir_reg_r22_1 = Rsh_Fir_reg_r43_1;
  goto L12_;

L27_:;
  // goto L12(NULL)
  // L12(NULL)
  Rsh_Fir_reg_r22_1 = Rsh_const(CCP, 24);
  goto L12_;

L47_:;
  // st ans = dx7
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // goto L48()
  // L48()
  goto L48_;

L51_:;
  // c89 = `is.object`(r100)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_reg_c89_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args167);
  // if c89 then L202() else L203(r100)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c89_)) {
  // L202()
    goto L202_;
  } else {
  // L203(r100)
    Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r100_;
    goto L203_;
  }

L92_:;
  // yes2 = force? yes1
  Rsh_Fir_reg_yes2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_yes1_1);
  // checkMissing(yes2)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_yes2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r25 = dyn length1(yes2)
  SEXP Rsh_Fir_array_args169[1];
  Rsh_Fir_array_args169[0] = Rsh_Fir_reg_yes2_1;
  SEXP Rsh_Fir_array_arg_names60[1];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args169, Rsh_Fir_array_arg_names60, CCP, RHO);
  // check L93() else D14()
  // L93()
  goto L93_;

L94_:;
  // sym7 = ldf attributes
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // base7 = ldf attributes in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args170[2];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args170[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args170);
  // if guard7 then L95() else L96()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L95()
    goto L95_;
  } else {
  // L96()
    goto L96_;
  }

L125_:;
  // no2 = force? no1
  Rsh_Fir_reg_no2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_no1_1);
  // checkMissing(no2)
  SEXP Rsh_Fir_array_args171[1];
  Rsh_Fir_array_args171[0] = Rsh_Fir_reg_no2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args171, Rsh_Fir_param_types_empty()));
  // length2 = ldf length in base
  Rsh_Fir_reg_length2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r46 = dyn length2(no2)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_no2_1;
  SEXP Rsh_Fir_array_arg_names61[1];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length2_, 1, Rsh_Fir_array_args172, Rsh_Fir_array_arg_names61, CCP, RHO);
  // check L126() else D25()
  // L126()
  goto L126_;

L127_:;
  // sym13 = ldf attributes
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // base13 = ldf attributes in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args173[2];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args173[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args173);
  // if guard13 then L128() else L129()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L128()
    goto L128_;
  } else {
  // L129()
    goto L129_;
  }

L188_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args174[1];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args174, Rsh_Fir_param_types_empty());
  // goto L46(dx)
  // L46(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L46_;

L189_:;
  // ypos3 = force? ypos2
  Rsh_Fir_reg_ypos3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ypos2_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // r93 = dyn __1(r92, ypos3)
  SEXP Rsh_Fir_array_args175[2];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_array_args175[1] = Rsh_Fir_reg_ypos3_;
  SEXP Rsh_Fir_array_arg_names62[2];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_array_arg_names62[1] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_1, 2, Rsh_Fir_array_args175, Rsh_Fir_array_arg_names62, CCP, RHO);
  // goto L46(r93)
  // L46(r93)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r93_;
  goto L46_;

L190_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l1, dx1)
  SEXP Rsh_Fir_array_args176[3];
  Rsh_Fir_array_args176[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args176[1] = Rsh_Fir_reg_l1_1;
  Rsh_Fir_array_args176[2] = Rsh_Fir_reg_dx1_1;
  Rsh_Fir_reg_dr2_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args176);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dc1_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty());
  // if dc1 then L192() else L191(dx1, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_1)) {
  // L192()
    goto L192_;
  } else {
  // L191(dx1, dr2)
    Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_dx1_1;
    Rsh_Fir_reg_l3_1 = Rsh_Fir_reg_dr2_1;
    goto L191_;
  }

L191_:;
  // ypos4 = ld ypos
  Rsh_Fir_reg_ypos4_ = Rsh_Fir_load(Rsh_const(CCP, 54), RHO);
  // check L193() else D52()
  // L193()
  goto L193_;

L198_:;
  // goto L49(r97)
  // L49(r97)
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r97_;
  goto L49_;

L200_:;
  // rep1 = ldf rep in base
  Rsh_Fir_reg_rep1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 60), RHO);
  // r101 = dyn rep1(<sym no>, <sym len>)
  SEXP Rsh_Fir_array_args178[2];
  Rsh_Fir_array_args178[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args178[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names63[2];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_array_arg_names63[1] = R_MissingArg;
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep1_, 2, Rsh_Fir_array_args178, Rsh_Fir_array_arg_names63, CCP, RHO);
  // goto L51(r101)
  // L51(r101)
  Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r101_;
  goto L51_;

L201_:;
  // r99 = dyn base24[, `length.out`](<sym no>, <sym len>)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args179[1] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names64[2];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_array_arg_names64[1] = Rsh_const(CCP, 61);
  Rsh_Fir_reg_r99_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base24_, 2, Rsh_Fir_array_args179, Rsh_Fir_array_arg_names64, CCP, RHO);
  // goto L51(r99)
  // L51(r99)
  Rsh_Fir_reg_r100_ = Rsh_Fir_reg_r99_;
  goto L51_;

L211_:;
  // ans3 = force? ans2
  Rsh_Fir_reg_ans3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ans2_);
  // checkMissing(ans3)
  SEXP Rsh_Fir_array_args180[1];
  Rsh_Fir_array_args180[0] = Rsh_Fir_reg_ans3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args180, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ans3
  return Rsh_Fir_reg_ans3_;

D14_:;
  // deopt 56 [r25]
  SEXP Rsh_Fir_array_deopt_stack54[1];
  Rsh_Fir_array_deopt_stack54[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack54, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 108 [r46]
  SEXP Rsh_Fir_array_deopt_stack55[1];
  Rsh_Fir_array_deopt_stack55[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack55, CCP, RHO);
  return R_NilValue;

D52_:;
  // deopt 214 [dx3, l3, dx1, ypos4]
  SEXP Rsh_Fir_array_deopt_stack56[4];
  Rsh_Fir_array_deopt_stack56[0] = Rsh_Fir_reg_dx3_1;
  Rsh_Fir_array_deopt_stack56[1] = Rsh_Fir_reg_l3_1;
  Rsh_Fir_array_deopt_stack56[2] = Rsh_Fir_reg_dx1_1;
  Rsh_Fir_array_deopt_stack56[3] = Rsh_Fir_reg_ypos4_;
  Rsh_Fir_deopt(214, 4, Rsh_Fir_array_deopt_stack56, CCP, RHO);
  return R_NilValue;

L16_:;
  // st yat = r28
  Rsh_Fir_store(Rsh_const(CCP, 64), Rsh_Fir_reg_r28_1, RHO);
  (void)(Rsh_Fir_reg_r28_1);
  // sym8 = ldf `is.null`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // base8 = ldf `is.null` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args181[2];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args181[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args181);
  // if guard8 then L99() else L100()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L99()
    goto L99_;
  } else {
  // L100()
    goto L100_;
  }

L28_:;
  // st nat = r49
  Rsh_Fir_store(Rsh_const(CCP, 65), Rsh_Fir_reg_r49_, RHO);
  (void)(Rsh_Fir_reg_r49_);
  // sym14 = ldf `is.null`
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // base14 = ldf `is.null` in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 53), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args182);
  // if guard14 then L132() else L133()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L132()
    goto L132_;
  } else {
  // L133()
    goto L133_;
  }

L52_:;
  // l4 = ld ans
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 44), RHO);
  // c90 = `is.object`(l4)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c90_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args183);
  // if c90 then L206() else L207(dx10, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c90_)) {
  // L206()
    goto L206_;
  } else {
  // L207(dx10, l4)
    Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx10_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L207_;
  }

L93_:;
  // goto L14(r25)
  // L14(r25)
  Rsh_Fir_reg_r24_1 = Rsh_Fir_reg_r25_;
  goto L14_;

L95_:;
  // yes3 = ld yes
  Rsh_Fir_reg_yes3_1 = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L97() else D15()
  // L97()
  goto L97_;

L96_:;
  // r27 = dyn base7(<sym yes>)
  SEXP Rsh_Fir_array_args184[1];
  Rsh_Fir_array_args184[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names65[1];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args184, Rsh_Fir_array_arg_names65, CCP, RHO);
  // goto L16(r27)
  // L16(r27)
  Rsh_Fir_reg_r28_1 = Rsh_Fir_reg_r27_;
  goto L16_;

L126_:;
  // goto L26(r46)
  // L26(r46)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r46_;
  goto L26_;

L128_:;
  // no3 = ld no
  Rsh_Fir_reg_no3_1 = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L130() else D26()
  // L130()
  goto L130_;

L129_:;
  // r48 = dyn base13(<sym no>)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names66[1];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args185, Rsh_Fir_array_arg_names66, CCP, RHO);
  // goto L28(r48)
  // L28(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L28_;

L192_:;
  // dx5 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args186[1];
  Rsh_Fir_array_args186[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dx5_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args186, Rsh_Fir_param_types_empty());
  // goto L47(dx1, dx5)
  // L47(dx1, dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx1_1;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx5_1;
  goto L47_;

L193_:;
  // ypos5 = force? ypos4
  Rsh_Fir_reg_ypos5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ypos4_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r94 = dyn ___(l3, dx1, ypos5)
  SEXP Rsh_Fir_array_args187[3];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_l3_1;
  Rsh_Fir_array_args187[1] = Rsh_Fir_reg_dx1_1;
  Rsh_Fir_array_args187[2] = Rsh_Fir_reg_ypos5_;
  SEXP Rsh_Fir_array_arg_names67[3];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_array_arg_names67[1] = R_MissingArg;
  Rsh_Fir_array_arg_names67[2] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1, 3, Rsh_Fir_array_args187, Rsh_Fir_array_arg_names67, CCP, RHO);
  // goto L47(dx3, r94)
  // L47(dx3, r94)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx3_1;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r94_;
  goto L47_;

L202_:;
  // dr4 = tryDispatchBuiltin.1("[", r100)
  SEXP Rsh_Fir_array_args188[2];
  Rsh_Fir_array_args188[0] = Rsh_const(CCP, 62);
  Rsh_Fir_array_args188[1] = Rsh_Fir_reg_r100_;
  Rsh_Fir_reg_dr4_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args188);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args189[1];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_dr4_1;
  Rsh_Fir_reg_dc2_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args189, Rsh_Fir_param_types_empty());
  // if dc2 then L204() else L203(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_1)) {
  // L204()
    goto L204_;
  } else {
  // L203(dr4)
    Rsh_Fir_reg_r103_ = Rsh_Fir_reg_dr4_1;
    goto L203_;
  }

L203_:;
  // npos2 = ld npos
  Rsh_Fir_reg_npos2_ = Rsh_Fir_load(Rsh_const(CCP, 58), RHO);
  // check L205() else D55()
  // L205()
  goto L205_;

D15_:;
  // deopt 61 [yes3]
  SEXP Rsh_Fir_array_deopt_stack57[1];
  Rsh_Fir_array_deopt_stack57[0] = Rsh_Fir_reg_yes3_1;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack57, CCP, RHO);
  return R_NilValue;

D26_:;
  // deopt 113 [no3]
  SEXP Rsh_Fir_array_deopt_stack58[1];
  Rsh_Fir_array_deopt_stack58[0] = Rsh_Fir_reg_no3_1;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack58, CCP, RHO);
  return R_NilValue;

D55_:;
  // deopt 231 [r103, npos2]
  SEXP Rsh_Fir_array_deopt_stack59[2];
  Rsh_Fir_array_deopt_stack59[0] = Rsh_Fir_reg_r103_;
  Rsh_Fir_array_deopt_stack59[1] = Rsh_Fir_reg_npos2_;
  Rsh_Fir_deopt(231, 2, Rsh_Fir_array_deopt_stack59, CCP, RHO);
  return R_NilValue;

L17_:;
  // c20 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_r31_1;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args190);
  // if c20 then L18(c20) else L102()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L18(c20)
    Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c20_;
    goto L18_;
  } else {
  // L102()
    goto L102_;
  }

L29_:;
  // c53 = `as.logical`(r52)
  SEXP Rsh_Fir_array_args191[1];
  Rsh_Fir_array_args191[0] = Rsh_Fir_reg_r52_1;
  Rsh_Fir_reg_c53_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args191);
  // if c53 then L30(c53) else L135()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c53_)) {
  // L30(c53)
    Rsh_Fir_reg_c54_ = Rsh_Fir_reg_c53_;
    goto L30_;
  } else {
  // L135()
    goto L135_;
  }

L53_:;
  // st ans = dx16
  Rsh_Fir_store(Rsh_const(CCP, 44), Rsh_Fir_reg_dx16_, RHO);
  (void)(Rsh_Fir_reg_dx16_);
  // goto L54()
  // L54()
  goto L54_;

L97_:;
  // yes4 = force? yes3
  Rsh_Fir_reg_yes4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_yes3_1);
  // checkMissing(yes4)
  SEXP Rsh_Fir_array_args192[1];
  Rsh_Fir_array_args192[0] = Rsh_Fir_reg_yes4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args192, Rsh_Fir_param_types_empty()));
  // attributes1 = ldf attributes in base
  Rsh_Fir_reg_attributes1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r29 = dyn attributes1(yes4)
  SEXP Rsh_Fir_array_args193[1];
  Rsh_Fir_array_args193[0] = Rsh_Fir_reg_yes4_1;
  SEXP Rsh_Fir_array_arg_names68[1];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes1_, 1, Rsh_Fir_array_args193, Rsh_Fir_array_arg_names68, CCP, RHO);
  // check L98() else D16()
  // L98()
  goto L98_;

L99_:;
  // yat = ld yat
  Rsh_Fir_reg_yat = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // check L101() else D17()
  // L101()
  goto L101_;

L100_:;
  // r30 = dyn base8(<sym yat>)
  SEXP Rsh_Fir_array_args194[1];
  Rsh_Fir_array_args194[0] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names69[1];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_reg_r30_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args194, Rsh_Fir_array_arg_names69, CCP, RHO);
  // goto L17(r30)
  // L17(r30)
  Rsh_Fir_reg_r31_1 = Rsh_Fir_reg_r30_1;
  goto L17_;

L130_:;
  // no4 = force? no3
  Rsh_Fir_reg_no4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_no3_1);
  // checkMissing(no4)
  SEXP Rsh_Fir_array_args195[1];
  Rsh_Fir_array_args195[0] = Rsh_Fir_reg_no4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args195, Rsh_Fir_param_types_empty()));
  // attributes2 = ldf attributes in base
  Rsh_Fir_reg_attributes2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r50 = dyn attributes2(no4)
  SEXP Rsh_Fir_array_args196[1];
  Rsh_Fir_array_args196[0] = Rsh_Fir_reg_no4_1;
  SEXP Rsh_Fir_array_arg_names70[1];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attributes2_, 1, Rsh_Fir_array_args196, Rsh_Fir_array_arg_names70, CCP, RHO);
  // check L131() else D27()
  // L131()
  goto L131_;

L132_:;
  // nat = ld nat
  Rsh_Fir_reg_nat = Rsh_Fir_load(Rsh_const(CCP, 65), RHO);
  // check L134() else D28()
  // L134()
  goto L134_;

L133_:;
  // r51 = dyn base14(<sym nat>)
  SEXP Rsh_Fir_array_args197[1];
  Rsh_Fir_array_args197[0] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names71[1];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_reg_r51_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args197, Rsh_Fir_array_arg_names71, CCP, RHO);
  // goto L29(r51)
  // L29(r51)
  Rsh_Fir_reg_r52_1 = Rsh_Fir_reg_r51_1;
  goto L29_;

L204_:;
  // dx9 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args198[1];
  Rsh_Fir_array_args198[0] = Rsh_Fir_reg_dr4_1;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args198, Rsh_Fir_param_types_empty());
  // goto L52(dx9)
  // L52(dx9)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_dx9_;
  goto L52_;

L205_:;
  // npos3 = force? npos2
  Rsh_Fir_reg_npos3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_npos2_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // r104 = dyn __2(r103, npos3)
  SEXP Rsh_Fir_array_args199[2];
  Rsh_Fir_array_args199[0] = Rsh_Fir_reg_r103_;
  Rsh_Fir_array_args199[1] = Rsh_Fir_reg_npos3_;
  SEXP Rsh_Fir_array_arg_names72[2];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_array_arg_names72[1] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_1, 2, Rsh_Fir_array_args199, Rsh_Fir_array_arg_names72, CCP, RHO);
  // goto L52(r104)
  // L52(r104)
  Rsh_Fir_reg_dx10_ = Rsh_Fir_reg_r104_;
  goto L52_;

L206_:;
  // dr6 = tryDispatchBuiltin.0("[<-", l4, dx10)
  SEXP Rsh_Fir_array_args200[3];
  Rsh_Fir_array_args200[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args200[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args200[2] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args200);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args201[1];
  Rsh_Fir_array_args201[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args201, Rsh_Fir_param_types_empty());
  // if dc3 then L208() else L207(dx10, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L208()
    goto L208_;
  } else {
  // L207(dx10, dr6)
    Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx10_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr6_;
    goto L207_;
  }

L207_:;
  // npos4 = ld npos
  Rsh_Fir_reg_npos4_ = Rsh_Fir_load(Rsh_const(CCP, 58), RHO);
  // check L209() else D56()
  // L209()
  goto L209_;

D16_:;
  // deopt 64 [r29]
  SEXP Rsh_Fir_array_deopt_stack60[1];
  Rsh_Fir_array_deopt_stack60[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack60, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 67 [yat]
  SEXP Rsh_Fir_array_deopt_stack61[1];
  Rsh_Fir_array_deopt_stack61[0] = Rsh_Fir_reg_yat;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack61, CCP, RHO);
  return R_NilValue;

D27_:;
  // deopt 116 [r50]
  SEXP Rsh_Fir_array_deopt_stack62[1];
  Rsh_Fir_array_deopt_stack62[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(116, 1, Rsh_Fir_array_deopt_stack62, CCP, RHO);
  return R_NilValue;

D28_:;
  // deopt 119 [nat]
  SEXP Rsh_Fir_array_deopt_stack63[1];
  Rsh_Fir_array_deopt_stack63[0] = Rsh_Fir_reg_nat;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack63, CCP, RHO);
  return R_NilValue;

D56_:;
  // deopt 235 [dx12, l6, dx10, npos4]
  SEXP Rsh_Fir_array_deopt_stack64[4];
  Rsh_Fir_array_deopt_stack64[0] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_array_deopt_stack64[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack64[2] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_array_deopt_stack64[3] = Rsh_Fir_reg_npos4_;
  Rsh_Fir_deopt(235, 4, Rsh_Fir_array_deopt_stack64, CCP, RHO);
  return R_NilValue;

L18_:;
  // c50 = `as.logical`(c21)
  SEXP Rsh_Fir_array_args202[1];
  Rsh_Fir_array_args202[0] = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args202);
  // if c50 then L117() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c50_)) {
  // L117()
    goto L117_;
  } else {
  // L23()
    goto L23_;
  }

L30_:;
  // c83 = `as.logical`(c54)
  SEXP Rsh_Fir_array_args203[1];
  Rsh_Fir_array_args203[0] = Rsh_Fir_reg_c54_;
  Rsh_Fir_reg_c83_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args203);
  // if c83 then L150() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c83_)) {
  // L150()
    goto L150_;
  } else {
  // L35()
    goto L35_;
  }

L98_:;
  // goto L16(r29)
  // L16(r29)
  Rsh_Fir_reg_r28_1 = Rsh_Fir_reg_r29_;
  goto L16_;

L101_:;
  // yat1 = force? yat
  Rsh_Fir_reg_yat1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yat);
  // checkMissing(yat1)
  SEXP Rsh_Fir_array_args204[1];
  Rsh_Fir_array_args204[0] = Rsh_Fir_reg_yat1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args204, Rsh_Fir_param_types_empty()));
  // c19 = `==`(yat1, NULL)
  SEXP Rsh_Fir_array_args205[2];
  Rsh_Fir_array_args205[0] = Rsh_Fir_reg_yat1_;
  Rsh_Fir_array_args205[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args205);
  // goto L17(c19)
  // L17(c19)
  Rsh_Fir_reg_r31_1 = Rsh_Fir_reg_c19_;
  goto L17_;

L102_:;
  // sym9 = ldf `is.function`
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base9 = ldf `is.function` in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args206[2];
  Rsh_Fir_array_args206[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args206[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args206);
  // if guard9 then L103() else L104()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L103()
    goto L103_;
  } else {
  // L104()
    goto L104_;
  }

L131_:;
  // goto L28(r50)
  // L28(r50)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r50_;
  goto L28_;

L134_:;
  // nat1 = force? nat
  Rsh_Fir_reg_nat1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nat);
  // checkMissing(nat1)
  SEXP Rsh_Fir_array_args207[1];
  Rsh_Fir_array_args207[0] = Rsh_Fir_reg_nat1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args207, Rsh_Fir_param_types_empty()));
  // c52 = `==`(nat1, NULL)
  SEXP Rsh_Fir_array_args208[2];
  Rsh_Fir_array_args208[0] = Rsh_Fir_reg_nat1_;
  Rsh_Fir_array_args208[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_c52_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args208);
  // goto L29(c52)
  // L29(c52)
  Rsh_Fir_reg_r52_1 = Rsh_Fir_reg_c52_;
  goto L29_;

L135_:;
  // sym15 = ldf `is.function`
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 66), RHO);
  // base15 = ldf `is.function` in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args209[2];
  Rsh_Fir_array_args209[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args209[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args209);
  // if guard15 then L136() else L137()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L136()
    goto L136_;
  } else {
  // L137()
    goto L137_;
  }

L208_:;
  // dx14 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args210[1];
  Rsh_Fir_array_args210[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args210, Rsh_Fir_param_types_empty());
  // goto L53(dx10, dx14)
  // L53(dx10, dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx10_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_dx14_;
  goto L53_;

L209_:;
  // npos5 = force? npos4
  Rsh_Fir_reg_npos5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_npos4_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r105 = dyn ___1(l6, dx10, npos5)
  SEXP Rsh_Fir_array_args211[3];
  Rsh_Fir_array_args211[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args211[1] = Rsh_Fir_reg_dx10_;
  Rsh_Fir_array_args211[2] = Rsh_Fir_reg_npos5_;
  SEXP Rsh_Fir_array_arg_names73[3];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_array_arg_names73[1] = R_MissingArg;
  Rsh_Fir_array_arg_names73[2] = R_MissingArg;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args211, Rsh_Fir_array_arg_names73, CCP, RHO);
  // goto L53(dx12, r105)
  // L53(dx12, r105)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx12_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_reg_r105_;
  goto L53_;

L19_:;
  // c26 = `as.logical`(r33)
  SEXP Rsh_Fir_array_args212[1];
  Rsh_Fir_array_args212[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args212);
  // if c26 then L107() else L20(c25, c26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L107()
    goto L107_;
  } else {
  // L20(c25, c26)
    Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c25_;
    Rsh_Fir_reg_c30_ = Rsh_Fir_reg_c26_;
    goto L20_;
  }

L23_:;
  // goto L25(NULL)
  // L25(NULL)
  Rsh_Fir_reg_r43_1 = Rsh_const(CCP, 24);
  goto L25_;

L31_:;
  // c59 = `as.logical`(r54)
  SEXP Rsh_Fir_array_args213[1];
  Rsh_Fir_array_args213[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_c59_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args213);
  // if c59 then L140() else L32(c58, c59)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c59_)) {
  // L140()
    goto L140_;
  } else {
  // L32(c58, c59)
    Rsh_Fir_reg_c62_ = Rsh_Fir_reg_c58_;
    Rsh_Fir_reg_c63_ = Rsh_Fir_reg_c59_;
    goto L32_;
  }

L35_:;
  // goto L12(NULL)
  // L12(NULL)
  Rsh_Fir_reg_r22_1 = Rsh_const(CCP, 24);
  goto L12_;

L103_:;
  // yes5 = ld yes
  Rsh_Fir_reg_yes5_1 = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L105() else D18()
  // L105()
  goto L105_;

L104_:;
  // r32 = dyn base9(<sym yes>)
  SEXP Rsh_Fir_array_args214[1];
  Rsh_Fir_array_args214[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names74[1];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_reg_r32_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args214, Rsh_Fir_array_arg_names74, CCP, RHO);
  // goto L19(c20, r32)
  // L19(c20, r32)
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_1;
  goto L19_;

L117_:;
  // yes7 = ld yes
  Rsh_Fir_reg_yes7_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L118() else D23()
  // L118()
  goto L118_;

L136_:;
  // no5 = ld no
  Rsh_Fir_reg_no5_1 = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L138() else D29()
  // L138()
  goto L138_;

L137_:;
  // r53 = dyn base15(<sym no>)
  SEXP Rsh_Fir_array_args215[1];
  Rsh_Fir_array_args215[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names75[1];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_reg_r53_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args215, Rsh_Fir_array_arg_names75, CCP, RHO);
  // goto L31(c53, r53)
  // L31(c53, r53)
  Rsh_Fir_reg_c58_ = Rsh_Fir_reg_c53_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_1;
  goto L31_;

L150_:;
  // no7 = ld no
  Rsh_Fir_reg_no7_ = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L151() else D34()
  // L151()
  goto L151_;

D18_:;
  // deopt 72 [c20, yes5]
  SEXP Rsh_Fir_array_deopt_stack65[2];
  Rsh_Fir_array_deopt_stack65[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_array_deopt_stack65[1] = Rsh_Fir_reg_yes5_1;
  Rsh_Fir_deopt(72, 2, Rsh_Fir_array_deopt_stack65, CCP, RHO);
  return R_NilValue;

D23_:;
  // deopt 96 [yes7]
  SEXP Rsh_Fir_array_deopt_stack66[1];
  Rsh_Fir_array_deopt_stack66[0] = Rsh_Fir_reg_yes7_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack66, CCP, RHO);
  return R_NilValue;

D29_:;
  // deopt 124 [c53, no5]
  SEXP Rsh_Fir_array_deopt_stack67[2];
  Rsh_Fir_array_deopt_stack67[0] = Rsh_Fir_reg_c53_;
  Rsh_Fir_array_deopt_stack67[1] = Rsh_Fir_reg_no5_1;
  Rsh_Fir_deopt(124, 2, Rsh_Fir_array_deopt_stack67, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 148 [no7]
  SEXP Rsh_Fir_array_deopt_stack68[1];
  Rsh_Fir_array_deopt_stack68[0] = Rsh_Fir_reg_no7_;
  Rsh_Fir_deopt(148, 1, Rsh_Fir_array_deopt_stack68, CCP, RHO);
  return R_NilValue;

L20_:;
  // c47 = `as.logical`(c30)
  SEXP Rsh_Fir_array_args216[1];
  Rsh_Fir_array_args216[0] = Rsh_Fir_reg_c30_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args216);
  // c48 = `||`(c29, c47)
  SEXP Rsh_Fir_array_args217[2];
  Rsh_Fir_array_args217[0] = Rsh_Fir_reg_c29_;
  Rsh_Fir_array_args217[1] = Rsh_Fir_reg_c47_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args217);
  // goto L18(c48)
  // L18(c48)
  Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c48_;
  goto L18_;

L32_:;
  // c80 = `as.logical`(c63)
  SEXP Rsh_Fir_array_args218[1];
  Rsh_Fir_array_args218[0] = Rsh_Fir_reg_c63_;
  Rsh_Fir_reg_c80_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args218);
  // c81 = `||`(c62, c80)
  SEXP Rsh_Fir_array_args219[2];
  Rsh_Fir_array_args219[0] = Rsh_Fir_reg_c62_;
  Rsh_Fir_array_args219[1] = Rsh_Fir_reg_c80_;
  Rsh_Fir_reg_c81_ = Rsh_Fir_call_builtin(84, RHO, 2, Rsh_Fir_array_args219);
  // goto L30(c81)
  // L30(c81)
  Rsh_Fir_reg_c54_ = Rsh_Fir_reg_c81_;
  goto L30_;

L105_:;
  // yes6 = force? yes5
  Rsh_Fir_reg_yes6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yes5_1);
  // checkMissing(yes6)
  SEXP Rsh_Fir_array_args220[1];
  Rsh_Fir_array_args220[0] = Rsh_Fir_reg_yes6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args220, Rsh_Fir_param_types_empty()));
  // is_function = ldf `is.function` in base
  Rsh_Fir_reg_is_function = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r34 = dyn is_function(yes6)
  SEXP Rsh_Fir_array_args221[1];
  Rsh_Fir_array_args221[0] = Rsh_Fir_reg_yes6_;
  SEXP Rsh_Fir_array_arg_names76[1];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_function, 1, Rsh_Fir_array_args221, Rsh_Fir_array_arg_names76, CCP, RHO);
  // check L106() else D19()
  // L106()
  goto L106_;

L107_:;
  // sym10 = ldf identical
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base10 = ldf identical in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args222[2];
  Rsh_Fir_array_args222[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args222[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args222);
  // if guard10 then L108() else L109()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L108()
    goto L108_;
  } else {
  // L109()
    goto L109_;
  }

L118_:;
  // yes8 = force? yes7
  Rsh_Fir_reg_yes8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yes7_);
  // checkMissing(yes8)
  SEXP Rsh_Fir_array_args223[1];
  Rsh_Fir_array_args223[0] = Rsh_Fir_reg_yes8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args223, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return yes8
  return Rsh_Fir_reg_yes8_;

L138_:;
  // no6 = force? no5
  Rsh_Fir_reg_no6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_no5_1);
  // checkMissing(no6)
  SEXP Rsh_Fir_array_args224[1];
  Rsh_Fir_array_args224[0] = Rsh_Fir_reg_no6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args224, Rsh_Fir_param_types_empty()));
  // is_function1 = ldf `is.function` in base
  Rsh_Fir_reg_is_function1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 66), RHO);
  // r55 = dyn is_function1(no6)
  SEXP Rsh_Fir_array_args225[1];
  Rsh_Fir_array_args225[0] = Rsh_Fir_reg_no6_;
  SEXP Rsh_Fir_array_arg_names77[1];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_function1_, 1, Rsh_Fir_array_args225, Rsh_Fir_array_arg_names77, CCP, RHO);
  // check L139() else D30()
  // L139()
  goto L139_;

L140_:;
  // sym16 = ldf identical
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base16 = ldf identical in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args226[2];
  Rsh_Fir_array_args226[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args226[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args226);
  // if guard16 then L141() else L142()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L141()
    goto L141_;
  } else {
  // L142()
    goto L142_;
  }

L151_:;
  // no8 = force? no7
  Rsh_Fir_reg_no8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_no7_);
  // checkMissing(no8)
  SEXP Rsh_Fir_array_args227[1];
  Rsh_Fir_array_args227[0] = Rsh_Fir_reg_no8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args227, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return no8
  return Rsh_Fir_reg_no8_;

D19_:;
  // deopt 75 [c20, r34]
  SEXP Rsh_Fir_array_deopt_stack69[2];
  Rsh_Fir_array_deopt_stack69[0] = Rsh_Fir_reg_c20_;
  Rsh_Fir_array_deopt_stack69[1] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(75, 2, Rsh_Fir_array_deopt_stack69, CCP, RHO);
  return R_NilValue;

D30_:;
  // deopt 127 [c53, r55]
  SEXP Rsh_Fir_array_deopt_stack70[2];
  Rsh_Fir_array_deopt_stack70[0] = Rsh_Fir_reg_c53_;
  Rsh_Fir_array_deopt_stack70[1] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(127, 2, Rsh_Fir_array_deopt_stack70, CCP, RHO);
  return R_NilValue;

L21_:;
  // c43 = `as.logical`(r36)
  SEXP Rsh_Fir_array_args228[1];
  Rsh_Fir_array_args228[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args228);
  // c44 = `&&`(c36, c43)
  SEXP Rsh_Fir_array_args229[2];
  Rsh_Fir_array_args229[0] = Rsh_Fir_reg_c36_;
  Rsh_Fir_array_args229[1] = Rsh_Fir_reg_c43_;
  Rsh_Fir_reg_c44_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args229);
  // goto L20(c35, c44)
  // L20(c35, c44)
  Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c35_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_reg_c44_;
  goto L20_;

L33_:;
  // c76 = `as.logical`(r57)
  SEXP Rsh_Fir_array_args230[1];
  Rsh_Fir_array_args230[0] = Rsh_Fir_reg_r57_1;
  Rsh_Fir_reg_c76_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args230);
  // c77 = `&&`(c69, c76)
  SEXP Rsh_Fir_array_args231[2];
  Rsh_Fir_array_args231[0] = Rsh_Fir_reg_c69_;
  Rsh_Fir_array_args231[1] = Rsh_Fir_reg_c76_;
  Rsh_Fir_reg_c77_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args231);
  // goto L32(c68, c77)
  // L32(c68, c77)
  Rsh_Fir_reg_c62_ = Rsh_Fir_reg_c68_;
  Rsh_Fir_reg_c63_ = Rsh_Fir_reg_c77_;
  goto L32_;

L106_:;
  // goto L19(c20, r34)
  // L19(c20, r34)
  Rsh_Fir_reg_c25_ = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L19_;

L108_:;
  // sym11 = ldf names
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // base11 = ldf names in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args232[2];
  Rsh_Fir_array_args232[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args232[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args232);
  // if guard11 then L110() else L111()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L110()
    goto L110_;
  } else {
  // L111()
    goto L111_;
  }

L109_:;
  // r35 = dyn base10(<lang names(yat)>, "srcref")
  SEXP Rsh_Fir_array_args233[2];
  Rsh_Fir_array_args233[0] = Rsh_const(CCP, 68);
  Rsh_Fir_array_args233[1] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names78[2];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_array_arg_names78[1] = R_MissingArg;
  Rsh_Fir_reg_r35_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args233, Rsh_Fir_array_arg_names78, CCP, RHO);
  // goto L21(c25, c26, r35)
  // L21(c25, c26, r35)
  Rsh_Fir_reg_c35_ = Rsh_Fir_reg_c25_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_1;
  goto L21_;

L139_:;
  // goto L31(c53, r55)
  // L31(c53, r55)
  Rsh_Fir_reg_c58_ = Rsh_Fir_reg_c53_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r55_;
  goto L31_;

L141_:;
  // sym17 = ldf names
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 67), RHO);
  // base17 = ldf names in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args234[2];
  Rsh_Fir_array_args234[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args234[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args234);
  // if guard17 then L143() else L144()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L143()
    goto L143_;
  } else {
  // L144()
    goto L144_;
  }

L142_:;
  // r56 = dyn base16(<lang names(nat)>, "srcref")
  SEXP Rsh_Fir_array_args235[2];
  Rsh_Fir_array_args235[0] = Rsh_const(CCP, 70);
  Rsh_Fir_array_args235[1] = Rsh_const(CCP, 69);
  SEXP Rsh_Fir_array_arg_names79[2];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_array_arg_names79[1] = R_MissingArg;
  Rsh_Fir_reg_r56_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 2, Rsh_Fir_array_args235, Rsh_Fir_array_arg_names79, CCP, RHO);
  // goto L33(c58, c59, r56)
  // L33(c58, c59, r56)
  Rsh_Fir_reg_c68_ = Rsh_Fir_reg_c58_;
  Rsh_Fir_reg_c69_ = Rsh_Fir_reg_c59_;
  Rsh_Fir_reg_r57_1 = Rsh_Fir_reg_r56_1;
  goto L33_;

L22_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r40 = dyn identical(r38, "srcref", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args236[9];
  Rsh_Fir_array_args236[0] = Rsh_Fir_reg_r38_1;
  Rsh_Fir_array_args236[1] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args236[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args236[3] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args236[4] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args236[5] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args236[6] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args236[7] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args236[8] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names80[9];
  Rsh_Fir_array_arg_names80[0] = R_MissingArg;
  Rsh_Fir_array_arg_names80[1] = R_MissingArg;
  Rsh_Fir_array_arg_names80[2] = R_MissingArg;
  Rsh_Fir_array_arg_names80[3] = R_MissingArg;
  Rsh_Fir_array_arg_names80[4] = R_MissingArg;
  Rsh_Fir_array_arg_names80[5] = R_MissingArg;
  Rsh_Fir_array_arg_names80[6] = R_MissingArg;
  Rsh_Fir_array_arg_names80[7] = R_MissingArg;
  Rsh_Fir_array_arg_names80[8] = R_MissingArg;
  Rsh_Fir_reg_r40_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1, 9, Rsh_Fir_array_args236, Rsh_Fir_array_arg_names80, CCP, RHO);
  // check L114() else D22()
  // L114()
  goto L114_;

L34_:;
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r61 = dyn identical1(r59, "srcref", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args237[9];
  Rsh_Fir_array_args237[0] = Rsh_Fir_reg_r59_1;
  Rsh_Fir_array_args237[1] = Rsh_const(CCP, 69);
  Rsh_Fir_array_args237[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args237[3] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args237[4] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args237[5] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args237[6] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args237[7] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args237[8] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names81[9];
  Rsh_Fir_array_arg_names81[0] = R_MissingArg;
  Rsh_Fir_array_arg_names81[1] = R_MissingArg;
  Rsh_Fir_array_arg_names81[2] = R_MissingArg;
  Rsh_Fir_array_arg_names81[3] = R_MissingArg;
  Rsh_Fir_array_arg_names81[4] = R_MissingArg;
  Rsh_Fir_array_arg_names81[5] = R_MissingArg;
  Rsh_Fir_array_arg_names81[6] = R_MissingArg;
  Rsh_Fir_array_arg_names81[7] = R_MissingArg;
  Rsh_Fir_array_arg_names81[8] = R_MissingArg;
  Rsh_Fir_reg_r61_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args237, Rsh_Fir_array_arg_names81, CCP, RHO);
  // check L147() else D33()
  // L147()
  goto L147_;

L110_:;
  // yat2 = ld yat
  Rsh_Fir_reg_yat2_ = Rsh_Fir_load(Rsh_const(CCP, 64), RHO);
  // check L112() else D20()
  // L112()
  goto L112_;

L111_:;
  // r37 = dyn base11(<sym yat>)
  SEXP Rsh_Fir_array_args238[1];
  Rsh_Fir_array_args238[0] = Rsh_const(CCP, 64);
  SEXP Rsh_Fir_array_arg_names82[1];
  Rsh_Fir_array_arg_names82[0] = R_MissingArg;
  Rsh_Fir_reg_r37_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args238, Rsh_Fir_array_arg_names82, CCP, RHO);
  // goto L22(c25, c26, r37)
  // L22(c25, c26, r37)
  Rsh_Fir_reg_c41_ = Rsh_Fir_reg_c25_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_r38_1 = Rsh_Fir_reg_r37_1;
  goto L22_;

L143_:;
  // nat2 = ld nat
  Rsh_Fir_reg_nat2_ = Rsh_Fir_load(Rsh_const(CCP, 65), RHO);
  // check L145() else D31()
  // L145()
  goto L145_;

L144_:;
  // r58 = dyn base17(<sym nat>)
  SEXP Rsh_Fir_array_args239[1];
  Rsh_Fir_array_args239[0] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names83[1];
  Rsh_Fir_array_arg_names83[0] = R_MissingArg;
  Rsh_Fir_reg_r58_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args239, Rsh_Fir_array_arg_names83, CCP, RHO);
  // goto L34(c58, c59, r58)
  // L34(c58, c59, r58)
  Rsh_Fir_reg_c74_ = Rsh_Fir_reg_c58_;
  Rsh_Fir_reg_c75_ = Rsh_Fir_reg_c59_;
  Rsh_Fir_reg_r59_1 = Rsh_Fir_reg_r58_1;
  goto L34_;

D20_:;
  // deopt 80 [c25, c26, yat2]
  SEXP Rsh_Fir_array_deopt_stack71[3];
  Rsh_Fir_array_deopt_stack71[0] = Rsh_Fir_reg_c25_;
  Rsh_Fir_array_deopt_stack71[1] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_deopt_stack71[2] = Rsh_Fir_reg_yat2_;
  Rsh_Fir_deopt(80, 3, Rsh_Fir_array_deopt_stack71, CCP, RHO);
  return R_NilValue;

D22_:;
  // deopt 93 [c41, c42, r40]
  SEXP Rsh_Fir_array_deopt_stack72[3];
  Rsh_Fir_array_deopt_stack72[0] = Rsh_Fir_reg_c41_;
  Rsh_Fir_array_deopt_stack72[1] = Rsh_Fir_reg_c42_;
  Rsh_Fir_array_deopt_stack72[2] = Rsh_Fir_reg_r40_1;
  Rsh_Fir_deopt(93, 3, Rsh_Fir_array_deopt_stack72, CCP, RHO);
  return R_NilValue;

D31_:;
  // deopt 132 [c58, c59, nat2]
  SEXP Rsh_Fir_array_deopt_stack73[3];
  Rsh_Fir_array_deopt_stack73[0] = Rsh_Fir_reg_c58_;
  Rsh_Fir_array_deopt_stack73[1] = Rsh_Fir_reg_c59_;
  Rsh_Fir_array_deopt_stack73[2] = Rsh_Fir_reg_nat2_;
  Rsh_Fir_deopt(132, 3, Rsh_Fir_array_deopt_stack73, CCP, RHO);
  return R_NilValue;

D33_:;
  // deopt 145 [c74, c75, r61]
  SEXP Rsh_Fir_array_deopt_stack74[3];
  Rsh_Fir_array_deopt_stack74[0] = Rsh_Fir_reg_c74_;
  Rsh_Fir_array_deopt_stack74[1] = Rsh_Fir_reg_c75_;
  Rsh_Fir_array_deopt_stack74[2] = Rsh_Fir_reg_r61_1;
  Rsh_Fir_deopt(145, 3, Rsh_Fir_array_deopt_stack74, CCP, RHO);
  return R_NilValue;

L112_:;
  // yat3 = force? yat2
  Rsh_Fir_reg_yat3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_yat2_);
  // checkMissing(yat3)
  SEXP Rsh_Fir_array_args240[1];
  Rsh_Fir_array_args240[0] = Rsh_Fir_reg_yat3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args240, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r39 = dyn names(yat3)
  SEXP Rsh_Fir_array_args241[1];
  Rsh_Fir_array_args241[0] = Rsh_Fir_reg_yat3_;
  SEXP Rsh_Fir_array_arg_names84[1];
  Rsh_Fir_array_arg_names84[0] = R_MissingArg;
  Rsh_Fir_reg_r39_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args241, Rsh_Fir_array_arg_names84, CCP, RHO);
  // check L113() else D21()
  // L113()
  goto L113_;

L114_:;
  // goto L21(c41, c42, r40)
  // L21(c41, c42, r40)
  Rsh_Fir_reg_c35_ = Rsh_Fir_reg_c41_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_reg_c42_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r40_1;
  goto L21_;

L145_:;
  // nat3 = force? nat2
  Rsh_Fir_reg_nat3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nat2_);
  // checkMissing(nat3)
  SEXP Rsh_Fir_array_args242[1];
  Rsh_Fir_array_args242[0] = Rsh_Fir_reg_nat3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args242, Rsh_Fir_param_types_empty()));
  // names1 = ldf names in base
  Rsh_Fir_reg_names1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 67), RHO);
  // r60 = dyn names1(nat3)
  SEXP Rsh_Fir_array_args243[1];
  Rsh_Fir_array_args243[0] = Rsh_Fir_reg_nat3_;
  SEXP Rsh_Fir_array_arg_names85[1];
  Rsh_Fir_array_arg_names85[0] = R_MissingArg;
  Rsh_Fir_reg_r60_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names1_, 1, Rsh_Fir_array_args243, Rsh_Fir_array_arg_names85, CCP, RHO);
  // check L146() else D32()
  // L146()
  goto L146_;

L147_:;
  // goto L33(c74, c75, r61)
  // L33(c74, c75, r61)
  Rsh_Fir_reg_c68_ = Rsh_Fir_reg_c74_;
  Rsh_Fir_reg_c69_ = Rsh_Fir_reg_c75_;
  Rsh_Fir_reg_r57_1 = Rsh_Fir_reg_r61_1;
  goto L33_;

D21_:;
  // deopt 83 [c25, c26, r39]
  SEXP Rsh_Fir_array_deopt_stack75[3];
  Rsh_Fir_array_deopt_stack75[0] = Rsh_Fir_reg_c25_;
  Rsh_Fir_array_deopt_stack75[1] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_deopt_stack75[2] = Rsh_Fir_reg_r39_1;
  Rsh_Fir_deopt(83, 3, Rsh_Fir_array_deopt_stack75, CCP, RHO);
  return R_NilValue;

D32_:;
  // deopt 135 [c58, c59, r60]
  SEXP Rsh_Fir_array_deopt_stack76[3];
  Rsh_Fir_array_deopt_stack76[0] = Rsh_Fir_reg_c58_;
  Rsh_Fir_array_deopt_stack76[1] = Rsh_Fir_reg_c59_;
  Rsh_Fir_array_deopt_stack76[2] = Rsh_Fir_reg_r60_1;
  Rsh_Fir_deopt(135, 3, Rsh_Fir_array_deopt_stack76, CCP, RHO);
  return R_NilValue;

L113_:;
  // goto L22(c25, c26, r39)
  // L22(c25, c26, r39)
  Rsh_Fir_reg_c41_ = Rsh_Fir_reg_c25_;
  Rsh_Fir_reg_c42_ = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_r38_1 = Rsh_Fir_reg_r39_1;
  goto L22_;

L146_:;
  // goto L34(c58, c59, r60)
  // L34(c58, c59, r60)
  Rsh_Fir_reg_c74_ = Rsh_Fir_reg_c58_;
  Rsh_Fir_reg_c75_ = Rsh_Fir_reg_c59_;
  Rsh_Fir_reg_r59_1 = Rsh_Fir_reg_r60_1;
  goto L34_;
}
SEXP Rsh_Fir_user_promise_inner881979986_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_test21_;
  SEXP Rsh_Fir_reg_test22_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881979986/0: expected 0, got %d", NCAPTURES);

  // test21 = ld test
  Rsh_Fir_reg_test21_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // test22 = force? test21
  Rsh_Fir_reg_test22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test21_);
  // checkMissing(test22)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_test22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // return test22
  return Rsh_Fir_reg_test22_;
}
SEXP Rsh_Fir_user_promise_inner881979986_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_test15_;
  SEXP Rsh_Fir_reg_test16_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881979986/0: expected 0, got %d", NCAPTURES);

  // test15 = ld test
  Rsh_Fir_reg_test15_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // test16 = force? test15
  Rsh_Fir_reg_test16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test15_);
  // checkMissing(test16)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_test16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // return test16
  return Rsh_Fir_reg_test16_;
}
SEXP Rsh_Fir_user_promise_inner881979986_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_test23_;
  SEXP Rsh_Fir_reg_test24_;
  SEXP Rsh_Fir_reg_r81_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner881979986/0: expected 0, got %d", NCAPTURES);

  // test23 = ld test
  Rsh_Fir_reg_test23_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // test24 = force? test23
  Rsh_Fir_reg_test24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_test23_);
  // checkMissing(test24)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_test24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // r81 = `!`(test24)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_test24_;
  Rsh_Fir_reg_r81_1 = Rsh_Fir_call_builtin(82, RHO, 1, Rsh_Fir_array_args127);
  // return r81
  return Rsh_Fir_reg_r81_1;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
