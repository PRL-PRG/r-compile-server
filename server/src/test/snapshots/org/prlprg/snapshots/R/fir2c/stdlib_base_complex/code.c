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
SEXP Rsh_Fir_user_promise_main21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main24(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner4137945989_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4137945989_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4137945989_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner4137945989_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2148457334_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2148457334_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2148457334_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2148457334_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner2148457334_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
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
  SEXP Rsh_Fir_reg_require;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_matrix;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_complex;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_rep;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_complex1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_plot;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_abline;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_points;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_stopifnot;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_vapply;
  SEXP Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_stopifnot1_;
  SEXP Rsh_Fir_reg_p15_;
  SEXP Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_reg_r76_;
  SEXP Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_reg_showC;
  SEXP Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_reg_r79_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_reg_NAs6_;
  SEXP Rsh_Fir_reg_NAs7_;
  SEXP Rsh_Fir_reg_Im;
  SEXP Rsh_Fir_reg_r82_;
  SEXP Rsh_Fir_reg_stopifnot2_;
  SEXP Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_reg_r91_;
  SEXP Rsh_Fir_reg_str;
  SEXP Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_reg_r93_;
  SEXP Rsh_Fir_reg_stopifnot3_;
  SEXP Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_reg_p21_;
  SEXP Rsh_Fir_reg_p22_;
  SEXP Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_reg_r116_;
  SEXP Rsh_Fir_reg_showC1_;
  SEXP Rsh_Fir_reg_p24_;
  SEXP Rsh_Fir_reg_r118_;
  SEXP Rsh_Fir_reg_sym21_;
  SEXP Rsh_Fir_reg_base21_;
  SEXP Rsh_Fir_reg_guard21_;
  SEXP Rsh_Fir_reg_r119_;
  SEXP Rsh_Fir_reg_NpNA6_;
  SEXP Rsh_Fir_reg_NpNA7_;
  SEXP Rsh_Fir_reg_identical1_;
  SEXP Rsh_Fir_reg_r121_;
  SEXP Rsh_Fir_reg_showC2_;
  SEXP Rsh_Fir_reg_r122_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4137945989
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4137945989_, RHO, CCP);
  // st complex = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // sym = ldf require
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // base = ldf require in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 1), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L0_:;
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L8() else D2()
  // L8()
  goto L8_;

L4_:;
  // require = ldf require
  Rsh_Fir_reg_require = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L6() else D0()
  // L6()
  goto L6_;

L5_:;
  // r1 = dyn base(<sym graphics>)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0()
  // L0()
  goto L0_;

D0_:;
  // deopt 5 []
  Rsh_Fir_deopt(5, 0, NULL, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p = prom<V +>{
  //   graphics = ld graphics;
  //   graphics1 = force? graphics;
  //   checkMissing(graphics1);
  //   return graphics1;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r4 = dyn require(p)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_require, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L7() else D1()
  // L7()
  goto L7_;

L8_:;
  // p1 = prom<V +>{
  //   r5 = `:`(-6.0, 5.0);
  //   r6 = `^`(1.0i, r5);
  //   return r6;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r8 = dyn matrix[, nrow](p1, 4.0)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L9() else D3()
  // L9()
  goto L9_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 15 [r8]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L7_:;
  // goto L0()
  // L0()
  goto L0_;

L9_:;
  // complex = ldf complex
  Rsh_Fir_reg_complex = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L10() else D4()
  // L10()
  goto L10_;

D4_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p2 = prom<V +>{
  //   __ = ldf `::`;
  //   r9 = dyn __("stats", "rnorm");
  //   checkFun.0(r9);
  //   r10 = r9 as cls;
  //   r11 = dyn r10(100.0);
  //   return r11;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   __1 = ldf `::`;
  //   r13 = dyn __1("stats", "rnorm");
  //   checkFun.0(r13);
  //   r14 = r13 as cls;
  //   r15 = dyn r14(100.0);
  //   return r15;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r17 = dyn complex[real, imaginary](p2, p3)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_arg_names7[1] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_complex, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L11() else D5()
  // L11()
  goto L11_;

D5_:;
  // deopt 24 [r17]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L11_:;
  // st z = r17
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // st z2 = <cplx 1.0+8.0i, 2.0+9.0i>
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_const(CCP, 16), RHO);
  (void)(Rsh_const(CCP, 16));
  // sym1 = ldf rep
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base1 = ldf rep in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard1 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L1_:;
  // r21 = `+`(r19, <cplx 9.0i, 8.0i, 7.0i, 6.0i, 5.0i, 4.0i, 3.0i, 2.0i, 1.0i>)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args15);
  // r22 = `/`(r21, 10.0)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(69, RHO, 2, Rsh_Fir_array_args16);
  // st zz = r22
  Rsh_Fir_store(Rsh_const(CCP, 21), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // complex1 = ldf complex
  Rsh_Fir_reg_complex1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L14() else D6()
  // L14()
  goto L14_;

L12_:;
  // rep = ldf rep in base
  Rsh_Fir_reg_rep = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r20 = dyn rep(<lang `:`(1.0, 4.0)>, 9.0)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L1(r20)
  // L1(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L1_;

L13_:;
  // r18 = dyn base1[, `length.out`](<lang `:`(1.0, 4.0)>, 9.0)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L1(r18)
  // L1(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L1_;

D6_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p4 = prom<V +>{
  //   sym2 = ldf Mod;
  //   base2 = ldf Mod in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r24):
  //   return r24;
  // L1():
  //   zz = ld zz;
  //   zz1 = force? zz;
  //   checkMissing(zz1);
  //   Mod = ldf Mod in base;
  //   r25 = dyn Mod(zz1);
  //   goto L0(r25);
  // L2():
  //   r23 = dyn base2(<sym zz>);
  //   goto L0(r23);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // p5 = prom<V +>{
  //   sym3 = ldf Arg;
  //   base3 = ldf Arg in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r28):
  //   r30 = `+`(r28, 3.141592653589793);
  //   return r30;
  // L1():
  //   zz2 = ld zz;
  //   zz3 = force? zz2;
  //   checkMissing(zz3);
  //   Arg = ldf Arg in base;
  //   r29 = dyn Arg(zz3);
  //   goto L0(r29);
  // L2():
  //   r27 = dyn base3(<sym zz>);
  //   goto L0(r27);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // r32 = dyn complex1[modulus, argument](p4, p5)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_arg_names14[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_complex1_, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L15() else D7()
  // L15()
  goto L15_;

D7_:;
  // deopt 43 [r32]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L15_:;
  // st `zz.shift` = r32
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r32_, RHO);
  (void)(Rsh_Fir_reg_r32_);
  // plot = ldf plot
  Rsh_Fir_reg_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L16() else D8()
  // L16()
  goto L16_;

D8_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // p6 = prom<V +>{
  //   zz4 = ld zz;
  //   zz5 = force? zz4;
  //   checkMissing(zz5);
  //   return zz5;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   sym4 = ldf c;
  //   base4 = ldf c in base;
  //   guard4 = `==`.4(sym4, base4);
  //   if guard4 then L1() else L2();
  // L0(r35):
  //   return r35;
  // L1():
  //   c = ldf c in base;
  //   r36 = dyn c(-1.0, 1.0);
  //   goto L0(r36);
  // L2():
  //   r34 = dyn base4(<lang `-`(1.0)>, 1.0);
  //   goto L0(r34);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // p8 = prom<V +>{
  //   sym5 = ldf c;
  //   base5 = ldf c in base;
  //   guard5 = `==`.4(sym5, base5);
  //   if guard5 then L1() else L2();
  // L0(r39):
  //   return r39;
  // L1():
  //   c1 = ldf c in base;
  //   r40 = dyn c1(-1.0, 1.0);
  //   goto L0(r40);
  // L2():
  //   r38 = dyn base5(<lang `-`(1.0)>, 1.0);
  //   goto L0(r38);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   sym6 = ldf expression;
  //   base6 = ldf expression in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r43):
  //   return r43;
  // L1():
  //   expression = ldf expression in base;
  //   r44 = dyn expression(<lang paste("Rotation by ", " ", `==`(pi, `^`(180.0, o)))>);
  //   goto L0(r44);
  // L2():
  //   r42 = dyn base6(<lang paste("Rotation by ", " ", `==`(pi, `^`(180.0, o)))>);
  //   goto L0(r42);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r46 = dyn plot[, xlim, ylim, col, asp, main](p6, p7, p8, "red", 1.0, p9)
  SEXP Rsh_Fir_array_args39[6];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args39[2] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args39[3] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args39[4] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args39[5] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names21[6];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_arg_names21[2] = Rsh_const(CCP, 40);
  Rsh_Fir_array_arg_names21[3] = Rsh_const(CCP, 41);
  Rsh_Fir_array_arg_names21[4] = Rsh_const(CCP, 42);
  Rsh_Fir_array_arg_names21[5] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 6, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L17() else D9()
  // L17()
  goto L17_;

D9_:;
  // deopt 58 [r46]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L17_:;
  // abline = ldf abline
  Rsh_Fir_reg_abline = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 44), RHO);
  // check L18() else D10()
  // L18()
  goto L18_;

D10_:;
  // deopt 60 []
  Rsh_Fir_deopt(60, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // r47 = dyn abline[h, v, col, lty](0.0, 0.0, "blue", 3.0)
  SEXP Rsh_Fir_array_args40[4];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args40[2] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args40[3] = Rsh_const(CCP, 47);
  SEXP Rsh_Fir_array_arg_names22[4];
  Rsh_Fir_array_arg_names22[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_arg_names22[1] = Rsh_const(CCP, 49);
  Rsh_Fir_array_arg_names22[2] = Rsh_const(CCP, 41);
  Rsh_Fir_array_arg_names22[3] = Rsh_const(CCP, 50);
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abline, 4, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L19() else D11()
  // L19()
  goto L19_;

D11_:;
  // deopt 69 [r47]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(69, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L19_:;
  // points = ldf points
  Rsh_Fir_reg_points = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // check L20() else D12()
  // L20()
  goto L20_;

D12_:;
  // deopt 71 []
  Rsh_Fir_deopt(71, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p10 = prom<V +>{
  //   zz_shift = ld `zz.shift`;
  //   zz_shift1 = force? zz_shift;
  //   checkMissing(zz_shift1);
  //   return zz_shift1;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // r49 = dyn points[, col](p10, "orange")
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_points, 2, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L21() else D13()
  // L21()
  goto L21_;

D13_:;
  // deopt 75 [r49]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L21_:;
  // stopifnot = ldf stopifnot
  Rsh_Fir_reg_stopifnot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // check L22() else D14()
  // L22()
  goto L22_;

D14_:;
  // deopt 77 []
  Rsh_Fir_deopt(77, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p11 = prom<V +>{
  //   sym7 = ldf identical;
  //   base7 = ldf identical in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L2() else L3();
  // L0(r51):
  //   return r51;
  // L2():
  //   sym8 = ldf `as.complex`;
  //   base8 = ldf `as.complex` in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L4() else L5();
  // L3():
  //   r50 = dyn base7(<lang as.complex(NA_REAL)>, <lang `+`(NA_REAL, 0.0i)>);
  //   goto L0(r50);
  // L1(r53):
  //   identical = ldf identical in base;
  //   r55 = dyn identical(r53, NA_CPLX, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
  //   goto L0(r55);
  // L4():
  //   as_complex = ldf `as.complex` in base;
  //   r54 = dyn as_complex(NA_REAL);
  //   goto L1(r54);
  // L5():
  //   r52 = dyn base8(NA_REAL);
  //   goto L1(r52);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r57 = dyn stopifnot(p11)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L23() else D15()
  // L23()
  goto L23_;

D15_:;
  // deopt 79 [r57]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L23_:;
  // vapply = ldf vapply
  Rsh_Fir_reg_vapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 62), RHO);
  // check L24() else D16()
  // L24()
  goto L24_;

D16_:;
  // deopt 81 []
  Rsh_Fir_deopt(81, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // p12 = prom<V +>{
  //   sym9 = ldf list;
  //   base9 = ldf list in base;
  //   guard9 = `==`.4(sym9, base9);
  //   if guard9 then L1() else L2();
  // L0(r59):
  //   return r59;
  // L1():
  //   list = ldf list in base;
  //   r60 = dyn list(NA_LGL, NA_INT, NA_REAL, NA_STR, NA_CPLX);
  //   goto L0(r60);
  // L2():
  //   r58 = dyn base9(NA_LGL, NA_INT, NA_REAL, NA_STR, NA_CPLX);
  //   goto L0(r58);
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main12, 0, NULL, CCP, RHO);
  // p13 = prom<V +>{
  //   as_complex1 = ld `as.complex`;
  //   as_complex2 = force? as_complex1;
  //   checkMissing(as_complex2);
  //   return as_complex2;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main13, 0, NULL, CCP, RHO);
  // p14 = prom<V +>{
  //   return 0.0i;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main14, 0, NULL, CCP, RHO);
  // r64 = dyn vapply(p12, p13, p14)
  SEXP Rsh_Fir_array_args54[3];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p12_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args54[2] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vapply, 3, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L25() else D17()
  // L25()
  goto L25_;

D17_:;
  // deopt 85 [r64]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L25_:;
  // st NAs = r64
  Rsh_Fir_store(Rsh_const(CCP, 68), Rsh_Fir_reg_r64_, RHO);
  (void)(Rsh_Fir_reg_r64_);
  // stopifnot1 = ldf stopifnot
  Rsh_Fir_reg_stopifnot1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // check L26() else D18()
  // L26()
  goto L26_;

D18_:;
  // deopt 88 []
  Rsh_Fir_deopt(88, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p15 = prom<V +>{
  //   sym10 = ldf `is.na`;
  //   base10 = ldf `is.na` in base;
  //   guard10 = `==`.4(sym10, base10);
  //   if guard10 then L1() else L2();
  // L0(r66):
  //   return r66;
  // L1():
  //   NAs = ld NAs;
  //   NAs1 = force? NAs;
  //   checkMissing(NAs1);
  //   is_na = ldf `is.na` in base;
  //   r67 = dyn is_na(NAs1);
  //   goto L0(r67);
  // L2():
  //   r65 = dyn base10(<sym NAs>);
  //   goto L0(r65);
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main15, 0, NULL, CCP, RHO);
  // p16 = prom<V +>{
  //   sym11 = ldf `is.na`;
  //   base11 = ldf `is.na` in base;
  //   guard11 = `==`.4(sym11, base11);
  //   if guard11 then L2() else L3();
  // L0(r70):
  //   return r70;
  // L2():
  //   sym12 = ldf Re;
  //   base12 = ldf Re in base;
  //   guard12 = `==`.4(sym12, base12);
  //   if guard12 then L4() else L5();
  // L3():
  //   r69 = dyn base11(<lang Re(NAs)>);
  //   goto L0(r69);
  // L1(r72):
  //   is_na1 = ldf `is.na` in base;
  //   r74 = dyn is_na1(r72);
  //   goto L0(r74);
  // L4():
  //   NAs2 = ld NAs;
  //   NAs3 = force? NAs2;
  //   checkMissing(NAs3);
  //   Re = ldf Re in base;
  //   r73 = dyn Re(NAs3);
  //   goto L1(r73);
  // L5():
  //   r71 = dyn base12(<sym NAs>);
  //   goto L1(r71);
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main16, 0, NULL, CCP, RHO);
  // r76 = dyn stopifnot1(p15, p16)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_p16_;
  SEXP Rsh_Fir_array_arg_names38[2];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_array_arg_names38[1] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot1_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names38, CCP, RHO);
  // check L27() else D19()
  // L27()
  goto L27_;

D19_:;
  // deopt 91 [r76]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L27_:;
  // r77 = clos inner2148457334
  Rsh_Fir_reg_r77_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2148457334_, RHO, CCP);
  // st showC = r77
  Rsh_Fir_store(Rsh_const(CCP, 72), Rsh_Fir_reg_r77_, RHO);
  (void)(Rsh_Fir_reg_r77_);
  // showC = ldf showC
  Rsh_Fir_reg_showC = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 72), RHO);
  // check L28() else D20()
  // L28()
  goto L28_;

D20_:;
  // deopt 96 []
  Rsh_Fir_deopt(96, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // p17 = prom<V +>{
  //   NAs4 = ld NAs;
  //   NAs5 = force? NAs4;
  //   checkMissing(NAs5);
  //   return NAs5;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main17, 0, NULL, CCP, RHO);
  // r79 = dyn showC(p17)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names39[1];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_showC, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L29() else D21()
  // L29()
  goto L29_;

D21_:;
  // deopt 98 [r79]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L29_:;
  // sym13 = ldf Im
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 73), RHO);
  // base13 = ldf Im in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 73), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args69);
  // if guard13 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L2_:;
  // stopifnot2 = ldf stopifnot
  Rsh_Fir_reg_stopifnot2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // check L34() else D24()
  // L34()
  goto L34_;

