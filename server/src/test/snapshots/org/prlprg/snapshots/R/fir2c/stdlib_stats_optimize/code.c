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
SEXP Rsh_Fir_user_function_inner174310025_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner174310025_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner174310025_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner174310025_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner174310025_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner174310025_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_inner174310025_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner3031791826_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3031791826_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3031791826_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner741670229_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner741670229_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_require;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_optimize;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_xmin;
  SEXP Rsh_Fir_reg_xmin1_;
  SEXP Rsh_Fir_reg_optimize1_;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_plot;
  SEXP Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_optimize2_;
  SEXP Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_optimize3_;
  SEXP Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_reg_r33_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner174310025
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner174310025_, RHO, CCP);
  // st optimize = r
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
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // r5 = clos inner741670229
  Rsh_Fir_reg_r5_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner741670229_, RHO, CCP);
  // st f = r5
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // optimize = ldf optimize
  Rsh_Fir_reg_optimize = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

L1_:;
  // require = ldf require
  Rsh_Fir_reg_require = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 1), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L2_:;
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
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
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
  // check L4() else D1()
  // L4()
  goto L4_;

L5_:;
  // p1 = prom<V +>{
  //   f = ld f;
  //   f1 = force? f;
  //   checkMissing(f1);
  //   return f1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r8):
  //   return r8;
  // L1():
  //   c = ldf c in base;
  //   r9 = dyn c(0.0, 1.0);
  //   goto L0(r9);
  // L2():
  //   r7 = dyn base1(0.0, 1.0);
  //   goto L0(r7);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p3 = prom<V +>{
  //   return 0.3333333333333333;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // r12 = dyn optimize[, , tol, a](p1, p2, 1.0E-4, p3)
  SEXP Rsh_Fir_array_args8[4];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args8[3] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names4[4];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_arg_names4[3] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_optimize, 4, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

D3_:;
  // deopt 19 [r12]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // goto L0()
  // L0()
  goto L0_;

L6_:;
  // st xmin = r12
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // xmin = ld xmin
  Rsh_Fir_reg_xmin = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 21 [xmin]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_xmin;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L7_:;
  // xmin1 = force? xmin
  Rsh_Fir_reg_xmin1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xmin);
  // checkMissing(xmin1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_xmin1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // optimize1 = ldf optimize
  Rsh_Fir_reg_optimize1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L8() else D5()
  // L8()
  goto L8_;

D5_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p4 = prom<V +>{
  //   r13 = clos inner2501545716;
  //   return r13;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r15 = dyn optimize1[, lower, upper](p4, 0.0, 10.0)
  SEXP Rsh_Fir_array_args10[3];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args10[2] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_arg_names5[2] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_optimize1_, 3, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L9() else D6()
  // L9()
  goto L9_;

D6_:;
  // deopt 30 [r15]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L9_:;
  // r16 = clos inner2501545716
  Rsh_Fir_reg_r16_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st f = r16
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // r17 = clos inner2501545716
  Rsh_Fir_reg_r17_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st fp = r17
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r17_, RHO);
  (void)(Rsh_Fir_reg_r17_);
  // plot = ldf plot
  Rsh_Fir_reg_plot = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L10() else D7()
  // L10()
  goto L10_;

D7_:;
  // deopt 38 []
  Rsh_Fir_deopt(38, 0, NULL, CCP, RHO);
  return R_NilValue;

L10_:;
  // p5 = prom<V +>{
  //   f2 = ld f;
  //   f3 = force? f2;
  //   checkMissing(f3);
  //   return f3;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main5, 0, NULL, CCP, RHO);
  // p6 = prom<V +>{
  //   return -2.0;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main6, 0, NULL, CCP, RHO);
  // p7 = prom<V +>{
  //   return <int 0, 1>;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main7, 0, NULL, CCP, RHO);
  // r21 = dyn plot[, , , ylim, col](p5, p6, 5.0, p7, 2.0)
  SEXP Rsh_Fir_array_args12[5];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args12[3] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args12[4] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names6[5];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_array_arg_names6[3] = Rsh_const(CCP, 21);
  Rsh_Fir_array_arg_names6[4] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_plot, 5, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L11() else D8()
  // L11()
  goto L11_;

D8_:;
  // deopt 46 [r21]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L11_:;
  // optimize2 = ldf optimize
  Rsh_Fir_reg_optimize2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L12() else D9()
  // L12()
  goto L12_;

D9_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

