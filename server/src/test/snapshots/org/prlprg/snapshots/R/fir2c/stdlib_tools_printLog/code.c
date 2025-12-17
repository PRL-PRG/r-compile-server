#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1384943734_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1384943734_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1384943734_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1384943734_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1384943734_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1384943734_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1384943734_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1384943734_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner1384943734
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1384943734_, RHO, CCP);
  // st printLog = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner1384943734_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1384943734 dynamic dispatch ([Log, `...`])

  return Rsh_Fir_user_version_inner1384943734_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1384943734_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1384943734 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1384943734/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_Log;  // Log
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_lapply;  // lapply
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_quotes;  // quotes
  SEXP Rsh_Fir_reg_quotes1_;  // quotes1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_do_call;  // do_call
  SEXP Rsh_Fir_reg_cat;  // cat
  SEXP Rsh_Fir_reg_cat1_;  // cat1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_args;  // args
  SEXP Rsh_Fir_reg_args1_;  // args1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_Log1_;  // Log1
  SEXP Rsh_Fir_reg_Log2_;  // Log2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_Log4_;  // Log4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_do_call1_;  // do_call1
  SEXP Rsh_Fir_reg_cat2_;  // cat2
  SEXP Rsh_Fir_reg_cat3_;  // cat3
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_args2_;  // args2
  SEXP Rsh_Fir_reg_args3_;  // args3
  SEXP Rsh_Fir_reg_Log5_;  // Log5
  SEXP Rsh_Fir_reg_Log6_;  // Log6
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_Log8_;  // Log8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r21_;  // r21

  // Bind parameters
  Rsh_Fir_reg_Log = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st Log = Log
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_Log, RHO);
  (void)(Rsh_Fir_reg_Log);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // r = clos inner2501545716
  Rsh_Fir_reg_r1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st quotes = r
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // lapply = ldf lapply
  Rsh_Fir_reg_lapply = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

L0_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 5);

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L1_:;
  // p = prom<V +>{
  //   sym = ldf list;
  //   base = ldf list in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r2):
  //   return r2;
  // L1():
  //   list = ldf list;
  //   ddd1 = ld `...`;
  //   r3 = dyn list[`...`](ddd1);
  //   goto L0(r3);
  // L2():
  //   r1 = dyn base(<sym ...>);
  //   goto L0(r1);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1384943734_, CCP, RHO);
  // p1 = prom<V +>{
  //   quotes = ld quotes;
  //   quotes1 = force? quotes;
  //   checkMissing(quotes1);
  //   return quotes1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1384943734_1, CCP, RHO);
  // r6 = dyn lapply(p, p1)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_lapply, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L2() else D1()
  // L2()
  goto L2_;

D1_:;
  // deopt 7 [r6]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L2_:;
  // st args = r6
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // do_call = ldf `do.call`
  Rsh_Fir_reg_do_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L3() else D2()
  // L3()
  goto L3_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p2 = prom<V +>{
  //   cat = ld cat;
  //   cat1 = force? cat;
  //   checkMissing(cat1);
  //   return cat1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1384943734_2, CCP, RHO);
  // p3 = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r9):
  //   return r9;
  // L1():
  //   args = ld args;
  //   args1 = force? args;
  //   checkMissing(args1);
  //   c = ldf c in base;
  //   r10 = dyn c(args1, "");
  //   goto L0(r10);
  // L2():
  //   r8 = dyn base1[, sep](<sym args>, "");
  //   goto L0(r8);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1384943734_3, CCP, RHO);
  // r12 = dyn do_call(p2, p3)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_do_call, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L4() else D3()
  // L4()
  goto L4_;

D3_:;
  // deopt 13 [r12]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L4_:;
  // Log1 = ld Log
  Rsh_Fir_reg_Log1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L5() else D4()
  // L5()
  goto L5_;

D4_:;
  // deopt 14 [Log1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_Log1_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L5_:;
  // Log2 = force? Log1
  Rsh_Fir_reg_Log2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Log1_);
  // checkMissing(Log2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_Log2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(Log2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_Log2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c1 then L7() else L8(Log2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L7()
    goto L7_;
  } else {
  // L8(Log2)
    Rsh_Fir_reg_Log4_ = Rsh_Fir_reg_Log2_;
    goto L8_;
  }

L6_:;
  // r14 = `>`(dx1, 0)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c2 then L10() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L10()
    goto L10_;
  } else {
  // L0()
    goto L0_;
  }

L7_:;
  // dr = tryDispatchBuiltin.1("$", Log2)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_Log2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args15);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if dc then L9() else L8(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L9()
    goto L9_;
  } else {
  // L8(dr)
    Rsh_Fir_reg_Log4_ = Rsh_Fir_reg_dr;
    goto L8_;
  }

L8_:;
  // r13 = `$`(Log4, <sym con>)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_Log4_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L6(r13)
  // L6(r13)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r13_;
  goto L6_;

L9_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L6(dx)
  // L6(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L6_;

L10_:;
  // do_call1 = ldf `do.call`
  Rsh_Fir_reg_do_call1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // check L11() else D5()
  // L11()
  goto L11_;

D5_:;
  // deopt 20 []
  Rsh_Fir_deopt(20, 0, NULL, CCP, RHO);
  return R_NilValue;