L30_:;
  // NAs6 = ld NAs
  Rsh_Fir_reg_NAs6_ = Rsh_Fir_load(Rsh_const(CCP, 68), RHO);
  // check L32() else D22()
  // L32()
  goto L32_;

L31_:;
  // r80 = dyn base13(<sym NAs>)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r80_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L2()
  // L2()
  goto L2_;

D22_:;
  // deopt 101 [NAs6]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_NAs6_;
  Rsh_Fir_deopt(101, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D24_:;
  // deopt 106 []
  Rsh_Fir_deopt(106, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // NAs7 = force? NAs6
  Rsh_Fir_reg_NAs7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_NAs6_);
  // checkMissing(NAs7)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_NAs7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // Im = ldf Im in base
  Rsh_Fir_reg_Im = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 73), RHO);
  // r82 = dyn Im(NAs7)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_NAs7_;
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Im, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L33() else D23()
  // L33()
  goto L33_;

L34_:;
  // p18 = prom<V +>{
  //   sym14 = ldf Im;
  //   base14 = ldf Im in base;
  //   guard14 = `==`.4(sym14, base14);
  //   if guard14 then L2() else L3();
  // L0(r84):
  //   c2 = `is.object`(r84);
  //   if c2 then L4() else L5(r84);
  // L2():
  //   NAs8 = ld NAs;
  //   NAs9 = force? NAs8;
  //   checkMissing(NAs9);
  //   Im1 = ldf Im in base;
  //   r85 = dyn Im1(NAs9);
  //   goto L0(r85);
  // L3():
  //   r83 = dyn base14(<sym NAs>);
  //   goto L0(r83);
  // L1(dx1):
  //   r89 = `==`(dx1, 0.0);
  //   return r89;
  // L4():
  //   dr = tryDispatchBuiltin.1("[", r84);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L6() else L5(dr);
  // L5(r87):
  //   __2 = ldf `[` in base;
  //   r88 = dyn __2(r87, <int 1, 2, 3>);
  //   goto L1(r88);
  // L6():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L1(dx);
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main18, 0, NULL, CCP, RHO);
  // r91 = dyn stopifnot2(p18)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot2_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L35() else D25()
  // L35()
  goto L35_;

D23_:;
  // deopt 104 [r82]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D25_:;
  // deopt 108 [r91]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_deopt(108, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L33_:;
  // goto L2()
  // L2()
  goto L2_;

L35_:;
  // st NpNA = NA_CPLX
  Rsh_Fir_store(Rsh_const(CCP, 77), Rsh_const(CCP, 58), RHO);
  (void)(Rsh_const(CCP, 58));
  // str = ldf str
  Rsh_Fir_reg_str = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 78), RHO);
  // check L36() else D26()
  // L36()
  goto L36_;

D26_:;
  // deopt 113 []
  Rsh_Fir_deopt(113, 0, NULL, CCP, RHO);
  return R_NilValue;

L36_:;
  // p19 = prom<V +>{
  //   NpNA = ld NpNA;
  //   NpNA1 = force? NpNA;
  //   checkMissing(NpNA1);
  //   return NpNA1;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main19, 0, NULL, CCP, RHO);
  // r93 = dyn str(p19)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_p19_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_str, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L37() else D27()
  // L37()
  goto L37_;

D27_:;
  // deopt 115 [r93]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L37_:;
  // stopifnot3 = ldf stopifnot
  Rsh_Fir_reg_stopifnot3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 53), RHO);
  // check L38() else D28()
  // L38()
  goto L38_;

D28_:;
  // deopt 117 []
  Rsh_Fir_deopt(117, 0, NULL, CCP, RHO);
  return R_NilValue;