L12_:;
  // p8 = prom<V +>{
  //   fp = ld fp;
  //   fp1 = force? fp;
  //   checkMissing(fp1);
  //   return fp1;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main8, 0, NULL, CCP, RHO);
  // p9 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r24):
  //   return r24;
  // L1():
  //   c1 = ldf c in base;
  //   r25 = dyn c1(-4.0, 20.0);
  //   goto L0(r25);
  // L2():
  //   r23 = dyn base2(<lang `-`(4.0)>, 20.0);
  //   goto L0(r23);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main9, 0, NULL, CCP, RHO);
  // r27 = dyn optimize2(p8, p9)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_optimize2_, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L13() else D10()
  // L13()
  goto L13_;

D10_:;
  // deopt 51 [r27]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L13_:;
  // optimize3 = ldf optimize
  Rsh_Fir_reg_optimize3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // check L14() else D11()
  // L14()
  goto L14_;

D11_:;
  // deopt 53 []
  Rsh_Fir_deopt(53, 0, NULL, CCP, RHO);
  return R_NilValue;

L14_:;
  // p10 = prom<V +>{
  //   fp2 = ld fp;
  //   fp3 = force? fp2;
  //   checkMissing(fp3);
  //   return fp3;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main10, 0, NULL, CCP, RHO);
  // p11 = prom<V +>{
  //   sym3 = ldf c;
  //   base3 = ldf c in base;
  //   guard3 = `==`.4(sym3, base3);
  //   if guard3 then L1() else L2();
  // L0(r30):
  //   return r30;
  // L1():
  //   c2 = ldf c in base;
  //   r31 = dyn c2(-7.0, 20.0);
  //   goto L0(r31);
  // L2():
  //   r29 = dyn base3(<lang `-`(7.0)>, 20.0);
  //   goto L0(r29);
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main11, 0, NULL, CCP, RHO);
  // r33 = dyn optimize3(p10, p11)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_optimize3_, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L15() else D12()
  // L15()
  goto L15_;

D12_:;
  // deopt 56 [r33]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(56, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L15_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r33
  return Rsh_Fir_reg_r33_;
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
  SEXP Rsh_Fir_reg_f;
  SEXP Rsh_Fir_reg_f1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // f = ld f
  Rsh_Fir_reg_f = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // f1 = force? f
  Rsh_Fir_reg_f1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f);
  // checkMissing(f1)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_f1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty()));
  // return f1
  return Rsh_Fir_reg_f1_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_r9_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r8
  return Rsh_Fir_reg_r8_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r9 = dyn c(0.0, 1.0)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args6[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args6, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L0_;

L2_:;
  // r7 = dyn base1(0.0, 1.0)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return 0.3333333333333333
  return Rsh_const(CCP, 7);
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // r13 = clos inner2501545716
  Rsh_Fir_reg_r13_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_main5(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_f2_;
  SEXP Rsh_Fir_reg_f3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // f2 = ld f
  Rsh_Fir_reg_f2_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // f3 = force? f2
  Rsh_Fir_reg_f3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f2_);
  // checkMissing(f3)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_f3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // return f3
  return Rsh_Fir_reg_f3_;
}
SEXP Rsh_Fir_user_promise_main6(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return -2.0
  return Rsh_const(CCP, 17);
}
SEXP Rsh_Fir_user_promise_main7(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // return <int 0, 1>
  return Rsh_const(CCP, 18);
}
SEXP Rsh_Fir_user_promise_main8(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fp;
  SEXP Rsh_Fir_reg_fp1_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fp = ld fp
  Rsh_Fir_reg_fp = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // fp1 = force? fp
  Rsh_Fir_reg_fp1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fp);
  // checkMissing(fp1)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_fp1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return fp1
  return Rsh_Fir_reg_fp1_;
}
SEXP Rsh_Fir_user_promise_main9(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_r25_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
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
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r25 = dyn c1(-4.0, 20.0)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r25)
  // L0(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L0_;

