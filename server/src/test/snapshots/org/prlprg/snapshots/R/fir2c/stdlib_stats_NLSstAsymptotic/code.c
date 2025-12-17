#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES);
SEXP Rsh_Fir_user_function_inner2356893153_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2356893153_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_Loblolly;
  SEXP Rsh_Fir_reg_Loblolly1_;
  SEXP Rsh_Fir_reg_c;
  SEXP Rsh_Fir_reg_Loblolly3_;
  SEXP Rsh_Fir_reg_dr;
  SEXP Rsh_Fir_reg_dc;
  SEXP Rsh_Fir_reg_dx;
  SEXP Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_reg_Loblolly4_;
  SEXP Rsh_Fir_reg_Loblolly5_;
  SEXP Rsh_Fir_reg_c1_;
  SEXP Rsh_Fir_reg_Loblolly8_;
  SEXP Rsh_Fir_reg_Loblolly9_;
  SEXP Rsh_Fir_reg_dr2_;
  SEXP Rsh_Fir_reg_dc1_;
  SEXP Rsh_Fir_reg_dx2_;
  SEXP Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg___;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_print;
  SEXP Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_reg_r17_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner2356893153
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2356893153_, RHO, CCP);
  // st NLSstAsymptotic = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // Loblolly = ld Loblolly
  Rsh_Fir_reg_Loblolly = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 3 [Loblolly]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_Loblolly;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // Loblolly1 = force? Loblolly
  Rsh_Fir_reg_Loblolly1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Loblolly);
  // checkMissing(Loblolly1)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_Loblolly1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // c = `is.object`(Loblolly1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_Loblolly1_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args1);
  // if c then L2() else L3(Loblolly1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L2()
    goto L2_;
  } else {
  // L3(Loblolly1)
    Rsh_Fir_reg_Loblolly3_ = Rsh_Fir_reg_Loblolly1_;
    goto L3_;
  }

L0_:;
  // st `Lob.329` = dx1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // print = ldf print
  Rsh_Fir_reg_print = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L10() else D2()
  // L10()
  goto L10_;

L2_:;
  // dr = tryDispatchBuiltin.1("[", Loblolly1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_Loblolly1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args2);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if dc then L4() else L3(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr)
    Rsh_Fir_reg_Loblolly3_ = Rsh_Fir_reg_dr;
    goto L3_;
  }

L3_:;
  // Loblolly4 = ld Loblolly
  Rsh_Fir_reg_Loblolly4_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 5 [Loblolly3, Loblolly4]
  SEXP Rsh_Fir_array_deopt_stack1[2];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_Loblolly3_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_Loblolly4_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

D2_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L4_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L5_:;
  // Loblolly5 = force? Loblolly4
  Rsh_Fir_reg_Loblolly5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Loblolly4_);
  // checkMissing(Loblolly5)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_Loblolly5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(Loblolly5)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_Loblolly5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, RHO, 1, Rsh_Fir_array_args6);
  // if c1 then L7() else L8(Loblolly3, Loblolly5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L7()
    goto L7_;
  } else {
  // L8(Loblolly3, Loblolly5)
    Rsh_Fir_reg_Loblolly8_ = Rsh_Fir_reg_Loblolly3_;
    Rsh_Fir_reg_Loblolly9_ = Rsh_Fir_reg_Loblolly5_;
    goto L8_;
  }