L38_:;
  // p20 = prom<V +>{
  //   sym15 = ldf `is.na`;
  //   base15 = ldf `is.na` in base;
  //   guard15 = `==`.4(sym15, base15);
  //   if guard15 then L1() else L2();
  // L0(r95):
  //   return r95;
  // L1():
  //   NpNA2 = ld NpNA;
  //   NpNA3 = force? NpNA2;
  //   checkMissing(NpNA3);
  //   is_na2 = ldf `is.na` in base;
  //   r96 = dyn is_na2(NpNA3);
  //   goto L0(r96);
  // L2():
  //   r94 = dyn base15(<sym NpNA>);
  //   goto L0(r94);
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main20, 0, NULL, CCP, RHO);
  // p21 = prom<V +>{
  //   sym16 = ldf `is.na`;
  //   base16 = ldf `is.na` in base;
  //   guard16 = `==`.4(sym16, base16);
  //   if guard16 then L1() else L2();
  // L0(r99):
  //   return r99;
  // L1():
  //   is_na3 = ldf `is.na` in base;
  //   r100 = dyn is_na3(NA_CPLX);
  //   goto L0(r100);
  // L2():
  //   r98 = dyn base16(NA_CPLX);
  //   goto L0(r98);
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main21, 0, NULL, CCP, RHO);
  // p22 = prom<V +>{
  //   sym17 = ldf `is.na`;
  //   base17 = ldf `is.na` in base;
  //   guard17 = `==`.4(sym17, base17);
  //   if guard17 then L2() else L3();
  // L0(r103):
  //   return r103;
  // L2():
  //   sym18 = ldf Re;
  //   base18 = ldf Re in base;
  //   guard18 = `==`.4(sym18, base18);
  //   if guard18 then L4() else L5();
  // L3():
  //   r102 = dyn base17(<lang Re(NA_CPLX)>);
  //   goto L0(r102);
  // L1(r105):
  //   is_na4 = ldf `is.na` in base;
  //   r107 = dyn is_na4(r105);
  //   goto L0(r107);
  // L4():
  //   Re1 = ldf Re in base;
  //   r106 = dyn Re1(NA_CPLX);
  //   goto L1(r106);
  // L5():
  //   r104 = dyn base18(NA_CPLX);
  //   goto L1(r104);
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main22, 0, NULL, CCP, RHO);
  // p23 = prom<V +>{
  //   sym19 = ldf `is.na`;
  //   base19 = ldf `is.na` in base;
  //   guard19 = `==`.4(sym19, base19);
  //   if guard19 then L2() else L3();
  // L0(r110):
  //   return r110;
  // L2():
  //   sym20 = ldf Im;
  //   base20 = ldf Im in base;
  //   guard20 = `==`.4(sym20, base20);
  //   if guard20 then L4() else L5();
  // L3():
  //   r109 = dyn base19(<lang Im(NA_CPLX)>);
  //   goto L0(r109);
  // L1(r112):
  //   is_na5 = ldf `is.na` in base;
  //   r114 = dyn is_na5(r112);
  //   goto L0(r114);
  // L4():
  //   Im2 = ldf Im in base;
  //   r113 = dyn Im2(NA_CPLX);
  //   goto L1(r113);
  // L5():
  //   r111 = dyn base20(NA_CPLX);
  //   goto L1(r111);
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main23, 0, NULL, CCP, RHO);
  // r116 = dyn stopifnot3(p20, p21, p22, p23)
  SEXP Rsh_Fir_array_args105[4];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_p20_;
  Rsh_Fir_array_args105[1] = Rsh_Fir_reg_p21_;
  Rsh_Fir_array_args105[2] = Rsh_Fir_reg_p22_;
  Rsh_Fir_array_args105[3] = Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_array_arg_names59[4];
  Rsh_Fir_array_arg_names59[0] = R_MissingArg;
  Rsh_Fir_array_arg_names59[1] = R_MissingArg;
  Rsh_Fir_array_arg_names59[2] = R_MissingArg;
  Rsh_Fir_array_arg_names59[3] = R_MissingArg;
  Rsh_Fir_reg_r116_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stopifnot3_, 4, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names59, CCP, RHO);
  // check L39() else D29()
  // L39()
  goto L39_;

D29_:;
  // deopt 122 [r116]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r116_;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L39_:;
  // showC1 = ldf showC
  Rsh_Fir_reg_showC1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 72), RHO);
  // check L40() else D30()
  // L40()
  goto L40_;

D30_:;
  // deopt 124 []
  Rsh_Fir_deopt(124, 0, NULL, CCP, RHO);
  return R_NilValue;

L40_:;
  // p24 = prom<V +>{
  //   NpNA4 = ld NpNA;
  //   NpNA5 = force? NpNA4;
  //   checkMissing(NpNA5);
  //   return NpNA5;
  // }
  Rsh_Fir_reg_p24_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main24, 0, NULL, CCP, RHO);
  // r118 = dyn showC1(p24)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_p24_;
  SEXP Rsh_Fir_array_arg_names60[1];
  Rsh_Fir_array_arg_names60[0] = R_MissingArg;
  Rsh_Fir_reg_r118_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_showC1_, 1, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names60, CCP, RHO);
  // check L41() else D31()
  // L41()
  goto L41_;

D31_:;
  // deopt 126 [r118]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r118_;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L41_:;
  // sym21 = ldf identical
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // base21 = ldf identical in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args108);
  // if guard21 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L3_:;
  // showC2 = ldf showC
  Rsh_Fir_reg_showC2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 72), RHO);
  // check L46() else D34()
  // L46()
  goto L46_;

L42_:;
  // NpNA6 = ld NpNA
  Rsh_Fir_reg_NpNA6_ = Rsh_Fir_load(Rsh_const(CCP, 77), RHO);
  // check L44() else D32()
  // L44()
  goto L44_;

L43_:;
  // r119 = dyn base21(<sym NpNA>, NA_CPLX)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 77);
  Rsh_Fir_array_args109[1] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names61[2];
  Rsh_Fir_array_arg_names61[0] = R_MissingArg;
  Rsh_Fir_array_arg_names61[1] = R_MissingArg;
  Rsh_Fir_reg_r119_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 2, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names61, CCP, RHO);
  // goto L3()
  // L3()
  goto L3_;

D32_:;
  // deopt 129 [NpNA6]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_NpNA6_;
  Rsh_Fir_deopt(129, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D34_:;
  // deopt 142 []
  Rsh_Fir_deopt(142, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // NpNA7 = force? NpNA6
  Rsh_Fir_reg_NpNA7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_NpNA6_);
  // checkMissing(NpNA7)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_NpNA7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // identical1 = ldf identical in base
  Rsh_Fir_reg_identical1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // r121 = dyn identical1(NpNA7, NA_CPLX, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args111[9];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_NpNA7_;
  Rsh_Fir_array_args111[1] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args111[2] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args111[3] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args111[4] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args111[5] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args111[6] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args111[7] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args111[8] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names62[9];
  Rsh_Fir_array_arg_names62[0] = R_MissingArg;
  Rsh_Fir_array_arg_names62[1] = R_MissingArg;
  Rsh_Fir_array_arg_names62[2] = R_MissingArg;
  Rsh_Fir_array_arg_names62[3] = R_MissingArg;
  Rsh_Fir_array_arg_names62[4] = R_MissingArg;
  Rsh_Fir_array_arg_names62[5] = R_MissingArg;
  Rsh_Fir_array_arg_names62[6] = R_MissingArg;
  Rsh_Fir_array_arg_names62[7] = R_MissingArg;
  Rsh_Fir_array_arg_names62[8] = R_MissingArg;
  Rsh_Fir_reg_r121_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical1_, 9, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names62, CCP, RHO);
  // check L45() else D33()
  // L45()
  goto L45_;

L46_:;
  // r122 = dyn showC2(NA_CPLX)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names63[1];
  Rsh_Fir_array_arg_names63[0] = R_MissingArg;
  Rsh_Fir_reg_r122_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_showC2_, 1, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names63, CCP, RHO);
  // check L47() else D35()
  // L47()
  goto L47_;

D33_:;
  // deopt 140 [r121]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r121_;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D35_:;
  // deopt 144 [r122]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r122_;
  Rsh_Fir_deopt(144, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L45_:;
  // goto L3()
  // L3()
  goto L3_;

L47_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r122
  return Rsh_Fir_reg_r122_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_graphics;
  SEXP Rsh_Fir_reg_graphics1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // graphics = ld graphics
  Rsh_Fir_reg_graphics = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // graphics1 = force? graphics
  Rsh_Fir_reg_graphics1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_graphics);
  // checkMissing(graphics1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_graphics1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // return graphics1
  return Rsh_Fir_reg_graphics1_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r5 = `:`(-6.0, 5.0)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(85, RHO, 2, Rsh_Fir_array_args4);
  // r6 = `^`(1.0i, r5)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args5);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_r11_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // r9 = dyn __("stats", "rnorm")
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // checkFun.0(r9)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r9_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args8));
  // r10 = r9 as cls
  Rsh_Fir_reg_r10_ = Rsh_Fir_cast(Rsh_Fir_reg_r9_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r11 = dyn r10(100.0)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r10_, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r11
  return Rsh_Fir_reg_r11_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg___1_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // __1 = ldf `::`
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // r13 = dyn __1("stats", "rnorm")
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // checkFun.0(r13)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r13_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args11));
  // r14 = r13 as cls
  Rsh_Fir_reg_r14_ = Rsh_Fir_cast(Rsh_Fir_reg_r13_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r15 = dyn r14(100.0)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r14_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names6, CCP, RHO);
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_zz;
  SEXP Rsh_Fir_reg_zz1_;
  SEXP Rsh_Fir_reg_Mod;
  SEXP Rsh_Fir_reg_r25_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf Mod
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base2 = ldf Mod in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r24
  return Rsh_Fir_reg_r24_;

L1_:;
  // zz = ld zz
  Rsh_Fir_reg_zz = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // zz1 = force? zz
  Rsh_Fir_reg_zz1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zz);
  // checkMissing(zz1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_zz1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // Mod = ldf Mod in base
  Rsh_Fir_reg_Mod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r25 = dyn Mod(zz1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_zz1_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Mod, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L0_;

L2_:;
  // r23 = dyn base2(<sym zz>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_zz2_;
  SEXP Rsh_Fir_reg_zz3_;
  SEXP Rsh_Fir_reg_Arg;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf Arg
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base3 = ldf Arg in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r30 = `+`(r28, 3.141592653589793)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 27);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(66, RHO, 2, Rsh_Fir_array_args24);
  // return r30
  return Rsh_Fir_reg_r30_;

L1_:;
  // zz2 = ld zz
  Rsh_Fir_reg_zz2_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // zz3 = force? zz2
  Rsh_Fir_reg_zz3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zz2_);
  // checkMissing(zz3)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_zz3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // Arg = ldf Arg in base
  Rsh_Fir_reg_Arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r29 = dyn Arg(zz3)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_zz3_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Arg, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L0_;

L2_:;
  // r27 = dyn base3(<sym zz>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r27)
  // L0(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_zz4_;
  SEXP Rsh_Fir_reg_zz5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // zz4 = ld zz
  Rsh_Fir_reg_zz4_ = Rsh_Fir_load(Rsh_const(CCP, 21), RHO);
  // zz5 = force? zz4
  Rsh_Fir_reg_zz5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zz4_);
  // checkMissing(zz5)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_zz5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return zz5
  return Rsh_Fir_reg_zz5_;
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r36_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard4 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r35
  return Rsh_Fir_reg_r35_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r36 = dyn c(-1.0, 1.0)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r36)
  // L0(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L0_;

L2_:;
  // r34 = dyn base4(<lang `-`(1.0)>, 1.0)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r34)
  // L0(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r40_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard5 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r39
  return Rsh_Fir_reg_r39_;

L1_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r40 = dyn c1(-1.0, 1.0)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r40)
  // L0(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L0_;