L2_:;
  // r23 = dyn base2(<lang `-`(4.0)>, 20.0)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main10(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_fp2_;
  SEXP Rsh_Fir_reg_fp3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // fp2 = ld fp
  Rsh_Fir_reg_fp2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // fp3 = force? fp2
  Rsh_Fir_reg_fp3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fp2_);
  // checkMissing(fp3)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_fp3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return fp3
  return Rsh_Fir_reg_fp3_;
}
SEXP Rsh_Fir_user_promise_main11(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_c2_;
  SEXP Rsh_Fir_reg_r31_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard3 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r30
  return Rsh_Fir_reg_r30_;

L1_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r31 = dyn c2(-7.0, 20.0)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L0(r31)
  // L0(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L0_;

L2_:;
  // r29 = dyn base3(<lang `-`(7.0)>, 20.0)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L0_;
}
SEXP Rsh_Fir_user_function_inner174310025_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner174310025 dynamic dispatch ([f, interval, `...`, lower, upper, maximum, tol])

  return Rsh_Fir_user_version_inner174310025_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner174310025_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner174310025 version 0 (*, *, dots, *, *, *, * -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner174310025/0: expected 7, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_f1;
  SEXP Rsh_Fir_reg_interval;
  SEXP Rsh_Fir_reg_ddd;
  SEXP Rsh_Fir_reg_lower;
  SEXP Rsh_Fir_reg_upper;
  SEXP Rsh_Fir_reg_maximum;
  SEXP Rsh_Fir_reg_tol;
  SEXP Rsh_Fir_reg_lower_isMissing;
  SEXP Rsh_Fir_reg_lower_orDefault;
  SEXP Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_reg_upper_isMissing;
  SEXP Rsh_Fir_reg_upper_orDefault;
  SEXP Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_reg_maximum_isMissing;
  SEXP Rsh_Fir_reg_maximum_orDefault;
  SEXP Rsh_Fir_reg_tol_isMissing;
  SEXP Rsh_Fir_reg_tol_orDefault;
  SEXP Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_reg_maximum1_;
  SEXP Rsh_Fir_reg_maximum2_;
  SEXP Rsh_Fir_reg_c1_1;
  SEXP Rsh_Fir_reg_sym2_1;
  SEXP Rsh_Fir_reg_base2_1;
  SEXP Rsh_Fir_reg_guard2_1;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_1;
  SEXP Rsh_Fir_reg_C_do_fmin;
  SEXP Rsh_Fir_reg_C_do_fmin1_;
  SEXP Rsh_Fir_reg_r13_1;
  SEXP Rsh_Fir_reg_lower1_;
  SEXP Rsh_Fir_reg_lower2_;
  SEXP Rsh_Fir_reg_upper1_;
  SEXP Rsh_Fir_reg_upper2_;
  SEXP Rsh_Fir_reg_tol1_;
  SEXP Rsh_Fir_reg_tol2_;
  SEXP Rsh_Fir_reg__External2_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_sym3_1;
  SEXP Rsh_Fir_reg_base3_1;
  SEXP Rsh_Fir_reg_guard3_1;
  SEXP Rsh_Fir_reg_r15_1;
  SEXP Rsh_Fir_reg_r16_1;
  SEXP Rsh_Fir_reg_val;
  SEXP Rsh_Fir_reg_val1_;
  SEXP Rsh_Fir_reg_f1_1;
  SEXP Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_1;
  SEXP Rsh_Fir_reg_C_do_fmin2_;
  SEXP Rsh_Fir_reg_C_do_fmin3_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_lower3_;
  SEXP Rsh_Fir_reg_lower4_;
  SEXP Rsh_Fir_reg_upper3_;
  SEXP Rsh_Fir_reg_upper4_;
  SEXP Rsh_Fir_reg_tol3_;
  SEXP Rsh_Fir_reg_tol4_;
  SEXP Rsh_Fir_reg__External3_;
  SEXP Rsh_Fir_reg_r23_1;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r24_1;
  SEXP Rsh_Fir_reg_r25_1;
  SEXP Rsh_Fir_reg_val4_;
  SEXP Rsh_Fir_reg_val5_;
  SEXP Rsh_Fir_reg_f2_1;
  SEXP Rsh_Fir_reg_p4_1;
  SEXP Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_reg_r27_1;
  SEXP Rsh_Fir_reg_list1_;
  SEXP Rsh_Fir_reg_r28_;

  // Bind parameters
  Rsh_Fir_reg_f1 = PARAMS[0];
  Rsh_Fir_reg_interval = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];
  Rsh_Fir_reg_lower = PARAMS[3];
  Rsh_Fir_reg_upper = PARAMS[4];
  Rsh_Fir_reg_maximum = PARAMS[5];
  Rsh_Fir_reg_tol = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st f = f
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_f1, RHO);
  (void)(Rsh_Fir_reg_f1);
  // st interval = interval
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_interval, RHO);
  (void)(Rsh_Fir_reg_interval);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // lower_isMissing = missing.0(lower)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_lower;
  Rsh_Fir_reg_lower_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args23);
  // if lower_isMissing then L0() else L1(lower)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_lower_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(lower)
    Rsh_Fir_reg_lower_orDefault = Rsh_Fir_reg_lower;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf min;
  //   base = ldf min in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   interval1 = ld interval;
  //   interval2 = force? interval1;
  //   checkMissing(interval2);
  //   min = ldf min in base;
  //   r2 = dyn min(interval2);
  //   goto L0(r2);
  // L2():
  //   r = dyn base(<sym interval>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner174310025_, 0, NULL, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_lower_orDefault = Rsh_Fir_reg_p1;
  goto L1_;