L10_:;
  // p4 = prom<V +>{
  //   NLSstAsymptotic = ldf NLSstAsymptotic;
  //   p3 = prom<V +>{
  //     sortedXyData = ldf sortedXyData;
  //     p = prom<V +>{
  //       sym = ldf expression;
  //       base = ldf expression in base;
  //       guard = `==`.4(sym, base);
  //       if guard then L1() else L2();
  //     L0(r5):
  //       return r5;
  //     L1():
  //       expression = ldf expression in base;
  //       r6 = dyn expression(<sym age>);
  //       goto L0(r6);
  //     L2():
  //       r4 = dyn base(<sym age>);
  //       goto L0(r4);
  //     };
  //     p1 = prom<V +>{
  //       sym1 = ldf expression;
  //       base1 = ldf expression in base;
  //       guard1 = `==`.4(sym1, base1);
  //       if guard1 then L1() else L2();
  //     L0(r9):
  //       return r9;
  //     L1():
  //       expression1 = ldf expression in base;
  //       r10 = dyn expression1(<sym height>);
  //       goto L0(r10);
  //     L2():
  //       r8 = dyn base1(<sym height>);
  //       goto L0(r8);
  //     };
  //     p2 = prom<V +>{
  //       Lob_329 = ld `Lob.329`;
  //       Lob_330 = force? Lob_329;
  //       checkMissing(Lob_330);
  //       return Lob_330;
  //     };
  //     r13 = dyn sortedXyData(p, p1, p2);
  //     return r13;
  //   };
  //   r15 = dyn NLSstAsymptotic(p3);
  //   return r15;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main, 0, NULL, CCP, RHO);
  // r17 = dyn print[, digits](p4, 3.0)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print, 2, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L11() else D3()
  // L11()
  goto L11_;

D3_:;
  // deopt 19 [r17]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L6_:;
  // r2 = `==`(dx3, "329")
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(74, RHO, 2, Rsh_Fir_array_args17);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r3 = dyn __(Loblolly1, r2, <missing>)
  SEXP Rsh_Fir_array_args18[3];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_Loblolly1_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r3_;
  goto L0_;

L7_:;
  // dr2 = tryDispatchBuiltin.1("$", Loblolly5)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_Loblolly5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args19);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc1 then L9() else L8(Loblolly3, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L9()
    goto L9_;
  } else {
  // L8(Loblolly3, dr2)
    Rsh_Fir_reg_Loblolly8_ = Rsh_Fir_reg_Loblolly3_;
    Rsh_Fir_reg_Loblolly9_ = Rsh_Fir_reg_dr2_;
    goto L8_;
  }

L8_:;
  // r1 = `$`(Loblolly9, <sym Seed>)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_Loblolly9_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(17, RHO, 2, Rsh_Fir_array_args21);
  // goto L6(r1)
  // L6(r1)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r1_;
  goto L6_;

L11_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r17
  return Rsh_Fir_reg_r17_;