L2_:;
  // r38 = dyn base5(<lang `-`(1.0)>, 1.0)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r38)
  // L0(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_expression;
  SEXP Rsh_Fir_reg_r44_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym6 = ldf expression
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base6 = ldf expression in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r43
  return Rsh_Fir_reg_r43_;

L1_:;
  // expression = ldf expression in base
  Rsh_Fir_reg_expression = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r44 = dyn expression(<lang paste("Rotation by ", " ", `==`(pi, `^`(180.0, o)))>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expression, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L0(r44)
  // L0(r44)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r44_;
  goto L0_;

L2_:;
  // r42 = dyn base6(<lang paste("Rotation by ", " ", `==`(pi, `^`(180.0, o)))>)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args38, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_zz_shift;
  SEXP Rsh_Fir_reg_zz_shift1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // zz_shift = ld `zz.shift`
  Rsh_Fir_reg_zz_shift = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // zz_shift1 = force? zz_shift
  Rsh_Fir_reg_zz_shift1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_zz_shift);
  // checkMissing(zz_shift1)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_zz_shift1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // return zz_shift1
  return Rsh_Fir_reg_zz_shift1_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_as_complex;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_identical;
  SEXP Rsh_Fir_reg_r55_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym7 = ldf identical
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // base7 = ldf identical in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args43);
  // if guard7 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r51
  return Rsh_Fir_reg_r51_;

L2_:;
  // sym8 = ldf `as.complex`
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 55), RHO);
  // base8 = ldf `as.complex` in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard8 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r50 = dyn base7(<lang as.complex(NA_REAL)>, <lang `+`(NA_REAL, 0.0i)>)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 57);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(r50)
  // L0(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L0_;

L1_:;
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // r55 = dyn identical(r53, NA_CPLX, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args46[9];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_array_args46[1] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args46[2] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args46[3] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args46[4] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args46[5] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args46[6] = Rsh_const(CCP, 60);
  Rsh_Fir_array_args46[7] = Rsh_const(CCP, 59);
  Rsh_Fir_array_args46[8] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names25[9];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_array_arg_names25[3] = R_MissingArg;
  Rsh_Fir_array_arg_names25[4] = R_MissingArg;
  Rsh_Fir_array_arg_names25[5] = R_MissingArg;
  Rsh_Fir_array_arg_names25[6] = R_MissingArg;
  Rsh_Fir_array_arg_names25[7] = R_MissingArg;
  Rsh_Fir_array_arg_names25[8] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r55)
  // L0(r55)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r55_;
  goto L0_;

L4_:;
  // as_complex = ldf `as.complex` in base
  Rsh_Fir_reg_as_complex = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 55), RHO);
  // r54 = dyn as_complex(NA_REAL)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_const(CCP, 61);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_complex, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L1(r54)
  // L1(r54)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r54_;
  goto L1_;

L5_:;
  // r52 = dyn base8(NA_REAL)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 61);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L1(r52)
  // L1(r52)
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r52_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main12(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r60_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym9 = ldf list
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 63), RHO);
  // base9 = ldf list in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args50);
  // if guard9 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r59
  return Rsh_Fir_reg_r59_;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 63), RHO);
  // r60 = dyn list(NA_LGL, NA_INT, NA_REAL, NA_STR, NA_CPLX)
  SEXP Rsh_Fir_array_args51[5];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args51[2] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args51[3] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args51[4] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names29[5];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_array_arg_names29[2] = R_MissingArg;
  Rsh_Fir_array_arg_names29[3] = R_MissingArg;
  Rsh_Fir_array_arg_names29[4] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 5, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L0(r60)
  // L0(r60)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r60_;
  goto L0_;

L2_:;
  // r58 = dyn base9(NA_LGL, NA_INT, NA_REAL, NA_STR, NA_CPLX)
  SEXP Rsh_Fir_array_args52[5];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 64);
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 65);
  Rsh_Fir_array_args52[2] = Rsh_const(CCP, 61);
  Rsh_Fir_array_args52[3] = Rsh_const(CCP, 66);
  Rsh_Fir_array_args52[4] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names30[5];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_array_arg_names30[3] = R_MissingArg;
  Rsh_Fir_array_arg_names30[4] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 5, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L0(r58)
  // L0(r58)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r58_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main13(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_as_complex1_;
  SEXP Rsh_Fir_reg_as_complex2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // as_complex1 = ld `as.complex`
  Rsh_Fir_reg_as_complex1_ = Rsh_Fir_load(Rsh_const(CCP, 55), RHO);
  // as_complex2 = force? as_complex1
  Rsh_Fir_reg_as_complex2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_as_complex1_);
  // checkMissing(as_complex2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_as_complex2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // return as_complex2
  return Rsh_Fir_reg_as_complex2_;
}
SEXP Rsh_Fir_user_promise_main14(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return 0.0i
  return Rsh_const(CCP, 67);
}
SEXP Rsh_Fir_user_promise_main15(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_NAs;
  SEXP Rsh_Fir_reg_NAs1_;
  SEXP Rsh_Fir_reg_is_na;
  SEXP Rsh_Fir_reg_r67_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym10 = ldf `is.na`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // base10 = ldf `is.na` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard10 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r66
  return Rsh_Fir_reg_r66_;

L1_:;
  // NAs = ld NAs
  Rsh_Fir_reg_NAs = Rsh_Fir_load(Rsh_const(CCP, 68), RHO);
  // NAs1 = force? NAs
  Rsh_Fir_reg_NAs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_NAs);
  // checkMissing(NAs1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_NAs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // r67 = dyn is_na(NAs1)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_NAs1_;
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L0(r67)
  // L0(r67)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r67_;
  goto L0_;

L2_:;
  // r65 = dyn base10(<sym NAs>)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names33, CCP, RHO);
  // goto L0(r65)
  // L0(r65)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r65_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main16(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_NAs2_;
  SEXP Rsh_Fir_reg_NAs3_;
  SEXP Rsh_Fir_reg_Re;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_is_na1_;
  SEXP Rsh_Fir_reg_r74_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym11 = ldf `is.na`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // base11 = ldf `is.na` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard11 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r70
  return Rsh_Fir_reg_r70_;

L2_:;
  // sym12 = ldf Re
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 70), RHO);
  // base12 = ldf Re in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 70), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard12 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r69 = dyn base11(<lang Re(NAs)>)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 71);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L0(r69)
  // L0(r69)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r69_;
  goto L0_;

L1_:;
  // is_na1 = ldf `is.na` in base
  Rsh_Fir_reg_is_na1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // r74 = dyn is_na1(r72)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na1_, 1, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L0(r74)
  // L0(r74)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r74_;
  goto L0_;

L4_:;
  // NAs2 = ld NAs
  Rsh_Fir_reg_NAs2_ = Rsh_Fir_load(Rsh_const(CCP, 68), RHO);
  // NAs3 = force? NAs2
  Rsh_Fir_reg_NAs3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_NAs2_);
  // checkMissing(NAs3)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_NAs3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // Re = ldf Re in base
  Rsh_Fir_reg_Re = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 70), RHO);
  // r73 = dyn Re(NAs3)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_NAs3_;
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Re, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L1(r73)
  // L1(r73)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r73_;
  goto L1_;

L5_:;
  // r71 = dyn base12(<sym NAs>)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L1(r71)
  // L1(r71)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r71_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main17(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_NAs4_;
  SEXP Rsh_Fir_reg_NAs5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // NAs4 = ld NAs
  Rsh_Fir_reg_NAs4_ = Rsh_Fir_load(Rsh_const(CCP, 68), RHO);
  // NAs5 = force? NAs4
  Rsh_Fir_reg_NAs5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_NAs4_);
  // checkMissing(NAs5)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_NAs5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // return NAs5
  return Rsh_Fir_reg_NAs5_;
}
SEXP Rsh_Fir_user_promise_main18(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_reg_r84_;
  SEXP Rsh_Fir_reg_NAs8_;
  SEXP Rsh_Fir_reg_NAs9_;
  SEXP Rsh_Fir_reg_Im1_;
  SEXP Rsh_Fir_reg_r85_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg___2_;
  SEXP Rsh_Fir_reg_r88_;
  SEXP Rsh_Fir_reg_r89_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym14 = ldf Im
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 73), RHO);
  // base14 = ldf Im in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 73), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard14 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c2 = `is.object`(r84)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args74);
  // if c2 then L4() else L5(r84)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L4()
    goto L4_;
  } else {
  // L5(r84)
    Rsh_Fir_reg_r87_ = Rsh_Fir_reg_r84_;
    goto L5_;
  }

L2_:;
  // NAs8 = ld NAs
  Rsh_Fir_reg_NAs8_ = Rsh_Fir_load(Rsh_const(CCP, 68), RHO);
  // NAs9 = force? NAs8
  Rsh_Fir_reg_NAs9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_NAs8_);
  // checkMissing(NAs9)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_NAs9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // Im1 = ldf Im in base
  Rsh_Fir_reg_Im1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 73), RHO);
  // r85 = dyn Im1(NAs9)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_NAs9_;
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r85_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Im1_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L0(r85)
  // L0(r85)
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r85_;
  goto L0_;

L3_:;
  // r83 = dyn base14(<sym NAs>)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 68);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L0(r83)
  // L0(r83)
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r83_;
  goto L0_;

L1_:;
  // r89 = `==`(dx1, 0.0)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args78);
  // return r89
  return Rsh_Fir_reg_r89_;

L4_:;
  // dr = tryDispatchBuiltin.1("[", r84)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 74);
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args79);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // if dc then L6() else L5(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr)
    Rsh_Fir_reg_r87_ = Rsh_Fir_reg_dr;
    goto L5_;
  }

L5_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 75), RHO);
  // r88 = dyn __2(r87, <int 1, 2, 3>)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r87_;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 76);
  SEXP Rsh_Fir_array_arg_names44[2];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L1(r88)
  // L1(r88)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r88_;
  goto L1_;

L6_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main19(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_NpNA;
  SEXP Rsh_Fir_reg_NpNA1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // NpNA = ld NpNA
  Rsh_Fir_reg_NpNA = Rsh_Fir_load(Rsh_const(CCP, 77), RHO);
  // NpNA1 = force? NpNA
  Rsh_Fir_reg_NpNA1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_NpNA);
  // checkMissing(NpNA1)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_NpNA1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // return NpNA1
  return Rsh_Fir_reg_NpNA1_;
}
SEXP Rsh_Fir_user_promise_main20(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r94_;
  SEXP Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_reg_NpNA2_;
  SEXP Rsh_Fir_reg_NpNA3_;
  SEXP Rsh_Fir_reg_is_na2_;
  SEXP Rsh_Fir_reg_r96_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym15 = ldf `is.na`
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // base15 = ldf `is.na` in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args86);
  // if guard15 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r95
  return Rsh_Fir_reg_r95_;

L1_:;
  // NpNA2 = ld NpNA
  Rsh_Fir_reg_NpNA2_ = Rsh_Fir_load(Rsh_const(CCP, 77), RHO);
  // NpNA3 = force? NpNA2
  Rsh_Fir_reg_NpNA3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_NpNA2_);
  // checkMissing(NpNA3)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_NpNA3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // is_na2 = ldf `is.na` in base
  Rsh_Fir_reg_is_na2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // r96 = dyn is_na2(NpNA3)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_NpNA3_;
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na2_, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names47, CCP, RHO);
  // goto L0(r96)
  // L0(r96)
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r96_;
  goto L0_;