L1_:;
  // st lower = lower_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_lower_orDefault, RHO);
  (void)(Rsh_Fir_reg_lower_orDefault);
  // upper_isMissing = missing.0(upper)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_upper;
  Rsh_Fir_reg_upper_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args28);
  // if upper_isMissing then L2() else L3(upper)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_upper_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(upper)
    Rsh_Fir_reg_upper_orDefault = Rsh_Fir_reg_upper;
    goto L3_;
  }

L2_:;
  // p1 = prom<V +>{
  //   sym1 = ldf max;
  //   base1 = ldf max in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r5):
  //   return r5;
  // L1():
  //   interval3 = ld interval;
  //   interval4 = force? interval3;
  //   checkMissing(interval4);
  //   max = ldf max in base;
  //   r6 = dyn max(interval4);
  //   goto L0(r6);
  // L2():
  //   r4 = dyn base1(<sym interval>);
  //   goto L0(r4);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner174310025_1, 0, NULL, CCP, RHO);
  // goto L3(p1)
  // L3(p1)
  Rsh_Fir_reg_upper_orDefault = Rsh_Fir_reg_p1_1;
  goto L3_;

L3_:;
  // st upper = upper_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_upper_orDefault, RHO);
  (void)(Rsh_Fir_reg_upper_orDefault);
  // maximum_isMissing = missing.0(maximum)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_maximum;
  Rsh_Fir_reg_maximum_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args33);
  // if maximum_isMissing then L4(FALSE) else L4(maximum)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_maximum_isMissing)) {
  // L4(FALSE)
    Rsh_Fir_reg_maximum_orDefault = Rsh_const(CCP, 32);
    goto L4_;
  } else {
  // L4(maximum)
    Rsh_Fir_reg_maximum_orDefault = Rsh_Fir_reg_maximum;
    goto L4_;
  }

L4_:;
  // st maximum = maximum_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_maximum_orDefault, RHO);
  (void)(Rsh_Fir_reg_maximum_orDefault);
  // tol_isMissing = missing.0(tol)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_tol;
  Rsh_Fir_reg_tol_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args34);
  // if tol_isMissing then L5() else L6(tol)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_tol_isMissing)) {
  // L5()
    goto L5_;
  } else {
  // L6(tol)
    Rsh_Fir_reg_tol_orDefault = Rsh_Fir_reg_tol;
    goto L6_;
  }

L5_:;
  // p2 = prom<V +>{
  //   _Machine = ld `.Machine`;
  //   _Machine1 = force? _Machine;
  //   checkMissing(_Machine1);
  //   c = `is.object`(_Machine1);
  //   if c then L1() else L2(_Machine1);
  // L0(dx1):
  //   r9 = `^`(dx1, 0.25);
  //   return r9;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", _Machine1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(_Machine3):
  //   r8 = `$`(_Machine3, <sym double.eps>);
  //   goto L0(r8);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner174310025_2, 0, NULL, CCP, RHO);
  // goto L6(p2)
  // L6(p2)
  Rsh_Fir_reg_tol_orDefault = Rsh_Fir_reg_p2_1;
  goto L6_;

L6_:;
  // st tol = tol_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_tol_orDefault, RHO);
  (void)(Rsh_Fir_reg_tol_orDefault);
  // maximum1 = ld maximum
  Rsh_Fir_reg_maximum1_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L12() else D0()
  // L12()
  goto L12_;

D0_:;
  // deopt 0 [maximum1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_maximum1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L12_:;
  // maximum2 = force? maximum1
  Rsh_Fir_reg_maximum2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_maximum1_);
  // checkMissing(maximum2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_maximum2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // c1 = `as.logical`(maximum2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_maximum2_;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(324, RHO, 1, Rsh_Fir_array_args43);
  // if c1 then L13() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L13()
    goto L13_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // sym4 = ldf `.External2`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base4 = ldf `.External2` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args44);
  // if guard4 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L13_:;
  // sym2 = ldf `.External2`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base2 = ldf `.External2` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard2 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L8_:;
  // st val = r12
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r12_1, RHO);
  (void)(Rsh_Fir_reg_r12_1);
  // sym3 = ldf list
  Rsh_Fir_reg_sym3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base3 = ldf list in base
  Rsh_Fir_reg_base3_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_sym3_1;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_base3_1;
  Rsh_Fir_reg_guard3_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args46);
  // if guard3 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_1)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L10_:;
  // st val = r21
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r21_1, RHO);
  (void)(Rsh_Fir_reg_r21_1);
  // sym5 = ldf list
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base5 = ldf list in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args47);
  // if guard5 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L14_:;
  // C_do_fmin = ld C_do_fmin
  Rsh_Fir_reg_C_do_fmin = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