L11_:;
  // p4 = prom<V +>{
  //   cat2 = ld cat;
  //   cat3 = force? cat2;
  //   checkMissing(cat3);
  //   return cat3;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1384943734_4, CCP, RHO);
  // p5 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r17):
  //   return r17;
  // L1():
  //   args2 = ld args;
  //   args3 = force? args2;
  //   checkMissing(args3);
  //   Log5 = ld Log;
  //   Log6 = force? Log5;
  //   checkMissing(Log6);
  //   c3 = `is.object`(Log6);
  //   if c3 then L4() else L5(Log6);
  // L2():
  //   r16 = dyn base2[, sep, file](<sym args>, "", <lang `$`(Log, con)>);
  //   goto L0(r16);
  // L3(dx3):
  //   c4 = ldf c in base;
  //   r19 = dyn c4(args3, "", dx3);
  //   goto L0(r19);
  // L4():
  //   dr2 = tryDispatchBuiltin.1("$", Log6);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L6() else L5(dr2);
  // L5(Log8):
  //   r18 = `$`(Log8, <sym con>);
  //   goto L3(r18);
  // L6():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L3(dx2);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1384943734_5, CCP, RHO);
  // r21 = dyn do_call1(p4, p5)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_do_call1_, 2, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L12() else D6()
  // L12()
  goto L12_;

D6_:;
  // deopt 23 [r21]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L12_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r21
  return Rsh_Fir_reg_r21_;
}
SEXP Rsh_Fir_user_promise_inner1384943734_(SEXP CCP, SEXP RHO) {
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
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
  // list = ldf list
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // r3 = dyn list[`...`](ddd1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r3_;
  goto L0_;

L2_:;
  // r1 = dyn base(<sym ...>)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_r2_ = Rsh_Fir_reg_r1_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1384943734_1(SEXP CCP, SEXP RHO) {
  // quotes = ld quotes
  Rsh_Fir_reg_quotes = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // quotes1 = force? quotes
  Rsh_Fir_reg_quotes1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quotes);
  // checkMissing(quotes1)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_quotes1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty()));
  // return quotes1
  return Rsh_Fir_reg_quotes1_;
}
SEXP Rsh_Fir_user_promise_inner1384943734_2(SEXP CCP, SEXP RHO) {
  // cat = ld cat
  Rsh_Fir_reg_cat = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // cat1 = force? cat
  Rsh_Fir_reg_cat1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cat);
  // checkMissing(cat1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_cat1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // return cat1
  return Rsh_Fir_reg_cat1_;
}
SEXP Rsh_Fir_user_promise_inner1384943734_3(SEXP CCP, SEXP RHO) {
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
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
  // args = ld args
  Rsh_Fir_reg_args = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // args1 = force? args
  Rsh_Fir_reg_args1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args);
  // checkMissing(args1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_args1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty()));
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r10 = dyn c(args1, "")
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_args1_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L0_;

L2_:;
  // r8 = dyn base1[, sep](<sym args>, "")
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1384943734_4(SEXP CCP, SEXP RHO) {
  // cat2 = ld cat
  Rsh_Fir_reg_cat2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // cat3 = force? cat2
  Rsh_Fir_reg_cat3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_cat2_);
  // checkMissing(cat3)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_cat3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return cat3
  return Rsh_Fir_reg_cat3_;
}
SEXP Rsh_Fir_user_promise_inner1384943734_5(SEXP CCP, SEXP RHO) {
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
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
  // args2 = ld args
  Rsh_Fir_reg_args2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // args3 = force? args2
  Rsh_Fir_reg_args3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args2_);
  // checkMissing(args3)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_args3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // Log5 = ld Log
  Rsh_Fir_reg_Log5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // Log6 = force? Log5
  Rsh_Fir_reg_Log6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Log5_);
  // checkMissing(Log6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_Log6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(Log6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_Log6_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c3 then L4() else L5(Log6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L4()
    goto L4_;
  } else {
  // L5(Log6)
    Rsh_Fir_reg_Log8_ = Rsh_Fir_reg_Log6_;
    goto L5_;
  }

L2_:;
  // r16 = dyn base2[, sep, file](<sym args>, "", <lang `$`(Log, con)>)
  SEXP Rsh_Fir_array_args24[3];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names6[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 3, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r16)
  // L0(r16)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r16_;
  goto L0_;

L3_:;
  // c4 = ldf c in base
  Rsh_Fir_reg_c4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r19 = dyn c4(args3, "", dx3)
  SEXP Rsh_Fir_array_args25[3];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_args3_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args25[2] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c4_, 3, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r17_ = Rsh_Fir_reg_r19_;
  goto L0_;

L4_:;
  // dr2 = tryDispatchBuiltin.1("$", Log6)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_Log6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args26);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if dc1 then L6() else L5(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr2)
    Rsh_Fir_reg_Log8_ = Rsh_Fir_reg_dr2_;
    goto L5_;
  }

L5_:;
  // r18 = `$`(Log8, <sym con>)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_Log8_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L3(r18)
  // L3(r18)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r18_;
  goto L3_;

L6_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L3(dx2)
  // L3(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L3_;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_gsub;  // gsub
  SEXP Rsh_Fir_reg_sQuote;  // sQuote
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_r3_1;  // r3

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // gsub = ldf gsub
  Rsh_Fir_reg_gsub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   sQuote = ldf sQuote;
  //   r = dyn sQuote("\\1");
  //   return r;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_, CCP, RHO);
  // p1 = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_1, CCP, RHO);
  // r3 = dyn gsub("'([^']*)'", p, p1)
  SEXP Rsh_Fir_array_args33[3];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args33[2] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub, 3, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 5 [r3]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_1;
}
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO) {
  // sQuote = ldf sQuote
  Rsh_Fir_reg_sQuote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // r = dyn sQuote("\\1")
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sQuote, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names9, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r2;
}
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