L2_:;
  // r94 = dyn base15(<sym NpNA>)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 77);
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r94_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L0(r94)
  // L0(r94)
  Rsh_Fir_reg_r95_ = Rsh_Fir_reg_r94_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main21(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r98_;
  SEXP Rsh_Fir_reg_r99_;
  SEXP Rsh_Fir_reg_is_na3_;
  SEXP Rsh_Fir_reg_r100_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym16 = ldf `is.na`
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // base16 = ldf `is.na` in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args90);
  // if guard16 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r99
  return Rsh_Fir_reg_r99_;

L1_:;
  // is_na3 = ldf `is.na` in base
  Rsh_Fir_reg_is_na3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // r100 = dyn is_na3(NA_CPLX)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na3_, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L0(r100)
  // L0(r100)
  Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r100_;
  goto L0_;

L2_:;
  // r98 = dyn base16(NA_CPLX)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names50, CCP, RHO);
  // goto L0(r98)
  // L0(r98)
  Rsh_Fir_reg_r99_ = Rsh_Fir_reg_r98_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main22(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r102_;
  SEXP Rsh_Fir_reg_r103_;
  SEXP Rsh_Fir_reg_sym18_;
  SEXP Rsh_Fir_reg_base18_;
  SEXP Rsh_Fir_reg_guard18_;
  SEXP Rsh_Fir_reg_r104_;
  SEXP Rsh_Fir_reg_r105_;
  SEXP Rsh_Fir_reg_Re1_;
  SEXP Rsh_Fir_reg_r106_;
  SEXP Rsh_Fir_reg_is_na4_;
  SEXP Rsh_Fir_reg_r107_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym17 = ldf `is.na`
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // base17 = ldf `is.na` in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args93);
  // if guard17 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r103
  return Rsh_Fir_reg_r103_;

L2_:;
  // sym18 = ldf Re
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 70), RHO);
  // base18 = ldf Re in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 70), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args94);
  // if guard18 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r102 = dyn base17(<lang Re(NA_CPLX)>)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 79);
  SEXP Rsh_Fir_array_arg_names51[1];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L0(r102)
  // L0(r102)
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r102_;
  goto L0_;

L1_:;
  // is_na4 = ldf `is.na` in base
  Rsh_Fir_reg_is_na4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // r107 = dyn is_na4(r105)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_r105_;
  SEXP Rsh_Fir_array_arg_names52[1];
  Rsh_Fir_array_arg_names52[0] = R_MissingArg;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na4_, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names52, CCP, RHO);
  // goto L0(r107)
  // L0(r107)
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r107_;
  goto L0_;

L4_:;
  // Re1 = ldf Re in base
  Rsh_Fir_reg_Re1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 70), RHO);
  // r106 = dyn Re1(NA_CPLX)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names53[1];
  Rsh_Fir_array_arg_names53[0] = R_MissingArg;
  Rsh_Fir_reg_r106_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Re1_, 1, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names53, CCP, RHO);
  // goto L1(r106)
  // L1(r106)
  Rsh_Fir_reg_r105_ = Rsh_Fir_reg_r106_;
  goto L1_;

L5_:;
  // r104 = dyn base18(NA_CPLX)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names54[1];
  Rsh_Fir_array_arg_names54[0] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names54, CCP, RHO);
  // goto L1(r104)
  // L1(r104)
  Rsh_Fir_reg_r105_ = Rsh_Fir_reg_r104_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main23(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym19_;
  SEXP Rsh_Fir_reg_base19_;
  SEXP Rsh_Fir_reg_guard19_;
  SEXP Rsh_Fir_reg_r109_;
  SEXP Rsh_Fir_reg_r110_;
  SEXP Rsh_Fir_reg_sym20_;
  SEXP Rsh_Fir_reg_base20_;
  SEXP Rsh_Fir_reg_guard20_;
  SEXP Rsh_Fir_reg_r111_;
  SEXP Rsh_Fir_reg_r112_;
  SEXP Rsh_Fir_reg_Im2_;
  SEXP Rsh_Fir_reg_r113_;
  SEXP Rsh_Fir_reg_is_na5_;
  SEXP Rsh_Fir_reg_r114_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym19 = ldf `is.na`
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 69), RHO);
  // base19 = ldf `is.na` in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args99);
  // if guard19 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r110
  return Rsh_Fir_reg_r110_;

L2_:;
  // sym20 = ldf Im
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 73), RHO);
  // base20 = ldf Im in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 73), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args100);
  // if guard20 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r109 = dyn base19(<lang Im(NA_CPLX)>)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 80);
  SEXP Rsh_Fir_array_arg_names55[1];
  Rsh_Fir_array_arg_names55[0] = R_MissingArg;
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names55, CCP, RHO);
  // goto L0(r109)
  // L0(r109)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r109_;
  goto L0_;

L1_:;
  // is_na5 = ldf `is.na` in base
  Rsh_Fir_reg_is_na5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 69), RHO);
  // r114 = dyn is_na5(r112)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_r112_;
  SEXP Rsh_Fir_array_arg_names56[1];
  Rsh_Fir_array_arg_names56[0] = R_MissingArg;
  Rsh_Fir_reg_r114_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na5_, 1, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names56, CCP, RHO);
  // goto L0(r114)
  // L0(r114)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r114_;
  goto L0_;

L4_:;
  // Im2 = ldf Im in base
  Rsh_Fir_reg_Im2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 73), RHO);
  // r113 = dyn Im2(NA_CPLX)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names57[1];
  Rsh_Fir_array_arg_names57[0] = R_MissingArg;
  Rsh_Fir_reg_r113_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Im2_, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names57, CCP, RHO);
  // goto L1(r113)
  // L1(r113)
  Rsh_Fir_reg_r112_ = Rsh_Fir_reg_r113_;
  goto L1_;

L5_:;
  // r111 = dyn base20(NA_CPLX)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 58);
  SEXP Rsh_Fir_array_arg_names58[1];
  Rsh_Fir_array_arg_names58[0] = R_MissingArg;
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names58, CCP, RHO);
  // goto L1(r111)
  // L1(r111)
  Rsh_Fir_reg_r112_ = Rsh_Fir_reg_r111_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_main24(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_NpNA4_;
  SEXP Rsh_Fir_reg_NpNA5_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // NpNA4 = ld NpNA
  Rsh_Fir_reg_NpNA4_ = Rsh_Fir_load(Rsh_const(CCP, 77), RHO);
  // NpNA5 = force? NpNA4
  Rsh_Fir_reg_NpNA5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_NpNA4_);
  // checkMissing(NpNA5)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_NpNA5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // return NpNA5
  return Rsh_Fir_reg_NpNA5_;
}
SEXP Rsh_Fir_user_function_inner4137945989_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4137945989 dynamic dispatch ([`length.out`, real, imaginary, modulus, argument])

  return Rsh_Fir_user_version_inner4137945989_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4137945989_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4137945989 version 0 (*, *, *, *, * -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner4137945989/0: expected 5, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_length_out;
  SEXP Rsh_Fir_reg_real;
  SEXP Rsh_Fir_reg_imaginary;
  SEXP Rsh_Fir_reg_modulus;
  SEXP Rsh_Fir_reg_argument;
  SEXP Rsh_Fir_reg_length_out_isMissing;
  SEXP Rsh_Fir_reg_length_out_orDefault;
  SEXP Rsh_Fir_reg_real_isMissing;
  SEXP Rsh_Fir_reg_real_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_imaginary_isMissing;
  SEXP Rsh_Fir_reg_imaginary_orDefault;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_modulus_isMissing;
  SEXP Rsh_Fir_reg_modulus_orDefault;
  SEXP Rsh_Fir_reg_argument_isMissing;
  SEXP Rsh_Fir_reg_argument_orDefault;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_missing;
  SEXP Rsh_Fir_reg_r6_1;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg_c2_1;
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_c5_;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_missing1_;
  SEXP Rsh_Fir_reg_r9_1;
  SEXP Rsh_Fir_reg_c6_;
  SEXP Rsh_Fir_reg_c7_;
  SEXP Rsh_Fir_reg_c9_;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r10_1;
  SEXP Rsh_Fir_reg_r11_1;
  SEXP Rsh_Fir_reg_length_out1_;
  SEXP Rsh_Fir_reg_length_out2_;
  SEXP Rsh_Fir_reg_real1_;
  SEXP Rsh_Fir_reg_real2_;
  SEXP Rsh_Fir_reg_imaginary1_;
  SEXP Rsh_Fir_reg_imaginary2_;
  SEXP Rsh_Fir_reg_complex1;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_r14_1;
  SEXP Rsh_Fir_reg_length_out3_;
  SEXP Rsh_Fir_reg_length_out4_;
  SEXP Rsh_Fir_reg_sym4_1;
  SEXP Rsh_Fir_reg_base4_1;
  SEXP Rsh_Fir_reg_guard4_1;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_argument1_;
  SEXP Rsh_Fir_reg_argument2_;
  SEXP Rsh_Fir_reg_length;
  SEXP Rsh_Fir_reg_r17_1;
  SEXP Rsh_Fir_reg_sym5_1;
  SEXP Rsh_Fir_reg_base5_1;
  SEXP Rsh_Fir_reg_guard5_1;
  SEXP Rsh_Fir_reg_r18_1;
  SEXP Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_reg_modulus1_;
  SEXP Rsh_Fir_reg_modulus2_;
  SEXP Rsh_Fir_reg_length1_;
  SEXP Rsh_Fir_reg_r20_1;
  SEXP Rsh_Fir_reg_max;
  SEXP Rsh_Fir_reg_r21_1;
  SEXP Rsh_Fir_reg_sym6_1;
  SEXP Rsh_Fir_reg_base6_1;
  SEXP Rsh_Fir_reg_guard6_1;
  SEXP Rsh_Fir_reg_r22_1;
  SEXP Rsh_Fir_reg_r23_1;
  SEXP Rsh_Fir_reg_modulus3_;
  SEXP Rsh_Fir_reg_modulus4_;
  SEXP Rsh_Fir_reg_n;
  SEXP Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_reg_rep_len;
  SEXP Rsh_Fir_reg_r24_1;
  SEXP Rsh_Fir_reg_sym7_1;
  SEXP Rsh_Fir_reg_base7_1;
  SEXP Rsh_Fir_reg_guard7_1;
  SEXP Rsh_Fir_reg_r27_1;
  SEXP Rsh_Fir_reg_r28_1;
  SEXP Rsh_Fir_reg_r29_1;
  SEXP Rsh_Fir_reg_sym8_1;
  SEXP Rsh_Fir_reg_base8_1;
  SEXP Rsh_Fir_reg_guard8_1;
  SEXP Rsh_Fir_reg_r34_1;
  SEXP Rsh_Fir_reg_r35_1;
  SEXP Rsh_Fir_reg_r36_1;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_argument3_;
  SEXP Rsh_Fir_reg_argument4_;
  SEXP Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_reg_rep_len1_;
  SEXP Rsh_Fir_reg_r38_1;
  SEXP Rsh_Fir_reg_r39_1;
  SEXP Rsh_Fir_reg_r40_1;
  SEXP Rsh_Fir_reg_r41_;

  // Bind parameters
  Rsh_Fir_reg_length_out = PARAMS[0];
  Rsh_Fir_reg_real = PARAMS[1];
  Rsh_Fir_reg_imaginary = PARAMS[2];
  Rsh_Fir_reg_modulus = PARAMS[3];
  Rsh_Fir_reg_argument = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // length_out_isMissing = missing.0(length_out)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_length_out;
  Rsh_Fir_reg_length_out_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args113);
  // if length_out_isMissing then L0(0) else L0(length_out)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_length_out_isMissing)) {
  // L0(0)
    Rsh_Fir_reg_length_out_orDefault = Rsh_const(CCP, 81);
    goto L0_;
  } else {
  // L0(length_out)
    Rsh_Fir_reg_length_out_orDefault = Rsh_Fir_reg_length_out;
    goto L0_;
  }