L15_:;
  // r11 = dyn base2(<sym C_do_fmin>, <lang function((arg=), `-`(f(arg, ...)), NULL)>, <sym lower>, <sym upper>, <sym tol>)
  SEXP Rsh_Fir_array_args48[5];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args48[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args48[3] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args48[4] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names17[5];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = R_MissingArg;
  Rsh_Fir_array_arg_names17[4] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 5, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L8(r11)
  // L8(r11)
  Rsh_Fir_reg_r12_1 = Rsh_Fir_reg_r11_;
  goto L8_;

L28_:;
  // C_do_fmin2 = ld C_do_fmin
  Rsh_Fir_reg_C_do_fmin2_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // check L30() else D10()
  // L30()
  goto L30_;

L29_:;
  // r20 = dyn base4(<sym C_do_fmin>, <lang function((arg=), f(arg, ...), NULL)>, <sym lower>, <sym upper>, <sym tol>)
  SEXP Rsh_Fir_array_args49[5];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args49[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args49[3] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args49[4] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names18[5];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_array_arg_names18[4] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 5, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L10(r20)
  // L10(r20)
  Rsh_Fir_reg_r21_1 = Rsh_Fir_reg_r20_;
  goto L10_;

D1_:;
  // deopt 4 [C_do_fmin]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_C_do_fmin;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

D10_:;
  // deopt 32 [C_do_fmin2]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_C_do_fmin2_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L9_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r16
  return Rsh_Fir_reg_r16_1;

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r25
  return Rsh_Fir_reg_r25_1;

L16_:;
  // C_do_fmin1 = force? C_do_fmin
  Rsh_Fir_reg_C_do_fmin1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_do_fmin);
  // checkMissing(C_do_fmin1)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_C_do_fmin1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // r13 = clos inner3031791826
  Rsh_Fir_reg_r13_1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3031791826_, RHO, CCP);
  // lower1 = ld lower
  Rsh_Fir_reg_lower1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L17() else D2()
  // L17()
  goto L17_;

L21_:;
  // val = ld val
  Rsh_Fir_reg_val = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L23() else D6()
  // L23()
  goto L23_;

L22_:;
  // r15 = dyn base3[maximum, objective](<sym val>, <lang f(val, ...)>)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_arg_names19[1] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_r15_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_1, 2, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L9(r15)
  // L9(r15)
  Rsh_Fir_reg_r16_1 = Rsh_Fir_reg_r15_1;
  goto L9_;

L30_:;
  // C_do_fmin3 = force? C_do_fmin2
  Rsh_Fir_reg_C_do_fmin3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_do_fmin2_);
  // checkMissing(C_do_fmin3)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_C_do_fmin3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r22 = clos inner3031791826
  Rsh_Fir_reg_r22_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3031791826_, RHO, CCP);
  // lower3 = ld lower
  Rsh_Fir_reg_lower3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L31() else D11()
  // L31()
  goto L31_;

L35_:;
  // val4 = ld val
  Rsh_Fir_reg_val4_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L37() else D15()
  // L37()
  goto L37_;

L36_:;
  // r24 = dyn base5[minimum, objective](<sym val>, <lang f(val, ...)>)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_arg_names20[1] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_r24_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args53, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L11(r24)
  // L11(r24)
  Rsh_Fir_reg_r25_1 = Rsh_Fir_reg_r24_1;
  goto L11_;

D2_:;
  // deopt 8 [lower1]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_lower1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

D6_:;
  // deopt 19 [val]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_val;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

D11_:;
  // deopt 36 [lower3]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_lower3_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

D15_:;
  // deopt 47 [val4]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_val4_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L17_:;
  // lower2 = force? lower1
  Rsh_Fir_reg_lower2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower1_);
  // checkMissing(lower2)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_lower2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // upper1 = ld upper
  Rsh_Fir_reg_upper1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

L23_:;
  // val1 = force? val
  Rsh_Fir_reg_val1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val);
  // checkMissing(val1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_val1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // f1 = ldf f
  Rsh_Fir_reg_f1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L24() else D7()
  // L24()
  goto L24_;