L9_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L6(dx2)
  // L6(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L6_;
}
SEXP Rsh_Fir_user_promise_main(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_NLSstAsymptotic;
  SEXP Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_reg_r15_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // NLSstAsymptotic = ldf NLSstAsymptotic
  Rsh_Fir_reg_NLSstAsymptotic = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 0), RHO);
  // p3 = prom<V +>{
  //   sortedXyData = ldf sortedXyData;
  //   p = prom<V +>{
  //     sym = ldf expression;
  //     base = ldf expression in base;
  //     guard = `==`.4(sym, base);
  //     if guard then L1() else L2();
  //   L0(r5):
  //     return r5;
  //   L1():
  //     expression = ldf expression in base;
  //     r6 = dyn expression(<sym age>);
  //     goto L0(r6);
  //   L2():
  //     r4 = dyn base(<sym age>);
  //     goto L0(r4);
  //   };
  //   p1 = prom<V +>{
  //     sym1 = ldf expression;
  //     base1 = ldf expression in base;
  //     guard1 = `==`.4(sym1, base1);
  //     if guard1 then L1() else L2();
  //   L0(r9):
  //     return r9;
  //   L1():
  //     expression1 = ldf expression in base;
  //     r10 = dyn expression1(<sym height>);
  //     goto L0(r10);
  //   L2():
  //     r8 = dyn base1(<sym height>);
  //     goto L0(r8);
  //   };
  //   p2 = prom<V +>{
  //     Lob_329 = ld `Lob.329`;
  //     Lob_330 = force? Lob_329;
  //     checkMissing(Lob_330);
  //     return Lob_330;
  //   };
  //   r13 = dyn sortedXyData(p, p1, p2);
  //   return r13;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main1, 0, NULL, CCP, RHO);
  // r15 = dyn NLSstAsymptotic(p3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NLSstAsymptotic, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names5, CCP, RHO);
  // return r15
  return Rsh_Fir_reg_r15_;
}
SEXP Rsh_Fir_user_promise_main1(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sortedXyData;
  SEXP Rsh_Fir_reg_p;
  SEXP Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_reg_r13_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sortedXyData = ldf sortedXyData
  Rsh_Fir_reg_sortedXyData = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // p = prom<V +>{
  //   sym = ldf expression;
  //   base = ldf expression in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r5):
  //   return r5;
  // L1():
  //   expression = ldf expression in base;
  //   r6 = dyn expression(<sym age>);
  //   goto L0(r6);
  // L2():
  //   r4 = dyn base(<sym age>);
  //   goto L0(r4);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main2, 0, NULL, CCP, RHO);
  // p1 = prom<V +>{
  //   sym1 = ldf expression;
  //   base1 = ldf expression in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r9):
  //   return r9;
  // L1():
  //   expression1 = ldf expression in base;
  //   r10 = dyn expression1(<sym height>);
  //   goto L0(r10);
  // L2():
  //   r8 = dyn base1(<sym height>);
  //   goto L0(r8);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main3, 0, NULL, CCP, RHO);
  // p2 = prom<V +>{
  //   Lob_329 = ld `Lob.329`;
  //   Lob_330 = force? Lob_329;
  //   checkMissing(Lob_330);
  //   return Lob_330;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_main4, 0, NULL, CCP, RHO);
  // r13 = dyn sortedXyData(p, p1, p2)
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args14[2] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sortedXyData, 3, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names4, CCP, RHO);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_main2(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_expression;
  SEXP Rsh_Fir_reg_r6_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym = ldf expression
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf expression in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r5
  return Rsh_Fir_reg_r5_;

L1_:;
  // expression = ldf expression in base
  Rsh_Fir_reg_expression = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r6 = dyn expression(<sym age>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expression, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L0_;

L2_:;
  // r4 = dyn base(<sym age>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main3(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_expression1_;
  SEXP Rsh_Fir_reg_r10_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // sym1 = ldf expression
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf expression in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r9
  return Rsh_Fir_reg_r9_;

L1_:;
  // expression1 = ldf expression in base
  Rsh_Fir_reg_expression1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r10 = dyn expression1(<sym height>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_expression1_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L0_;

L2_:;
  // r8 = dyn base1(<sym height>)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_main4(SEXP CCP, SEXP RHO, int NCAPTURES, SEXP const **CAPTURES) {
  // Declare locals
  SEXP Rsh_Fir_reg_Lob_329_;
  SEXP Rsh_Fir_reg_Lob_330_;

  if (NCAPTURES != 0) Rsh_error("FIŘ capture arity mismatch for main/0: expected 0, got %d", NCAPTURES);

  // Lob_329 = ld `Lob.329`
  Rsh_Fir_reg_Lob_329_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // Lob_330 = force? Lob_329
  Rsh_Fir_reg_Lob_330_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Lob_329_);
  // checkMissing(Lob_330)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_Lob_330_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return Lob_330
  return Rsh_Fir_reg_Lob_330_;
}
SEXP Rsh_Fir_user_function_inner2356893153_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2356893153 dynamic dispatch ([xy])

  return Rsh_Fir_user_version_inner2356893153_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2356893153_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2356893153 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2356893153/0: expected 1, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_xy;
  SEXP Rsh_Fir_reg_sym1;
  SEXP Rsh_Fir_reg_base1;
  SEXP Rsh_Fir_reg_guard1;
  SEXP Rsh_Fir_reg_r1;
  SEXP Rsh_Fir_reg_r1_1;
  SEXP Rsh_Fir_reg_UseMethod;
  SEXP Rsh_Fir_reg_r2_1;

  // Bind parameters
  Rsh_Fir_reg_xy = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st xy = xy
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_xy, RHO);
  (void)(Rsh_Fir_reg_xy);
  // sym = ldf UseMethod
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base = ldf UseMethod in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
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
  Rsh_Fir_reg_UseMethod = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // r2 = dyn UseMethod("NLSstAsymptotic")
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_UseMethod, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L2_:;
  // r = dyn base("NLSstAsymptotic")
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