L0_:;
  // st `length.out` = length_out_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_length_out_orDefault, RHO);
  (void)(Rsh_Fir_reg_length_out_orDefault);
  // real_isMissing = missing.0(real)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_real;
  Rsh_Fir_reg_real_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args114);
  // if real_isMissing then L1() else L2(real)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_real_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(real)
    Rsh_Fir_reg_real_orDefault = Rsh_Fir_reg_real;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   numeric = ldf numeric;
  //   r = dyn numeric();
  //   return r;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4137945989_, 0, NULL, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_real_orDefault = Rsh_Fir_reg_p1;
  goto L2_;

L2_:;
  // st real = real_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_real_orDefault, RHO);
  (void)(Rsh_Fir_reg_real_orDefault);
  // imaginary_isMissing = missing.0(imaginary)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_imaginary;
  Rsh_Fir_reg_imaginary_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args115);
  // if imaginary_isMissing then L3() else L4(imaginary)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_imaginary_isMissing)) {
  // L3()
    goto L3_;
  } else {
  // L4(imaginary)
    Rsh_Fir_reg_imaginary_orDefault = Rsh_Fir_reg_imaginary;
    goto L4_;
  }

L3_:;
  // p1 = prom<V +>{
  //   numeric1 = ldf numeric;
  //   r2 = dyn numeric1();
  //   return r2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4137945989_1, 0, NULL, CCP, RHO);
  // goto L4(p1)
  // L4(p1)
  Rsh_Fir_reg_imaginary_orDefault = Rsh_Fir_reg_p1_1;
  goto L4_;

L4_:;
  // st imaginary = imaginary_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_imaginary_orDefault, RHO);
  (void)(Rsh_Fir_reg_imaginary_orDefault);
  // modulus_isMissing = missing.0(modulus)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_modulus;
  Rsh_Fir_reg_modulus_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args116);
  // if modulus_isMissing then L5(1.0) else L5(modulus)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_modulus_isMissing)) {
  // L5(1.0)
    Rsh_Fir_reg_modulus_orDefault = Rsh_const(CCP, 34);
    goto L5_;
  } else {
  // L5(modulus)
    Rsh_Fir_reg_modulus_orDefault = Rsh_Fir_reg_modulus;
    goto L5_;
  }

L5_:;
  // st modulus = modulus_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_modulus_orDefault, RHO);
  (void)(Rsh_Fir_reg_modulus_orDefault);
  // argument_isMissing = missing.0(argument)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_argument;
  Rsh_Fir_reg_argument_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args117);
  // if argument_isMissing then L6(0.0) else L6(argument)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_argument_isMissing)) {
  // L6(0.0)
    Rsh_Fir_reg_argument_orDefault = Rsh_const(CCP, 45);
    goto L6_;
  } else {
  // L6(argument)
    Rsh_Fir_reg_argument_orDefault = Rsh_Fir_reg_argument;
    goto L6_;
  }

L6_:;
  // st argument = argument_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_argument_orDefault, RHO);
  (void)(Rsh_Fir_reg_argument_orDefault);
  // sym = ldf missing
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 83), RHO);
  // base = ldf missing in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 83), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args118);
  // if guard then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L7_:;
  // c = `as.logical`(r5)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args119);
  // if c then L20() else L8(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L20()
    goto L20_;
  } else {
  // L8(c)
    Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c1;
    goto L8_;
  }

L18_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 83), RHO);
  // r6 = dyn missing(<sym modulus>)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names64[1];
  Rsh_Fir_array_arg_names64[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names64, CCP, RHO);
  // goto L7(r6)
  // L7(r6)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r6_1;
  goto L7_;

L19_:;
  // r4 = dyn base(<sym modulus>)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names65[1];
  Rsh_Fir_array_arg_names65[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names65, CCP, RHO);
  // goto L7(r4)
  // L7(r4)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_1;
  goto L7_;

L8_:;
  // c9 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_c2_1;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args122);
  // if c9 then L24() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L24()
    goto L24_;
  } else {
  // L10()
    goto L10_;
  }

L20_:;
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 83), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 83), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args123);
  // if guard1 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L9_:;
  // c6 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args124);
  // c7 = `&&`(c5, c6)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(83, RHO, 2, Rsh_Fir_array_args125);
  // goto L8(c7)
  // L8(c7)
  Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c7_;
  goto L8_;

L10_:;
  // sym3 = ldf max
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 84), RHO);
  // base3 = ldf max in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 84), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args126);
  // if guard3 then L32() else L33()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L32()
    goto L32_;
  } else {
  // L33()
    goto L33_;
  }

L21_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 83), RHO);
  // r9 = dyn missing1(<sym argument>)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names66[1];
  Rsh_Fir_array_arg_names66[0] = R_MissingArg;
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names66, CCP, RHO);
  // goto L9(c, r9)
  // L9(c, r9)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r9_1;
  goto L9_;

L22_:;
  // r7 = dyn base1(<sym argument>)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names67[1];
  Rsh_Fir_array_arg_names67[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names67, CCP, RHO);
  // goto L9(c, r7)
  // L9(c, r7)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r7_;
  goto L9_;

L24_:;
  // sym2 = ldf `.Internal`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 85), RHO);
  // base2 = ldf `.Internal` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 85), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args129);
  // if guard2 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r11
  return Rsh_Fir_reg_r11_1;

L12_:;
  // st n = r14
  Rsh_Fir_store(Rsh_const(CCP, 86), Rsh_Fir_reg_r14_1, RHO);
  (void)(Rsh_Fir_reg_r14_1);
  // sym6 = ldf rep_len
  Rsh_Fir_reg_sym6_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 87), RHO);
  // base6 = ldf rep_len in base
  Rsh_Fir_reg_base6_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 87), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_sym6_1;
  Rsh_Fir_array_args130[1] = Rsh_Fir_reg_base6_1;
  Rsh_Fir_reg_guard6_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args130);
  // if guard6 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_1)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L25_:;
  // length_out1 = ld `length.out`
  Rsh_Fir_reg_length_out1_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L27() else D0()
  // L27()
  goto L27_;

L26_:;
  // r10 = dyn base2(<lang complex(length.out, real, imaginary)>)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_const(CCP, 88);
  SEXP Rsh_Fir_array_arg_names68[1];
  Rsh_Fir_array_arg_names68[0] = R_MissingArg;
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args131, Rsh_Fir_array_arg_names68, CCP, RHO);
  // goto L11(r10)
  // L11(r10)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r10_1;
  goto L11_;

L32_:;
  // length_out3 = ld `length.out`
  Rsh_Fir_reg_length_out3_ = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L34() else D4()
  // L34()
  goto L34_;

L33_:;
  // r13 = dyn base3(<sym length.out>, <lang length(argument)>, <lang length(modulus)>)
  SEXP Rsh_Fir_array_args132[3];
  Rsh_Fir_array_args132[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args132[1] = Rsh_const(CCP, 89);
  Rsh_Fir_array_args132[2] = Rsh_const(CCP, 90);
  SEXP Rsh_Fir_array_arg_names69[3];
  Rsh_Fir_array_arg_names69[0] = R_MissingArg;
  Rsh_Fir_array_arg_names69[1] = R_MissingArg;
  Rsh_Fir_array_arg_names69[2] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 3, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names69, CCP, RHO);
  // goto L12(r13)
  // L12(r13)
  Rsh_Fir_reg_r14_1 = Rsh_Fir_reg_r13_1;
  goto L12_;

D0_:;
  // deopt 9 [length_out1]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_length_out1_;
  Rsh_Fir_deopt(9, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D4_:;
  // deopt 19 [length_out3]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_length_out3_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L15_:;
  // sym7 = ldf exp
  Rsh_Fir_reg_sym7_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 91), RHO);
  // base7 = ldf exp in base
  Rsh_Fir_reg_base7_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 91), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args133[2];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_sym7_1;
  Rsh_Fir_array_args133[1] = Rsh_Fir_reg_base7_1;
  Rsh_Fir_reg_guard7_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args133);
  // if guard7 then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_1)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L27_:;
  // length_out2 = force? length_out1
  Rsh_Fir_reg_length_out2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out1_);
  // checkMissing(length_out2)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_length_out2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty()));
  // real1 = ld real
  Rsh_Fir_reg_real1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L28() else D1()
  // L28()
  goto L28_;

L34_:;
  // length_out4 = force? length_out3
  Rsh_Fir_reg_length_out4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_length_out3_);
  // checkMissing(length_out4)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_length_out4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty()));
  // sym4 = ldf length
  Rsh_Fir_reg_sym4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 92), RHO);
  // base4 = ldf length in base
  Rsh_Fir_reg_base4_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 92), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_sym4_1;
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_base4_1;
  Rsh_Fir_reg_guard4_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args136);
  // if guard4 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_1)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L44_:;
  // modulus3 = ld modulus
  Rsh_Fir_reg_modulus3_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L46() else D10()
  // L46()
  goto L46_;

L45_:;
  // r22 = dyn base6(<sym modulus>, <sym n>)
  SEXP Rsh_Fir_array_args137[2];
  Rsh_Fir_array_args137[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args137[1] = Rsh_const(CCP, 86);
  SEXP Rsh_Fir_array_arg_names70[2];
  Rsh_Fir_array_arg_names70[0] = R_MissingArg;
  Rsh_Fir_array_arg_names70[1] = R_MissingArg;
  Rsh_Fir_reg_r22_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_1, 2, Rsh_Fir_array_args137, Rsh_Fir_array_arg_names70, CCP, RHO);
  // goto L15(r22)
  // L15(r22)
  Rsh_Fir_reg_r23_1 = Rsh_Fir_reg_r22_1;
  goto L15_;