L31_:;
  // lower4 = force? lower3
  Rsh_Fir_reg_lower4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lower3_);
  // checkMissing(lower4)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_lower4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // upper3 = ld upper
  Rsh_Fir_reg_upper3_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L32() else D12()
  // L32()
  goto L32_;

L37_:;
  // val5 = force? val4
  Rsh_Fir_reg_val5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val4_);
  // checkMissing(val5)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_val5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // f2 = ldf f
  Rsh_Fir_reg_f2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L38() else D16()
  // L38()
  goto L38_;

D3_:;
  // deopt 10 [upper1]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_upper1_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

D7_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

D12_:;
  // deopt 38 [upper3]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_upper3_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

D16_:;
  // deopt 51 []
  Rsh_Fir_deopt(51, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // upper2 = force? upper1
  Rsh_Fir_reg_upper2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_upper1_);
  // checkMissing(upper2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_upper2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // tol1 = ld tol
  Rsh_Fir_reg_tol1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L19() else D4()
  // L19()
  goto L19_;

L24_:;
  // p3 = prom<V +>{
  //   val2 = ld val;
  //   val3 = force? val2;
  //   checkMissing(val3);
  //   return val3;
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner174310025_3, 0, NULL, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // r18 = dyn f1[, `...`](p3, ddd1)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_p3_1;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_f1_1, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L25() else D8()
  // L25()
  goto L25_;

L32_:;
  // upper4 = force? upper3
  Rsh_Fir_reg_upper4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_upper3_);
  // checkMissing(upper4)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_upper4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // tol3 = ld tol
  Rsh_Fir_reg_tol3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L33() else D13()
  // L33()
  goto L33_;

L38_:;
  // p4 = prom<V +>{
  //   val6 = ld val;
  //   val7 = force? val6;
  //   checkMissing(val7);
  //   return val7;
  // }
  Rsh_Fir_reg_p4_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner174310025_4, 0, NULL, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // r27 = dyn f2[, `...`](p4, ddd2)
  SEXP Rsh_Fir_array_args63[2];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p4_1;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r27_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_f2_1, 2, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L39() else D17()
  // L39()
  goto L39_;

D4_:;
  // deopt 12 [tol1]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_tol1_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

D8_:;
  // deopt 26 [r18]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

D13_:;
  // deopt 40 [tol3]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_tol3_;
  Rsh_Fir_deopt(40, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

D17_:;
  // deopt 54 [r27]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r27_1;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L19_:;
  // tol2 = force? tol1
  Rsh_Fir_reg_tol2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tol1_);
  // checkMissing(tol2)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_tol2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // _External2 = ldf `.External2` in base
  Rsh_Fir_reg__External2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r14 = dyn _External2(C_do_fmin1, r13, lower2, upper2, tol2)
  SEXP Rsh_Fir_array_args65[5];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_C_do_fmin1_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_r13_1;
  Rsh_Fir_array_args65[2] = Rsh_Fir_reg_lower2_;
  Rsh_Fir_array_args65[3] = Rsh_Fir_reg_upper2_;
  Rsh_Fir_array_args65[4] = Rsh_Fir_reg_tol2_;
  SEXP Rsh_Fir_array_arg_names23[5];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_array_arg_names23[3] = R_MissingArg;
  Rsh_Fir_array_arg_names23[4] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External2_, 5, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L20() else D5()
  // L20()
  goto L20_;

L25_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r19 = dyn list(val1, r18)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_val1_;
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L26() else D9()
  // L26()
  goto L26_;

L33_:;
  // tol4 = force? tol3
  Rsh_Fir_reg_tol4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_tol3_);
  // checkMissing(tol4)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_tol4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // _External3 = ldf `.External2` in base
  Rsh_Fir_reg__External3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r23 = dyn _External3(C_do_fmin3, r22, lower4, upper4, tol4)
  SEXP Rsh_Fir_array_args68[5];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_C_do_fmin3_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_r22_;
  Rsh_Fir_array_args68[2] = Rsh_Fir_reg_lower4_;
  Rsh_Fir_array_args68[3] = Rsh_Fir_reg_upper4_;
  Rsh_Fir_array_args68[4] = Rsh_Fir_reg_tol4_;
  SEXP Rsh_Fir_array_arg_names25[5];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_array_arg_names25[3] = R_MissingArg;
  Rsh_Fir_array_arg_names25[4] = R_MissingArg;
  Rsh_Fir_reg_r23_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg__External3_, 5, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L34() else D14()
  // L34()
  goto L34_;

L39_:;
  // list1 = ldf list in base
  Rsh_Fir_reg_list1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r28 = dyn list1(val5, r27)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_val5_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_r27_1;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list1_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L40() else D18()
  // L40()
  goto L40_;

D5_:;
  // deopt 15 [r14]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

D9_:;
  // deopt 29 [r19]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

D14_:;
  // deopt 43 [r23]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r23_1;
  Rsh_Fir_deopt(43, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

D18_:;
  // deopt 57 [r28]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_deopt(57, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L8(r14)
  // L8(r14)
  Rsh_Fir_reg_r12_1 = Rsh_Fir_reg_r14_;
  goto L8_;

L26_:;
  // goto L9(r19)
  // L9(r19)
  Rsh_Fir_reg_r16_1 = Rsh_Fir_reg_r19_;
  goto L9_;

L34_:;
  // goto L10(r23)
  // L10(r23)
  Rsh_Fir_reg_r21_1 = Rsh_Fir_reg_r23_1;
  goto L10_;

L40_:;
  // goto L11(r28)
  // L11(r28)
  Rsh_Fir_reg_r25_1 = Rsh_Fir_reg_r28_;
  goto L11_;
}
SEXP Rsh_Fir_user_promise_inner174310025_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_interval1_;
  SEXP Rsh_Fir_reg_interval2_;
  SEXP Rsh_Fir_reg_min;
  SEXP Rsh_Fir_reg_r2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner174310025/0: expected 0, got %d", NCAPTURES);

  // sym = ldf min
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // base = ldf min in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
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
  // interval1 = ld interval
  Rsh_Fir_reg_interval1_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // interval2 = force? interval1
  Rsh_Fir_reg_interval2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_interval1_);
  // checkMissing(interval2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_interval2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r2 = dyn min(interval2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_interval2_;
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base(<sym interval>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner174310025_1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_1;
  SEXP Rsh_Fir_reg_base1_1;
  SEXP Rsh_Fir_reg_guard1_1;
  SEXP Rsh_Fir_reg_r4_1;
  SEXP Rsh_Fir_reg_r5_1;
  SEXP Rsh_Fir_reg_interval3_;
  SEXP Rsh_Fir_reg_interval4_;
  SEXP Rsh_Fir_reg_max;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner174310025/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf max
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base1 = ldf max in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r5
  return Rsh_Fir_reg_r5_1;

L1_:;
  // interval3 = ld interval
  Rsh_Fir_reg_interval3_ = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // interval4 = force? interval3
  Rsh_Fir_reg_interval4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_interval3_);
  // checkMissing(interval4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_interval4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r6 = dyn max(interval4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_interval4_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r6_;
  goto L0_;

L2_:;
  // r4 = dyn base1(<sym interval>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner174310025_2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg__Machine;
  SEXP Rsh_Fir_reg__Machine1_;
  SEXP Rsh_Fir_reg_c1;
  SEXP Rsh_Fir_reg__Machine3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_r8_1;
  SEXP Rsh_Fir_reg_r9_1;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner174310025/0: expected 0, got %d", NCAPTURES);

  // _Machine = ld `.Machine`
  Rsh_Fir_reg__Machine = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // _Machine1 = force? _Machine
  Rsh_Fir_reg__Machine1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Machine);
  // checkMissing(_Machine1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg__Machine1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // c = `is.object`(_Machine1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args36);
  // if c then L1() else L2(_Machine1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L1()
    goto L1_;
  } else {
  // L2(_Machine1)
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg__Machine1_;
    goto L2_;
  }

L0_:;
  // r9 = `^`(dx1, 0.25)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r9_1 = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args37);
  // return r9
  return Rsh_Fir_reg_r9_1;