D1_:;
  // deopt 11 [real1]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_real1_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 38 [modulus3]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_modulus3_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L13_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 92), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 92), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_sym5_1;
  Rsh_Fir_array_args138[1] = Rsh_Fir_reg_base5_1;
  Rsh_Fir_reg_guard5_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args138);
  // if guard5 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_1)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L16_:;
  // r41 = `*`(r28, r29)
  SEXP Rsh_Fir_array_args139[2];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_r28_1;
  Rsh_Fir_array_args139[1] = Rsh_Fir_reg_r29_1;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args139);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r41
  return Rsh_Fir_reg_r41_;

L28_:;
  // real2 = force? real1
  Rsh_Fir_reg_real2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_real1_);
  // checkMissing(real2)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_Fir_reg_real2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args140, Rsh_Fir_param_types_empty()));
  // imaginary1 = ld imaginary
  Rsh_Fir_reg_imaginary1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L29() else D2()
  // L29()
  goto L29_;

L35_:;
  // argument1 = ld argument
  Rsh_Fir_reg_argument1_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L37() else D5()
  // L37()
  goto L37_;

L36_:;
  // r15 = dyn base4(<sym argument>)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names71[1];
  Rsh_Fir_array_arg_names71[0] = R_MissingArg;
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_1, 1, Rsh_Fir_array_args141, Rsh_Fir_array_arg_names71, CCP, RHO);
  // goto L13(r15)
  // L13(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_1;
  goto L13_;

L46_:;
  // modulus4 = force? modulus3
  Rsh_Fir_reg_modulus4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_modulus3_);
  // checkMissing(modulus4)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_modulus4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty()));
  // n = ld n
  Rsh_Fir_reg_n = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // check L47() else D11()
  // L47()
  goto L47_;

L49_:;
  // sym8 = ldf rep_len
  Rsh_Fir_reg_sym8_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 87), RHO);
  // base8 = ldf rep_len in base
  Rsh_Fir_reg_base8_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 87), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args143[2];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_sym8_1;
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_base8_1;
  Rsh_Fir_reg_guard8_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args143);
  // if guard8 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_1)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L50_:;
  // r27 = dyn base7(<lang `*`(`(`(`+`(0.0, 1.0i)), rep_len(argument, n))>)
  SEXP Rsh_Fir_array_args144[1];
  Rsh_Fir_array_args144[0] = Rsh_const(CCP, 93);
  SEXP Rsh_Fir_array_arg_names72[1];
  Rsh_Fir_array_arg_names72[0] = R_MissingArg;
  Rsh_Fir_reg_r27_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_1, 1, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names72, CCP, RHO);
  // goto L16(r23, r27)
  // L16(r23, r27)
  Rsh_Fir_reg_r28_1 = Rsh_Fir_reg_r23_1;
  Rsh_Fir_reg_r29_1 = Rsh_Fir_reg_r27_1;
  goto L16_;

D2_:;
  // deopt 13 [imaginary1]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_imaginary1_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

D5_:;
  // deopt 23 [argument1]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_argument1_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 40 [n]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_n;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L14_:;
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 84), RHO);
  // r21 = dyn max(length_out4, r16, r19)
  SEXP Rsh_Fir_array_args145[3];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_length_out4_;
  Rsh_Fir_array_args145[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args145[2] = Rsh_Fir_reg_r19_1;
  SEXP Rsh_Fir_array_arg_names73[3];
  Rsh_Fir_array_arg_names73[0] = R_MissingArg;
  Rsh_Fir_array_arg_names73[1] = R_MissingArg;
  Rsh_Fir_array_arg_names73[2] = R_MissingArg;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 3, Rsh_Fir_array_args145, Rsh_Fir_array_arg_names73, CCP, RHO);
  // check L43() else D9()
  // L43()
  goto L43_;

L17_:;
  // r39 = `*`(r36, r37)
  SEXP Rsh_Fir_array_args146[2];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_r36_1;
  Rsh_Fir_array_args146[1] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_r39_1 = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args146);
  // r40 = exp(r39)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_r39_1;
  Rsh_Fir_reg_r40_1 = Rsh_Fir_call_builtin(172, RHO, 1, Rsh_Fir_array_args147);
  // goto L16(r35, r40)
  // L16(r35, r40)
  Rsh_Fir_reg_r28_1 = Rsh_Fir_reg_r35_1;
  Rsh_Fir_reg_r29_1 = Rsh_Fir_reg_r40_1;
  goto L16_;

L29_:;
  // imaginary2 = force? imaginary1
  Rsh_Fir_reg_imaginary2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_imaginary1_);
  // checkMissing(imaginary2)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_imaginary2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty()));
  // complex = ldf complex in base
  Rsh_Fir_reg_complex1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r12 = dyn complex(length_out2, real2, imaginary2)
  SEXP Rsh_Fir_array_args149[3];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_length_out2_;
  Rsh_Fir_array_args149[1] = Rsh_Fir_reg_real2_;
  Rsh_Fir_array_args149[2] = Rsh_Fir_reg_imaginary2_;
  SEXP Rsh_Fir_array_arg_names74[3];
  Rsh_Fir_array_arg_names74[0] = R_MissingArg;
  Rsh_Fir_array_arg_names74[1] = R_MissingArg;
  Rsh_Fir_array_arg_names74[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_complex1, 3, Rsh_Fir_array_args149, Rsh_Fir_array_arg_names74, CCP, RHO);
  // check L30() else D3()
  // L30()
  goto L30_;

L37_:;
  // argument2 = force? argument1
  Rsh_Fir_reg_argument2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_argument1_);
  // checkMissing(argument2)
  SEXP Rsh_Fir_array_args150[1];
  Rsh_Fir_array_args150[0] = Rsh_Fir_reg_argument2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args150, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 92), RHO);
  // r17 = dyn length(argument2)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_argument2_;
  SEXP Rsh_Fir_array_arg_names75[1];
  Rsh_Fir_array_arg_names75[0] = R_MissingArg;
  Rsh_Fir_reg_r17_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args151, Rsh_Fir_array_arg_names75, CCP, RHO);
  // check L38() else D6()
  // L38()
  goto L38_;

L39_:;
  // modulus1 = ld modulus
  Rsh_Fir_reg_modulus1_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // check L41() else D7()
  // L41()
  goto L41_;

L40_:;
  // r18 = dyn base5(<sym modulus>)
  SEXP Rsh_Fir_array_args152[1];
  Rsh_Fir_array_args152[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names76[1];
  Rsh_Fir_array_arg_names76[0] = R_MissingArg;
  Rsh_Fir_reg_r18_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_1, 1, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names76, CCP, RHO);
  // goto L14(r18)
  // L14(r18)
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r18_1;
  goto L14_;

L47_:;
  // n1 = force? n
  Rsh_Fir_reg_n1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n);
  // checkMissing(n1)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_n1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty()));
  // rep_len = ldf rep_len in base
  Rsh_Fir_reg_rep_len = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 87), RHO);
  // r24 = dyn rep_len(modulus4, n1)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_Fir_reg_modulus4_;
  Rsh_Fir_array_args154[1] = Rsh_Fir_reg_n1_;
  SEXP Rsh_Fir_array_arg_names77[2];
  Rsh_Fir_array_arg_names77[0] = R_MissingArg;
  Rsh_Fir_array_arg_names77[1] = R_MissingArg;
  Rsh_Fir_reg_r24_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_len, 2, Rsh_Fir_array_args154, Rsh_Fir_array_arg_names77, CCP, RHO);
  // check L48() else D12()
  // L48()
  goto L48_;

L51_:;
  // argument3 = ld argument
  Rsh_Fir_reg_argument3_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L53() else D13()
  // L53()
  goto L53_;

L52_:;
  // r34 = dyn base8(<sym argument>, <sym n>)
  SEXP Rsh_Fir_array_args155[2];
  Rsh_Fir_array_args155[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args155[1] = Rsh_const(CCP, 86);
  SEXP Rsh_Fir_array_arg_names78[2];
  Rsh_Fir_array_arg_names78[0] = R_MissingArg;
  Rsh_Fir_array_arg_names78[1] = R_MissingArg;
  Rsh_Fir_reg_r34_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_1, 2, Rsh_Fir_array_args155, Rsh_Fir_array_arg_names78, CCP, RHO);
  // goto L17(r23, 1.0i, r34)
  // L17(r23, 1.0i, r34)
  Rsh_Fir_reg_r35_1 = Rsh_Fir_reg_r23_1;
  Rsh_Fir_reg_r36_1 = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r34_1;
  goto L17_;

D3_:;
  // deopt 16 [r12]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 26 [r17]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r17_1;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 29 [modulus1]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_modulus1_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 34 [r21]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r21_1;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 43 [r24]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r24_1;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 47 [r23, 1.0i, argument3]
  SEXP Rsh_Fir_array_deopt_stack32[3];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r23_1;
  Rsh_Fir_array_deopt_stack32[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_deopt_stack32[2] = Rsh_Fir_reg_argument3_;
  Rsh_Fir_deopt(47, 3, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L30_:;
  // goto L11(r12)
  // L11(r12)
  Rsh_Fir_reg_r11_1 = Rsh_Fir_reg_r12_;
  goto L11_;

L38_:;
  // goto L13(r17)
  // L13(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_1;
  goto L13_;

L41_:;
  // modulus2 = force? modulus1
  Rsh_Fir_reg_modulus2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_modulus1_);
  // checkMissing(modulus2)
  SEXP Rsh_Fir_array_args156[1];
  Rsh_Fir_array_args156[0] = Rsh_Fir_reg_modulus2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args156, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 92), RHO);
  // r20 = dyn length1(modulus2)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_modulus2_;
  SEXP Rsh_Fir_array_arg_names79[1];
  Rsh_Fir_array_arg_names79[0] = R_MissingArg;
  Rsh_Fir_reg_r20_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args157, Rsh_Fir_array_arg_names79, CCP, RHO);
  // check L42() else D8()
  // L42()
  goto L42_;

L43_:;
  // goto L12(r21)
  // L12(r21)
  Rsh_Fir_reg_r14_1 = Rsh_Fir_reg_r21_1;
  goto L12_;

L48_:;
  // goto L15(r24)
  // L15(r24)
  Rsh_Fir_reg_r23_1 = Rsh_Fir_reg_r24_1;
  goto L15_;

L53_:;
  // argument4 = force? argument3
  Rsh_Fir_reg_argument4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_argument3_);
  // checkMissing(argument4)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_argument4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty()));
  // n2 = ld n
  Rsh_Fir_reg_n2_ = Rsh_Fir_load(Rsh_const(CCP, 86), RHO);
  // check L54() else D14()
  // L54()
  goto L54_;