L1_:;
  // dr = tryDispatchBuiltin.1("$", _Machine1)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg__Machine1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg__Machine3_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r8 = `$`(_Machine3, <sym double.eps>)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg__Machine3_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r8_1 = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args40);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r8_1;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner174310025_3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_val2_;
  SEXP Rsh_Fir_reg_val3_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner174310025/0: expected 0, got %d", NCAPTURES);

  // val2 = ld val
  Rsh_Fir_reg_val2_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // val3 = force? val2
  Rsh_Fir_reg_val3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val2_);
  // checkMissing(val3)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_val3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // return val3
  return Rsh_Fir_reg_val3_;
}
SEXP Rsh_Fir_user_promise_inner174310025_4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_val6_;
  SEXP Rsh_Fir_reg_val7_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner174310025/0: expected 0, got %d", NCAPTURES);

  // val6 = ld val
  Rsh_Fir_reg_val6_ = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // val7 = force? val6
  Rsh_Fir_reg_val7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_val6_);
  // checkMissing(val7)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_val7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty()));
  // return val7
  return Rsh_Fir_reg_val7_;
}
SEXP Rsh_Fir_user_function_inner3031791826_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3031791826 dynamic dispatch ([arg])

  return Rsh_Fir_user_version_inner3031791826_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3031791826_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3031791826 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3031791826/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_arg;
  SEXP Rsh_Fir_reg_f2;
  SEXP Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_reg_ddd1;
  SEXP Rsh_Fir_reg_r1_2;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_arg = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st arg = arg
  Rsh_Fir_store(Rsh_const(CCP, 47), Rsh_Fir_reg_arg, RHO);
  (void)(Rsh_Fir_reg_arg);
  // f = ldf f
  Rsh_Fir_reg_f2 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   arg1 = ld arg;
  //   arg2 = force? arg1;
  //   checkMissing(arg2);
  //   return arg2;
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3031791826_, 0, NULL, CCP, RHO);
  // ddd = ld `...`
  Rsh_Fir_reg_ddd1 = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // r1 = dyn f[, `...`](p, ddd)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_p2;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_ddd1;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_r1_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_f2, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 4 [r1]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r1_2;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L1_:;
  // r2 = `-`(<missing>, r1)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_r1_2;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args72);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2_1;
}
SEXP Rsh_Fir_user_promise_inner3031791826_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_arg1_;
  SEXP Rsh_Fir_reg_arg2_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner3031791826/0: expected 0, got %d", NCAPTURES);

  // arg1 = ld arg
  Rsh_Fir_reg_arg1_ = Rsh_Fir_load(Rsh_const(CCP, 47), RHO);
  // arg2 = force? arg1
  Rsh_Fir_reg_arg2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_arg1_);
  // checkMissing(arg2)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_arg2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // return arg2
  return Rsh_Fir_reg_arg2_;
}
SEXP Rsh_Fir_user_function_inner741670229_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner741670229 dynamic dispatch ([x, a])

  return Rsh_Fir_user_version_inner741670229_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner741670229_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner741670229 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner741670229/0: expected 2, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_a;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_a1_;
  SEXP Rsh_Fir_reg_a2_;
  SEXP Rsh_Fir_reg_r2;
  SEXP Rsh_Fir_reg_r1_3;

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_a = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 49), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st a = a
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_a, RHO);
  (void)(Rsh_Fir_reg_a);
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 0 [x1]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L0_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // a1 = ld a
  Rsh_Fir_reg_a1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 1 [x2, a1]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_a1_;
  Rsh_Fir_deopt(1, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L1_:;
  // a2 = force? a1
  Rsh_Fir_reg_a2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a1_);
  // checkMissing(a2)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_a2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // r = `-`(x2, a2)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args75[1] = Rsh_Fir_reg_a2_;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args75);
  // r1 = `^`(r, 2.0)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_r2;
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r1_3 = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args76);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_3;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_x1;
  SEXP Rsh_Fir_reg_x1_1;
  SEXP Rsh_Fir_reg_x2_1;
  SEXP Rsh_Fir_reg_r3;
  SEXP Rsh_Fir_reg_print;
  SEXP Rsh_Fir_reg_p3;
  SEXP Rsh_Fir_reg_r2_2;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_r4_2;

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 49), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 0 [x1]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_x1_1;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L0_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // r = `^`(x2, 2.0)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_x2_1;
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r3 = Rsh_Fir_call_builtin(70, RHO, 2, Rsh_Fir_array_args78);
  // print = ldf print
  Rsh_Fir_reg_print = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 4 [r]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r3;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   return x4;
  // }
  Rsh_Fir_reg_p3 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_, 0, NULL, CCP, RHO);
  // r2 = dyn print(p)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p3;
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r2_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 6 [r, r2]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r3;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r2_2;
  Rsh_Fir_deopt(6, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L2_:;
  // r3 = `-`(r2, 1.0)
  SEXP Rsh_Fir_array_args81[2];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_r2_2;
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(67, RHO, 2, Rsh_Fir_array_args81);
  // r4 = `*`(r, r3)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_r3;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_r4_2 = Rsh_Fir_call_builtin(68, RHO, 2, Rsh_Fir_array_args82);
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r4
  return Rsh_Fir_reg_r4_2;
}
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_x4_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for inner2501545716/0: expected 0, got %d", NCAPTURES);

  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // return x4
  return Rsh_Fir_reg_x4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