D8_:;
  // deopt 32 [r20]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_r20_1;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 49 [r23, 1.0i, n2]
  SEXP Rsh_Fir_array_deopt_stack34[3];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_r23_1;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_deopt_stack34[2] = Rsh_Fir_reg_n2_;
  Rsh_Fir_deopt(49, 3, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L14(r20)
  // L14(r20)
  Rsh_Fir_reg_r19_1 = Rsh_Fir_reg_r20_1;
  goto L14_;

L54_:;
  // n3 = force? n2
  Rsh_Fir_reg_n3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n2_);
  // checkMissing(n3)
  SEXP Rsh_Fir_array_args159[1];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_n3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args159, Rsh_Fir_param_types_empty()));
  // rep_len1 = ldf rep_len in base
  Rsh_Fir_reg_rep_len1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 87), RHO);
  // r38 = dyn rep_len1(argument4, n3)
  SEXP Rsh_Fir_array_args160[2];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_argument4_;
  Rsh_Fir_array_args160[1] = Rsh_Fir_reg_n3_;
  SEXP Rsh_Fir_array_arg_names80[2];
  Rsh_Fir_array_arg_names80[0] = R_MissingArg;
  Rsh_Fir_array_arg_names80[1] = R_MissingArg;
  Rsh_Fir_reg_r38_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_len1_, 2, Rsh_Fir_array_args160, Rsh_Fir_array_arg_names80, CCP, RHO);
  // check L55() else D15()
  // L55()
  goto L55_;

D15_:;
  // deopt 52 [r23, 1.0i, r38]
  SEXP Rsh_Fir_array_deopt_stack35[3];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r23_1;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_r38_1;
  Rsh_Fir_deopt(52, 3, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L55_:;
  // goto L17(r23, 1.0i, r38)
  // L17(r23, 1.0i, r38)
  Rsh_Fir_reg_r35_1 = Rsh_Fir_reg_r23_1;
  Rsh_Fir_reg_r36_1 = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_1;
  goto L17_;
}
SEXP Rsh_Fir_user_promise_inner4137945989_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_numeric;
  SEXP Rsh_Fir_reg_r1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4137945989/0: expected 0, got %d", NCAPTURES);

  // numeric = ldf numeric
  Rsh_Fir_reg_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 82), RHO);
  // r = dyn numeric()
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric, 0, NULL, NULL, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner4137945989_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_numeric1_;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner4137945989/0: expected 0, got %d", NCAPTURES);

  // numeric1 = ldf numeric
  Rsh_Fir_reg_numeric1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 82), RHO);
  // r2 = dyn numeric1()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric1_, 0, NULL, NULL, CCP, RHO);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_function_inner2148457334_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2148457334 dynamic dispatch ([z])

  return Rsh_Fir_user_version_inner2148457334_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2148457334_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2148457334 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2148457334/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_z;
  SEXP Rsh_Fir_reg_noquote;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_r10_2;

  // Bind parameters
  Rsh_Fir_reg_z = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st z = z
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_z, RHO);
  (void)(Rsh_Fir_reg_z);
  // noquote = ldf noquote
  Rsh_Fir_reg_noquote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 94), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p2 = prom<V +>{
  //   paste0 = ldf paste0;
  //   p = prom<V +>{
  //     sym = ldf Re;
  //     base = ldf Re in base;
  //     guard = `==`.4(sym, base);
  //     if guard then L1() else L2();
  //   L0(r1):
  //     return r1;
  //   L1():
  //     z1 = ld z;
  //     z2 = force? z1;
  //     checkMissing(z2);
  //     Re = ldf Re in base;
  //     r2 = dyn Re(z2);
  //     goto L0(r2);
  //   L2():
  //     r = dyn base(<sym z>);
  //     goto L0(r);
  //   };
  //   p1 = prom<V +>{
  //     sym1 = ldf Im;
  //     base1 = ldf Im in base;
  //     guard1 = `==`.4(sym1, base1);
  //     if guard1 then L1() else L2();
  //   L0(r5):
  //     return r5;
  //   L1():
  //     z3 = ld z;
  //     z4 = force? z3;
  //     checkMissing(z4);
  //     Im = ldf Im in base;
  //     r6 = dyn Im(z4);
  //     goto L0(r6);
  //   L2():
  //     r4 = dyn base1(<sym z>);
  //     goto L0(r4);
  //   };
  //   r8 = dyn paste0("(", p, ",", p1, ")");
  //   return r8;
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2148457334_, 0, NULL, CCP, RHO);
  // r10 = dyn noquote(p2)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names86[1];
  Rsh_Fir_array_arg_names86[0] = R_MissingArg;
  Rsh_Fir_reg_r10_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_noquote, 1, Rsh_Fir_array_args170, Rsh_Fir_array_arg_names86, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 3 [r10]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r10_2;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r10
  return Rsh_Fir_reg_r10_2;
}
SEXP Rsh_Fir_user_promise_inner2148457334_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_paste0_;
  SEXP Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_reg_p1_2;
  SEXP Rsh_Fir_reg_r8_2;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2148457334/0: expected 0, got %d", NCAPTURES);

  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 95), RHO);
  // p = prom<V +>{
  //   sym = ldf Re;
  //   base = ldf Re in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   z1 = ld z;
  //   z2 = force? z1;
  //   checkMissing(z2);
  //   Re = ldf Re in base;
  //   r2 = dyn Re(z2);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym z>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2148457334_1, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   sym1 = ldf Im;
  //   base1 = ldf Im in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r5):
  //   return r5;
  // L1():
  //   z3 = ld z;
  //   z4 = force? z3;
  //   checkMissing(z4);
  //   Im = ldf Im in base;
  //   r6 = dyn Im(z4);
  //   goto L0(r6);
  // L2():
  //   r4 = dyn base1(<sym z>);
  //   goto L0(r4);
  // }
  Rsh_Fir_reg_p1_2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2148457334_2, 0, NULL, CCP, RHO);
  // r8 = dyn paste0("(", p, ",", p1, ")")
  SEXP Rsh_Fir_array_args169[5];
  Rsh_Fir_array_args169[0] = Rsh_const(CCP, 96);
  Rsh_Fir_array_args169[1] = Rsh_Fir_reg_p2;
  Rsh_Fir_array_args169[2] = Rsh_const(CCP, 97);
  Rsh_Fir_array_args169[3] = Rsh_Fir_reg_p1_2;
  Rsh_Fir_array_args169[4] = Rsh_const(CCP, 98);
  SEXP Rsh_Fir_array_arg_names85[5];
  Rsh_Fir_array_arg_names85[0] = R_MissingArg;
  Rsh_Fir_array_arg_names85[1] = R_MissingArg;
  Rsh_Fir_array_arg_names85[2] = R_MissingArg;
  Rsh_Fir_array_arg_names85[3] = R_MissingArg;
  Rsh_Fir_array_arg_names85[4] = R_MissingArg;
  Rsh_Fir_reg_r8_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 5, Rsh_Fir_array_args169, Rsh_Fir_array_arg_names85, CCP, RHO);
  // return r8
  return Rsh_Fir_reg_r8_2;
}
SEXP Rsh_Fir_user_promise_inner2148457334_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2;
  SEXP Rsh_Fir_reg_base2;
  SEXP Rsh_Fir_reg_guard2;
  SEXP Rsh_Fir_reg_r2;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_z1_;
  SEXP Rsh_Fir_reg_z2_;
  SEXP Rsh_Fir_reg_Re1;
  SEXP Rsh_Fir_reg_r2_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2148457334/0: expected 0, got %d", NCAPTURES);

  // sym = ldf Re
  Rsh_Fir_reg_sym2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 70), RHO);
  // base = ldf Re in base
  Rsh_Fir_reg_base2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 70), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args161[2];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_sym2;
  Rsh_Fir_array_args161[1] = Rsh_Fir_reg_base2;
  Rsh_Fir_reg_guard2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args161);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_1;

L1_:;
  // z1 = ld z
  Rsh_Fir_reg_z1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // z2 = force? z1
  Rsh_Fir_reg_z2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z1_);
  // checkMissing(z2)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_z2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty()));
  // Re = ldf Re in base
  Rsh_Fir_reg_Re1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 70), RHO);
  // r2 = dyn Re(z2)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_z2_;
  SEXP Rsh_Fir_array_arg_names81[1];
  Rsh_Fir_array_arg_names81[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Re1, 1, Rsh_Fir_array_args163, Rsh_Fir_array_arg_names81, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base(<sym z>)
  SEXP Rsh_Fir_array_args164[1];
  Rsh_Fir_array_args164[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names82[1];
  Rsh_Fir_array_arg_names82[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2, 1, Rsh_Fir_array_args164, Rsh_Fir_array_arg_names82, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2148457334_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_2;
  SEXP Rsh_Fir_reg_base1_2;
  SEXP Rsh_Fir_reg_guard1_2;
  SEXP Rsh_Fir_reg_r4_2;
  SEXP Rsh_Fir_reg_r5_2;
  SEXP Rsh_Fir_reg_z3_;
  SEXP Rsh_Fir_reg_z4_;
  SEXP Rsh_Fir_reg_Im1;
  SEXP Rsh_Fir_reg_r6_2;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2148457334/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf Im
  Rsh_Fir_reg_sym1_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 73), RHO);
  // base1 = ldf Im in base
  Rsh_Fir_reg_base1_2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 73), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args165[2];
  Rsh_Fir_array_args165[0] = Rsh_Fir_reg_sym1_2;
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_base1_2;
  Rsh_Fir_reg_guard1_2 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args165);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_2)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r5
  return Rsh_Fir_reg_r5_2;

L1_:;
  // z3 = ld z
  Rsh_Fir_reg_z3_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // z4 = force? z3
  Rsh_Fir_reg_z4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z3_);
  // checkMissing(z4)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_z4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty()));
  // Im = ldf Im in base
  Rsh_Fir_reg_Im1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 73), RHO);
  // r6 = dyn Im(z4)
  SEXP Rsh_Fir_array_args167[1];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_z4_;
  SEXP Rsh_Fir_array_arg_names83[1];
  Rsh_Fir_array_arg_names83[0] = R_MissingArg;
  Rsh_Fir_reg_r6_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_Im1, 1, Rsh_Fir_array_args167, Rsh_Fir_array_arg_names83, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_2 = Rsh_Fir_reg_r6_2;
  goto L0_;

L2_:;
  // r4 = dyn base1(<sym z>)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names84[1];
  Rsh_Fir_array_arg_names84[0] = R_MissingArg;
  Rsh_Fir_reg_r4_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_2, 1, Rsh_Fir_array_args168, Rsh_Fir_array_arg_names84, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_2 = Rsh_Fir_reg_r4_2;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
